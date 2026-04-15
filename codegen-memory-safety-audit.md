# Memory Safety Audit — Lean LCNF Code Generator

Audit of reference counting and memory safety in the LCNF-based code generator.
All locations are in `/build/src/Lean/Compiler/LCNF/`.

**Method:** Two waves of four parallel reviewers each, then hands-on
verification. Wave 1 surveyed ExplicitRC, InferBorrow + PropagateBorrow,
ResetReuse + ExpandResetReuse, and EmitC + CoalesceRC. Wave 2 was briefed with
Wave 1's false positives and charged to verify every new claim with a concrete
test program.

**Wave 2 result:** Wave 2 independently confirmed Wave 1's debunking of most
candidates, identified **one new verified memory-safety bug** (V1 below), and
two additional latent hazards (L4, L5). The ExplicitRC and InferBorrow +
PropagateBorrow files came out of Wave 2 clean: "no new bugs; prior findings
stand."

**TL;DR:** The code generator is in good shape. The reviewers produced 15
candidate bugs; after investigation, **none are directly exploitable from the
current Lean frontend**. They break down as:

- 3 **latent** (real code defects, but the triggering IR pattern isn't produced
  by any current pass).
- 3 **dead code** (gated by a config or caught by an earlier checker).
- 4 **false positives** (reviewer confused layers or misread assertion
  semantics).
- 2 **correctness-equivalent** (conservative direction, not a bug).
- 2 **fragile invariants** (relies on implicit "no pass will ever do X"
  conditions).
- 1 **unreproducible** from the constructed test cases but plausible.

Even so, most of these are worth defensive fixes — the bugs that matter are the
latent ones, because they will fire the moment a future pass introduces the
triggering pattern.

---

## Verified live memory-safety bugs

### V1. `EmitC.lean:213-228` — `quoteString` hex escape continuation corrupts string literals

`quoteString` encodes any byte ≤ 31 (that isn't already special-cased as
`\n`/`\r`/`\t`/`\\`/`\"`/`\?`) as a 2-digit C hex escape `\xNN`:

```lean
else if c.toNat <= 31 then
  "\\x" ++ toHexDigit (c.toNat / 16) ++ toHexDigit (c.toNat % 16)
```

But C's `\x` escape has **no length limit** — it greedily consumes every
following hex digit. So `"\x01abc"` in C parses as a *single* escape
`0x01abc`, which overflows `char` and truncates to `0xbc`. The rest of the
intended characters disappear entirely.

**Verification.** I wrote `def badString : String := "\x01abc"` in Lean (a
4-character string, bytes `[0x01, 0x61, 0x62, 0x63]`) and emitted C via
`lean -c`. The resulting C file contains:

```c
static const lean_string_object l_badString___closed__0_value = {
  .m_header = {...},
  .m_size = 5, .m_capacity = 5, .m_length = 4,
  .m_data = "\x01abc"};
```

GCC emits `warning: hex escape sequence out of range`. Compiling an isolated
`const char s[] = "\x01abc"` produces a 2-byte array `{0xbc, 0x00}` — a 1-char
C string, not 4. The `lean_string_object` header claims `m_size = 5,
m_length = 4` but `m_data` is actually `{0xbc, 0x00}`. Any runtime operation
that walks `m_data[0..m_size]` (which is what `lean_string_size` / UTF-8
decoding / `strlen` / `String.utf8ByteSize` do) will read `m_size - 2 = 3`
bytes **past the end of the literal into adjacent rodata**. This is a
live out-of-bounds read and information disclosure; worse, if the string
is mutated or its header is relied upon for bounds checks in the runtime,
it can produce crashes or heap corruption.

The same bug path exists at `EmitC.lean:706` for `emitLit .str`:
`lean_mk_string_unchecked(quoted, byteSize, length)` copies `byteSize` bytes
starting at the truncated C-string constant.

