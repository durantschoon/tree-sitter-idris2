horizon: M0 syntax baseline, ending when the inventory and first four-construct corpus fixture are reviewed

## fc-01-a
- category: spec-gap
- observation: "The Idris2 source comparison exposes at least one lexical or declaration form needed by the first fixture that the inherited grammar does not currently represent."
- p: 0.35  # anchor: spec-gap posterior 0.25 (n=37); raised because this is an intentionally incomplete baseline.
- resolves: at Stage 01 review, from the grammar diff, syntax inventory, and corpus output.
- if-true: "Keep the fixture narrow, document the uncovered form as a known gap, and add only the minimum syntax needed for the requested module/import/signature/function sample. Feed the uncovered form into the next M1 contract."
- if-false: "The inherited token rules are sufficient for the requested sample; preserve them where possible and focus the next contract on expanding declarations with the established node naming convention."

## fc-01-b
- category: env-tooling
- observation: "The pinned Tree-sitter CLI or local compiler environment prevents a clean parser regeneration or corpus test without a platform-specific workaround."
- p: 0.30  # anchor: env-tooling posterior 0.17 (n=14); raised because the baseline already required a macOS/Rosetta test workaround.
- resolves: at Stage 01 review, from parser generation output and the exact npm test result.
- if-true: "Record the reproducible environment failure, keep the smallest repository-scoped workaround within the stage allow-list if possible, and open a follow-up for supported CLI/runtime versions rather than hiding the failure."
- if-false: "Treat the pinned tooling as the current baseline and reserve platform/version expansion for the M3 release-hygiene work."

## fc-01-c
- category: data-shape
- observation: "The first corpus fixture requires a node naming or nesting choice that is not obvious from the inherited grammar and must be documented before M1 expansion."
- p: 0.25  # anchor: data-shape posterior 0.25 (n=13); unchanged because named-node stability is a known downstream concern.
- resolves: at Stage 01 review, from the syntax inventory, corpus tree, and report open questions.
- if-true: "Document the chosen stable names and the rejected alternatives in the inventory, then make the next declaration-focused stage use those names consistently."
- if-false: "Use the inherited naming shape for the initial constructs and defer naming changes until a concrete M1 fixture demonstrates a conflict."

## Resolution

Resolved after Stage 01 review and independent gate reruns on commit
`4d2131fe5ce504a849ad146b7ae424d7e6b3e67f`.

### Outcomes

- `fc-01-a`: `1` — `docs/syntax-inventory.md:25-29` records that the inherited
  grammar had literal provenance but no declaration grammar or corpus, while
  `docs/syntax-inventory.md:65-74` records the remaining lexical and
  declaration gaps.
- `fc-01-b`: `1` — `docs/stages/stage-01-REPORT.md:29-34` records the cache
  write failure and the passing rerun after the cache workaround.
- `fc-01-c`: `1` — `docs/syntax-inventory.md:53-61` records stable named nodes,
  fields, and the rejected position-dependent naming approach.

### Coverage sweep

All material Stage 01 pivots and deviations were matched by the forecast tree:
the incomplete inherited syntax baseline was `fc-01-a`, the macOS cache/tooling
failure was `fc-01-b`, and the node-shape decision was `fc-01-c`. No unmatched
unmodeled pivot was identified.
