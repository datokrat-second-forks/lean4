/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura
-/
module

prelude
public import Std.Data.HashSet.Basic
public import Std.Data.TreeSet.Basic
public import Lean.Data.SSet
public import Lean.Data.Name

public section

namespace Lean

structure NameMap (α : Type) where
  toTreeMap : Std.TreeMap Name α Name.quickCmp

@[inline] def mkNameMap (α : Type) : NameMap α := ⟨Std.TreeMap.empty⟩

namespace NameMap
variable {α : Type}

instance [Repr α] : Repr (NameMap α) := ⟨(reprPrec ·.toTreeMap)⟩

instance (α : Type) : EmptyCollection (NameMap α) := ⟨mkNameMap α⟩

instance (α : Type) : Inhabited (NameMap α) where
  default := {}

instance [BEq α] : BEq (NameMap α) := ⟨(·.toTreeMap == ·.toTreeMap)⟩

def insert (m : NameMap α) (n : Name) (a : α) : NameMap α := ⟨m.toTreeMap.insert n a⟩

def erase (m : NameMap α) (n : Name) : NameMap α := ⟨m.toTreeMap.erase n⟩

def alter (m : NameMap α) (n : Name) (f : Option α → Option α) : NameMap α := ⟨m.toTreeMap.alter n f⟩

def contains (m : NameMap α) (n : Name) : Bool := m.toTreeMap.contains n

def find? (m : NameMap α) (n : Name) : Option α := m.toTreeMap.get? n

def get? (m : NameMap α) (n : Name) : Option α := m.toTreeMap.get? n

def get! [Inhabited α] (m : NameMap α) (n : Name) : α := m.toTreeMap.get! n

def getD (m : NameMap α) (n : Name) (fallback : α) : α := m.toTreeMap.getD n fallback

instance : Membership Name (NameMap α) := ⟨fun m n => n ∈ m.toTreeMap⟩

instance : GetElem? (NameMap α) Name α (fun m n => n ∈ m) where
  getElem m n h := m.toTreeMap[n]'h
  getElem? m n := m.toTreeMap[n]?
  getElem! m n := m.toTreeMap[n]!

def size (m : NameMap α) : Nat := m.toTreeMap.size

def isEmpty (m : NameMap α) : Bool := m.toTreeMap.isEmpty

def any (m : NameMap α) (p : Name → α → Bool) : Bool := m.toTreeMap.any p

def all (m : NameMap α) (p : Name → α → Bool) : Bool := m.toTreeMap.all p

def foldl (f : σ → Name → α → σ) (init : σ) (m : NameMap α) : σ := m.toTreeMap.foldl f init

def foldlM [Monad m'] (f : σ → Name → α → m' σ) (init : σ) (m : NameMap α) : m' σ :=
  m.toTreeMap.foldlM f init

def forM [Monad m'] (f : Name → α → m' PUnit) (m : NameMap α) : m' PUnit := m.toTreeMap.forM f

def keys (m : NameMap α) : List Name := m.toTreeMap.keys

def keysArray (m : NameMap α) : Array Name := m.toTreeMap.keysArray

def values (m : NameMap α) : List α := m.toTreeMap.values

def valuesArray (m : NameMap α) : Array α := m.toTreeMap.valuesArray

def toList (m : NameMap α) : List (Name × α) := m.toTreeMap.toList

def toArray (m : NameMap α) : Array (Name × α) := m.toTreeMap.toArray

def ofList (l : List (Name × α)) : NameMap α := ⟨Std.TreeMap.ofList l _⟩

def ofArray (l : Array (Name × α)) : NameMap α := ⟨Std.TreeMap.ofArray l _⟩

def mergeWith (f : Name → α → α → α) (m₁ m₂ : NameMap α) : NameMap α :=
  ⟨m₁.toTreeMap.mergeWith f m₂.toTreeMap⟩

instance : Insert (Name × α) (NameMap α) where
  insert e s := s.insert e.1 e.2

instance [Monad m] : ForIn m (NameMap α) (Name × α) where
  forIn m init f := forIn m.toTreeMap init f

/-- `filter f m` returns the `NameMap` consisting of all
"`key`/`val`"-pairs in `m` where `f key val` returns `true`. -/
def filter (f : Name → α → Bool) (m : NameMap α) : NameMap α := ⟨m.toTreeMap.filter f⟩

end NameMap

structure NameSet where
  toTreeSet : Std.TreeSet Name Name.quickCmp

