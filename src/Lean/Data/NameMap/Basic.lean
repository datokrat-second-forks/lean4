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

def insertIfNew (m : NameMap α) (n : Name) (a : α) : NameMap α := ⟨m.toTreeMap.insertIfNew n a⟩

@[inline] def insertMany {ρ} [ForIn Id ρ (Name × α)] (m : NameMap α) (l : ρ) : NameMap α :=
  ⟨m.toTreeMap.insertMany l⟩

@[inline] def alter (m : NameMap α) (n : Name) (f : Option α → Option α) : NameMap α :=
  ⟨m.toTreeMap.alter n f⟩

@[inline] def modify (m : NameMap α) (n : Name) (f : α → α) : NameMap α := ⟨m.toTreeMap.modify n f⟩

def contains (m : NameMap α) (n : Name) : Bool := m.toTreeMap.contains n

def find? (m : NameMap α) (n : Name) : Option α := m.toTreeMap.get? n

def find! [Inhabited α] (m : NameMap α) (n : Name) : α := m.toTreeMap.get! n

def findD (m : NameMap α) (n : Name) (fallback : α) : α := m.toTreeMap.getD n fallback

@[deprecated find? (since := "2026-09-23")]
def get? (m : NameMap α) (n : Name) : Option α := m.toTreeMap.get? n

def get! [Inhabited α] (m : NameMap α) (n : Name) : α := m.toTreeMap.get! n

def getD (m : NameMap α) (n : Name) (fallback : α) : α := m.toTreeMap.getD n fallback

/-- The entry with the least name, if any. -/
def min? (m : NameMap α) : Option (Name × α) := m.toTreeMap.minEntry?

instance : Membership Name (NameMap α) := ⟨fun m n => n ∈ m.toTreeMap⟩

instance {m : NameMap α} {n : Name} : Decidable (n ∈ m) :=
  inferInstanceAs (Decidable (n ∈ m.toTreeMap))

instance : GetElem? (NameMap α) Name α (fun m n => n ∈ m) where
  getElem m n h := m.toTreeMap[n]'h
  getElem? m n := m.toTreeMap[n]?
  getElem! m n := m.toTreeMap[n]!

def size (m : NameMap α) : Nat := m.toTreeMap.size

def isEmpty (m : NameMap α) : Bool := m.toTreeMap.isEmpty

@[inline] def any (m : NameMap α) (p : Name → α → Bool) : Bool := m.toTreeMap.any p

@[inline] def all (m : NameMap α) (p : Name → α → Bool) : Bool := m.toTreeMap.all p

@[inline] def foldl (f : σ → Name → α → σ) (init : σ) (m : NameMap α) : σ := m.toTreeMap.foldl f init

@[inline] def foldlM [Monad m'] (f : σ → Name → α → m' σ) (init : σ) (m : NameMap α) : m' σ :=
  m.toTreeMap.foldlM f init

@[inline] def foldr (f : Name → α → σ → σ) (init : σ) (m : NameMap α) : σ := m.toTreeMap.foldr f init

@[inline] def foldrM [Monad m'] (f : Name → α → σ → m' σ) (init : σ) (m : NameMap α) : m' σ :=
  m.toTreeMap.foldrM f init

@[inline] def forM [Monad m'] (f : Name → α → m' PUnit) (m : NameMap α) : m' PUnit :=
  m.toTreeMap.forM f

def keys (m : NameMap α) : List Name := m.toTreeMap.keys

def keysArray (m : NameMap α) : Array Name := m.toTreeMap.keysArray

def values (m : NameMap α) : List α := m.toTreeMap.values

def valuesArray (m : NameMap α) : Array α := m.toTreeMap.valuesArray

def toList (m : NameMap α) : List (Name × α) := m.toTreeMap.toList

def toArray (m : NameMap α) : Array (Name × α) := m.toTreeMap.toArray

def ofList (l : List (Name × α)) : NameMap α := ⟨Std.TreeMap.ofList l _⟩

def ofArray (l : Array (Name × α)) : NameMap α := ⟨Std.TreeMap.ofArray l _⟩

@[inline] def mergeWith (f : Name → α → α → α) (m₁ m₂ : NameMap α) : NameMap α :=
  ⟨m₁.toTreeMap.mergeWith f m₂.toTreeMap⟩

instance : Insert (Name × α) (NameMap α) where
  insert e s := s.insert e.1 e.2

