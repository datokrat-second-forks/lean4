/-!
The generic `minOn` family takes `[DecidableLE β]` and branches with `bif … ≤ᵇ …` (ADR-41), so it
reduces on concrete inputs as upstream: `decide` and `decide +kernel` evaluate it.
-/

example : [3, 1, 2].minOn? id = some 1 := by decide
example : [3, 1, 2].minOn? id = some 1 := by decide +kernel
example : minOn id 3 1 = 1 := by decide
example : minOn id 3 1 = 1 := by decide +kernel
example : maxOn id 3 1 = 3 := by decide
example : [3, 1, 2].maxOn? id = some 3 := by decide
example : [3, 1, 2].minIdxOn? id = some 1 := by decide
example : [3, 1, 2].maxIdxOn? id = some 0 := by decide +kernel
example : [3, 1, 2].minOn id (by simp) = 1 := by decide
example : [3, 1, 2].minOn? id = some 1 := rfl
example : minOn id 3 1 = 1 := rfl
