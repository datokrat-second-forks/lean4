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

/-- For HTS (.sort u) (.sort w) true m with m < N, the type level w is ≈ succ l
    for some l with u ≈ l. Proof by strong induction on m, using uniq_{<N}. -/
private theorem sort_type_canonical' (henv : VEnv.WF env)
    (IH : ∀ m, m < N → StratifiedBundle env U m)
    {Γ : List VExpr} (hΓ : OnCtx Γ (env.IsType U))
    {u w : VLevel} {m : Nat}
    (h : env.HasTypeStratified U Γ (.sort u) (.sort w) true m) (hm : m < N) :
    ∃ l, u ≈ l ∧ l.WF U ∧ w ≈ .succ l := by
  induction m using Nat.strongRecOn generalizing u w with | _ m ih_m =>
  match h with
  | .base (.sort' a1 a2 a3) =>
    -- base(sort'): type = .sort(.succ l'), u ≈ l', w = .succ l'
    exact ⟨_, a3, a2, rfl⟩
  | .defeq (u := w_inner) (A := T) (n := k) hwi hTeq hT_wi hW_wi huT =>
    -- defeq: HTS (.sort u) T true k, T ≡ .sort w : .sort w_inner
    -- Goal: w ≈ succ l for some l with u ≈ l
    have ⟨l, hu_l, hl_wf⟩ := sort_canonical huT
    have hu_wf : u.WF U := huT.hasType.sort_inv henv
    have hk : k < N := by omega
    -- Construct canonical typing for .sort u at depth k
    have huCanon : env.HasTypeStratified U Γ (.sort u) (.sort (.succ l)) true k :=
      .base (.sort' hu_wf hl_wf hu_l)
    -- (1) uniq at depth k: HTS (.sort u) T and HTS (.sort u) (.sort(.succ l))
    have ⟨t, _, t', ht_t', hT_t, hSl_t'⟩ :=
      (IH k hk).1 hΓ (by omega) (by omega) huT huCanon
    -- (2) uniq at depth k: HTS T (.sort w_inner) (depth k) and HTS T (.sort t) (depth k-1)
    have ⟨s, _, s', hs_s', hWi_s, ht_s'⟩ :=
      (IH k hk).1 hΓ (by omega) (by omega) hT_wi hT_t
    -- Recursive calls at lower depth:
    -- (3) w ≈ l_w and w_inner ≈ succ l_w from HTS (.sort w) (.sort w_inner) at depth k
    have ⟨l_w, hw_lw, _, hwi_slw⟩ := ih_m k (by omega) hW_wi (by omega)
    -- (4) w_inner ≈ l_wi and s ≈ succ l_wi from HTS (.sort w_inner) (.sort s) at depth k-1
    have ⟨l_wi, hwi_lwi, _, hs_slwi⟩ := ih_m (k-1) (by omega) hWi_s (by omega)
    -- (5) t ≈ l_t and s' ≈ succ l_t from HTS (.sort t) (.sort s') at depth k-1
    have ⟨l_t, ht_lt, _, hs'_slt⟩ := ih_m (k-1) (by omega) ht_s' (by omega)
    -- (6) succ l ≈ l_sl and t' ≈ succ l_sl from HTS (.sort(.succ l)) (.sort t') at depth k-1
    have ⟨l_sl, hsl_lsl, _, ht'_slsl⟩ := ih_m (k-1) (by omega) hSl_t' (by omega)
    -- Chain reasoning:
    -- From (4): w_inner ≈ l_wi, s ≈ succ l_wi
    -- From (3): w_inner ≈ succ l_w
    -- So: succ l_w ≈ w_inner ≈ l_wi, hence succ l_w ≈ l_wi
    have h1 : VLevel.succ l_w ≈ l_wi := hwi_slw.symm.trans hwi_lwi
    -- From hs_s': s ≈ s'. From (4): s ≈ succ l_wi. From (5): s' ≈ succ l_t.
    -- So succ l_wi ≈ succ l_t, hence l_wi ≈ l_t
    have h2 : l_wi ≈ l_t := VLevel.succ_congr_iff.mp (hs_slwi.symm.trans (hs_s'.trans hs'_slt))
    -- From (5): t ≈ l_t. From ht_t': t ≈ t'. From (6): t' ≈ succ l_sl.
    -- So l_t ≈ t ≈ t' ≈ succ l_sl
    have h3 : l_t ≈ VLevel.succ l_sl := ht_lt.symm.trans (ht_t'.trans ht'_slsl)
    -- From (6): succ l ≈ l_sl. So l_sl ≈ succ l.
    -- So succ l_sl ≈ succ (succ l) ... no, not what we want.
    -- Actually: l_t ≈ succ l_sl (from h3). And l_wi ≈ l_t (from h2).
    -- And succ l_w ≈ l_wi (from h1). So:
    -- succ l_w ≈ l_wi ≈ l_t ≈ succ l_sl
    have h4 : VLevel.succ l_w ≈ VLevel.succ l_sl := h1.trans (h2.trans h3)
    -- So l_w ≈ l_sl (by succ_congr_iff)
    have h5 : l_w ≈ l_sl := VLevel.succ_congr_iff.mp h4
    -- From (6): succ l ≈ l_sl. So l_sl ≈ succ l.
    -- From h5: l_w ≈ l_sl ≈ succ l.
    have h6 : l_w ≈ VLevel.succ l := h5.trans hsl_lsl.symm
    -- Goal: w ≈ succ l. From (3): w ≈ l_w. From h6: l_w ≈ succ l.
    exact ⟨l, hu_l, hl_wf, hw_lw.trans h6⟩

