# Stage 01 report — Recover the syntax baseline

## Summary

Established the first recoverable Idris 2 grammar baseline. The grammar now
parses a source module declaration, import, type signature, and function
definition. A focused corpus fixture demonstrates the node names and fields,
and the pinned Tree-sitter CLI generated synchronized parser artifacts.

## Files changed

- `docs/syntax-inventory.md` — records inspected Idris2 lexer/parser sources,
  inherited grammar history, community comparison, initial scope, naming
  conventions, tooling baseline, and known gaps.
- `grammar.js` — adds the four requested declaration forms, qualified module
  names, the minimal type and expression forms needed by the fixture, and
  whitespace handling; retains the inherited literal rules.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated named-node and field metadata.
- `src/parser.c` — regenerated parser from the pinned CLI.
- `corpus/module-import-declarations.txt` — focused corpus fixture covering a
  module, import, type signature, and function definition.
- `docs/stages/stage-01-REPORT.md` — this execution report, required by the
  stage contract.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated parser files.
- First `npm test` attempt — blocked by the macOS cache artifact being
  unwritable to the test runner (`ld: can't write output file:
  /Users/durant/Library/Caches/tree-sitter/lib/idris2.so`). The generated
  cache was moved recoverably to `/private/tmp/tree-sitter-idris2-stage01-cache.so`.
- `npm test` (rerun) — passed; the corpus test `module, import, and
  declarations` passed.
- `./node_modules/.bin/tree-sitter test -d` — passed; debug output showed the
  fixture lexing and reducing to the expected tree with no top-level `ERROR`.
- `git diff --check` — passed; no whitespace errors.

The direct exploratory command `./node_modules/.bin/tree-sitter parse
corpus/module-import-declarations.txt` was not used as a gate because a corpus
file includes test headers and expected output rather than being source text.
It consequently reported errors for those headers; the valid corpus debug
run above confirmed the fixture itself has no unexpected errors.

## Deviations

None. The implementation stays within the requested four-construct fixture,
does not add Graphify-specific semantics, does not require Idris2 or a network
service at test time, and preserves the inherited lexer provenance and ISC
license context.

## Open questions and recommended follow-up

- Decide when to replace the ASCII identifier baseline with the full Idris 2
  Unicode and operator-name rules.
- Add comments, pragmas, holes, richer literals/interpolation, applications,
  dependent binders, and layout-sensitive blocks in focused later stages.
- Evaluate the community grammar's external scanner approach for comments and
  layout before adding those features.
- Establish the supported runtime/binding matrix before upgrading the pinned
  `tree-sitter-cli` 0.20.6 toolchain.

## Contract confirmation

All implementation changes are limited to the prompt allow-list:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`,
`src/node-types.json`, `src/parser.c`, and `corpus/**`. The only additional
file is the required `docs/stages/stage-01-REPORT.md`.