namespace NameSet
def empty : NameSet := ⟨Std.TreeSet.empty⟩
instance : EmptyCollection NameSet := ⟨empty⟩
instance : Inhabited NameSet := ⟨empty⟩
def insert (s : NameSet) (n : Name) : NameSet := ⟨s.toTreeSet.insert n⟩
def containsThenInsert (s : NameSet) (n : Name) : Bool × NameSet :=
  let (b, s) := s.toTreeSet.containsThenInsert n
  (b, ⟨s⟩)
def erase (s : NameSet) (n : Name) : NameSet := ⟨s.toTreeSet.erase n⟩
def contains (s : NameSet) (n : Name) : Bool := s.toTreeSet.contains n
instance : Membership Name NameSet := ⟨fun s n => n ∈ s.toTreeSet⟩
def size (s : NameSet) : Nat := s.toTreeSet.size
def isEmpty (s : NameSet) : Bool := s.toTreeSet.isEmpty
def any (s : NameSet) (p : Name → Bool) : Bool := s.toTreeSet.any p
def all (s : NameSet) (p : Name → Bool) : Bool := s.toTreeSet.all p
def foldl (f : σ → Name → σ) (init : σ) (s : NameSet) : σ := s.toTreeSet.foldl f init
def foldlM [Monad m] (f : σ → Name → m σ) (init : σ) (s : NameSet) : m σ := s.toTreeSet.foldlM f init
def toList (s : NameSet) : List Name := s.toTreeSet.toList
def toArray (s : NameSet) : Array Name := s.toTreeSet.toArray
def merge (s t : NameSet) : NameSet := ⟨s.toTreeSet.merge t.toTreeSet⟩
def union (s t : NameSet) : NameSet := ⟨s.toTreeSet.union t.toTreeSet⟩
instance : Insert Name NameSet where
  insert n s := s.insert n
instance [Monad m] : ForIn m NameSet Name where
  forIn s init f := forIn s.toTreeSet init f

/-- The union of two `NameSet`s. -/
def append (s t : NameSet) : NameSet :=
  s.merge t

instance : Append NameSet where
  append := NameSet.append

instance : Singleton Name NameSet where
  singleton := fun n => (∅ : NameSet).insert n

instance : Union NameSet where
  union := NameSet.append

instance : Inter NameSet where
  inter := fun s t => s.foldl (fun r n => if t.contains n then r.insert n else r) {}

instance : SDiff NameSet where
  sdiff := fun s t => t.foldl (fun s n => s.erase n) s

/-- `filter f s` returns the `NameSet` consisting of all `x` in `s` where `f x` returns `true`. -/
def filter (f : Name → Bool) (s : NameSet) : NameSet := ⟨s.toTreeSet.filter f⟩

def ofList (l : List Name) : NameSet := ⟨Std.TreeSet.ofList l _⟩

def ofArray (l : Array Name) : NameSet := ⟨Std.TreeSet.ofArray l _⟩

end NameSet

structure NameSSet where
  toSSet : SSet Name

namespace NameSSet
abbrev empty : NameSSet := ⟨SSet.empty⟩
instance : EmptyCollection NameSSet := ⟨empty⟩
instance : Inhabited NameSSet := ⟨empty⟩
abbrev insert (s : NameSSet) (n : Name) : NameSSet := ⟨s.toSSet.insert n⟩
abbrev contains (s : NameSSet) (n : Name) : Bool := s.toSSet.contains n
end NameSSet

structure NameHashSet where
  toHashSet : Std.HashSet Name

namespace NameHashSet
@[inline] def empty : NameHashSet := ⟨∅⟩
instance : EmptyCollection NameHashSet := ⟨empty⟩
instance : Inhabited NameHashSet := ⟨{}⟩
def insert (s : NameHashSet) (n : Name) : NameHashSet := ⟨s.toHashSet.insert n⟩
def contains (s : NameHashSet) (n : Name) : Bool := s.toHashSet.contains n

/-- `filter f s` returns the `NameHashSet` consisting of all `x` in `s` where `f x` returns `true`. -/
def filter (f : Name → Bool) (s : NameHashSet) : NameHashSet := ⟨s.toHashSet.filter f⟩
end NameHashSet

def MacroScopesView.isPrefixOf (v₁ v₂ : MacroScopesView) : Bool :=
  v₁.name.isPrefixOf v₂.name &&
  v₁.scopes == v₂.scopes &&
  v₁.ctx == v₂.ctx &&
  v₁.imported == v₂.imported

def MacroScopesView.isSuffixOf (v₁ v₂ : MacroScopesView) : Bool :=
  v₁.name.isSuffixOf v₂.name &&
  v₁.scopes == v₂.scopes &&
  v₁.ctx == v₂.ctx &&
  v₁.imported == v₂.imported

end Lean
