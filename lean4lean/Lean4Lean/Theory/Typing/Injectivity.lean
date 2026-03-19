import Lean4Lean.Theory.Typing.EnvLemmas
import Lean4Lean.Theory.Typing.Strong
import Lean4Lean.Theory.Typing.PatternParams

/-!
# Injectivity lemmas for type formers

We prove type uniqueness and injectivity simultaneously by WF induction on
`HasTypeStratified` depth. At each depth N:
1. sort_inv_N is proven using uniq_{<N} and sort_inv_{<N} from the IH
2. uniq_N is proven using sort_inv_N and forallE_inv_{<N} from the IH
3. forallE_inv_N is proven using uniq_N and sort_inv_N

Non-stratified sort_inv follows by choosing N = max(n₁, n₂) from stratify.
See PLAN.md for the detailed proof plan.
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

/-- Extract the canonical sort' data from any HasTypeStratified for a sort. -/
private theorem sort_canonical
    (H : env.HasTypeStratified U Γ (.sort u) A b n) :
    ∃ l', u ≈ l' ∧ l'.WF U := by
  generalize he : VExpr.sort u = e at H
  induction H with
  | sort' a1 a2 a3 => cases he; exact ⟨_, a3, a2⟩
  | base _ ih => exact ih he
  | defeq _ _ _ _ _ _ _ ih => exact ih he
  | bvar h _ _ => cases he
  | const _ _ _ _ => cases he
  | app _ _ _ _ _ _ _ _ _ _ _ => cases he
  | lam _ _ _ _ _ _ _ _ => cases he
  | forallE _ _ _ _ _ _ => cases he

/-! ## Combined stratified bundle -/

