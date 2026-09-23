module

public meta import Lean

/-!
Tests `newtype` under the module system: like a structure's field types, the underlying type of a
public `newtype` is always visible, so the type, its constructor and its projector are exposed
without `@[expose]`. Importers can only reduce `N.proj (N.mk a)` in the kernel if all three bodies
are visible.
-/

public newtype Pub := Nat with toNat
/-- warning: `@[expose]` has no effect; this declaration would be exposed by default -/
#guard_msgs in
@[expose] public newtype Exposed := Nat with toNat
newtype Priv := Nat with toNat

open Lean in
run_meta do
  let env ← getEnv
  for n in [``Pub, ``Pub.mk, ``Pub.toNat, ``Exposed, ``Exposed.mk, ``Exposed.toNat] do
    unless env.hasExposedBody n do throwError "expected {n} to be exposed"
  for n in [``Priv, ``Priv.mk, ``Priv.toNat] do
    if env.hasExposedBody n then throwError "expected {n} not to be exposed"

example (n : Nat) : Pub.toNat (Pub.mk n) = n := rfl
example (n : Nat) : Exposed.toNat (Exposed.mk n) = n := rfl
example (x : Priv) : Priv.mk (Priv.toNat x) = x := rfl

section
public section

-- The visibility of a `public section` is not visible in the declaration's modifiers, so the
-- elaborator has to consult the environment for it, as `def` does.
newtype InPublicSection := Nat with toNat

open Lean in
run_meta do
  let env ← getEnv
  for n in [``InPublicSection, ``InPublicSection.mk, ``InPublicSection.toNat] do
    unless env.hasExposedBody n do throwError "expected {n} to be exposed"

example (n : Nat) : InPublicSection.toNat (InPublicSection.mk n) = n := rfl

end
