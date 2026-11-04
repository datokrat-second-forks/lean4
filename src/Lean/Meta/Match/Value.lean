/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Meta.LitValues

public section

namespace Lean.Meta

/-- Return true is `e` is a term that should be processed by the `match`-compiler using `casesValues` -/
def isMatchValue (e : Expr) : MetaM Bool := do
  let e ← instantiateMVars e
  bif (← getNatValue? e).isSome then return true
  bif (← getIntValue? e).isSome then return true
  bif (← getFinValue? e).isSome then return true
  bif (← getBitVecValue? e).isSome then return true
  bif (getStringValue? e).isSome then return true
  bif (← getCharValue? e).isSome then return true
  bif (← getUInt8Value? e).isSome then return true
  bif (← getUInt16Value? e).isSome then return true
  bif (← getUInt32Value? e).isSome then return true
  bif (← getUInt64Value? e).isSome then return true
  bif (← getFloatValue? e).isSome then return true
  bif (← getFloat32Value? e).isSome then return true
  return false

end Lean.Meta
