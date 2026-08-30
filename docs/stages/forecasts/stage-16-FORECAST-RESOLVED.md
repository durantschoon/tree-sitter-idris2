horizon: Stage 16 real-repo validation — testing real Idris 2 codebases, verifying error recovery, and finalizing release baseline (1 stage, ~0.5 working days)

## fc-16-a

- category: spec-gap
- observation: "Real-world Idris 2 files containing unsupported syntax (such as infix fixity declarations or records) produce localized ERROR nodes while preserving top-level function and data definitions."
- p: 0.80 # anchor: spec-gap posterior 0.34 (n=49); high because Tree-sitter error recovery has been tested with recovery rules across Stages 07–13.
- resolves: at Stage 16 review, from real-world parse results and AST inspections.
- if-true: Verify that valid declarations around unsupported constructs are properly parsed into named nodes.
- if-false: Refine grammar recovery boundaries if an error causes a cascading top-level failure.
- outcome: 1
- evidence: "examples/idris2-prelude/Basics.idr: %default total pragma isolated to bounded error while all top-level functions and operator declarations parsed cleanly."

## fc-16-b

- category: env-tooling
- observation: "The real-world test runner runs within 10 seconds under standard Node/CLI execution."
- p: 0.90 # anchor: env-tooling posterior 0.53 (n=28); raised high because Tree-sitter C parser evaluates thousands of lines in milliseconds.
- resolves: at Stage 16 review, from test execution logs and REPORT.
- if-true: Document fast execution times in the test report.
- if-false: Optimize test runner file discovery or batching.
- outcome: 1
- evidence: "scripts/test-real-repos.js parsed all 3 real-world repositories and 105 lines in under 1 second."

## fc-16-c

- category: data-shape
- observation: "Documentation updates in README.md, syntax-inventory.md, and DECISIONS.md accurately reflect all M1–M3 capabilities without stale references."
- p: 0.85 # anchor: data-shape posterior 0.40 (n=24); high because syntax inventory and handoffs have been updated continuously at each stage.
- resolves: at Stage 16 review, from diff inspection and REPORT.
- if-true: Finalize documentation and charter completion confirmation.
- if-false: Rectify any minor documentation discrepancies.
- outcome: 1
- evidence: "README.md, docs/syntax-inventory.md, and docs/DECISIONS.md all updated to Release 0.0.1 status with accurate feature matrices."

## Coverage sweep

- None: all done-conditions from CHARTER.md achieved.
