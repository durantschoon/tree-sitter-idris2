horizon: Stage 11 layout-separated one-view `with` clauses — a bounded scanner-backed layout slice with corpus coverage and passing gates (1 stage, ~0.5 working days)

## fc-11-a

- category: env-tooling
- observation: "The macOS/Rosetta Tree-sitter parser cache remains unwritable from the executor worktree, so `npm test` requires the documented writable temporary HOME remedy."
- p: 0.50 # anchor: env-tooling posterior 0.48 (n=23); raised slightly because Stage 10 encountered this exact cache restriction.
- resolves: at Stage 11 review, from the REPORT's baseline/final gate commands and known-problem record.
- if-true: Preserve the literal-gate failure and temporary-HOME remedy as evidence, then independently rerun the passing remedy during review.
- if-false: Record that the literal cache build and `npm test` passed in the executor worktree, then retain the registry entry for other directories.
- outcome: 1
- evidence: "docs/stages/stage-11-REPORT.md:59-71: the managed global cache write was unwritable under macOS Rosetta execution; the documented temporary-HOME remedy (HOME=/private/tmp/stage11-home) compiled both parser.c and scanner.c and passed all 22 fixtures."

## fc-11-b

- category: hidden-coupling
- observation: "Adding a with-only external scanner changes token handling enough to regress an existing explicit brace/semicolon with or case corpus fixture before the scanner boundary is corrected."
- p: 0.30 # anchor: hidden-coupling posterior 0.24 (n=35); raised because externals interact with whitespace and existing delimiter forms.
- resolves: at Stage 11 review, from the full corpus result and grammar/scanner diff.
- if-true: Isolate the external token to the layout-with production, add the smallest regression fixture, regenerate, and rerun the full corpus before merge.
- if-false: Confirm the scanner is entered only by the new layout production and continue with the next bounded M1 contract.
- outcome: 1
- evidence: "grammar.js:18-24, 431, src/scanner.c: an initial draft made `_with` an external keyword, causing keyword capture regression in `with-clauses.txt`; reverting `_with` to an internal keyword token and keeping only layout/newline in externals resolved the regression and passed all Stage 01-10 fixtures."

## fc-11-c

- category: spec-gap
- observation: "Upstream layout behavior needs a broader shared indentation stack than a scanner scoped only to `with`, making the Stage 11 contract blocked rather than safely implementable."
- p: 0.35 # anchor: spec-gap posterior 0.37 (n=46); held at the prior because source evidence already distinguishes `ValidIndent` but not the smallest Tree-sitter mapping.
- resolves: at Stage 11 review, from source notes, scanner implementation, and REPORT deviations or blocked evidence.
- if-true: Return a blocked report with the exact unsupported state transition and seek approval for a shared layout-engine stage; do not broaden Stage 11.
- if-false: Document the bounded scanner invariant and accept only the corpus forms directly covered by the contract.
- outcome: 0
- evidence: "src/scanner.c, docs/stages/stage-11-REPORT.md:1-24: a single-level layout scanner tracking layout_column was fully sufficient to support one-view with declarations, pass all complete/incomplete fixtures, and preserve separate following declarations without blocking."

## Coverage sweep

- `pv-11-a` — unmodeled `env-tooling`, why-missed `oversight`: `scripts/test.js` did not link `src/scanner.c` in the test compile command, causing undefined external scanner symbol failures during `npm test`; resolved via authorized Stage 11 prompt amendment and updating `scripts/test.js`.
