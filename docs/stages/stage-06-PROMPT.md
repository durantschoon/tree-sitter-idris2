# Stage 06 — Add case expressions and pattern alternatives

## Motivation

The Stage 05 inventory records lambdas and named function patterns as
supported, but still lists pattern matching and `case` as unsupported. The
current expression grammar therefore cannot represent a common Idris 2 form
such as `case value of Just x => x | Nothing => 0`. Idris 2's current source
parser keeps `case` as an expression construct; this stage adds the smallest
syntax-only, delimiter-based slice needed to expose that structure while
leaving layout-sensitive blocks for a later contract. See the current Idris 2
source parser inventory in `docs/syntax-inventory.md` and the upstream parser
source at <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Rule/Source.idr>.

## Change

Extend the grammar with a bounded case-expression and pattern-alternative
slice:

1. Add `case_expression` for `case expression of alternative`, preserving a
   named `scrutinee` field for the expression being inspected and a repeated
   named `alternative` field for the branches.
2. Add a stable `case_alternative` node with named `pattern` and `body` fields,
   using the existing Stage 05 pattern forms where they are syntactically
   valid. Support identifier, literal, hole, parenthesized, and bounded
   capitalized constructor-application patterns; do not resolve constructors
   or infer types.
3. Use an explicit `|` separator between alternatives in this stage. Keep the
   expression representation syntactic and ensure application and infix
   precedence inside the scrutinee and branch bodies remains consistent with
   Stage 04–05 behavior.
4. Add focused corpus fixtures for a single alternative, multiple
   alternatives, literal and constructor patterns, nested case expressions,
   case expressions inside lambdas/function bodies, and incomplete `case`,
   `of`, or branch input for editor recovery.
5. Update `docs/syntax-inventory.md` with supported case forms, stable node
   names and fields, compatibility notes, and remaining matching/layout gaps.
6. Regenerate parser artifacts with the repository's pinned Tree-sitter CLI
   whenever the grammar changes.

## Ground rules

- Keep the grammar general-purpose; do not add Graphify-specific semantics.
- Do not require an installed Idris2 compiler, LSP, or network service at test
  time.
- Preserve the ISC license and inherited copyright notice.
- Preserve Stage 01–05 node names and fields unless a fixture proves a
  compatibility problem; document any intentional change.
- Keep the representation syntactic. Do not infer constructor identities,
  exhaustiveness, unreachable branches, bindings, or types.
- Reuse the existing expression, application, infix, hole, literal,
  parenthesized-expression, and Stage 05 pattern shapes where their source
  role is compatible.
- Do not add `with`, `where`, `do`, records, interfaces, implementations,
  layout state, an external scanner, Unicode identifier scanning, or literate
  source support in this stage. Record them as follow-up gaps.
- Do not reinterpret a top-level `|` as a case separator unless it is within
  the bounded case-expression rule. Existing operator and declaration behavior
  must remain intact.
- If actual case syntax requires layout state, an external scanner, or a
  compatibility-breaking node migration beyond this bounded slice, use the
  Blocked protocol rather than guessing.

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

- `docs/stages/stage-06-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also inspect the debug trees for every new fixture and confirm that supported
case expressions, alternatives, nested cases, and incomplete input do not
introduce an unexpected top-level `ERROR` node. Verify that all prior Stage
01–05 fixtures remain present and passing, and inspect the generated node
metadata for the documented fields.

## Definition of Done

- Focused corpus fixtures cover single and multiple alternatives, the
  supported pattern forms, nested case expressions, case bodies in existing
  expression contexts, and incomplete recovery.
- `case_expression` and `case_alternative` have documented stable names and
  fields.
- Stage 01–05 node names remain compatible, or any intentional change is
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

`Add Idris2 case expressions`

## Report requirements

Write `docs/stages/stage-06-REPORT.md` with:

- a concise implementation summary;
- the files changed and why;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- any deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If Idris 2 case syntax is ambiguous, alternatives require layout state or an
external scanner beyond this bounded slice, the pinned CLI cannot generate the
parser, or a compatibility change is unavoidable, do not guess. Record the
concrete source or command evidence and smallest decision needed in the report,
leave unrelated files untouched, and return the worktree for coordinator review.

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
