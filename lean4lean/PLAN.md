# Plan for Proving the Injectivity Lemmas in Lean4Lean

## Background

The unique typing theorem (`IsDefEq.uniq`) in lean4lean is proven *modulo* three
injectivity lemmas in `Lean4Lean/Theory/Typing/Injectivity.lean`, all marked `sorry`:

1. **`IsDefEqU.sort_inv`**: If `sort u ≡ sort v` then `u ≈ v`
2. **`IsDefEqU.forallE_inv_stratified`**: If `forallE A B ≡ forallE A' B'` then
   domains and codomains are pairwise defeq (with stratification bounds)
3. **`IsDefEqU.sort_forallE_inv`**: `sort u` cannot be defeq to `forallE A B`

These are collectively called "definitional inversion" or "injectivity of type formers."

## Architecture

### Dependency Structure

The dependency chain that creates the circularity:

```
HeadReduction.lean (WHRed, standardization)
  └── ChurchRosser.lean (Params class, parallel reduction, confluence)
        └── UniqueTyping.lean (IsDefEq.uniq — proven modulo our sorry's)
              └── Injectivity.lean (sort_inv, forallE_inv — WE PROVE THESE)
```

Key observations about WHRed vs our approach:
- `WHRed` in HeadReduction.lean depends on `Params` (11 fields), which is defined
  in ChurchRosser.lean that imports UniqueTyping.lean
- The `Params` class definition and `WHRed` definition don't *intrinsically* need
  UniqueTyping — the dependency is a file organization artifact
- The *proofs* in ChurchRosser.lean (confluence etc.) heavily use `.uniq`, `.forallE_inv`
  etc. from UniqueTyping — creating the real circular dependency

Our approach avoids this entirely:
- `InjectivityParams` (in PatternParams.lean) is a minimal 3-field subset of `Params`
  (`Pat`, `pat_simple`, `extra_pat`) — no `pat_wf` or typing dependencies
- `WHStep` (in WHNFStep.lean) is a simpler version of `WHRed` that only depends on
  `InjectivityParams`, not on `Params` or UniqueTyping
- For the core injectivity proofs, we use direct HasTypeStratified induction (no
  WHRed/Church-Rosser needed)

### PatternParams and WHNFStep (Infrastructure)

`PatternParams.lean` defines `InjectivityParams` and proves that type formers
(sort, forallE, lam, bvar) cannot be LHS of any extra (pattern) rule:
- `forallE_not_pat_lhs`, `sort_not_pat_lhs`, `lam_not_pat_lhs`, `bvar_not_pat_lhs`

These are used by `WHNFStep.lean` which defines `WHStep` (a WHNF step relation)
and proves sorts/forallE are in WHNF. This infrastructure may be useful for
`sort_forallE_inv` but is not needed for the core sort_inv/forallE_inv proofs.

## Proof Strategy

### StratifiedBundle: Simultaneous Induction

All three lemmas are proven simultaneously by WF induction on `HasTypeStratified`
depth `n`, packaged as `StratifiedBundle env U n`:

```
Part 1 (uniq_n): type uniqueness at depth ≤ n
Part 2 (sort_inv_n): sort inversion at depth ≤ n
Part 3 (forallE_inv_n): forallE inversion at depth ≤ n
```

At each depth n, the IH provides all three at bounds < n.

### Ordering Within Each Level

**At each depth n, prove in this order:**
1. **sort_inv_n** — using `uniq_{<n}` and `sort_inv_{<n}` from the IH
2. **uniq_n** — copy of `IsDefEq.uniq` from UniqueTyping.lean, using `sort_inv_n`
   (just proven) and `forallE_inv_{<n}` from the IH
3. **forallE_inv_n** — using `uniq_n` and `sort_inv_n`

### sort_inv_n: Detailed Case Analysis

Given `HTS (.sort u) A b n₁` and `HTS (.sort v) A b n₂` with `n₁, n₂ ≤ n`, same
type `A`, same `b`. Goal: `u ≈ v`.

**Case b = false**: Both must be `sort'`. Types are syntactically equal
(`.sort (.succ l)`), so `u ≈ l ≈ v` directly. ✓ Proven.

**Case b = true**: Both are `base` or `defeq`.

- **base/base**: Strips to b=false, reduces to the sort'/sort' case. ✓ Proven.

- **base/defeq**: H1 = `.base(.sort'(...))` giving `A = .sort(.succ l₁)`, `u ≈ l₁`.
  H2 = `.defeq(hvB, B ≡ A : .sort w)` at depth `n₂' < n`.
  This is the **long construction** (~90 lines):
  1. `sort_canonical(hvB)` → `v ≈ l₂`
  2. `uniq_{<n}` on `hvB` and `sort'_v` → `B ≡ .sort(.succ l₂)` with HTS at depth `n₂'-1`
  3. `uniq_{<n}` on `hBw` and the result → `.sort w ≡ .sort w₃` with HTS at depth `n₂'-1`
  4. Construct `HTS (.sort w) (.sort w₄') true n₂'` via `.defeq` + `sortDF`
  5. `sort_inv_{<n}` → `w ≈ w₃`
  6. Construct `HTS (.sort(.succ l₂)) (.sort w) true n₂'` via `.defeq`
  7. `sort_inv_{<n}` → `succ l₁ ≈ succ l₂`
  ✓ Proven (modulo a build error in the `.defeq` construction at step 6).

- **defeq/base**: Symmetric to base/defeq. Same construction with roles swapped.

