const { existsSync, mkdirSync } = require('node:fs');
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
  let cachePath = path.join(
    os.homedir(),
    'Library',
    'Caches',
    'tree-sitter',
    'lib',
    'idris2.so',
  );

  let useTempHome = false;
  try {
    mkdirSync(path.dirname(cachePath), { recursive: true });
  } catch {
    useTempHome = true;
  }

  if (useTempHome) {
    const tempHome = path.join(os.tmpdir(), 'treesitter-idris2-cache');
    environment.HOME = tempHome;
    cachePath = path.join(tempHome, 'Library', 'Caches', 'tree-sitter', 'lib', 'idris2.so');
    mkdirSync(path.dirname(cachePath), { recursive: true });
  }

  const sources = [path.join(process.cwd(), 'src/parser.c')];
  const scannerPath = path.join(process.cwd(), 'src/scanner.c');
  if (existsSync(scannerPath)) {
    sources.push(scannerPath);
  }

  let compile = spawnSync(environment.CC, [
    '-dynamiclib',
    '-fPIC',
    '-O2',
    '-Isrc',
    ...sources,
    '-o',
    cachePath,
  ], {
    env: environment,
    stdio: 'inherit',
  });

  if (compile.status !== 0 && !useTempHome) {
    const tempHome = path.join(os.tmpdir(), 'treesitter-idris2-cache');
    environment.HOME = tempHome;
    cachePath = path.join(tempHome, 'Library', 'Caches', 'tree-sitter', 'lib', 'idris2.so');
    mkdirSync(path.dirname(cachePath), { recursive: true });
    compile = spawnSync(environment.CC, [
      '-dynamiclib',
      '-fPIC',
      '-O2',
      '-Isrc',
      ...sources,
      '-o',
      cachePath,
    ], {
      env: environment,
      stdio: 'inherit',
    });
  }

  if (compile.error || compile.status !== 0) {
    console.error(compile.error?.message || 'failed to compile the parser');
    process.exit(1);
  }
}

const result = spawnSync('tree-sitter', ['test'], {
  env: environment,
  stdio: 'inherit',
});

if (result.error || result.status !== 0) {
  console.error(result.error?.message || 'Tree-sitter corpus tests failed');
  process.exit(result.status ?? 1);
}

const realRepoTest = spawnSync('node', [path.join(__dirname, 'test-real-repos.js')], {
  env: environment,
  stdio: 'inherit',
});

if (realRepoTest.error || realRepoTest.status !== 0) {
  console.error(realRepoTest.error?.message || 'Real-world repository tests failed');
  process.exit(realRepoTest.status ?? 1);
}

process.exit(0);
