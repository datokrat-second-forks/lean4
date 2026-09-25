import Lean

/-!
Tests that a transported instance is unfolded to its underlying instance conjugated by the
`newtype` constructors and projectors: no equivalence, congruence or `ofEquiv` remains, so the
instance compiles like the underlying one even where it is used as an unspecialized dictionary.
-/

open Lean Meta

def checkNoGlue (inst : Name) : MetaM Unit := do
  let some v := (← getConstInfo inst).value? | throwError "`{inst}` has no value"
  let glue := v.getUsedConstants.filter fun c =>
    c.getPrefix == ``Lean.CanonicalEquivalence || match c with
      | .str _ s => ["ofEquiv", "ofEquiv₂", "canonicalCongr", "canonicalCongr₂", "equivDef"].contains s
      | _ => false
  unless glue.isEmpty do
    throwError "`{inst}` still contains {glue}:{indentExpr v}"

newtype M (α : Type) := StateT Nat Id α with run
newtype M2 (α : Type) := M α with run

instance instMonadM : Monad M := inferInstanceAs (Monad (StateT Nat Id))
instance instMonadM2 : Monad M2 := inferInstanceAs (Monad (StateT Nat Id))
instance instControlM2 : MonadControl Id M2 := inferInstanceAs (MonadControl Id (StateT Nat Id))
instance instLiftM2 : MonadLift Id M2 := by transport (MonadLift Id (StateT Nat Id))

newtype W := Nat with toNat
  deriving Ord
newtype W2 := W with toW

instance instDecEqW2 : DecidableEq W2 := inferInstanceAs (DecidableEq Nat)
instance instAddW2 : Add W2 := inferInstanceAs (Add Nat)

run_meta do
  for n in [``instMonadM, ``instMonadM2, ``instControlM2, ``instLiftM2, ``instOrdW, ``instDecEqW2,
      ``instAddW2] do
    checkNoGlue n

-- The check detects glue.
instance instAddGlued : Add W := (Add.canonicalCongr W.equivDef).invFun inferInstance

run_meta do
  if ← (checkNoGlue ``instAddGlued *> pure true) <|> pure false then
    throwError "`checkNoGlue` accepted `instAddGlued`"

/--
info: @[instance_reducible] def instAddW2 : Add W2 :=
{ add := fun x y => W2.mk (W.mk (Add.add x.toW.toNat y.toW.toNat)) }
-/
#guard_msgs in
#print instAddW2

-- Proofs are not unfolded.
instance : LawfulMonad M := inferInstanceAs (LawfulMonad (StateT Nat Id))
