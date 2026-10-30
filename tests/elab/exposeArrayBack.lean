module

/-!
`Array.back`, `Array.back!`, and `Array.back?` are `@[expose]`, so a
downstream `module` can evaluate them, exactly like the `getElem?`/`size` accessors they are
defined in terms of. Without the attribute their bodies do not cross the module boundary and the
calls below get stuck on the unreduced application. `getElem?` decides the bound with
`UDecidable`, so it is evaluated with `cbv` instead of `decide`.
-/

-- Baseline: the accessors `back?` is built from already reduce.
example : (#[1, 2, 3] : Array Nat)[2]? = some 3 := by cbv
example : (#[1, 2, 3] : Array Nat).size = 3 := by decide

-- The `back` family must reduce too.
example : (#[1, 2, 3] : Array Nat).back? = some 3 := by cbv
example : (#[1, 2, 3] : Array Nat).back! = 3 := by decide
example : (#[1, 2, 3] : Array Nat).back = 3 := by decide
