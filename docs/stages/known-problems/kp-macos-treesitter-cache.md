# kp-macos-treesitter-cache

## Scope

This repository's pinned `tree-sitter-cli` can run under Rosetta on macOS while
Clang produces an arm64 parser library. The CLI also caches the parser at a
global path without accounting for that architecture. In the repository
directory, `npm test` may therefore fail while writing or loading
`~/Library/Caches/tree-sitter/lib/idris2.so`.

## Remedy

From the repository or executor worktree, rebuild the cached parser with the
repository wrapper before running the test gate:

```sh
CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" \
  -dynamiclib -fPIC -O2 -Isrc src/parser.c \
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so
```

Then run the exact gate `npm test`. If the cache path is not writable in a
managed environment, request targeted permission for the cache rebuild and
record that fact in the stage report.

## Verification

`npm test` must pass all corpus fixtures after the rebuild. This remedy was
verified during Stage 03 on 2026-08-28.
