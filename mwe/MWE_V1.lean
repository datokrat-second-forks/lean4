-- MWE for bug V1: `quoteString` hex-escape continuation
-- `EmitC.lean:213-228` encodes control bytes as `\xNN`, but C's `\x` is greedy.
-- `"\x01abc"` in C parses as ONE escape `\x01abc`, overflowing to `0xbc`.

def badString : String := "\x01abc"

-- Dynamically-constructed "same" string via String.mk; this one is built at
-- runtime from the correct characters and should compare equal to badString.
def goodString : String := String.mk ['\x01', 'a', 'b', 'c']

def main : IO Unit := do
  -- Metadata reads (header values, not data). These should be 4.
  IO.println s!"badString.length                = {badString.length}"
  IO.println s!"badString.utf8ByteSize          = {badString.utf8ByteSize}"

  -- Actual data reads. toUTF8 copies m_size-1 bytes from m_data.
  let ba := badString.toUTF8
  IO.println s!"badString.toUTF8.size           = {ba.size}"
  IO.print    "badString.toUTF8 bytes          ="
  for i in [:ba.size] do IO.print s!" 0x{(Nat.toDigits 16 ba[i]!.toNat).asString}"
  IO.println ""

  -- Equality comparison against the runtime-built version
  IO.println s!"badString == goodString         = {badString == goodString}"
  IO.println s!"goodString.toUTF8.size          = {goodString.toUTF8.size}"
  IO.print    "goodString.toUTF8 bytes         ="
  for i in [:goodString.toUTF8.size] do
    IO.print s!" 0x{(Nat.toDigits 16 goodString.toUTF8[i]!.toNat).asString}"
  IO.println ""
