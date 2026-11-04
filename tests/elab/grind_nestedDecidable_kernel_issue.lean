module
public meta import Lean.Elab.Command
public meta import Lean.Meta.Tactic.Grind.Attr
/-!
Paul Reichert's examples: `grind` + kernel interaction through `Grind.nestedDecidable`.

`grind` canonicalizes `Decidable` instances under the identity wrapper `Grind.nestedDecidable`,
leaving the kernel to check `X =?= nestedDecidable p X'`, where `X'` is `X` with normalized
arguments. With a `regular` reducibility hint on the wrapper, the kernel's lazy delta reduction
unfolds `X` first, and reducing it below runs into `Nat.add` on a free variable and `4294967264`.
`Grind.nestedDecidable` is an `abbrev`, so the kernel unfolds the wrapper first.

`MyChar` mirrors `Char.toUpper` and `Char.isLower`, so that `Char` simprocs do not affect the
example.

An earlier version of this test (using `Char.isLower`) used `&&` (and `decide`) instead of `if`, but
since then, `Decidable` has become a subtype of `Bool`, and when using `decide`, Lean only compares
the `Bool` field and ignores the attached proof.
However, the issue is still reproducible with `if` because the kernel compares the instance of an
`ite` directly. The expensive part is comparing the `Decidable.reflects_decide` proofs' types,
where WHNF unfolds `Reflects` and ends up with a matcher whose discriminant is the `Bool` field.
Lean then continues WHNF'ing the `Bool` field, which is very expensive.
So comparisons of `if`'s end up WHNF'ing the `Decidable` instance's boolean value, while comparisons
of `decide` simply *compare* the boolean values without WHNF'ing.

While it is good that `nestedDecidable` is now marked as highly reducible to the kernel,
it would still be worthwhile to investigate two things.
(a) Can we avoid the full WHNF when comparing `if`'s, or more generally, when comparing
    `Decidable` instances?
(b) Why is WHNF'ing `UInt32` arithmetic so terribly inefficient? Can we at least stop it from
    exploding?

`grind` normalizes `if` to `uif` (`UDecidable.ite`), whose instance it wraps in
`Grind.nestedUDecidable`. Section `Test` disables this normalization (locally) so that the
`Grind.nestedDecidable` path is still covered. Section `UTest` checks the default `uif` path:
there, the kernel check is cheap even with a `regular` wrapper, since `UDecidable` instances carry no
data.
-/

open Lean Meta Grind Elab Command in
/-- Erases `ite_eq_uite` and `dite_eq_udite` from the `grind` normalizer in the current scope. -/
elab "erase_uite_norm" : command => do
  let erased := [``Lean.Grind.ite_eq_uite, ``Lean.Grind.dite_eq_udite]
  modifyEnv fun env => normExt.modifyState env fun s =>
    erased.foldl (init := s) fun s n => s.eraseCore (.decl n)

section Test

set_option maxHeartbeats 1000 -- for the health of the machine

erase_uite_norm

structure MyChar where
  val : UInt32

def MyChar.toUpper (c : MyChar) : MyChar :=
  if 97 ≤ c.val ∧ c.val ≤ 122 then ⟨c.val + (65 - 97)⟩ else c

def MyChar.isLower (c : MyChar) : Bool :=
  if 97 ≤ c.val ∧ c.val ≤ 122 then true else false

/-!
After `split`, the instance of the `if` from `isLower` is `instDecidableAnd (UInt32.decLe 97 {val := c.val + (65 - 97)}.val) ..`.
`grind` normalizes the condition to `97 ≤ c.val + 4294967264 ∧ ..` and wraps the instance with the
projection reduced, so the kernel has to check the two instances against each other.
-/
theorem MyChar.isLower_toUpper (c : MyChar) : c.toUpper.isLower = false := by
  unfold MyChar.isLower MyChar.toUpper
  split <;> grind only

end Test

section Control

/-!
Sanity check: The test above fails if `nestedDecidable` is just a reducible definition,
lacking the `abbrev` kernel hint that it has on the current toolchain.
-/

/-- `Grind.nestedDecidable` with a `regular` reducibility hint. -/
@[reducible]
def regularNestedDecidable {p : Prop} (h : Decidable p) : Decidable p := h

/-- `Grind.nestedUDecidable` with a `regular` reducibility hint. -/
@[reducible]
def regularNestedUDecidable {p : Prop} (h : UDecidable p) : UDecidable p := h

open Lean Elab Command in
/--
Re-checks the proofs of `thm` and its auxiliary lemmas that mention `Grind.nestedDecidable` or
`Grind.nestedUDecidable`, with these constants replaced by `regularNestedDecidable` and
`regularNestedUDecidable`.
-/
elab "#recheck_with_regular_wrapper " thm:ident : command => liftCoreM do
  let thm ← realizeGlobalConstNoOverload thm
  let some v := (← getConstInfo thm).value? (allowOpaque := true) | throwError "no value"
  let mentionsWrapper (e : Expr) := (e.find? fun e =>
    e.isConstOf ``Grind.nestedDecidable || e.isConstOf ``Grind.nestedUDecidable).isSome
  let replace (e : Expr) := e.replace fun e =>
    if e.isConstOf ``Grind.nestedDecidable then some (mkConst ``regularNestedDecidable)
    else if e.isConstOf ``Grind.nestedUDecidable then some (mkConst ``regularNestedUDecidable)
    else none
  let mut found := false
  for n in #[thm] ++ v.getUsedConstants.filter (thm.isPrefixOf ·) do
    let ci ← getConstInfo n
    let some v := ci.value? (allowOpaque := true) | continue
    unless mentionsWrapper v do continue
    found := true
    addDecl <| .thmDecl { name := n ++ `regular, levelParams := ci.levelParams, type := replace ci.type, value := replace v }
  unless found do throwError "neither `{thm}` nor its auxiliary lemmas mention `Grind.nestedDecidable` or `Grind.nestedUDecidable`"

set_option maxHeartbeats 1000

/-- error: (kernel) deterministic timeout -/
#guard_msgs in
#recheck_with_regular_wrapper MyChar.isLower_toUpper

end Control

section UTest

set_option maxHeartbeats 1000

theorem MyChar.isLower_toUpper' (c : MyChar) : c.toUpper.isLower = false := by
  unfold MyChar.isLower MyChar.toUpper
  split <;> grind only

#recheck_with_regular_wrapper MyChar.isLower_toUpper'

end UTest
