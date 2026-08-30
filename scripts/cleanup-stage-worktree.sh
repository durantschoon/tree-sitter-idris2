#!/usr/bin/env bash
set -euo pipefail

stage="${1:-}"
if [[ ! "$stage" =~ ^stage-[0-9]{2}$ ]]; then
  echo "usage: $0 stage-NN" >&2
  exit 2
fi

common_git_dir="$(git rev-parse --path-format=absolute --git-common-dir)"
repo_root="$(dirname "$common_git_dir")"
worktree="$repo_root/.worktrees/$stage"

registered_worktree() {
  git -C "$repo_root" worktree list --porcelain \
    | awk -v target="$worktree" '$1 == "worktree" && substr($0, 10) == target { found = 1 } END { exit !found }'
}

if ! registered_worktree; then
  if [[ -e "$worktree" ]]; then
    echo "refusing: $worktree exists but is not a registered Git worktree" >&2
    exit 1
  fi
  echo "no registered worktree for $stage"
  exit 0
fi

if [[ -L "$worktree/node_modules" ]]; then
  rm "$worktree/node_modules"
fi

if [[ -n "$(git -C "$worktree" status --porcelain)" ]]; then
  echo "refusing: $worktree has uncommitted or untracked changes" >&2
  exit 1
fi

git -C "$repo_root" worktree remove "$worktree"

if registered_worktree || [[ -e "$worktree" ]]; then
  echo "cleanup verification failed for $worktree" >&2
  exit 1
fi

echo "removed clean stage worktree: $worktree"
