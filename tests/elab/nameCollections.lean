import Lean

/-!
Tests the API of the `Lean` name and free-variable collections: operations forwarded to the
underlying `Std` containers, decidable membership, and the deprecated duplicates.
-/

open Lean

def m : NameMap Nat := ({} : NameMap Nat).insertMany [(`b, 2), (`a, 1), (`c, 3)]

/-- info: (some 1, none, some 20, some 4) -/
#guard_msgs in
#eval
  let m' := (m.insertIfNew `a 10).insertIfNew `d 4 |>.modify `b (· * 10)
  (m'.find? `a, m.find? `d, m'.find? `b, m'.find? `d)

/-- info: (some 2, none, 2) -/
#guard_msgs in
#eval
  let m' := m.map (fun _ v => 2 * v) |>.filterMap fun _ v => if v == 4 then none else some v
  (m'.find? `a, m'.find? `b, m'.size)

/-- info: (6, 2, 0, true) -/
#guard_msgs in
#eval (m.foldr (fun _ v acc => v + acc) 0, m.find! `b, m.findD `z 0, m.min?.isSome)

/-- info: (1, 0) -/
#guard_msgs in #eval ((if `a ∈ m then 1 else 0 : Nat), (if `z ∈ m then 1 else 0 : Nat))

def s : NameSet := ({} : NameSet).insertMany [`y, `x]

/-- info: (true, true) -/
#guard_msgs in #eval (s.min?.isSome, s.contains s.min!)

/-- info: (true, false) -/
#guard_msgs in #eval (s.subset (s.insert `z), (s.insert `z).subset s)

/-- info: 2 -/
#guard_msgs in #eval (s.foldr List.cons []).length

/-- info: 2 -/
#guard_msgs in #eval show IO Nat from do
  let r ← IO.mkRef 0
  s.forM fun _ => r.modify (· + 1)
  r.get

/-- info: (1, 0) -/
#guard_msgs in #eval ((if `x ∈ s then 1 else 0 : Nat), (if `z ∈ s then 1 else 0 : Nat))

def h : NameHashSet := .ofList [`p, `q]

/-- info: (2, 1, 2) -/
#guard_msgs in #eval (h.size, (h.erase `p).toArray.size, h.fold (fun k _ => k + 1) 0)

def fs : FVarIdSet := .ofList [⟨`f₁⟩, ⟨`f₂⟩]

/-- info: (true, false, 1) -/
#guard_msgs in #eval (fs.any (·.name == `f₁), fs.all (·.name == `f₁), (fs.filter (·.name == `f₂)).size)

def fm : FVarIdMap Nat := ({} : FVarIdMap Nat).insert ⟨`f⟩ 1

/-- info: (some 2, some 5, true) -/
#guard_msgs in #eval ((fm.modify ⟨`f⟩ (· + 1)).get? ⟨`f⟩, (fm.alter ⟨`g⟩ fun _ => some 5).get? ⟨`g⟩,
  fm.all fun _ v => v == 1)

set_option linter.deprecated true

/-- warning: `Lean.NameMap.get?` has been deprecated: Use `Lean.NameMap.find?` instead -/
#guard_msgs in example := m.get? `a

/-- warning: `Lean.NameSet.append` has been deprecated: Use `Lean.NameSet.union` instead -/
#guard_msgs in example := s.append s

/-- warning: `Lean.NameSet.merge` has been deprecated: Use `Lean.NameSet.union` instead -/
#guard_msgs in example := s.merge s
