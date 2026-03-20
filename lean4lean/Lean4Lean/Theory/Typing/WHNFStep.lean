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

section ReflTransGenHelper
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
end ReflTransGenHelper

variable [InjectivityParams]
open InjectivityParams

/-- `e` is a major premise: it matches the function part of some application
sub-pattern of a known pattern. E.g., `Nat.rec T base step` is a major premise
when the recursor pattern is `app (Nat.rec T base step) (Nat.zero)`.
This is the same definition as `WHIsMajorPremise` in HeadReduction.lean,
but using `InjectivityParams.Pat` instead of `Params.Pat`. -/
def WHIsMajorPremise (e : VExpr) : Prop :=
  ∃ p, (∃ r, Pat p r) ∧ ∃ p₁ p₂, Subpattern (.app p₁ p₂) p ∧ ∃ m1 m2, p₁.Matches e m1 m2

/-- Lambda can't be a major premise: Pattern.Matches can't produce .lam. -/
theorem WHIsMajorPremise.not_lam : ¬WHIsMajorPremise (.lam A e) := nofun

/-- WHIsMajorPremise commutes with instL (forward). -/
theorem WHIsMajorPremise.instL (h : WHIsMajorPremise e) :
    WHIsMajorPremise (e.instL ls) := by
  obtain ⟨p, ⟨r, hp⟩, p₁, p₂, hsub, m1, m2, hm⟩ := h
  have ⟨m1', m2', hm'⟩ := Lean4Lean.Pattern.matches_instL hm (ls := ls)
  exact ⟨p, ⟨r, hp⟩, p₁, p₂, hsub, m1', m2', hm'⟩

/-- WHIsMajorPremise commutes with instL (inverse). -/
theorem WHIsMajorPremise.instL_inv (h : WHIsMajorPremise (e.instL ls)) :
    WHIsMajorPremise e := by
  obtain ⟨p, ⟨r, hp⟩, p₁, p₂, hsub, m1, m2, hm⟩ := h
  have ⟨m1', m2', hm'⟩ := Lean4Lean.Pattern.matches_instL_inv hm (ls := ls)
  exact ⟨p, ⟨r, hp⟩, p₁, p₂, hsub, m1', m2', hm'⟩

/-- A single WHNF step. -/
inductive WHStep : VExpr → VExpr → Prop where
  | beta : WHStep (.app (.lam A body) arg) (body.inst arg)
  | extra : env.defeqs df → ls.length = df.uvars →
            WHStep (df.lhs.instL ls) (df.rhs.instL ls)
  | appFn : WHStep f f' → WHStep (.app f a) (.app f' a)
  | major : WHIsMajorPremise f → WHStep a a' → WHStep (.app f a) (.app f a')

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
  | major => cases hx

/-- No WHStep from sort. -/
theorem WHStep.not_sort (h : WHStep (.sort l) e) : False := by
  generalize hx : VExpr.sort l = x at h
  cases h with
  | beta => cases hx
  | extra hdf hlen => exact absurd hx.symm (sort_not_pat_lhs hdf hlen)
  | appFn => cases hx
  | major => cases hx

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
  | major hm _ ih => exact .major hm.instL ih

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
  | major => cases hx

/-- No WHStep from a bvar expression. -/
theorem WHStep.not_bvar (h : WHStep (.bvar i) e) : False := by
  generalize hx : VExpr.bvar i = x at h
  cases h with
  | beta => cases hx
  | extra hdf hlen => exact absurd hx.symm (bvar_not_pat_lhs hdf hlen)
  | appFn => cases hx
  | major => cases hx

/-- A `varN (const c) n` pattern can't match a `.lam` expression. -/
private theorem varN_const_not_match_lam :
    ∀ {n}, ¬∃ m1 m2, (Pattern.varN (.const c) n).Matches (.lam A body) m1 m2 := by
  intro n ⟨m1, m2, h⟩
  induction n with
  | zero => exact nomatch h
  | succ n ih =>
    simp [Pattern.varN] at h
    exact nomatch h

