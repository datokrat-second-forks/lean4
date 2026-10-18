/-!
Tests for smart casts: the `smartCast` primitive, declared casts (`:= smartCast`), the reduction
rules for casts below `default` transparency, and elaboration at `implicit` transparency
(`elaborator.implicitTransparency`).
-/

set_option elaborator.implicitTransparency true

def MyNat := Nat

/-! Without a cast, a `Nat` is not a `MyNat` at `implicit` transparency. -/

/--
error: Type mismatch
  0
has type
  Nat
but is expected to have type
  MyNat
-/
#guard_msgs in
example : MyNat := (0 : Nat)

set_option elaborator.implicitTransparency false in
example : MyNat := (0 : Nat)

/-! Declared casts are `[implicit_reducible]` wrappers around the primitive. -/

def MyNat.ofNat (n : Nat) : MyNat := smartCast
def MyNat.toNat (n : MyNat) : Nat := smartCast

/--
info: @[implicit_reducible] def MyNat.ofNat : Nat → MyNat :=
fun n => smartCast Nat MyNat MyNat.ofNat._proof_1 n
-/
#guard_msgs in
#print MyNat.ofNat

example : (MyNat.ofNat 0).toNat = 0 := rfl

theorem MyNat.toNat_ofNat {n : Nat} : (MyNat.ofNat n).toNat = n := rfl
theorem MyNat.ofNat_toNat {n : MyNat} : MyNat.ofNat n.toNat = n := rfl

attribute [simp] MyNat.toNat_ofNat

example : (MyNat.ofNat 0).toNat = 0 := by dsimp
example : (MyNat.ofNat 0).toNat = 0 := by simp

/-! Instances defined through casts compute at `implicit` transparency. -/

instance : Add MyNat := ⟨fun a b => .ofNat (a.toNat + b.toNat)⟩
instance : OfNat MyNat n := ⟨.ofNat n⟩

example (a b : Nat) : MyNat.ofNat a + MyNat.ofNat b = .ofNat (a + b) := rfl
example : (2 : MyNat) + 3 = 5 := rfl

/-!
Below `implicit`, declared casts are opaque constants, while the rules still apply to the
primitive.
-/

/--
error: Tactic `rfl` failed: The left-hand side
  (MyNat.ofNat 0).toNat
is not definitionally equal to the right-hand side
  0

⊢ (MyNat.ofNat 0).toNat = 0
-/
#guard_msgs in
example : (MyNat.ofNat 0).toNat = 0 := by with_reducible rfl

example (n : Nat) :
    smartCast MyNat Nat (by with_semireducible rfl) (smartCast Nat MyNat (by with_semireducible rfl) n) = n := by
  with_reducible rfl

/-! A declared cast between types that are not definitionally equal is rejected. -/

/--
error: cannot cast
  Nat
to
  Bool
because the types are not definitionally equal at `default` transparency
-/
#guard_msgs in
def bad (n : Nat) : Bool := smartCast

/-! Lifting through `List`: casts are pushed into constructors. -/

def f (xs : List Nat) : List MyNat := smartCast
def g (xs : List MyNat) : List Nat := smartCast

example (xs) : f (g xs) = xs := rfl
example (xs) : g (f xs) = xs := rfl
example (x) (xs) : f (x :: xs) = .ofNat x :: f xs := rfl
example : f [] = [] := rfl
example : f [1, 2] = [.ofNat 1, .ofNat 2] := rfl

@[simp] theorem f_nil : f [] = [] := rfl
@[simp] theorem f_cons (x xs) : f (x :: xs) = .ofNat x :: f xs := rfl

example : f [1, 2] = [.ofNat 1, .ofNat 2] := by dsimp
example : f [1, 2] = [.ofNat 1, .ofNat 2] := by simp

/-!
A chain of casts. The inner cast is stuck (`MyList` is not an inductive type at `implicit`
transparency), so the outer target is pushed into the constructor; and two stuck chains with the
same source and target are compared as single casts.
-/

def MyList := List Nat
def ofList (xs : List Nat) : MyList := smartCast
def toNats (xs : MyList) : List MyNat := smartCast

example (x xs) : toNats (ofList (x :: xs)) = .ofNat x :: f xs := rfl
example (xs) : toNats (ofList xs) = f xs := rfl

/-! Structures: casts are pushed into constructors and projections. -/

def toMyNats (p : Nat × Nat) : MyNat × MyNat := smartCast

