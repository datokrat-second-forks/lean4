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
        | .defeq (u := w) (A := B) (n := n₂') hw hBA hBw hAw hvB =>
          -- H2 = defeq: .sort v : B at depth n₂', B ≡ .sort (.succ l₁) : .sort w
          let .sort' a1 a2 a3 := h1  -- u ≈ l₁, A = .sort (.succ l₁)
          let ⟨l₂, hv_l₂, hw₂⟩ := sort_canonical hvB  -- v ≈ l₂
          have hlt : n₂' < n := Nat.lt_of_succ_le le₂
          -- hAw : HTS (.sort (.succ l₁)) (.sort w) n₂'
          -- hvB : HTS (.sort v) B n₂'
          -- hBA : B ≡ .sort (.succ l₁) : .sort w
          -- Construct HTS (.sort (.succ l₂)) (.sort w) n₂' by going through B:
          -- .sort (.succ l₂) has HasType (.sort (.succ l₁)) via hBA.symm composed
          -- Actually, we construct: .sort (.succ l₂) : .sort w via defeqDF from B
          -- d1.symm gives .sort (.succ l₂) ≡ B and hBA gives B ≡ .sort (.succ l₁)
          -- But these have different sort types... Use defeqDF!
          -- .sort (.succ l₂) has HasType at type B (from d1.hasType.2)
          -- and B has type .sort w (from hBw)
          -- So .sort (.succ l₂) : B (HasType) and B ≡ .sort (.succ l₁) : .sort w
          -- By defeqDF: .sort (.succ l₂) : .sort (.succ l₁)
          -- Then .sort (.succ l₁) ≡ .sort (.succ l₁) (refl), so .sort (.succ l₂) : .sort (.succ l₁)
          -- Hmm, that gives type .sort (.succ l₁), not .sort w.
          -- We need .sort (.succ l₂) : .sort w.
          -- From hvB.hasType : HasType (.sort v) B
          -- .sort v has canonical type .sort (.succ l₂). By uniq of .sort v types,
          -- B ≡ .sort (.succ l₂) : .sort w₃. Then HasType (.sort (.succ l₂)) (.sort w₃).
          -- But we need type .sort w, not .sort w₃.
          -- Use the defeq approach: construct using the HasType from the derivation.
          -- .sort (.succ l₂) has HasType via d1.hasType.2 (the right side of d1)
          -- d1 is from uniq_IH: B ≡ .sort (.succ l₂) : .sort w₃
          -- So d1.hasType.2 : HasType (.sort (.succ l₂)) (.sort w₃)
          -- HasType (.sort (.succ l₂)) (.sort w) via defeqDF using the uniq between
          -- .sort w₃ and .sort w.
          -- This needs uniq and sort_inv again...
          -- SIMPLER: just use sort_inv_lt(n₂') on hAw and a constructed
          -- HTS (.sort (.succ l₂)) (.sort w) n₂'.
          -- To construct it: .sort (.succ l₂) has type .sort w because
          -- HasType (.sort (.succ l₂)) (.sort w) follows from
          -- hBA.symm.hasType.2 (gives HasType (.sort (.succ l₂)) B) and
          -- hBw.hasType (gives HasType B (.sort w)) composed as
          -- .defeqDF (.sort w₃ ≡ .sort w) ... but this requires uniq again.
          --
          -- Actually: hvB.hasType gives HasType (.sort v) B
          -- and .sort' gives HasType (.sort v) (.sort (.succ l₂))
          -- By the uniq_IH at depth n₂': B ≡ .sort (.succ l₂) : .sort w₃ (= d1)
          -- Then d1.symm : .sort (.succ l₂) ≡ B : .sort w₃
          -- Then (.defeqDF hBA (d1.symm)) : .sort (.succ l₂) ≡ B : .sort w
          -- Wait, defeqDF changes the TYPE, not the expression.
          -- defeqDF : A ≡ B : sort u → e₁ ≡ e₂ : A → e₁ ≡ e₂ : B
          -- So: hBA : B ≡ .sort (.succ l₁) : .sort w (type equality)
          --     d1.symm : .sort (.succ l₂) ≡ B : .sort w₃ (expression equality at type w₃)
          -- defeqDF changes the type of the SECOND argument:
          -- We'd need sort_type_eq : .sort w₃ ≡ .sort w : sort w₅
          -- Then .defeqDF sort_type_eq (d1.symm) : .sort (.succ l₂) ≡ B : .sort w
          -- This requires .sort w₃ ≡ .sort w.
          -- From uniq for B: hBw at depth n₂' and ds1 at depth n₂'-1:
          -- gives .sort w ≡ .sort w₃ : .sort w₄
          -- Good! This is available from IH.
          -- uniq for B: (.sort w) ≡ (.sort w₃), both with HTS at bounded depth
          have cu_v : env.HasTypeStratified U Γ (.sort v) (.sort (.succ l₂)) false n₂' :=
            .sort' (hvB.hasType.sort_inv_l henv) hw₂ hv_l₂
          have ⟨w₃, d1, w₃', dw, ds1, ds2⟩ :=
            (IH _ hlt).1 hΓ (Nat.le_refl _) (Nat.le_refl _) hvB (.base cu_v)
          -- ds1 : HTS B (.sort w₃) (n₂'-1)
          -- uniq for B with (.sort w) and (.sort w₃):
          have ⟨w₄, ew, w₄', dw₄, hts_w, hts_w₃⟩ :=
            (IH _ hlt).1 hΓ (Nat.le_refl _) (Nat.pred_le _) hBw ds1
          -- ew : .sort w ≡ .sort w₃ : .sort w₄
          -- hts_w : HTS (.sort w) (.sort w₄) (n₂'-1)
          -- hts_w₃ : HTS (.sort w₃) (.sort w₄') (n₂'-1)
          -- dw₄ : w₄ ≈ w₄'
          -- defeq layer: HTS (.sort w) (.sort w₄') n₂'
          -- Need: defeq hw₄ (.sort w₄ ≡ .sort w₄' : .sort u')
          --       HTS (.sort w₄) (.sort u') (n₂'-1) HTS (.sort w₄') (.sort u') (n₂'-1)
          --       HTS (.sort w) (.sort w₄) (n₂'-1)
          -- Use sort' for the type HTS and sortDF for the type equality
          -- Get WF for the TYPE levels w₄ and w₄'
          have hw₄_wf : w₄.WF U := have ⟨_, h⟩ := hts_w.hasType.isType henv hΓ; h.sort_inv henv
          have hw₄'_wf : w₄'.WF U := have ⟨_, h⟩ := hts_w₃.hasType.isType henv hΓ; h.sort_inv henv
          have hts_w' : env.HasTypeStratified U Γ (.sort w) (.sort w₄') true n₂' :=
            .defeq hw₄_wf (.sortDF hw₄_wf hw₄'_wf dw₄)
              (.base <| .sort' hw₄_wf hw₄_wf (by rfl))
              (.base <| .sort' hw₄'_wf hw₄_wf dw₄.symm)
              (.base hts_w)
          -- sort_inv at depth n₂' < n: w ≈ w₃
          have h_w_w₃ := (IH _ hlt).2.1 hΓ (Nat.le_refl _) (Nat.pred_le _) hts_w' hts_w₃
          -- w ≈ w₃ ≈ w₃' (from dw)
          have h_w_w₃' : w ≈ w₃' := h_w_w₃.trans dw
          -- ds2 : HTS (.sort (.succ l₂)) (.sort w₃') (n₂'-1)
          -- Add defeq: HTS (.sort (.succ l₂)) (.sort w) n₂'
          have ds2' : env.HasTypeStratified U Γ (.sort (.succ l₂)) (.sort w) true n₂' :=
            .defeq (ds2.hasType.sort_inv henv) (.sortDF (ds2.hasType.sort_inv henv)
              (hAw.hasType.sort_inv henv) h_w_w₃'.symm) (ds2.mono (Nat.pred_le _))
              (hAw.mono (Nat.le_refl _)) (.base <| ds2.mono (Nat.pred_le _))
          -- sort_inv at depth n₂' < n: succ l₁ ≈ succ l₂
          have hsl := (IH _ hlt).2.1 hΓ (Nat.le_refl _) (Nat.le_refl _) hAw ds2'
          exact a3.trans (VLevel.succ_congr_iff.mp hsl |>.trans hv_l₂.symm)
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
