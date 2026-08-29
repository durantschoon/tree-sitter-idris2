/*
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Lexer/Common.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Lexer/Source.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Rule/Source.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr
 * https://github.com/idris-lang/Idris2/blob/03f23b0/libs/prelude/Prelude/Types.idr
 */

// https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L350-L354=
const asciiControlAbbrevs = [
  "NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT", "LF",
  "VT", "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK",
  "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US", "SP", "DEL"
]

module.exports = grammar({
  name: 'idris2',

  word: $ => $.identifier,

  extras: $ => [
    /\s/,
    $.doc_comment,
    $.line_comment,
    $.block_comment,
  ],

  conflicts: $ => [
    [$.pattern, $.parenthesized_pattern],
    [$.pattern, $.constructor_application_pattern],
    [$.constructor_pattern, $.constructor_application_pattern],
    [$.case_expression, $.infix_expression],
    [$.case_alternative, $.infix_expression],
    [$.impossible_case_alternative, $.infix_expression],
    [$.with_declaration, $._incomplete_with_declaration],
  ],

  rules: {
    module: $ => repeat($.declaration),

    declaration: $ => choice(
      $.data_declaration,
      $.module_declaration,
      $.import_declaration,
      $.type_signature,
      $.with_declaration,
      alias($._incomplete_with_declaration, $.with_declaration),
      $.function_definition
    ),

    data_declaration: $ => seq(
      'data',
      field('name', $.identifier),
      field('parameters', repeat(choice(
        $.explicit_binder,
        $.implicit_binder,
      ))),
      ':',
      field('type', $.type),
      'where',
      field('constructor', $.constructor_declaration),
      repeat(seq(
        '|',
        field('constructor', $.constructor_declaration),
      )),
    ),

    constructor_declaration: $ => prec.right(seq(
      field('name', $.constructor_name),
      ':',
      optional(field('type', $.type)),
    )),

    // Top-level declarations in the initial corpus baseline.
    module_declaration: $ => seq(
      'module',
      field('name', $.module_name)
    ),

    import_declaration: $ => seq(
      'import',
      field('name', $.module_name)
    ),

    type_signature: $ => seq(
      field('name', choice($.identifier, $.operator_name)),
      ':',
      field('type', $.type)
    ),

    // Keep the source-level with form distinct from ordinary function
    // definitions. The original function patterns are carried by this node;
    // each refined clause records its own left-side patterns and post-bar
    // view-result pattern separately.
    with_declaration: $ => seq(
      field('name', choice($.identifier, $.operator_name)),
      repeat(field('parameter', $.pattern)),
      $._with,
      field('view', $.parenthesized_expression),
      $._case_open,
      field('clause', $.with_clause),
      repeat(seq(
        $._case_semicolon,
        field('clause', $.with_clause),
      )),
      optional($._case_semicolon),
      $._case_close,
    ),

    // A missing close is a bounded recovery shape, like the existing braced
    // case recovery. Missing separators between clauses remain errors rather
    // than being inferred from whitespace.
    _incomplete_with_declaration: $ => prec.right(-1, seq(
      field('name', choice($.identifier, $.operator_name)),
      repeat(field('parameter', $.pattern)),
      $._with,
      field('view', $.parenthesized_expression),
      $._case_open,
      field('clause', $.with_clause),
      repeat(seq(
        optional($._case_semicolon),
        field('clause', $.with_clause),
      )),
      optional($._case_semicolon),
      $._case_close,
    )),

    // The left side may repeat the declaration's name and refined parameter
    // patterns, or use `_` to abbreviate the unchanged left side. The pattern
    // after `|` is specifically the intermediate view result.
    with_clause: $ => prec.right(10, seq(
      choice(
        seq(
          field('name', choice($.identifier, $.operator_name)),
          repeat(field('refined_parameter', $.pattern)),
        ),
        field('refined_parameter', $.pattern),
      ),
      $._case_bar,
      field('view_pattern', choice(
        $.constructor_application_pattern,
        $.constructor_pattern,
        $.pattern,
      )),
      $._equals,
      field('body', alias($._with_body_expression, $.expression)),
    )),

    function_definition: $ => seq(
      field('name', choice($.identifier, $.operator_name)),
      repeat(field('parameter', $.pattern)),
      $._equals,
      field('body', $.expression)
    ),

    // Keep declaration assignment distinct from the Stage 04 infix token,
    // including when a pattern application is followed by equals spacing.
    _equals: $ => token.immediate(prec(2, /[ \t]*=/)),

    module_name: $ => seq(
      $.identifier,
      repeat(seq('.', $.identifier))
    ),

    type: $ => prec.right(seq(
      $._type_atom,
      repeat(seq('->', $._type_atom))
    )),

    _type_atom: $ => choice(
      $.explicit_binder,
      $.implicit_binder,
      $.qualified_name,
      $.identifier,
      $.hole,
    ),

    explicit_binder: $ => seq(
      '(',
      field('name', $.identifier),
      repeat(seq(',', field('name', $.identifier))),
      ':',
      optional(field('type', $.type)),
      ')',
    ),

    implicit_binder: $ => seq(
      '{',
      field('name', $.identifier),
      repeat(seq(',', field('name', $.identifier))),
      ':',
      optional(field('type', $.type)),
      '}',
    ),

    expression: $ => choice(
      $.lambda_expression,
      $.case_expression,
      $._incomplete_case_expression,
      $.infix_expression,
      $._expression_term,
    ),

    lambda_expression: $ => prec.right(seq(
      '\\',
      field('parameter', choice(
        $.explicit_binder,
        $.implicit_binder,
        $.identifier,
      )),
      repeat(seq(
        ',',
        field('parameter', choice(
          $.explicit_binder,
          $.implicit_binder,
          $.identifier,
        )),
      )),
      '=>',
      field('body', $.expression),
    )),

    application: $ => prec.left(2, seq(
      field('function', choice($._expression_atom, $.operator_name)),
      repeat1(seq(
        token.immediate(/[ \t]+/),
        field('argument', $._expression_atom),
      )),
    )),

    // Fixity declarations are intentionally out of scope. All supported
    // infix operators therefore share one left-associative precedence, while
    // application binds more tightly and parentheses can group expressions.
    infix_expression: $ => prec.left(1, seq(
      field('left', choice($.infix_expression, $._expression_term)),
      field('operator', $._infix_operator),
      field('right', $._expression_term),
    )),

    _expression_term: $ => choice($.application, $._expression_atom),

    _expression_atom: $ => choice(
      $.parenthesized_expression,
      $.qualified_name,
      $.hole,
      $._text,
      $._number,
      $.identifier,
    ),

    parenthesized_expression: $ => seq('(', $.expression, ')'),

    // Keep both source-evidenced explicit-bar and brace/semicolon forms
    // bounded to separators that Tree-sitter can represent without layout
    // state. Indentation-separated alternatives remain out of scope.
    case_expression: $ => prec(3, prec.right(seq(
      $._case,
      field('scrutinee', $.expression),
      $._case_of,
      choice(
        seq(
          $._case_open,
          field('alternative', choice(
            $.case_alternative,
            $.impossible_case_alternative,
          )),
          repeat(seq(
            $._case_semicolon,
            field('alternative', choice(
              $.case_alternative,
              $.impossible_case_alternative,
            )),
          )),
          optional($._case_semicolon),
          $._case_close,
        ),
        seq(
          field('alternative', choice(
            $.case_alternative,
            $.impossible_case_alternative,
          )),
          repeat(seq(
            $._case_bar,
            field('alternative', choice(
              $.case_alternative,
              $.impossible_case_alternative,
            )),
          )),
          optional($._case_bar),
        ),
      ),
    ))),
    case_alternative: $ => prec.right(10, seq(
      field('pattern', choice(
        $.constructor_application_pattern,
        $.constructor_pattern,
        $.pattern,
      )),
      $._case_arrow,
      field('body', alias($._case_body_expression, $.expression)),
    )),

    // Keep one bounded recovery alternative for an incomplete branch. Cases
    // missing the `of` delimiter are deferred until layout-aware recovery is
    // designed; they must not be accepted as complete case expressions.
    _incomplete_case_expression: $ => prec.right(-1, seq(
      $._case,
      field('scrutinee', $.expression),
      $._case_of,
      choice(
        seq(
          $._case_open,
          field('alternative', choice(
            $._incomplete_case_alternative,
            $._incomplete_impossible_case_alternative,
          )),
          optional(seq(
            optional($._case_semicolon),
            field('alternative', choice(
              $._incomplete_case_alternative,
              $._incomplete_impossible_case_alternative,
            )),
          )),
          optional($._case_semicolon),
          optional($._case_close),
        ),
        seq(
          field('alternative', choice(
            $._incomplete_case_alternative,
            $._incomplete_impossible_case_alternative,
          )),
          optional($._case_bar),
        ),
      ),
    )),

    _incomplete_case_alternative: $ => prec.right(seq(
      field('pattern', choice(
        $.constructor_application_pattern,
        $.constructor_pattern,
        $.pattern,
      )),
      $._case_arrow,
      optional(field('body', alias($._case_body_expression, $.expression))),
    )),

    // Idris 2 permits an impossible case branch as `pattern impossible`.
    // Keep it separate because this source form has no expression body.
    impossible_case_alternative: $ => prec.right(10, seq(
      field('pattern', choice(
        $.constructor_application_pattern,
        $.constructor_pattern,
        $.pattern,
      )),
      $._case_impossible,
    )),

    _incomplete_impossible_case_alternative: $ => prec.right(seq(
      field('pattern', choice(
        $.constructor_application_pattern,
        $.constructor_pattern,
        $.pattern,
      )),
      $._case_impossible,
    )),

    // Case alternatives stop at literal separators. Keep a local expression
    // layer so the general infix rule can continue to support generic
    // operators everywhere outside a case branch.
    _case_body_expression: $ => choice(
      $.lambda_expression,
      $.case_expression,
      $._case_infix_expression,
      $.application,
      $._expression_atom,
    ),

    _case_infix_expression: $ => prec.left(1, seq(
      field('left', choice(
        $._case_infix_expression,
        $.application,
        $._expression_atom,
      )),
      field('operator', $._case_infix_operator),
      field('right', choice($.application, $._expression_atom)),
    )),

    _case_infix_operator: $ => alias(
      token.immediate(prec(1, /[ \t]+[!#$%&*+,\-\/:<=>?@\\^~]+/)),
      $.operator,
    ),

    // `of` is a reserved delimiter here. Consume the preceding same-line
    // spacing with the delimiter so the general application rule cannot steal
    // it as an argument named `of`.
    _case: $ => token(prec(10, 'case')),
    _case_of: $ => token.immediate(prec(10, /[ \t]+of/)),
    _case_open: $ => '{',
    // Consume whitespace here so the application rule cannot mistake
    // same-line spacing for another argument before the closing delimiter.
    _case_close: $ => token.immediate(prec(20, /[ \t]*\}/)),
    _case_semicolon: $ => ';',

    _case_arrow: $ => token.immediate(prec(10, /[ \t]*=>/)),

    _case_impossible: $ => token.immediate(prec(10, /[ \t]+impossible/)),

    _case_bar: $ => token.immediate(prec(20, /[ \t]*\|/)),

    _with: $ => token(prec(10, 'with')),
    // Keep with bodies on the existing expression surface, including nested
    // case expressions, without introducing with blocks as expressions.
    _with_body_expression: $ => choice(
      $.lambda_expression,
      $.case_expression,
      $._incomplete_case_expression,
      $.infix_expression,
      $._expression_term,
    ),

    pattern: $ => choice(
      $.parenthesized_pattern,
      $.hole,
      $._number,
      $._text,
      $.identifier,
    ),

    // A capitalised constructor without arguments is distinct from a bound
    // lower-case pattern variable. Keep this case-only entry point separate
    // so ordinary function-clause parameters retain their existing pattern
    // shape and application compatibility.
    constructor_pattern: $ => $._pattern_constructor,

    parenthesized_pattern: $ => seq(
      '(',
      field('pattern', choice(
        $.constructor_application_pattern,
        $.pattern,
      )),
      ')',
    ),

    constructor_application_pattern: $ => prec.left(1, seq(
      field('constructor', $._pattern_constructor),
      repeat1(seq(
        token.immediate(/[ \t]+/),
        field('argument', choice(
          $.parenthesized_pattern,
          $.hole,
          $._number,
          $._text,
          $.identifier,
        )),
      )),
    )),

    // Constructor patterns are capitalized in Idris source. Keeping this
    // lexical distinction lets f x y remain two pattern parameters while
    // f (S k) remains one constructor-application pattern.
    _pattern_constructor: $ => alias(
      /[A-Z][A-Za-z0-9_']*/,
      $.identifier,
    ),

    qualified_name: $ => seq(
      $.identifier,
      repeat1(seq('.', $.identifier)),
    ),

    constructor_name: $ => seq(choice($.identifier, $.operator_name)),

    operator_name: $ => seq(
      '(',
      field('operator', $.operator),
      ')',
    ),

    // Idris 2 lexes an operator as a run of symbol characters. Keep this
    // bounded to ASCII and give punctuation literals higher lexical priority
    // so existing declaration and type separators remain unchanged.
    operator: $ => token(prec(-1, /[!#$%&*+,\-\/:;<=>?@\\^|~]+/)),

    // Consume same-line spacing with the infix operator so an application
    // separator cannot steal the whitespace before a symbolic operator.
    _infix_operator: $ => alias(
      token.immediate(prec(1, /[ \t]+[!#$%&*+,\-\/:;<=>?@\\^|~]+/)),
      $.operator,
    ),

    hole: $ => choice(
      '_',
      seq('?', field('name', $.identifier)),
    ),

    // Comments are named extras so line, block, and documentation comments
    // remain distinguishable without affecting declaration parsing.
    doc_comment: $ => token(choice(
      seq('|||', /[^\r\n]*/),
      seq(
        '{-|',
        repeat(choice(/[^-]/, seq('-', /[^}]/))),
        '-}',
      ),
    )),

    line_comment: $ => token(seq('--', /[^\r\n]*/)),

    block_comment: $ => token(seq(
      '{-',
      repeat(choice(/[^-]/, seq('-', /[^}]/))),
      '-}',
    )),

    // Identifiers

    // Idris 2 permits apostrophes in names. Unicode identifiers and Unicode
    // operator characters remain outside this bounded slice.
    identifier: $ => /[A-Za-z_][A-Za-z0-9_']*/,

    // Numeric literals

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L359-L397=
    _integerDecimal: $ => /[0-9]+(?:_[0-9]+)*/,
    _integerHexadecimal: $ => /0x[0-9A-Fa-f]+(?:_[0-9A-Fa-f]+)*/,
    _integerOctal: $ => /0o[0-7]+(?:_[0-7]+)*/,
    _integerBinary: $ => /0b[01]+(?:_[01]+)*/,
    integer: $ => choice(
      $._integerDecimal,
      $._integerHexadecimal,
      $._integerOctal,
      $._integerBinary
    ),

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Parser/Lexer/Source.idr#L178-L181=
    double: $ => /[0-9]+\.[0-9]+(?:[eE][-+]?[0-9]+)?/,

    _number: $ => choice($.integer, $.double),

    // Text literals

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L337-L357=
    char: $ => seq(
      "'",
      choice(
        seq(
          '\\',
          choice(
            ...asciiControlAbbrevs,
            /o[0-7]+/,
            /x[0-9A-Fa-f]+/,
            /[0-9]+/,
            /./
          )
        ),
        /[^'\\]/
      ),
      "'"
    ),

    // https://github.com/idris-lang/Idris2/blob/03f23b0/src/Libraries/Text/Lexer.idr#L310-L335=
    // interpolation: $ => seq('\\{', $.expression, '}'),
    // interpolation: $ => seq('\\{', /[^\\}]+/, '}'),
    string: $ => seq(
      '"',
      repeat(choice(
        // $.interpolation,
        seq('\\{', /[^\}]+/, '}'),
        '\\\\',
        /\\./,
        /[^"\n\r]+/
      )),
      '"',
    ),

    _text: $ => choice($.char, $.string),

  }

});
