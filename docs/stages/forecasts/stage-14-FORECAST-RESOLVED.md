horizon: Stage 14 editor queries — authoring highlights.scm, tags.scm, and injections.scm adhering to standard Tree-sitter capture conventions (1 stage, ~0.5 working days)

## fc-14-a

- category: hidden-coupling
- observation: "Highlight capture rules for bare identifiers in patterns or types produce query matching conflicts or precedence ambiguities across Neovim/Helix query engines."
- p: 0.25 # anchor: hidden-coupling posterior 0.24 (n=38); lowered because Tree-sitter queries evaluate in file order with specific patterns overriding generic ones.
- resolves: at Stage 14 review, from queries/highlights.scm structure and Tree-sitter query validation.
- if-true: Order specific constructor and type captures after general identifier captures and test query specificity.
- if-false: Use direct field-based and node-based captures in standard hierarchical order.
- outcome: 0
- evidence: "queries/highlights.scm: specific type/constructor/function/parameter captures followed by generic (identifier) @variable fallback validated cleanly by Tree-sitter query engine."

## fc-14-b

- category: spec-gap
- observation: "Tree-sitter CLI 0.20 query engine lacks native validation commands for certain complex predicate queries, requiring direct node matching tests."
- p: 0.30 # anchor: spec-gap posterior 0.34 (n=48); held steady because query file syntax must conform to tree-sitter-cli 0.20 S-expression parser.
- resolves: at Stage 14 review, from test verification logs and REPORT.
- if-true: Validate queries with standard S-expression parsing and field-reference verification.
- if-false: Native Tree-sitter test runner validates query files automatically during test execution.
- outcome: 0
- evidence: "tree-sitter test automatically validated query files against src/node-types.json directly during the test suite execution."

## fc-14-c

- category: env-tooling
- observation: "The improved `scripts/test.js` runs `npm test` cleanly with zero environment overrides or cache errors."
- p: 0.85 # anchor: env-tooling posterior 0.52 (n=26); raised because the automatic cache fallback was tested and confirmed working.
- resolves: at Stage 14 review, from test execution logs and REPORT.
- if-true: Plain `npm test` succeeds without `HOME` overrides.
- if-false: A regression requires manual cache intervention.
- outcome: 1
- evidence: "npm test ran synchronously with zero environment overrides across all 27 suites."

## Coverage sweep

- None: all queries mapped directly to the stabilized syntax inventory without gaps.
