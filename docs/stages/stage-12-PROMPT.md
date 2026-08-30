# Stage 12 — Add multiple-view `with` clauses

## Motivation

Stage 10 and Stage 11 established single-view `with` declarations with both
explicit brace/semicolon and layout-separated refined clauses. The official Idris 2
views tutorial notes that multiple values can be matched simultaneously using
multiple view expressions in the `with` header separated by `|`, and corresponding
refined clauses matching each view result:

- <https://idris2.readthedocs.io/en/latest/tutorial/views.html>

For example:

```idr
allLengths : Vect p a -> Vect q b -> Nat
allLengths [] [] = 0
allLengths (x :: xs) (y :: ys) with (allLengths xs ys) | (allLengths xs ys)
  allLengths (x :: xs) (y :: ys) | prf1 | prf2 = 42
```

This stage extends `with_declaration` and `with_clause` to support multiple
parenthesized view expressions in the header and matching `| view_pattern`
segments in the refined clauses, for both explicit brace/semicolon and layout
forms.

## Change

1. Inspect the Idris 2 views tutorial and source parser rules for multiple views.
   Record the exact header and clause syntax in `docs/syntax-inventory.md`.
2. Extend `with_declaration` to accept one or more `|`-separated parenthesized
   view expressions in the `with` header.
3. Extend `with_clause` to accept one or more `|`-separated view-pattern
   matches before the `=` body.
4. Support both the explicit brace/semicolon and the scanner-backed layout forms
   for multiple-view declarations.
5. Add focused complete and incomplete corpus fixtures for multiple views with
   single and multiple clauses, mixed patterns, and layout/braced blocks.
6. Regenerate parser sources with the pinned Tree-sitter CLI.

## Ground rules

- Keep the grammar syntax-only and general-purpose; Graphify semantics remain
  out of scope.
- Preserve all Stage 01–11 public node names, required fields, and single-view
  `with` forms.
- Distinguish view patterns from declaration parameters and case alternatives.
- Do not add records, interfaces, implementations, namespaces, visibility
  modifiers, pragmas, fixity declarations, Unicode identifiers, literate
  source, or Graphify-specific nodes.

## Allowed files

The executor may create or modify only:

- `docs/syntax-inventory.md`
- `grammar.js`
- `src/grammar.json`
- `src/node-types.json`
- `src/parser.c`
- `src/scanner.c`
- `corpus/**`

The executor may also create the required report:

- `docs/stages/stage-12-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run these commands from the executor worktree:

1. Baseline: `npm test`
2. `./node_modules/.bin/tree-sitter generate`
3. `npm test`
4. `git diff --check`

Inspect debug trees for every new fixture. Confirm that multiple-view
`with_declaration` nodes retain repeated `view` fields, `with_clause` retains
repeated `view_pattern` fields, and all prior Stage 01–11 fixtures pass.

## Definition of Done

- Source evidence and multiple-view syntax rules are recorded in the inventory
  and report.
- Multiple parenthesized view expressions in headers and multiple view patterns
  in clauses parse correctly in both layout and braced forms.
- Complete and incomplete fixtures cover multiple-view forms.
- Existing single-view forms and all prior Stage 01–11 fixtures remain compatible.
- Generated parser sources are synchronized.
- The baseline and final `npm test` gates pass.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the report.

## Commit

Use exactly this single-line commit message:

`Add multiple-view Idris2 with clauses`

## Report requirements

Write `docs/stages/stage-12-REPORT.md` with the implementation or blocked
summary; files changed; exact Idris 2 source evidence; supported boundary;
exact commands/results; applicable known-problem remedy; deviations; open
questions; and whitelist confirmation.

## Blocked protocol

If multiple views conflict with existing declaration/case boundaries, if a
shared public-shape migration is required without approval, or if existing
behavior cannot be preserved, record concrete evidence, state the smallest
decision needed, leave unrelated files untouched, and return the worktree for
coordinator review.

## Known problems and remedies

- `kp-macos-treesitter-cache` — before `npm test`, compile the parser with the
  repository's x86_64 wrapper and use a writable temporary HOME if the global
  cache is denied.
