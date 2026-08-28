# Stage 01 — Recover the syntax baseline

## Motivation

The repository's current grammar is an early baseline: `grammar.js` recognizes
only a limited set of identifiers and literals, and the handoff records that
there is no corpus test directory or syntax inventory. The project plan makes
inventory, tooling recovery, and a first module/import/declaration fixture the
entry criteria for the core grammar work.

## Change

Establish the recoverable M0 baseline for Idris 2:

1. Inspect the current Idris2 lexer/parser sources and the inherited grammar's
   referenced history.
2. Compare relevant Idris Tree-sitter grammar work and record reusable
   findings.
3. Record a checked-in syntax inventory with source references, initial scope,
   known gaps, and proposed stable node names.
4. Add the first Tree-sitter corpus fixture covering a module declaration,
   import, type signature, and function definition.
5. Extend the grammar only as needed for that fixture; regenerate parser files
   with the repository's pinned Tree-sitter CLI when the grammar changes.

## Ground rules

- Keep the grammar general-purpose; do not add Graphify-specific semantics.
- Do not require an installed Idris2 compiler, LSP, or network service at test
  time.
- Preserve the ISC license and inherited copyright notice.
- Prefer syntactic relationships and explicit error recovery over speculative
  type-directed resolution.
- Keep the existing package/tooling setup unless a documented M0 finding
  requires a minimal change.
- Do not broaden the fixture beyond the four requested constructs.

## Allowed files

The executor may create or modify only:

- `docs/syntax-inventory.md`
- `grammar.js`
- `src/grammar.json`
- `src/node-types.json`
- `src/parser.c`
- `corpus/**`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also inspect the corpus output to confirm the requested fixture has no
unexpected top-level `ERROR` node.

## Definition of Done

- `docs/syntax-inventory.md` is checked in and identifies the inspected
  sources, scope, node naming convention, and known gaps.
- A focused corpus fixture covers a module, import, type signature, and
  function definition.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed.
- The report records exact test commands and results, deviations, and open
  questions.

## Commit

Use exactly this single-line commit message:

`Establish Idris2 syntax inventory and corpus baseline`

## Report requirements

Write `docs/stages/stage-01-REPORT.md` with:

- a concise summary of the implementation;
- the files changed and why;
- the exact commands run and their results;
- any deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If a required source cannot be inspected, the pinned CLI cannot generate the
parser, or a requested construct cannot be represented without changing the
scope, do not guess. Record the concrete command, error, and smallest decision
needed in the report, leave unrelated files untouched, and return the worktree
for coordinator review.
