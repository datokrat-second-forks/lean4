/-!
Tests `@[congr_view]`: `simp` performs congruence on a registered view of an application, which
bundles a carrier type with its instances, so that it can rewrite the bundled object although the
instance arguments depend on its carrier.
-/

structure Bundle where
  carrier : Type
  [inst : Add carrier]

attribute [instance] Bundle.inst

abbrev Bundle.of (α : Type) [Add α] : Bundle := ⟨α⟩

@[simp] theorem Bundle.of_carrier (B : Bundle) : Bundle.of B.carrier = B := rfl

def addTwice {α : Type} [Add α] (x : α) : α := x + x

def K : Bundle := ⟨Nat⟩

theorem K_def : K = Bundle.of Nat := rfl

/-! Without a view, rewriting `K` in the carrier is reverted because `K.inst` would be ill-typed. -/

example (x : K.carrier) (r : Nat) (h : @addTwice Nat _ x = r) : addTwice x = r := by
  simp only [K_def]
  guard_target =ₛ @Eq Nat (@addTwice K.carrier K.inst x) r
  exact h

def addTwiceV (B : Bundle) (x : B.carrier) : B.carrier := addTwice x

@[congr_view] theorem addTwice_view {α : Type} [Add α] (x : α) :
    addTwice x = addTwiceV (Bundle.of α) x := rfl

-- With the view, `K` is rewritten together with its instance, and the view is undone again.
-- (Lemmas about `Nat` still do not apply to `x`, whose type remains `K.carrier`.)
example (x : K.carrier) (r : Nat) (h : @addTwice Nat _ x = r) : addTwice x = r := by
  simp only [K_def, Bundle.of_carrier]
  guard_target =ₛ @addTwice Nat instAddNat x = r
  exact h

-- No progress through the view is reported as no progress.
/--
error: `simp` made no progress
-/
#guard_msgs in
example (x r : K.carrier) : addTwice x = r := by
  simp only [Bundle.of_carrier]

-- Extra arguments beyond the view's left-hand side are simplified as usual.
def addTwiceF {α : Type} [Add α] (f : Nat → α) : Nat → α := fun n => f n + f n

def addTwiceFV (B : Bundle) (f : Nat → B.carrier) : Nat → B.carrier := addTwiceF f

@[congr_view] theorem addTwiceF_view {α : Type} [Add α] (f : Nat → α) :
    addTwiceF f = addTwiceFV (Bundle.of α) f := rfl

example (f : Nat → K.carrier) (r : Nat) (h : @addTwiceF Nat _ f r = r) :
    addTwiceF f (0 + r) = r := by
  simp only [K_def, Bundle.of_carrier, Nat.zero_add]
  guard_target =ₛ @addTwiceF Nat instAddNat f r = r
  exact h

/-! Invalid views. -/

/--
error: Invalid `congr_view` theorem: Expected an equality
  True
-/
#guard_msgs in
@[congr_view] theorem bad1 : True := trivial

/--
error: Invalid `congr_view` theorem: The sides are not definitionally equal
  addTwice ?x = 2 * ?x
-/
#guard_msgs in
@[congr_view] theorem bad2 (x : Nat) : addTwice x = 2 * x := by
  simp only [addTwice]; omega

/-! Cached instantiations: the second occurrence reuses the match of the first, with its own data. -/

example (x y : K.carrier) (r : Nat) (h : @addTwice Nat _ x = @addTwice Nat _ y) :
    addTwice x = addTwice y := by
  simp only [K_def, Bundle.of_carrier]
  guard_target =ₛ @addTwice Nat instAddNat x = @addTwice Nat instAddNat y
  exact h

-- A parameter occurring twice on the left-hand side is not treated as data.
def addBoth {α : Type} [Add α] (x y : α) : α := x + y

def addBothV (B : Bundle) (x : B.carrier) : B.carrier := addBoth x x

@[congr_view] theorem addBoth_view {α : Type} [Add α] (x : α) :
    addBoth x x = addBothV (Bundle.of α) x := rfl

example (x : K.carrier) (r : Nat) (h : @addBoth Nat _ x x = r) : addBoth x x = r := by
  simp only [K_def, Bundle.of_carrier]
  guard_target =ₛ @addBoth Nat instAddNat x x = r
  exact h

example (x y : K.carrier) (r : Nat) (h : @addBoth K.carrier _ y x = r) : addBoth y x = r := by
  simp only [K_def, Bundle.of_carrier]
  guard_target =ₛ @Eq Nat (@addBoth K.carrier K.inst y x) r
  exact h

/-!
A view function with an instance parameter does not rebuild its instances from bundled arguments,
so the result of congruence through it is still checked against `backward.dsimp.instanceTypes`.
-/

def addThrice {α : Type} [Add α] (x : α) : α := x + x + x

def addThriceV (α : Type) [Add α] (x : α) : α := addThrice x

@[congr_view] theorem addThrice_view {α : Type} [Add α] (x : α) :
    addThrice x = addThriceV α x := rfl

example (x : K.carrier) (r : Nat) (h : @addThrice K.carrier K.inst x = r) : addThrice x = r := by
  simp only [K_def]
  guard_target =ₛ @Eq Nat (@addThrice K.carrier K.inst x) r
  exact h
