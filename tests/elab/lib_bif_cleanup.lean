import Lean
import Std

/-!
Tests that library `while` loops with `Bool` conditions elaborate to `bif` (`cond`/`Bool.dcond`)
rather than `uif` or Decidable `if`, and that library definitions whose `bif _ :` termination
binders were dropped (WF recursion now gets the hypothesis from `Bool.cond_eq_dcond`) still
reduce.
-/

open Lean in
/-- Prints which conditional constants the value of the unique constant ending in `sfx` uses. -/
elab "#conds " sfx:str : command => Elab.Command.liftTermElabM do
  let ks := [``cond, ``Bool.dcond, ``UDecidable.ite, ``UDecidable.dite, ``ite, ``dite]
  for (n, c) in (← getEnv).constants.toList do
    if n.toString.endsWith sfx.getString then
      if let some v := c.value? (allowOpaque := true) then
        logInfo m!"{ks.filter v.getUsedConstants.contains}"

/-! ## `while` loops in the library are `bif` -/

/-- info: [Bool.dcond] -/
#guard_msgs in #conds "System.Uri.UriEscape.decodeUri"

/-- info: [Bool.dcond, UDecidable.dite] -/
#guard_msgs in #conds "Std.Http.URI.EncodedString.decode"

/-- info: [Bool.dcond, UDecidable.ite, UDecidable.dite] -/
#guard_msgs in #conds "Std.Http.URI.EncodedQueryString.decode"

/-- info: [cond] -/
#guard_msgs in #conds "Std.Sync.Broadcast.0.Std.Bounded.Receiver.unsubscribe"

/-- info: [cond, UDecidable.ite] -/
#guard_msgs in #conds "Std.Http.Server.Connection.handle"

/-- info: [cond] -/
#guard_msgs in #conds "Std.Condvar.waitUntil"

/-! ## Equation lemmas of definitions without the binder use `cond` -/

/--
info: Nat.powMod.eq_1 (b e m : Nat) :
  b.powMod e m =
    bif e =ᵇ 0 then 1 % m
    else
      have r := (b * b % m).powMod (e / 2) m;
      bif e % 2 =ᵇ 1 then r * b % m else r
-/
#guard_msgs in #check Nat.powMod.eq_1

/-! ## Reduction -/

example : Nat.gcd 1071 462 = 21 := by decide
example : Nat.gcd (2^200 * 3) (2^150 * 9) = 2^150 * 3 := rfl
example : Nat.gcd (2^100000) (3^1000) = 1 := by decide +kernel
example : Nat.powMod 3 1000 1000003 = 73216 := by decide
example : Nat.powMod 7 (2^64) 13 = 9 := by decide +kernel
example : Nat.bitwise and 12 10 = 8 := by decide +kernel
example : Nat.bitwise (fun a b => a && !b) (2^200 + 12345) 6789 = 2^200 + 8248 := by decide +kernel
example : (5#10).hash = 5 := by decide +kernel
example : "abc".toUTF8.utf8Decode? = some #['a', 'b', 'c'] := by decide
example : String.fromUTF8Lossy [0x61, 0x80, 0x62].toByteArray = "a�b" := by decide +kernel
example : String.Pos.Raw.substrEq "hello" ⟨1⟩ "yellow" ⟨1⟩ 4 = true := by decide +kernel
example : #[1, 2, 4].insertIdx 2 3 = #[1, 2, 3, 4] := by decide +kernel
example : #[1, 2].zipWithAll Prod.mk #[3] = #[(some 1, some 3), (some 2, none)] := by decide +kernel
example : [1, 2, 3].toByteArray.toList = [1, 2, 3] := by decide +kernel
example : Lean.Grind.CommRing.PPoly.dsum 10 1234 = 10 := by decide +kernel
