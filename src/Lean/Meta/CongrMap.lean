/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Meta.InferType
public import Lean.Meta.VirtualStructure
import Init.While
import Init.Data.Range.Polymorphic.Iterators

public section

/-!
# Maps along casts

`@[congr_map]` registers a map `T.congrMap {α β : Type u} (f : α → β) [inst] (x : T α) : T β` whose
value is a cast of `x` along a type equality `T α = T β` that `inst` provides along with a proof
that `f` is the identity. Below `.all` transparency, `T.congrMap` is opaque, but if `f` is a
*cast function* (see `isCastFn`), applications reduce as if `T.congrMap f` were the identity:

* a map cancels with the maps it is applied to when the source of the innermost one is the target
  of the outermost one (`congrMap g (congrMap f x)` to `x`);
* a map is pushed into constructors of `T` and into `Quot.mk` when `T` is a quotient, mapping each
  field with `f`, with the registered map of the field's type, or with `cast` for proofs;
* a projection of a map of a structure is the map of the projection.

The kernel confirms each step because a cast function is definitionally the identity, so the cast
reduces away. Independently of `f`, a map between types that are definitionally equal at the
current transparency reduces to its argument, because the kernel then reduces the cast as well.
-/

namespace Lean.Meta

/-- The registered maps, by declaration and by the type they map. -/
structure CongrMapState where
  byDecl : NameMap Name := {}
  byType : NameMap Name := {}
  deriving Inhabited

private def CongrMapState.add (s : CongrMapState) (e : Name × Name) : CongrMapState :=
  { byDecl := s.byDecl.insert e.1 e.2, byType := s.byType.insert e.2 e.1 }

builtin_initialize congrMapExt : SimplePersistentEnvExtension (Name × Name) CongrMapState ←
  registerSimplePersistentEnvExtension {
    addEntryFn    := CongrMapState.add
    addImportedFn := fun es => mkStateFromImportedEntries CongrMapState.add {} es
    exportEntriesFnEx? := some fun env _ entries =>
      let all := entries.toArray
      let exported := all.filter ((env.setExporting true).contains (skipRealize := false) ·.1)
      { exported, server := exported, «private» := all }
  }

/-- The type mapped by the registered map `declName`. -/
def getCongrMapType? [Monad m] [MonadEnv m] (declName : Name) : m (Option Name) :=
  return congrMapExt.getState (← getEnv) |>.byDecl.find? declName

/-- The registered map of the type `typeName`. -/
def getCongrMapOfType? [Monad m] [MonadEnv m] (typeName : Name) : m (Option Name) :=
  return congrMapExt.getState (← getEnv) |>.byType.find? typeName

private def addCongrMap (declName : Name) : MetaM Unit := do
  let fail {α} (msg : MessageData) : MetaM α :=
    throwError "invalid `@[congr_map]` declaration `{.ofConstName declName}`, {msg}"
  let info ← withoutExporting <| getConstInfoDefn declName
  let [u] := info.levelParams | fail "it must have exactly one universe parameter"
  let some T ← lambdaTelescope info.value fun xs body => do
    let #[α, β, f, _, x] := xs | return none
    let bis ← xs.mapM fun x => return (← x.fvarId!.getDecl).binderInfo
    unless bis == #[.implicit, .implicit, .default, .instImplicit, .default] do return none
    unless (← isDefEq (← inferType f) (← mkArrow α β)) do return none
    let .app (.const T [v]) α' ← instantiateMVars (← inferType x) | return none
    unless α' == α && v == mkLevelParam u && (← getConstInfo T).levelParams.length == 1 do
      return none
    unless body.isAppOfArity ``cast 4 && body.appArg! == x &&
        body.getArg! 1 == mkApp (.const T [v]) β do
      fail m!"its value must be `cast h x : {T} β`"
    return some T
    | fail m!"expected the arguments `\{α β : Type u} (f : α → β) [inst] (x : T α)` for a type \
        `T.\{u}` with one parameter"
  if let some d ← getCongrMapOfType? T then
    fail m!"`{.ofConstName T}` already has the map `{.ofConstName d}`"
  modifyEnv (congrMapExt.addEntry · (declName, T))

