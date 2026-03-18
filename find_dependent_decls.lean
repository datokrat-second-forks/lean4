import Lean

open Lean Meta

set_option linter.unusedVariables false

/-- Returns true if the type is `Sort u`, or a function type whose return type
    is ultimately a `Sort` (i.e., a type constructor like `Type → Type` or
    `Type → Type → Type`). This classifies both types and type constructors
    as "type-valued". -/
def isTypeValued (e : Expr) : MetaM Bool := do
  -- whnf first to unfold wrappers like semiOutParam/outParam
  let e ← withReducible <| whnf e
  forallTelescope e fun _ body => do
    let body ← withReducible <| whnf body
    return body.isSort

/-- Check if declaration is from Init or Std module -/
def isFromInitOrStd (env : Environment) (name : Name) : Bool :=
  match env.getModuleIdxFor? name with
  | some idx =>
    let modName := env.header.moduleNames[idx.toNat]!
    let root := modName.getRoot
    root == `Init || root == `Std
  | none => false

/-- Filter out auto-generated declarations that aren't interesting -/
def isInteresting (name : Name) : Bool :=
  match name with
  | .str _ s =>
    !(s == "rec" || s == "recOn" || s == "casesOn" || s == "below" || s == "brecOn" ||
      s == "binductionOn" || s == "noConfusion" || s == "noConfusionType" ||
      s == "ctorElim" || s == "ctorElimType" || s == "injEq" || s == "inj" ||
      s.startsWith "match_" || s.startsWith "proof_" || s.startsWith "sizeOf" ||
      s == "mk" ||
      name.isInternal)
  | _ => !name.isInternal

/--
Check if any parameter's type depends on an earlier value parameter.
-/
def checkDependentValueParam (name : Name) : MetaM (Option Name) := do
  let env ← getEnv
  let some ci := env.find? name | return none
  if ci.isUnsafe then return none
  if isPrivateName name then return none
  if !isInteresting name then return none
  forallTelescope ci.type fun xs body => do
    -- Exclude proof-valued declarations (return type lives in Prop)
    let bodyType ← inferType body
    let bodyType ← withReducible <| whnf bodyType
    if bodyType.isProp then return none
    let mut valueParamFVars : Array (Nat × Expr) := #[]
    for i in [:xs.size] do
      let xiType ← inferType xs[i]!
      if !(← isTypeValued xiType) then
        valueParamFVars := valueParamFVars.push (i, xs[i]!)
    for (vi, vfvar) in valueParamFVars do
      for j in [vi+1:xs.size] do
        let xjType ← inferType xs[j]!
        -- Use reducible whnf to unfold optParam/autoParam wrappers,
        -- so that `(stop : optParam Nat as.size)` is seen as just `Nat`
        let xjType ← withReducible <| whnf xjType
        if xjType.containsFVar vfvar.fvarId! then
          return some name
    return none

/--
Check if a declaration takes a non-Type/Prop value parameter but returns a Type (not Prop).
-/
def checkValueToType (name : Name) : MetaM (Option Name) := do
  let env ← getEnv
  let some ci := env.find? name | return none
  if ci.isUnsafe then return none
  if isPrivateName name then return none
  if !isInteresting name then return none
  forallTelescope ci.type fun xs body => do
    if !body.isSort then return none
    if body == mkSort .zero then return none
    for i in [:xs.size] do
      let xiType ← inferType xs[i]!
      if !(← isTypeValued xiType) then
        return some name
    return none

def main : IO Unit := do
  initSearchPath (← findSysroot)
  let env ← importModules #[{module := `Init}, {module := `Std}] {} 0
  let allNames : Array Name := env.constants.fold (init := #[]) fun acc name _ =>
    if isFromInitOrStd env name && !name.isInternal then acc.push name else acc
  let allNames := allNames.qsort (·.toString < ·.toString)
  IO.println s!"Total declarations in Init/Std: {allNames.size}"

  let ctx : Core.Context := {
    fileName := "<find_dependent_decls>"
    fileMap := { source := "", positions := #[0] }
    options := {}
  }
  let state : Core.State := { env }

  let ((dep, v2t), _) ← (do
    let mut dep : Array Name := #[]
    let mut v2t : Array Name := #[]
    let mut count := 0
    for name in allNames do
      count := count + 1
      if count % 10000 == 0 then
        IO.println s!"  ... processed {count}/{allNames.size}"
      try
        if let some n ← MetaM.run' (checkDependentValueParam name) then
          dep := dep.push n
        if let some n ← MetaM.run' (checkValueToType name) then
          v2t := v2t.push n
      catch _ => pure ()
    IO.println s!"  Done. Found {dep.size} dependent-value-param decls, {v2t.size} value-to-type decls"
    return (dep, v2t)
    : CoreM _).toIO ctx state

  -- Truncate to 200
  let dep := if dep.size > 200 then dep.extract 0 200 else dep
  let v2t := if v2t.size > 200 then v2t.extract 0 200 else v2t

  IO.println s!"\n=== Category 1: Declarations with dependent value parameters ({dep.size}) ==="
  IO.println "  (A later parameter's type depends on an earlier non-Type/Prop value parameter)"
  for name in dep do
    IO.println s!"  {name}"

  IO.println s!"\n=== Category 2: Declarations taking value but returning Type ({v2t.size}) ==="
  IO.println "  (Takes a non-Type/Prop parameter but returns a Type, not Prop)"
  for name in v2t do
    IO.println s!"  {name}"
