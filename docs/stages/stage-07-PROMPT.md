# Stage 07 — Expand case patterns and guards

## Motivation

Stage 06 established delimiter-based `case ... of` expressions with named
`scrutinee`, repeated `alternative`, and per-alternative `pattern` and `body`
fields. Its report deliberately left bare constructors, unparenthesized
constructor applications, guards, and richer pattern alternatives as the next
matching backlog. The current inventory also records those forms as gaps. This
stage expands the syntax-only case-pattern slice without taking on Idris 2
layout semantics.

## Change

Extend the bounded case grammar and corpus with a small, explicit pattern
matching slice:

1. Support bare constructor patterns such as `Nothing` in case alternatives,
   preserving a stable syntactic constructor node or a documented reuse of an
   existing node.
2. Support unparenthesized constructor-application patterns such as `Just x`
   where they occur as a case alternative pattern, while keeping ordinary
   application expressions and function-clause parameters compatible.
3. Add one clearly bounded guard form to case alternatives, using the Idris 2
   guard delimiter supported by the inspected source grammar, with a named
   field for the guard condition if the syntax has a stable tree shape.
4. Add focused complete and incomplete corpus fixtures for the supported
   patterns and guard form, including nested or body-expression interactions
   where they expose precedence or recovery behavior.
5. Update `docs/syntax-inventory.md` to document the new stable nodes/fields,
   compatibility behavior, and remaining pattern/layout gaps.
6. Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c`
   with the repository's pinned Tree-sitter CLI whenever the grammar changes.

## Ground rules

- Keep the grammar syntax-only. Do not resolve constructors, infer types,
  check exhaustiveness, or classify guards semantically.
- Preserve the public Stage 01–06 node names and fields unless a fixture proves
  that a narrowly scoped compatibility addition is necessary; document every
  intentional change.
- Keep `|` case separators distinct from generic operators and preserve the
  existing expression behavior outside case alternatives.
- Bound constructor patterns to source forms that can be represented without
  layout state. Do not invent a general pattern language from one example.
- If the inspected Idris 2 syntax requires a different guard delimiter or
  layout-sensitive alternative handling, record the evidence and use the
  Blocked protocol for that portion rather than guessing.
- Do not add `with`, `where`, `do`, records, interfaces, implementations,
  layout state, an external scanner, Unicode identifier scanning, literate
  source support, fixity-aware precedence, or constructor/type semantics.
- Do not modify package configuration, test harnesses, bindings, or unrelated
  documentation.

## Allowed files

The executor may create or modify only these implementation and documentation
files:

- `docs/syntax-inventory.md`
- `grammar.js`
- `src/grammar.json`
- `src/node-types.json`
- `src/parser.c`
- `corpus/**`

The executor may also create the required report:

- `docs/stages/stage-07-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also run `./node_modules/.bin/tree-sitter generate`, inspect the debug trees
for every new fixture, and confirm that supported bare and applied constructor
patterns, the bounded guard form, nested case bodies, and incomplete input do
not introduce an unexpected top-level `ERROR` node. Verify that all prior
Stage 01–06 fixtures remain present and passing, and inspect generated node
metadata for every documented field.

## Definition of Done

- Focused corpus fixtures cover the supported bare constructor, applied
  constructor, guard, nested/body, and incomplete-recovery forms.
- The resulting pattern and guard nodes/fields are stable, documented, and
  syntactic; existing Stage 01–06 names and fields remain compatible or the
  report explains the fixture-backed change.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact test commands and results, the applicable
  known-problem remedy, deviations, open questions, and whitelist compliance.

## Commit

Use exactly this single-line commit message:

`Add Idris2 case patterns`

## Report requirements

Write `docs/stages/stage-07-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the current Idris 2 source grammar does not support a bounded delimiter
form for the requested guard or constructor pattern, if layout state or an
external scanner is required, if the pinned CLI cannot generate the parser, or
if compatibility cannot be preserved, do not guess. Record the concrete source
or command evidence and the smallest decision needed in the report, leave
unrelated files untouched, and return the worktree for coordinator review.

## Known problems and remedies

- `kp-macos-treesitter-cache` — on macOS/Rosetta, before `npm test`, rebuild
  the cached parser from the repository or executor worktree with:

  ```sh
  CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" \
    -dynamiclib -fPIC -O2 -Isrc src/parser.c \
    -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so
  ```

  Then run the exact gate `npm test` and record the result. If the cache path
  is not writable, request targeted permission and record that fact.
