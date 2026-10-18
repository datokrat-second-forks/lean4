/-!
A cast between instances of a class that extends another class is pushed into the constructor
like any other cast: the parent instance is cast too, and projecting the cast to the parent gives
the cast parent.
-/

set_option elaborator.implicitTransparency true

def Dual (α : Type) := α

def Dual.of (a : α) : Dual α := smartCast
def Dual.to (a : Dual α) : α := smartCast

class MyLE (α : Type) where le : α → α → Prop
class MyPreorder (α : Type) extends MyLE α where refl : ∀ a : α, le a a

instance [h : MyLE α] : MyLE (Dual α) := ⟨fun a b => h.le b.to a.to⟩
instance [h : MyPreorder α] : MyPreorder (Dual α) where refl a := h.refl a.to

example (α : Type) [H : MyPreorder α] :
    smartCast (MyPreorder (Dual (Dual α))) (MyPreorder α) (by with_semireducible rfl)
      inferInstance = H := rfl

example (α : Type) [H : MyPreorder α] :
    (smartCast (MyPreorder (Dual (Dual α))) (MyPreorder α) (by with_semireducible rfl)
      inferInstance).toMyLE = H.toMyLE := rfl
