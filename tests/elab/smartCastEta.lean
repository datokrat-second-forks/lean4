/-!
Casts between function types whose domains differ: an applied cast casts its argument back to the
source domain, and a cast of a `fun` is pushed into it. This makes both directions of a cast
equivalence compute at `implicit` transparency.
-/

set_option elaborator.implicitTransparency true

def MyNat := Nat

def MyNat.ofNat (n : Nat) : MyNat := smartCast
def MyNat.toNat (n : MyNat) : Nat := smartCast

/-! An applied cast casts its argument back, also into a dependent codomain. -/

def liftDom (h : Nat → Nat) : MyNat → Nat := smartCast

example (h : Nat → Nat) (n : MyNat) : liftDom h n = h n.toNat := rfl

def liftDep (h : (n : Nat) → Fin (n + 1)) : (n : MyNat) → Fin (n.toNat + 1) := smartCast

example (h : (n : Nat) → Fin (n + 1)) (n : MyNat) : liftDep h n = h n.toNat := rfl

/-! A cast of a `fun` is a `fun`, so unapplied casts with different sources can be compared. -/

example :
    smartCast (Nat → Nat) (MyNat → Nat) (by with_semireducible rfl) id =
      smartCast (MyNat → MyNat) (MyNat → Nat) (by with_semireducible rfl) id := rfl

example : smartCast (Nat → Nat) (MyNat → Nat) (by with_semireducible rfl) (· + 1) =
    fun n => n.toNat + 1 := rfl

/-! Both directions of an equivalence obtained by casting the identity compute. -/

structure Iso (α β : Type) where
  toFun : α → β
  invFun : β → α

@[implicit_reducible] def Iso.refl (α : Type) : Iso α α := ⟨id, id⟩
@[implicit_reducible] def Iso.symm (e : Iso α β) : Iso β α := ⟨e.invFun, e.toFun⟩

@[implicit_reducible] def toMyNat : Iso Nat MyNat :=
  smartCast (Iso Nat Nat) (Iso Nat MyNat) (by with_semireducible rfl) (Iso.refl Nat)
@[implicit_reducible] def ofMyNat : Iso MyNat Nat :=
  smartCast (Iso MyNat MyNat) (Iso MyNat Nat) (by with_semireducible rfl) (Iso.refl MyNat)

example (n : Nat) : ofMyNat.toFun (toMyNat.toFun n) = n := rfl
example (n : MyNat) : toMyNat.invFun n = ofMyNat.toFun n := rfl
example : toMyNat.symm = ofMyNat := rfl
example : ofMyNat.symm = toMyNat := rfl
