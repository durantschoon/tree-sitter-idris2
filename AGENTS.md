# Repository agent instructions

## Stage pipeline worktrees

- Create executor worktrees below `.worktrees/stage-NN/` in the primary
  checkout. Do not create them as sibling directories.
- `git worktree add` and `git worktree remove` also update `.git/worktrees`. If
  a managed environment protects that metadata, request one targeted
  permission for the Git worktree operation rather than abandoning cleanup.
- A stage is not complete until its executor worktree has been cleaned up after
  merge or abandon. Run `scripts/cleanup-stage-worktree.sh stage-NN` and
  confirm that `git worktree list` contains no entry for that stage.
- Cleanup must refuse dirty or unregistered paths. If cleanup fails, inspect
  processes and open-file handles, report the concrete cause, and do not force
  delete the worktree.
- Do not delete the corresponding remote stage branch as part of routine
  cleanup; preserve it for review history unless explicitly asked otherwise.
