/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Function
public import Init.Data.Order.Ord
public import Init.Control.Except
public import Init.Control.MonadAttach

public section

/-!
# Congruences for transporting instances of core classes

Each `C.canonicalCongr` lifts an equivalence of types to an equivalence of `C` instances and is
registered with `@[transport]`, so that `transport`, `inferInstanceAs` and `deriving` can move `C`
instances between equivalent types (see `Lean.Meta.transport`). An instance transported along
`e : Lean.CanonicalEquivalence α β` operates on `β` through `e.invFun`, so on a `newtype` it
computes on the projected value. A congruence for a lawful class concludes at the transported
instance of its parent class and hence applies to that instance only.
-/

@[transport] protected abbrev LE.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (LE α) (LE β) where
  toFun i := ⟨fun x y => i.le (e.invFun x) (e.invFun y)⟩
  invFun i := ⟨fun x y => i.le (e.toFun x) (e.toFun y)⟩
  left_inv i := congrArg LE.mk <| funext fun x => funext fun y =>
    show i.le (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = i.le x y by
      rw [e.left_inv x, e.left_inv y]
  right_inv i := congrArg LE.mk <| funext fun x => funext fun y =>
    show i.le (e.toFun (e.invFun x)) (e.toFun (e.invFun y)) = i.le x y by
      rw [e.right_inv x, e.right_inv y]

@[transport] protected abbrev LT.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (LT α) (LT β) where
  toFun i := ⟨fun x y => i.lt (e.invFun x) (e.invFun y)⟩
  invFun i := ⟨fun x y => i.lt (e.toFun x) (e.toFun y)⟩
  left_inv i := congrArg LT.mk <| funext fun x => funext fun y =>
    show i.lt (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = i.lt x y by
      rw [e.left_inv x, e.left_inv y]
  right_inv i := congrArg LT.mk <| funext fun x => funext fun y =>
    show i.lt (e.toFun (e.invFun x)) (e.toFun (e.invFun y)) = i.lt x y by
      rw [e.right_inv x, e.right_inv y]

/--
Transports a dependent function along an equivalence of its domain and equivalences of its
codomains. Classes such as `DecidableEq` and `DecidableLE` are Π-types and transport through it.
-/
@[transport] protected abbrev Pi.canonicalCongr {β : α → Sort v} {β' : α' → Sort v'}
    (e : Lean.CanonicalEquivalence α α')
    (f : ∀ a', Lean.CanonicalEquivalence (β (e.invFun a')) (β' a')) :
    Lean.CanonicalEquivalence ((a : α) → β a) ((a' : α') → β' a') where
  toFun g a' := (f a').toFun (g (e.invFun a'))
  invFun h a := cast (congrArg β (e.left_inv a)) ((f (e.toFun a)).invFun (h (e.toFun a)))
  left_inv g := funext fun a =>
    show cast _ ((f (e.toFun a)).invFun ((f (e.toFun a)).toFun (g (e.invFun (e.toFun a))))) = g a by
      rw [(f _).left_inv]
      exact (fun x (h : x = a) => by subst h; rfl : ∀ x (h : x = a), cast (congrArg β h) (g x) = g a)
        _ (e.left_inv a)
  right_inv h := funext fun a' =>
    (fun y (hy : y = a') (p : e.invFun y = e.invFun a') => by
        subst hy; rw [cast_eq]; exact (f y).right_inv (h y) :
      ∀ y (hy : y = a') (p : e.invFun y = e.invFun a'),
        (f a').toFun (cast (congrArg β p) ((f y).invFun (h y))) = h a')
      _ (e.right_inv a') (e.left_inv (e.invFun a'))

@[transport] protected abbrev Decidable.canonicalCongr {p q : Prop}
    (e : Lean.CanonicalEquivalence p q) :
    Lean.CanonicalEquivalence (Decidable p) (Decidable q) where
  toFun d := @decidable_of_iff q p ⟨e.toFun, e.invFun⟩ d
  invFun d := @decidable_of_iff p q ⟨e.invFun, e.toFun⟩ d
  left_inv _ := Subsingleton.elim _ _
  right_inv _ := Subsingleton.elim _ _

/--
Relates equality on both sides of an equivalence, e.g. for transporting `DecidableEq`. The
conclusion only fixes the types for which `e` is sought; `ha` and `hb` are then checked by `rfl`.
-/
@[transport] protected abbrev Eq.canonicalCongr (e : Lean.CanonicalEquivalence α β) {a b : α}
    {a' b' : β} (ha : e.invFun a' = a) (hb : e.invFun b' = b) :
    Lean.CanonicalEquivalence (a = b) (a' = b') where
  toFun h := e.invFun_injective (ha.trans (h.trans hb.symm))
  invFun h := ha.symm.trans ((congrArg e.invFun h).trans hb)
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev Inhabited.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Inhabited α) (Inhabited β) where
  toFun i := ⟨e.toFun i.default⟩
  invFun i := ⟨e.invFun i.default⟩
  left_inv i := congrArg Inhabited.mk (e.left_inv i.default)
  right_inv i := congrArg Inhabited.mk (e.right_inv i.default)

@[transport] protected abbrev Nonempty.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Nonempty α) (Nonempty β) where
  toFun | ⟨a⟩ => ⟨e.toFun a⟩
  invFun | ⟨b⟩ => ⟨e.invFun b⟩
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev OfNat.canonicalCongr (e : Lean.CanonicalEquivalence α β) {n : Nat} :
    Lean.CanonicalEquivalence (OfNat α n) (OfNat β n) where
  toFun i := ⟨e.toFun i.ofNat⟩
  invFun i := ⟨e.invFun i.ofNat⟩
  left_inv i := congrArg OfNat.mk (e.left_inv i.ofNat)
  right_inv i := congrArg OfNat.mk (e.right_inv i.ofNat)

@[transport] protected abbrev Add.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Add α) (Add β) where
  toFun i := ⟨fun x y => e.toFun (i.add (e.invFun x) (e.invFun y))⟩
  invFun i := ⟨fun x y => e.invFun (i.add (e.toFun x) (e.toFun y))⟩
  left_inv i := congrArg Add.mk <| funext fun x => funext fun y =>
    (e.left_inv _).trans (congr (congrArg i.add (e.left_inv x)) (e.left_inv y))
  right_inv i := congrArg Add.mk <| funext fun x => funext fun y =>
    (e.right_inv _).trans (congr (congrArg i.add (e.right_inv x)) (e.right_inv y))

