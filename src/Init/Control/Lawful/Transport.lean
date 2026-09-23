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

theorem LawfulFunctor.ofEquiv [i : Functor m] [h : LawfulFunctor m] :
    @LawfulFunctor n (Functor.ofEquiv e i) :=
  letI := Functor.ofEquiv e i
  { map_const := funext fun x => funext fun y =>
      show (e _).toFun (Functor.mapConst x ((e _).invFun y)) =
        (e _).toFun (Function.const _ x <$> (e _).invFun y) by
        rw [map_const]; rfl
    id_map x := show (e _).toFun (id <$> (e _).invFun x) = x by
      rw [id_map, toFun_invFun]
    comp_map g h x :=
      show (e _).toFun ((h ∘ g) <$> (e _).invFun x) =
        (e _).toFun (h <$> (e _).invFun ((e _).toFun (g <$> (e _).invFun x))) by
        rw [invFun_toFun, comp_map] }

theorem LawfulApplicative.ofEquiv [i : Applicative m] [h : LawfulApplicative m] :
    @LawfulApplicative n (Applicative.ofEquiv e i) :=
  letI := Applicative.ofEquiv e i
  { LawfulFunctor.ofEquiv e (i := i.toFunctor) with
    seqLeft_eq x y :=
      show (e _).toFun ((e _).invFun x <* (e _).invFun y) =
        (e _).toFun ((e _).invFun ((e _).toFun (Function.const _ <$> (e _).invFun x)) <*>
          (e _).invFun y) by
        rw [invFun_toFun, seqLeft_eq]
    seqRight_eq x y :=
      show (e _).toFun ((e _).invFun x *> (e _).invFun y) =
        (e _).toFun ((e _).invFun ((e _).toFun (Function.const _ id <$> (e _).invFun x)) <*>
          (e _).invFun y) by
        rw [invFun_toFun, seqRight_eq]
    pure_seq g x :=
      show (e _).toFun ((e _).invFun ((e _).toFun (pure g)) <*> (e _).invFun x) =
        (e _).toFun (g <$> (e _).invFun x) by
        rw [invFun_toFun, pure_seq]
    map_pure g x :=
      show (e _).toFun (g <$> (e _).invFun ((e _).toFun (pure x))) = (e _).toFun (pure (g x)) by
        rw [invFun_toFun, map_pure]
    seq_pure g x :=
      show (e _).toFun ((e _).invFun g <*> (e _).invFun ((e _).toFun (pure x))) =
        (e _).toFun ((fun h => h x) <$> (e _).invFun g) by
        rw [invFun_toFun, seq_pure]
    seq_assoc x g h :=
      show (e _).toFun ((e _).invFun h <*> (e _).invFun ((e _).toFun ((e _).invFun g <*>
          (e _).invFun x))) =
        (e _).toFun ((e _).invFun ((e _).toFun ((e _).invFun ((e _).toFun
          (Function.comp <$> (e _).invFun h)) <*> (e _).invFun g)) <*> (e _).invFun x) by
        simp only [invFun_toFun, seq_assoc] }

theorem LawfulMonad.ofEquiv [i : Monad m] [h : LawfulMonad m] :
    @LawfulMonad n (Monad.ofEquiv e i) :=
  letI := Monad.ofEquiv e i
  LawfulMonad.mk' n
    (id_map := fun x => show (e _).toFun (id <$> (e _).invFun x) = x by
      rw [id_map, toFun_invFun])
    (pure_bind := fun x f =>
      show (e _).toFun ((e _).invFun ((e _).toFun (pure x)) >>= fun a => (e _).invFun (f a)) =
        f x by
        rw [invFun_toFun, pure_bind, toFun_invFun])
    (bind_assoc := fun x f g =>
      show (e _).toFun ((e _).invFun ((e _).toFun ((e _).invFun x >>= fun a => (e _).invFun (f a)))
          >>= fun b => (e _).invFun (g b)) =
        (e _).toFun ((e _).invFun x >>= fun a =>
          (e _).invFun ((e _).toFun ((e _).invFun (f a) >>= fun b => (e _).invFun (g b)))) by
        simp only [invFun_toFun, bind_assoc])
    (map_const := fun x y =>
      show (e _).toFun (Functor.mapConst x ((e _).invFun y)) =
        (e _).toFun (Function.const _ x <$> (e _).invFun y) by
        rw [map_const]; rfl)
    (seqLeft_eq := fun x y =>
      show (e _).toFun ((e _).invFun x <* (e _).invFun y) =
        (e _).toFun ((e _).invFun x >>= fun a => (e _).invFun ((e _).toFun
          ((e _).invFun y >>= fun _ => (e _).invFun ((e _).toFun (pure a))))) by
        simp only [invFun_toFun, seqLeft_eq_bind])
    (seqRight_eq := fun x y =>
      show (e _).toFun ((e _).invFun x *> (e _).invFun y) =
        (e _).toFun ((e _).invFun x >>= fun _ => (e _).invFun y) by
        rw [seqRight_eq_bind])
    (bind_pure_comp := fun f x =>
      show (e _).toFun ((e _).invFun x >>= fun a => (e _).invFun ((e _).toFun (pure (f a)))) =
        (e _).toFun (f <$> (e _).invFun x) by
        simp only [invFun_toFun, bind_pure_comp])
    (bind_map := fun f x =>
      show (e _).toFun ((e _).invFun f >>= fun g =>
          (e _).invFun ((e _).toFun (g <$> (e _).invFun x))) =
        (e _).toFun ((e _).invFun f <*> (e _).invFun x) by
        simp only [invFun_toFun, bind_map])

