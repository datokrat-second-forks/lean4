/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Data.SMap

public section

namespace Lean

/-- Staged set. It is just a simple wrapper on top of Staged maps. -/
structure SSet (α : Type u) [BEq α] [Hashable α] where
  toSMap : SMap α Unit

namespace SSet
variable {α : Type u} [BEq α] [Hashable α]

abbrev empty : SSet α := ⟨SMap.empty⟩

instance : EmptyCollection (SSet α) := ⟨empty⟩

instance : Inhabited (SSet α) := ⟨empty⟩

abbrev insert (s : SSet α) (a : α) : SSet α :=
  ⟨s.toSMap.insert a ()⟩

abbrev contains (s : SSet α) (a : α) : Bool :=
  s.toSMap.contains a

abbrev forM [Monad m] (s : SSet α) (f : α → m PUnit) : m PUnit :=
  s.toSMap.forM fun a _ => f a

/-- Move from stage 1 into stage 2. -/
abbrev switch (s : SSet α) : SSet α :=
  ⟨s.toSMap.switch⟩

abbrev fold (f : σ → α → σ) (init : σ) (s : SSet α) : σ :=
  s.toSMap.fold (fun d a _ => f d a) init

def toList (m : SSet α) : List α :=
  m.fold (init := []) fun es a => a::es

end SSet

def List.toSSet [BEq α] [Hashable α] (es : List α) : SSet α :=
  es.foldl (init := {}) fun s a => s.insert a

instance {_ : BEq α} {_ : Hashable α} [Repr α] : Repr (SSet α) where
  reprPrec v prec := Repr.addAppParen (reprArg v.toList ++ ".toSSet") prec

end Lean
