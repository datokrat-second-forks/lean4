# `safe import` refuses to run without a sandbox
unset LEAN_SAFE_SANDBOX
capture_fail lean Main.lean
check_out_contains "requires the environment variable \`LEAN_SAFE_SANDBOX\`"

# `env` is a sandbox that does not actually sandbox anything
export LEAN_SAFE_SANDBOX=env

capture_only Main.lean lean -o "$TMP_DIR/Main.olean" Main.lean
check_exit_is_success
check_out_file
[[ ! -e initialize-ran ]] || fail "initializer of safe-imported module ran"
[[ ! -e Untrusted/Defs.olean ]] || fail "safe-imported module was compiled"

capture_only Noncomputable.lean lean Noncomputable.lean
check_exit_is_fail
check_out_file

# safe-imported declarations are part of the importing module's `.olean`
capture_only Downstream.lean env LEAN_PATH="$LEAN_PATH:$TMP_DIR" lean Downstream.lean
check_exit_is_success
check_out_file

capture_only Diamond.lean lean Diamond.lean
check_exit_is_success
check_out_file

capture_fail lean MissingImport.lean
check_out_contains "imports 'Std.Data.HashMap', which is not imported by this module"

capture_fail lean ElabError.lean
check_out_contains "sandboxed elaboration of 'Untrusted.Error' failed"

# A compromised sandbox can only produce declarations rejected by the decoder or the kernel
function check_payload {
  capture_only "" env LEAN_SAFE_SANDBOX="./fake_sandbox.sh payloads/$1.json" lean Payload.lean
  check_exit_is_fail
  check_out_contains "$2"
}
check_payload ill_typed "type mismatch"
check_payload huge_bvar "bound variable index too large"
check_payload forward_ref "invalid expression index 1"
check_payload redeclare "'Nat.add' has already been declared"
check_payload non_positive "non positive occurrence"
check_payload unsafe_ignored "type mismatch"
check_payload untrusted_import "imports 'Evil', which is not imported by this module"
check_payload invalid_utf8 "non UTF-8 data"
check_payload garbage "invalid export of 'Untrusted.Payload'"
