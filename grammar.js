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

  rules: {
    module: $ => repeat($.declaration),

    declaration: $ => choice(
      $.data_declaration,
      $.module_declaration,
      $.import_declaration,
      $.type_signature,
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
      field('name', $.identifier),
      ':',
      field('type', $.type)
    ),

    function_definition: $ => seq(
      field('name', $.identifier),
      '=',
      field('body', $.expression)
    ),

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

    expression: $ => choice($.application, $._expression_atom),

    application: $ => prec.left(1, seq(
      field('function', $._expression_atom),
      repeat1(seq(
        token.immediate(/[ \t]+/),
        field('argument', $._expression_atom),
      )),
    )),

    _expression_atom: $ => choice(
      $.parenthesized_expression,
      $.qualified_name,
      $.hole,
      $._text,
      $._number,
      $.identifier,
    ),

    parenthesized_expression: $ => seq('(', $.expression, ')'),

    qualified_name: $ => seq(
      $.identifier,
      repeat1(seq('.', $.identifier)),
    ),

    constructor_name: $ => $.identifier,

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

    // Idris 2 permits apostrophes in names. Unicode and operator names remain
    // outside this small baseline and are tracked in docs/syntax-inventory.md.
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
