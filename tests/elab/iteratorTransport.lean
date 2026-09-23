import Std.Data.Iterators

/-!
Rehearses sealing the state type of an iterator as a `newtype`, the way `Std.Iterators.Types.Map`
is sealed: the `Iterator`, `Finite` and `Productive` instances are transported along the generated
equivalence with `Iterator.ofEquiv`, `Finite.ofEquiv` and `Productive.ofEquiv`, and the consumers of
the transported iterator agree with those of the underlying one.
-/

open Std Std.Iterators

newtype Wrapped (α : Type) := Types.ListIterator α with toListIterator

instance : Iterator (Wrapped α) Id α := Iterator.ofEquiv Wrapped.equivDef inferInstance
instance : Finite (Wrapped α) Id := Finite.ofEquiv Wrapped.equivDef
instance : Productive (Wrapped α) Id := Productive.ofEquiv Wrapped.equivDef
instance : IteratorLoop (Wrapped α) Id Id := .defaultImplementation

def wrap (l : List α) : IterM (α := Wrapped α) Id α :=
  (l.iterM Id).mapState Wrapped.mk

/-- info: [2, 3, 4] -/
#guard_msgs in
#eval Id.run ((wrap [1, 2, 3]).map (· + 1)).toList

/-- info: 6 -/
#guard_msgs in
#eval Id.run do
  let mut s := 0
  for x in wrap [1, 2, 3] do
    s := s + x
  return s

example (l : List Nat) : (wrap l).toList = (l.iterM Id).toList := by
  rw [wrap, IterM.toList_ofEquiv Wrapped.equivDef, IterM.mapState_symm_mapState]

example (l : List Nat) : (wrap l).toArray = (l.iterM Id).toArray := by
  rw [wrap, IterM.toArray_ofEquiv Wrapped.equivDef, IterM.mapState_symm_mapState]

example (l : List Nat) (f : Nat → Nat → Id (ForInStep Nat)) :
    forIn (wrap l) 0 f = forIn (l.iterM Id) 0 f := by
  rw [wrap, IterM.forIn_ofEquiv Wrapped.equivDef, IterM.mapState_symm_mapState]
