# Stage 09 — Establish layout-aware case alternatives

## Motivation

Stage 08 added the smallest directly evidenced `pattern impossible` branch
inside the existing explicit-bar case slice. Its report and the syntax
inventory record that the inspected Idris 2 source form may use braces,
semicolons, and layout-sensitive alternatives, but those separators are not
currently represented. This stage measures that next boundary and adds only a
truthful, source-evidenced delimiter/layout slice that is compatible with the
existing `case_expression`, `case_alternative`, and
`impossible_case_alternative` nodes.

Use the existing inventory and Stage 08 report as the local evidence base, and
inspect the current Idris 2 lexer/parser sources before changing the grammar:

- <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Lexer/Source.idr>
- <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Rule/Source.idr>

## Change

1. Establish the exact source spelling and separator behavior for a case block
   using braces, semicolons, or layout. Record which forms are directly
   evidenced and which require scanner state, indentation, or semantic context.
2. Implement the smallest complete syntax-only case-alternative extension
   that the current Tree-sitter grammar can represent truthfully. Preserve
   named `scrutinee` and repeated `alternative` fields and preserve the
   required-field contracts of both ordinary and impossible alternatives.
3. If a bounded brace/semicolon form is possible without an external scanner,
   add it while keeping explicit-bar alternatives and generic infix operators
   compatible. If layout-sensitive behavior cannot be represented without
   scanner/state work or a new core node/field, use the Blocked protocol rather
   than guessing or accepting misleading whitespace semantics.
4. Add focused complete and incomplete corpus fixtures for every newly
   supported separator form, including mixed ordinary/impossible alternatives,
   nested or function-body cases, and recovery at a missing separator or
   terminator. Keep all prior Stage 01–08 fixtures present and passing.
5. Update `docs/syntax-inventory.md` with the exact source evidence, supported
   separator spelling, stable tree shape, compatibility boundary, and remaining
   layout/`with`/guard gaps.
6. Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c`
   with the repository's pinned Tree-sitter CLI whenever `grammar.js` changes.

## Ground rules

- Keep the grammar syntax-only. Do not infer indentation meaning, constructor
  reachability, exhaustiveness, dependent types, or `with` semantics.
- Preserve all Stage 01–08 public node names and fields. A new core field or
  ADT case requires STOP-AND-ASK approval; do not add one speculatively.
- Keep explicit `|` case separators and generic infix operators distinct.
  Ordinary expression and declaration behavior outside case alternatives must
  remain unchanged.
- Do not add `with`, guards, richer dependent patterns, records, interfaces,
  implementations, namespaces, visibility modifiers, Unicode identifier
  scanning, literate source support, fixity-aware precedence, or Graphify
  semantics.
- Do not claim layout support merely because a newline is accepted by `\s`.
  Source evidence must establish whether whitespace, indentation, braces, and
  semicolons are interchangeable in the supported form.
- If the source behavior requires an external scanner, indentation state,
  parser changes outside this allow-list, or an unapproved public-shape
  migration, use the Blocked protocol and leave unrelated files untouched.
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

- `docs/stages/stage-09-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also run `./node_modules/.bin/tree-sitter generate`, inspect the debug trees
for every new fixture, and confirm that complete and incomplete supported case
blocks retain their surrounding declaration/expression trees without an
unexpected top-level `ERROR` node. Verify explicit-bar, brace/semicolon (if
implemented), ordinary/impossible mixed branches, nested cases, function-body
cases, and all prior Stage 01–08 fixtures. Inspect generated node metadata for
every documented field or node.

## Definition of Done

- Source evidence and the exact supported boundary are recorded in the
  inventory and report.
- Focused corpus fixtures cover each newly supported separator form and its
  incomplete recovery boundary, or the report provides concrete blocked
  evidence and no speculative grammar acceptance was added.
- Existing ordinary and impossible case node contracts remain truthful and
  compatible.
- The grammar and generated parser sources are synchronized whenever grammar
  changes are made.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact test commands and results, the applicable
  known-problem remedy, deviations, open questions, and whitelist compliance.

## Commit

Use exactly this single-line commit message:

`Add Idris2 layout-aware case alternatives`

## Report requirements

Write `docs/stages/stage-09-REPORT.md` with:

- a concise implementation or blocked summary;
- the files changed and why;
- the exact Idris 2 source evidence and supported boundary;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the current Idris 2 source grammar does not expose a bounded separator form
that the current grammar can represent truthfully, if layout behavior requires
an external scanner or indentation state, if a new core field or ADT case would
be required without approval, if the pinned CLI cannot generate the parser, or
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
