# Stage 05 — Add lambdas and pattern-bearing function clauses

## Motivation

The Stage 04 syntax inventory still records pattern matching and lambdas as
unsupported, and the Stage 04 report lists them as the next expression work.
The current grammar accepts only `name = expression` function definitions, so
ordinary Idris 2 clauses such as `isZero Z = True` and anonymous functions
cannot be represented without an error. This stage supplies the next bounded
M1 expression slice while leaving layout-sensitive blocks for a later
contract.

## Change

Extend the grammar with a bounded, syntax-only pattern and lambda slice:

1. Add lambda expressions using Idris 2's `\parameter => expression` form,
   with one or more simple parameters and stable repeated `parameter` and
   `body` fields. Accept the existing explicit/implicit binder shapes as
   lambda parameters when the source form supports them.
2. Extend function definitions to accept zero or more pattern parameters
   before `=`, preserving the Stage 01–04 `function_definition` node and its
   `name` and `body` fields. Represent identifier, literal, hole, parenthesized,
   and constructor-application patterns with stable named nodes and fields.
3. Keep function clauses as ordinary top-level declarations for this stage;
   do not introduce layout state or attempt to group clauses semantically.
4. Add focused corpus fixtures for simple and multi-parameter lambdas,
   identifier/literal/hole patterns, constructor-application patterns,
   parenthesized patterns, and an incomplete clause or lambda for editor
   recovery.
5. Update `docs/syntax-inventory.md` with the supported forms, stable node
   names and fields, compatibility notes, and remaining pattern/layout gaps.
6. Regenerate parser artifacts with the repository's pinned Tree-sitter CLI
   whenever the grammar changes.

## Ground rules

- Keep the grammar general-purpose; do not add Graphify-specific semantics.
- Do not require an installed Idris2 compiler, LSP, or network service at test
  time.
- Preserve the ISC license and inherited copyright notice.
- Preserve Stage 01–04 node names and fields unless a fixture proves a
  compatibility problem; document any intentional change.
- Keep the representation syntactic. Do not infer constructor identities,
  resolve pattern bindings, or determine exhaustiveness or types.
- Use the existing identifier, literal, hole, qualified-name, application, and
  infix shapes where their source role is compatible; do not duplicate them
  without fixture evidence.
- Do not add `case`, `with`, `where`, `do`, records, interfaces,
  implementations, fixity declarations, layout semantics, Unicode identifier
  scanning, or literate-source support in this stage. Record them as follow-up
  gaps.
- If Idris 2's actual lambda or clause syntax requires layout state, an
  external scanner, or a compatibility-breaking node migration beyond this
  bounded slice, use the Blocked protocol rather than guessing.

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

- `docs/stages/stage-05-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also inspect the debug trees for every new fixture and confirm that supported
lambda forms, pattern parameters, constructor applications, and incomplete
input do not introduce an unexpected top-level `ERROR` node. Verify that all
prior Stage 01–04 fixtures remain present and passing.

## Definition of Done

- Focused corpus fixtures cover simple and multi-parameter lambdas, the
  supported pattern forms, constructor-application patterns, and incomplete
  recovery.
- Lambda, pattern, and extended function-definition nodes have documented
  stable names and fields.
- Stage 01–04 node names remain compatible, or any intentional change is
  documented with fixture evidence.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact test commands and results, the applicable
  known-problem remedy, deviations, and open questions.

## Commit

Use exactly this single-line commit message:

`Add Idris2 lambdas and pattern clauses`

## Report requirements

Write `docs/stages/stage-05-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- any deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the Idris2 source behavior is ambiguous, lambda or pattern syntax requires
an external scanner or layout state beyond this bounded slice, the pinned CLI
cannot generate the parser, or a compatibility change is unavoidable, do not
guess. Record the concrete source or command evidence and smallest decision
needed in the report, leave unrelated files untouched, and return the
worktree for coordinator review.

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
