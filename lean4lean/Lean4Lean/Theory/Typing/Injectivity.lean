import Lean4Lean.Theory.Typing.EnvLemmas
import Lean4Lean.Theory.Typing.Strong

/-!
# Injectivity lemmas for type formers

We prove type uniqueness and injectivity simultaneously by WF induction on the
`HasTypeStratified` depth `n`.
-/

namespace Lean4Lean
namespace VEnv

variable {env : VEnv} {U : Nat}

open VExpr

/-! ## Sort inversion at depth 0 -/

private theorem sort_inv_zero_aux
    (H : env.HasTypeStratified U Γ (.sort u) A false 0) :
    ∃ l', A = .sort (.succ l') ∧ u ≈ l' := by
  cases H with
  | sort' a1 a2 a3 => exact ⟨_, rfl, a3⟩

private theorem sort_inv_zero
    (H1 : env.HasTypeStratified U Γ (.sort u) A b 0)
    (H2 : env.HasTypeStratified U Γ (.sort v) A b 0) : u ≈ v := by
  generalize eq : (0 : Nat) = m at H1 H2
  have get_sort' : ∀ {w b}, env.HasTypeStratified U Γ (.sort w) A b 0 →
      ∃ l', A = .sort (.succ l') ∧ w ≈ l' := by
    intro w b H
    match b, H with
    | false, h => exact sort_inv_zero_aux h
    | true, .base h => exact sort_inv_zero_aux h
  have ⟨l₁, hA₁, hu⟩ := get_sort' (eq ▸ H1)
  have ⟨l₂, hA₂, hv⟩ := get_sort' (eq ▸ H2)
  cases hA₁.symm.trans hA₂
  exact hu.trans hv.symm

/-! ## Combined unique typing + injectivity

We define the combined result type and helper for `sort_inv` that takes
a `uniq` function as parameter. Then both are proven by WF induction. -/

/-- The type uniqueness result shape. -/
private abbrev UniqResult (env : VEnv) (U : Nat) (Γ : List VExpr) (A B : VExpr) (n : Nat) :=
  ∃ u, env.IsDefEq U Γ A B (.sort u) ∧ ∃ v, u ≈ v ∧
    env.HasTypeStratified U Γ A (.sort u) true (n-1) ∧
    env.HasTypeStratified U Γ B (.sort v) true (n-1)

/-- Type of a "uniq at depth ≤ n" function. -/
private abbrev UniqFn (env : VEnv) (U n : Nat) :=
  ∀ {Γ : List VExpr} {e A B : VExpr} {b : Bool} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ e A b n₁ → env.HasTypeStratified U Γ e B b n₂ →
    UniqResult env U Γ A B n

/-- Type of a "sort_inv" function (non-stratified). -/
private abbrev SortInvFn (env : VEnv) (U : Nat) :=
  ∀ {Γ : List VExpr} {u v : VLevel},
    OnCtx Γ (env.IsType U) → env.IsDefEqU U Γ (.sort u) (.sort v) → u ≈ v

