# Stage 04 — Add operator names and infix expressions

## Motivation

Stage 03’s syntax inventory records that the grammar still accepts no
operators, pattern matching, lambdas, or general infix/application
precedence. The project plan places operator names and expressions in the M1
core `.idr` grammar, and the Stage 03 report identifies operator constructor
names as the next declaration-level gap. Ordinary Idris 2 source therefore
still cannot represent a common function body such as an arithmetic or
user-defined infix expression without parse errors.

## Change

Extend the grammar with a bounded, syntax-only operator slice:

1. Add Idris 2 operator-name tokens for declaration and constructor names,
   including parenthesized operator names where the source syntax permits
   them; preserve ordinary identifier and qualified-name behavior.
2. Add operator expressions with explicit left/right operand structure and
   stable fields, covering infix use in function bodies and nested
   parenthesized expressions.
3. Add the minimum prefix/operator form required by the inspected Idris 2
   lexer and parser sources, if it is needed to distinguish valid operator
   names from infix use; do not infer semantic types or resolve overloaded
   operators.
4. Add focused corpus fixtures for operator-named declarations or
   constructors, simple and nested infix expressions, qualified operands,
   and incomplete operator input for editor recovery.
5. Update `docs/syntax-inventory.md` with the supported operator token forms,
   node names, fields, precedence/associativity policy, compatibility notes,
   and remaining expression gaps.
6. Regenerate parser artifacts with the repository’s pinned Tree-sitter CLI
   whenever the grammar changes.

## Ground rules

- Keep the grammar general-purpose; do not add Graphify-specific semantics.
- Do not require an installed Idris2 compiler, LSP, or network service at test
  time.
- Preserve the ISC license and inherited copyright notice.
- Preserve Stage 01–03 node names and fields unless a fixture proves a
  compatibility problem; document any intentional change.
- Keep the representation syntactic. Do not resolve overloaded operators,
  infer types, or classify an operator by the declaration it may refer to.
- Use one documented generic operator node shape unless the source syntax
  proves that declaration/operator-name tokens need a separate named node.
- Do not add pattern matching, lambdas, `with`, `where`, `do`, records,
  interfaces, implementations, pragmas, fixity declarations, layout
  semantics, or literate-source support in this stage. Record those as
  follow-up gaps.
- Do not broaden the grammar with Unicode identifiers or a full external
  scanner; if operator syntax depends on either, record the concrete blocker
  and smallest decision needed under the Blocked protocol.

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

- `docs/stages/stage-04-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also inspect the debug trees for every new fixture and confirm that supported
operator names, infix expressions, nested precedence, and incomplete input do
not introduce an unexpected top-level `ERROR` node. Verify that all prior
Stage 01–03 fixtures remain present and passing.

## Definition of Done

- Focused corpus fixtures cover operator-named declarations or constructors,
  simple and nested infix expressions, qualified operands, and incomplete
  operator recovery.
- Operator expressions and operator names have documented stable node names
  and fields, with a documented syntactic precedence/associativity policy.
- Stage 01–03 node names remain compatible, or any intentional change is
  documented with fixture evidence.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact test commands and results, deviations, known
  problem remedies used, and open questions.

## Commit

Use exactly this single-line commit message:

`Add Idris2 operators and infix expressions`

## Report requirements

Write `docs/stages/stage-04-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- any deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the Idris2 source behavior is ambiguous, operator syntax requires an
external scanner or layout state beyond this bounded slice, the pinned CLI
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
