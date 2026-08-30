# Stage 15 — Add and verify multi-language bindings

## Motivation

Milestone M1 established the core `.idr` grammar, and Milestone M2 added literate
source handling and editor query files. Milestone M3 prepares the grammar for
release and packaging across language ecosystems.

To allow downstream tools (Neovim plugins, Rust crates, Node.js packages, C
applications, and Graphify integrations) to consume `tree-sitter-idris2`, the
repository must package clean, verifiable runtime bindings:
- **C**: C header, sources (`src/parser.c`, `src/scanner.c`), and `tree-sitter-idris2.pc.in`
- **Node.js**: `binding.gyp` updated with `src/scanner.c`, `bindings/node/index.js`
- **Rust**: `Cargo.toml`, `bindings/rust/build.rs` compiling both `src/parser.c` and
  `src/scanner.c`, `bindings/rust/lib.rs` exporting language and query constants

This stage verifies and hardens these bindings, ensuring they compile and link
the external scanner (`src/scanner.c`) alongside the parser.

## Change

1. Update `binding.gyp` to include `src/scanner.c` in `sources`.
2. Update `bindings/rust/build.rs` to compile and link `src/scanner.c` with rerun
   triggers.
3. Update `bindings/rust/lib.rs` to expose `HIGHLIGHTS_QUERY`, `INJECTIONS_QUERY`,
   `TAGS_QUERY`, and verify cargo build/test.
4. Add `tree-sitter-idris2.pc.in` for C pkg-config consumers.
5. Verify that `npm test`, node build (`npm run build` or node binding load), and
   rust tests (`cargo test` if cargo is present) compile and link without unresolved
   scanner symbols.
6. Update `docs/syntax-inventory.md` and produce `docs/stages/stage-15-REPORT.md`.

## Ground rules

- Preserve all Stage 01–14 grammar rules, queries, tests, and scanner behavior.
- Ensure all bindings include `src/scanner.c` so external scanner symbols resolve
  cleanly across platforms.
- Do not introduce breaking changes to node names or public API symbols.

## Allowed files

The executor may create or modify only:

- `docs/syntax-inventory.md`
- `binding.gyp`
- `bindings/rust/build.rs`
- `bindings/rust/lib.rs`
- `Cargo.toml`
- `tree-sitter-idris2.pc.in`

The executor may also create the required report:

- `docs/stages/stage-15-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run these commands from the executor worktree:

1. `npm test`
2. `git diff --check`

Verify that `binding.gyp` and `bindings/rust/build.rs` reference `src/scanner.c`
and that query exports match existing `queries/*.scm` files.

## Definition of Done

- `binding.gyp` includes `src/scanner.c`.
- `bindings/rust/build.rs` compiles `src/scanner.c`.
- `bindings/rust/lib.rs` exports queries and passes syntax validation.
- `tree-sitter-idris2.pc.in` is provided for C consumers.
- `npm test` passes.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the report.

## Commit

Use exactly this single-line commit message:

`Add and verify multi-language bindings`

## Report requirements

Write `docs/stages/stage-15-REPORT.md` with the implementation summary; files
updated; bindings verified; verification commands/results; deviations; open
questions; and whitelist confirmation.

## Blocked protocol

If bindings require changes to core parser structures or dependencies outside
the allowed list, record concrete evidence, state the smallest decision needed,
leave unrelated files untouched, and return the worktree for coordinator review.
