# Detail: forallE_inv — The Trans Case and Generalized Statement

## Goal

```lean
-- Current signature in Injectivity.lean:
have forallE_inv_n : ∀ {Γ : List VExpr} {A B A' B' V V' : VExpr} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) →
    env.IsDefEqU U Γ (.forallE A B) (.forallE A' B') →
    n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ (.forallE A B) V true n₁ →
    env.HasTypeStratified U Γ (.forallE A' B') V' true n₂ →
    (∃ u, env.IsDefEq U Γ A A' (.sort u) ∧
      env.HasTypeStratified U Γ A (.sort u) true n₁) ∧
    ∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) ∧
      env.HasTypeStratified U (A::Γ) B (.sort u) true n₁ ∧
      env.HasTypeStratified U (A'::Γ) B' (.sort u) true n₂
```

## The Problem

The proof proceeds by converting `IsDefEqU` to `IsDefEqStrong` (via `.strong`) and
then doing structural induction. The trans case gives:

```
IsDefEqStrong Γ (.forallE A B) e_mid V
IsDefEqStrong Γ e_mid (.forallE A' B') V
```

The IH for `forallE_inv` only applies when BOTH sides are syntactically `.forallE`.
Since `e_mid` is arbitrary, the IH doesn't apply.

## Approach 1: Generalize Over ForallELikeWith (from transcript)

Define a generalized version that works with `ForallELikeWith` on both sides:

```lean
-- Generalized forallE_inv: works with ForallELike expressions
theorem forallE_inv_generalized
    (H : env.IsDefEqStrong U Γ e₁ e₂ V)
    (h1 : ForallELikeWith e₁ A B) (h2 : ForallELikeWith e₂ A' B')
    -- typing witnesses
    (ht1 : env.HasTypeStratified U Γ e₁ V₁ true n₁) (hn1 : n₁ ≤ n)
    (ht2 : env.HasTypeStratified U Γ e₂ V₂ true n₂) (hn2 : n₂ ≤ n) :
    (∃ u, env.IsDefEq U Γ A A' (.sort u)) ∧
    (∃ u, env.IsDefEq U (A::Γ) B B' (.sort u))
```

The trans case now works:
```
H₁ : e₁ ≡ e_mid : V
H₂ : e_mid ≡ e₂ : V
h1 : ForallELikeWith e₁ A B
h2 : ForallELikeWith e₂ A' B'
```

By ForallELike preservation (on H₁): `∃ A'' B'', ForallELikeWith e_mid A'' B''`.
By IH₁: `A ≡ A''` and `B ≡ B''`.
By IH₂: `A'' ≡ A'` and `B'' ≡ B'`.
By transitivity: `A ≡ A'` and `B ≡ B'`. ✓

### Case-by-case analysis of the generalized statement

For each IsDefEqStrong constructor, we have `e₁, e₂` and `ForallELikeWith e₁ A B`,
`ForallELikeWith e₂ A' B'`.

#### forallEDF

`e₁ = .forallE A₀ B₀`, `e₂ = .forallE A₀' B₀'`.
`ForallELikeWith (.forallE A₀ B₀) A B`: Since `.forallE` is WHNF, zero steps,
so `A = A₀, B = B₀`. Similarly `A' = A₀', B' = B₀'`.
Component equalities come directly from `forallEDF`. ✓

#### symm

`H : e ≡ e' : V`. Swap roles and apply IH. ✓

#### trans

Handled by ForallELike preservation as described above. ✓

#### defeqDF

`H' : e₁ ≡ e₂ : A_other` (same expressions, different type).
ForallELikeWith hypotheses pass through unchanged. Apply IH on `H'`. ✓

#### sortDF

`e₁ = .sort l₁`, `e₂ = .sort l₂`.
`ForallELikeWith (.sort l₁) A B`: `.sort` is WHNF, zero steps → `.sort l₁ = .forallE A B`.
Impossible (different constructors). Contradiction. ✓

#### constDF

`e₁ = .const c ls₁`, `e₂ = .const c ls₂`, `ls₁ ≈ ls₂`.
`ForallELikeWith (.const c ls₁) A B`: const must delta-reduce, so at least one step.

```
.const c ls₁ →_WH[extra] ci.value.instL ls₁ →_WH* .forallE A B
```

Similarly:
```
.const c ls₂ →_WH[extra] ci.value.instL ls₂ →_WH* .forallE A' B'
```

By `ForallELikeWith.instL_inv` on `ci.value.instL ls₁ →_WH* .forallE A B`:
```
∃ C D, ForallELikeWith ci.value C D ∧ A = C.instL ls₁ ∧ B = D.instL ls₁
```

