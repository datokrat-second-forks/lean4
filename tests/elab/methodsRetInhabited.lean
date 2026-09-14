module
import all Init.Prelude

open Lean
def exec (x : MacroM α) : Option α :=
  match (ReaderT.run x {
      quotContext := `Expander
      currMacroScope := 0
      ref := default
      methods := default }).run { macroScope := 0 } with
    | EStateM.Result.ok a s => a
    | _ => none

def tst : MacroM String := do
  let n ← Macro.getCurrNamespace
  return toString n

/-- info: some "[anonymous]" -/
#guard_msgs in
#eval exec tst
