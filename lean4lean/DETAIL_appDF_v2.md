# Detail: Resolving the appDF Case (v2)

## Setup

`appDF` constructor of IsDefEqStrong:
```
Γ ⊢ f ≡ f' : .forallE A B    (H_f)
Γ ⊢ a ≡ a' : A               (H_a)
Γ ⊢ .app f a ≡ .app f' a' : B.inst a
```

Given `SortLikeWith (.app f a) l`, prove `∃ l', SortLikeWith (.app f' a') l'`.

## Analysis of the WHStep chain

`SortLikeWith (.app f a) l` means `.app f a →_WH* .sort l`.

The chain must exit the `.app` form at some point. The possibilities for the first step:
1. `WHStep.beta`: `f = .lam T body`, steps to `body.inst a`
2. `WHStep.appFn`: `f →_WH f₁`, steps to `.app f₁ a`
3. `WHStep.major`: `IsMajorPremise f`, `a →_WH a₁`, steps to `.app f a₁`
4. `WHStep.extra`: full pattern match fires on `.app f a`, steps to `r.apply m1 m2`

Cases 2 and 3 keep the `.app` form and eventually reach case 1 or 4.

## Forward direction (SortLike e₁→e₂)

### Sub-case: chain goes through beta

Eventually `f →_WH* .lam T body` (via zero or more appFn steps), then
`.app (.lam T body) a →_WH body.inst a →_WH* .sort l`.

So `SortLikeWith (body.inst a) l`.

**Depth analysis**: From `ht₁ : HTS (.app f a) T₁ true k₁` with k₁ ≤ n:
- App inversion: `HTS f (.forallE A' B') true (k₁-1)` and `HTS a A' true (k₁-1)`
- By SR on `f →_WH* .lam T body`: `HTS (.lam T body) (.forallE A' B') true (k₁-1)`
- By lam inversion: `HTS body B' true ≤ (k₁-1)` in context `A'::Γ`
- By substitution lemma: `HTS (body.inst a) (B'.inst a) true ≤ (k₁-1)`

So `body.inst a` has HTS at depth ≤ k₁-1 ≤ n-1.

**Constructed chain**:
```
body.inst a ≡ .app (.lam T body) a      (symm beta)
            ≡ .app f a                   (appDF: WHSteps f (.lam T body) give f ≡ .lam T body)
            ≡ .app f' a'                 (the original appDF)
```

This is an IsDefEqStrong derivation. Apply `whnf_preserved` at depth ≤ k₁-1 from
`bundle_lt` (since k₁-1 < n):
- Forward: `SortLikeWith (body.inst a) l → SortLikeWith (.app f' a') l'` ✓

**BUT**: whnf_preserved at depth m requires HTS of BOTH endpoints at depth ≤ m:
- `body.inst a` at depth ≤ k₁-1 ✓
- `.app f' a'` at depth k₂ ≤ n. Need k₂ ≤ k₁-1? Not guaranteed!

**Resolution**: If whnf_preserved only needs the SortLike-bearing side's depth,
the forward direction works with just k₁-1. But the symm case of whnf_preserved
requires the backward direction, which needs the OTHER side's depth. See below.

### Sub-case: chain goes through extra (iota reduction)

Eventually a full pattern matches `.app f' a_final` (after major/appFn steps), and
the RHS `r.apply m1 m2 →_WH* .sort l`.

The depth analysis is similar: the RHS has HTS at depth related to the pattern rule's
typing, which by `pat_wf` is bounded by the application's typing depth.

## The two-sided depth problem

whnf_preserved at depth m needs:
```
ht₁ : HTS e₁ T₁ true k₁, k₁ ≤ m
ht₂ : HTS e₂ T₂ true k₂, k₂ ≤ m
```

For the forward direction of the constructed chain at depth m = k₁-1:
- `body.inst a` at depth ≤ k₁-1 ✓
- `.app f' a'` at depth k₂. Need k₂ ≤ k₁-1. NOT guaranteed.

### Resolution: Use two separate chain arguments

