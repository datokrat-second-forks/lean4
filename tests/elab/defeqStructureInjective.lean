/-!
Tests the injectivity theorems `N.mk.inj` and `N.mk.injEq` generated for a `+defeq` structure, as
for a one-field structure, and the checks `structure +defeq` performs before adding any
declaration.
-/

structure +defeq N (α : Type u) where
  toList : List α

/-- info: N.mk.inj.{u} {α : Type u} {toList toList✝ : List α} : N.mk toList = N.mk toList✝ → toList = toList✝ -/
#guard_msgs in #check N.mk.inj

/-- info: N.mk.injEq.{u} {α : Type u} (toList toList✝ : List α) : (N.mk toList = N.mk toList✝) = (toList = toList✝) -/
#guard_msgs in #check N.mk.injEq

example (a b : List Nat) (h : N.mk a = N.mk b) : a = b := N.mk.inj h
example (a b : List Nat) (h : N.mk a = N.mk b) : a = b := by simpa using h
example (a b : List Nat) (h : N.mk a = N.mk b) : a = b := by grind [N.mk.inj]

-- No injectivity theorems for a proposition.
structure +defeq P where
  proof : True
/-- error: Unknown constant `P.mk.inj` -/
#guard_msgs in #check P.mk.inj

-- Name clashes are reported before any declaration is added.
def Clash.toNat : Nat := 0

/-- error: `Clash.toNat` has already been declared -/
#guard_msgs in structure +defeq Clash where toNat : Nat

/-- error: Unknown identifier `Clash` -/
#guard_msgs in #check Clash

/-- error: Invalid field name `mk`: This is the name of the structure constructor -/
#guard_msgs in structure +defeq M where mk : Nat

/-- error: Invalid field name `val`: This is the name of the structure constructor -/
#guard_msgs in structure +defeq M where val :: val : Nat

/--
error: Invalid attribute: A `+defeq` structure is always irreducible, `@[reducible]` is not allowed
-/
#guard_msgs in @[reducible] structure +defeq R where toNat : Nat