/-- `.app (.lam A body) arg` can't be an extra rule LHS (lam head contradicts pat_simple). -/
private theorem app_lam_not_pat_lhs
    (hdf : env.defeqs df) (hlen : ls.length = df.uvars) :
    df.lhs.instL ls ≠ .app (.lam A body) arg := by
  intro heq
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  rw [heq] at hm
  have ⟨sp, hsp⟩ := pat_simple hp; subst hsp
  cases sp with
  | defn c => exact nomatch hm
  | iota r m c n =>
    match hm with
    | .app h1 _ => exact varN_const_not_match_lam ⟨_, _, h1⟩

/-- Any subpattern of `varN (.const c) n` is itself `varN (.const c) k` for some k. -/
private theorem Subpattern.varN_const' (H : Subpattern p (.varN (.const c) n)) :
    ∃ k, p = .varN (.const c) k := by
  generalize eq : Pattern.varN (.const c) n = p' at H
  induction H generalizing n with
  | refl => exact ⟨_, eq.symm⟩
  | appL | appR => cases n <;> cases eq
  | varL _ ih => cases n <;> cases eq; exact ih rfl

/-- If `.app p₁ p₂` is a subpattern of a simple pattern, then `.app p₁ p₂` equals the pattern. -/
private theorem simple_app_ip (H : Pat p r) (h : Subpattern (.app p₁ p₂) p) : .app p₁ p₂ = p := by
  obtain ⟨_|_, rfl⟩ := pat_simple H <;> cases h
  · rfl
  · obtain ⟨_|_, ⟨⟩⟩ := Subpattern.varN_const' ‹_›
  · obtain ⟨_|_, ⟨⟩⟩ := Subpattern.varN_const' ‹_›

/-- `varN (.const c) k` can't match a `.lam` expression for any k. -/
private theorem varN_const_not_match_lam' :
    ∀ {k}, ¬∃ m1 m2, (Pattern.varN (.const c) k).Matches (.lam A body) m1 m2 := by
  intro k ⟨m1, m2, h⟩
  induction k with
  | zero => exact nomatch h
  | succ k ih => exact nomatch h