builtin_initialize registerBuiltinAttribute {
  name := `congr_map
  descr := "map along casts that reduces like the identity for cast functions"
  add := fun declName _ kind => do
    unless kind == .global do throwAttrMustBeGlobal `congr_map kind
    MetaM.run' <| addCongrMap declName
}

/-- The mapped type, the universe levels and the arguments `#[α, β, f, inst, x]` of an application of
a registered map. -/
def congrMapApp? (e : Expr) : MetaM (Option (Name × List Level × Array Expr)) := do
  let .const n us := e.getAppFn | return none
  let some T ← getCongrMapType? n | return none
  unless e.getAppNumArgs == 5 do return none
  return some (T, us, e.getAppArgs)

/--
Whether `f` is definitionally the identity: the constructor or projection of a `+defeq` structure,
`id`, compositions of cast functions, registered maps of cast functions, and functions such as
`⇑OrderDual.toDual` whose applications reduce to cast functions at `.implicit` transparency.
-/
partial def isCastFn (f : Expr) : MetaM Bool := do
  let f := (← instantiateMVars f).cleanupAnnotations.eta
  if (← isCastFnHead f) then return true
  let .forallE n d b _ ← whnf (← inferType f) | return false
  if b.hasLooseBVars then return false
  withLocalDeclD n d fun a => appliesCastFns a (mkApp f a)
where
  isCastFnHead (f : Expr) : MetaM Bool := do
    let .const n _ := f.getAppFn | return false
    let args := f.getAppArgs
    if let some info ← getVirtualCtorInfo? n then return args.size == info.numParams
    if let some info ← getVirtualProjInfo? n then return args.size == info.numParams
    if n == ``id then return args.size == 1
    if n == ``Function.comp then
      return args.size == 5 && (← isCastFn args[3]! <&&> isCastFn args[4]!)
    if (← getCongrMapType? n).isSome then return args.size == 4 && (← isCastFn args[2]!)
    return false
  /-- Whether `e` reduces to cast functions applied to `a`. -/
  appliesCastFns (a e : Expr) : MetaM Bool := do
    let e := (← withTransparency .implicit <| whnf e).cleanupAnnotations
    if e == a then return true
    let .app g x := e | return false
    if g.containsFVar a.fvarId! then return false
    isCastFnHead g.eta <&&> appliesCastFns a x

