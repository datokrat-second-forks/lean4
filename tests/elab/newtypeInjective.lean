/-!
Tests the injectivity theorems `N.mk.inj` and `N.mk.injEq` generated for a `newtype`, as for a
one-field structure, and the checks `newtype` performs before adding any declaration.
-/

newtype N (α : Type u) := List α with toList

/-- info: N.mk.inj.{u} {α : Type u} {toList toList✝ : List α} : N.mk toList = N.mk toList✝ → toList = toList✝ -/
#guard_msgs in #check N.mk.inj

/-- info: N.mk.injEq.{u} {α : Type u} (toList toList✝ : List α) : (N.mk toList = N.mk toList✝) = (toList = toList✝) -/
#guard_msgs in #check N.mk.injEq

example (a b : List Nat) (h : N.mk a = N.mk b) : a = b := N.mk.inj h
example (a b : List Nat) (h : N.mk a = N.mk b) : a = b := by simpa using h
example (a b : List Nat) (h : N.mk a = N.mk b) : a = b := by grind [N.mk.inj]

-- No injectivity theorems for a proposition.
newtype P := True with proof
/-- error: Unknown constant `P.mk.inj` -/
#guard_msgs in #check P.mk.inj

-- Name clashes are reported before any declaration is added.
def Clash.toNat : Nat := 0

/-- error: `Clash.toNat` has already been declared -/
#guard_msgs in newtype Clash := Nat with toNat

/-- error: Unknown identifier `Clash` -/
#guard_msgs in #check Clash

/-- error: invalid `newtype`, the projector cannot be named `mk`, the name of the constructor -/
#guard_msgs in newtype M := Nat with mk

/-- error: invalid `newtype`, a `newtype` is always irreducible, `@[reducible]` is not allowed -/
#guard_msgs in @[reducible] newtype R := Nat with toNat
