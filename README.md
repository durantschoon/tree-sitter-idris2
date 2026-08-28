# tree-sitter-idris2

An Idris 2 grammar for [Tree-sitter](https://tree-sitter.github.io/tree-sitter/), intended to provide a maintained syntax foundation for editors and downstream tools such as [Graphify](https://github.com/Graphify-Labs/graphify).

This repository is a maintained continuation of [`gwerbin/tree-sitter-idris2`](https://github.com/gwerbin/tree-sitter-idris2). The inherited grammar is currently only a small baseline; the project plan describes the work needed to make it useful for real Idris 2 codebases.

## Status

Early planning and grammar-recovery stage. The current grammar covers a limited set of identifiers and literals. It is not yet a complete Idris 2 parser.

## Project documents

- [Project plan](docs/PROJECT_PLAN.md) — goals, scope, milestones, and definition of done.
- [Graphify integration design](docs/GRAPHIFY_INTEGRATION.md) — proposed extractor contract and upstream PR boundary.
- [Decision log](docs/DECISIONS.md) — architectural decisions and their rationale.
- [Handoff note](docs/HANDOFF.md) — current state and the exact next resumption step.

## Development

The existing repository uses the Tree-sitter CLI through npm:

```sh
npm install
npm test
```

The generated parser files should be regenerated with the project’s pinned Tree-sitter tooling whenever the grammar changes.

## License and provenance

The inherited code is released under the ISC License. See [LICENSE.txt](LICENSE.txt). New contributions should preserve the original copyright and license notice while documenting substantial new contributions.
