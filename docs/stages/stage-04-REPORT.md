# Stage 04 report — Add operator names and infix expressions

## Summary

Added a bounded, syntax-only operator slice for Idris 2. The grammar now
recognizes parenthesized operator names in signatures, function definitions,
constructors, and application position, plus nested infix expressions with
stable `left`, `operator`, and `right` fields. Applications remain tighter
than the generic left-associative infix layer, and explicit parentheses retain
grouping. A focused corpus fixture covers operator names, constructor names,
qualified operands, nested expressions, and incomplete input.

## Files changed

- `grammar.js` — adds operator names, ASCII operator tokens, infix expression
  structure, and the lexical spacing rule that disambiguates infix use from
  application arguments.
- `src/grammar.json` — regenerated grammar description.
- `src/node-types.json` — regenerated named-node metadata and fields.
- `src/parser.c` — regenerated parser source.
- `corpus/operators-infix.txt` — focused operator and infix corpus fixture.
- `docs/syntax-inventory.md` — records Stage 04 support, stable fields,
  precedence policy, and remaining gaps.
- `docs/stages/stage-04-REPORT.md` — this execution report.

## Commands and results

- `./node_modules/.bin/tree-sitter generate` — passed; generated parser
  artifacts are synchronized.
- `CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh"
  -dynamiclib -fPIC -O2 -Isrc src/parser.c
  -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so` — passed after
  applying the documented macOS/Rosetta cache remedy.
- `./node_modules/.bin/tree-sitter test -u -f 'operators and infix'` — passed
  and updated the focused expected tree after the final stable node shape was
  established.
- `npm test` — passed; all nine corpus fixtures passed.
- `./node_modules/.bin/tree-sitter test -d -f 'operators and infix'` — passed;
  debug output showed operator names, constructor wrappers, nested infix
  expressions, and incomplete input without an unexpected top-level `ERROR`.
- `git diff --check` — passed; no whitespace errors.

The first independent `npm test` run reproduced
`kp-macos-treesitter-cache`: the shared cache contained an arm64 parser while
the Rosetta CLI required x86_64. The exact repository remedy above rebuilt the
cache, after which the gate ran successfully. Direct generation/test commands
can repopulate that shared cache with the wrong architecture, so the remedy
was reapplied before the final npm gate.

## Deviations

The originally launched executor stopped responding after creating the initial
grammar and fixture changes, before producing a report or commit. It was
stopped without changing `master`; the coordinator completed the bounded
grammar fix, regenerated artifacts, updated the fixture and inventory, and
completed this report in the isolated `stage-04-executor` worktree. The
implementation scope and allowed-files list were unchanged.

During implementation, the first operator grammar shape exposed an ambiguity
between application whitespace and infix operators. The final implementation
uses a hidden, higher-priority same-line spaced infix token aliased to the
public `operator` node. This preserves the existing application tree shape;
the inventory documents the choice.

## Known problems and remedies

Applicable problem: `kp-macos-treesitter-cache`. The documented x86_64
compiler-wrapper rebuild was required and succeeded. The final `npm test`
passed after that remedy.

## Open questions and recommended follow-up

- Inspect the current Idris 2 operator lexer rules before expanding beyond the
  bounded ASCII symbolic set.
- Add fixity declarations and precedence-aware operator metadata only after
  fixtures establish how that syntax should affect the tree; this stage uses
  one generic left-associative precedence.
- Add pattern matching, lambdas, named function parameters, records, and
  layout-sensitive declarations in separate stages.
- Evaluate whether a future external scanner is needed for complete operator,
  layout, and nested-comment behavior.

## Contract confirmation

All implementation changes are within the allowed files:
`docs/syntax-inventory.md`, `grammar.js`, `src/grammar.json`,
`src/node-types.json`, `src/parser.c`, and `corpus/**`. The only additional
file is the explicitly permitted `docs/stages/stage-04-REPORT.md`.
