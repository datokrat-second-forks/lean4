/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Transport
public import Init.Control.Lawful.Basic
public import Init.Control.Lawful.MonadLift.Basic

public section

/-!
# Congruences for transporting lawfulness instances

Each congruence concludes at the transported instance of its parent class (see `Init.Transport`),
so it only applies to an instance that was itself transported.
-/

universe u v w

open Lean.CanonicalEquivalence (invFun_toFun toFun_invFun)

section
variable {m n : Type u → Type v} (e : ∀ α, Lean.CanonicalEquivalence (m α) (n α))

theorem LawfulFunctor.ofEquiv [i : Functor n] [h : LawfulFunctor n] :
    @LawfulFunctor m (Functor.ofEquiv e i) :=
  letI := Functor.ofEquiv e i
  { map_const := funext fun x => funext fun y =>
      show (e _).invFun (Functor.mapConst x ((e _).toFun y)) =
        (e _).invFun (Function.const _ x <$> (e _).toFun y) by
        rw [map_const]; rfl
    id_map x := show (e _).invFun (id <$> (e _).toFun x) = x by
      rw [id_map, invFun_toFun]
    comp_map g h x :=
      show (e _).invFun ((h ∘ g) <$> (e _).toFun x) =
        (e _).invFun (h <$> (e _).toFun ((e _).invFun (g <$> (e _).toFun x))) by
        rw [toFun_invFun, comp_map] }

theorem LawfulApplicative.ofEquiv [i : Applicative n] [h : LawfulApplicative n] :
    @LawfulApplicative m (Applicative.ofEquiv e i) :=
  letI := Applicative.ofEquiv e i
  { LawfulFunctor.ofEquiv e (i := i.toFunctor) with
    seqLeft_eq x y :=
      show (e _).invFun ((e _).toFun x <* (e _).toFun y) =
        (e _).invFun ((e _).toFun ((e _).invFun (Function.const _ <$> (e _).toFun x)) <*>
          (e _).toFun y) by
        rw [toFun_invFun, seqLeft_eq]
    seqRight_eq x y :=
      show (e _).invFun ((e _).toFun x *> (e _).toFun y) =
        (e _).invFun ((e _).toFun ((e _).invFun (Function.const _ id <$> (e _).toFun x)) <*>
          (e _).toFun y) by
        rw [toFun_invFun, seqRight_eq]
    pure_seq g x :=
      show (e _).invFun ((e _).toFun ((e _).invFun (pure g)) <*> (e _).toFun x) =
        (e _).invFun (g <$> (e _).toFun x) by
        rw [toFun_invFun, pure_seq]
    map_pure g x :=
      show (e _).invFun (g <$> (e _).toFun ((e _).invFun (pure x))) = (e _).invFun (pure (g x)) by
        rw [toFun_invFun, map_pure]
    seq_pure g x :=
      show (e _).invFun ((e _).toFun g <*> (e _).toFun ((e _).invFun (pure x))) =
        (e _).invFun ((fun h => h x) <$> (e _).toFun g) by
        rw [toFun_invFun, seq_pure]
    seq_assoc x g h :=
      show (e _).invFun ((e _).toFun h <*> (e _).toFun ((e _).invFun ((e _).toFun g <*>
          (e _).toFun x))) =
        (e _).invFun ((e _).toFun ((e _).invFun ((e _).toFun ((e _).invFun
          (Function.comp <$> (e _).toFun h)) <*> (e _).toFun g)) <*> (e _).toFun x) by
        simp only [toFun_invFun, seq_assoc] }

