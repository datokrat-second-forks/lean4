/-
Copyright (c) 2019 Gabriel Ebner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Gabriel Ebner, Marc Huisinga
-/
module

prelude
public import Lean.Data.Json.Basic
public import Std.Internal.Parsec

public section

open Std.Internal.Parsec
open Std.Internal.Parsec.String

namespace Lean.Json.Parser

def hexChar : Parser UInt16 := do
  let c ← any
  bif '0' ≤ᵇ c && c ≤ᵇ '9' then
    pure $ (c.val - '0'.val).toUInt16
  else bif 'a' ≤ᵇ c && c ≤ᵇ 'f' then
    pure $ (c.val - 'a'.val + 10).toUInt16
  else bif 'A' ≤ᵇ c && c ≤ᵇ 'F' then
    pure $ (c.val - 'A'.val + 10).toUInt16
  else
    fail "invalid hex character"

def finishSurrogatePair (low : UInt16) : Parser Char := do
  let c ← any
  bif c != '\\' then fail ""
  let c ← any
  bif c != 'u' then fail ""
  let c ← any
  bif c != 'd' && c != 'D' then fail ""
  let u2 ← hexChar; let u3 ← hexChar; let u4 ← hexChar
  let val := (u2 <<< 8) ||| (u3 <<< 4) ||| u4
  bif val <ᵇ 0xC00 then fail "" -- low or not a surrogate
  let charVal := (((low.toUInt32 &&& 0x3FF) <<< 10) ||| (val.toUInt32 &&& 0x3FF)) + 0x10000
  uif h : charVal.isValidChar then
    return ⟨charVal, h⟩
  else
    fail "" -- should be unreachable

