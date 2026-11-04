/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Różowski

Copyright (c) 2020 Floris van Doorn. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Floris van Doorn, Robert Y. Lewis, Gabriel Ebner
-/

module

prelude
public import Lean.Structure
public import Lean.CoreM

public section

namespace Lean
/--
Returns true if `decl` is an automatically generated declaration.

Also returns true if `decl` is an internal name or created during macro
expansion.
-/
def isAutoDeclOrPrivate_Internal (decl : Name) : CoreM Bool := do
  bif decl.hasMacroScopes then return true
  bif decl.isInternal then return true
  let env ← getEnv
  bif isReservedName env decl then return true
  if let Name.str n s := decl then
    bif (← isAutoDeclOrPrivate_Internal n) then return true
    bif s.startsWith "proof_"
        || s.startsWith "match_"
        || s.startsWith "unsafe_"
        || s.startsWith "grind_"
    then return true
    bif env.isConstructor n && ["injEq", "inj", "sizeOf_spec", "elim", "noConfusion"].contains s then
      return true
    if let ConstantInfo.inductInfo _ := env.find? n then
      bif s.startsWith "brecOn_" || s.startsWith "below_" then return true
      bif [casesOnSuffix, recOnSuffix, brecOnSuffix, belowSuffix,
          "ndrec", "ndrecOn", "noConfusionType", "noConfusion", "ofNat", "toCtorIdx", "ctorIdx",
          "ctorElim", "ctorElimType"].contains s then
        return true
      if let some _ := isSubobjectField? env n (.mkSimple s) then
        return true
    -- Coinductive/inductive lattice-theoretic predicates:
    if let ConstantInfo.inductInfo _ := env.find? (Name.str n "_functor") then
      bif s == "functor_unfold" || s == casesOnSuffix || s == "mutual" then return true
      bif env.isConstructor (Name.str (Name.str n "_functor") s) then return true
  pure false

end Lean
