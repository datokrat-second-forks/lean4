# Plan for Proving the Injectivity Lemmas in Lean4Lean

## Background

The unique typing theorem (`IsDefEq.uniq`) in lean4lean is proven *modulo* three
injectivity lemmas in `Lean4Lean/Theory/Typing/Injectivity.lean`, all marked `sorry`:

1. **`IsDefEqU.sort_inv`**: If `sort u ≡ sort v` then `u ≈ v`
2. **`IsDefEqU.forallE_inv_stratified`**: If `forallE A B ≡ forallE A' B'` then
   domains and codomains are pairwise defeq (with stratification bounds)
3. **`IsDefEqU.sort_forallE_inv`**: `sort u` cannot be defeq to `forallE A B`

## Architecture

### Dependency Structure

The dependency chain that creates the circularity:

```
HeadReduction.lean (WHRed, standardization)
  └── ChurchRosser.lean (Params class, parallel reduction, confluence)
        └── UniqueTyping.lean (IsDefEq.uniq — proven modulo our sorry's)
              └── Injectivity.lean (sort_inv, forallE_inv — WE PROVE THESE)
```

Our approach breaks this cycle:
- `InjectivityParams` (in PatternParams.lean) is a minimal subset of `Params`
  (`Pat`, `pat_simple`, `extra_pat`) — no `pat_wf` or typing dependencies
- `WHStep` (in WHNFStep.lean) is a simpler version of `WHRed` that only depends on
  `InjectivityParams`, not on `Params` or UniqueTyping

### Files

- **`PatternParams.lean`**: `InjectivityParams` class + pattern exclusion lemmas ✓ DONE
- **`WHNFStep.lean`**: `WHStep`, `ForallELikeWith`, `SortLikeWith`, commutation (**3 sorries**)
- **`Injectivity.lean`**: Main stratified bundle (**~7 sorries**)

## The Core Difficulty (from transcript analysis)

### Why sort_forallE_inv and forallE_inv are hard

Both `sort_forallE_inv` and `forallE_inv` (the "cross" version extracting components)
are blocked by the **trans case** of `IsDefEqStrong` structural induction.

For `sort_forallE_inv`: Given `sort u ≡ e_mid ≡ forallE A B`, the middle expression
`e_mid` is arbitrary. Beta reduction can change head forms:
`app (lam A (.forallE (.bvar 0) (.bvar 1))) Nat ≡ forallE Nat (.bvar 0)`.

For `forallE_inv`: Given `forallE A B ≡ e_mid ≡ forallE A' B'`, we need `e_mid` to
also be forallE-like to decompose components, but `e_mid` can be anything.

The standard approach uses Church-Rosser (confluence), but CR depends on UniqueTyping
which depends on Injectivity — circular.

### The level argument doesn't work alone

