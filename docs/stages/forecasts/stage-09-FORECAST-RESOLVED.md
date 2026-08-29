horizon: M1 case-separator milestone, ending when the smallest source-evidenced layout/brace/semicolon boundary is independently reviewed

## fc-09-a
- category: spec-gap
- observation: "The inspected Idris 2 parser distinguishes brace/semicolon case syntax from layout-sensitive alternatives in a way that cannot be represented truthfully by the current grammar without scanner or indentation state."
- p: 0.58  # anchor: spec-gap posterior 34% (n=44); raised because Stage 08 explicitly deferred this source boundary and the next implementation choice depends on it.
- resolves: at Stage 09 review, from the source evidence, grammar diff, corpus trees, and REPORT Blocked/deviation sections
- if-true: Keep the implementation bounded to any delimiter form that remains truthful, document the concrete scanner/state decision, and carry a separately scoped layout-scanner contract into the next stage.
- if-false: Implement the directly evidenced brace/semicolon form with the existing public case nodes, add recovery fixtures, and use the resulting separator interactions to constrain the next `with`/pattern stage.
- outcome: 1
- evidence: "docs/stages/stage-09-REPORT.md:1-4, 29-34: the braced semicolon form was implemented, while indentation-separated alternatives were deferred because they require parser column/indentation state."

## fc-09-b
- category: hidden-coupling
- observation: "Adding brace/semicolon or separator recovery rules conflicts with the existing explicit-bar case layer, generic infix operators, or declaration boundaries and requires shared grammar factoring."
- p: 0.47  # anchor: hidden-coupling posterior 19% (n=33); raised because case separators already use dedicated hidden rules and Stage 05/06 exposed spacing/separator coupling.
- resolves: at Stage 09 review, from the full grammar diff, prior-fixture reruns, generated node metadata, and REPORT deviations
- if-true: Keep the shared-rule change minimal, audit all Stage 01–08 fixtures independently, and record the exact precedence/separator interaction for the following expression stage.
- if-false: Keep separator recognition localized to case blocks, preserve the existing expression/operator shape, and proceed with the planned inventory follow-up.
- outcome: 1
- evidence: "grammar.js:195-238, 325-341: case alternatives gain brace/semicolon branches, incomplete recovery, and separator-aware case-body lexing; independent generation and all 18 corpus fixtures passed."

## fc-09-c
- category: env-tooling
- observation: "Parser generation or the full corpus gate again requires the repository's macOS/Rosetta architecture-specific parser-cache rebuild."
- p: 0.43  # anchor: env-tooling posterior 43% (n=21); retained because the remedy was required in each recent grammar stage despite the test wrapper.
- resolves: at Stage 09 review, from exact generation/test output and the committed REPORT
- if-true: Apply only `kp-macos-treesitter-cache`'s documented x86_64 compiler-wrapper remedy, record the exact command and result, and leave tooling changes to a later stage.
- if-false: Treat the pinned CLI and test wrapper as sufficient for this stage and focus follow-up on syntax coverage.
- outcome: 1
- evidence: "docs/stages/stage-09-REPORT.md:58-76: the global cache rebuild was blocked by managed permissions, and the documented x86_64 wrapper with a writable temporary HOME made the full suite pass."

## fc-09-d
- category: data-shape
- observation: "A truthful mixed ordinary/impossible case tree for the newly supported separator form requires changing an existing public field contract or adding a new named core node."
- p: 0.30  # anchor: data-shape posterior 45% (n=20); lowered because Stage 08 already isolated the bodyless impossible branch with a dedicated node.
- resolves: at Stage 09 review, from corpus debug trees, src/node-types.json, and the REPORT compatibility assessment
- if-true: Do not guess or add a public field/node without approval; use the Blocked protocol and document the smallest requested architecture decision.
- if-false: Reuse the existing `case_alternative` and `impossible_case_alternative` contracts and add only separator-specific hidden factoring.
- outcome: 0
- evidence: "src/node-types.json: case_expression, case_alternative, impossible_case_alternative: existing required scrutinee/alternative, pattern/body, and bodyless-impossible contracts remain unchanged."

## Coverage sweep

- `pv-09-a` — unmodeled `env-tooling`, why-missed `overlooked`: the isolated
  worktree did not contain ignored `node_modules`; dependency restoration hit
  unavailable GitHub DNS, so review used a temporary dependency link and a
  writable temporary cache.
- `pv-09-b` — unmodeled `other`, why-missed `unknowable`: the required remote
  branch push reached GitHub after network escalation but was rejected by the
  configured SSH key (`Permission denied (publickey)`); the local executor
  branch was preserved and the reviewed commit was merged locally.