instance [Monad m] : ForIn m (NameMap α) (Name × α) where
  forIn m init f := forIn m.toTreeMap init f

/-- `filter f m` returns the `NameMap` consisting of all
"`key`/`val`"-pairs in `m` where `f key val` returns `true`. -/
@[inline] def filter (f : Name → α → Bool) (m : NameMap α) : NameMap α := ⟨m.toTreeMap.filter f⟩

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
@[inline] def insertMany {ρ} [ForIn Id ρ Name] (s : NameSet) (l : ρ) : NameSet :=
  ⟨s.toTreeSet.insertMany l⟩
instance : Membership Name NameSet := ⟨fun s n => n ∈ s.toTreeSet⟩
instance {s : NameSet} {n : Name} : Decidable (n ∈ s) :=
  inferInstanceAs (Decidable (n ∈ s.toTreeSet))
def size (s : NameSet) : Nat := s.toTreeSet.size
def isEmpty (s : NameSet) : Bool := s.toTreeSet.isEmpty
def min? (s : NameSet) : Option Name := s.toTreeSet.min?
def min! (s : NameSet) : Name := s.toTreeSet.min!
@[inline] def any (s : NameSet) (p : Name → Bool) : Bool := s.toTreeSet.any p
@[inline] def all (s : NameSet) (p : Name → Bool) : Bool := s.toTreeSet.all p
/-- Whether every name in `s` is also in `t`. -/
def subset (s t : NameSet) : Bool := s.all t.contains
@[inline] def foldl (f : σ → Name → σ) (init : σ) (s : NameSet) : σ := s.toTreeSet.foldl f init
@[inline] def foldlM [Monad m] (f : σ → Name → m σ) (init : σ) (s : NameSet) : m σ :=
  s.toTreeSet.foldlM f init
@[inline] def foldr (f : Name → σ → σ) (init : σ) (s : NameSet) : σ := s.toTreeSet.foldr f init
@[inline] def forM [Monad m] (f : Name → m PUnit) (s : NameSet) : m PUnit := s.toTreeSet.forM f
def toList (s : NameSet) : List Name := s.toTreeSet.toList
def toArray (s : NameSet) : Array Name := s.toTreeSet.toArray
def union (s t : NameSet) : NameSet := ⟨s.toTreeSet.union t.toTreeSet⟩
@[deprecated union (since := "2026-09-23")]
def merge (s t : NameSet) : NameSet := ⟨s.toTreeSet.merge t.toTreeSet⟩
instance : Insert Name NameSet where
  insert n s := s.insert n
instance [Monad m] : ForIn m NameSet Name where
  forIn s init f := forIn s.toTreeSet init f

@[deprecated union (since := "2026-09-23")]
def append (s t : NameSet) : NameSet :=
  s.union t

instance : Append NameSet where
  append := NameSet.union

instance : Singleton Name NameSet where
  singleton := fun n => (∅ : NameSet).insert n

instance : Union NameSet where
  union := NameSet.union

instance : Inter NameSet where
  inter := fun s t => s.foldl (fun r n => if t.contains n then r.insert n else r) {}

instance : SDiff NameSet where
  sdiff := fun s t => t.foldl (fun s n => s.erase n) s

/-- `filter f s` returns the `NameSet` consisting of all `x` in `s` where `f x` returns `true`. -/
@[inline] def filter (f : Name → Bool) (s : NameSet) : NameSet := ⟨s.toTreeSet.filter f⟩

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
def erase (s : NameHashSet) (n : Name) : NameHashSet := ⟨s.toHashSet.erase n⟩
def contains (s : NameHashSet) (n : Name) : Bool := s.toHashSet.contains n
def size (s : NameHashSet) : Nat := s.toHashSet.size
@[inline] def fold (f : σ → Name → σ) (init : σ) (s : NameHashSet) : σ := s.toHashSet.fold f init
def toList (s : NameHashSet) : List Name := s.toHashSet.toList
def toArray (s : NameHashSet) : Array Name := s.toHashSet.toArray
def ofList (l : List Name) : NameHashSet := ⟨Std.HashSet.ofList l⟩
def ofArray (l : Array Name) : NameHashSet := ⟨Std.HashSet.ofArray l⟩

/-- `filter f s` returns the `NameHashSet` consisting of all `x` in `s` where `f x` returns `true`. -/
@[inline] def filter (f : Name → Bool) (s : NameHashSet) : NameHashSet := ⟨s.toHashSet.filter f⟩
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
