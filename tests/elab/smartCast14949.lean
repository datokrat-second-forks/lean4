/-!
Issue #14949: unification assigns an instance of the wrong type to an instance-implicit
metavariable, because the assignment's type check sees through a type synonym. Under
`elaborator.implicitTransparency`, the type check of assignments happens at exactly `implicit`
transparency, so the wrong assignment is rejected, and type synonyms get their instances through
declared casts.

The Mathlib reproducer of the issue is modelled by the second test (`Tan` plays `TangentSpace`).
-/

namespace Small

class X where x : Nat
class Y (α : Type) extends X where y : Nat

instance : Y Nat := { x := 0, y := 0 }
instance [inst : Y Nat] : X := inst.toX

def f [Y Nat] (_ : X.x = 0) : Nat := Y.y Nat

def N := Nat
instance : Y N := { x := 0, y := 1 }
instance [inst : Y N] : X := inst.toX

/--
error: synthesized type class instance is not definitionally equal to expression inferred by typing rules, synthesized
  instYNat
inferred
  instYN
-/
#guard_msgs in
def bla := fun (h : X.x = 0) => f h

set_option elaborator.implicitTransparency true in
def bla' := fun (h : X.x = 0) => f h

end Small

namespace Bundle

class Topo (α : Type) where nhd : α → α → Prop
class Nrm (α : Type) extends Topo α where norm : α → Nat
structure Total {B : Type} (E : B → Type) where
  base : B
  fib  : E base

class Fib {B : Type} (E : B → Type) [∀ b, Topo (E b)] where chart : B → B

instance totalTopo {B : Type} [Topo B] {E : B → Type} [∀ b, Topo (E b)] [Fib E] :
    Topo (Total E) := ⟨fun _ _ => True⟩

def Diff {M N : Type} [Topo M] [Topo N] (_f : M → N) : Prop := True

/-- warning: declaration uses `sorry` -/
#guard_msgs in
theorem inner_bundle {B : Type} [Topo B] {E : B → Type}
    [nE : ∀ b, Nrm (E b)] [Fib E] {f g : ∀ b, E b}
    (_hf : Diff fun b => (⟨b, f b⟩ : Total E))
    (_hg : Diff fun b => (⟨b, g b⟩ : Total E)) :
    ∀ b, (nE b).norm (f b) = (nE b).norm (g b) := sorry

class RB {B : Type} (E : B → Type) [∀ b, Topo (E b)] where g : ∀ b, E b → Nat

instance rbNrm {B : Type} {E : B → Type} [tE : ∀ b, Topo (E b)] [rb : RB E] (b : B) : Nrm (E b) where
  toTopo := tE b
  norm := rb.g b

/-! The issue's reproducer: `Tan`'s instance relies on `Tan E B b` unfolding to `E`. -/

namespace Abuse

def Tan (E : Type) (B : Type) (_b : B) : Type := E

instance tanTopo (E : Type) [nE : Nrm E] (B : Type) (b : B) : Topo (Tan E B b) := nE.toTopo
instance tanFib (E : Type) [Nrm E] (B : Type) : Fib (Tan E B) := ⟨id⟩

variable (E : Type) [Nrm E] (B : Type) [Topo B] [RB (Tan E B)] (f g : ∀ b, Tan E B b)

/--
error: synthesized type class instance is not definitionally equal to expression inferred by typing rules, synthesized
  fun b => rbNrm b
inferred
  fun b => inst✝²
-/
#guard_msgs in
example (hf : Diff fun b => (⟨b, f b⟩ : Total (Tan E B)))
        (hg : Diff fun b => (⟨b, g b⟩ : Total (Tan E B))) :=
  inner_bundle hf hg

end Abuse

/-! The same with implicit elaboration: `Tan`'s instance is transferred with a declared cast. -/

namespace Cast

set_option elaborator.implicitTransparency true

def Tan (E : Type) (B : Type) (_b : B) : Type := E

/--
error: Type mismatch
  nE.toTopo
has type
  Topo E
but is expected to have type
  Topo (Tan E B b)
-/
#guard_msgs in
instance (E : Type) [nE : Nrm E] (B : Type) (b : B) : Topo (Tan E B b) := nE.toTopo

def Tan.topo (E : Type) (B : Type) (b : B) (t : Topo E) : Topo (Tan E B b) := smartCast

instance tanTopo (E : Type) [nE : Nrm E] (B : Type) (b : B) : Topo (Tan E B b) :=
  Tan.topo E B b nE.toTopo
instance tanFib (E : Type) [Nrm E] (B : Type) : Fib (Tan E B) := ⟨id⟩

variable (E : Type) [Nrm E] (B : Type) [Topo B] [RB (Tan E B)] (f g : ∀ b, Tan E B b)

example (hf : Diff fun b => (⟨b, f b⟩ : Total (Tan E B)))
        (hg : Diff fun b => (⟨b, g b⟩ : Total (Tan E B))) :=
  inner_bundle hf hg

example (hf : Diff fun b => (⟨b, f b⟩ : Total (Tan E B)))
        (hg : Diff fun b => (⟨b, g b⟩ : Total (Tan E B))) :
    ∀ b, (rbNrm b).norm (f b) = (rbNrm b).norm (g b) :=
  inner_bundle hf hg

end Cast

end Bundle
