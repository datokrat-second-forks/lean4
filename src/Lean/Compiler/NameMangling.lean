/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura, Robin Arnez
-/
module

prelude
public import Lean.Setup
import Init.Data.String.TakeDrop
import Init.Data.UInt.Lemmas
import Init.Omega
import Init.Data.String.Lemmas.FindPos

namespace String

def digitChar (n : UInt32) (h : n < 16) : Char :=
  bif h' : n <ᵇ 10 then ⟨n + 48, ?_⟩
  else ⟨n + 87, ?_⟩
where finally all_goals
  simp_all [UInt32.lt_iff_toNat_lt, UInt32.isValidChar, Nat.isValidChar]; omega

def pushHex (n : Nat) (val : UInt32) (s : String) : String :=
  match n with
  | 0 => s
  | k + 1 =>
    let i := (val >>> (4 * k.toUInt32)) &&& 15
    pushHex k val (s.push (digitChar i ?_))
where finally
  have := Nat.and_two_pow_sub_one_eq_mod (n := 4)
  simp only [Nat.reducePow, Nat.add_one_sub_one] at this
  simp [i, UInt32.lt_iff_toNat_lt, this]; omega


def mangleAux (s : String) (pos : s.Pos) (r : String) : String :=
  bif h : pos =ᵇ s.endPos then r else
  have h := ne_of_decideEq_eq_false h
  let c := pos.get h
  let pos := pos.next h
  bif c.isAlpha || c.isDigit then
    mangleAux s pos (r.push c)
  else bif c =ᵇ '_' then
    mangleAux s pos (r ++ "__")
  else bif c.toNat <ᵇ 0x100 then
    mangleAux s pos (pushHex 2 c.val (r ++ "_x"))
  else bif c.toNat <ᵇ 0x10000 then
    mangleAux s pos (pushHex 4 c.val (r ++ "_u"))
  else
    mangleAux s pos (pushHex 8 c.val (r ++ "_U"))
termination_by pos

public def Internal.mangle (s : String) : String :=
  mangleAux s s.startPos ""

end String

namespace Lean

def checkLowerHex : Nat → (s : String) → s.Pos → Bool
  | 0, _, _ => true
  | k + 1, s, pos =>
    bif h : pos =ᵇ s.endPos then
      false
    else
      let ch := pos.get (ne_of_decideEq_eq_false h)
      (ch.isDigit || (ch.val >= 97 && ch.val <= 102)) && -- 0-9a-f
        checkLowerHex k s (pos.next (ne_of_decideEq_eq_false h))

def fromHex? (c : Char) : Option Nat :=
  bif c.isDigit then
    some (c.val - 48).toNat
  else bif c.val ≥ᵇ 97 && c.val ≤ᵇ 102 then
    some (c.val - 87).toNat
  else none

def parseLowerHex? (k : Nat) (s : String) (p : s.Pos) (acc : Nat) :
    Option (s.Pos × Nat) :=
  match k with
  | 0 => some (p, acc)
  | k + 1 =>
    bif h : p =ᵇ s.endPos then
      none
    else
      have h := ne_of_decideEq_eq_false h
      match fromHex? (p.get h) with
      | some d => parseLowerHex? k s (p.next h) (acc <<< 4 ||| d)
      | none => none

theorem lt_of_parseLowerHex?_eq_some {k : Nat} {s : String} {p q : s.Pos} {acc : Nat}
    {r : Nat} (hk : 0 < k) : parseLowerHex? k s p acc = some (q, r) → p < q := by
  fun_induction parseLowerHex? with
  | case1 => simp at hk
  | case2 => simp
  | case3 p acc k h _ d x ih =>
    match k with
    | 0 => simpa [parseLowerHex?] using fun h _ => h ▸ p.lt_next
    | k + 1 => exact fun h => String.Pos.lt_trans p.lt_next (ih (by simp) h)
  | case4 => simp

def checkDisambiguation (s : String) (p : s.Pos) : Bool :=
  bif h : p =ᵇ s.endPos then true else
    have h := ne_of_decideEq_eq_false h
    let b := p.get h
    bif b =ᵇ '_' then
      checkDisambiguation s (p.next h)
    else bif b =ᵇ 'x' then
      checkLowerHex 2 s (p.next h)
    else bif b =ᵇ 'u' then
      checkLowerHex 4 s (p.next h)
    else bif b =ᵇ 'U' then
      checkLowerHex 8 s (p.next h)
    else bif b.val ≥ᵇ 48 && b.val ≤ᵇ 57 then
      true
    else false
termination_by p

def needDisambiguation (prev : Name) (next : String) : Bool :=
  (match prev with
    | .str _ s => ∃ h, (s.endPos.prev h).get (by simp) = '_'
    | _ => false) || checkDisambiguation next next.startPos

def Name.mangleAux : Name → String
  | Name.anonymous => ""
  | Name.str p s =>
    let m := String.Internal.mangle s
    match p with
    | Name.anonymous =>
      bif checkDisambiguation m m.startPos then "00" ++ m else m
    | p              =>
      let m1 := mangleAux p
      m1 ++ (bif needDisambiguation p m then "_00" else "_") ++ m
  | Name.num p n =>
    match p with
    | Name.anonymous => n.repr ++ "_"
    | p              =>
      mangleAux p ++ "_" ++ n.repr ++ "_"

public def Name.mangle (n : Name) (pre : String := "l_") : String :=
  pre ++ Name.mangleAux n

/--
Given `s = nm.mangle pre` for some `nm : Name` and `pre : String` with `nm != Name.anonymous`,
returns `(mkBoxedName nm).mangle pre`. This is used in the interpreter to find names of boxed
IR declarations.
-/
@[export lean_mk_mangled_boxed_name]
public def mkMangledBoxedName (s : String) : String :=
  bif s.endsWith "__" then
    s ++ "_00__boxed"
  else
    s ++ "___boxed"

