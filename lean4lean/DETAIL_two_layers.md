# Detail: Two-Layer Induction Architecture

## Overview

The proof uses two cleanly separated induction layers:

- **Layer 1** (existing): `StratifiedBundle` indexed by max(k₁, k₂). Proves sort_inv, uniq.
- **Layer 2** (new): `PreservationBundle` indexed by k₁+k₂. Proves sort_forallE_inv, whnf_preserved, forallE_inv.

Layer 2 uses Layer 1's results (sort_inv, uniq at all depths) but NOT vice versa.
Layer 1's forallE_inv is filled by Layer 2's forallE_inv.

## Why two separate inductions

sort_inv and uniq depend on forallE_inv at LOWER max-depth (n-1). forallE_inv depends
on whnf_preserved. whnf_preserved's appDF case needs the depth-SUM to decrease (not max-depth).
These are fundamentally different induction measures.

By separating them, each layer uses the measure that works for it:
- Layer 1: max-depth for sort_inv/uniq (the forallE_inv_{<n} from IH is at lower max-depth)
- Layer 2: depth-sum for whnf_preserved (the appDF chain has lower sum)

## Layer 1 changes

### StratifiedBundle definition (Injectivity.lean)

Unchanged from current. Still 3 components:
1. uniq_n
2. sort_inv_n
3. forallE_inv_n

### forallE_inv_n proof

Currently sorry. Changed to: invoke `preservation_bundle` from Layer 2.

```lean
have forallE_inv_n : ... := by
  intro hΓ hdeq hn₁ hn₂ ht₁ ht₂
  -- Use Layer 2's forallE_inv at sum k₁ + k₂
  exact (preservation_bundle (k₁ + k₂)).2.2 hΓ ht₁ ht₂ (le_refl _) hdeq
```

This requires `preservation_bundle : ∀ s, PreservationBundle s` to be available.
It's proved in SortLikePreservation.lean and imported by Injectivity.lean.

### Import order

Currently: Injectivity.lean doesn't import SortLikePreservation.lean directly.
The `sort_forallE_inv_ip` is called from Injectivity.lean.

New: Injectivity.lean imports SortLikePreservation.lean which exports
`preservation_bundle`. Or: the non-stratified extractions at the bottom of
Injectivity.lean construct `InjectivityParams` and call `preservation_bundle`.

Check: SortLikePreservation.lean imports WHNFStep.lean + Strong.lean + Lemmas.lean.
Injectivity.lean imports Strong.lean + Lemmas.lean + SortLikePreservation.lean (for sort_forallE_inv_ip).
So the import is already there.

## Layer 2 definition

### PreservationBundle (SortLikePreservation.lean)

```lean
private def PreservationBundle (s : Nat) [ip : InjectivityParams] : Prop :=
  -- Component 1: sort_forallE_inv
  (∀ {U Γ u A B T₁ T₂ k₁ k₂},
    Ordered ip.env → OnCtx Γ (ip.env.IsType U) →
    ip.env.HasTypeStratified U Γ (.sort u) T₁ true k₁ →
    ip.env.HasTypeStratified U Γ (.forallE A B) T₂ true k₂ →
    k₁ + k₂ ≤ s →
    ip.env.IsDefEqU U Γ (.sort u) (.forallE A B) → False) ∧
  -- Component 2: whnf_preserved
  (∀ {U Γ e₁ e₂ V T₁ T₂ k₁ k₂},
    Ordered ip.env → OnCtx Γ (ip.env.IsType U) →
    ip.env.IsDefEqStrong U Γ e₁ e₂ V →
    ip.env.HasTypeStratified U Γ e₁ T₁ true k₁ →
    ip.env.HasTypeStratified U Γ e₂ T₂ true k₂ →
    k₁ + k₂ ≤ s →
    (∀ l, SortLikeWith e₁ l → ∃ l', SortLikeWith e₂ l') ∧
    (∀ l, SortLikeWith e₂ l → ∃ l', SortLikeWith e₁ l') ∧
    (∀ A B, ForallELikeWith e₁ A B → ∃ A' B', ForallELikeWith e₂ A' B') ∧
    (∀ A B, ForallELikeWith e₂ A B → ∃ A' B', ForallELikeWith e₁ A' B')) ∧
  -- Component 3: forallE_inv
  (∀ {U Γ A B A' B' T₁ T₂ k₁ k₂},
    Ordered ip.env → OnCtx Γ (ip.env.IsType U) →
    ip.env.HasTypeStratified U Γ (.forallE A B) T₁ true k₁ →
    ip.env.HasTypeStratified U Γ (.forallE A' B') T₂ true k₂ →
    k₁ + k₂ ≤ s →
    ip.env.IsDefEqU U Γ (.forallE A B) (.forallE A' B') →
    (∃ u, ip.env.IsDefEq U Γ A A' (.sort u)) ∧
    ∃ u, ip.env.IsDefEq U (A::Γ) B B' (.sort u))
```

