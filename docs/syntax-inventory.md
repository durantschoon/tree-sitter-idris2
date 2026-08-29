# Idris 2 syntax inventory

Status: Stage 05 baseline. This is an inventory for the recoverable grammar
slice, not a claim of complete Idris 2 coverage.

## Inspected sources

### Idris 2 lexer and parser

- `Parser.Lexer.Common`: identifier start/trailing-character rules, line and
  block comments, and qualified-name lexing. Inspected at the current
  `main` branch: <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Lexer/Common.idr>.
- `Parser.Lexer.Source`: token categories, reserved keywords, numeric/string
  literal forms, and namespaced identifiers. Inspected at the current
  `main` branch: <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Lexer/Source.idr>.
- `Parser.Rule.Source`: the source-level parser entry point and declaration
  families. Inspected at the current `main` branch:
  <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Rule/Source.idr>.
- The inherited grammar cites the 2022 parser snapshot at commit `03f23b0`,
  including `Libraries.Text.Lexer` and `Prelude.Types`; those references are
  retained in `grammar.js` as historical lexer provenance.

### Inherited and community grammar work

- The inherited `gwerbin/tree-sitter-idris2` history was inspected locally.
  Its relevant commits are `13f1824` (initial literal grammar), `042c7e5`
  (literal/interpolation experiments), and `a307cea` (ASCII identifier
  experiment). It provides useful literal provenance but no declaration
  grammar or corpus.
- `kayhide/tree-sitter-idris` was compared as the closest maintained Idris 2
  grammar: <https://github.com/kayhide/tree-sitter-idris>. Reusable findings
  are separate nodes for module/import/declaration families, qualified names,
  and an explicit scanner for comments and layout. Its external scanner and
  broad grammar are intentionally deferred from this baseline.

## Initial scope

The corpus establishes the following supported constructs:

| Source construct | Stable node | Shape |
| --- | --- | --- |
| `module Foo.Bar` | `module_declaration` | named `module_name` |
| `import Foo.Bar` | `import_declaration` | named `module_name` |
| `name : A -> B` | `type_signature` | named `name` and `type` |
| `name = expression` | `function_definition` | named `name` and `body` |
| `\x => expression` | `lambda_expression` | named `parameter` and `body` |
| `\x, y => expression` | `lambda_expression` | repeated `parameter` fields and one `body` |
| `\(x : Type) => expression` | `lambda_expression` | explicit binder parameter reused from type syntax |
| `\{a : Type} => expression` | `lambda_expression` | implicit binder parameter reused from type syntax |
| `f x = expression` | `function_definition` | repeated `parameter` fields and existing `name`/`body` fields |
| `f 0 = expression` | `function_definition` | literal wrapped in a `pattern` node |
| `f _ = expression` | `function_definition` | hole wrapped in a `pattern` node |
| `f (x) = expression` | `function_definition` | `parenthesized_pattern` with a nested `pattern` |
| `f (S k) = expression` | `function_definition` | `constructor_application_pattern` with `constructor` and repeated `argument` fields |
| `data Bool : Type where ...` | `data_declaration` | named `name`, repeated `constructor`, and `type` |
| `data Maybe (a : Type) : Type where ...` | `data_declaration` | repeated `parameters` preserve explicit/implicit binder nodes |
| `False : Bool` in a data declaration | `constructor_declaration` | named `name` (`constructor_name`) and optional `type` |
| `f x 42` | `application` | named `function` and repeated `argument` |
| `Data.String.toUpper` | `qualified_name` | ordered `identifier` segments |
| `_`, `?hole` | `hole` | optional named `name` for named holes |
| `(a : Type) -> a` | `explicit_binder` | named `name` and `type` |
| `(a, b : Type) -> a` | `explicit_binder` | repeated `name` fields, shared `type` |
| `{a : Type} -> a` | `implicit_binder` | named `name` and `type` |
| `{a, b : Type} -> a` | `implicit_binder` | repeated `name` fields, shared `type` |
| `--`, `{- -}`, `|||`, `{-| -}` | comment extras | named `line_comment`, `block_comment`, or `doc_comment` |
| `(+) : Int -> Int -> Int` | `operator_name` | parenthesized symbolic name with `operator` child |
| `(::) : Nat -> Nat -> Nat` | `constructor_name` | constructor wrapper preserves the operator name |
| `a + b` | `infix_expression` | named `left`, `operator`, and `right` fields |
| `Data.Num.one + Math.two` | `infix_expression` | qualified operands retain `qualified_name` nodes |
| `(a + b) * c` | nested `infix_expression` | generic operators are left-associative; parentheses group explicitly |

