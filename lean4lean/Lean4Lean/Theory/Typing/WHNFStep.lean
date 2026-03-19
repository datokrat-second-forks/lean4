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
  | extra : env.defeqs df → (∀ l ∈ ls, l.WF univs) → ls.length = df.uvars →
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
  | extra hdf hls hlen => exact absurd hx.symm (forallE_not_pat_lhs hdf hls hlen)
  | appFn => cases hx

/-- No WHStep from sort. -/
theorem WHStep.not_sort (h : WHStep (.sort l) e) : False := by
  generalize hx : VExpr.sort l = x at h
  cases h with
  | beta => cases hx
  | extra hdf hls hlen => exact absurd hx.symm (sort_not_pat_lhs hdf hls hlen)
  | appFn => cases hx

/-- ForallELikeWith uniqueness given WHStep determinism.
If `e →* forallE A₁ B₁` and `e →* forallE A₂ B₂`, and WHStep is deterministic,
then `A₁ = A₂ ∧ B₁ = B₂`. -/
theorem ForallELikeWith.unique
    (h1 : ForallELikeWith e A₁ B₁) (h2 : ForallELikeWith e A₂ B₂)
    (hdet : ∀ {e e₁ e₂ : VExpr}, WHStep e e₁ → WHStep e e₂ → e₁ = e₂) :
    A₁ = A₂ ∧ B₁ = B₂ := by
  -- Both chains start at e and end at a forallE. Since WHStep is deterministic,
  -- the chains must follow the same path, ending at the same forallE.
  sorry

/-- ForallELike and SortLike are disjoint given determinism. -/
theorem forallE_sort_disjoint
    (h1 : ForallELikeWith e A B) (h2 : SortLikeWith e l)
    (hdet : ∀ {e e₁ e₂ : VExpr}, WHStep e e₁ → WHStep e e₂ → e₁ = e₂) :
    False := by
  sorry

/-! ## WHStep commutation with instL -/

/-- WHStep commutes with instL (forward). -/
theorem WHStep.instL {e e' : VExpr} (h : WHStep e e')
    (hlsWF : ∀ l ∈ ls, l.WF univs) :
    WHStep (e.instL ls) (e'.instL ls) := by
  induction h with
  | @beta A body arg =>
    show WHStep (VExpr.app (VExpr.lam (A.instL ls) (body.instL ls)) (arg.instL ls))
      ((body.inst arg).instL ls)
    rw [instL_instN]; exact .beta
  | @extra df ls' hdf hls hlen =>
    show WHStep ((df.lhs.instL ls').instL ls) ((df.rhs.instL ls').instL ls)
    rw [instL_instL, instL_instL]
    exact .extra hdf
      (fun l hl => by
        simp [List.mem_map] at hl; obtain ⟨l', hl', rfl⟩ := hl
        exact VLevel.WF.inst hlsWF)
      (by simp [hlen])
  | appFn _ ih => exact .appFn ih

/-- WHSteps commutes with instL. -/
theorem WHSteps.instL {e e' : VExpr} (h : WHSteps e e')
    (hlsWF : ∀ l ∈ ls, l.WF univs) :
    WHSteps (e.instL ls) (e'.instL ls) := by
  induction h with
  | rfl => exact .rfl
  | tail rest step ih => exact ih.tail (step.instL hlsWF)

/-- ForallELikeWith commutes with instL. -/
theorem ForallELikeWith.instL' {e : VExpr} (h : ForallELikeWith e A B)
    (hlsWF : ∀ l ∈ ls, l.WF univs) :
    ForallELikeWith (e.instL ls) (A.instL ls) (B.instL ls) :=
  WHSteps.instL h hlsWF

/-! ## WHStep inverse commutation with instL -/

/-- If `e.instL ls →* forallE A B`, then `e →* forallE C D` with
`A = C.instL ls` and `B = D.instL ls`.

This is the key lemma for the constDF case: it allows extracting
the "polymorphic" WHNF from a level-instantiated WHNF chain.

The proof requires `WHStep.instL_inv` (inverse commutation for single steps),
whose `extra` case needs analysis of pattern structure under instL composition.
This is sorry'd for now. -/
theorem ForallELikeWith.instL_inv {e : VExpr}
    (h : ForallELikeWith (e.instL ls) A B) :
    ∃ C D, ForallELikeWith e C D ∧ A = C.instL ls ∧ B = D.instL ls := by
  sorry

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
