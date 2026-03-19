# Plan: Completing the Injectivity Proof

## Status

**20 sorry's** across 7 files. **3 proven results**: sort_inv, sort_forallE_inv (non-stratified), uniq.
**1 remaining goal**: `forallE_inv_n` in Injectivity.lean (1 sorry), which depends on everything else.

## Architecture

### Two-level induction

The proof uses TWO induction layers, cleanly separated:

**Layer 1: StratifiedBundle (WF induction on max depth n)**
Already exists. Proves sort_inv_n, uniq_n. These need forallE_inv_{<n} from the IH
but do NOT need whnf_preserved. Unchanged from current code.

**Layer 2: PreservationBundle (WF induction on depth-sum s = k₁ + k₂)**
NEW. Proved AFTER Layer 1 (uses sort_inv/uniq at all depths). Contains:
1. `sort_forallE_inv_s` — uses `whnf_preserved_{<s}`
2. `whnf_preserved_s` — uses `sort_forallE_inv_s` + `whnf_preserved_{<s}`
3. `forallE_inv_s` — uses `whnf_preserved_s` + `sort_forallE_inv_s`

No circularity within each step s. The depth-sum k₁+k₂ strictly decreases for
appDF (body.inst a at depth ≤ k₁-1, so sum drops by 1), resolving the two-sided
depth problem.

### Why depth-SUM works

From HasTypeStratified (Strong.lean lines 833-846):
- `app` at depth `n+1` has ALL premises (f, a, domain, codomain) at depth `n`
- `lam` at depth `n+1` has ALL premises (A, B, body, forallE type) at depth `n`

So for `.app f a` at HTS depth k₁:
- `body.inst a` at depth ≤ k₁ - 1 (via app inversion → f typing → lam inversion → substitution)
- Chain `body.inst a ≡ .app f' a'` has sum (k₁-1) + k₂ = (k₁+k₂) - 1 < k₁+k₂ = s ✓

For `.lam A body` at HTS depth k₁ (eta case):
- `.forallE A B : .sort (imax u v)` is a premise at depth k₁ - 1 (strictly less!) ✓
- `sort_forallE_inv` called with `.sort (succ l)` at depth 0 and `.forallE A B` at depth k₁-1
- Sum = 0 + (k₁-1) = k₁ - 1 ≤ k₁ ≤ s. Use sort_forallE_inv_s (same step). ✓

## Critical Path

```
Phase A: WHNFStep stuck lemmas ──────────── 3 sorry's in WHNFStep.lean
Phase B: Subject reduction bridge ────────── 1 sorry in SortLikePreservation.lean
Phase C: Restructure into two layers ────── refactor SortLikePreservation + Injectivity
Phase D: Close eta + proofIrrel + appDF ──── 10 sorry's in SortLikePreservation.lean
Phase E: Close forallE_inv ───────────────── 1 sorry in Injectivity.lean
                                              ─────
                                              15 sorry's closed (14 on critical path + 1 SR)
```

Remaining 5 sorry's (non-critical-path):
- 3 in HeadReduction.lean (VDefEq axiom bridges)
- 2 in ChurchRosser.lean (NormalEq.parRed extra cases — CR itself is proved)

## Phase A: WHNFStep Stuck Lemmas

**Files**: WHNFStep.lean
**Sorry's closed**: 3 (lines 221, 225, 232)
**Dependencies**: None
**Detail**: [DETAIL_stuck_lemmas.md](DETAIL_stuck_lemmas.md)

Prove that pattern-matched sub-expressions can't take WHStep:
1. `extra_app_arg_stuck`: iota argument is constructor-headed (stuck)
2. `extra_app_fn_stuck`: iota function prefix is partially-applied const (stuck)
3. `WHIsMajorPremise.no_step`: major premise is stuck (follows from 2)

These use `pat_simple` to decompose into `SimplePattern.iota`, then structural
analysis of `varN (.const r) m` matching.

## Phase B: Subject Reduction Bridge

