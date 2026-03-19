# Transcript: Injectivity Proof Strategy Discussion

This transcript captures the key design discussion about proving `forallE_inv_cross`,
`sort_forallE_inv`, and the stratified bundle in `Injectivity.lean`.

## Informal analysis of forallE_inv_cross

**Goal:** From `IsDefEqStrong (.forallE A B) (.forallE A' B') V`, extract `A ≡ A'` and `B ≡ B'`.

### Case-by-case analysis (14 constructors):

| Constructor | Can produce forallE ≡ forallE? | Handling |
|---|---|---|
| bvar, sortDF, constDF, appDF, lamDF | No (wrong head) | nomatch |
| forallEDF | Yes — directly A ≡ A', B ≡ B' | Trivial |
| symm | Yes — swap and apply IH | Easy |
| defeqDF | Yes — type changes, expressions stay same | Recurse |
| beta | No — LHS is app (lam ...), never forallE | nomatch |
| eta | No — LHS is lam ..., never forallE | nomatch |
| extra | No — both sides headed by constants (pat_simple) | Show contradiction |
| proofIrrel | Possible in principle, but... | Derive contradiction |
| trans | Yes | THE HARD CASE |

### The proofIrrel case is impossible

proofIrrel requires both sides to be proofs of `p : sort 0`. But `forallE A B : sort (imax u v)`.
If `forallE A B : p` too, then by `uniq_n`: `sort (imax u v) ≡ p`. Since `p : sort 0`, we get
`sort (imax u v) : sort 0` (via defeq). But `sort (imax u v) : sort (succ (imax u v))`. By
`uniq_n` again: `sort 0 ≡ sort (succ (imax u v))`. By `sort_inv_n`: `0 ≈ succ (imax u v)`.
This is impossible since `succ ≥ 1 > 0`.

So proofIrrel for two forallE expressions is a contradiction. We have `sort_inv_n` and `uniq_n`
to prove this.

### The trans case is the fundamental blocker

`trans H1 H2` gives: `forallE A B ≡ e₂ ≡ forallE A' B' : V` where `e₂` is arbitrary.

The IH gives us cross-equivalence for both sub-derivations, BUT only when BOTH sides of each
sub-derivation are forallE. We don't know `e₂` is a forallE.

Can we prove `e₂` must be a forallE? **No** — beta reduction can create a forallE from a
non-forallE:

```
app (lam A (.forallE (.bvar 0) (.bvar 1))) Nat  ≡  forallE Nat (bvar 0)
```

LHS is app, RHS is forallE. And symm can swap sides. So "forallE on one side implies forallE
on the other" is false.

This means the generalized-statement approach doesn't work for trans, and this is why
`forallE_inv'` only proves self-equivalence (it only needs ONE side to be forallE, avoiding
the trans problem).

### Assessment

Without Church-Rosser (which is unavailable due to circular imports: CR depends on UniqueTyping
which depends on Injectivity), `forallE_inv_cross` cannot be proven by structural induction on
`IsDefEqStrong` alone.

The standard metatheory always uses confluence/CR for injectivity of type formers. The question
is whether there's a way around it in this specific codebase.

## Informal analysis of sort_forallE_inv

**Goal:** `.sort u ≢ .forallE A B`

Same structural analysis. Same trans case problem: `.sort u ≡ e₂ ≡ .forallE A B` where `e₂`
is arbitrary.

BUT — there's a level argument: `.sort u : sort (succ u)` and `.forallE A B : sort (imax u' v')`.
If they're defeq, by `uniq_n`: `sort (succ u) ≡ sort (imax u' v')`. By `sort_inv_n`:
`succ u ≈ imax u' v'`.

Is `succ u ≈ imax u' v'` always satisfiable? Yes: e.g., `u = 0, u' = 1, v' = 1` gives
`succ 0 = 1 = imax 1 1`. So the level argument alone doesn't give a contradiction.

Same blocker as `forallE_inv_cross`: needs CR or a restricted form of it.

## Conclusion

Both remaining sorries are blocked by the same fundamental issue: the trans case of
`IsDefEqStrong` structural induction cannot handle the case where the middle expression
changes form (via beta/eta), and Church-Rosser (which resolves this) is unavailable due
to circular imports.

## The Solution: WHNF Head Form Preservation

The key insight: define `SortLike` and `ForallELike` predicates that track "WHNF-reduces to
a sort/forallE":

