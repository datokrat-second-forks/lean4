/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Data.Options
import Lean.Meta.Inductive
import Lean.Elab.Deriving.Basic
import Lean.Elab.Deriving.Util
import Lean.Meta.NatTable
import Lean.Meta.Constructions.CtorIdx
import Lean.Meta.Constructions.CasesOnSameCtor
import Lean.Meta.SameCtorUtils
import Init.Data.Array.OfFn
import Init.UDecidable

namespace Lean.Elab.Deriving.DecEq
open Lean.Parser.Term
open Meta

register_builtin_option deriving.decEq.linear_construction_threshold : Nat := {
  defValue := 10
  descr := "If the inductive data type has this many or more constructors, use a different \
    implementation for deciding equality that avoids the quadratic code size produced by the \
    default implementation.\n\n\
    The alternative construction compiles to less efficient code in some cases, so by default \
    it is only used for inductive types with 10 or more constructors." }

/--
Whether to derive `UDecidableEq` instead of `DecidableEq`. The two only differ in the names of the
class, of `isTrue`/`isFalse` and of the dependent `if`.
-/
abbrev Flavor := Bool

def Flavor.className (u : Flavor) : Name :=
  if u then ``UDecidableEq else ``DecidableEq

def mkIsTrue (u : Flavor) (h : Term) : TermElabM Term :=
  if u then ``(UDecidable.isTrue $h) else `(isTrue $h)

def mkIsFalse (u : Flavor) (h : Term) : TermElabM Term :=
  if u then ``(UDecidable.isFalse $h) else `(isFalse $h)

/-- `if h : c then t else e`, where `h` is bound in both branches. -/
def mkDIte (u : Flavor) (h : Ident) (c t e : Term) : TermElabM Term :=
  if u then ``(UDecidable.dite $c (fun $h:ident => $t) (fun $h:ident => $e))
  else `(if $h:ident : $c then $t else $e)

def mkDecEqHeader (u : Flavor) (indVal : InductiveVal) : TermElabM Header := do
  mkHeader u.className 2 indVal

def mkMatchOld (u : Flavor) (ctx : Context) (header : Header) (indVal : InductiveVal) :
    TermElabM Term := do
  let discrs ← mkDiscrs header indVal
  let alts ← mkAlts
  `(match $[$discrs],* with $alts:matchAlt*)