**Trigger precondition:** any Lean `String` literal that contains a byte
`b ≤ 31` where `b ∉ {9, 10, 13}` (tab, LF, CR are special-cased) followed
directly by an ASCII hex digit (`0-9a-fA-F`). Safe bytes in this set include
0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x0b, 0x0c, 0x0e, 0x0f,
0x10..0x1f. Concrete example: `"\x01A"`, `"\x1Fcafe"`, `"\x05baadf00d"`.

**Why Wave 1 missed it:** Wave 1 focused on RC bugs and glanced over
`quoteString` with only "bytes ≥128 are emitted as-is, probably fine". Wave
2's reviewer walked the function byte-by-byte and thought about C parser
semantics.

**Fix:** use 3-digit octal escapes (`\NNN`, capped at 3 digits) instead of
hex, or close-and-reopen the string literal after each hex escape
(`"\x01" "abc"`). Octal is the smallest patch:

```lean
else if c.toNat <= 31 then
  let n := c.toNat
  "\\" ++ toString (n / 64) ++ toString ((n / 8) % 8) ++ toString (n % 8)
```

Severity: **moderate.** Reachable from any user program with a crafted
string literal; produces live rodata OOB reads. Not a trivial RCE (the
read data is rodata, which is read-only), but it corrupts string semantics
and can leak adjacent rodata content when the string is consumed by user
code.

---

## Latent code defects (real, currently unreachable)

### L1. `EmitC.lean:887-894` — `emitJmp` does not handle parameter-shuffle cycles

Unlike `emitTailCall` (which uses an `overwriteParam` temporary stash), `emitJmp`
writes jp params one-by-one. A jmp `L a b` where `L`'s params are `(x,y)` and
the args alias the params (`args = [y, x]`) would miscompile by reading the
already-clobbered `x`.

**Reachability investigation.** The shuffle can only fire if the jmp is *inside*
the target jp's own body (so the jp's params are in the jmp site's scope),
which requires a recursive joinpoint. `JoinPointFinder.find` in
`JoinPoints.lean:166-204` converts local `fun` decls to `jp`s by collecting
candidates during a traversal where the decl's fvar is added to `scope` via
`withFnDefined` **only when processing the continuation** (`k`), not the body
(`decl.value`). A self-call from the body therefore doesn't see itself in scope
and gets disqualified. Other jp creators (`Simp/Main.lean:167`, `Bind.lean:44`,
`ToLCNF.lean:132,198`, `JpCases.lean:139`) construct non-recursive jps where
jmps come from sibling code that cannot reference the jp's own params.

**Fix recommendation:** mirror the `overwriteParam` temporary strategy from
`emitTailCall`, or add an invariant checker assertion that jmp args never alias
the target jp's params. Cost is tiny and removes the hazard entirely.

### L2. `EmitC.lean:587-595` — `emitReset` else-branch uses `lean_dec_ref` on a possibly-scalar value

```lean
emit "else"
withEmitBlock do
  emitCApp1 "lean_dec_ref" fvarId; emitLn ";"
```

After `lean_is_exclusive` returns false, the value can be a tagged scalar, and
`lean_dec_ref` is UB on scalars. The older IR/cpp emitter uses `lean_dec`.

**Reachability investigation.** `emitReset` is the `EmitC` case for `LetValue.reset`
(line 558). `.reset` is only produced by `ResetReuse.lean:91` inside
`Decl.insertResetReuse`, which is gated on `compiler.reuse`. **Same** option
gates `Decl.expandResetReuse`, which is what consumes and destroys all `.reset`
LetValues. So either both passes run (in which case `emitReset` is never
called) or neither runs (ditto). The code at `EmitC.lean:587-595` is dead
under every config.

**Fix recommendation:** change to `lean_dec` regardless — the difference is
a single character and removes a trap for anyone wiring up an alternate
pipeline.

### L3. `EmitC.lean:821-826` — `emitDec` panics on `n>1`

```lean
emitDec (fvarId : FVarId) (n : Nat) (check : Bool) : EmitM Unit := do
  -- Anything else is unsupported at the moment
  assert! n == 1
  ...
```

