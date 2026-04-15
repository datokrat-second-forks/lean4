# MWE for L5 — `eraseProjIncFor` drops `inc` on duplicate projection index

**Bug:** `src/Lean/Compiler/LCNF/ExpandResetReuse.lean:75-107`. The
`eraseProjIncFor` helper walks backward through the tail declarations before
a `reset`, matching the pattern

```
let z := oproj[i] targetId
inc z n
```

For each match it erases the `inc` and records `z` in
`mask.set! i (some z)`. If two projections from the **same index** `i` both
have matching `inc`s, the second `mask.set!` overwrites the first, and only
the later `z` survives. On the slow path (`mkSlowPath`, lines 332-334) the
surviving entry is incremented, but the first projection's `inc` was already
erased without being replaced — **one reference-count leak** per duplicated
projection.

## Reachability

**Not triggerable from normal Lean source.** The LCNF pipeline's CSE and
Simp passes aggressively deduplicate projections. I could not construct any
Lean program whose LCNF contains two `oproj[i] t` with the same `i` and `t`
in the same basic block. Every attempt I tried produced exactly one
projection binding per field index.

## Attempted triggers and why they failed

### Attempt 1: Literal double-use

```lean
def test1 : List Nat → List Nat
  | [] => []
  | x :: xs => (x + 1) :: (x + 2) :: xs
```

**LCNF (relevant fragment):**

```
| List.cons =>
  let head.2 := oproj[0] x.1;   -- single projection
  let tail.3 := oproj[1] x.1;
  ...
  let _x.8 := Nat.add head.2 _x.7;
  let _x.10 := Nat.add head.2 _x.9;
  dec head.2;
```

CSE merges both uses into one `head.2` binding. The duplicate-projection
pattern does not arise.

### Attempt 2: Struct with repeated field access

```lean
def test2 (p : Pair) : Pair :=
  { fst := p.fst, snd := p.fst }  -- uses p.fst twice
```

**LCNF:**

```
def test2 p : obj :=
  let fst := oproj[0] p;        -- single projection
  ...
  let reuseFailAlloc := ctor_0[Pair.mk] fst fst;
  ...
```

Again, one `oproj[0]`, reused as both fields of the new ctor.

### Attempt 3: noinline separator

```lean
@[noinline] def noinlineId (x : List Nat) : List Nat := x

def test3 : List Nat → List Nat
  | [] => []
  | x :: xs =>
    let a := noinlineId xs
    (x + x) :: a
```

Still one `head.2` binding for `x`.

### Attempt 4: let-aliased projections

```lean
def test4 (p : List Nat × List Nat) : List Nat × List Nat :=
  let a := p.1
  let b := p.1
  (a, b)
```

`a` and `b` are merged into a single `fst` binding.

## Target LCNF pattern (what would trigger L5)

The bug would fire on LCNF of the shape:

```
let z1 := oproj[0] t
inc z1 1 _ _
let z2 := oproj[0] t
inc z2 1 _ _
let w := reset n t
...
let final := reuse w ctor [z1, z2] in
  oset w 0 z1
  oset w 1 z2
  ...
```

`eraseProjIncFor` walks backward:
1. Pops `inc z2`, finds preceding `let z2 := oproj[0] t`, sets
   `mask[0] := some z2`, drops the inc.
2. Pops `inc z1`, finds preceding `let z1 := oproj[0] t`, **overwrites**
   `mask[0] := some z1`, drops the inc.

Now `mask[0] = some z1`. On the slow path, `inc z1 1` is re-emitted, but
there is no corresponding inc for `z2` — `z2` was a projection whose `inc`
was erased but never restored. Its refcount is now short by 1. When `z2`
eventually dies (dec), the refcount drops through zero; in practice this
produces a use-after-free if the projection pointed to a shared object and
another reference existed elsewhere.

## Why it's still worth fixing

CSE is a best-effort optimization. If a future pass rewrites code in a way
that introduces duplicate projections (e.g. a JIT-style specialization, an
escape-analysis split, a future reset/reuse expansion on nested
structures), the bug fires with no warning. The fix is one line:

```lean
-- In eraseProjIncFor (ExpandResetReuse.lean:102):
--   mask := mask.set! i (some z)
-- Guard against the overwrite:
if mask[i]!.isSome then
  break  -- don't erase a second inc for a slot we've already recorded
else
  mask := mask.set! i (some z)
  ...
```

Or: track a list of fvars per slot instead of a single `Option FVarId`, and
re-insert all of them on the slow path.

## Status

**Latent.** Code defect exists, pattern not reachable from Lean source under
the current pass pipeline. Classified as a defensive fix rather than a
live bug.
