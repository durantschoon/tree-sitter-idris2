# Stage 08 — Add impossible case branches

## Motivation

Stage 07 added bare constructor patterns and documented that the inspected
Idris 2 parser uses `=>` and `impossible` branch forms rather than a separate
case-guard delimiter. Its report left the representation of `impossible`
branches as the next focused decision. The current grammar accepts only a
pattern followed by `=>` in a complete `case_alternative`, so an idiomatic
impossible branch is not yet represented by a stable case node. See
`docs/syntax-inventory.md` and `docs/stages/stage-07-REPORT.md` for the
measured Stage 07 boundary and evidence.

## Change

Extend the bounded, syntax-only case slice to cover impossible branches:

1. Inspect the current Idris 2 source parser and establish the smallest
   directly evidenced case-branch spelling containing `impossible`. Record
   whether it is a branch body, an alternative terminator, or another
   source-level form before changing the grammar.
2. Parse that bounded `impossible` form inside `case_expression` without
   constructor resolution, exhaustiveness analysis, or unreachable-code
   semantics. Preserve the existing named `scrutinee` and repeated
   `alternative` fields.
3. Use the smallest stable syntax-only tree representation. Reuse
   `case_alternative` when its existing `pattern`/`body` contract remains
   truthful; otherwise add one narrowly scoped named branch node and document
   why a separate node is required. Do not add optional fields to a core node
   without STOP-AND-ASK approval.
4. Add focused complete and incomplete corpus fixtures for an impossible
   branch, its interaction with ordinary alternatives, and a nested or
   function-body case that exercises branch termination and recovery.
5. Update `docs/syntax-inventory.md` with the exact supported source spelling,
   stable node/field behavior, compatibility notes, and the remaining gaps for
   layout-separated alternatives, `with`, guards, and richer patterns.
6. Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c`
   with the repository's pinned Tree-sitter CLI whenever the grammar changes.

## Ground rules

- Keep the grammar syntax-only. Do not resolve constructors, infer types,
  check exhaustiveness, classify branches as unreachable, or attach semantic
  meaning to `impossible`.
- Preserve the public Stage 01–07 node names and fields unless fixture-backed
  source evidence proves that a narrowly scoped compatibility addition is
  necessary; document every intentional change.
- Keep `|` case separators distinct from generic operators and preserve the
  existing expression behavior outside case alternatives.
- Bound support to the directly evidenced `impossible` spelling. Do not infer
  a general absurd-pattern, guard, or dependent-pattern language from one
  example.
- Keep ordinary `=>` alternatives and existing bare/applied constructor,
  literal, hole, and nested case fixtures passing.
- Do not add `with`, `where`, `do`, records, interfaces, implementations,
  layout state, an external scanner, Unicode identifier scanning, literate
  source support, fixity-aware precedence, or constructor/type semantics.
- If the source form is layout-sensitive, requires an external scanner, or
  cannot be represented truthfully without a new core field or ADT case, use
  the Blocked protocol rather than guessing.
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

- `docs/stages/stage-08-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also run `./node_modules/.bin/tree-sitter generate`, inspect the debug trees
for every new fixture, and confirm that complete and incomplete impossible
branches, ordinary alternatives, nested cases, and case bodies do not
introduce an unexpected top-level `ERROR` node. Verify that all prior Stage
01–07 fixtures remain present and passing, and inspect generated node metadata
for every documented field or node.

## Definition of Done

- Focused corpus fixtures cover the source-evidenced impossible branch,
  ordinary/impossible alternatives together, nested or body interaction, and
  incomplete recovery.
- The supported impossible form has a stable, documented syntax-only tree and
  does not misrepresent the existing `case_alternative` contract.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact test commands and results, the applicable
  known-problem remedy, deviations, open questions, and whitelist compliance.

## Commit

Use exactly this single-line commit message:

`Add Idris2 impossible branches`

## Report requirements

Write `docs/stages/stage-08-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- the source evidence used to choose the supported `impossible` spelling;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the current Idris 2 source grammar does not expose a bounded, truthful
`impossible` case-branch form, if supporting it requires layout state or an
external scanner, if a new core field or ADT case would be required without
approval, if the pinned CLI cannot generate the parser, or if compatibility
cannot be preserved, do not guess. Record the concrete source or command
evidence and the smallest decision needed in the report, leave unrelated files
untouched, and return the worktree for coordinator review.

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