The original reviewer claimed this "silently drops `n-1` decrements in release
builds". That is **wrong**: `assert!` in Lean expands to
`if cond then body else panic!` (`BuiltinNotation.lean:214-218`), so this is a
runtime panic, not a debug-only check. The actual behavior is an internal
compiler error if anything produces a `.dec` with `n>1`.

**Reachability investigation.** `.dec` values are produced by `ExplicitRC`
(always via `addDec` which hardcodes `n=1`), by `ExpandResetReuse:331` (also
hardcoded to 1), and by `CoalesceRC.lean:66-74` (which sums adjacent dec counts
into `decTotal`). `CoalesceRC` is the only producer that can emit `n>1`. For
this to happen, a single basic block must contain two `.dec x` instructions
with the same fvarId. I could not construct such a program; in every LCNF I
traced, each fvarId has at most one `.dec` per basic block.

**Fix recommendation:** either support `lean_dec_n` in `emitDec` (symmetric with
`emitInc`) or make the assertion a `throwError`. The asymmetry with `emitInc`
is a trap.

### L4. `ExpandResetReuse.lean:190-193` — `dec → del` rewrite unsafe on slow path

`processResetCont` unconditionally rewrites `dec resetTokenId n` into
`del resetTokenId k`:

```lean
| .dec y n _ _ k =>
  if resetTokenId == y then
    assert! n == 1
    return .del resetTokenId k
```

In `expand` (line 303), the entire continuation `k` of the reset becomes the
body of `resetjp`. On the slow path (`mkSlowPath`, line 330), `resetjp` is
called with `.erased` (→ `lean_box(0)`) for the reset-token parameter. If any
`del w` survives into `resetjp`'s body on a path where `w` is unreached by
`.reuse`, it becomes `lean_del_object(lean_box(0))` — dereferencing a tagged
scalar pointer as a heap object. UB / segfault.

**Reachability investigation.** The Wave 2 reviewer attempted three
minimizations and could not construct LCNF where `S` (the reset inserter)
wraps a multi-branch cases such that some branches don't consume `w`. In
every case the `D` pass descended into individual alts before invoking `S`,
so `S` operated on single-branch continuations only. The dangerous code
path exists but I could not verify a concrete trigger.

**Fix recommendation:** leave `.dec resetTokenId` in place instead of
rewriting to `.del`. `lean_dec(lean_box(0))` is safe (scalar check). The
original rewrite was presumably a micro-optimization, and correctness on
the slow path requires `dec`. Alternatively, attach the `del` rewrite to
the fast path only during `expand`.

### L5. `ExpandResetReuse.lean:80-107` — `eraseProjIncFor` drops `inc` on duplicate projection indices

`eraseProjIncFor` tracks erased projection incs in `mask : Array (Option FVarId)`
via `mask.set! i (some z)`. If two projections from the same index exist
(e.g. `let z1 := oproj[0] t; inc z1; let z2 := oproj[0] t; inc z2; reset t`),
the loop erases both incs but `mask[0]` is overwritten with whichever fvar
came last. On the slow path (lines 332-334), only one inc is reinstated. Net:
one refcount leak per duplicated projection.

**Reachability investigation.** LCNF's CSE should typically dedupe such
projections, but the code has no defensive check. Refcount leaks are not
memory-unsafe per se, but observable as growing live memory.

**Fix recommendation:** if `mask[i].isSome`, keep the second inc in `ds`
verbatim instead of dropping it, or track all projected fvars per slot.

---

## Dead code (gated or caught elsewhere)

### D1. `InferBorrow.lean:107-109 + 267-272` — exported decls forcibly mark every ref-typed parameter owned

Originally flagged as: `@[export] def f (x : @& Foo) ...` has its `@&` silently
inverted to owned, producing an FFI double-free.

**Investigation.** `ToDecl.lean:171-174` runs earlier in the pipeline and
**throws** when an exported decl has any `borrow` param, unless the user
explicitly sets `compiler.ignoreBorrowAnnotation := true`:

```
Declaration f_export is marked as `export` but some of its parameters have
borrow annotations. Consider using `set_option compiler.ignoreBorrowAnnotation
true in` to suppress the borrow annotations in its type.
```

