import Std.WP
import Std.Tactic.Do

/-!
Both `vcgen` (`experimental.vcgen`) and the legacy `mvcgen` split programs headed by
`UDecidable.ite` (`uif c then …`), `UDecidable.dite` (`uif h : c then …`), `cond` (`bif b then …`)
and `Bool.dcond` (`bif h : b then …`). The `uif` branches get `h : c` or `h : ¬c`, the `bif`
branches the propositional view of `b = true` or `b = false` (such as `h : i < n` for
`b := i <ᵇ n`), or the `Bool` equation itself if there is none (such as for an opaque `b`).
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

/-! The branches of both `uif h : i < xs.size` and `bif h : i <ᵇ xs.size` get the propositional
hypotheses `i < xs.size` and `¬i < xs.size`. -/

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

/-! A non-dependent `bif` on a comparison gets the propositional view, an opaque `Bool` keeps the
`Bool` equation. -/

def bcondLt (i n : Nat) : StateM Nat Unit := do
  bif i <ᵇ n then modify (· + 1) else set 0

/--
trace: case vc1
i n s✝ : Nat
a✝ : s✝ = 3
h✝ : i < n
x✝ : n ≤ i
⊢ 3 + 1 = 0

case vc2
i n s✝ : Nat
a✝ : s✝ = 3
h✝ : ¬i < n
x✝ : i < n
⊢ 0 = 4
-/
#guard_msgs in
example (i n : Nat) : ⦃ fun s => s = 3 ⦄ bcondLt i n ⦃ fun _ s => (i < n → s = 4) ∧ (n ≤ i → s = 0) ⦄ := by
  vcgen [bcondLt]
  trace_state
  all_goals grind

/--
trace: case vc1
b : Bool
s✝ : Nat
a✝ : s✝ = 3
h✝ : b = true
x✝ : b = false
⊢ 3 + 1 = 0

case vc2
b : Bool
s✝ : Nat
a✝ : s✝ = 3
h✝ : b = false
x✝ : b = true
⊢ 0 = 4
-/
#guard_msgs in
example (b : Bool) :
    ⦃ fun s => s = 3 ⦄ bcond b ⦃ fun _ s => (b = true → s = 4) ∧ (b = false → s = 0) ⦄ := by
  vcgen [bcond]
  trace_state
  all_goals grind

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

/-! The branches of both `uif h : i < xs.size` and `bif h : i <ᵇ xs.size` get the propositional
hypothesis `i < xs.size`. The other branches are closed by `mvcgen`. -/

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
h✝ : i < xs.size
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

/-! A non-dependent `bif` on a comparison gets the propositional view, an opaque `Bool` keeps the
`Bool` equation. -/

def bcondLt (i n : Nat) : StateM Nat Unit := do
  bif i <ᵇ n then modify (· + 1) else set 0

/--
trace: case vc1.isTrue
i n : Nat
h✝¹ : i < n
s✝ : Nat
h✝ : s✝ = 3
t✝ : Unit × Nat := (PUnit.unit, s✝ + 1)
⊢ (i < n → t✝.snd = 4) ∧ (n ≤ i → t✝.snd = 0)

case vc2.isFalse
i n : Nat
h✝¹ : ¬i < n
s✝ : Nat
h✝ : s✝ = 3
⊢ (i < n → 0 = 4) ∧ (n ≤ i → True)
-/
#guard_msgs in
example (i n : Nat) :
    ⦃fun s => ⌜s = 3⌝⦄ bcondLt i n ⦃⇓ _ s => ⌜(i < n → s = 4) ∧ (n ≤ i → s = 0)⌝⦄ := by
  mvcgen [bcondLt]
  trace_state
  all_goals grind

/--
trace: case vc1.isTrue
b : Bool
h✝¹ : b = true
s✝ : Nat
h✝ : s✝ = 3
t✝ : Unit × Nat := (PUnit.unit, s✝ + 1)
⊢ (b = true → t✝.snd = 4) ∧ (b = false → t✝.snd = 0)

case vc2.isFalse
b : Bool
h✝¹ : b = false
s✝ : Nat
h✝ : s✝ = 3
⊢ (b = true → 0 = 4) ∧ (b = false → True)
-/
#guard_msgs in
example (b : Bool) :
    ⦃fun s => ⌜s = 3⌝⦄ bcond b ⦃⇓ _ s => ⌜(b = true → s = 4) ∧ (b = false → s = 0)⌝⦄ := by
  mvcgen [bcond]
  trace_state
  all_goals grind

end LegacyMVCGen