@[transport] protected abbrev Sub.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Sub α) (Sub β) where
  toFun i := ⟨fun x y => e.toFun (i.sub (e.invFun x) (e.invFun y))⟩
  invFun i := ⟨fun x y => e.invFun (i.sub (e.toFun x) (e.toFun y))⟩
  left_inv i := congrArg Sub.mk <| funext fun x => funext fun y =>
    (e.left_inv _).trans (congr (congrArg i.sub (e.left_inv x)) (e.left_inv y))
  right_inv i := congrArg Sub.mk <| funext fun x => funext fun y =>
    (e.right_inv _).trans (congr (congrArg i.sub (e.right_inv x)) (e.right_inv y))

@[transport] protected abbrev Mul.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Mul α) (Mul β) where
  toFun i := ⟨fun x y => e.toFun (i.mul (e.invFun x) (e.invFun y))⟩
  invFun i := ⟨fun x y => e.invFun (i.mul (e.toFun x) (e.toFun y))⟩
  left_inv i := congrArg Mul.mk <| funext fun x => funext fun y =>
    (e.left_inv _).trans (congr (congrArg i.mul (e.left_inv x)) (e.left_inv y))
  right_inv i := congrArg Mul.mk <| funext fun x => funext fun y =>
    (e.right_inv _).trans (congr (congrArg i.mul (e.right_inv x)) (e.right_inv y))

@[transport] protected abbrev Div.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Div α) (Div β) where
  toFun i := ⟨fun x y => e.toFun (i.div (e.invFun x) (e.invFun y))⟩
  invFun i := ⟨fun x y => e.invFun (i.div (e.toFun x) (e.toFun y))⟩
  left_inv i := congrArg Div.mk <| funext fun x => funext fun y =>
    (e.left_inv _).trans (congr (congrArg i.div (e.left_inv x)) (e.left_inv y))
  right_inv i := congrArg Div.mk <| funext fun x => funext fun y =>
    (e.right_inv _).trans (congr (congrArg i.div (e.right_inv x)) (e.right_inv y))

