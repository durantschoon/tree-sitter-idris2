const { readdirSync, statSync, readFileSync } = require('node:fs');
const path = require('node:path');
const { spawnSync } = require('node:child_process');

const EXAMPLES_DIR = path.join(__dirname, '..', 'examples');

function findIdrisFiles(dir) {
  const results = [];
  const entries = readdirSync(dir);
  for (const entry of entries) {
    const fullPath = path.join(dir, entry);
    const stat = statSync(fullPath);
    if (stat.isDirectory()) {
      results.push(...findIdrisFiles(fullPath));
    } else if (entry.endsWith('.idr') || entry.endsWith('.lidr')) {
      results.push(fullPath);
    }
  }
  return results;
}

const files = findIdrisFiles(EXAMPLES_DIR);
console.log(`\nTesting ${files.length} real-world Idris 2 repository examples:`);

let totalLines = 0;
let passedCount = 0;

const cliBin = path.join(__dirname, '..', 'node_modules', '.bin', 'tree-sitter');

for (const file of files) {
  const relPath = path.relative(path.join(__dirname, '..'), file);
  const content = readFileSync(file, 'utf8');
  const lineCount = content.split('\n').length;
  totalLines += lineCount;

  const result = spawnSync(cliBin, ['parse', file], {
    env: process.env,
    encoding: 'utf8',
  });

  const output = (result.stdout || '') + (result.stderr || '');
  if (output.includes('(module') || output.includes('(literate_comment')) {
    console.log(`  ✓ ${relPath} (${lineCount} lines)`);
    passedCount += 1;
  } else {
    console.error(`  ✗ ${relPath} failed to parse root module node`);
    console.error(output);
  }
}

console.log(`\nReal-world repo validation: ${passedCount}/${files.length} passed (${totalLines} lines parsed).\n`);

if (passedCount !== files.length) {
  process.exit(1);
}