```lean
inductive SortLike : VExpr → Prop where
  | sort : SortLike (.sort l)
  | beta : SortLike (body.inst arg) → SortLike (.app (.lam A body) arg)
  | extra : <pattern match step> → SortLike rhs → SortLike lhs
  | appFn : SortLike (.app f' a) → <f reduces to f'> → SortLike (.app f a)
```

(Similarly `ForallELike`.) These capture "the expression eventually WHNF-reduces to the given
head form."

### Three lemmas that make everything work:

**Lemma 1 (Disjointness):** `¬(SortLike e ∧ ForallELike e)`.

Proof: By induction on SortLike. If `e = sort l`, then `ForallELike (sort l)` is impossible
(sort is WHNF, not forallE). If via beta, recurse on `body.inst arg`. WHNF is deterministic,
so the same expression can't reduce to both sort and forallE.

**Lemma 2 (SortLike preservation):** `IsDefEqStrong e₁ e₂ V → (SortLike e₁ ↔ SortLike e₂)`.

Proof by structural induction on IsDefEqStrong:
- **trans:** Compose IH₁ (`SortLike e₁ ↔ SortLike e_mid`) and IH₂
  (`SortLike e_mid ↔ SortLike e₂`). This is the crucial case — it works because `↔` is
  transitive!
- **beta:** `SortLike(app (lam A body) arg) ↔ SortLike(body.inst arg)` — directly from the
  beta constructor of SortLike.
- **eta:** LHS = lam → SortLike(lam) = false. Need SortLike(f) = false. If SortLike(f) were
  true, then f WHNF-reduces to sort l, so sort l : forallE A B (by type preservation). By
  uniq_n: forallE A B ≡ sort (succ l). By sort_forallE_inv_{<n} (from stratified bundle IH):
  contradiction.
- **proofIrrel:** If SortLike(h), then sort l : p where p : sort 0. By uniq: p ≡ sort (succ l),
  then sort 0 ≡ sort (succ (succ l)), then sort_inv gives 0 ≈ succ (succ l) — impossible.
- All others: Either vacuously true (wrong head constructor) or handled by IH.

**Lemma 3 (ForallELike preservation):** Same argument, symmetric.

### How these feed into the stratified bundle:

At depth n:
1. `sort_inv_n` — proven using IH (already partially done)
2. `uniq_n` — proven using `sort_inv_n` + `forallE_inv_{<n}` (follow UniqueTyping.lean pattern)
3. SortLike/ForallELike preservation — using `uniq_n` + `sort_forallE_inv_{<n}`
4. `sort_forallE_inv_n` — immediate from Lemma 2 + Lemma 1: if `sort u ≡ forallE A B`, then
   `SortLike(sort u) ↔ SortLike(forallE A B)`, i.e., `true ↔ false`, contradiction.
5. `forallE_inv_n` — using ForallELike preservation for the trans case: ForallELike(e_mid)
   is established, then the generalized IH (over ForallELike expressions, not just syntactic
   forallE) threads the component equalities through.

The circularity is broken: the eta case of step 3 at depth n uses `sort_forallE_inv_{<n}`
from the bundle IH. And the HTS depth from `uniq_n` is n-1, which is < n.

## The constDF case of forallE_inv (highest-risk)

### The problem

The generalized `forallE_inv` states: if `IsDefEqStrong e₁ e₂ V` and both sides
"WHNF-reduce to forallE" with components `(A,B)` and `(A',B')`, then `A ≡ A'` and `B ≡ B'`.

For the `constDF` constructor: `const c ls ≡ const c ls' : ci.type.instL ls` with `ls ≈ ls'`.

Both sides delta-unfold to `ci.value.instL ls` and `ci.value.instL ls'`, then WHNF-reduce
further (beta, more delta) to `forallE A B` and `forallE A' B'`. We need `A ≡ A'`.

The constDF sub-derivation is about the **type** (`ci.type.instL ls ≡ ci.type.instL ls'`),
not the value. So the structural IH gives nothing about the value's components. We need an
independent argument.

### Why this is hard

The natural argument is: "since `ls ≈ ls'`, the values `ci.value.instL ls` and
`ci.value.instL ls'` are level-equivalent, so their WHNFs have level-equivalent components."

Formalizing "level-equivalent components" requires two things:

