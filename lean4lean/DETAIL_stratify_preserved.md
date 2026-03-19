# Detail: Stratifying whnf_preserved

## Problem

`whnf_preserved` currently has a flat signature:
```lean
theorem whnf_preserved (H : ip.env.IsDefEqStrong U Γ e₁ e₂ V) : (4-tuple)
```

This can't handle:
- **eta backward**: needs `sort_forallE_inv` at lower depth (circular at same depth)
- **proofIrrel**: needs SR + `uniq` + `sort_inv` (requires Ordered/OnCtx params)
- **appDF**: needs preservation at lower depth for constructed chain (not a sub-derivation)

## New Architecture

### StratifiedBundle grows from 3 parts to 4:

```lean
private def StratifiedBundle (env : VEnv) (U n : Nat) : Prop :=
  -- Part 1: uniq_n
  (∀ ..., HasTypeStratified ... n₁ → HasTypeStratified ... n₂ → n₁ ≤ n → n₂ ≤ n →
    ∃ u, IsDefEq ... A B (.sort u) ∧ ...) ∧
  -- Part 2: sort_inv_n
  (∀ ..., HasTypeStratified (.sort u) ... n₁ → HasTypeStratified (.sort v) ... n₂ →
    n₁ ≤ n → n₂ ≤ n → u ≈ v) ∧
  -- Part 3: forallE_inv_n
  (∀ ..., IsDefEqU (.forallE A B) (.forallE A' B') →
    HasTypeStratified ... n₁ → HasTypeStratified ... n₂ → n₁ ≤ n → n₂ ≤ n →
    component equalities) ∧
  -- Part 4 (NEW): sort_forallE_inv_n
  (∀ ..., OnCtx Γ ... → IsDefEqU (.sort u) (.forallE A B) → False)
```

Note: Part 4 doesn't need depth parameters since sort_forallE_inv is unconditional
once whnf_preserved works. But it's proved USING whnf_preserved_n which itself uses
bundle_lt.

### whnf_preserved_n signature

```lean
private theorem whnf_preserved_n
    [ip : InjectivityParams]
    (henv : VEnv.WF ip.env)
    (bundle_lt : ∀ m < n, StratifiedBundle ip.env U m)
    (uniq_n : Part1_at_n) (sort_inv_n : Part2_at_n)
    (hord : Ordered ip.env) (hΓ : OnCtx Γ (ip.env.IsType U))
    (H : ip.env.IsDefEqStrong U Γ e₁ e₂ V)
    (ht₁ : ip.env.HasTypeStratified U Γ e₁ T₁ true k₁) (hk₁ : k₁ ≤ n)
    (ht₂ : ip.env.HasTypeStratified U Γ e₂ T₂ true k₂) (hk₂ : k₂ ≤ n)
    : (4-tuple)
```

### Where ht₁/ht₂ come from

The caller (in bundle_step) constructs them from the IsDefEqStrong derivation:
- `IsDefEqStrong.hasType'` gives `HasType e₁ T₁ ∧ HasType e₂ T₂`
- `HasType.stratify` gives `∃ n, HasTypeStratified ... n`
- Pick `n = max(n₁, n₂)` as the depth for the bundle step

## Refactoring Steps

### Step 1: Add Part 4 to StratifiedBundle in Injectivity.lean

Add the `sort_forallE_inv_n` component to the bundle definition. Update all pattern
matches on `StratifiedBundle` (sort_inv_n, uniq_n extraction, bundle_step).

### Step 2: Thread InjectivityParams through the bundle

Currently the bundle is parameterized by `env` and `U`. It needs `[InjectivityParams]`
for whnf_preserved (which uses WHStep, Pat, etc.).

This changes the type of `stratified_bundle` and all non-stratified extractions
(sort_inv, forallE_inv, sort_forallE_inv). The non-stratified theorems at the bottom
of Injectivity.lean will need to construct InjectivityParams — they can use the
HeadReduction instance since they already have `VEnv.WF`.

### Step 3: Move whnf_preserved into the bundle step

Currently in SortLikePreservation.lean as a standalone theorem. Options:
a) Move it to Injectivity.lean (inside bundle_step)
b) Keep it in SortLikePreservation.lean but change signature to take bundle_lt
c) Make it a function that bundle_step calls

Option (b) is cleanest: keep the file split but change the signature. The bundle_step
in Injectivity.lean calls `whnf_preserved_n bundle_lt uniq_n sort_inv_n hord hΓ ...`.

### Step 4: Move sort_forallE_inv inside bundle_step

Currently `sort_forallE_inv_ip` is in SortLikePreservation.lean, called from Injectivity.lean.
Move the derivation inside bundle_step: after proving whnf_preserved_n, derive
sort_forallE_inv_n from it (same proof as current sort_forallE_inv_ip).

### Step 5: Update forallE_inv_n to use the bundle

Currently sorry'd. After the refactor, it can access sort_forallE_inv_n and
whnf_preserved_n (ForallELike preservation for the trans case).

## Cascading Changes

- `sort_forallE_inv_ip` parameters change (takes bundle_lt instead of being standalone)
- `Injectivity.lean` bundle_step gains ~20 lines of whnf_preserved_n + sort_forallE_inv_n
- Non-stratified extractions (`IsDefEqU.sort_inv`, etc.) need InjectivityParams available
  — either thread it explicitly or use `haveI` with the HeadReduction instance
- Already-proved cases of whnf_preserved (bvar, symm, trans, sortDF, constDF, etc.)
  gain extra parameters but their proofs don't change (just add `_` for unused params)

## Risk Assessment

**Medium-high**. This is the largest refactor. Main risks:
- Type signature changes cascade through multiple files
- Threading InjectivityParams into the bundle may require import changes
- The interaction between Injectivity.lean and SortLikePreservation.lean needs care

Mitigation: do the refactor in small steps, checking compilation after each.