**Files**: PatternParams.lean, HeadReduction.lean, SortLikePreservation.lean
**Sorry's closed**: 1 (WHSteps_hasType at line 99)
**Dependencies**: None (parallel with Phase A)
**Detail**: [DETAIL_sr_bridge.md](DETAIL_sr_bridge.md)

Add `whsteps_hasType` field to `InjectivityParams`. Fill in HeadReduction.lean
via existing `WHRedS.hasType`. Requires `WHStep → WHRed` given typing context.

## Phase C: Restructure into Two Layers

**Files**: SortLikePreservation.lean, Injectivity.lean
**Sorry's closed**: 0 (refactor only)
**Dependencies**: None (parallel with A and B)
**Detail**: [DETAIL_two_layers.md](DETAIL_two_layers.md)

### Layer 1 changes (Injectivity.lean)

The existing StratifiedBundle keeps its 3 components (uniq, sort_inv, forallE_inv).
Change `forallE_inv_n` from sorry to: invoke Layer 2's `forallE_inv` at the right depth-sum.

### Layer 2: PreservationBundle (NEW, in SortLikePreservation.lean)

```lean
/-- All preservation results indexed by depth-sum s = k₁ + k₂. -/
private def PreservationBundle (env : VEnv) (U s : Nat) [InjectivityParams] : Prop :=
  -- sort_forallE_inv at sum ≤ s
  (∀ {Γ u A B T₁ T₂ k₁ k₂}, OnCtx Γ (env.IsType U) →
    env.HasTypeStratified U Γ (.sort u) T₁ true k₁ →
    env.HasTypeStratified U Γ (.forallE A B) T₂ true k₂ →
    k₁ + k₂ ≤ s →
    env.IsDefEqU U Γ (.sort u) (.forallE A B) → False) ∧
  -- whnf_preserved at sum ≤ s
  (∀ {Γ e₁ e₂ V T₁ T₂ k₁ k₂}, OnCtx Γ (env.IsType U) →
    env.IsDefEqStrong U Γ e₁ e₂ V →
    env.HasTypeStratified U Γ e₁ T₁ true k₁ →
    env.HasTypeStratified U Γ e₂ T₂ true k₂ →
    k₁ + k₂ ≤ s →
    (4-tuple)) ∧
  -- forallE_inv at sum ≤ s
  (∀ {Γ A B A' B' T₁ T₂ k₁ k₂}, OnCtx Γ (env.IsType U) →
    env.HasTypeStratified U Γ (.forallE A B) T₁ true k₁ →
    env.HasTypeStratified U Γ (.forallE A' B') T₂ true k₂ →
    k₁ + k₂ ≤ s →
    env.IsDefEqU U Γ (.forallE A B) (.forallE A' B') →
    component equalities)
```

### The Layer 2 induction step at s

Given: `∀ s' < s, PreservationBundle s'` (IH)
Available: `∀ n, sort_inv_n ∧ uniq_n` (from Layer 1, already proved)

Proof order (NO circularity within step s):

1. **sort_forallE_inv_s**: Convert to IsDefEqStrong, apply whnf_preserved from IH at sum < s.
   The sum is k₁ + k₂ where k₁ (sort depth) and k₂ (forallE depth) come from the
   external HTS. The whnf_preserved call uses these same HTS at sum k₁ + k₂ ≤ s.
   When k₁ + k₂ < s: use IH directly.
   When k₁ + k₂ = s: use whnf_preserved from IH at sum < s — but the call IS at sum s!
   **Fix**: sort_forallE_inv_s only claims for sum ≤ s, but its internal whnf_preserved
   call can use the HTS depths from the IsDefEqStrong conversion, which might be at
   a LOWER sum than the external HTS (because `HasType.stratify` might produce
   different depths). If not, see the detailed proof in Phase D.

   sort_forallE_inv_s converts to IsDefEqStrong and calls whnf_preserved.
   The whnf_preserved call uses the SAME external HTS at sum k₁+k₂ ≤ s.
   When k₁+k₂ < s: use whnf_preserved from IH. When k₁+k₂ = s: use
   whnf_preserved_s (step 2, proved after step 1). This ordering works because
   sort_forallE_inv_s is a CONSUMER of whnf_preserved_s, not vice versa — the
   ordering within step s is: (1) sort_forallE_inv_s using IH, (2) whnf_preserved_s
   using sort_forallE_inv_s, (3) forallE_inv_s using whnf_preserved_s.

   **Correction**: The trans case of sort_forallE_inv DOES need whnf_preserved
   (for SortLike/ForallELike preservation of e_mid). It cannot be done with
   structural induction alone. See "Known gaps" section.

