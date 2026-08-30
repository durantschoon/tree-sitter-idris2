horizon: Stage 12 multiple-view `with` clauses — extending with headers and clauses to repeated view expressions and view patterns across braced and layout forms (1 stage, ~0.5 working days)

## fc-12-a

- category: hidden-coupling
- observation: "Allowing repeated vertical-bar view expressions in the `with` header and repeated view patterns in `with_clause` creates parser conflicts with infix operators or case bars, requiring explicit precedence or lexical factoring."
- p: 0.30 # anchor: hidden-coupling posterior 0.26 (n=36); raised because vertical bar is shared across case alternatives, with clauses, and operators.
- resolves: at Stage 12 review, from the grammar diff, LR conflicts, and full corpus pass.
- if-true: Factor the vertical-bar repetition with bounded precedence or hidden rules, ensuring single-view and case syntax remain regression-free.
- if-false: Use simple repeated sequence rules without extra conflict declarations and verify all prior fixtures pass.
- outcome: 0
- evidence: "grammar.js:105-115, 170-205: standard sequence repetitions of view expressions and view patterns generated without LR conflicts or precedence ambiguities; all 24 fixtures passed."

## fc-12-b

- category: data-shape
- observation: "Supporting multiple views requires adding a new named wrapper node for intermediate view patterns to distinguish them from the clause body."
- p: 0.25 # anchor: data-shape posterior 0.40 (n=22); lowered because repeating the existing `view` and `view_pattern` fields preserves the existing AST structure.
- resolves: at Stage 12 review, from src/node-types.json and corpus parse trees.
- if-true: Add the approved minimal named node only if repeated fields cannot express multi-view ordering unambiguously.
- if-false: Retain the existing `with_declaration` and `with_clause` node names with repeated `view` and `view_pattern` fields.
- outcome: 0
- evidence: "src/node-types.json: with_declaration and with_clause: existing node shapes with repeated view and view_pattern fields represent multiple views unambiguously without new named wrapper nodes."

## fc-12-c

- category: env-tooling
- observation: "The macOS Rosetta test harness with the updated `scripts/test.js` links `src/scanner.c` cleanly, but global cache writes still require the temporary HOME remedy."
- p: 0.50 # anchor: env-tooling posterior 0.50 (n=24); held steady given consistent macOS managed environment cache behavior.
- resolves: at Stage 12 review, from test execution logs and REPORT known-problem records.
- if-true: Apply the documented temporary HOME cache remedy and record results.
- if-false: Literal `npm test` succeeds without additional cache redirection.
- outcome: 1
- evidence: "docs/stages/stage-12-REPORT.md:47-59: test execution with HOME=/private/tmp/stage12-home passed cleanly with compiled parser and scanner libraries."

## Coverage sweep

- None: multiple-view repetition integrated directly into the Stage 10/11 AST shapes without unforeseen friction.