By `WHSteps.instL` (forward) on `ci.value →_WH* .forallE C D`:
```
ci.value.instL ls₂ →_WH* .forallE (C.instL ls₂) (D.instL ls₂)
```

By `ForallELikeWith.unique` (WHNF uniqueness):
```
A' = C.instL ls₂  and  B' = D.instL ls₂
```

Now we need `A ≡ A'`, i.e., `C.instL ls₁ ≡ C.instL ls₂`.

By `IsDefEq.instL_r` (Strong.lean line 700):
```lean
theorem IsDefEq.instL_r (H : env.IsDefEq U' Γ e1 e2 A)
    (henv : Ordered env) (hΓ : OnCtx Γ (env.IsType U'))
    (hls : ∀ l ∈ ls, l.WF U) (hls' : ∀ l ∈ ls', l.WF U)
    (heq : List.Forall₂ (· ≈ ·) ls ls') :
    env.IsDefEq U (Γ.map (VExpr.instL ls)) (e1.instL ls) (e2.instL ls') (A.instL ls)
```

Wait — this takes an existing `IsDefEq` and applies instL with different levels.
But we need an `IsDefEq` on `C`. We have `Γ ⊢ C ≡ C : ?type` — i.e., reflexivity.

For reflexivity, we can use `IsDefEq.refl` (if C is well-typed). We need
`[] ⊢ C : sort u` for some u (since ci.value is a closed term, Γ = []).

Then: `IsDefEq.instL_r (IsDefEq.refl h_C_typed) henv hΓ hls₁ hls₂ heq₁₂`
gives: `env.IsDefEq U (Γ.map (VExpr.instL ls₁)) (C.instL ls₁) (C.instL ls₂) (type_C.instL ls₁)`.

Wait, we need C to be well-typed. Do we know that? C is a sub-expression of ci.value,
reached by WHNF reduction. By subject reduction (type preservation through WHSteps),
C should be well-typed. **But do we have subject reduction for WHSteps?**

Subject reduction for WHSteps is essentially what `pat_wf` gives in the `Params` class
(for the extra step) plus standard beta preservation. However, `pat_wf` is NOT in
`InjectivityParams` — it requires typing, which creates circular dependencies.

**This is a real problem.** We need `C` to be well-typed to use `instL_r`, but
establishing well-typedness of intermediate WHNF results requires `pat_wf`.

### Alternative for constDF: Avoid extracting C

Instead of going through `C`, use `instL_r` on `ci.value` directly:

`ci.value` is well-typed: `[] ⊢ ci.value : ci.type` (from env well-formedness).
By `instL_r`: `[] ⊢ ci.value.instL ls₁ ≡ ci.value.instL ls₂ : ci.type.instL ls₁`.
(Taking `e₁ = e₂ = ci.value`, `A = ci.type`, `Γ = []`.)

Wait, `instL_r` needs `e₁ = e₂` in the input and produces different instL on each side.
Actually looking at the signature again:
```
instL_r (H : env.IsDefEq U' Γ e1 e2 A) : env.IsDefEq U (...) (e1.instL ls) (e2.instL ls') (A.instL ls)
```

So if we have `IsDefEq U' [] ci.value ci.value ci.type` (reflexivity), then:
`IsDefEq U [] (ci.value.instL ls₁) (ci.value.instL ls₂) (ci.type.instL ls₁)`.

This gives `ci.value.instL ls₁ ≡ ci.value.instL ls₂`. Now we need to extract
component equalities for the forallE components.

We know:
- `ci.value.instL ls₁ →_WH* .forallE A B` (from ForallELikeWith)
- `ci.value.instL ls₂ →_WH* .forallE A' B'` (from ForallELikeWith)
- `ci.value.instL ls₁ ≡ ci.value.instL ls₂ : ci.type.instL ls₁`

This is EXACTLY the situation that forallE_inv handles! Both sides are forallE-like,
and they're defeq. By the recursive IH (forallE_inv at depth < n, or this very
generalized statement applied to the instL_r derivation), we get `A ≡ A'` and `B ≡ B'`.

**But wait** — the instL_r derivation is a NEW derivation, not a sub-derivation of
the original. We can't use the structural IH on it. We need forallE_inv from the
BUNDLE IH (at depth < n).

Do we have the right depth? The `instL_r` derivation inherits typing from `ci.value`
at the empty context. The HTS depth of `ci.value.instL ls₁` and `ci.value.instL ls₂`
might be the same as or less than the HTS depth of `.const c ls₁`.

Actually, from `HasTypeStratified`:
```
.const c ls₁ :! ci.type.instL ls₁ !! n+1
```
requires `ci.type.instL ls₁ : .sort u !! n`. The typing of `ci.value.instL ls₁`
should also be at depth ≤ n (since ci.value is typed at ci.type).

