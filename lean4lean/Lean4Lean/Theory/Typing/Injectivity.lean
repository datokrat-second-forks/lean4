import Lean4Lean.Theory.Typing.EnvLemmas
import Lean4Lean.Theory.Typing.Strong
import Lean4Lean.Theory.Typing.PatternParams

/-!
# Injectivity lemmas for type formers

We prove type uniqueness and injectivity simultaneously by WF induction on
`HasTypeStratified` depth. At each depth N:
1. uniq_N is proven using sort_inv_{<N} and forallE_inv_{<N} from the IH,
   with a `sortEquiv` helper replacing direct sort_inv calls
2. sort_inv_N is derived from uniq_N + sortEquiv
3. forallE_inv_N is proven using uniq_N and sort_inv_N

Non-stratified sort_inv follows by choosing N = max(n₁, n₂) from stratify.
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

/-! ## Helper: extract sort equivalence from HTS at ≈-related types

Given two HTS derivations for sort expressions at types that are ≈-equivalent
(but not necessarily syntactically equal), extract the sort level equivalence.

This is the key lemma that replaces direct sort_inv calls inside the uniq proof.
It uses uniq from the bundle IH to peel layers, and recurses at strictly lower depth.
-/

/-- Extract sort level equivalence from HTS derivations at ≈-related types.
    Both derivations must have depth < N, and the bundle IH provides uniq at bounds < N. -/
private theorem sortEquiv (henv : VEnv.WF env)
    (IH : ∀ m, m < N → StratifiedBundle env U m)
    {Γ : List VExpr} (hΓ : OnCtx Γ (env.IsType U))
    {u v w w' : VLevel} {m₁ m₂ : Nat}
    (h1 : env.HasTypeStratified U Γ (.sort u) (.sort w) true m₁) (hm₁ : m₁ < N)
    (h2 : env.HasTypeStratified U Γ (.sort v) (.sort w') true m₂) (hm₂ : m₂ < N)
    (hw : w ≈ w') : u ≈ v := by
  -- Reduce to sort_inv at the same type by constructing low-depth HTS
  -- Strategy: extract canonical levels, use uniq_IH to relate types, construct
  -- HTS (.sort v) (.sort w) true 1 at the same type as h1, then use sort_inv_IH
  --
  -- Step 1: canonical levels
  have ⟨l₁, hu_l₁, hl₁_wf⟩ := sort_canonical h1
  have ⟨l₂, hv_l₂, hl₂_wf⟩ := sort_canonical h2
  have hu_wf : u.WF U := h1.hasType.sort_inv_l henv
  have hv_wf : v.WF U := h2.hasType.sort_inv_l henv
  -- Step 2: We know w ≈ w'. We want to construct HTS (.sort v) (.sort w) true at low depth.
  -- For that, we need .succ l₂ ≈ w (so that sortDF gives .sort(.succ l₂) ≡ .sort w).
  -- We know w ≈ w', and w' is related to .succ l₂ via the chain of derivations.
  -- For now, use sort_inv from IH: the IH at bound max(m₁, m₂) < N gives sort_inv.
  -- sort_inv requires same type. We construct same-type HTS by retyping h2.
  sorry

private theorem stratified_bundle (henv : VEnv.WF env) : ∀ n, StratifiedBundle env U n := by
  intro n
  induction n using WellFounded.induction Nat.lt_wfRel.2 with | _ n IH =>
  dsimp [Nat.lt_wfRel] at IH
  -- Step 1: uniq_n
  -- Replicate the structure from IsDefEq.uniq (UniqueTyping.lean), using:
  -- - sortEquiv (instead of IsDefEqU.sort_inv) for sort level extraction
  -- - bundle IH's forallE_inv (instead of standalone IsDefEqU.forallE_inv_stratified)
  -- The proof does its own nested WF+structural induction.
  have uniq_n : ∀ {Γ : List VExpr} {e A B : VExpr} {b : Bool} {n₁ n₂ : Nat},
      OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
      env.HasTypeStratified U Γ e A b n₁ → env.HasTypeStratified U Γ e B b n₂ →
      ∃ u, env.IsDefEq U Γ A B (.sort u) ∧ ∃ v, u ≈ v ∧
        env.HasTypeStratified U Γ A (.sort u) true (n-1) ∧
        env.HasTypeStratified U Γ B (.sort v) true (n-1) := by
    -- The proof follows IsDefEq.uniq exactly, with two replacements:
    -- 1. IsDefEqU.sort_inv → sortEquiv using the bundle IH
    -- 2. IsDefEqU.forallE_inv_stratified → bundle IH's forallE_inv component
    -- Both replacements use (IH m hm) for appropriate m < n.
    sorry -- TODO: Copy proof from UniqueTyping.lean with these replacements
  -- Step 2: sort_inv_n (derived from uniq_n + sortEquiv)
  have sort_inv_n : ∀ {Γ : List VExpr} {u v : VLevel} {A : VExpr} {b : Bool} {n₁ n₂ : Nat},
      OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
      env.HasTypeStratified U Γ (.sort u) A b n₁ →
      env.HasTypeStratified U Γ (.sort v) A b n₂ → u ≈ v := by
    intro Γ u v A b n₁ n₂ hΓ le₁ le₂ H1 H2
    -- Case split on b
    match b with
    | false =>
      -- b = false: both must be sort'
      let .sort' a1 a2 a3 := H1
      let .sort' b1 b2 b3 := H2
      exact a3.trans b3.symm
    | true =>
      -- b = true: use uniq_n to relate H1 and H2 to canonical forms
      have ⟨l₁, hu_l₁, hl₁_wf⟩ := sort_canonical H1
      have ⟨l₂, hv_l₂, hl₂_wf⟩ := sort_canonical H2
      have hu_wf : u.WF U := H1.hasType.sort_inv_l henv
      have hv_wf : v.WF U := H2.hasType.sort_inv_l henv
      have su' : env.HasTypeStratified U Γ (.sort u) (.sort (.succ l₁)) true 0 :=
        .base (.sort' hu_wf hl₁_wf hu_l₁)
      have sv' : env.HasTypeStratified U Γ (.sort v) (.sort (.succ l₂)) true 0 :=
        .base (.sort' hv_wf hl₂_wf hv_l₂)
      -- uniq_n: same expression .sort u, types A and .sort(.succ l₁)
      have ⟨w, _, w', hw, c₃, c₄⟩ := uniq_n hΓ le₁ (Nat.zero_le _) H1 su'
      -- uniq_n: same expression .sort v, types A and .sort(.succ l₂)
      have ⟨w₂, _, w₂', hw₂, d₃, d₄⟩ := uniq_n hΓ le₂ (Nat.zero_le _) H2 sv'
      -- c₃ : HTS A (.sort w) (n-1), c₄ : HTS (.sort (.succ l₁)) (.sort w') (n-1)
      -- d₃ : HTS A (.sort w₂) (n-1), d₄ : HTS (.sort (.succ l₂)) (.sort w₂') (n-1)
      -- Use sortEquiv to extract succ l₁ ≈ succ l₂
      -- First relate w' and w₂': both are types of sort-typed things at depth n-1
      -- Through the chain: w ≈ w' (from c), w₂ ≈ w₂' (from d),
      -- and w ≈ w₂ (from uniq_IH on A with types .sort w and .sort w₂)
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
