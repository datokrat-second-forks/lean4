/-
Copyright (c) 2024 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Util.CollectFVars
public import Lean.Util.FindExpr

public section

namespace Lean.Expr

/-- Returns true if the free variables in `a` are subset of the free variables in `b`. -/
def fvarsSubset (a b : Expr) : Bool :=
  bif !a.hasFVar then
    true -- Empty set is subset of anything
  else bif !b.hasFVar then
    false -- Empty set is not a superset of a nonempty set.
  else
    let s := collectFVars {} b
    Option.isNone <| a.findExt? fun e =>
      bif !e.hasFVar then .done
      else bif e.isFVar && !s.fvarSet.contains e.fvarId! then .found
      else .visit

end Lean.Expr