The source-file root remains `module` for compatibility with the inherited
grammar. `module_name` contains one or more `identifier` nodes separated by
`.` and is intentionally separate from expression `qualified_name`. The
expression grammar now recognizes applications whose arguments are separated
by horizontal whitespace, so a newline still separates neighboring
declarations without adding Idris layout semantics. Application atoms include
identifiers, qualified names, holes, numbers, chars, strings, and parenthesized
expressions. Types retain the Stage 01 `type` node and now accept explicit and
implicit dependent binders as type atoms. Stage 04 adds an `operator` node for
ASCII symbolic runs and an `operator_name` node for parenthesized declaration
or expression names. Infix expressions use an `infix_expression` node with
`left`, `operator`, and `right` fields; the current syntax-only policy treats
all operators as one left-associative precedence, with application binding
tighter and parentheses providing explicit grouping. A hidden lexical rule
consumes same-line spacing before an infix operator so it cannot be mistaken
for an application argument separator; the public field remains the stable
`operator` node. Stage 05 adds `lambda_expression` with repeated `parameter`
fields and one `body` field. Lambda parameters may be identifiers or the
existing explicit/implicit binder nodes. Function definitions retain their
Stage 01–04 `name` and `body` fields and now have optional repeated
`parameter` fields, each containing a `pattern`. Patterns cover identifiers,
literals, holes, and parenthesized patterns. Parenthesized patterns can
contain a capitalized constructor application, whose stable
`constructor_application_pattern` node has a `constructor` field and repeated
`argument` fields. This capitalized, parenthesized boundary is a deliberate
syntax-only compatibility slice: it keeps `f x y` as two parameters and avoids
introducing layout state or constructor resolution.

## Naming convention

Named nodes describe syntactic relationships (`module_declaration`,
`import_declaration`, `type_signature`, `function_definition`, `module_name`,
`type`, `expression`, `application`, `qualified_name`, `hole`,
`explicit_binder`, `implicit_binder`, `data_declaration`,
`constructor_declaration`, `constructor_name`, `operator_name`,
`infix_expression`, `lambda_expression`, `pattern`, `parenthesized_pattern`,
and `constructor_application_pattern`. Lexical names use `identifier`,
`integer`, `double`, `char`, and `string`; comments use named extras. Structural
children that exist only to factor the grammar are hidden with a leading
underscore. Declaration names, module names, data names, constructor names,
types, bodies, application functions/arguments, data parameters, constructor
alternatives, and binder names/types use fields so downstream consumers do not
depend on child position. The repeated `argument`, `parameters`, and
`constructor` fields preserve source order. A singleton binder retains the Stage
02 tree shape; additional comma-separated names add repeated `name` fields to
that same binder node and share its one type field. Constructors are represented
syntactically; their result types are not inferred from the enclosing data
declaration.

## Known gaps and follow-up

- Unicode identifiers and the full Idris 2 operator-name rules are not in this
  baseline; current lexer sources show that ASCII-only matching is incomplete.
- Pragmas, raw/multiline strings, interpolation, and layout-sensitive
  `where`/`do` blocks need dedicated grammar and corpus work. Comments are
  recognized as named extras, but nested block-comment semantics remain a
  follow-up.
- Records, interfaces, implementations, namespaces, parameters, mutual blocks,
  visibility modifiers, and fixity declarations remain unsupported. Data
  declarations are supported only in the delimiter-based `where` form covered
  by the Stage 03 corpus; full layout semantics remain a gap. Operator names
  are currently limited to ASCII symbolic runs and parenthesized forms.
- Expressions still do not cover pattern matching, `case`, `with`, or
  fixity-dependent precedence. Stage 05 supports lambdas and named function
  patterns only in the bounded forms above; unparenthesized constructor
  applications, lower-case constructor spellings, pattern alternatives, and
  pattern guards remain gaps. Infix operators use one generic left-associative
  precedence in this stage. Binder lists support
  comma-separated identifiers with one shared optional type; more elaborate
  binder forms remain unsupported.
- The repository remains on the pinned `tree-sitter-cli` `0.20.6`; generated
  parser sources are synchronized with that CLI. A future tooling stage should
  evaluate an upgrade together with runtime/binding compatibility.
