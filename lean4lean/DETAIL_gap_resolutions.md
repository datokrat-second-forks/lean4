# Detail: Resolving the Four Known Gaps

## Gap 1: HasTypeStratified Substitution Lemma

### Resolution: Prove `HasTypeStratified.instN` with depth preservation

```lean
theorem HasTypeStratified.instN
    (henv : Ordered env) (W : Ctx.InstN Γ₀ e₀ A₀ k Γ₁ Γ)
    (H : env.HasTypeStratified U Γ₁ e A b n)
    (h₀ : env.HasTypeStratified U Γ₀ e₀ A₀ true n)
    (hΓ : ...) :
    env.HasTypeStratified U Γ (e.inst e₀ k) (A.inst e₀ k) b n
```

**Depth is preserved at n.** The proof follows `IsDefEqStrong.instN`
(Strong.lean lines 349-417) case by case:

- **sort'**: Sort doesn't contain variables. `sort'.inst = sort'`. Depth n unchanged. ✓
- **bvar** (i ≠ k): Variable index shifts but stays a bvar. Depth n+1 with type at n.
  IH gives the type proof at depth n. Reconstruct bvar at n+1. ✓
- **bvar** (i = k): Substitute `e₀` for the variable. Original: `.bvar k :! A !! n+1`
  with `A : sort u !! n`. After substitution: need `e₀ : A.inst e₀ k !! n+1`.
  - From hypothesis: `HTS e₀ A₀ true n`
  - From `Ctx.InstN`: `A₀` relates to `A.inst e₀ k` (possibly with defeq conversion)
  - By `mono` (line 869): `HTS e₀ A₀ true n → HTS e₀ A₀ true (n)` (already there)
  - If `A₀ = A.inst e₀ k`: use `mono` to get depth n+1 via base wrapping. ✓
  - If `A₀ ≡ A.inst e₀ k`: use `defeq` constructor (premises at n, result at n+1). ✓
  - Result: `HTS e₀ (A.inst e₀ k) b (n+1)`. Matches original bvar depth. ✓
- **app**: All premises at depth n, result at n+1. IH gives all premises at depth n
  after substitution. Reconstruct app at n+1. ✓
- **lam**: Same pattern as app. All premises at n, result at n+1. ✓
- **forallE**: Same pattern. ✓
- **const**: Constants are closed (`henv.closedC`), so `const.inst = const`. ✓
- **base**: Preserves flag, IH at same depth. ✓
- **defeq**: Premises at n, result at n+1. IH gives premises at n. Reconstruct at n+1. ✓

**Key invariant**: The hypothesis `h₀ : HTS e₀ A₀ true n` is at the SAME depth n as
the body's HTS. The `mono` lemma (line 869) lets us raise e₀'s depth to match any
sub-level within the body where a bvar substitution occurs (since sub-levels are ≤ n).

### Prerequisites

- `IsDefEqStrong.instN` exists (Strong.lean line 349) — use as proof template
- `HasTypeStratified.mono` exists (Strong.lean line 869) — for depth alignment
- `Ctx.InstN` framework exists (used throughout Lemmas.lean)
- Need: `CtxStratified` or equivalent for context well-formedness at depth n

### Estimated difficulty: MEDIUM

The proof is ~70 lines following the IsDefEqStrong.instN template. The main
complexity is the bvar case with its nested induction on `Ctx.InstN`.

---

## Gap 2: WHStep → IsDefEqStrong Chain

### Resolution: Use existing infrastructure with Phase B bridge

The chain: **WHStep → WHRed → ParRed → IsDefEq → IsDefEqStrong**

Each link already exists except WHStep → WHRed (Phase B):

| Link | Location | Status |
|------|----------|--------|
| WHStep → WHRed | Phase B (new) | Needs `pat_wf` from Params |
| WHRed → ParRed | HeadReduction.lean:171 (`WHRed.parRed`) | Proved |
| ParRed → IsDefEq | ChurchRosser.lean:544 (`ParRed.defeq`) | Proved (needs HasType) |
| IsDefEq → IsDefEqStrong | Strong.lean:686 (`IsDefEq.strong`) | Proved (needs Ordered, OnCtx) |

