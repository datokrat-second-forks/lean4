import Lean

/-!
Tests that a metavariable of a `newtype`-declared type can be assigned from a constraint on its
projection, as for real single-field structures (`isDefEqProj.isDefEqSingleton`): `N.val ?m =?= v`
is solved by `?m := N.mk v`.
-/

newtype N (α : Type) := α with val

example (x : α) : ∃ y : N α, y.val = x := ⟨_, rfl⟩

namespace N
instance [OfNat α 1] : OfNat (N α) 1 := ⟨mk 1⟩
theorem val_inj {a b : N α} : a.val = b.val ↔ a = b :=
  ⟨fun h => congrArg mk h, fun h => congrArg val h⟩
example [OfNat α 1] {a : N α} : a.val = 1 ↔ a = 1 := val_inj (b := 1)
end N

-- Without parameters.
newtype M := Nat with toNat

example : ∃ y : M, y.toNat = 5 := ⟨_, rfl⟩
example : ∃ y : M, 5 = y.toNat := ⟨_, rfl⟩

-- Controls: a real single-field structure assigns the same way.
structure Box (α : Type) where mk :: val : α

example (x : α) : ∃ y : Box α, y.val = x := ⟨_, rfl⟩

namespace Box
instance [OfNat α 1] : OfNat (Box α) 1 := ⟨mk 1⟩
theorem val_inj {a b : Box α} : a.val = b.val ↔ a = b :=
  ⟨fun h => congrArg mk h, fun h => congrArg val h⟩
example [OfNat α 1] {a : Box α} : a.val = 1 ↔ a = 1 := val_inj (b := 1)
end Box

structure BoxM where mk :: toNat : Nat

example : ∃ y : BoxM, y.toNat = 5 := ⟨_, rfl⟩
example : ∃ y : BoxM, 5 = y.toNat := ⟨_, rfl⟩