/-- The combined stratified result at depth ≤ n. All parts are stratified. -/
private def StratifiedBundle (env : VEnv) (U n : Nat) : Prop :=
  -- Part 1: Type uniqueness at depth ≤ n
  (∀ {Γ : List VExpr} {e A B : VExpr} {b : Bool} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ e A b n₁ → env.HasTypeStratified U Γ e B b n₂ →
    ∃ u, env.IsDefEq U Γ A B (.sort u) ∧ ∃ v, u ≈ v ∧
      env.HasTypeStratified U Γ A (.sort u) true (n-1) ∧
      env.HasTypeStratified U Γ B (.sort v) true (n-1)) ∧
  -- Part 2: Stratified sort inversion (same type, depth ≤ n)
  (∀ {Γ : List VExpr} {u v : VLevel} {A : VExpr} {b : Bool} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ (.sort u) A b n₁ →
    env.HasTypeStratified U Γ (.sort v) A b n₂ → u ≈ v) ∧
  -- Part 3: Stratified forallE inversion at depth ≤ n
  (∀ {Γ : List VExpr} {A B A' B' V V' : VExpr} {n₁ n₂ : Nat},
    OnCtx Γ (env.IsType U) →
    env.IsDefEqU U Γ (.forallE A B) (.forallE A' B') →
    n₁ ≤ n → n₂ ≤ n →
    env.HasTypeStratified U Γ (.forallE A B) V true n₁ →
    env.HasTypeStratified U Γ (.forallE A' B') V' true n₂ →
    (∃ u, env.IsDefEq U Γ A A' (.sort u) ∧
      env.HasTypeStratified U Γ A (.sort u) true n₁) ∧
    ∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) ∧
      env.HasTypeStratified U (A::Γ) B (.sort u) true n₁ ∧
      env.HasTypeStratified U (A'::Γ) B' (.sort u) true n₂)

/-! ## Helper: sortEquiv — bridge ≈-related types for sort_inv

`uniq_{<n}` gives HTS results at types that differ by ≈, but `sort_inv_{<n}` needs
the same type. `sortEquiv` bridges this gap by constructing same-type HTS at low depth.
See PLAN.md for the detailed proof strategy. -/

/-- Extract sort level equivalence from HTS derivations at ≈-related types. -/
private theorem sortEquiv (henv : VEnv.WF env)
    (IH : ∀ m, m < N → StratifiedBundle env U m)
    {Γ : List VExpr} (hΓ : OnCtx Γ (env.IsType U))
    {u v w w' : VLevel} {m₁ m₂ : Nat}
    (h1 : env.HasTypeStratified U Γ (.sort u) (.sort w) true m₁) (hm₁ : m₁ < N)
    (h2 : env.HasTypeStratified U Γ (.sort v) (.sort w') true m₂) (hm₂ : m₂ < N)
    (hw : w ≈ w') : u ≈ v := by
  sorry

/-! ## Main bundle proof -/

private theorem stratified_bundle (henv : VEnv.WF env) : ∀ n, StratifiedBundle env U n := by
  intro n
  induction n using WellFounded.induction Nat.lt_wfRel.2 with | _ n IH =>
  dsimp [Nat.lt_wfRel] at IH
  -- Step 1: sort_inv_n
  have sort_inv_n : ∀ {Γ : List VExpr} {u v : VLevel} {A : VExpr} {b : Bool} {n₁ n₂ : Nat},
      OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
      env.HasTypeStratified U Γ (.sort u) A b n₁ →
      env.HasTypeStratified U Γ (.sort v) A b n₂ → u ≈ v := by
    intro Γ u v A b n₁ n₂ hΓ le₁ le₂ H1 H2
    match b with
    | false =>
      let .sort' a1 a2 a3 := H1
      let .sort' b1 b2 b3 := H2
      exact a3.trans b3.symm
    | true =>
      match H1 with
      | .base h1 =>
        match H2 with
        | .base h2 =>
          let .sort' a1 a2 a3 := h1
          let .sort' b1 b2 b3 := h2
          exact a3.trans b3.symm
        | .defeq (u := w) (A := B) (n := n₂') hw hBA hBw hAw hvB =>
          -- H1 = base(sort'): u ≈ l₁, A = .sort(.succ l₁)
          -- H2 = defeq: .sort v : B at depth n₂', B ≡ A : .sort w
          -- See PLAN.md "base/defeq" for the 6-step construction
          sorry
      | .defeq a1 a2 a3 a4 a5 =>
        match H2 with
        | .base h2 =>
          -- Symmetric to base/defeq: swap H1 and H2 roles
          sorry
        | .defeq b1 b2 b3 b4 b5 =>
          -- Both defeq: use sortEquiv to bridge ≈-related types
          sorry
  -- Step 2: uniq_n (copy from UniqueTyping.lean with IH-provided sort_inv/forallE_inv)
  have uniq_n : ∀ {Γ : List VExpr} {e A B : VExpr} {b : Bool} {n₁ n₂ : Nat},
      OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
      env.HasTypeStratified U Γ e A b n₁ → env.HasTypeStratified U Γ e B b n₂ →
      ∃ u, env.IsDefEq U Γ A B (.sort u) ∧ ∃ v, u ≈ v ∧
        env.HasTypeStratified U Γ A (.sort u) true (n-1) ∧
        env.HasTypeStratified U Γ B (.sort v) true (n-1) := by
    sorry
  -- Step 3: forallE_inv_n
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
        env.HasTypeStratified U (A'::Γ) B' (.sort u) true n₂ := by
    sorry
  exact ⟨uniq_n, sort_inv_n, forallE_inv_n⟩

-- Extract non-stratified versions

theorem IsDefEqU.sort_inv (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U))
    (h1 : env.IsDefEqU U Γ (.sort u) (.sort v)) : u ≈ v := by
  let ⟨_, eq⟩ := h1
  let ⟨h2, h3⟩ := (eq.strong henv hΓ).hasType'
  let ⟨n₁, h2⟩ := h2.stratify
  let ⟨n₂, h3⟩ := h3.stratify
  exact (stratified_bundle henv (max n₁ n₂)).2.1 hΓ
    (Nat.le_max_left ..) (Nat.le_max_right ..) h2 h3

theorem IsDefEqU.forallE_inv_stratified (henv : VEnv.WF env) (hΓ : OnCtx Γ (env.IsType U))
    (h1 : env.IsDefEqU U Γ (.forallE A B) (.forallE A' B'))
    (h2 : env.HasTypeStratified U Γ (.forallE A B) V true n)
    (h3 : env.HasTypeStratified U Γ (.forallE A' B') V' true n') :
    (∃ u, env.IsDefEq U Γ A A' (.sort u) ∧ env.HasTypeStratified U Γ A (.sort u) true n) ∧
    ∃ u, env.IsDefEq U (A::Γ) B B' (.sort u) ∧
      env.HasTypeStratified U (A::Γ) B (.sort u) true n ∧
      env.HasTypeStratified U (A'::Γ) B' (.sort u) true n' :=
  (stratified_bundle henv (max n n')).2.2 hΓ h1
    (Nat.le_max_left ..) (Nat.le_max_right ..) h2 h3

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

end VEnv
end Lean4Lean
