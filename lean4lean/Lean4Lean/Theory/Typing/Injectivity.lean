import Lean4Lean.Theory.Typing.EnvLemmas
import Lean4Lean.Theory.Typing.Strong

/-!
# Injectivity lemmas for type formers

These are the key structural theorems establishing that definitional equality
respects the head structure of sorts and forallE types.

## Proof Architecture

Type uniqueness (`uniq`) and type former injectivity (`sort_inv`, `forallE_inv`)
are mutually dependent. We break this circularity by proving them simultaneously
via well-founded induction on the `HasTypeStratified` depth `n`.

At each depth level `n`, the WF IH provides `sort_inv` and `forallE_inv` at
depth `< n`, which are used to prove `uniq` at depth `≤ n`. Then `sort_inv`
and `forallE_inv` at depth `≤ n` are derived from `uniq` at depth `≤ n` and
the WF IH.

The key insight for `sort_inv`: each sort expression `.sort l` has a "canonical"
type `.sort (.succ l')` (with `l ≈ l'`) from the `sort'` constructor at depth 0.
Using `uniq`, any other type can be related to this canonical type. Then
`sort_inv` at depth 0 (which holds by syntactic equality of the canonical types)
gives the level equivalence.

See `PLAN.md` for the detailed proof plan.
-/

namespace Lean4Lean
namespace VEnv

variable {env : VEnv} {U : Nat}

open VExpr

/-! ## Sort inversion at depth 0

At depth 0, `HasTypeStratified` has no `defeq` steps, so the type is
determined syntactically by the constructor. For sorts, the only
applicable constructor is `sort'`, which gives a unique type. -/

/-- Helper: extract the sort' data from HasTypeStratified for a sort expression at depth 0. -/
private theorem sort_inv_zero_aux
    (H : env.HasTypeStratified U Γ (.sort u) A false 0) :
    ∃ l', A = .sort (.succ l') ∧ u ≈ l' := by
  cases H with
  | sort' a1 a2 a3 => exact ⟨_, rfl, a3⟩

/-- Sort inversion at depth 0: trivially true by syntactic equality of canonical types.
At depth 0, `sort'` gives `A = .sort (.succ l')` with `u ≈ l'`, and `base` just
wraps `sort'`. Since both sides have the same type `A`, the levels match. -/
private theorem sort_inv_zero
    (H1 : env.HasTypeStratified U Γ (.sort u) A b 0)
    (H2 : env.HasTypeStratified U Γ (.sort v) A b 0) : u ≈ v := by
  -- Peel off base to get false-mode
  generalize eq : (0 : Nat) = n at H1 H2
  -- Get to the sort' constructor
  have get_sort' : ∀ {w b}, env.HasTypeStratified U Γ (.sort w) A b 0 →
      ∃ l', A = .sort (.succ l') ∧ w ≈ l' := by
    intro w b H
    match b, H with
    | false, h => exact sort_inv_zero_aux h
    | true, .base h => exact sort_inv_zero_aux h
  have ⟨l₁, hA₁, hu⟩ := get_sort' (eq ▸ H1)
  have ⟨l₂, hA₂, hv⟩ := get_sort' (eq ▸ H2)
  -- A = .sort (.succ l₁) = .sort (.succ l₂)
  -- So l₁ = l₂
  cases hA₁.symm.trans hA₂
  exact hu.trans hv.symm

/-! ## Main theorems -/

theorem IsDefEqU.sort_inv (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U))
    (h1 : env.IsDefEqU U Γ (.sort u) (.sort v)) : u ≈ v := sorry

theorem IsDefEqU.forallE_inv_stratified (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U))
    (h1 : env.IsDefEqU U Γ (.forallE A B) (.forallE A' B'))
    (h2 : env.HasTypeStratified U Γ (.forallE A B) V true n)
    (h3 : env.HasTypeStratified U Γ (.forallE A' B') V' true n') :
    (∃ u, env.IsDefEq U Γ A A' (.sort u) ∧ env.HasTypeStratified U Γ A (.sort u) true n) ∧
    ∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) ∧
      env.HasTypeStratified U (A::Γ) B (.sort u) true n ∧
      env.HasTypeStratified U (A'::Γ) B' (.sort u) true n' := sorry

theorem IsDefEqU.forallE_inv (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U))
    (h1 : env.IsDefEqU U Γ (.forallE A B) (.forallE A' B')) :
    (∃ u, env.IsDefEq U Γ A A' (.sort u)) ∧ ∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) :=
  let ⟨_, eq⟩ := h1
  let ⟨h2, h3⟩ := (eq.strong henv hΓ).hasType'
  let ⟨_, h2⟩ := h2.stratify
  let ⟨_, h3⟩ := h3.stratify
  let ⟨⟨_, a1, _⟩, _, a2, _⟩ := IsDefEqU.forallE_inv_stratified henv hΓ h1 h2 h3
  ⟨⟨_, a1⟩, _, a2⟩

theorem IsDefEqU.sort_forallE_inv (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U)) :
    ¬env.IsDefEqU U Γ (.sort u) (.forallE A B) := sorry
