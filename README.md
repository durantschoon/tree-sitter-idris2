# tree-sitter-idris2

An Idris 2 grammar for [Tree-sitter](https://tree-sitter.github.io/tree-sitter/), providing a maintained syntax foundation for editors and downstream tools such as [Graphify](https://github.com/Graphify-Labs/graphify).

This repository is a maintained continuation of [`gwerbin/tree-sitter-idris2`](https://github.com/gwerbin/tree-sitter-idris2).

## Status

**Release 0.0.1 (Milestones M0–M3 Complete)**.

The parser covers the standardized core Idris 2 recoverable syntax:
- **Module & Declarations**: `module`, `import`, type signatures, function definitions.
- **Data & Types**: `data ... where` declarations, explicit/implicit binders, dependent types, unit types.
- **Pattern Matching & Expressions**: Lambdas, case expressions, impossible branches, single and multiple-view `with` clauses (both explicit delimiter and indentation layout forms).
- **Literate Idris**: `.lidr` bird-track literate code and prose parsing.
- **Editor Queries**: Syntax highlighting (`queries/highlights.scm`), tags outline (`queries/tags.scm`), and doc comment injections (`queries/injections.scm`).
- **Multi-Language Bindings**: C, Node.js, and Rust runtime packages.
- **Verification**: 27 corpus test suites and 3 real-world repository test suites passing.

## Project documents

- [Syntax inventory](docs/syntax-inventory.md) — supported constructs, AST nodes, and error recovery boundaries.
- [Project plan](docs/PROJECT_PLAN.md) — goals, scope, milestones, and definition of done.
- [Graphify integration design](docs/GRAPHIFY_INTEGRATION.md) — proposed extractor contract and upstream PR boundary.
- [Decision log](docs/DECISIONS.md) — architectural decisions and their rationale.
- [Handoff note](docs/HANDOFF.md) — repository state and resumption guide.

## Development & Testing

Run the full test suite (corpus fixtures + real-world repository examples):

```sh
npm install
npm test
```

For Rust bindings:

```sh
cargo test
```

## License and provenance

The inherited code is released under the ISC License. See [LICENSE.txt](LICENSE.txt).
