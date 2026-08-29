horizon: M1 case-pattern milestone through Stage 09, with an observable done-condition of a reviewed, generated grammar covering the bounded case-pattern slice and a documented decision on layout/with follow-up

## fc-08-a
- category: spec-gap
- observation: "The current Idris 2 source parser evidence does not map `impossible` to the same bounded case-branch spelling assumed by the existing grammar, so the requested form must be narrowed or blocked."
- p: 0.30
- anchor: spec-gap posterior 33% (n=43); lowered because Stage 07 already inspected and reported the `=>`/`impossible` distinction, but the exact branch shape is still unresolved.
- resolves: at Stage 08 review, from the source inspection, corpus trees, and REPORT deviations or Blocked-protocol evidence.
- if-true: "Keep the implementation limited to the exact source-evidenced spelling, or accept a documented blocked portion if it needs layout state; carry the smallest unresolved syntax decision into the next stage backlog."
- if-false: "Implement the bounded impossible branch directly, preserving the existing case fields and documenting the remaining layout-sensitive forms."
- outcome: 1
- evidence: "docs/stages/stage-08-REPORT.md:38-42: \"This grammar implements the smallest directly evidenced branch spelling, `pattern impossible`, inside the stage's existing explicit-bar case slice. It does not claim support for the source form's braces, semicolons, layout separation, dependent pattern semantics, or exhaustiveness/unreachability checking.\""

## fc-08-b
- category: data-shape
- observation: "Representing an impossible branch truthfully requires a dedicated named branch node instead of reusing `case_alternative` with its existing `pattern` and `body` fields."
- p: 0.35
- anchor: data-shape posterior 42% (n=19); lowered because the contract explicitly permits reuse when the existing fields remain truthful and Stage 07 preserved its public shape.
- resolves: at Stage 08 review, from generated node metadata, focused debug trees, and the REPORT compatibility analysis.
- if-true: "Add the smallest dedicated syntax-only node permitted by the source shape, preserve ordinary alternative trees, and document downstream compatibility and the reason reuse would mislead consumers."
- if-false: "Reuse `case_alternative` without adding a public node or field, add regression fixtures, and continue with the next expression/layout gap."
- outcome: 1
- evidence: "src/node-types.json:691-712: `impossible_case_alternative` has a required `pattern` field and no `body`; docs/stages/stage-08-REPORT.md:77-79 explains that reusing `case_alternative` would misrepresent its required `body`."

## fc-08-c
- category: hidden-coupling
- observation: "Adding the impossible branch form changes the case-local separator or incomplete-recovery behavior for ordinary alternatives, nested cases, or expressions outside case branches."
- p: 0.25
- anchor: hidden-coupling posterior 17% (n=32); raised because Stage 06–07 required case-local expression factoring and explicit conflicts around the same branch boundary.
- resolves: at Stage 08 review, from prior-fixture regressions, debug trees, and disclosed grammar factoring.
- if-true: "Use the smallest case-local factoring or conflict adjustment, retain the established public trees, and add fixtures that demonstrate the boundary."
- if-false: "Keep existing separator and recovery rules unchanged, verify all prior fixtures, and proceed with the straightforward bounded branch addition."
- outcome: 1
- evidence: "grammar.js:195-239: the case expression and incomplete-case rules add impossible-alternative choice/recovery wiring and preserve explicit-bar separation; the focused and full corpus gates passed."

## fc-08-d
- category: env-tooling
- observation: "The macOS/Rosetta parser-cache permission or architecture issue recurs before the full `npm test` gate."
- p: 0.40
- anchor: env-tooling posterior 40% (n=20); unchanged because the same generated parser cache is exercised on every grammar stage and recurred in Stage 07.
- resolves: at Stage 08 verification, from the exact cache rebuild command and `npm test` result.
- if-true: "Apply the documented x86_64 cache rebuild remedy, record the cache architecture and test result in the REPORT, and use the post-remedy gate as verification evidence."
- if-false: "Run the normal generation and full test gates without an environment workaround, recording that the known problem did not recur."
- outcome: 1
- evidence: "docs/stages/stage-08-REPORT.md:67-70: \"The exact documented remedy was required after the first focused debug attempt could not write the global cache path.\""

## Coverage sweep

- `pv-08-a` — unmodeled `other`, why-missed `overlooked`: two executor sessions
  exited after partial implementation before the third executor completed the
  stage. Stage 07's report already documented the same executor-session pivot,
  but it was not included in this forecast.
- `pv-08-b` — unmodeled `env-tooling`, why-missed `overlooked`: the cleanup
  script removed the executor directory but could not delete the registered
  `.git/worktrees/stage-08` metadata; targeted `git worktree prune` was needed.
  The repository instructions explicitly warned about this managed-environment
  condition, but it was not forecast separately from the parser-cache issue.
- `pv-08-c` — unmodeled `other`, why-missed `unknowable`: the post-push remote
  verification encountered transient DNS failure (`Could not resolve hostname
  github.com`) after the executor had already reported its branch up to date.
- `pv-08-d` — unmodeled `other`, why-missed `unknowable`: an executor left a
  duplicate incomplete fixture untracked in the primary checkout; it was moved
  to `/private/tmp` for recovery before merge and was not staged.
