import Lean

/-!
The `structure +defeq … where` syntax: the constructor is named, documented and given binder
updates as for a one-field `structure`, and the `structure` features that a `+defeq` structure does
not support are rejected.
-/

/-- A sealed copy of `V`, tagged by `p`. -/
structure +defeq WithTag (p : Nat) (V : Type) where
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

structure +defeq Plain where val : Nat

/-- info: Plain.mk (val : Nat) : Plain -/
#guard_msgs in #check Plain.mk

/-! The option is an ordinary configuration item, and the declaration signature is that of `def`. -/

structure (defeq := true) ValItem : Type := val : Nat
structure +defeq Sorted (α : Type) : Type where val : List α

structure -defeq Ordinary where val : Nat

open Lean in
#eval show MetaM Unit from do
  for (n, isDefeq) in [(``ValItem, true), (``Sorted, true), (``Ordinary, false)] do
    unless ((← getEnv).getVirtualStructureInfo? n).isSome == isDefeq do
      throwError "unexpected kind of {n}"
    unless isStructure (← getEnv) n == !isDefeq do
      throwError "unexpected kind of {n}"

open Lean Elab Command in
/--
info: structure +defeq Plain where
  val : Nat
-/
#guard_msgs in
set_option hygiene false in
#eval show CommandElabM Unit from do
  let stx ← `(command| structure +defeq Plain where val : Nat)
  logInfo (← liftCoreM <| PrettyPrinter.ppCommand stx)

/-! Errors. -/

/-- error: Invalid configuration option `unknown` for `Lean.Meta.Command.StructureConfig` -/
#guard_msgs in structure +unknown Unknown where val : Nat

/-- error: A `+defeq` structure must have exactly one field -/
#guard_msgs in structure +defeq NoFields

/-- error: A `+defeq` structure must have exactly one field -/
#guard_msgs in structure +defeq NoFields where

/-- error: A `+defeq` structure must have exactly one field -/
#guard_msgs in structure +defeq TwoFields where
  a : Nat
  b : Nat

/-- error: A `+defeq` structure cannot extend other structures -/
#guard_msgs in structure +defeq Extends extends Plain where val' : Nat

/-- error: A `+defeq` structure does not support `deriving` clauses -/
#guard_msgs in structure +defeq Derives where val : Nat deriving Repr

/--
error: Invalid field: The field of a `+defeq` structure must be of the form `name : type`, without binders or default value
-/
#guard_msgs in structure +defeq FieldBinders where val (n : Nat) : Fin (n + 1)

/--
error: Invalid field: The field of a `+defeq` structure must be of the form `name : type`, without binders or default value
-/
#guard_msgs in structure +defeq FieldDefault where val : Nat := 0

/--
error: Invalid field: The field of a `+defeq` structure must be of the form `name : type`, without binders or default value
-/
#guard_msgs in structure +defeq FieldNoType where val := 0

/--
error: Invalid field: The field of a `+defeq` structure must be of the form `name : type`, without binders or default value
-/
#guard_msgs in structure +defeq FieldImplicit where {val : Nat}

/--
error: Invalid field: The field of a `+defeq` structure must be of the form `name : type`, without binders or default value
-/
#guard_msgs in structure +defeq FieldExplicit where (val : Nat)

/-- error: A `+defeq` structure cannot be declared in a `mutual` block -/
#guard_msgs in
mutual
structure +defeq InMutual where val : Nat
end

/-- error: Expecting binders that update binder kinds of type parameters. -/
#guard_msgs in structure +defeq BadBinder (α : Type) where mk (β) :: val : α

/-- error: Expecting binders that update binder kinds of type parameters. -/
#guard_msgs in structure +defeq TypedBinder (α : Type) where mk (x : Nat) :: val : α

/--
error: Invalid modifier: The constructor of a `+defeq` structure can only be preceded by a doc comment
-/
#guard_msgs in structure +defeq AttrCtor where @[simp] mk :: val : Nat

/-- error: Invalid modifier: The field of a `+defeq` structure can only be preceded by a doc comment -/
#guard_msgs in structure +defeq PrivProj where private val : Nat
