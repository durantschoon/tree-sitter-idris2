# Handoff Note

Updated: 2026-08-29

## Objective

Develop this repository into a maintained Idris 2 Tree-sitter grammar and use it as the syntax foundation for a later Graphify integration.

## What has happened

- The repository was cloned from `git@github.com:durantschoon/tree-sitter-idris2.git`.
- The inherited grammar and Idris 2 lexer/parser sources were inspected, and the
  initial planning documentation was added:
  - `README.md`
  - `docs/PROJECT_PLAN.md`
  - `docs/GRAPHIFY_INTEGRATION.md`
  - `docs/DECISIONS.md`
  - this file
- Stages 01–10 extended the recoverable grammar through declarations, comments,
  applications, dependent binders, lambdas, pattern clauses, case expressions,
  bare/applied constructor patterns, impossible branches, and explicit
  brace/semicolon case alternatives, then a bounded explicit one-view
  brace/semicolon `with` form. Each stage report and resolved forecast is
  committed on `master`.
- Stage 10's executor worktree was cleaned up after merge. The primary checkout
  is clean on `master`; the local branch is seven commits ahead of
  `origin/master`. The reviewed Stage 10 executor branch is preserved on
  `origin/stage-10-executor`.

## Durable decisions

- Continue the inherited grammar history and preserve the ISC license and original copyright notice.
- Keep this repository general-purpose; Graphify-specific graph semantics belong in Graphify.
- Target `.idr` and `.lidr` before Markdown-embedded Idris.
- Keep the first parser syntax-based and independent of an installed Idris2 compiler, LSP, or network service.
- Handle `.ipkg` package metadata in Graphify’s package-manifest layer rather than in the Tree-sitter grammar.
- Prefer correct, syntactic relationships over speculative type-directed resolution.

See `docs/DECISIONS.md` for the full rationale.

## Current repository state

The repository contains:

- `grammar.js` with the bounded Stage 10 syntax slice;
- generated parser sources under `src/`, synchronized with Tree-sitter CLI
  `0.20.6`;
- Node and Rust bindings;
- `package.json` and `package-lock.json`;
- focused corpus fixtures under `corpus/` for all supported stages;
- `docs/syntax-inventory.md` documenting stable nodes and known gaps;
- `docs/stages/stage-10-REPORT.md` and the resolved Stage 10 forecast;
- no highlighting queries or Python binding yet.

The current known gaps include layout-separated `with` clauses and case
alternatives, multiple views, nested with blocks, guards, richer dependent
patterns, declaration families beyond the current data slice, literate source,
and fixity-aware precedence.

## Next concrete action

Continue the staged M1 pipeline with Stage 11: author a bounded contract for
the next `with` decision, prioritizing layout/scanner support versus multiple
views and richer dependent branches. Keep Graphify changes out of scope.

## Verification status

- Stage 10 generation, focused debug tests, metadata inspection, full 20-fixture
  corpus tests, and `git diff --check` passed; see
  `docs/stages/stage-10-REPORT.md` for exact commands.
- The literal global-cache `npm test` remedy remains blocked by managed cache
  permissions; the documented x86_64 wrapper with a writable temporary HOME
  passed the full suite.
- `git worktree list` contains only the primary checkout after Stage 10
  cleanup.
- The Stage 10 executor branch was pushed for review history; `master` remains
  local and ahead of `origin/master` with the reviewed stage commits.

## External dependencies

- GitHub access is needed for future source comparison and upstream coordination.
- The future Graphify PR will target Graphify’s current language-extractor architecture.
- No credentials, tokens, or machine-local secrets are part of this handoff.
