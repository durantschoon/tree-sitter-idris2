# Decision Log

## D001 — Continue the existing grammar history

**Decision:** Maintain this repository as a continuation of `gwerbin/tree-sitter-idris2` rather than starting from an empty repository.

**Rationale:** The inherited grammar provides provenance and a small amount of reusable work. Its limited coverage is documented explicitly, so the fork is not presented as a complete parser.

**Consequence:** Preserve the ISC license and original copyright notice. Document substantial new work and the relationship to the archived parent repository.

## D002 — Keep the grammar general-purpose

**Decision:** Do not encode Graphify graph concepts in the Tree-sitter grammar.

**Rationale:** Editors, syntax highlighters, indexers, and other consumers need a language grammar, not a Graphify-specific intermediate representation.

**Consequence:** Graphify will own extraction policy and graph relationships in its own repository.

## D003 — Target Graphify after grammar stabilization

**Decision:** Treat Graphify as the first downstream integration, not as the owner of the parser.

**Rationale:** Graphify’s architecture expects a language-specific extractor plus registration, dependency, fixtures, and tests. A maintained grammar can serve Graphify and other tools at the same time.

**Consequence:** The eventual Graphify contribution should be a focused extractor PR, not a second parser implementation.

## D004 — Prefer syntax extraction before compiler semantics

**Decision:** The first release will not require Idris2, `idris2-lsp`, or a running compiler.

**Rationale:** Tree-sitter is useful for deterministic local parsing and incomplete source buffers. Compiler-assisted information can be added later without making basic parsing unavailable.

**Consequence:** Type-directed resolution, totality, elaboration, and proof-state data are explicitly deferred.

## D005 — Parse `.ipkg` separately

**Decision:** Handle `.ipkg` files in Graphify’s package-manifest layer rather than in the source grammar.

**Rationale:** Package metadata is project-level configuration, while the Tree-sitter grammar should remain focused on Idris 2 source syntax.

**Consequence:** Graphify should add suffix-based `.ipkg` detection and a defensive manifest parser.

## D006 — Defer Markdown-embedded Idris

**Decision:** Support `.idr` and `.lidr` before Markdown files containing Idris code blocks.

**Rationale:** Markdown mixes prose and code, and Graphify already has a documentation path for Markdown. Reclassifying or double-processing those files could create duplicate or misleading graph data.

**Consequence:** Markdown literate support is a separate design and follow-up milestone.

## D007 — Prefer correct edges over speculative edges

**Decision:** The first Graphify extractor should emit syntactic relationships confidently and limit cross-file/type-directed inference.

**Rationale:** Idris 2’s dependent and overloaded syntax makes naive name resolution especially prone to false positives.

**Consequence:** Start with modules, imports, declarations, containment, direct calls, and visible type references; add richer resolution only with fixtures proving its behavior.

## D008 — External scanner for indentation layout and literate bird tracks

**Decision:** Implement layout column tracking and bird-track (`>`) line handling in an external C scanner (`src/scanner.c`) rather than trying to model indentation layout in pure LR(1) grammar rules.

**Rationale:** Indentation-sensitive layout in Idris 2 (such as `with` clauses) and column-0 bird tracks in `.lidr` files require stateful column lookahead that exceeds context-free grammar capabilities without exploding ambiguity.

**Consequence:** `src/scanner.c` tracks layout block column state and newline boundaries, providing deterministic layout parsing and clean `.lidr` bird-track stripping while preserving infix symbolic operators.

## D009 — Initial release baseline completion

**Decision:** Finalize the Release 0.0.1 baseline covering Milestones M0–M3 across core `.idr` syntax, `.lidr` literate sources, Tree-sitter editor queries, multi-language bindings (C, Node.js, Rust), and verification against 3 real-world repositories.

**Rationale:** The syntax inventory is stabilized, tested across 27 corpus test suites, verified against real code, and packaged with standard runtime bindings.

**Consequence:** The parser is ready for downstream production usage and Graphify AST extraction.
