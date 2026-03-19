/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lean4Lean Contributors
-/
import Lean4Lean.Theory.Typing.PatternParams

/-!
# Weak head normal form step relation

This file defines a WHNF step relation and the `ForallELikeWith` / `SortLikeWith`
predicates needed for the injectivity proofs. Key results:

* `WHStep.not_forallE`: forallE is in WHNF (no step applies)
* `WHStep.not_sort`: sort is in WHNF
* `ForallELikeWith.unique`: WHNF uniqueness (given WHStep determinism)
* `WHStep.instL`: WHStep commutes with universe level instantiation
* `ForallELikeWith.instL_inv`: inverse commutation with instL

The WHStep determinism hypothesis is left as an explicit parameter.
It follows from `pat_simple` + `pat_uniq` (pattern uniqueness) in
`InjectivityParams`, but the proof is deferred (marked sorry) as it
requires analysis of the pattern structure under instL composition.
-/

namespace Lean4Lean
namespace VEnv

open VExpr

variable [InjectivityParams]
open InjectivityParams

/-- A single WHNF step. -/
inductive WHStep : VExpr → VExpr → Prop where
  | beta : WHStep (.app (.lam A body) arg) (body.inst arg)
  | extra : env.defeqs df → ls.length = df.uvars →
            WHStep (df.lhs.instL ls) (df.rhs.instL ls)
  | appFn : WHStep f f' → WHStep (.app f a) (.app f' a)