@[transport] protected abbrev LawfulFunctor.canonicalCongr [i : Functor m] :
    Lean.CanonicalEquivalence (@LawfulFunctor m i)
      (@LawfulFunctor n ((Functor.canonicalCongr e).toFun i)) where
  toFun _ := LawfulFunctor.ofEquiv e
  invFun h := (Functor.canonicalCongr e).left_inv i ▸
    LawfulFunctor.ofEquiv (i := Functor.ofEquiv e i) (h := h) fun α => (e α).symm
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulApplicative.canonicalCongr [i : Applicative m] :
    Lean.CanonicalEquivalence (@LawfulApplicative m i)
      (@LawfulApplicative n ((Applicative.canonicalCongr e).toFun i)) where
  toFun _ := LawfulApplicative.ofEquiv e
  invFun h := (Applicative.canonicalCongr e).left_inv i ▸
    LawfulApplicative.ofEquiv (i := Applicative.ofEquiv e i) (h := h) fun α => (e α).symm
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulMonad.canonicalCongr [i : Monad m] :
    Lean.CanonicalEquivalence (@LawfulMonad m i)
      (@LawfulMonad n ((Monad.canonicalCongr e).toFun i)) where
  toFun _ := LawfulMonad.ofEquiv e
  invFun h := (Monad.canonicalCongr e).left_inv i ▸
    LawfulMonad.ofEquiv (i := Monad.ofEquiv e i) (h := h) fun α => (e α).symm
  left_inv _ := rfl
  right_inv _ := rfl

theorem WeaklyLawfulMonadAttach.ofEquiv [iM : Monad m] [iA : MonadAttach m]
    [h : WeaklyLawfulMonadAttach m] :
    @WeaklyLawfulMonadAttach n (Monad.ofEquiv e iM) (MonadAttach.ofEquiv e iA) :=
  letI := Monad.ofEquiv e iM
  letI := MonadAttach.ofEquiv e iA
  { map_attach {_ x} :=
      show (e _).toFun (Subtype.val <$> (e _).invFun ((e _).toFun (iA.attach ((e _).invFun x)))) =
        x by
        rw [invFun_toFun, WeaklyLawfulMonadAttach.map_attach, toFun_invFun] }

theorem LawfulMonadAttach.ofEquiv [iM : Monad m] [iA : MonadAttach m] [h : LawfulMonadAttach m] :
    @LawfulMonadAttach n (Monad.ofEquiv e iM) (MonadAttach.ofEquiv e iA) :=
  letI := Monad.ofEquiv e iM
  letI := MonadAttach.ofEquiv e iA
  { WeaklyLawfulMonadAttach.ofEquiv e (h := h.toWeaklyLawfulMonadAttach) with
    canReturn_map_imp {_ _ x _} hc := by
      change iA.CanReturn ((e _).invFun ((e _).toFun (Subtype.val <$> (e _).invFun x))) _ at hc
      rw [invFun_toFun] at hc
      exact LawfulMonadAttach.canReturn_map_imp hc }

@[transport] protected abbrev WeaklyLawfulMonadAttach.canonicalCongr [iM : Monad m]
    [iA : MonadAttach m] :
    Lean.CanonicalEquivalence (@WeaklyLawfulMonadAttach m iM iA)
      (@WeaklyLawfulMonadAttach n ((Monad.canonicalCongr e).toFun iM)
        ((MonadAttach.canonicalCongr e).toFun iA)) where
  toFun _ := WeaklyLawfulMonadAttach.ofEquiv e
  invFun h :=
    (Monad.canonicalCongr e).left_inv iM ▸ (MonadAttach.canonicalCongr e).left_inv iA ▸
      WeaklyLawfulMonadAttach.ofEquiv (iM := Monad.ofEquiv e iM) (iA := MonadAttach.ofEquiv e iA)
        (h := h) fun α => (e α).symm
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulMonadAttach.canonicalCongr [iM : Monad m] [iA : MonadAttach m] :
    Lean.CanonicalEquivalence (@LawfulMonadAttach m iM iA)
      (@LawfulMonadAttach n ((Monad.canonicalCongr e).toFun iM)
        ((MonadAttach.canonicalCongr e).toFun iA)) where
  toFun _ := LawfulMonadAttach.ofEquiv e
  invFun h :=
    (Monad.canonicalCongr e).left_inv iM ▸ (MonadAttach.canonicalCongr e).left_inv iA ▸
      LawfulMonadAttach.ofEquiv (iM := Monad.ofEquiv e iM) (iA := MonadAttach.ofEquiv e iA)
        (h := h) fun α => (e α).symm
  left_inv _ := rfl
  right_inv _ := rfl

