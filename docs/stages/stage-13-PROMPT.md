# Stage 13 — Add Literate Idris (`.lidr`) bird-track support

## Motivation

Milestone M1 established the core `.idr` syntax foundation through declarations,
expressions, pattern clauses, case alternatives, and layout/multiple-view `with`
blocks. Milestone M2 expands the grammar to literate Idris (`.lidr`) source files
and editor robustness.

In Idris 2, literate source files use the `.lidr` extension. The primary literate
style uses bird tracks (`>`): lines beginning with `>` contain executable Idris
code, while lines without `>` are treated as literate prose/comments.

- <https://idris2.readthedocs.io/en/latest/tutorial/starting.html#literate-programming>

This stage adds syntax-only support for bird-track literate source files, allowing
`.lidr` files with alternating prose comments and `>`-prefixed code blocks to
parse into standard `module` declarations without regressing `.idr` source files.

## Change

1. Inspect Idris 2 literate lexer rules and examples. Record the exact bird-track
   and literate comment rules in `docs/syntax-inventory.md`.
2. Extend the external scanner (`src/scanner.c`) and `grammar.js` to recognize
   column-0 bird tracks (`> `) on code lines and non-code prose lines as
   literate comments.
3. Ensure layout handling (such as layout `with` clauses) works seamlessly within
   bird-track code lines.
4. Add focused complete and incomplete corpus fixtures for bird-track literate
   modules, multi-block literate files, indented layout code in literate files,
   and mixed prose.
5. Retain all prior Stage 01–12 `.idr` fixtures unchanged.
6. Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c`
   with the pinned Tree-sitter CLI.

## Ground rules

- Keep the grammar syntax-only and general-purpose; Graphify semantics remain
  out of scope.
- Bird tracks must be recognized only at the start of a line (column 0); `>`
  occurring within code expressions must remain an ordinary symbolic `operator`.
- Preserve all Stage 01–12 public nodes, fields, declarations, and expressions.
- Do not add Markdown AST interpretation or documentation formatting; literate
  prose is captured as `literate_comment` extras/nodes.

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

- `docs/stages/stage-13-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run these commands from the executor worktree:

1. Baseline: `npm test`
2. `./node_modules/.bin/tree-sitter generate`
3. `npm test`
4. `git diff --check`

Inspect debug trees for all literate fixtures. Confirm that code blocks within
bird tracks parse into standard `module_declaration`, `type_signature`,
`function_definition`, and `with_declaration` trees, that literate prose lines
are preserved as comments, and that all prior Stage 01–12 fixtures pass.

## Definition of Done

- Source evidence and literate syntax rules are recorded in the inventory and
  report.
- Bird-track lines and literate comments parse accurately in `.lidr` fixtures.
- Ordinary `.idr` source files and symbolic `>` operators remain unaffected.
- Complete and incomplete fixtures cover literate modules.
- Generated parser sources are synchronized.
- The baseline and final `npm test` gates pass.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the report.

## Commit

Use exactly this single-line commit message:

`Add literate Idris bird-track support`

## Report requirements

Write `docs/stages/stage-13-REPORT.md` with the implementation or blocked
summary; files changed; exact Idris 2 source evidence; supported literate
boundary; exact commands/results; applicable known-problem remedy; deviations;
open questions; and whitelist confirmation.

## Blocked protocol

If bird tracks conflict with column-0 operators, if literate prose interferes
with layout-column tracking, or if existing behavior cannot be preserved, record
concrete evidence, state the smallest decision needed, leave unrelated files
untouched, and return the worktree for coordinator review.

## Known problems and remedies

- `kp-macos-treesitter-cache` — before `npm test`, compile the parser with the
  repository's x86_64 wrapper and use a writable temporary HOME if the global
  cache is denied.
