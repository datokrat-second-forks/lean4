import Std.WP
import Std.Tactic.Do

/-!
Both `vcgen` (`experimental.vcgen`) and the legacy `mvcgen` split programs headed by
`UDecidable.ite` (`uif c then …`), `UDecidable.dite` (`uif h : c then …`), `cond` (`bif b then …`)
and `Bool.dcond` (`bif h : b then …`). The `uif` branches get `h : c` or `h : ¬c`, the `bif`
branches `h : b = true` or `h : b = false`.
-/

namespace NewVCGen

open Std.WP

set_option experimental.vcgen true

def uite (n : Nat) : StateM Nat Nat := do
  uif n > 0 then set n else set 1
  get

theorem uite_spec (n : Nat) : ⦃ fun _ => True ⦄ uite n ⦃ fun r s => r > 0 ∧ r = s ⦄ := by
  vcgen [uite] with finish

def udite (xs : Array Nat) (i : Nat) : Id Nat := do
  uif h : i < xs.size then pure xs[i] else pure 1

theorem udite_spec (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃ True ⦄ udite xs i ⦃ fun r => r > 0 ⦄ := by
  vcgen [udite] with finish

def bcond (b : Bool) : StateM Nat Unit := do
  bif b then modify (· + 1) else set 0

theorem bcond_spec (b : Bool) :
    ⦃ fun s => s = 3 ⦄ bcond b ⦃ fun _ s => (b = true → s = 4) ∧ (b = false → s = 0) ⦄ := by
  vcgen [bcond] with finish

def dcond (xs : Array Nat) (i : Nat) : Id Nat := do
  bif h : i <ᵇ xs.size then pure (xs[i]'(Nat.blt_eq.mp h)) else pure 1

theorem dcond_spec (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃ True ⦄ dcond xs i ⦃ fun r => r > 0 ⦄ := by
  vcgen [dcond] with finish

/-! The branches get the propositional hypotheses `i < xs.size` and `¬i < xs.size`, respectively
`(i <ᵇ xs.size) = true` and `(i <ᵇ xs.size) = false`. -/

/--
trace: case vc1
xs : Array Nat
i : Nat
hxs : ∀ (j : Nat) (h : j < xs.size), 0 < xs[j]
h✝ : i < xs.size
⊢ 0 < xs[i]

case vc2
xs : Array Nat
i : Nat
hxs : ∀ (j : Nat) (h : j < xs.size), 0 < xs[j]
h✝ : ¬i < xs.size
⊢ 0 < 1
-/
#guard_msgs in
example (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃ True ⦄ udite xs i ⦃ fun r => r > 0 ⦄ := by
  vcgen [udite]
  trace_state
  all_goals grind

/--
trace: case vc1
xs : Array Nat
i : Nat
hxs : ∀ (j : Nat) (h : j < xs.size), 0 < xs[j]
h✝ : (i <ᵇ xs.size) = true
⊢ 0 < xs[i]

case vc2
xs : Array Nat
i : Nat
hxs : ∀ (j : Nat) (h : j < xs.size), 0 < xs[j]
h✝ : (i <ᵇ xs.size) = false
⊢ 0 < 1
-/
#guard_msgs in
example (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃ True ⦄ dcond xs i ⦃ fun r => r > 0 ⦄ := by
  vcgen [dcond]
  trace_state
  all_goals grind

def nested (xs : Array Nat) (i : Nat) (b : Bool) : StateM Nat Unit := do
  uif h : i < xs.size then
    bif xs[i] <ᵇ 10 then
      uif b = true then set (xs[i] + 1) else set 0
    else set 10
  else set 20

theorem nested_spec (xs : Array Nat) (i : Nat) (b : Bool) :
    ⦃ fun _ => True ⦄ nested xs i b ⦃ fun _ s => s ≤ 20 ⦄ := by
  vcgen [nested] with finish

def loop (xs : List Nat) : Id Nat := do
  let mut acc := 0
  for x in xs do
    uif x > 0 then acc := acc + x else acc := acc + 1
  return acc

theorem loop_spec (xs : List Nat) : ⦃ True ⦄ loop xs ⦃ fun r => r ≥ xs.length ⦄ := by
  vcgen [loop] invariants
  | inv1 => fun pref _ acc => acc ≥ pref.length
  with finish

def loopState (n : Nat) : StateM Nat Unit := do
  for i in [0:n] do
    bif _h : i <ᵇ 5 then modify (· + 1) else pure ()

theorem loopState_spec (n : Nat) : ⦃ fun s => s = 0 ⦄ loopState n ⦃ fun _ s => s ≤ 5 ⦄ := by
  vcgen [loopState] invariants
  | inv1 => fun pref _ _ s => s ≤ pref.length ∧ s ≤ 5
  with finish

/-! Join points after `uif` and `bif`. -/

def joins (n : Nat) (xs : Array Nat) : StateM Nat Nat := do
  let mut x := 1
  uif n > 0 then x := n else x := 2
  uif h : 0 < xs.size then x := x + xs[0] else x := x + 1
  bif _h : n <ᵇ 3 then x := x + 1 else x := x + 2
  bif n == 5 then x := x + 1 else pure ()
  set x
  return x

theorem joins_spec (n : Nat) (xs : Array Nat) :
    ⦃ fun _ => True ⦄ joins n xs ⦃ fun r s => r > 1 ∧ r = s ⦄ := by
  vcgen +jp [joins] with finish

end NewVCGen

namespace LegacyMVCGen

open Std.Do

set_option linter.deprecated.syntax false

def uite (n : Nat) : StateM Nat Nat := do
  uif n > 0 then set n else set 1
  get

theorem uite_spec (n : Nat) : ⦃⌜True⌝⦄ uite n ⦃⇓ r s => ⌜r > 0 ∧ r = s⌝⦄ := by
  mvcgen [uite] <;> grind

def udite (xs : Array Nat) (i : Nat) : Id Nat := do
  uif h : i < xs.size then pure xs[i] else pure 1

theorem udite_spec (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃⌜True⌝⦄ udite xs i ⦃⇓ r => ⌜r > 0⌝⦄ := by
  mvcgen [udite] <;> grind

def bcond (b : Bool) : StateM Nat Unit := do
  bif b then modify (· + 1) else set 0

theorem bcond_spec (b : Bool) :
    ⦃fun s => ⌜s = 3⌝⦄ bcond b ⦃⇓ _ s => ⌜(b = true → s = 4) ∧ (b = false → s = 0)⌝⦄ := by
  mvcgen [bcond] <;> grind

def dcond (xs : Array Nat) (i : Nat) : Id Nat := do
  bif h : i <ᵇ xs.size then pure (xs[i]'(Nat.blt_eq.mp h)) else pure 1

theorem dcond_spec (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃⌜True⌝⦄ dcond xs i ⦃⇓ r => ⌜r > 0⌝⦄ := by
  mvcgen [dcond] <;> grind

/-! The branches get the propositional hypothesis `i < xs.size`, respectively
`(i <ᵇ xs.size) = true`. The other branches are closed by `mvcgen`. -/

/--
trace: case vc1.isTrue
xs : Array Nat
i : Nat
hxs : ∀ (j : Nat) (h : j < xs.size), xs[j] > 0
h✝ : i < xs.size
⊢ xs[i] > 0
-/
#guard_msgs in
example (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃⌜True⌝⦄ udite xs i ⦃⇓ r => ⌜r > 0⌝⦄ := by
  mvcgen [udite]
  trace_state
  grind

/--
trace: case vc1.isTrue
xs : Array Nat
i : Nat
hxs : ∀ (j : Nat) (h : j < xs.size), xs[j] > 0
h✝ : (i <ᵇ xs.size) = true
⊢ xs[i] > 0
-/
#guard_msgs in
example (xs : Array Nat) (i : Nat) (hxs : ∀ j (h : j < xs.size), xs[j] > 0) :
    ⦃⌜True⌝⦄ dcond xs i ⦃⇓ r => ⌜r > 0⌝⦄ := by
  mvcgen [dcond]
  trace_state
  grind

def nested (xs : Array Nat) (i : Nat) (b : Bool) : StateM Nat Unit := do
  uif h : i < xs.size then
    bif xs[i] <ᵇ 10 then
      uif b = true then set (xs[i] + 1) else set 0
    else set 10
  else set 20

theorem nested_spec (xs : Array Nat) (i : Nat) (b : Bool) :
    ⦃⌜True⌝⦄ nested xs i b ⦃⇓ _ s => ⌜s ≤ 20⌝⦄ := by
  mvcgen [nested] <;> grind

def loop (xs : List Nat) : Id Nat := do
  let mut acc := 0
  for x in xs do
    uif x > 0 then acc := acc + x else acc := acc + 1
  return acc

theorem loop_spec (xs : List Nat) : ⦃⌜True⌝⦄ loop xs ⦃⇓ r => ⌜r ≥ xs.length⌝⦄ := by
  mvcgen [loop] invariants
  · ⇓⟨cur, acc⟩ => ⌜acc ≥ cur.prefix.length⌝
  with grind

def loopState (n : Nat) : StateM Nat Unit := do
  for i in [0:n] do
    bif _h : i <ᵇ 5 then modify (· + 1) else pure ()

theorem loopState_spec (n : Nat) : ⦃fun s => ⌜s = 0⌝⦄ loopState n ⦃⇓ _ s => ⌜s ≤ 5⌝⦄ := by
  mvcgen [loopState] invariants
  · ⇓⟨cur, _⟩ s => ⌜s ≤ cur.prefix.length ∧ s ≤ 5⌝
  with grind

/-! Join points after `uif` and `bif`. -/

def joins (n : Nat) (xs : Array Nat) : StateM Nat Nat := do
  let mut x := 1
  uif n > 0 then x := n else x := 2
  uif h : 0 < xs.size then x := x + xs[0] else x := x + 1
  bif _h : n <ᵇ 3 then x := x + 1 else x := x + 2
  bif n == 5 then x := x + 1 else pure ()
  set x
  return x

theorem joins_spec (n : Nat) (xs : Array Nat) :
    ⦃⌜True⌝⦄ joins n xs ⦃⇓ r s => ⌜r > 1 ∧ r = s⌝⦄ := by
  mvcgen +jp [joins] <;> grind

end LegacyMVCGen