/--
The mangled name of the name used to create the module initialization function.

This also used for the library name of a module plugin.
-/
public def mkModuleInitializationStem (moduleName : Name) (pkg? : Option PkgId := none) : String :=
  let pre := pkg?.elim "" (s!"{String.Internal.mangle ·}_")
  moduleName.mangle pre

public def mkModuleInitializationPrefix (phases : IRPhases) : String :=
  match phases with
  | .comptime => "meta_"
  | .runtime  => "runtime_"
  | .all      => ""

public def mkModuleInitializationFunctionName (moduleName : Name) (pkg? : Option PkgId := none) (phases : IRPhases := .all) : String :=
  mkModuleInitializationPrefix phases ++ "initialize_" ++ mkModuleInitializationStem moduleName pkg?

public def mkPackageSymbolPrefix (pkg? : Option PkgId) : String :=
  pkg?.elim "l_" (s!"lp_{String.Internal.mangle ·}_")

-- assumes `s` has been generated `Name.mangle n ""`
def Name.demangleAux (s : String) (p₀ : s.Pos) (res : Name)
    (acc : String) (ucount : Nat) : Name :=
  bif hp₀ : p₀ =ᵇ s.endPos then res.str (acc.pushn '_' (ucount / 2)) else
  have hp₀ := ne_of_decideEq_eq_false hp₀
  let ch := p₀.get hp₀
  let p := p₀.next hp₀
  bif ch =ᵇ '_' then demangleAux s p res acc (ucount + 1) else
  bif ucount % 2 =ᵇ 0 then
    demangleAux s p res (acc.pushn '_' (ucount / 2) |>.push ch) 0
  else bif ch.isDigit then
    let res := res.str (acc.pushn '_' (ucount / 2))
    bif h : ch =ᵇ '0' && p ≠ᵇ s.endPos then
      have h' := ne_of_decideNe_eq_true (Bool.and_eq_true_iff.mp h).2
      bif p.get h' =ᵇ '0' then
        demangleAux s (p.next h') res "" 0
      else
        decodeNum s p res (ch.val - 48).toNat
    else
      decodeNum s p res (ch.val - 48).toNat
  else
    match ch, h₁ : parseLowerHex? 2 s p 0 with
    | 'x', some (q, v) =>
      let acc := acc.pushn '_' (ucount / 2)
      have : p₀ < q := String.Pos.lt_trans p₀.lt_next (lt_of_parseLowerHex?_eq_some (by decide) h₁)
      demangleAux s q res (acc.push (Char.ofNat v)) 0
    | _, _ =>
      match ch, h₂ : parseLowerHex? 4 s p 0 with
      | 'u', some (q, v) =>
        let acc := acc.pushn '_' (ucount / 2)
        have : p₀ < q := String.Pos.lt_trans p₀.lt_next (lt_of_parseLowerHex?_eq_some (by decide) h₂)
        demangleAux s q res (acc.push (Char.ofNat v)) 0
      | _, _ =>
        match ch, h₃ : parseLowerHex? 8 s p 0 with
        | 'U', some (q, v) =>
          let acc := acc.pushn '_' (ucount / 2)
          have : p₀ < q := String.Pos.lt_trans p₀.lt_next (lt_of_parseLowerHex?_eq_some (by decide) h₃)
          demangleAux s q res (acc.push (Char.ofNat v)) 0
        | _, _ => demangleAux s p (res.str acc) ("".pushn '_' (ucount / 2) |>.push ch) 0
termination_by p₀
where
  decodeNum (s : String) (p : s.Pos) (res : Name) (n : Nat) : Name :=
    bif h : p =ᵇ s.endPos then res.num n else
    have h := ne_of_decideEq_eq_false h
    let ch := p.get h
    let p := p.next h
    bif ch.isDigit then
      decodeNum s p res (n * 10 + (ch.val - 48).toNat)
    else -- assume ch = '_'
      let res := res.num n
      bif h : p =ᵇ s.endPos then res else
      nameStart s (p.next (ne_of_decideEq_eq_false h)) res -- assume s.get' p h = '_'
  termination_by p
  nameStart (s : String) (p : s.Pos) (res : Name) : Name :=
    bif h : p =ᵇ s.endPos then res else
    have h := ne_of_decideEq_eq_false h
    let ch := p.get h
    let p := p.next h
    bif ch.isDigit then
      bif h : ch =ᵇ '0' && p ≠ᵇ s.endPos then
        have h' := ne_of_decideNe_eq_true (Bool.and_eq_true_iff.mp h).2
        bif p.get h' =ᵇ '0' then
          demangleAux s (p.next h') res "" 0
        else
          decodeNum s p res (ch.val - 48).toNat
      else
        decodeNum s p res (ch.val - 48).toNat
    else bif ch =ᵇ '_' then
      demangleAux s p res "" 1
    else
      demangleAux s p res (String.singleton ch) 0
  termination_by p

/-- Assuming `s` has been produced by `Name.mangle _ ""`, return the original name. -/
public def Name.demangle (s : String) : Name :=
  demangleAux.nameStart s s.startPos .anonymous

/--
Returns the demangled version of `s`, if it's the result of `Name.mangle _ ""`. Otherwise returns
`none`.
-/
public def Name.demangle? (s : String) : Option Name :=
  let n := demangle s
  bif mangleAux n =ᵇ s then some n else none

-- For correctness of mangle/demangle, see https://gist.github.com/Rob23oba/5ddef42a1743858e9334461ca57c4be8

end Lean
