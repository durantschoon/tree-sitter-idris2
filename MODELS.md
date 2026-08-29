# Repository pipeline configuration

## Pipeline agents

| role     | agent          | notes                          |
|----------|----------------|--------------------------------|
| executor | stage-executor | implements one stage; use `.worktrees/stage-NN/` and clean it up with `scripts/cleanup-stage-worktree.sh` |
