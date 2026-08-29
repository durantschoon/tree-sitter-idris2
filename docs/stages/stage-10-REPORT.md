# Stage 10 report — Add bounded `with` clauses

## Summary

Implemented the bounded explicit Idris 2 `with` form. The grammar now accepts
one parenthesized view expression followed by one or more semicolon-separated
clauses inside braces. Layout-only clauses, multiple views, nested with blocks,
guards, and richer dependent patterns remain deferred. Incomplete blocks with a
missing closing brace recover as a `with_declaration` with a missing close
token and no unexpected top-level `ERROR` node.

## Files changed

- `grammar.js` — added `with_declaration`, `with_clause`, one-view headers,
  explicit brace/semicolon structure, and bounded missing-close recovery.
- `src/grammar.json`, `src/node-types.json`, `src/parser.c` — regenerated with
  the pinned Tree-sitter CLI.
- `corpus/with-clauses.txt` — complete ordinary, multi-clause/mixed-pattern,
  trailing-semicolon, nested-case view/body, and infix-body fixtures.
- `corpus/incomplete-with-clauses.txt` — missing-closing-brace recovery fixture.
- `docs/syntax-inventory.md` — recorded source evidence, node fields, and the
  exact explicit-delimiter/layout boundary.

## Idris 2 source evidence and supported boundary

The official views tutorial documents the header
`filter p (x :: xs) with (filter p xs)` and a refined clause of the form
`filter p (x :: xs) | ( _ ** xs' ) = ...`. It says the left side may be
abbreviated with `_`, and separately documents multiple views separated by
`|`:

- <https://idris2.readthedocs.io/en/latest/tutorial/views.html>

The current Idris 2 lexer/source evidence recorded in the inventory shows that
`;`, `{`, and `}` are lexical symbols, spaces are removed before parsing, and
brace blocks use `blockEntries AnyIndent`. Its layout termination uses
`column`/`ValidIndent`:

- <https://github.com/Idris-lang/Idris2/blob/main/src/Parser/Lexer/Source.idr>
- <https://github.com/Idris-lang/Idris2/blob/main/src/Parser/Rule/Source.idr>

The supported Tree-sitter boundary is therefore:

```idr
check n with (isZero n) { check n | True = 1; check n | False = 0 }
```

`with_declaration` has required `name` and `view`, repeated original
`parameter` and `clause` fields. `with_clause` has optional `name` and repeated
`refined_parameter` fields to the left of `|`, required `view_pattern` to the
right, and required `body`. Existing `pattern` atoms are reused for original
and refined left-side patterns; constructor pattern variants are available for
the post-bar view result. Existing `function_definition`, case, infix, and
application nodes remain unchanged.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated grammar,
  node metadata, and parser are synchronized.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" -dynamiclib -fPIC -O2 -Isrc src/parser.c -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so` — attempted for the macOS cache remedy; the managed cache write failed with `ld: can't write output file` on the final attempt.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" -dynamiclib -fPIC -O2 -Isrc src/parser.c -o /private/tmp/stage10-home/Library/Caches/tree-sitter/lib/idris2.so` — passed using the writable temporary cache.
- `./node_modules/.bin/tree-sitter test -d -f 'brace with clauses'` with `HOME=/private/tmp/stage10-home` — passed; debug reductions showed `with_declaration` and `with_clause` nodes. The complete fixture had no top-level `ERROR`; the incomplete fixture retained the surrounding declaration and its expected missing close token.
- `HOME=/private/tmp/stage10-home npm test` — passed all 20 corpus fixtures, including all Stage 01–09 fixtures.
- Literal `npm test` — blocked only by the managed global Tree-sitter cache write, with the failure shown above; the documented temporary-cache remedy passed the exact gate.
- `git diff --check` — passed.
- Generated node metadata inspection — passed. `function_definition` still has required `name`/`body` and optional repeated `parameter`; the new fields have the shapes described above; `case_expression` still has required `scrutinee`/`alternative` fields.

## Known problems and remedy

Applicable ID: `kp-macos-treesitter-cache`.

The exact registry remedy was attempted with the repository's
`scripts/clang-x86_64.sh` wrapper and pinned parser flags. The managed global
cache was not reliably writable, so the tested remedy used the same wrapper and
flags with the cache output at
`/private/tmp/stage10-home/Library/Caches/tree-sitter/lib/idris2.so`, followed
by `HOME=/private/tmp/stage10-home npm test`, which passed. No registry entry
was changed.

## Deviations

- With delimiter tokens reuse the existing case delimiter rules internally so
  generated token identity and all prior Stage 01–09 expected trees remain
  stable. The with grammar remains structurally distinct through its
  `with_declaration`/`with_clause` context and fields.
- The source tutorial documents layout-oriented with clauses and multiple
  views, but this stage intentionally implements only the explicitly bounded
  one-view brace/semicolon form required by the contract.

## Open questions and recommended follow-up

- Decide whether a future stage should add an external scanner or equivalent
  indentation state for layout-separated with clauses.
- Define a separate approved contract for multiple views, nested with blocks,
  guards, dependent refinements, and richer pattern applications.
- Decide whether an eventual semantic layer should distinguish ordinary and
  impossible with branches; this syntax-only stage does not interpret
  reachability.

## Whitelist confirmation

Only the allowed implementation/documentation files changed:
`grammar.js`, generated `src/grammar.json`, `src/node-types.json`,
`src/parser.c`, `corpus/with-clauses.txt`,
`corpus/incomplete-with-clauses.txt`, `docs/syntax-inventory.md`, and this
required report. No forecast files, package configuration, bindings, or
unrelated files were modified.
