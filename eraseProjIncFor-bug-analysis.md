# eraseProjIncFor Mask Overwrite Bug Analysis

## Bug Location and Description

**File**: `/build/src/Lean/Compiler/LCNF/ExpandResetReuse.lean`  
**Line**: 102  
**Function**: `eraseProjIncFor`

The bug is a mask overwrite in the `eraseProjIncFor` function:

```lean
-- Line 102 in ExpandResetReuse.lean
mask := mask.set! i (some z)  -- ❌ Overwrites without checking if mask[i] is already set
```

## Root Cause

When `eraseProjIncFor` scans a linear block for the pattern:
```
let x := oproj[i] orig
inc x
...
reset orig
```

It erases each `inc x` instruction and records `x` in `mask[i]`. However, if the **same projection index `i`** appears multiple times with different fvar IDs, the second `mask.set! i (some z)` overwrites the first entry without checking if `mask[i].isSome`.

**Result**: Multiple `inc` instructions are erased, but only the last one is recorded in the mask.

## When This Bug Occurs

The bug requires **two distinct `oproj[i] orig` let-bindings in the same linear block** just before a `reset orig`. This can happen through:

1. **Outer projection**: `let a := p.fst` before a match
2. **Alt parameters**: `match p with | ⟨x, y⟩ => ...` triggers `Alt.toImpure` which emits `let x := oproj[0] p`
3. **Code motion**: `pushProj(0)` in the impure phase moves the outer projection into the alt
4. **Survival**: Both projections survive `elimDeadVars` because they're both consumed
5. **Reset/reuse**: The result allocates the same constructor, so `insertResetReuse` adds a reset

## Test Case

Created in `/build/test_erase_proj_inc_bug.lean`:

```lean
structure Triple where
  fst : Nat
  snd : Nat
  thd : Nat

@[inline] def use_first_field (p : Triple) (flag : Bool) : Nat :=
  if flag then p.fst + 1 else p.fst + 2

def test (p : Triple) (flag : Bool) : Triple :=
  let a := use_first_field p flag  -- Uses p.fst indirectly
  match p with
  | ⟨x, y, z⟩ => ⟨a + x, y, z⟩    -- Uses both 'a' (derived from p.fst) and 'x' (alt param)
```

## Demonstrated Bug Behavior

**Input to `expandResetReuse` (after `explicitRc` pass):**
```lean
jp _jp.1 _y.2 : obj :=
  let fst.3 := oproj[0] p;
  inc fst.3;                    ← Inc instruction present
  let snd.4 := oproj[1] p;
  inc snd.4;
  let thd.5 := oproj[2] p;
  inc thd.5;
  let _x.6 := reset[3] p;       ← Reset after projections
  let _x.7 := Nat.add _y.2 fst.3;
  dec fst.3;                    ← Dec instruction balances the inc
  ...
cases flag : obj
| Bool.false =>
  let fst := oproj[0] p;        ← Additional oproj[0] p (different fvarId)
| Bool.true =>
  let fst := oproj[0] p;        ← Additional oproj[0] p (different fvarId)
```

**Output from `expandResetReuse`:**
```lean
jp _jp.1 _y.2 : obj :=
  let fst.3 := oproj[0] p;
  let snd.4 := oproj[1] p;      ← ❌ inc fst.3 is MISSING!
  let thd.5 := oproj[2] p;
  jp resetjp.6 _x.7 isShared.8 : obj :=
    let _x.9 := Nat.add _y.2 fst.3;
    dec fst.3;                  ← ❌ Dec without matching inc
    ...
    cases isShared.8 : obj
    | Bool.false =>             ← Fast path
      oset _x.7 [0] := _x.9;    
      goto reusejp.10 _x.7
    | Bool.true =>              ← Slow path  
      let reuseFailAlloc.12 := ctor_0[Triple.mk] _x.9 snd.4 thd.5;
  ...
  cases isSharedCheck.13 : obj
  | Bool.false =>
    goto resetjp.6 p isSharedCheck.13
  | Bool.true =>
    inc fst.3;                  ← ✓ Inc only in slow path
    dec p;
    goto resetjp.6 ◾ isSharedCheck.13;
```

## Memory Safety Issue

The bug creates **unbalanced reference counting**:

- **Fast path**: `oproj[0] p → fst.3` (refcount=1) → `dec fst.3` (refcount=0) → **deallocation**
- **Slow path**: `oproj[0] p → fst.3` (refcount=1) → `inc fst.3` (refcount=2) → `dec fst.3` (refcount=1) ✓

**Memory corruption sequence:**
1. Fast path: `fst.3` is deallocated by `dec fst.3` 
2. `_x.9 = Nat.add _y.2 fst.3` computed using deallocated `fst.3` (**use-after-free**)
3. `oset _x.7 [0] := _x.9` stores potentially corrupted value

## Mechanistic Analysis

### Scan Pattern in eraseProjIncFor

The function scans backwards from a reset, looking for:
```lean
ds[j] = let z := oproj[i] orig
ds[j+1] = inc z
...
ds[k] = reset orig
```

### The Overwrite Bug

```lean
for j in [k-1:0:-1] do
  match ds[j] with
  | let z := oproj[i] orig =>
    if ds[j+1] == inc z then
      mask := mask.set! i (some z)  -- ❌ OVERWRITES previous mask[i]
      ds := ds.eraseIdx (j+1)       -- Erase inc z
```

When multiple `oproj[i] orig` exist:
1. First match: `mask[0] := some fst.3`, erase `inc fst.3`
2. Second match: `mask[0] := some fst` (**overwrites!**), erase `inc fst` 

### Impact on mkSlowPath/mkFastPath

- `mkSlowPath`: Only emits `inc fst` (the last recorded value)
- `mkFastPath`: Skips field 0 entirely since `mask[0].isSome`
- **Result**: Missing `inc fst.3` in fast path

## Fix Options

### Option 1: Early Bailout (Recommended)
```lean
if mask[i].isSome then
  continue  -- Don't process this oproj if mask[i] already set
mask := mask.set! i (some z)
```

### Option 2: Record Multiplicities  
```lean
structure Mask where
  entries : Array (Option (FVarId × Nat))  -- (fvarId, count)

-- Increment count instead of overwriting
```

## Verification

To verify the fix:
1. Apply the patch to `ExpandResetReuse.lean:102`
2. Run the test case: `lean test_erase_proj_inc_bug.lean`
3. Check that `inc fst.3` appears in the fast path after `expandResetReuse`
4. Verify reference counting remains balanced in both paths

## Impact Assessment

- **Severity**: High - Memory corruption, use-after-free
- **Scope**: Any code with reset/reuse optimization on objects with duplicate field projections
- **Detection**: Requires specific IR patterns, likely rare in practice but potentially exploitable

## References

- Bug location: `src/Lean/Compiler/LCNF/ExpandResetReuse.lean:102`
- Test case: `test_erase_proj_inc_bug.lean`
- Related paper: "Counting Immutable Beans" (reset/reuse optimization)
- IR phases: `explicitRc` → `expandResetReuse` → `coalesceRc`