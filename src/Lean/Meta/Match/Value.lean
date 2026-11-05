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
  uif (← getNatValue? e).isSome then return true
  uif (← getIntValue? e).isSome then return true
  uif (← getFinValue? e).isSome then return true
  uif (← getBitVecValue? e).isSome then return true
  uif (getStringValue? e).isSome then return true
  uif (← getCharValue? e).isSome then return true
  uif (← getUInt8Value? e).isSome then return true
  uif (← getUInt16Value? e).isSome then return true
  uif (← getUInt32Value? e).isSome then return true
  uif (← getUInt64Value? e).isSome then return true
  uif (← getFloatValue? e).isSome then return true
  uif (← getFloat32Value? e).isSome then return true
  return false

end Lean.Meta