/-- `e` WHNF-reduces to `e'` (reflexive-transitive closure). -/
abbrev WHSteps (e e' : VExpr) : Prop := ReflTransGen WHStep e e'

/-- `e` WHNF-reduces to `forallE A B`. -/
abbrev ForallELikeWith (e A B : VExpr) : Prop := WHSteps e (.forallE A B)

/-- `e` WHNF-reduces to `sort l`. -/
abbrev SortLikeWith (e : VExpr) (l : VLevel) : Prop := WHSteps e (.sort l)

/-- No WHStep from forallE: it's in WHNF. -/
theorem WHStep.not_forallE (h : WHStep (.forallE A B) e) : False := by
  generalize hx : VExpr.forallE A B = x at h
  cases h with
  | beta => cases hx
  | extra hdf hlen => exact absurd hx.symm (forallE_not_pat_lhs hdf hlen)
  | appFn => cases hx

/-- No WHStep from sort. -/
theorem WHStep.not_sort (h : WHStep (.sort l) e) : False := by
  generalize hx : VExpr.sort l = x at h
  cases h with
  | beta => cases hx
  | extra hdf hlen => exact absurd hx.symm (sort_not_pat_lhs hdf hlen)
  | appFn => cases hx

section
variable {R : α → α → Prop}
/-- Extract the first step from a ReflTransGen chain. -/
theorem ReflTransGen.cases_head' (h : ReflTransGen R a b) :
    a = b ∨ ∃ c, R a c ∧ ReflTransGen R c b := by
  induction h with
  | rfl => exact Or.inl rfl
  | tail _ h_step ih =>
    match ih with
    | .inl heq => subst heq; exact .inr ⟨_, h_step, .rfl⟩
    | .inr ⟨c, hac, hcb⟩ => exact .inr ⟨c, hac, hcb.tail h_step⟩
end

/-- Deterministic step chains to stuck terms agree. -/
private theorem WHSteps.det_eq
    (h1 : WHSteps e e₁) (h2 : WHSteps e e₂)
    (hne1 : ∀ e', ¬WHStep e₁ e') (hne2 : ∀ e', ¬WHStep e₂ e')
    (hdet : ∀ {e e₁ e₂ : VExpr}, WHStep e e₁ → WHStep e e₂ → e₁ = e₂) :
    e₁ = e₂ := by
  -- Prove the generalized statement by headIndOn on h1
  suffices ∀ e₂, WHSteps e e₂ → (∀ e', ¬WHStep e₂ e') → e₁ = e₂ from this _ h2 hne2
  clear h2 hne2
  induction h1 using ReflTransGen.headIndOn with
  | rfl =>
    intro e₂ h2 hne2
    rcases ReflTransGen.cases_head' h2 with rfl | ⟨c, hstep, _⟩
    · rfl
    · exact absurd hstep (hne1 _)
  | head s1 _rest1 ih =>
    intro e₂ h2 hne2
    rcases ReflTransGen.cases_head' h2 with rfl | ⟨c, s2, rest2⟩
    · exact absurd s1 (hne2 _)
    · have := hdet s1 s2; subst this
      exact ih _ rest2 hne2

theorem ForallELikeWith.unique
    (h1 : ForallELikeWith e A₁ B₁) (h2 : ForallELikeWith e A₂ B₂)
    (hdet : ∀ {e e₁ e₂ : VExpr}, WHStep e e₁ → WHStep e e₂ → e₁ = e₂) :
    A₁ = A₂ ∧ B₁ = B₂ := by
  have := WHSteps.det_eq h1 h2 (fun _ h => WHStep.not_forallE h) (fun _ h => WHStep.not_forallE h) hdet
  exact ⟨VExpr.forallE.inj this |>.1, VExpr.forallE.inj this |>.2⟩

/-- ForallELike and SortLike are disjoint given determinism. -/
theorem forallE_sort_disjoint
    (h1 : ForallELikeWith e A B) (h2 : SortLikeWith e l)
    (hdet : ∀ {e e₁ e₂ : VExpr}, WHStep e e₁ → WHStep e e₂ → e₁ = e₂) :
    False := by
  have := WHSteps.det_eq h1 h2 (fun _ h => WHStep.not_forallE h) (fun _ h => WHStep.not_sort h) hdet
  cases this

/-! ## WHStep commutation with instL -/

/-- WHStep commutes with instL (forward). -/
theorem WHStep.instL {e e' : VExpr} (h : WHStep e e') :
    WHStep (e.instL ls) (e'.instL ls) := by
  induction h with
  | @beta A body arg =>
    show WHStep (VExpr.app (VExpr.lam (A.instL ls) (body.instL ls)) (arg.instL ls))
      ((body.inst arg).instL ls)
    rw [instL_instN]; exact .beta
  | @extra df ls' hdf hlen =>
    show WHStep ((df.lhs.instL ls').instL ls) ((df.rhs.instL ls').instL ls)
    rw [instL_instL, instL_instL]
    exact .extra hdf (by simp [hlen])
  | appFn _ ih => exact .appFn ih

/-- WHSteps commutes with instL. -/
theorem WHSteps.instL {e e' : VExpr} (h : WHSteps e e') :
    WHSteps (e.instL ls) (e'.instL ls) := by
  induction h with
  | rfl => exact .rfl
  | tail rest step ih => exact ih.tail step.instL

/-- ForallELikeWith commutes with instL. -/
theorem ForallELikeWith.instL' {e : VExpr} (h : ForallELikeWith e A B) :
    ForallELikeWith (e.instL ls) (A.instL ls) (B.instL ls) :=
  WHSteps.instL h

/-! ## WHStep inverse commutation with instL -/

/-- No WHStep from a lam expression. -/
theorem WHStep.not_lam (h : WHStep (.lam A body) e) : False := by
  generalize hx : VExpr.lam A body = x at h
  cases h with
  | beta => cases hx
  | extra hdf hlen => exact absurd hx.symm (lam_not_pat_lhs hdf hlen)
  | appFn => cases hx

/-- No WHStep from a bvar expression. -/
theorem WHStep.not_bvar (h : WHStep (.bvar i) e) : False := by
  generalize hx : VExpr.bvar i = x at h
  cases h with
  | beta => cases hx
  | extra hdf hlen => exact absurd hx.symm (bvar_not_pat_lhs hdf hlen)
  | appFn => cases hx

/-- Inverse commutation of a single WHStep with instL.
If `WHStep (e.instL ls) e'`, then `∃ e₀, WHStep e e₀ ∧ e' = e₀.instL ls`. -/
theorem WHStep.instL_inv {e : VExpr} (h : WHStep (e.instL ls) e') :
    ∃ e₀, WHStep e e₀ ∧ e' = e₀.instL ls := by
  generalize heq : e.instL ls = x at h
  induction h generalizing e with
  | @beta A' body' arg' =>
    -- x = .app (.lam A' body') arg', e' = body'.inst arg'
    -- e.instL ls = .app (.lam A' body') arg'
    match e, heq with
    | .app (.lam A body) arg, heq =>
      simp [VExpr.instL] at heq
      obtain ⟨⟨rfl, rfl⟩, rfl⟩ := heq
      exact ⟨body.inst arg, .beta, (instL_instN).symm⟩
  | @extra df ls' hdf hlen =>
    -- x = df.lhs.instL ls', e' = df.rhs.instL ls'
    -- e.instL ls = df.lhs.instL ls'
    have ⟨ls'', hlen', heq', hrhs⟩ := extra_instL_inv hdf hlen heq
    subst heq'
    exact ⟨df.rhs.instL ls'', .extra hdf hlen', hrhs.symm⟩
  | appFn h_sub ih =>
    -- x = .app f' a', WHStep f' f'', e' = .app f'' a'
    -- e.instL ls = .app f' a'
    match e, heq with
    | .app f a, heq =>
      simp [VExpr.instL] at heq
      obtain ⟨rfl, rfl⟩ := heq
      have ⟨f₀, hstep, hfeq⟩ := ih rfl
      exact ⟨.app f₀ a, .appFn hstep, by simp [VExpr.instL, hfeq]⟩

/-- Inverse commutation of WHSteps with instL. -/
theorem WHSteps.instL_inv {e : VExpr} (h : WHSteps (e.instL ls) e') :
    ∃ e₀, WHSteps e e₀ ∧ e' = e₀.instL ls := by
  generalize hx : e.instL ls = x at h
  induction h with
  | rfl => exact ⟨e, .rfl, hx.symm⟩
  | tail rest step ih =>
    have ⟨e₁, hsteps, heq⟩ := ih
    subst heq
    have ⟨e₂, hstep', heq'⟩ := WHStep.instL_inv step
    exact ⟨e₂, hsteps.tail hstep', heq'⟩

/-- If `e.instL ls →* forallE A B`, then `e →* forallE C D` with
`A = C.instL ls` and `B = D.instL ls`. -/
theorem ForallELikeWith.instL_inv {e : VExpr}
    (h : ForallELikeWith (e.instL ls) A B) :
    ∃ C D, ForallELikeWith e C D ∧ A = C.instL ls ∧ B = D.instL ls := by
  have ⟨e₀, hsteps, heq⟩ := WHSteps.instL_inv h
  -- e₀.instL ls = .forallE A B, so e₀ must be .forallE C D
  revert heq
  cases e₀ with
  | forallE C D =>
    simp [VExpr.instL]
    intro h1 h2; exact ⟨C, D, hsteps, h1, h2⟩
  | bvar i => simp [VExpr.instL]
  | sort l => simp [VExpr.instL]
  | const c us => simp [VExpr.instL]
  | app f a => simp [VExpr.instL]
  | lam A body => simp [VExpr.instL]

/-! ## Summary of remaining sorry obligations

1. `ForallELikeWith.unique` — follows from WHStep determinism.
   WHStep determinism requires showing:
   - beta vs beta: same result (trivial)
   - beta vs extra: no overlap (forallE/sort/lam can't be pattern LHS — proven)
   - beta vs appFn: no overlap (lam has no WHStep)
   - extra vs extra: same result (needs `pat_uniq` from `InjectivityParams`)
   - extra vs appFn: no overlap (needs pattern heads to be irreducible)
   - appFn vs appFn: determinism of sub-step (inductive)

2. `forallE_sort_disjoint` — follows from the same determinism argument.

3. `WHStep.instL_inv` (extra case) — needs `instL_instL` inversion:
   if `e.instL ls = df.lhs.instL ls'`, extract `e` and a corresponding step.

4. `ForallELikeWith.instL_inv` — depends on (3).

All of these are structural/combinatorial lemmas about patterns and instL.
None depend on unique typing or Church-Rosser, confirming that option (B)
(moving pattern axioms before Injectivity) is sufficient to break the
circular dependency.
-/

end VEnv
end Lean4Lean