def escapedChar : Parser Char := do
  let c ← any
  match c with
  | '\\' => return '\\'
  | '"'  => return '"'
  | '/'  => return '/'
  | 'b'  => return '\x08'
  | 'f'  => return '\x0c'
  | 'n'  => return '\n'
  | 'r'  => return '\x0d'
  | 't'  => return '\t'
  | 'u'  =>
    let u1 ← hexChar; let u2 ← hexChar; let u3 ← hexChar; let u4 ← hexChar
    let val := (u1 <<< 12) ||| (u2 <<< 8) ||| (u3 <<< 4) ||| u4
    bif h : val <ᵇ 0xD800 then
      return ⟨val.toUInt32, Or.inl (lt_of_decideLT_eq_true h)⟩
    else bif h' : val <ᵇ 0xE000 then
      -- low or high surrogate
      bif val <ᵇ 0xDC00 then
        -- low surrogate
        attempt (finishSurrogatePair val) <|> pure '\ufffd'
      else
        -- high/lone surrogate
        return '\ufffd' -- replacement character
    else
      return ⟨val.toUInt32, Or.inr ⟨Nat.not_lt.mp (not_lt_of_decideLT_eq_false h'), Nat.lt_trans val.toFin.isLt (by decide)⟩⟩
  | _ => fail "illegal \\u escape"

partial def strCore (acc : String) : Parser String := do
  let c ← peek!
  bif c == '"' then
    skip
    return acc
  else
    let c ← any
    bif c == '\\' then
      strCore (acc.push (← escapedChar))
    -- as to whether c.val > 0xffff should be split up and encoded with multiple \u,
    -- the JSON standard is not definite: both directly printing the character
    -- and encoding it with multiple \u is allowed. we choose the former.
    else bif 0x0020 ≤ᵇ c.val && c.val ≤ᵇ 0x10ffff then
      strCore (acc.push c)
    else
      fail "unexpected character in string"

@[inline] def str : Parser String := strCore ""

partial def natCore (acc : Nat) : Parser Nat := do
  bif (← isEof) then
    return acc
  else
    let c ← peek!
    bif '0' ≤ᵇ c && c ≤ᵇ '9' then
      skip
      let acc' := 10*acc + (c.val - '0'.val).toNat
      natCore acc'
    else
      return acc

partial def natCoreNumDigits (acc digits : Nat) : Parser (Nat × Nat) := do
  bif (← isEof) then
    return (acc, digits)
  else
    let c ← peek!
    bif '0' ≤ᵇ c && c ≤ᵇ '9' then
      skip
      let acc' := 10*acc + (c.val - '0'.val).toNat
      natCoreNumDigits acc' (digits+1)
    else
      return (acc, digits)

@[inline]
def lookahead (p : Char → Prop) (desc : String) [DecidablePred p] : Parser Unit := do
  let c ← peek!
  bif decide (p c) then
    return ()
  else
    fail <| "expected " ++ desc

@[inline]
def natNonZero : Parser Nat := do
  lookahead (fun c => '1' <= c && c <= '9') "1-9"
  natCore 0

@[inline]
def natNumDigits : Parser (Nat × Nat) := do
  lookahead (fun c => '0' <= c && c <= '9') "digit"
  natCoreNumDigits 0 0

@[inline]
def natMaybeZero : Parser Nat := do
  lookahead (fun c => '0' <= c && c <= '9') "0-9"
  natCore 0

@[inline]
def numSign : Parser Int := do
  let c ← peek!
  bif c == '-' then
    skip
    return (-1 : Int)
  else
    return 1

@[inline]
def nat : Parser Nat := do
  let c ← peek!
  bif c == '0' then
    skip
    return 0
  else
    natNonZero

@[inline]
def numWithDecimals : Parser JsonNumber := do
  let sign ← numSign
  let whole ← nat
  bif (← isEof) then
    pure <| JsonNumber.fromInt (sign * whole)
  else
    let c ← peek!
    bif c == '.' then
      skip
      let (n, d) ← natNumDigits
      bif d >ᵇ USize.size then fail "too many decimals"
      let mantissa' := sign * (whole * (10^d : Nat) + n)
      let exponent' := d
      pure <| JsonNumber.mk mantissa' exponent'
    else
      pure <| JsonNumber.fromInt (sign * whole)

@[inline]
def exponent (value : JsonNumber) : Parser JsonNumber := do
  bif (← isEof) then
    return value
  else
    let c ← peek!
    bif c == 'e' || c == 'E' then
      skip
      let c ← peek!
      bif c == '-' then
        skip
        let n ← natMaybeZero
        return value.shiftr n
      else
        bif c =ᵇ '+' then skip
        let n ← natMaybeZero
        -- `shiftl` currently consumes time/memory linear in n,
        -- and panics in `Nat.pow` for sufficiently large n.
        -- This could be improved by supporting positive exponents in `JsonNumber`.
        bif n >ᵇ 100_000 then fail "exponent too large"
        return value.shiftl n
    else
      return value

def num : Parser JsonNumber := do
  let res : JsonNumber ← numWithDecimals
  exponent res

mutual

  partial def arrayCore (acc : Array Json) : Parser (Array Json) := do
    let hd ← anyCore
    let acc' := acc.push hd
    let c ← any
    bif c == ']' then
      ws
      return acc'
    else bif c == ',' then
      ws
      arrayCore acc'
    else
      fail "unexpected character in array"

  partial def objectCore (kvs : Std.TreeMap.Raw String Json) :
      Parser (Std.TreeMap.Raw String Json) := do
    lookahead (fun c => c == '"') "\""; skip;
    let k ← str; ws
    bif kvs.contains k then fail s!"duplicate object key {k.quote}"
    lookahead (fun c => c == ':') ":"; skip; ws
    let v ← anyCore
    let c ← any
    bif c == '}' then
      ws
      return kvs.insert k v
    else bif c == ',' then
      ws
      objectCore (kvs.insert k v)
    else
      fail "unexpected character in object"

  partial def anyCore : Parser Json := do
    let c ← peek!
    bif c == '[' then
      skip; ws
      let c ← peek!
      bif c == ']' then
        skip; ws
        return Json.arr (Array.mkEmpty 0)
      else
        let a ← arrayCore (Array.mkEmpty 4)
        return Json.arr a
    else bif c == '{' then
      skip; ws
      let c ← peek!
      bif c == '}' then
        skip; ws
        return Json.obj ∅
      else
        let kvs ← objectCore ∅
        return Json.obj kvs
    else bif c == '\"' then
      skip
      let s ← str
      ws
      return Json.str s
    else bif c == 'f' then
      skipString "false"; ws
      return Json.bool false
    else bif c == 't' then
      skipString "true"; ws
      return Json.bool true
    else bif c == 'n' then
      skipString "null"; ws
      return Json.null
    else bif c == '-' || ('0' ≤ᵇ c && c ≤ᵇ '9') then
      let n ← num
      ws
      return Json.num n
    else
      fail "unexpected input"

end

def any : Parser Json := do
  ws
  let res ← anyCore
  eof
  return res

end Json.Parser

namespace Json

/-- Parses a JSON value, surrounded by optional whitespace. Objects with duplicate keys are rejected. -/
def parse (s : String) : Except String Lean.Json :=
  Parser.run Json.Parser.any s

end Json

end Lean
