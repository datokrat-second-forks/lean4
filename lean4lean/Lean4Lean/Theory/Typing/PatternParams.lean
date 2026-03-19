/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lean4Lean Contributors
-/
import Lean4Lean.Theory.Typing.Pattern
import Lean4Lean.Theory.Typing.Strong

/-!
# Pattern parameters for injectivity proofs

This file defines `InjectivityParams`, a minimal set of pattern axioms needed
to prove the injectivity lemmas (sort_inv, forallE_inv, sort_forallE_inv) in
`Injectivity.lean`.

These axioms are a strict subset of the `Params` class in `ChurchRosser.lean`.
The key difference is that `InjectivityParams` does NOT include `pat_wf` (which
depends on `IsDefEqU` and `HasType` from `UniqueTyping.lean`), breaking the
circular dependency: Injectivity → UniqueTyping → ChurchRosser → Injectivity.
-/

namespace Lean4Lean
namespace VEnv

open VExpr

/-- Simple patterns: either a constant definition or an iota (recursor) rule. -/
inductive SimplePattern where
  | iota (recursor : Name) (major : Nat) (constr : Name) (args : Nat)
  | defn (head : Name)

/-- Convert a `SimplePattern` to a `Pattern`. -/
def SimplePattern.toPattern : SimplePattern → Pattern
  | .defn c => .const c
  | .iota r m c n => .app (.varN (.const r) m) (.varN (.const c) n)

/-- A `forallE` cannot match any simple pattern (simple patterns are const/app-headed). -/
theorem forallE_not_simple_match {sp : SimplePattern} :
    ¬∃ m1 m2, sp.toPattern.Matches (.forallE A B) m1 m2 := by
  intro ⟨m1, m2, h⟩; cases sp with
  | defn c => exact nomatch h
  | iota r m c n => exact nomatch h

/-- A `sort` cannot match any simple pattern. -/
theorem sort_not_simple_match {sp : SimplePattern} :
    ¬∃ m1 m2, sp.toPattern.Matches (.sort l) m1 m2 := by
  intro ⟨m1, m2, h⟩; cases sp with
  | defn c => exact nomatch h
  | iota r m c n => exact nomatch h

/-- A `lam` cannot match any simple pattern. -/
theorem lam_not_simple_match {sp : SimplePattern} :
    ¬∃ m1 m2, sp.toPattern.Matches (.lam A body) m1 m2 := by
  intro ⟨m1, m2, h⟩; cases sp with
  | defn c => exact nomatch h
  | iota r m c n => exact nomatch h

/-- A `bvar` cannot match any simple pattern. -/
theorem bvar_not_simple_match {sp : SimplePattern} :
    ¬∃ m1 m2, sp.toPattern.Matches (.bvar i) m1 m2 := by
  intro ⟨m1, m2, h⟩; cases sp with
  | defn c => exact nomatch h
  | iota r m c n => exact nomatch h

/-- Minimal pattern axioms for injectivity proofs.

These axioms express structural properties of definitional equality rules:
- `pat_simple`: all extra rules correspond to simple (const-headed) patterns
- `extra_pat`: env.defeqs are connected to pattern matching