2. **whnf_preserved_s**: By structural induction on IsDefEqStrong:
   - eta: uses sort_forallE_inv_s (step 1) ✓
   - proofIrrel: uses sort_inv + uniq (from Layer 1) ✓
   - appDF: uses whnf_preserved from IH at sum < s (chain sum decreases) ✓
   - All other cases: structural IH ✓

3. **forallE_inv_s**: By structural induction on IsDefEqStrong:
   - trans: uses ForallELike preservation from whnf_preserved_s (step 2) ✓
   - All other cases: structural IH or head-form analysis ✓

### New signature for whnf_preserved

```lean
private theorem whnf_preserved_s
    (pb_lt : ∀ s' < s, PreservationBundle env U s')
    (sort_forallE_inv_s : ∀ ..., k₁+k₂ ≤ s → ...)
    (henv : VEnv.WF ip.env)
    (hord : Ordered ip.env) (hΓ : OnCtx Γ (ip.env.IsType U))
    (H : ip.env.IsDefEqStrong U Γ e₁ e₂ V)
    (ht₁ : HTS e₁ T₁ true k₁) (ht₂ : HTS e₂ T₂ true k₂)
    (hsum : k₁ + k₂ ≤ s)
    : (4-tuple)
```

## Phase D: Close all SortLikePreservation sorry's

**Files**: SortLikePreservation.lean
**Sorry's closed**: 11 (WHSteps_hasType + 6 eta/proofIrrel + 4 appDF)
**Dependencies**: Phases A, B, C
**Detail**: [DETAIL_eta_proofirrel.md](DETAIL_eta_proofirrel.md), [DETAIL_appDF_v2.md](DETAIL_appDF_v2.md)

### proofIrrel (4 sorry's at line 181)

Vacuously true. Prove `SortLikeWith h l → False` given `h : p` and `p : .sort 0`:
1. By SR: `.sort l : p`
2. By sort canonical + uniq: `p ≡ .sort (succ l)`
3. By `p : .sort 0` + sort canonical + uniq: `.sort 0 ≡ .sort (succ (succ l))`
4. By sort_inv: `0 ≈ succ (succ l)` — impossible

Uses uniq and sort_inv from Layer 1 (no whnf_preserved needed). ✓

### eta backward (2 sorry's at lines 151, 153)

Vacuously true. Prove `SortLikeWith e l → False` given `e : .forallE A B`:
1. By SR: `.sort l : .forallE A B`
2. By sort canonical + uniq: `.forallE A B ≡ .sort (succ l)`
3. By sort_forallE_inv_s: False

Key depth fact: `.forallE A B` is a PREMISE of the lam constructor at depth k₁ - 1.
From the lam HTS rule: all premises at depth n, lam at n+1. So if ht₁ has the lam
at depth k₁, then `.forallE A B` has HTS at depth k₁ - 1. The sort_forallE_inv call
uses sum 0 + (k₁ - 1) = k₁ - 1 ≤ k₁ + k₂ = s. ✓

ForallELike backward is also vacuous by the same argument (`.forallE A' B' : .forallE A B`
→ type conflict via uniq + sort_forallE_inv).

### appDF (4 sorry's at lines 172-173)

**Forward**: `SortLikeWith (.app f a) l → SortLikeWith (.app f' a') l'`

