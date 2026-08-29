# Stage 03 — Add data declarations and binder-list shapes

## Motivation

Stage 02 established comments, applications, holes, and single-name dependent
binders. Its syntax inventory still lists `data`, constructors, and binder
lists as unsupported, while the project plan identifies data declarations as
part of the M1 core `.idr` grammar. These are the next declaration-level
structures needed to make ordinary Idris 2 type definitions useful to editor
and indexing consumers.

## Change

Extend the grammar with a bounded, syntax-only declaration slice:

1. Add `data` declarations with a type name, an optional parameter binder list,
   and one or more `|`-separated constructor declarations.
2. Represent constructor names and constructor result/argument types with
   stable named nodes and fields; preserve the existing `type` and binder
   nodes where their source shape is already compatible.
3. Extend explicit and implicit dependent binders to accept comma-separated
   name lists while preserving the Stage 02 singleton binder tree shape.
4. Add focused corpus fixtures for parameterized and unparameterized data
   declarations, constructor signatures, and explicit/implicit binder lists,
   including one incomplete declaration to exercise editor recovery.
5. Update `docs/syntax-inventory.md` with the supported forms, node names,
   fields, compatibility notes, and remaining declaration gaps.
6. Regenerate parser artifacts with the repository's pinned Tree-sitter CLI
   whenever the grammar changes.

## Ground rules

- Keep the grammar general-purpose; do not add Graphify-specific semantics.
- Do not require an installed Idris2 compiler, LSP, or network service at test
  time.
- Preserve the ISC license and inherited copyright notice.
- Preserve Stage 01–02 node names and fields unless a fixture proves a
  compatibility problem; document any intentional change.
- Keep the representation syntactic. Do not infer constructor result types,
  resolve names, or classify constructors using capitalization heuristics.
- Keep constructor alternatives delimiter-based (`|`) in this stage; do not
  introduce an external scanner or claim full layout semantics.
- Do not add records, interfaces, implementations, `where`, `do`, pattern
  matching, operators/fixity, pragmas, mutual/parameter blocks, or literate
  source support in this stage. Record those as follow-up gaps when relevant.

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

Also inspect the debug trees for every new fixture and confirm that supported
data declarations, constructor alternatives, binder lists, and incomplete
input do not introduce an unexpected top-level `ERROR` node.

## Definition of Done

- Focused corpus fixtures cover parameterized and unparameterized data
  declarations, constructor signatures, explicit and implicit binder lists,
  and incomplete declaration recovery.
- Data declarations, constructors, types, and binder names have documented
  stable node names and fields.
- Stage 01–02 node names remain compatible, or any intentional change is
  documented with fixture evidence.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact test commands and results, deviations, and open
  questions.

## Commit

Use exactly this single-line commit message:

`Add Idris2 data declarations and binder lists`

## Report requirements

Write `docs/stages/stage-03-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- exact commands run and their results;
- any deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the Idris2 source behavior is ambiguous, constructor syntax requires layout
state or an external scanner beyond this stage, the pinned CLI cannot generate
the parser, or a compatibility change is unavoidable, do not guess. Record the
concrete evidence and smallest decision needed in the report, leave unrelated
files untouched, and return the worktree for coordinator review.
