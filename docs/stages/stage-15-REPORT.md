# Stage 15 report — Add and verify multi-language bindings

## Summary

Configured, compiled, and verified multi-language runtime bindings for C, Node.js,
and Rust. All bindings now compile and link `src/scanner.c` alongside `src/parser.c`
to ensure complete symbol resolution across language runtimes. Rust bindings export
standard Tree-sitter query constants (`HIGHLIGHTS_QUERY`, `TAGS_QUERY`,
`INJECTIONS_QUERY`), and `tree-sitter-idris2.pc.in` provides pkg-config metadata
for C applications.

## Files changed

- `binding.gyp` — added `src/scanner.c` to Node.js gyp compilation sources.
- `bindings/rust/build.rs` — configured `cc::Build` to compile `src/scanner.c` and
  added rerun triggers for `src/scanner.c`.
- `bindings/rust/lib.rs` — exported `HIGHLIGHTS_QUERY`, `TAGS_QUERY`, and
  `INJECTIONS_QUERY` via `include_str!`.
- `tree-sitter-idris2.pc.in` — added pkg-config configuration template for C.
- `docs/syntax-inventory.md` — recorded Stage 15 multi-language binding support.
- `docs/stages/stage-15-REPORT.md` — this report.

## Bindings verified

- **Rust**: `cargo test` compiled `src/parser.c` and `src/scanner.c` into a static
  library, executed the `test_can_load_grammar` test, ran doc-tests, and passed.
- **Node.js**: Verified `binding.gyp` source definitions and validated module loading.
- **C**: Provided `tree-sitter-idris2.pc.in` and validated source compilation with
  C99 compiler flags.

## Commands and results

- `cargo test --verbose` — passed all tests (`test_can_load_grammar`, doc-tests).
- `cargo clean` — cleaned intermediate target directory.
- `npm test` — passed all 27 corpus test suites.
- `git diff --check` — passed with 0 whitespace issues.

## Known problems and remedy

None. Both `npm test` and `cargo test` executed cleanly on the host environment.

## Deviations

None.

## Open questions and recommended follow-up

- Final release milestone step: **Stage 16 (Real-Repo Integration CI)** to parse
  and validate against three real-world Idris 2 codebases.

## Whitelist confirmation

Only the allowed files were created or modified:
`binding.gyp`, `bindings/rust/build.rs`, `bindings/rust/lib.rs`,
`tree-sitter-idris2.pc.in`, `docs/syntax-inventory.md`, and
`docs/stages/stage-15-REPORT.md`.
