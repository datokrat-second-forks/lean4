/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Elab.InfoTree

public section

namespace Lean.Compiler

/--
Declarations marked `@[implemented_by (early := true) f]`: they are replaced by `f` while translating
to LCNF instead of in the base-phase `simp` pass.
-/
builtin_initialize earlyImplementedByExt : TagDeclarationExtension ← mkTagDeclarationExtension

/--
Instructs the compiler to use a different function as the implementation of a function. With the
exception of tactics that call native code such as `native_decide`, the kernel and type checking
are unaffected. When this attribute is used on a function, the function is not compiled and all
compiler-related attributes (e.g. `noncomputable`, `@[inline]`) are ignored. Calls to this
function are replaced by calls to its implementation.

The most common use cases of `@[implemented_by]` are to provide an efficient unsafe implementation
and to make an unsafe function accessible in safe code through an opaque function:

```
unsafe def testEqImpl (as bs : Array Nat) : Bool :=
  ptrEq as bs || as == bs

@[implemented_by testEqImpl]
def testEq (as bs : Array Nat) : Bool :=
  as == bs

unsafe def printAddrImpl {α : Type u} (x : α) : IO Unit :=
  IO.println s!"Address: {ptrAddrUnsafe x}"

@[implemented_by printAddrImpl]
opaque printAddr {α : Type u} (x : α) : IO Unit
```

The provided implementation is not checked to be equivalent to the original definition. This makes
it possible to prove `False` with `native_decide` using incorrect implementations. For a safer
variant of this attribute that however doesn't work for unsafe implementations, see `@[csimp]`,
which requires a proof that the two functions are equal.

With `@[implemented_by (early := true) f]`, the compiler replaces the function by `f` already when
translating it to its intermediate representation, so that optimizations see the implementation from
the start. This is meant for implementations that only change the representation (e.g. an
`unsafeCast` between types that the compiler represents identically). `f` must not be private,
since the replacement becomes part of the compiled code of importing modules.
-/
@[builtin_doc]
builtin_initialize implementedByAttr : ParametricAttribute Name ← registerParametricAttribute {
  name := `implemented_by
  descr := "name of the Lean (probably unsafe) function that implements opaque constant"
  getParam := fun declName stx => do
    let decl ← getConstInfo declName
    -- `Attr.simple` when parsed by a stage0 without `Lean.Parser.Attr.implemented_by`
    let (fnNameStx, early) ← uif stx.getKind == `Lean.Parser.Attr.implemented_by then
      pure (stx[2], !stx[1].isNone && stx[1][3].getAtomVal == "true")
    else
      pure (← Attribute.Builtin.getIdent stx, false)
    -- IR is (currently) exported always, so access to private decls is fine here.
    withoutExporting do
      let fnName ← Elab.realizeGlobalConstNoOverloadWithInfo fnNameStx
      let fnDecl ← getConstVal fnName
      unless decl.levelParams.length == fnDecl.levelParams.length do
        throwError "Invalid `implemented_by` argument `{fnName}`: `{fnName}` has {fnDecl.levelParams.length} universe level parameter(s), but `{.ofConstName declName}` has {decl.levelParams.length}"
      let declType := decl.type
      let fnType ← Core.instantiateTypeLevelParams fnDecl (decl.levelParams.map mkLevelParam)
      unless declType == fnType do
        throwError "Invalid `implemented_by` argument `{fnName}`: `{fnName}` has type{indentExpr fnType}\nbut `{.ofConstName declName}` has type{indentExpr declType}"
      if decl.name == fnDecl.name then
        throwError "Invalid `implemented_by` argument `{fnName}`: Definition cannot be implemented by itself"
      if early then
        if isPrivateName fnName then
          throwError "Invalid `implemented_by (early := true)` argument `{.ofConstName fnName}`: The implementation must not be private, since it becomes part of the compiled code of importing modules"
        modifyEnv (earlyImplementedByExt.tag · declName)
      return fnName
}

def getImplementedBy? (env : Environment) (declName : Name) : Option Name :=
  implementedByAttr.getParam? env declName

/-- Whether `declName` was declared with `@[implemented_by (early := true) f]`. -/
def isEarlyImplementedBy (env : Environment) (declName : Name) : Bool :=
  earlyImplementedByExt.isTagged env declName

def setImplementedBy (env : Environment) (declName : Name) (impName : Name) : Except String Environment :=
  implementedByAttr.setParam env declName impName

end Compiler

def setImplementedBy {m} [Monad m] [MonadEnv m] [MonadError m] (declName : Name) (impName : Name) : m Unit := do
  let env ← getEnv
  match Compiler.setImplementedBy env declName impName with
  | Except.ok env   => setEnv env
  | Except.error ex => throwError ex

end Lean
