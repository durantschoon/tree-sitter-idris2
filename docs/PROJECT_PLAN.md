# Idris 2 Tree-sitter Project Plan

## Mission

Provide a maintained, testable Tree-sitter grammar for Idris 2 that is useful to editors, code-navigation tools, static analysis, and codebase knowledge-graph systems.

The first downstream integration target is Graphify. The grammar should remain general-purpose and should not encode Graphify-specific node or edge semantics.

## Current baseline

The repository currently contains:

- `grammar.js` with a small grammar for identifiers, numbers, characters, and strings;
- generated C parser sources;
- Node and Rust bindings;
- one small `test.idr` sample;
- no Tree-sitter corpus test suite;
- no highlighting queries;
- no Python binding or published Python package;
- package tooling pinned to an older Tree-sitter CLI generation.

This baseline should be treated as recoverable prior work, not as evidence of complete Idris 2 syntax coverage.

## Goals

### Grammar goals

- Parse ordinary `.idr` source files without requiring the Idris 2 compiler.
- Parse common Idris 2 declarations and expressions while tolerating incomplete editor buffers.
- Preserve useful named nodes for downstream tools.
- Support comments and documentation comments.
- Support operators, qualified names, implicit/explicit arguments, dependent function types, pattern matching, and layout-sensitive blocks.
- Add `.lidr` support for Bird-style literate Idris files.
- Provide syntax-highlighting queries.
- Publish bindings in at least the ecosystems needed by downstream consumers.

### Quality goals

- Every supported syntax feature has a focused corpus test.
- Real Idris 2 repositories are used as compatibility fixtures or external CI inputs.
- Parser failures are reproducible from a minimized fixture.
- Generated files are reproducible from the checked-in grammar and pinned tooling.
- The README clearly states supported syntax, known gaps, and release status.

### Downstream goals

- Make `.idr` and `.lidr` files discoverable by Graphify.
- Enable Graphify to extract modules, imports, declarations, calls, references, and containment edges.
- Add deterministic `.ipkg` package metadata extraction in Graphify.
- Submit a focused Graphify pull request after the grammar and fixtures are stable.

## Non-goals for the first release

- Reimplementing the Idris 2 compiler parser or type checker.
- Providing type-correctness, totality, elaboration, or proof-state information.
- Building an Idris 2 language server.
- Making the Tree-sitter grammar depend on an installed Idris 2 compiler.
- Parsing every literate format supported by Idris 2 on the first pass.
- Adding Graphify-specific semantics to the grammar repository.

## Milestones

### M0 — Inventory and grammar recovery

- Compare the inherited grammar with the current Idris 2 lexer/parser sources.
- Identify reusable work from other Idris Tree-sitter grammars.
- Establish the supported Tree-sitter CLI/runtime versions.
- Build a syntax inventory from Idris2, `idris2-lsp`, `idris2-pack`, and representative community packages.
- Decide whether to extend the inherited grammar or replace portions of it.

Exit criteria: a checked-in syntax inventory and a small corpus that demonstrates the intended node naming conventions.

### M1 — Core `.idr` grammar

Cover:

- module declarations and imports;
- namespaces and qualified names;
- identifiers and operator names;
- literals and comments;
- function declarations, clauses, and applications;
- type signatures and dependent function types;
- `data`, constructors, records, fields, interfaces, and implementations;
- pattern matching, `with`, and `where` blocks;
- `using`, `parameters`, `mutual`, and common visibility modifiers;
- pragmas and fixity declarations.

Exit criteria: corpus tests pass for each feature and representative source files produce no unexpected top-level parse errors.

### M2 — Literate source and editor robustness

- Add Bird-style `.lidr` extraction/parsing.
- Preserve source locations after literate preprocessing.
- Add malformed and incomplete-buffer tests.
- Add highlighting queries.

Exit criteria: common `.lidr` files parse, code lines retain useful locations, and incomplete declarations do not collapse the entire tree.

### M3 — Bindings and release hygiene

- Update `tree-sitter.json` and repository metadata as needed.
- Add or refresh bindings required by downstream consumers.
- Publish a Python package if Graphify’s integration uses Python bindings directly.
- Add CI for parser generation, corpus tests, bindings, and formatting.
- Document versioning and release compatibility.

Exit criteria: a clean checkout can build and test the grammar on supported platforms.

### M4 — Graphify integration

- Implement the Graphify Idris2 extractor in Graphify.
- Add `.idr` and `.lidr` dispatch.
- Add `.ipkg` package-manifest extraction.
- Validate against real repositories.
- Submit the Graphify pull request with fixtures and test evidence.

Exit criteria: `graphify extract <repo> --code-only` produces a useful graph from an Idris 2 project without an API key or compiler process.

## Definition of done

The initial public release is ready when:

1. The grammar parses the agreed M1/M2 syntax inventory.
2. Corpus tests cover every supported feature and known regression.
3. `.idr` and `.lidr` source locations are useful to downstream tools.
4. Node names are documented and stable enough for consumers.
5. CI regenerates and tests the parser from a clean checkout.
6. At least three real Idris 2 repositories have been tested.
7. Known unsupported syntax is documented rather than silently misrepresented.
8. The Graphify integration plan is either merged upstream or represented by a reproducible downstream prototype.

## Suggested first issues

- Replace the placeholder top-level grammar with declarations and comments.
- Add a Tree-sitter corpus test for a module with imports and a function.
- Add tests for dependent function types and implicit arguments.
- Add `data`, record, interface, and implementation fixtures.
- Add operator and qualified-name fixtures.
- Investigate Bird-style `.lidr` handling.
- Add highlighting queries.
- Create a Graphify fixture repository containing `.idr`, `.lidr`, and `.ipkg` files.
