-- Test that infer_public_type% creates public aliases recursively:
-- when a private declaration's type references another private declaration,
-- aliases must be created for both.
module

public section

private def myConst : Nat := 42
private def myFin : Fin myConst := sorry

-- Type of (show myFin = myFin from rfl) is @Eq (Fin myConst) myFin myFin.
-- myFin is private; its type mentions myConst which is also private.
-- infer_public_type% must create aliases for both, recursively.
def z := infer_public_type% (show myFin = myFin from rfl)

#check z

end