private theorem sortEquiv (henv : VEnv.WF env)
    (IH : ∀ m, m < N → StratifiedBundle env U m)
    {Γ : List VExpr} (hΓ : OnCtx Γ (env.IsType U))
    {u v w w' : VLevel} {m₁ m₂ : Nat}
    (h1 : env.HasTypeStratified U Γ (.sort u) (.sort w) true m₁) (hm₁ : m₁ < N)
    (h2 : env.HasTypeStratified U Γ (.sort v) (.sort w') true m₂) (hm₂ : m₂ < N)
    (hw : w ≈ w') : u ≈ v := by
  have ⟨l₁, hu, _, hw1⟩ := sort_type_canonical' henv IH hΓ h1 hm₁
  have ⟨l₂, hv, _, hw2⟩ := sort_type_canonical' henv IH hΓ h2 hm₂
  -- w ≈ succ l₁, w' ≈ succ l₂, w ≈ w'
  -- So succ l₁ ≈ succ l₂, hence l₁ ≈ l₂
  -- u ≈ l₁ ≈ l₂ ≈ v⁻¹ → u ≈ v
  exact hu.trans (VLevel.succ_congr_iff.mp (hw1.symm.trans (hw.trans hw2)) |>.trans hv.symm)

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
          -- H1 = base(sort'): A = .sort(.succ l₁), u ≈ l₁
          -- H2 = defeq: hvB : HTS (.sort v) B true n₂', B ≡ A : .sort w
          -- hAw : HTS (.sort(.succ l₁)) (.sort w) true n₂', n₂' < n
          let .sort' a1 a2 a3 := h1  -- a3 : u ≈ l₁, A = .sort(.succ l₁)
          -- Get v ≈ l₂ from sort_canonical
          have ⟨l₂, hv_l₂, hl₂_wf⟩ := sort_canonical hvB
          have hv_wf : v.WF U := hvB.hasType.sort_inv henv
          -- Construct canonical HTS for .sort v at depth n₂'
          have hvCanon : env.HasTypeStratified U Γ (.sort v) (.sort (.succ l₂)) true n₂' :=
            .base (.sort' hv_wf hl₂_wf hv_l₂)
          -- uniq at depth n₂' on hvB and hvCanon: B ≡ .sort(.succ l₂) : .sort t
          have hn₂' : n₂' < n := by omega
          have ⟨t, hBsl₂, t', ht_t', hB_t, hSl₂_t'⟩ :=
            (IH n₂' hn₂').1 hΓ (by omega) (by omega) hvB hvCanon
          -- sort_inv_{<n} on .sort(.succ l₂) and .sort(.succ l₁) through their common type
          -- From hBA: B ≡ A : .sort w = B ≡ .sort(.succ l₁) : .sort w
          -- From hBsl₂: B ≡ .sort(.succ l₂) : .sort t
          -- Compose: .sort(.succ l₁) ≡ B.symm ≡ .sort(.succ l₂), so .sort(.succ l₁) ≡ .sort(.succ l₂)
          -- Use sort_type_canonical' on hAw and hSl₂_t' with sortEquiv to get l₁ ≈ l₂
          have ⟨l_A, hsl₁_lA, _, hw_sl_A⟩ :=
            sort_type_canonical' henv IH hΓ hAw hn₂'
          have ⟨l_sl₂, hsl₂_lsl₂, _, ht'_sl_sl₂⟩ :=
            sort_type_canonical' henv IH hΓ hSl₂_t' (by omega)
          -- Bridge: from uniq on hBw and hB_t, get w ≈ t (via sortEquiv)
          have ⟨s, _, s', hs_s', hW_s, hT_s'⟩ :=
            (IH n₂' hn₂').1 hΓ (by omega) (by omega) hBw hB_t
          have hw_t : w ≈ t := sortEquiv henv IH hΓ hW_s (by omega) hT_s' (by omega) hs_s'
          -- From t ≈ t' and hw_t: w ≈ t' (through t ≈ t')
          have hw_t' : w ≈ t' := hw_t.trans ht_t'
          -- Now: w ≈ succ l_A (from sort_type_canonical' on hAw)
          -- And: t' ≈ succ l_sl₂ (from sort_type_canonical' on hSl₂_t')
          -- So: succ l_A ≈ w ≈ t' ≈ succ l_sl₂
          have hslA_slsl₂ : VLevel.succ l_A ≈ VLevel.succ l_sl₂ :=
            hw_sl_A.symm.trans (hw_t'.trans ht'_sl_sl₂)
          have hlA_lsl₂ : l_A ≈ l_sl₂ := VLevel.succ_congr_iff.mp hslA_slsl₂
          -- And: succ l₁ ≈ l_A, succ l₂ ≈ l_sl₂
          -- So: succ l₁ ≈ l_A ≈ l_sl₂ ≈ succ l₂ (reversed)
          have hsl₁_sl₂ : VLevel.succ _ ≈ VLevel.succ l₂ :=
            hsl₁_lA.trans (hlA_lsl₂.trans hsl₂_lsl₂.symm)
          exact a3.trans (VLevel.succ_congr_iff.mp hsl₁_sl₂ |>.trans hv_l₂.symm)
      | .defeq (u := w₁) (A := B₁) (n := n₁') hw₁ hB₁A hB₁w₁ hAw₁ huB₁ =>
        match H2 with
        | .base h2 =>
          -- Symmetric to base/defeq
          let .sort' b1 b2 b3 := h2
          have ⟨l₁, hu_l₁, hl₁_wf⟩ := sort_canonical huB₁
          have hu_wf : u.WF U := huB₁.hasType.sort_inv henv
          have huCanon : env.HasTypeStratified U Γ (.sort u) (.sort (.succ l₁)) true n₁' :=
            .base (.sort' hu_wf hl₁_wf hu_l₁)
          have hn₁' : n₁' < n := by omega
          have ⟨t, hBsl₁, t', ht_t', hB₁_t, hSl₁_t'⟩ :=
            (IH n₁' hn₁').1 hΓ (by omega) (by omega) huB₁ huCanon
          have ⟨l_A, hsl₂_lA, _, hw₁_sl_A⟩ :=
            sort_type_canonical' henv IH hΓ hAw₁ hn₁'
          have ⟨l_sl₁, hsl₁_lsl₁, _, ht'_sl_sl₁⟩ :=
            sort_type_canonical' henv IH hΓ hSl₁_t' (by omega)
          have ⟨s, _, s', hs_s', hW₁_s, hT_s'⟩ :=
            (IH n₁' hn₁').1 hΓ (by omega) (by omega) hB₁w₁ hB₁_t
          have hw₁_t : w₁ ≈ t := sortEquiv henv IH hΓ hW₁_s (by omega) hT_s' (by omega) hs_s'
          have hw₁_t' : w₁ ≈ t' := hw₁_t.trans ht_t'
          have hslA_slsl₁ : VLevel.succ l_A ≈ VLevel.succ l_sl₁ :=
            hw₁_sl_A.symm.trans (hw₁_t'.trans ht'_sl_sl₁)
          have hlA_lsl₁ : l_A ≈ l_sl₁ := VLevel.succ_congr_iff.mp hslA_slsl₁
          -- b3 : v ≈ l₂ where A = .sort(.succ l₂)
          -- hsl₂_lA : succ l₂ ≈ l_A (where l₂ is the level from b3's sort')
          -- hsl₁_lsl₁ : succ l₁ ≈ l_sl₁
          -- So succ l₂ ≈ l_A ≈ l_sl₁ ≈ succ l₁ (reversed)
          have hsl₂_sl₁ : VLevel.succ _ ≈ VLevel.succ l₁ :=
            hsl₂_lA.trans (hlA_lsl₁.trans hsl₁_lsl₁.symm)
          exact hu_l₁.trans (VLevel.succ_congr_iff.mp hsl₂_sl₁ |>.symm.trans b3.symm)
        | .defeq (u := w₂) (A := B₂) (n := n₂') hw₂ hB₂A hB₂w₂ hAw₂ hvB₂ =>
          -- Both defeq. Inner sub-derivations at depth n₁' < n and n₂' < n.
          -- Strategy: get sort_canonical levels, construct canonical typings,
          -- use uniq to relate inner types, then chain via sortEquiv.
          have hn₁' : n₁' < n := by omega
          have hn₂' : n₂' < n := by omega
          have ⟨l₁, hu_l₁, hl₁_wf⟩ := sort_canonical huB₁
          have ⟨l₂, hv_l₂, hl₂_wf⟩ := sort_canonical hvB₂
          have hu_wf := huB₁.hasType.sort_inv henv
          have hv_wf := hvB₂.hasType.sort_inv henv
          -- Canonical typings at depth n₁' and n₂'
          have huC : env.HasTypeStratified U Γ (.sort u) (.sort (.succ l₁)) true n₁' :=
            .base (.sort' hu_wf hl₁_wf hu_l₁)
          have hvC : env.HasTypeStratified U Γ (.sort v) (.sort (.succ l₂)) true n₂' :=
            .base (.sort' hv_wf hl₂_wf hv_l₂)
          -- uniq at n₁': B₁ ≡ .sort(.succ l₁) with HTS at depth n₁'-1
          have ⟨t₁, _, t₁', ht₁, hB₁_t₁, hSl₁_t₁'⟩ :=
            (IH n₁' hn₁').1 hΓ (by omega) (by omega) huB₁ huC
          -- uniq at n₂': B₂ ≡ .sort(.succ l₂) with HTS at depth n₂'-1
          have ⟨t₂, _, t₂', ht₂, hB₂_t₂, hSl₂_t₂'⟩ :=
            (IH n₂' hn₂').1 hΓ (by omega) (by omega) hvB₂ hvC
          -- sortEquiv on .sort(.succ l₁) and .sort(.succ l₂) through their types:
          -- hSl₁_t₁' : HTS (.sort(.succ l₁)) (.sort t₁') true (n₁'-1)
          -- hSl₂_t₂' : HTS (.sort(.succ l₂)) (.sort t₂') true (n₂'-1)
          -- Need t₁' ≈ t₂'. Chain through:
          -- B₁ has types (.sort w₁) and (.sort t₁). hAw₁ gives A at (.sort w₁).
          -- B₁ ≡ A (from hB₁A). B₂ ≡ A (from hB₂A).
          -- So B₁ ≡ B₂ (transitivity through A).
          -- From uniq on B₁: (.sort w₁) and (.sort t₁) are ≈-related (via sortEquiv).
          -- From uniq on B₂: (.sort w₂) and (.sort t₂) are ≈-related.
          -- From hAw₁ and hAw₂: A has types (.sort w₁) and (.sort w₂).
          -- By uniq on A: w₁ and w₂ are ≈-related.
          -- Chain: t₁ ≈ w₁ ≈ w₂ ≈ t₂.
          -- And t₁ ≈ t₁', t₂ ≈ t₂' from the uniq results.
          -- So t₁' ≈ t₂'.
          -- Bridge w₁ ≈ t₁
          have ⟨_, _, _, hr₁, hW₁_r₁, hT₁_r₁'⟩ :=
            (IH n₁' hn₁').1 hΓ (by omega) (by omega) hB₁w₁ hB₁_t₁
          have hw₁_t₁ := sortEquiv henv IH hΓ hW₁_r₁ (by omega) hT₁_r₁' (by omega) hr₁
          -- Bridge w₂ ≈ t₂
          have ⟨_, _, _, hr₂, hW₂_r₂, hT₂_r₂'⟩ :=
            (IH n₂' hn₂').1 hΓ (by omega) (by omega) hB₂w₂ hB₂_t₂
          have hw₂_t₂ := sortEquiv henv IH hΓ hW₂_r₂ (by omega) hT₂_r₂' (by omega) hr₂
          -- Bridge w₁ ≈ w₂ via uniq on A
          have hm := Nat.lt_of_lt_of_le (Nat.lt_max_of_lt_left hn₁') (Nat.le_refl _)
          have ⟨_, _, _, hs_A, hW₁_sA, hW₂_sA'⟩ :=
            (IH (max n₁' n₂') (by omega)).1 hΓ (by omega) (by omega) hAw₁ hAw₂
          have hw₁_w₂ := sortEquiv henv IH hΓ hW₁_sA (by omega) hW₂_sA' (by omega) hs_A
          -- Chain: t₁' ≈ t₁ ≈ w₁ ≈ w₂ ≈ t₂ ≈ t₂'
          have ht₁'_t₂' : t₁' ≈ t₂' :=
            ht₁.symm.trans (hw₁_t₁.symm.trans (hw₁_w₂.trans (hw₂_t₂.trans ht₂)))
          -- Now sortEquiv on .sort(.succ l₁) and .sort(.succ l₂):
          have hsl₁_sl₂ : VLevel.succ l₁ ≈ VLevel.succ l₂ :=
            sortEquiv henv IH hΓ hSl₁_t₁' (by omega) hSl₂_t₂' (by omega) ht₁'_t₂'
          exact hu_l₁.trans (VLevel.succ_congr_iff.mp hsl₁_sl₂ |>.trans hv_l₂.symm)
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
