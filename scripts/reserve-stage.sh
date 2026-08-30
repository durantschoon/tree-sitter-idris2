#!/usr/bin/env bash
set -euo pipefail

stage_num="${1:-}"
summary="${2:-}"

if [[ ! "$stage_num" =~ ^[0-9]{2}$ ]] || [[ -z "$summary" ]]; then
  echo "usage: $0 <two-digit-stage-num> \"<commit summary>\"" >&2
  echo "example: $0 14 \"Add editor queries\"" >&2
  exit 2
fi

stage="stage-${stage_num}"
prompt_file="docs/stages/${stage}-PROMPT.md"
forecast_raw="docs/stages/forecasts/${stage}-FORECAST.md"
forecast_sealed="docs/stages/forecasts/${stage}-FORECAST.sealed"
forecast_sha="docs/stages/forecasts/${stage}-FORECAST.sealed.sha256"

if [[ ! -f "$prompt_file" ]]; then
  echo "error: $prompt_file does not exist" >&2
  exit 1
fi

if [[ ! -f "$forecast_raw" ]]; then
  echo "error: $forecast_raw does not exist" >&2
  exit 1
fi

# Compute sha256 checksum and seal forecast
shasum -a 256 "$forecast_raw" | awk '{print $1}' > "$forecast_sha"
gzip -c "$forecast_raw" | base64 > "$forecast_sealed"
rm "$forecast_raw"

# Commit and push reservation on master
git add "$prompt_file" "$forecast_sealed" "$forecast_sha"
git commit -m "Reserve ${stage} ${summary}"
git push origin master

# Create worktree
worktree_dir=".worktrees/${stage}"
branch="${stage}-executor"
git worktree add -b "$branch" "$worktree_dir" master

# Symlink node_modules into worktree if not present
if [[ -d "node_modules" ]] && [[ ! -e "${worktree_dir}/node_modules" ]]; then
  ln -s ../../node_modules "${worktree_dir}/node_modules"
fi

echo "Successfully reserved ${stage} and created worktree ${worktree_dir}"