theorem LawfulMonad.ofEquiv [i : Monad n] [h : LawfulMonad n] :
    @LawfulMonad m (Monad.ofEquiv e i) :=
  letI := Monad.ofEquiv e i
  LawfulMonad.mk' m
    (id_map := fun x => show (e _).invFun (id <$> (e _).toFun x) = x by
      rw [id_map, invFun_toFun])
    (pure_bind := fun x f =>
      show (e _).invFun ((e _).toFun ((e _).invFun (pure x)) >>= fun a => (e _).toFun (f a)) =
        f x by
        rw [toFun_invFun, pure_bind, invFun_toFun])
    (bind_assoc := fun x f g =>
      show (e _).invFun ((e _).toFun ((e _).invFun ((e _).toFun x >>= fun a => (e _).toFun (f a)))
          >>= fun b => (e _).toFun (g b)) =
        (e _).invFun ((e _).toFun x >>= fun a =>
          (e _).toFun ((e _).invFun ((e _).toFun (f a) >>= fun b => (e _).toFun (g b)))) by
        simp only [toFun_invFun, bind_assoc])
    (map_const := fun x y =>
      show (e _).invFun (Functor.mapConst x ((e _).toFun y)) =
        (e _).invFun (Function.const _ x <$> (e _).toFun y) by
        rw [map_const]; rfl)
    (seqLeft_eq := fun x y =>
      show (e _).invFun ((e _).toFun x <* (e _).toFun y) =
        (e _).invFun ((e _).toFun x >>= fun a => (e _).toFun ((e _).invFun
          ((e _).toFun y >>= fun _ => (e _).toFun ((e _).invFun (pure a))))) by
        simp only [toFun_invFun, seqLeft_eq_bind])
    (seqRight_eq := fun x y =>
      show (e _).invFun ((e _).toFun x *> (e _).toFun y) =
        (e _).invFun ((e _).toFun x >>= fun _ => (e _).toFun y) by
        rw [seqRight_eq_bind])
    (bind_pure_comp := fun f x =>
      show (e _).invFun ((e _).toFun x >>= fun a => (e _).toFun ((e _).invFun (pure (f a)))) =
        (e _).invFun (f <$> (e _).toFun x) by
        simp only [toFun_invFun, bind_pure_comp])
    (bind_map := fun f x =>
      show (e _).invFun ((e _).toFun f >>= fun g =>
          (e _).toFun ((e _).invFun (g <$> (e _).toFun x))) =
        (e _).invFun ((e _).toFun f <*> (e _).toFun x) by
        simp only [toFun_invFun, bind_map])

@[transport] protected abbrev LawfulFunctor.canonicalCongr [i : Functor n] :
    Lean.CanonicalEquivalence (@LawfulFunctor m ((Functor.canonicalCongr e).invFun i))
      (@LawfulFunctor n i) where
  toFun h := (Functor.canonicalCongr e).right_inv i ▸
    LawfulFunctor.ofEquiv (i := Functor.ofEquiv e i) (h := h) fun α => (e α).symm
  invFun _ := LawfulFunctor.ofEquiv e
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulApplicative.canonicalCongr [i : Applicative n] :
    Lean.CanonicalEquivalence (@LawfulApplicative m ((Applicative.canonicalCongr e).invFun i))
      (@LawfulApplicative n i) where
  toFun h := (Applicative.canonicalCongr e).right_inv i ▸
    LawfulApplicative.ofEquiv (i := Applicative.ofEquiv e i) (h := h) fun α => (e α).symm
  invFun _ := LawfulApplicative.ofEquiv e
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulMonad.canonicalCongr [i : Monad n] :
    Lean.CanonicalEquivalence (@LawfulMonad m ((Monad.canonicalCongr e).invFun i))
      (@LawfulMonad n i) where
  toFun h := (Monad.canonicalCongr e).right_inv i ▸
    LawfulMonad.ofEquiv (i := Monad.ofEquiv e i) (h := h) fun α => (e α).symm
  invFun _ := LawfulMonad.ofEquiv e
  left_inv _ := rfl
  right_inv _ := rfl

