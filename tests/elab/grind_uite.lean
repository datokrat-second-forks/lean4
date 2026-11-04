import Lean

/-!
Tests `grind` on `uif` (`UDecidable.ite`) and `uif h :` (`UDecidable.dite`) without normalizing
them to `if`: the normalization theorems `Lean.Grind.uite_eq_ite` and `Lean.Grind.udite_eq_dite`
are erased from both `grind` normalizers below, so these tests exercise the native support for
`UDecidable.ite`/`UDecidable.dite` (propagation, case splits, instance canonicalization).
-/

open Lean Meta Grind Elab Command in
elab "erase_uite_norm" : command => do
  let erased := [``Lean.Grind.uite_eq_ite, ``Lean.Grind.udite_eq_dite]
  modifyEnv fun env => normExt.modifyState env fun s =>
    erased.foldl (init := s) fun s n => s.eraseCore (.decl n)
  let keep (thms : Sym.Simp.Theorems) : Sym.Simp.Theorems :=
    let f := Array.filter fun (thm : Sym.Simp.Theorem) => !erased.any (thm.expr.isConstOf ·)
    { thms := thms.thms.mapArrays f, fallback := thms.fallback.mapArrays f }
  modifyEnv fun env => normSymExt.modifyState env fun s =>
    { s with pre := keep s.pre, post := keep s.post }

erase_uite_norm

/-! The normalization is off: `grind` keeps `uif` in its state. -/

/--
error: `grind` failed
case grind.1
f : Nat → Nat
c : Prop
inst : UDecidable c
x : Nat
h : f (uif c then x else 0) = 1
h_1 : c
⊢ False
use `+verbose` to obtain diagnostic information
-/
#guard_msgs (error, drop info) in
example (f : Nat → Nat) (c : Prop) [UDecidable c] (x : Nat) :
    f (uif c then x else 0) = 1 → False := by
  grind -verbose

/-! Propagation of the condition -/

example (c : Prop) [UDecidable c] (a b : Nat) (h : c) : (uif c then a else b) = a := by
  grind -splitIte
example (c : Prop) [UDecidable c] (a b : Nat) (h : ¬c) : (uif c then a else b) = b := by
  grind -splitIte

example (f : Nat → Nat) (a b c : Nat) (h₁ : a = b) (h₂ : f (uif a = b then c else 0) = 5) :
    f c = 5 := by
  grind -splitIte

example (f : Nat → Nat) (a b c : Nat) (h₁ : a < b) (h₂ : f (uif b ≤ a then 0 else c) = 5) :
    f c = 5 := by
  grind -splitIte

example (p q : Prop) [UDecidable p] [UDecidable q] (a b c : Nat) (hp : p) (hq : ¬q) :
    (uif p then uif q then a else b else c) = b := by
  grind -splitIte

example (c : Prop) [UDecidable c] (x : Nat) (h : c) : (uif h : c then x + 1 else 0) = x + 1 := by
  grind -splitIte

example (c : Prop) [UDecidable c] (x : Nat) (h : ¬c) : (uif h : c then x + 1 else 0) = 0 := by
  grind -splitIte

example (xs : List Nat) (i : Nat) (h : i < xs.length) :
    (uif h : i < xs.length then xs[i] else 0) = xs[i] := by
  grind -splitIte

/-! Case splits -/

example (c : Prop) [UDecidable c] (a : Nat) : (uif c then a else a) = a := by grind
example (c : Prop) [UDecidable c] (a b : Nat) :
    (uif c then a else b) = a ∨ (uif c then a else b) = b := by
  grind

example (p q : Prop) [UDecidable p] [UDecidable q] (a b : Nat) :
    (uif p then uif q then a else b else uif q then a else b) = uif q then a else b := by
  grind

example (c : Prop) [UDecidable c] (f : Nat → Nat) (a b : Nat) :
    f (uif c then a else b) = uif c then f a else f b := by
  grind

example (c : Prop) [UDecidable c] (x : Nat) : (uif h : c then x else x) = x := by grind

example (xs : List Nat) (i : Nat) :
    (uif h : i < xs.length then xs[i] else 0) = xs[i]?.getD 0 := by
  grind

/--
error: `grind` failed
case grind
c : Prop
inst : UDecidable c
a b : Nat
h : ¬(uif c then a else b) = a
⊢ False
use `+verbose` to obtain diagnostic information
-/
#guard_msgs (error, drop info) in
example (c : Prop) [UDecidable c] (a b : Nat) : (uif c then a else b) = a := by
  grind -splitIte -verbose

/-! Linear arithmetic -/

example (x y : Int) : (uif x ≤ y then y else x) ≥ x := by grind
example (x y : Int) : (uif x ≤ y then y else x) ≥ y := by grind
example (x y : Nat) : (uif x ≤ y then x else y) ≤ x + y := by grind
example (x y : Nat) (h : (uif x < y then y - x else x - y) = 0) : x = y := by grind
example (x : Int) : (uif x < 0 then -x else x) ≥ 0 := by grind
example (x y : Int) :
    (uif x ≤ y then uif y ≤ 10 then y else 10 else x) ≤ max x 10 := by
  grind

/-! Negated `uif` propositions -/

example (c p q : Prop) [UDecidable c] (h : ¬(uif c then p else q)) (hc : c) : ¬p := by grind
example (c p q : Prop) [UDecidable c] (h : ¬(uif c then p else q)) (hp : p) (hq : q) : False := by
  grind

/-! Congruence: the `UDecidable` instances depend on the conditions. -/

example (f : Nat → Nat) (a b c d : Nat) (h : a = b) :
    f (uif a = c then d else 0) = f (uif b = c then d else 0) := by
  grind

example (a b c : Nat) (h : a = b) :
    UDecidable.decide (a = c) = UDecidable.decide (b = c) := by
  grind

example (p : Prop) [i₁ : UDecidable p] (a b : Nat) :
    @UDecidable.ite _ p i₁ a b = @UDecidable.ite _ p (UDecidable.classical p) a b := by
  grind

/-! Non-dependent `uif h :` is simplified to `uif`. -/

example (c : Prop) [UDecidable c] (a b : Nat) :
    (uif _ : c then a else b) = uif c then a else b := by
  grind

/-! The `Sym.simp`-based normalizer -/

section
set_option backward.grind.normalizer false

example (c : Prop) [UDecidable c] (a b : Nat) (h : c) : (uif c then a else b) = a := by
  grind -splitIte
example (c : Prop) [UDecidable c] (x : Nat) (h : ¬c) : (uif h : c then x + 1 else 0) = 0 := by
  grind -splitIte
example (p q : Prop) [UDecidable p] [UDecidable q] (a b : Nat) :
    (uif p then uif q then a else b else uif q then a else b) = uif q then a else b := by
  grind
example (x y : Int) : (uif x ≤ y then y else x) ≥ x := by grind
example (a b x : Nat) (f : Nat → Nat) (h : f (uif x + 0 = x then a else b) = 3) : f a = 3 := by
  grind -splitIte
example (c p q : Prop) [UDecidable c] (h : ¬(uif c then p else q)) (hc : c) : ¬p := by grind
example (c : Prop) [UDecidable c] (a b : Nat) :
    (uif _ : c then a else b) = uif c then a else b := by
  grind

end
