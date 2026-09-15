/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Function
public import Init.Data.Order.Ord

public section

/-!
# Congruences for transporting instances of core classes

Each `C.congr` lifts an equivalence of types to an equivalence of `C` instances and is registered
with `@[transport]`, so that `transport`, `inferInstanceAs` and `deriving` can move `C` instances
between equivalent types (see `Lean.Meta.transport`). An instance transported along `e : α ≃ β`
operates on `β` through `e.invFun`, so on a `newtype` it computes on the projected value. A
congruence for a lawful class concludes at the transported instance of its parent class and hence
applies to that instance only.
-/

@[transport] protected abbrev LE.canonicalCongr (e : α ≃ β) : LE α ≃ LE β where
  toFun i := ⟨fun x y => i.le (e.invFun x) (e.invFun y)⟩
  invFun i := ⟨fun x y => i.le (e.toFun x) (e.toFun y)⟩
  left_inv i := congrArg LE.mk <| funext fun x => funext fun y =>
    show i.le (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = i.le x y by
      rw [e.left_inv x, e.left_inv y]
  right_inv i := congrArg LE.mk <| funext fun x => funext fun y =>
    show i.le (e.toFun (e.invFun x)) (e.toFun (e.invFun y)) = i.le x y by
      rw [e.right_inv x, e.right_inv y]

@[transport] protected abbrev LT.canonicalCongr (e : α ≃ β) : LT α ≃ LT β where
  toFun i := ⟨fun x y => i.lt (e.invFun x) (e.invFun y)⟩
  invFun i := ⟨fun x y => i.lt (e.toFun x) (e.toFun y)⟩
  left_inv i := congrArg LT.mk <| funext fun x => funext fun y =>
    show i.lt (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = i.lt x y by
      rw [e.left_inv x, e.left_inv y]
  right_inv i := congrArg LT.mk <| funext fun x => funext fun y =>
    show i.lt (e.toFun (e.invFun x)) (e.toFun (e.invFun y)) = i.lt x y by
      rw [e.right_inv x, e.right_inv y]

@[transport] protected abbrev DecidableLE.canonicalCongr (e : α ≃ β) [i : LE α] :
    @DecidableLE α i ≃ @DecidableLE β ((LE.congr e).toFun i) where
  toFun d x y := d (e.invFun x) (e.invFun y)
  invFun d x y := decidable_of_iff (i.le (e.invFun (e.toFun x)) (e.invFun (e.toFun y))) (by
    rw [e.left_inv x, e.left_inv y])
  left_inv _ := funext fun _ => funext fun _ => Subsingleton.elim _ _
  right_inv _ := funext fun _ => funext fun _ => Subsingleton.elim _ _

@[transport] protected abbrev DecidableLT.congr (e : α ≃ β) [i : LT α] :
    @DecidableLT α i ≃ @DecidableLT β ((LT.congr e).toFun i) where
  toFun d x y := d (e.invFun x) (e.invFun y)
  invFun d x y := decidable_of_iff (i.lt (e.invFun (e.toFun x)) (e.invFun (e.toFun y))) (by
    rw [e.left_inv x, e.left_inv y])
  left_inv _ := funext fun _ => funext fun _ => Subsingleton.elim _ _
  right_inv _ := funext fun _ => funext fun _ => Subsingleton.elim _ _

@[transport] protected abbrev DecidableEq.congr (e : α ≃ β) : DecidableEq α ≃ DecidableEq β where
  toFun _ x y :=
    decidable_of_iff (e.invFun x = e.invFun y) ⟨fun h => e.invFun_injective h, congrArg e.invFun⟩
  invFun _ x y :=
    decidable_of_iff (e.toFun x = e.toFun y) ⟨fun h => e.toFun_injective h, congrArg e.toFun⟩
  left_inv _ := funext fun _ => funext fun _ => Subsingleton.elim _ _
  right_inv _ := funext fun _ => funext fun _ => Subsingleton.elim _ _

@[transport] protected abbrev Inhabited.congr (e : α ≃ β) : Inhabited α ≃ Inhabited β where
  toFun i := ⟨e.toFun i.default⟩
  invFun i := ⟨e.invFun i.default⟩
  left_inv i := congrArg Inhabited.mk (e.left_inv i.default)
  right_inv i := congrArg Inhabited.mk (e.right_inv i.default)

@[transport] protected abbrev OfNat.congr (e : α ≃ β) {n : Nat} : OfNat α n ≃ OfNat β n where
  toFun i := ⟨e.toFun i.ofNat⟩
  invFun i := ⟨e.invFun i.ofNat⟩
  left_inv i := congrArg OfNat.mk (e.left_inv i.ofNat)
  right_inv i := congrArg OfNat.mk (e.right_inv i.ofNat)

@[transport] protected abbrev Repr.congr (e : α ≃ β) : Repr α ≃ Repr β where
  toFun i := ⟨fun x prec => i.reprPrec (e.invFun x) prec⟩
  invFun i := ⟨fun x prec => i.reprPrec (e.toFun x) prec⟩
  left_inv i := congrArg Repr.mk <| funext fun x => funext fun prec =>
    show i.reprPrec (e.invFun (e.toFun x)) prec = i.reprPrec x prec by rw [e.left_inv x]
  right_inv i := congrArg Repr.mk <| funext fun x => funext fun prec =>
    show i.reprPrec (e.toFun (e.invFun x)) prec = i.reprPrec x prec by rw [e.right_inv x]

@[transport] protected abbrev ToString.congr (e : α ≃ β) : ToString α ≃ ToString β where
  toFun i := ⟨fun x => i.toString (e.invFun x)⟩
  invFun i := ⟨fun x => i.toString (e.toFun x)⟩
  left_inv i := congrArg ToString.mk <| funext fun x =>
    show i.toString (e.invFun (e.toFun x)) = i.toString x by rw [e.left_inv x]
  right_inv i := congrArg ToString.mk <| funext fun x =>
    show i.toString (e.toFun (e.invFun x)) = i.toString x by rw [e.right_inv x]

@[transport] protected abbrev Ord.congr (e : α ≃ β) : Ord α ≃ Ord β where
  toFun i := ⟨fun x y => i.compare (e.invFun x) (e.invFun y)⟩
  invFun i := ⟨fun x y => i.compare (e.toFun x) (e.toFun y)⟩
  left_inv i := congrArg Ord.mk <| funext fun x => funext fun y =>
    show i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) = i.compare x y by
      rw [e.left_inv x, e.left_inv y]
  right_inv i := congrArg Ord.mk <| funext fun x => funext fun y =>
    show i.compare (e.toFun (e.invFun x)) (e.toFun (e.invFun y)) = i.compare x y by
      rw [e.right_inv x, e.right_inv y]

namespace Std

@[transport] protected abbrev OrientedOrd.congr (e : α ≃ β) [i : Ord α] :
    @OrientedOrd α i ≃ @OrientedOrd β ((Ord.congr e).toFun i) where
  toFun h := ⟨fun {x y} => h.eq_swap (a := e.invFun x) (b := e.invFun y)⟩
  invFun h := ⟨fun {x y} => by
    have this : i.compare (e.invFun (e.toFun x)) (e.invFun (e.toFun y)) =
        (i.compare (e.invFun (e.toFun y)) (e.invFun (e.toFun x))).swap :=
      OrientedCmp.eq_swap (self := h)
    rwa [e.left_inv x, e.left_inv y] at this⟩
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] protected abbrev TransOrd.congr (e : α ≃ β) [i : Ord α] :
    @TransOrd α i ≃ @TransOrd β ((Ord.congr e).toFun i) where
  toFun h :=
    { (OrientedOrd.congr e).toFun h.toOrientedCmp with
      isLE_trans := fun {x y z} =>
        h.isLE_trans (a := e.invFun x) (b := e.invFun y) (c := e.invFun z) }
  invFun h :=
    { (OrientedOrd.congr e).invFun h.toOrientedCmp with
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

@[transport] protected abbrev LawfulEqOrd.congr (e : α ≃ β) [i : Ord α] :
    @LawfulEqOrd α i ≃ @LawfulEqOrd β ((Ord.congr e).toFun i) where
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
