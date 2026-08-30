# Stage 14 report — Add Tree-sitter editor queries

## Summary

Authored comprehensive Tree-sitter editor query files covering syntax
highlighting (`queries/highlights.scm`), symbol definition tagging
(`queries/tags.scm`), and language injections (`queries/injections.scm`).
All query patterns follow standard Tree-sitter capture naming conventions and
match node types in `src/node-types.json`.

## Files changed

- `queries/highlights.scm` — defined syntax highlighting rules for keywords,
  operators, types, constructors, functions, parameters, literals, comments,
  and delimiters.
- `queries/tags.scm` — defined symbol tags for modules, types, constructors, and
  function definitions.
- `queries/injections.scm` — defined language injection for Markdown in doc
  comments.
- `docs/syntax-inventory.md` — recorded Stage 14 query support and capture
  conventions.
- `docs/stages/stage-14-REPORT.md` — this report.

## Capture conventions used

Standard Tree-sitter captures:
- `@keyword` for `module`, `import`, `data`, `where`
- `@operator` for `->`, `=>`, `|`, `(operator)`, `(operator_name)`
- `@type`, `@type.builtin` for data declarations, type annotations, unit types
- `@constructor` for constructor declarations, constructor patterns
- `@function`, `@function.call` for type signatures, definitions, applications
- `@variable.parameter` for function/lambda parameters, binders
- `@number`, `@number.float`, `@character`, `@string`, `@label` for literals
- `@comment.line`, `@comment.block`, `@comment.doc`, `@comment.block.documentation`
- `@punctuation.bracket`, `@punctuation.delimiter`
- `@definition.module`, `@definition.type`, `@definition.constructor`, `@definition.function`

## Commands and results

- `npm test` — passed; Tree-sitter CLI query parser validated all queries and all
  27 corpus fixtures passed cleanly.
- `git diff --check` — passed.

## Known problems and remedy

None. The improved `scripts/test.js` executed plain `npm test` without manual cache
intervention.

## Deviations

None.

## Open questions and recommended follow-up

- Milestone M2 is now substantially complete (literate source and editor queries).
- Optional M2 follow-up: fenced Markdown code blocks (```` ```idris ````) in `.lidr`
  files.
- Milestone M3: upstream bindings (C, Node, Python, Rust) and clean validation on 3
  real-world Idris 2 repositories.

## Whitelist confirmation

Only the allowed files were created or modified:
`queries/highlights.scm`, `queries/tags.scm`, `queries/injections.scm`,
`docs/syntax-inventory.md`, and `docs/stages/stage-14-REPORT.md`.
