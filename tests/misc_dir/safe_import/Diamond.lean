-- `Untrusted.Defs` is reached both directly and via `Untrusted.Nested`
safe import Untrusted.Defs
safe import Untrusted.Nested

example : quadruple 2 = 8 := quadruple_eq 2
example : double 2 = 4 := rfl