@[transport] protected abbrev Neg.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Neg α) (Neg β) where
  toFun i := ⟨fun x => e.toFun (i.neg (e.invFun x))⟩
  invFun i := ⟨fun x => e.invFun (i.neg (e.toFun x))⟩
  left_inv i := congrArg Neg.mk <| funext fun x =>
    (e.left_inv _).trans (congrArg i.neg (e.left_inv x))
  right_inv i := congrArg Neg.mk <| funext fun x =>
    (e.right_inv _).trans (congrArg i.neg (e.right_inv x))

@[transport] protected abbrev Repr.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Repr α) (Repr β) where
  toFun i := ⟨fun x prec => i.reprPrec (e.invFun x) prec⟩
  invFun i := ⟨fun x prec => i.reprPrec (e.toFun x) prec⟩
  left_inv i := congrArg Repr.mk <| funext fun x => funext fun prec =>
    show i.reprPrec (e.invFun (e.toFun x)) prec = i.reprPrec x prec by rw [e.left_inv x]
  right_inv i := congrArg Repr.mk <| funext fun x => funext fun prec =>
    show i.reprPrec (e.toFun (e.invFun x)) prec = i.reprPrec x prec by rw [e.right_inv x]

@[transport] protected abbrev ToString.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (ToString α) (ToString β) where
  toFun i := ⟨fun x => i.toString (e.invFun x)⟩
  invFun i := ⟨fun x => i.toString (e.toFun x)⟩
  left_inv i := congrArg ToString.mk <| funext fun x =>
    show i.toString (e.invFun (e.toFun x)) = i.toString x by rw [e.left_inv x]
  right_inv i := congrArg ToString.mk <| funext fun x =>
    show i.toString (e.toFun (e.invFun x)) = i.toString x by rw [e.right_inv x]

@[transport] protected abbrev Ord.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Ord α) (Ord β) where
  toFun i := ⟨fun x y => i.compare (e.invFun x) (e.invFun y)⟩
  invFun i := ⟨fun x y => i.compare (e.toFun x) (e.toFun y)⟩
  left_inv i := congrArg Ord.mk <| funext fun x => funext fun y =>
    show i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = i.compare x y by
      rw [e.left_inv x, e.left_inv y]
  right_inv i := congrArg Ord.mk <| funext fun x => funext fun y =>
    show i.compare (e.toFun (e.invFun x)) (e.toFun (e.invFun y)) = i.compare x y by
      rw [e.right_inv x, e.right_inv y]

namespace Std

@[transport] protected abbrev OrientedOrd.canonicalCongr (e : Lean.CanonicalEquivalence α β) [i : Ord α] :
    Lean.CanonicalEquivalence (@OrientedOrd α i) (@OrientedOrd β ((Ord.canonicalCongr e).toFun i)) where
  toFun h := ⟨fun {x y} => h.eq_swap (a := e.invFun x) (b := e.invFun y)⟩
  invFun h := ⟨fun {x y} => by
    have this : i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) =
        (i.compare (e.invFun (e.toFun y)) (e.invFun (e.toFun x))).swap :=
      OrientedCmp.eq_swap (self := h)
    rwa [e.left_inv x, e.left_inv y] at this⟩
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev TransOrd.canonicalCongr (e : Lean.CanonicalEquivalence α β) [i : Ord α] :
    Lean.CanonicalEquivalence (@TransOrd α i) (@TransOrd β ((Ord.canonicalCongr e).toFun i)) where
  toFun h :=
    { (OrientedOrd.canonicalCongr e).toFun h.toOrientedCmp with
      isLE_trans := fun {x y z} =>
        h.isLE_trans (a := e.invFun x) (b := e.invFun y) (c := e.invFun z) }
  invFun h :=
    { (OrientedOrd.canonicalCongr e).invFun h.toOrientedCmp with
      isLE_trans := fun {x y z} h₁ h₂ => by
        have h₁ : (i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun y))).isLE := by
          rwa [e.left_inv x, e.left_inv y]
        have h₂ : (i.compare (e.invFun (e.toFun y)) (e.invFun (e.toFun z))).isLE := by
          rwa [e.left_inv y, e.left_inv z]
        have this : (i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun z))).isLE :=
          TransCmp.isLE_trans (self := h) h₁ h₂
        rwa [e.left_inv x, e.left_inv z] at this }
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev LawfulEqOrd.canonicalCongr (e : Lean.CanonicalEquivalence α β) [i : Ord α] :
    Lean.CanonicalEquivalence (@LawfulEqOrd α i) (@LawfulEqOrd β ((Ord.canonicalCongr e).toFun i)) where
  toFun h :=
    { compare_self := fun {x} => h.compare_self (a := e.invFun x)
      eq_of_compare := fun {x y} hxy => e.invFun_injective (h.eq_of_compare hxy) }
  invFun h :=
    { compare_self := fun {x} => by
        have this : i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun x)) = .eq :=
          h.compare_self
        rwa [e.left_inv x] at this
      eq_of_compare := fun {x y} hxy =>
        e.toFun_injective (LawfulEqCmp.eq_of_compare (self := h) (a := e.toFun x) (b := e.toFun y) (by
          show i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = .eq
          rwa [e.left_inv x, e.left_inv y])) }
  left_inv _ := rfl
  right_inv _ := rfl

