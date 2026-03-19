# Detail: ForallELikeWith.instL_inv (Inverse Commutation with instL)

## Goal

```lean
theorem ForallELikeWith.instL_inv {e : VExpr}
    (h : ForallELikeWith (e.instL ls) A B) :
    ∃ C D, ForallELikeWith e C D ∧ A = C.instL ls ∧ B = D.instL ls
```

In words: if `e.instL ls` WHNF-reduces to `forallE A B`, then `e` itself WHNF-reduces
to some `forallE C D`, and `A = C.instL ls`, `B = D.instL ls`.

There is a symmetric version for `SortLikeWith`:

```lean
theorem SortLikeWith.instL_inv {e : VExpr}
    (h : SortLikeWith (e.instL ls) l) :
    ∃ l', SortLikeWith e l' ∧ l = VLevel.inst ls l'
```

## Why This Is Needed

This is used in the **constDF case** of both SortLike/ForallELike preservation and the
generalized forallE_inv. When we have `const c ls₁ ≡ const c ls₂` with `ls₁ ≈ ls₂`,
and both sides delta-unfold, we need to track the WHNF chain through the instL:

```
const c ls₁ →_WH ci.value.instL ls₁ →_WH* forallE A B
const c ls₂ →_WH ci.value.instL ls₂ →_WH* forallE A' B'
```

By instL_inv on the first chain (starting from ci.value):
```
ci.value →_WH* forallE C D,  A = C.instL ls₁,  B = D.instL ls₁
```

By the forward direction (WHSteps.instL, already proven):
```
ci.value.instL ls₂ →_WH* (forallE C D).instL ls₂ = forallE (C.instL ls₂) (D.instL ls₂)
```

By ForallELikeWith.unique: A' = C.instL ls₂, B' = D.instL ls₂.

Then `A ≡ A'` follows from `IsDefEq.instL_r` (Strong.lean line 700).

## Proof Structure

`ForallELikeWith (e.instL ls) A B` means `WHSteps (e.instL ls) (.forallE A B)`,
which is `ReflTransGen WHStep (e.instL ls) (.forallE A B)`.

We prove by induction on the `ReflTransGen` chain.

### Base case: zero steps

`e.instL ls = .forallE A B` (syntactic equality).

Since `instL` preserves the top-level constructor:
```lean
-- instL on each constructor:
-- (.bvar i).instL ls = .bvar i
-- (.sort u).instL ls = .sort (u.inst ls)
-- (.const c us).instL ls = .const c (us.map ...)
-- (.app f a).instL ls = .app (f.instL ls) (a.instL ls)
-- (.lam T b).instL ls = .lam (T.instL ls) (b.instL ls)
-- (.forallE T b).instL ls = .forallE (T.instL ls) (b.instL ls)
```

From `e.instL ls = .forallE A B`, we need `e` to be `.forallE C D` with
`C.instL ls = A` and `D.instL ls = B`.

**Case split on `e`:**
- `e = .bvar i`: `.bvar i ≠ .forallE A B`. ✗
- `e = .sort u`: `.sort (u.inst ls) ≠ .forallE A B`. ✗
- `e = .const c us`: `.const c (...) ≠ .forallE A B`. ✗
- `e = .app f a`: `.app (...) (...) ≠ .forallE A B`. ✗
- `e = .lam T b`: `.lam (...) (...) ≠ .forallE A B`. ✗
- `e = .forallE C D`: `.forallE (C.instL ls) (D.instL ls) = .forallE A B`.
  By injection: `A = C.instL ls`, `B = D.instL ls`. ✓

Take `C, D` directly. `ForallELikeWith e C D` is `ReflTransGen.refl`. ✓

### Step case: one or more steps

`e.instL ls →_WH e₁ →_WH* .forallE A B`

We have `WHStep (e.instL ls) e₁`. Case split on the WHStep constructor:

#### Sub-case: beta

```
WHStep (.app (.lam T' body') arg') (body'.inst arg')
```

So `e.instL ls = .app (.lam T' body') arg'`. Since instL preserves constructors:
`e = .app (.lam T body) arg` with:
- `T' = T.instL ls`
- `body' = body.instL ls`
- `arg' = arg.instL ls`

The result is `body'.inst arg' = (body.instL ls).inst (arg.instL ls)`.

By `instL_instN` (proven in VExpr.lean):
```lean
(body.inst arg).instL ls = (body.instL ls).inst (arg.instL ls)
```