I confirmed the error with a two-line test. With `ignoreBorrowAnnotation`
enabled, `ToDecl.lean:172` strips the borrow flags *before* InferBorrow runs,
and subsequently the decl is emitted as owned — which is the user-opted-in
behavior, not a bug.

`InferBorrow.initParamsIfNotExported` is the second layer of defense. The net
behavior is deliberate policy: exported decls always have owned param ABI
unless the user explicitly strips the annotations. Not a bug.

### D2. `ExpandResetReuse.lean:258-266 + 343-351` — fast/slow paths emit `oset`/`oproj` unconditionally

Originally flagged as: fast/slow paths iterate ctor args and emit `oset`/`oproj`
without distinguishing object slots from `usize`/`ssize` scalar slots → heap
corruption.

**Investigation.** The reviewer conflated LCNF-level `LetValue.ctor args` with
the C-level ctor memory layout. `ToImpure.lean:153-178` constructs
`.ctor ctorInfo objArgs` where `objArgs` contains **only** object-typed fields
(filtered at 157-159); `usize` and `ssize` fields are lowered to separate
`.uset` / `.sset` instructions following the ctor. Thus `args.size == info.size`
(the object field count), and iterating with `oset`/`oproj` in
`mkFastPath`/`mkSlowPath` is correct. Confirmed via LCNF trace of
`List.map`-style code: only `oset` for the two object fields, no scalar-slot
writes in the ctor path at all.

### D3. `ResetReuse.lean:70-106` + `ExpandResetReuse.lean:265` — missing `setTag` across distinct inductives with shared cidx

Flagged as: with `relaxedReuse=true`, two ctors from different inductives can
match `mayReuse`, but if they happen to share cidx, `updateNecessary = false`
and no `setTag` is emitted — the cell keeps the source inductive's tag while
now representing a different type.

**Investigation.** `mayReuse` is in fact memory-safe as long as the two ctors
have the same `size`, `usize`, and `ssize` (so they occupy the same physical
cell layout). Sharing a cidx across different inductives is only harmful to
correctness if the *runtime tag* is used to distinguish them — but at runtime
inductives are not tag-compatible across types, and Lean's type system already
prevents confusion at the Lean level. I did not manage to construct a case
where this causes a wrong-tag observation. Still, the code reads
suspicious — if anything ever inspects the tag outside the context of its own
inductive (e.g., `lean_obj_tag` used for debugging or FFI), this could silently
confuse the diagnosis.

**Fix recommendation:** emit `setTag` unconditionally when the target ctor
differs from the source, or assert that `info.name == info'.name` when
`updateNecessary=false`.

---

## False positives (reviewer misreading)

### FP1. `EmitC.lean:821-826` — originally claimed "silent drop in release builds"

