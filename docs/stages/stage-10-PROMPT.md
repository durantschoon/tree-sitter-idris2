# Stage 10 — Add bounded `with` clauses

## Motivation

Stage 09 established the source-evidenced brace/semicolon case form, while the
syntax inventory and Stage 09 report leave Idris 2 `with` clauses and richer
dependent patterns as the next M1 expression boundary. The official Idris 2
views tutorial shows a `with` header followed by one or more refined clauses,
where the left side of `|` repeats or abbreviates the original function
patterns and the right side matches the intermediate result:

- <https://idris2.readthedocs.io/en/latest/tutorial/views.html>

This stage measures whether the current Idris 2 parser's block rules expose a
truthful explicit brace/semicolon form. It adds only that delimiter form if
the source supports it without indentation state; layout-only clauses remain
deferred rather than being accepted because generic whitespace is present.

## Change

1. Inspect the current Idris 2 lexer/parser sources and the official views
   examples. Record the exact `with` header, refined-clause, vertical-bar,
   brace, semicolon, and layout behavior in `docs/syntax-inventory.md`.
2. If the current source grammar directly supports a brace-delimited
   `with` block, implement the smallest complete syntax-only form using one
   view expression and one or more semicolon-separated clauses, for example:

   ```idr
   check n with (isZero n) { check n | True = 1; check n | False = 0 }
   ```

   Preserve ordinary `function_definition`, `case_expression`, and generic
   infix behavior outside the new form. Keep branch patterns limited to the
   existing syntax-only pattern atoms; do not resolve views, constructors,
   dependent types, reachability, or exhaustiveness.
3. Give the new with-bearing declaration and its refined clauses stable named
   nodes and fields that distinguish original function parameters from
   post-`|` view-result patterns. Preserve all existing public node names and
   required fields. If that shape would require a compatibility-breaking
   migration or an unapproved core field/variant, use the Blocked protocol.
4. Add focused complete and incomplete corpus fixtures covering a simple
   ordinary with clause, multiple clauses with a mixed pattern set, a function
   body containing a with-bearing form if the source permits it, nested case
   expressions in a view/body where the existing grammar supports them, and
   recovery at a missing closing brace or terminator. Keep all prior fixtures
   present and passing.
5. Do not implement indentation-separated with clauses, multiple view
   expressions, nested with blocks, guards, richer dependent/function patterns,
   with-application/disambiguation syntax, or semantic interpretation. Do not
   add an external scanner unless the contract is first returned as blocked
   with concrete evidence.
6. Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c`
   with the repository's pinned Tree-sitter CLI whenever `grammar.js` changes.

## Ground rules

- Keep the grammar syntax-only and general-purpose; Graphify semantics remain
  out of scope.
- Use source evidence to distinguish explicit delimiters from layout. A
  newline accepted by `\s` is not evidence of indentation-aware parsing.
- Preserve Stage 01–09 public node names, fields, and ordinary declaration,
  application, case, pattern, and infix behavior.
- Keep `|` in a with clause distinct from case separators, generic infix
  operators, and any unsupported binding-application syntax.
- Do not add records, interfaces, implementations, namespaces, visibility
  modifiers, pragmas, fixity declarations, Unicode identifier scanning,
  literate source support, or Graphify-specific nodes.
- If source behavior requires indentation state, an external scanner, parser
  changes outside this allow-list, or an unapproved public-shape migration,
  use the Blocked protocol and leave unrelated files untouched.

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

- `docs/stages/stage-10-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run all of these from the repository root after the change:

1. `npm test`
2. `git diff --check`

Also run `./node_modules/.bin/tree-sitter generate`, inspect the debug trees
for every new fixture, and confirm that complete and incomplete supported with
blocks retain their surrounding declaration/expression trees without an
unexpected top-level `ERROR` node. Verify ordinary function clauses, explicit
case bars and braces, impossible branches, generic infix expressions, the
new with header/branch fields, all prior Stage 01–09 fixtures, and generated
node metadata.

## Definition of Done

- The source evidence and exact supported delimiter/layout boundary are
  recorded in the inventory and report.
- Complete and incomplete fixtures cover every newly supported with form, or
  the report provides concrete blocked evidence without speculative acceptance.
- Existing public nodes and required fields remain truthful and compatible.
- The grammar and generated parser sources are synchronized.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the required
  report.
- The report records exact commands/results, the applicable known-problem
  remedy, deviations, open questions, and whitelist compliance.

## Commit

Use exactly this single-line commit message:

`Add Idris2 with clauses`

## Report requirements

Write `docs/stages/stage-10-REPORT.md` with:

- a concise implementation or blocked summary;
- the files changed and why;
- exact Idris 2 source evidence and the supported boundary;
- exact commands run and their results;
- the applicable known-problem ID and exact remedy used, or confirmation that
  it was not needed;
- deviations from this contract, with reasons;
- open questions and recommended follow-up work;
- confirmation that the allowed-files list was respected.

## Blocked protocol

If the current Idris 2 source does not expose a brace/semicolon `with` block,
if the with form requires indentation state or an external scanner, if a new
core field/variant or compatibility migration would require approval, if the
pinned CLI cannot generate the parser, or if existing behavior cannot be
preserved, do not guess. Record the concrete source or command evidence and
the smallest decision needed in the report, leave unrelated files untouched,
and return the worktree for coordinator review.

## Known problems and remedies

- `kp-macos-treesitter-cache` — on macOS/Rosetta, before `npm test`, rebuild
  the cached parser from the repository or executor worktree with:

  ```sh
  CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" \
    -dynamiclib -fPIC -O2 -Isrc src/parser.c \
    -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so
  ```

  Then run the exact gate `npm test` and record the result. If the cache path
  is not writable, use a writable temporary HOME/cache as documented by the
  known-problem registry and record the exact failure and remedy.
