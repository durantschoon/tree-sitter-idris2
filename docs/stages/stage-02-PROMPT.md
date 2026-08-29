# Stage 02 — Add lexical and expression foundations

## Motivation

Stage 01 established module/import/type-signature/function-definition nodes but
explicitly left comments, applications, holes, and dependent binders outside
the baseline. Those constructs are prerequisites for useful M1 source trees,
and the Stage 01 report identifies them as the next focused grammar work.

## Change

Extend the grammar with a bounded M1 slice:

1. Add line comments, block comments, and documentation-comment handling as
   syntax allows; comments must not create unexpected top-level errors.
2. Add holes and the common literal/identifier expression forms needed to
   represent ordinary function applications.
3. Add application expressions with stable child structure and qualified
   reference names without changing the existing module-name shape.
4. Add dependent function types with explicit and implicit binders, keeping
   the representation syntax-based and tolerant of incomplete input.
5. Add focused corpus fixtures for each supported construct and update the
   syntax inventory with the resulting names and known gaps.
6. Regenerate parser artifacts with the repository's pinned Tree-sitter CLI
   whenever the grammar changes.

## Ground rules

- Keep the grammar general-purpose; do not add Graphify-specific semantics.
- Do not require an installed Idris2 compiler, LSP, or network service at test
  time.
- Preserve the ISC license and inherited copyright notice.
- Preserve Stage 01 node names and fields unless a concrete fixture proves a
  compatibility problem; document any such change.
- Use syntactic nodes for applications and binders. Do not infer types or
  resolve names semantically.
- Do not add `data`, record, interface, implementation, `where`, `do`, layout,
  or literate-source support in this stage.

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

Also inspect the debug trees for the new fixtures and confirm that supported
comments, applications, holes, and dependent binders do not introduce an
unexpected top-level `ERROR` node.

## Definition of Done

- Focused corpus fixtures cover every construct listed in Change.
- Comments are skipped or represented consistently without corrupting
  neighboring declarations.
- Applications, qualified references, holes, and dependent binders have
  documented stable node names and fields.
- Stage 01 node names remain compatible, or any intentional change is
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

`Add Idris2 comments applications and dependent binders`

## Report requirements

Write `docs/stages/stage-02-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- exact commands run and their results;
- any deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the Idris2 source behavior is ambiguous, a required construct needs layout
state or an external scanner beyond this stage, the pinned CLI cannot generate
the parser, or a compatibility change is unavoidable, do not guess. Record the
concrete evidence and smallest decision needed in the report, leave unrelated
files untouched, and return the worktree for coordinator review.
