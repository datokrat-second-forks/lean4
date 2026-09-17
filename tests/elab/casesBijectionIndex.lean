/-!
Tests that dependent elimination in `cases` solves an index equation `b x = t`, where `b` is a
chain of constructors and projections of one-field structures or `newtype`s applied to a variable
`x`, by the definitional change of variables `x := b⁻¹ t`, in the same way it solves `x = t`.
-/

structure Box (α : Type) where
  val : α

newtype Sealed := Nat with toNat

inductive IsZero : Nat → Prop
  | mk : IsZero 0

inductive OfFun : Box Nat → Prop
  | mk (f : Unit → Box Nat) : OfFun (f ())

inductive OfFunSealed : Sealed → Prop
  | mk (f : Unit → Sealed) : OfFunSealed (f ())

-- Projection of a one-field structure: `b := ⟨0⟩`.
example (b : Box Nat) (h : IsZero b.val) : b = ⟨0⟩ := by
  cases h
  rfl

-- Constructor of a one-field structure: `n := (f ()).val`.
example (n : Nat) (h : OfFun ⟨n⟩) : ∃ f : Unit → Box Nat, n = (f ()).val := by
  cases h with
  | mk f => exact ⟨f, rfl⟩

-- Projector of a `newtype`: `s := Sealed.mk 0`.
example (s : Sealed) (h : IsZero s.toNat) : s = Sealed.mk 0 := by
  cases h
  rfl

-- Constructor of a `newtype`: `n := (f ()).toNat`.
example (n : Nat) (h : OfFunSealed (Sealed.mk n)) : ∃ f : Unit → Sealed, n = (f ()).toNat := by
  cases h with
  | mk f => exact ⟨f, rfl⟩

-- A chain of both.
example (b : Box Sealed) (h : IsZero b.val.toNat) : b = ⟨Sealed.mk 0⟩ := by
  cases h
  rfl

/-!
The shape that arises for an iterator whose state is a `newtype` around another iterator's state:
the index is the constructor of a structure applied to the constructor of a `newtype` applied to a
projection chain of the variable.
-/

structure Inner where
  n : Nat

newtype Mid := Inner with toInner

structure Outer where
  mid : Mid

inductive Step : Outer → Outer → Prop
  | skip (i : Inner) : Step ⟨Mid.mk i⟩ ⟨Mid.mk ⟨i.n + 1⟩⟩

example (o o' : Outer) (h : Step ⟨Mid.mk o.mid.toInner⟩ ⟨Mid.mk o'.mid.toInner⟩) :
    o'.mid.toInner.n = o.mid.toInner.n + 1 := by
  cases h
  rfl

-- Rewrapping the projection of `x` folds: `y := x` rather than `y := ⟨x.val⟩`.
inductive Same : Nat → Nat → Prop
  | mk (n : Nat) : Same n n

/--
trace: case mk
x : Box Nat
⊢ x = x
-/
#guard_msgs in
example (x y : Box Nat) (h : Same x.val y.val) : x = y := by
  cases h
  trace_state
  rfl

-- No folding across different parameters: `⟨x.val⟩ : Tagged 1` is not `x : Tagged 0`.
structure Tagged (n : Nat) where
  val : Nat

/--
trace: case mk
x : Tagged 0
⊢ x = { val := { val := x.1 }.val }
-/
#guard_msgs in
example (x : Tagged 0) (y : Tagged 1) (h : Same x.val y.val) : x = ⟨y.val⟩ := by
  cases h
  trace_state
  rfl

-- Constructors of one-constructor-one-field inductives, not declared as a structure, are
-- inverted, too.
inductive Wrap where
  | mk : Nat → Wrap

/--
trace: case mk
⊢ Wrap.mk 0 = Wrap.mk 0
-/
#guard_msgs in
example (w : Wrap) (h : IsZero w.1) : w = .mk 0 := by
  cases h
  trace_state
  rfl

-- A class with one field is a one-field structure as well, so its constructor and projection
-- are inverted, too.
class Origin (α : Type) where
  origin : α

inductive IsOne : Nat → Prop
  | mk : IsOne 1

/--
trace: case mk
⊢ { origin := 1 } = { origin := 1 }
-/
#guard_msgs in
example [inst : Origin Nat] (h : IsOne Origin.origin) : inst = ⟨1⟩ := by
  cases h
  trace_state
  rfl

-- If a variable occurs in two different indices of the target, no change of variable can help.
inductive Occurs (b : Sealed) : Sealed → Prop
  | mk (f : Sealed → Sealed) : Occurs b (f b)

/--
error: Dependent elimination failed: Failed to solve equation
  Sealed.mk s.toNat = f✝ s
-/
#guard_msgs in
example (s : Sealed) (h : Occurs s (Sealed.mk s.toNat)) : False := by
  cases h
