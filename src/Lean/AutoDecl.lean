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
  uif decl.hasMacroScopes then return true
  uif decl.isInternal then return true
  let env ← getEnv
  uif isReservedName env decl then return true
  if let Name.str n s := decl then
    uif (← isAutoDeclOrPrivate_Internal n) then return true
    uif s.startsWith "proof_"
        || s.startsWith "match_"
        || s.startsWith "unsafe_"
        || s.startsWith "grind_"
    then return true
    uif env.isConstructor n && ["injEq", "inj", "sizeOf_spec", "elim", "noConfusion"].contains s then
      return true
    if let ConstantInfo.inductInfo _ := env.find? n then
      uif s.startsWith "brecOn_" || s.startsWith "below_" then return true
      uif [casesOnSuffix, recOnSuffix, brecOnSuffix, belowSuffix,
          "ndrec", "ndrecOn", "noConfusionType", "noConfusion", "ofNat", "toCtorIdx", "ctorIdx",
          "ctorElim", "ctorElimType"].contains s then
        return true
      if let some _ := isSubobjectField? env n (.mkSimple s) then
        return true
    -- Coinductive/inductive lattice-theoretic predicates:
    if let ConstantInfo.inductInfo _ := env.find? (Name.str n "_functor") then
      uif s == "functor_unfold" || s == casesOnSuffix || s == "mutual" then return true
      uif env.isConstructor (Name.str (Name.str n "_functor") s) then return true
  pure false

end Lean
