horizon: M1 case-pattern milestone through Stage 09, with an observable done-condition of a reviewed, generated grammar covering the bounded case-pattern slice and a documented decision on layout/with follow-up

## fc-07-a
- category: spec-gap
- observation: "The inspected Idris 2 source syntax for a bare/applied constructor pattern or guard cannot be represented by the bounded case-alternative grammar without a new scope decision."
- p: 0.34
- anchor: spec-gap posterior 31% (n=42); raised because Stage 06 explicitly deferred several adjacent pattern forms.
- resolves: at Stage 07 review, from the executor diff, corpus, REPORT deviations, and blocked-protocol evidence.
- if-true: "Keep the implemented slice to the source form that is directly evidenced, document the unsupported delimiter or pattern shape, and turn the smallest unresolved syntax decision into the next stage backlog."
- if-false: "Implement the bounded constructor and guard forms with stable syntax-only nodes and move the remaining layout-sensitive questions to the next planned stage."
- outcome: 1
- evidence: "docs/stages/stage-07-REPORT.md:9-11,63-66 — no separate case-guard delimiter was evidenced, so guard parsing was blocked and deferred."

## fc-07-b
- category: data-shape
- observation: "Preserving the existing case_alternative pattern/body contract requires a new named node or field distinction for bare versus applied constructor patterns."
- p: 0.40
- anchor: data-shape posterior 39% (n=18); raised because Stage 06 already reused a constrained constructor_application_pattern and the requested forms widen that boundary.
- resolves: at Stage 07 review, from generated node metadata, focused trees, and the REPORT's compatibility analysis.
- if-true: "Introduce the smallest stable syntactic node/field addition, add compatibility fixtures for all prior pattern forms, and document how downstream consumers should distinguish the new shapes."
- if-false: "Reuse the existing pattern representation without adding a public node, keep the field contract unchanged, and proceed to the next expression/layout gap."
- outcome: 1
- evidence: "src/node-types.json:249-260 — generated metadata adds constructor_pattern with an identifier child; docs/stages/stage-07-REPORT.md:15-19 records the addition."

## fc-07-c
- category: env-tooling
- observation: "The macOS/Rosetta parser-cache problem requires the documented x86_64 rebuild or targeted permission again before the full test gate can pass."
- p: 0.38
- anchor: env-tooling posterior 38% (n=19); unchanged because the same generated-parser cache is exercised on every grammar stage.
- resolves: at Stage 07 verification, from the exact cache rebuild command and `npm test` result.
- if-true: "Apply the documented cache remedy, record it in the report, and treat the resulting full-suite pass as the verification evidence."
- if-false: "Run the normal generation and full test gates without an environment workaround, recording that the known problem did not recur."
- outcome: 1
- evidence: "docs/stages/stage-07-REPORT.md:45-55 — the cache-write permission required the documented x86_64 remedy before npm test passed."

## fc-07-d
- category: hidden-coupling
- observation: "Extending constructor-pattern parsing changes the shared application/pattern conflict behavior or incomplete-case recovery outside the intended case-alternative context."
- p: 0.20
- anchor: hidden-coupling posterior 14% (n=31); raised above the posterior because Stage 06 required a case-local expression layer to isolate the separator token.
- resolves: at Stage 07 review, from prior-fixture regressions, debug trees, and disclosed grammar factoring.
- if-true: "Add the smallest context-local factoring or conflict declaration, preserve the established public trees, and add regression fixtures that demonstrate the boundary."
- if-false: "Keep the shared pattern/application rules unchanged, verify all prior fixtures, and continue with the straightforward case-pattern extension."
- outcome: 1
- evidence: "grammar.js:30-31 and docs/stages/stage-07-REPORT.md:15-16 — the constructor-pattern extension required an explicit conflict declaration; all prior fixtures still passed."

## Coverage sweep

- `pv-07-a`: executor session ended after a partial edit and interrupted
  package-install attempt; the coordinator recovered the cleanly bounded
  partial grammar work and completed the stage. This was an unmodeled
  executor-service pivot, category `other`, why-missed `unknowable`.
- The guard-syntax blocker matched `fc-07-a`; the new public node and conflict
  matched `fc-07-b` and `fc-07-d`; the cache permission matched `fc-07-c`.
