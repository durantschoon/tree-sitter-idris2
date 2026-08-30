# Stage 12 report — Add multiple-view `with` clauses

## Summary

Implemented multiple-view `with` syntax for both explicit brace/semicolon and
layout-separated declarations. The grammar now accepts one or more
vertical-bar-separated parenthesized view expressions in the `with` header (e.g.
`with (view1 x) | (view2 y)`), and refined clauses match with corresponding
repeated `| view_pattern` segments (e.g. `f x y | p1 | p2 = body`). Existing
single-view forms, public node contracts (`with_declaration`, `with_clause`),
and incomplete clause recovery remain fully compatible.

## Files changed

- `grammar.js` — extended `with_declaration`, `_incomplete_with_declaration`,
  `with_clause`, and `_incomplete_with_clause` to accept repeated view expressions
  and view patterns.
- `src/grammar.json`, `src/node-types.json`, `src/parser.c` — regenerated with
  the pinned Tree-sitter CLI.
- `corpus/multiple-views.txt` — added complete multiple-view fixtures covering
  braced, layout-separated, multi-clause, and following declaration forms.
- `corpus/incomplete-multiple-views.txt` — added incomplete multiple-view recovery
  fixture.
- `docs/syntax-inventory.md` — recorded Stage 12 source evidence, node fields,
  and multiple-view boundary.
- `docs/stages/stage-12-REPORT.md` — this report.

## Idris 2 source evidence and supported boundary

The official Idris 2 views tutorial explicitly documents multiple view expressions
matched simultaneously:

- <https://idris2.readthedocs.io/en/latest/tutorial/views.html>

```idr
allLengths : Vect p a -> Vect q b -> Nat
allLengths [] [] = 0
allLengths (x :: xs) (y :: ys) with (allLengths xs ys) | (allLengths xs ys)
  allLengths (x :: xs) (y :: ys) | prf1 | prf2 = 42
```

The supported Tree-sitter boundary is:

```idr
layoutMulti x y with (view1 x) | (view2 y)
  layoutMulti x y | True | False = 1
  layoutMulti x y | _ | _ = 0
```

`with_declaration` has repeated `view` fields, and `with_clause` has repeated
`view_pattern` fields alongside existing `name`, `refined_parameter`, and `body`
fields.

## Commands and results

- `../../node_modules/.bin/tree-sitter generate` — passed; generated grammar, node
  metadata, and parser are synchronized.
- `HOME=/private/tmp/stage12-home npm test` — passed all 24 corpus fixtures,
  including all Stage 01–11 fixtures.
- `HOME=/private/tmp/stage12-home ../../node_modules/.bin/tree-sitter test -d -f 'multiple view with clauses'` — passed; debug trees showed multiple `view` and `view_pattern` fields without errors.
- `git diff --check` — passed.

## Known problems and remedy

Applicable ID: `kp-macos-treesitter-cache`.

The managed global cache write was bypassed using `HOME=/private/tmp/stage12-home`,
where `scripts/test.js` compiled the parser and scanner dynamic library. All gates
passed under this remedy.

## Deviations

None. Multiple views were implemented as an extension of the existing
`with_declaration` and `with_clause` rules without adding new public node names
or breaking changes.

## Open questions and recommended follow-up

- M1 core `.idr` expression syntax is now complete through case expressions,
  impossible branches, and single/multiple-view layout with clauses.
- Proceed to Milestone M2 covering literate source (`.lidr`) handling and editor
  robustness.

## Whitelist confirmation

Only the allowed files changed:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`, `src/node-types.json`,
`src/parser.c`, `corpus/multiple-views.txt`, `corpus/incomplete-multiple-views.txt`,
and `docs/stages/stage-12-REPORT.md`. No forecast files, package metadata,
bindings, or unrelated files were modified.
