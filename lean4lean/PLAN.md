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

1. **whnf_preserved_s**: By structural induction on IsDefEqStrong:
   - eta: uses sort_forallE_inv from IH at sum < s
     (`.forallE A B` at depth k₁-1, `.sort (succ l)` at depth 0, sum = k₁-1 < s)
   - proofIrrel: uses sort_inv + uniq from Layer 1 (no sort_forallE_inv needed) ✓
   - appDF: constructs chain `.sort l ≡ .app f' a'` (or `.forallE A B ≡ .app f' a'`),
     uses whnf_preserved from IH at sum < s (see Phase D appDF detail) ✓
   - All other cases: structural IH ✓

2. **sort_forallE_inv_s**: Convert to IsDefEqStrong, apply whnf_preserved_s (step 1).
   The trans case needs SortLike/ForallELike preservation of e_mid, provided by
   whnf_preserved_s. ✓

3. **forallE_inv_s**: By structural induction on IsDefEqStrong:
   - trans: uses ForallELike preservation from whnf_preserved_s (step 1) ✓
   - constDF: uses `ForallELikeWith.instL_inv` + `IsDefEq.instL_r` (see Gap 4) ✓
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

**SortLike forward**: `SortLikeWith (.app f a) l → SortLikeWith (.app f' a') l'`

