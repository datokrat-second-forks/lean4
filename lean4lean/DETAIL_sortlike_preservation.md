# Detail: SortLike/ForallELike Preservation Through IsDefEqStrong

## Goal

```lean
-- Preservation of SortLike through definitional equality
theorem IsDefEqStrong.sortLike_preserved
    (H : env.IsDefEqStrong U Γ e₁ e₂ A)
    (hs : SortLikeWith e₁ l) :
    ∃ l', SortLikeWith e₂ l'

-- Preservation of ForallELike through definitional equality
theorem IsDefEqStrong.forallELike_preserved
    (H : env.IsDefEqStrong U Γ e₁ e₂ A)
    (hf : ForallELikeWith e₁ C D) :
    ∃ C' D', ForallELikeWith e₂ C' D'
```

These are proved at depth n within the stratified bundle, using `uniq_n` and
`sort_forallE_inv_{<n}` from the IH.

## Why This Is Needed

The trans case of both `sort_forallE_inv` and `forallE_inv` requires knowing that
WHNF head form is preserved through `IsDefEqStrong`. Without this, the middle
expression `e_mid` in `e₁ ≡ e_mid ≡ e₂` could have any head form.

## Proof by Structural Induction on IsDefEqStrong

For each of the 13 constructors of `IsDefEqStrong`, we show the forward direction
`SortLikeWith e₁ l → ∃ l', SortLikeWith e₂ l'`. The backward direction follows
by `symm` or by proving both directions simultaneously.

### Constructor: bvar

`e₁ = e₂ = .bvar i`. Forward: take `l' = l`. Trivial. ✓

### Constructor: symm

`H : e ≡ e' : A`. IH gives both directions. Apply backward direction. ✓

### Constructor: trans

`H₁ : e₁ ≡ e₂ : A`, `H₂ : e₂ ≡ e₃ : A`.
IH₁: `SortLikeWith e₁ l → ∃ l', SortLikeWith e₂ l'`.
IH₂: `SortLikeWith e₂ l' → ∃ l'', SortLikeWith e₃ l''`.
Compose. ✓

**This is the crucial case** — it works because `∃` composes transitively.

### Constructor: sortDF

`e₁ = .sort l₁`, `e₂ = .sort l₂`, `l₁ ≈ l₂`.
Forward: `SortLikeWith (.sort l₁) l` means `.sort l₁ →_WH* .sort l`. Since `.sort`
is WHNF (no WHStep applies), this is zero steps, so `l = l₁`. Take `l' = l₂`.
`SortLikeWith (.sort l₂) l₂` is `ReflTransGen.refl`. ✓

### Constructor: constDF

`e₁ = .const c ls₁`, `e₂ = .const c ls₂`, `ls₁ ≈ ls₂`.
Forward: `SortLikeWith (.const c ls₁) l` means `.const c ls₁ →_WH* .sort l`.

If zero steps: `.const c ls₁ = .sort l` — impossible (different constructors). ✗
So at least one step. The first step must be `extra` (beta requires app(lam..), appFn
requires app). So:
```
.const c ls₁ →_WH[extra] df.rhs.instL ls₁ →_WH* .sort l
```

Similarly, `.const c ls₂` has the same extra rule (same constant, same df):
```
.const c ls₂ →_WH[extra] df.rhs.instL ls₂
```

By `SortLikeWith.instL_inv` on the sub-chain `df.rhs.instL ls₁ →_WH* .sort l`:
```
∃ l₀, SortLikeWith df.rhs l₀ ∧ l = l₀.inst ls₁
```

By `WHSteps.instL` (forward, already proven) on `df.rhs →_WH* .sort l₀`:
```
df.rhs.instL ls₂ →_WH* (.sort l₀).instL ls₂ = .sort (l₀.inst ls₂)
```

So `SortLikeWith (.const c ls₂) (l₀.inst ls₂)` by prepending the extra step. ✓