`assert!` is a runtime panic, not debug-only. See L3 above (the defect is real,
but it's a panic rather than silent memory corruption).

### FP2. `ExpandResetReuse.lean` object-vs-scalar fast/slow paths

See D2. Reviewer conflated two abstraction layers.

### FP3. `InferBorrow.lean` exported decl param inversion

See D1. Caught by `ToDecl.lean:173` before it can matter.

### FP4. `PropagateBorrow.lean:88-100 + 152-156` — joining `.borrow ⊔ .own = .top` clobbers user jp borrow annotations

Flagged as "concrete path from a user annotation to a wrong ABI".

**Investigation.** The join direction is `borrow ⊔ own = top`, and
`top.toBorrow = some false` (owned). So a jp borrow param can flip to owned
when any call passes an owned arg. That's the claim.

But flipping *borrow* to *owned* is the **safe conservative direction**. If
PropagateBorrow decides a jp param is owned, ExplicitRC generates a call
sequence that transfers ownership to the jp — inserting any needed inc's
on the caller side. Memory safety is preserved; the only cost is a lost
reuse/optimization opportunity, which is exactly the purpose of
PropagateBorrow (to *inform* reset/reuse heuristics, not to dictate ABI).

No correctness bug, just a lost optimization in pathological cases.

---

## Correctness-equivalent / non-bug

### CE1. `ExplicitRC.lean:421-422` — `addPrologForAlt` asymmetry on borrow-vs-owned vars across alts

Flagged as: if alt₁ owns `x` and alt₂ uses `x` only via a derived borrow, alt₁
gets an `inc x` but alt₂ never gets a `dec x`, leaking on alt₂'s path.

**Investigation.** I attempted to construct a case that puts `x` in
`caseLiveVars.vars ∧ caseLiveVars.borrows` simultaneously. The mechanism that
adds a parent to `borrows` is `addDescendants`, which traverses from a
used var *down* to its derived children — it never walks *up* to parents. So
using a projection in alt₂ puts the *projection* in borrows, not `x`. I
walked through several Lean programs (`test4..test9` in the casestest files)
and never observed a case where `caseLiveVars.borrows` contained a var that
also appeared in `caseLiveVars.vars`. The scenario appears to be precluded by
the construction of `DerivedValMap` itself.

I am not 100% confident there is no pathological case, but I could not produce
one. Leaving as "unreproducible".

---

## Fragile invariants (not bugs, but worth hardening)

### FI1. `ExpandResetReuse.lean:187-236` — `dec` on projections is not erased on the fast path

`eraseProjIncFor` removes the projection's `inc`, but a downstream `dec` of the
same projection is left in place. On the fast path, this means the projection
is decremented while `orig`'s slot still holds the pointer to it.

**Trace investigation.** Confirmed via
`def mymap5 | x :: xs => (x + x) :: mymap5 xs`. The hot path emits

```
let head.2 := oproj[0] x.1
(inside resetjp body:)
  let _x.7 := Nat.add head.2 head.2
  dec head.2                            -- head freed here
  let _x.8 := mymap5 tail.3
  (hot path branch:)
    oset _x.5 [1] := _x.8
    oset _x.5 [0] := _x.7               -- dangling slot overwritten
```

Between the `dec head.2` and the subsequent `oset _x.5 [0] := _x.7`, the original
cell's slot 0 holds a dangling pointer (head was freed while `x.1` still
referenced it). The `oset` overwrites the slot before anyone reads it, so
today this is **memory-safe**.

But this is safe only under the implicit invariant "no operation between
`dec proj` and the matching `oset` reads `orig`'s slots". Any future pass or
debugging tool that inserts an `orig[i]` read in that window (debug logging,
heap scanning, concurrent mark, additional CSE or redundant-proj, ASAN hooks)
will observe a dangling pointer.

**Fix recommendation:** document the invariant in `expandResetReuse`, or
explicitly defer the `dec proj` until after the `oset`. The latter is a small
code change and closes the hazard.

### FI2. `ResetReuse.lean:259` — `borrowed := ownedness.getD discr .bot == .borrow`

Default `.bot` is treated as "not borrowed". If ownedness analysis is ever
incomplete for a discriminator variable (e.g., introduced by a later pass),
a borrowed cell could silently be reset, corrupting a cell owned elsewhere.

**Fix recommendation:** change the default to treat unknown as borrowed (the
safe direction), or throw if `discr` is not in the map.

---

## Medium confidence / not investigated

### MC1. `ExplicitRC.lean:569-582` — `Array.getInternal → ...Borrowed` rewrite reuses original signature

`ps` is fetched from the un-rewritten `f`, then used for both
`addDecAfterFullApp` and `addIncBefore`. If the `*Borrowed` variants have
different borrow signatures than their non-borrowed counterparts, inc/dec
emission is misaligned. I did not verify the signatures match.

**Fix recommendation:** fetch `ps` from the rewritten function, or assert the
signatures are identical.

### MC2. `ExplicitRC.lean:137-138` — nullary `.fap f #[]` unconditionally marked borrowed

In `CollectDerivedValInfo.collectCode`, a 0-arg `.fap` is unconditionally added
with empty parents and thus marked borrowed. This assumes every 0-arg call
returns a globally-rooted constant. If any 0-arg Lean function returns a fresh
owned object, the result would be marked borrowed and never decremented.