**Forward**: `SortLikeWith (.app f a) l → SortLikeWith (.app f' a') l'`

Instead of one big chain, split into steps:
1. From `SortLikeWith (body.inst a) l` (depth k₁-1)
2. Construct `IsDefEqStrong (body.inst a) (body'.inst a')` from H_f and H_a
   (using lam inversion on f' →_WH* .lam T' body', substitution congruence)
3. By whnf_preserved at depth k₁-1 < n (if body'.inst a' also at depth ≤ k₁-1):
   `SortLikeWith (body'.inst a') l'`
4. Reverse the WHStep chain: `.app f' a' →_WH* body'.inst a' →_WH* .sort l'`

Problem: step 4 requires `f' →_WH* .lam T' body'`. How do we get this?

We know `f ≡ f'` and `f →_WH* .lam T body`. Need `f' →_WH* .lam T' body'`.
This requires LamLike preservation — but that's essentially whnf_preserved (the
ForallELike direction, since if f has a forallE type and reduces to a lam, the
lam expresses the forallE structure).

This brings us back to the same chicken-and-egg problem.

### Alternative: Single chain, asymmetric preservation

If whnf_preserved can be proved with an ASYMMETRIC depth requirement:
```
-- Only the SortLike-bearing side needs depth ≤ n
theorem whnf_preserved_n
    (H : IsDefEqStrong e₁ e₂ V)
    (ht₁ : HTS e₁ T₁ true k₁) (hk₁ : k₁ ≤ n)  -- ONLY e₁ bounded
    : (∀ l, SortLikeWith e₁ l → ∃ l', SortLikeWith e₂ l') ∧ ...
```

Then the forward direction works: chain from `body.inst a` (depth k₁-1) to
`.app f' a'` (any depth). Apply asymmetric whnf_preserved with only k₁-1 bounded.

**Problem with asymmetric preservation**: The `symm` case swaps directions.
`symm H` needs backward preservation, which is forward of H swapped. The
asymmetric version needs the SortLike-bearing side's depth bounded. For backward:
the SortLike-bearing side is e₂, so we need ht₂ bounded. But asymmetric only
bounded ht₁!

So we'd need BOTH asymmetric versions (one bounding e₁, one bounding e₂). But
proving both simultaneously requires... well, the 4-tuple approach. And the 4-tuple
needs both sides bounded for the recursive case.

## Recommended approach

### Include whnf_preserved in the StratifiedBundle (5 components)

At depth n, whnf_preserved takes BOTH sides at depth ≤ n:
```
ht₁ : HTS e₁ T₁ true k₁, k₁ ≤ n
ht₂ : HTS e₂ T₂ true k₂, k₂ ≤ n
```

For the appDF forward case:
1. Get `SortLikeWith (body.inst a) l` at depth ≤ k₁-1
2. Construct `IsDefEqStrong (body.inst a) (.app f' a') V`
3. `body.inst a` at depth ≤ k₁-1
4. `.app f' a'` at depth k₂ ≤ n
5. Use `whnf_preserved` at depth max(k₁-1, k₂) from the bundle

If max(k₁-1, k₂) < n: use bundle_lt ✓
If max(k₁-1, k₂) = n (when k₂ = n): NEED whnf_preserved at depth n (circular!)

**Resolution for k₂ = n**: We're trying to prove whnf_preserved at depth n with
max(k₁, k₂) ≤ n. The appDF sub-case at depth n constructs a chain at depth
max(k₁-1, k₂). If k₂ = n: the chain is at depth n. But we're proving whnf_preserved
at depth n! Direct use would be circular.

However, the CHAIN is a DIFFERENT IsDefEqStrong derivation than the original appDF.
If we use well-founded induction on (n, derivation_size), the chain's derivation size
might be comparable to or larger than the original's.

### The depth-pair approach

Use `(n, k₁+k₂)` as the induction measure: depth first, then sum of HTS depths.

For appDF at (n, k₁+k₂):
- Chain has HTS sum (k₁-1) + k₂ < k₁ + k₂ (since k₁ ≥ 1)
- Apply IH at (n, k₁-1 + k₂) ✓ (same depth n but lower sum)

