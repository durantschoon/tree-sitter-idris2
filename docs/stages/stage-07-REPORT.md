# Stage 07 report — Expand case patterns and guards

## Summary

Completed the feasible syntax-only portion of Stage 07. Bare capitalized
constructors in case alternatives now use a case-only `constructor_pattern`
node, and the corpus adds regression coverage for bare constructors,
unparenthesized applied constructors, nested cases, and incomplete branches.
The inspected Idris 2 parser does not expose a separate case-guard delimiter;
its relevant branch forms are `=>` and `impossible`, so guard parsing was
blocked and remains explicitly deferred rather than guessed.

## Files changed

- `grammar.js` — adds the case-only bare-constructor pattern entry and the
  conflict declaration needed to distinguish it from applied constructors.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated named-node metadata, including
  `constructor_pattern`.
- `src/parser.c` — regenerated parser source.
- `corpus/case-patterns.txt` — complete bare/applied/nested pattern fixtures.
- `corpus/incomplete-case-patterns.txt` — incomplete branch recovery fixture.
- `docs/syntax-inventory.md` — records the new node, compatibility boundary,
  and guard/impossible/layout gaps.
- `docs/stages/stage-07-REPORT.md` — this execution report.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed with the pinned CLI;
  generated artifacts are synchronized.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh"
  -dynamiclib -fPIC -O2 -Isrc src/parser.c
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so` — passed; `file`
  verified the cache as Mach-O x86_64 for the macOS/Rosetta environment.
- `./node_modules/.bin/tree-sitter test -u` — passed; refreshed both new
  corpus expectations.
- `./node_modules/.bin/tree-sitter test -d -f 'case constructor patterns'`
  — passed; debug output showed bare `constructor_pattern`, applied
  `constructor_application_pattern`, nested cases, and no top-level error.
- `./node_modules/.bin/tree-sitter test -d -f 'incomplete constructor patterns'`
  — passed; incomplete bare branch recovery retained the case/declaration
  tree without a top-level error.
- `./node_modules/.bin/tree-sitter test` — passed; all fourteen corpus fixtures
  passed, including the Stage 01–06 fixtures.
- `npm test` — first attempt hit the known cache-write permission; after the
  exact documented remedy and targeted permission, passed with all fourteen
  fixtures.
- `git diff --check` — passed.

## Known problems and remedies

Applicable problem: `kp-macos-treesitter-cache`. The exact documented remedy
was required: rebuild the cache with the repository's x86_64 compiler wrapper
before the full test gate. The resulting cache architecture was verified with
`file`, and the subsequent Tree-sitter tests and `npm test` passed.

## Deviations

- The executor stopped after a partial grammar edit and an interrupted package
  install. The coordinator recovered the isolated worktree, audited the edit,
  regenerated the parser, added the fixtures and report, and independently ran
  every gate before committing.
- No separate guard form was implemented. The inspected Idris 2 parser source
  uses `=>` and `impossible` branch forms rather than a distinct case-guard
  delimiter. Implementing a guessed guard syntax would violate the syntax-only
  and Blocked-protocol requirements, so this portion remains deferred.
- Unparenthesized applied constructor patterns were already accepted by the
  Stage 06 case-alternative rule. Stage 07 preserves that representation and
  adds explicit regression coverage rather than introducing a duplicate node.

## Open questions and recommended follow-up

- Decide whether `impossible` branches should receive a dedicated case-
  alternative node or remain a separate branch form.
- Design layout-aware alternatives and `with`/dependent pattern syntax only
  after deciding whether an external scanner is required.
- Evaluate lower-case constructor spellings and richer pattern forms against
  the current syntax inventory before adding more shared pattern rules.

## Contract confirmation

Only the allowed implementation/documentation files changed: `grammar.js`,
generated `src/**`, `corpus/**`, `docs/syntax-inventory.md`, and this report.
The sealed forecast was not modified.
