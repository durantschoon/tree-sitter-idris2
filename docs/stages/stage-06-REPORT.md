# Stage 06 report — Add case expressions and pattern alternatives

## Summary

Completed the bounded, syntax-only case-expression slice. The grammar now
recognizes delimiter-based `case ... of` expressions with repeated
`case_alternative` children, named `scrutinee`, `pattern`, and `body` fields,
and explicit `|` separators. Existing expression and pattern nodes remain in
use, including `constructor_application_pattern`. A focused corpus covers
single and multiple alternatives, literals, nested cases, lambda/function
bodies, and incomplete branch recovery.

## Files changed

- `grammar.js` — adds case expressions, alternatives, bounded recovery, and a
  case-local body layer that stops at explicit alternative separators while
  retaining ordinary infix behavior elsewhere.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated named-node and field metadata.
- `src/parser.c` — regenerated parser source.
- `corpus/case-expressions.txt` — focused complete case-expression fixtures.
- `corpus/incomplete-case-expressions.txt` — incomplete branch recovery
  fixture.
- `docs/syntax-inventory.md` — documents Stage 06 support, fields,
  compatibility, and remaining matching/layout gaps.
- `docs/stages/stage-06-REPORT.md` — this execution report.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated artifacts are
  synchronized.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh"
  -dynamiclib -fPIC -O2 -Isrc src/parser.c
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so` — passed after
  applying the documented macOS/Rosetta cache remedy.
- `./node_modules/.bin/tree-sitter test -u` — passed; refreshed the Stage 06
  complete and incomplete corpus expectations.
- `./node_modules/.bin/tree-sitter test` — passed; all twelve corpus fixtures
  passed, including all Stage 01–05 fixtures.
- `./node_modules/.bin/tree-sitter test -d -f 'case expressions and pattern
  alternatives'` — passed; debug output showed named case expressions,
  alternatives, nested branches, and no unexpected top-level `ERROR` node.
- `./node_modules/.bin/tree-sitter test -d -f 'incomplete case expressions'`
  — passed; the incomplete branch retained its surrounding declaration tree
  without a top-level `ERROR` node.
- `npm test` — passed; all twelve corpus fixtures passed.
- `git diff --check` — passed; no whitespace errors.

## Known problems and remedies

Applicable problem: `kp-macos-treesitter-cache`. The exact documented remedy
was required in this managed macOS/Rosetta environment. The parser cache was
rebuilt with the repository's x86_64 compiler wrapper before the final test
gates, and the rebuild and subsequent `npm test` both passed.

## Deviations

- The original executor session ended after partial grammar and fixture edits,
  without a report or commit. The coordinator recovered the isolated worktree,
  audited the partial diff, resolved the separator/recovery interactions, and
  completed the report and commit there. The implementation allow-list was
  preserved.
- Complete case alternatives use a case-local expression layer so `|` is
  reserved as a branch separator inside a case without removing the existing
  generic operator behavior outside cases. This adds hidden factoring rules but
  preserves the public `expression`, `infix_expression`, and `operator` tree
  shapes.
- Recovery is intentionally limited to an incomplete branch after `of`, such
  as `case value of Just x =>`. Missing `of` and layout-separated alternatives
  remain deferred rather than being represented with speculative top-level
  recovery.
- Bare constructor alternatives such as `Nothing` were not included in the
  focused fixture because the bounded existing constructor-application rule
  requires an argument. The inventory records bare constructor patterns as a
  follow-up gap; capitalized constructor applications such as `Just x` remain
  covered.

## Open questions and recommended follow-up

- Decide whether bare constructor patterns and lower-case constructor
  spellings should receive dedicated syntax nodes.
- Add layout-separated case alternatives and `with` blocks only with a clear
  external-scanner or layout-state design.
- Add guards, pattern alternatives beyond the bounded constructor form, and
  fixity-aware precedence in later stages.

## Contract confirmation

Only the allowed implementation/documentation files changed:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`,
`src/node-types.json`, `src/parser.c`, `corpus/**`, and the required
`docs/stages/stage-06-REPORT.md`. The sealed forecast was not modified.
