import Lean

/-!
`deriving UDecidableEq` builds instances from the fields' `UDecidableEq` instances, without going
through `Decidable`.
-/

open Lean Meta Elab Command in
/-- Fails if the `UDecidable` instance for `p` is missing or uses `Decidable`. -/
elab "#check_native " p:term : command => runTermElabM fun _ => do
  let p ← Term.elabTerm p (some (mkSort .zero))
  Term.synthesizeSyntheticMVarsNoPostponing
  let inst ← synthInstance (mkApp (mkConst ``UDecidable) (← instantiateMVars p))
  let some c := (← instantiateMVars inst).getAppFn.constName? | throwError "unexpected {inst}"
  -- Also check the auxiliary definitions generated for the instance.
  for (d, info) in (← getEnv).constants.toList do
    if c.isPrefixOf d then
      if let some value := info.value? then
        if value.find? (fun e => e.isConstOf ``UDecidable.ofDecidable || e.isConstOf ``Decidable)
            |>.isSome then
          throwError "{d} uses `Decidable`"

inductive Color where
  | red | green | blue
  deriving UDecidableEq, Repr

structure Point where
  x : Int
  y : Int
  deriving UDecidableEq, Repr

inductive Tree (α : Type) where
  | leaf
  | node (l : Tree α) (a : α) (r : Tree α)
  deriving UDecidableEq, Repr

mutual
inductive Even where
  | zero
  | succ (n : Odd)
  deriving UDecidableEq
inductive Odd where
  | succ (n : Even)
  deriving UDecidableEq
end

/-- An indexed family with a field that the index depends on. -/
inductive Vec (α : Type) : Nat → Type where
  | nil : Vec α 0
  | cons (n : Nat) (a : α) (v : Vec α n) : Vec α (n + 1)
  deriving UDecidableEq

/-- Proof and dependent fields. -/
structure Bounded where
  val : Nat
  isLt : val < 10
  tag : Fin val.succ
  deriving UDecidableEq

/-- A type with a field whose type only has a `UDecidableEq` instance. -/
structure Wrapper where
  b : Bounded
  deriving UDecidableEq

/-- Uses the linear construction for many constructors. -/
inductive Many where
  | c0 (n : Nat) | c1 (n : Nat) | c2 (n : Nat) | c3 (n : Nat) | c4 (n : Nat)
  | c5 (n : Nat) | c6 (n : Nat) | c7 (n : Nat) | c8 (n : Nat) | c9 (n : Nat)
  deriving UDecidableEq

/-- Both classes can be derived for the same type. -/
inductive Both where
  | a | b
  deriving DecidableEq, UDecidableEq

structure Both' where
  n : Nat
  deriving DecidableEq, UDecidableEq

#check_native Color.red = .blue
#check_native (⟨1, 2⟩ : Point) = ⟨1, 2⟩
#check_native (Tree.leaf : Tree Nat) = .leaf
#check_native Even.zero = .zero
#check_native Odd.succ .zero = .succ .zero
#check_native (Vec.nil : Vec Nat 0) = .nil
#check_native (⟨0, by decide, 0⟩ : Bounded) = ⟨0, by decide, 0⟩
#check_native (⟨⟨0, by decide, 0⟩⟩ : Wrapper) = ⟨⟨0, by decide, 0⟩⟩
#check_native Many.c3 1 = .c3 1
#check_native Both.a = .b
#check_native (⟨1⟩ : Both') = ⟨1⟩

example : DecidableEq Both := inferInstance
example : DecidableEq Both' := inferInstance

/-- info: [true, false, true, false] -/
#guard_msgs in
#eval [UDecidable.decide (Color.red = .red), UDecidable.decide (Color.red = .green),
  UDecidable.decide ((⟨1, -2⟩ : Point) = ⟨1, -2⟩), UDecidable.decide ((⟨1, -2⟩ : Point) = ⟨1, 2⟩)]

/-- info: [true, false, false] -/
#guard_msgs in
#eval [UDecidable.decide (Tree.node .leaf 1 (.node .leaf 2 .leaf) = .node .leaf 1 (.node .leaf 2 .leaf)),
  UDecidable.decide (Tree.node .leaf 1 .leaf = .node .leaf 2 .leaf),
  UDecidable.decide (Tree.node .leaf 1 .leaf = .leaf)]

/-- info: [true, false, true, false, false] -/
#guard_msgs in
#eval [UDecidable.decide (Odd.succ (.succ (.succ .zero)) = .succ (.succ (.succ .zero))),
  UDecidable.decide (Even.succ (.succ .zero) = .zero),
  UDecidable.decide (Vec.cons 0 1 .nil = Vec.cons 0 1 .nil),
  UDecidable.decide (Vec.cons 0 1 .nil = Vec.cons 0 2 .nil),
  UDecidable.decide ((⟨1, by decide, 0⟩ : Bounded) = ⟨1, by decide, 1⟩)]

/-- info: [true, false, false, true] -/
#guard_msgs in
#eval [UDecidable.decide (Many.c7 3 = .c7 3), UDecidable.decide (Many.c7 3 = .c7 4),
  UDecidable.decide (Many.c7 3 = .c8 3), UDecidable.decide (Both.b = .b)]

/-! The derived instances agree with equality. -/

example (p q : Point) (h : UDecidable.decide (p = q) = true) : p = q :=
  (UDecidable.decide_spec _).mp h

example (c : Color) : UDecidable.decide (c = c) = true := UDecidable.decide_eq_true rfl

/-!
A field type without a native instance falls back to `UDecidable.ofDecidable`, which the checker
reports.
-/

structure OnlyDecidable where
  s : String.Pos.Raw
  deriving UDecidableEq

/-- error: instUDecidableEqOnlyDecidable.udecEq uses `Decidable` -/
#guard_msgs in
#check_native (⟨0⟩ : OnlyDecidable) = ⟨0⟩
