# Plan for Proving the Injectivity Lemmas in Lean4Lean

## Background

The unique typing theorem (`IsDefEq.uniq`) in lean4lean is proven *modulo* three
injectivity lemmas in `Lean4Lean/Theory/Typing/Injectivity.lean`, all marked `sorry`:

1. **`IsDefEqU.sort_inv`**: If `sort u ≡ sort v` then `u ≈ v`
2. **`IsDefEqU.forallE_inv_stratified`**: If `forallE A B ≡ forallE A' B'` then
   domains and codomains are pairwise defeq (with stratification bounds)
3. **`IsDefEqU.sort_forallE_inv`**: `sort u` cannot be defeq to `forallE A B`

These are collectively called "definitional inversion" or "injectivity of type formers."

## Why This Is Hard

### The Circularity Problem
Unique typing and definitional inversion are mutually dependent:
- Unique typing needs injectivity (e.g., the `app` case needs `forallE_inv`)
- Injectivity needs Church-Rosser (to reduce both sides to WHNF and compare heads)
- Church-Rosser (as proven in `ChurchRosser.lean`) already depends on unique typing
  (the `ParRed.defeq` theorem uses `uniqU`, `forallE_inv`, etc.)

This creates a *circular dependency* that must be broken somehow.

### Mario's Failed Approach (2019 Thesis)
In his thesis, Carneiro attempted to break the circularity via **stratification**:
- Define `⊢_0` where definitional equality is syntactic identity
- Define `⊢_{n+1}` where definitional equality can use `⊢_n` typing
- Prove unique typing at each level by induction on `n`

**Why it broke:** The stratification `⊢_n` does not respect substitution with the
right bound. If `Γ, x:B ⊢_i e : A` and `Γ ⊢_j e' : B`, you need
`Γ ⊢_{max(i,j)} e[e'/x] : A` but can only derive `Γ ⊢_{i+j} e[e'/x] : A`.
The `i+j` bound grows under substitution, breaking the induction.

### Current Lean4Lean Architecture
The current codebase already has a different stratification (`HasTypeStratified`) that
is used in the *unique typing* proof itself (not for breaking the circularity with
Church-Rosser). The Church-Rosser proof (`ChurchRosser.lean`) uses a `Params` typeclass
that abstracts over:
- Pattern-based reduction rules (`Pat`)
- Their well-formedness (`pat_wf`) — which itself uses `IsDefEqU` and `HasType`

Critically, `ChurchRosser.lean` *imports* `UniqueTyping.lean`, meaning the current
architecture has Church-Rosser depending on unique typing (not the other way around).
This means the injectivity lemmas cannot simply be derived from Church-Rosser as
currently structured.

## Proposed Approach

### Key Insight
The injectivity lemmas need to be proven *without* relying on Church-Rosser or unique
typing (since those depend on injectivity). We need an independent argument.

### Strategy: Logical Relations / Reducibility Candidates