theorem WeaklyLawfulMonadAttach.ofEquiv [iM : Monad n] [iA : MonadAttach n]
    [h : WeaklyLawfulMonadAttach n] :
    @WeaklyLawfulMonadAttach m (Monad.ofEquiv e iM) (MonadAttach.ofEquiv e iA) :=
  letI := Monad.ofEquiv e iM
  letI := MonadAttach.ofEquiv e iA
  { map_attach {_ x} :=
      show (e _).invFun (Subtype.val <$> (e _).toFun ((e _).invFun (iA.attach ((e _).toFun x)))) =
        x by
        rw [toFun_invFun, WeaklyLawfulMonadAttach.map_attach, invFun_toFun] }

theorem LawfulMonadAttach.ofEquiv [iM : Monad n] [iA : MonadAttach n] [h : LawfulMonadAttach n] :
    @LawfulMonadAttach m (Monad.ofEquiv e iM) (MonadAttach.ofEquiv e iA) :=
  letI := Monad.ofEquiv e iM
  letI := MonadAttach.ofEquiv e iA
  { WeaklyLawfulMonadAttach.ofEquiv e (h := h.toWeaklyLawfulMonadAttach) with
    canReturn_map_imp {_ _ x _} hc := by
      change iA.CanReturn ((e _).toFun ((e _).invFun (Subtype.val <$> (e _).toFun x))) _ at hc
      rw [toFun_invFun] at hc
      exact LawfulMonadAttach.canReturn_map_imp hc }

@[transport] protected abbrev WeaklyLawfulMonadAttach.canonicalCongr [iM : Monad n]
    [iA : MonadAttach n] :
    Lean.CanonicalEquivalence
      (@WeaklyLawfulMonadAttach m ((Monad.canonicalCongr e).invFun iM)
        ((MonadAttach.canonicalCongr e).invFun iA))
      (@WeaklyLawfulMonadAttach n iM iA) where
  toFun h :=
    (Monad.canonicalCongr e).right_inv iM ▸ (MonadAttach.canonicalCongr e).right_inv iA ▸
      WeaklyLawfulMonadAttach.ofEquiv (iM := Monad.ofEquiv e iM) (iA := MonadAttach.ofEquiv e iA)
        (h := h) fun α => (e α).symm
  invFun _ := WeaklyLawfulMonadAttach.ofEquiv e
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulMonadAttach.canonicalCongr [iM : Monad n] [iA : MonadAttach n] :
    Lean.CanonicalEquivalence
      (@LawfulMonadAttach m ((Monad.canonicalCongr e).invFun iM)
        ((MonadAttach.canonicalCongr e).invFun iA))
      (@LawfulMonadAttach n iM iA) where
  toFun h :=
    (Monad.canonicalCongr e).right_inv iM ▸ (MonadAttach.canonicalCongr e).right_inv iA ▸
      LawfulMonadAttach.ofEquiv (iM := Monad.ofEquiv e iM) (iA := MonadAttach.ofEquiv e iA)
        (h := h) fun α => (e α).symm
  invFun _ := LawfulMonadAttach.ofEquiv e
  left_inv _ := rfl
  right_inv _ := rfl

end