### For the appDF chain construction

Given: `WHSteps (.app f a) (.sort l)` (from SortLikeWith)
Needed: `IsDefEqStrong (.sort l) (.app f' a') V`

Construction:
1. `WHSteps (.app f a) (.sort l)` → `WHRedS Γ (.app f a) (.sort l)` (via Phase B, each WHStep → WHRed)
2. `WHRedS.defeq` (HeadReduction.lean:309): gives `IsDefEq (.app f a) (.sort l) : T`
3. By symmetry: `IsDefEq (.sort l) (.app f a) : T`
4. The original appDF derivation: `IsDefEq (.app f a) (.app f' a') : T`
5. By transitivity: `IsDefEq (.sort l) (.app f' a') : T`
6. `IsDefEq.strong` (Strong.lean:686): gives `IsDefEqStrong (.sort l) (.app f' a') V`

**Requirements for step 1**: `WHStep → WHRed` needs:
- `Ordered env` and `OnCtx Γ` (available as parameters to whnf_preserved)
- `pat_wf` from Params (available in HeadReduction.lean scope, used to fill the
  `r.2.OK` condition in `WHRed.extra`)
- `HasType` of the expression at each step (threaded via SR: `WHRed.hasType`)

**Requirements for step 6**: `Ordered env` and `OnCtx Γ` (available as parameters)

### Key detail: threading HasType through the chain

