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

## WHNFStep.lean: Remaining Sorries

### 1. WHStep determinism (prerequisite for unique and disjoint)

Need to add `pat_uniq` to `InjectivityParams` (currently only has `pat_simple` + `extra_pat`).

Then WHStep determinism:
- beta vs beta: same result (trivial — both sides determined by expression structure)
- beta vs extra: no overlap (app (lam ..) can't match const/app-headed pattern)
- beta vs appFn: no overlap (lam has no WHStep out of it)
- extra vs extra: same result (from pat_uniq)
- extra vs appFn: needs pattern structure — const-headed extra can't overlap with appFn
- appFn vs appFn: inductive on sub-step

### 2. ForallELikeWith.unique — follows immediately from determinism

### 3. forallE_sort_disjoint — follows immediately from determinism

### 4. ForallELikeWith.instL_inv — inverse commutation with instL

Lemma: If `e.instL ls →_WH* forallE A B`, then `∃ C D, e →_WH* forallE C D ∧
A = C.instL ls ∧ B = D.instL ls`.

By induction on the WHSteps chain:
- Zero steps: instL preserves constructors, so e = forallE C D directly.
- One+ steps: case split on first step:
  - beta: use `instL_instN` commutation (proven in VExpr.lean)
  - extra: use `instL_instL` composition (proven in VExpr.lean)
  - appFn: reconstruct on e

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

### Phase 1: Complete WHNFStep infrastructure
1. Add `pat_uniq` to `InjectivityParams`
2. Prove WHStep determinism
3. Prove `ForallELikeWith.unique` and `forallE_sort_disjoint`
4. Prove `ForallELikeWith.instL_inv`

### Phase 2: Complete sort_inv_n
5. Prove `sortEquiv`
6. Fill in sort_inv_n base/defeq, defeq/base, defeq/defeq cases

### Phase 3: Prove uniq_n
7. Adapt `IsDefEq.uniq` from UniqueTyping.lean with IH-provided lemmas

### Phase 4: Prove sort_forallE_inv_n via preservation
8. Define SortLike/ForallELike preservation through IsDefEqStrong (structural induction)
9. Prove sort_forallE_inv_n using preservation + disjointness

### Phase 5: Prove forallE_inv_n
10. Define generalized statement over ForallELikeWith expressions
11. Prove by structural induction, using preservation for trans, instL_inv for constDF

### Phase 6: Extract non-stratified versions
12. Already done (sort_inv, forallE_inv, sort_forallE_inv extracted from bundle)

## Risk Assessment

| Component | Risk | Notes |
|---|---|---|
| sort_inv_n remaining cases | Medium | Long but mechanical constructions |
| sortEquiv | Medium | WF induction, needs careful depth tracking |
| uniq_n | Low | Direct copy from UniqueTyping.lean |
| WHStep determinism | Medium | Needs pat_uniq added to InjectivityParams |
| SortLike preservation | Medium | eta case needs sort_forallE_inv_{<n} |
| sort_forallE_inv_n | Low | Direct from preservation + disjointness |
| forallE_inv_n trans case | Medium-High | Generalized statement, ForallELike threading |
| forallE_inv_n constDF case | **HIGH** | Needs instL_inv + unique + instL_r composition |
| ForallELikeWith.instL_inv | Medium | Technical but standard inst/instL commutation |

## Current Implementation Status

### What's proven
- `sort_inv_zero` ✓
- `sort_canonical` ✓
- `StratifiedBundle` definition ✓
- `sort_inv_n` b=false, base/base ✓
- Non-stratified theorem derivations ✓
- `PatternParams.lean` fully proven ✓
- `WHNFStep.lean`: WHStep definition, not_forallE, not_sort, WHStep.instL, WHSteps.instL ✓

### Remaining sorries (10 total)
In WHNFStep.lean (3):
- `ForallELikeWith.unique`
- `forallE_sort_disjoint`
- `ForallELikeWith.instL_inv`

In Injectivity.lean (7):
- `sortEquiv`
- `sort_inv_n` base/defeq case
- `sort_inv_n` defeq/base case
- `sort_inv_n` defeq/defeq case
- `uniq_n`
- `forallE_inv_n`
- `sort_forallE_inv`

## Detail Files

The following detail files contain extended analysis of the hardest components:

- **DETAIL_whstep_determinism.md** — WHStep determinism proof, pat_uniq design,
  case-by-case analysis of WHStep constructor overlaps
- **DETAIL_instL_inv.md** — ForallELikeWith.instL_inv proof strategy, instL/instN
  commutation, WHStep.instL_inv single-step inverse
- **DETAIL_sortlike_preservation.md** — SortLike/ForallELike preservation through
  IsDefEqStrong, constructor-by-constructor analysis, the appDF difficulty
- **DETAIL_forallE_inv_trans.md** — The generalized forallE_inv statement, the
  constDF case using instL_r, depth bound management

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
