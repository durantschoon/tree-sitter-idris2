const { mkdirSync } = require('node:fs');
const os = require('node:os');
const path = require('node:path');
const { spawnSync } = require('node:child_process');

const environment = { ...process.env };

// The npm-installed Tree-sitter CLI is x86_64 when npm is running under
// Rosetta. Clang on Apple Silicon otherwise produces an arm64 parser, which
// the CLI cannot load.
if (process.platform === 'darwin' && process.arch === 'x64') {
  environment.CC = `${process.cwd()}/scripts/clang-x86_64.sh`;

  // tree-sitter-cli 0.20 caches the compiled parser globally and does not
  // account for the host architecture when deciding whether to reuse it.
  // Rebuild that cache explicitly so Rosetta cannot load an arm64 library.
  const cachePath = path.join(
    os.homedir(),
    'Library',
    'Caches',
    'tree-sitter',
    'lib',
    'idris2.so',
  );
  mkdirSync(path.dirname(cachePath), { recursive: true });

  const compile = spawnSync(environment.CC, [
    '-dynamiclib',
    '-fPIC',
    '-O2',
    '-Isrc',
    path.join(process.cwd(), 'src/parser.c'),
    '-o',
    cachePath,
  ], {
    env: environment,
    stdio: 'inherit',
  });

  if (compile.error || compile.status !== 0) {
    console.error(compile.error?.message || 'failed to compile the parser');
    process.exit(1);
  }
}

const result = spawnSync('tree-sitter', ['test'], {
  env: environment,
  stdio: 'inherit',
});

if (result.error) {
  console.error(result.error.message);
  process.exit(1);
}

process.exit(result.status ?? 1);
