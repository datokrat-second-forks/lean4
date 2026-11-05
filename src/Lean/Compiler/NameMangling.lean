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
  uif h' : n < 10 then ⟨n + 48, ?_⟩
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
  uif h : pos = s.endPos then r else
  let c := pos.get h
  let pos := pos.next h
  uif c.isAlpha || c.isDigit then
    mangleAux s pos (r.push c)
  else uif c = '_' then
    mangleAux s pos (r ++ "__")
  else uif c.toNat < 0x100 then
    mangleAux s pos (pushHex 2 c.val (r ++ "_x"))
  else uif c.toNat < 0x10000 then
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
    uif h : pos = s.endPos then
      false
    else
      let ch := pos.get h
      (ch.isDigit || (ch.val >= 97 && ch.val <= 102)) && -- 0-9a-f
        checkLowerHex k s (pos.next h)

def fromHex? (c : Char) : Option Nat :=
  uif c.isDigit then
    some (c.val - 48).toNat
  else uif c.val ≥ 97 ∧ c.val ≤ 102 then
    some (c.val - 87).toNat
  else none

def parseLowerHex? (k : Nat) (s : String) (p : s.Pos) (acc : Nat) :
    Option (s.Pos × Nat) :=
  match k with
  | 0 => some (p, acc)
  | k + 1 =>
    uif h : p = s.endPos then
      none
    else
      match fromHex? (p.get h) with
      | some d => parseLowerHex? k s (p.next h) (acc <<< 4 ||| d)
      | none => none

theorem lt_of_parseLowerHex?_eq_some {k : Nat} {s : String} {p q : s.Pos} {acc : Nat}
    {r : Nat} (hk : 0 < k) : parseLowerHex? k s p acc = some (q, r) → p < q := by
  fun_induction parseLowerHex? with
  | case1 => simp at hk
  | case2 => simp
  | case3 p acc k h d x ih =>
    match k with
    | 0 => simpa [parseLowerHex?] using fun h _ => h ▸ p.lt_next
    | k + 1 => exact fun h => String.Pos.lt_trans p.lt_next (ih (by simp) h)
  | case4 => simp

def checkDisambiguation (s : String) (p : s.Pos) : Bool :=
  uif h : p = s.endPos then true else
    let b := p.get h
    uif b = '_' then
      checkDisambiguation s (p.next h)
    else uif b = 'x' then
      checkLowerHex 2 s (p.next h)
    else uif b = 'u' then
      checkLowerHex 4 s (p.next h)
    else uif b = 'U' then
      checkLowerHex 8 s (p.next h)
    else uif b.val ≥ 48 ∧ b.val ≤ 57 then
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
      uif checkDisambiguation m m.startPos then "00" ++ m else m
    | p              =>
      let m1 := mangleAux p
      m1 ++ (uif needDisambiguation p m then "_00" else "_") ++ m
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
  uif s.endsWith "__" then
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
  uif hp₀ : p₀ = s.endPos then res.str (acc.pushn '_' (ucount / 2)) else
  let ch := p₀.get hp₀
  let p := p₀.next hp₀
  uif ch = '_' then demangleAux s p res acc (ucount + 1) else
  uif ucount % 2 = 0 then
    demangleAux s p res (acc.pushn '_' (ucount / 2) |>.push ch) 0
  else uif ch.isDigit then
    let res := res.str (acc.pushn '_' (ucount / 2))
    uif h : ch = '0' ∧ p ≠ s.endPos then
      have h' := h.2
      uif p.get h' = '0' then
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
    uif h : p = s.endPos then res.num n else
    let ch := p.get h
    let p := p.next h
    uif ch.isDigit then
      decodeNum s p res (n * 10 + (ch.val - 48).toNat)
    else -- assume ch = '_'
      let res := res.num n
      uif h : p = s.endPos then res else
      nameStart s (p.next h) res -- assume s.get' p h = '_'
  termination_by p
  nameStart (s : String) (p : s.Pos) (res : Name) : Name :=
    uif h : p = s.endPos then res else
    let ch := p.get h
    let p := p.next h
    uif ch.isDigit then
      uif h : ch = '0' ∧ p ≠ s.endPos then
        have h' := h.2
        uif p.get h' = '0' then
          demangleAux s (p.next h') res "" 0
        else
          decodeNum s p res (ch.val - 48).toNat
      else
        decodeNum s p res (ch.val - 48).toNat
    else uif ch = '_' then
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
  uif mangleAux n = s then some n else none

-- For correctness of mangle/demangle, see https://gist.github.com/Rob23oba/5ddef42a1743858e9334461ca57c4be8

end Lean