### The induction step

```lean
private theorem preservation_bundle_step (s : Nat)
    (IH : ∀ s' < s, PreservationBundle s')
    (henv : VEnv.WF ip.env) :
    PreservationBundle s := by
  constructor
  · -- sort_forallE_inv_s
    intro ...
    sorry -- see Phase D
  constructor
  · -- whnf_preserved_s
    intro ...
    sorry -- see Phase D
  · -- forallE_inv_s
    intro ...
    sorry -- see Phase E
```

## Depth-sum accounting details

### appDF forward

Given: `.app f a` at HTS k₁, `.app f' a'` at HTS k₂, sum k₁+k₂ ≤ s.
From HTS app rule: all premises at depth k₁-1.
After beta: `body.inst a` at depth ≤ k₁-1 (via f typing → lam inversion → substitution).
Chain: `body.inst a ≡ .app f' a'`. HTS depths: (k₁-1, k₂). Sum: k₁-1+k₂ = s-1 < s. ✓

### appDF backward

Given: `.app f' a'` at HTS k₂, `.app f a` at HTS k₁.
After beta: `body'.inst a'` at depth ≤ k₂-1.
Chain: `body'.inst a' ≡ .app f a`. Sum: k₁+(k₂-1) = s-1 < s. ✓

### eta backward

Given: `.lam A body` at HTS k₁, `e` at HTS k₂, sum k₁+k₂ ≤ s.
From HTS lam rule: `.forallE A B : .sort (imax u v)` at depth k₁-1.
For sort_forallE_inv: `.sort (succ l)` at depth 0 (sort' rule with n=0),
`.forallE A B` at depth k₁-1. Sum: 0+(k₁-1) = k₁-1 ≤ s. Use sort_forallE_inv_s. ✓

### proofIrrel

Given: `h` at HTS k₁, `h'` at HTS k₂.
Uses sort_inv and uniq from Layer 1 (no whnf_preserved needed). ✓

### trans

IH gives 4-tuple for sub-derivations. Compose forward/backward.
Sub-derivation HTS depths from the IsDefEqStrong derivation — these are at the
derivation's internal depths, not necessarily ≤ s. BUT: from H.hasType', e₁ : T₁
and e₂ : T₂. The sub-derivation `H₁ : e₁ ≡ e_mid` has e₁ at depth k₁ (external)
and e_mid at some depth k_mid. Sum: k₁ + k_mid. Similarly H₂: k_mid + k₂.

For structural induction: IH applies to sub-derivations regardless of sum. The sum
bound only matters for the appDF case (which uses the WF IH, not structural).
For trans, the structural IH gives the 4-tuple for H₁ and H₂ directly. ✓

Wait — the structural IH needs HTS witnesses with bounded sum for H₁ and H₂.
If the signatures require sum ≤ s, then k₁ + k_mid ≤ s must hold for H₁.
But k_mid could be large!

**Resolution**: The structural IH in `whnf_preserved_s` doesn't bind on sum.
The sum bound ≤ s is only used for the appDF case (to invoke the WF IH).
All other cases use the STRUCTURAL IH which works for any sum.

In Lean: `whnf_preserved_s` is proved by structural induction on H (for any HTS witnesses),
with the appDF case invoking `IH` (the WF hypothesis) at sum < s.

The signature: whnf_preserved_s takes `hsum : k₁ + k₂ ≤ s` but the structural IH
(from `induction H`) gives `∀ k₁' k₂', ... → (4-tuple)` for sub-derivations WITHOUT
a sum constraint. The sum constraint is ONLY checked when the appDF case tries to use
`IH` at a lower sum.

In practice: the function signature has `hsum`, but the structural IH drops it (it's not
part of the induction motive). The appDF case constructs `hsum' : (k₁-1) + k₂ < s` and
invokes `IH (s-1) hsum' ...`.

## Non-stratified extractions

After `preservation_bundle : ∀ s, PreservationBundle s`:

```lean
theorem IsDefEqU.sort_forallE_inv (henv : VEnv.WF env) (hΓ : ...)
    (h : IsDefEqU (.sort u) (.forallE A B)) : False := by
  let ⟨_, hdeq⟩ := h
  have ⟨h1, h2⟩ := (hdeq.strong ..).hasType'
  let ⟨k₁, ht₁⟩ := h1.stratify
  let ⟨k₂, ht₂⟩ := h2.stratify
  exact (preservation_bundle (k₁ + k₂)).1 .. ht₁ ht₂ (le_refl _) h

theorem IsDefEqU.forallE_inv (henv : VEnv.WF env) (hΓ : ...)
    (h : IsDefEqU (.forallE A B) (.forallE A' B')) : ... := by
  -- similar
```

These replace the current sorry-dependent extractions at the bottom of Injectivity.lean.
