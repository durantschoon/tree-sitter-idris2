horizon: M1 operator and infix-expression slice, ending when operator names, nested infix trees, and incomplete operator input are independently reviewed

## fc-04-a
- category: spec-gap
- observation: "The Idris 2 lexer/parser evidence requires an operator token or declaration form that cannot be represented by the bounded generic operator slice without adding a materially different syntax rule."
- p: 0.29  # anchor: spec-gap posterior 0.29; kept at the calibrated category rate because operator-name syntax is explicitly incomplete in the inventory.
- resolves: at Stage 04 review, from the source evidence, grammar diff, corpus output, and REPORT deviations
- if-true: Keep the fixtures bounded, document the exact unsupported source form and smallest architectural decision, and defer the materially different rule to a follow-up stage.
- if-false: Complete the planned generic operator and infix slice, preserving the current identifier and qualified-name rules and carrying the remaining forms into the next expression stage.

## fc-04-b
- category: data-shape
- observation: "Nested infix expressions require a stable operator node or precedence shape that changes the established expression/application nesting or needs a compatibility exception."
- p: 0.30  # anchor: data-shape posterior 0.28; slightly raised because this stage introduces precedence-bearing syntax over the existing expression atoms.
- resolves: at Stage 04 review, from corpus debug trees, src/node-types.json, and the REPORT compatibility assessment
- if-true: Document the new stable shape and preserve prior application nodes where possible; use the compatibility finding to constrain the next pattern/lambda stage.
- if-false: Retain the existing expression/application shape and add the operator layer with explicit fields and documented precedence/associativity.

## fc-04-c
- category: env-tooling
- observation: "Parser generation or the corpus test gate again needs the repository's macOS architecture-cache workaround in the executor environment."
- p: 0.26  # anchor: env-tooling posterior 0.26; unchanged because the known problem was reproduced in Stage 03.
- resolves: at Stage 04 review, from exact generation/test output and the committed REPORT
- if-true: Apply only kp-macos-treesitter-cache's documented compiler-wrapper rebuild, record the command and result, and defer broader tooling changes to M3.
- if-false: Treat the pinned CLI and existing test wrapper as sufficient for this stage and focus follow-up on syntax coverage.

## fc-04-d
- category: hidden-coupling
- observation: "Adding operator-name tokens exposes a conflict with the grammar's word token, qualified names, or constructor-name rule that requires changing a shared declaration registration rule."
- p: 0.20  # anchor: hidden-coupling posterior 0.09; raised because operator names touch several already-shared declaration and expression rules.
- resolves: at Stage 04 review, from the full source diff, generated node metadata, and fixture results
- if-true: Keep the shared rule change minimal, audit every affected Stage 01–03 fixture independently, and document the coupling for the next declaration stage.
- if-false: Keep operator-name recognition localized and proceed with the planned fixtures without changing unrelated declaration registration.

## Resolution

Resolved after the Stage 04 merge review on commit `8e64ee9`.

### Outcomes

- `fc-04-a`: `0` — `docs/syntax-inventory.md:109-112` records the remaining
  operator limitation as the bounded ASCII symbolic set, and the final corpus
  gate passed without requiring a materially different source rule.
- `fc-04-b`: `1` — `docs/syntax-inventory.md:72-79` documents the new
  `infix_expression` shape, application precedence, and hidden spacing rule
  needed to preserve the existing application nodes.
- `fc-04-c`: `1` — `docs/stages/stage-04-REPORT.md:37-43` records the
  arm64/x86_64 cache failure and successful application of the documented
  `kp-macos-treesitter-cache` remedy.
- `fc-04-d`: `0` — `docs/stages/stage-04-REPORT.md:54-57` records that the
  implementation kept the shared rule changes bounded to operator names and
  infix expressions; no unrelated declaration registration change was needed.

### Coverage sweep

- The application/infix ambiguity and resulting stable node-shape decision
  were covered by `fc-04-b`.
- The macOS parser-cache failure was covered by `fc-04-c`.
- The first executor stopped responding after partial edits, requiring a
  coordinator completion handoff. This was an unmodeled `other` pivot,
  classified `unknowable` ex ante because it was an execution-service stall,
  not a repository or source behavior visible in the contract.
