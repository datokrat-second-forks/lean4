safe import Untrusted.Defs

def triple (n : Nat) : Nat := double n + n

#eval double 3

-- macros are not imported
example : Nat := untrusted_macro

-- unsafe definitions are not imported
#check @unsafeId
