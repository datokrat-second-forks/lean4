/-!
Tests that dependent elimination in `cases` solves an index equation `b x = t`, where `b` is a
chain of constructors and projections of one-field structures applied to a variable `x`, by the
definitional change of variables `x := b⁻¹ t`, in the same way it solves `x = t`.
-/

structure Box (α : Type) where
  val : α

inductive IsZero : Nat → Prop
  | mk : IsZero 0

inductive OfFun : Box Nat → Prop
  | mk (f : Unit → Box Nat) : OfFun (f ())

-- Projection of a one-field structure: `b := ⟨0⟩`.
example (b : Box Nat) (h : IsZero b.val) : b = ⟨0⟩ := by
  cases h
  rfl

-- Constructor of a one-field structure: `n := (f ()).val`.
example (n : Nat) (h : OfFun ⟨n⟩) : ∃ f : Unit → Box Nat, n = (f ()).val := by
  cases h with
  | mk f => exact ⟨f, rfl⟩

-- A chain of both.
structure Box2 (α : Type) where
  val : Box α

example (b : Box2 Nat) (h : IsZero b.val.val) : b = ⟨⟨0⟩⟩ := by
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

-- Classes are not inverted: that would replace the local instance by a plain variable.
class Origin (α : Type) where
  origin : α

inductive IsOne : Nat → Prop
  | mk : IsOne 1

/--
error: Dependent elimination failed: Failed to solve equation
  inst.1 = 1
-/
#guard_msgs in
example [inst : Origin Nat] (h : IsOne Origin.origin) : inst = ⟨1⟩ := by
  cases h

-- An equation left over after an inversion is reported as it stands.
inductive Pair : Nat → Nat → Prop
  | mk : Pair 0 2

/--
error: Dependent elimination failed: Failed to solve equation
  f { val := 0 }.val = 2
-/
#guard_msgs in
example (b : Box Nat) (f : Nat → Nat) (h : Pair b.val (f b.val)) : False := by
  cases h

-- If a variable occurs in two different indices of the target, no change of variable can help.
inductive Occurs (b : Box Nat) : Box Nat → Prop
  | mk (f : Box Nat → Box Nat) : Occurs b (f b)

/--
error: Dependent elimination failed: Failed to solve equation
  { val := b.val } = f✝ b
-/
#guard_msgs in
example (b : Box Nat) (h : Occurs b ⟨b.val⟩) : False := by
  cases h
