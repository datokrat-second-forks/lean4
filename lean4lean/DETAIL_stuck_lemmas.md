# Detail: WHNFStep Stuck Lemmas

## Goal

Prove three lemmas in WHNFStep.lean (lines 219-232) that establish sub-expressions
of a pattern LHS cannot take any WHStep.

## 1. extra_app_arg_stuck (line 221)

```lean
theorem extra_app_arg_stuck (hdf : env.defeqs df) (hlen : ls.length = df.uvars)
    (hlhs : df.lhs.instL ls = .app f a) : ∀ {e'}, ¬WHStep a e'
```

**Proof sketch**: By `pat_simple` + `extra_pat`, the pattern matching `df.lhs.instL ls`
is `SimplePattern.iota r m c n`. The `toPattern` is `.app (.varN (.const r) m) (.varN (.const c) n)`.
The argument part matches `.varN (.const c) n`, so `a` is of the form
`.app (... (.const c ls_c) ...) a_n` — a partially applied constructor.

A constructor application can't take WHStep:
- Not beta (no lam head)
- Not extra (constructors aren't pattern LHS heads — by `pat_uniq` / `pat_app_uniq`)
- Not appFn (recursive: inner const is stuck)
- Not major (same reasoning — inner const isn't a major premise, it's a constructor)

This requires showing that `varN_const` matching produces a const-headed application tower,
and that const-headed application towers are WHStep-stuck. The const head itself is stuck
because it's a constructor (not a definition head), which follows from `pat_app_uniq` or
similar pattern disjointness properties.

## 2. extra_app_fn_stuck (line 230)

```lean
theorem extra_app_fn_stuck (hdf : env.defeqs df) (hlen : ls.length = df.uvars)
    (hlhs : df.lhs.instL ls = .app f a) : ∀ {e'}, ¬WHStep f e'
```

**Proof sketch**: By `pat_simple`, `f` matches `.varN (.const r) m`, so `f` is
a partially applied recursor: `.app (... (.const r ls_r) ...) a_m`.

By induction on WHStep:
- beta: impossible (head is const, not lam)
- extra: `f` = `df'.lhs.instL ls'` for some df'. But `extra_app_fn_not_extra` (already proved)
  says the function part of an iota LHS can't be another pattern LHS.
- appFn: recursive case — the inner function takes a step. But the inner function is
  also a varN(.const r) prefix (one fewer arg), so recurse.
- major: `IsMajorPremise` of the inner function. Need to show this is impossible for
  a varN(.const r) prefix — the const is a recursor, not a partial application of a
  pattern. Use `pat_app_l_uniq` to show the inner prefix can't be a major premise
  because the recursor pattern only has one decomposition.

The key helpers needed:
- `varN_const_matches_structure`: if `(.varN (.const c) m).Matches e m1 m2`, then
  `e` is a chain of applications with `.const c ls` at the base.
- The induction is on the depth of `varN` (the number `m`).

## 3. WHIsMajorPremise.no_step (line 224)

```lean
theorem WHIsMajorPremise.no_step (hm : WHIsMajorPremise f) : ∀ {e'}, ¬WHStep f e'
```

**Proof sketch**: `WHIsMajorPremise f` gives us a pattern `p` with `Pat p r`,
a decomposition `Subpattern (.app p₁ p₂) p`, and `p₁.Matches f m1 m2`.

By `pat_simple`: `p = sp.toPattern` for some `SimplePattern.iota r m c n`.
The `Subpattern (.app p₁ p₂) p` must decompose into the app structure of the iota pattern.
So `p₁` is a prefix of `.varN (.const r) m` and `f` matches it.

Then `f` is a partially-applied recursor prefix. By the same argument as
`extra_app_fn_stuck`, it can't take any WHStep.

## Risk Assessment

**Medium**. The proofs are conceptual clear but require careful structural analysis of
`varN`/`Subpattern` matching. The main risk is that helper lemmas about `varN` matching
structure may not exist yet and need to be proved first.

## Prerequisites

- `varN_const_matches_structure` or equivalent (may need to be added to Pattern.lean)
- `pat_app_l_uniq`, `pat_app_uniq` from InjectivityParams (already available)
- `extra_app_fn_not_extra` (already proved in HeadReduction.lean)