Each WHRed step needs `HasType` of the source expression:
- Initial: `HasType (.app f a) T` (from the appDF constructor's typing)
- After each step: `WHRed.hasType` (HeadReduction.lean:183) preserves typing
- So typing is automatically threaded through the WHRedS chain ✓

### Estimated difficulty: LOW-MEDIUM

Phase B (WHStep → WHRed) is the main work. The chain composition is mechanical
once Phase B is done.

---

## Gap 3: Correct Ordering of PreservationBundle Components

### Resolution: Prove whnf_preserved FIRST, then sort_forallE_inv

**CORRECTED ordering within the bundle step at depth-sum s:**

```
Step 1: whnf_preserved_s
  - eta backward: uses sort_forallE_inv from IH at sum < s
    (forallE at depth k₁-1, sort at depth 0, sum = k₁-1 < s since k₁ ≤ s)
  - proofIrrel: uses sort_inv + uniq from Layer 1 (no sort_forallE_inv needed)
  - appDF: uses whnf_preserved from IH at sum < s
    (chain endpoints: sort/forallE at depth 0 + app at depth k₂, sum = k₂ < s since k₁ ≥ 1)
  - All other cases: structural IH on IsDefEqStrong

Step 2: sort_forallE_inv_s
  - Uses whnf_preserved_s (just proved in step 1) for the trans case
  - Specifically: convert to IsDefEqStrong, apply whnf_preserved_s
  - The HTS of both endpoints (.sort u and .forallE A B) are given at sum ≤ s

Step 3: forallE_inv_s
  - Uses whnf_preserved_s (ForallELike preservation for trans case)
  - Uses sort_forallE_inv_s (to exclude sort ≡ forallE in the trans case)
```

### Why whnf_preserved_s can use sort_forallE_inv from IH

The eta backward case at depth-sum s constructs:
- `IsDefEqU (.forallE A B) (.sort (succ l))` from uniq
- Calls sort_forallE_inv at sum = (depth of .forallE A B) + (depth of .sort (succ l))

From HTS lam rule: `.lam` at depth k₁ has `.forallE A B` premise at depth k₁-1.
`.sort (succ l)` at depth 0 (via `sort'` which is depth-polymorphic, taking n=0).

Sum = (k₁-1) + 0 = k₁-1.
Since s = k₁ + k₂ and k₁ ≥ 1 (lam at depth ≥ 1) and k₂ ≥ 0:
k₁-1 ≤ k₁ ≤ k₁ + k₂ - 1 = s-1 < s. ✓

(Even if k₂ = 0: k₁-1 = s-1 < s. ✓)

### Estimated difficulty: LOW

This is purely an ordering question. The depth accounting is verified above.

---

## Gap 4: constDF Case of forallE_inv

### Resolution: Reuse existing const_transfer infrastructure

The constDF constructor of IsDefEqStrong:
```lean
| constDF : env.HasDef c ci → ... → ls₁ ≈ ls₂ →
    .const c ls₁ ≡ .const c ls₂ : ci.type.instL ls₁
```

For forallE_inv constDF: `.const c ls₁ ≡ .const c ls₂` where both are forallE-like.

**Existing infrastructure** (WHNFStep.lean):
- `ForallELikeWith.instL_inv` (line 376): extracts unlifted components C, D from
  `(e.instL ls) →_WH* .forallE A B`, giving `e →_WH* .forallE C D` with
  `A = C.instL ls, B = D.instL ls`
- `ForallELikeWith.unique` (line 129): WHNF uniqueness via determinism

**Proof sketch for constDF case of forallE_inv:**

1. `ForallELikeWith (.const c ls₁) A B`:
   By `extra_pat`: `.const c ls₁` matches a definition pattern.
   WHStep chain: `.const c ls₁ →_WH (df.rhs.instL ls₁) →_WH* .forallE A B`
   By `ForallELikeWith.instL_inv` on `df.rhs.instL ls₁`:
   `df.rhs →_WH* .forallE C D` with `A = C.instL ls₁, B = D.instL ls₁`

2. Similarly for `.const c ls₂`:
   `df.rhs →_WH* .forallE C D` (SAME C, D by determinism of WHStep)
   `A' = C.instL ls₂, B' = D.instL ls₂`

3. **Component defeq**: Need `A ≡ A'` and `B ≡ B'`.
   `A = C.instL ls₁` and `A' = C.instL ls₂` with `ls₁ ≈ ls₂`.
   By reflexivity of C and `IsDefEq.instL_r` (Strong.lean line 700):
   `C.instL ls₁ ≡ C.instL ls₂ : (sort u).instL ls₁` (if C : sort u)
   So `A ≡ A'`. ✓ Similarly `B ≡ B'`. ✓

4. **Well-typedness of C**: Needed for `IsDefEq.instL_r`.
   From `env.WF` + `env.defeqs df`: `df.rhs` is well-typed in the empty context.
   By SR: `.forallE C D` is well-typed. So C and D are well-typed.
   This requires `whsteps_hasType` (Phase B) for the chain `df.rhs →_WH* .forallE C D`.

### Existing pieces used

| Piece | Location | Status |
|-------|----------|--------|
| `ForallELikeWith.instL_inv` | WHNFStep.lean:376 | Proved ✓ |
| `WHSteps.instL` | WHNFStep.lean:162 | Proved ✓ |
| `ForallELikeWith.unique` | WHNFStep.lean:129 | Proved ✓ |
| `IsDefEq.instL_r` | Strong.lean:700 | Proved ✓ |
| `extra_const_relevel` | PatternParams.lean:113 | Axiom (HeadReduction sorry) |
| `WHStep.deterministic` | WHNFStep.lean:276 | Proved (needs stuck lemmas) |
| `whsteps_hasType` | Phase B | Needs Phase B |

### Estimated difficulty: MEDIUM

The component extraction (steps 1-2) reuses `forallElike_const_transfer` pattern.
The component defeq (step 3) is new but uses existing `instL_r`.
The well-typedness (step 4) follows from SR + env.WF.

---

## Summary

| Gap | Resolution | Difficulty | Dependencies |
|-----|-----------|------------|--------------|
| 1: HTS substitution | Prove `HTS.instN` with depth preservation | MEDIUM | None (self-contained) |
| 2: WHStep→IsDefEqStrong | Use existing chain via Phase B | LOW-MEDIUM | Phase B |
| 3: Bundle ordering | Prove whnf_preserved first | LOW | Depth accounting |
| 4: constDF forallE_inv | Reuse const_transfer + instL_r | MEDIUM | Phase A (stuck), Phase B (SR) |