section
variable {m : Type u → Type v} {n n' : Type u → Type w}
  (e : ∀ α, Lean.CanonicalEquivalence (n α) (n' α))

theorem LawfulMonadLift.ofEquiv [Monad m] [iN : Monad n'] [iL : MonadLift m n']
    [h : LawfulMonadLift m n'] :
    @LawfulMonadLift m n _ (Monad.ofEquiv e iN) (MonadLift.ofEquiv e iL) :=
  letI := Monad.ofEquiv e iN
  letI := MonadLift.ofEquiv e iL
  { monadLift_pure a :=
      show (e _).invFun (iL.monadLift (pure a)) = (e _).invFun (pure a) by
        rw [LawfulMonadLift.monadLift_pure]
    monadLift_bind ma f :=
      show (e _).invFun (iL.monadLift (ma >>= f)) =
        (e _).invFun ((e _).toFun ((e _).invFun (iL.monadLift ma)) >>= fun x =>
          (e _).toFun ((e _).invFun (iL.monadLift (f x)))) by
        simp only [toFun_invFun, LawfulMonadLift.monadLift_bind] }

@[transport] protected abbrev LawfulMonadLift.canonicalCongr [Monad m] [iN : Monad n']
    [iL : MonadLift m n'] :
    Lean.CanonicalEquivalence
      (@LawfulMonadLift m n _ ((Monad.canonicalCongr e).invFun iN)
        ((MonadLift.canonicalCongr e).invFun iL))
      (@LawfulMonadLift m n' _ iN iL) where
  toFun h :=
    (Monad.canonicalCongr e).right_inv iN ▸ (MonadLift.canonicalCongr e).right_inv iL ▸
      LawfulMonadLift.ofEquiv (iN := Monad.ofEquiv e iN) (iL := MonadLift.ofEquiv e iL) (h := h)
        fun α => (e α).symm
  invFun _ := LawfulMonadLift.ofEquiv e
  left_inv _ := rfl
  right_inv _ := rfl

end

section
variable {m m' : Type u → Type v} {n n' : Type u → Type w}
  (e₁ : ∀ α, Lean.CanonicalEquivalence (m α) (m' α))
  (e₂ : ∀ α, Lean.CanonicalEquivalence (n α) (n' α))

theorem LawfulMonadLift.ofEquiv₂ [iM : Monad m'] [iN : Monad n'] [iL : MonadLift m' n']
    [h : LawfulMonadLift m' n'] :
    @LawfulMonadLift m n (Monad.ofEquiv e₁ iM) (Monad.ofEquiv e₂ iN)
      (MonadLift.ofEquiv₂ e₁ e₂ iL) :=
  letI := Monad.ofEquiv e₁ iM
  letI := Monad.ofEquiv e₂ iN
  letI := MonadLift.ofEquiv₂ e₁ e₂ iL
  { monadLift_pure a :=
      show (e₂ _).invFun (iL.monadLift ((e₁ _).toFun ((e₁ _).invFun (pure a)))) =
        (e₂ _).invFun (pure a) by
        rw [toFun_invFun, LawfulMonadLift.monadLift_pure]
    monadLift_bind ma f :=
      show (e₂ _).invFun (iL.monadLift ((e₁ _).toFun ((e₁ _).invFun
          ((e₁ _).toFun ma >>= fun a => (e₁ _).toFun (f a))))) =
        (e₂ _).invFun ((e₂ _).toFun ((e₂ _).invFun (iL.monadLift ((e₁ _).toFun ma))) >>= fun x =>
          (e₂ _).toFun ((e₂ _).invFun (iL.monadLift ((e₁ _).toFun (f x))))) by
        simp only [toFun_invFun, LawfulMonadLift.monadLift_bind] }

@[transport] protected abbrev LawfulMonadLift.canonicalCongr₂ [iM : Monad m'] [iN : Monad n']
    [iL : MonadLift m' n'] :
    Lean.CanonicalEquivalence
      (@LawfulMonadLift m n ((Monad.canonicalCongr e₁).invFun iM)
        ((Monad.canonicalCongr e₂).invFun iN) ((MonadLift.canonicalCongr₂ e₁ e₂).invFun iL))
      (@LawfulMonadLift m' n' iM iN iL) where
  toFun h :=
    (Monad.canonicalCongr e₁).right_inv iM ▸ (Monad.canonicalCongr e₂).right_inv iN ▸
      (MonadLift.canonicalCongr₂ e₁ e₂).right_inv iL ▸
      LawfulMonadLift.ofEquiv₂ (iM := Monad.ofEquiv e₁ iM) (iN := Monad.ofEquiv e₂ iN)
        (iL := MonadLift.ofEquiv₂ e₁ e₂ iL) (h := h) (fun α => (e₁ α).symm) fun α => (e₂ α).symm
  invFun _ := LawfulMonadLift.ofEquiv₂ e₁ e₂
  left_inv _ := rfl
  right_inv _ := rfl

end
