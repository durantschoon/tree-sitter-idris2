horizon: M1 bounded `with` clauses and their explicit delimiter/layout boundary, with a reviewed decision that preserves the existing case/pattern node contracts

## fc-10-a
- category: spec-gap
- observation: "The current Idris 2 source and official views examples expose a brace/semicolon `with` block that the existing Tree-sitter grammar can represent without indentation state."
- p: 0.55  # anchor: spec-gap posterior 0.36 (n=45); raised because the official examples and existing block helpers expose a concrete delimiter boundary, but the exact with rule still needs source confirmation.
- resolves: at Stage 10 review, from the source evidence, grammar diff, corpus trees, and REPORT Blocked/deviation sections
- if-true: Implement the bounded explicit brace/semicolon with declaration and refined-clause slice, add focused complete/incomplete fixtures, and carry layout-only and richer dependent forms as separate follow-up contracts.
- if-false: Keep the stage blocked, document the exact indentation/scanner or source-grammar limitation, and use the evidence to author a later scanner/layout decision stage without speculative grammar acceptance.
- outcome: 1
- evidence: "docs/stages/stage-10-REPORT.md:1-4, 34-45: the bounded one-view brace/semicolon form was implemented, while layout-only and richer forms remain explicitly deferred."

## fc-10-b
- category: hidden-coupling
- observation: "Adding a with-bearing declaration and post-bar refined patterns requires explicit precedence/conflict or lexical factoring to preserve ordinary function clauses, case bars, and generic infix expressions."
- p: 0.32  # anchor: hidden-coupling posterior 0.21 (n=34); raised for the new declaration/branch boundary while keeping the historical category base conservative.
- resolves: at Stage 10 review, from the actual grammar diff, focused debug trees, and independent prior-fixture reruns
- if-true: Isolate the new branch grammar with minimal hidden rules/conflicts, preserve the existing public shapes, and document the coupling and regression coverage.
- if-false: Keep the new rules structurally local, avoid conflict declarations that are not needed, and proceed with the smallest stable node contract.
- outcome: 1
- evidence: "grammar.js:32-35, 88-149, 407-418: the new declaration/clause rules use one explicit conflict and hidden delimiter/body factoring; independent debug parsing and all prior fixtures passed."

## fc-10-c
- category: data-shape
- observation: "A distinct public with-bearing declaration/branch representation is required because an ordinary `function_definition` cannot truthfully retain its required body while also owning a block of refined clauses."
- p: 0.42  # anchor: data-shape posterior 0.43 (n=21); kept near the measured base rate because the existing required body field makes reuse unlikely.
- resolves: at Stage 10 review, from src/node-types.json and the REPORT compatibility assessment
- if-true: Add only the minimum named nodes and fields needed to separate the original parameters, view expression, refined view-result patterns, and branch bodies; document the stable contract.
- if-false: Reuse the existing public function node only if generated metadata proves all required fields remain truthful, and record why no new public shape was necessary.
- outcome: 1
- evidence: "src/node-types.json: with_declaration and with_clause: the new nodes separate repeated original parameters, view, refined parameters, view pattern, and body while function_definition retains its required name/body contract."

## fc-10-d
- category: env-tooling
- observation: "The exact macOS global parser-cache rebuild is denied in the managed environment, requiring the documented x86_64 wrapper with a writable temporary HOME before the full npm gate can pass."
- p: 0.46  # anchor: env-tooling posterior 0.46 (n=22); unchanged because the same directory-dependent failure recurred through Stage 09.
- resolves: at Stage 10 review, from the attempted cache command, npm gate output, and report's Known problems section
- if-true: Record the exact denied path and use the writable temporary cache remedy, then rerun the literal npm test gate under that temporary HOME.
- if-false: Run the literal documented npm gate and record that the global cache was writable; retain the known-problem reference without changing its registry entry.
- outcome: 1
- evidence: "docs/stages/stage-10-REPORT.md:51-79: the managed global cache write was denied, while the x86_64 wrapper and writable temporary HOME made the full 20-fixture npm gate pass."

## Coverage sweep

- `pv-10-a` — unmodeled `env-tooling`, why-missed `unknowable`: direct raw
  GitHub source retrieval was unavailable in the executor environment because
  of DNS/network restrictions; the official tutorial and checked-in source
  inventory provided the needed evidence instead.
- `pv-10-b` — modeled by `fc-10-b`, not an additional pivot: an early lexical
  factoring attempt caused an ordinary module/function regression and was
  removed; the final hidden-rule/conflict design preserved all prior fixtures.
