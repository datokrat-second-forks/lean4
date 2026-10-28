/-!
`noncomputable structure` and `noncomputable class` declare a type whose values compiled code can
neither construct nor inspect: the constructor, `casesOn` and the projections are noncomputable.
Values can still be handled through `implemented_by` functions, and the declarations work as usual
in proofs.
-/

set_option warn.classDefReducibility false

noncomputable structure S where
  x : Nat
  y : Nat

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'S.mk', which is 'noncomputable'
-/
#guard_msgs in
def mkSBad : S := ⟨1, 2⟩

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'S.x', which is 'noncomputable'
-/
#guard_msgs in
def getXBad (s : S) : Nat := s.x

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'S.casesOn', which is 'noncomputable'
-/
#guard_msgs in
def matchBad (s : S) : Nat :=
  match s with
  | ⟨x, _⟩ => x

noncomputable def mkS : S := ⟨1, 2⟩

example : mkS.x + mkS.y = 3 := rfl

example (s : S) : s = ⟨s.x, s.y⟩ := rfl

/-! Compiled code can work with values through `implemented_by`. -/

noncomputable structure Wrapped where
  val : Nat

unsafe def wrapImpl (n : Nat) : Wrapped := unsafeCast n
@[implemented_by wrapImpl] def wrap (n : Nat) : Wrapped := ⟨n⟩

unsafe def unwrapImpl (w : Wrapped) : Nat := unsafeCast w
@[implemented_by unwrapImpl] def unwrap (w : Wrapped) : Nat := w.val

/-- info: 42 -/
#guard_msgs in
#eval unwrap (wrap 42)

/-! Projections to parents are noncomputable too, including those that are not subobjects. -/

structure A where
  a : Nat

structure B extends A where
  b : Nat

structure C extends A where
  c : Nat

noncomputable structure D extends B, C

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'D.toB', which is 'noncomputable'
-/
#guard_msgs in
def toBBad (d : D) : B := d.toB

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'D.toC', which is 'noncomputable'
-/
#guard_msgs in
def toCBad (d : D) : C := d.toC

example (d : D) : d.toC.a = d.toB.a := rfl

/-! Classes, here with only a proof field. -/

noncomputable class K (n : Nat) : Type where
  h : n = n

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'K.mk', which is 'noncomputable'
-/
#guard_msgs in
instance : K 0 := ⟨rfl⟩

noncomputable instance : K 1 := ⟨rfl⟩

example (i j : K 1) : i = j := rfl

/-! Inductive types and constructors still cannot be marked `noncomputable`. -/

/--
error: Invalid modifier: Inductive declarations cannot be marked as `noncomputable`
-/
#guard_msgs in
noncomputable inductive I where
  | a

/--
error: Invalid modifier: Inductive declarations cannot be marked as `noncomputable`
-/
#guard_msgs in
noncomputable class inductive CI where
  | a

/--
error: Invalid modifier: Constructors cannot be marked as `noncomputable`
-/
#guard_msgs in
structure E where
  noncomputable mk' ::
  x : Nat
