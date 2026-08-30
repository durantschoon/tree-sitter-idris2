# Stage 13 report — Add Literate Idris (`.lidr`) bird-track support

## Summary

Implemented syntax-only support for literate Idris (`.lidr`) source files using
bird tracks (`>`). Lines beginning with `>` at column 0 have the bird track
consumed as a hidden `_bird_track` extra token, parsing the enclosed code
declarations across modules, imports, type signatures, functions, and layout
blocks without interference. Non-code prose lines and Markdown headers are
captured as `literate_comment` extras. Ordinary `.idr` source files and symbolic
`>` operators remain completely unaffected.

## Files changed

- `grammar.js` — added external symbols `_bird_track` and `literate_comment` to
  `externals` and `extras`.
- `src/scanner.c` — extended scanner with bird-track line scanning, literate
  prose comment extraction, and literate-aware layout column tracking.
- `src/grammar.json`, `src/node-types.json`, `src/parser.c` — regenerated with
  the pinned Tree-sitter CLI.
- `corpus/literate-bird-tracks.txt` — added complete literate module fixture with
  declarations, imports, and infix `>` operator expressions.
- `corpus/literate-prose-and-code.txt` — added literate module fixture with
  Markdown headers, alternating prose comments, and code declarations.
- `corpus/literate-layout-with.txt` — added literate module fixture demonstrating
  layout `with` blocks within bird-track lines.
- `docs/syntax-inventory.md` — recorded Stage 13 source evidence, node fields,
  and literate boundary.
- `docs/stages/stage-13-REPORT.md` — this report.

## Idris 2 source evidence and supported literate boundary

The official Idris 2 documentation describes literate programming support:

- <https://idris2.readthedocs.io/en/latest/tutorial/starting.html#literate-programming>

Lines starting with `>` contain Idris code, while all other lines are treated
as documentation/prose comments.

The supported Tree-sitter boundary is:

```lidr
# Markdown Header
Introductory prose.

> module Stage13.LiterateExample
> 
> gt : Int -> Int -> Bool
> gt x y = x > y
```

In literate files, prose lines produce `literate_comment` nodes in the parse tree,
`>` at column 0 is stripped via `_bird_track`, and internal operators such as
`x > y` remain parsed as standard `infix_expression` nodes.

## Commands and results

- `../../node_modules/.bin/tree-sitter generate` — passed; generated grammar, node
  metadata, and parser are synchronized.
- `HOME=/private/tmp/stage13-home npm test` — passed all 27 corpus fixtures,
  including all Stage 01–12 fixtures and new literate fixtures.
- `HOME=/private/tmp/stage13-home ../../node_modules/.bin/tree-sitter test -d -f 'literate'` — passed; debug trees showed clean `literate_comment`, `_bird_track`, and layout parsing.
- `git diff --check` — passed.

## Known problems and remedy

Applicable ID: `kp-macos-treesitter-cache`.

The managed global cache write was bypassed using `HOME=/private/tmp/stage13-home`,
where `scripts/test.js` compiled the parser and scanner dynamic library. All gates
passed under this remedy.

## Deviations

None. Literate bird-track parsing was added through extras and external scanner
tokens without modifying or breaking any core AST declarations.

## Open questions and recommended follow-up

- Fenced Markdown code blocks (` ```idris `) in literate files remain a future
  enhancement.
- Proceed to editor robustness: syntax highlighting queries (`queries/highlights.scm`),
  tags, and injection rules.

## Whitelist confirmation

Only the allowed files changed:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`, `src/node-types.json`,
`src/parser.c`, `src/scanner.c`, `corpus/literate-bird-tracks.txt`,
`corpus/literate-prose-and-code.txt`, `corpus/literate-layout-with.txt`, and
`docs/stages/stage-13-REPORT.md`.
