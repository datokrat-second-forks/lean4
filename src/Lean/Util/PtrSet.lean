/-
Copyright (c) 2023 Leonardo de Moura. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Data.Hashable
public import Std.Data.HashSet.Basic

public section

namespace Lean

structure Ptr (α : Type u) where
  value : α

unsafe instance : Hashable (Ptr α) where
  hash a := hash64 (ptrAddrUnsafe a).toUInt64

unsafe instance : BEq (Ptr α) where
  beq a b := ptrAddrUnsafe a == ptrAddrUnsafe b

/--
Set of pointers. It is a low-level auxiliary datastructure used for traversing DAGs.
-/
unsafe structure PtrSet (α : Type) where
  toHashSet : Std.HashSet (Ptr α)

unsafe def mkPtrSet {α : Type} (capacity : Nat := 64) : PtrSet α :=
  ⟨Std.HashSet.emptyWithCapacity capacity⟩

unsafe abbrev PtrSet.insert (s : PtrSet α) (a : α) : PtrSet α :=
  ⟨s.toHashSet.insert { value := a }⟩

unsafe abbrev PtrSet.contains (s : PtrSet α) (a : α) : Bool :=
  s.toHashSet.contains { value := a }

/--
Map of pointers. It is a low-level auxiliary datastructure used for traversing DAGs.
-/
unsafe structure PtrMap (α : Type) (β : Type) where
  toHashMap : Std.HashMap (Ptr α) β

unsafe def mkPtrMap {α β : Type} (capacity : Nat := 64) : PtrMap α β :=
  ⟨Std.HashMap.emptyWithCapacity capacity⟩

unsafe abbrev PtrMap.insert (s : PtrMap α β) (a : α) (b : β) : PtrMap α β :=
  ⟨s.toHashMap.insert { value := a } b⟩

unsafe abbrev PtrMap.contains (s : PtrMap α β) (a : α) : Bool :=
  s.toHashMap.contains { value := a }

unsafe abbrev PtrMap.find? (s : PtrMap α β) (a : α) : Option β :=
  s.toHashMap.get? { value := a }

end Lean
