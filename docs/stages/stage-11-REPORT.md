# Stage 11 report — Add layout-separated one-view `with` clauses

## Summary

Implemented scanner-backed layout support for one-view `with` declarations.
The external scanner (`src/scanner.c`) establishes the layout indentation on the
first refined clause after the `with` header, enforces matching indentation on
subsequent clauses, and terminates the layout block when indentation returns to
a shallower column or EOF is reached. The public tree keeps identical
`with_declaration` and `with_clause` node shapes and field contracts. The
explicit Stage 10 brace/semicolon form remains supported unchanged. Incomplete
layout clauses recover gracefully without unexpected top-level `ERROR` nodes.

## Files changed

- `grammar.js` — added external layout tokens (`_with_layout_start`,
  `_with_layout_separator`, `_with_layout_end`, `_newline`), updated
  `with_declaration` to accept layout-separated clauses alongside explicit
  braced clauses, and added `_incomplete_with_clause` recovery.
- `src/scanner.c` — implemented external scanner for layout tracking and newline
  handling.
- `scripts/test.js` — updated test harness to compile and link `src/scanner.c`
  into the dynamic library when present (authorized prompt amendment).
- `src/grammar.json`, `src/node-types.json`, `src/parser.c` — regenerated with
  the pinned Tree-sitter CLI.
- `corpus/with-layout-clauses.txt` — added complete layout-separated with
  fixtures, multiple clauses, nested case expressions, infix bodies, and
  termination before following top-level declarations.
- `corpus/incomplete-with-layout-clauses.txt` — added incomplete layout clause
  recovery fixture.
- `docs/syntax-inventory.md` — recorded Stage 11 source evidence, node fields,
  and layout boundary.
- `docs/stages/stage-11-REPORT.md` — this report.

## Idris 2 source evidence and supported boundary

The official views tutorial documents indented refined clauses following the
with header:

- <https://idris2.readthedocs.io/en/latest/tutorial/views.html>

Upstream Idris 2 lexer and parser rules use `column` and `ValidIndent` for
indentation blocks:

- <https://github.com/Idris-lang/Idris2/blob/main/src/Parser/Lexer/Source.idr>
- <https://github.com/Idris-lang/Idris2/blob/main/src/Parser/Rule/Source.idr>

The supported Tree-sitter layout boundary is:

```idr
check n with (isZero n)
  check n | True = 1
  check n | False = 0

nextDecl : Nat
nextDecl = 42
```

`with_declaration` retains required `name` and `view`, repeated original
`parameter` and `clause` fields. `with_clause` retains optional repeated
`name`/`refined_parameter` fields, required `view_pattern`, and required `body`.
The explicit brace/semicolon form remains supported unchanged.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated grammar, node
  metadata, and parser are synchronized.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" -dynamiclib -fPIC -O2 -Isrc src/parser.c src/scanner.c -o /private/tmp/stage11-home/Library/Caches/tree-sitter/lib/idris2.so` — passed using the writable temporary cache.
- `HOME=/private/tmp/stage11-home ./node_modules/.bin/tree-sitter test -d -f 'layout with clauses'` — passed; debug reductions showed `with_declaration` with repeated `clause` children and separate following top-level declarations without unexpected top-level `ERROR`.
- `HOME=/private/tmp/stage11-home ./node_modules/.bin/tree-sitter test -d -f 'incomplete layout with clauses'` — passed; debug reductions showed graceful recovery within `with_declaration`.
- `HOME=/private/tmp/stage11-home npm test` — passed all 22 corpus fixtures, including all Stage 01–10 fixtures.
- `git diff --check` — passed.

## Known problems and remedy

Applicable ID: `kp-macos-treesitter-cache`.

The managed global cache was not reliably writable under macOS Rosetta execution.
The remedy used `HOME=/private/tmp/stage11-home` for test execution, compiling
both `src/parser.c` and `src/scanner.c` via the updated `scripts/test.js` harness.
All gates passed under this tested remedy.

## Deviations

- `scripts/test.js` was amended to include `src/scanner.c` in the compiler
  arguments to support external scanner compilation under macOS test execution.
  This contract expansion was authorized by prompt amendment on 2026-08-30.
- Layout handling is bounded strictly to one-view `with` declarations as required
  by the contract; general layout across other declaration forms remains deferred.

## Open questions and recommended follow-up

- Define a separate approved contract for multiple views, nested with blocks,
  guards, and richer pattern forms.
- Consider whether a generalized layout engine should be designed for `case`,
  `where`, `do`, and `data` declarations in later milestone stages.

## Whitelist confirmation

Only the allowed files changed:
`docs/syntax-inventory.md`, `grammar.js`, `scripts/test.js`,
`src/grammar.json`, `src/node-types.json`, `src/parser.c`, `src/scanner.c`,
`corpus/with-layout-clauses.txt`, `corpus/incomplete-with-layout-clauses.txt`,
and `docs/stages/stage-11-REPORT.md`. No forecast files, package metadata,
bindings, or unrelated files were modified.
