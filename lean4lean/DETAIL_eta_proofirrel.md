# Detail: Closing eta backward and proofIrrel Cases

## Prerequisites

- Phase B complete (SR available via `whsteps_hasType`)
- Phase C complete (whnf_preserved is stratified with depth params)

## proofIrrel (4 sorry's at line 181)

### Setup

The `proofIrrel` constructor of IsDefEqStrong:
```lean
| proofIrrel : Γ ⊢ p : .sort .zero → Γ ⊢ h : p → Γ ⊢ h' : p → Γ ⊢ h ≡ h' : p
```

So `e₁ = h`, `e₂ = h'`, `V = p`.

### Argument (all 4 components are vacuously true)

For SortLike forward (`SortLikeWith h l → ∃ l', SortLikeWith h' l'`):
prove `SortLikeWith h l → False`:

1. `SortLikeWith h l` means `h →_WH* .sort l`
2. By SR (`whsteps_hasType`) + `hh : h : p`: `.sort l : p`
3. Canonical: `.sort l : .sort (succ l)` (depth 1)
4. By `uniq_n` (both types at depth ≤ n): `p ≡ .sort (succ l)`
5. From `hp : p : .sort 0` + step 4: `.sort (succ l) : .sort 0`
6. Canonical: `.sort (succ l) : .sort (succ (succ l))` (depth 1)
7. By `uniq_n`: `.sort 0 ≡ .sort (succ (succ l))`
8. By `sort_inv_n`: `0 ≈ succ (succ l)` — impossible ✓

ForallELike: identical, with `.forallE A B : .sort (imax u v)` instead of `.sort l : .sort (succ l)`.
Backward: identical using `h'` and `hh'`.

### Depth tracking

From `ht₁ : HTS h T₁ true k₁` (k₁ ≤ n):
- SR gives `HTS (.sort l) T₁ true ≤ k₁` (SR preserves or decreases depth)
- Canonical `.sort l : .sort (succ l)` at depth 1
- `uniq_n` needs both at depth ≤ n: k₁ ≤ n ✓ and 1 ≤ n ✓

