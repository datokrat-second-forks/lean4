/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Dany Fabian, Henrik Böving
-/
module

prelude
public import Std.Internal.Parsec.Basic
public import Init.Data.String.Slice.Pattern
public import Init.Data.String.Termination
import Init.Data.String.Length

public section

namespace Std.Internal
namespace Parsec
namespace String

instance : Input (Sigma String.Pos) Char String.Pos.Raw where
  pos it := it.2.offset
  next it := ⟨it.1, it.2.next!⟩
  curr it := it.2.get!
  hasNext it := it.2 ≠ᵇ it.1.endPos
  next' it h := ⟨it.1, it.2.next (by simpa using h)⟩
  curr' it h := it.2.get (by simpa using h)

/--
`Parser α` is a parser that consumes a `String` input using a `Sigma String.Pos` and returns a result of type `α`.
-/
abbrev Parser (α : Type) : Type := Parsec (Sigma String.Pos) α

/--
Run a `Parser` on a `String`, returns either the result or an error string with offset.
-/
protected def Parser.run (p : Parser α) (s : String) : Except String α :=
  match p ⟨s, s.startPos⟩ with
  | .success _ res => Except.ok res
  | .error it err => Except.error s!"offset {repr it.2.offset.byteIdx}: {err}"

/--
Parses the given string.
-/
def pstring (s : String) : Parser String := fun it =>
  bif (it.1.sliceFrom it.2).startsWith s then
    .success ⟨_, it.2.nextn s.length⟩ s
  else
    .error it (.other s!"expected: {s}")

/--
Skips the given string.
-/
@[inline]
def skipString (s : String) : Parser Unit := pstring s *> pure ()

/--
Parses the given char.
-/
@[inline]
def pchar (c : Char) : Parser Char := attempt do
  bif (← any) == c then pure c else fail s!"expected: '{c}'"

/--
Skips the given char.
-/
@[inline]
def skipChar (c : Char) : Parser Unit := pchar c *> pure ()

/--
Parse an ASCII digit `0-9` as a `Char`.
-/
@[inline]
def digit : Parser Char := attempt do
  let c ← any
  bif '0' ≤ᵇ c && c ≤ᵇ '9' then return c else fail s!"digit expected"

/--
Convert a byte representing `'0'..'9'` to a `Nat`.
-/
@[inline]
private def digitToNat (b : Char) : Nat := b.toNat - '0'.toNat

@[inline]
private def digitsCore (acc : Nat) : Parser Nat := fun it =>
  /-
  With this design instead of combinators we can avoid allocating and branching over .success values
  all of the time.
  -/
  let ⟨res, it⟩ := go it.2 acc
  .success ⟨_, it⟩ res
where
  go {s : String} (it : s.Pos) (acc : Nat) : (Nat × s.Pos) :=
    bif h : it ≠ᵇ s.endPos then
      have h := ne_of_decideNe_eq_true h
      let candidate := it.get h
      bif '0' ≤ᵇ candidate && candidate ≤ᵇ '9' then
        let digit := digitToNat candidate
        let acc := acc * 10 + digit
        go (it.next h) acc
      else
        (acc, it)
    else
      (acc, it)
  termination_by it

/--
Parse one or more ASCII digits into a `Nat`.
-/
@[inline]
def digits : Parser Nat := do
  let d ← digit
  digitsCore (digitToNat d)

/--
Parse a hex digit `0-9`, `a-f`, or `A-F` as a `Char`.
-/
@[inline]
def hexDigit : Parser Char := attempt do
  let c ← any
  bif ('0' ≤ᵇ c && c ≤ᵇ '9')
   || ('a' ≤ᵇ c && c ≤ᵇ 'f')
   || ('A' ≤ᵇ c && c ≤ᵇ 'F') then return c else fail s!"hex digit expected"

/--
Parse an ASCII letter `a-z` or `A-Z` as a `Char`.
-/
@[inline]
def asciiLetter : Parser Char := attempt do
  let c ← any
  bif ('A' ≤ᵇ c && c ≤ᵇ 'Z') || ('a' ≤ᵇ c && c ≤ᵇ 'z') then return c else fail s!"ASCII letter expected"

private def skipWs {s : String} (it : s.Pos) : s.Pos :=
  bif h : it ≠ᵇ s.endPos then
    have h := ne_of_decideNe_eq_true h
    let c := it.get h
    bif c == '\u0009' || c == '\u000a' || c == '\u000d' || c == '\u0020' then
      skipWs (it.next h)
    else
      it
  else
   it
termination_by it

/--
Skip whitespace: tabs, newlines, carriage returns, and spaces.
-/
@[inline]
def ws : Parser Unit := fun it =>
  .success ⟨_, skipWs it.2⟩ ()

/--
Takes a fixed amount of chars from the iterator.
-/
def take (n : Nat) : Parser String := fun it =>
  let right := it.2.nextn n
  let substr := String.Slice.mk it.1 it.2 right String.Pos.le_nextn |>.copy
  bif substr.length != n then
    .error it .eof
  else
    .success ⟨_, right⟩ substr

end String
end Parsec
end Std.Internal
