horizon: M1 case-expression slice, ending when delimiter-separated alternatives and recovery fixtures are independently reviewed

## fc-06-a
- category: spec-gap
- observation: "Current Idris 2 source evidence or focused fixtures expose a case or pattern-alternative form that cannot fit the explicitly delimiter-separated, syntax-only slice without a materially different rule."
- p: 0.30  # anchor: spec-gap posterior 30%; held at the calibrated anchor because the contract narrows layout-sensitive forms but case syntax is newly sampled.
- resolves: at Stage 06 review, from source/inventory notes, corpus trees, grammar diff, and REPORT deviations
- if-true: Keep the case fixture set bounded, document the exact unsupported form and smallest follow-up decision, and defer it to a layout or pattern stage.
- if-false: Complete the delimiter-based case slice, preserve existing expression and pattern nodes, and carry layout-sensitive matching into the next contract.
- outcome: 1
- evidence: `docs/stages/stage-06-REPORT.md:68-76` — recovery, bare-constructor, and layout boundaries were documented as follow-up gaps.

## fc-06-b
- category: data-shape
- observation: "Adding case expressions requires a stable scrutinee, alternative, pattern, or body shape that changes established expression/pattern compatibility or needs a field exception."
- p: 0.36  # anchor: data-shape posterior 36%; use the calibrated category posterior because this stage adds two public nodes and repeated branch fields.
- resolves: at Stage 06 review, from src/node-types.json, focused debug trees, prior-fixture reruns, and the REPORT compatibility assessment
- if-true: Document the additive stable shape, preserve existing fields, and constrain later with/where work around the compatibility finding.
- if-false: Add named scrutinee and repeated alternative fields with pattern/body children while preserving the existing expression and pattern nodes.
- outcome: 1
- evidence: `docs/stages/stage-06-REPORT.md:5-11` — named scrutinee/pattern/body fields and repeated alternatives are reported as implemented.

## fc-06-c
- category: env-tooling
- observation: "Parser generation or the npm test gate again needs the repository's macOS architecture-cache workaround in the executor or review environment."
- p: 0.34  # anchor: env-tooling posterior 34%; retain the calibrated rate because the shared Rosetta cache has failed in each recent grammar stage.
- resolves: at Stage 06 review, from exact generation/test output and the committed REPORT
- if-true: Apply only kp-macos-treesitter-cache's documented compiler-wrapper rebuild, record the exact command and result, and defer tooling changes to M3.
- if-false: Treat the pinned CLI and test wrapper as sufficient for this stage and focus follow-up on syntax coverage.
- outcome: 1
- evidence: `docs/stages/stage-06-REPORT.md:51-54` — the x86_64 cache remedy was required and the final npm gate passed.

## fc-06-d
- category: hidden-coupling
- observation: "The `|` case separator conflicts with the existing infix operator, declaration, or data-constructor rules and requires a shared grammar change beyond the localized case-expression rules."
- p: 0.18  # anchor: hidden-coupling posterior 11%; raised because Stage 04 already documented shared spacing/operator coupling and this stage reuses `|`.
- resolves: at Stage 06 review, from the full grammar diff, prior-fixture reruns, generated metadata, and REPORT deviations
- if-true: Keep the shared-rule change minimal, audit all Stage 01–05 fixtures independently, and document the coupling for the next layout stage.
- if-false: Keep case separators localized and proceed without changing unrelated declaration or operator registration.
- outcome: 1
- evidence: `docs/stages/stage-06-REPORT.md:63-67` — the case-local expression layer was required to reserve `|` without changing public operator behavior.

## Resolution

Resolved after the Stage 06 merge review on commit `f8d5946`.

### Outcomes

- `fc-06-a`: `1` — the bounded slice exposed bare-constructor and layout/recovery
  boundaries that were recorded as follow-up gaps.
- `fc-06-b`: `1` — the public case/alternative field shape was additive and
  documented without changing prior expression nodes.
- `fc-06-c`: `1` — the documented macOS/Rosetta cache remedy was required.
- `fc-06-d`: `1` — separator handling required localized expression factoring
  and conflict work, with prior operator behavior retained.

### Coverage sweep

- The executor session ended after partial edits and required coordinator
  recovery. This was an unmodeled `other` pivot, classified `unknowable` ex
  ante as an execution-service failure.
- Bare constructor alternatives and missing-`of` recovery were matched by
  `fc-06-a` and recorded as bounded gaps rather than silently accepted.
