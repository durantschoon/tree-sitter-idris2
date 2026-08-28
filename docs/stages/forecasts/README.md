# Branch forecasts

Each stage forecast is written to `stage-NN-FORECAST.md`, sealed with
`seal.sh`, and committed as the pair:

- `stage-NN-FORECAST.sealed`
- `stage-NN-FORECAST.sha256`

The plaintext forecast MUST NOT be unsealed until the corresponding stage is
merged or abandoned. After resolution, commit
`stage-NN-FORECAST-RESOLVED.md` beside the stage report. Every outcome needs
evidence, and every actual pivot not in the tree must be logged as unmodeled
with a category and why-missed reason.

The global ledger defaults to `~/.codex/branching-stages/ledger.csv`; set
`BRANCHING_STAGES_LEDGER` when a shared or migrated ledger is required.
