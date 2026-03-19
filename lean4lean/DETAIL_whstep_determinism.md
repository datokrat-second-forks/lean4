# Detail: WHStep Determinism

## Goal

Prove that `WHStep` is deterministic:

```lean
theorem WHStep.deterministic :
    WHStep e e₁ → WHStep e e₂ → e₁ = e₂
```

This is the foundation for `ForallELikeWith.unique` and `forallE_sort_disjoint`.

## WHStep Constructors (from WHNFStep.lean)

```lean
inductive WHStep : VExpr → VExpr → Prop where
  | beta : WHStep (.app (.lam A body) arg) (body.inst arg)
  | extra : env.defeqs df → (∀ l ∈ ls, l.WF univs) → ls.length = df.uvars →
            WHStep (df.lhs.instL ls) (df.rhs.instL ls)
  | appFn : WHStep f f' → WHStep (.app f a) (.app f' a)
```

## Case Matrix

We need to handle all pairs (step₁, step₂) where both apply to the same expression `e`:

| step₁ \ step₂ | beta | extra | appFn |
|---|---|---|---|
| **beta** | (1) trivial | (2) impossible | (3) impossible |
| **extra** | (2) impossible | (4) needs pat_det | (5) impossible |
| **appFn** | (3) impossible | (5) impossible | (6) inductive |

### Case 1: beta vs beta

Both steps: `e = .app (.lam A body) arg → body.inst arg`. Same source, same result. ✓

**Proof:** Both destructions of `e` force `A, body, arg` to be the same. Result is
`body.inst arg` in both cases.

### Case 2: beta vs extra — impossible

`beta` requires `e = .app (.lam A body) arg`.
`extra` requires `e = df.lhs.instL ls`.

By `pat_simple`, `df.lhs.instL ls` is one of:
- `.const c ls'` (from `SimplePattern.defn c`) — but `e` is `.app`, not `.const`. ✗
- `.app (VExpr.varN (.const r) m) (VExpr.varN (.const c) n)` (from `SimplePattern.iota`)
  — here the function is `VExpr.varN (.const r) m`, which is a chain of applications
  starting from `.const r`. In particular, the outermost function of `e` would be
  `VExpr.varN (.const r) m`, NOT `.lam A body`.

  More precisely: `.app (.lam A body) arg = .app (varN (.const r) m) (varN (.const c) n)`.
  So `.lam A body = VExpr.varN (.const r) m`. But `varN` builds nested `.app` expressions
  (or is `.const r` when m = 0). In no case is it `.lam`. Contradiction. ✓

**What we need:** This relies on the structure of `SimplePattern.toPattern` and `VExpr.varN`.
Let me check what `varN` is:

```lean
-- From Pattern.lean or similar:
def VExpr.varN : VExpr → Nat → VExpr
  | e, 0 => e
  | e, n+1 => .app (VExpr.varN e n) (.bvar n)  -- or similar
```

So `varN (.const r) m` is:
- m=0: `.const r`
- m=1: `.app (.const r) (.bvar 0)`
- m=2: `.app (.app (.const r) (.bvar 0)) (.bvar 1)`

None of these are `.lam`. The key structural fact: **varN always produces const or app,
never lam**. This should be a simple lemma.

### Case 3: beta vs appFn — impossible

`beta` requires `e = .app (.lam A body) arg`, so the function part is `.lam A body`.
`appFn` requires `e = .app f a` with `WHStep f f'`, i.e., `f` has a WHStep.

So we need `WHStep (.lam A body) f'` for some `f'`. But:
- `beta` requires `.app (.lam ..) ..`, not `.lam`
- `extra` requires pattern LHS, which is const/app-headed
- `appFn` requires `.app f a`, not `.lam`

So **no WHStep applies to `.lam`**. This is the `not_lam` lemma (should exist or be
easy to prove from `lam_not_pat_lhs`).

**Proof sketch:**
```lean
theorem WHStep.not_lam : ¬WHStep (.lam A body) e' := by
  intro h; cases h with
  | beta => -- .lam A body = .app (.lam ..) .., but .lam ≠ .app
    exact absurd rfl (by simp [VExpr.noConfusion])
  | extra hdf hls hlen =>
    exact lam_not_pat_lhs hdf hls hlen rfl
  | appFn => -- .lam A body = .app f a, but .lam ≠ .app
    exact absurd rfl (by simp [VExpr.noConfusion])
```

### Case 4: extra vs extra — needs new axiom

Two extra rules match the same expression:
```
env.defeqs df₁, df₁.lhs.instL ls₁ = e = df₂.lhs.instL ls₂
```
Need: `df₁.rhs.instL ls₁ = df₂.rhs.instL ls₂`.

