horizon: M1 lambda and pattern-clause slice, ending when the new expression and clause fixtures are independently reviewed

## fc-05-a
- category: spec-gap
- observation: "The inspected Idris 2 syntax or focused fixtures expose a lambda or pattern form that cannot fit the bounded identifier/literal/hole/constructor slice without a materially different rule."
- p: 0.23  # anchor: spec-gap posterior 0.28; lowered because the contract narrows the source forms and explicitly defers layout-sensitive cases.
- resolves: at Stage 05 review, from source/inventory notes, the grammar diff, corpus output, and REPORT deviations
- if-true: Keep the fixture set bounded, document the exact unsupported form and smallest follow-up decision, and carry it into the next expression/layout contract.
- if-false: Complete the bounded lambda and pattern slice, preserve the existing expression nodes, and use the inventory to define the next declaration or layout stage.
- outcome: 1
- evidence: `docs/stages/stage-05-REPORT.md:62-66` — “Constructor applications are bounded to capitalized constructors inside parenthesized patterns.”

## fc-05-b
- category: data-shape
- observation: "Adding lambda parameters or function-clause patterns requires a stable node or field shape that changes the established function_definition/application structure or needs a compatibility exception."
- p: 0.26  # anchor: data-shape posterior 0.32; lowered after the prior operator stage documented a compatible extension pattern.
- resolves: at Stage 05 review, from corpus debug trees, src/node-types.json, and the REPORT compatibility assessment
- if-true: Document the new stable shape, retain the existing name/body fields, and constrain the next pattern/layout work around the compatibility finding.
- if-false: Extend the existing function and expression nodes with repeated parameter fields and preserve the established application/infix representation.
- outcome: 1
- evidence: `docs/stages/stage-05-REPORT.md:5-10` — “Function definitions preserve the Stage 01–04 `name` and `body` fields and now accept repeated `parameter` fields.”

## fc-05-c
- category: env-tooling
- observation: "Parser generation or the corpus test gate again needs the repository's macOS architecture-cache workaround in the executor environment."
- p: 0.24  # anchor: env-tooling posterior 0.31; lowered because the repository test wrapper now performs the architecture-specific compile itself.
- resolves: at Stage 05 review, from exact generation/test output and the committed REPORT
- if-true: Apply only kp-macos-treesitter-cache's documented compiler-wrapper rebuild, record the exact command and result, and defer tooling changes to M3.
- if-false: Treat the pinned CLI and existing test wrapper as sufficient for this stage and focus follow-up on syntax coverage.
- outcome: 1
- evidence: `docs/stages/stage-05-REPORT.md:50-53` — “The parser cache was rebuilt with the repository's x86_64 compiler wrapper before the final test gates.”

## fc-05-d
- category: hidden-coupling
- observation: "Pattern parameters or lambda binders conflict with shared expression, binder, or declaration rules and require a shared grammar change beyond the new pattern/lambda rules."
- p: 0.18  # anchor: hidden-coupling posterior 0.08; raised because function_definition and expression are shared registration points despite the low historical base rate.
- resolves: at Stage 05 review, from the full source diff, prior-fixture reruns, generated node metadata, and REPORT deviations
- if-true: Keep the shared-rule change minimal, audit every Stage 01–04 fixture independently, and document the coupling for the next stage.
- if-false: Keep pattern and lambda recognition localized and proceed without changing unrelated declaration registration.
- outcome: 1
- evidence: `docs/stages/stage-05-REPORT.md:57-61` — “The partial executor's first grammar used a parameter-spacing token that conflicted with Stage 04's infix-spacing token.”

## Resolution

Resolved after the Stage 05 merge review on commit `6e57baa`.

### Outcomes

- `fc-05-a`: `1` — the bounded constructor-pattern boundary and its deferred
  unparenthesized forms are recorded in the report and inventory.
- `fc-05-b`: `1` — function definitions gained repeated parameter fields while
  retaining the established `name` and `body` fields.
- `fc-05-c`: `1` — the documented macOS/Rosetta cache remedy was required and
  the final merged-master gate passed after it.
- `fc-05-d`: `1` — the initial parameter-spacing rule conflicted with the
  existing infix-spacing rule and required a shared assignment token.

### Coverage sweep

- The executor stalled after a partial attempt and required a recovery handoff;
  this was an unmodeled `other` pivot, classified `unknowable` ex ante because
  it was an execution-service failure rather than a source or repository
  behavior visible in the contract.
- Recovery also produced an abandoned untracked partial fixture in the primary
  checkout; it was preserved outside the repository rather than committed.
- The constructor-pattern boundary, assignment-token conflict, compatibility
  shape, and macOS cache failure were matched by `fc-05-a` through `fc-05-d`.