So `e₁ = (body.inst arg).instL ls`.

Now we have `(body.inst arg).instL ls →_WH* .forallE A B`. Apply the IH
(on the remaining chain) to get:
```
∃ C D, ForallELikeWith (body.inst arg) C D ∧ A = C.instL ls ∧ B = D.instL ls
```

Then `ForallELikeWith e C D` follows by prepending the beta step:
`e = .app (.lam T body) arg →_WH body.inst arg →_WH* .forallE C D`. ✓

**Key dependency:** `instL_instN` (proven).

#### Sub-case: extra

```
WHStep (df.lhs.instL ls') (df.rhs.instL ls')
```

So `e.instL ls = df.lhs.instL ls'`. We need to find what `e` was, and show
`e` itself has a WHStep via extra (possibly with different levels).

**This is the most delicate sub-case.** We need to "un-instL" the pattern match.

By `pat_simple`, `df.lhs` is a `SimplePattern`:

**Case defn c:** `df.lhs = .const c (VLevel.params df.uvars)`.
```
df.lhs.instL ls' = .const c ((VLevel.params df.uvars).map (VLevel.inst ls'))
                  = .const c ls'     -- (assuming standard parameter form)
```
And `e.instL ls = .const c ls'`. Since instL on const gives
`.const c (us.map (VLevel.inst ls))`, we need:
```
e = .const c us  where  us.map (VLevel.inst ls) = ls'_concrete
```

But wait — `ls'` are the levels passed to instL, not the universe arguments of
the constant. Let me be more precise.

`df.lhs = .const c (List.map VLevel.param (List.range df.uvars))` (the generic
parameter form). Then:
```
df.lhs.instL ls' = .const c (ls'.take df.uvars)  -- or however params.map (inst ls') works
```

Actually, `VLevel.params n` produces `[.param 0, .param 1, ..., .param (n-1)]`, and
`(.param i).inst ls' = ls'[i]`. So `df.lhs.instL ls' = .const c (ls'.take df.uvars)`
(approximately — depends on exact definition of VLevel.params).

And `e.instL ls = .const c (...)`. Since `e` must be `.const c us` for some `us`:
`(.const c us).instL ls = .const c (us.map (VLevel.inst ls))`.

So `us.map (VLevel.inst ls) = (VLevel.params df.uvars).map (VLevel.inst ls')`.

This means: for each i < df.uvars, `(us[i]).inst ls = ls'[i]`.

Now, can we construct a WHStep from `e = .const c us`? We need `env.defeqs df`
(which we have) and `e = df.lhs.instL us_for_df` for some `us_for_df`.

We need: `(.const c us) = df.lhs.instL us_for_df = .const c (VLevel.params df.uvars).map (VLevel.inst us_for_df))`.
So we need `us = (VLevel.params df.uvars).map (VLevel.inst us_for_df)`,
i.e., `us[i] = us_for_df[i]` (since `(.param i).inst us_for_df = us_for_df[i]`).
Take `us_for_df = us` (assuming `us.length = df.uvars`).

Then: `e = .const c us = df.lhs.instL us` and `WHStep e (df.rhs.instL us)`.

The result of the original WHStep is `df.rhs.instL ls'`.
The result of our new WHStep is `df.rhs.instL us`.

Now `e₁ = df.rhs.instL ls'` and the remaining chain gives
`df.rhs.instL ls' →_WH* .forallE A B`.

We need to connect to `df.rhs.instL us` instead. By `instL_instL`:
```
(df.rhs.instL us).instL ls = df.rhs.instL (us.map (VLevel.inst ls))
```

And `us.map (VLevel.inst ls) = ls'_params` (from our constraint above).

Hmm, this is getting complicated. The issue is that `df.rhs.instL us` and
`df.rhs.instL ls'` are related by the level substitution, but not necessarily equal.

**Alternative approach: Use instL_instL directly.**

From `e.instL ls = df.lhs.instL ls'`, we know `e.instL ls` has a specific form.
We need to show `e` has a WHStep. Since `e = .const c us`:

Actually, the key insight is simpler. We have:
```
(e).instL ls = df.lhs.instL ls'
```

We DON'T need to factor through some `us_for_df`. We just need:
1. `e` has a WHStep to some `e'`
2. `e'.instL ls = e₁ = df.rhs.instL ls'` (or we can use IH on `e'` instead)