For eta backward at (n, k₁+k₂):
- sort_forallE_inv constructs an IsDefEqStrong at HTS sum ≤ 1 + k_f
- Apply IH at... hmm, this needs whnf_preserved with the new sum

**Problem**: The induction measure (n, k₁+k₂) mixes the bundle depth n with the
expression depths. The bundle provides results at depth < n, not at (n, lower_sum).

### SIMPLEST viable approach

Make StratifiedBundle include whnf_preserved:
```lean
def StratifiedBundle env U n :=
  (uniq_n) ∧ (sort_inv_n) ∧ (forallE_inv_n) ∧ (sort_forallE_inv_n) ∧
  (∀ {Γ e₁ e₂ V T₁ T₂ k₁ k₂},
    OnCtx Γ ... → IsDefEqStrong e₁ e₂ V →
    HTS e₁ T₁ true k₁ → k₁ ≤ n →
    HTS e₂ T₂ true k₂ → k₂ ≤ n →
    (4-tuple))
```

In the bundle step at depth n:
1. sort_inv_n ✓
2. uniq_n ✓
3. sort_forallE_inv_n: uses whnf_preserved_{<n}
4. whnf_preserved_n: uses sort_forallE_inv_n and whnf_preserved_{<n}
5. forallE_inv_n: uses whnf_preserved_n

For step 4 (appDF case): the chain needs whnf_preserved with both sides at depth ≤ m.
If m = max(k₁-1, k₂): when k₂ < n, m ≤ n-1 < n ✓. When k₂ = n and k₁ < n+1:
m = n. Use whnf_preserved_n (being proved!) for the chain? Only if we can show the
chain's derivation is "smaller" in some well-founded sense.

**ULTIMATE RESOLUTION**: The appDF case where k₂ = k₁ = n may require well-founded
induction on a compound measure. The simplest compound measure:
- Primary: max(k₁, k₂) (the maximum HTS depth of both sides)
- Secondary: structural size of the IsDefEqStrong derivation

At (k_max, |H|):
- appDF constructs chain at (k_max, |H_chain|) where k₁-1 < k_max (strictly smaller primary) ✓

Wait — the chain has sides at depth k₁-1 and k₂. max(k₁-1, k₂) = k₂ = k_max when
k₂ = k_max. So the primary doesn't decrease!

But k₁ contributes to the other side. The chain endpoint `body.inst a` has
HTS at depth ≤ k₁-1. So the SUM k₁+k₂ decreases: (k₁-1)+k₂ < k₁+k₂. ✓

**Measure: (k₁+k₂, |H|) with lexicographic ordering:**
- appDF: chain at ((k₁-1)+k₂, |H_chain|). Primary k₁-1+k₂ < k₁+k₂ ✓
- All other cases: structural sub-derivations have |H'| < |H| ✓

This WORKS if we can formalize it. The StratifiedBundle would be indexed by (n, s)
where n is the depth sum and s is an upper bound on derivation size, with
well-founded induction on (n, s).

## Risk Assessment

**HIGH**. The appDF case is the most technically challenging part of the entire proof.
The depth-sum measure approach is sound but complex to formalize in Lean. The interaction
between HTS depth tracking, IsDefEqStrong structural analysis, and well-founded induction
creates a significant engineering challenge.

## Alternative: Avoid the depth issue entirely

If Church-Rosser (ChurchRosser.lean) can be completed (2 sorry's), then:
- `.app f a ≡ .app f' a'` → both reduce to common term e₃
- `SortLikeWith (.app f a) l` → `.app f a →_WH* .sort l`
- By confluence: `.sort l` and e₃ reduce to a common term
- Since `.sort l` is WHNF: e₃ →_WH* .sort l
- Therefore `.app f' a' →_WH* e₃ →_WH* .sort l`
- So `SortLikeWith (.app f' a') l` (with the SAME level l!)

This avoids the depth argument entirely but depends on Church-Rosser being provable.
The 2 CR sorry's are currently uninvestigated.
