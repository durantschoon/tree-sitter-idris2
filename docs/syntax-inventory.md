# Idris 2 syntax inventory

Status: Stage 01 baseline. This is an inventory for the first recoverable
grammar slice, not a claim of complete Idris 2 coverage.

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

The Stage 01 corpus establishes four top-level constructs:

| Source construct | Stable node | Shape |
| --- | --- | --- |
| `module Foo.Bar` | `module_declaration` | named `module_name` |
| `import Foo.Bar` | `import_declaration` | named `module_name` |
| `name : A -> B` | `type_signature` | named `name` and `type` |
| `name = expression` | `function_definition` | named `name` and `body` |

The source-file root remains `module` for compatibility with the inherited
grammar. `module_name` contains one or more `identifier` nodes separated by
`.`. The initial expression and type atoms are identifiers, numbers, and
strings as needed by the fixture; the function body is deliberately not a
general expression grammar yet.

## Naming convention

Named nodes describe syntactic relationships (`module_declaration`,
`import_declaration`, `type_signature`, `function_definition`, `module_name`,
`type`, and `expression`). Lexical names use `identifier`, `integer`, `double`,
`char`, and `string`. Structural children that exist only to factor the
grammar are hidden with a leading underscore. Declaration names, module names,
types, and bodies use fields so downstream consumers do not depend on child
position.

## Known gaps and follow-up

- Unicode identifiers and the full Idris 2 operator-name rules are not in this
  baseline; current lexer sources show that ASCII-only matching is incomplete.
- Comments, documentation comments, pragmas, holes, raw/multiline strings,
  interpolation, and layout-sensitive `where`/`do` blocks need dedicated
  grammar and corpus work.
- Declaration families such as `data`, records, interfaces, implementations,
  namespaces, parameters, mutual blocks, visibility modifiers, and fixity
  declarations remain unsupported.
- Expressions currently do not cover applications, literals beyond the
  inherited forms, operators, pattern matching, or dependent binders.
- The repository remains on the pinned `tree-sitter-cli` `0.20.6`; generated
  parser sources are synchronized with that CLI. A future tooling stage should
  evaluate an upgrade together with runtime/binding compatibility.