These are eventually discharged when `addInduct` is implemented. -/
class InjectivityParams where
  env : VEnv
  univs : Nat
  Pat : (p : Pattern) → p.RHS × p.Check → Prop
  pat_simple : Pat p r → ∃ sp : SimplePattern, p = sp.toPattern
  /-- Every defeq rule corresponds to a pattern match. The level WF condition
  is intentionally omitted: pattern matching is structural and does not depend
  on level well-formedness. This weaker axiom makes `WHStep.instL_inv` provable.
  It is derivable from `Params.extra_pat` by using dummy WF levels (e.g., `.zero`)
  and observing that `Pattern.Matches` is determined by expression structure alone. -/
  extra_pat : env.defeqs df → ls.length = df.uvars →
    ∃ p r m1 m2, Pat p r ∧ p.Matches (df.lhs.instL ls) m1 m2 ∧
    df.rhs.instL ls = r.1.apply m1 m2
  /-- instL inversion for defeq LHS: if `e.instL ls_outer = df.lhs.instL ls`,
  then `e` is also a level instantiation of `df.lhs`, and the corresponding
  RHS instantiation is compatible. This follows from the fact that `df.lhs`
  is structurally determined (a simple pattern) and `instL` preserves structure,
  plus the well-formedness condition that `df.rhs` only uses level parameters
  that appear in `df.lhs`. -/
  extra_instL_inv : env.defeqs df → ls.length = df.uvars →
    e.instL ls_outer = df.lhs.instL ls →
    ∃ ls', ls'.length = df.uvars ∧ e = df.lhs.instL ls' ∧
      (df.rhs.instL ls').instL ls_outer = df.rhs.instL ls
  /-- Result uniqueness for defeq rules: if two extra rules match the same expression,
  they produce the same result. This is the key consequence of pattern uniqueness
  (`Params.pat_uniq`) that WHStep determinism needs. -/
  extra_det : env.defeqs df₁ → ls₁.length = df₁.uvars →
    env.defeqs df₂ → ls₂.length = df₂.uvars →
    df₁.lhs.instL ls₁ = df₂.lhs.instL ls₂ → df₁.rhs.instL ls₁ = df₂.rhs.instL ls₂
  /-- If `df.lhs.instL ls = .app f a` (iota pattern), then `f` cannot match any
  extra rule LHS. Prevents overlap between `WHStep.extra` and `WHStep.appFn`.
  Derives from `pat_app_l` in Params: no app-subpattern inside the function part. -/
  extra_app_fn_not_extra : env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls = .app f a →
    env.defeqs df' → ls'.length = df'.uvars → df'.lhs.instL ls' ≠ f

  /-- For defn patterns: the const's level list has the same length as df.uvars. -/
  extra_const_uvars : env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls = .const c us → us.length = df.uvars
  /-- Re-leveling: if the rule's LHS matches `.const c us₁`, then for any `us₂`
  with the same length, there are level params that make it match `.const c us₂`. -/
  extra_const_relevel : env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls = .const c us₁ → us₂.length = us₁.length →
    ∃ ls₂, ls₂.length = df.uvars ∧ df.lhs.instL ls₂ = .const c us₂

variable [InjectivityParams]
open InjectivityParams

/-- A `forallE` expression cannot be the LHS of any extra (pattern) rule. -/
theorem forallE_not_pat_lhs :
    env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls ≠ .forallE A B := by
  intro hdf hlen heq
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  have ⟨sp, hsp⟩ := pat_simple hp
  subst hsp; rw [heq] at hm
  exact forallE_not_simple_match ⟨_, _, hm⟩

/-- A `sort` expression cannot be the LHS of any extra (pattern) rule. -/
theorem sort_not_pat_lhs :
    env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls ≠ .sort l := by
  intro hdf hlen heq
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  have ⟨sp, hsp⟩ := pat_simple hp
  subst hsp; rw [heq] at hm
  exact sort_not_simple_match ⟨_, _, hm⟩

/-- A `lam` expression cannot be the LHS of any extra (pattern) rule. -/
theorem lam_not_pat_lhs :
    env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls ≠ .lam A body := by
  intro hdf hlen heq
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  have ⟨sp, hsp⟩ := pat_simple hp
  subst hsp; rw [heq] at hm
  exact lam_not_simple_match ⟨_, _, hm⟩

/-- A `bvar` expression cannot be the LHS of any extra (pattern) rule. -/
theorem bvar_not_pat_lhs :
    env.defeqs df → ls.length = df.uvars →
    df.lhs.instL ls ≠ .bvar i := by
  intro hdf hlen heq
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  have ⟨sp, hsp⟩ := pat_simple hp
  subst hsp; rw [heq] at hm
  exact bvar_not_simple_match ⟨_, _, hm⟩

/-- The LHS of an extra rule, after instL, is either a `.const` or `.app`. -/
theorem pat_lhs_const_or_app (hdf : env.defeqs df) (hlen : ls.length = df.uvars) :
    (∃ c us, df.lhs.instL ls = .const c us) ∨ (∃ f a, df.lhs.instL ls = .app f a) := by
  cases h : df.lhs.instL ls with
  | const c us => exact .inl ⟨c, us, rfl⟩
  | app f a => exact .inr ⟨f, a, rfl⟩
  | sort l => exact absurd h (sort_not_pat_lhs hdf hlen)
  | forallE A B => exact absurd h (forallE_not_pat_lhs hdf hlen)
  | lam A body => exact absurd h (lam_not_pat_lhs hdf hlen)
  | bvar i => exact absurd h (bvar_not_pat_lhs hdf hlen)

end VEnv
end Lean4Lean