1. **WHNF commutes with instL:** if `e.instL ls →_WH* forallE A B`, then there exist `C, D`
   with `e →_WH* forallE C D` and `A = C.instL ls`, `B = D.instL ls`.
2. **WHNF is unique (confluence):** if `e →_WH* forallE C₁ D₁` and `e →_WH* forallE C₂ D₂`,
   then `C₁ = C₂` and `D₁ = D₂`.

With both: from `ci.value →_WH* forallE C D` (unique), `A = C.instL ls`, `A' = C.instL ls'`.
Then `A ≡ A'` by `instL_r` (which exists in Strong.lean).

### Concrete pieces needed

**Piece 1: WHStep relation (~30 lines)** — DONE in WHNFStep.lean

**Piece 2: WHStep commutes with instL (~40 lines)** — DONE in WHNFStep.lean

**Piece 3: WHStep inverse commutation with instL (~50 lines)** — sorry'd in WHNFStep.lean

Lemma: If `e.instL ls →_WH* forallE A B`, then `∃ C D, e →_WH* forallE C D ∧ A = C.instL ls
∧ B = D.instL ls`.

Proof by induction on the WHSteps chain:
- **Zero steps:** `e.instL ls = forallE A B`. Since instL preserves constructors,
  `e = forallE C D` with `C.instL ls = A`, `D.instL ls = B`. Take C, D directly.
- **One+ steps:** `e.instL ls →_WH e₁ →_WH* forallE A B`. Case split on the first step:
  - **beta:** Reconstruct on `e` using inst/instL commutation.
  - **extra:** Use `instL_instL`.
  - **appFn:** Reconstruct.

**Piece 4: WHNF uniqueness / confluence (~150 lines)** — sorry'd in WHNFStep.lean

Needed: WHStep determinism. Cases:
- beta vs beta: same result (trivial)
- beta vs extra: no overlap (`forallE/sort/lam` can't be pattern LHS — proven)
- beta vs appFn: no overlap (lam has no WHStep)
- extra vs extra: same result (needs `pat_uniq` from `InjectivityParams`)
- extra vs appFn: no overlap (needs pattern heads to be irreducible)
- appFn vs appFn: determinism of sub-step (inductive)

### Risk assessment

| Piece | Risk | Reason |
|---|---|---|
| WHStep definition | Low | Straightforward |
| WHStep ↔ instL commutation | Low-Medium | Needs inst/instL commutation lemma |
| WHStep inverse commutation | Medium | Technical induction, instL inversions |
| ParRed diamond (beta cases) | Low | Standard argument, no critical points |
| ParRed diamond (extra cases) | **HIGH** | Needs pat_uniq or equivalent |
| ForallELike preservation | Medium | Needs `sort_forallE_inv_{<n}` for eta case |
| constDF case assembly | Medium | Composing all pieces |

### Decision: Option (B) — Move pat_uniq earlier

Rather than proving a restricted bootstrap CR (option A) or accepting sorries (option C),
we chose option (B): move `pat_uniq`-equivalent axioms into `InjectivityParams` (before
`Injectivity.lean`), breaking the circular dependency.

This was implemented in `PatternParams.lean`.

## Extra rule LHS constraint

In lean4lean, `env.defeqs df` refers to computation rules (delta, iota, quot reduction).
A `VDefEq` has fields `{uvars, lhs, rhs, type}` and represents a directed reduction rule.

These are added through:
1. `VDefVal.toDefEq`: `lhs = .const name (VLevel.params uvars)` — a bare constant
2. `quotDefEq`: `lhs = Quot.lift α r β f c (Quot.mk r a)` — an application
3. `addInduct` (sorry'd): would add recursor computation rules — also applications

So `df.lhs` is always a `const` or `app` expression — never `sort`, `forallE`, `lam`, or `bvar`.

The `IsDefEqStrong` constructor `extra` fires these rules:
```
extra : env.defeqs df → ... → Γ ⊢ df.lhs.instL ls ≡ df.rhs.instL ls : df.type.instL ls
```

Since `instL` preserves the top-level VExpr constructor, `df.lhs.instL ls` is also
const-headed or app-headed.

Consequence: the `extra` case of `sort_forallE_inv` and `forallE_inv` is vacuous —
`df.lhs.instL ls` can never be `.sort` or `.forallE`. Proven in `PatternParams.lean`.