example (a b : Nat) : toMyNats (a, b) = (.ofNat a, .ofNat b) := rfl
example (p : Nat × Nat) : (toMyNats p).1 = .ofNat p.1 := rfl
example (p : Nat × Nat) : (toMyNats p).2 = .ofNat p.2 := rfl
example (p : Nat × Nat) : toMyNats p = (.ofNat p.1, .ofNat p.2) := rfl

/-!
Functions: an applied cast is the cast of the application to the argument cast back to the source
domain (more in `smartCastEta.lean`).
-/

def liftCod (h : Nat → Nat) : Nat → MyNat := smartCast
def liftDom (h : Nat → Nat) : MyNat → Nat := smartCast

example (h : Nat → Nat) (n : Nat) : liftCod h n = .ofNat (h n) := rfl
example (h : Nat → Nat) (n : Nat) : liftDom h (.ofNat n) = h n := rfl

/-! Computation with semireducible definitions is opt-in. -/

def double (n : Nat) : Nat := n + n

/--
error: Type mismatch
  rfl
has type
  ?m.7 = ?m.7
but is expected to have type
  double 2 = 4
-/
#guard_msgs in
example : double 2 = 4 := rfl

example : double 2 = 4 := by with_semireducible rfl

-- `List.length` is `[instance_reducible]`, so it unfolds at `implicit` transparency.
example : [1, 2].length = 2 := rfl

/-!
In `with_semireducible`, unification may unfold `MyNat`, but metavariable assignments must still be
type-correct at `implicit` transparency.
-/

/--
error: Application type mismatch: The argument
  rfl
has type
  0 = 0
but is expected to have type
  ?m.6 = ?m.6
in the application
  Exists.intro ?m.6 rfl
-/
#guard_msgs in
example : ∃ x : MyNat, x = x := by with_semireducible exact Exists.intro _ (rfl : (0 : Nat) = 0)

set_option elaborator.implicitTransparency false in
example : ∃ x : MyNat, x = x := Exists.intro _ (rfl : (0 : Nat) = 0)

/-!
A definition that unfolds at `implicit` transparency must typecheck at `implicit` transparency, even
if its body was elaborated with `with_semireducible`. A declared cast is fine: its proof is checked
at `default` transparency.
-/

/--
error: `leak` unfolds at `implicit` transparency, but does not typecheck at `implicit` transparency:
  its value has type
    Nat
-/
#guard_msgs in
@[implicit_reducible] def leak : MyNat := by with_semireducible exact (0 : Nat)

def noLeak : MyNat := by with_semireducible exact (0 : Nat)

/--
error: `instAddMyNat_1` unfolds at `implicit` transparency, but does not typecheck at `implicit` transparency:
  its value has type
    Add Nat
-/
#guard_msgs in
instance : Add MyNat := by with_semireducible exact (inferInstance : Add Nat)

/-!
The rules do not look at the proof of a cast. Instead, every cast in a declaration must cast between
types that are definitionally equal at `default` transparency.
-/

example (h : Nat = Nat) : smartCast Nat Nat h 0 = 0 := rfl

/--
error: cannot cast
  List Nat
to
  List Bool
because the types are not definitionally equal at `default` transparency
-/
#guard_msgs in
def badCast (h : List Nat = List Bool) : List Bool := smartCast (List Nat) (List Bool) h []

/-- error: `smartCast` must be applied to the types it casts between -/
#guard_msgs in
def castFrom (α : Type) : (β : Type) → α = β → α → β := smartCast α

/-! The kernel sees through casts. -/

example : (MyNat.ofNat 0).toNat = 0 := by decide

/-! `inferInstanceAs` and delta deriving cast the instance instead of rewrapping it. -/

def Syn := Nat
def Syn.ofNat (n : Nat) : Syn := smartCast

instance : Inhabited Syn := inferInstanceAs (Inhabited Nat)

/--
info: @[instance_reducible] def instInhabitedSyn : Inhabited Syn :=
smartCast (Inhabited Nat) (Inhabited Syn) instInhabitedSyn._proof_1 instInhabitedNat
-/
#guard_msgs in
#print instInhabitedSyn

example : (default : Syn) = Syn.ofNat 0 := rfl

/-- error: cannot cast -/
#guard_msgs (substring := true) in
instance : Inhabited Syn := inferInstanceAs (Inhabited Bool)

def Syn' := Nat
deriving Inhabited

/--
info: @[instance_reducible] def instInhabitedSyn' : Inhabited Syn' :=
smartCast (Inhabited Nat) (Inhabited Syn') instInhabitedSyn'._proof_1 instInhabitedNat
-/
#guard_msgs in
#print instInhabitedSyn'

example : (default : Syn') = smartCast Nat Syn' (by with_semireducible rfl) 0 := rfl