1. From WHStep chain: `body.inst a →_WH* .sort l` (after beta or extra reduction)
2. `body.inst a` at HTS depth ≤ k₁ - 1 (app inversion: sub-terms at depth k₁ - 1)
3. Construct IsDefEqStrong chain: `body.inst a ≡ .app f' a'`
4. Apply `whnf_preserved` from IH at sum (k₁-1) + k₂ = s - 1 < s ✓

**Backward**: symmetric, chain sum k₁ + (k₂-1) = s - 1 < s ✓

## Phase E: Close forallE_inv

**Files**: Injectivity.lean
**Sorry's closed**: 1 (line 490)
**Dependencies**: Phase D
**Detail**: [DETAIL_forallE_inv_trans.md](DETAIL_forallE_inv_trans.md)

Use Layer 2's `forallE_inv_s` to fill Layer 1's `forallE_inv_n`:

```lean
have forallE_inv_n := fun hΓ hdeq hk₁ hk₂ ht₁ ht₂ =>
  (preservation_bundle (k₁ + k₂)).2.2 hΓ ht₁ ht₂ (le_refl _) hdeq
```

Where `preservation_bundle` is proved by WF induction at ALL sums.

## Known gaps and missing lemmas

### Gap 1: No HasTypeStratified substitution lemma

The appDF depth argument requires `body.inst a` at HTS depth ≤ k₁-1. This needs a
stratified substitution lemma:
```lean
theorem HasTypeStratified.instN :
    HTS body B true n → HTS a A true n → HTS (body.inst a) (B.inst a) true n
```

Only the non-stratified version exists (`HasType.instN` in Lemmas.lean line 680).
The stratified version must be proved, likely by induction on the HTS derivation.
This is NON-TRIVIAL due to the `defeq` constructor in HTS which can wrap terms at
any depth. **Must be proved before Phase D (appDF case) can proceed.**

### Gap 2: WHStep → IsDefEqStrong lifting

The appDF chain construction requires converting each `WHStep` into an `IsDefEqStrong`
derivation. This requires typing witnesses for each step:
- `WHStep.beta` → `IsDefEqStrong.beta` (needs typing of lam, arg)
- `WHStep.extra` → `IsDefEqStrong.extra` (needs env.defeqs, level WF)
- `WHStep.appFn` → `IsDefEqStrong.appDF` with refl on arg (needs f, f' typing)
- `WHStep.major` → `IsDefEqStrong.appDF` with refl on fn (needs a, a' typing)

This needs SR (to thread typing through the chain) and is not "mechanical."

### Gap 3: sort_forallE_inv trans case

The plan claims sort_forallE_inv "only needs structural induction." This is wrong.
The trans case `sort u ≡ e_mid ≡ forallE A B` has arbitrary `e_mid`, so the
sub-derivations can involve any IsDefEqStrong constructor. SortLike/ForallELike
preservation (i.e., whnf_preserved) IS needed for the trans case.

The resolution still works: sort_forallE_inv_s uses whnf_preserved from IH at sum < s.
But the claim that structural induction suffices is incorrect.

### Gap 4: HasType.stratify naming

The plan references `HasType.stratify` but the actual lemma is `HasTypeStrong.stratify`
(Strong.lean line 882). To invoke it, you must first convert `HasType` to `HasTypeStrong`
via `.strong` (which requires `Ordered env` and `OnCtx`). All call sites in the plan
that assume direct stratification need to account for this.

## What Went Wrong With the Previous Plan

1. **whnf_preserved was not stratified.** Eta/proofIrrel/appDF need depth-indexed info.
2. **SR cross-layer mismatch.** InjectivityParams needs a `whsteps_hasType` field.
3. **appDF depth bound was single-sided.** Both sides must be accounted for. The sum
   k₁+k₂ decreases for appDF chains because one side drops by 1.
4. **Mutual dependency between whnf_preserved and sort_forallE_inv.** Resolved by the
   HTS depth structure: the lam rule has `.forallE A B` as a premise at depth k₁-1,
   strictly less than the lam's depth k₁.
