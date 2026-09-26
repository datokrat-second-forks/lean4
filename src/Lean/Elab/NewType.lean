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
import Lean.Meta.Injective
import Lean.Elab.MutualInductive
import Lean.DocString.Add

public section

namespace Lean.Elab.Command
open Meta

/--
Adds the constructor `ctorName` and projector `projName` of the already elaborated `newtype`
`declName`, whose underlying type is the body of its definition. Reading the parameters off the
elaborated `declName` (instead of re-elaborating its binders) is what makes section variables,
auto-bound implicits and universe parameters behave exactly as for `def`.
-/
private def addNewtypeCtorProj (declName ctorName projName fieldName : Name)
    (ctorBinders : Array Syntax) : TermElabM Nat := do
  let info ← withoutExporting <| getConstInfoDefn declName
  let us := info.levelParams.map mkLevelParam
  forallTelescope info.type fun params resultType => do
    unless (← whnf resultType).isSort do
      throwError "invalid `newtype`, the underlying type must be a type, but has type{indentExpr resultType}"
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
        -- Both are identity functions, so inlining them is what keeps a `newtype`'s calling
        -- convention the same as its underlying type's. `always_inline` rather than `inline`
        -- because the latter is only consulted after the inliner's own heuristics decline.
        setInlineAttribute name .alwaysInline
        compileDecl decl
    withNewBinderInfos ctorParams do
      addIdentity ctorName fieldName underlying self
    withNewBinderInfos implicitParams do
      addIdentity projName `self self underlying
    return params.size

/--
The doc comment of a `newtype`'s constructor or projector, whose `declModifiers` may consist of
nothing else.
-/
private def memberDocComment? (mods : Syntax) (what : String) :
    CommandElabM (Option (TSyntax ``Parser.Command.docComment)) := do
  for i in [1:mods.getNumArgs] do
    unless mods[i].isNone do
      throwErrorAt mods[i] "invalid `newtype` {what}, only a doc comment may precede it"
  return if mods[0].isNone then none else some ⟨mods[0][0]⟩

@[builtin_command_elab Lean.Parser.Command.newtypeCmd]
def elabNewtype : CommandElab := fun stx => do
  -- Accessed by index rather than matched by quotation so that the pattern does not depend on the
  -- parser the elaborator itself was compiled with.
  let mods : TSyntax ``Parser.Command.declModifiers := ⟨stx[0]⟩
  let declId : TSyntax ``Parser.Command.declId := ⟨stx[2]⟩
  let params : TSyntaxArray ``Parser.Term.bracketedBinder := .mk stx[3].getArgs
  -- `structCtor`: `declModifiers true >> ident >> many bracketedBinder >> " :: "`
  let ctor? := if stx[5].isNone then none else some stx[5][0]
  -- `newtypeField`: `declModifiers true >> ident >> " : " >> termParser`
  let field := stx[6]
  let projId : Ident := ⟨field[1]⟩
  let ty : Term := ⟨field[3]⟩
  let ctorDoc? ← match ctor? with
    | some ctor => memberDocComment? ctor[0] "constructor"
    | none => pure none
  let projDoc? ← memberDocComment? field[0] "projector"
  -- as in `elabDeclaration`: the name and the generated declarations follow the visibility the
  -- `def` will get, which in a `public section` is not visible in `mods`
  withExporting (isExporting := (← getScope).isPublic) do
  let modifiers ← elabModifiers mods
  let isPublic := modifiers.isInferredPublic (← getEnv)
  withExporting (isExporting := isPublic) do
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
    throwErrorAt projId "invalid `newtype`, the projector and the constructor cannot have the same name"
  for n in [ctorName, projName] do
    withRef (if n == projName then projId else ctorRef) <| checkNotAlreadyDeclared n
  for attr in modifiers.attrs do
    if attr.name matches `reducible | `semireducible | `implicit_reducible | `instance_reducible |
        `irreducible then
      throwError "invalid `newtype`, a `newtype` is always irreducible, `@[{attr.name}]` is not allowed"
  -- Like a structure's field types, a public `newtype`'s underlying type is always visible.
  withScope (fun sc => if isPublic then
      { sc with attrs := Unhygienic.run `(Parser.Term.attrInstance| expose) :: sc.attrs }
    else sc) do
    elabCommand <| ← `($mods:declModifiers def $declId $params* := $ty)
  let ctorBinders := match ctor? with
    | some ctor => ctor[2].getArgs
    | none => #[]
  let numParams ← liftTermElabM <| withRef ctorRef <|
    addNewtypeCtorProj declName ctorName projName projId.getId ctorBinders
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
