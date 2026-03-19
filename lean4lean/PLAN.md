# Plan: Completing the Injectivity Proof

## Status

**20 sorry's** across 7 files. **3 proven results**: sort_inv, sort_forallE_inv (non-stratified), uniq.
**1 remaining goal**: `forallE_inv_n` in Injectivity.lean (1 sorry), which depends on everything else.

## Critical Path

```
Phase A: WHNFStep stuck lemmas ──────────── 3 sorry's in WHNFStep.lean
Phase B: Subject reduction bridge ────────── 0 sorry's (adds 1 field, proves it)
Phase C: Stratify whnf_preserved ─────────── refactor SortLikePreservation + Injectivity
Phase D: Close eta + proofIrrel cases ────── 6 sorry's in SortLikePreservation.lean
Phase E: Close appDF case ────────────────── 4 sorry's in SortLikePreservation.lean
Phase F: Close forallE_inv_n ─────────────── 1 sorry in Injectivity.lean
                                              ─────
                                              14 sorry's closed
```

Remaining 6 sorry's (non-critical-path):
- 3 in HeadReduction.lean (VDefEq axiom bridges — closed when addInduct is implemented)
- 2 in ChurchRosser.lean (secondary, not needed for injectivity)
- 1 in UniqueTyping.lean / InductiveLemmas.lean

## Phase A: WHNFStep Stuck Lemmas

**Files**: WHNFStep.lean
**Sorry's closed**: 3 (lines 221, 225, 232)
**Dependencies**: None
**Detail**: [DETAIL_stuck_lemmas.md](DETAIL_stuck_lemmas.md)

Prove that pattern-matched sub-expressions can't take WHStep:
1. `extra_app_arg_stuck`: iota argument is constructor-headed (stuck)
2. `extra_app_fn_stuck`: iota function prefix is partially-applied const (stuck)
3. `WHIsMajorPremise.no_step`: major premise is stuck (follows from 2)