**Fix recommendation:** require the function to be a recognized constant
producer, or mark only functions whose signature confirms it.

### MC3. `InferBorrow.lean:339-342 + 399` — `ownArgsUsingParams` indexes `ps[i]!` without checking arity

If `getImpureSignature?` ever disagrees with the call site's `args.size`
(over- or under-saturated `.fap`), this panics or silently corrupts ownership.

### MC4. `CoalesceRC.lean:52-74` — flag-merging hazard

Flagged as: a block with `lean_inc x` (check=true) and `lean_inc_ref x`
(check=false) collapses to one op with whichever flag the emitted op happened to
have, potentially turning a check into a non-check on a possibly-scalar value.

**Investigation.** In ExplicitRC, `.inc` is always emitted via `addInc` which
derives `check` and `persistent` from the var's `VarInfo` — which is fixed per
fvarId. So within a single basic block, all `.inc x` ops have identical flags.
The only other `.inc` producer is `ExpandResetReuse:334` which hardcodes
`check=true, persistent=false`. These are emitted in the slow-path branch and
don't mingle with ExplicitRC incs on the same fvarId within one block.

So in practice, within a single basic block, all incs on the same var should
have the same flags. The flag-merging is therefore **latent** (the invariant
holds today, but if a future pass produces incs with varying flags, CoalesceRC
will silently flatten them).

**Fix recommendation:** when coalescing, assert that all `.inc`/`.dec` on a
given var in a block have identical flags, or take the `check=true` /
`persistent=true` direction of each merge (always safer).

---

## Lower confidence / latent

- **`EmitC.lean:873` `ensureHasDefault`** — TODO comment in the source flags
  that omitting a default could be UB. The function does synthesize a default,
  but worth a confirming invariant check.
- **`InferBorrow.lean:408-416`** — tail-call preservation only handles
  self-recursion; mutual SCC tail calls lose ownership preservation
  (documented TODO).
- **`PropagateBorrow.lean:72`** — non-borrow top-level params init to `.top`,
  asymmetric with jp params (`.bot`). Probably intentional but suppresses
  borrow propagation.
- **`ResetReuse.lean:104-106`** — no assertion that `ys.size == info'.size`;
  relies on caller well-formedness.

---

## Summary

After two waves of audit and hands-on MWE attempts for every high-confidence
candidate:

- **1 verified live memory-safety bug** (V1): `quoteString` hex-escape
  continuation in `EmitC.lean:213-228`. Triggerable from any Lean program with
  a crafted string literal of the form `"\xNNhex"`. Reads rodata out of
  bounds at runtime. **Fix this.**
- **5 latent defects** (L1–L5): real code issues whose triggering patterns
  are not currently produced by any pass. Worth defensive fixes because
  they are all short and close real future hazards.
- **2 fragile invariants** (FI1, FI2): memory-safe today but dependent on
  implicit "no pass will do X" conditions.
- **4 medium-confidence items** (MC1–MC4): not verified either way, worth
  defensive assertions.
- **Several false positives** from Wave 1 that Wave 2 independently
  debunked, confirming the `ExplicitRC` and `InferBorrow`+`PropagateBorrow`
  files are clean.

**Priority for fixing:**

1. **V1** (`quoteString`) — this is a live, reachable bug. One-line fix:
   switch from `\xNN` to `\NNN` (3-digit octal).
2. **L4** (`ExpandResetReuse` `dec → del`) — the fix is one deletion and
   closes a latent segfault path on the slow path.
3. **L1** (`emitJmp` parameter-shuffle) — mirror `emitTailCall`'s
   `overwriteParam` strategy.
4. **L3** (`emitDec` panic on `n>1`) — symmetrize with `emitInc` or turn
   the assertion into a `throwError`.
5. **FI1** (`ExpandResetReuse` dangling projection window) — document the
   invariant or defer the `dec` until after the overwrite.
6. **L2** (`emitReset` `lean_dec_ref`) — dead code, but one-character fix.
7. **L5, FI2, MC1–MC4** — defensive cleanups.
