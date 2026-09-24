/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich, Daniel Selsam, Wojciech Nawrocki, E.W.Ayers
-/
module

prelude
public import Std.Data.TreeMap.Basic

public section

namespace Lean

/-- A position of a subexpression in an expression.

We use a simple encoding scheme for expression positions `Pos`:
every `Expr` constructor has at most 3 direct expression children. Considering an expression's type
to be one extra child as well, we can injectively map a path of `childIdxs` to a natural number
by computing the value of the 4-ary representation `1 :: childIdxs`, since n-ary representations
without leading zeros are unique. Note that `pos` is initialized to `1` (case `childIdxs == []`).

See also `SubExpr`. -/
structure SubExpr.Pos where
  asNat : Nat
  deriving DecidableEq

namespace SubExpr.Pos

instance : Ord Pos := ⟨fun p q => compare p.asNat q.asNat⟩

end SubExpr.Pos

/-- Map from subexpr positions to values. -/
abbrev SubExpr.PosMap (α : Type u) := Std.TreeMap SubExpr.Pos α

end Lean