- **defeq/defeq**: H1 = `.defeq(a5: HTS .sort u A' true n₁')`,
  H2 = `.defeq(b5: HTS .sort v B true n₂')`. Both `n₁', n₂' < n`.

  **This is the hardest case.** The difficulty: `a5` has type `A'`, `b5` has type `B`,
  and these differ from each other and from `A`. `sort_inv` requires the SAME type.

  **Solution: `sortEquiv` helper** (see below). Using `uniq_{<n}` on each side to
  relate to canonical forms, then `sortEquiv` to bridge the ≈-related types.

### The sortEquiv Helper

**Problem**: `uniq_{<n}` gives HTS results at types that differ by `≈` (not syntactically
equal), but `sort_inv_{<n}` requires syntactically the same type.

**Solution**: `sortEquiv` extracts sort level equivalence from two HTS derivations
at ≈-related types:

```lean
sortEquiv : HTS (.sort u) (.sort w) true m₁ → m₁ < N →
            HTS (.sort v) (.sort w') true m₂ → m₂ < N →
            w ≈ w' → u ≈ v
```

**Proof** (by WF induction on `max(m₁, m₂)`):
- Base (max = 0): Both are `base(sort')`. Types are `.sort(.succ l)` with known `≈`,
  so `u ≈ l₁ ≈ l₂ ≈ v` by `succ_congr_iff`.
- Step: Use `uniq` from bundle IH to relate types to canonical forms (at depth max-1),
  recurse at lower depth. Specifically:
  1. `sort_canonical` → `u ≈ l₁`, `v ≈ l₂`
  2. `uniq_{<N}(h1, sort'_u)` → HTS results at depth `m₁-1`, including `w₃ ≈ w₃'`
  3. Recursive `sortEquiv` at depth `m₁-1` → `w ≈ succ l₁`
  4. Similarly → `w' ≈ succ l₂`
  5. `w ≈ w'` + chain → `succ l₁ ≈ succ l₂` → `u ≈ v`

### uniq_n: Copy from UniqueTyping.lean

`uniq_n` is essentially `IsDefEq.uniq` from `UniqueTyping.lean` (lines 13-112) with
two systematic replacements:

1. **`IsDefEqU.sort_inv henv hΓ ⟨_, h⟩`** → `sortEquiv henv IH hΓ hts1 ... hts2 ... hw`
   using the HTS components from the IH result (depths < n, so available from bundle IH)

2. **`IsDefEqU.forallE_inv_stratified henv hΓ ⟨_, c1⟩ c3 c4`** →
   `(IH (max ...) ...).2.2 hΓ ⟨_, c1⟩ ... c3 c4`
   using the forallE_inv component of the bundle IH

The proof uses nested WF induction (on the bound `m`) + structural induction (on H1),
exactly as in the original. The WF IH provides `uniq` at lower bounds. The structural
IH handles the `base`/`defeq` layer peeling.

### forallE_inv_n

Given `IsDefEqU (.forallE A B) (.forallE A' B')` with stratified HTS for each side:
- Both sides have type `.sort(.imax u v)` and `.sort(.imax u' v')` respectively
- By `uniq_n`: the types are related
- By `sort_inv_n`: the sort levels are related
- The `forallE` constructor in HTS directly decomposes into domain/codomain HTS
- The `defeq` case is handled by peeling layers (using IH)

### sort_forallE_inv

Given `IsDefEqU (.sort u) (.forallE A B)`:
- `.sort u` has type `.sort(.succ l)` (from sort')
- `.forallE A B` has type `.sort(.imax u' v')` (from forallE constructor)
- By `uniq`: `.sort(.succ l) ≡ .sort(.imax u' v')`
- By `sort_inv`: `succ l ≈ imax u' v'`
- But `succ l` is always > 0 while `imax u' v'` can be 0 when `v' = 0`
  ... actually this argument needs more care. May need `pat_simple` from
  `InjectivityParams` to handle the `extra` case.

## Current Implementation Status

### Files
- `PatternParams.lean`: `InjectivityParams` class + pattern exclusion lemmas ✓
- `WHNFStep.lean`: `WHStep` relation + WHNF stability (infrastructure, not yet used)
- `Injectivity.lean`: Main proofs (in progress)

### What's proven in Injectivity.lean
- `sort_inv_zero`: base case for sort inversion at depth 0 ✓
- `sort_canonical`: extract canonical level from any HTS for a sort ✓
- `StratifiedBundle` definition ✓
- `sort_inv_n` cases: b=false ✓, base/base ✓, base/defeq ✓ (modulo build error)
- Non-stratified theorem derivations (sort_inv, forallE_inv from bundle) ✓

### Remaining sorries
- `sortEquiv`: the key helper for bridging ≈-related types
- `sort_inv_n`: defeq/base (symmetric to base/defeq), defeq/defeq (needs sortEquiv)
- `uniq_n`: copy from UniqueTyping.lean with sort_inv/forallE_inv from IH
- `forallE_inv_n`: extraction of component equalities
- `sort_forallE_inv`: sort/forallE disjointness

### Rules
- **Never stop working until all sorries are eliminated.** Keep iterating until
  `Injectivity.lean` compiles with no sorries in the dependencies of unique typing.
- Always verify compilation after changes.

## Summary

The proof requires:
1. **Simultaneous induction** on stratification depth for all three injectivity lemmas
2. **`sortEquiv` helper** to bridge the gap between `uniq` (gives ≈-related types)
   and `sort_inv` (needs same type)
3. **Careful `defeq` layer construction** using `sortDF` and `.mono` to keep depths
   within the IH bound
4. **No Church-Rosser dependency** — purely structural/inductive via HasTypeStratified
5. **`uniq_n` is a direct copy** from UniqueTyping.lean with IH-provided replacements