These use `pat_simple` to decompose patterns into `SimplePattern.iota r m c n`,
then structural analysis of `varN (.const r) m` matching to show the function part
is a partially-applied constant (can't beta/extra/major), and the argument part is
a `varN (.const c) n` match (constructor-headed, can't step).

## Phase B: Subject Reduction Bridge

**Files**: PatternParams.lean, HeadReduction.lean, SortLikePreservation.lean
**Sorry's closed**: 1 (WHSteps_hasType at line 99 of SortLikePreservation.lean)
**Dependencies**: None (parallel with Phase A)
**Detail**: [DETAIL_sr_bridge.md](DETAIL_sr_bridge.md)

Add `whsteps_hasType` field to `InjectivityParams`:
```lean
whsteps_hasType : Ordered env → OnCtx Γ (env.IsType univs) →
    WHSteps e e' → env.HasType univs Γ e A → env.HasType univs Γ e' A
```

In HeadReduction.lean: fill it via existing `WHRedS.hasType` (which uses `WHRed.hasType`,
already proven). Requires showing `WHStep → WHRed` given typing context — mechanical
since both have the same constructors (beta, extra, appFn, major).

Closes `WHSteps_hasType` sorry (line 99 of SortLikePreservation.lean).

## Phase C: Stratify whnf_preserved

**Files**: SortLikePreservation.lean, Injectivity.lean
**Sorry's closed**: 0 (refactor only)
**Dependencies**: None (parallel with A and B)
**Detail**: [DETAIL_stratify_preserved.md](DETAIL_stratify_preserved.md)

**The key architectural change.** Currently `whnf_preserved` is non-stratified and
`sort_forallE_inv_ip` sits outside the bundle. Both must move inside.

New signature:
```lean
private theorem whnf_preserved_n
    (bundle_lt : ∀ m < n, StratifiedBundle env U m)
    (uniq_n : ...) (sort_inv_n : ...)
    (hord : Ordered ip.env) (hΓ : OnCtx Γ (ip.env.IsType U))
    (H : ip.env.IsDefEqStrong U Γ e₁ e₂ V)
    (ht₁ : ip.env.HasTypeStratified U Γ e₁ T₁ true k₁) (hk₁ : k₁ ≤ n)
    (ht₂ : ip.env.HasTypeStratified U Γ e₂ T₂ true k₂) (hk₂ : k₂ ≤ n)
    : (4-tuple of SortLike/ForallELike preservation)
```

Why the typing witnesses: the eta case needs `sort_forallE_inv` at depth < n
(extractable from the eta constructor's embedded typing at depth ≤ k-2 < k ≤ n),
and the proofIrrel case needs SR + uniq_n. The appDF case needs constructed-chain
preservation at depth < n (see Phase E).

The StratifiedBundle grows to include `sort_forallE_inv_n` as Part 4, derived from
`whnf_preserved_n` inside the bundle step.

## Phase D: Close eta + proofIrrel

**Files**: SortLikePreservation.lean
**Sorry's closed**: 6 (lines 99, 151, 153, 181×4)
**Dependencies**: Phases B and C
**Detail**: [DETAIL_eta_proofirrel.md](DETAIL_eta_proofirrel.md)

**proofIrrel** (4 sorry's): Vacuously true. Argument for SortLike direction:
1. `SortLikeWith h l` + `h : p` → by SR (`whsteps_hasType`): `.sort l : p`
2. Canonical: `.sort l : .sort (succ l)`. By `uniq_n`: `p ≡ .sort (succ l)`
3. `p : .sort 0` → `.sort (succ l) : .sort 0` → by sort typing + `uniq_n`:
   `.sort 0 ≡ .sort (succ (succ l))` → by `sort_inv_n`: contradiction

ForallELike direction: identical, replacing `.sort l` with `.forallE A B`.

**eta backward** (2 sorry's): Also vacuously true.
The eta constructor provides `e : .forallE A B` at depth k_e ≤ k₂ - 2.
If `SortLikeWith e l`, then by SR: `.sort l : .forallE A B`.
By uniq + sort typing: `.forallE A B ≡ .sort (succ l)`.
By `sort_forallE_inv` at depth k_e (from `bundle_lt`, since k_e < n): contradiction.

## Phase E: Close appDF

**Files**: SortLikePreservation.lean
**Sorry's closed**: 4 (lines 172×2, 173×2)
**Dependencies**: Phases A, B, C, D
**Detail**: [DETAIL_appDF_v2.md](DETAIL_appDF_v2.md)

The hardest case. Given `appDF: .app f a ≡ .app f' a'` with `SortLikeWith (.app f a) l`.

**Forward direction** (`SortLikeWith (.app f a) l → ∃ l', SortLikeWith (.app f' a') l'`):

Analyze the WHStep chain from `.app f a`:
- Eventually reaches a beta step: `f →_WH* .lam T body`, then `body.inst a →_WH* .sort l`
- Or an extra step: full pattern fires, `r.apply m1 m2 →_WH* .sort l`

In the beta sub-case:
1. `body.inst a` has HTS at depth ≤ k₁-1 (by app/lam inversion)
2. Construct chain: `body.inst a ≡ .app (.lam T body) a ≡ .app f a ≡ .app f' a'`
3. Apply `whnf_preserved` at depth k₁-1 < n (from `bundle_lt`)
4. Get `SortLikeWith (.app f' a') l'` ✓

In the extra sub-case:
1. The pattern RHS `r.apply m1 m2` has HTS at depth ≤ k₁-1 (from pat_wf + app typing)
2. Same chain construction approach applies

**Backward direction**: symmetric, using k₂-1 < n.

**Key subtlety**: The constructed chain is NOT a sub-derivation of the original appDF,
so structural induction fails. The depth-decreasing argument via `bundle_lt` is essential.
The SortLike-bearing side determines the depth bound (k₁-1 for forward, k₂-1 for backward).

## Phase F: Close forallE_inv_n

**Files**: Injectivity.lean
**Sorry's closed**: 1 (line 490)
**Dependencies**: Phases C, D, E
**Detail**: [DETAIL_forallE_inv_trans.md](DETAIL_forallE_inv_trans.md) (already exists)

With `whnf_preserved_n` and `sort_forallE_inv_n` in the bundle, prove `forallE_inv_n`
by structural induction on `IsDefEqStrong`.

Hard case: **trans** — `forallE A B ≡ e_mid` and `e_mid ≡ forallE A' B'`.
By ForallELike preservation (from `whnf_preserved_n`): `e_mid` is forallE-like.
By WHStep determinism: `e_mid →_WH* .forallE A_mid B_mid`.
Then apply IH on the two sub-derivations.

## Known Risks

### Risk 1 (HIGH): Depth bound circularity in eta + sort_forallE_inv

`whnf_preserved` and `sort_forallE_inv` are mutually dependent:
- eta case of `whnf_preserved` needs `sort_forallE_inv`
- `sort_forallE_inv` is proved via `whnf_preserved`

Stratification breaks this: prove `sort_forallE_inv_n` using `whnf_preserved_{<n}`,
then use `sort_forallE_inv_n` in `whnf_preserved_n`. But the eta case at depth n
requires `sort_forallE_inv` at depth involving `.forallE A B` typed at depth k_f.
If k_f = n (tight bound), the argument is circular.

**Mitigation**: Include `whnf_preserved` in the StratifiedBundle (5 components).
Prove `sort_forallE_inv_n` first using `whnf_preserved_{<n}`, then
`whnf_preserved_n` using `sort_forallE_inv_n`. The eta case uses `sort_forallE_inv_n`
at the CURRENT depth n (just proved, not from bundle_lt). This requires careful ordering
within the bundle step. See [DETAIL_eta_proofirrel.md](DETAIL_eta_proofirrel.md).

### Risk 2 (HIGH): Two-sided depth bound in appDF

The constructed chain for appDF has one side at depth k₁-1 < n but the other side
at depth k₂ ≤ n. When k₂ = n, whnf_preserved at depth n is needed for the chain,
which is circular (we're proving it).

**Mitigation options** (see [DETAIL_appDF_v2.md](DETAIL_appDF_v2.md)):
- **Depth-sum measure**: Induct on k₁+k₂ instead of max(k₁,k₂). The chain has sum
  (k₁-1)+k₂ < k₁+k₂. Viable but requires changing the StratifiedBundle index.
- **Church-Rosser shortcut**: If the 2 CR sorry's can be closed, appDF follows from
  confluence without depth tracking. The CR sorry's are uninvestigated.

### Risk 3 (MEDIUM): StratifiedBundle size

With 5 components (uniq, sort_inv, forallE_inv, sort_forallE_inv, whnf_preserved),
the bundle becomes large. The well-founded induction proof may be unwieldy and slow
to compile. Consider factoring into smaller mutual groups.

## What Went Wrong With the Previous Plan

1. **whnf_preserved was not stratified.** It was treated as a standalone theorem, but
   eta/proofIrrel/appDF all need depth-indexed information (sort_forallE_inv_{<n}, SR,
   bundle_lt). The current flat signature can't express this.

2. **SR cross-layer mismatch.** InjectivityParams has no typing, but SR requires it.
   Solution: add SR as a field of InjectivityParams, proved via WHRed.hasType in the
   HeadReduction bridge.

3. **appDF depth bound was hand-waved.** The DETAIL said "chain at depth ≤ k₁-1 < n"
   but only verified this for one side. Both sides need analysis: the SortLike-bearing
   side determines the depth bound (k₁-1 for forward, k₂-1 for backward).

4. **Mutual dependency between whnf_preserved and sort_forallE_inv was not identified.**
   The eta case creates a circularity that requires careful ordering within the bundle
   step. This is the single most important architectural issue the previous plan missed.
