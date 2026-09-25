import Lean

/-!
Names that continue past an `export` alias resolve through the alias target: after `export B (S)`
in `A`, `S.foo` resolves to `A.B.S.foo`, as it does under `open A.B`.
-/

namespace A
namespace B
structure S where x : Nat
def S.foo : Nat := 0
def D := Nat
def D.bar.baz : Nat := 1
protected def S.prot : Nat := 2
end B
export B (S D)
end A

open A

/-- info: A.B.S.foo : Nat -/
#guard_msgs in #check S.foo

/-- info: A.B.S.mk (x : Nat) : S -/
#guard_msgs in #check S.mk

/-- info: A.B.S.foo : Nat -/
#guard_msgs in #check A.S.foo

/-- info: A.B.D.bar.baz : Nat -/
#guard_msgs in #check D.bar.baz

/-- info: A.B.S.prot : Nat -/
#guard_msgs in #check S.prot

/-! Field notation on values is unaffected. -/

/-- info: fun s => s.x : S → Nat -/
#guard_msgs in #check fun (s : S) => s.x

/-! A missing name still fails. -/

/-- error: Unknown constant `A.B.S.nope` -/
#guard_msgs in #check S.nope

/-! A declaration with the literal name wins over the alias. -/

namespace A
def S.foo : Nat := 5
end A

/-- info: A.S.foo : Nat -/
#guard_msgs in #check S.foo

/-! The motivating case: `CoreM` is exported from `Lean.Core`. -/

open Lean in
example (x : CoreM Nat) : CoreM Nat := CoreM.mk x.toReaderT