For step 5: `HTS p (.sort 0) true k_p`. From the typing tree, `p` appears as the type of
`h`, so `k_p ≤ k₁ - 1 < n`. Then `HTS (.sort (succ l)) (.sort 0) true k_p'` follows from
type conversion. And `uniq_n` at depth max(k_p', 1) ≤ n. ✓

**No sort_forallE_inv needed.** Only sort_inv_n and uniq_n (both available at depth n). ✓

## eta backward (2 sorry's at lines 151, 153)

### Setup

```lean
| eta : ... → Γ ⊢ e : .forallE A B → ... →
    Γ ⊢ .lam A (.app e.lift (.bvar 0)) ≡ e : .forallE A B
```

e₁ = `.lam A (.app e.lift (.bvar 0))`, e₂ = `e`, V = `.forallE A B`.

Forward SortLike/ForallELike (e₁→e₂): vacuous since `.lam` is never sort/forallE-like. ✓
(Already proved in the code.)

### eta backward SortLike: `SortLikeWith e l → ∃ l', SortLikeWith (.lam ...) l'`

Prove `SortLikeWith e l → False` (since `.lam` can never be sort-like):

1. `e →_WH* .sort l` and `e : .forallE A B` (from eta constructor)
2. By SR: `.sort l : .forallE A B`
3. Canonical: `.sort l : .sort (succ l)`
4. By `uniq_n`: `.forallE A B ≡ .sort (succ l)`
5. Need: `.forallE A B ≡ .sort (succ l) → False` ← **THIS IS sort_forallE_inv**

### eta backward ForallELike: `ForallELikeWith e A' B' → ∃ ..., ForallELikeWith (.lam ...) ...`

Prove `ForallELikeWith e A' B' → False` (since `.lam` can never be forallE-like):

1. `e →_WH* .forallE A' B'` and `e : .forallE A B`
2. By SR: `.forallE A' B' : .forallE A B`
3. Canonical: `.forallE A' B' : .sort (imax u v)`
4. By `uniq_n`: `.forallE A B ≡ .sort (imax u v)`
5. Need: `.forallE A B ≡ .sort (imax u v) → False` ← **ALSO sort_forallE_inv**

## THE CIRCULARITY PROBLEM

Both eta backward cases need `sort_forallE_inv`. But `sort_forallE_inv` is proved
using `whnf_preserved` (the very theorem we're inside). This creates a genuine
circular dependency:

```
whnf_preserved (eta case) → sort_forallE_inv → whnf_preserved (trans case)
```

This is the SAME circularity that stratification is supposed to break.

### Why simple stratification doesn't quite work

At depth n, the eta backward case needs sort_forallE_inv at depth m where
`.forallE A B` has HTS at depth k_f ≤ k₁ ≤ n. If k_f = k₁ = n (tight bound),
then m = n, and we can't use bundle_lt (which only gives m < n).

### Resolution options (ranked by feasibility)

**Option 1: Show k_f < k₁ (tighter depth bound)**

From the lam at HTS depth k₁: `A : .sort u` at depth d_A ≤ k₁ - 1`,
body at depth ≤ k₁ - 1. The forallE typing `(.forallE A B) : .sort (imax u v)` at
depth k_f = max(d_A, d_B) + 1. From HTS structure: the body `.app e.lift (.bvar 0)`
at depth ≤ k₁ - 1 includes `e.lift` at depth ≤ k₁ - 2, which includes `e` at
depth ≤ k₁ - 2 (via weakening). The `B` typing (for the forallE) comes from the
eta constructor and has depth d_B. If d_B ≤ k₁ - 2 (from `e : .forallE A B` at
depth k_e ≤ k₁ - 2, and B is PART OF that type), then k_f ≤ max(k₁-1, k₁-2) + 1 = k₁.

But we need k_f ≤ k₁ - 1, not k₁. This requires d_A ≤ k₁ - 2 AND d_B ≤ k₁ - 2.
From the HTS tree: `HTS (.lam A body') T true k₁` requires d_A at depth ≤ k₁ - 1
(the domain typing) and body' at depth ≤ k₁ - 1. The TIGHT case is when d_A = k₁ - 1.
So we can't guarantee d_A ≤ k₁ - 2 in general.

**VERDICT**: Probably not possible in general. The lam typing depth k₁ could have
the domain A consuming all but one level.

**Option 2: Well-founded induction on (depth, derivation_height)**

Use lexicographic product of `(n, |H|)` where `|H|` is the structural size of
the IsDefEqStrong derivation. At step (n, s):
- bundle_lt gives results at depth m < n (for all derivation sizes)
- The IH gives whnf_preserved at (n, s') for s' < s

For the eta backward case: construct the IsDefEqStrong derivation H' for
`.sort (succ l) ≡ .forallE A B`. If |H'| < |H| (the original eta derivation),
the IH at (n, |H'|) gives whnf_preserved for H'. Then sort_forallE_inv follows.

The derivation H' is constructed from `uniq` + the eta's embedded typing. Its size
depends on the uniq proof, which could be large. So |H'| < |H| is NOT guaranteed.

But we can use the (n, |H|) IH differently: apply whnf_preserved at (max(1, k_f), |H'|)
where max(1, k_f) ≤ k₁ ≤ n. If k₁ < n: use (k₁, |H'|) with k₁ < n. ✓
If k₁ = n: use (n, |H'|). Need |H'| < |H|. Uncertain.

**VERDICT**: Feasible if we can show |H'| < |H|. Uncertain.

**Option 3: Inline sort_forallE_inv into whnf_preserved**

Instead of sort_forallE_inv as a separate lemma, prove it directly in the
eta/proofIrrel cases by a NESTED structural induction.

In the eta backward case, after obtaining `IsDefEqStrong (.sort (succ l)) (.forallE A B) V'`,
do structural induction on THIS derivation (nested inside the outer induction on H).
The trans case of the nested induction needs SortLike forward from the first sub-derivation.
Apply the OUTER IH's SortLike forward (which works since the first sub-derivation of H'
is structurally smaller than H'... but H' is NOT a sub-derivation of H).

**VERDICT**: Doesn't work — nested induction on H' can't use the outer IH for H.

**Option 4 (RECOMMENDED): Make StratifiedBundle include whnf_preserved_n**

Include all 5 components in the bundle: uniq, sort_inv, forallE_inv, sort_forallE_inv,
AND whnf_preserved. Then the bundle step at depth n has access to ALL 5 at depth < n.

The proof order inside the bundle step:
1. sort_inv_n (using uniq_{<n}, sort_inv_{<n})
2. uniq_n (using sort_inv_n, forallE_inv_{<n})
3. sort_forallE_inv_n (using whnf_preserved_{<n} from bundle_lt)
4. whnf_preserved_n (using sort_forallE_inv_n, uniq_n, sort_inv_n, whnf_preserved_{<n})
5. forallE_inv_n (using whnf_preserved_n, sort_forallE_inv_n, uniq_n)

For step 3: sort_forallE_inv_n at depth n uses whnf_preserved at depth < n.
The internal whnf_preserved call takes HTS of `.sort` at depth 1 and `.forallE` at depth
k_f. With depth m = max(1, k_f): need m < n. Since sort_forallE_inv_n is called with
expressions typed at depth ≤ n, k_f ≤ n. If k_f = n: need whnf_preserved at depth n,
which is not yet proved.

**FIX**: Make sort_forallE_inv_n depth-conditional:
```lean
sort_forallE_inv_n :
    HTS (.sort u) T₁ k₁ → k₁ ≤ n →
    HTS (.forallE A B) T₂ k₂ → k₂ ≤ n →
    IsDefEqU (.sort u) (.forallE A B) → False
```
Then the eta case at depth n uses sort_forallE_inv with k₁ ≤ n and k₂ ≤ n.
sort_forallE_inv's proof needs whnf_preserved at depth max(k₁, k₂) ≤ n. If max = n: circular.

**DEEPER FIX**: sort_forallE_inv only needs whnf_preserved at the depth of the
IsDefEqStrong derivation's embedded typings. From the IsDefEq: `.sort u ≡ .forallE A B`.
Convert to IsDefEqStrong: all embedded typings are at some depth d. Use whnf_preserved
at depth d from bundle_lt (if d < n).

The embedded typing depths of `.sort u ≡ .forallE A B` (constructed from uniq + the
eta's typings) are at depth ≤ k₁ - 1 (since they come from the eta's sub-typings which
are at depth ≤ k₁ - 1). So whnf_preserved at depth k₁ - 1 < n (since k₁ ≤ n). ✓

Wait — the IsDefEqStrong derivation is constructed from `IsDefEqU.strong`. The `strong`
method reconstructs typing at whatever depth the expressions have. The typing depth
is determined by `HasType`, which is non-stratified. `HasType.stratify` gives some depth,
which could be anything.

But the specific `IsDefEqU (.forallE A B) (.sort (succ l))` was derived using:
- `.sort l : .forallE A B` at depth ≤ k_e ≤ k₁ - 2 (from SR on e at depth k₂)
- `.sort l : .sort (succ l)` at depth 1
- `uniq_n` gives `.forallE A B ≡ .sort (succ l)` — this is an IsDefEqU

The `IsDefEqU.strong` conversion needs `Ordered ip.env` and `OnCtx Γ`, which we have.
The resulting IsDefEqStrong has embedded typings at whatever depth `.forallE A B` and
`.sort (succ l)` are typed at. For whnf_preserved: the HTS of `.sort (succ l)` at depth 1
and `.forallE A B` at depth k_f.

If we can show sort_forallE_inv only needs whnf_preserved with HTS bounds STRICTLY LESS
than what's available... this requires careful depth accounting through the `strong` method.

**VERDICT**: This approach is viable but requires careful depth tracking through the
`IsDefEqU.strong` conversion. The key question is whether the `strong` conversion
introduces extra depth or preserves the input depth bounds.

## Recommended Approach

1. Include whnf_preserved_n in the StratifiedBundle (5 components)
2. Prove sort_forallE_inv_n BEFORE whnf_preserved_n in the bundle step
3. sort_forallE_inv_n internally uses whnf_preserved_{<n} (from bundle_lt)
4. whnf_preserved_n uses sort_forallE_inv_n (just proved) for eta/proofIrrel
5. For the depth bound: sort_forallE_inv_n is called from eta at depth n with
   `.forallE A B` typed at depth k_f. Argue that k_f < n by tracing through the
   HTS structure (the B typing is at depth ≤ k₁ - 2 from the weakened e typing,
   giving k_f ≤ max(k₁-1, k₁-2) + 1 = k₁, with k₁ ≤ n). The exact bound
   needs verification against the HTS rules.

If the tight bound k_f = k₁ = n occurs, fall back to Option 2 (well-founded induction
on a compound measure). This is the main technical risk in Phase D.
