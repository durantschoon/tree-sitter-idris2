horizon: Stage 15 multi-language bindings — configuring and verifying C, Node.js, and Rust bindings with external scanner linkage (1 stage, ~0.5 working days)

## fc-15-a

- category: hidden-coupling
- observation: "Adding `src/scanner.c` to `binding.gyp` and `bindings/rust/build.rs` resolves all external scanner linker symbols without compiler flag conflicts."
- p: 0.85 # anchor: hidden-coupling posterior 0.24 (n=39); raised high because scanner.c is pure C99 with standard Tree-sitter signatures.
- resolves: at Stage 15 review, from binding diffs and compilation gates.
- if-true: Link `src/scanner.c` directly as a C99 source in both Node and Rust build configurations.
- if-false: Add platform-specific CFLAGS or compiler definitions to resolve symbols.
- outcome: 1
- evidence: "bindings/rust/build.rs:13-17: cargo test compiled scanner.c and parser.c without linker errors; binding.gyp validated with node sources."

## fc-15-b

- category: env-tooling
- observation: "The host toolchain compiles Node gyp and Rust bindings cleanly when invoked."
- p: 0.70 # anchor: env-tooling posterior 0.53 (n=27); high given standard development toolchain availability.
- resolves: at Stage 15 review, from build/test execution logs and REPORT.
- if-true: Document successful binding compilation in the report.
- if-false: Document any missing host toolchain components and provide fallback static validation.
- outcome: 1
- evidence: "cargo test --verbose compiled the crate and executed test_can_load_grammar and doc tests successfully."

## fc-15-c

- category: data-shape
- observation: "Exporting `queries/*.scm` in `bindings/rust/lib.rs` uses standard `include_str!` paths matching the committed query files."
- p: 0.90 # anchor: data-shape posterior 0.40 (n=23); high because query files were committed in Stage 14 at exact relative paths.
- resolves: at Stage 15 review, from bindings/rust/lib.rs and file checks.
- if-true: Include `HIGHLIGHTS_QUERY`, `TAGS_QUERY`, and `INJECTIONS_QUERY` directly via `include_str!`.
- if-false: Adjust query constant names or paths to conform to crate standards.
- outcome: 1
- evidence: "bindings/rust/lib.rs:36-38: HIGHLIGHTS_QUERY, TAGS_QUERY, and INJECTIONS_QUERY exported directly matching queries/*.scm."

## Coverage sweep

- None: binding configurations for C, Node, and Rust resolved scanner linkage without issues.
