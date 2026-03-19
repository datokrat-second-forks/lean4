# Detail: Resolving the appDF and proofIrrel Cases of Preservation

## The Problem

SortLike/ForallELike preservation through IsDefEqStrong requires handling 13
constructors. Two are genuinely hard:

1. **appDF**: `e₁ = .app f a`, `e₂ = .app f' a'`, sub-derivations `f ≡ f'` and `a ≡ a'`
2. **proofIrrel**: `h ≡ h' : p` where `p : .sort 0`

## appDF Resolution: The Depth-Decreasing Argument

### Setup

Given appDF with `SortLikeWith (.app f a) l`:
- The WHStep chain: `.app f a →[appFn*] .app (.lam T body) a →[beta] body.inst a →* .sort l`
- So `f →_WH* .lam T body` (LamLikeWith)
- And `SortLikeWith (body.inst a) l` (after beta)

We need `∃ l', SortLikeWith (.app f' a') l'`.

### Why Structural IH Fails

To relate `body.inst a` and `body'.inst a'`, we can build a chain:
```
body.inst a ≡ .app (.lam T body) a   (symm beta, IsDefEqStrong)
            ≡ .app f a               (WHSteps → IsDefEq, by WHStep_IsDefEq)
            ≡ .app f' a'             (the original appDF derivation)
            ≡ .app (.lam T' body') a' (WHSteps → IsDefEq)
            ≡ body'.inst a'           (beta, IsDefEqStrong)
```

This is a CONSTRUCTED chain — not a sub-derivation of the original. The structural
induction IH only applies to sub-derivations, so it doesn't cover this chain.

### Why Depth Decreases

App typing in HasTypeStratified at depth n₁:
```
HasTypeStratified Γ (.app f a) (B.inst a) true n₁
```
requires (among other things):
```
HasTypeStratified Γ f (.forallE A B) true (n₁-1)
HasTypeStratified Γ a A true (n₁-1)
```

The sub-components are typed at depth n₁-1. After subject reduction through WHSteps
(`f →_WH* .lam T body`), we get `HasTypeStratified Γ (.lam T body) (.forallE A B) true (n₁-1)`.
Then by lam typing inversion + substitution: `HasTypeStratified Γ (body.inst a) (B.inst a) true ≤ (n₁-1)`.

Similarly for `body'.inst a'`.

So the constructed chain `body.inst a ≡ body'.inst a'` has HTS at depth ≤ n₁-1 < n₁ ≤ n.

### The Nested Induction

The preservation at depth n is proved by:
- **Outer:** Structural induction on IsDefEqStrong
- **Inner:** The appDF case uses preservation at depth < n (from the bundle IH)

The bundle IH gives `∀ m < n, StratifiedBundle m`, which includes (or implies)
preservation at all depths < n. The appDF case constructs the chain at depth ≤ n₁-1 < n
and applies preservation from the bundle IH.

### The Preservation Statement (Depth-Parameterized)

```lean
-- Preservation at depth n: for any IsDefEqStrong derivation,
-- if the expressions are typed at depth ≤ n, SortLike is preserved.
theorem preservation_n
    (bundle_lt : ∀ m < n, StratifiedBundle env U m)
    (uniq_n : ... -- uniq at depth n)
    (sort_inv_n : ... -- sort_inv at depth n)
    (H : env.IsDefEqStrong U Γ e₁ e₂ V)
    (hs : SortLikeWith Pat e₁ l)
    (ht₁ : env.HasTypeStratified U Γ e₁ T₁ true k₁) (hk₁ : k₁ ≤ n)
    (ht₂ : env.HasTypeStratified U Γ e₂ T₂ true k₂) (hk₂ : k₂ ≤ n) :
    ∃ l', SortLikeWith Pat e₂ l'
```

For the appDF case:
- `k₁ ≤ n` is the depth of `.app f a`
- Sub-components at depth k₁-1 < n
- Constructed chain at depth ≤ k₁-1 < n
- Apply `preservation_{k₁-1}` from `bundle_lt` ✓

### Dependencies for appDF

1. **WHStep_IsDefEq**: Each WHStep corresponds to an IsDefEqStrong derivation.
   ```
   WHStep env e e' → HasType env U Γ e T → env.IsDefEqStrong U Γ e e' T
   ```
   - beta: directly the `beta` constructor of IsDefEqStrong (needs typing info)
   - extra: directly the `extra` constructor (needs typing info from env)
   - appFn: from congruence (appDF with refl on the argument)

2. **Subject reduction for WHStep**: (see proofIrrel section below)

3. **LamLikeWith preservation**: If `f ≡ f' : .forallE A B` and `f →_WH* .lam T body`,
   then `f' →_WH* .lam T' body'`. This is proved alongside SortLike and ForallELike
   preservation (same structural induction, extra preservation target).

   Actually, for the appDF case, we DON'T need LamLikeWith preservation as a separate
   lemma. Instead, we use the constructed chain approach: `body.inst a ≡ body'.inst a'`
   via WHStep_IsDefEq + the original appDF + beta. We only need to show the chain is
   valid (all steps are IsDefEqStrong) and typed at depth < n.

