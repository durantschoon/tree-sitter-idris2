# Known problems and remedies

This directory is the append-only, repository-local registry for
directory-dependent environment failures. Problem IDs are stable and should be
referenced by stage prompts and reports.

| ID | Scope | Remedy |
| --- | --- | --- |
| `kp-macos-treesitter-cache` | macOS/Rosetta Tree-sitter parser cache | Rebuild the cache with the repository's x86_64 compiler wrapper before running `npm test`; see the entry for the exact command. |

When a new problem is found, add a focused entry with symptoms, affected
directory/tooling context, exact tested remedy, verification command, and date.
Do not overwrite an existing entry when the remedy changes; append a dated
revision or create a new problem ID.
