# Stage 11 — Add layout-separated one-view `with` clauses

## Motivation

Stage 10 established the smallest source-evidenced explicit
brace/semicolon `with` form, but the official Idris 2 views examples express
their refined clauses through indentation. The syntax inventory records that
the upstream parser uses `column` and `ValidIndent` for layout-delimited
blocks; generic Tree-sitter whitespace cannot truthfully represent that
boundary. This stage measures and implements the smallest scanner-backed
layout slice for the already-supported one-view `with` declaration.

## Change

1. Inspect the Idris 2 views tutorial and relevant lexer/parser sources. Record
   the exact header, clause indentation, and termination behavior in
   `docs/syntax-inventory.md`.
2. Add an external scanner only as needed to distinguish layout-separated
   clauses from ordinary whitespace. Support a one-view `with` declaration
   whose refined clauses are separated by source indentation, for example:

   ```idr
   check n with (isZero n)
     check n | True = 1
     check n | False = 0
   ```

   The new form must retain the existing `with_declaration` and `with_clause`
   node names and their Stage 10 fields. The explicit brace/semicolon form
   remains supported unchanged.
3. Bound layout handling to `with` clauses. Do not generalize it to `case`,
   `data where`, `where`, `do`, namespaces, interfaces, records, or other
   declaration families. Do not add multiple views, nested with blocks,
   guards, richer dependent patterns, or semantic interpretation.
4. Add focused complete and incomplete corpus fixtures for a simple layout
   block, multiple layout clauses, termination before a following top-level
   declaration, and recovery for an incomplete final clause. Retain all prior
   fixtures.
5. Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c`
   whenever `grammar.js` changes. Add a scanner source only if the grammar
   requires it.

## Ground rules

- Keep the grammar syntax-only and general-purpose; Graphify semantics remain
  out of scope.
- A newline alone is not a layout separator. The scanner must use a concrete,
  source-evidenced indentation boundary; it must not infer clauses from generic
  whitespace.
- Preserve all Stage 01–10 public nodes, required fields, explicit case forms,
  and explicit brace/semicolon `with` forms.
- Keep scanner state minimal, serializable, and scoped to the allowed layout
  form. If a sound implementation requires a shared general layout engine or
  changes public node shapes, use the Blocked protocol.
- Do not add records, interfaces, implementations, namespaces, visibility
  modifiers, pragmas, fixity declarations, Unicode identifiers, literate
  source, highlighting, bindings, or Graphify-specific nodes.

## Allowed files

The executor may create or modify only:

- `docs/syntax-inventory.md`
- `grammar.js`
- `src/grammar.json`
- `src/node-types.json`
- `src/parser.c`
- `src/scanner.c`
- `corpus/**`

The executor may also create the required report:

- `docs/stages/stage-11-REPORT.md`

If another file is required, stop and report the blocker before editing it.

## Tests

Run these commands from the executor worktree:

1. Baseline: `npm test`
2. `./node_modules/.bin/tree-sitter generate`
3. `npm test`
4. `git diff --check`

Inspect debug trees for every new fixture. Confirm that the complete layout
forms keep a `with_declaration` with repeated `clause` fields and no unexpected
top-level `ERROR`, that the incomplete form preserves its surrounding
declaration, that the following top-level declaration remains separate, and
that all explicit Stage 10 with fixtures still pass.

## Definition of Done

- Source evidence and the exact supported layout boundary are recorded in the
  inventory and report.
- The scanner distinguishes the supported indentation boundary rather than
  accepting newline-separated clauses indiscriminately, or the report provides
  concrete blocked evidence.
- Complete and incomplete fixtures cover every supported layout form.
- Existing public node names and required fields remain compatible.
- Generated parser sources are synchronized.
- The baseline and final `npm test` gates pass, using the documented
  known-problem remedy if required.
- `git diff --check` passes.
- No file outside the allowed-files list changed, apart from the report.

## Commit

Use exactly this single-line commit message:

`Add layout-separated Idris2 with clauses`

## Report requirements

Write `docs/stages/stage-11-REPORT.md` with the implementation or blocked
summary; files changed; exact Idris 2 source evidence; supported layout and
recovery boundary; exact commands/results; applicable known-problem remedy;
deviations; open questions; and whitelist confirmation.

## Blocked protocol

If current Idris 2 source behavior cannot be represented with a scanner scoped
to this with-only form, if a shared layout engine or public-shape migration is
required, if generation fails, or if existing behavior cannot be preserved, do
not guess. Record concrete source or command evidence, state the smallest
decision needed, leave unrelated files untouched, and return the worktree for
coordinator review.

## Known problems and remedies

- `kp-macos-treesitter-cache` — before each `npm test`, rebuild the parser
  cache with:

  ```sh
  CC="$PWD/scripts/clang-x86_64.sh" "$PWD/scripts/clang-x86_64.sh" \
    -dynamiclib -fPIC -O2 -Isrc src/parser.c \
    -o /Users/durant/Library/Caches/tree-sitter/lib/idris2.so
  ```

  If that managed cache is not writable, use a writable temporary HOME/cache
  and record both the failure and the working remedy.
