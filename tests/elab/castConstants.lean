import Lean

/-!
Tests for cast constants: the type `Cast α β` of casts and their application `Cast.app`, the casts
`D.castFold`/`D.castUnfold` generated for a definition `D` whose value is a type, the congruences
`T.castCongr` generated for an inductive type `T`, and how applications of casts built from them
reduce below `default` transparency.
-/

set_option elaborator.implicitTransparency true

open Lean Meta Elab Command in
/-- Reduces the term to weak head normal form at `implicit` transparency and type-checks the result. -/
elab "#whnf_implicit " t:term : command => liftTermElabM do
  let e ← Term.elabTerm t none
  Term.synthesizeSyntheticMVarsNoPostponing
  let e ← instantiateMVars e
  let r ← withTransparency .implicit <| whnf e
  Meta.check r
  logInfo m!"{r}"

def Dual (α : Type u) := α

/-! A definition whose value is a type gets casts to and from its value. -/

/-- info: Dual.castFold.{u} {α : Type u} : Cast α (Dual α) -/
#guard_msgs in #check Dual.castFold

/-- info: Dual.castUnfold.{u} {α : Type u} : Cast (Dual α) α -/
#guard_msgs in #check Dual.castUnfold

local notation "toD" => Dual.castFold (α := Nat)
local notation "ofD" => Dual.castUnfold (α := Nat)

/-! An inductive type gets a congruence taking a cast for each type parameter. -/

