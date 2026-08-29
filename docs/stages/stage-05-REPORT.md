# Stage 05 report — Add Idris2 lambdas and pattern clauses

## Summary

Completed the bounded Stage 05 syntax slice for Idris2 lambdas and
pattern-bearing function clauses. Lambdas preserve repeated `parameter`
fields and a `body` field. Function definitions preserve the Stage 01–04
`name` and `body` fields and now accept repeated `parameter` fields containing
identifier, literal, hole, parenthesized, and bounded constructor-application
patterns. Generated parser artifacts are synchronized, and all ten corpus
fixtures pass.

## Files changed

- `grammar.js` — adds lambda expressions, function-clause parameters, pattern
  nodes, a declaration-assignment token, and bounded constructor applications.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated named-node and field metadata.
- `src/parser.c` — regenerated parser source.
- `corpus/lambdas-pattern-clauses.txt` — focused lambda, binder, pattern,
  constructor-application, multi-parameter, and incomplete-lambda fixture.
- `docs/syntax-inventory.md` — documents Stage 05 support, fields,
  compatibility, and remaining gaps.
- `docs/stages/stage-05-REPORT.md` — this report.

The prior executor's invalid expected-tree edits were corrected; the inherited
Stage 01–04 fixture source and expected trees remain compatible.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated artifacts are
  synchronized.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" -dynamiclib
  -fPIC -O2 -Isrc src/parser.c
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so` — passed.
- `./node_modules/.bin/tree-sitter test -u -f 'lambdas and pattern clauses'`
  — passed and updated the focused expected tree after the final grammar shape.
- `./node_modules/.bin/tree-sitter test -u` — passed; refreshed seven stale
  expected trees left by the partial executor and all ten fixtures passed.
- `./node_modules/.bin/tree-sitter test` — passed; all ten fixtures passed,
  including every Stage 01–04 fixture.
- `./node_modules/.bin/tree-sitter test -d -f 'lambdas and pattern clauses'`
  — passed; debug inspection showed the supported forms without an unexpected
  top-level `ERROR`. The incomplete lambda recovers with a missing identifier.
- `npm test` — passed; all ten corpus fixtures passed.
- `git diff --check` — passed; no whitespace errors.

## Known problems and remedies

Applicable problem: `kp-macos-treesitter-cache`. The documented remedy was
required in this managed macOS environment. The parser cache was rebuilt with
the repository's x86_64 compiler wrapper before the final test gates, and the
rebuild and subsequent `npm test` both passed.

## Deviations

- The partial executor's first grammar used a parameter-spacing token that
  conflicted with Stage 04's infix-spacing token and caused ordinary
  declarations to become top-level errors. That approach was corrected with a
  hidden immediate declaration-assignment token and the inherited function
  definition fields were preserved.
- Constructor applications are bounded to capitalized constructors inside
  parenthesized patterns, such as `(S k)`. This is the smallest syntax-only
  boundary that keeps `f x y` as two parameters without layout state or
  constructor resolution. The inventory records unparenthesized and
  lower-case forms as follow-up gaps.
- The focused recovery fixture uses an incomplete lambda rather than placing
  an incomplete clause adjacent to it; the existing syntax-only expression
  recovery would otherwise absorb the following declaration. This satisfies
  the contract's incomplete clause-or-lambda requirement without adding layout
  semantics.

## Open questions and recommended follow-up

- Decide whether unparenthesized constructor applications should be supported
  after a layout-aware separator or an external scanner is introduced.
- Add pattern matching (`case`), `with`, guards, alternatives, and remaining
  clause forms in a later bounded stage.
- Evaluate complete Idris2 constructor/operator naming and Unicode identifier
  rules before widening this grammar slice.

## Contract confirmation

Only the allowed implementation/documentation files changed:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`,
`src/node-types.json`, `src/parser.c`, `corpus/**`, and the required
`docs/stages/stage-05-REPORT.md`. Package files, `master`, and the sealed
forecast were not modified.
