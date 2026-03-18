import Lean4Lean.Theory.Typing.EnvLemmas
import Lean4Lean.Theory.Typing.Strong

/-!
# Injectivity lemmas for type formers

We prove type uniqueness and injectivity simultaneously by WF induction on
`HasTypeStratified` depth. At each depth N:
1. sort_inv_N is proven using uniq_{<N} and sort_inv_{<N} from the IH
2. uniq_N is proven using sort_inv_N and forallE_inv_{<N} from the IH
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

private theorem stratified_bundle (henv : VEnv.WF env) : ∀ n, StratifiedBundle env U n := by
  intro n
  induction n using WellFounded.induction Nat.lt_wfRel.2 with | _ n IH =>
  dsimp [Nat.lt_wfRel] at IH
  -- Step 1: sort_inv_n (stratified, same type, depth ≤ n)
  -- Proven by strong induction on n₁ + n₂, using cases on both HasTypeStratified.
  have sort_inv_n : ∀ {Γ : List VExpr} {u v : VLevel} {A : VExpr} {b : Bool} {n₁ n₂ : Nat},
      OnCtx Γ (env.IsType U) → n₁ ≤ n → n₂ ≤ n →
      env.HasTypeStratified U Γ (.sort u) A b n₁ →
      env.HasTypeStratified U Γ (.sort v) A b n₂ → u ≈ v := by
    intro Γ u v A b n₁ n₂ hΓ le₁ le₂ H1 H2
    -- Case split on b (the bool index)
    match b with
    | false =>
      -- b = false: both must be sort'
      let .sort' a1 a2 a3 := H1
      let .sort' b1 b2 b3 := H2
      -- A = .sort (.succ l₁) = .sort (.succ l₂), so l₁ = l₂
      exact a3.trans b3.symm
    | true =>
      -- b = true: both are base or defeq
      -- Peel off the outermost layer from H1
      match H1 with
      | .base h1 =>
        -- H1 = base h1 where h1 : HasTypeStratified (.sort u) A false n₁
        match H2 with
        | .base h2 =>
          -- Both stripped to false mode. Direct: sort' → sort'
          let .sort' a1 a2 a3 := h1
          let .sort' b1 b2 b3 := h2
          exact a3.trans b3.symm
        | .defeq (B := B) (n := n₂') b1 b2 b3 b4 b5 =>
          -- H2 = defeq: .sort v : B at depth n₂', B ≡ A : .sort w, n₂'+1 ≤ n
          let .sort' a1 a2 a3 := h1
          -- A = .sort (.succ l₁), u ≈ l₁
          let ⟨l₂, hv_l₂, hw₂⟩ := sort_canonical b5
          have hlt : n₂' < n := Nat.lt_of_succ_le le₂
          have cu_v : env.HasTypeStratified U Γ (.sort v) (.sort (.succ l₂)) false n₂' :=
            .sort' (b5.hasType.sort_inv_l henv) hw₂ hv_l₂
          have ⟨w₃, d1, w₃', dw, ds1, ds2⟩ :=
            (IH _ hlt).1 hΓ (Nat.le_refl _) (Nat.le_refl _) b5 (.base cu_v)
          -- d1 : B ≡ .sort (.succ l₂) : .sort w₃
          -- ds1 : HasTypeStratified B (.sort w₃) true (n₂'-1)
          -- ds2 : HasTypeStratified (.sort (.succ l₂)) (.sort w₃') true (n₂'-1)
          -- dw : w₃ ≈ w₃'
          -- Also: B ≡ A (= .sort (.succ l₁)) from b2
          -- So .sort (.succ l₁) ≡ .sort (.succ l₂) by transitivity
          -- ds2 gives HasTypeStratified (.sort (.succ l₂)) (.sort w₃') true (n₂'-1)
          -- We need HasTypeStratified (.sort (.succ l₁)) with same type (.sort w₃')
          -- From b2 : B ≡ .sort (.succ l₁), d1 : B ≡ .sort (.succ l₂)
          -- by uniq (IH) for B: .sort (.succ l₁) ≡ .sort (.succ l₂) ?
          -- Actually, we have b2 : B ≡ A where A = .sort (.succ l₁)
          -- and d1 : B ≡ .sort (.succ l₂)
          -- We need HasTypeStratified (.sort (.succ l₁)) with a type that
          -- matches HasTypeStratified (.sort (.succ l₂))
          -- From ds1 : HasTypeStratified B (.sort w₃) (n₂'-1)
          -- and b3 : HasTypeStratified B (.sort b1) (from the defeq constructor)
          -- Wait, b3 : HasTypeStratified B (.sort w) n₂'
          -- b4 : HasTypeStratified A (.sort w) n₂'
          -- A = .sort (.succ l₁)
          -- b4 : HasTypeStratified (.sort (.succ l₁)) (.sort w) n₂'
          -- ds2 : HasTypeStratified (.sort (.succ l₂)) (.sort w₃') (n₂'-1)
          -- Need same type. w and w₃' may differ.
          -- Use uniq (IH) for B with types (.sort w) and (.sort w₃):
          -- b3 at depth n₂', ds1 at depth n₂'-1. Both ≤ n₂'.
          -- gives (.sort w) ≡ (.sort w₃) : .sort w₄
          -- Then w ≈ w₃ by sort_inv at depth n₂'-1 (from IH)
          -- Add defeq to ds2: HasTypeStratified (.sort (.succ l₂)) (.sort w) n₂'
          -- Now b4 and this: both at depth n₂', same type (.sort w)
          -- sort_inv at depth n₂' < n (from IH): succ l₁ ≈ succ l₂
          -- By VLevel.succ_congr_iff: l₁ ≈ l₂
          -- Hence u ≈ l₁ ≈ l₂ ≈⁻¹ v ✓

          -- b1 : u✝.WF U (universe level for defeq)
          -- b2 : IsDefEq B A (.sort u✝) where B is some type, A = .sort (.succ l₁)
          -- b3 : HTS B (.sort u✝) true n₂'
          -- b4 : HTS (.sort (.succ l₁)) (.sort u✝) true n₂'  (A = .sort (.succ l₁))
          -- b5 : HTS (.sort v) B true n₂'
          -- sort_inv for .sort (.succ l₁) and .sort (.succ l₂):
          -- b4 gives HTS (.sort (.succ l₁)) (.sort u✝) at depth n₂'
          -- We need HTS (.sort (.succ l₂)) (.sort u✝) at depth ≤ n₂'
          -- From ds2 : HTS (.sort (.succ l₂)) (.sort w₃') (n₂'-1) and
          -- we need to change type from (.sort w₃') to (.sort u✝)
          -- First relate w₃' to u✝:
          -- From (IH _ hlt).1 applied to b3 and ds1:
          --   d1 : B ≡ .sort (.succ l₂) and
          --   ds1 : HTS B (.sort w₃) (n₂'-1) at type (.sort w₃)
          -- From (IH _ hlt).1 applied to b3 and ds1 we also get:
          --   HTS (.sort w₃) (.sort w₄') (n₂'-1) and
          --   HTS B (.sort w₃) ... wait I'm getting confused.
          --
          -- Let me simplify: just use sort_inv at depth n₂' (from IH)
          -- for b4 (HTS (.sort (.succ l₁)) (.sort u✝) n₂') and
          -- a HTS (.sort (.succ l₂)) (.sort u✝) n₂' that we construct.
          --
          -- From b5 : HTS (.sort v) B n₂' and canonical:
          -- .sort v :! .sort (.succ l₂) at any depth including n₂'
          -- By (IH _ hlt).1 for .sort v: B ≡ .sort (.succ l₂)
          -- Combined with b2 : B ≡ A : (.sort u✝) where A = .sort (.succ l₁)
          -- We get .sort (.succ l₁) ≡ .sort (.succ l₂) via B
          -- From d1 and b2.symm: .sort (.succ l₂) ≡ B ≡ .sort (.succ l₁) : (.sort u✝)
          -- So .sort (.succ l₂) has type (.sort u✝)
          -- HasType (.sort (.succ l₂)) (.sort u✝) follows from this IsDefEq
          -- d1.symm.trans b2 doesn't work because d1 and b2 have different sort types
          -- d1_eq : .sort (.succ l₂) ≡ .sort (.succ l₁) : .sort w₃
          -- Wait, d1 : B ≡ .sort (.succ l₂) : .sort w₃
          -- b2 : B ≡ A (.sort u✝) where A = .sort (.succ l₁)
          -- So: d1.symm : .sort (.succ l₂) ≡ B : .sort w₃
          -- b2.defeqDF (d1.symm.hasType.2) : .sort (.succ l₂) ≡ .sort (.succ l₁) : .sort u✝
          -- Wait, we need defeqDF to change the type from w₃ to u✝
          -- Actually: .sort (.succ l₂) ≡ B (via d1.symm at type .sort w₃)
          --           B ≡ .sort (.succ l₁) (via b2 at type .sort u✝)
          -- These have different types! Can't directly compose.
          -- Use b2.defeqDF to change type:
          -- b2 : B ≡ A : .sort u✝
          -- d1 : B ≡ .sort (.succ l₂) : .sort w₃
          -- We need: A ≡ .sort (.succ l₂) i.e. .sort (.succ l₁) ≡ .sort (.succ l₂)
          -- at SOME type. We have .sort (.succ l₁) as A in b2 and b4
          -- b4 : HTS (.sort (.succ l₁)) (.sort u✝) n₂'
          -- And .sort (.succ l₂) has HTS at depth 0 with canonical type
          -- .sort (.succ l₂) :! .sort (.succ (.succ l₂)) at depth 0
          -- By (IH _ hlt).1 for .sort (.succ l₂): (.sort u✝_somevar) ≡ (.sort (.succ (.succ l₂)))
          -- This is getting very tangled. Let me just sorry the rest for now.
          sorry
      | .defeq a1 a2 a3 a4 a5 =>
        -- H1 = defeq: .sort u : A' at depth n₁', A' ≡ A : .sort w
        -- Symmetric case: peel H1 and relate types
        match H2 with
        | .base h2 =>
          -- Symmetric to the base/defeq case above
          sorry
        | .defeq b1 b2 b3 b4 b5 =>
          -- Both H1 and H2 are defeq
          -- a5 : HasTypeStratified (.sort u) A' true n₁' (n₁'+1 ≤ n)
          -- b5 : HasTypeStratified (.sort v) B true n₂' (n₂'+1 ≤ n)
          -- a2 : A' ≡ A : .sort w₁
          -- b2 : B ≡ A : .sort w₂
          -- Both A' and B are defeq to A
          -- Use uniq_{<n} for .sort u: A' ≡ canonical
          -- Use uniq_{<n} for .sort v: B ≡ canonical
          -- Then relate canonicals
          sorry
  -- Step 2: uniq_n
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
