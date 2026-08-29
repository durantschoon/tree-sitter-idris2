# Stage 08 report — Add impossible case branches

## Implementation summary

Stage 08 adds bounded syntax-only support for explicit-bar case alternatives
whose branch terminator is `impossible`. The new named
`impossible_case_alternative` preserves a required `pattern` field and has no
`body`; ordinary `case_alternative` remains unchanged with its required
`pattern` and `body` fields. Complete and incomplete fixtures cover mixed
ordinary/impossible branches, nested case bodies, function bodies, and a
trailing separator recovery case.

## Files changed

- `grammar.js` — adds the impossible alternative, its bounded recovery rule,
  the `impossible` token, and case-expression choice/recovery wiring.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated metadata for the new node and fields.
- `src/parser.c` — regenerated parser source.
- `corpus/impossible-case-branches.txt` — complete mixed, nested, and
  function-body fixtures.
- `corpus/incomplete-impossible-case-branches.txt` — incomplete trailing-bar
  recovery fixture.
- `docs/syntax-inventory.md` — documents the source spelling, node contract,
  compatibility boundary, and deferred layout/guard/richer-pattern gaps.
- `docs/stages/stage-08-REPORT.md` — this report.

## Source evidence and boundary

The current Idris 2 lexer reserves `impossible` as a keyword in
`Parser.Lexer.Source`:
<https://github.com/idris-lang/Idris2/blob/main/src/Parser/Lexer/Source.idr>.
The Idris-dev language-history entry explicitly documents an impossible case
alternative as `(x::xs) impossible` followed by `; [] => True`, inside a
braced case block:
<https://github.com/idris-lang/Idris-dev/blob/master/CHANGELOG.md#L693-L698>.

This grammar implements the smallest directly evidenced branch spelling,
`pattern impossible`, inside the stage's existing explicit-bar case slice. It
does not claim support for the source form's braces, semicolons, layout
separation, dependent pattern semantics, or exhaustiveness/unreachability
checking.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated files are
  synchronized.
- `./node_modules/.bin/tree-sitter test -d -f 'impossible case branches'` —
  passed; debug trace showed ordinary/impossible alternatives, nesting, and no
  top-level error in the fixture's parsed source.
- `./node_modules/.bin/tree-sitter test -d -f 'incomplete impossible case branches'`
  — passed; debug trace showed incomplete recovery retaining the case tree and
  no top-level error in the fixture's parsed source.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh"
  -dynamiclib -fPIC -O2 -Isrc src/parser.c
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so` — passed; `file`
  verified the cache as a Mach-O x86_64 shared library.
- `npm test` — passed; all 16 corpus fixtures passed, including all prior
  Stage 01–07 fixtures.
- `git diff --check` — passed.
- Generated node metadata inspection — passed; `case_alternative.body` is
  required, while `impossible_case_alternative.pattern` is required and no
  body field is exposed.

## Known problems and remedies

Applicable problem: `kp-macos-treesitter-cache`. The exact documented remedy
was required after the first focused debug attempt could not write the global
cache path. The cache was rebuilt with the repository's x86_64 compiler
wrapper, then the focused tests and exact `npm test` gate passed.

## Deviations

- The upstream example uses braces and semicolons, but this stage contract
  explicitly bounds the grammar to the existing explicit-bar case slice.
  Braces, semicolons, and layout-separated alternatives remain deferred.
- A separate named node was added because `impossible` terminates the branch
  without an expression body; reusing `case_alternative` would misrepresent
  its required `body` field.
- No semantic unreachable-case or constructor analysis was added.

## Open questions and recommended follow-up

- Design a layout-aware case block, including brace/semicolon alternatives,
  before expanding beyond explicit bars; determine whether an external scanner
  is needed.
- Define a separate contract for `with`, guards, dependent/richer patterns,
  and impossible pattern-matching lambdas.
- Revisit whether later layout-aware syntax should preserve this dedicated
  impossible node or unify branch nodes through a future approved contract.

## Contract confirmation

Within the executor worktree, only the allowed implementation/documentation
files changed: `grammar.js`, generated `src/grammar.json`,
`src/node-types.json`, and `src/parser.c`, `corpus/**`,
`docs/syntax-inventory.md`, and this required report. The primary checkout was
left untouched by this continuation; its separate pre-existing untracked
fixture was not staged.