/-- Type of a "forallE_inv stratified at depth ≤ n" function. -/
private abbrev ForallEInvFn (env : VEnv) (U n : Nat) :=
  ∀ {Γ : List VExpr} {A B A' B' V V' : VExpr} {n₁ n₂ : Nat},
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

/-- Derive `sort_inv` from `uniq` at a given depth.

The key idea: from `IsDefEqU (.sort u) (.sort v)`, both sides have the SAME
type `A` (from `IsDefEqStrong.hasType'`). We get `HasTypeStratified` for both
at some depths. The `uniq` function relates the types to their canonical forms,
and `sort_inv_zero` gives the level equivalence at depth 0.

For the recursive case (when types differ through `defeq` layers), we add a
`defeq` layer to unify the types and recurse at lower depth. -/
private theorem sort_inv_from_uniq (henv : VEnv.WF env)
    (uniq_n : UniqFn env U n)
    (sort_inv_lt : ∀ {m}, m < n → SortInvFn env U)
    {Γ : List VExpr} {u v : VLevel}
    (hΓ : OnCtx Γ (env.IsType U))
    (h : env.IsDefEqU U Γ (.sort u) (.sort v)) : u ≈ v := by
  let ⟨_, eq⟩ := h
  let ⟨h1, h2⟩ := (eq.strong henv hΓ).hasType'
  let ⟨m₁, h1⟩ := h1.stratify
  let ⟨m₂, h2⟩ := h2.stratify
  -- h1 : HasTypeStratified (.sort u) A true m₁
  -- h2 : HasTypeStratified (.sort v) A true m₂  (same type A)
  -- Use uniq_n for .sort u with types A (depth m₁) and canonical type (depth 0)
  have hu := eq.sort_inv_l henv
  have hv := eq.sort_inv_r henv
  have cu : env.HasTypeStratified U Γ (.sort u) (.sort (.succ u)) false 0 :=
    .sort' hu hu VLevel.Equiv.rfl
  have cv : env.HasTypeStratified U Γ (.sort v) (.sort (.succ v)) false 0 :=
    .sort' hv hv VLevel.Equiv.rfl
  -- uniq for .sort u: A ≡ .sort (succ u)
  have ⟨w₁, e1, _⟩ := uniq_n hΓ (Nat.le_max_left m₁ m₂ |>.trans (Nat.le_max_left ..))
    (Nat.le_max_right n 0 |>.trans (Nat.le_max_left ..))
    (h1.mono (Nat.le_max_left ..)) (.base <| cu.mono (Nat.zero_le _))
  -- uniq for .sort v: A ≡ .sort (succ v)
  have ⟨w₂, e2, _⟩ := uniq_n hΓ (Nat.le_max_right m₁ m₂ |>.trans (Nat.le_max_left ..))
    (Nat.le_max_right n 0 |>.trans (Nat.le_max_left ..))
    (h2.mono (Nat.le_max_left ..)) (.base <| cv.mono (Nat.zero_le _))
  -- Hmm, the depths don't fit: m₁, m₂ could be > n
  -- uniq_n requires depths ≤ n, but m₁ and m₂ are from stratify and unbounded
  sorry

-- The fundamental issue persists: m₁, m₂ from stratify are unbounded.
-- We need a different approach.

-- ALTERNATIVE: Make sort_inv itself depth-stratified, matching the uniq structure.
-- sort_inv at depth n: if HasTypeStratified (.sort u) A b n₁ and
-- HasTypeStratified (.sort v) A b n₂ with n₁ ≤ n, n₂ ≤ n (SAME type A), then u ≈ v.
-- Then the non-stratified sort_inv follows by choosing n = max(n₁, n₂).

/-- Stratified sort_inv: same double-induction structure as uniq. -/
private theorem sort_inv_stratified (henv : VEnv.WF env) :
    ∀ {Γ : List VExpr} {u v : VLevel} {A : VExpr} {b : Bool} {n₁ n₂ n : Nat},
    OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ (.sort u) A b n₁ →
    env.HasTypeStratified U Γ (.sort v) A b n₂ →
    -- Given uniq at depth < n (from IH)
    (∀ {m}, m < n → UniqFn env U m) →
    -- Given sort_inv at depth < n (from IH)
    (∀ {m}, m < n → ∀ {Γ' : List VExpr} {u' v' : VLevel} {A' : VExpr} {b' : Bool} {n₁' n₂' : Nat},
      OnCtx Γ' (env.IsType U) → n₁' ≤ m → n₂' ≤ m →
      env.HasTypeStratified U Γ' (.sort u') A' b' n₁' →
      env.HasTypeStratified U Γ' (.sort v') A' b' n₂' → u' ≈ v') →
    u ≈ v := by
  intro Γ u v A b n₁ n₂ n hΓ le₁ le₂ H1 H2 uniq_IH sort_inv_IH
  -- Same double-induction as uniq: WF on n, then induction on H1, inner induction on H2
  -- For sorts, H1 can only be sort', base, or defeq.
  -- Case sort' → (inner on H2: sort', base, defeq)
  -- The sort' → sort' case gives the result directly.
  -- The sort' → defeq case uses uniq_IH and sort_inv_IH at lower depth.
  -- The defeq case (on H1) symmetrically uses uniq_IH and sort_inv_IH.
  sorry

-- For now, keep the main theorems as sorry
-- The full proof requires ~200 lines replicating the uniq induction structure

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