where
  mkSameCtorRhs : List (Ident × Ident × Option Name × Bool) → TermElabM Term
    | [] => do mkIsTrue u (← `(rfl))
    | (a, b, recField, isProof) :: todo => withFreshMacroScope do
      let rhs ← if isProof then
        `(have h : @$a = @$b := rfl; by subst h; exact $(← mkSameCtorRhs todo):term)
      else
        let sameCtor ← mkSameCtorRhs todo
        let h : Ident ← `(h)
        mkDIte u h (← `(@$a = @$b)) (← `(by subst $h:ident; exact $sameCtor:term))
          (← mkIsFalse u (← `(by intro n; injection n; apply $h:ident _; assumption)))
      if let some auxFunName := recField then
        -- add local instance for `a = b` using the function being defined `auxFunName`
        `(let inst := $(mkIdent auxFunName) @$a @$b; $rhs)
      else
        return rhs

  mkAlts : TermElabM (Array (TSyntax ``matchAlt)) := do
    let mut alts := #[]
    for ctorName₁ in indVal.ctors do
      let ctorInfo ← getConstInfoCtor ctorName₁
      for ctorName₂ in indVal.ctors do
        let mut patterns := #[]
        -- add `_` pattern for indices
        for _ in *...indVal.numIndices do
          patterns := patterns.push (← `(_))
        if ctorName₁ == ctorName₂ then
          let alt ← forallTelescopeReducing ctorInfo.type fun xs type => do
            let type ← Core.betaReduce type -- we 'beta-reduce' to eliminate "artificial" dependencies
            let mut patterns  := patterns
            let mut ctorArgs1 := #[]
            let mut ctorArgs2 := #[]
            -- add `_` for inductive parameters, they are inaccessible
            for _ in *...indVal.numParams do
              ctorArgs1 := ctorArgs1.push (← `(_))
              ctorArgs2 := ctorArgs2.push (← `(_))
            let mut todo := #[]
            for i in *...ctorInfo.numFields do
              let x := xs[indVal.numParams + i]!
              if occursOrInType (← getLCtx) x type then
                -- If resulting type depends on this field, we don't need to compare
                -- but use inaccessible patterns fail during pattern match compilation if their
                -- equality does not actually follow from the equality between their types
                let a := mkIdent (← mkFreshUserName `a)
                ctorArgs1 := ctorArgs1.push a
                ctorArgs2 := ctorArgs2.push (← `(term|.( $a:ident )))
              else
                let a := mkIdent (← mkFreshUserName `a)
                let b := mkIdent (← mkFreshUserName `b)
                ctorArgs1 := ctorArgs1.push a
                ctorArgs2 := ctorArgs2.push b
                let xType ← inferType x
                let indValNum :=
                  ctx.typeInfos.findIdx?
                  (xType.isAppOf ∘ ConstantVal.name ∘ InductiveVal.toConstantVal)
                let recField  := indValNum.map (ctx.auxFunNames[·]!)
                let isProof ← isProp xType
                todo := todo.push (a, b, recField, isProof)
            patterns := patterns.push (← `(@$(mkIdent ctorName₁):ident $ctorArgs1:term*))
            patterns := patterns.push (← `(@$(mkIdent ctorName₁):ident $ctorArgs2:term*))
            let rhs ← mkSameCtorRhs todo.toList
            `(matchAltExpr| | $[$patterns:term],* => $rhs:term)
          alts := alts.push alt
        else if (← compatibleCtors ctorName₁ ctorName₂) then
          patterns := patterns ++ #[(← `($(mkIdent ctorName₁) ..)), (← `($(mkIdent ctorName₂) ..))]
          let rhs ← mkIsFalse u (← `(by intro h; injection h))
          alts := alts.push (← `(matchAltExpr| | $[$patterns:term],* => $rhs:term))
    return alts

def mkMatchNew (u : Flavor) (ctx : Context) (header : Header) (indVal : InductiveVal) :
    TermElabM Term := do
  assert! header.targetNames.size == 2

  let x1 := mkIdent header.targetNames[0]!
  let x2 := mkIdent header.targetNames[1]!
  let ctorIdxName := mkCtorIdxName indVal.name
  -- NB: the getMatcherInfo? assumes all matchers are called `match_`
  let casesOnSameCtorName ← mkFreshUserName (indVal.name ++ `match_on_same_ctor)
  mkCasesOnSameCtor casesOnSameCtorName indVal.name
  let alts ← Array.ofFnM (n := indVal.numCtors) fun ⟨ctorIdx, _⟩ => do
    let ctorName := indVal.ctors[ctorIdx]!
    let ctorInfo ← getConstInfoCtor ctorName
    forallTelescopeReducing ctorInfo.type fun xs type => do
      let type ← Core.betaReduce type -- we 'beta-reduce' to eliminate "artificial" dependencies
      let mut ctorArgs1 : Array Term := #[]
      let mut ctorArgs2 : Array Term := #[]
      let mut todo := #[]

      for i in *...ctorInfo.numFields do
        let x := xs[indVal.numParams + i]!
        if type.containsFVar x.fvarId! then
          -- If resulting type depends on this field, we don't need to bring it into
          -- scope nor compare it
          ctorArgs1 := ctorArgs1.push (← `(_))
        else
          let a := mkIdent (← mkFreshUserName `a)
          let b := mkIdent (← mkFreshUserName `b)
          ctorArgs1 := ctorArgs1.push a
          ctorArgs2 := ctorArgs2.push b
          let xType ← inferType x
          let indValNum :=
            ctx.typeInfos.findIdx?
            (xType.isAppOf ∘ ConstantVal.name ∘ InductiveVal.toConstantVal)
          let recField  := indValNum.map (ctx.auxFunNames[·]!)
          let isProof ← isProp xType
          todo := todo.push (a, b, recField, isProof)
      if ctorArgs1.isEmpty then
        -- Unit thunking argument
        ctorArgs1 := ctorArgs1.push (← `(()))
      let rhs ← mkSameCtorRhs todo.toList
      `(@fun $ctorArgs1:term* $ctorArgs2:term* =>$rhs:term)
  if indVal.numCtors == 1 then
    `( $(mkCIdent casesOnSameCtorName) $x1:term $x2:term rfl $alts:term* )
  else if u then
    let h : Ident ← `(h)
    mkDIte u h (← `($(mkCIdent ctorIdxName) $x1:ident = $(mkCIdent ctorIdxName) $x2:ident))
      (← `($(mkCIdent casesOnSameCtorName) $x1:term $x2:term $h:ident $alts:term*))
      (← mkIsFalse u (← `(fun h' => $h:ident (congrArg $(mkCIdent ctorIdxName) h'))))
  else
    `( match decEq ($(mkCIdent ctorIdxName) $x1:ident) ($(mkCIdent ctorIdxName) $x2:ident) with
      | .isTrue h => $(mkCIdent casesOnSameCtorName) $x1:term $x2:term h $alts:term*
      | .isFalse h => isFalse (fun h' => h (congrArg $(mkCIdent ctorIdxName) h')))
where
  mkSameCtorRhs : List (Ident × Ident × Option Name × Bool) → TermElabM Term
    | [] => do mkIsTrue u (← `(rfl))
    | (a, b, recField, isProof) :: todo => withFreshMacroScope do
      let rhs ← if isProof then
        `(have h : @$a = @$b := rfl; by subst h; exact $(← mkSameCtorRhs todo):term)
      else
        let sameCtor ← mkSameCtorRhs todo
        let h : Ident ← `(h)
        mkDIte u h (← `(@$a = @$b)) (← `(by subst $h:ident; exact $sameCtor:term))
          (← mkIsFalse u (← `(by intro n; injection n; apply $h:ident _; assumption)))
      if let some auxFunName := recField then
        -- add local instance for `a = b` using the function being defined `auxFunName`
        `(let inst := $(mkIdent auxFunName) @$a @$b; $rhs)
      else
        return rhs


def mkMatch (u : Flavor) (ctx : Context) (header : Header) (indVal : InductiveVal) :
    TermElabM Term := do
  if indVal.numCtors ≥ deriving.decEq.linear_construction_threshold.get (← getOptions) then
    mkMatchNew u ctx header indVal
  else
    mkMatchOld u ctx header indVal

def mkAuxFunction (u : Flavor) (ctx : Context) (auxFunName : Name) (indVal : InductiveVal) :
    TermElabM (TSyntax `command) := do
  let header  ← mkDecEqHeader u indVal
  let body    ← mkMatch u ctx header indVal
  let binders := header.binders
  let target₁ := mkIdent header.targetNames[0]!
  let target₂ := mkIdent header.targetNames[1]!
  let termSuffix ← if indVal.isRec
    then `(Parser.Termination.suffix|termination_by structural $target₁)
    else `(Parser.Termination.suffix|)
  let type    ← if u then ``(UDecidable ($target₁ = $target₂))
    else `(Decidable ($target₁ = $target₂))
  if u then
    `(@[instance_reducible] def $(mkIdent auxFunName):ident $binders:bracketedBinder* :
        $type:term := $body:term
      $termSuffix:suffix)
  else
    `(def $(mkIdent auxFunName):ident $binders:bracketedBinder* : $type:term := $body:term
      $termSuffix:suffix)

def mkAuxFunctions (u : Flavor) (ctx : Context) : TermElabM (TSyntax `command) := do
  let mut res : Array (TSyntax `command) := #[]
  for i in *...ctx.auxFunNames.size do
    let auxFunName := ctx.auxFunNames[i]!
    let indVal     := ctx.typeInfos[i]!
    res := res.push (← mkAuxFunction u ctx auxFunName indVal)
  `(command| mutual $[$res:command]* end)

def mkDecEqCmds (u : Flavor) (indVal : InductiveVal) : TermElabM (Array Syntax) := do
  let ctx ← mkContext u.className (if u then "udecEq" else "decEq") indVal.name
  let cmds := #[← mkAuxFunctions u ctx] ++
    (← mkInstanceCmds ctx u.className #[indVal.name] (useAnonCtor := false))
  trace[Elab.Deriving.decEq] "\n{cmds}"
  return cmds

open Command

def mkDecEq (u : Flavor) (declName : Name) : CommandElabM Bool := do
  let indVal ← getConstInfoInduct declName
  if indVal.isNested then
    return false -- nested inductive types are not supported yet
  else
    let cmds ← liftTermElabM <| mkDecEqCmds u indVal
    -- `cmds` can have a number of syntax nodes quadratic in the number of constructors
    -- and thus create as many info tree nodes, which we never make use of but which can
    -- significantly slow down e.g. the unused variables linter; avoid creating them
    withEnableInfoTree false do
      cmds.forM elabCommand
    return true

partial def mkEnumOfNat (declName : Name) : MetaM Unit := do
  let indVal ← getConstInfoInduct declName
  let levels := indVal.levelParams.map Level.param
  let enumType := mkConst declName levels
  let ctors := indVal.ctors.toArray.map (mkConst · levels)
  withLocalDeclD `n (mkConst ``Nat) fun n => do
    let value ← mkNatLookupTable n enumType ctors
    let value ← mkLambdaFVars #[n] value
    let type ← mkArrow (mkConst ``Nat) enumType
    addAndCompile <| Declaration.defnDecl {
      name := Name.mkStr declName "ofNat"
      levelParams := indVal.levelParams
      safety := DefinitionSafety.safe
      hints  := ReducibilityHints.abbrev
      value, type
    }

def mkEnumOfNatThm (declName : Name) : MetaM Unit := do
  let indVal ← getConstInfoInduct declName
  let levels := indVal.levelParams.map Level.param
  let ctorIdx := mkConst (mkCtorIdxName declName) levels
  let ofNat     := mkConst (Name.mkStr declName "ofNat") levels
  let enumType  := mkConst declName levels
  let u ← getLevel enumType
  let eqEnum    := mkApp (mkConst ``Eq [u]) enumType
  let rflEnum   := mkApp (mkConst ``Eq.refl [u]) enumType
  let ctors := indVal.ctors
  withLocalDeclD `x enumType fun x => do
    let resultType := mkApp2 eqEnum (mkApp ofNat (mkApp ctorIdx x)) x
    let motive     ← mkLambdaFVars #[x] resultType
    let casesOn    := mkConst (mkCasesOnName declName) (Level.zero :: levels)
    let mut value  := mkApp2 casesOn motive x
    for ctor in ctors do
      value := mkApp value (mkApp rflEnum (mkConst ctor levels))
    value ← mkLambdaFVars #[x] value
    let type ← mkForallFVars #[x] resultType
    addAndCompile <| Declaration.thmDecl {
      name := Name.mkStr declName "ofNat_ctorIdx"
      levelParams := indVal.levelParams
      value, type
    }

def mkDecEqEnum (u : Flavor) (declName : Name) : CommandElabM Unit := do
  let cmd ← liftTermElabM do
    unless (← getEnv).contains (Name.mkStr declName "ofNat") do
      mkEnumOfNat declName
      mkEnumOfNatThm declName
    let ofNatIdent  := mkIdent (Name.mkStr declName "ofNat")
    let auxThmIdent := mkIdent (Name.mkStr declName "ofNat_ctorIdx")
    let h : Ident ← `(h)
    -- We use `rfl` in the following proof because the first script fails for unit-like datatypes
    -- due to etaStruct.
    let eqProof ← `(by
      first
      | have aux := congrArg $ofNatIdent $h:ident
        rw [$auxThmIdent:ident, $auxThmIdent:ident] at aux
        assumption
      | rfl)
    let body ← mkDIte u h (← `(x.ctorIdx = y.ctorIdx)) (← mkIsTrue u eqProof)
      (← mkIsFalse u (← `(fun h => by subst h; contradiction)))
    `(instance : $(mkCIdent u.className) $(mkCIdent declName) := fun x y => $body)
  trace[Elab.Deriving.decEq] "\n{cmd}"
  elabCommand cmd

def mkDecEqInstance (u : Flavor) (declName : Name) : CommandElabM Bool := do
  withoutExposeFromCtors declName do
  if (← isEnumType declName) then
    mkDecEqEnum u declName
    return true
  else
    mkDecEq u declName

def mkDecEqInstanceHandler (u : Flavor) (declNames : Array Name) : CommandElabM Bool := do
  declNames.foldlM (fun b n => andM (pure b) (mkDecEqInstance u n)) true

builtin_initialize
  registerDerivingHandler `DecidableEq (mkDecEqInstanceHandler false)
  registerDerivingHandler `UDecidableEq (mkDecEqInstanceHandler true)
  registerTraceClass `Elab.Deriving.decEq

end Lean.Elab.Deriving.DecEq