4. **Preservation at depth < n**: From the bundle IH.

### Risk: MEDIUM

The depth-decreasing argument is sound. The main technical challenge is:
- Formalizing WHStep_IsDefEq (converting WHSteps to IsDefEqStrong derivations)
- Managing the depth bounds through the construction
- Subject reduction (needed to establish typing at reduced depth)

## proofIrrel Resolution: Subject Reduction

### The Argument

For proofIrrel: `h ≡ h' : p` where `p : .sort .zero`, `h : p`, `h' : p`.

If `SortLikeWith h l`:
1. `h →_WH* .sort l`
2. By subject reduction for WHSteps: `.sort l : p`
   (since `h : p` and each WHStep preserves typing)
3. But `.sort l` has canonical type `.sort (succ l)`
4. By uniq: `p ≡ .sort (succ l)` (at whatever depth these are typed)
5. Since `p : .sort 0` and `p ≡ .sort (succ l)`:
   `.sort (succ l) : .sort 0` (by type conversion)
6. But `.sort (succ l) : .sort (succ (succ l))` (canonical)
7. By uniq: `.sort 0 ≡ .sort (succ (succ l))`
8. By sort_inv: `0 ≈ succ (succ l)` — impossible ✓

So `SortLikeWith h l` is vacuously False for proofIrrel terms.

### Subject Reduction for WHStep

```lean
theorem WHStep.subject_reduction
    (hs : WHStep env Pat e e')
    (ht : HasType env U Γ e T) :
    HasType env U Γ e' T
```

By cases on `hs`:
1. **beta**: `(.app (.lam A body) arg) →_WH (body.inst arg)`
   - `HasType (.app (.lam A body) arg) T`
   - By app typing inversion: `HasType (.lam A body) (.forallE A' B)`, `HasType arg A'`, `T ≡ B.inst arg`
   - By lam typing inversion: `HasType body B` (in A'::Γ)
   - By substitution: `HasType (body.inst arg) (B.inst arg) ≡ T` ✓

2. **extra**: `df.lhs.instL ls →_WH df.rhs.instL ls`
   - `HasType (df.lhs.instL ls) T` and `env.defeqs df`
   - From extra rule: `df.lhs.instL ls ≡ df.rhs.instL ls : df.type.instL ls`
   - So `HasType (df.rhs.instL ls) (df.type.instL ls)`
   - By uniq: `T ≡ df.type.instL ls`
   - By type conversion: `HasType (df.rhs.instL ls) T` ✓

3. **appFn**: `(.app f arg) →_WH (.app f' arg)` where `WHStep f f'`
   - By IH: `HasType f' (.forallE A B)` (same type as f)
   - Reconstruct app typing ✓

Subject reduction for WHSteps (multi-step) follows by induction on the chain.

### Depth Consideration for proofIrrel

The proofIrrel constructor provides `h : p` and `p : .sort 0` as IsDefEqStrong
typing. This gives HasType (non-stratified), which implies ∃ k, HTS at depth k.
The depth k is arbitrary.

To use uniq_n (from the bundle at depth n), we need k ≤ n. This may not hold.

**Resolution**: The preservation statement includes HTS witnesses at depth ≤ n. For
proofIrrel, the HTS of `h` at depth ≤ n comes from the external HTS witness passed to
preservation (not from the proofIrrel constructor's internal typing). Specifically:

The preservation is called with `HasTypeStratified e₁ T₁ true k₁, k₁ ≤ n`. At the
proofIrrel case, `e₁ = h` (or `e₁ = h'`), and `HasTypeStratified h T₁ true k₁` with
`k₁ ≤ n`. From this HTS witness, we can derive `HasTypeStratified h p true k₁` (since
the proofIrrel constructor tells us `h : p`, and by HTS + uniq_n, the types must agree).

Then subject reduction gives `HasTypeStratified (.sort l) p true k₁` (or at depth ≤ k₁).
And we use uniq at depth k₁ ≤ n to derive the level contradiction.

### Risk: LOW-MEDIUM

Subject reduction for WHStep is straightforward (3 cases, each using standard typing
properties). The depth management adds some complexity but follows the same pattern as
the appDF case.

## Overall Viability

**The approach is viable.** Both hard cases have clear, non-circular resolution paths:

- **appDF**: Depth decreases by 1 per app-layer, enabling use of bundle IH ✓
- **proofIrrel**: Subject reduction + uniq at bounded depth ✓

The preservation statement must include HTS depth bounds. This changes the statement from
the "clean" version in PLAN.md but is necessary for the nested induction to work.

### Implementation Strategy

1. **Phase A**: Prove all easy cases of preservation (10 of 13 constructors), sorry appDF
   and proofIrrel. This validates the overall structure.
2. **Phase B**: Prove subject reduction for WHStep. This unblocks proofIrrel.
3. **Phase C**: Prove WHStep_IsDefEq (converting WHSteps to IsDefEqStrong). This unblocks appDF.
4. **Phase D**: Fill in appDF using the depth-decreasing argument.

Each phase is independently verifiable. If any phase hits unexpected obstacles, the others
still provide value.
