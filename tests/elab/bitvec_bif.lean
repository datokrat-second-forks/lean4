import Std.Tactic.BVDecide

/-!
Checks that simple `BitVec` operations still reduce in the kernel and in the elaborator after their
definitions moved from `Decidable` `if` and coerced propositions to `bif`/`bif h :` (`toInt`,
`setWidth`, `signExtend`, `smtUDiv`, `getMsb?`, `ofNatClamp`, `clz`, `hash`, `cpopRec`, the overflow
predicates, …), spot-checks the lemmas restated with `uif`, and checks that `bv_decide` and
`bv_normalize` still handle goals involving the converted definitions.
-/

/-! Reduction by `rfl`, `decide` and `decide +kernel`. -/

example : (5#4).ult 7#4 = true := rfl
example : (5#4).ule 5#4 = true := rfl
example : (7#4).slt 8#4 = false := rfl
example : (15#4).sle 1#4 = true := rfl
example : (15#4).toInt = -1 := rfl
example : (7#4).toInt = 7 := rfl
example : (15#4).signExtend 8 = 255#8 := rfl
example : (7#4).signExtend 8 = 7#8 := rfl
example : (255#8).setWidth 4 = 15#4 := rfl
example : (15#4).setWidth 8 = 15#8 := rfl
example : (5#4).smtUDiv 0#4 = 15#4 := rfl
example : (6#4).smtUDiv 2#4 = 3#4 := rfl
example : (6#4).smtSDiv 0#4 = 15#4 := rfl
example : (14#4).sdiv 2#4 = 15#4 := rfl
example : (13#4).srem 2#4 = 15#4 := rfl
example : (13#4).smod 2#4 = 1#4 := rfl
example : (13#4).abs = 3#4 := rfl
example : (9#4).rotateLeft 1 = 3#4 := rfl
example : (9#4).rotateRight 1 = 12#4 := rfl
example : (12#4).extractLsb 3 2 = 3#2 := rfl
example : (8#4).sshiftRight 2 = 14#4 := rfl
example : (8#4) >>> 2 = 2#4 := rfl
example : (8#4) <<< 1 = 0#4 := rfl
example : (5#4).getMsb? 0 = some false := rfl
example : (5#4).getMsb? 7 = none := rfl
example : (5#4).getMsbD 1 = true := rfl
example : (5#4).msb = false := rfl
example : BitVec.ofNatClamp 4 20 = 15#4 := rfl
example : BitVec.ofNatClamp 4 3 = 3#4 := rfl
example : (4#4).clz = 1#4 := rfl
example : (4#4).ctz = 2#4 := rfl
example : (7#4).cpop = 3#4 := rfl
example : (15#4).umulOverflow 2#4 = true := rfl
example : (7#4).smulOverflow 2#4 = true := rfl
example : (8#4).sdivOverflow 15#4 = true := rfl
example : (8#4).negOverflow = true := rfl
example : (15#4).uaddOverflow 1#4 = true := rfl
example : (7#4).saddOverflow 1#4 = true := rfl
example : (1#4).usubOverflow 2#4 = true := rfl
example : (8#4).ssubOverflow 1#4 = true := rfl
example : BitVec.fill 4 true = 15#4 := rfl
example : min (3#4) (5#4) = 3#4 := rfl
example : max (3#4) (5#4) = 5#4 := rfl
example : ((3#4) == (3#4)) = true := rfl
example : BitVec.twoPow 4 2 = 4#4 := rfl
example : BitVec.intMin 4 = 8#4 := rfl
example : BitVec.intMax 4 = 7#4 := rfl
example : (5#4).mulRec 3#4 1 = 15#4 := rfl
example : (5#4) * 3#4 = 15#4 := rfl
example : (13#4) / 3#4 = 4#4 := rfl
example : (13#4) % 3#4 = 1#4 := rfl
example : (5#4).reverse = 10#4 := rfl
example : (5#4).replicate 2 = 85#8 := rfl
example : (5#4) ++ (3#4) = 83#8 := rfl
example : (5#4).concat true = 11#5 := rfl
example : BitVec.cons true (5#4) = 21#5 := rfl
example : (BitVec.ofInt 4 (-1)) = 15#4 := rfl
example : (15#4).toInt = -1 := by decide
example : (5#4) < (7#4) := by decide
example : (5#4) ≤ (7#4) := by decide
example : (5#4) ≠ (7#4) := by decide
example : (15#4).slt 0#4 := by decide
example : (15#4).signExtend 8 = 255#8 := by decide
example : (5#4).smtUDiv 0#4 = 15#4 := by decide
example : (13#4).smod 2#4 = 1#4 := by decide
example : (13#4).abs = 3#4 := by decide
example : (255#8).setWidth 4 = 15#4 := by decide
example : (4#4).clz = 1#4 := by decide
example : (15#4).umulOverflow 2#4 = true := by decide
example : (7#4).saddOverflow 1#4 = true := by decide
example : (8#4).sdivOverflow 15#4 = true := by decide
example : ∀ x : BitVec 3, x.toInt ≤ 3 := by decide
example : ∀ x : BitVec 3, x.signExtend 4 = (x.signExtend 4) := by decide
example : (15#64).toInt = 15 := by decide +kernel
example : (0xFFFFFFFFFFFFFFFF#64).toInt = -1 := by decide +kernel
example : (0xFFFFFFFF#32).signExtend 64 = 0xFFFFFFFFFFFFFFFF#64 := by decide +kernel
example : (0xFFFFFFFF#32).smtUDiv 0#32 = 0xFFFFFFFF#32 := by decide +kernel
example : (0x80000000#32).sdivOverflow 0xFFFFFFFF#32 = true := by decide +kernel
example : (0xFFFF#32).umulOverflow 0x10000#32 = false := by decide +kernel
example : (0x80000000#32).clz = 0#32 := by decide +kernel
example : (0x1#32).clz = 31#32 := by decide +kernel
example : (0xFFFFFFFF#32).setWidth 16 = 0xFFFF#16 := by decide +kernel
example : (0xFFFF#16).setWidth 32 = 0xFFFF#32 := by decide +kernel
example : BitVec.ofNatClamp 32 (2^40) = 0xFFFFFFFF#32 := by decide +kernel
example : (0x8000#16).smod 3#16 = 1#16 := by decide +kernel
example : (0x8000#16).sshiftRight 4 = 0xF800#16 := by decide +kernel
example : (0x8000#16).rotateLeft 17 = 1#16 := by decide +kernel
example : (0b1011#4).cpop = 3#4 := by decide +kernel
example : (0b1011#4).cpopRec = 3#4 := by decide +kernel
example : BitVec.hash (5#8) = 5 := by decide +kernel
example : BitVec.cpopTree (len := 2) (w := 4) (0x12#8) = 3#4 := by decide +kernel
example : (BitVec.divRec 4 ⟨13#4, 3#4⟩ (BitVec.DivModState.init 4)).q = 4#4 := by decide +kernel

/-! Restated lemmas. -/

example (x : BitVec n) :
    x.toInt = uif 2 * x.toNat < 2 ^ n then (x.toNat : Int) else (x.toNat : Int) - (2 ^ n : Nat) :=
  BitVec.toInt_eq_toNat_cond x

example (x : BitVec w) :
    x.toInt = uif x.msb then (x.toNat : Int) - (2 ^ w : Nat) else (x.toNat : Int) :=
  BitVec.toInt_eq_msb_cond x

example (x y : BitVec w) : x.smtUDiv y = uif y = 0#w then BitVec.allOnes w else x / y :=
  BitVec.smtUDiv_eq x y

example (x : BitVec w) (i : Nat) :
    x.getMsb? i = uif i < w then x.getLsb? (w - 1 - i) else none :=
  BitVec.getMsb?_eq_getLsb? x i

example (x : BitVec w) (y : BitVec v) (i : Nat) :
    (x ++ y).getLsbD i = uif i < v then y.getLsbD i else x.getLsbD (i - v) :=
  BitVec.getLsbD_append

example (x y : BitVec w) (s : Nat) :
    x.mulRec y (s + 1) = x.mulRec y s + uif y.getLsbD (s + 1) then x <<< (s + 1) else 0 :=
  BitVec.mulRec_succ_eq x y s

example (x : BitVec w) : x.abs.toNat = uif x.msb then 2 ^ w - x.toNat else x.toNat :=
  BitVec.toNat_abs

example (x : BitVec w) (h : 2 * x.toNat < 2 ^ w) : x.toInt = x.toNat := by
  simp [BitVec.toInt_eq_toNat_cond, h]

example (x : BitVec 8) (h : x.msb = true) : x.toInt < 0 := by
  rw [BitVec.toInt_eq_msb_cond]
  simp only [h, ↓reduceUIte]
  omega

example (x : BitVec 8) : x.toInt ≤ 127 := by
  rw [BitVec.toInt_eq_toNat_cond]
  split <;> omega

example (n : Nat) (h : n < 2 ^ 8) : BitVec.ofNatClamp 8 n = BitVec.ofNat 8 n :=
  BitVec.ofNatClamp_eq_ofNat h

example (x y : BitVec 8) (h : ¬x.umulOverflow y) : (x * y).toNat = x.toNat * y.toNat :=
  BitVec.toNat_mul_of_not_umulOverflow h

/-! `bv_decide`/`bv_normalize` on goals with the converted definitions. -/

example (x : BitVec 8) : x.smtUDiv 0#8 = BitVec.allOnes 8 := by bv_decide
example (x y : BitVec 8) (h : y ≠ 0#8) : x.smtUDiv y = x / y := by bv_decide
example (x : BitVec 8) : (x.setWidth 16).setWidth 8 = x := by bv_decide
example (x : BitVec 8) : (x.signExtend 16).setWidth 8 = x := by bv_decide
example (x : BitVec 8) : x.sle x := by bv_decide
example (x y : BitVec 8) : x.uaddOverflow y = (x.setWidth 9 + y.setWidth 9).msb := by bv_decide
example (x y : BitVec 8) : x.umulOverflow y = y.umulOverflow x := by bv_decide
example (x y : BitVec 8) : x.ssubOverflow y = x.ssubOverflow y := by bv_decide
example (x y : BitVec 8) (h : ¬x.uaddOverflow y) : x.ult (x + y) || y = 0#8 := by bv_decide
example (x y : BitVec 8) : x.saddOverflow y = y.saddOverflow x := by bv_decide
example (x : BitVec 8) : x.clz.ult 9#8 := by bv_decide
example (x : BitVec 8) : x.cpop.ule 8#8 := by bv_decide
example (x y : BitVec 8) : (x * y) = y * x := by bv_decide
example (x y : BitVec 8) (h : y ≠ 0#8) : (x / y) * y + x % y = x := by bv_decide
example (x : BitVec 8) : x.abs = (bif x.msb then -x else x) := by bv_normalize
example (x : BitVec 8) (h : x.msb = false) : x.abs = x := by bv_decide