This requires a new axiom in `InjectivityParams`. There are two design options:

#### Option A: Direct `pat_det`

```lean
class InjectivityParams where
  ...
  pat_det : env.defeqs df₁ → env.defeqs df₂ →
    (∀ l ∈ ls₁, l.WF univs) → (∀ l ∈ ls₂, l.WF univs) →
    ls₁.length = df₁.uvars → ls₂.length = df₂.uvars →
    df₁.lhs.instL ls₁ = df₂.lhs.instL ls₂ →
    df₁.rhs.instL ls₁ = df₂.rhs.instL ls₂
```

**Informal justification that this is satisfiable:** By `pat_simple`, both patterns are
`SimplePattern`. If both are `defn`:
- `(.const c₁ (params.map (VLevel.inst ls₁))) = (.const c₂ (params.map (VLevel.inst ls₂)))`
- By const injection: `c₁ = c₂` and levels match
- Same constant name → same `VDefEq` in `env.defeqs` (env well-formedness ensures
  at most one reduction rule per constant head)
- Same VDefEq + matching levels → same RHS

If one is `defn` and other is `iota`: `const ≠ app`, impossible.

If both are `iota`:
- Both match `app (varN (const r₁) m₁) (varN (const c₁) n₁)` = same expression
- Injecting: same recursor `r₁ = r₂`, etc.
- Same recursor + constructor → same reduction rule → same RHS

#### Option B: Reuse existing `pat_uniq` from ChurchRosser params

```lean
  pat_uniq : Pat p₁ r → Pat p₂ r' → Subpattern p₃ p₁ → p₂.inter p₃ = some p₄ →
    p₁ = p₂ ∧ p₂ = p₃ ∧ r ≍ r'
```

This is more powerful but requires importing Pattern and its Subpattern/inter machinery.

**Recommendation:** Option A is simpler and sufficient for our needs. The informal
justification is straightforward: two `SimplePattern`s that match the same expression
must be the same pattern, and the same pattern with the same matching gives the same RHS.

Actually, even simpler: we can use `extra_pat` which already connects `env.defeqs` to `Pat`,
combined with a simpler form of uniqueness:

```lean
  pat_det_simple : Pat p₁ r₁ → Pat p₂ r₂ →
    p₁.Matches e m₁ m₂ → p₂.Matches e m₃ m₄ →
    r₁.1.apply m₁ m₂ = r₂.1.apply m₃ m₄
```

This says: if two patterns both match expression `e`, their applied RHS are equal.
Combined with `extra_pat` (which connects `env.defeqs` to `Pat` + `Matches`), this
gives us `pat_det`.

### Case 5: extra vs appFn — impossible

`extra` requires `e = df.lhs.instL ls`. By `pat_simple`, this is `const`-headed or
a specific `app` pattern.

`appFn` requires `e = .app f a` with `WHStep f f'`.

If `df.lhs.instL ls = .const c ls'`: `e` is `.const`, not `.app`. No `appFn`. ✓

If `df.lhs.instL ls = .app (varN (.const r) m) (varN (.const c) n)`:
`e` is `.app f a` where `f = varN (.const r) m`. We need `WHStep f f'`.

`varN (.const r) m` is:
- m=0: `.const r []` (or with params) — no WHStep from const (by not_const: const
  is not beta, not appFn since not .app (when m=0), and const_not_pat_lhs handles extra)

  Wait — can a const have a WHStep via extra? Yes! `const c ls` could be `df.lhs.instL ls`
  for a `defn c` pattern. So `WHStep (.const c ls) (df.rhs.instL ls)` is possible.

  But then `appFn` gives `WHStep (.app (.const c ls) a) (.app (df.rhs.instL ls) a)`,
  while `extra` gives the iota reduction of the full application. These are different
  reductions of the same expression — this IS a real overlap!

**This is the critical case.** We need: if `e = .app f a` and `extra` matches the whole
`e`, then `appFn` (reducing `f` alone) gives the same result.

Actually NO — the two results are DIFFERENT:
- `extra` on `e`: replaces the whole `app (varN (const r) m) (varN (const c) n)` with
  `r.1.apply m1 m2`
- `appFn` on `e`: replaces just `f = varN (const r) m` with some `f'`, giving
  `.app f' a`

These are different expressions. So WHStep is NOT deterministic in this case??

Wait, let me reconsider. Can both actually fire on the same expression?

The `extra` rule requires `e = df.lhs.instL ls` where `df.lhs` is an iota pattern:
`app (varN (const r) m) (varN (const c) n)`. After instL:
`e = .app (varN (.const r ls_r) m) (varN (.const c ls_c) n)`.

The `appFn` rule requires `WHStep f f'` where `f = varN (.const r ls_r) m`.