/-- `varN (.const c) n` is never `.app f a` (it's always `.const` or `.var`). -/
private theorem varN_const_ne_app :
    ∀ {n}, Pattern.varN (.const c) n ≠ .app f a := by
  intro n; cases n <;> exact nofun

/-- No pattern equals `.app` of itself (by size). -/
private theorem pattern_ne_app_self (p q : Pattern) : p ≠ Pattern.app p q := by
  intro h; have := congrArg sizeOf h; simp [Pattern.app] at this; omega

/-- Core stuckness lemma: if `e` matches a proper subpattern of a known pattern,
then `e` can't take any WHStep. Mirrors `WHNF.subpattern` from HeadReduction.lean
but for WHStep instead of WHRed. -/
private theorem subpattern_no_step
    (h1 : Pat p r) (h2 : Subpattern p₁ p) (h3 : p₁ ≠ p)
    (h4 : p₁.Matches e m1 m2) : ∀ {e'}, ¬WHStep e e' := by
  intro e' H2
  -- Extract the varN form: p₁ = varN (.const c') n for some c', n
  have ⟨c', n, hpn⟩ : ∃ c' n, p₁ = .varN (.const c') n := by
    obtain ⟨_|_, rfl⟩ := pat_simple h1
    · -- iota case: proper subpatterns are in varN parts
      cases h2 with
      | refl => exact absurd rfl h3
      | appL h => exact let ⟨k, hk⟩ := Subpattern.varN_const' h; ⟨_, k, hk⟩
      | appR h => exact let ⟨k, hk⟩ := Subpattern.varN_const' h; ⟨_, k, hk⟩
    · -- defn case: only subpattern is itself
      cases h2; exact absurd rfl h3
  subst hpn
  -- Prove .const c' is not a full pattern (used in the extra case)
  have not_pat : ∀ s, ¬Pat (.const c') s := fun _ h => by
    have ⟨heq, _, _⟩ := InjectivityParams.pat_uniq h1 h
      (Subpattern.varN (p := .const c') .refl |>.trans h2)
      (Pattern.inter_self _)
    subst heq
    exact h3.symm (h2.antisymm (Subpattern.varN .refl))
  clear h3
  -- Induction on the WHStep derivation
  induction H2 generalizing n with
  | beta =>
    -- varN (.const c') n can never match .app (.lam ..) ..
    generalize Pattern.varN (.const c') n = p' at m1 m2 h4; nomatch h4
  | @extra df' ls' hdf' hlen' =>
    -- The firing rule's pattern overlaps with our subpattern → contradiction
    have ⟨q, s, m1', m2', hq, hm', _⟩ := extra_pat hdf' hlen'
    have ⟨_, _, _, a1, _⟩ := Pattern.matches_inter.mp ⟨⟨_, _, hm'⟩, ⟨_, _, h4⟩⟩
    obtain ⟨⟨_, m, _⟩ | _, rfl⟩ := pat_simple h1 <;> [skip; cases n <;> cases h2]
    have ⟨rfl, eq, _⟩ := InjectivityParams.pat_uniq h1 hq h2 a1
    cases n <;> cases eq
    exact not_pat _ h1
  | appFn h_step ih =>
    -- e = .app f₁ a₁, WHStep f₁ f₁'. Pattern depth decreases.
    let n+1 := n; let .var h4' := h4
    exact ih n (Subpattern.trans (.varL .refl) h2) h4'
  | major hm _ ih =>
    -- e = .app f₁ a₁, WHIsMajorPremise f₁, WHStep a₁ a₁'
    let n+1 := n; let .var h4' := h4
    let ⟨p', ⟨s, h1'⟩, p₁', p₂', h2', _, _, h3'⟩ := hm
    cases simple_app_ip h1' h2'
    obtain ⟨⟨_, m, _⟩ | _, rfl⟩ := pat_simple h1 <;> [skip; cases n <;> cases h2]
    have ⟨_, _, _, a1, _⟩ := Pattern.matches_inter.mp ⟨⟨_, _, h3'⟩, ⟨_, _, h4'⟩⟩
    cases h2 with
    | appL h2 =>
      cases (InjectivityParams.pat_app_l_uniq h1 h1' .refl .refl h2).symm.trans a1
    | appR h2 =>
      cases (InjectivityParams.pat_app_uniq h1' h1 .refl .refl .refl
        (Subpattern.trans (.varL .refl) h2)).symm.trans a1

/-- The argument part of an iota pattern LHS can't take any WHStep. -/
theorem extra_app_arg_stuck (hdf : env.defeqs df) (hlen : ls.length = df.uvars)
    (hlhs : df.lhs.instL ls = .app f a) : ∀ {e'}, ¬WHStep a e' := by
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  rw [hlhs] at hm
  have ⟨sp, hsp⟩ := pat_simple hp; subst hsp
  cases sp with
  | defn c => exact nomatch hm
  | iota r_name m_val c n_val =>
    let .app _ h_arg := hm
    intro; exact subpattern_no_step hp (.appR .refl) (fun heq => absurd heq varN_const_ne_app) h_arg

/-- A major premise can't take any WHStep (it's stuck waiting for its argument). -/
theorem WHIsMajorPremise.no_step (hm : WHIsMajorPremise f) : ∀ {e'}, ¬WHStep f e' := by
  obtain ⟨p, ⟨r, hp⟩, p₁, p₂, hsub, m1, m2, hmatch⟩ := hm
  refine subpattern_no_step hp (Subpattern.trans (.appL .refl) hsub) ?_ hmatch
  intro heq
  have h := simple_app_ip hp hsub
  -- heq : p₁ = p, h : .app p₁ p₂ = p. So p₁ = .app p₁ p₂, impossible by size.
  exact pattern_ne_app_self _ _ (heq.trans h.symm)

/-- The function part of an iota pattern LHS can't take any WHStep. -/
theorem extra_app_fn_stuck (hdf : env.defeqs df) (hlen : ls.length = df.uvars)
    (hlhs : df.lhs.instL ls = .app f a) : ∀ {e'}, ¬WHStep f e' := by
  have ⟨p, r, m1, m2, hp, hm, _⟩ := extra_pat hdf hlen
  rw [hlhs] at hm
  have ⟨sp, hsp⟩ := pat_simple hp; subst hsp
  cases sp with
  | defn c => exact nomatch hm
  | iota r_name m_val c n_val =>
    let .app h_fn _ := hm
    intro; exact subpattern_no_step hp (.appL .refl) (fun heq => absurd heq varN_const_ne_app) h_fn

/-- Inversion for WHStep on `.const c us`: the only applicable constructor is `extra`. -/
theorem WHStep.const_inv {c us} (h : WHStep (.const c us) e') :
    ∃ df ls, env.defeqs df ∧ ls.length = df.uvars ∧
      df.lhs.instL ls = .const c us ∧ e' = df.rhs.instL ls := by
  -- Auxiliary: case split on WHStep with generalized source
  have : ∀ {e₁ e₂ : VExpr}, WHStep e₁ e₂ → e₁ = .const c us →
      ∃ df ls, env.defeqs df ∧ ls.length = df.uvars ∧
        df.lhs.instL ls = .const c us ∧ e₂ = df.rhs.instL ls := by
    intro e₁ e₂ hs heq
    induction hs with
    | beta => cases heq
    | extra hdf hlen => exact ⟨_, _, hdf, hlen, heq, rfl⟩
    | appFn => cases heq
    | major => cases heq
  exact this h rfl

/-- Inversion for WHStep on `.app f a`: the applicable constructors are
beta, extra, appFn, or major. -/
theorem WHStep.app_inv {f a} (h : WHStep (.app f a) e') :
    (∃ A body, f = .lam A body ∧ e' = body.inst a) ∨
    (∃ df ls, env.defeqs df ∧ ls.length = df.uvars ∧
      df.lhs.instL ls = .app f a ∧ e' = df.rhs.instL ls) ∨
    (∃ f', WHStep f f' ∧ e' = .app f' a) ∨
    (∃ a', WHIsMajorPremise f ∧ WHStep a a' ∧ e' = .app f a') := by
  have : ∀ {e₁ e₂ : VExpr}, WHStep e₁ e₂ → e₁ = .app f a →
      (∃ A body, f = .lam A body ∧ e₂ = body.inst a) ∨
      (∃ df ls, env.defeqs df ∧ ls.length = df.uvars ∧
        df.lhs.instL ls = .app f a ∧ e₂ = df.rhs.instL ls) ∨
      (∃ f', WHStep f f' ∧ e₂ = .app f' a) ∨
      (∃ a', WHIsMajorPremise f ∧ WHStep a a' ∧ e₂ = .app f a') := by
    intro e₁ e₂ hs heq
    induction hs with
    | beta =>
      cases heq with | refl => exact .inl ⟨_, _, rfl, rfl⟩
    | extra hdf hlen => exact .inr (.inl ⟨_, _, hdf, hlen, heq, rfl⟩)
    | appFn h _ =>
      cases heq with | refl => exact .inr (.inr (.inl ⟨_, h, rfl⟩))
    | major hm h _ =>
      cases heq with | refl => exact .inr (.inr (.inr ⟨_, hm, h, rfl⟩))
  exact this h rfl

/-- WHStep is deterministic: each expression steps to at most one result. -/
theorem WHStep.deterministic (h1 : WHStep e e₁) (h2 : WHStep e e₂) : e₁ = e₂ := by
  induction h1 generalizing e₂ with
  | beta =>
    rcases h2.app_inv with ⟨A', body', heq1, heq2⟩ | ⟨df, ls, hdf, hlen, hlhs, heq2⟩ |
        ⟨f', hstep, heq2⟩ | ⟨a', hm, hstep, heq2⟩
    · cases heq1; exact heq2.symm
    · exact absurd hlhs (app_lam_not_pat_lhs hdf hlen)
    · exact absurd hstep WHStep.not_lam
    · exact absurd hm WHIsMajorPremise.not_lam
  | extra hdf hlen =>
    -- h2 : WHStep (df.lhs.instL ls) e₂
    -- Case-split: df.lhs.instL ls is const or app (by pat_simple)
    rcases pat_lhs_const_or_app hdf hlen with ⟨c, us, heq_lhs⟩ | ⟨f, a, heq_lhs⟩
    · -- Const case: df.lhs.instL ls = .const c us
      rw [heq_lhs] at h2
      have ⟨df₂, ls₂, hdf₂, hlen₂, hlhs₂, heq₂⟩ := h2.const_inv
      rw [heq₂]
      exact extra_det hdf hlen hdf₂ hlen₂ (hlhs₂.symm ▸ heq_lhs)
    · -- App case: df.lhs.instL ls = .app f a
      rw [heq_lhs] at h2
      rcases h2.app_inv with ⟨A, body, heq_f, heq₂⟩ | ⟨df₂, ls₂, hdf₂, hlen₂, hlhs₂, heq₂⟩ |
          ⟨f', hstep, heq₂⟩ | ⟨a', hm, hstep, heq₂⟩
      · -- beta: f = .lam A body — impossible (iota fn is const-headed)
        subst heq_f
        exact absurd heq_lhs (app_lam_not_pat_lhs hdf hlen)
      · -- extra: same expression matches another rule → use extra_det
        rw [heq₂]
        exact extra_det hdf hlen hdf₂ hlen₂ (hlhs₂.symm ▸ heq_lhs)
      · -- appFn: WHStep f f' — contradicts extra_app_fn_stuck
        exact absurd hstep (extra_app_fn_stuck hdf hlen heq_lhs)
      · -- major: WHIsMajorPremise f, WHStep a a' — argument can't step when rule fires
        exact absurd hstep (extra_app_arg_stuck hdf hlen heq_lhs)
  | appFn h1 ih =>
    rcases h2.app_inv with ⟨A', body', heq1, heq2⟩ | ⟨df, ls, hdf, hlen, hlhs, heq2⟩ |
        ⟨f', hstep, heq2⟩ | ⟨a', hm, hstep, heq2⟩
    · cases heq1; exact absurd h1 WHStep.not_lam
    · -- appFn vs extra: f steps but pattern fires on .app f a
      exact absurd h1 (extra_app_fn_stuck hdf hlen hlhs)
    · subst heq2; congr 1; exact ih hstep
    · exact absurd h1 (hm.no_step)
  | major hm h1 ih =>
    rcases h2.app_inv with ⟨A', body', heq1, heq2⟩ | ⟨df, ls, hdf, hlen, hlhs, heq2⟩ |
        ⟨f', hstep, heq2⟩ | ⟨a', hm', hstep, heq2⟩
    · cases heq1; exact absurd hm WHIsMajorPremise.not_lam
    · -- major vs extra: pattern fires but argument also steps
      exact absurd h1 (extra_app_arg_stuck hdf hlen hlhs)
    · exact absurd hstep (hm.no_step)
    · subst heq2; congr 1; exact ih hstep

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
  | major hm _ ih =>
    match e, heq with
    | .app f a, heq =>
      simp [VExpr.instL] at heq
      obtain ⟨rfl, rfl⟩ := heq
      have ⟨a₀, hstep, haeq⟩ := ih rfl
      exact ⟨.app f a₀, .major hm.instL_inv hstep, by simp [VExpr.instL, haeq]⟩

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

/-- If `e.instL ls →* sort l`, then `e →* sort l'` with `l = l'.inst ls`. -/
theorem SortLikeWith.instL_inv {e : VExpr}
    (h : SortLikeWith (e.instL ls) l) :
    ∃ l', SortLikeWith e l' ∧ l = l'.inst ls := by
  have ⟨e₀, hsteps, heq⟩ := WHSteps.instL_inv h
  revert heq
  cases e₀ with
  | sort l' =>
    simp [VExpr.instL]
    intro h1; exact ⟨l', hsteps, h1⟩
  | bvar i => simp [VExpr.instL]
  | const c us => simp [VExpr.instL]
  | app f a => simp [VExpr.instL]
  | forallE A B => simp [VExpr.instL]
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