Following Lennon-Bertrand's FSCD 2025 approach ("What Does It Take to Certify a
Conversion Checker?"), we can prove injectivity using a **logical relation** that:
1. Does not require normalization (Lean's reduction is undecidable)
2. Does not require full Church-Rosser
3. Only needs a weak form of confluence (typed parallel reduction)

#### Phase 1: Typed Parallel Reduction (Independent of Unique Typing)

Define a *minimal* typed parallel reduction `⊢ e ≫_t e'` that:
- Tracks typing information in the relation itself
- Does NOT depend on unique typing or injectivity
- Includes beta, delta (extra), eta steps
- Satisfies substitution (by carrying type witnesses)

This is essentially a subset of the existing `ParRed` that doesn't use the `Params`
class (which depends on unique typing via `pat_wf`).

The challenge: the existing `ParRed` and `CParRed` in `ChurchRosser.lean` are defined
inside the `Params` scope which requires unique typing. We need a *bootstrap* version.

#### Phase 2: Weak Head Reduction Analysis

The key observation is that injectivity is fundamentally about **weak head normal forms**:
- If `sort u ≡ sort v`, then both sides are already in WHNF, and by analyzing the
  derivation structure, we can extract `u ≈ v`
- If `sort u ≡ forallE A B`, both are in WHNF with different heads, contradiction
- If `forallE A B ≡ forallE A' B'`, both are in WHNF with matching heads, and we can
  extract the component equalities

The difficulty is that `IsDefEqU` is defined as `∃ A, IsDefEq Γ e₁ e₂ A`, and `IsDefEq`
allows arbitrary chains of `defeqDF` (type conversion), `trans`, `symm`, `extra`, etc.
We need to show these chains preserve head structure for type formers.

#### Phase 3: Induction Strategy

The most promising approach is **induction on the `IsDefEq` derivation** with a
strengthened induction hypothesis. The key steps:

**For `sort_inv` and `sort_forallE_inv`:**

1. Define a notion of "head form": every well-typed expression either head-reduces or
   is in WHNF (a sort, forallE, lam, bvar, or stuck const/app).
2. Show that `IsDefEqU` preserves "being a sort" and "being a forallE" in the following
   sense: if `e₁` is a sort and `e₁ ≡ e₂`, then either `e₂` head-reduces to a sort,
   or the equality goes through a `defeqDF` that changes the type.
3. The `defeqDF` case is where the stratification (`HasTypeStratified`) comes in: by
   tracking the depth of `defeqDF` applications, we can do induction on this depth.

**For `forallE_inv_stratified`:**

This is the hardest lemma. Given `forallE A B ≡ forallE A' B'`:
1. By `IsDefEqStrong`, we can assume the derivation is in "strong" form
2. The derivation must go through a chain: `forallE A B ≡ ... ≡ forallE A' B'`
3. Each step in the chain either:
   - Is a `forallEDF` step (directly gives component equalities)
   - Is a `defeqDF` step (changes the type, can be handled by stratification)
   - Is a `trans` step (inductively decompose)
   - Is an `extra` step (pattern-based rewrite — must show it preserves forallE head)
   - Is `proofIrrel` (forallE is never a proof unless it's `Prop → Prop → ...`)

The `extra` case is subtle: we need to show that no pattern rule rewrites a `forallE`
to a non-`forallE` or vice versa. This should follow from `pat_simple` (all patterns
are `SimplePattern`s, which are headed by constants, not type formers).

#### Phase 4: The `extra` / Pattern Rule Case

The `Params.pat_simple` axiom states that all patterns are either `defn c` (a constant)
or `iota r m c n` (a recursor applied to a constructor). Both patterns match expressions
headed by constants, never by `sort` or `forallE`. Therefore:
- A `sort` cannot match any pattern (it's not a const or app)
- A `forallE` cannot match any pattern (same reason)
- So `extra` steps never produce or consume sorts or forallE types

This means we can exclude the `extra` case entirely when proving injectivity for
sorts and forallE.

#### Phase 5: Proof Irrelevance Case

If `sort u ≡ forallE A B` via `proofIrrel`, both must be proofs of some `p : Prop`.
But `sort u : sort (succ u)` and `succ u ≠ 0`, so a sort is never a proof. Similarly,
for `forallE_inv`, if `forallE A B ≡ forallE A' B'` via `proofIrrel`, they are both
proofs of the same proposition, and we need to show their components are still related.
Since proof irrelevance only applies at `sort 0`, and `forallE A B : sort (imax u v)`,
this constrains when proof irrelevance can apply.

### Concrete Implementation Plan

#### Step 1: Characterize WHNF head forms for sorts and forallE
- In `Injectivity.lean` (or a new helper file), prove that well-typed sorts and
  forallE expressions cannot be rewritten by `extra` rules.
- Leverage `pat_simple` to show patterns don't match sorts/forallE.

#### Step 2: Prove `sort_forallE_inv` first (likely easiest)
- By induction on `IsDefEq` derivation (via `IsDefEqStrong`)
- The `sortDF` case: trivially impossible (sort ≠ forallE syntactically)
- The `forallEDF` case: trivially impossible
- The `defeqDF` case: recurse on the type equality
- The `trans` case: by unique typing (but this creates circularity!)

**Alternative for Step 2:** Instead of induction on the derivation, use the
`HasTypeStratified` approach already in the codebase:
- By `strong` + `stratify`, we get `HasTypeStratified` witnesses
- Induction on the stratification depth `n`
- At each level, sorts and forallE have distinct sort types (`sort (succ u)` vs
  `sort (imax u v)`), and we can use the IH to distinguish them

#### Step 3: Prove `sort_inv`
- Similar structure to `sort_forallE_inv`
- If `sort u ≡ sort v`, both have type `sort (succ u)` and `sort (succ v)` respectively
- By unique typing (already proven modulo injectivity!), `sort (succ u) ≡ sort (succ v)`
- By IH on stratification depth, `succ u ≈ succ v`, hence `u ≈ v`

#### Step 4: Prove `forallE_inv_stratified`
- The hardest case. Given `forallE A B ≡ forallE A' B'`:
- Both sides are typed: `forallE A B : sort (imax u v)` and
  `forallE A' B' : sort (imax u' v')`
- By unique typing, `sort (imax u v) ≡ sort (imax u' v')`
- By `sort_inv` (Step 3), `imax u v ≈ imax u' v'`
- Need to extract `A ≡ A'` and `B ≡ B'` from the original derivation
- The `forallEDF` case in `IsDefEqStrong` gives this directly
- The `defeqDF` case is handled by induction on stratification depth
- The `trans` case needs careful handling with the IH

#### Step 5: Prove `IsDefEqU.weakN_iff` (forward direction)
- This follows from unique typing + injectivity being fully established
- If `e1.liftN ≡ e2.liftN` in the extended context, show `e1 ≡ e2` in the original
- Use the existing backward direction + unique typing to transfer

### Key Risk: The Trans Case

The main risk is the `trans` case in induction on `IsDefEq`. Given:
```
sort u ≡ e₂ : A    and    e₂ ≡ sort v : A
```
We need to know that `e₂` is also a sort. This requires either:
- Church-Rosser (to reduce `e₂` to WHNF and see it's a sort), or
- A direct structural argument about `IsDefEq`

Since Church-Rosser depends on unique typing (circular), we need the direct argument.
The `HasTypeStratified` induction should handle this: at depth 0, there are no
`defeqDF` steps, so the derivation is purely structural and trans must go through
sorts. At depth `n+1`, we can use the IH at depth `n`.

This is precisely the approach already taken in `UniqueTyping.lean` — the induction
on `HasTypeStratified` breaks the mutual dependency. The question is whether this
same stratification suffices for the injectivity lemmas, given the substitution issue.

### Substitution Issue (The Hard Part)

The crux of the difficulty is that `forallE_inv_stratified` needs the conclusion at
a *specific stratification level* (matching the input). When we go under a binder
(as in proving `B ≡ B'` in `A::Γ`), we need substitution to preserve the
stratification level. The existing `HasTypeStratified` does track levels, and the
`forallE_inv_stratified` statement already accounts for this by taking `n` and `n'`
separately and providing the conclusion at matching levels.

The key question is: does the induction go through without the substitution level
blowing up? Looking at the statement:
```lean
theorem IsDefEqU.forallE_inv_stratified (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U))
    (h1 : env.IsDefEqU U Γ (.forallE A B) (.forallE A' B'))
    (h2 : env.HasTypeStratified U Γ (.forallE A B) V true n)
    (h3 : env.HasTypeStratified U Γ (.forallE A' B') V' true n') :
    (∃ u, env.IsDefEq U Γ A A' (.sort u) ∧ env.HasTypeStratified U Γ A (.sort u) true n) ∧
    ∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) ∧
      env.HasTypeStratified U (A::Γ) B (.sort u) true n ∧
      env.HasTypeStratified U (A'::Γ) B' (.sort u) true n'
```

The conclusion preserves the stratification levels `n` and `n'` from the inputs.
This is the right shape — it doesn't need substitution to work at a specific level,
because the `forallE` rule in `HasTypeStratified` directly decomposes:
```
forallE h1 h2 : Γ ⊢ A : sort u !! n, A::Γ ⊢ B : sort v !! n
    → Γ ⊢ forallE A B :! sort (imax u v) !! n+1
```

So the subterms `A` and `B` are at level `n` (one less than the forallE), and no
substitution is needed. The hard part is handling the `defeq` constructor:
```
defeq : Γ ⊢ A ≡ B : sort u → Γ ⊢ A : sort u !! n → Γ ⊢ B : sort u !! n
    → Γ ⊢ e : A !! n → Γ ⊢ e : B !! n+1
```

When the type of `forallE A B` is changed via `defeq`, we need to know that the
new type is still a sort (which it must be, since `forallE` always has sort type).
This is where `sort_forallE_inv` is needed — but that's one of the lemmas we're
trying to prove!

### Breaking the Mutual Dependency

The three lemmas are interdependent:
- `forallE_inv` needs `sort_inv` (to relate universe levels)
- `sort_inv` needs unique typing (already proven modulo injectivity)
- `sort_forallE_inv` is needed to handle `defeqDF` cases

**Proposed resolution:** Prove all three simultaneously by induction on
`max(n, n')` where `n, n'` are the stratification depths. At each level:

1. First prove `sort_forallE_inv` at this level (by IH at lower levels)
2. Then prove `sort_inv` at this level (using `sort_forallE_inv` at this level)
3. Then prove `forallE_inv_stratified` at this level (using both at this level)

The base case (depth 0) should be tractable because there are no `defeqDF` steps,
so the derivation is purely structural.

## Summary

The proof requires:
1. **Mutual induction** on stratification depth for all three injectivity lemmas
2. **Excluding `extra` rules** for sorts/forallE via `pat_simple`
3. **Careful handling of `defeqDF`** using the stratification level
4. **No Church-Rosser dependency** — the proof is purely structural/inductive
5. **Leveraging `HasTypeStratified`** already in the codebase for the level tracking

The main technical challenge is ensuring the `trans` case goes through at each
stratification level without needing substitution-level preservation.
