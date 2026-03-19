/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lean4Lean Contributors
-/
import Lean4Lean.Theory.Typing.WHNFStep
import Lean4Lean.Theory.Typing.Strong
import Lean4Lean.Theory.Typing.Lemmas

/-!
# SortLike/ForallELike preservation through IsDefEqStrong

The key idea: if `e₁ ≡ e₂` (IsDefEqStrong) and `e₁` WHNF-reduces to a sort,
then `e₂` also WHNF-reduces to a sort. Similarly for forallE. This is proved
by structural induction on IsDefEqStrong, and is the main tool for proving
`sort_forallE_inv` (that a sort can't be defeq to a forallE).

These theorems require `InjectivityParams` for the WHStep relation.
-/

namespace Lean4Lean
namespace VEnv

open VExpr

variable [ip : InjectivityParams]
open InjectivityParams

/-- SortLikeWith for a lam is impossible (lam is WHNF, lam ≠ sort). -/
private theorem SortLikeWith_not_lam (h : SortLikeWith (.lam A body) l) : False := by
  rcases ReflTransGen.cases_head' h with heq | ⟨_, hstep, _⟩
  · cases heq
  · exact WHStep.not_lam hstep

/-- SortLikeWith for a forallE is impossible (forallE is WHNF, forallE ≠ sort). -/
private theorem SortLikeWith_not_forallE (h : SortLikeWith (.forallE A B) l) : False := by
  rcases ReflTransGen.cases_head' h with heq | ⟨_, hstep, _⟩
  · cases heq
  · exact WHStep.not_forallE hstep

/-- ForallELikeWith for a sort is impossible. -/
private theorem ForallELikeWith_not_sort (h : ForallELikeWith (.sort l) A B) : False := by
  rcases ReflTransGen.cases_head' h with heq | ⟨_, hstep, _⟩
  · cases heq
  · exact WHStep.not_sort hstep

/-- ForallELikeWith for a lam is impossible. -/
private theorem ForallELikeWith_not_lam (h : ForallELikeWith (.lam A body) C D) : False := by
  rcases ReflTransGen.cases_head' h with heq | ⟨_, hstep, _⟩
  · cases heq
  · exact WHStep.not_lam hstep

/-- SortLike/ForallELike preservation (bidirectional) through IsDefEqStrong.
Combined into a 4-tuple to handle the symm case.

Sorry'd cases: constDF (instL factoring), appDF (depth-decreasing),
proofIrrel (subject reduction + level contradiction), eta backward
(sort_forallE_inv_{<n}). See PLAN.md and DETAIL files. -/
theorem whnf_preserved
    {U : Nat} {Γ : List VExpr} {e₁ e₂ V : VExpr}
    (H : ip.env.IsDefEqStrong U Γ e₁ e₂ V) :
    (∀ l, SortLikeWith e₁ l → ∃ l', SortLikeWith e₂ l') ∧
    (∀ l, SortLikeWith e₂ l → ∃ l', SortLikeWith e₁ l') ∧
    (∀ A B, ForallELikeWith e₁ A B → ∃ A' B', ForallELikeWith e₂ A' B') ∧
    (∀ A B, ForallELikeWith e₂ A B → ∃ A' B', ForallELikeWith e₁ A' B') := by
  induction H with
  | bvar =>
    exact ⟨fun _ h => ⟨_, h⟩, fun _ h => ⟨_, h⟩,
           fun _ _ h => ⟨_, _, h⟩, fun _ _ h => ⟨_, _, h⟩⟩
  | symm _ ih =>
    exact ⟨ih.2.1, ih.1, ih.2.2.2, ih.2.2.1⟩
  | trans _ _ ih1 ih2 =>
    exact ⟨fun l h => let ⟨l', h'⟩ := ih1.1 l h; ih2.1 l' h',
           fun l h => let ⟨l', h'⟩ := ih2.2.1 l h; ih1.2.1 l' h',
           fun A B h => let ⟨A', B', h'⟩ := ih1.2.2.1 A B h; ih2.2.2.1 A' B' h',
           fun A B h => let ⟨A', B', h'⟩ := ih2.2.2.2 A B h; ih1.2.2.2 A' B' h'⟩
  | sortDF =>
    exact ⟨fun _ _ => ⟨_, .rfl⟩, fun _ _ => ⟨_, .rfl⟩,
           fun _ _ h => absurd h ForallELikeWith_not_sort,
           fun _ _ h => absurd h ForallELikeWith_not_sort⟩
  | lamDF _ _ _ _ _ _ _ _ _ _ _ =>
    exact ⟨fun _ h => absurd h SortLikeWith_not_lam,
           fun _ h => absurd h SortLikeWith_not_lam,
           fun _ _ h => absurd h ForallELikeWith_not_lam,
           fun _ _ h => absurd h ForallELikeWith_not_lam⟩
  | forallEDF _ _ _ _ _ _ _ _ =>
    exact ⟨fun _ h => absurd h SortLikeWith_not_forallE,
           fun _ h => absurd h SortLikeWith_not_forallE,
           fun _ _ _ => ⟨_, _, .rfl⟩, fun _ _ _ => ⟨_, _, .rfl⟩⟩
  | defeqDF _ _ _ _ ih =>
    exact ih
  | beta _ _ _ _ _ _ _ _ _ _ _ _ _ _ =>
    refine ⟨fun l h => ?_, fun l h => ⟨l, (ReflTransGen.tail .rfl .beta).trans h⟩,
            fun A' B' h => ?_, fun A' B' h => ⟨A', B', (ReflTransGen.tail .rfl .beta).trans h⟩⟩
    · rcases ReflTransGen.cases_head' h with heq | ⟨c, hstep, hrest⟩
      · cases heq
      · have := WHStep.deterministic hstep WHStep.beta; subst this; exact ⟨l, hrest⟩
    · rcases ReflTransGen.cases_head' h with heq | ⟨c, hstep, hrest⟩
      · cases heq
      · have := WHStep.deterministic hstep WHStep.beta; subst this; exact ⟨A', B', hrest⟩
  | eta _ _ _ _ _ _ _ _ _ _ _ _ _ _ =>
    exact ⟨fun _ h => absurd h SortLikeWith_not_lam,
           fun _ _ => sorry, -- eta backward SortLike: needs sort_forallE_inv_{<n}
           fun _ _ h => absurd h ForallELikeWith_not_lam,
           fun _ _ _ => sorry⟩ -- eta backward ForallELike: needs sort_forallE_inv_{<n}
  | extra hdf _ hlen _ _ _ _ _ _ _ _ _ _ _ =>
    have hextra := WHStep.extra hdf hlen
    refine ⟨fun l h => ?_, fun l h => ⟨l, (ReflTransGen.tail .rfl hextra).trans h⟩,
            fun A' B' h => ?_,
            fun A' B' h => ⟨A', B', (ReflTransGen.tail .rfl hextra).trans h⟩⟩
    · rcases ReflTransGen.cases_head' h with heq | ⟨c, hstep, hrest⟩
      · exact absurd heq (sort_not_pat_lhs hdf hlen)
      · have := WHStep.deterministic hstep hextra; subst this; exact ⟨l, hrest⟩
    · rcases ReflTransGen.cases_head' h with heq | ⟨c, hstep, hrest⟩
      · exact absurd heq (forallE_not_pat_lhs hdf hlen)
      · have := WHStep.deterministic hstep hextra; subst this; exact ⟨A', B', hrest⟩
  | constDF _ _ _ _ _ _ _ _ _ _ =>
    exact ⟨fun _ _ => sorry, fun _ _ => sorry,
           fun _ _ _ => sorry, fun _ _ _ => sorry⟩
  | appDF _ _ _ _ _ _ _ _ _ _ _ _ =>
    exact ⟨fun _ _ => sorry, fun _ _ => sorry,
           fun _ _ _ => sorry, fun _ _ _ => sorry⟩
  | proofIrrel _ _ _ _ _ _ =>
    exact ⟨fun _ _ => sorry, fun _ _ => sorry,
           fun _ _ _ => sorry, fun _ _ _ => sorry⟩

/-- sort_forallE_inv proved from SortLike preservation + disjointness.
Requires InjectivityParams and WHStep determinism. -/
theorem sort_forallE_inv_ip
    (henv : Ordered ip.env) (hΓ : OnCtx Γ (ip.env.IsType U))
    (h : ip.env.IsDefEqU U Γ (.sort u) (.forallE A B)) : False := by
  let ⟨_, hdeq⟩ := h
  have hstrong := hdeq.strong henv hΓ
  have hs : SortLikeWith (.sort u) u := .rfl
  have ⟨l', hl'⟩ := (whnf_preserved hstrong).1 u hs
  have hf : ForallELikeWith (.forallE A B) A B := .rfl
  exact forallE_sort_disjoint hf hl' WHStep.deterministic

end VEnv
end Lean4Lean
