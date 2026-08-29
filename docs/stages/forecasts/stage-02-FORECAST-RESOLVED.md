horizon: M1 lexical and expression foundations, ending when comments, applications, holes, and dependent binders are reviewed

## fc-02-a
- category: spec-gap
- observation: "The current Idris2 parser sources require at least one lexical or expression form beyond the bounded Stage 02 scope before ordinary applications or dependent binders can be represented faithfully."
- p: 0.40  # anchor: spec-gap posterior 0.27 (n=38); raised because Stage 01 identified several source-level gaps and this slice crosses lexer/parser boundaries.
- resolves: at Stage 02 review, from the syntax inventory, grammar diff, and focused corpus output.
- outcome: 1
- evidence: `docs/stages/stage-02-REPORT.md:14-16` records added parenthesized expression atoms and ordinary decimal doubles beyond the core fixture forms.
- if-true: "Keep unsupported behavior explicit, add only the minimum syntax required for the requested fixtures, and record the additional form as the first input to the next contract."
- if-false: "Complete the bounded lexical and expression slice with the current source evidence and reserve broader syntax discovery for the planned declaration and layout stages."

## fc-02-b
- category: data-shape
- observation: "Dependent function types or application expressions require a node nesting or field choice that is materially different from the Stage 01 type/expression shape."
- p: 0.40  # anchor: data-shape posterior 0.30 (n=14); raised because this stage introduces nested syntax and downstream node stability is a known concern.
- resolves: at Stage 02 review, from corpus trees, node-types.json, and the report's compatibility assessment.
- outcome: 0
- evidence: `docs/stages/stage-02-REPORT.md:60-62` states that Stage 01 node names and fields remain compatible.
- if-true: "Document the stable nested representation and update the next stage contract to consume it; preserve Stage 01 names wherever the source shape permits."
- if-false: "Extend the existing type and expression nodes without a compatibility migration and use the established field convention for later declarations."

## fc-02-c
- category: env-tooling
- observation: "Parser generation or corpus testing again needs a platform-specific cache or compiler workaround in the executor environment."
- p: 0.25  # anchor: env-tooling posterior 0.22 (n=15); slightly raised because Stage 01 encountered the same macOS cache/toolchain boundary.
- resolves: at Stage 02 review, from exact generation/test output and the committed report.
- outcome: 1
- evidence: `docs/stages/stage-02-REPORT.md:53-56` records the required macOS x86_64 architecture-cache compiler workaround.
- if-true: "Record the reproducible environment constraint and keep any workaround minimal and scoped to the existing test tooling; defer broader version support to M3."
- if-false: "Treat the current pinned CLI and test wrapper as sufficient for this stage and focus follow-up on grammar coverage."
