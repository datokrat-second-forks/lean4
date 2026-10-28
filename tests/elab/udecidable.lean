/-!
`UDecidable` is a data-free `Decidable` whose instances the compiler represents by the `Bool` passed
to `UDecidable.mk`. Checks that the type is a definitional subsingleton, that instances are `u8` in
the IR with `UDecidable.mk` and `UDecidable.decide` compiled away, and that compiled code cannot
match on an instance.
-/

/-! The type is a definitional subsingleton. -/

example (p : Prop) (i j : UDecidable p) : i = j := rfl

example (n m : Nat) : UDecidable.instNatLe n m = UDecidable.ofDecidable (n ≤ m) := rfl

/-! Instances are `Bool`s in the IR, and `mk` and `decide` are the identity on them. -/

/--
trace: [Compiler.IR] [result]
    def natLeDecide (x_1 : @& tobj) (x_2 : @& tobj) : u8 :=
      let x_3 : u8 := Nat.ble x_1 x_2;
      ret x_3
    def natLeDecide._boxed (x_1 : tobj) (x_2 : tobj) : tagged :=
      let x_3 : u8 := natLeDecide x_1 x_2;
      dec x_2;
      dec x_1;
      let x_4 : tagged := box x_3;
      ret x_4
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def natLeDecide (n m : Nat) : Bool :=
  UDecidable.decide (n ≤ m)

/--
trace: [Compiler.IR] [result]
    def passInstance._redArg (x_1 : u8) : u8 :=
      ret x_1
    def passInstance._redArg._boxed (x_1 : tagged) : tagged :=
      let x_2 : u8 := unbox x_1;
      let x_3 : u8 := passInstance._redArg x_2;
      let x_4 : tagged := box x_3;
      ret x_4
[Compiler.IR] [result]
    def passInstance (x_1 : ◾) (x_2 : u8) : u8 :=
      ret x_2
    def passInstance._boxed (x_1 : tobj) (x_2 : tagged) : tagged :=
      let x_3 : u8 := unbox x_2;
      let x_4 : u8 := passInstance x_1 x_3;
      let x_5 : tagged := box x_4;
      ret x_5
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
@[instance_reducible] def passInstance (p : Prop) (i : UDecidable p) : UDecidable p :=
  i

/--
trace: [Compiler.IR] [result]
    def bridgeRoundTrip._redArg (x_1 : u8) : u8 :=
      ret x_1
    def bridgeRoundTrip._redArg._boxed (x_1 : tagged) : tagged :=
      let x_2 : u8 := unbox x_1;
      let x_3 : u8 := bridgeRoundTrip._redArg x_2;
      let x_4 : tagged := box x_3;
      ret x_4
[Compiler.IR] [result]
    def bridgeRoundTrip (x_1 : ◾) (x_2 : u8) : u8 :=
      ret x_2
    def bridgeRoundTrip._boxed (x_1 : tobj) (x_2 : tagged) : tagged :=
      let x_3 : u8 := unbox x_2;
      let x_4 : u8 := bridgeRoundTrip x_1 x_3;
      let x_5 : tagged := box x_4;
      ret x_5
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
@[instance_reducible] def bridgeRoundTrip (p : Prop) [Decidable p] : Decidable p :=
  UDecidable.toDecidable p

/--
trace: [Compiler.IR] [result]
    def useIte._redArg (x_1 : u8) (x_2 : @& tobj) (x_3 : @& tobj) : tobj :=
      case x_1 : u8 of
      Bool.false →
        inc x_3;
        ret x_3
      Bool.true →
        inc x_2;
        ret x_2
    def useIte._redArg._boxed (x_1 : tagged) (x_2 : tobj) (x_3 : tobj) : tobj :=
      let x_4 : u8 := unbox x_1;
      let x_5 : tobj := useIte._redArg x_4 x_2 x_3;
      dec x_3;
      dec x_2;
      ret x_5
[Compiler.IR] [result]
    def useIte (x_1 : ◾) (x_2 : u8) (x_3 : @& tobj) (x_4 : @& tobj) : tobj :=
      case x_2 : u8 of
      Bool.false →
        inc x_4;
        ret x_4
      Bool.true →
        inc x_3;
        ret x_3
    def useIte._boxed (x_1 : tobj) (x_2 : tagged) (x_3 : tobj) (x_4 : tobj) : tobj :=
      let x_5 : u8 := unbox x_2;
      let x_6 : tobj := useIte x_1 x_5 x_3 x_4;
      dec x_4;
      dec x_3;
      ret x_6
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def useIte (p : Prop) [UDecidable p] (x y : Nat) : Nat :=
  UDecidable.ite p x y

/-! `casesOn` would match the `Bool` against the data-free constructor, which is private. -/

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'UDecidable.casesOn', which is 'noncomputable'
-/
#guard_msgs in
def casesOnFns (p : Prop) :
    List (UDecidable p → ((∃ b, b = true ↔ p) → (Nat → Nat) → Nat) → (Nat → Nat) → Nat) :=
  [@UDecidable.casesOn p (fun _ => (Nat → Nat) → Nat)]

/--
error: failed to compile definition, consider marking it as 'noncomputable' because it depends on 'Classical.propDecidable', which is 'noncomputable'
-/
#guard_msgs in
def badClassical (p : Prop) : Bool :=
  @UDecidable.decide p (@UDecidable.ofDecidable p (Classical.propDecidable p))
