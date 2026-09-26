import Lean

/-!
The `newtype … where` syntax: the constructor is named, documented and given binder updates as
for a one-field `structure`.
-/

/-- A sealed copy of `V`, tagged by `p`. -/
newtype WithTag (p : Nat) (V : Type) where
  /-- Converts an element of `V` to an element of `WithTag p V`. -/
  toTag (p) ::
  /-- Converts an element of `WithTag p V` to an element of `V`. -/
  ofTag : V

/-- info: WithTag.toTag (p : Nat) {V : Type} (ofTag : V) : WithTag p V -/
#guard_msgs in #check WithTag.toTag

/-- info: WithTag.ofTag {p : Nat} {V : Type} (self : WithTag p V) : V -/
#guard_msgs in #check WithTag.ofTag

example (v : Nat) : (WithTag.toTag 3 v).ofTag = v := rfl
example (x : WithTag 3 Nat) : WithTag.toTag 3 x.ofTag = x := rfl

open Lean in
#eval show MetaM Unit from do
  for (n, doc) in [(``WithTag.toTag, "Converts an element of `V` to an element of `WithTag p V`."),
      (``WithTag.ofTag, "Converts an element of `WithTag p V` to an element of `V`.")] do
    let some d ← findDocString? (← getEnv) n | throwError "no docstring for {n}"
    unless d.trimAscii.copy == doc do throwError "unexpected docstring for {n}: {d}"

/-! Without a constructor clause, the constructor is `mk`, and a single line suffices. -/

newtype Plain where val : Nat

/-- info: Plain.mk (val : Nat) : Plain -/
#guard_msgs in #check Plain.mk

/-! Errors. -/

/-- error: Expecting binders that update binder kinds of type parameters. -/
#guard_msgs in newtype BadBinder (α : Type) where mk (β) :: val : α

/-- error: Expecting binders that update binder kinds of type parameters. -/
#guard_msgs in newtype TypedBinder (α : Type) where mk (x : Nat) :: val : α

/-- error: invalid `newtype` constructor, only a doc comment may precede it -/
#guard_msgs in newtype AttrCtor where @[simp] mk :: val : Nat

/-- error: invalid `newtype` projector, only a doc comment may precede it -/
#guard_msgs in newtype PrivProj where private val : Nat