/-- `@cast τ τ' (@id (τ = τ') rfl) p`, for a proof `p : τ` and `τ'` equal to `τ` in the kernel. -/
private def mkProofCast (τ τ' p : Expr) : Expr :=
  let eq := mkApp3 (mkConst ``Eq [Level.one]) (mkSort Level.zero) τ τ'
  let h := mkApp2 (mkConst ``id [Level.zero]) eq (mkApp2 (mkConst ``rfl [Level.one]) (mkSort Level.zero) τ)
  mkApp4 (mkConst ``cast [Level.zero]) τ τ' h p

/--
The map of values of type `τ` along `f : α → β`, where `τ` mentions the type parameter `p` standing
for `α`: `some none` for the identity, `some g` for a map `g`, and `none` if there is no map.
-/
private def fieldMap? (p : Expr) (us : List Level) (α β f inst τ : Expr) :
    MetaM (Option (Option Expr)) := do
  let τ ← instantiateMVars τ
  if !τ.containsFVar p.fvarId! then return some none
  if τ == p then return some (some f)
  let .app (.const S _) a := τ | return none
  unless a == p do return none
  let some g ← getCongrMapOfType? S | return none
  return some (some (mkApp4 (mkConst g us) α β f inst))

/--
Maps the first `numFields` fields of a constructor of a type with the single parameter `α`, where
`value i` is the `i`-th field.
-/
private def mapCtorFields? (ctorVal : ConstructorVal) (us : List Level) (args : Array Expr)
    (numFields : Nat) (value : Nat → Expr) : MetaM (Option (Array Expr)) := do
  let #[α, β, f, inst, _] := args | return none
  unless ctorVal.numParams == 1 && numFields ≤ ctorVal.numFields do return none
  let ctorType ← instantiateTypeLevelParams ctorVal.toConstantVal us
  forallBoundedTelescope ctorType (some (1 + ctorVal.numFields)) fun xs _ => do
    let p := xs[0]!
    let mut prev := #[p]
    let mut src := #[α]
    let mut tgt := #[β]
    for i in *...numFields do
      let some fld := xs[1 + i]? | return none
      let τ ← inferType fld
      let v := value i
      let τSrc := τ.replaceFVars prev src
      let mut v' := v
      if (← isProp τSrc) then
        v' := mkProofCast τSrc (τ.replaceFVars prev tgt) v
      else
        if τ.hasAnyFVar fun x => x != p.fvarId! && prev.contains (.fvar x) then return none
        match (← fieldMap? p us α β f inst τ) with
        | none => return none
        | some none => pure ()
        | some (some g) => v' := mkApp g v
      prev := prev.push fld
      src := src.push v
      tgt := tgt.push v'
    return some (tgt.extract 1)

/-- Pushes the map into the constructor application `x`. -/
private def pushIntoCtor? (T : Name) (us : List Level) (args : Array Expr) (x : Expr) :
    MetaM (Option Expr) := do
  let .const ctorName ctorUs := x.getAppFn | return none
  let some (.ctorInfo ctorVal) := (← getEnv).find? ctorName | return none
  unless ctorVal.induct == T && x.getAppNumArgs == 1 + ctorVal.numFields do return none
  let some fields ← mapCtorFields? ctorVal us args ctorVal.numFields (x.getArg! <| 1 + ·)
    | return none
  return mkAppN (mkConst ctorName ctorUs) (#[args[1]!] ++ fields)

/-- Pushes the map into `Quot.mk _ a` if `T α` unfolds to a quotient of a type with a map. -/
private def pushIntoQuot? (T : Name) (us : List Level) (args : Array Expr) (x : Expr) :
    MetaM (Option Expr) := do
  unless x.isAppOfArity ``Quot.mk 3 do return none
  let #[α, β, f, inst, _] := args | return none
  withLocalDeclD `α (← inferType α) fun p => do
    let rep ← withTransparency .all <| whnf (mkApp (mkConst T us) p)
    let .const ``Quot qUs := rep.getAppFn | return none
    let #[A, r] := rep.getAppArgs | return none
    let some m ← fieldMap? p us α β f inst A | return none
    let a := x.appArg!
    let a' := if let some g := m then mkApp g a else a
    return some <| mkApp3 (mkConst ``Quot.mk qUs) (A.replaceFVar p β) (r.replaceFVar p β) a'

/--
Reduces an application `e` of a registered map (see the module documentation), or returns `none`.
-/
partial def reduceCongrMap? (e : Expr) : MetaM (Option Expr) := do
  let some (T, us, args) ← congrMapApp? e | return none
  let x := args[4]!
  if (← withNewMCtxDepth <| isDefEq (← inferType x) (← inferType e)) then return some x
  unless (← isCastFn args[2]!) do return none
  let x ← whnf x
  if let some r ← cancel (← inferType e) x then return some r
  if let some r ← pushIntoCtor? T us args x then return some r
  pushIntoQuot? T us args x
where
  cancel (tgt x : Expr) : MetaM (Option Expr) := do
    let some (_, _, args) ← congrMapApp? x | return none
    unless (← isCastFn args[2]!) do return none
    let x₀ := args[4]!
    if (← withNewMCtxDepth <| isDefEq (← inferType x₀) tgt) then return some x₀
    cancel tgt (← whnf x₀)

/--
Reduces `c.i` (`structName` projection `i`), where `c` is in weak head normal form, if `c` is a map
of `structName` along a cast function.
-/
def reduceCongrMapProj? (structName : Name) (i : Nat) (c : Expr) : MetaM (Option Expr) := do
  let some (T, us, args) ← congrMapApp? c | return none
  unless T == structName && (← isCastFn args[2]!) do return none
  let [ctorName] := (← getConstInfoInduct structName).ctors | return none
  let some fields ← mapCtorFields? (← getConstInfoCtor ctorName) us args (i + 1)
      (.proj structName · args[4]!)
    | return none
  return fields[i]?

/--
The innermost argument of a chain of maps along cast functions, or `none` if `e` is not such a map.
-/
partial def congrMapChainSource? (e : Expr) : MetaM (Option Expr) := do
  let some (_, _, args) ← congrMapApp? e | return none
  unless (← isCastFn args[2]!) do return none
  let x ← whnf args[4]!
  return some ((← congrMapChainSource? x).getD x)

end Lean.Meta