For `sort_forallE_inv`: `.sort u : sort (succ l)` and `.forallE A B : sort (imax u' v')`.
By `uniq + sort_inv`: `succ l ≈ imax u' v'`. But this IS satisfiable (e.g. l=0, u'=1,
v'=1 gives succ 0 = 1 = imax 1 1). So a level contradiction alone is insufficient.

## The Solution: SortLike/ForallELike Preservation

### Key insight

Define `SortLikeWith e l` and `ForallELikeWith e A B` as "e WHNF-reduces to sort l
(resp. forallE A B)" using `WHStep` (beta + extra + appFn). These are already defined
in `WHNFStep.lean` as `WHSteps e (.sort l)` and `WHSteps e (.forallE A B)`.

### Three properties that make everything work

**Property 1 (Disjointness):** `¬(SortLikeWith e l ∧ ForallELikeWith e A B)`

Follows from WHStep determinism: sort and forallE are both WHNF (no step applies),
so deterministic reduction can't reach both. Already stated as `forallE_sort_disjoint`
in WHNFStep.lean (sorry'd, needs WHStep determinism).

**Property 2 (SortLike preservation through IsDefEqStrong):**
`IsDefEqStrong e₁ e₂ V → (SortLikeWith e₁ l → ∃ l', SortLikeWith e₂ l')`

By structural induction on IsDefEqStrong:
- **trans:** Compose IH₁ and IH₂. This is the crucial case — works because we only
  need existence, and `∃` composes transitively.
- **beta:** `SortLikeWith (app (lam A body) arg) l ↔ SortLikeWith (body.inst arg) l`
  — from the beta constructor of WHStep.
- **eta:** LHS = lam → SortLikeWith(lam) = false (lam is WHNF for WHStep). Need
  SortLikeWith(f) = false. If SortLikeWith(f), then f →* sort l, so sort l : forallE A B
  (by type preservation). By uniq_n: forallE A B ≡ sort (succ l). By
  sort_forallE_inv_{<n}: contradiction. **Uses IH from stratified bundle.**
- **proofIrrel:** If SortLikeWith(h), then sort l : p where p : sort 0. By uniq:
  p ≡ sort (succ l), then sort 0 ≡ sort (succ (succ l)), sort_inv gives
  0 ≈ succ (succ l) — impossible.
- **extra:** df.lhs.instL ls is const/app-headed (from pat_simple). If result
  (df.rhs.instL ls) has SortLike, propagate. If source has SortLike, it must reduce
  through the extra step. Handled by WHStep.
- Others: vacuous (wrong head) or handled by IH.

**Property 3 (ForallELike preservation):** Same argument, symmetric.

### How these feed into the stratified bundle

At depth n, prove in this order:

1. **sort_inv_n** — using uniq_{<n} and sort_inv_{<n} from IH
2. **uniq_n** — copy of IsDefEq.uniq using sort_inv_n + forallE_inv_{<n} from IH
3. **SortLike/ForallELike preservation at depth n** — using uniq_n + sort_forallE_inv_{<n}
4. **sort_forallE_inv_n** — from preservation (Property 2) + disjointness (Property 1):
   if sort u ≡ forallE A B, then SortLikeWith(sort u) (trivially), so SortLikeWith(forallE A B)
   by preservation, but ForallELikeWith(forallE A B) trivially — contradicts disjointness.
5. **forallE_inv_n** — using ForallELike preservation for trans case + instL_inv for constDF

The circularity is broken: step 3's eta case uses sort_forallE_inv_{<n} from bundle IH.
Step 5 uses ForallELike preservation (step 3) which uses uniq_n (step 2).

## Detailed Plans for Each Step

### Step 1: sort_inv_n

**Status:** Partially proven. b=false, base/base cases done. Three sorry cases remain.

Case analysis on `HTS (.sort u) A b n₁` and `HTS (.sort v) A b n₂`:
- b=false: ✓ Proven (both are sort', types match syntactically)
- b=true, base/base: ✓ Proven
- b=true, base/defeq: ~90 line construction using uniq_{<n} and sort_inv_{<n}. **SORRY**
- b=true, defeq/base: symmetric. **SORRY**
- b=true, defeq/defeq: needs `sortEquiv` helper. **SORRY**

#### The sortEquiv Helper

Bridges ≈-related types: given `HTS (.sort u) (.sort w) true m₁` and
`HTS (.sort v) (.sort w') true m₂` with `w ≈ w'`, derive `u ≈ v`.

Proof by WF induction on max(m₁, m₂):
- Base (max=0): Both are base(sort'). Types .sort(.succ l₁) and .sort(.succ l₂) with
  succ l₁ ≈ w ≈ w' ≈ succ l₂. By succ_congr: l₁ ≈ l₂, so u ≈ l₁ ≈ l₂ ≈ v.
- Step: Use sort_canonical + uniq_{<N} to get HTS at depth m₁-1 and m₂-1, then recurse.

### Step 2: uniq_n

**Status:** SORRY. Direct adaptation of `IsDefEq.uniq` from UniqueTyping.lean.

Replacements:
- `IsDefEqU.sort_inv henv hΓ ⟨_, h⟩` → `sort_inv_n` (just proven at step 1)
  or `sortEquiv` when types differ by ≈
- `IsDefEqU.forallE_inv_stratified henv hΓ ...` → `forallE_inv_{<n}` from bundle IH

### Step 3: SortLike/ForallELike preservation

**Status:** Not yet implemented. This is NEW relative to the current Injectivity.lean code.

This needs to be added to the stratified bundle or proven as helper lemmas using the
bundle IH. The preservation lemma is by structural induction on `IsDefEqStrong`:

Key cases:
- trans: compose (trivial)
- beta: from WHStep.beta constructor
- eta: needs sort_forallE_inv_{<n} — available from bundle IH
- proofIrrel: sort level contradiction using sort_inv_n
- extra: from WHStep constructor
- symm: from IH (reverse direction)
- forallEDF, sortDF, constDF, appDF, lamDF, defeqDF: structural

### Step 4: sort_forallE_inv_n

**Status:** SORRY (currently standalone, needs to move into the bundle).

Once SortLike preservation is proven:
- SortLikeWith (.sort u) u — trivially (.sort is WHNF)
- By preservation: SortLikeWith (.forallE A B) l for some l
- ForallELikeWith (.forallE A B) A B — trivially (.forallE is WHNF)
- Contradiction with disjointness (Property 1)

### Step 5: forallE_inv_n

**Status:** SORRY. This is the hardest step.

Given `IsDefEqU (.forallE A B) (.forallE A' B')`, structural induction on IsDefEqStrong:

- **forallEDF:** Direct — components given. ✓
- **symm:** Swap and apply IH. ✓
- **defeqDF:** Recurse (same expressions, different type). ✓
- **extra:** Vacuous — forallE_not_pat_lhs (proven in PatternParams). ✓
- **beta, eta, sortDF, constDF, appDF, lamDF, bvar:** Wrong head constructor. ✓
- **proofIrrel:** Contradiction via sort level argument (sort_inv_n). ✓
- **trans:** THE HARD CASE — uses ForallELike preservation.

#### The trans case of forallE_inv

Given: forallE A B ≡ e_mid ≡ forallE A' B'.
By ForallELike preservation (step 3): ForallELikeWith e_mid A'' B'' for some A'', B''.

Now we need to extract component equalities through the ForallELike chain. This requires
a **generalized statement** over ForallELikeWith expressions, not just syntactic forallE.

#### The constDF case of the generalized statement (highest risk)

For constDF: `const c ls ≡ const c ls' : ci.type.instL ls` with `ls ≈ ls'`.
Both sides delta-unfold to `ci.value.instL ls` and `ci.value.instL ls'`, then
WHNF-reduce to `forallE A B` and `forallE A' B'`.

The argument: since ls ≈ ls', by `ForallELikeWith.instL_inv`:
- `ci.value.instL ls →* forallE A B` lifts to `ci.value →* forallE C D` with
  `A = C.instL ls`, `B = D.instL ls`
- Similarly `A' = C'.instL ls'`, `B' = D'.instL ls'`
- By `ForallELikeWith.unique`: C = C', D = D' (WHNF uniqueness)
- Then `A ≡ A'` by `IsDefEq.instL_r` (exists in Strong.lean, line 700)

This requires the three sorry'd lemmas from WHNFStep.lean.

## WHNFStep.lean: Status and Remaining Work

### Completed ✓
- WHStep determinism (with pat_uniq)
- ForallELikeWith.unique
- forallE_sort_disjoint
- ForallELikeWith.instL_inv
- SortLikeWith.instL_inv

### Remaining: Add `major` constructor to WHStep

**CRITICAL**: WHStep is missing the `major` constructor from WHRed (HeadReduction.lean).
Without it, SortLike preservation through IsDefEqStrong FAILS (see
DETAIL_appDF_resolution.md for concrete counterexample).

```lean
| major : IsMajorPremise Pat f → WHStep env Pat a a' → WHStep env Pat (.app f a) (.app f a')
```

This reduces the argument when the function is a partial pattern match (e.g.,
`Nat.rec base step` waiting for its argument `n` to reduce to a constructor).

Adding `major` requires:
1. Define/import `IsMajorPremise` (exists in HeadReduction.lean, line 41)
2. Update WHStep.deterministic (new cases — all mutually exclusive, see detail)
3. Update WHStep.instL, instL_inv (mechanical new case)
4. Add IsMajorPremise properties to InjectivityParams or derive from existing axioms
5. Verify not_sort, not_forallE, not_lam still hold (they do — major only applies to .app)

### Also needed: WHStep_IsDefEq and Subject Reduction

Two new lemmas needed for the preservation proof:

1. **WHStep_IsDefEq**: Each WHStep corresponds to an IsDefEqStrong derivation
   (by induction on WHStep, 4 cases including major)
2. **Subject reduction**: WHStep preserves typing
   (by induction on WHStep, uses WHStep_IsDefEq for the major case's type conversion)

Dependency chain: WHStep_IsDefEq → Subject reduction (no circularity).
See DETAIL_appDF_resolution.md for full analysis.

## Extended StratifiedBundle

The bundle needs to grow from 3 to 5 parts:

```lean
private def StratifiedBundle (env : VEnv) (U n : Nat) : Prop :=
  -- Part 1: Type uniqueness at depth ≤ n
  (∀ ..., uniq statement) ∧
  -- Part 2: Sort inversion at depth ≤ n
  (∀ ..., sort_inv statement) ∧
  -- Part 3: forallE inversion at depth ≤ n
  (∀ ..., forallE_inv statement) ∧
  -- Part 4: sort_forallE_inv at depth ≤ n
  (∀ ..., sort_forallE_inv statement) ∧
  -- Part 5: SortLike/ForallELike preservation (or fold into sort_forallE_inv proof)
  True  -- preservation may be a local lemma rather than bundle member
```

Alternatively, steps 3-5 can be proven as local lemmas using uniq_n and sort_inv_n
(from the current bundle) plus sort_forallE_inv_{<n} and forallE_inv_{<n} (from IH).

## Implementation Order

### Phase 1: Complete WHNFStep infrastructure ✓ DONE
1. ✓ Add `pat_uniq` to `InjectivityParams`
2. ✓ Prove WHStep determinism
3. ✓ Prove `ForallELikeWith.unique` and `forallE_sort_disjoint`
4. ✓ Prove `ForallELikeWith.instL_inv`

### Phase 2: Complete sort_inv_n ✓ DONE
5. ✓ Prove `sortEquiv`
6. ✓ Fill in sort_inv_n base/defeq, defeq/base, defeq/defeq cases

### Phase 3: Prove uniq_n ✓ DONE
7. ✓ Adapt `IsDefEq.uniq` from UniqueTyping.lean with IH-provided lemmas

### Phase 4: Add `major` to WHStep
8. Define/import IsMajorPremise for WHStep's Pat
9. Add `major` constructor to WHStep
10. Update WHStep.deterministic (new cases for major)
11. Update WHStep.instL, instL_inv (mechanical new case)
12. Verify not_sort, not_forallE, not_lam (unaffected — major is for .app only)

### Phase 5: Prove WHStep_IsDefEq and subject reduction
13. Prove WHStep_IsDefEq (by induction on WHStep, 4 cases)
14. Prove subject reduction (by induction on WHStep, uses WHStep_IsDefEq for major)

### Phase 6: Prove sort_forallE_inv_n via preservation
15. Define depth-parameterized SortLike/ForallELike preservation through IsDefEqStrong
16. Prove all 13 cases (appDF uses depth-decreasing + bundle IH, proofIrrel uses SR + uniq)
17. Prove sort_forallE_inv_n using preservation + disjointness

### Phase 7: Prove forallE_inv_n
18. Define generalized statement over ForallELikeWith expressions
19. Prove by structural induction (trans uses ForallELike preservation, constDF uses instL_inv)

### Phase 5: Prove forallE_inv_n
10. Define generalized statement over ForallELikeWith expressions
11. Prove by structural induction, using preservation for trans, instL_inv for constDF

### Phase 6: Extract non-stratified versions
12. Already done (sort_inv, forallE_inv, sort_forallE_inv extracted from bundle)

## Risk Assessment

| Component | Risk | Notes |
|---|---|---|
| sort_inv_n remaining cases | ~~Medium~~ **DONE** | ✓ Fully proven |
| sortEquiv | ~~Medium~~ **DONE** | ✓ Fully proven |
| uniq_n | ~~Low~~ **DONE** | ✓ Fully proven |
| WHStep determinism | **DONE** | ✓ pat_uniq added, determinism proven |
| SortLike preservation (easy cases) | Medium | 10/13 cases straightforward |
| SortLike preservation (appDF) | Medium | Viable via depth-decreasing argument (see DETAIL_appDF_resolution.md) |
| SortLike preservation (proofIrrel) | Low-Medium | Subject reduction for WHStep + uniq at bounded depth |
| sort_forallE_inv_n | Low | Direct from preservation + disjointness |
| forallE_inv_n trans case | Medium-High | Generalized statement, ForallELike threading |
| forallE_inv_n constDF case | **HIGH** | Needs instL_inv + unique + instL_r composition |
| ForallELikeWith.instL_inv | ~~Medium~~ **DONE** | ✓ Fully proven |

## Current Implementation Status (updated 2026-03-19, session 2)

### Files
- **PatternParams.lean**: `InjectivityParams` class + pattern exclusion lemmas ✓ DONE
  - Added: `extra_det`, `extra_app_fn_not_extra`, `extra_const_uvars`,
    `extra_const_relevel`, `pat_lhs_const_or_app`
- **WHNFStep.lean**: `WHStep` (with `major`), `ForallELikeWith`, `SortLikeWith`,
  commutation, instL/instL_inv. **3 sorry's**: stuckness lemmas.
  - `WHStep.deterministic` ✓ PROVEN (uses 3 sorry'd stuckness helpers)
  - `WHStep.const_inv`, `WHStep.app_inv` ✓ PROVEN
  - `SortLikeWith.instL_inv` ✓ PROVEN
  - `extra_app_fn_stuck`, `extra_app_arg_stuck`, `WHIsMajorPremise.no_step` sorry'd
- **SortLikePreservation.lean**: `whnf_preserved` (10/13 cases proven), `sort_forallE_inv_ip` ✓
  - Added: `sortlike_const_transfer`, `forallElike_const_transfer` ✓
  - Added: `WHSteps_hasType` (SR stub, sorry'd)
  - constDF case ✓ PROVEN
  - Remaining sorry'd: eta backward (2), appDF (4), proofIrrel (4)
- **Injectivity.lean**: Main stratified bundle (**1 sorry**: `forallE_inv_n`)
  - `sort_forallE_inv` ✓ PROVEN (via SortLikePreservation)
- **HeadReduction.lean**: `Params → InjectivityParams` instance (**6 sorry's**: axiom bridges)

### What's proven
- `sort_inv_zero` ✓, `sort_canonical` ✓, `StratifiedBundle` definition ✓
- `sort_inv_n` ALL cases ✓
- `sortEquiv` ✓
- `uniq_n` ✓
- Non-stratified theorem derivations ✓
- `sort_forallE_inv` ✓ (connected to `sort_forallE_inv_ip` via SortLikePreservation)
- `PatternParams.lean` fully proven ✓
- `WHNFStep.lean`: WHStep + major, not_forallE, not_sort, not_lam, not_bvar ✓
- `WHNFStep.lean`: WHStep.instL, WHSteps.instL, WHStep.instL_inv, WHSteps.instL_inv ✓
- `WHNFStep.lean`: WHSteps.det_eq, ForallELikeWith.unique, forallE_sort_disjoint ✓
- `WHNFStep.lean`: ForallELikeWith.instL_inv, ForallELikeWith.instL' ✓
- `SortLikePreservation.lean`: whnf_preserved 9/13 cases (bvar, symm, trans, sortDF, lamDF,
  forallEDF, defeqDF, beta, extra) ✓
- `SortLikePreservation.lean`: sort_forallE_inv_ip ✓

### Remaining sorry's (21 sorry tokens, 5 distinct theorems + 6 axiom bridges)

**WHNFStep.lean (3 sorry's — stuckness lemmas):**
- `extra_app_arg_stuck`: iota argument is stuck
- `WHIsMajorPremise.no_step`: major premise is stuck
- `extra_app_fn_stuck`: iota function is stuck
  All 3 express the same property: pattern sub-components don't step.
  Derivable from pat_simple + structural analysis of iota patterns.

**SortLikePreservation.lean (11 sorry tokens, 4 distinct):**
- `WHSteps_hasType` (1 sorry): subject reduction for WHSteps
- eta backward (2 sorry's): circular, needs sort_forallE_inv_{<n}
- appDF (4 sorry's): needs SR + depth-decreasing
- proofIrrel (4 sorry's): needs SR + level contradiction

**Injectivity.lean (1 sorry):**
- `forallE_inv_n`: needs full whnf_preserved + InjectivityParams in bundle

**HeadReduction.lean (6 sorry's — axiom bridges):**
- `extra_pat`, `extra_instL_inv`, `extra_det`, `extra_app_fn_not_extra`,
  `extra_const_uvars`, `extra_const_relevel`
  All derivable from Params axioms (pat_uniq, pat_app_l, etc.)

### Dependency graph of remaining sorry's

```
Stuckness lemmas (independent, derivable from pat_simple):
  A. extra_app_fn_stuck, extra_app_arg_stuck, WHIsMajorPremise.no_step
     → enables: WHStep.deterministic is COMPLETE (uses these)

Subject reduction (main blocker):
  B. WHSteps_hasType (needs WHStep_IsDefEq proof)
     → enables: proofIrrel case (level contradiction)
     → enables: appDF case (depth-decreasing)

Circular (must go inside stratified bundle):
  C. eta backward (needs sort_forallE_inv_{<n} from bundle IH)

Blocked on B + C:
  D. forallE_inv_n (needs full whnf_preserved + InjectivityParams in bundle)

Axiom bridges (independent, derivable from Params):
  E. HeadReduction.lean instance fields (6 sorry's)
```

## Revised Implementation Plan (updated session 2)

### Phase A: WHStep determinism ✓ DONE
1. Add `pat_uniq` field to `InjectivityParams` in PatternParams.lean
2. Prove `WHStep.deterministic` theorem in WHNFStep.lean using pat_uniq
3. Add `pat_uniq` to HeadReduction.lean instance (from Params.pat_uniq — may need sorry)
4. Replace hdet sorry's in HeadReduction.lean with WHStep.deterministic

### Phase B: constDF case (closes 4 sorry's)
1. Add `SortLikeWith.instL_inv` to WHNFStep.lean (analogous to ForallELikeWith.instL_inv)
2. Prove constDF in whnf_preserved:
   - Given SortLikeWith (.const c ls) l, first WHStep must be extra
   - Factor: df.rhs.instL ls_p →* sort l, by instL_inv: df.rhs →* sort l₀
   - For ls': same extra step gives df.rhs.instL ls_p', then instL: →* sort (l₀.instL ls_p')
   - Need: pattern re-instantiation lemma (df.lhs.instL ls_p = const c ls → ...)

### Phase C: Subject reduction for WHStep (enables proofIrrel + appDF)
1. Prove WHStep_IsDefEq: each WHStep step corresponds to an IsDefEqStrong
2. Prove subject reduction: WHStep preserves typing

### Phase D: proofIrrel + appDF (closes 8 sorry's)
1. proofIrrel: use SR + uniq to derive level contradiction
2. appDF: use SR + depth-decreasing to transfer SortLike through app reduction

### Phase E: Restructure for eta + forallE_inv_n (closes 3 sorry's)
1. Move whnf_preserved into the stratified bundle (or add sort_forallE_inv_n to bundle)
2. eta backward uses sort_forallE_inv_{<n} from bundle IH
3. forallE_inv_n uses full whnf_preserved + InjectivityParams

### Phase F: Clean up HeadReduction plumbing (closes 2 sorry's)
1. Properly derive extra_pat from Params.extra_pat
2. Derive or sorry extra_instL_inv

## Detail Files

The following detail files contain extended analysis of the hardest components:

- **DETAIL_whstep_determinism.md** — WHStep determinism proof, pat_uniq design,
  case-by-case analysis of WHStep constructor overlaps [COMPLETED]
- **DETAIL_instL_inv.md** — ForallELikeWith.instL_inv proof strategy, instL/instN
  commutation, WHStep.instL_inv single-step inverse [COMPLETED]
- **DETAIL_sortlike_preservation.md** — SortLike/ForallELike preservation through
  IsDefEqStrong, constructor-by-constructor analysis, the appDF difficulty
- **DETAIL_forallE_inv_trans.md** — The generalized forallE_inv statement, the
  constDF case using instL_r, depth bound management
- **DETAIL_appDF_resolution.md** — Resolution of the appDF and proofIrrel cases via
  depth-decreasing argument and subject reduction [NEW]

## Key Type Signatures

### InjectivityParams (PatternParams.lean)
```lean
class InjectivityParams (Pat : VExpr → List VLevel → VExpr → Prop) where
  pat_simple : Pat lhs ls rhs → lhs.isSimplePattern  -- const/app-headed
  extra_pat : ∀ {e e'}, WHStep env Pat e e' → Pat lhs ls rhs → e = lhs.instL ls → e' = rhs.instL ls
  -- TODO: add pat_uniq for WHStep determinism
```

### WHStep (WHNFStep.lean)
```lean
inductive WHStep (env : VEnv) (Pat : VExpr → List VLevel → VExpr → Prop) :
    VExpr → VExpr → Prop where
  | beta : WHStep env Pat (.app (.lam A body) arg) (body.inst arg)
  | extra : Pat lhs ls rhs → WHStep env Pat (lhs.instL ls) (rhs.instL ls)
  | appFn : WHStep env Pat f f' → WHStep env Pat (.app f a) (.app f' a)
```

### SortLikeWith / ForallELikeWith (WHNFStep.lean)
```lean
abbrev SortLikeWith e l := WHSteps e (.sort l)        -- i.e. ReflTransGen (WHStep ..) e (.sort l)
abbrev ForallELikeWith e A B := WHSteps e (.forallE A B)  -- i.e. ReflTransGen (WHStep ..) e (.forallE A B)
```

### StratifiedBundle (Injectivity.lean)
```lean
private def StratifiedBundle (env : VEnv) (U n : Nat) : Prop :=
  -- Part 1: uniq at depth ≤ n
  (∀ {Γ A V V'} {n₁ n₂ : Nat}, OnCtx Γ (env.IsType U) →
    env.HasTypeStratified U Γ A V false n₁ → n₁ ≤ n →
    env.HasTypeStratified U Γ A V' false n₂ → n₂ ≤ n →
    V.IsDefEq env U Γ V') ∧
  -- Part 2: sort_inv at depth ≤ n
  (∀ {Γ : List VExpr} {u v A : VExpr} {b : Bool} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) →
    env.HasTypeStratified U Γ (.sort u) A b n₁ → n₁ ≤ n →
    env.HasTypeStratified U Γ (.sort v) A b n₂ → n₂ ≤ n →
    u.IsDefEq env U Γ v) ∧
  -- Part 3: forallE_inv at depth ≤ n
  (∀ {Γ : List VExpr} {A B A' B' V V' : VExpr} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) →
    env.IsDefEqU U Γ (.forallE A B) (.forallE A' B') →
    n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ (.forallE A B) V true n₁ →
    env.HasTypeStratified U Γ (.forallE A' B') V' true n₂ →
    (∃ u, env.IsDefEq U Γ A A' (.sort u) ∧ ...) ∧
    (∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) ∧ ...))
```

### Key lemma signatures needed
```lean
-- WHStep determinism (needs pat_uniq)
theorem WHStep.deterministic (h1 : WHStep env Pat e e₁) (h2 : WHStep env Pat e e₂) : e₁ = e₂

-- WHNF uniqueness for forallE
theorem ForallELikeWith.unique (h1 : ForallELikeWith e A B) (h2 : ForallELikeWith e A' B') :
    A = A' ∧ B = B'

-- Disjointness
theorem forallE_sort_disjoint (h1 : ForallELikeWith e A B) (h2 : SortLikeWith e l) : False

-- Inverse commutation with instL
theorem ForallELikeWith.instL_inv (h : ForallELikeWith (e.instL ls) A B) :
    ∃ C D, ForallELikeWith e C D ∧ A = C.instL ls ∧ B = D.instL ls

-- SortLike preservation through IsDefEqStrong
theorem IsDefEqStrong.sortLike_preserved
    (H : env.IsDefEqStrong U Γ e₁ e₂ A) (hs : SortLikeWith e₁ l) :
    ∃ l', SortLikeWith e₂ l'

-- ForallELike preservation through IsDefEqStrong
theorem IsDefEqStrong.forallELike_preserved
    (H : env.IsDefEqStrong U Γ e₁ e₂ A) (hf : ForallELikeWith e₁ C D) :
    ∃ C' D', ForallELikeWith e₂ C' D'
```
