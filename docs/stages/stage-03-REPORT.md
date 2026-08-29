# Stage 03 report — Add data declarations and binder-list shapes

## Summary

Added a bounded, syntax-only grammar slice for Idris 2 `data` declarations,
constructor alternatives, and comma-separated explicit and implicit binder
names. Constructor names, constructor types, data parameters, and alternatives
have stable named nodes and fields. Corpus fixtures cover parameterized and
unparameterized data declarations, constructor signatures, binder lists, and an
incomplete constructor declaration. The pinned Tree-sitter parser artifacts
were regenerated.

## Files changed

- `grammar.js` — adds data/constructor declarations, constructor names, data
  fields, comma-separated binder names, and the `word` declaration needed for
  stable keyword lexing.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated node and field metadata, including
  repeated `name`, `parameters`, and `constructor` fields.
- `src/parser.c` — regenerated parser source.
- `corpus/data-declarations.txt` — covers unparameterized and parameterized
  declarations and constructor signatures.
- `corpus/binder-lists.txt` — covers explicit and implicit comma-separated
  binder names.
- `corpus/incomplete-data.txt` — covers recovery for a constructor with a
  missing type.
- `docs/syntax-inventory.md` — documents Stage 03 support, stable nodes and
  fields, compatibility, and remaining declaration gaps.
- `docs/stages/stage-03-REPORT.md` — this execution report.

## Commands and results

- `/Users/durant/Repos/ds/tree-sitter-idris2/node_modules/.bin/tree-sitter generate` — passed; generated artifacts are synchronized.
- `/Users/durant/Repos/ds/tree-sitter-idris2/node_modules/.bin/tree-sitter test` — passed; all eight corpus fixtures passed.
- `/Users/durant/Repos/ds/tree-sitter-idris2/node_modules/.bin/tree-sitter test -d` — passed; debug trees for all fixtures, including the three new fixtures, had no unexpected top-level `ERROR` node.
- `/Users/durant/Repos/ds/tree-sitter-idris2/node_modules/.bin/tree-sitter test -d -f 'binder lists'` — passed; explicit and implicit repeated binder names were accepted without an `ERROR` node.
- `/Users/durant/Repos/ds/tree-sitter-idris2/node_modules/.bin/tree-sitter test -d -f 'data declarations'` — passed; both data forms and constructor alternatives were accepted without an `ERROR` node.
- `/Users/durant/Repos/ds/tree-sitter-idris2/node_modules/.bin/tree-sitter test -d -f 'incomplete data declaration'` — passed; recovery accepted the incomplete constructor without an `ERROR` node.
- `npm test` — passed; all eight corpus fixtures passed.
- `git diff --check` — passed; no whitespace errors.

The first direct test attempt reproduced the known macOS Tree-sitter cache
problem. It was remedied with the repository's documented workaround before
the successful test runs:

`CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" -dynamiclib -fPIC -O2 -Isrc src/parser.c -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so`

## Deviations

None from the implementation scope or allowed-files list. The macOS cache
rebuild was an environment remedy and did not modify repository files. The
executor was stopped after it stopped returning status before writing the
report; the coordinator completed the report and independently reran the
generation and test gates in the executor worktree.

Stage 02 singleton binder trees remain compatible. Binder-list fixtures confirm
that additional names are represented as repeated `name` fields on the same
`explicit_binder` or `implicit_binder` node.

## Open questions and recommended follow-up

- Determine whether full Idris 2 layout semantics require an external scanner
  for constructor alternatives; this stage intentionally uses delimiter-based
  `|` parsing.
- Add operator constructor names, records, interfaces, implementations,
  visibility modifiers, and other declaration families in later stages.
- Continue deferring literate source, pragmas, `where`/`do` blocks outside the
  data-declaration delimiter, and richer type/expression syntax.

## Contract confirmation

All implementation changes are within the allowed files:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`,
`src/node-types.json`, `src/parser.c`, and `corpus/**`. The only additional
file is the explicitly permitted `docs/stages/stage-03-REPORT.md`.
