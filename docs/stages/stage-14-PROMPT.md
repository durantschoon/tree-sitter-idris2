# Stage 14 — Add editor queries (highlights, tags, injections)

## Motivation

With Milestone M1 (Core `.idr` grammar) and Stage 13 (Literate source support)
complete, Milestone M2 establishes editor robustness. Tree-sitter editor integrations
(Neovim, Helix, Emacs, Zed, GitHub) rely on Scheme query files under `queries/` to
provide syntax highlighting, symbol tagging, and language injections.

This stage adds comprehensive, verified Tree-sitter query files:
- `queries/highlights.scm`: captures keywords, types, constructors, functions,
  parameters, operators, literals, and comments according to standard Tree-sitter
  capture conventions.
- `queries/tags.scm`: captures top-level module, type, constructor, and function
  definitions for symbol navigation (ctags/LSP symbol outline).
- `queries/injections.scm`: defines language injections for doc comments.

## Change

1. Inspect standard Tree-sitter highlight and tag capture naming conventions
   and existing Idris 2 node names in `docs/syntax-inventory.md`.
2. Author `queries/highlights.scm` covering all declaration keywords (`module`,
   `import`, `data`, `where`, `case`, `of`, `with`, `impossible`), types,
   constructors, functions, parameters, operators, literals, delimiters, and
   comment variants (`line_comment`, `block_comment`, `doc_comment`, `literate_comment`).
3. Author `queries/tags.scm` capturing definition symbols (`@definition.module`,
   `@definition.type`, `@definition.function`, `@definition.constructor`).
4. Author `queries/injections.scm` for doc comments.
5. Verify that all queries parse cleanly with the Tree-sitter CLI without query
   syntax errors or unmatched node references.
6. Update `docs/syntax-inventory.md` with query coverage and produce
   `docs/stages/stage-14-REPORT.md`.

## Ground rules

- Follow standard Tree-sitter capture naming conventions (`@keyword`, `@type`,
  `@constructor`, `@function`, `@variable.parameter`, `@operator`, `@string`,
  `@number`, `@comment`, `@punctuation.delimiter`, `@punctuation.bracket`).
- Ensure all query patterns reference only valid node names in `src/node-types.json`.
- Preserve all existing Stage 01–13 grammar rules, tests, and scanner logic.

## Allowed files

The executor may create or modify only:

- `docs/syntax-inventory.md`
- `queries/highlights.scm`
- `queries/tags.scm`
- `queries/injections.scm`

The executor may also create the required report:

- `docs/stages/stage-14-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run these commands from the executor worktree:

1. `npm test`
2. `git diff --check`

Verify query validity using the Tree-sitter CLI query parser and confirm zero query
errors. Confirm all 27 corpus tests pass.

## Definition of Done

- `queries/highlights.scm`, `queries/tags.scm`, and `queries/injections.scm` are
  created and adhere to standard capture conventions.
- All query patterns match valid nodes in `src/node-types.json` without errors.
- `npm test` passes all 27 corpus fixtures.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the report.

## Commit

Use exactly this single-line commit message:

`Add Tree-sitter editor queries`

## Report requirements

Write `docs/stages/stage-14-REPORT.md` with the implementation summary; files
created/changed; capture conventions used; verification commands/results;
deviations; open questions; and whitelist confirmation.

## Blocked protocol

If query captures conflict with node metadata in `src/node-types.json` requiring
an unapproved grammar migration, record concrete evidence, state the smallest
decision needed, leave unrelated files untouched, and return the worktree for
coordinator review.