end Std

/-!
## Classes on type constructors

An instance of a class on `m : Type u → Type v` is transported along a family
`∀ α, Lean.CanonicalEquivalence (m α) (n α)` by conjugating each operation.
`C.ofEquiv e` moves an instance forward; `C.canonicalCongr e` pairs it with
`C.ofEquiv (e ·).symm`, and its inverse laws reduce to
`Lean.CanonicalEquivalence.trans_symm` and `Lean.CanonicalEquivalence.symm_trans`.
-/

universe u v w

section
variable {m n : Type u → Type v} (e : ∀ α, Lean.CanonicalEquivalence (m α) (n α))

protected abbrev Functor.ofEquiv (i : Functor m) : Functor n where
  map f x := (e _).toFun (i.map f ((e _).invFun x))
  mapConst a x := (e _).toFun (i.mapConst a ((e _).invFun x))

@[transport] protected abbrev Functor.canonicalCongr :
    Lean.CanonicalEquivalence (Functor m) (Functor n) where
  toFun := Functor.ofEquiv e
  invFun := Functor.ofEquiv fun α => (e α).symm
  left_inv i :=
    show Functor.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (Functor.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show Functor.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (Functor.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev Applicative.ofEquiv (i : Applicative m) : Applicative n where
  toFunctor := Functor.ofEquiv e i.toFunctor
  pure a := (e _).toFun (i.pure a)
  seq f x := (e _).toFun (i.seq ((e _).invFun f) fun u => (e _).invFun (x u))
  seqLeft x y := (e _).toFun (i.seqLeft ((e _).invFun x) fun u => (e _).invFun (y u))
  seqRight x y := (e _).toFun (i.seqRight ((e _).invFun x) fun u => (e _).invFun (y u))

@[transport] protected abbrev Applicative.canonicalCongr :
    Lean.CanonicalEquivalence (Applicative m) (Applicative n) where
  toFun := Applicative.ofEquiv e
  invFun := Applicative.ofEquiv fun α => (e α).symm
  left_inv i :=
    show Applicative.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (Applicative.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show Applicative.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (Applicative.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev Alternative.ofEquiv (i : Alternative m) : Alternative n where
  toApplicative := Applicative.ofEquiv e i.toApplicative
  failure := (e _).toFun i.failure
  orElse x y := (e _).toFun (i.orElse ((e _).invFun x) fun u => (e _).invFun (y u))

@[transport] protected abbrev Alternative.canonicalCongr :
    Lean.CanonicalEquivalence (Alternative m) (Alternative n) where
  toFun := Alternative.ofEquiv e
  invFun := Alternative.ofEquiv fun α => (e α).symm
  left_inv i :=
    show Alternative.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (Alternative.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show Alternative.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (Alternative.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev Bind.ofEquiv (i : Bind m) : Bind n where
  bind x f := (e _).toFun (i.bind ((e _).invFun x) fun a => (e _).invFun (f a))

theorem Bind.ofEquiv_bind (i : Bind m) {α β : Type u} (x : n α) (f : α → n β) :
    @Bind.bind n (Bind.ofEquiv e i) α β x f =
      (e β).toFun (i.bind ((e α).invFun x) fun a => (e β).invFun (f a)) :=
  rfl

protected abbrev Monad.ofEquiv (i : Monad m) : Monad n where
  toBind := Bind.ofEquiv e i.toBind
  map f x := (e _).toFun (i.map f ((e _).invFun x))
  mapConst a x := (e _).toFun (i.mapConst a ((e _).invFun x))
  pure a := (e _).toFun (i.pure a)
  seq f x := (e _).toFun (i.seq ((e _).invFun f) fun u => (e _).invFun (x u))
  seqLeft x y := (e _).toFun (i.seqLeft ((e _).invFun x) fun u => (e _).invFun (y u))
  seqRight x y := (e _).toFun (i.seqRight ((e _).invFun x) fun u => (e _).invFun (y u))

@[transport] protected abbrev Monad.canonicalCongr :
    Lean.CanonicalEquivalence (Monad m) (Monad n) where
  toFun := Monad.ofEquiv e
  invFun := Monad.ofEquiv fun α => (e α).symm
  left_inv i :=
    show Monad.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (Monad.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show Monad.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (Monad.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev MonadFinally.ofEquiv (i : MonadFinally m) : MonadFinally n where
  tryFinally' x f := (e _).toFun (i.tryFinally' ((e _).invFun x) fun a? => (e _).invFun (f a?))

@[transport] protected abbrev MonadFinally.canonicalCongr :
    Lean.CanonicalEquivalence (MonadFinally m) (MonadFinally n) where
  toFun := MonadFinally.ofEquiv e
  invFun := MonadFinally.ofEquiv fun α => (e α).symm
  left_inv i :=
    show MonadFinally.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (MonadFinally.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show MonadFinally.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (MonadFinally.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev MonadAttach.ofEquiv (i : MonadAttach m) : MonadAttach n where
  CanReturn x a := i.CanReturn ((e _).invFun x) a
  attach x := (e _).toFun (i.attach ((e _).invFun x))

@[transport] protected abbrev MonadAttach.canonicalCongr :
    Lean.CanonicalEquivalence (MonadAttach m) (MonadAttach n) where
  toFun := MonadAttach.ofEquiv e
  invFun := MonadAttach.ofEquiv fun α => (e α).symm
  left_inv i :=
    show MonadAttach.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (MonadAttach.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show MonadAttach.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (MonadAttach.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev MonadExceptOf.ofEquiv {ε : Type w} (i : MonadExceptOf ε m) :
    MonadExceptOf ε n where
  throw ex := (e _).toFun (i.throw ex)
  tryCatch body handler :=
    (e _).toFun (i.tryCatch ((e _).invFun body) fun ex => (e _).invFun (handler ex))

@[transport] protected abbrev MonadExceptOf.canonicalCongr {ε : Type w} :
    Lean.CanonicalEquivalence (MonadExceptOf ε m) (MonadExceptOf ε n) where
  toFun := MonadExceptOf.ofEquiv e
  invFun := MonadExceptOf.ofEquiv fun α => (e α).symm
  left_inv i :=
    show MonadExceptOf.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (MonadExceptOf.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show MonadExceptOf.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (MonadExceptOf.ofEquiv · i) (funext fun α => (e α).symm_trans)

end

section
variable {m n : Type → Type} (e : ∀ α, Lean.CanonicalEquivalence (m α) (n α))

protected abbrev Lean.MonadRef.ofEquiv (i : Lean.MonadRef m) : Lean.MonadRef n where
  getRef := (e _).toFun i.getRef
  withRef ref x := (e _).toFun (i.withRef ref ((e _).invFun x))

@[transport] protected abbrev Lean.MonadRef.canonicalCongr :
    Lean.CanonicalEquivalence (Lean.MonadRef m) (Lean.MonadRef n) where
  toFun := Lean.MonadRef.ofEquiv e
  invFun := Lean.MonadRef.ofEquiv fun α => (e α).symm
  left_inv i :=
    show Lean.MonadRef.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (Lean.MonadRef.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show Lean.MonadRef.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (Lean.MonadRef.ofEquiv · i) (funext fun α => (e α).symm_trans)

end

section
variable {m : Type u → Type v} {n n' : Type u → Type w} (e : ∀ α, Lean.CanonicalEquivalence (n α) (n' α))

protected abbrev MonadLift.ofEquiv (i : MonadLift m n) : MonadLift m n' where
  monadLift x := (e _).toFun (i.monadLift x)

@[transport] protected abbrev MonadLift.canonicalCongr :
    Lean.CanonicalEquivalence (MonadLift m n) (MonadLift m n') where
  toFun := MonadLift.ofEquiv e
  invFun := MonadLift.ofEquiv fun α => (e α).symm
  left_inv i :=
    show MonadLift.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (MonadLift.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show MonadLift.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (MonadLift.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev MonadFunctor.ofEquiv (i : MonadFunctor m n) : MonadFunctor m n' where
  monadMap f x := (e _).toFun (i.monadMap f ((e _).invFun x))

@[transport] protected abbrev MonadFunctor.canonicalCongr :
    Lean.CanonicalEquivalence (MonadFunctor m n) (MonadFunctor m n') where
  toFun := MonadFunctor.ofEquiv e
  invFun := MonadFunctor.ofEquiv fun α => (e α).symm
  left_inv i :=
    show MonadFunctor.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (MonadFunctor.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show MonadFunctor.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (MonadFunctor.ofEquiv · i) (funext fun α => (e α).symm_trans)

protected abbrev MonadControl.ofEquiv (i : MonadControl m n) : MonadControl m n' where
  stM := i.stM
  liftWith f := (e _).toFun (i.liftWith fun run => f fun x => run ((e _).invFun x))
  restoreM x := (e _).toFun (i.restoreM x)

@[transport] protected abbrev MonadControl.canonicalCongr :
    Lean.CanonicalEquivalence (MonadControl m n) (MonadControl m n') where
  toFun := MonadControl.ofEquiv e
  invFun := MonadControl.ofEquiv fun α => (e α).symm
  left_inv i :=
    show MonadControl.ofEquiv (fun α => (e α).trans (e α).symm) i = i from
      congrArg (MonadControl.ofEquiv · i) (funext fun α => (e α).trans_symm)
  right_inv i :=
    show MonadControl.ofEquiv (fun α => (e α).symm.trans (e α)) i = i from
      congrArg (MonadControl.ofEquiv · i) (funext fun α => (e α).symm_trans)

end

section
variable {m m' : Type u → Type v} {n n' : Type u → Type w}
  (e₁ : ∀ α, Lean.CanonicalEquivalence (m α) (m' α))
  (e₂ : ∀ α, Lean.CanonicalEquivalence (n α) (n' α))

/-- Like `MonadLift.ofEquiv`, but also changes the lifted monad. -/
protected abbrev MonadLift.ofEquiv₂ (i : MonadLift m n) : MonadLift m' n' where
  monadLift x := (e₂ _).toFun (i.monadLift ((e₁ _).invFun x))

@[transport] protected abbrev MonadLift.canonicalCongr₂ :
    Lean.CanonicalEquivalence (MonadLift m n) (MonadLift m' n') where
  toFun := MonadLift.ofEquiv₂ e₁ e₂
  invFun := MonadLift.ofEquiv₂ (fun α => (e₁ α).symm) fun α => (e₂ α).symm
  left_inv i :=
    show MonadLift.ofEquiv₂ (fun α => (e₁ α).trans (e₁ α).symm)
        (fun α => (e₂ α).trans (e₂ α).symm) i = i by
      rw [funext fun α => (e₁ α).trans_symm, funext fun α => (e₂ α).trans_symm]; rfl
  right_inv i :=
    show MonadLift.ofEquiv₂ (fun α => (e₁ α).symm.trans (e₁ α))
        (fun α => (e₂ α).symm.trans (e₂ α)) i = i by
      rw [funext fun α => (e₁ α).symm_trans, funext fun α => (e₂ α).symm_trans]; rfl

end
