# Stage 09 report — Establish layout-aware case alternatives

## Implementation summary

Stage 09 adds the smallest source-evidenced braced case block that does not
require an external scanner: `case scrutinee of { alternative ; alternative ;
}`. It preserves explicit-bar cases, named `scrutinee` and repeated
`alternative` fields, required ordinary `pattern`/`body` fields, and required
impossible `pattern` fields. Indentation-separated alternatives remain
deferred because they require parser column/indentation state.

## Files changed

- `grammar.js` — adds brace/semicolon case alternatives, bounded incomplete
  brace recovery, and separator-aware case-body lexing.
- `src/grammar.json`, `src/node-types.json`, `src/parser.c` — regenerated with
  Tree-sitter CLI `0.20.6`.
- `corpus/case-layout-alternatives.txt` — complete braced fixtures covering
  ordinary/impossible mixtures, trailing semicolon, nesting, function bodies,
  and an infix body.
- `corpus/incomplete-case-layout-alternatives.txt` — missing closing-brace
  recovery fixture.
- `docs/syntax-inventory.md` — records source evidence, stable tree shape,
  supported boundary, and deferred layout/`with`/guard gaps.
- `docs/stages/stage-09-REPORT.md` — this report.

## Idris 2 source evidence and boundary

The current `Parser.Lexer.Source` reserves `impossible`, lists `;` among
symbols, includes `{` among grouped symbols, maps `{` to `}`, and filters out
`Space` tokens before parsing:

- <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Lexer/Source.idr>

The current `Parser.Rule.Source` has explicit brace-block rules using
`blockEntries AnyIndent` and `symbol "}"`; its `terminator` consumes
`symbol ";"` and otherwise uses `column`/`ValidIndent` to recognize
indentation-based entries:

- <https://github.com/idris-lang/Idris2/blob/main/src/Parser/Rule/Source.idr>

The upstream language-history example directly shows the mixed form
`case Vect.Nil {a=Nat} of { (x::xs) impossible ; [] => True }`:

- <https://github.com/Idris-lang/Idris-dev/blob/master/CHANGELOG.md#L693-L698>

This implementation supports the bounded ASCII-pattern subset
`case value of { Nothing impossible; Just x => x }`, including a trailing
semicolon. Braces and semicolons are structural and anonymous in the Tree-sitter
tree. Explicit bars and generic infix operators remain compatible. The grammar
does not infer indentation, accept newline-only alternatives, or add `with`,
guards, richer dependent patterns, or semantic reachability.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated sources are
  synchronized.
- `./node_modules/.bin/tree-sitter test -d -f 'brace and semicolon case alternatives'`
  — passed; debug inspection showed all five complete braced cases reducing to
  `case_expression` nodes with no error node.
- `./node_modules/.bin/tree-sitter test -d -f 'incomplete brace case alternatives'`
  — passed; debug inspection showed the missing-close recovery and a retained
  surrounding `case_expression`; the trace's recovery `detect_error` is
  expected for the incomplete input and the asserted tree has no top-level
  `ERROR` node.
- `HOME=/private/tmp/stage09-home npm test` — passed; all 18 corpus fixtures,
  including every prior Stage 01–08 fixture, passed.
- `git diff --check` — passed.
- Generated metadata inspection — passed. `case_expression` retains required
  repeated `alternative` and required `scrutinee`; `case_alternative` retains
  required `pattern` and `body`; `impossible_case_alternative` retains its
  required `pattern` and no body field.

The literal `npm test` gate was also attempted after regeneration. It could
not rebuild `/Users/durant/Library/Caches/tree-sitter/lib/idris2.so` because
the managed sandbox denied that cache write (`ld: can't write output file`).
The same gate passed with the writable temporary HOME shown above.

## Known problems and remedies

Applicable ID: `kp-macos-treesitter-cache`.

The documented command was attempted exactly:

```sh
CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" \
  -dynamiclib -fPIC -O2 -Isrc src/parser.c \
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so
```

It failed only because the managed sandbox denied writing the global cache.
The tested remedy was the same repository x86_64 wrapper and flags directed to
`/private/tmp/stage09-home/Library/Caches/tree-sitter/lib/idris2.so`, followed
by `HOME=/private/tmp/stage09-home npm test`, which passed. No repository
known-problem entry was changed.

## Deviations

- The global-cache form of the documented macOS remedy could not complete in
  this managed environment; the writable temporary cache workaround and exact
  failure are recorded above.
- Missing-separator recovery is not accepted as supported syntax. The focused
  incomplete fixture uses the safer missing-terminator boundary, preserving a
  complete case tree without guessing that whitespace separates alternatives.

## Open questions and recommended follow-up

- Decide whether a future stage should add an external scanner or equivalent
  indentation state for layout-separated alternatives.
- Define separate approved contracts for `with`, guards, richer dependent
  patterns, and implicit case scrutinee arguments before expanding this slice.
- Revisit whether brace/semicolon and layout forms should share the current
  impossible-alternative node contract.

## Contract confirmation

Only the allowed files changed: `grammar.js`, generated `src/grammar.json`,
`src/node-types.json`, `src/parser.c`, the two `corpus/**` fixtures,
`docs/syntax-inventory.md`, and this required report. No forecast files,
package configuration, bindings, harnesses, or unrelated documentation were
modified.
