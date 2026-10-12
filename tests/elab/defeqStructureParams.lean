import Lean

/-!
Tests that `structure +defeq` handles parameters exactly like `def`: explicit binders, universe
parameters, section variables and auto-bound implicits. As for any structure, explicit parameters
become implicit in the generated constructor and projection, and virtual iota/eta as well as
`unsealing_structure`
work in the presence of parameters.
-/

universe u

structure +defeq OrderDual (α : Type u) where
  ofDual : α

/-- info: OrderDual.{u} (α : Type u) : Type u -/
#guard_msgs in #check OrderDual
/-- info: OrderDual.mk.{u} {α : Type u} (ofDual : α) : OrderDual α -/
#guard_msgs in #check OrderDual.mk
/-- info: OrderDual.ofDual.{u} {α : Type u} (self : OrderDual α) : α -/
#guard_msgs in #check OrderDual.ofDual

example (a : α) : OrderDual.ofDual (OrderDual.mk a) = a := rfl
example (x : OrderDual α) : OrderDual.mk (OrderDual.ofDual x) = x := rfl
example (a : α) : (OrderDual.mk a).ofDual = a := by simp only
example : OrderDual α = α := by unsealing_structure OrderDual => rfl

section
variable (β : Type) [Inhabited β]

structure +defeq Wrap where
  toList : List β

/-- info: Wrap (β : Type) : Type -/
#guard_msgs in #check Wrap
/-- info: Wrap.mk {β : Type} (toList : List β) : Wrap β -/
#guard_msgs in #check Wrap.mk

-- The unused instance variable is not included, as for `def`.
example (l : List β) : (Wrap.mk l).toList = l := rfl
end

-- Auto-bound universe levels in the binders, as for `def`.
structure +defeq Wrap' (γ : Type _) where
  get : Option γ

/-- info: Wrap'.{u_1} (γ : Type u_1) : Type u_1 -/
#guard_msgs in #check Wrap'
/-- info: Wrap'.mk.{u_1} {γ : Type u_1} (get : Option γ) : Wrap' γ -/
#guard_msgs in #check Wrap'.mk

example (o : Option γ) : (Wrap'.mk o).get = o := rfl

/-- doc -/
private structure +defeq Priv (n : Nat) where
  val : Fin n

example (i : Fin 3) : (Priv.mk i).val = i := rfl

/-! As for a structure, the field type is elaborated against a sort unless a resulting type is
given. -/

structure +defeq Big where val : Type
example : Type 1 := Big

/-- error: Invalid resulting type: Expected a sort -/
#guard_msgs in structure +defeq Bad : Nat where val : 5
