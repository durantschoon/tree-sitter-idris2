# Pipeline goal charter

Established: 2026-08-28 from the repository's existing project plan and
handoff. The project direction is currently explicit in those documents, so
this charter records that baseline before the first forecast. Amendments are
append-only and dated.

## Destination and done-condition

Develop this repository into a maintained, testable Idris 2 Tree-sitter
grammar, then provide the syntax foundation for a later Graphify integration.
The initial release is done when the agreed M1/M2 syntax inventory is parsed,
corpus tests cover supported features, `.idr` and `.lidr` locations are useful,
node names are stable and documented, clean-checkout CI regenerates and tests
the parser, three real Idris 2 repositories have been tested, and unsupported
syntax is documented.

## Explicit non-goals

- Reimplement the Idris 2 compiler parser or type checker.
- Provide type correctness, totality, elaboration, or proof-state information.
- Build an Idris 2 language server.
- Require an installed Idris2 compiler, LSP, or network service.
- Put Graphify-specific semantics in this grammar repository.
- Parse every literate format on the first pass.

## Quality bar

The sacred gates are `git diff --check` and `npm test`. Each supported syntax
feature must have a focused corpus test, generated files must be reproducible,
and relationships must remain syntactic rather than speculative.

## Appetite and timebox

Work is milestone-driven with independently reviewable stages. No fixed
calendar deadline is recorded; each stage should be small enough for one
executor worktree and one independent review pass.

## Known unknowns

- The current grammar is only an early identifiers-and-literals baseline.
- The exact current Idris2 lexer/parser behavior and reusable upstream grammar
  work still need inventory.
- The supported Tree-sitter CLI/runtime and binding matrix needs to be
  established.
- Layout-sensitive syntax and `.lidr` source-location preservation may require
  design decisions after fixtures exist.
- Graphify's current extractor architecture will be verified later, after the
  grammar's node naming and corpus conventions stabilize.