**Dependencies:** `SortLikeWith.instL_inv` (sorry'd), `WHSteps.instL` (proven).

Wait — there's a subtlety. The extra step from `.const c ls₁` uses
`env.defeqs df` where `df.lhs.instL ls₁ = .const c ls₁`. But `df.lhs.instL` may
not equal `.const c` literally — it's `(.const c (VLevel.params df.uvars)).instL ls₁`.

Actually, for a defn-type SimplePattern, `df.lhs = .const c (VLevel.params df.uvars)`,
and `df.lhs.instL ls₁` uses the `ls₁` from `extra_pat`. But the `ls₁` in `constDF`
are the universe arguments of the constant `c`, not the `ls` parameter of `extra`.

The connection: `constDF` gives `.const c ls₁` with `ls₁.length = ci.uvars`.
And `env.defeqs df` with `df.lhs = .const c (VLevel.params df.uvars)`.
Then `df.lhs.instL ls₁ = .const c ((VLevel.params df.uvars).map (VLevel.inst ls₁)) = .const c ls₁`
(since `(.param i).inst ls₁ = ls₁[i]` and there are `df.uvars` params).

Actually this needs: `df.uvars = ci.uvars` and the level list management. But
`constDF` gives `ls₁.length = ci.uvars`, and the extra rule for constant `c`
has `df.uvars = ci.uvars` (from env well-formedness). This should work.

**Hmm, but not every constant has a delta rule.** `env.defeqs df` might not exist
for constant `c`. In that case, `.const c ls₁` is WHNF (no WHStep applies), so
`SortLikeWith (.const c ls₁) l` requires zero steps, giving `.const c ls₁ = .sort l`,
which is impossible. So `SortLikeWith (.const c ls₁) l` is False, and the forward
direction is vacuously true. ✓

Similarly `SortLikeWith (.const c ls₂) l` is False, so the backward direction is
also vacuously true. ✓

So constDF is actually fine either way:
- If `c` has no delta rule: both sides are vacuously not SortLike.
- If `c` has a delta rule: use instL_inv + forward instL as above.

### Constructor: appDF

`e₁ = .app f a`, `e₂ = .app f' a'`, type is `B.inst a`.
Forward: `SortLikeWith (.app f a) l`.

The first WHStep from `.app f a` can be:
- `beta` (if `f = .lam A body`): result is `body.inst a`
- `extra` (if `.app f a` matches a pattern): result is `df.rhs.instL ls`
- `appFn` (if `WHStep f f₀`): result is `.app f₀ a`

**This case is complex.** We have IH for the sub-derivations:
- `f ≡ f' : .forallE A B` (IH gives SortLike preservation for f↔f')
- `a ≡ a' : A` (IH gives SortLike preservation for a↔a')

But `SortLikeWith (.app f a) l` involves the WHNF of the application, which depends
on what `f` reduces to. The IH tells us about `f` and `f'` individually, but not
about `app f a` vs `app f' a'`.

**Key observation:** If `SortLikeWith (.app f a) l`, the WHNF chain involves reducing
`f` (via appFn), then applying beta when `f` reaches a lambda, etc. This is a sequence
of WHSteps that depends on the value of `f`, not just its type.

**This is tricky.** We can't just use the sub-derivation IH directly.

However, there's a simpler observation: **We don't need to handle appDF for our
use cases.** The preservation lemma is only used for `sort_forallE_inv` and
`forallE_inv`, where one side is syntactically `.sort` or `.forallE`. In the
`sort_forallE_inv` proof:

```
sort u ≡ forallE A B   →   SortLikeWith (sort u) u (trivially)
                        →   SortLikeWith (forallE A B) l' (by preservation)
                        →   contradiction with ForallELikeWith (forallE A B) A B
```

The IsDefEqStrong derivation's structure determines which cases we hit. For
`sort u ≡ forallE A B`, the possible constructors are: symm, trans, defeqDF,
and possibly the degenerate cases. `appDF` would require both sides to be `.app`,
which they're not (one is `.sort`, the other is `.forallE`).

**Wait, that's not right.** In the trans case, we have `sort u ≡ e_mid ≡ forallE A B`.
The first derivation `sort u ≡ e_mid` could have `e_mid` be anything, and the
sub-derivation for the second part `e_mid ≡ forallE A B` could use `appDF` if
`e_mid` is an `.app`.

So we DO need appDF in general. But in the trans case, we only need the EXISTENCE
of SortLikeWith for e_mid, and then the IH on the second sub-derivation handles
getting from e_mid to forallE A B.

**For appDF specifically:** `SortLikeWith (.app f a) l` and we need
`SortLikeWith (.app f' a') l'`.

One approach: Since we're proving existence (not equality of levels), we can be
more creative. Consider: `.app f a` and `.app f' a'` have the same type `B.inst a`.
If `SortLikeWith (.app f a) l`, then `.app f a` evaluates to `.sort l`. Then
`.sort l : B.inst a`. So `B.inst a ≡ .sort (.succ l)` by uniq.

Similarly, `.app f' a' : B.inst a'`. And from `appDF`, `B.inst a ≡ B.inst a' : .sort v`.
So `.app f' a' : B.inst a'` where `B.inst a' ≡ B.inst a ≡ .sort (.succ l)`.

But this doesn't directly give us `SortLikeWith (.app f' a') l'`. We'd need to
argue that any expression of type `.sort (.succ l)` (or equivalent) that is an
application must WHNF to a sort. This seems hard without more machinery.

**Better approach: Separate the statement.**

Instead of proving preservation for ALL IsDefEqStrong derivations, we only need it
for the constructors that can actually appear when one side is sort/forallE:

For `sort_forallE_inv` at the top level: `IsDefEqStrong Γ (.sort u) (.forallE A B) V`.
This can only be: symm, trans, defeqDF (not sortDF, constDF, appDF, lamDF, forallEDF,
beta, eta, extra — all have wrong head on at least one side). proofIrrel is possible
in principle but contradictory.

For the recursive call (trans sub-derivations): we need preservation for ARBITRARY
expressions. So appDF IS needed.

**The appDF approach:** Use the typing information.

If `SortLikeWith (.app f a) l`:
1. `.app f a →_WH* .sort l`
2. `.app f a : B.inst a` (from appDF typing)
3. By type preservation through WHSteps (needs a lemma): `.sort l : B.inst a`
4. Wait — type preservation through WHSteps is itself non-trivial.

**Alternative: Don't prove full preservation; prove a weaker version.**

Actually, I think the appDF case CAN be handled by using the IH on `f ≡ f'` to show
that `f` and `f'` have the same WHNF head form, then using `a ≡ a'` to relate the
beta-reduced results. But this requires a much more detailed analysis of the WHStep
chain through applications.

**Pragmatic approach for now:** Mark the appDF case as needing separate analysis
and focus on the cases that directly matter. If necessary, we can restructure the
proof to avoid needing full preservation.

Actually wait — re-reading the transcript more carefully:

> For appDF: SortLikeWith (.app f a) l means the WHNF chain from .app f a reaches .sort l.
> This chain goes through appFn steps (reducing f), then a beta step (when f reaches
> a lambda), then continues. The IH on f ≡ f' preserves the SortLike of f... no, that's
> about f itself, not app f a.

I think the right approach for appDF is:

The WHStep chain from `.app f a` to `.sort l` must at some point do a beta step
(since `.sort l` is not an app). So the chain looks like:
```
.app f a →_WH[appFn*] .app (.lam T body) a →_WH[beta] body.inst a →_WH* .sort l
```

The `appFn*` part reduces `f` to `.lam T body`. Similarly, we need to reduce `f'` to
some `.lam T' body'` and then show `body'.inst a' →_WH* .sort l'`.

From `f ≡ f' : .forallE A B` and `f →_WH* .lam T body`, by ForallELike preservation
on `f`: `ForallELikeWith f T body` ... no, that's not quite right. `f →_WH* .lam T body`
is "LamLikeWith", not ForallELikeWith.

Hmm, we'd need a "LamLikeWith" preservation lemma too. This is getting complicated.

**I think the cleaner solution is to not prove preservation as a standalone lemma,
but to fold it into the sort_forallE_inv proof directly.** In the sort_forallE_inv
proof, we only need preservation for expressions that are "sort-like" on one side and
"forallE-like" on the other, which constrains the possible IsDefEqStrong constructors
more tightly.

Actually, I think there's an even simpler approach: **prove sort_forallE_inv by strong
induction on the IsDefEqStrong derivation, without going through SortLike at all.**

### Revised Approach: Direct sort_forallE_inv

Instead of SortLike/ForallELike preservation as a standalone lemma, we prove:

```lean
theorem IsDefEqStrong.not_sort_forallE
    (H : env.IsDefEqStrong U Γ e₁ e₂ A)
    (hs : SortLikeWith e₁ l) (hf : ForallELikeWith e₂ C D) : False
```

By structural induction on H. The key cases:

- **trans:** `H₁ : e₁ ≡ e_mid : A`, `H₂ : e_mid ≡ e₂ : A`.
  We need to show `e_mid` is "sort-like" or "forallE-like" and derive a contradiction.

  Actually, this doesn't help — we're back to needing preservation.

### Final Assessment

The appDF case of full SortLike/ForallELike preservation is genuinely hard. There are
three options:

**Option 1:** Prove full preservation including appDF, using a detailed analysis of
WHStep chains through applications. This requires showing that if `f ≡ f'` and
`f →_WH* .lam T body`, then `f' →_WH* .lam T' body'` with `body.inst a` and
`body'.inst a'` having related WHNF. This is essentially a mini Church-Rosser for
applications.

**Option 2:** Prove preservation only for the cases that arise in the sort_forallE_inv
and forallE_inv proofs. Since the top-level expressions are sort/forallE (not app),
and we only encounter appDF in the recursive (trans) case, we may be able to avoid it
by tracking more carefully which constructors can appear.

**Option 3:** Prove a weaker form of preservation that suffices:
```lean
-- "SortLikeWith e₁ → ¬ForallELikeWith e₂" rather than
-- "SortLikeWith e₁ → SortLikeWith e₂"
theorem IsDefEqStrong.sortLike_not_forallELike
    (H : env.IsDefEqStrong U Γ e₁ e₂ A)
    (hs : SortLikeWith e₁ l) (hf : ForallELikeWith e₂ C D) : False
```

For the trans case: `e₁ ≡ e_mid ≡ e₂`. If SortLikeWith e₁ and ForallELikeWith e₂,
then either SortLikeWith e_mid (and IH₂ gives contradiction with ForallELikeWith e₂)
or ¬SortLikeWith e_mid. But how do we get SortLikeWith e_mid from SortLikeWith e₁?
We're back to preservation...

**Conclusion:** Option 1 (full preservation) seems necessary. The appDF case needs
careful work. Let me outline the approach:

For appDF with `SortLikeWith (.app f a) l`:
- `.app f a` has type `B.inst a` (from appDF)
- `.app f' a'` has type `B.inst a` (also from appDF, via defeq)
- Actually, from appDF: `Γ ⊢ .app f a ≡ .app f' a' : B.inst a`
- Both `.app f a` and `.app f' a'` have the same type `B.inst a`
- If we had **type preservation through WHSteps** (`.app f a →_WH* .sort l` and
  `.app f a : B.inst a` imply `.sort l : B.inst a`), then:
  - `.sort l : B.inst a`, so `B.inst a ≡ .sort (.succ l) : .sort (.succ (.succ l))` by uniq
  - `.app f' a' : B.inst a ≡ .sort (.succ l)`
  - Hmm, still doesn't give SortLikeWith for `.app f' a'`

This line of reasoning via types doesn't directly give SortLikeWith.

**Most promising for appDF:** Use `WHStep` on `.app f' a'` to "mirror" the reduction
of `.app f a`. If `f` reduces via appFn to reach a lambda, and `f ≡ f'`, then `f'`
also reaches a lambda (by a ForallELike → LamLike argument on the function type).
This is the approach from the transcript's `extra`/`appFn` constructors of the
`SortLike` predicate.

## Risk: HIGH for appDF case

The appDF case remains the highest-risk part of the preservation proof. It may require
introducing a `LamLikeWith` predicate and proving its preservation, creating a
three-way mutual preservation argument. This adds significant complexity.

## Recommendation

Start by proving all cases EXCEPT appDF, marking it sorry. Then assess whether the
appDF sorry is actually reachable in the sort_forallE_inv / forallE_inv proofs, or
whether it can be avoided by restructuring those proofs.
