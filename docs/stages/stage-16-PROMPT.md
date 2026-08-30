# Stage 16 — Validate against real-world Idris 2 repositories and finalize initial release

## Motivation

Stage 16 completes Milestone M3 and fulfills the Done-Conditions of the
[Charter](file:///Users/durant/Repos/ds/tree-sitter-idris2/docs/stages/forecasts/CHARTER.md):
1. The agreed M1/M2 syntax inventory is parsed.
2. Corpus tests cover all supported features.
3. Standard `.idr` and literate `.lidr` files parse with exact source locations.
4. Node names are stable and documented in `docs/syntax-inventory.md`.
5. Editor queries (`highlights.scm`, `tags.scm`, `injections.scm`) and multi-language
   bindings (C, Node.js, Rust) are verified.
6. Three real-world Idris 2 repositories have been tested against the parser to
   validate real-code coverage and bounded error recovery.

This stage introduces real-world repository fixtures and validation tests,
confirms that all release gates pass cleanly, and finalizes the release documentation.

## Change

1. Add real-world test suites / examples representing 3 real Idris 2 repositories:
   - **Idris 2 Core / Prelude** (e.g. `Prelude/Basics.idr`, `Prelude/Types.idr`)
   - **Idris 2 Ecosystem Library** (e.g. `idris2-json` / `idris2-sop` / parser combinators)
   - **Literate Idris Specs** (e.g. `.lidr` bird-track documentation / tutorials)
2. Add automated validation in `scripts/test-real-repos.js` or corpus fixtures to
   verify that real-world files parse into structured ASTs with graceful recovery.
3. Update `scripts/test.js` or `package.json` so `npm test` runs both corpus and
   real-world integration suites.
4. Update `README.md` and `docs/syntax-inventory.md` with final release status,
   supported features, editor query usage, and multi-language binding instructions.
5. Update `docs/DECISIONS.md` recording the milestone completion.
6. Produce `docs/stages/stage-16-REPORT.md`.

## Ground rules

- Preserve all Stage 01–15 grammar rules, queries, bindings, and corpus tests.
- Ensure all real-world tests pass cleanly with deterministic results.
- Keep the recoverable error boundaries bounded and uncorrupted.

## Allowed files

The executor may create or modify only:

- `docs/syntax-inventory.md`
- `docs/DECISIONS.md`
- `README.md`
- `package.json`
- `scripts/test.js`
- `scripts/test-real-repos.js`
- `examples/**` (or `test/real-repos/**`)
- `corpus/**`

The executor may also create the required report:

- `docs/stages/stage-16-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run these commands from the executor worktree:

1. `npm test`
2. `git diff --check`

Verify that all corpus tests and real-world repository parsing tests pass cleanly.

## Definition of Done

- 3 real-world Idris 2 repository examples/suites are tested and parse with structured ASTs.
- `npm test` runs and passes all fixtures.
- `README.md` and `docs/syntax-inventory.md` accurately document release status and usage.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the report.

## Commit

Use exactly this single-line commit message:

`Validate against real-world Idris 2 repositories and finalize initial release`

## Report requirements

Write `docs/stages/stage-16-REPORT.md` with the implementation summary; repositories
and files tested; parse metrics and results; verification commands/results; deviations;
and whitelist confirmation.

## Blocked protocol

If real-world test cases reveal unresolvable parser regressions that require
broad grammar redesign, record concrete evidence, state the smallest decision needed,
leave unrelated files untouched, and return the worktree for coordinator review.
