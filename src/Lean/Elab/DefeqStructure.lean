/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Elab.Command
public import Lean.Elab.DeclModifiers
public import Lean.Elab.DeclarationRange
public import Lean.Meta.VirtualStructure
import Lean.Elab.ConfigEval
import Lean.Meta.Injective
import Lean.Elab.MutualInductive
import Lean.DocString.Add

public section

namespace Lean.Elab.Command
open Meta

declare_core_config_elab elabStructureConfig Meta.Command.StructureConfig

/-- Returns whether the declaration `stx` is a `structure +defeq`. -/
def isDefeqStructure (stx : Syntax) : CoreM Bool := do
  -- Only `structureTk` takes options.
  unless stx[0].isOfKind ``Parser.Command.structureTk do return false
  return (← elabStructureConfig stx[0][1]).defeq

/--
Adds the constructor `ctorName` and projection `projName` of the already elaborated `+defeq`
structure `declName`, whose field type is the body of its definition. Reading the parameters off
the elaborated `declName` (instead of re-elaborating its binders) is what makes section variables,
auto-bound implicits and universe parameters behave exactly as for `def`.
-/
private def addDefeqStructureCtorProj (declName ctorName projName fieldName : Name)
    (ctorBinders : Array Syntax) : TermElabM Nat := do
  let info ← withoutExporting <| getConstInfoDefn declName
  let us := info.levelParams.map mkLevelParam
  forallTelescope info.type fun params resultType => do
    unless (← whnf resultType).isSort do
      throwError "Invalid resulting type: Expected a sort"
    let underlying := info.value.beta params
    let self := mkAppN (mkConst declName us) params
    let implicitParams ← params.filterMapM fun p => do
      return if (← p.fvarId!.getDecl).binderInfo.isExplicit then some (p.fvarId!, .implicit) else none
    let (binders, overrides) ← elabParamInfoUpdates params ctorBinders (fun _ => pure true)
    unless binders.isEmpty do
      throwErrorAt (mkNullNode binders) "Expecting binders that update binder kinds of type parameters."
    let ctorParams := implicitParams ++ overrides.toArray.map fun (p, _, bi) => (p.fvarId!, bi)
    -- Importers can only reduce `projName (ctorName a)` in the kernel if both bodies are exposed.
    let exposed := (← getEnv).hasExposedBody declName
    let addIdentity (name argName : Name) (argType resultType : Expr) : TermElabM Unit :=
      withLocalDeclD argName argType fun a => do
        let type ← mkForallFVars (params.push a) resultType
        let value ← mkLambdaFVars (params.push a) a
        let hints := .regular (getMaxHeight (← getEnv) value + 1)
        let decl := .defnDecl (← mkDefinitionValInferringUnsafe name info.levelParams type value hints)
        addDecl decl (forceExpose := exposed)
        -- Both are identity functions, so inlining them is what keeps a `+defeq` structure's
        -- calling convention the same as its field type's. `always_inline` rather than `inline`
        -- because the latter is only consulted after the inliner's own heuristics decline.
        setInlineAttribute name .alwaysInline
        compileDecl decl
    withNewBinderInfos ctorParams do
      addIdentity ctorName fieldName underlying self
    withNewBinderInfos implicitParams do
      addIdentity projName `self self underlying
    return params.size

/--
The doc comment of a `+defeq` structure's constructor or field, whose `declModifiers` may consist
of nothing else.
-/
private def memberDocComment? (mods : Syntax) (what : String) :
    CommandElabM (Option (TSyntax ``Parser.Command.docComment)) := do
  for i in [1:mods.getNumArgs] do
    unless mods[i].isNone do
      throwErrorAt mods[i] "Invalid modifier: The {what} of a `+defeq` structure can only be \
        preceded by a doc comment"
  return if mods[0].isNone then none else some ⟨mods[0][0]⟩

/--
Elaborates the `structure` declaration `stx`, with elaborated modifiers `modifiers`, as a `+defeq`
structure; see `Lean.Meta.Command.StructureConfig.defeq`.
-/
def elabDefeqStructure (modifiers : Modifiers) (stx : Syntax) : CommandElabM Unit := do
  -- Accessed by index rather than matched by quotation so that the pattern does not depend on the
  -- parser the elaborator itself was compiled with.
  let declId : TSyntax ``Parser.Command.declId := ⟨stx[1]⟩
  -- As for a structure's fields, the field type is elaborated against a sort.
  let declSig : TSyntax ``Parser.Command.optDeclSig ← if stx[2][1].isNone then
      pure ⟨stx[2].setArg 1 (mkNullNode #[← `(Parser.Term.typeSpec| : Sort _)])⟩
    else pure ⟨stx[2]⟩
  unless stx[3].isNone do
    throwErrorAt stx[3] "A `+defeq` structure cannot extend other structures"
  unless stx[5][0].isNone do
    throwErrorAt stx[5] "A `+defeq` structure does not support `deriving` clauses"
  -- `optional structCtor`, then `structFields`
  let (ctor?, fields) := if stx[4].isNone then (none, #[]) else
    (if stx[4][1].isNone then none else some stx[4][1][0], stx[4][2][0].getArgs)
  let #[field] := fields
    | throwErrorAt (if fields.isEmpty then declId.raw else fields[1]!)
        "A `+defeq` structure must have exactly one field"
  -- `structSimpleBinder`: `declModifiers true >> ident >> optDeclSig >> optional default`
  unless field.isOfKind ``Parser.Command.structSimpleBinder && field[2][0].getNumArgs == 0 &&
      !field[2][1].isNone && field[3].isNone do
    throwErrorAt field "Invalid field: The field of a `+defeq` structure must be of the form \
      `name : type`, without binders or default value"
  let projId : Ident := ⟨field[1]⟩
  -- `typeSpec`: `" : " >> termParser`
  let ty : Term := ⟨field[2][1][0][1]⟩
  let ctorDoc? ← match ctor? with
    | some ctor => memberDocComment? ctor[0] "constructor"
    | none => pure none
  let projDoc? ← memberDocComment? field[0] "field"
  let isPublic := modifiers.isInferredPublic (← getEnv)
  let { declName, .. } ← liftTermElabM <|
    Term.expandDeclId (← getCurrNamespace) (← getLevelNames) declId modifiers
  let ctorRef := match ctor? with
    | some ctor => ctor[1]
    | none => declId.raw
  let ctorName := declName ++ (match ctor? with
    | some ctor => ctor[1].getId
    | none => `mk)
  let projName := declName ++ projId.getId
  if projName == ctorName then
    throwErrorAt projId "Invalid field name `{projId.getId}`: This is the name of the structure \
      constructor"
  for n in [ctorName, projName] do
    withRef (if n == projName then projId else ctorRef) <| checkNotAlreadyDeclared n
  for attr in modifiers.attrs do
    if attr.name matches `reducible | `semireducible | `implicit_reducible | `instance_reducible |
        `irreducible then
      throwError "Invalid attribute: A `+defeq` structure is always irreducible, \
        `@[{attr.name}]` is not allowed"
  -- Like a structure's field types, a public `+defeq` structure's field type is always visible.
  withScope (fun sc => if isPublic then
      { sc with attrs := Unhygienic.run `(Parser.Term.attrInstance| expose) :: sc.attrs }
    else sc) do
    elabCommand <| ← `($(modifiers.stx):declModifiers def $declId $declSig:optDeclSig := $ty)
  let ctorBinders := match ctor? with
    | some ctor => ctor[2].getArgs
    | none => #[]
  let numParams ← liftTermElabM <| withRef ctorRef <|
    addDefeqStructureCtorProj declName ctorName projName projId.getId ctorBinders
  addDeclarationRangesFromSyntax ctorName ctorRef
  addDeclarationRangesFromSyntax projName projId
  liftTermElabM do
    addDocString' ctorName (mkNullNode ctorBinders) ctorDoc?
    addDocString' projName (mkNullNode #[]) projDoc?
  if ctor?.isSome then
    addConstInfo ctorRef ctorName
  addConstInfo projId projName
  for n in [declName, ctorName, projName] do
    setIrreducibleAttribute n
  modifyEnv (registerVirtualStructure · { typeName := declName, ctorName, projName, numParams })
  liftTermElabM <| mkVirtualInjectiveTheorems ctorName projName numParams
  for n in [ctorName, projName] do
    liftCoreM <| enableRealizationsForConst n

end Lean.Elab.Command