1. `SortLikeWith (.app f a) l` means `.app f a →_WH* .sort l`
2. Convert WHSteps to IsDefEq: `.app f a ≡ .sort l : T` (via WHRed.defeq chain, Gap 2)
3. Compose: `.sort l ≡ .app f a ≡ .app f' a' : T` (symm + appDF)
4. Convert to IsDefEqStrong via `.strong`
5. Apply whnf_preserved from IH: SortLikeWith (.sort l) l (trivially) → SortLikeWith (.app f' a') l'
6. **Depth-sum**: `.sort l` at HTS depth 0 (sort' rule), `.app f' a'` at HTS depth k₂.
   Sum = 0 + k₂ = k₂ < k₁ + k₂ = s (since k₁ ≥ 1 for app). ✓

**SortLike backward**: symmetric, sum = k₁ + 0 = k₁ < s (since k₂ ≥ 1). ✓

**ForallELike forward**: `ForallELikeWith (.app f a) A B → ForallELikeWith (.app f' a') A' B'`

Two sub-cases based on how the WHSteps chain exits `.app`:

*Beta sub-case* (chain goes through `f →_WH* .lam T body`, then beta):
1. `body.inst a →_WH* .forallE A B` (rest of chain after beta)
2. `body.inst a` at HTS depth k₁-1 (via stratified SR on f at depth k₁-1 → lam at k₁-1
   → lam inversion gives body at k₁-2 → mono to k₁-1 → HTS.instN with a at k₁-1)
3. Chain `body.inst a ≡ .app f' a'` at sum (k₁-1)+k₂ = s-1 < s. ✓

*Extra sub-case* (pattern fires directly on `.app f a`):
The pattern RHS `r.apply m1 m2` has HTS at env-dependent depth m, which is NOT
bounded by k₁. The depth-sum m+k₂ might equal or exceed s.
**This sub-case requires either**: (a) bounding m via env.WF + pattern typing depth,
or (b) a separate argument (e.g., showing both apps fire the same pattern via constDF
transfer logic, then using `ForallELikeWith.instL_inv` + `WHSteps.instL` directly).
Approach (b) mirrors `forallElike_const_transfer` (SortLikePreservation:76-89).
**Risk**: MEDIUM — the infrastructure exists but integration needs verification.

**ForallELike backward**: symmetric.

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

## Known gaps — all resolved

See [DETAIL_gap_resolutions.md](DETAIL_gap_resolutions.md) for full resolution details.

### Gap 1: HasTypeStratified substitution lemma — RESOLVED

Prove `HasTypeStratified.instN` with **depth preservation** (depth n in → depth n out).
The proof follows `IsDefEqStrong.instN` (Strong.lean:349-417) case by case. The bvar
case uses `mono` (Strong.lean:869) to align `e₀` to the sub-level depth, plus `defeq`
wrapping for type conversion. Each HTS constructor has premises at depth n and result
at n+1; substitution preserves this structure. ~70 lines, MEDIUM difficulty.

### Gap 2: WHStep → IsDefEqStrong chain — RESOLVED

Use existing chain: WHStep → WHRed (Phase B) → ParRed (HeadReduction:171) →
IsDefEq (ChurchRosser:544) → IsDefEqStrong (Strong:686). Each link is proved except
WHStep → WHRed (Phase B). The `ParRed.defeq` step needs `HasType` of the source,
threaded via `WHRed.hasType` (HeadReduction:183). LOW-MEDIUM difficulty.

### Gap 3: Bundle ordering — RESOLVED

The CORRECT ordering is whnf_preserved_s FIRST, then sort_forallE_inv_s. The eta
backward case uses sort_forallE_inv from IH at sum k₁-1 < s (since `.forallE A B`
is a lam premise at depth k₁-1, `.sort` at depth 0, and k₁-1 < k₁ ≤ s).
sort_forallE_inv_s is then proved using the just-proved whnf_preserved_s.

### Gap 4: constDF case of forallE_inv — RESOLVED

Use `ForallELikeWith.instL_inv` (WHNFStep:376) to extract unlifted components C, D
from WHNF of `df.rhs`. Both `.const c ls₁` and `.const c ls₂` reduce to the SAME
C, D (by WHStep determinism). Then `IsDefEq.instL_r` (Strong:700) on reflexivity
of C with `ls₁ ≈ ls₂` gives `C.instL ls₁ ≡ C.instL ls₂`, i.e., `A ≡ A'`.
Well-typedness of C follows from `env.WF` + SR. MEDIUM difficulty.

### Note: HasType.stratify naming

Throughout the plan, "HasType.stratify" means `HasTypeStrong.stratify` (Strong:882),
which requires converting via `.strong` (needing `Ordered env` + `OnCtx`). Both are
available as parameters to `whnf_preserved_s`.

## Session 3 Progress (2026-03-20)

### Completed
- **Phase A: WHNFStep stuckness lemmas** — All 3 sorry's closed.
  - Added `pat_uniq`, `pat_app_l_uniq`, `pat_app_uniq` to `InjectivityParams`.
  - Proved `subpattern_no_step` (core stuckness lemma) mirroring `WHNF.subpattern`.
  - Derived `extra_app_fn_stuck`, `extra_app_arg_stuck`, `WHIsMajorPremise.no_step`.
  - `WHStep.deterministic` now compiles without sorry.

### Analysis: Architectural blockers for remaining sorry's
- **proofIrrel** (4 sorry's): Requires `WHSteps_hasType` (subject reduction) AND
  stratified `uniq_{<n}`. The `uniq` call creates circularity without two-layer restructuring.
- **eta backward** (2 sorry's): Requires `sort_forallE_inv_{<n}` from stratified bundle IH.
  Circular with `whnf_preserved` without two-layer restructuring.
- **appDF** (4 sorry's): Requires depth-decreasing chain construction with stratified IH.
  The chain uses `whnf_preserved` at lower depth-sum, which is only available via Layer 2 WF IH.
- **forallE_inv_n** (1 sorry): Requires complete `whnf_preserved` for the trans case.

### Next steps
1. Implement the two-layer architecture (DETAIL_two_layers.md):
   - Layer 1: StratifiedBundle (uniq, sort_inv, forallE_inv) on max-depth
   - Layer 2: PreservationBundle (sort_forallE_inv, whnf_preserved) on depth-sum
2. Add `whsteps_hasType` field to InjectivityParams (requires moving WHStep defs)
   or parameterize whnf_preserved with it
3. Close appDF via depth-decreasing chain at lower depth-sum

## What Went Wrong With the Previous Plan

1. **whnf_preserved was not stratified.** Eta/proofIrrel/appDF need depth-indexed info.
2. **SR cross-layer mismatch.** InjectivityParams needs a `whsteps_hasType` field.
3. **appDF depth bound was single-sided.** Both sides must be accounted for. The sum
   k₁+k₂ decreases for appDF chains because one side drops by 1.
4. **Mutual dependency between whnf_preserved and sort_forallE_inv.** Resolved by the
   HTS depth structure: the lam rule has `.forallE A B` as a premise at depth k₁-1,
   strictly less than the lam's depth k₁.