For `WHStep f f'`, what could `f = varN (.const r ls_r) m` step to?

If m=0: f = .const r ls_r. WHStep via extra (defn pattern for `r`) is possible if
`r` has a delta rule. Then `f' = defn_rhs`.

If m≥1: f = .app (varN (.const r ls_r) (m-1)) (.bvar (m-1)).
WHStep via extra is possible if there's an iota pattern matching `f`.
WHStep via appFn is possible if `varN (.const r ls_r) (m-1)` has a step.

**Key question: Can a sub-expression of an iota pattern LHS have its own reduction rule?**

The `pat_app_l` field of `Params` says:
```lean
pat_app_l : Pat p r → Subpattern (.app p₁ p₂) p → ¬Subpattern (.app p₃ p₄) p₁
```

This says: if a pattern contains `.app p₁ p₂`, then `p₁` contains no further `.app`.
This means `p₁` is either `.var` or `.const`. A `.const` has no sub-patterns, so
`varN (const r) m` with m≥1 can't be a pattern LHS.

But can `varN (const r) m` with m=0 (i.e., just `.const r ls_r`) be a pattern LHS?
That would be a `defn r` pattern. The `pat_app_l_uniq` and `pat_app_uniq` fields
in `Params` handle the overlap between an iota pattern and a defn pattern on its head.

Specifically, `pat_app_l_uniq` says:
```lean
pat_app_l_uniq : Pat p r → Pat p' r' → Subpattern (.app p₁ p₂) p →
    Subpattern (.app p₁' p₂') p' → Subpattern (.var p₃) p₁ → p₁'.inter p₃ = none
```

This prevents the function position of one pattern from overlapping with another pattern.

**So we need additional axioms in `InjectivityParams` to rule out this overlap.**

### Required additions to InjectivityParams

To handle case 5, we need the function position of an iota pattern to be irreducible
(no extra rule matches it). The simplest formulation:

```lean
  -- No WHStep applies to the function position of a pattern's app subpattern
  pat_head_irreducible :
    Pat p r → p.Matches (df.lhs.instL ls) m1 m2 →
    env.defeqs df' → (∀ l ∈ ls', l.WF univs) → ls'.length = df'.uvars →
    ¬∃ f a, df.lhs.instL ls = .app f a ∧ df'.lhs.instL ls' = f
```

Or more directly, for the specific WHStep overlap:

```lean
  -- If an extra rule matches .app f a, then f has no WHStep
  pat_app_no_fn_step :
    env.defeqs df → (∀ l ∈ ls, l.WF univs) → ls.length = df.uvars →
    df.lhs.instL ls = .app f a →
    ¬WHStep f f'
```

But this creates a circular reference (WHStep uses InjectivityParams). Instead:

```lean
  -- If an extra rule matches .app f a, then f is not the LHS of any extra rule
  pat_app_fn_not_extra :
    env.defeqs df → (∀ l ∈ ls, l.WF univs) → ls.length = df.uvars →
    df.lhs.instL ls = .app f a →
    env.defeqs df' → (∀ l ∈ ls', l.WF univs) → ls'.length = df'.uvars →
    df'.lhs.instL ls' ≠ f
```

Combined with cases 2 and 3 (beta and appFn don't apply to const or non-app-headed
varN), this would suffice.

**Informal justification:** In Lean's type theory, iota rules have the form
`RecName ... (ConName ...) → rhs`. The recursor `RecName` is never itself a reducible
definition. This is a well-formedness invariant of the environment.

### Alternative: Restrict WHStep to avoid the problem

Instead of adding axioms, we could define WHStep to only allow `extra` when no `appFn`
is possible (or vice versa). But this complicates the definition and makes instL
commutation harder.

## Summary of Required Changes

1. **Add to `InjectivityParams`:**
   - `pat_det_simple`: Two patterns matching same expression give same RHS
   - `pat_app_fn_not_extra`: Function position of pattern LHS is irreducible

2. **Prove in `WHNFStep.lean`:**
   - `WHStep.not_lam`: No WHStep from `.lam`
   - `WHStep.deterministic`: Main determinism theorem (6 cases above)

3. **Derive:**
   - `ForallELikeWith.unique`: From determinism + both chains end at forallE
   - `forallE_sort_disjoint`: From determinism + sort ≠ forallE

## Estimated difficulty: MEDIUM

The case analysis is tedious but straightforward. The main risk is getting the
`InjectivityParams` axioms right — they need to be both (a) satisfiable by the actual
Lean environment and (b) sufficient for the proof. The `Params` class in ChurchRosser.lean
has fields `pat_app_l`, `pat_app_l_uniq`, `pat_app_uniq` that serve exactly this role,
so we know the axioms are satisfiable.
