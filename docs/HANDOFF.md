# Handoff Note

Updated: 2026-08-28

## Objective

Develop this repository into a maintained Idris 2 Tree-sitter grammar and use it as the syntax foundation for a later Graphify integration.

## What has happened

- The repository was cloned from `git@github.com:durantschoon/tree-sitter-idris2.git`.
- The checkout started clean on `master`, tracking `origin/master`.
- The inherited grammar was inspected and confirmed to be an early baseline covering a limited set of identifiers and literals.
- No parser implementation changes have been made yet.
- Planning documentation was added:
  - `README.md`
  - `docs/PROJECT_PLAN.md`
  - `docs/GRAPHIFY_INTEGRATION.md`
  - `docs/DECISIONS.md`
  - this file

## Durable decisions

- Continue the inherited grammar history and preserve the ISC license and original copyright notice.
- Keep this repository general-purpose; Graphify-specific graph semantics belong in Graphify.
- Target `.idr` and `.lidr` before Markdown-embedded Idris.
- Keep the first parser syntax-based and independent of an installed Idris2 compiler, LSP, or network service.
- Handle `.ipkg` package metadata in Graphify’s package-manifest layer rather than in the Tree-sitter grammar.
- Prefer correct, syntactic relationships over speculative type-directed resolution.

See `docs/DECISIONS.md` for the full rationale.

## Current repository state

The inherited repository contains:

- `grammar.js`;
- generated parser sources under `src/`;
- Node and Rust bindings;
- `package.json` and `package-lock.json`;
- `test.idr`;
- no corpus test directory;
- no highlighting queries;
- no Python binding.

The planning files are currently uncommitted and are the only working-tree changes known from this session.

## Next concrete action

Begin M0 in `docs/PROJECT_PLAN.md`:

1. Inspect current Idris2 lexer/parser sources and the inherited grammar’s referenced commit.
2. Compare other Idris Tree-sitter grammar work.
3. Create a syntax inventory and establish the supported Tree-sitter CLI/runtime versions.
4. Add the first corpus fixture for a module, import, type signature, and function definition.

Do not begin Graphify changes until the grammar’s core node naming and corpus-test conventions are established.

## Verification status

- `git status --short --branch`: passed; branch is `master...origin/master` with the new planning files untracked.
- `git diff --check`: passed for tracked changes; newly added files should be included in the first staged diff check.
- Parser tests: not run during this planning-only session.
- No commit or push was performed.

## External dependencies

- GitHub access is needed for future source comparison and upstream coordination.
- The future Graphify PR will target Graphify’s current language-extractor architecture.
- No credentials, tokens, or machine-local secrets are part of this handoff.
