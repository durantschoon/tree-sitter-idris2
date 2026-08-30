horizon: Stage 13 literate Idris (`.lidr`) bird-track support — recognizing bird-track code lines and prose comments across module declarations (1 stage, ~0.5 working days)

## fc-13-a

- category: hidden-coupling
- observation: "Recognizing column-0 bird tracks (`>`) in the scanner creates a token conflict with symbolic operators or layout column measurement, requiring column-awareness in `src/scanner.c`."
- p: 0.35 # anchor: hidden-coupling posterior 0.25 (n=37); raised because `>` is an ASCII operator character and layout measurement occurs at line start.
- resolves: at Stage 13 review, from scanner diff, operator regression tests, and corpus results.
- if-true: Restrict bird-track detection strictly to line-start column 0 and adjust layout column counting to account for bird-track prefixes in literate code blocks.
- if-false: Handle bird tracks as standard extras without modifying layout column calculations.
- outcome: 1
- evidence: "src/scanner.c:135-155: column-0 check and bird-track scanning in scanner successfully distinguished `>` bird tracks from infix operators `x > y` and adjusted layout column detection."

## fc-13-b

- category: spec-gap
- observation: "Idris 2 literate files contain Markdown code fences (` ```idris `) in addition to bird tracks, requiring a dual-mode literate lexer in this stage."
- p: 0.25 # anchor: spec-gap posterior 0.35 (n=47); held conservative because the contract explicitly bounds Stage 13 to bird-track syntax.
- resolves: at Stage 13 review, from source evidence and REPORT deviations.
- if-true: Document the Markdown fence boundary in the inventory and defer fenced code blocks to a follow-up M2 stage.
- if-false: Implement bird tracks as the primary literate format and confirm Markdown blocks can be added incrementally.
- outcome: 0
- evidence: "docs/stages/stage-13-PROMPT.md and docs/stages/stage-13-REPORT.md: Stage 13 was successfully completed with bird-track support and prose comments without requiring Markdown code fence parsing in this stage."

## fc-13-c

- category: env-tooling
- observation: "The macOS Rosetta test harness compiles the updated scanner and parser under the temporary HOME remedy, passing all tests without cache errors."
- p: 0.50 # anchor: env-tooling posterior 0.50 (n=25); steady based on previous stages.
- resolves: at Stage 13 review, from test execution logs and REPORT.
- if-true: Document the temporary HOME remedy in the Stage 13 report.
- if-false: Run literal `npm test` without cache redirection.
- outcome: 1
- evidence: "docs/stages/stage-13-REPORT.md:45-56: all 27 fixtures passed using HOME=/private/tmp/stage13-home."

## Coverage sweep

- None: bird-track handling in scanner and grammar extras integrated cleanly without unanticipated architectural pivots.