/-- info: List.castCongr.{u} {α α' : Type u} (cα : Cast α α') : Cast (List α) (List α') -/
#guard_msgs in #check List.castCongr

/--
info: Prod.castCongr.{u, v} {α α' : Type u} {β β' : Type v} (cα : Cast α α') (cβ : Cast β β') : Cast (α × β) (α' × β')
-/
#guard_msgs in #check Prod.castCongr

structure Pt (α : Type u) where
  x : α
  y : α

inductive Tree (α : Type u) where
  | leaf
  | node (l : Tree α) (a : α) (r : Tree α)

inductive Rose (α : Type u) where
  | node (a : α) (kids : List (Rose α))

structure Bag (α : Type u) where
  items : List α
  size : Nat

structure NEList (α : Type u) where
  items : List α
  ne : items ≠ []

/-- info: Rose.castCongr.{u} {α α' : Type u} (cα : Cast α α') : Cast (Rose α) (Rose α') -/
#guard_msgs in #check Rose.castCongr

/-! Casts built from generated casts are pushed into constructors and projections. -/

example : (List.castCongr toD).app [1, 2] = [(toD).app 1, (toD).app 2] := rfl

example : (Prod.castCongr toD (Cast.refl Bool)).app (1, true) = ((toD).app 1, true) := rfl

example (p : Pt Nat) : ((Pt.castCongr toD).app p).x = (toD).app p.x := rfl

example : (Tree.castCongr toD).app (.node .leaf 1 .leaf) = .node .leaf ((toD).app 1) .leaf := rfl

example : (Rose.castCongr toD).app (.node 1 [.node 2 []]) =
    .node ((toD).app 1) [.node ((toD).app 2) []] := rfl

example (b : Bag Nat) : ((Bag.castCongr toD).app b).items = (List.castCongr toD).app b.items :=
  rfl

example (b : Bag Nat) : ((Bag.castCongr toD).app b).size = b.size := rfl

/-! Proof fields are cast with `cast`. -/

/--
info: { items := (List.castCongr Dual.castFold).app [1], ne := cast (id rfl) (List.cons_ne_nil 1 []) }
-/
#guard_msgs in
set_option pp.proofs true in
#whnf_implicit (NEList.castCongr toD).app ⟨[1], List.cons_ne_nil 1 []⟩

/-! A cast disappears when its endpoints agree at `implicit` transparency, also along a chain. -/

example (n : Nat) : (Cast.refl Nat).app n = n := rfl

example (c : Cast α α) (a : α) : c.app a = a := rfl

example (n : Nat) : (ofD).app ((toD).app n) = n := rfl

example (l : List Nat) : (List.castCongr ofD).app ((List.castCongr toD).app l) = l := rfl

/-! Casts transport instances by hand. -/

class Elems (α : Type u) where
  elems : List α

instance : Elems Nat := ⟨[0, 1]⟩

instance : Elems (Dual Nat) := (Elems.castCongr toD).app inferInstance

example : (Elems.elems : List (Dual Nat)) = [(toD).app 0, (toD).app 1] := rfl

/-- info: [0, 1] -/
#guard_msgs in #eval (Elems.elems : List (Dual Nat)).map (ofD).app

/-!
A cast whose argument is not built from generated casts, such as a variable, is not reduced: its
endpoints may not be definitionally equal, so the kernel could not confirm the result. Lemmas about
such casts are proved by taking the cast apart.
-/

/--
error: Tactic `rfl` failed: The left-hand side
  (List.castCongr c).app (a :: l)
is not definitionally equal to the right-hand side
  c.app a :: (List.castCongr c).app l

α β : Type u_1
c : Cast α β
a : α
l : List α
⊢ (List.castCongr c).app (a :: l) = c.app a :: (List.castCongr c).app l
-/
#guard_msgs in
example (c : Cast α β) (a : α) (l : List α) :
    (List.castCongr c).app (a :: l) = c.app a :: (List.castCongr c).app l := by rfl

theorem List.castCongr_cons (c : Cast α β) (a : α) (l : List α) :
    (List.castCongr c).app (a :: l) = c.app a :: (List.castCongr c).app l := by
  obtain ⟨h⟩ := c
  subst h
  rfl

/-! Generation fails for definitions that are not semireducible types, and for inductive types with
indices, dependent parameters, or fields whose casts cannot be composed. -/

@[irreducible] def Hidden := Nat

def two := 2

inductive Vec (α : Type u) : Nat → Type u where
  | nil : Vec α 0
  | cons : α → Vec α n → Vec α (n + 1)

structure Fn (α : Type u) where
  f : α → α

def Fam (_ : α) : Type := Nat

structure Dep (α : Type) where
  a : α
  b : Fam a

mutual
inductive Even (α : Type) where
  | nil
  | cons (a : α) (o : Odd α)
inductive Odd (α : Type) where
  | cons (a : α) (e : Even α)
end

/--
error: Failed to realize constant Hidden.castFold:
  cannot generate the casts of `Hidden`: it is not a semireducible definition
---
error: Unknown constant `Hidden.castFold`
-/
#guard_msgs in #print Hidden.castFold

/--
error: Failed to realize constant two.castFold:
  cannot generate the casts of `two`: its value is not a type
---
error: Unknown constant `two.castFold`
-/
#guard_msgs in #print two.castFold

/--
error: Failed to realize constant Vec.castCongr:
  cannot generate the congruence of `Vec`: it has indices
---
error: Unknown constant `Vec.castCongr`
-/
#guard_msgs in #print Vec.castCongr

/--
error: Failed to realize constant Subtype.castCongr:
  cannot generate the congruence of `Subtype`: the type of parameter `p` depends on another parameter
---
error: Unknown constant `Subtype.castCongr`
-/
#guard_msgs in #print Subtype.castCongr

/--
error: Failed to realize constant Fn.castCongr:
  cannot generate the congruence of `Fn`: cannot compose a cast for field `f` of type
    α → α
---
error: Unknown constant `Fn.castCongr`
-/
#guard_msgs in #print Fn.castCongr

/--
error: Failed to realize constant Dep.castCongr:
  cannot generate the congruence of `Dep`: cannot compose a cast for field `b` of type
    Fam a
---
error: Unknown constant `Dep.castCongr`
-/
#guard_msgs in #print Dep.castCongr

/--
error: Failed to realize constant And.castCongr:
  cannot generate the congruence of `And`: propositions are cast with `cast`
---
error: Unknown constant `And.castCongr`
-/
#guard_msgs in #print And.castCongr

/--
error: Failed to realize constant Nat.castCongr:
  cannot generate the congruence of `Nat`: it has no type parameters
---
error: Unknown constant `Nat.castCongr`
-/
#guard_msgs in #print Nat.castCongr

/--
error: Failed to realize constant Even.castCongr:
  cannot generate the congruence of `Even`: mutual inductive types are not supported
---
error: Unknown constant `Even.castCongr`
-/
#guard_msgs in #print Even.castCongr