So `forallE_inv_{<n}` from the bundle IH should suffice (provided we can produce
the HTS witnesses).

**Remaining issue:** We need HTS witnesses for `ci.value.instL ls₁` and
`ci.value.instL ls₂`. These come from the env well-formedness: `ci.value` has type
`ci.type`, and by stratification, there exists some depth. But we need the depth to
be < n.

Concretely, from `HasTypeStratified Γ (.const c ls₁) V true n₁`:
- If `n₁ = 0`: must be `base(const ...)`. The `const` constructor gives
  `HasTypeStratified [] (ci.type.instL ls₁) (.sort u) true n₁'` for some `n₁' < n₁`.
  But wait, `n₁ = 0` can't be `const` (which produces `n+1`). So `n₁ = 0` must be
  `base` or `defeq` wrapping... Actually with `b = true`, HTS at depth 0 can be
  `base(sort')` or `base(const ...)` etc.

This depth tracking gets complicated. The key point: the HTS depth of `ci.value.instL ls₁`
should be extractable from the HTS of `.const c ls₁`, and it should be < n₁ ≤ n.
So `forallE_inv_{<n}` applies.

### Alternative for constDF: Use instL_inv to factor, then instL_r on components

With `ForallELikeWith.instL_inv`:
- `ci.value →_WH* .forallE C D`
- `A = C.instL ls₁`, `B = D.instL ls₁`, `A' = C.instL ls₂`, `B' = D.instL ls₂`

We need `C.instL ls₁ ≡ C.instL ls₂`. If we can show `C` is well-typed at some
sort, then `instL_r` on `C ≡ C : sort_u` gives `C.instL ls₁ ≡ C.instL ls₂`.

For `C` to be well-typed: `ci.value` is well-typed (closed, from env WF). WHNF
preserves typing (subject reduction). So all intermediate terms in the WHStep chain
are well-typed. In particular, `C` (the domain of the forallE that ci.value reduces to)
is well-typed.

But we need FORMAL subject reduction for WHStep, which we don't have (it requires
`pat_wf`).

**Conclusion:** The constDF case fundamentally requires either:
1. Subject reduction for WHSteps (needs `pat_wf`)
2. Using `forallE_inv_{<n}` from the bundle IH on the `instL_r` derivation
3. Adding a `ci.value` typing axiom to `InjectivityParams`

Option 2 seems most promising, as it doesn't require new axioms.

## Approach 2: Don't Generalize; Use Typed WHNF

Instead of the `ForallELikeWith` generalization, we could try:

Given `IsDefEqStrong (.forallE A B) e_mid V` (from trans, first sub-derivation):
- `.forallE A B` and `e_mid` have the same type `V`
- `.forallE A B : .sort (.imax u v)` (from forallE typing)
- So `e_mid : .sort (.imax u v)` (by subject reduction / hasType')
- `e_mid` has type `.sort (.imax u v)`, and `e_mid ≡ .forallE A' B'`

If `e_mid` WHNF-reduces to `.forallE A'' B''`, then we can apply `forallE_inv_{<n}`
to both:
- `.forallE A B ≡ e_mid` with `ForallELikeWith e_mid A'' B''`
- `e_mid ≡ .forallE A' B'` with `ForallELikeWith e_mid A'' B''`

But we need to know that `e_mid` is forallE-like. This is exactly what ForallELike
preservation gives us. So we're back to Approach 1.

## Summary

The constDF case of the generalized forallE_inv is the hardest part. The most
viable approach uses `forallE_inv_{<n}` from the bundle IH on a new derivation
constructed via `instL_r`, avoiding the need for subject reduction of WHSteps.

### Required pieces:
1. `ForallELikeWith.instL_inv` — see DETAIL_instL_inv.md
2. `ForallELikeWith.unique` — from WHStep determinism
3. `WHSteps.instL` — already proven
4. `IsDefEq.instL_r` — already proven in Strong.lean
5. `forallE_inv_{<n}` from bundle IH — needs appropriate depth

### Key risk:
Getting the HTS depth bounds right for the `instL_r` derivation. The `ci.value`
typing must have HTS at depth < n (where n is the current bundle level).

Alternatively: if extracting HTS witnesses at the right depth is too hard, we could
add `pat_wf` (or a restricted form) to `InjectivityParams`, which would give subject
reduction for WHSteps and allow the `instL_inv + instL_r on components` approach.

## Risk Assessment: HIGH

Multiple interacting pieces, depth bound management, and the potential need for
additional `InjectivityParams` axioms make this the highest-risk component.
