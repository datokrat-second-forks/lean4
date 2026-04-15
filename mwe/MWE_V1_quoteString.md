# MWE for V1 — `quoteString` hex-escape continuation breaks native compilation

## Observable runtime corruption on gcc toolchains

**Behavior depends on the C compiler.** On clang (including `leanc`'s
default on this system) the build fails with an error. On gcc the build
**succeeds silently with a warning** and produces a binary containing a
truncated, corrupted string literal.

### Build and run under gcc

```lean
-- run.lean
def badString : String := "\x01abc"

def main : IO Unit := do
  IO.println s!"length   = {badString.length}"
  IO.println s!"utf8Size = {badString.utf8ByteSize}"
  let ba := badString.toUTF8
  IO.println s!"toUTF8.size = {ba.size}"
  IO.print "bytes:"
  for i in [:ba.size] do IO.print s!" {ba[i]!}"
  IO.println ""
```

```
$ build/release/stage1/bin/lean -o run.olean -c run.c run.lean
$ LEAN_CC=gcc build/release/stage1/bin/leanc run.c -o run
run.c:29: warning: hex escape sequence out of range   ← only a warning!
$ ./run
length   = 4
utf8Size = 4
toUTF8.size = 4
bytes: 188 0 0 0
```

**Expected Lean semantics:** the string has 4 UTF-8 bytes
`[1, 97, 98, 99]` (= `\x01`, `'a'`, `'b'`, `'c'`).

**Actual observed bytes:** `[188, 0, 0, 0]` (= `0xbc`, 0, 0, 0).

- `0xbc` is the truncated hex escape: C parsed `"\x01abc"` as a single
  escape `0x01abc`, which overflows `char` and keeps the low byte `0xbc`.
- The three `0` bytes after it are **reads past the end of the 2-byte
  compiled literal into adjacent rodata**. The Lean string header says
  `m_size = 5` (4 data bytes + null terminator), so `toUTF8` copies 4
  bytes from `m_data` — but the actual compiled literal is only 2 bytes
  (`{0xbc, 0x00}`). The next 2 bytes are whatever the linker happened to
  place there in rodata.

## Security implications

This is a live memory safety bug reachable from user Lean source on any
gcc-based build pipeline:

- **Observable corruption:** `String.toUTF8`, `String.data`, `String.==`,
  `startsWith`/`endsWith`, JSON serialization, and any other op that walks
  `m_data[0..m_size]` produces wrong values silently.
- **Information disclosure:** the OOB rodata reads leak bytes from whatever
  the linker placed adjacent to the string literal — other string
  constants, compile-time tables, symbol names, etc. On our test run the
  adjacent bytes happened to be zero, but on a real program they can be
  anything.
- **Not just a build failure:** while clang escalates this to an error,
  gcc only warns. Distros, CI pipelines, and stage0 builds that use gcc
  silently produce corrupted binaries. The only protection is a warning in
  a noisy build log.

## Reachability from user source

- Any string literal containing one of 29 control bytes (`0x00-0x08`,
  `0x0b`, `0x0c`, `0x0e-0x1f`) followed by an ASCII hex digit
  (`[0-9a-fA-F]`). That's ~638 two-character combinations.
- Examples: `"\x01A"`, `"\x1fa"`, `"hello\x05baadf00d"`, `"foo\x1Eb"`.
- The interpreter path (`lean --run bad.lean`) doesn't hit the bug because
  strings are built from the source AST; only native-compiled binaries
  are affected.

## Why this wasn't caught before

Lean's codebase uses `\x` escapes in user-facing strings only rarely, and
when it does, the author tends to avoid the specific follow-up character
pattern by coincidence. Test suites presumably don't include any such
literal.

---

## Original finding (silent-miscompilation path)

Before `leanc` escalated the warning, the intended bug was runtime memory
corruption. That path still exists if anyone ever suppresses the warning
with a flag. Details below for completeness.

**Bug:** `src/Lean/Compiler/LCNF/EmitC.lean:213-228` encodes bytes ≤ 31 as
`\xNN` in the emitted C string literal, but C's `\x` escape has no length
limit — it greedily consumes every following hex digit. A Lean string
`"\x01abc"` is emitted as C `"\x01abc"`, which parses as a single escape
`0x01abc`, overflowing `char` and truncating to `0xbc`.

**Reachability:** Any Lean string literal containing a control byte
(`0x00-0x1F`) not in the set `{0x09, 0x0a, 0x0d}` (tab, LF, CR are
special-cased), followed immediately by an ASCII hex digit `[0-9a-fA-F]`.

## Reproduction

**Lean source** (`MWE_V1.lean`):

```lean
def badString : String := "\x01abc"
```

**Step 1.** Emit C:

```
$ build/release/stage1/bin/lean -c MWE_V1.c MWE_V1.lean
```

The emitted `MWE_V1.c` contains:

```c
static const lean_string_object l_badString___closed__0_value = {
  .m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249},
  .m_size = 5, .m_capacity = 5, .m_length = 4,
  .m_data = "\x01abc"};
```

The `lean_string_object` header says `m_size = 5` (bytes including null) and
`m_length = 4` (UTF-8 codepoints). Those numbers are correct for the
Lean-semantic string `"\x01abc"`.

**Step 2.** GCC parses the C literal:

```
$ gcc -Wall -c MWE_V1.c
MWE_V1.c:24: warning: hex escape sequence out of range
```

**Step 3.** Observe the actual compiled byte contents. Reproduced with an
isolated test:

```c
const char m_data[] = "\x01abc";
// sizeof = 2, bytes: { 0xbc, 0x00 }
```

The struct's header claims 5 bytes but the literal is **2 bytes**. Any
runtime operation that walks `m_data[0..m_size]` (e.g. `String.utf8ByteSize`,
`lean_string_size`, UTF-8 decoding, substring ops) reads **3 bytes past the
end of the literal** into adjacent rodata. This is an out-of-bounds read
and an information disclosure vector.

## Severity

**Moderate.** Reachable from any user program with a crafted string literal.
The OOB read is into rodata (read-only), so it is not a straightforward
code-execution vulnerability, but:

- It corrupts string semantics silently — `String.length` returns the header
  value but `String.toList` walks past the end of the literal.
- It can leak adjacent rodata content when the string is consumed by user
  code (serialized, hashed, compared).
- If any runtime operation writes into `m_data` (shouldn't for a const, but
  could happen after a copy), it can corrupt heap-adjacent data.

## Fix

One-character patch: use 3-digit octal escapes instead of `\xNN`. Octal
escapes are capped at 3 digits, so `"\001abc"` parses cleanly as four
characters.

```lean
-- Before (EmitC.lean:223-224):
else if c.toNat <= 31 then
  "\\x" ++ toHexDigit (c.toNat / 16) ++ toHexDigit (c.toNat % 16)

-- After:
else if c.toNat <= 31 then
  let n := c.toNat
  "\\" ++ toString (n / 64) ++ toString ((n / 8) % 8) ++ toString (n % 8)
```

Alternative: close-and-reopen the string literal after every `\xNN`:
`"\x01" "abc"` parses as two concatenated literals. Slightly more verbose
output but preserves hex readability.