For (1): Since `e = .const c us` and `env.defeqs df` with `df.lhs` matching
const c, we get `WHStep (.const c us) (df.rhs.instL us)` (taking `us` as the level args).

For (2): We need `(df.rhs.instL us).instL ls = df.rhs.instL ls'`.
By instL_instL: `(df.rhs.instL us).instL ls = df.rhs.instL (us.map (VLevel.inst ls))`.
And from `(.const c us).instL ls = .const c (us.map (VLevel.inst ls)) = df.lhs.instL ls' = .const c ((VLevel.params df.uvars).map (VLevel.inst ls'))`:
`us.map (VLevel.inst ls) = (VLevel.params df.uvars).map (VLevel.inst ls')`.

So `(df.rhs.instL us).instL ls = df.rhs.instL ((VLevel.params df.uvars).map (VLevel.inst ls')) = (df.rhs.instL (VLevel.params df.uvars)).instL ls' = df.rhs.instL ls'`.

Wait, `df.rhs.instL (VLevel.params df.uvars) = df.rhs` when `df.rhs` only uses
params 0..df.uvars-1 (which is a well-formedness condition). So this simplifies to
`df.rhs.instL ls'`. ✓

Hmm, but we can't assume `df.rhs.instL (VLevel.params df.uvars) = df.rhs` without
a well-formedness condition. Let me use a different approach.

**Cleaner approach: Don't reconstruct the WHStep on `e`.**

Instead of trying to invert the single WHStep and build a matching one on `e`, we can
work directly with the chain:

From `e.instL ls →_WH e₁ →_WH* .forallE A B` via extra, we have
`e₁ = df.rhs.instL ls'` and the remaining chain gives the IH.

The question is: can we express `e₁` as `e'.instL ls` for some `e'`? If so, the IH
applies. If not, we need a different approach.

From the defn case: `e = .const c us`, `e₁ = df.rhs.instL ls'`.
Is `e₁ = (df.rhs.instL us).instL ls`? By instL_instL:
`(df.rhs.instL us).instL ls = df.rhs.instL (us.map (VLevel.inst ls))`.
And we showed `us.map (VLevel.inst ls)` = the appropriate levels from `ls'`.

This equals `df.rhs.instL ls'` if `(VLevel.params df.uvars).map (VLevel.inst ls') = us.map (VLevel.inst ls)`, which is exactly our constraint from the LHS matching.

So yes: `e₁ = (df.rhs.instL us).instL ls`. Define `e' := df.rhs.instL us`.
Then `e₁ = e'.instL ls`, and we can apply the IH to `e'.instL ls →_WH* .forallE A B`
to get `∃ C D, ForallELikeWith e' C D ∧ ...`.

Then `ForallELikeWith e C D` = prepend the extra step
`e = .const c us →_WH df.rhs.instL us = e' →_WH* .forallE C D`. ✓

**For the iota case:** `df.lhs = .app (varN (.const r) m) (varN (.const c_ctor) n)`.
Similar analysis. `e.instL ls = df.lhs.instL ls'` forces `e = .app f a` with specific
structure. The factoring through instL_instL works the same way.

### Summary of what's needed

The proof is by induction on the `ReflTransGen WHStep` chain. The key technical
ingredients are:

1. **instL preserves constructors** — trivial from definition
2. **`instL_instN`** — proven in VExpr.lean
3. **`instL_instL`** — proven in VExpr.lean
4. **Constructor injectivity for VExpr** — `.forallE A B = .forallE A' B' → A = A' ∧ B = B'`
5. **Factoring `e.instL ls = df.lhs.instL ls'`** — case split on SimplePattern form,
   use instL structure to decompose `e`, construct `e'` s.t. `e₁ = e'.instL ls`

The main difficulty is item (5), which requires careful manipulation of the level
substitution algebra. The underlying mathematical fact is simple (instL is functorial),
but formalizing the case analysis is ~50-80 lines.

## Risk Assessment: MEDIUM

The mathematical content is straightforward — instL commutes with everything in sight.
The risk is in the Lean formalization: managing the level substitution algebra and
the pattern matching case analysis. Each sub-case (beta, extra-defn, extra-iota, appFn)
is individually manageable, but the total is non-trivial.

The `instL_instL` identity `(e.instL ls).instL ls' = e.instL (ls.map (VLevel.inst ls'))`
does all the heavy lifting. We may also need:
- `VLevel.params` well-formedness / computation lemmas
- `instL_id` or similar (instL with identity params is the identity)

These should exist or be easy to prove.