end

section
variable {m : Type u → Type v} {n n' : Type u → Type w}
  (e : ∀ α, Lean.CanonicalEquivalence (n α) (n' α))

theorem LawfulMonadLift.ofEquiv [Monad m] [iN : Monad n] [iL : MonadLift m n]
    [h : LawfulMonadLift m n] :
    @LawfulMonadLift m n' _ (Monad.ofEquiv e iN) (MonadLift.ofEquiv e iL) :=
  letI := Monad.ofEquiv e iN
  letI := MonadLift.ofEquiv e iL
  { monadLift_pure a :=
      show (e _).toFun (iL.monadLift (pure a)) = (e _).toFun (pure a) by
        rw [LawfulMonadLift.monadLift_pure]
    monadLift_bind ma f :=
      show (e _).toFun (iL.monadLift (ma >>= f)) =
        (e _).toFun ((e _).invFun ((e _).toFun (iL.monadLift ma)) >>= fun x =>
          (e _).invFun ((e _).toFun (iL.monadLift (f x)))) by
        simp only [invFun_toFun, LawfulMonadLift.monadLift_bind] }

@[transport] protected abbrev LawfulMonadLift.canonicalCongr [Monad m] [iN : Monad n]
    [iL : MonadLift m n] :
    Lean.CanonicalEquivalence (@LawfulMonadLift m n _ iN iL)
      (@LawfulMonadLift m n' _ ((Monad.canonicalCongr e).toFun iN)
        ((MonadLift.canonicalCongr e).toFun iL)) where
  toFun _ := LawfulMonadLift.ofEquiv e
  invFun h :=
    (Monad.canonicalCongr e).left_inv iN ▸ (MonadLift.canonicalCongr e).left_inv iL ▸
      LawfulMonadLift.ofEquiv (iN := Monad.ofEquiv e iN) (iL := MonadLift.ofEquiv e iL) (h := h)
        fun α => (e α).symm
  left_inv _ := rfl
  right_inv _ := rfl

end

section
variable {m m' : Type u → Type v} {n n' : Type u → Type w}
  (e₁ : ∀ α, Lean.CanonicalEquivalence (m α) (m' α))
  (e₂ : ∀ α, Lean.CanonicalEquivalence (n α) (n' α))

theorem LawfulMonadLift.ofEquiv₂ [iM : Monad m] [iN : Monad n] [iL : MonadLift m n]
    [h : LawfulMonadLift m n] :
    @LawfulMonadLift m' n' (Monad.ofEquiv e₁ iM) (Monad.ofEquiv e₂ iN)
      (MonadLift.ofEquiv₂ e₁ e₂ iL) :=
  letI := Monad.ofEquiv e₁ iM
  letI := Monad.ofEquiv e₂ iN
  letI := MonadLift.ofEquiv₂ e₁ e₂ iL
  { monadLift_pure a :=
      show (e₂ _).toFun (iL.monadLift ((e₁ _).invFun ((e₁ _).toFun (pure a)))) =
        (e₂ _).toFun (pure a) by
        rw [invFun_toFun, LawfulMonadLift.monadLift_pure]
    monadLift_bind ma f :=
      show (e₂ _).toFun (iL.monadLift ((e₁ _).invFun ((e₁ _).toFun
          ((e₁ _).invFun ma >>= fun a => (e₁ _).invFun (f a))))) =
        (e₂ _).toFun ((e₂ _).invFun ((e₂ _).toFun (iL.monadLift ((e₁ _).invFun ma))) >>= fun x =>
          (e₂ _).invFun ((e₂ _).toFun (iL.monadLift ((e₁ _).invFun (f x))))) by
        simp only [invFun_toFun, LawfulMonadLift.monadLift_bind] }

@[transport] protected abbrev LawfulMonadLift.canonicalCongr₂ [iM : Monad m] [iN : Monad n]
    [iL : MonadLift m n] :
    Lean.CanonicalEquivalence (@LawfulMonadLift m n iM iN iL)
      (@LawfulMonadLift m' n' ((Monad.canonicalCongr e₁).toFun iM)
        ((Monad.canonicalCongr e₂).toFun iN) ((MonadLift.canonicalCongr₂ e₁ e₂).toFun iL)) where
  toFun _ := LawfulMonadLift.ofEquiv₂ e₁ e₂
  invFun h :=
    (Monad.canonicalCongr e₁).left_inv iM ▸ (Monad.canonicalCongr e₂).left_inv iN ▸
      (MonadLift.canonicalCongr₂ e₁ e₂).left_inv iL ▸
      LawfulMonadLift.ofEquiv₂ (iM := Monad.ofEquiv e₁ iM) (iN := Monad.ofEquiv e₂ iN)
        (iL := MonadLift.ofEquiv₂ e₁ e₂ iL) (h := h) (fun α => (e₁ α).symm) fun α => (e₂ α).symm
  left_inv _ := rfl
  right_inv _ := rfl

end
