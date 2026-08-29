# Staged implementation pipeline

## Numbering

Stages use one global, append-only sequence. Each stage has exactly one
`stage-NN-PROMPT.md` and one `stage-NN-REPORT.md`. The prompt is committed to
the default branch before the stage is launched; the report is committed with
the verified result.

The current coarse route is:

1. M0: inventory and grammar recovery.
2. M1: core `.idr` grammar.
3. M2: literate source and editor robustness.
4. M3: bindings and release hygiene.
5. M4: Graphify integration.

The numbered stage contracts may split a milestone into several independently
reviewable stages. Stage prompts are canonical; reports record evidence,
deviations, and open questions for later stages.

## Known-problem registry

Directory-dependent environment problems and their tested remedies live in
[`docs/stages/known-problems/`](known-problems/). Before launching a stage,
read the entries applicable to the repository and execution environment. Each
new stage prompt must list the applicable problem IDs and remedies; its report
must record which remedies were used and whether they worked. Add a new entry
when an environment or directory-specific failure is discovered, preserving
prior entries as append-only history.

## Discovered gates

- Static check: `git diff --check`
- Full test suite: `npm test`
- End-to-end smoke: none currently defined

Every stage's Definition of Done must use these commands verbatim, plus the
stage-specific checks listed in its prompt.

## Guardrails

1. **Make Illegal States Unrepresentable:** use explicit domain variants for
   identities and states; a new core optional field or ADT case requires
   STOP-AND-ASK approval.
2. **Functional Core, Imperative Shell:** keep I/O at the edges, outside domain
   and parsing logic.
3. **Railway-Oriented errors:** represent business and parsing failures
   explicitly; do not use exceptions as control flow.
4. **No Primitive Obsession:** use typed or namespaced identities rather than
   bare strings where domain identity matters.
5. **Sum Types Closed, Maps Open:** add namespaced metadata before extending a
   closed variant; a new ADT case requires STOP-AND-ASK approval.
6. **Parse, Don't Validate:** convert source text into syntax structures once;
   never guess a type-directed relationship when the source only supports a
   syntactic one. Guessing instead of recording source facts requires
   STOP-AND-ASK escalation.
7. **History Is Append-Only:** preserve prior stage contracts, reports, and
   forecasts. Corrections are new facts; overwriting persisted history
   requires STOP-AND-ASK approval.

## Coordinator practices

- Stage prompts land on the default branch before launch, reserving the number
  and making the text canonical.
- Create executor worktrees under `.worktrees/stage-NN/` inside the primary
  checkout; do not place them beside the repository where sandbox permissions
  may prevent cleanup.
- Remember that Git also updates `.git/worktrees` when adding or removing a
  worktree. In a managed environment, request targeted permission for that
  Git operation if the metadata is protected; do not treat the permission
  error as a reason to leave the worktree behind.
- At most one in-flight stage touches a shared registration file.
- Executors attempt their own push and expect credential failure; the
  coordinator pushes and merges.
- Review is diff inspection plus independent gate reruns, never report-reading
  alone.
- After a successful merge or abandon, run
  `scripts/cleanup-stage-worktree.sh stage-NN` and verify `git worktree list`
  before recording the stage complete. Cleanup must never use a force option.
- Run the deterministic retro before every fifth stage.
- Forecasts are sealed before launch and resolved only after merge or abandon.

## Pipeline route

The first contract is Stage 01, covering M0's syntax inventory, tooling
baseline, and initial corpus fixture. Later contracts should decompose M1–M4
into disjoint allow-lists so branches can proceed concurrently when their
files do not contend.
