# Graphify Integration Design

## Boundary

`tree-sitter-idris2` owns syntax parsing, named syntax nodes, source locations, and highlighting.

Graphify owns extraction policy, graph node identities, cross-file resolution, package metadata, and graph relationships.

The grammar must not emit Graphify-specific concepts such as `calls`, `imports`, or `depends_on` as part of its Tree-sitter node model.

## Why Graphify needs more than a grammar

Graphify’s extraction pipeline turns parsed source into `{nodes, edges}` data and then resolves/builds a graph. Adding a language requires more than registering an extension: it also needs a language extractor, a Tree-sitter dependency, fixtures, and tests.

Idris 2 also has project-level information that is not present in an individual source file. `.ipkg` files describe package names, dependencies, source directories, modules, and executables, so package metadata should be extracted separately from the source grammar.

## Proposed Graphify changes

### Source files

Add an Idris2 extractor, preferably as:

```text
graphify/extractors/idris2.py
```

Register it in the Graphify dispatch layer and add `.idr` and `.lidr` to code-file discovery.

The extractor should use the Python Tree-sitter binding and follow Graphify’s existing extraction schema:

```json
{
  "nodes": [],
  "edges": []
}
```

Every emitted node and edge should include stable source-file and source-location information where available.

### Package manifests

Extend Graphify’s package-manifest handling for `.ipkg` files. Unlike fixed names such as `Cargo.toml`, Idris package files may have project-specific filenames, so detection should be suffix-based rather than limited to one basename.

The first parser should be a small, defensive native parser for the fields relevant to graph construction:

- `package`;
- `version`;
- `depends`;
- `sourcedir`;
- `modules`;
- `main`;
- `executable`.

Malformed manifests should return a structured extraction warning and must not abort the entire repository scan.

The Idris2 compiler’s package JSON output may be useful as an optional validation tool, but ordinary Graphify extraction should not require an Idris2 installation or a compiler subprocess.

## Proposed graph mapping

| Idris 2 source | Graphify output | Confidence |
|---|---|---|
| Source file | File node | `EXTRACTED` |
| `module Foo.Bar` | Module node and file containment | `EXTRACTED` |
| `import Foo.Bar` | Import edge to resolved module/file | `EXTRACTED` |
| Function declaration | Function node | `EXTRACTED` |
| Function application | Call edge | `EXTRACTED` syntactically; resolution may be `INFERRED` |
| Type name in a signature | Reference edge | `EXTRACTED` |
| `data T = A | B` | Type node containing constructors | `EXTRACTED` |
| `record T where` | Record node containing fields | `EXTRACTED` |
| `interface I a where` | Interface node containing methods | `EXTRACTED` |
| `implementation I T` | `implements` edge | `EXTRACTED` |
| `.ipkg` package declaration | Package node | `EXTRACTED` |
| `.ipkg` `depends` field | `depends_on` edges | `EXTRACTED` |

The first version should prefer a smaller number of correct edges over speculative type-directed resolution.

## Module resolution

For a project with `sourcedir = "src"`, a module such as `Foo.Bar` should initially be probed as:

```text
src/Foo/Bar.idr
src/Foo/Bar.lidr
```

Resolution should:

- use the project root and `.ipkg` `sourcedir` when available;
- support multiple package files without assuming the repository root is the package root;
- preserve unresolved external imports as metadata or warnings rather than inventing local files;
- avoid machine-absolute paths in node IDs;
- remain stable when extraction is run from different working directories.

## Literate files

`.lidr` files should be parsed through a source-preserving literate adapter or a grammar mode that keeps original byte and line locations.

Markdown-embedded Idris should remain out of the first Graphify PR. Graphify currently treats Markdown as documentation, and changing that behavior would require a careful mixed-document/code extraction design.

## Fixtures and acceptance tests

The Graphify PR should add at least:

```text
tests/fixtures/sample.idr
tests/fixtures/sample.lidr
tests/fixtures/sample.ipkg
```

Tests should verify:

- file detection;
- parser success and error reporting;
- module and import extraction;
- function, data, record, interface, and implementation nodes;
- calls and type references;
- `.ipkg` package/dependency extraction;
- source locations;
- no dangling local edges;
- stable output across repeated extraction.

## Real-repository validation

Use a small compatibility matrix including:

- [Idris2](https://github.com/idris-lang/Idris2);
- [idris2-lsp](https://github.com/idris-community/idris2-lsp);
- [idris2-pack](https://github.com/stefan-hoeck/idris2-pack);
- at least two smaller community packages with different declaration and package layouts.

Record both successful coverage and known misses. Real repositories should be used for validation, not copied wholesale into this repository without checking their licenses.

## Upstream sequence

1. Stabilize the grammar and its own corpus tests here.
2. Publish the binding required by Graphify.
3. Open a Graphify issue describing the extractor boundary.
4. Submit the Graphify extractor, package parser, fixtures, and tests as one focused PR.
5. Use follow-up PRs for semantic resolution, Markdown literate support, or compiler-assisted metadata.
