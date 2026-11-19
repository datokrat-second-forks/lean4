// Lean compiler output
// Module: Lean.Meta.Tactic.Contradiction
// Imports: public import Lean.Meta.Tactic.Assumption public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Apply import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.LitValues
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_refutableHasNotBit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNot_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_floatLitValuesEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_saveState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_saveState___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value)} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value;
static const lean_array_object l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "contradiction"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 147, 90, 76, 177, 67, 155, 92)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__4 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__5 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__6 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__7;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "elimEmptyInductive, number subgoals: "};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "elimEmptyInductive out-of-fuel"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__8 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_mkGenDiseqMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkGenDiseqMask___closed__0 = (const lean_object*)&l_Lean_Meta_mkGenDiseqMask___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Tactic.Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Tactic.Contradiction.0.Lean.Meta.processGenDiseq"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: isGenDiseq localDecl.type\n  "};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_contradictionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 42, 230, 185, 74, 16, 247, 90)}};
static const lean_object* l_Lean_MVarId_contradictionCore___closed__0 = (const lean_object*)&l_Lean_MVarId_contradictionCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 99, 155, 115, 190, 254, 84, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(215, 241, 81, 7, 129, 11, 88, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(234, 199, 235, 149, 198, 6, 20, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 78, 37, 212, 63, 127, 41, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 88, 171, 83, 172, 77, 248, 159)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 220, 174, 134, 139, 23, 35, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 173, 142, 211, 165, 86, 65, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 154, 136, 66, 43, 95, 3, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(142, 18, 4, 159, 144, 239, 124, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 255, 49, 161, 212, 67, 91, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(911661800) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(54, 37, 52, 164, 114, 188, 198, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 78, 196, 57, 182, 60, 174, 81)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 112, 60, 29, 144, 20, 193, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(84, 54, 65, 98, 52, 12, 188, 139)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object* v_e_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_e_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_Lean_Expr_appArg_x21(v_e_6_);
v___x_11_ = l_Lean_Expr_hasLooseBVars(v___x_10_);
lean_dec_ref(v___x_10_);
if (v___x_11_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object* v_e_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(v_e_13_);
lean_dec_ref(v_e_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_ks_20_; lean_object* v_vs_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_45_; 
v_ks_20_ = lean_ctor_get(v_x_16_, 0);
v_vs_21_ = lean_ctor_get(v_x_16_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_45_ == 0)
{
v___x_23_ = v_x_16_;
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_vs_21_);
lean_inc(v_ks_20_);
lean_dec(v_x_16_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_array_get_size(v_ks_20_);
v___x_26_ = lean_nat_dec_lt(v_x_17_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
lean_dec(v_x_17_);
v___x_27_ = lean_array_push(v_ks_20_, v_x_18_);
v___x_28_ = lean_array_push(v_vs_21_, v_x_19_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_28_);
lean_ctor_set(v___x_23_, 0, v___x_27_);
v___x_30_ = v___x_23_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v___x_28_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
else
{
lean_object* v_k_x27_32_; uint8_t v___x_33_; 
v_k_x27_32_ = lean_array_fget_borrowed(v_ks_20_, v_x_17_);
v___x_33_ = l_Lean_instBEqMVarId_beq(v_x_18_, v_k_x27_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_35_; 
if (v_isShared_24_ == 0)
{
v___x_35_ = v___x_23_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_ks_20_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_vs_21_);
v___x_35_ = v_reuseFailAlloc_39_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_x_17_, v___x_36_);
lean_dec(v_x_17_);
v_x_16_ = v___x_35_;
v_x_17_ = v___x_37_;
goto _start;
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_40_ = lean_array_fset(v_ks_20_, v_x_17_, v_x_18_);
v___x_41_ = lean_array_fset(v_vs_21_, v_x_17_, v_x_19_);
lean_dec(v_x_17_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_41_);
lean_ctor_set(v___x_23_, 0, v___x_40_);
v___x_43_ = v___x_23_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_46_, lean_object* v_k_47_, lean_object* v_v_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_46_, v___x_49_, v_k_47_, v_v_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object* v_x_52_, size_t v_x_53_, size_t v_x_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_52_) == 0)
{
lean_object* v_es_57_; size_t v___x_58_; size_t v___x_59_; lean_object* v_j_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v_es_57_ = lean_ctor_get(v_x_52_, 0);
v___x_58_ = ((size_t)31ULL);
v___x_59_ = lean_usize_land(v_x_53_, v___x_58_);
v_j_60_ = lean_usize_to_nat(v___x_59_);
v___x_61_ = lean_array_get_size(v_es_57_);
v___x_62_ = lean_nat_dec_lt(v_j_60_, v___x_61_);
if (v___x_62_ == 0)
{
lean_dec(v_j_60_);
lean_dec(v_x_56_);
lean_dec(v_x_55_);
return v_x_52_;
}
else
{
lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_101_; 
lean_inc_ref(v_es_57_);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; 
v_unused_102_ = lean_ctor_get(v_x_52_, 0);
lean_dec(v_unused_102_);
v___x_64_ = v_x_52_;
v_isShared_65_ = v_isSharedCheck_101_;
goto v_resetjp_63_;
}
else
{
lean_dec(v_x_52_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_101_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v_v_66_; lean_object* v___x_67_; lean_object* v_xs_x27_68_; lean_object* v___y_70_; 
v_v_66_ = lean_array_fget(v_es_57_, v_j_60_);
v___x_67_ = lean_box(0);
v_xs_x27_68_ = lean_array_fset(v_es_57_, v_j_60_, v___x_67_);
switch(lean_obj_tag(v_v_66_))
{
case 0:
{
lean_object* v_key_75_; lean_object* v_val_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_86_; 
v_key_75_ = lean_ctor_get(v_v_66_, 0);
v_val_76_ = lean_ctor_get(v_v_66_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_v_66_);
if (v_isSharedCheck_86_ == 0)
{
v___x_78_ = v_v_66_;
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_val_76_);
lean_inc(v_key_75_);
lean_dec(v_v_66_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
uint8_t v___x_80_; 
v___x_80_ = l_Lean_instBEqMVarId_beq(v_x_55_, v_key_75_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_del_object(v___x_78_);
v___x_81_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_75_, v_val_76_, v_x_55_, v_x_56_);
v___x_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
v___y_70_ = v___x_82_;
goto v___jp_69_;
}
else
{
lean_object* v___x_84_; 
lean_dec(v_val_76_);
lean_dec(v_key_75_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 1, v_x_56_);
lean_ctor_set(v___x_78_, 0, v_x_55_);
v___x_84_ = v___x_78_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_x_55_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_x_56_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v___y_70_ = v___x_84_;
goto v___jp_69_;
}
}
}
}
case 1:
{
lean_object* v_node_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_99_; 
v_node_87_ = lean_ctor_get(v_v_66_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v_v_66_);
if (v_isSharedCheck_99_ == 0)
{
v___x_89_ = v_v_66_;
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_node_87_);
lean_dec(v_v_66_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_91_ = ((size_t)5ULL);
v___x_92_ = lean_usize_shift_right(v_x_53_, v___x_91_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_add(v_x_54_, v___x_93_);
v___x_95_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_node_87_, v___x_92_, v___x_94_, v_x_55_, v_x_56_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 0, v___x_95_);
v___x_97_ = v___x_89_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
v___y_70_ = v___x_97_;
goto v___jp_69_;
}
}
}
default: 
{
lean_object* v___x_100_; 
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v_x_55_);
lean_ctor_set(v___x_100_, 1, v_x_56_);
v___y_70_ = v___x_100_;
goto v___jp_69_;
}
}
v___jp_69_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_71_ = lean_array_fset(v_xs_x27_68_, v_j_60_, v___y_70_);
lean_dec(v_j_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_71_);
v___x_73_ = v___x_64_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
else
{
lean_object* v_ks_103_; lean_object* v_vs_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_122_; 
v_ks_103_ = lean_ctor_get(v_x_52_, 0);
v_vs_104_ = lean_ctor_get(v_x_52_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_122_ == 0)
{
v___x_106_ = v_x_52_;
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_vs_104_);
lean_inc(v_ks_103_);
lean_dec(v_x_52_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_ks_103_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_vs_104_);
v___x_109_ = v_reuseFailAlloc_121_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v_newNode_110_; size_t v___x_111_; uint8_t v___x_112_; 
v_newNode_110_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v___x_109_, v_x_55_, v_x_56_);
v___x_111_ = ((size_t)7ULL);
v___x_112_ = lean_usize_dec_le(v___x_111_, v_x_54_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_113_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_110_);
v___x_114_ = lean_unsigned_to_nat(4u);
v___x_115_ = lean_nat_dec_lt(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
if (v___x_115_ == 0)
{
lean_object* v_ks_116_; lean_object* v_vs_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_ks_116_ = lean_ctor_get(v_newNode_110_, 0);
lean_inc_ref(v_ks_116_);
v_vs_117_ = lean_ctor_get(v_newNode_110_, 1);
lean_inc_ref(v_vs_117_);
lean_dec_ref(v_newNode_110_);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_120_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_x_54_, v_ks_116_, v_vs_117_, v___x_118_, v___x_119_);
lean_dec_ref(v_vs_117_);
lean_dec_ref(v_ks_116_);
return v___x_120_;
}
else
{
return v_newNode_110_;
}
}
else
{
return v_newNode_110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_123_, lean_object* v_keys_124_, lean_object* v_vals_125_, lean_object* v_i_126_, lean_object* v_entries_127_){
_start:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_array_get_size(v_keys_124_);
v___x_129_ = lean_nat_dec_lt(v_i_126_, v___x_128_);
if (v___x_129_ == 0)
{
lean_dec(v_i_126_);
return v_entries_127_;
}
else
{
lean_object* v_k_130_; lean_object* v_v_131_; uint64_t v___x_132_; size_t v_h_133_; size_t v___x_134_; lean_object* v___x_135_; size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v_h_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_k_130_ = lean_array_fget_borrowed(v_keys_124_, v_i_126_);
v_v_131_ = lean_array_fget_borrowed(v_vals_125_, v_i_126_);
v___x_132_ = l_Lean_instHashableMVarId_hash(v_k_130_);
v_h_133_ = lean_uint64_to_usize(v___x_132_);
v___x_134_ = ((size_t)5ULL);
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_sub(v_depth_123_, v___x_136_);
v___x_138_ = lean_usize_mul(v___x_134_, v___x_137_);
v_h_139_ = lean_usize_shift_right(v_h_133_, v___x_138_);
v___x_140_ = lean_nat_add(v_i_126_, v___x_135_);
lean_dec(v_i_126_);
lean_inc(v_v_131_);
lean_inc(v_k_130_);
v___x_141_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_entries_127_, v_h_139_, v_depth_123_, v_k_130_, v_v_131_);
v_i_126_ = v___x_140_;
v_entries_127_ = v___x_141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_143_, lean_object* v_keys_144_, lean_object* v_vals_145_, lean_object* v_i_146_, lean_object* v_entries_147_){
_start:
{
size_t v_depth_boxed_148_; lean_object* v_res_149_; 
v_depth_boxed_148_ = lean_unbox_usize(v_depth_143_);
lean_dec(v_depth_143_);
v_res_149_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_148_, v_keys_144_, v_vals_145_, v_i_146_, v_entries_147_);
lean_dec_ref(v_vals_145_);
lean_dec_ref(v_keys_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_150_, lean_object* v_x_151_, lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
size_t v_x_1116__boxed_155_; size_t v_x_1117__boxed_156_; lean_object* v_res_157_; 
v_x_1116__boxed_155_ = lean_unbox_usize(v_x_151_);
lean_dec(v_x_151_);
v_x_1117__boxed_156_ = lean_unbox_usize(v_x_152_);
lean_dec(v_x_152_);
v_res_157_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_150_, v_x_1116__boxed_155_, v_x_1117__boxed_156_, v_x_153_, v_x_154_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object* v_x_158_, lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
uint64_t v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; 
v___x_161_ = l_Lean_instHashableMVarId_hash(v_x_159_);
v___x_162_ = lean_uint64_to_usize(v___x_161_);
v___x_163_ = ((size_t)1ULL);
v___x_164_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_158_, v___x_162_, v___x_163_, v_x_159_, v_x_160_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object* v_mvarId_165_, lean_object* v_val_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_mctx_170_; lean_object* v_cache_171_; lean_object* v_zetaDeltaFVarIds_172_; lean_object* v_postponed_173_; lean_object* v_diag_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_202_; 
v___x_169_ = lean_st_ref_take(v___y_167_);
v_mctx_170_ = lean_ctor_get(v___x_169_, 0);
v_cache_171_ = lean_ctor_get(v___x_169_, 1);
v_zetaDeltaFVarIds_172_ = lean_ctor_get(v___x_169_, 2);
v_postponed_173_ = lean_ctor_get(v___x_169_, 3);
v_diag_174_ = lean_ctor_get(v___x_169_, 4);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_202_ == 0)
{
v___x_176_ = v___x_169_;
v_isShared_177_ = v_isSharedCheck_202_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_diag_174_);
lean_inc(v_postponed_173_);
lean_inc(v_zetaDeltaFVarIds_172_);
lean_inc(v_cache_171_);
lean_inc(v_mctx_170_);
lean_dec(v___x_169_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_202_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v_depth_178_; lean_object* v_levelAssignDepth_179_; lean_object* v_lmvarCounter_180_; lean_object* v_mvarCounter_181_; lean_object* v_lDecls_182_; lean_object* v_decls_183_; lean_object* v_userNames_184_; lean_object* v_lAssignment_185_; lean_object* v_eAssignment_186_; lean_object* v_dAssignment_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_201_; 
v_depth_178_ = lean_ctor_get(v_mctx_170_, 0);
v_levelAssignDepth_179_ = lean_ctor_get(v_mctx_170_, 1);
v_lmvarCounter_180_ = lean_ctor_get(v_mctx_170_, 2);
v_mvarCounter_181_ = lean_ctor_get(v_mctx_170_, 3);
v_lDecls_182_ = lean_ctor_get(v_mctx_170_, 4);
v_decls_183_ = lean_ctor_get(v_mctx_170_, 5);
v_userNames_184_ = lean_ctor_get(v_mctx_170_, 6);
v_lAssignment_185_ = lean_ctor_get(v_mctx_170_, 7);
v_eAssignment_186_ = lean_ctor_get(v_mctx_170_, 8);
v_dAssignment_187_ = lean_ctor_get(v_mctx_170_, 9);
v_isSharedCheck_201_ = !lean_is_exclusive(v_mctx_170_);
if (v_isSharedCheck_201_ == 0)
{
v___x_189_ = v_mctx_170_;
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_dAssignment_187_);
lean_inc(v_eAssignment_186_);
lean_inc(v_lAssignment_185_);
lean_inc(v_userNames_184_);
lean_inc(v_decls_183_);
lean_inc(v_lDecls_182_);
lean_inc(v_mvarCounter_181_);
lean_inc(v_lmvarCounter_180_);
lean_inc(v_levelAssignDepth_179_);
lean_inc(v_depth_178_);
lean_dec(v_mctx_170_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_191_ = lean_box(0);
v___x_192_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_eAssignment_186_, v_mvarId_165_, v_val_166_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 8, v___x_192_);
v___x_194_ = v___x_189_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_depth_178_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_levelAssignDepth_179_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_lmvarCounter_180_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v_mvarCounter_181_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v_lDecls_182_);
lean_ctor_set(v_reuseFailAlloc_200_, 5, v_decls_183_);
lean_ctor_set(v_reuseFailAlloc_200_, 6, v_userNames_184_);
lean_ctor_set(v_reuseFailAlloc_200_, 7, v_lAssignment_185_);
lean_ctor_set(v_reuseFailAlloc_200_, 8, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_200_, 9, v_dAssignment_187_);
v___x_194_ = v_reuseFailAlloc_200_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_196_; 
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_194_);
v___x_196_ = v___x_176_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_cache_171_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_zetaDeltaFVarIds_172_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_postponed_173_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_diag_174_);
v___x_196_ = v_reuseFailAlloc_199_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_st_ref_put(v___y_167_, v___x_196_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_191_);
return v___x_198_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object* v_mvarId_203_, lean_object* v_val_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_203_, v_val_204_, v___y_205_);
lean_dec(v___y_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object* v_mvarId_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___f_215_; lean_object* v___x_216_; 
v___f_215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0));
lean_inc(v_mvarId_209_);
v___x_216_ = l_Lean_MVarId_getType(v_mvarId_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_260_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_260_ == 0)
{
v___x_219_ = v___x_216_;
v_isShared_220_ = v_isSharedCheck_260_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_260_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; 
v___x_221_ = lean_find_expr(v___f_215_, v_a_217_);
lean_dec(v_a_217_);
if (lean_obj_tag(v___x_221_) == 1)
{
lean_object* v_val_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
lean_del_object(v___x_219_);
v_val_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_val_222_);
lean_dec_ref_known(v___x_221_, 1);
v___x_223_ = l_Lean_Expr_appArg_x21(v_val_222_);
lean_dec(v_val_222_);
lean_inc(v_mvarId_209_);
v___x_224_ = l_Lean_MVarId_getType(v_mvarId_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_Meta_mkFalseElim(v_a_225_, v___x_223_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_237_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_209_, v_a_227_, v_a_211_);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v___x_228_, 0);
lean_dec(v_unused_238_);
v___x_230_ = v___x_228_;
v_isShared_231_ = v_isSharedCheck_237_;
goto v_resetjp_229_;
}
else
{
lean_dec(v___x_228_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_237_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_232_ = 1;
v___x_233_ = lean_box(v___x_232_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_233_);
v___x_235_ = v___x_230_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec(v_mvarId_209_);
v_a_239_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_226_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_226_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v___x_223_);
lean_dec(v_mvarId_209_);
v_a_247_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_224_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_224_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
else
{
uint8_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_258_; 
lean_dec(v___x_221_);
lean_dec(v_mvarId_209_);
v___x_255_ = 0;
v___x_256_ = lean_box(v___x_255_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_256_);
v___x_258_ = v___x_219_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec(v_mvarId_209_);
v_a_261_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_216_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_216_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object* v_mvarId_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_);
lean_dec(v_a_273_);
lean_dec_ref(v_a_272_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object* v_mvarId_276_, lean_object* v_val_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_276_, v_val_277_, v___y_279_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object* v_mvarId_284_, lean_object* v_val_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(v_mvarId_284_, v_val_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object* v_00_u03b2_292_, lean_object* v_x_293_, lean_object* v_x_294_, lean_object* v_x_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_x_293_, v_x_294_, v_x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_297_, lean_object* v_x_298_, size_t v_x_299_, size_t v_x_300_, lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_298_, v_x_299_, v_x_300_, v_x_301_, v_x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_304_, lean_object* v_x_305_, lean_object* v_x_306_, lean_object* v_x_307_, lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
size_t v_x_1467__boxed_310_; size_t v_x_1468__boxed_311_; lean_object* v_res_312_; 
v_x_1467__boxed_310_ = lean_unbox_usize(v_x_306_);
lean_dec(v_x_306_);
v_x_1468__boxed_311_ = lean_unbox_usize(v_x_307_);
lean_dec(v_x_307_);
v_res_312_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(v_00_u03b2_304_, v_x_305_, v_x_1467__boxed_310_, v_x_1468__boxed_311_, v_x_308_, v_x_309_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_313_, lean_object* v_n_314_, lean_object* v_k_315_, lean_object* v_v_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v_n_314_, v_k_315_, v_v_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_318_, size_t v_depth_319_, lean_object* v_keys_320_, lean_object* v_vals_321_, lean_object* v_heq_322_, lean_object* v_i_323_, lean_object* v_entries_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_319_, v_keys_320_, v_vals_321_, v_i_323_, v_entries_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_326_, lean_object* v_depth_327_, lean_object* v_keys_328_, lean_object* v_vals_329_, lean_object* v_heq_330_, lean_object* v_i_331_, lean_object* v_entries_332_){
_start:
{
size_t v_depth_boxed_333_; lean_object* v_res_334_; 
v_depth_boxed_333_ = lean_unbox_usize(v_depth_327_);
lean_dec(v_depth_327_);
v_res_334_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_326_, v_depth_boxed_333_, v_keys_328_, v_vals_329_, v_heq_330_, v_i_331_, v_entries_332_);
lean_dec_ref(v_vals_329_);
lean_dec_ref(v_keys_328_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_335_, lean_object* v_x_336_, lean_object* v_x_337_, lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_336_, v_x_337_, v_x_338_, v_x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object* v_fvarId_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_FVarId_getType___redArg(v_fvarId_341_, v_a_342_, v_a_344_, v_a_345_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_353_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = l_Lean_Meta_whnfD(v_a_352_, v_a_342_, v_a_343_, v_a_344_, v_a_345_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_380_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_380_ == 0)
{
v___x_356_ = v___x_353_;
v_isShared_357_ = v_isSharedCheck_380_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_353_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_380_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_Expr_getAppFn(v_a_354_);
lean_dec(v_a_354_);
if (lean_obj_tag(v___x_358_) == 4)
{
lean_object* v_declName_359_; lean_object* v___x_360_; lean_object* v_env_361_; uint8_t v___x_362_; lean_object* v___x_363_; 
v_declName_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_declName_359_);
lean_dec_ref_known(v___x_358_, 2);
v___x_360_ = lean_st_ref_get(v_a_345_);
v_env_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc_ref(v_env_361_);
lean_dec(v___x_360_);
v___x_362_ = 0;
v___x_363_ = l_Lean_Environment_find_x3f(v_env_361_, v_declName_359_, v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_del_object(v___x_356_);
goto v___jp_347_;
}
else
{
lean_object* v_val_364_; 
v_val_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_val_364_);
lean_dec_ref_known(v___x_363_, 1);
if (lean_obj_tag(v_val_364_) == 5)
{
lean_object* v_val_365_; lean_object* v_numIndices_366_; lean_object* v_ctors_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; 
v_val_365_ = lean_ctor_get(v_val_364_, 0);
lean_inc_ref(v_val_365_);
lean_dec_ref_known(v_val_364_, 1);
v_numIndices_366_ = lean_ctor_get(v_val_365_, 2);
lean_inc(v_numIndices_366_);
v_ctors_367_ = lean_ctor_get(v_val_365_, 4);
lean_inc(v_ctors_367_);
lean_dec_ref(v_val_365_);
v___x_368_ = l_List_lengthTR___redArg(v_ctors_367_);
lean_dec(v_ctors_367_);
v___x_369_ = lean_unsigned_to_nat(0u);
v___x_370_ = lean_nat_dec_eq(v___x_368_, v___x_369_);
lean_dec(v___x_368_);
if (v___x_370_ == 0)
{
uint8_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_371_ = lean_nat_dec_lt(v___x_369_, v_numIndices_366_);
lean_dec(v_numIndices_366_);
v___x_372_ = lean_box(v___x_371_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_372_);
v___x_374_ = v___x_356_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
else
{
lean_object* v___x_376_; lean_object* v___x_378_; 
lean_dec(v_numIndices_366_);
v___x_376_ = lean_box(v___x_370_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_376_);
v___x_378_ = v___x_356_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
else
{
lean_dec(v_val_364_);
lean_del_object(v___x_356_);
goto v___jp_347_;
}
}
}
else
{
lean_dec_ref(v___x_358_);
lean_del_object(v___x_356_);
goto v___jp_347_;
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_a_381_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_353_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_353_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
v_a_389_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_351_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_351_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
v___jp_347_:
{
uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = 0;
v___x_349_ = lean_box(v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object* v_fvarId_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
lean_dec(v_a_399_);
lean_dec_ref(v_a_398_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object* v_s_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Meta_SavedState_restore___redArg(v_s_404_, v___y_407_, v___y_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object* v_s_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(v_s_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object* v_x_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
lean_inc(v___y_429_);
v___x_435_ = lean_apply_6(v_x_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, lean_box(0));
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object* v_x_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(v_x_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_437_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object* v_mvarId_444_, lean_object* v_x_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___f_452_; lean_object* v___x_453_; 
lean_inc(v___y_446_);
v___f_452_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_452_, 0, v_x_445_);
lean_closure_set(v___f_452_, 1, v___y_446_);
v___x_453_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_444_, v___f_452_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
if (lean_obj_tag(v___x_453_) == 0)
{
return v___x_453_;
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object* v_mvarId_462_, lean_object* v_x_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_462_, v_x_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object* v_00_u03b1_471_, lean_object* v_mvarId_472_, lean_object* v_x_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_472_, v_x_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object* v_00_u03b1_481_, lean_object* v_mvarId_482_, lean_object* v_x_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(v_00_u03b1_481_, v_mvarId_482_, v_x_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object* v_x_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_Meta_saveState___redArg(v___y_494_, v___y_496_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___y_501_; lean_object* v_a_502_; lean_object* v___x_522_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref_known(v___x_498_, 1);
lean_inc(v___y_496_);
lean_inc_ref(v___y_495_);
lean_inc(v___y_494_);
lean_inc_ref(v___y_493_);
lean_inc(v___y_492_);
v___x_522_ = lean_apply_6(v_x_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, lean_box(0));
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; uint8_t v___x_524_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_523_);
v___x_524_ = lean_unbox(v_a_523_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; 
lean_dec_ref_known(v___x_522_, 1);
lean_inc(v_a_499_);
v___x_525_ = l_Lean_Meta_SavedState_restore___redArg(v_a_499_, v___y_494_, v___y_496_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec(v_a_499_);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v___x_525_, 0);
lean_dec(v_unused_533_);
v___x_527_ = v___x_525_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_dec(v___x_525_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v_a_523_);
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_523_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v_a_523_);
v_a_534_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_525_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_525_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
lean_inc(v_a_534_);
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
v___y_501_ = v___x_539_;
v_a_502_ = v_a_534_;
goto v___jp_500_;
}
}
}
}
else
{
lean_dec(v_a_523_);
lean_dec(v_a_499_);
return v___x_522_;
}
}
else
{
lean_object* v_a_542_; 
v_a_542_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_542_);
v___y_501_ = v___x_522_;
v_a_502_ = v_a_542_;
goto v___jp_500_;
}
v___jp_500_:
{
uint8_t v___x_503_; 
v___x_503_ = l_Lean_Exception_isInterrupt(v_a_502_);
if (v___x_503_ == 0)
{
uint8_t v___x_504_; 
lean_inc_ref(v_a_502_);
v___x_504_ = l_Lean_Exception_isRuntime(v_a_502_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec_ref(v___y_501_);
v___x_505_ = l_Lean_Meta_SavedState_restore___redArg(v_a_499_, v___y_494_, v___y_496_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_512_ == 0)
{
lean_object* v_unused_513_; 
v_unused_513_ = lean_ctor_get(v___x_505_, 0);
lean_dec(v_unused_513_);
v___x_507_ = v___x_505_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_dec(v___x_505_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set_tag(v___x_507_, 1);
lean_ctor_set(v___x_507_, 0, v_a_502_);
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_502_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v_a_502_);
v_a_514_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_505_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_505_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
else
{
lean_dec_ref(v_a_502_);
lean_dec(v_a_499_);
return v___y_501_;
}
}
else
{
lean_dec_ref(v_a_502_);
lean_dec(v_a_499_);
return v___y_501_;
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v_x_491_);
v_a_543_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_498_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_498_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object* v_x_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v_x_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object* v_msgData_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; lean_object* v_env_566_; uint8_t v___x_567_; lean_object* v_env_568_; lean_object* v___x_569_; lean_object* v_toCold_570_; lean_object* v_mctx_571_; lean_object* v_lctx_572_; lean_object* v_options_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_565_ = lean_st_ref_get(v___y_563_);
v_env_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc_ref(v_env_566_);
lean_dec(v___x_565_);
v___x_567_ = 0;
v_env_568_ = l_Lean_Environment_setRecordingDeps(v_env_566_, v___x_567_);
v___x_569_ = lean_st_ref_get(v___y_561_);
v_toCold_570_ = lean_ctor_get(v___y_562_, 0);
v_mctx_571_ = lean_ctor_get(v___x_569_, 0);
lean_inc_ref(v_mctx_571_);
lean_dec(v___x_569_);
v_lctx_572_ = lean_ctor_get(v___y_560_, 2);
v_options_573_ = lean_ctor_get(v_toCold_570_, 2);
lean_inc_ref(v_options_573_);
lean_inc_ref(v_lctx_572_);
v___x_574_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_574_, 0, v_env_568_);
lean_ctor_set(v___x_574_, 1, v_mctx_571_);
lean_ctor_set(v___x_574_, 2, v_lctx_572_);
lean_ctor_set(v___x_574_, 3, v_options_573_);
v___x_575_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
lean_ctor_set(v___x_575_, 1, v_msgData_559_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object* v_msgData_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msgData_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
return v_res_583_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_584_; double v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = lean_float_of_nat(v___x_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object* v_cls_589_, lean_object* v_msg_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_ref_596_; lean_object* v___x_597_; lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_643_; 
v_ref_596_ = lean_ctor_get(v___y_593_, 2);
v___x_597_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msg_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_643_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_643_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_643_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v_traceState_603_; lean_object* v_env_604_; lean_object* v_nextMacroScope_605_; lean_object* v_ngen_606_; lean_object* v_auxDeclNGen_607_; lean_object* v_cache_608_; lean_object* v_recordedDeps_609_; lean_object* v_messages_610_; lean_object* v_infoState_611_; lean_object* v_snapshotTasks_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_642_; 
v___x_602_ = lean_st_ref_take(v___y_594_);
v_traceState_603_ = lean_ctor_get(v___x_602_, 4);
v_env_604_ = lean_ctor_get(v___x_602_, 0);
v_nextMacroScope_605_ = lean_ctor_get(v___x_602_, 1);
v_ngen_606_ = lean_ctor_get(v___x_602_, 2);
v_auxDeclNGen_607_ = lean_ctor_get(v___x_602_, 3);
v_cache_608_ = lean_ctor_get(v___x_602_, 5);
v_recordedDeps_609_ = lean_ctor_get(v___x_602_, 6);
v_messages_610_ = lean_ctor_get(v___x_602_, 7);
v_infoState_611_ = lean_ctor_get(v___x_602_, 8);
v_snapshotTasks_612_ = lean_ctor_get(v___x_602_, 9);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_642_ == 0)
{
v___x_614_ = v___x_602_;
v_isShared_615_ = v_isSharedCheck_642_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_snapshotTasks_612_);
lean_inc(v_infoState_611_);
lean_inc(v_messages_610_);
lean_inc(v_recordedDeps_609_);
lean_inc(v_cache_608_);
lean_inc(v_traceState_603_);
lean_inc(v_auxDeclNGen_607_);
lean_inc(v_ngen_606_);
lean_inc(v_nextMacroScope_605_);
lean_inc(v_env_604_);
lean_dec(v___x_602_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_642_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
uint64_t v_tid_616_; lean_object* v_traces_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_641_; 
v_tid_616_ = lean_ctor_get_uint64(v_traceState_603_, sizeof(void*)*1);
v_traces_617_ = lean_ctor_get(v_traceState_603_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v_traceState_603_);
if (v_isSharedCheck_641_ == 0)
{
v___x_619_ = v_traceState_603_;
v_isShared_620_ = v_isSharedCheck_641_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_traces_617_);
lean_dec(v_traceState_603_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_641_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_622_; double v___x_623_; uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_621_ = lean_box(0);
v___x_622_ = lean_box(0);
v___x_623_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0);
v___x_624_ = 0;
v___x_625_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1));
v___x_626_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_626_, 0, v_cls_589_);
lean_ctor_set(v___x_626_, 1, v___x_622_);
lean_ctor_set(v___x_626_, 2, v___x_625_);
lean_ctor_set_float(v___x_626_, sizeof(void*)*3, v___x_623_);
lean_ctor_set_float(v___x_626_, sizeof(void*)*3 + 8, v___x_623_);
lean_ctor_set_uint8(v___x_626_, sizeof(void*)*3 + 16, v___x_624_);
v___x_627_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2));
v___x_628_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v_a_598_);
lean_ctor_set(v___x_628_, 2, v___x_627_);
lean_inc(v_ref_596_);
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v_ref_596_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = l_Lean_PersistentArray_push___redArg(v_traces_617_, v___x_629_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_630_);
v___x_632_ = v___x_619_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_630_);
lean_ctor_set_uint64(v_reuseFailAlloc_640_, sizeof(void*)*1, v_tid_616_);
v___x_632_ = v_reuseFailAlloc_640_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_634_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 4, v___x_632_);
v___x_634_ = v___x_614_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_env_604_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_nextMacroScope_605_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v_ngen_606_);
lean_ctor_set(v_reuseFailAlloc_639_, 3, v_auxDeclNGen_607_);
lean_ctor_set(v_reuseFailAlloc_639_, 4, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_639_, 5, v_cache_608_);
lean_ctor_set(v_reuseFailAlloc_639_, 6, v_recordedDeps_609_);
lean_ctor_set(v_reuseFailAlloc_639_, 7, v_messages_610_);
lean_ctor_set(v_reuseFailAlloc_639_, 8, v_infoState_611_);
lean_ctor_set(v_reuseFailAlloc_639_, 9, v_snapshotTasks_612_);
v___x_634_ = v_reuseFailAlloc_639_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_635_ = lean_st_ref_put(v___y_594_, v___x_634_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_621_);
v___x_637_ = v___x_600_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_621_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object* v_cls_644_, lean_object* v_msg_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_644_, v_msg_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object* v_toInductionSubgoal_659_, lean_object* v_mvarId_660_, lean_object* v_fields_661_, lean_object* v_sz_662_, lean_object* v___x_663_, lean_object* v___x_664_, lean_object* v___x_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
size_t v_sz_boxed_672_; size_t v___x_16000__boxed_673_; uint8_t v___x_16002__boxed_674_; lean_object* v_res_675_; 
v_sz_boxed_672_ = lean_unbox_usize(v_sz_662_);
lean_dec(v_sz_662_);
v___x_16000__boxed_673_ = lean_unbox_usize(v___x_663_);
lean_dec(v___x_663_);
v___x_16002__boxed_674_ = lean_unbox(v___x_665_);
v_res_675_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(v_toInductionSubgoal_659_, v_mvarId_660_, v_fields_661_, v_sz_boxed_672_, v___x_16000__boxed_673_, v___x_664_, v___x_16002__boxed_674_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v_fields_661_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object* v_val_676_, lean_object* v_as_677_, size_t v_sz_678_, size_t v_i_679_, lean_object* v_b_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
uint8_t v___x_687_; 
v___x_687_ = lean_usize_dec_lt(v_i_679_, v_sz_678_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; 
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v_b_680_);
return v___x_688_;
}
else
{
lean_object* v_a_689_; lean_object* v_toInductionSubgoal_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_731_; 
lean_dec_ref(v_b_680_);
v_a_689_ = lean_array_uget(v_as_677_, v_i_679_);
v_toInductionSubgoal_690_ = lean_ctor_get(v_a_689_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_a_689_);
if (v_isSharedCheck_731_ == 0)
{
lean_object* v_unused_732_; 
v_unused_732_ = lean_ctor_get(v_a_689_, 1);
lean_dec(v_unused_732_);
v___x_692_ = v_a_689_;
v_isShared_693_ = v_isSharedCheck_731_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_toInductionSubgoal_690_);
lean_dec(v_a_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_731_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v_mvarId_694_; lean_object* v_fields_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; size_t v_sz_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___f_704_; lean_object* v___x_705_; 
v_mvarId_694_ = lean_ctor_get(v_toInductionSubgoal_690_, 0);
lean_inc_n(v_mvarId_694_, 2);
v_fields_695_ = lean_ctor_get(v_toInductionSubgoal_690_, 1);
lean_inc_ref(v_fields_695_);
v___x_696_ = lean_box(0);
v___x_697_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = lean_nat_dec_eq(v_val_676_, v___x_698_);
v_sz_700_ = lean_array_size(v_fields_695_);
v___x_701_ = lean_box_usize(v_sz_700_);
v___x_702_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1));
v___x_703_ = lean_box(v___x_699_);
v___f_704_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed), 13, 7);
lean_closure_set(v___f_704_, 0, v_toInductionSubgoal_690_);
lean_closure_set(v___f_704_, 1, v_mvarId_694_);
lean_closure_set(v___f_704_, 2, v_fields_695_);
lean_closure_set(v___f_704_, 3, v___x_701_);
lean_closure_set(v___f_704_, 4, v___x_702_);
lean_closure_set(v___f_704_, 5, v___x_697_);
lean_closure_set(v___f_704_, 6, v___x_703_);
v___x_705_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_694_, v___f_704_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_722_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_722_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_722_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_722_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
uint8_t v___x_710_; 
v___x_710_ = lean_unbox(v_a_706_);
lean_dec(v_a_706_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_711_ = lean_box(v___x_699_);
v___x_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 1, v___x_696_);
lean_ctor_set(v___x_692_, 0, v___x_712_);
v___x_714_ = v___x_692_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_712_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_696_);
v___x_714_ = v_reuseFailAlloc_718_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_716_; 
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_714_);
v___x_716_ = v___x_708_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
size_t v___x_719_; size_t v___x_720_; 
lean_del_object(v___x_708_);
lean_del_object(v___x_692_);
v___x_719_ = ((size_t)1ULL);
v___x_720_ = lean_usize_add(v_i_679_, v___x_719_);
v_i_679_ = v___x_720_;
v_b_680_ = v___x_697_;
goto _start;
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_del_object(v___x_692_);
v_a_723_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_705_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_705_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7(void){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_743_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_744_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__6));
v___x_745_ = l_Lean_Name_append(v___x_744_, v___x_743_);
return v___x_745_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0));
v___x_748_ = l_Lean_stringToMessageData(v___x_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object* v_mvarId_749_, lean_object* v_fvarId_750_, lean_object* v___x_751_, uint8_t v___x_752_, lean_object* v___x_753_, lean_object* v_val_754_, uint8_t v___x_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_MVarId_cases(v_mvarId_749_, v_fvarId_750_, v___x_751_, v___x_752_, v___x_753_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v_toCold_796_; lean_object* v_options_797_; uint8_t v_hasTrace_798_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v_toCold_796_ = lean_ctor_get(v___y_759_, 0);
v_options_797_ = lean_ctor_get(v_toCold_796_, 2);
v_hasTrace_798_ = lean_ctor_get_uint8(v_options_797_, sizeof(void*)*1);
if (v_hasTrace_798_ == 0)
{
v___y_765_ = v___y_756_;
v___y_766_ = v___y_757_;
v___y_767_ = v___y_758_;
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
goto v___jp_764_;
}
else
{
lean_object* v_inheritedTraceOptions_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v_inheritedTraceOptions_799_ = lean_ctor_get(v_toCold_796_, 11);
v___x_800_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_801_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_802_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_799_, v_options_797_, v___x_801_);
if (v___x_802_ == 0)
{
v___y_765_ = v___y_756_;
v___y_766_ = v___y_757_;
v___y_767_ = v___y_758_;
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
goto v___jp_764_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_803_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1, &l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1);
v___x_804_ = lean_array_get_size(v_a_763_);
v___x_805_ = l_Nat_reprFast(v___x_804_);
v___x_806_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
v___x_807_ = l_Lean_MessageData_ofFormat(v___x_806_);
v___x_808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_803_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_800_, v___x_808_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_dec_ref_known(v___x_809_, 1);
v___y_765_ = v___y_756_;
v___y_766_ = v___y_757_;
v___y_767_ = v___y_758_;
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
goto v___jp_764_;
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec(v_a_763_);
v_a_810_ = lean_ctor_get(v___x_809_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_809_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_809_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
v___jp_764_:
{
lean_object* v___x_770_; size_t v_sz_771_; size_t v___x_772_; lean_object* v___x_773_; 
v___x_770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_sz_771_ = lean_array_size(v_a_763_);
v___x_772_ = ((size_t)0ULL);
v___x_773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_754_, v_a_763_, v_sz_771_, v___x_772_, v___x_770_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v_a_763_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_787_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_787_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_787_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_787_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v_fst_778_; 
v_fst_778_ = lean_ctor_get(v_a_774_, 0);
lean_inc(v_fst_778_);
lean_dec(v_a_774_);
if (lean_obj_tag(v_fst_778_) == 0)
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_box(v___x_755_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_779_);
v___x_781_ = v___x_776_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
else
{
lean_object* v_val_783_; lean_object* v___x_785_; 
v_val_783_ = lean_ctor_get(v_fst_778_, 0);
lean_inc(v_val_783_);
lean_dec_ref_known(v_fst_778_, 1);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v_val_783_);
v___x_785_ = v___x_776_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_val_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
v_a_788_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_773_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_773_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_864_; 
v_a_818_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_864_ == 0)
{
v___x_820_ = v___x_762_;
v_isShared_821_ = v_isSharedCheck_864_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_762_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_864_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
uint8_t v___x_822_; 
v___x_822_ = l_Lean_Exception_isInterrupt(v_a_818_);
if (v___x_822_ == 0)
{
uint8_t v___x_823_; 
lean_inc(v_a_818_);
v___x_823_ = l_Lean_Exception_isRuntime(v_a_818_);
if (v___x_823_ == 0)
{
lean_object* v_toCold_824_; lean_object* v_options_825_; uint8_t v_hasTrace_826_; 
v_toCold_824_ = lean_ctor_get(v___y_759_, 0);
v_options_825_ = lean_ctor_get(v_toCold_824_, 2);
v_hasTrace_826_ = lean_ctor_get_uint8(v_options_825_, sizeof(void*)*1);
if (v_hasTrace_826_ == 0)
{
lean_object* v___x_827_; lean_object* v___x_829_; 
lean_dec(v_a_818_);
v___x_827_ = lean_box(v___x_752_);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 0);
lean_ctor_set(v___x_820_, 0, v___x_827_);
v___x_829_ = v___x_820_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
else
{
lean_object* v_inheritedTraceOptions_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v_inheritedTraceOptions_831_ = lean_ctor_get(v_toCold_824_, 11);
v___x_832_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_833_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_834_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_831_, v_options_825_, v___x_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v___x_837_; 
lean_dec(v_a_818_);
v___x_835_ = lean_box(v___x_752_);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 0);
lean_ctor_set(v___x_820_, 0, v___x_835_);
v___x_837_ = v___x_820_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; 
lean_del_object(v___x_820_);
v___x_839_ = l_Lean_Exception_toMessageData(v_a_818_);
v___x_840_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_832_, v___x_839_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_848_; 
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_848_ == 0)
{
lean_object* v_unused_849_; 
v_unused_849_ = lean_ctor_get(v___x_840_, 0);
lean_dec(v_unused_849_);
v___x_842_ = v___x_840_;
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
else
{
lean_dec(v___x_840_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_844_ = lean_box(v___x_752_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_844_);
v___x_846_ = v___x_842_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_840_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_840_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
}
else
{
lean_object* v___x_859_; 
if (v_isShared_821_ == 0)
{
v___x_859_ = v___x_820_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_818_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
else
{
lean_object* v___x_862_; 
if (v_isShared_821_ == 0)
{
v___x_862_ = v___x_820_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_818_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object* v_mvarId_865_, lean_object* v_fvarId_866_, lean_object* v___x_867_, lean_object* v___x_868_, lean_object* v___x_869_, lean_object* v_val_870_, lean_object* v___x_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v___x_16122__boxed_878_; uint8_t v___x_16125__boxed_879_; lean_object* v_res_880_; 
v___x_16122__boxed_878_ = lean_unbox(v___x_868_);
v___x_16125__boxed_879_ = lean_unbox(v___x_871_);
v_res_880_ = l_Lean_Meta_ElimEmptyInductive_elim___lam__0(v_mvarId_865_, v_fvarId_866_, v___x_867_, v___x_16122__boxed_878_, v___x_869_, v_val_870_, v___x_16125__boxed_879_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec(v_val_870_);
return v_res_880_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__8));
v___x_883_ = l_Lean_stringToMessageData(v___x_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object* v_mvarId_884_, lean_object* v_fvarId_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_896_ = lean_st_ref_get(v_a_886_);
v___x_897_ = lean_unsigned_to_nat(0u);
v___x_898_ = lean_nat_dec_eq(v___x_896_, v___x_897_);
if (v___x_898_ == 0)
{
uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___f_908_; lean_object* v___x_909_; 
v___x_899_ = 1;
v___x_900_ = lean_st_ref_take(v_a_886_);
v___x_901_ = lean_unsigned_to_nat(1u);
v___x_902_ = lean_nat_sub(v___x_900_, v___x_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_st_ref_put(v_a_886_, v___x_902_);
v___x_904_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__0));
v___x_905_ = lean_box(0);
v___x_906_ = lean_box(v___x_898_);
v___x_907_ = lean_box(v___x_899_);
v___f_908_ = lean_alloc_closure((void*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed), 13, 7);
lean_closure_set(v___f_908_, 0, v_mvarId_884_);
lean_closure_set(v___f_908_, 1, v_fvarId_885_);
lean_closure_set(v___f_908_, 2, v___x_904_);
lean_closure_set(v___f_908_, 3, v___x_906_);
lean_closure_set(v___f_908_, 4, v___x_905_);
lean_closure_set(v___f_908_, 5, v___x_896_);
lean_closure_set(v___f_908_, 6, v___x_907_);
v___x_909_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v___f_908_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_);
return v___x_909_;
}
else
{
lean_object* v_toCold_910_; lean_object* v_options_911_; uint8_t v_hasTrace_912_; 
lean_dec(v___x_896_);
lean_dec(v_fvarId_885_);
lean_dec(v_mvarId_884_);
v_toCold_910_ = lean_ctor_get(v_a_889_, 0);
v_options_911_ = lean_ctor_get(v_toCold_910_, 2);
v_hasTrace_912_ = lean_ctor_get_uint8(v_options_911_, sizeof(void*)*1);
if (v_hasTrace_912_ == 0)
{
goto v___jp_892_;
}
else
{
lean_object* v_inheritedTraceOptions_913_; lean_object* v___x_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v_inheritedTraceOptions_913_ = lean_ctor_get(v_toCold_910_, 11);
v___x_914_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_915_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_916_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_913_, v_options_911_, v___x_915_);
if (v___x_916_ == 0)
{
goto v___jp_892_;
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__9, &l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9);
v___x_918_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_914_, v___x_917_, v_a_887_, v_a_888_, v_a_889_, v_a_890_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_dec_ref_known(v___x_918_, 1);
goto v___jp_892_;
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_918_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_918_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
}
v___jp_892_:
{
uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = 0;
v___x_894_ = lean_box(v___x_893_);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object* v___x_927_, lean_object* v___x_928_, lean_object* v_as_929_, size_t v_sz_930_, size_t v_i_931_, lean_object* v_b_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_a_940_; uint8_t v___x_944_; 
v___x_944_ = lean_usize_dec_lt(v_i_931_, v_sz_930_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; 
lean_dec(v___x_928_);
lean_dec_ref(v___x_927_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v_b_932_);
return v___x_945_;
}
else
{
lean_object* v_subst_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v_a_949_; lean_object* v___x_950_; uint8_t v___x_951_; 
lean_dec_ref(v_b_932_);
v_subst_946_ = lean_ctor_get(v___x_927_, 2);
v___x_947_ = lean_box(0);
v___x_948_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_a_949_ = lean_array_uget_borrowed(v_as_929_, v_i_931_);
lean_inc(v_subst_946_);
v___x_950_ = l_Lean_Meta_FVarSubst_apply(v_subst_946_, v_a_949_);
v___x_951_ = l_Lean_Expr_isFVar(v___x_950_);
if (v___x_951_ == 0)
{
lean_dec_ref(v___x_950_);
v_a_940_ = v___x_948_;
goto v___jp_939_;
}
else
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = l_Lean_Expr_fvarId_x21(v___x_950_);
lean_dec_ref(v___x_950_);
lean_inc(v___x_952_);
v___x_953_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v___x_952_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; uint8_t v___x_955_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = lean_unbox(v_a_954_);
lean_dec(v_a_954_);
if (v___x_955_ == 0)
{
lean_dec(v___x_952_);
v_a_940_ = v___x_948_;
goto v___jp_939_;
}
else
{
lean_object* v___x_956_; 
lean_inc(v___x_928_);
v___x_956_ = l_Lean_Meta_ElimEmptyInductive_elim(v___x_928_, v___x_952_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_968_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_968_ == 0)
{
v___x_959_ = v___x_956_;
v_isShared_960_ = v_isSharedCheck_968_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_956_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_968_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
uint8_t v___x_961_; 
v___x_961_ = lean_unbox(v_a_957_);
lean_dec(v_a_957_);
if (v___x_961_ == 0)
{
lean_del_object(v___x_959_);
v_a_940_ = v___x_948_;
goto v___jp_939_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_966_; 
lean_dec(v___x_928_);
lean_dec_ref(v___x_927_);
v___x_962_ = lean_box(v___x_951_);
v___x_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v___x_947_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_964_);
v___x_966_ = v___x_959_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_dec(v___x_928_);
lean_dec_ref(v___x_927_);
v_a_969_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_956_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_956_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec(v___x_952_);
lean_dec(v___x_928_);
lean_dec_ref(v___x_927_);
v_a_977_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_953_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_953_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
v___jp_939_:
{
size_t v___x_941_; size_t v___x_942_; 
v___x_941_ = ((size_t)1ULL);
v___x_942_ = lean_usize_add(v_i_931_, v___x_941_);
lean_inc_ref(v_a_940_);
v_i_931_ = v___x_942_;
v_b_932_ = v_a_940_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object* v_toInductionSubgoal_985_, lean_object* v_mvarId_986_, lean_object* v_fields_987_, size_t v_sz_988_, size_t v___x_989_, lean_object* v___x_990_, uint8_t v___x_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v_toInductionSubgoal_985_, v_mvarId_986_, v_fields_987_, v_sz_988_, v___x_989_, v___x_990_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1012_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1012_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1012_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v_fst_1003_; 
v_fst_1003_ = lean_ctor_get(v_a_999_, 0);
lean_inc(v_fst_1003_);
lean_dec(v_a_999_);
if (lean_obj_tag(v_fst_1003_) == 0)
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1004_ = lean_box(v___x_991_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1004_);
v___x_1006_ = v___x_1001_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
else
{
lean_object* v_val_1008_; lean_object* v___x_1010_; 
v_val_1008_ = lean_ctor_get(v_fst_1003_, 0);
lean_inc(v_val_1008_);
lean_dec_ref_known(v_fst_1003_, 1);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v_val_1008_);
v___x_1010_ = v___x_1001_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_val_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_a_1013_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_998_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_998_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object* v_val_1021_, lean_object* v_as_1022_, lean_object* v_sz_1023_, lean_object* v_i_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
size_t v_sz_boxed_1032_; size_t v_i_boxed_1033_; lean_object* v_res_1034_; 
v_sz_boxed_1032_ = lean_unbox_usize(v_sz_1023_);
lean_dec(v_sz_1023_);
v_i_boxed_1033_ = lean_unbox_usize(v_i_1024_);
lean_dec(v_i_1024_);
v_res_1034_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_1021_, v_as_1022_, v_sz_boxed_1032_, v_i_boxed_1033_, v_b_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v_as_1022_);
lean_dec(v_val_1021_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object* v___x_1035_, lean_object* v___x_1036_, lean_object* v_as_1037_, lean_object* v_sz_1038_, lean_object* v_i_1039_, lean_object* v_b_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
size_t v_sz_boxed_1047_; size_t v_i_boxed_1048_; lean_object* v_res_1049_; 
v_sz_boxed_1047_ = lean_unbox_usize(v_sz_1038_);
lean_dec(v_sz_1038_);
v_i_boxed_1048_ = lean_unbox_usize(v_i_1039_);
lean_dec(v_i_1039_);
v_res_1049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v___x_1035_, v___x_1036_, v_as_1037_, v_sz_boxed_1047_, v_i_boxed_1048_, v_b_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v_as_1037_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object* v_mvarId_1050_, lean_object* v_fvarId_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lean_Meta_ElimEmptyInductive_elim(v_mvarId_1050_, v_fvarId_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object* v_cls_1059_, lean_object* v_msg_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_1059_, v_msg_1060_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object* v_cls_1068_, lean_object* v_msg_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(v_cls_1068_, v_msg_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object* v_x_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_Meta_saveState___redArg(v___y_1079_, v___y_1081_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___y_1086_; lean_object* v_a_1087_; lean_object* v___x_1107_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
lean_inc(v___y_1081_);
lean_inc_ref(v___y_1080_);
lean_inc(v___y_1079_);
lean_inc_ref(v___y_1078_);
v___x_1107_ = lean_apply_5(v_x_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, lean_box(0));
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v_a_1108_; uint8_t v___x_1109_; 
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
lean_inc(v_a_1108_);
v___x_1109_ = lean_unbox(v_a_1108_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; 
lean_dec_ref_known(v___x_1107_, 1);
lean_inc(v_a_1084_);
v___x_1110_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1084_, v___y_1079_, v___y_1081_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_a_1084_);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1117_ == 0)
{
lean_object* v_unused_1118_; 
v_unused_1118_ = lean_ctor_get(v___x_1110_, 0);
lean_dec(v_unused_1118_);
v___x_1112_ = v___x_1110_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_dec(v___x_1110_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v_a_1108_);
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1108_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec(v_a_1108_);
v_a_1119_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1110_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1110_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
lean_inc(v_a_1119_);
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
v___y_1086_ = v___x_1124_;
v_a_1087_ = v_a_1119_;
goto v___jp_1085_;
}
}
}
}
else
{
lean_dec(v_a_1108_);
lean_dec(v_a_1084_);
return v___x_1107_;
}
}
else
{
lean_object* v_a_1127_; 
v_a_1127_ = lean_ctor_get(v___x_1107_, 0);
lean_inc(v_a_1127_);
v___y_1086_ = v___x_1107_;
v_a_1087_ = v_a_1127_;
goto v___jp_1085_;
}
v___jp_1085_:
{
uint8_t v___x_1088_; 
v___x_1088_ = l_Lean_Exception_isInterrupt(v_a_1087_);
if (v___x_1088_ == 0)
{
uint8_t v___x_1089_; 
lean_inc_ref(v_a_1087_);
v___x_1089_ = l_Lean_Exception_isRuntime(v_a_1087_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; 
lean_dec_ref(v___y_1086_);
v___x_1090_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1084_, v___y_1079_, v___y_1081_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1097_ == 0)
{
lean_object* v_unused_1098_; 
v_unused_1098_ = lean_ctor_get(v___x_1090_, 0);
lean_dec(v_unused_1098_);
v___x_1092_ = v___x_1090_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_dec(v___x_1090_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set_tag(v___x_1092_, 1);
lean_ctor_set(v___x_1092_, 0, v_a_1087_);
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1087_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec_ref(v_a_1087_);
v_a_1099_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1090_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1090_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
else
{
lean_dec_ref(v_a_1087_);
lean_dec(v_a_1084_);
return v___y_1086_;
}
}
else
{
lean_dec_ref(v_a_1087_);
lean_dec(v_a_1084_);
return v___y_1086_;
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec_ref(v_x_1077_);
v_a_1128_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1083_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1083_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object* v_x_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v_x_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object* v_mvarId_1143_, lean_object* v_x_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1143_, v_x_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
v_a_1159_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1150_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1150_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object* v_mvarId_1167_, lean_object* v_x_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1167_, v_x_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object* v_00_u03b1_1175_, lean_object* v_mvarId_1176_, lean_object* v_x_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1176_, v_x_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object* v_00_u03b1_1184_, lean_object* v_mvarId_1185_, lean_object* v_x_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(v_00_u03b1_1184_, v_mvarId_1185_, v_x_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object* v_mvarId_1193_, lean_object* v_fuel_1194_, lean_object* v_fvarId_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lean_MVarId_exfalso(v_mvarId_1193_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1203_ = lean_st_mk_ref(v_fuel_1194_);
v___x_1204_ = l_Lean_Meta_ElimEmptyInductive_elim(v_a_1202_, v_fvarId_1195_, v___x_1203_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1213_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1209_ = lean_st_ref_get(v___x_1203_);
lean_dec(v___x_1203_);
lean_dec(v___x_1209_);
if (v_isShared_1208_ == 0)
{
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1205_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
else
{
lean_dec(v___x_1203_);
return v___x_1204_;
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec(v_fvarId_1195_);
lean_dec(v_fuel_1194_);
v_a_1214_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1201_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1201_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object* v_mvarId_1222_, lean_object* v_fuel_1223_, lean_object* v_fvarId_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(v_mvarId_1222_, v_fuel_1223_, v_fvarId_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object* v_fvarId_1231_, lean_object* v___f_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_1231_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; uint8_t v___x_1240_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
v___x_1240_ = lean_unbox(v_a_1239_);
if (v___x_1240_ == 0)
{
lean_dec_ref(v___f_1232_);
return v___x_1238_;
}
else
{
lean_object* v___x_1241_; 
lean_dec_ref_known(v___x_1238_, 1);
v___x_1241_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v___f_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
return v___x_1241_;
}
}
else
{
lean_dec_ref(v___f_1232_);
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object* v_fvarId_1242_, lean_object* v___f_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(v_fvarId_1242_, v___f_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object* v_mvarId_1250_, lean_object* v_fvarId_1251_, lean_object* v_fuel_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v___f_1258_; lean_object* v___f_1259_; lean_object* v___x_1260_; 
lean_inc(v_fvarId_1251_);
lean_inc(v_mvarId_1250_);
v___f_1258_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1258_, 0, v_mvarId_1250_);
lean_closure_set(v___f_1258_, 1, v_fuel_1252_);
lean_closure_set(v___f_1258_, 2, v_fvarId_1251_);
v___f_1259_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1259_, 0, v_fvarId_1251_);
lean_closure_set(v___f_1259_, 1, v___f_1258_);
v___x_1260_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1250_, v___f_1259_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object* v_mvarId_1261_, lean_object* v_fvarId_1262_, lean_object* v_fuel_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1261_, v_fvarId_1262_, v_fuel_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_);
lean_dec(v_a_1267_);
lean_dec_ref(v_a_1266_);
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
return v_res_1269_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object* v_e_1270_){
_start:
{
uint8_t v___x_1271_; 
v___x_1271_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_e_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object* v_e_1272_){
_start:
{
uint8_t v_res_1273_; lean_object* v_r_1274_; 
v_res_1273_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(v_e_1272_);
lean_dec_ref(v_e_1272_);
v_r_1274_ = lean_box(v_res_1273_);
return v_r_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object* v_e_1275_, lean_object* v_acc_1276_){
_start:
{
if (lean_obj_tag(v_e_1275_) == 7)
{
lean_object* v_binderType_1277_; lean_object* v_body_1278_; uint8_t v___y_1280_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v_binderType_1277_ = lean_ctor_get(v_e_1275_, 1);
v_body_1278_ = lean_ctor_get(v_e_1275_, 2);
v___x_1284_ = lean_unsigned_to_nat(0u);
v___x_1285_ = lean_expr_has_loose_bvar(v_body_1278_, v___x_1284_);
if (v___x_1285_ == 0)
{
uint8_t v___x_1286_; 
v___x_1286_ = l_Lean_Expr_isEq(v_binderType_1277_);
if (v___x_1286_ == 0)
{
uint8_t v___x_1287_; 
v___x_1287_ = l_Lean_Expr_isHEq(v_binderType_1277_);
v___y_1280_ = v___x_1287_;
goto v___jp_1279_;
}
else
{
v___y_1280_ = v___x_1286_;
goto v___jp_1279_;
}
}
else
{
uint8_t v___x_1288_; 
v___x_1288_ = 0;
v___y_1280_ = v___x_1288_;
goto v___jp_1279_;
}
v___jp_1279_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = lean_box(v___y_1280_);
v___x_1282_ = lean_array_push(v_acc_1276_, v___x_1281_);
v_e_1275_ = v_body_1278_;
v_acc_1276_ = v___x_1282_;
goto _start;
}
}
else
{
return v_acc_1276_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object* v_e_1289_, lean_object* v_acc_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1289_, v_acc_1290_);
lean_dec_ref(v_e_1289_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object* v_e_1294_){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(l_Lean_Meta_mkGenDiseqMask___closed__0));
v___x_1296_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1294_, v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object* v_e_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Lean_Meta_mkGenDiseqMask(v_e_1297_);
lean_dec_ref(v_e_1297_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object* v_msg_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___f_1306_; lean_object* v___x_4344__overap_1307_; lean_object* v___x_1308_; 
v___f_1306_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0));
v___x_4344__overap_1307_ = lean_panic_fn_borrowed(v___f_1306_, v_msg_1300_);
lean_inc(v___y_1304_);
lean_inc_ref(v___y_1303_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
v___x_1308_ = lean_apply_5(v___x_4344__overap_1307_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, lean_box(0));
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object* v_msg_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v_msg_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object* v_e_1316_, lean_object* v___y_1317_){
_start:
{
uint8_t v___x_1319_; 
v___x_1319_ = l_Lean_Expr_hasMVar(v_e_1316_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_e_1316_);
return v___x_1320_;
}
else
{
lean_object* v___x_1321_; lean_object* v_mctx_1322_; lean_object* v___x_1323_; lean_object* v_fst_1324_; lean_object* v_snd_1325_; lean_object* v___x_1326_; lean_object* v_cache_1327_; lean_object* v_zetaDeltaFVarIds_1328_; lean_object* v_postponed_1329_; lean_object* v_diag_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1339_; 
v___x_1321_ = lean_st_ref_get(v___y_1317_);
v_mctx_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc_ref(v_mctx_1322_);
lean_dec(v___x_1321_);
v___x_1323_ = l_Lean_instantiateMVarsCore(v_mctx_1322_, v_e_1316_);
v_fst_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_fst_1324_);
v_snd_1325_ = lean_ctor_get(v___x_1323_, 1);
lean_inc(v_snd_1325_);
lean_dec_ref(v___x_1323_);
v___x_1326_ = lean_st_ref_take(v___y_1317_);
v_cache_1327_ = lean_ctor_get(v___x_1326_, 1);
v_zetaDeltaFVarIds_1328_ = lean_ctor_get(v___x_1326_, 2);
v_postponed_1329_ = lean_ctor_get(v___x_1326_, 3);
v_diag_1330_ = lean_ctor_get(v___x_1326_, 4);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1339_ == 0)
{
lean_object* v_unused_1340_; 
v_unused_1340_ = lean_ctor_get(v___x_1326_, 0);
lean_dec(v_unused_1340_);
v___x_1332_ = v___x_1326_;
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_diag_1330_);
lean_inc(v_postponed_1329_);
lean_inc(v_zetaDeltaFVarIds_1328_);
lean_inc(v_cache_1327_);
lean_dec(v___x_1326_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v_snd_1325_);
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_snd_1325_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_cache_1327_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_zetaDeltaFVarIds_1328_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v_postponed_1329_);
lean_ctor_set(v_reuseFailAlloc_1338_, 4, v_diag_1330_);
v___x_1335_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_st_ref_put(v___y_1317_, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v_fst_1324_);
return v___x_1337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object* v_e_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1341_, v___y_1342_);
lean_dec(v___y_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object* v_e_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1345_, v___y_1347_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object* v_e_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(v_e_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object* v_k_1359_, uint8_t v_allowLevelAssignments_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1360_, v_k_1359_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1366_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1366_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object* v_k_1383_, lean_object* v_allowLevelAssignments_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1390_; lean_object* v_res_1391_; 
v_allowLevelAssignments_boxed_1390_ = lean_unbox(v_allowLevelAssignments_1384_);
v_res_1391_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1383_, v_allowLevelAssignments_boxed_1390_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object* v_00_u03b1_1392_, lean_object* v_k_1393_, uint8_t v_allowLevelAssignments_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1393_, v_allowLevelAssignments_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object* v_00_u03b1_1401_, lean_object* v_k_1402_, lean_object* v_allowLevelAssignments_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1409_; lean_object* v_res_1410_; 
v_allowLevelAssignments_boxed_1409_ = lean_unbox(v_allowLevelAssignments_1403_);
v_res_1410_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(v_00_u03b1_1401_, v_k_1402_, v_allowLevelAssignments_boxed_1409_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object* v_as_1413_, size_t v_sz_1414_, size_t v_i_1415_, lean_object* v_b_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_a_1423_; uint8_t v___x_1427_; 
v___x_1427_ = lean_usize_dec_lt(v_i_1415_, v_sz_1414_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v_b_1416_);
return v___x_1428_;
}
else
{
lean_object* v_snd_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1591_; 
v_snd_1429_ = lean_ctor_get(v_b_1416_, 1);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_b_1416_);
if (v_isSharedCheck_1591_ == 0)
{
lean_object* v_unused_1592_; 
v_unused_1592_ = lean_ctor_get(v_b_1416_, 0);
lean_dec(v_unused_1592_);
v___x_1431_ = v_b_1416_;
v_isShared_1432_ = v_isSharedCheck_1591_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_snd_1429_);
lean_dec(v_b_1416_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1591_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v_array_1433_; lean_object* v_start_1434_; lean_object* v_stop_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; 
v_array_1433_ = lean_ctor_get(v_snd_1429_, 0);
v_start_1434_ = lean_ctor_get(v_snd_1429_, 1);
v_stop_1435_ = lean_ctor_get(v_snd_1429_, 2);
v___x_1436_ = lean_box(0);
v___x_1437_ = lean_nat_dec_lt(v_start_1434_, v_stop_1435_);
if (v___x_1437_ == 0)
{
lean_object* v___x_1439_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1436_);
v___x_1439_ = v___x_1431_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_snd_1429_);
v___x_1439_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
return v___x_1440_;
}
}
else
{
lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1587_; 
lean_inc(v_stop_1435_);
lean_inc(v_start_1434_);
lean_inc_ref(v_array_1433_);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_snd_1429_);
if (v_isSharedCheck_1587_ == 0)
{
lean_object* v_unused_1588_; lean_object* v_unused_1589_; lean_object* v_unused_1590_; 
v_unused_1588_ = lean_ctor_get(v_snd_1429_, 2);
lean_dec(v_unused_1588_);
v_unused_1589_ = lean_ctor_get(v_snd_1429_, 1);
lean_dec(v_unused_1589_);
v_unused_1590_ = lean_ctor_get(v_snd_1429_, 0);
lean_dec(v_unused_1590_);
v___x_1443_ = v_snd_1429_;
v_isShared_1444_ = v_isSharedCheck_1587_;
goto v_resetjp_1442_;
}
else
{
lean_dec(v_snd_1429_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1587_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1445_ = lean_array_fget(v_array_1433_, v_start_1434_);
v___x_1446_ = lean_unsigned_to_nat(1u);
v___x_1447_ = lean_nat_add(v_start_1434_, v___x_1446_);
lean_dec(v_start_1434_);
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 1, v___x_1447_);
v___x_1449_ = v___x_1443_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_array_1433_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1586_, 2, v_stop_1435_);
v___x_1449_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
uint8_t v___x_1450_; 
v___x_1450_ = lean_unbox(v___x_1445_);
lean_dec(v___x_1445_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1452_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 1, v___x_1449_);
lean_ctor_set(v___x_1431_, 0, v___x_1436_);
v___x_1452_ = v___x_1431_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1449_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
v_a_1423_ = v___x_1452_;
goto v___jp_1422_;
}
}
else
{
lean_object* v_a_1454_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___x_1526_; 
v_a_1454_ = lean_array_uget_borrowed(v_as_1413_, v_i_1415_);
lean_inc(v___y_1420_);
lean_inc_ref(v___y_1419_);
lean_inc(v___y_1418_);
lean_inc_ref(v___y_1417_);
lean_inc(v_a_1454_);
v___x_1526_ = lean_infer_type(v_a_1454_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = l_Lean_Meta_matchEq_x3f(v_a_1527_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref_known(v___x_1528_, 1);
if (lean_obj_tag(v_a_1529_) == 1)
{
lean_object* v_val_1530_; lean_object* v_snd_1531_; lean_object* v_fst_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1568_; 
v_val_1530_ = lean_ctor_get(v_a_1529_, 0);
lean_inc(v_val_1530_);
lean_dec_ref_known(v_a_1529_, 1);
v_snd_1531_ = lean_ctor_get(v_val_1530_, 1);
lean_inc(v_snd_1531_);
lean_dec(v_val_1530_);
v_fst_1532_ = lean_ctor_get(v_snd_1531_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_snd_1531_);
if (v_isSharedCheck_1568_ == 0)
{
lean_object* v_unused_1569_; 
v_unused_1569_ = lean_ctor_get(v_snd_1531_, 1);
lean_dec(v_unused_1569_);
v___x_1534_ = v_snd_1531_;
v_isShared_1535_ = v_isSharedCheck_1568_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_fst_1532_);
lean_dec(v_snd_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1568_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_Meta_mkEqRefl(v_fst_1532_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1538_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
lean_inc(v_a_1454_);
v___x_1538_ = l_Lean_Meta_isExprDefEq(v_a_1454_, v_a_1537_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1551_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1541_ = v___x_1538_;
v_isShared_1542_ = v_isSharedCheck_1551_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1538_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1551_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
uint8_t v___x_1543_; 
v___x_1543_ = lean_unbox(v_a_1539_);
lean_dec(v_a_1539_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1546_; 
lean_del_object(v___x_1431_);
v___x_1544_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 1, v___x_1449_);
lean_ctor_set(v___x_1534_, 0, v___x_1544_);
v___x_1546_ = v___x_1534_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1544_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v___x_1449_);
v___x_1546_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
lean_object* v___x_1548_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1546_);
v___x_1548_ = v___x_1541_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v___x_1546_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
else
{
lean_del_object(v___x_1541_);
lean_del_object(v___x_1534_);
v___y_1456_ = v___y_1417_;
v___y_1457_ = v___y_1418_;
v___y_1458_ = v___y_1419_;
v___y_1459_ = v___y_1420_;
goto v___jp_1455_;
}
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
lean_del_object(v___x_1534_);
lean_dec_ref(v___x_1449_);
lean_del_object(v___x_1431_);
v_a_1552_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1538_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1538_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
lean_del_object(v___x_1534_);
lean_dec_ref(v___x_1449_);
lean_del_object(v___x_1431_);
v_a_1560_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1536_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1536_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
else
{
lean_dec(v_a_1529_);
v___y_1456_ = v___y_1417_;
v___y_1457_ = v___y_1418_;
v___y_1458_ = v___y_1419_;
v___y_1459_ = v___y_1420_;
goto v___jp_1455_;
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v___x_1449_);
lean_del_object(v___x_1431_);
v_a_1570_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1528_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1528_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec_ref(v___x_1449_);
lean_del_object(v___x_1431_);
v_a_1578_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1526_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1526_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
v___jp_1455_:
{
lean_object* v___x_1460_; 
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v_a_1454_);
v___x_1460_ = lean_infer_type(v_a_1454_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1462_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1462_ = l_Lean_Meta_matchHEq_x3f(v_a_1461_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
if (lean_obj_tag(v_a_1463_) == 1)
{
lean_object* v_val_1464_; lean_object* v_snd_1465_; lean_object* v_fst_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1505_; 
lean_del_object(v___x_1431_);
v_val_1464_ = lean_ctor_get(v_a_1463_, 0);
lean_inc(v_val_1464_);
lean_dec_ref_known(v_a_1463_, 1);
v_snd_1465_ = lean_ctor_get(v_val_1464_, 1);
lean_inc(v_snd_1465_);
lean_dec(v_val_1464_);
v_fst_1466_ = lean_ctor_get(v_snd_1465_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_snd_1465_);
if (v_isSharedCheck_1505_ == 0)
{
lean_object* v_unused_1506_; 
v_unused_1506_ = lean_ctor_get(v_snd_1465_, 1);
lean_dec(v_unused_1506_);
v___x_1468_ = v_snd_1465_;
v_isShared_1469_ = v_isSharedCheck_1505_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_fst_1466_);
lean_dec(v_snd_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1505_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_Meta_mkHEqRefl(v_fst_1466_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1472_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1470_, 1);
lean_inc(v_a_1454_);
v___x_1472_ = l_Lean_Meta_isExprDefEq(v_a_1454_, v_a_1471_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1488_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1475_ = v___x_1472_;
v_isShared_1476_ = v_isSharedCheck_1488_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1472_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1488_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_unbox(v_a_1473_);
lean_dec(v_a_1473_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1480_; 
v___x_1478_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v___x_1449_);
lean_ctor_set(v___x_1468_, 0, v___x_1478_);
v___x_1480_ = v___x_1468_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v___x_1449_);
v___x_1480_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1482_; 
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 0, v___x_1480_);
v___x_1482_ = v___x_1475_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
else
{
lean_object* v___x_1486_; 
lean_del_object(v___x_1475_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v___x_1449_);
lean_ctor_set(v___x_1468_, 0, v___x_1436_);
v___x_1486_ = v___x_1468_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v___x_1449_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
v_a_1423_ = v___x_1486_;
goto v___jp_1422_;
}
}
}
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_del_object(v___x_1468_);
lean_dec_ref(v___x_1449_);
v_a_1489_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1472_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1472_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_del_object(v___x_1468_);
lean_dec_ref(v___x_1449_);
v_a_1497_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1470_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1470_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
else
{
lean_object* v___x_1508_; 
lean_dec(v_a_1463_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 1, v___x_1449_);
lean_ctor_set(v___x_1431_, 0, v___x_1436_);
v___x_1508_ = v___x_1431_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v___x_1449_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
v_a_1423_ = v___x_1508_;
goto v___jp_1422_;
}
}
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
lean_dec_ref(v___x_1449_);
lean_del_object(v___x_1431_);
v_a_1510_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1462_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1462_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1515_; 
if (v_isShared_1513_ == 0)
{
v___x_1515_ = v___x_1512_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_a_1510_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec_ref(v___x_1449_);
lean_del_object(v___x_1431_);
v_a_1518_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1460_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1460_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
}
}
}
}
}
v___jp_1422_:
{
size_t v___x_1424_; size_t v___x_1425_; 
v___x_1424_ = ((size_t)1ULL);
v___x_1425_ = lean_usize_add(v_i_1415_, v___x_1424_);
v_i_1415_ = v___x_1425_;
v_b_1416_ = v_a_1423_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object* v_as_1593_, lean_object* v_sz_1594_, lean_object* v_i_1595_, lean_object* v_b_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
size_t v_sz_boxed_1602_; size_t v_i_boxed_1603_; lean_object* v_res_1604_; 
v_sz_boxed_1602_ = lean_unbox_usize(v_sz_1594_);
lean_dec(v_sz_1594_);
v_i_boxed_1603_ = lean_unbox_usize(v_i_1595_);
lean_dec(v_i_1595_);
v_res_1604_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_as_1593_, v_sz_boxed_1602_, v_i_boxed_1603_, v_b_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec_ref(v_as_1593_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object* v___x_1605_, uint8_t v___x_1606_, lean_object* v_localDecl_1607_, lean_object* v_mvarId_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___x_1614_; 
lean_inc_ref(v___x_1605_);
v___x_1614_ = l_Lean_Meta_forallMetaTelescope(v___x_1605_, v___x_1606_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; lean_object* v_fst_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1705_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1614_, 1);
v_fst_1616_ = lean_ctor_get(v_a_1615_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v_a_1615_);
if (v_isSharedCheck_1705_ == 0)
{
lean_object* v_unused_1706_; 
v_unused_1706_ = lean_ctor_get(v_a_1615_, 1);
lean_dec(v_unused_1706_);
v___x_1618_ = v_a_1615_;
v_isShared_1619_ = v_isSharedCheck_1705_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_fst_1616_);
lean_dec(v_a_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1705_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1620_ = l_Lean_Meta_mkGenDiseqMask(v___x_1605_);
lean_dec_ref(v___x_1605_);
v___x_1621_ = lean_unsigned_to_nat(0u);
v___x_1622_ = lean_array_get_size(v___x_1620_);
v___x_1623_ = l_Array_toSubarray___redArg(v___x_1620_, v___x_1621_, v___x_1622_);
v___x_1624_ = lean_box(0);
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 1, v___x_1623_);
lean_ctor_set(v___x_1618_, 0, v___x_1624_);
v___x_1626_ = v___x_1618_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v___x_1624_);
lean_ctor_set(v_reuseFailAlloc_1704_, 1, v___x_1623_);
v___x_1626_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
size_t v_sz_1627_; size_t v___x_1628_; lean_object* v___x_1629_; 
v_sz_1627_ = lean_array_size(v_fst_1616_);
v___x_1628_ = ((size_t)0ULL);
v___x_1629_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_fst_1616_, v_sz_1627_, v___x_1628_, v___x_1626_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1695_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1632_ = v___x_1629_;
v_isShared_1633_ = v_isSharedCheck_1695_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1629_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1695_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v_fst_1634_; 
v_fst_1634_ = lean_ctor_get(v_a_1630_, 0);
lean_inc(v_fst_1634_);
lean_dec(v_a_1630_);
if (lean_obj_tag(v_fst_1634_) == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1690_; 
lean_del_object(v___x_1632_);
v___x_1635_ = l_Lean_LocalDecl_toExpr(v_localDecl_1607_);
v___x_1636_ = l_Lean_mkAppN(v___x_1635_, v_fst_1616_);
lean_dec(v_fst_1616_);
v___x_1637_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1636_, v___y_1610_);
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1640_ = v___x_1637_;
v_isShared_1641_ = v_isSharedCheck_1690_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1637_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1690_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1642_; 
lean_inc(v_a_1638_);
v___x_1642_ = l_Lean_Meta_hasAssignableMVar(v_a_1638_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1681_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1681_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1681_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
uint8_t v___x_1647_; 
v___x_1647_ = lean_unbox(v_a_1643_);
lean_dec(v_a_1643_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; 
lean_del_object(v___x_1645_);
v___x_1648_ = l_Lean_MVarId_getType(v_mvarId_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1650_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
v___x_1650_ = l_Lean_Meta_mkFalseElim(v_a_1649_, v_a_1638_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1661_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1653_ = v___x_1650_;
v_isShared_1654_ = v_isSharedCheck_1661_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1650_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1661_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1641_ == 0)
{
lean_ctor_set_tag(v___x_1640_, 1);
lean_ctor_set(v___x_1640_, 0, v_a_1651_);
v___x_1656_ = v___x_1640_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1658_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 0, v___x_1656_);
v___x_1658_ = v___x_1653_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_del_object(v___x_1640_);
v_a_1662_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1650_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1650_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_del_object(v___x_1640_);
lean_dec(v_a_1638_);
v_a_1670_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1648_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1648_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
else
{
lean_object* v___x_1679_; 
lean_del_object(v___x_1640_);
lean_dec(v_a_1638_);
lean_dec(v_mvarId_1608_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1624_);
v___x_1679_ = v___x_1645_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1624_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
lean_del_object(v___x_1640_);
lean_dec(v_a_1638_);
lean_dec(v_mvarId_1608_);
v_a_1682_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v___x_1642_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1642_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
else
{
lean_object* v_val_1691_; lean_object* v___x_1693_; 
lean_dec(v_fst_1616_);
lean_dec(v_mvarId_1608_);
lean_dec_ref(v_localDecl_1607_);
v_val_1691_ = lean_ctor_get(v_fst_1634_, 0);
lean_inc(v_val_1691_);
lean_dec_ref_known(v_fst_1634_, 1);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 0, v_val_1691_);
v___x_1693_ = v___x_1632_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_val_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_dec(v_fst_1616_);
lean_dec(v_mvarId_1608_);
lean_dec_ref(v_localDecl_1607_);
v_a_1696_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1629_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1629_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec(v_mvarId_1608_);
lean_dec_ref(v_localDecl_1607_);
lean_dec_ref(v___x_1605_);
v_a_1707_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1614_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1614_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object* v___x_1715_, lean_object* v___x_1716_, lean_object* v_localDecl_1717_, lean_object* v_mvarId_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
uint8_t v___x_6078__boxed_1724_; lean_object* v_res_1725_; 
v___x_6078__boxed_1724_ = lean_unbox(v___x_1716_);
v_res_1725_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(v___x_1715_, v___x_6078__boxed_1724_, v_localDecl_1717_, v_mvarId_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
return v_res_1725_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1729_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2));
v___x_1730_ = lean_unsigned_to_nat(2u);
v___x_1731_ = lean_unsigned_to_nat(121u);
v___x_1732_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1));
v___x_1733_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0));
v___x_1734_ = l_mkPanicMessageWithDecl(v___x_1733_, v___x_1732_, v___x_1731_, v___x_1730_, v___x_1729_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object* v_mvarId_1735_, lean_object* v_localDecl_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v___x_1742_; uint8_t v___x_1743_; 
v___x_1742_ = l_Lean_LocalDecl_type(v_localDecl_1736_);
v___x_1743_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1742_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_dec_ref(v___x_1742_);
lean_dec_ref(v_localDecl_1736_);
lean_dec(v_mvarId_1735_);
v___x_1744_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3);
v___x_1745_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v___x_1744_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_);
return v___x_1745_;
}
else
{
uint8_t v___x_1746_; lean_object* v___x_1747_; lean_object* v___f_1748_; uint8_t v___x_1749_; lean_object* v___x_1750_; 
v___x_1746_ = 0;
v___x_1747_ = lean_box(v___x_1746_);
lean_inc(v_mvarId_1735_);
v___f_1748_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1748_, 0, v___x_1742_);
lean_closure_set(v___f_1748_, 1, v___x_1747_);
lean_closure_set(v___f_1748_, 2, v_localDecl_1736_);
lean_closure_set(v___f_1748_, 3, v_mvarId_1735_);
v___x_1749_ = 0;
v___x_1750_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v___f_1748_, v___x_1749_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1770_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1770_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1770_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
if (lean_obj_tag(v_a_1751_) == 1)
{
lean_object* v_val_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1764_; 
lean_del_object(v___x_1753_);
v_val_1755_ = lean_ctor_get(v_a_1751_, 0);
lean_inc(v_val_1755_);
lean_dec_ref_known(v_a_1751_, 1);
v___x_1756_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1735_, v_val_1755_, v_a_1738_);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1764_ == 0)
{
lean_object* v_unused_1765_; 
v_unused_1765_ = lean_ctor_get(v___x_1756_, 0);
lean_dec(v_unused_1765_);
v___x_1758_ = v___x_1756_;
v_isShared_1759_ = v_isSharedCheck_1764_;
goto v_resetjp_1757_;
}
else
{
lean_dec(v___x_1756_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1764_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; lean_object* v___x_1762_; 
v___x_1760_ = lean_box(v___x_1743_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 0, v___x_1760_);
v___x_1762_ = v___x_1758_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
else
{
lean_object* v___x_1766_; lean_object* v___x_1768_; 
lean_dec(v_a_1751_);
lean_dec(v_mvarId_1735_);
v___x_1766_ = lean_box(v___x_1749_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1766_);
v___x_1768_ = v___x_1753_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec(v_mvarId_1735_);
v_a_1771_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1750_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1750_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object* v_mvarId_1779_, lean_object* v_localDecl_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1779_, v_localDecl_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
return v_res_1786_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(lean_object* v_x_1787_, lean_object* v_x_1788_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
if (lean_obj_tag(v_x_1788_) == 0)
{
uint8_t v___x_1789_; 
v___x_1789_ = 1;
return v___x_1789_;
}
else
{
uint8_t v___x_1790_; 
v___x_1790_ = 0;
return v___x_1790_;
}
}
else
{
if (lean_obj_tag(v_x_1788_) == 0)
{
uint8_t v___x_1791_; 
v___x_1791_ = 0;
return v___x_1791_;
}
else
{
lean_object* v_val_1792_; uint8_t v___x_1793_; 
v_val_1792_ = lean_ctor_get(v_x_1788_, 0);
v___x_1793_ = lean_unbox(v_val_1792_);
if (v___x_1793_ == 0)
{
lean_object* v_val_1794_; uint8_t v___x_1795_; 
v_val_1794_ = lean_ctor_get(v_x_1787_, 0);
v___x_1795_ = lean_unbox(v_val_1794_);
if (v___x_1795_ == 0)
{
uint8_t v___x_1796_; 
v___x_1796_ = 1;
return v___x_1796_;
}
else
{
uint8_t v___x_1797_; 
v___x_1797_ = lean_unbox(v_val_1792_);
return v___x_1797_;
}
}
else
{
lean_object* v_val_1798_; uint8_t v___x_1799_; 
v_val_1798_ = lean_ctor_get(v_x_1787_, 0);
v___x_1799_ = lean_unbox(v_val_1798_);
return v___x_1799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0___boxed(lean_object* v_x_1800_, lean_object* v_x_1801_){
_start:
{
uint8_t v_res_1802_; lean_object* v_r_1803_; 
v_res_1802_ = l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(v_x_1800_, v_x_1801_);
lean_dec(v_x_1801_);
lean_dec(v_x_1800_);
v_r_1803_ = lean_box(v_res_1802_);
return v_r_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0(lean_object* v_lhs_1807_, lean_object* v_rhs_1808_, lean_object* v_mvarId_1809_, lean_object* v_h_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v___x_1816_; 
lean_inc_ref(v_rhs_1808_);
lean_inc_ref(v_lhs_1807_);
v___x_1816_ = l_Lean_Meta_floatLitValuesEq_x3f(v_lhs_1807_, v_rhs_1808_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1879_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1879_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1879_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
uint8_t v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1821_ = 0;
v___x_1822_ = ((lean_object*)(l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0));
v___x_1823_ = l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(v_a_1817_, v___x_1822_);
lean_dec(v_a_1817_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; lean_object* v___x_1826_; 
lean_dec_ref(v_h_1810_);
lean_dec(v_mvarId_1809_);
lean_dec_ref(v_rhs_1808_);
lean_dec_ref(v_lhs_1807_);
v___x_1824_ = lean_box(v___x_1821_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1824_);
v___x_1826_ = v___x_1819_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1824_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
else
{
lean_object* v___x_1828_; 
lean_del_object(v___x_1819_);
v___x_1828_ = l_Lean_Meta_mkEq(v_lhs_1807_, v_rhs_1808_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1830_ = l_Lean_mkNot(v_a_1829_);
v___x_1831_ = l_Lean_Meta_mkDecideProof(v___x_1830_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1833_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1832_);
lean_dec_ref_known(v___x_1831_, 1);
lean_inc(v_mvarId_1809_);
v___x_1833_ = l_Lean_MVarId_getType(v_mvarId_1809_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = l_Lean_Meta_mkAbsurd(v_a_1834_, v_h_1810_, v_a_1832_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1845_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
v___x_1837_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1809_, v_a_1836_, v___y_1812_);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1845_ == 0)
{
lean_object* v_unused_1846_; 
v_unused_1846_ = lean_ctor_get(v___x_1837_, 0);
lean_dec(v_unused_1846_);
v___x_1839_ = v___x_1837_;
v_isShared_1840_ = v_isSharedCheck_1845_;
goto v_resetjp_1838_;
}
else
{
lean_dec(v___x_1837_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1845_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1841_; lean_object* v___x_1843_; 
v___x_1841_ = lean_box(v___x_1823_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1841_);
v___x_1843_ = v___x_1839_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
else
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1854_; 
lean_dec(v_mvarId_1809_);
v_a_1847_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1849_ = v___x_1835_;
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v___x_1835_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1850_ == 0)
{
v___x_1852_ = v___x_1849_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1847_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
}
}
else
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
lean_dec(v_a_1832_);
lean_dec_ref(v_h_1810_);
lean_dec(v_mvarId_1809_);
v_a_1855_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1833_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1833_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec_ref(v_h_1810_);
lean_dec(v_mvarId_1809_);
v_a_1863_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1831_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1831_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec_ref(v_h_1810_);
lean_dec(v_mvarId_1809_);
v_a_1871_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1828_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1828_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec_ref(v_h_1810_);
lean_dec(v_mvarId_1809_);
lean_dec_ref(v_rhs_1808_);
lean_dec_ref(v_lhs_1807_);
v_a_1880_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1816_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1816_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___boxed(lean_object* v_lhs_1888_, lean_object* v_rhs_1889_, lean_object* v_mvarId_1890_, lean_object* v_h_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_MVarId_closeIfDistinctFloatLits___lam__0(v_lhs_1888_, v_rhs_1889_, v_mvarId_1890_, v_h_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits(lean_object* v_mvarId_1898_, lean_object* v_h_1899_, lean_object* v_lhs_1900_, lean_object* v_rhs_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v___f_1907_; lean_object* v___x_1908_; 
lean_inc(v_mvarId_1898_);
v___f_1907_ = lean_alloc_closure((void*)(l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1907_, 0, v_lhs_1900_);
lean_closure_set(v___f_1907_, 1, v_rhs_1901_);
lean_closure_set(v___f_1907_, 2, v_mvarId_1898_);
lean_closure_set(v___f_1907_, 3, v_h_1899_);
v___x_1908_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1898_, v___f_1907_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___boxed(lean_object* v_mvarId_1909_, lean_object* v_h_1910_, lean_object* v_lhs_1911_, lean_object* v_rhs_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_Lean_MVarId_closeIfDistinctFloatLits(v_mvarId_1909_, v_h_1910_, v_lhs_1911_, v_rhs_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
lean_dec(v_a_1916_);
lean_dec_ref(v_a_1915_);
lean_dec(v_a_1914_);
lean_dec_ref(v_a_1913_);
return v_res_1918_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1930_ = lean_box(0);
v___x_1931_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5));
v___x_1932_ = l_Lean_mkConst(v___x_1931_, v___x_1930_);
return v___x_1932_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7(void){
_start:
{
lean_object* v___x_1933_; lean_object* v_dummy_1934_; 
v___x_1933_ = lean_box(0);
v_dummy_1934_ = l_Lean_Expr_sort___override(v___x_1933_);
return v_dummy_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object* v_config_1935_, lean_object* v_mvarId_1936_, lean_object* v_as_1937_, size_t v_sz_1938_, size_t v_i_1939_, lean_object* v_b_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
uint8_t v___x_1946_; 
v___x_1946_ = lean_usize_dec_lt(v_i_1939_, v_sz_1938_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; 
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v___x_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1947_, 0, v_b_1940_);
return v___x_1947_;
}
else
{
lean_object* v_snd_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_2529_; 
v_snd_1948_ = lean_ctor_get(v_b_1940_, 1);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_b_1940_);
if (v_isSharedCheck_2529_ == 0)
{
lean_object* v_unused_2530_; 
v_unused_2530_ = lean_ctor_get(v_b_1940_, 0);
lean_dec(v_unused_2530_);
v___x_1950_ = v_b_1940_;
v_isShared_1951_ = v_isSharedCheck_2529_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_snd_1948_);
lean_dec(v_b_1940_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_2529_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v_a_1953_; lean_object* v___x_1959_; lean_object* v_a_1961_; lean_object* v_a_1966_; 
v___x_1959_ = lean_box(0);
v_a_1966_ = lean_array_uget(v_as_1937_, v_i_1939_);
if (lean_obj_tag(v_a_1966_) == 0)
{
lean_del_object(v___x_1950_);
v_a_1961_ = v_snd_1948_;
goto v___jp_1960_;
}
else
{
lean_object* v_val_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_2528_; 
v_val_1967_ = lean_ctor_get(v_a_1966_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v_a_1966_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_1969_ = v_a_1966_;
v_isShared_1970_ = v_isSharedCheck_2528_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_val_1967_);
lean_dec(v_a_1966_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_2528_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; uint8_t v___y_1974_; uint8_t v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; uint8_t v___x_1999_; 
v___x_1971_ = lean_box(0);
v___x_1972_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_1999_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1967_);
if (v___x_1999_ == 0)
{
lean_object* v___x_2000_; uint8_t v___y_2002_; uint8_t v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2025_; lean_object* v___y_2026_; uint8_t v___y_2027_; lean_object* v___y_2028_; uint8_t v___y_2029_; lean_object* v___y_2030_; lean_object* v_a_2031_; lean_object* v___y_2037_; lean_object* v___y_2038_; uint8_t v___y_2039_; lean_object* v___y_2040_; lean_object* v___y_2041_; uint8_t v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2044_; uint8_t v___y_2081_; uint8_t v_isHEq_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; uint8_t v_isEq_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___x_2465_; 
v___x_2000_ = l_Lean_LocalDecl_type(v_val_1967_);
lean_inc_ref(v___x_2000_);
v___x_2465_ = l_Lean_Meta_matchNot_x3f(v___x_2000_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___x_2465_, 1);
if (lean_obj_tag(v_a_2466_) == 1)
{
lean_object* v_val_2467_; lean_object* v___x_2468_; 
v_val_2467_ = lean_ctor_get(v_a_2466_, 0);
lean_inc(v_val_2467_);
lean_dec_ref_known(v_a_2466_, 1);
v___x_2468_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_2467_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_a_2469_; 
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_a_2469_);
lean_dec_ref_known(v___x_2468_, 1);
if (lean_obj_tag(v_a_2469_) == 1)
{
lean_object* v_val_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2511_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec_ref(v_config_1935_);
v_val_2470_ = lean_ctor_get(v_a_2469_, 0);
v_isSharedCheck_2511_ = !lean_is_exclusive(v_a_2469_);
if (v_isSharedCheck_2511_ == 0)
{
v___x_2472_ = v_a_2469_;
v_isShared_2473_ = v_isSharedCheck_2511_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_val_2470_);
lean_dec(v_a_2469_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2511_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2474_; 
lean_inc(v_mvarId_1936_);
v___x_2474_ = l_Lean_MVarId_getType(v_mvarId_1936_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v___x_2476_ = l_Lean_LocalDecl_toExpr(v_val_1967_);
v___x_2477_ = l_Lean_mkFVar(v_val_2470_);
v___x_2478_ = l_Lean_Expr_app___override(v___x_2476_, v___x_2477_);
v___x_2479_ = l_Lean_Meta_mkFalseElim(v_a_2475_, v___x_2478_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; lean_object* v___x_2481_; 
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2479_, 1);
v___x_2481_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1936_, v_a_2480_, v___y_1942_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_object* v___x_2482_; lean_object* v___x_2484_; 
lean_dec_ref_known(v___x_2481_, 1);
v___x_2482_ = lean_box(v___x_1946_);
if (v_isShared_2473_ == 0)
{
lean_ctor_set(v___x_2472_, 0, v___x_2482_);
v___x_2484_ = v___x_2472_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2482_);
v___x_2484_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
lean_ctor_set(v___x_2485_, 1, v___x_1971_);
v_a_1953_ = v___x_2485_;
goto v___jp_1952_;
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
lean_del_object(v___x_2472_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_2487_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v___x_2481_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2481_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
lean_del_object(v___x_2472_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2495_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2479_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2479_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_del_object(v___x_2472_);
lean_dec(v_val_2470_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2503_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2474_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2474_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
else
{
lean_dec(v_a_2469_);
v___y_2331_ = v___y_1941_;
v___y_2332_ = v___y_1942_;
v___y_2333_ = v___y_1943_;
v___y_2334_ = v___y_1944_;
goto v___jp_2330_;
}
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2512_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2468_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2468_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
else
{
lean_dec(v_a_2466_);
v___y_2331_ = v___y_1941_;
v___y_2332_ = v___y_1942_;
v___y_2333_ = v___y_1943_;
v___y_2334_ = v___y_1944_;
goto v___jp_2330_;
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2520_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2465_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2465_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
v___jp_2001_:
{
uint8_t v_genDiseq_2008_; 
v_genDiseq_2008_ = lean_ctor_get_uint8(v_config_1935_, sizeof(void*)*1 + 2);
if (v_genDiseq_2008_ == 0)
{
lean_dec_ref(v___x_2000_);
v___y_1974_ = v___y_2002_;
v___y_1975_ = v___y_2003_;
v___y_1976_ = v___y_2004_;
v___y_1977_ = v___y_2005_;
v___y_1978_ = v___y_2006_;
v___y_1979_ = v___y_2007_;
goto v___jp_1973_;
}
else
{
uint8_t v___x_2009_; 
v___x_2009_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2000_);
lean_dec_ref(v___x_2000_);
if (v___x_2009_ == 0)
{
v___y_1974_ = v___y_2002_;
v___y_1975_ = v___y_2003_;
v___y_1976_ = v___y_2004_;
v___y_1977_ = v___y_2005_;
v___y_1978_ = v___y_2006_;
v___y_1979_ = v___y_2007_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2010_; 
lean_inc(v_val_1967_);
lean_inc(v_mvarId_1936_);
v___x_2010_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1936_, v_val_1967_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v_a_2011_; uint8_t v___x_2012_; 
v_a_2011_ = lean_ctor_get(v___x_2010_, 0);
lean_inc(v_a_2011_);
lean_dec_ref_known(v___x_2010_, 1);
v___x_2012_ = lean_unbox(v_a_2011_);
lean_dec(v_a_2011_);
if (v___x_2012_ == 0)
{
v___y_1974_ = v___y_2002_;
v___y_1975_ = v___y_2003_;
v___y_1976_ = v___y_2004_;
v___y_1977_ = v___y_2005_;
v___y_1978_ = v___y_2006_;
v___y_1979_ = v___y_2007_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v___x_2013_ = lean_box(v___x_1946_);
v___x_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
lean_ctor_set(v___x_2015_, 1, v___x_1971_);
v_a_1953_ = v___x_2015_;
goto v___jp_1952_;
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2016_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_2010_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2010_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
}
}
v___jp_2024_:
{
uint8_t v___x_2032_; 
v___x_2032_ = l_Lean_Exception_isInterrupt(v_a_2031_);
if (v___x_2032_ == 0)
{
uint8_t v___x_2033_; 
lean_inc_ref(v_a_2031_);
v___x_2033_ = l_Lean_Exception_isRuntime(v_a_2031_);
if (v___x_2033_ == 0)
{
lean_dec_ref(v_a_2031_);
v___y_2002_ = v___y_2027_;
v___y_2003_ = v___y_2029_;
v___y_2004_ = v___y_2028_;
v___y_2005_ = v___y_2025_;
v___y_2006_ = v___y_2026_;
v___y_2007_ = v___y_2030_;
goto v___jp_2001_;
}
else
{
lean_object* v___x_2034_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v___x_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2034_, 0, v_a_2031_);
return v___x_2034_;
}
}
else
{
lean_object* v___x_2035_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v___x_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2035_, 0, v_a_2031_);
return v___x_2035_;
}
}
v___jp_2036_:
{
if (lean_obj_tag(v___y_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; 
v_a_2045_ = lean_ctor_get(v___y_2044_, 0);
lean_inc(v_a_2045_);
lean_dec_ref_known(v___y_2044_, 1);
v___x_2046_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2047_ = l_Lean_Expr_isConstOf(v_a_2045_, v___x_2046_);
lean_dec(v_a_2045_);
if (v___x_2047_ == 0)
{
lean_dec_ref(v___y_2041_);
v___y_2002_ = v___y_2039_;
v___y_2003_ = v___y_2042_;
v___y_2004_ = v___y_2040_;
v___y_2005_ = v___y_2037_;
v___y_2006_ = v___y_2038_;
v___y_2007_ = v___y_2043_;
goto v___jp_2001_;
}
else
{
lean_object* v___x_2048_; 
lean_inc_ref(v___y_2041_);
v___x_2048_ = l_Lean_Meta_mkEqRefl(v___y_2041_, v___y_2040_, v___y_2037_, v___y_2038_, v___y_2043_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___x_2050_; lean_object* v_dummy_2051_; lean_object* v_nargs_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2049_);
lean_dec_ref_known(v___x_2048_, 1);
v___x_2050_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2051_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_2052_ = l_Lean_Expr_getAppNumArgs(v___y_2041_);
lean_inc(v_nargs_2052_);
v___x_2053_ = lean_mk_array(v_nargs_2052_, v_dummy_2051_);
v___x_2054_ = lean_unsigned_to_nat(1u);
v___x_2055_ = lean_nat_sub(v_nargs_2052_, v___x_2054_);
lean_dec(v_nargs_2052_);
v___x_2056_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_2041_, v___x_2053_, v___x_2055_);
v___x_2057_ = lean_array_push(v___x_2056_, v_a_2049_);
v___x_2058_ = l_Lean_mkAppN(v___x_2050_, v___x_2057_);
lean_dec_ref(v___x_2057_);
lean_inc(v_mvarId_1936_);
v___x_2059_ = l_Lean_MVarId_getType(v_mvarId_1936_, v___y_2040_, v___y_2037_, v___y_2038_, v___y_2043_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
lean_inc(v_val_1967_);
v___x_2061_ = l_Lean_LocalDecl_toExpr(v_val_1967_);
v___x_2062_ = l_Lean_Meta_mkAbsurd(v_a_2060_, v___x_2061_, v___x_2058_, v___y_2040_, v___y_2037_, v___y_2038_, v___y_2043_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
lean_inc(v_mvarId_1936_);
v___x_2064_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1936_, v_a_2063_, v___y_2037_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2073_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v___x_2064_, 0);
lean_dec(v_unused_2074_);
v___x_2066_ = v___x_2064_;
v_isShared_2067_ = v_isSharedCheck_2073_;
goto v_resetjp_2065_;
}
else
{
lean_dec(v___x_2064_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2073_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2068_ = lean_box(v___x_1946_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set_tag(v___x_2066_, 1);
lean_ctor_set(v___x_2066_, 0, v___x_2068_);
v___x_2070_ = v___x_2066_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2068_);
v___x_2070_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
lean_ctor_set(v___x_2071_, 1, v___x_1971_);
v_a_1953_ = v___x_2071_;
goto v___jp_1952_;
}
}
}
else
{
lean_object* v_a_2075_; 
v_a_2075_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2064_, 1);
v___y_2025_ = v___y_2037_;
v___y_2026_ = v___y_2038_;
v___y_2027_ = v___y_2039_;
v___y_2028_ = v___y_2040_;
v___y_2029_ = v___y_2042_;
v___y_2030_ = v___y_2043_;
v_a_2031_ = v_a_2075_;
goto v___jp_2024_;
}
}
else
{
lean_object* v_a_2076_; 
v_a_2076_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2062_, 1);
v___y_2025_ = v___y_2037_;
v___y_2026_ = v___y_2038_;
v___y_2027_ = v___y_2039_;
v___y_2028_ = v___y_2040_;
v___y_2029_ = v___y_2042_;
v___y_2030_ = v___y_2043_;
v_a_2031_ = v_a_2076_;
goto v___jp_2024_;
}
}
else
{
lean_object* v_a_2077_; 
lean_dec_ref(v___x_2058_);
v_a_2077_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2077_);
lean_dec_ref_known(v___x_2059_, 1);
v___y_2025_ = v___y_2037_;
v___y_2026_ = v___y_2038_;
v___y_2027_ = v___y_2039_;
v___y_2028_ = v___y_2040_;
v___y_2029_ = v___y_2042_;
v___y_2030_ = v___y_2043_;
v_a_2031_ = v_a_2077_;
goto v___jp_2024_;
}
}
else
{
lean_object* v_a_2078_; 
lean_dec_ref(v___y_2041_);
v_a_2078_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2078_);
lean_dec_ref_known(v___x_2048_, 1);
v___y_2025_ = v___y_2037_;
v___y_2026_ = v___y_2038_;
v___y_2027_ = v___y_2039_;
v___y_2028_ = v___y_2040_;
v___y_2029_ = v___y_2042_;
v___y_2030_ = v___y_2043_;
v_a_2031_ = v_a_2078_;
goto v___jp_2024_;
}
}
}
else
{
lean_object* v_a_2079_; 
lean_dec_ref(v___y_2041_);
v_a_2079_ = lean_ctor_get(v___y_2044_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___y_2044_, 1);
v___y_2025_ = v___y_2037_;
v___y_2026_ = v___y_2038_;
v___y_2027_ = v___y_2039_;
v___y_2028_ = v___y_2040_;
v___y_2029_ = v___y_2042_;
v___y_2030_ = v___y_2043_;
v_a_2031_ = v_a_2079_;
goto v___jp_2024_;
}
}
v___jp_2080_:
{
uint8_t v_useDecide_2087_; 
v_useDecide_2087_ = lean_ctor_get_uint8(v_config_1935_, sizeof(void*)*1);
if (v_useDecide_2087_ == 0)
{
v___y_2002_ = v_isHEq_2082_;
v___y_2003_ = v___y_2081_;
v___y_2004_ = v___y_2083_;
v___y_2005_ = v___y_2084_;
v___y_2006_ = v___y_2085_;
v___y_2007_ = v___y_2086_;
goto v___jp_2001_;
}
else
{
uint8_t v___x_2088_; 
v___x_2088_ = l_Lean_Expr_hasFVar(v___x_2000_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; 
lean_inc_ref(v___x_2000_);
v___x_2089_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2000_, v___y_2084_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; uint8_t v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
v___x_2091_ = l_Lean_Expr_hasMVar(v_a_2090_);
if (v___x_2091_ == 0)
{
uint8_t v___x_2092_; 
v___x_2092_ = l_Lean_Expr_hasFVar(v_a_2090_);
lean_dec(v_a_2090_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; 
lean_inc_ref(v___x_2000_);
v___x_2093_ = l_Lean_Meta_mkDecide(v___x_2000_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2095_; uint8_t v_transparency_2096_; uint8_t v___x_2097_; uint8_t v___x_2098_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v___x_2095_ = l_Lean_Meta_Context_config(v___y_2083_);
v_transparency_2096_ = lean_ctor_get_uint8(v___x_2095_, 9);
lean_dec_ref(v___x_2095_);
v___x_2097_ = 1;
v___x_2098_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2096_, v___x_2097_);
if (v___x_2098_ == 0)
{
lean_object* v_keyedConfig_2099_; uint8_t v_trackZetaDelta_2100_; lean_object* v_zetaDeltaSet_2101_; lean_object* v_lctx_2102_; lean_object* v_localInstances_2103_; lean_object* v_defEqCtx_x3f_2104_; lean_object* v_synthPendingDepth_2105_; lean_object* v_customCanUnfoldPredicate_x3f_2106_; uint8_t v_univApprox_2107_; uint8_t v_inTypeClassResolution_2108_; uint8_t v_cacheInferType_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v_keyedConfig_2099_ = lean_ctor_get(v___y_2083_, 0);
v_trackZetaDelta_2100_ = lean_ctor_get_uint8(v___y_2083_, sizeof(void*)*7);
v_zetaDeltaSet_2101_ = lean_ctor_get(v___y_2083_, 1);
v_lctx_2102_ = lean_ctor_get(v___y_2083_, 2);
v_localInstances_2103_ = lean_ctor_get(v___y_2083_, 3);
v_defEqCtx_x3f_2104_ = lean_ctor_get(v___y_2083_, 4);
v_synthPendingDepth_2105_ = lean_ctor_get(v___y_2083_, 5);
v_customCanUnfoldPredicate_x3f_2106_ = lean_ctor_get(v___y_2083_, 6);
v_univApprox_2107_ = lean_ctor_get_uint8(v___y_2083_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2108_ = lean_ctor_get_uint8(v___y_2083_, sizeof(void*)*7 + 2);
v_cacheInferType_2109_ = lean_ctor_get_uint8(v___y_2083_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2099_);
v___x_2110_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2097_, v_keyedConfig_2099_);
lean_inc(v_customCanUnfoldPredicate_x3f_2106_);
lean_inc(v_synthPendingDepth_2105_);
lean_inc(v_defEqCtx_x3f_2104_);
lean_inc_ref(v_localInstances_2103_);
lean_inc_ref(v_lctx_2102_);
lean_inc(v_zetaDeltaSet_2101_);
v___x_2111_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
lean_ctor_set(v___x_2111_, 1, v_zetaDeltaSet_2101_);
lean_ctor_set(v___x_2111_, 2, v_lctx_2102_);
lean_ctor_set(v___x_2111_, 3, v_localInstances_2103_);
lean_ctor_set(v___x_2111_, 4, v_defEqCtx_x3f_2104_);
lean_ctor_set(v___x_2111_, 5, v_synthPendingDepth_2105_);
lean_ctor_set(v___x_2111_, 6, v_customCanUnfoldPredicate_x3f_2106_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*7, v_trackZetaDelta_2100_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*7 + 1, v_univApprox_2107_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2108_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*7 + 3, v_cacheInferType_2109_);
lean_inc(v___y_2086_);
lean_inc_ref(v___y_2085_);
lean_inc(v___y_2084_);
lean_inc(v_a_2094_);
v___x_2112_ = lean_whnf(v_a_2094_, v___x_2111_, v___y_2084_, v___y_2085_, v___y_2086_);
v___y_2037_ = v___y_2084_;
v___y_2038_ = v___y_2085_;
v___y_2039_ = v_isHEq_2082_;
v___y_2040_ = v___y_2083_;
v___y_2041_ = v_a_2094_;
v___y_2042_ = v___y_2081_;
v___y_2043_ = v___y_2086_;
v___y_2044_ = v___x_2112_;
goto v___jp_2036_;
}
else
{
lean_object* v___x_2113_; 
lean_inc(v___y_2086_);
lean_inc_ref(v___y_2085_);
lean_inc(v___y_2084_);
lean_inc_ref(v___y_2083_);
lean_inc(v_a_2094_);
v___x_2113_ = lean_whnf(v_a_2094_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_);
v___y_2037_ = v___y_2084_;
v___y_2038_ = v___y_2085_;
v___y_2039_ = v_isHEq_2082_;
v___y_2040_ = v___y_2083_;
v___y_2041_ = v_a_2094_;
v___y_2042_ = v___y_2081_;
v___y_2043_ = v___y_2086_;
v___y_2044_ = v___x_2113_;
goto v___jp_2036_;
}
}
else
{
lean_object* v_a_2114_; 
v_a_2114_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2093_, 1);
v___y_2025_ = v___y_2084_;
v___y_2026_ = v___y_2085_;
v___y_2027_ = v_isHEq_2082_;
v___y_2028_ = v___y_2083_;
v___y_2029_ = v___y_2081_;
v___y_2030_ = v___y_2086_;
v_a_2031_ = v_a_2114_;
goto v___jp_2024_;
}
}
else
{
v___y_2002_ = v_isHEq_2082_;
v___y_2003_ = v___y_2081_;
v___y_2004_ = v___y_2083_;
v___y_2005_ = v___y_2084_;
v___y_2006_ = v___y_2085_;
v___y_2007_ = v___y_2086_;
goto v___jp_2001_;
}
}
else
{
lean_dec(v_a_2090_);
v___y_2002_ = v_isHEq_2082_;
v___y_2003_ = v___y_2081_;
v___y_2004_ = v___y_2083_;
v___y_2005_ = v___y_2084_;
v___y_2006_ = v___y_2085_;
v___y_2007_ = v___y_2086_;
goto v___jp_2001_;
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2115_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2089_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2089_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
else
{
v___y_2002_ = v_isHEq_2082_;
v___y_2003_ = v___y_2081_;
v___y_2004_ = v___y_2083_;
v___y_2005_ = v___y_2084_;
v___y_2006_ = v___y_2085_;
v___y_2007_ = v___y_2086_;
goto v___jp_2001_;
}
}
}
v___jp_2123_:
{
lean_object* v___x_2129_; 
lean_inc_ref(v___x_2000_);
v___x_2129_ = l_Lean_Meta_matchHEq_x3f(v___x_2000_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_a_2130_; 
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2130_);
lean_dec_ref_known(v___x_2129_, 1);
if (lean_obj_tag(v_a_2130_) == 1)
{
lean_object* v_val_2131_; lean_object* v_snd_2132_; lean_object* v_snd_2133_; lean_object* v_fst_2134_; lean_object* v_fst_2135_; lean_object* v_fst_2136_; lean_object* v_snd_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2230_; 
v_val_2131_ = lean_ctor_get(v_a_2130_, 0);
lean_inc(v_val_2131_);
lean_dec_ref_known(v_a_2130_, 1);
v_snd_2132_ = lean_ctor_get(v_val_2131_, 1);
lean_inc(v_snd_2132_);
v_snd_2133_ = lean_ctor_get(v_snd_2132_, 1);
lean_inc(v_snd_2133_);
v_fst_2134_ = lean_ctor_get(v_val_2131_, 0);
lean_inc(v_fst_2134_);
lean_dec(v_val_2131_);
v_fst_2135_ = lean_ctor_get(v_snd_2132_, 0);
lean_inc(v_fst_2135_);
lean_dec(v_snd_2132_);
v_fst_2136_ = lean_ctor_get(v_snd_2133_, 0);
v_snd_2137_ = lean_ctor_get(v_snd_2133_, 1);
v_isSharedCheck_2230_ = !lean_is_exclusive(v_snd_2133_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2139_ = v_snd_2133_;
v_isShared_2140_ = v_isSharedCheck_2230_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_snd_2137_);
lean_inc(v_fst_2136_);
lean_dec(v_snd_2133_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2230_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; 
v___x_2141_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2135_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
if (lean_obj_tag(v_a_2142_) == 1)
{
lean_object* v_val_2143_; lean_object* v___x_2144_; 
v_val_2143_ = lean_ctor_get(v_a_2142_, 0);
lean_inc(v_val_2143_);
lean_dec_ref_known(v_a_2142_, 1);
v___x_2144_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2137_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___x_2144_, 1);
if (lean_obj_tag(v_a_2145_) == 1)
{
lean_object* v_toConstantVal_2146_; lean_object* v_val_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2213_; 
v_toConstantVal_2146_ = lean_ctor_get(v_val_2143_, 0);
lean_inc_ref(v_toConstantVal_2146_);
lean_dec(v_val_2143_);
v_val_2147_ = lean_ctor_get(v_a_2145_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_a_2145_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2149_ = v_a_2145_;
v_isShared_2150_ = v_isSharedCheck_2213_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_val_2147_);
lean_dec(v_a_2145_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2213_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v_toConstantVal_2151_; lean_object* v_name_2152_; lean_object* v_name_2153_; uint8_t v___x_2154_; 
v_toConstantVal_2151_ = lean_ctor_get(v_val_2147_, 0);
lean_inc_ref(v_toConstantVal_2151_);
lean_dec(v_val_2147_);
v_name_2152_ = lean_ctor_get(v_toConstantVal_2146_, 0);
lean_inc(v_name_2152_);
lean_dec_ref(v_toConstantVal_2146_);
v_name_2153_ = lean_ctor_get(v_toConstantVal_2151_, 0);
lean_inc(v_name_2153_);
lean_dec_ref(v_toConstantVal_2151_);
v___x_2154_ = lean_name_eq(v_name_2152_, v_name_2153_);
lean_dec(v_name_2153_);
lean_dec(v_name_2152_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; 
v___x_2155_ = l_Lean_Meta_isExprDefEq(v_fst_2134_, v_fst_2136_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; uint8_t v___x_2157_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v___x_2157_ = lean_unbox(v_a_2156_);
lean_dec(v_a_2156_);
if (v___x_2157_ == 0)
{
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
v___y_2081_ = v_isEq_2124_;
v_isHEq_2082_ = v___x_1946_;
v___y_2083_ = v___y_2125_;
v___y_2084_ = v___y_2126_;
v___y_2085_ = v___y_2127_;
v___y_2086_ = v___y_2128_;
goto v___jp_2080_;
}
else
{
lean_object* v___x_2158_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec_ref(v_config_1935_);
lean_inc(v_mvarId_1936_);
v___x_2158_ = l_Lean_MVarId_getType(v_mvarId_1936_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
v___x_2160_ = l_Lean_LocalDecl_toExpr(v_val_1967_);
v___x_2161_ = l_Lean_Meta_mkEqOfHEq(v___x_2160_, v___x_1946_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = l_Lean_Meta_mkNoConfusion(v_a_2159_, v_a_2162_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2165_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
lean_inc(v_a_2164_);
lean_dec_ref_known(v___x_2163_, 1);
v___x_2165_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1936_, v_a_2164_, v___y_2126_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v___x_2166_; lean_object* v___x_2168_; 
lean_dec_ref_known(v___x_2165_, 1);
v___x_2166_ = lean_box(v___x_1946_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 0, v___x_2166_);
v___x_2168_ = v___x_2149_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
lean_object* v___x_2170_; 
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 1, v___x_1971_);
lean_ctor_set(v___x_2139_, 0, v___x_2168_);
v___x_2170_ = v___x_2139_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v___x_1971_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
v_a_1953_ = v___x_2170_;
goto v___jp_1952_;
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_2173_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2165_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2165_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2181_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2163_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2163_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
lean_dec(v_a_2159_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2189_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2161_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2161_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2197_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2158_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2158_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2205_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2155_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2155_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
else
{
lean_del_object(v___x_2149_);
lean_del_object(v___x_2139_);
lean_dec(v_fst_2136_);
lean_dec(v_fst_2134_);
v___y_2081_ = v_isEq_2124_;
v_isHEq_2082_ = v___x_1946_;
v___y_2083_ = v___y_2125_;
v___y_2084_ = v___y_2126_;
v___y_2085_ = v___y_2127_;
v___y_2086_ = v___y_2128_;
goto v___jp_2080_;
}
}
}
else
{
lean_dec(v_a_2145_);
lean_dec(v_val_2143_);
lean_del_object(v___x_2139_);
lean_dec(v_fst_2136_);
lean_dec(v_fst_2134_);
v___y_2081_ = v_isEq_2124_;
v_isHEq_2082_ = v___x_1946_;
v___y_2083_ = v___y_2125_;
v___y_2084_ = v___y_2126_;
v___y_2085_ = v___y_2127_;
v___y_2086_ = v___y_2128_;
goto v___jp_2080_;
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec(v_val_2143_);
lean_del_object(v___x_2139_);
lean_dec(v_fst_2136_);
lean_dec(v_fst_2134_);
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2214_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2144_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2144_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
else
{
lean_dec(v_a_2142_);
lean_del_object(v___x_2139_);
lean_dec(v_snd_2137_);
lean_dec(v_fst_2136_);
lean_dec(v_fst_2134_);
v___y_2081_ = v_isEq_2124_;
v_isHEq_2082_ = v___x_1946_;
v___y_2083_ = v___y_2125_;
v___y_2084_ = v___y_2126_;
v___y_2085_ = v___y_2127_;
v___y_2086_ = v___y_2128_;
goto v___jp_2080_;
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_del_object(v___x_2139_);
lean_dec(v_snd_2137_);
lean_dec(v_fst_2136_);
lean_dec(v_fst_2134_);
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2222_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2141_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2141_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
}
else
{
lean_dec(v_a_2130_);
v___y_2081_ = v_isEq_2124_;
v_isHEq_2082_ = v___x_1999_;
v___y_2083_ = v___y_2125_;
v___y_2084_ = v___y_2126_;
v___y_2085_ = v___y_2127_;
v___y_2086_ = v___y_2128_;
goto v___jp_2080_;
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2231_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2129_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2129_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
v___jp_2239_:
{
lean_object* v___x_2244_; 
lean_inc_ref(v___x_2000_);
v___x_2244_ = l_Lean_Meta_matchEq_x3f(v___x_2000_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
if (lean_obj_tag(v_a_2245_) == 1)
{
lean_object* v_val_2246_; lean_object* v_snd_2247_; lean_object* v_fst_2248_; lean_object* v_snd_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2321_; 
v_val_2246_ = lean_ctor_get(v_a_2245_, 0);
lean_inc(v_val_2246_);
lean_dec_ref_known(v_a_2245_, 1);
v_snd_2247_ = lean_ctor_get(v_val_2246_, 1);
lean_inc(v_snd_2247_);
lean_dec(v_val_2246_);
v_fst_2248_ = lean_ctor_get(v_snd_2247_, 0);
v_snd_2249_ = lean_ctor_get(v_snd_2247_, 1);
v_isSharedCheck_2321_ = !lean_is_exclusive(v_snd_2247_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2251_ = v_snd_2247_;
v_isShared_2252_ = v_isSharedCheck_2321_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_snd_2249_);
lean_inc(v_fst_2248_);
lean_dec(v_snd_2247_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2321_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2253_; 
v___x_2253_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2248_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v_a_2254_; 
v_a_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_a_2254_);
lean_dec_ref_known(v___x_2253_, 1);
if (lean_obj_tag(v_a_2254_) == 1)
{
lean_object* v_val_2255_; lean_object* v___x_2256_; 
v_val_2255_ = lean_ctor_get(v_a_2254_, 0);
lean_inc(v_val_2255_);
lean_dec_ref_known(v_a_2254_, 1);
v___x_2256_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2249_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v_a_2257_; 
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref_known(v___x_2256_, 1);
if (lean_obj_tag(v_a_2257_) == 1)
{
lean_object* v_toConstantVal_2258_; lean_object* v_val_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2304_; 
v_toConstantVal_2258_ = lean_ctor_get(v_val_2255_, 0);
lean_inc_ref(v_toConstantVal_2258_);
lean_dec(v_val_2255_);
v_val_2259_ = lean_ctor_get(v_a_2257_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v_a_2257_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2261_ = v_a_2257_;
v_isShared_2262_ = v_isSharedCheck_2304_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_val_2259_);
lean_dec(v_a_2257_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2304_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v_toConstantVal_2263_; lean_object* v_name_2264_; lean_object* v_name_2265_; uint8_t v___x_2266_; 
v_toConstantVal_2263_ = lean_ctor_get(v_val_2259_, 0);
lean_inc_ref(v_toConstantVal_2263_);
lean_dec(v_val_2259_);
v_name_2264_ = lean_ctor_get(v_toConstantVal_2258_, 0);
lean_inc(v_name_2264_);
lean_dec_ref(v_toConstantVal_2258_);
v_name_2265_ = lean_ctor_get(v_toConstantVal_2263_, 0);
lean_inc(v_name_2265_);
lean_dec_ref(v_toConstantVal_2263_);
v___x_2266_ = lean_name_eq(v_name_2264_, v_name_2265_);
lean_dec(v_name_2265_);
lean_dec(v_name_2264_);
if (v___x_2266_ == 0)
{
lean_object* v___x_2267_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec_ref(v_config_1935_);
lean_inc(v_mvarId_1936_);
v___x_2267_ = l_Lean_MVarId_getType(v_mvarId_1936_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2267_, 1);
v___x_2269_ = l_Lean_LocalDecl_toExpr(v_val_1967_);
v___x_2270_ = l_Lean_Meta_mkNoConfusion(v_a_2268_, v___x_2269_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_a_2271_; lean_object* v___x_2272_; 
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
lean_inc(v_a_2271_);
lean_dec_ref_known(v___x_2270_, 1);
v___x_2272_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1936_, v_a_2271_, v___y_2241_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v___x_2273_; lean_object* v___x_2275_; 
lean_dec_ref_known(v___x_2272_, 1);
v___x_2273_ = lean_box(v___x_1946_);
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2273_);
v___x_2275_ = v___x_2261_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2273_);
v___x_2275_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
lean_object* v___x_2277_; 
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v___x_1971_);
lean_ctor_set(v___x_2251_, 0, v___x_2275_);
v___x_2277_ = v___x_2251_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v___x_1971_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
v_a_1953_ = v___x_2277_;
goto v___jp_1952_;
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_del_object(v___x_2261_);
lean_del_object(v___x_2251_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_2280_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2272_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2272_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_del_object(v___x_2261_);
lean_del_object(v___x_2251_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2288_ = lean_ctor_get(v___x_2270_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2270_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2270_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_del_object(v___x_2261_);
lean_del_object(v___x_2251_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2296_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2267_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2267_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
else
{
lean_del_object(v___x_2261_);
lean_del_object(v___x_2251_);
v_isEq_2124_ = v___x_1946_;
v___y_2125_ = v___y_2240_;
v___y_2126_ = v___y_2241_;
v___y_2127_ = v___y_2242_;
v___y_2128_ = v___y_2243_;
goto v___jp_2123_;
}
}
}
else
{
lean_dec(v_a_2257_);
lean_dec(v_val_2255_);
lean_del_object(v___x_2251_);
v_isEq_2124_ = v___x_1946_;
v___y_2125_ = v___y_2240_;
v___y_2126_ = v___y_2241_;
v___y_2127_ = v___y_2242_;
v___y_2128_ = v___y_2243_;
goto v___jp_2123_;
}
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec(v_val_2255_);
lean_del_object(v___x_2251_);
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2305_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2256_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2256_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
else
{
lean_dec(v_a_2254_);
lean_del_object(v___x_2251_);
lean_dec(v_snd_2249_);
v_isEq_2124_ = v___x_1946_;
v___y_2125_ = v___y_2240_;
v___y_2126_ = v___y_2241_;
v___y_2127_ = v___y_2242_;
v___y_2128_ = v___y_2243_;
goto v___jp_2123_;
}
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_del_object(v___x_2251_);
lean_dec(v_snd_2249_);
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2313_ = lean_ctor_get(v___x_2253_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2253_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2253_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
else
{
lean_dec(v_a_2245_);
v_isEq_2124_ = v___x_1999_;
v___y_2125_ = v___y_2240_;
v___y_2126_ = v___y_2241_;
v___y_2127_ = v___y_2242_;
v___y_2128_ = v___y_2243_;
goto v___jp_2123_;
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2322_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2244_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2244_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
v___jp_2330_:
{
lean_object* v___x_2335_; 
lean_inc_ref(v___x_2000_);
v___x_2335_ = l_Lean_refutableHasNotBit_x3f(v___x_2000_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
if (lean_obj_tag(v_a_2336_) == 1)
{
lean_object* v_val_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2376_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec_ref(v_config_1935_);
v_val_2337_ = lean_ctor_get(v_a_2336_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_a_2336_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2339_ = v_a_2336_;
v_isShared_2340_ = v_isSharedCheck_2376_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_val_2337_);
lean_dec(v_a_2336_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2376_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2341_; 
lean_inc(v_mvarId_1936_);
v___x_2341_ = l_Lean_MVarId_getType(v_mvarId_1936_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2341_, 1);
v___x_2343_ = l_Lean_LocalDecl_toExpr(v_val_1967_);
v___x_2344_ = l_Lean_Meta_mkAbsurd(v_a_2342_, v_val_2337_, v___x_2343_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; lean_object* v___x_2346_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_a_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v___x_2346_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1936_, v_a_2345_, v___y_2332_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v___x_2347_; lean_object* v___x_2349_; 
lean_dec_ref_known(v___x_2346_, 1);
v___x_2347_ = lean_box(v___x_1946_);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v___x_2347_);
v___x_2349_ = v___x_2339_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2350_; 
v___x_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2349_);
lean_ctor_set(v___x_2350_, 1, v___x_1971_);
v_a_1953_ = v___x_2350_;
goto v___jp_1952_;
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_del_object(v___x_2339_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_2352_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2346_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2346_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_del_object(v___x_2339_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2360_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2344_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2344_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_del_object(v___x_2339_);
lean_dec(v_val_2337_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2368_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2341_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2341_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
}
else
{
lean_object* v___x_2377_; 
lean_dec(v_a_2336_);
lean_inc_ref(v___x_2000_);
v___x_2377_ = l_Lean_Meta_matchNe_x3f(v___x_2000_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2378_);
lean_dec_ref_known(v___x_2377_, 1);
if (lean_obj_tag(v_a_2378_) == 1)
{
lean_object* v_val_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2448_; 
v_val_2379_ = lean_ctor_get(v_a_2378_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v_a_2378_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2381_ = v_a_2378_;
v_isShared_2382_ = v_isSharedCheck_2448_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_val_2379_);
lean_dec(v_a_2378_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2448_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v_snd_2383_; lean_object* v_fst_2384_; lean_object* v_snd_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2447_; 
v_snd_2383_ = lean_ctor_get(v_val_2379_, 1);
lean_inc(v_snd_2383_);
lean_dec(v_val_2379_);
v_fst_2384_ = lean_ctor_get(v_snd_2383_, 0);
v_snd_2385_ = lean_ctor_get(v_snd_2383_, 1);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_snd_2383_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2387_ = v_snd_2383_;
v_isShared_2388_ = v_isSharedCheck_2447_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_snd_2385_);
lean_inc(v_fst_2384_);
lean_dec(v_snd_2383_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2447_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; 
lean_inc(v_fst_2384_);
v___x_2389_ = l_Lean_Meta_isExprDefEq(v_fst_2384_, v_snd_2385_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; uint8_t v___x_2391_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2390_);
lean_dec_ref_known(v___x_2389_, 1);
v___x_2391_ = lean_unbox(v_a_2390_);
lean_dec(v_a_2390_);
if (v___x_2391_ == 0)
{
lean_del_object(v___x_2387_);
lean_dec(v_fst_2384_);
lean_del_object(v___x_2381_);
v___y_2240_ = v___y_2331_;
v___y_2241_ = v___y_2332_;
v___y_2242_ = v___y_2333_;
v___y_2243_ = v___y_2334_;
goto v___jp_2239_;
}
else
{
lean_object* v___x_2392_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec_ref(v_config_1935_);
lean_inc(v_mvarId_1936_);
v___x_2392_ = l_Lean_MVarId_getType(v_mvarId_1936_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2394_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
lean_inc(v_a_2393_);
lean_dec_ref_known(v___x_2392_, 1);
v___x_2394_ = l_Lean_Meta_mkEqRefl(v_fst_2384_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = l_Lean_LocalDecl_toExpr(v_val_1967_);
v___x_2397_ = l_Lean_Meta_mkAbsurd(v_a_2393_, v_a_2395_, v___x_2396_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2399_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_a_2398_);
lean_dec_ref_known(v___x_2397_, 1);
v___x_2399_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1936_, v_a_2398_, v___y_2332_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v___x_2400_; lean_object* v___x_2402_; 
lean_dec_ref_known(v___x_2399_, 1);
v___x_2400_ = lean_box(v___x_1946_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v___x_2400_);
v___x_2402_ = v___x_2381_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2404_; 
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_1971_);
lean_ctor_set(v___x_2387_, 0, v___x_2402_);
v___x_2404_ = v___x_2387_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v___x_2402_);
lean_ctor_set(v_reuseFailAlloc_2405_, 1, v___x_1971_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
v_a_1953_ = v___x_2404_;
goto v___jp_1952_;
}
}
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_del_object(v___x_2387_);
lean_del_object(v___x_2381_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_2407_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2399_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2399_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
lean_del_object(v___x_2387_);
lean_del_object(v___x_2381_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2415_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2397_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2397_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
lean_dec(v_a_2393_);
lean_del_object(v___x_2387_);
lean_del_object(v___x_2381_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2423_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2394_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2394_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
lean_del_object(v___x_2387_);
lean_dec(v_fst_2384_);
lean_del_object(v___x_2381_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
v_a_2431_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2392_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2392_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_del_object(v___x_2387_);
lean_dec(v_fst_2384_);
lean_del_object(v___x_2381_);
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2439_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2389_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2389_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2378_);
v___y_2240_ = v___y_2331_;
v___y_2241_ = v___y_2332_;
v___y_2242_ = v___y_2333_;
v___y_2243_ = v___y_2334_;
goto v___jp_2239_;
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2449_ = lean_ctor_get(v___x_2377_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2377_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2377_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2464_; 
lean_dec_ref(v___x_2000_);
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_2457_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2459_ = v___x_2335_;
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2335_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2462_; 
if (v_isShared_2460_ == 0)
{
v___x_2462_ = v___x_2459_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_a_2457_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
}
else
{
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_1961_ = v___x_1972_;
goto v___jp_1960_;
}
v___jp_1973_:
{
uint8_t v_emptyType_1980_; 
v_emptyType_1980_ = lean_ctor_get_uint8(v_config_1935_, sizeof(void*)*1 + 1);
if (v_emptyType_1980_ == 0)
{
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_1961_ = v___x_1972_;
goto v___jp_1960_;
}
else
{
if (v___y_1975_ == 0)
{
if (v___y_1974_ == 0)
{
lean_object* v_searchFuel_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v_searchFuel_1981_ = lean_ctor_get(v_config_1935_, 0);
v___x_1982_ = l_Lean_LocalDecl_fvarId(v_val_1967_);
lean_dec(v_val_1967_);
lean_inc(v_searchFuel_1981_);
lean_inc(v_mvarId_1936_);
v___x_1983_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1936_, v___x_1982_, v_searchFuel_1981_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; uint8_t v___x_1985_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1983_, 1);
v___x_1985_ = lean_unbox(v_a_1984_);
lean_dec(v_a_1984_);
if (v___x_1985_ == 0)
{
lean_del_object(v___x_1969_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_1961_ = v___x_1972_;
goto v___jp_1960_;
}
else
{
lean_object* v___x_1986_; lean_object* v___x_1988_; 
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v___x_1986_ = lean_box(v___x_1946_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v___x_1986_);
v___x_1988_ = v___x_1969_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1986_);
v___x_1988_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
lean_ctor_set(v___x_1989_, 1, v___x_1971_);
v_a_1953_ = v___x_1989_;
goto v___jp_1952_;
}
}
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
lean_del_object(v___x_1969_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
lean_dec(v_mvarId_1936_);
lean_dec_ref(v_config_1935_);
v_a_1991_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1983_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1983_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
else
{
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_1961_ = v___x_1972_;
goto v___jp_1960_;
}
}
else
{
lean_del_object(v___x_1969_);
lean_dec(v_val_1967_);
lean_del_object(v___x_1950_);
lean_dec(v_snd_1948_);
v_a_1961_ = v___x_1972_;
goto v___jp_1960_;
}
}
}
}
}
v___jp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1956_; 
v___x_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1954_, 0, v_a_1953_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1954_);
v___x_1956_ = v___x_1950_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1954_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_snd_1948_);
v___x_1956_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
lean_object* v___x_1957_; 
v___x_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
return v___x_1957_;
}
}
v___jp_1960_:
{
lean_object* v___x_1962_; size_t v___x_1963_; size_t v___x_1964_; 
v___x_1962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1959_);
lean_ctor_set(v___x_1962_, 1, v_a_1961_);
v___x_1963_ = ((size_t)1ULL);
v___x_1964_ = lean_usize_add(v_i_1939_, v___x_1963_);
v_i_1939_ = v___x_1964_;
v_b_1940_ = v___x_1962_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object* v_config_2531_, lean_object* v_mvarId_2532_, lean_object* v_as_2533_, lean_object* v_sz_2534_, lean_object* v_i_2535_, lean_object* v_b_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
size_t v_sz_boxed_2542_; size_t v_i_boxed_2543_; lean_object* v_res_2544_; 
v_sz_boxed_2542_ = lean_unbox_usize(v_sz_2534_);
lean_dec(v_sz_2534_);
v_i_boxed_2543_ = lean_unbox_usize(v_i_2535_);
lean_dec(v_i_2535_);
v_res_2544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2531_, v_mvarId_2532_, v_as_2533_, v_sz_boxed_2542_, v_i_boxed_2543_, v_b_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec_ref(v_as_2533_);
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object* v_config_2545_, lean_object* v_mvarId_2546_, lean_object* v_as_2547_, size_t v_sz_2548_, size_t v_i_2549_, lean_object* v_b_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
uint8_t v___x_2556_; 
v___x_2556_ = lean_usize_dec_lt(v_i_2549_, v_sz_2548_);
if (v___x_2556_ == 0)
{
lean_object* v___x_2557_; 
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v_b_2550_);
return v___x_2557_;
}
else
{
lean_object* v_snd_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_3139_; 
v_snd_2558_ = lean_ctor_get(v_b_2550_, 1);
v_isSharedCheck_3139_ = !lean_is_exclusive(v_b_2550_);
if (v_isSharedCheck_3139_ == 0)
{
lean_object* v_unused_3140_; 
v_unused_3140_ = lean_ctor_get(v_b_2550_, 0);
lean_dec(v_unused_3140_);
v___x_2560_ = v_b_2550_;
v_isShared_2561_ = v_isSharedCheck_3139_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_snd_2558_);
lean_dec(v_b_2550_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_3139_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v_a_2563_; lean_object* v___x_2569_; lean_object* v_a_2571_; lean_object* v_a_2576_; 
v___x_2569_ = lean_box(0);
v_a_2576_ = lean_array_uget(v_as_2547_, v_i_2549_);
if (lean_obj_tag(v_a_2576_) == 0)
{
lean_del_object(v___x_2560_);
v_a_2571_ = v_snd_2558_;
goto v___jp_2570_;
}
else
{
lean_object* v_val_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_3138_; 
v_val_2577_ = lean_ctor_get(v_a_2576_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v_a_2576_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_2579_ = v_a_2576_;
v_isShared_2580_ = v_isSharedCheck_3138_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_val_2577_);
lean_dec(v_a_2576_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_3138_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; uint8_t v___y_2584_; uint8_t v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; uint8_t v___x_2609_; 
v___x_2581_ = lean_box(0);
v___x_2582_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_2609_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2577_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; uint8_t v___y_2612_; uint8_t v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; lean_object* v___y_2616_; lean_object* v___y_2617_; uint8_t v___y_2635_; lean_object* v___y_2636_; uint8_t v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v_a_2641_; uint8_t v___y_2647_; lean_object* v___y_2648_; uint8_t v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; uint8_t v___y_2691_; uint8_t v_isHEq_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; uint8_t v_isEq_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___x_3075_; 
v___x_2610_ = l_Lean_LocalDecl_type(v_val_2577_);
lean_inc_ref(v___x_2610_);
v___x_3075_ = l_Lean_Meta_matchNot_x3f(v___x_2610_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
if (lean_obj_tag(v_a_3076_) == 1)
{
lean_object* v_val_3077_; lean_object* v___x_3078_; 
v_val_3077_ = lean_ctor_get(v_a_3076_, 0);
lean_inc(v_val_3077_);
lean_dec_ref_known(v_a_3076_, 1);
v___x_3078_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3077_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_a_3079_);
lean_dec_ref_known(v___x_3078_, 1);
if (lean_obj_tag(v_a_3079_) == 1)
{
lean_object* v_val_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3121_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec_ref(v_config_2545_);
v_val_3080_ = lean_ctor_get(v_a_3079_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_a_3079_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3082_ = v_a_3079_;
v_isShared_3083_ = v_isSharedCheck_3121_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_val_3080_);
lean_dec(v_a_3079_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3121_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3084_; 
lean_inc(v_mvarId_2546_);
v___x_3084_ = l_Lean_MVarId_getType(v_mvarId_2546_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3085_);
lean_dec_ref_known(v___x_3084_, 1);
v___x_3086_ = l_Lean_LocalDecl_toExpr(v_val_2577_);
v___x_3087_ = l_Lean_mkFVar(v_val_3080_);
v___x_3088_ = l_Lean_Expr_app___override(v___x_3086_, v___x_3087_);
v___x_3089_ = l_Lean_Meta_mkFalseElim(v_a_3085_, v___x_3088_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3091_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2546_, v_a_3090_, v___y_2552_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v___x_3092_; lean_object* v___x_3094_; 
lean_dec_ref_known(v___x_3091_, 1);
v___x_3092_ = lean_box(v___x_2556_);
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 0, v___x_3092_);
v___x_3094_ = v___x_3082_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3095_; 
v___x_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
lean_ctor_set(v___x_3095_, 1, v___x_2581_);
v_a_2563_ = v___x_3095_;
goto v___jp_2562_;
}
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
lean_del_object(v___x_3082_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_3097_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_3091_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3091_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_del_object(v___x_3082_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_3105_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3089_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3089_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3120_; 
lean_del_object(v___x_3082_);
lean_dec(v_val_3080_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_3113_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3115_ = v___x_3084_;
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_3084_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3118_; 
if (v_isShared_3116_ == 0)
{
v___x_3118_ = v___x_3115_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_a_3113_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
}
else
{
lean_dec(v_a_3079_);
v___y_2941_ = v___y_2551_;
v___y_2942_ = v___y_2552_;
v___y_2943_ = v___y_2553_;
v___y_2944_ = v___y_2554_;
goto v___jp_2940_;
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3129_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_3122_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3124_ = v___x_3078_;
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3078_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
if (v_isShared_3125_ == 0)
{
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
else
{
lean_dec(v_a_3076_);
v___y_2941_ = v___y_2551_;
v___y_2942_ = v___y_2552_;
v___y_2943_ = v___y_2553_;
v___y_2944_ = v___y_2554_;
goto v___jp_2940_;
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_3130_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3075_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3075_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
v___jp_2611_:
{
uint8_t v_genDiseq_2618_; 
v_genDiseq_2618_ = lean_ctor_get_uint8(v_config_2545_, sizeof(void*)*1 + 2);
if (v_genDiseq_2618_ == 0)
{
lean_dec_ref(v___x_2610_);
v___y_2584_ = v___y_2612_;
v___y_2585_ = v___y_2613_;
v___y_2586_ = v___y_2614_;
v___y_2587_ = v___y_2615_;
v___y_2588_ = v___y_2616_;
v___y_2589_ = v___y_2617_;
goto v___jp_2583_;
}
else
{
uint8_t v___x_2619_; 
v___x_2619_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2610_);
lean_dec_ref(v___x_2610_);
if (v___x_2619_ == 0)
{
v___y_2584_ = v___y_2612_;
v___y_2585_ = v___y_2613_;
v___y_2586_ = v___y_2614_;
v___y_2587_ = v___y_2615_;
v___y_2588_ = v___y_2616_;
v___y_2589_ = v___y_2617_;
goto v___jp_2583_;
}
else
{
lean_object* v___x_2620_; 
lean_inc(v_val_2577_);
lean_inc(v_mvarId_2546_);
v___x_2620_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_2546_, v_val_2577_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; uint8_t v___x_2622_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
v___x_2622_ = lean_unbox(v_a_2621_);
lean_dec(v_a_2621_);
if (v___x_2622_ == 0)
{
v___y_2584_ = v___y_2612_;
v___y_2585_ = v___y_2613_;
v___y_2586_ = v___y_2614_;
v___y_2587_ = v___y_2615_;
v___y_2588_ = v___y_2616_;
v___y_2589_ = v___y_2617_;
goto v___jp_2583_;
}
else
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v___x_2623_ = lean_box(v___x_2556_);
v___x_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
v___x_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
lean_ctor_set(v___x_2625_, 1, v___x_2581_);
v_a_2563_ = v___x_2625_;
goto v___jp_2562_;
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2626_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2620_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2620_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
}
}
v___jp_2634_:
{
uint8_t v___x_2642_; 
v___x_2642_ = l_Lean_Exception_isInterrupt(v_a_2641_);
if (v___x_2642_ == 0)
{
uint8_t v___x_2643_; 
lean_inc_ref(v_a_2641_);
v___x_2643_ = l_Lean_Exception_isRuntime(v_a_2641_);
if (v___x_2643_ == 0)
{
lean_dec_ref(v_a_2641_);
v___y_2612_ = v___y_2635_;
v___y_2613_ = v___y_2637_;
v___y_2614_ = v___y_2640_;
v___y_2615_ = v___y_2639_;
v___y_2616_ = v___y_2636_;
v___y_2617_ = v___y_2638_;
goto v___jp_2611_;
}
else
{
lean_object* v___x_2644_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v___x_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_a_2641_);
return v___x_2644_;
}
}
else
{
lean_object* v___x_2645_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v___x_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2645_, 0, v_a_2641_);
return v___x_2645_;
}
}
v___jp_2646_:
{
if (lean_obj_tag(v___y_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; 
v_a_2655_ = lean_ctor_get(v___y_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___y_2654_, 1);
v___x_2656_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2657_ = l_Lean_Expr_isConstOf(v_a_2655_, v___x_2656_);
lean_dec(v_a_2655_);
if (v___x_2657_ == 0)
{
lean_dec_ref(v___y_2650_);
v___y_2612_ = v___y_2647_;
v___y_2613_ = v___y_2649_;
v___y_2614_ = v___y_2653_;
v___y_2615_ = v___y_2652_;
v___y_2616_ = v___y_2648_;
v___y_2617_ = v___y_2651_;
goto v___jp_2611_;
}
else
{
lean_object* v___x_2658_; 
lean_inc_ref(v___y_2650_);
v___x_2658_ = l_Lean_Meta_mkEqRefl(v___y_2650_, v___y_2653_, v___y_2652_, v___y_2648_, v___y_2651_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2660_; lean_object* v_dummy_2661_; lean_object* v_nargs_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2661_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_2662_ = l_Lean_Expr_getAppNumArgs(v___y_2650_);
lean_inc(v_nargs_2662_);
v___x_2663_ = lean_mk_array(v_nargs_2662_, v_dummy_2661_);
v___x_2664_ = lean_unsigned_to_nat(1u);
v___x_2665_ = lean_nat_sub(v_nargs_2662_, v___x_2664_);
lean_dec(v_nargs_2662_);
v___x_2666_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_2650_, v___x_2663_, v___x_2665_);
v___x_2667_ = lean_array_push(v___x_2666_, v_a_2659_);
v___x_2668_ = l_Lean_mkAppN(v___x_2660_, v___x_2667_);
lean_dec_ref(v___x_2667_);
lean_inc(v_mvarId_2546_);
v___x_2669_ = l_Lean_MVarId_getType(v_mvarId_2546_, v___y_2653_, v___y_2652_, v___y_2648_, v___y_2651_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2670_);
lean_dec_ref_known(v___x_2669_, 1);
lean_inc(v_val_2577_);
v___x_2671_ = l_Lean_LocalDecl_toExpr(v_val_2577_);
v___x_2672_ = l_Lean_Meta_mkAbsurd(v_a_2670_, v___x_2671_, v___x_2668_, v___y_2653_, v___y_2652_, v___y_2648_, v___y_2651_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2674_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___x_2672_, 1);
lean_inc(v_mvarId_2546_);
v___x_2674_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2546_, v_a_2673_, v___y_2652_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2683_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2683_ == 0)
{
lean_object* v_unused_2684_; 
v_unused_2684_ = lean_ctor_get(v___x_2674_, 0);
lean_dec(v_unused_2684_);
v___x_2676_ = v___x_2674_;
v_isShared_2677_ = v_isSharedCheck_2683_;
goto v_resetjp_2675_;
}
else
{
lean_dec(v___x_2674_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2683_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2678_; lean_object* v___x_2680_; 
v___x_2678_ = lean_box(v___x_2556_);
if (v_isShared_2677_ == 0)
{
lean_ctor_set_tag(v___x_2676_, 1);
lean_ctor_set(v___x_2676_, 0, v___x_2678_);
v___x_2680_ = v___x_2676_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2678_);
v___x_2680_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
lean_object* v___x_2681_; 
v___x_2681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
lean_ctor_set(v___x_2681_, 1, v___x_2581_);
v_a_2563_ = v___x_2681_;
goto v___jp_2562_;
}
}
}
else
{
lean_object* v_a_2685_; 
v_a_2685_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2674_, 1);
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v___y_2649_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2652_;
v___y_2640_ = v___y_2653_;
v_a_2641_ = v_a_2685_;
goto v___jp_2634_;
}
}
else
{
lean_object* v_a_2686_; 
v_a_2686_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2672_, 1);
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v___y_2649_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2652_;
v___y_2640_ = v___y_2653_;
v_a_2641_ = v_a_2686_;
goto v___jp_2634_;
}
}
else
{
lean_object* v_a_2687_; 
lean_dec_ref(v___x_2668_);
v_a_2687_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2669_, 1);
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v___y_2649_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2652_;
v___y_2640_ = v___y_2653_;
v_a_2641_ = v_a_2687_;
goto v___jp_2634_;
}
}
else
{
lean_object* v_a_2688_; 
lean_dec_ref(v___y_2650_);
v_a_2688_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2658_, 1);
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v___y_2649_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2652_;
v___y_2640_ = v___y_2653_;
v_a_2641_ = v_a_2688_;
goto v___jp_2634_;
}
}
}
else
{
lean_object* v_a_2689_; 
lean_dec_ref(v___y_2650_);
v_a_2689_ = lean_ctor_get(v___y_2654_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___y_2654_, 1);
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v___y_2649_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2652_;
v___y_2640_ = v___y_2653_;
v_a_2641_ = v_a_2689_;
goto v___jp_2634_;
}
}
v___jp_2690_:
{
uint8_t v_useDecide_2697_; 
v_useDecide_2697_ = lean_ctor_get_uint8(v_config_2545_, sizeof(void*)*1);
if (v_useDecide_2697_ == 0)
{
v___y_2612_ = v___y_2691_;
v___y_2613_ = v_isHEq_2692_;
v___y_2614_ = v___y_2693_;
v___y_2615_ = v___y_2694_;
v___y_2616_ = v___y_2695_;
v___y_2617_ = v___y_2696_;
goto v___jp_2611_;
}
else
{
uint8_t v___x_2698_; 
v___x_2698_ = l_Lean_Expr_hasFVar(v___x_2610_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2699_; 
lean_inc_ref(v___x_2610_);
v___x_2699_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2610_, v___y_2694_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; uint8_t v___x_2701_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2701_ = l_Lean_Expr_hasMVar(v_a_2700_);
if (v___x_2701_ == 0)
{
uint8_t v___x_2702_; 
v___x_2702_ = l_Lean_Expr_hasFVar(v_a_2700_);
lean_dec(v_a_2700_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; 
lean_inc_ref(v___x_2610_);
v___x_2703_ = l_Lean_Meta_mkDecide(v___x_2610_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2705_; uint8_t v_transparency_2706_; uint8_t v___x_2707_; uint8_t v___x_2708_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
v___x_2705_ = l_Lean_Meta_Context_config(v___y_2693_);
v_transparency_2706_ = lean_ctor_get_uint8(v___x_2705_, 9);
lean_dec_ref(v___x_2705_);
v___x_2707_ = 1;
v___x_2708_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2706_, v___x_2707_);
if (v___x_2708_ == 0)
{
lean_object* v_keyedConfig_2709_; uint8_t v_trackZetaDelta_2710_; lean_object* v_zetaDeltaSet_2711_; lean_object* v_lctx_2712_; lean_object* v_localInstances_2713_; lean_object* v_defEqCtx_x3f_2714_; lean_object* v_synthPendingDepth_2715_; lean_object* v_customCanUnfoldPredicate_x3f_2716_; uint8_t v_univApprox_2717_; uint8_t v_inTypeClassResolution_2718_; uint8_t v_cacheInferType_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
v_keyedConfig_2709_ = lean_ctor_get(v___y_2693_, 0);
v_trackZetaDelta_2710_ = lean_ctor_get_uint8(v___y_2693_, sizeof(void*)*7);
v_zetaDeltaSet_2711_ = lean_ctor_get(v___y_2693_, 1);
v_lctx_2712_ = lean_ctor_get(v___y_2693_, 2);
v_localInstances_2713_ = lean_ctor_get(v___y_2693_, 3);
v_defEqCtx_x3f_2714_ = lean_ctor_get(v___y_2693_, 4);
v_synthPendingDepth_2715_ = lean_ctor_get(v___y_2693_, 5);
v_customCanUnfoldPredicate_x3f_2716_ = lean_ctor_get(v___y_2693_, 6);
v_univApprox_2717_ = lean_ctor_get_uint8(v___y_2693_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2718_ = lean_ctor_get_uint8(v___y_2693_, sizeof(void*)*7 + 2);
v_cacheInferType_2719_ = lean_ctor_get_uint8(v___y_2693_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2709_);
v___x_2720_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2707_, v_keyedConfig_2709_);
lean_inc(v_customCanUnfoldPredicate_x3f_2716_);
lean_inc(v_synthPendingDepth_2715_);
lean_inc(v_defEqCtx_x3f_2714_);
lean_inc_ref(v_localInstances_2713_);
lean_inc_ref(v_lctx_2712_);
lean_inc(v_zetaDeltaSet_2711_);
v___x_2721_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
lean_ctor_set(v___x_2721_, 1, v_zetaDeltaSet_2711_);
lean_ctor_set(v___x_2721_, 2, v_lctx_2712_);
lean_ctor_set(v___x_2721_, 3, v_localInstances_2713_);
lean_ctor_set(v___x_2721_, 4, v_defEqCtx_x3f_2714_);
lean_ctor_set(v___x_2721_, 5, v_synthPendingDepth_2715_);
lean_ctor_set(v___x_2721_, 6, v_customCanUnfoldPredicate_x3f_2716_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7, v_trackZetaDelta_2710_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 1, v_univApprox_2717_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2718_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 3, v_cacheInferType_2719_);
lean_inc(v___y_2696_);
lean_inc_ref(v___y_2695_);
lean_inc(v___y_2694_);
lean_inc(v_a_2704_);
v___x_2722_ = lean_whnf(v_a_2704_, v___x_2721_, v___y_2694_, v___y_2695_, v___y_2696_);
v___y_2647_ = v___y_2691_;
v___y_2648_ = v___y_2695_;
v___y_2649_ = v_isHEq_2692_;
v___y_2650_ = v_a_2704_;
v___y_2651_ = v___y_2696_;
v___y_2652_ = v___y_2694_;
v___y_2653_ = v___y_2693_;
v___y_2654_ = v___x_2722_;
goto v___jp_2646_;
}
else
{
lean_object* v___x_2723_; 
lean_inc(v___y_2696_);
lean_inc_ref(v___y_2695_);
lean_inc(v___y_2694_);
lean_inc_ref(v___y_2693_);
lean_inc(v_a_2704_);
v___x_2723_ = lean_whnf(v_a_2704_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
v___y_2647_ = v___y_2691_;
v___y_2648_ = v___y_2695_;
v___y_2649_ = v_isHEq_2692_;
v___y_2650_ = v_a_2704_;
v___y_2651_ = v___y_2696_;
v___y_2652_ = v___y_2694_;
v___y_2653_ = v___y_2693_;
v___y_2654_ = v___x_2723_;
goto v___jp_2646_;
}
}
else
{
lean_object* v_a_2724_; 
v_a_2724_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2724_);
lean_dec_ref_known(v___x_2703_, 1);
v___y_2635_ = v___y_2691_;
v___y_2636_ = v___y_2695_;
v___y_2637_ = v_isHEq_2692_;
v___y_2638_ = v___y_2696_;
v___y_2639_ = v___y_2694_;
v___y_2640_ = v___y_2693_;
v_a_2641_ = v_a_2724_;
goto v___jp_2634_;
}
}
else
{
v___y_2612_ = v___y_2691_;
v___y_2613_ = v_isHEq_2692_;
v___y_2614_ = v___y_2693_;
v___y_2615_ = v___y_2694_;
v___y_2616_ = v___y_2695_;
v___y_2617_ = v___y_2696_;
goto v___jp_2611_;
}
}
else
{
lean_dec(v_a_2700_);
v___y_2612_ = v___y_2691_;
v___y_2613_ = v_isHEq_2692_;
v___y_2614_ = v___y_2693_;
v___y_2615_ = v___y_2694_;
v___y_2616_ = v___y_2695_;
v___y_2617_ = v___y_2696_;
goto v___jp_2611_;
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2725_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2699_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2699_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
else
{
v___y_2612_ = v___y_2691_;
v___y_2613_ = v_isHEq_2692_;
v___y_2614_ = v___y_2693_;
v___y_2615_ = v___y_2694_;
v___y_2616_ = v___y_2695_;
v___y_2617_ = v___y_2696_;
goto v___jp_2611_;
}
}
}
v___jp_2733_:
{
lean_object* v___x_2739_; 
lean_inc_ref(v___x_2610_);
v___x_2739_ = l_Lean_Meta_matchHEq_x3f(v___x_2610_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
if (lean_obj_tag(v_a_2740_) == 1)
{
lean_object* v_val_2741_; lean_object* v_snd_2742_; lean_object* v_snd_2743_; lean_object* v_fst_2744_; lean_object* v_fst_2745_; lean_object* v_fst_2746_; lean_object* v_snd_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2840_; 
v_val_2741_ = lean_ctor_get(v_a_2740_, 0);
lean_inc(v_val_2741_);
lean_dec_ref_known(v_a_2740_, 1);
v_snd_2742_ = lean_ctor_get(v_val_2741_, 1);
lean_inc(v_snd_2742_);
v_snd_2743_ = lean_ctor_get(v_snd_2742_, 1);
lean_inc(v_snd_2743_);
v_fst_2744_ = lean_ctor_get(v_val_2741_, 0);
lean_inc(v_fst_2744_);
lean_dec(v_val_2741_);
v_fst_2745_ = lean_ctor_get(v_snd_2742_, 0);
lean_inc(v_fst_2745_);
lean_dec(v_snd_2742_);
v_fst_2746_ = lean_ctor_get(v_snd_2743_, 0);
v_snd_2747_ = lean_ctor_get(v_snd_2743_, 1);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_snd_2743_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2749_ = v_snd_2743_;
v_isShared_2750_ = v_isSharedCheck_2840_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_snd_2747_);
lean_inc(v_fst_2746_);
lean_dec(v_snd_2743_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2840_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2751_; 
v___x_2751_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2745_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; 
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2751_, 1);
if (lean_obj_tag(v_a_2752_) == 1)
{
lean_object* v_val_2753_; lean_object* v___x_2754_; 
v_val_2753_ = lean_ctor_get(v_a_2752_, 0);
lean_inc(v_val_2753_);
lean_dec_ref_known(v_a_2752_, 1);
v___x_2754_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2747_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
if (lean_obj_tag(v_a_2755_) == 1)
{
lean_object* v_toConstantVal_2756_; lean_object* v_val_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2823_; 
v_toConstantVal_2756_ = lean_ctor_get(v_val_2753_, 0);
lean_inc_ref(v_toConstantVal_2756_);
lean_dec(v_val_2753_);
v_val_2757_ = lean_ctor_get(v_a_2755_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v_a_2755_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2759_ = v_a_2755_;
v_isShared_2760_ = v_isSharedCheck_2823_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_val_2757_);
lean_dec(v_a_2755_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2823_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v_toConstantVal_2761_; lean_object* v_name_2762_; lean_object* v_name_2763_; uint8_t v___x_2764_; 
v_toConstantVal_2761_ = lean_ctor_get(v_val_2757_, 0);
lean_inc_ref(v_toConstantVal_2761_);
lean_dec(v_val_2757_);
v_name_2762_ = lean_ctor_get(v_toConstantVal_2756_, 0);
lean_inc(v_name_2762_);
lean_dec_ref(v_toConstantVal_2756_);
v_name_2763_ = lean_ctor_get(v_toConstantVal_2761_, 0);
lean_inc(v_name_2763_);
lean_dec_ref(v_toConstantVal_2761_);
v___x_2764_ = lean_name_eq(v_name_2762_, v_name_2763_);
lean_dec(v_name_2763_);
lean_dec(v_name_2762_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; 
v___x_2765_ = l_Lean_Meta_isExprDefEq(v_fst_2744_, v_fst_2746_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; uint8_t v___x_2767_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v___x_2767_ = lean_unbox(v_a_2766_);
lean_dec(v_a_2766_);
if (v___x_2767_ == 0)
{
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
v___y_2691_ = v_isEq_2734_;
v_isHEq_2692_ = v___x_2556_;
v___y_2693_ = v___y_2735_;
v___y_2694_ = v___y_2736_;
v___y_2695_ = v___y_2737_;
v___y_2696_ = v___y_2738_;
goto v___jp_2690_;
}
else
{
lean_object* v___x_2768_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec_ref(v_config_2545_);
lean_inc(v_mvarId_2546_);
v___x_2768_ = l_Lean_MVarId_getType(v_mvarId_2546_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v_a_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
lean_inc(v_a_2769_);
lean_dec_ref_known(v___x_2768_, 1);
v___x_2770_ = l_Lean_LocalDecl_toExpr(v_val_2577_);
v___x_2771_ = l_Lean_Meta_mkEqOfHEq(v___x_2770_, v___x_2556_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v_a_2772_; lean_object* v___x_2773_; 
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_a_2772_);
lean_dec_ref_known(v___x_2771_, 1);
v___x_2773_ = l_Lean_Meta_mkNoConfusion(v_a_2769_, v_a_2772_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2775_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2774_);
lean_dec_ref_known(v___x_2773_, 1);
v___x_2775_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2546_, v_a_2774_, v___y_2736_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v___x_2776_; lean_object* v___x_2778_; 
lean_dec_ref_known(v___x_2775_, 1);
v___x_2776_ = lean_box(v___x_2556_);
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v___x_2776_);
v___x_2778_ = v___x_2759_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2780_; 
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 1, v___x_2581_);
lean_ctor_set(v___x_2749_, 0, v___x_2778_);
v___x_2780_ = v___x_2749_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2778_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v___x_2581_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
v_a_2563_ = v___x_2780_;
goto v___jp_2562_;
}
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2783_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2785_ = v___x_2775_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2775_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2791_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2773_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2773_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
lean_dec(v_a_2769_);
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2799_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2771_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2771_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2807_ = lean_ctor_get(v___x_2768_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2768_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2768_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2815_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2765_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2765_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
else
{
lean_del_object(v___x_2759_);
lean_del_object(v___x_2749_);
lean_dec(v_fst_2746_);
lean_dec(v_fst_2744_);
v___y_2691_ = v_isEq_2734_;
v_isHEq_2692_ = v___x_2556_;
v___y_2693_ = v___y_2735_;
v___y_2694_ = v___y_2736_;
v___y_2695_ = v___y_2737_;
v___y_2696_ = v___y_2738_;
goto v___jp_2690_;
}
}
}
else
{
lean_dec(v_a_2755_);
lean_dec(v_val_2753_);
lean_del_object(v___x_2749_);
lean_dec(v_fst_2746_);
lean_dec(v_fst_2744_);
v___y_2691_ = v_isEq_2734_;
v_isHEq_2692_ = v___x_2556_;
v___y_2693_ = v___y_2735_;
v___y_2694_ = v___y_2736_;
v___y_2695_ = v___y_2737_;
v___y_2696_ = v___y_2738_;
goto v___jp_2690_;
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
lean_dec(v_val_2753_);
lean_del_object(v___x_2749_);
lean_dec(v_fst_2746_);
lean_dec(v_fst_2744_);
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2824_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2754_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2754_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
else
{
lean_dec(v_a_2752_);
lean_del_object(v___x_2749_);
lean_dec(v_snd_2747_);
lean_dec(v_fst_2746_);
lean_dec(v_fst_2744_);
v___y_2691_ = v_isEq_2734_;
v_isHEq_2692_ = v___x_2556_;
v___y_2693_ = v___y_2735_;
v___y_2694_ = v___y_2736_;
v___y_2695_ = v___y_2737_;
v___y_2696_ = v___y_2738_;
goto v___jp_2690_;
}
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_del_object(v___x_2749_);
lean_dec(v_snd_2747_);
lean_dec(v_fst_2746_);
lean_dec(v_fst_2744_);
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2832_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2751_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2751_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
}
else
{
lean_dec(v_a_2740_);
v___y_2691_ = v_isEq_2734_;
v_isHEq_2692_ = v___x_2609_;
v___y_2693_ = v___y_2735_;
v___y_2694_ = v___y_2736_;
v___y_2695_ = v___y_2737_;
v___y_2696_ = v___y_2738_;
goto v___jp_2690_;
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2841_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2739_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2739_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
v___jp_2849_:
{
lean_object* v___x_2854_; 
lean_inc_ref(v___x_2610_);
v___x_2854_ = l_Lean_Meta_matchEq_x3f(v___x_2610_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v_a_2855_; 
v_a_2855_ = lean_ctor_get(v___x_2854_, 0);
lean_inc(v_a_2855_);
lean_dec_ref_known(v___x_2854_, 1);
if (lean_obj_tag(v_a_2855_) == 1)
{
lean_object* v_val_2856_; lean_object* v_snd_2857_; lean_object* v_fst_2858_; lean_object* v_snd_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2931_; 
v_val_2856_ = lean_ctor_get(v_a_2855_, 0);
lean_inc(v_val_2856_);
lean_dec_ref_known(v_a_2855_, 1);
v_snd_2857_ = lean_ctor_get(v_val_2856_, 1);
lean_inc(v_snd_2857_);
lean_dec(v_val_2856_);
v_fst_2858_ = lean_ctor_get(v_snd_2857_, 0);
v_snd_2859_ = lean_ctor_get(v_snd_2857_, 1);
v_isSharedCheck_2931_ = !lean_is_exclusive(v_snd_2857_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2861_ = v_snd_2857_;
v_isShared_2862_ = v_isSharedCheck_2931_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_snd_2859_);
lean_inc(v_fst_2858_);
lean_dec(v_snd_2857_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2931_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2863_; 
v___x_2863_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2858_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_a_2864_);
lean_dec_ref_known(v___x_2863_, 1);
if (lean_obj_tag(v_a_2864_) == 1)
{
lean_object* v_val_2865_; lean_object* v___x_2866_; 
v_val_2865_ = lean_ctor_get(v_a_2864_, 0);
lean_inc(v_val_2865_);
lean_dec_ref_known(v_a_2864_, 1);
v___x_2866_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2859_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2866_, 1);
if (lean_obj_tag(v_a_2867_) == 1)
{
lean_object* v_toConstantVal_2868_; lean_object* v_val_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2914_; 
v_toConstantVal_2868_ = lean_ctor_get(v_val_2865_, 0);
lean_inc_ref(v_toConstantVal_2868_);
lean_dec(v_val_2865_);
v_val_2869_ = lean_ctor_get(v_a_2867_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_a_2867_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2871_ = v_a_2867_;
v_isShared_2872_ = v_isSharedCheck_2914_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_val_2869_);
lean_dec(v_a_2867_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2914_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v_toConstantVal_2873_; lean_object* v_name_2874_; lean_object* v_name_2875_; uint8_t v___x_2876_; 
v_toConstantVal_2873_ = lean_ctor_get(v_val_2869_, 0);
lean_inc_ref(v_toConstantVal_2873_);
lean_dec(v_val_2869_);
v_name_2874_ = lean_ctor_get(v_toConstantVal_2868_, 0);
lean_inc(v_name_2874_);
lean_dec_ref(v_toConstantVal_2868_);
v_name_2875_ = lean_ctor_get(v_toConstantVal_2873_, 0);
lean_inc(v_name_2875_);
lean_dec_ref(v_toConstantVal_2873_);
v___x_2876_ = lean_name_eq(v_name_2874_, v_name_2875_);
lean_dec(v_name_2875_);
lean_dec(v_name_2874_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec_ref(v_config_2545_);
lean_inc(v_mvarId_2546_);
v___x_2877_ = l_Lean_MVarId_getType(v_mvarId_2546_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
lean_inc(v_a_2878_);
lean_dec_ref_known(v___x_2877_, 1);
v___x_2879_ = l_Lean_LocalDecl_toExpr(v_val_2577_);
v___x_2880_ = l_Lean_Meta_mkNoConfusion(v_a_2878_, v___x_2879_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; lean_object* v___x_2882_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
lean_dec_ref_known(v___x_2880_, 1);
v___x_2882_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2546_, v_a_2881_, v___y_2851_);
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2885_; 
lean_dec_ref_known(v___x_2882_, 1);
v___x_2883_ = lean_box(v___x_2556_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 0, v___x_2883_);
v___x_2885_ = v___x_2871_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v___x_2883_);
v___x_2885_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
lean_object* v___x_2887_; 
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 1, v___x_2581_);
lean_ctor_set(v___x_2861_, 0, v___x_2885_);
v___x_2887_ = v___x_2861_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2885_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v___x_2581_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
v_a_2563_ = v___x_2887_;
goto v___jp_2562_;
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_del_object(v___x_2871_);
lean_del_object(v___x_2861_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2890_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2882_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2882_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2905_; 
lean_del_object(v___x_2871_);
lean_del_object(v___x_2861_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2898_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2900_ = v___x_2880_;
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2880_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v_a_2898_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
lean_del_object(v___x_2871_);
lean_del_object(v___x_2861_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2906_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___x_2877_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2877_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
else
{
lean_del_object(v___x_2871_);
lean_del_object(v___x_2861_);
v_isEq_2734_ = v___x_2556_;
v___y_2735_ = v___y_2850_;
v___y_2736_ = v___y_2851_;
v___y_2737_ = v___y_2852_;
v___y_2738_ = v___y_2853_;
goto v___jp_2733_;
}
}
}
else
{
lean_dec(v_a_2867_);
lean_dec(v_val_2865_);
lean_del_object(v___x_2861_);
v_isEq_2734_ = v___x_2556_;
v___y_2735_ = v___y_2850_;
v___y_2736_ = v___y_2851_;
v___y_2737_ = v___y_2852_;
v___y_2738_ = v___y_2853_;
goto v___jp_2733_;
}
}
else
{
lean_object* v_a_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2922_; 
lean_dec(v_val_2865_);
lean_del_object(v___x_2861_);
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2915_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2917_ = v___x_2866_;
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_a_2915_);
lean_dec(v___x_2866_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2920_; 
if (v_isShared_2918_ == 0)
{
v___x_2920_ = v___x_2917_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v_a_2915_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
}
else
{
lean_dec(v_a_2864_);
lean_del_object(v___x_2861_);
lean_dec(v_snd_2859_);
v_isEq_2734_ = v___x_2556_;
v___y_2735_ = v___y_2850_;
v___y_2736_ = v___y_2851_;
v___y_2737_ = v___y_2852_;
v___y_2738_ = v___y_2853_;
goto v___jp_2733_;
}
}
else
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2930_; 
lean_del_object(v___x_2861_);
lean_dec(v_snd_2859_);
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2923_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2925_ = v___x_2863_;
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v___x_2863_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2923_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
}
else
{
lean_dec(v_a_2855_);
v_isEq_2734_ = v___x_2609_;
v___y_2735_ = v___y_2850_;
v___y_2736_ = v___y_2851_;
v___y_2737_ = v___y_2852_;
v___y_2738_ = v___y_2853_;
goto v___jp_2733_;
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2932_ = lean_ctor_get(v___x_2854_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2854_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2854_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
v___jp_2940_:
{
lean_object* v___x_2945_; 
lean_inc_ref(v___x_2610_);
v___x_2945_ = l_Lean_refutableHasNotBit_x3f(v___x_2610_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_a_2946_);
lean_dec_ref_known(v___x_2945_, 1);
if (lean_obj_tag(v_a_2946_) == 1)
{
lean_object* v_val_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2986_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec_ref(v_config_2545_);
v_val_2947_ = lean_ctor_get(v_a_2946_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_a_2946_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2949_ = v_a_2946_;
v_isShared_2950_ = v_isSharedCheck_2986_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_val_2947_);
lean_dec(v_a_2946_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2986_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2951_; 
lean_inc(v_mvarId_2546_);
v___x_2951_ = l_Lean_MVarId_getType(v_mvarId_2546_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2951_, 1);
v___x_2953_ = l_Lean_LocalDecl_toExpr(v_val_2577_);
v___x_2954_ = l_Lean_Meta_mkAbsurd(v_a_2952_, v_val_2947_, v___x_2953_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
v___x_2956_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2546_, v_a_2955_, v___y_2942_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v___x_2957_; lean_object* v___x_2959_; 
lean_dec_ref_known(v___x_2956_, 1);
v___x_2957_ = lean_box(v___x_2556_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v___x_2957_);
v___x_2959_ = v___x_2949_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v___x_2957_);
v___x_2959_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
lean_object* v___x_2960_; 
v___x_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2959_);
lean_ctor_set(v___x_2960_, 1, v___x_2581_);
v_a_2563_ = v___x_2960_;
goto v___jp_2562_;
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_del_object(v___x_2949_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2962_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2956_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2956_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2977_; 
lean_del_object(v___x_2949_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2970_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2972_ = v___x_2954_;
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2954_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
}
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
lean_del_object(v___x_2949_);
lean_dec(v_val_2947_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_2978_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2951_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2951_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
}
else
{
lean_object* v___x_2987_; 
lean_dec(v_a_2946_);
lean_inc_ref(v___x_2610_);
v___x_2987_ = l_Lean_Meta_matchNe_x3f(v___x_2610_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v___x_2987_, 1);
if (lean_obj_tag(v_a_2988_) == 1)
{
lean_object* v_val_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3058_; 
v_val_2989_ = lean_ctor_get(v_a_2988_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v_a_2988_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_2991_ = v_a_2988_;
v_isShared_2992_ = v_isSharedCheck_3058_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_val_2989_);
lean_dec(v_a_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3058_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v_snd_2993_; lean_object* v_fst_2994_; lean_object* v_snd_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3057_; 
v_snd_2993_ = lean_ctor_get(v_val_2989_, 1);
lean_inc(v_snd_2993_);
lean_dec(v_val_2989_);
v_fst_2994_ = lean_ctor_get(v_snd_2993_, 0);
v_snd_2995_ = lean_ctor_get(v_snd_2993_, 1);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_snd_2993_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_2997_ = v_snd_2993_;
v_isShared_2998_ = v_isSharedCheck_3057_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_snd_2995_);
lean_inc(v_fst_2994_);
lean_dec(v_snd_2993_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3057_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_2999_; 
lean_inc(v_fst_2994_);
v___x_2999_ = l_Lean_Meta_isExprDefEq(v_fst_2994_, v_snd_2995_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; uint8_t v___x_3001_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
v___x_3001_ = lean_unbox(v_a_3000_);
lean_dec(v_a_3000_);
if (v___x_3001_ == 0)
{
lean_del_object(v___x_2997_);
lean_dec(v_fst_2994_);
lean_del_object(v___x_2991_);
v___y_2850_ = v___y_2941_;
v___y_2851_ = v___y_2942_;
v___y_2852_ = v___y_2943_;
v___y_2853_ = v___y_2944_;
goto v___jp_2849_;
}
else
{
lean_object* v___x_3002_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec_ref(v_config_2545_);
lean_inc(v_mvarId_2546_);
v___x_3002_ = l_Lean_MVarId_getType(v_mvarId_2546_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3004_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
v___x_3004_ = l_Lean_Meta_mkEqRefl(v_fst_2994_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref_known(v___x_3004_, 1);
v___x_3006_ = l_Lean_LocalDecl_toExpr(v_val_2577_);
v___x_3007_ = l_Lean_Meta_mkAbsurd(v_a_3003_, v_a_3005_, v___x_3006_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3009_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
v___x_3009_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2546_, v_a_3008_, v___y_2942_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v___x_3010_; lean_object* v___x_3012_; 
lean_dec_ref_known(v___x_3009_, 1);
v___x_3010_ = lean_box(v___x_2556_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v___x_3010_);
v___x_3012_ = v___x_2991_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3014_; 
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 1, v___x_2581_);
lean_ctor_set(v___x_2997_, 0, v___x_3012_);
v___x_3014_ = v___x_2997_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3012_);
lean_ctor_set(v_reuseFailAlloc_3015_, 1, v___x_2581_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
v_a_2563_ = v___x_3014_;
goto v___jp_2562_;
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_del_object(v___x_2997_);
lean_del_object(v___x_2991_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_3017_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_3009_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_3009_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_del_object(v___x_2997_);
lean_del_object(v___x_2991_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_3025_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_3007_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3007_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec(v_a_3003_);
lean_del_object(v___x_2997_);
lean_del_object(v___x_2991_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_3033_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_3004_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3004_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
}
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3048_; 
lean_del_object(v___x_2997_);
lean_dec(v_fst_2994_);
lean_del_object(v___x_2991_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
v_a_3041_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3043_ = v___x_3002_;
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_3002_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3046_; 
if (v_isShared_3044_ == 0)
{
v___x_3046_ = v___x_3043_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3041_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_del_object(v___x_2997_);
lean_dec(v_fst_2994_);
lean_del_object(v___x_2991_);
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_3049_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_2999_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_2999_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2988_);
v___y_2850_ = v___y_2941_;
v___y_2851_ = v___y_2942_;
v___y_2852_ = v___y_2943_;
v___y_2853_ = v___y_2944_;
goto v___jp_2849_;
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_3059_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_2987_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_2987_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec_ref(v___x_2610_);
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_3067_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_2945_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_2945_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
}
else
{
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2571_ = v___x_2582_;
goto v___jp_2570_;
}
v___jp_2583_:
{
uint8_t v_emptyType_2590_; 
v_emptyType_2590_ = lean_ctor_get_uint8(v_config_2545_, sizeof(void*)*1 + 1);
if (v_emptyType_2590_ == 0)
{
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2571_ = v___x_2582_;
goto v___jp_2570_;
}
else
{
if (v___y_2584_ == 0)
{
if (v___y_2585_ == 0)
{
lean_object* v_searchFuel_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_searchFuel_2591_ = lean_ctor_get(v_config_2545_, 0);
v___x_2592_ = l_Lean_LocalDecl_fvarId(v_val_2577_);
lean_dec(v_val_2577_);
lean_inc(v_searchFuel_2591_);
lean_inc(v_mvarId_2546_);
v___x_2593_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_2546_, v___x_2592_, v_searchFuel_2591_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; uint8_t v___x_2595_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
v___x_2595_ = lean_unbox(v_a_2594_);
lean_dec(v_a_2594_);
if (v___x_2595_ == 0)
{
lean_del_object(v___x_2579_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2571_ = v___x_2582_;
goto v___jp_2570_;
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2598_; 
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v___x_2596_ = lean_box(v___x_2556_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2596_);
v___x_2598_ = v___x_2579_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2599_; 
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
lean_ctor_set(v___x_2599_, 1, v___x_2581_);
v_a_2563_ = v___x_2599_;
goto v___jp_2562_;
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_del_object(v___x_2579_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
lean_dec(v_mvarId_2546_);
lean_dec_ref(v_config_2545_);
v_a_2601_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2593_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2593_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
else
{
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2571_ = v___x_2582_;
goto v___jp_2570_;
}
}
else
{
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2560_);
lean_dec(v_snd_2558_);
v_a_2571_ = v___x_2582_;
goto v___jp_2570_;
}
}
}
}
}
v___jp_2562_:
{
lean_object* v___x_2564_; lean_object* v___x_2566_; 
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_a_2563_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v___x_2564_);
v___x_2566_ = v___x_2560_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v___x_2564_);
lean_ctor_set(v_reuseFailAlloc_2568_, 1, v_snd_2558_);
v___x_2566_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
return v___x_2567_;
}
}
v___jp_2570_:
{
lean_object* v___x_2572_; size_t v___x_2573_; size_t v___x_2574_; lean_object* v___x_2575_; 
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2569_);
lean_ctor_set(v___x_2572_, 1, v_a_2571_);
v___x_2573_ = ((size_t)1ULL);
v___x_2574_ = lean_usize_add(v_i_2549_, v___x_2573_);
v___x_2575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2545_, v_mvarId_2546_, v_as_2547_, v_sz_2548_, v___x_2574_, v___x_2572_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
return v___x_2575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object* v_config_3141_, lean_object* v_mvarId_3142_, lean_object* v_as_3143_, lean_object* v_sz_3144_, lean_object* v_i_3145_, lean_object* v_b_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
size_t v_sz_boxed_3152_; size_t v_i_boxed_3153_; lean_object* v_res_3154_; 
v_sz_boxed_3152_ = lean_unbox_usize(v_sz_3144_);
lean_dec(v_sz_3144_);
v_i_boxed_3153_ = lean_unbox_usize(v_i_3145_);
lean_dec(v_i_3145_);
v_res_3154_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_3141_, v_mvarId_3142_, v_as_3143_, v_sz_boxed_3152_, v_i_boxed_3153_, v_b_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec_ref(v_as_3143_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object* v_config_3158_, lean_object* v_mvarId_3159_, lean_object* v_as_3160_, size_t v_sz_3161_, size_t v_i_3162_, lean_object* v_b_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
uint8_t v___x_3169_; 
v___x_3169_ = lean_usize_dec_lt(v_i_3162_, v_sz_3161_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; 
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v___x_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3170_, 0, v_b_3163_);
return v___x_3170_;
}
else
{
lean_object* v_snd_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3784_; 
v_snd_3171_ = lean_ctor_get(v_b_3163_, 1);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_b_3163_);
if (v_isSharedCheck_3784_ == 0)
{
lean_object* v_unused_3785_; 
v_unused_3785_ = lean_ctor_get(v_b_3163_, 0);
lean_dec(v_unused_3785_);
v___x_3173_ = v_b_3163_;
v_isShared_3174_ = v_isSharedCheck_3784_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_snd_3171_);
lean_dec(v_b_3163_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3784_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v_a_3176_; lean_object* v___x_3182_; lean_object* v_a_3184_; lean_object* v_a_3189_; 
v___x_3182_ = lean_box(0);
v_a_3189_ = lean_array_uget(v_as_3160_, v_i_3162_);
if (lean_obj_tag(v_a_3189_) == 0)
{
lean_del_object(v___x_3173_);
v_a_3184_ = v_snd_3171_;
goto v___jp_3183_;
}
else
{
lean_object* v_val_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3783_; 
v_val_3190_ = lean_ctor_get(v_a_3189_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v_a_3189_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3192_ = v_a_3189_;
v_isShared_3193_ = v_isSharedCheck_3783_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_val_3190_);
lean_dec(v_a_3189_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3783_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; uint8_t v___y_3197_; uint8_t v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; uint8_t v___x_3223_; 
v___x_3194_ = lean_box(0);
v___x_3195_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3223_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3190_);
if (v___x_3223_ == 0)
{
lean_object* v___x_3224_; uint8_t v___y_3226_; uint8_t v___y_3227_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3231_; uint8_t v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; lean_object* v___y_3253_; uint8_t v___y_3254_; lean_object* v___y_3255_; lean_object* v_a_3256_; uint8_t v___y_3262_; lean_object* v___y_3263_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; uint8_t v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; uint8_t v___y_3313_; uint8_t v_isHEq_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; uint8_t v_isEq_3356_; lean_object* v___y_3357_; lean_object* v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3360_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3577_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___x_3713_; 
v___x_3224_ = l_Lean_LocalDecl_type(v_val_3190_);
lean_inc_ref(v___x_3224_);
v___x_3713_ = l_Lean_Meta_matchNot_x3f(v___x_3224_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_object* v_a_3714_; 
v_a_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_a_3714_);
lean_dec_ref_known(v___x_3713_, 1);
if (lean_obj_tag(v_a_3714_) == 1)
{
lean_object* v_val_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3774_; 
v_val_3715_ = lean_ctor_get(v_a_3714_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v_a_3714_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3717_ = v_a_3714_;
v_isShared_3718_ = v_isSharedCheck_3774_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_val_3715_);
lean_dec(v_a_3714_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3774_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3715_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
if (lean_obj_tag(v_a_3720_) == 1)
{
lean_object* v_val_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3765_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec_ref(v_config_3158_);
v_val_3721_ = lean_ctor_get(v_a_3720_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v_a_3720_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3723_ = v_a_3720_;
v_isShared_3724_ = v_isSharedCheck_3765_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_val_3721_);
lean_dec(v_a_3720_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3765_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3725_; 
lean_inc(v_mvarId_3159_);
v___x_3725_ = l_Lean_MVarId_getType(v_mvarId_3159_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_a_3726_);
lean_dec_ref_known(v___x_3725_, 1);
v___x_3727_ = l_Lean_LocalDecl_toExpr(v_val_3190_);
v___x_3728_ = l_Lean_mkFVar(v_val_3721_);
v___x_3729_ = l_Lean_Expr_app___override(v___x_3727_, v___x_3728_);
v___x_3730_ = l_Lean_Meta_mkFalseElim(v_a_3726_, v___x_3729_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v_a_3731_; lean_object* v___x_3732_; 
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc(v_a_3731_);
lean_dec_ref_known(v___x_3730_, 1);
v___x_3732_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3159_, v_a_3731_, v___y_3165_);
if (lean_obj_tag(v___x_3732_) == 0)
{
lean_object* v___x_3733_; lean_object* v___x_3735_; 
lean_dec_ref_known(v___x_3732_, 1);
v___x_3733_ = lean_box(v___x_3169_);
if (v_isShared_3724_ == 0)
{
lean_ctor_set(v___x_3723_, 0, v___x_3733_);
v___x_3735_ = v___x_3723_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3733_);
v___x_3735_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
lean_object* v___x_3736_; lean_object* v___x_3738_; 
v___x_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3735_);
lean_ctor_set(v___x_3736_, 1, v___x_3194_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set_tag(v___x_3717_, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3736_);
v___x_3738_ = v___x_3717_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3736_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
v_a_3176_ = v___x_3738_;
goto v___jp_3175_;
}
}
}
else
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
lean_del_object(v___x_3723_);
lean_del_object(v___x_3717_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3741_ = lean_ctor_get(v___x_3732_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3732_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3743_ = v___x_3732_;
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3732_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3741_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
}
else
{
lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3756_; 
lean_del_object(v___x_3723_);
lean_del_object(v___x_3717_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3749_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3751_ = v___x_3730_;
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v___x_3730_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3754_; 
if (v_isShared_3752_ == 0)
{
v___x_3754_ = v___x_3751_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v_a_3749_);
v___x_3754_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
return v___x_3754_;
}
}
}
}
else
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3764_; 
lean_del_object(v___x_3723_);
lean_dec(v_val_3721_);
lean_del_object(v___x_3717_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3757_ = lean_ctor_get(v___x_3725_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3759_ = v___x_3725_;
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3725_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3762_; 
if (v_isShared_3760_ == 0)
{
v___x_3762_ = v___x_3759_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3757_);
v___x_3762_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
return v___x_3762_;
}
}
}
}
}
else
{
lean_dec(v_a_3720_);
lean_del_object(v___x_3717_);
v___y_3577_ = v___y_3164_;
v___y_3578_ = v___y_3165_;
v___y_3579_ = v___y_3166_;
v___y_3580_ = v___y_3167_;
goto v___jp_3576_;
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
lean_del_object(v___x_3717_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3766_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3719_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3719_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
}
else
{
lean_dec(v_a_3714_);
v___y_3577_ = v___y_3164_;
v___y_3578_ = v___y_3165_;
v___y_3579_ = v___y_3166_;
v___y_3580_ = v___y_3167_;
goto v___jp_3576_;
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3775_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3713_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3713_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3778_ == 0)
{
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
v___jp_3225_:
{
uint8_t v_genDiseq_3232_; 
v_genDiseq_3232_ = lean_ctor_get_uint8(v_config_3158_, sizeof(void*)*1 + 2);
if (v_genDiseq_3232_ == 0)
{
lean_dec_ref(v___x_3224_);
v___y_3197_ = v___y_3226_;
v___y_3198_ = v___y_3227_;
v___y_3199_ = v___y_3228_;
v___y_3200_ = v___y_3229_;
v___y_3201_ = v___y_3230_;
v___y_3202_ = v___y_3231_;
goto v___jp_3196_;
}
else
{
uint8_t v___x_3233_; 
v___x_3233_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3224_);
lean_dec_ref(v___x_3224_);
if (v___x_3233_ == 0)
{
v___y_3197_ = v___y_3226_;
v___y_3198_ = v___y_3227_;
v___y_3199_ = v___y_3228_;
v___y_3200_ = v___y_3229_;
v___y_3201_ = v___y_3230_;
v___y_3202_ = v___y_3231_;
goto v___jp_3196_;
}
else
{
lean_object* v___x_3234_; 
lean_inc(v_val_3190_);
lean_inc(v_mvarId_3159_);
v___x_3234_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3159_, v_val_3190_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_object* v_a_3235_; uint8_t v___x_3236_; 
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
lean_inc(v_a_3235_);
lean_dec_ref_known(v___x_3234_, 1);
v___x_3236_ = lean_unbox(v_a_3235_);
lean_dec(v_a_3235_);
if (v___x_3236_ == 0)
{
v___y_3197_ = v___y_3226_;
v___y_3198_ = v___y_3227_;
v___y_3199_ = v___y_3228_;
v___y_3200_ = v___y_3229_;
v___y_3201_ = v___y_3230_;
v___y_3202_ = v___y_3231_;
goto v___jp_3196_;
}
else
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v___x_3237_ = lean_box(v___x_3169_);
v___x_3238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3237_);
v___x_3239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
lean_ctor_set(v___x_3239_, 1, v___x_3194_);
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
v_a_3176_ = v___x_3240_;
goto v___jp_3175_;
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3241_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3234_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3234_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
}
v___jp_3249_:
{
uint8_t v___x_3257_; 
v___x_3257_ = l_Lean_Exception_isInterrupt(v_a_3256_);
if (v___x_3257_ == 0)
{
uint8_t v___x_3258_; 
lean_inc_ref(v_a_3256_);
v___x_3258_ = l_Lean_Exception_isRuntime(v_a_3256_);
if (v___x_3258_ == 0)
{
lean_dec_ref(v_a_3256_);
v___y_3226_ = v___y_3250_;
v___y_3227_ = v___y_3254_;
v___y_3228_ = v___y_3255_;
v___y_3229_ = v___y_3251_;
v___y_3230_ = v___y_3253_;
v___y_3231_ = v___y_3252_;
goto v___jp_3225_;
}
else
{
lean_object* v___x_3259_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v___x_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3259_, 0, v_a_3256_);
return v___x_3259_;
}
}
else
{
lean_object* v___x_3260_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v___x_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3260_, 0, v_a_3256_);
return v___x_3260_;
}
}
v___jp_3261_:
{
if (lean_obj_tag(v___y_3269_) == 0)
{
lean_object* v_a_3270_; lean_object* v___x_3271_; uint8_t v___x_3272_; 
v_a_3270_ = lean_ctor_get(v___y_3269_, 0);
lean_inc(v_a_3270_);
lean_dec_ref_known(v___y_3269_, 1);
v___x_3271_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3272_ = l_Lean_Expr_isConstOf(v_a_3270_, v___x_3271_);
lean_dec(v_a_3270_);
if (v___x_3272_ == 0)
{
lean_dec_ref(v___y_3263_);
v___y_3226_ = v___y_3262_;
v___y_3227_ = v___y_3267_;
v___y_3228_ = v___y_3268_;
v___y_3229_ = v___y_3264_;
v___y_3230_ = v___y_3266_;
v___y_3231_ = v___y_3265_;
goto v___jp_3225_;
}
else
{
lean_object* v___x_3273_; 
lean_inc_ref(v___y_3263_);
v___x_3273_ = l_Lean_Meta_mkEqRefl(v___y_3263_, v___y_3268_, v___y_3264_, v___y_3266_, v___y_3265_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_a_3274_; lean_object* v___x_3275_; lean_object* v_dummy_3276_; lean_object* v_nargs_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_a_3274_);
lean_dec_ref_known(v___x_3273_, 1);
v___x_3275_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3276_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_3277_ = l_Lean_Expr_getAppNumArgs(v___y_3263_);
lean_inc(v_nargs_3277_);
v___x_3278_ = lean_mk_array(v_nargs_3277_, v_dummy_3276_);
v___x_3279_ = lean_unsigned_to_nat(1u);
v___x_3280_ = lean_nat_sub(v_nargs_3277_, v___x_3279_);
lean_dec(v_nargs_3277_);
v___x_3281_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3263_, v___x_3278_, v___x_3280_);
v___x_3282_ = lean_array_push(v___x_3281_, v_a_3274_);
v___x_3283_ = l_Lean_mkAppN(v___x_3275_, v___x_3282_);
lean_dec_ref(v___x_3282_);
lean_inc(v_mvarId_3159_);
v___x_3284_ = l_Lean_MVarId_getType(v_mvarId_3159_, v___y_3268_, v___y_3264_, v___y_3266_, v___y_3265_);
if (lean_obj_tag(v___x_3284_) == 0)
{
lean_object* v_a_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v_a_3285_ = lean_ctor_get(v___x_3284_, 0);
lean_inc(v_a_3285_);
lean_dec_ref_known(v___x_3284_, 1);
lean_inc(v_val_3190_);
v___x_3286_ = l_Lean_LocalDecl_toExpr(v_val_3190_);
v___x_3287_ = l_Lean_Meta_mkAbsurd(v_a_3285_, v___x_3286_, v___x_3283_, v___y_3268_, v___y_3264_, v___y_3266_, v___y_3265_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3307_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3287_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3290_ = v___x_3287_;
v_isShared_3291_ = v_isSharedCheck_3307_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3287_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3307_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3292_; 
lean_inc(v_mvarId_3159_);
v___x_3292_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3159_, v_a_3288_, v___y_3264_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3304_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3304_ == 0)
{
lean_object* v_unused_3305_; 
v_unused_3305_ = lean_ctor_get(v___x_3292_, 0);
lean_dec(v_unused_3305_);
v___x_3294_ = v___x_3292_;
v_isShared_3295_ = v_isSharedCheck_3304_;
goto v_resetjp_3293_;
}
else
{
lean_dec(v___x_3292_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3304_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3296_; lean_object* v___x_3298_; 
v___x_3296_ = lean_box(v___x_3169_);
if (v_isShared_3295_ == 0)
{
lean_ctor_set_tag(v___x_3294_, 1);
lean_ctor_set(v___x_3294_, 0, v___x_3296_);
v___x_3298_ = v___x_3294_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v___x_3296_);
v___x_3298_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
lean_object* v___x_3299_; lean_object* v___x_3301_; 
v___x_3299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
lean_ctor_set(v___x_3299_, 1, v___x_3194_);
if (v_isShared_3291_ == 0)
{
lean_ctor_set(v___x_3290_, 0, v___x_3299_);
v___x_3301_ = v___x_3290_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v___x_3299_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
v_a_3176_ = v___x_3301_;
goto v___jp_3175_;
}
}
}
}
else
{
lean_object* v_a_3306_; 
lean_del_object(v___x_3290_);
v_a_3306_ = lean_ctor_get(v___x_3292_, 0);
lean_inc(v_a_3306_);
lean_dec_ref_known(v___x_3292_, 1);
v___y_3250_ = v___y_3262_;
v___y_3251_ = v___y_3264_;
v___y_3252_ = v___y_3265_;
v___y_3253_ = v___y_3266_;
v___y_3254_ = v___y_3267_;
v___y_3255_ = v___y_3268_;
v_a_3256_ = v_a_3306_;
goto v___jp_3249_;
}
}
}
else
{
lean_object* v_a_3308_; 
v_a_3308_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___x_3287_, 1);
v___y_3250_ = v___y_3262_;
v___y_3251_ = v___y_3264_;
v___y_3252_ = v___y_3265_;
v___y_3253_ = v___y_3266_;
v___y_3254_ = v___y_3267_;
v___y_3255_ = v___y_3268_;
v_a_3256_ = v_a_3308_;
goto v___jp_3249_;
}
}
else
{
lean_object* v_a_3309_; 
lean_dec_ref(v___x_3283_);
v_a_3309_ = lean_ctor_get(v___x_3284_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v___x_3284_, 1);
v___y_3250_ = v___y_3262_;
v___y_3251_ = v___y_3264_;
v___y_3252_ = v___y_3265_;
v___y_3253_ = v___y_3266_;
v___y_3254_ = v___y_3267_;
v___y_3255_ = v___y_3268_;
v_a_3256_ = v_a_3309_;
goto v___jp_3249_;
}
}
else
{
lean_object* v_a_3310_; 
lean_dec_ref(v___y_3263_);
v_a_3310_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_a_3310_);
lean_dec_ref_known(v___x_3273_, 1);
v___y_3250_ = v___y_3262_;
v___y_3251_ = v___y_3264_;
v___y_3252_ = v___y_3265_;
v___y_3253_ = v___y_3266_;
v___y_3254_ = v___y_3267_;
v___y_3255_ = v___y_3268_;
v_a_3256_ = v_a_3310_;
goto v___jp_3249_;
}
}
}
else
{
lean_object* v_a_3311_; 
lean_dec_ref(v___y_3263_);
v_a_3311_ = lean_ctor_get(v___y_3269_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___y_3269_, 1);
v___y_3250_ = v___y_3262_;
v___y_3251_ = v___y_3264_;
v___y_3252_ = v___y_3265_;
v___y_3253_ = v___y_3266_;
v___y_3254_ = v___y_3267_;
v___y_3255_ = v___y_3268_;
v_a_3256_ = v_a_3311_;
goto v___jp_3249_;
}
}
v___jp_3312_:
{
uint8_t v_useDecide_3319_; 
v_useDecide_3319_ = lean_ctor_get_uint8(v_config_3158_, sizeof(void*)*1);
if (v_useDecide_3319_ == 0)
{
v___y_3226_ = v_isHEq_3314_;
v___y_3227_ = v___y_3313_;
v___y_3228_ = v___y_3315_;
v___y_3229_ = v___y_3316_;
v___y_3230_ = v___y_3317_;
v___y_3231_ = v___y_3318_;
goto v___jp_3225_;
}
else
{
uint8_t v___x_3320_; 
v___x_3320_ = l_Lean_Expr_hasFVar(v___x_3224_);
if (v___x_3320_ == 0)
{
lean_object* v___x_3321_; 
lean_inc_ref(v___x_3224_);
v___x_3321_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3224_, v___y_3316_);
if (lean_obj_tag(v___x_3321_) == 0)
{
lean_object* v_a_3322_; uint8_t v___x_3323_; 
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_a_3322_);
lean_dec_ref_known(v___x_3321_, 1);
v___x_3323_ = l_Lean_Expr_hasMVar(v_a_3322_);
if (v___x_3323_ == 0)
{
uint8_t v___x_3324_; 
v___x_3324_ = l_Lean_Expr_hasFVar(v_a_3322_);
lean_dec(v_a_3322_);
if (v___x_3324_ == 0)
{
lean_object* v___x_3325_; 
lean_inc_ref(v___x_3224_);
v___x_3325_ = l_Lean_Meta_mkDecide(v___x_3224_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v___x_3327_; uint8_t v_transparency_3328_; uint8_t v___x_3329_; uint8_t v___x_3330_; 
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
lean_inc(v_a_3326_);
lean_dec_ref_known(v___x_3325_, 1);
v___x_3327_ = l_Lean_Meta_Context_config(v___y_3315_);
v_transparency_3328_ = lean_ctor_get_uint8(v___x_3327_, 9);
lean_dec_ref(v___x_3327_);
v___x_3329_ = 1;
v___x_3330_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3328_, v___x_3329_);
if (v___x_3330_ == 0)
{
lean_object* v_keyedConfig_3331_; uint8_t v_trackZetaDelta_3332_; lean_object* v_zetaDeltaSet_3333_; lean_object* v_lctx_3334_; lean_object* v_localInstances_3335_; lean_object* v_defEqCtx_x3f_3336_; lean_object* v_synthPendingDepth_3337_; lean_object* v_customCanUnfoldPredicate_x3f_3338_; uint8_t v_univApprox_3339_; uint8_t v_inTypeClassResolution_3340_; uint8_t v_cacheInferType_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v_keyedConfig_3331_ = lean_ctor_get(v___y_3315_, 0);
v_trackZetaDelta_3332_ = lean_ctor_get_uint8(v___y_3315_, sizeof(void*)*7);
v_zetaDeltaSet_3333_ = lean_ctor_get(v___y_3315_, 1);
v_lctx_3334_ = lean_ctor_get(v___y_3315_, 2);
v_localInstances_3335_ = lean_ctor_get(v___y_3315_, 3);
v_defEqCtx_x3f_3336_ = lean_ctor_get(v___y_3315_, 4);
v_synthPendingDepth_3337_ = lean_ctor_get(v___y_3315_, 5);
v_customCanUnfoldPredicate_x3f_3338_ = lean_ctor_get(v___y_3315_, 6);
v_univApprox_3339_ = lean_ctor_get_uint8(v___y_3315_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3340_ = lean_ctor_get_uint8(v___y_3315_, sizeof(void*)*7 + 2);
v_cacheInferType_3341_ = lean_ctor_get_uint8(v___y_3315_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3331_);
v___x_3342_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3329_, v_keyedConfig_3331_);
lean_inc(v_customCanUnfoldPredicate_x3f_3338_);
lean_inc(v_synthPendingDepth_3337_);
lean_inc(v_defEqCtx_x3f_3336_);
lean_inc_ref(v_localInstances_3335_);
lean_inc_ref(v_lctx_3334_);
lean_inc(v_zetaDeltaSet_3333_);
v___x_3343_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set(v___x_3343_, 1, v_zetaDeltaSet_3333_);
lean_ctor_set(v___x_3343_, 2, v_lctx_3334_);
lean_ctor_set(v___x_3343_, 3, v_localInstances_3335_);
lean_ctor_set(v___x_3343_, 4, v_defEqCtx_x3f_3336_);
lean_ctor_set(v___x_3343_, 5, v_synthPendingDepth_3337_);
lean_ctor_set(v___x_3343_, 6, v_customCanUnfoldPredicate_x3f_3338_);
lean_ctor_set_uint8(v___x_3343_, sizeof(void*)*7, v_trackZetaDelta_3332_);
lean_ctor_set_uint8(v___x_3343_, sizeof(void*)*7 + 1, v_univApprox_3339_);
lean_ctor_set_uint8(v___x_3343_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3340_);
lean_ctor_set_uint8(v___x_3343_, sizeof(void*)*7 + 3, v_cacheInferType_3341_);
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc(v_a_3326_);
v___x_3344_ = lean_whnf(v_a_3326_, v___x_3343_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3262_ = v_isHEq_3314_;
v___y_3263_ = v_a_3326_;
v___y_3264_ = v___y_3316_;
v___y_3265_ = v___y_3318_;
v___y_3266_ = v___y_3317_;
v___y_3267_ = v___y_3313_;
v___y_3268_ = v___y_3315_;
v___y_3269_ = v___x_3344_;
goto v___jp_3261_;
}
else
{
lean_object* v___x_3345_; 
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
lean_inc(v_a_3326_);
v___x_3345_ = lean_whnf(v_a_3326_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3262_ = v_isHEq_3314_;
v___y_3263_ = v_a_3326_;
v___y_3264_ = v___y_3316_;
v___y_3265_ = v___y_3318_;
v___y_3266_ = v___y_3317_;
v___y_3267_ = v___y_3313_;
v___y_3268_ = v___y_3315_;
v___y_3269_ = v___x_3345_;
goto v___jp_3261_;
}
}
else
{
lean_object* v_a_3346_; 
v_a_3346_ = lean_ctor_get(v___x_3325_, 0);
lean_inc(v_a_3346_);
lean_dec_ref_known(v___x_3325_, 1);
v___y_3250_ = v_isHEq_3314_;
v___y_3251_ = v___y_3316_;
v___y_3252_ = v___y_3318_;
v___y_3253_ = v___y_3317_;
v___y_3254_ = v___y_3313_;
v___y_3255_ = v___y_3315_;
v_a_3256_ = v_a_3346_;
goto v___jp_3249_;
}
}
else
{
v___y_3226_ = v_isHEq_3314_;
v___y_3227_ = v___y_3313_;
v___y_3228_ = v___y_3315_;
v___y_3229_ = v___y_3316_;
v___y_3230_ = v___y_3317_;
v___y_3231_ = v___y_3318_;
goto v___jp_3225_;
}
}
else
{
lean_dec(v_a_3322_);
v___y_3226_ = v_isHEq_3314_;
v___y_3227_ = v___y_3313_;
v___y_3228_ = v___y_3315_;
v___y_3229_ = v___y_3316_;
v___y_3230_ = v___y_3317_;
v___y_3231_ = v___y_3318_;
goto v___jp_3225_;
}
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3347_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3321_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3321_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
else
{
v___y_3226_ = v_isHEq_3314_;
v___y_3227_ = v___y_3313_;
v___y_3228_ = v___y_3315_;
v___y_3229_ = v___y_3316_;
v___y_3230_ = v___y_3317_;
v___y_3231_ = v___y_3318_;
goto v___jp_3225_;
}
}
}
v___jp_3355_:
{
lean_object* v___x_3361_; 
lean_inc_ref(v___x_3224_);
v___x_3361_ = l_Lean_Meta_matchHEq_x3f(v___x_3224_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3361_, 1);
if (lean_obj_tag(v_a_3362_) == 1)
{
lean_object* v_val_3363_; lean_object* v_snd_3364_; lean_object* v_snd_3365_; lean_object* v_fst_3366_; lean_object* v_fst_3367_; lean_object* v_fst_3368_; lean_object* v_snd_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3469_; 
v_val_3363_ = lean_ctor_get(v_a_3362_, 0);
lean_inc(v_val_3363_);
lean_dec_ref_known(v_a_3362_, 1);
v_snd_3364_ = lean_ctor_get(v_val_3363_, 1);
lean_inc(v_snd_3364_);
v_snd_3365_ = lean_ctor_get(v_snd_3364_, 1);
lean_inc(v_snd_3365_);
v_fst_3366_ = lean_ctor_get(v_val_3363_, 0);
lean_inc(v_fst_3366_);
lean_dec(v_val_3363_);
v_fst_3367_ = lean_ctor_get(v_snd_3364_, 0);
lean_inc(v_fst_3367_);
lean_dec(v_snd_3364_);
v_fst_3368_ = lean_ctor_get(v_snd_3365_, 0);
v_snd_3369_ = lean_ctor_get(v_snd_3365_, 1);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_snd_3365_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3371_ = v_snd_3365_;
v_isShared_3372_ = v_isSharedCheck_3469_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_snd_3369_);
lean_inc(v_fst_3368_);
lean_dec(v_snd_3365_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3469_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3373_; 
v___x_3373_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3367_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3373_, 1);
if (lean_obj_tag(v_a_3374_) == 1)
{
lean_object* v_val_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3460_; 
v_val_3375_ = lean_ctor_get(v_a_3374_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_a_3374_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3377_ = v_a_3374_;
v_isShared_3378_ = v_isSharedCheck_3460_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_val_3375_);
lean_dec(v_a_3374_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3460_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3379_; 
v___x_3379_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3369_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
if (lean_obj_tag(v_a_3380_) == 1)
{
lean_object* v_toConstantVal_3381_; lean_object* v_val_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3451_; 
v_toConstantVal_3381_ = lean_ctor_get(v_val_3375_, 0);
lean_inc_ref(v_toConstantVal_3381_);
lean_dec(v_val_3375_);
v_val_3382_ = lean_ctor_get(v_a_3380_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v_a_3380_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3384_ = v_a_3380_;
v_isShared_3385_ = v_isSharedCheck_3451_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_val_3382_);
lean_dec(v_a_3380_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3451_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v_toConstantVal_3386_; lean_object* v_name_3387_; lean_object* v_name_3388_; uint8_t v___x_3389_; 
v_toConstantVal_3386_ = lean_ctor_get(v_val_3382_, 0);
lean_inc_ref(v_toConstantVal_3386_);
lean_dec(v_val_3382_);
v_name_3387_ = lean_ctor_get(v_toConstantVal_3381_, 0);
lean_inc(v_name_3387_);
lean_dec_ref(v_toConstantVal_3381_);
v_name_3388_ = lean_ctor_get(v_toConstantVal_3386_, 0);
lean_inc(v_name_3388_);
lean_dec_ref(v_toConstantVal_3386_);
v___x_3389_ = lean_name_eq(v_name_3387_, v_name_3388_);
lean_dec(v_name_3388_);
lean_dec(v_name_3387_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; 
v___x_3390_ = l_Lean_Meta_isExprDefEq(v_fst_3366_, v_fst_3368_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; uint8_t v___x_3392_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3390_, 1);
v___x_3392_ = lean_unbox(v_a_3391_);
lean_dec(v_a_3391_);
if (v___x_3392_ == 0)
{
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
v___y_3313_ = v_isEq_3356_;
v_isHEq_3314_ = v___x_3169_;
v___y_3315_ = v___y_3357_;
v___y_3316_ = v___y_3358_;
v___y_3317_ = v___y_3359_;
v___y_3318_ = v___y_3360_;
goto v___jp_3312_;
}
else
{
lean_object* v___x_3393_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec_ref(v_config_3158_);
lean_inc(v_mvarId_3159_);
v___x_3393_ = l_Lean_MVarId_getType(v_mvarId_3159_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3393_, 1);
v___x_3395_ = l_Lean_LocalDecl_toExpr(v_val_3190_);
v___x_3396_ = l_Lean_Meta_mkEqOfHEq(v___x_3395_, v___x_3169_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3398_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_a_3397_);
lean_dec_ref_known(v___x_3396_, 1);
v___x_3398_ = l_Lean_Meta_mkNoConfusion(v_a_3394_, v_a_3397_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_a_3399_; lean_object* v___x_3400_; 
v_a_3399_ = lean_ctor_get(v___x_3398_, 0);
lean_inc(v_a_3399_);
lean_dec_ref_known(v___x_3398_, 1);
v___x_3400_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3159_, v_a_3399_, v___y_3358_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v___x_3401_; lean_object* v___x_3403_; 
lean_dec_ref_known(v___x_3400_, 1);
v___x_3401_ = lean_box(v___x_3169_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3401_);
v___x_3403_ = v___x_3384_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3401_);
v___x_3403_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
lean_object* v___x_3405_; 
if (v_isShared_3372_ == 0)
{
lean_ctor_set(v___x_3371_, 1, v___x_3194_);
lean_ctor_set(v___x_3371_, 0, v___x_3403_);
v___x_3405_ = v___x_3371_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3403_);
lean_ctor_set(v_reuseFailAlloc_3409_, 1, v___x_3194_);
v___x_3405_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
lean_object* v___x_3407_; 
if (v_isShared_3378_ == 0)
{
lean_ctor_set_tag(v___x_3377_, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3405_);
v___x_3407_ = v___x_3377_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
v_a_3176_ = v___x_3407_;
goto v___jp_3175_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3411_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3400_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3400_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3419_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___x_3398_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___x_3398_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
}
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3434_; 
lean_dec(v_a_3394_);
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3427_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3429_ = v___x_3396_;
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3396_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
return v___x_3432_;
}
}
}
}
else
{
lean_object* v_a_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3442_; 
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3435_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3437_ = v___x_3393_;
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_a_3435_);
lean_dec(v___x_3393_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3440_; 
if (v_isShared_3438_ == 0)
{
v___x_3440_ = v___x_3437_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3435_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
}
}
else
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3450_; 
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3443_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3445_ = v___x_3390_;
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3390_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3448_; 
if (v_isShared_3446_ == 0)
{
v___x_3448_ = v___x_3445_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3443_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
else
{
lean_del_object(v___x_3384_);
lean_del_object(v___x_3377_);
lean_del_object(v___x_3371_);
lean_dec(v_fst_3368_);
lean_dec(v_fst_3366_);
v___y_3313_ = v_isEq_3356_;
v_isHEq_3314_ = v___x_3169_;
v___y_3315_ = v___y_3357_;
v___y_3316_ = v___y_3358_;
v___y_3317_ = v___y_3359_;
v___y_3318_ = v___y_3360_;
goto v___jp_3312_;
}
}
}
else
{
lean_dec(v_a_3380_);
lean_del_object(v___x_3377_);
lean_dec(v_val_3375_);
lean_del_object(v___x_3371_);
lean_dec(v_fst_3368_);
lean_dec(v_fst_3366_);
v___y_3313_ = v_isEq_3356_;
v_isHEq_3314_ = v___x_3169_;
v___y_3315_ = v___y_3357_;
v___y_3316_ = v___y_3358_;
v___y_3317_ = v___y_3359_;
v___y_3318_ = v___y_3360_;
goto v___jp_3312_;
}
}
else
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3459_; 
lean_del_object(v___x_3377_);
lean_dec(v_val_3375_);
lean_del_object(v___x_3371_);
lean_dec(v_fst_3368_);
lean_dec(v_fst_3366_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3452_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3454_ = v___x_3379_;
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v___x_3379_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
}
}
else
{
lean_dec(v_a_3374_);
lean_del_object(v___x_3371_);
lean_dec(v_snd_3369_);
lean_dec(v_fst_3368_);
lean_dec(v_fst_3366_);
v___y_3313_ = v_isEq_3356_;
v_isHEq_3314_ = v___x_3169_;
v___y_3315_ = v___y_3357_;
v___y_3316_ = v___y_3358_;
v___y_3317_ = v___y_3359_;
v___y_3318_ = v___y_3360_;
goto v___jp_3312_;
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_del_object(v___x_3371_);
lean_dec(v_snd_3369_);
lean_dec(v_fst_3368_);
lean_dec(v_fst_3366_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3461_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3373_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3373_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
else
{
lean_dec(v_a_3362_);
v___y_3313_ = v_isEq_3356_;
v_isHEq_3314_ = v___x_3223_;
v___y_3315_ = v___y_3357_;
v___y_3316_ = v___y_3358_;
v___y_3317_ = v___y_3359_;
v___y_3318_ = v___y_3360_;
goto v___jp_3312_;
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3470_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3361_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3361_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
v___jp_3478_:
{
lean_object* v___x_3483_; 
lean_inc_ref(v___x_3224_);
v___x_3483_ = l_Lean_Meta_matchEq_x3f(v___x_3224_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3483_, 1);
if (lean_obj_tag(v_a_3484_) == 1)
{
lean_object* v_val_3485_; lean_object* v_snd_3486_; lean_object* v_fst_3487_; lean_object* v_snd_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3567_; 
v_val_3485_ = lean_ctor_get(v_a_3484_, 0);
lean_inc(v_val_3485_);
lean_dec_ref_known(v_a_3484_, 1);
v_snd_3486_ = lean_ctor_get(v_val_3485_, 1);
lean_inc(v_snd_3486_);
lean_dec(v_val_3485_);
v_fst_3487_ = lean_ctor_get(v_snd_3486_, 0);
v_snd_3488_ = lean_ctor_get(v_snd_3486_, 1);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_snd_3486_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3490_ = v_snd_3486_;
v_isShared_3491_ = v_isSharedCheck_3567_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_snd_3488_);
lean_inc(v_fst_3487_);
lean_dec(v_snd_3486_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3567_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3492_; 
v___x_3492_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3487_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_a_3493_; 
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
lean_inc(v_a_3493_);
lean_dec_ref_known(v___x_3492_, 1);
if (lean_obj_tag(v_a_3493_) == 1)
{
lean_object* v_val_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3558_; 
v_val_3494_ = lean_ctor_get(v_a_3493_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v_a_3493_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3496_ = v_a_3493_;
v_isShared_3497_ = v_isSharedCheck_3558_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_val_3494_);
lean_dec(v_a_3493_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3558_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3498_; 
v___x_3498_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3488_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
if (lean_obj_tag(v_a_3499_) == 1)
{
lean_object* v_toConstantVal_3500_; lean_object* v_val_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3549_; 
v_toConstantVal_3500_ = lean_ctor_get(v_val_3494_, 0);
lean_inc_ref(v_toConstantVal_3500_);
lean_dec(v_val_3494_);
v_val_3501_ = lean_ctor_get(v_a_3499_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_a_3499_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3503_ = v_a_3499_;
v_isShared_3504_ = v_isSharedCheck_3549_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_val_3501_);
lean_dec(v_a_3499_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3549_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v_toConstantVal_3505_; lean_object* v_name_3506_; lean_object* v_name_3507_; uint8_t v___x_3508_; 
v_toConstantVal_3505_ = lean_ctor_get(v_val_3501_, 0);
lean_inc_ref(v_toConstantVal_3505_);
lean_dec(v_val_3501_);
v_name_3506_ = lean_ctor_get(v_toConstantVal_3500_, 0);
lean_inc(v_name_3506_);
lean_dec_ref(v_toConstantVal_3500_);
v_name_3507_ = lean_ctor_get(v_toConstantVal_3505_, 0);
lean_inc(v_name_3507_);
lean_dec_ref(v_toConstantVal_3505_);
v___x_3508_ = lean_name_eq(v_name_3506_, v_name_3507_);
lean_dec(v_name_3507_);
lean_dec(v_name_3506_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec_ref(v_config_3158_);
lean_inc(v_mvarId_3159_);
v___x_3509_ = l_Lean_MVarId_getType(v_mvarId_3159_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v_a_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v_a_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v___x_3511_ = l_Lean_LocalDecl_toExpr(v_val_3190_);
v___x_3512_ = l_Lean_Meta_mkNoConfusion(v_a_3510_, v___x_3511_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_a_3513_; lean_object* v___x_3514_; 
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3513_);
lean_dec_ref_known(v___x_3512_, 1);
v___x_3514_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3159_, v_a_3513_, v___y_3480_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v___x_3515_; lean_object* v___x_3517_; 
lean_dec_ref_known(v___x_3514_, 1);
v___x_3515_ = lean_box(v___x_3169_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 0, v___x_3515_);
v___x_3517_ = v___x_3503_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
lean_object* v___x_3519_; 
if (v_isShared_3491_ == 0)
{
lean_ctor_set(v___x_3490_, 1, v___x_3194_);
lean_ctor_set(v___x_3490_, 0, v___x_3517_);
v___x_3519_ = v___x_3490_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v___x_3517_);
lean_ctor_set(v_reuseFailAlloc_3523_, 1, v___x_3194_);
v___x_3519_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
lean_object* v___x_3521_; 
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3519_);
v___x_3521_ = v___x_3496_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v___x_3519_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
v_a_3176_ = v___x_3521_;
goto v___jp_3175_;
}
}
}
}
else
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3532_; 
lean_del_object(v___x_3503_);
lean_del_object(v___x_3496_);
lean_del_object(v___x_3490_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3525_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3527_ = v___x_3514_;
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3514_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_a_3525_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
else
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3540_; 
lean_del_object(v___x_3503_);
lean_del_object(v___x_3496_);
lean_del_object(v___x_3490_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3533_ = lean_ctor_get(v___x_3512_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3512_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3535_ = v___x_3512_;
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3512_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
if (v_isShared_3536_ == 0)
{
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3533_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_del_object(v___x_3503_);
lean_del_object(v___x_3496_);
lean_del_object(v___x_3490_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3541_ = lean_ctor_get(v___x_3509_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3509_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3509_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
else
{
lean_del_object(v___x_3503_);
lean_del_object(v___x_3496_);
lean_del_object(v___x_3490_);
v_isEq_3356_ = v___x_3169_;
v___y_3357_ = v___y_3479_;
v___y_3358_ = v___y_3480_;
v___y_3359_ = v___y_3481_;
v___y_3360_ = v___y_3482_;
goto v___jp_3355_;
}
}
}
else
{
lean_dec(v_a_3499_);
lean_del_object(v___x_3496_);
lean_dec(v_val_3494_);
lean_del_object(v___x_3490_);
v_isEq_3356_ = v___x_3169_;
v___y_3357_ = v___y_3479_;
v___y_3358_ = v___y_3480_;
v___y_3359_ = v___y_3481_;
v___y_3360_ = v___y_3482_;
goto v___jp_3355_;
}
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3557_; 
lean_del_object(v___x_3496_);
lean_dec(v_val_3494_);
lean_del_object(v___x_3490_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3550_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3552_ = v___x_3498_;
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3498_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3555_; 
if (v_isShared_3553_ == 0)
{
v___x_3555_ = v___x_3552_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_a_3550_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
}
else
{
lean_dec(v_a_3493_);
lean_del_object(v___x_3490_);
lean_dec(v_snd_3488_);
v_isEq_3356_ = v___x_3169_;
v___y_3357_ = v___y_3479_;
v___y_3358_ = v___y_3480_;
v___y_3359_ = v___y_3481_;
v___y_3360_ = v___y_3482_;
goto v___jp_3355_;
}
}
else
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3566_; 
lean_del_object(v___x_3490_);
lean_dec(v_snd_3488_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3559_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3561_ = v___x_3492_;
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3492_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
if (v_isShared_3562_ == 0)
{
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3559_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
}
else
{
lean_dec(v_a_3484_);
v_isEq_3356_ = v___x_3223_;
v___y_3357_ = v___y_3479_;
v___y_3358_ = v___y_3480_;
v___y_3359_ = v___y_3481_;
v___y_3360_ = v___y_3482_;
goto v___jp_3355_;
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3568_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3483_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3483_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
v___jp_3576_:
{
lean_object* v___x_3581_; 
lean_inc_ref(v___x_3224_);
v___x_3581_ = l_Lean_refutableHasNotBit_x3f(v___x_3224_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___x_3581_, 1);
if (lean_obj_tag(v_a_3582_) == 1)
{
lean_object* v_val_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3623_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec_ref(v_config_3158_);
v_val_3583_ = lean_ctor_get(v_a_3582_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v_a_3582_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3585_ = v_a_3582_;
v_isShared_3586_ = v_isSharedCheck_3623_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_val_3583_);
lean_dec(v_a_3582_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3623_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3587_; 
lean_inc(v_mvarId_3159_);
v___x_3587_ = l_Lean_MVarId_getType(v_mvarId_3159_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v___x_3589_ = l_Lean_LocalDecl_toExpr(v_val_3190_);
v___x_3590_ = l_Lean_Meta_mkAbsurd(v_a_3588_, v_val_3583_, v___x_3589_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v_a_3591_; lean_object* v___x_3592_; 
v_a_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_a_3591_);
lean_dec_ref_known(v___x_3590_, 1);
v___x_3592_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3159_, v_a_3591_, v___y_3578_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v___x_3593_; lean_object* v___x_3595_; 
lean_dec_ref_known(v___x_3592_, 1);
v___x_3593_ = lean_box(v___x_3169_);
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 0, v___x_3593_);
v___x_3595_ = v___x_3585_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3595_);
lean_ctor_set(v___x_3596_, 1, v___x_3194_);
v___x_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
v_a_3176_ = v___x_3597_;
goto v___jp_3175_;
}
}
else
{
lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3606_; 
lean_del_object(v___x_3585_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3599_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3601_ = v___x_3592_;
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_dec(v___x_3592_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3604_; 
if (v_isShared_3602_ == 0)
{
v___x_3604_ = v___x_3601_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3599_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3614_; 
lean_del_object(v___x_3585_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3607_ = lean_ctor_get(v___x_3590_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3590_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___x_3590_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3590_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
else
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3622_; 
lean_del_object(v___x_3585_);
lean_dec(v_val_3583_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3615_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3617_ = v___x_3587_;
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3587_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3620_; 
if (v_isShared_3618_ == 0)
{
v___x_3620_ = v___x_3617_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_a_3615_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
}
else
{
lean_object* v___x_3624_; 
lean_dec(v_a_3582_);
lean_inc_ref(v___x_3224_);
v___x_3624_ = l_Lean_Meta_matchNe_x3f(v___x_3224_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3625_; 
v_a_3625_ = lean_ctor_get(v___x_3624_, 0);
lean_inc(v_a_3625_);
lean_dec_ref_known(v___x_3624_, 1);
if (lean_obj_tag(v_a_3625_) == 1)
{
lean_object* v_val_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3696_; 
v_val_3626_ = lean_ctor_get(v_a_3625_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v_a_3625_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3628_ = v_a_3625_;
v_isShared_3629_ = v_isSharedCheck_3696_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_val_3626_);
lean_dec(v_a_3625_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3696_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v_snd_3630_; lean_object* v_fst_3631_; lean_object* v_snd_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3695_; 
v_snd_3630_ = lean_ctor_get(v_val_3626_, 1);
lean_inc(v_snd_3630_);
lean_dec(v_val_3626_);
v_fst_3631_ = lean_ctor_get(v_snd_3630_, 0);
v_snd_3632_ = lean_ctor_get(v_snd_3630_, 1);
v_isSharedCheck_3695_ = !lean_is_exclusive(v_snd_3630_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3634_ = v_snd_3630_;
v_isShared_3635_ = v_isSharedCheck_3695_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_snd_3632_);
lean_inc(v_fst_3631_);
lean_dec(v_snd_3630_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3695_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; 
lean_inc(v_fst_3631_);
v___x_3636_ = l_Lean_Meta_isExprDefEq(v_fst_3631_, v_snd_3632_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; uint8_t v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = lean_unbox(v_a_3637_);
lean_dec(v_a_3637_);
if (v___x_3638_ == 0)
{
lean_del_object(v___x_3634_);
lean_dec(v_fst_3631_);
lean_del_object(v___x_3628_);
v___y_3479_ = v___y_3577_;
v___y_3480_ = v___y_3578_;
v___y_3481_ = v___y_3579_;
v___y_3482_ = v___y_3580_;
goto v___jp_3478_;
}
else
{
lean_object* v___x_3639_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec_ref(v_config_3158_);
lean_inc(v_mvarId_3159_);
v___x_3639_ = l_Lean_MVarId_getType(v_mvarId_3159_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v_a_3640_; lean_object* v___x_3641_; 
v_a_3640_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3639_, 1);
v___x_3641_ = l_Lean_Meta_mkEqRefl(v_fst_3631_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
lean_dec_ref_known(v___x_3641_, 1);
v___x_3643_ = l_Lean_LocalDecl_toExpr(v_val_3190_);
v___x_3644_ = l_Lean_Meta_mkAbsurd(v_a_3640_, v_a_3642_, v___x_3643_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; lean_object* v___x_3646_; 
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
lean_inc(v_a_3645_);
lean_dec_ref_known(v___x_3644_, 1);
v___x_3646_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3159_, v_a_3645_, v___y_3578_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v___x_3647_; lean_object* v___x_3649_; 
lean_dec_ref_known(v___x_3646_, 1);
v___x_3647_ = lean_box(v___x_3169_);
if (v_isShared_3629_ == 0)
{
lean_ctor_set(v___x_3628_, 0, v___x_3647_);
v___x_3649_ = v___x_3628_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3647_);
v___x_3649_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
lean_object* v___x_3651_; 
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 1, v___x_3194_);
lean_ctor_set(v___x_3634_, 0, v___x_3649_);
v___x_3651_ = v___x_3634_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v___x_3649_);
lean_ctor_set(v_reuseFailAlloc_3653_, 1, v___x_3194_);
v___x_3651_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
lean_object* v___x_3652_; 
v___x_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
v_a_3176_ = v___x_3652_;
goto v___jp_3175_;
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_del_object(v___x_3634_);
lean_del_object(v___x_3628_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3655_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3646_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3646_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
lean_del_object(v___x_3634_);
lean_del_object(v___x_3628_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3663_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3644_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3644_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
else
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
lean_dec(v_a_3640_);
lean_del_object(v___x_3634_);
lean_del_object(v___x_3628_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3671_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3641_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3641_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
lean_del_object(v___x_3634_);
lean_dec(v_fst_3631_);
lean_del_object(v___x_3628_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
v_a_3679_ = lean_ctor_get(v___x_3639_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3681_ = v___x_3639_;
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3639_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
}
else
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3694_; 
lean_del_object(v___x_3634_);
lean_dec(v_fst_3631_);
lean_del_object(v___x_3628_);
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3687_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3689_ = v___x_3636_;
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v___x_3636_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3692_; 
if (v_isShared_3690_ == 0)
{
v___x_3692_ = v___x_3689_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_a_3687_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3625_);
v___y_3479_ = v___y_3577_;
v___y_3480_ = v___y_3578_;
v___y_3481_ = v___y_3579_;
v___y_3482_ = v___y_3580_;
goto v___jp_3478_;
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3704_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3697_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3699_ = v___x_3624_;
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3624_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3702_; 
if (v_isShared_3700_ == 0)
{
v___x_3702_ = v___x_3699_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_a_3697_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
}
else
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
lean_dec_ref(v___x_3224_);
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3705_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3581_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3581_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
else
{
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3184_ = v___x_3195_;
goto v___jp_3183_;
}
v___jp_3196_:
{
uint8_t v_emptyType_3203_; 
v_emptyType_3203_ = lean_ctor_get_uint8(v_config_3158_, sizeof(void*)*1 + 1);
if (v_emptyType_3203_ == 0)
{
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3184_ = v___x_3195_;
goto v___jp_3183_;
}
else
{
if (v___y_3198_ == 0)
{
if (v___y_3197_ == 0)
{
lean_object* v_searchFuel_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v_searchFuel_3204_ = lean_ctor_get(v_config_3158_, 0);
v___x_3205_ = l_Lean_LocalDecl_fvarId(v_val_3190_);
lean_dec(v_val_3190_);
lean_inc(v_searchFuel_3204_);
lean_inc(v_mvarId_3159_);
v___x_3206_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3159_, v___x_3205_, v_searchFuel_3204_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; uint8_t v___x_3208_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v___x_3208_ = lean_unbox(v_a_3207_);
lean_dec(v_a_3207_);
if (v___x_3208_ == 0)
{
lean_del_object(v___x_3192_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3184_ = v___x_3195_;
goto v___jp_3183_;
}
else
{
lean_object* v___x_3209_; lean_object* v___x_3211_; 
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v___x_3209_ = lean_box(v___x_3169_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v___x_3209_);
v___x_3211_ = v___x_3192_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3209_);
v___x_3211_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
lean_ctor_set(v___x_3212_, 1, v___x_3194_);
v___x_3213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
v_a_3176_ = v___x_3213_;
goto v___jp_3175_;
}
}
}
else
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3222_; 
lean_del_object(v___x_3192_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
lean_dec(v_mvarId_3159_);
lean_dec_ref(v_config_3158_);
v_a_3215_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3217_ = v___x_3206_;
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_3206_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v___x_3220_; 
if (v_isShared_3218_ == 0)
{
v___x_3220_ = v___x_3217_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3215_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
else
{
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3184_ = v___x_3195_;
goto v___jp_3183_;
}
}
else
{
lean_del_object(v___x_3192_);
lean_dec(v_val_3190_);
lean_del_object(v___x_3173_);
lean_dec(v_snd_3171_);
v_a_3184_ = v___x_3195_;
goto v___jp_3183_;
}
}
}
}
}
v___jp_3175_:
{
lean_object* v___x_3177_; lean_object* v___x_3179_; 
v___x_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3177_, 0, v_a_3176_);
if (v_isShared_3174_ == 0)
{
lean_ctor_set(v___x_3173_, 0, v___x_3177_);
v___x_3179_ = v___x_3173_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3177_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v_snd_3171_);
v___x_3179_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
lean_object* v___x_3180_; 
v___x_3180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3179_);
return v___x_3180_;
}
}
v___jp_3183_:
{
lean_object* v___x_3185_; size_t v___x_3186_; size_t v___x_3187_; 
v___x_3185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3182_);
lean_ctor_set(v___x_3185_, 1, v_a_3184_);
v___x_3186_ = ((size_t)1ULL);
v___x_3187_ = lean_usize_add(v_i_3162_, v___x_3186_);
v_i_3162_ = v___x_3187_;
v_b_3163_ = v___x_3185_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_config_3786_, lean_object* v_mvarId_3787_, lean_object* v_as_3788_, lean_object* v_sz_3789_, lean_object* v_i_3790_, lean_object* v_b_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_){
_start:
{
size_t v_sz_boxed_3797_; size_t v_i_boxed_3798_; lean_object* v_res_3799_; 
v_sz_boxed_3797_ = lean_unbox_usize(v_sz_3789_);
lean_dec(v_sz_3789_);
v_i_boxed_3798_ = lean_unbox_usize(v_i_3790_);
lean_dec(v_i_3790_);
v_res_3799_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3786_, v_mvarId_3787_, v_as_3788_, v_sz_boxed_3797_, v_i_boxed_3798_, v_b_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_);
lean_dec(v___y_3795_);
lean_dec_ref(v___y_3794_);
lean_dec(v___y_3793_);
lean_dec_ref(v___y_3792_);
lean_dec_ref(v_as_3788_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object* v_config_3800_, lean_object* v_mvarId_3801_, lean_object* v_as_3802_, size_t v_sz_3803_, size_t v_i_3804_, lean_object* v_b_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
uint8_t v___x_3811_; 
v___x_3811_ = lean_usize_dec_lt(v_i_3804_, v_sz_3803_);
if (v___x_3811_ == 0)
{
lean_object* v___x_3812_; 
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v___x_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3812_, 0, v_b_3805_);
return v___x_3812_;
}
else
{
lean_object* v_snd_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_4426_; 
v_snd_3813_ = lean_ctor_get(v_b_3805_, 1);
v_isSharedCheck_4426_ = !lean_is_exclusive(v_b_3805_);
if (v_isSharedCheck_4426_ == 0)
{
lean_object* v_unused_4427_; 
v_unused_4427_ = lean_ctor_get(v_b_3805_, 0);
lean_dec(v_unused_4427_);
v___x_3815_ = v_b_3805_;
v_isShared_3816_ = v_isSharedCheck_4426_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_snd_3813_);
lean_dec(v_b_3805_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_4426_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v_a_3818_; lean_object* v___x_3824_; lean_object* v_a_3826_; lean_object* v_a_3831_; 
v___x_3824_ = lean_box(0);
v_a_3831_ = lean_array_uget(v_as_3802_, v_i_3804_);
if (lean_obj_tag(v_a_3831_) == 0)
{
lean_del_object(v___x_3815_);
v_a_3826_ = v_snd_3813_;
goto v___jp_3825_;
}
else
{
lean_object* v_val_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_4425_; 
v_val_3832_ = lean_ctor_get(v_a_3831_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v_a_3831_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_3834_ = v_a_3831_;
v_isShared_3835_ = v_isSharedCheck_4425_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_val_3832_);
lean_dec(v_a_3831_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_4425_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; uint8_t v___y_3839_; uint8_t v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; uint8_t v___x_3865_; 
v___x_3836_ = lean_box(0);
v___x_3837_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3865_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3832_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; uint8_t v___y_3868_; uint8_t v___y_3869_; lean_object* v___y_3870_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3873_; lean_object* v___y_3892_; uint8_t v___y_3893_; lean_object* v___y_3894_; uint8_t v___y_3895_; lean_object* v___y_3896_; lean_object* v___y_3897_; lean_object* v_a_3898_; lean_object* v___y_3904_; uint8_t v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3907_; uint8_t v___y_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3911_; uint8_t v___y_3955_; uint8_t v_isHEq_3956_; lean_object* v___y_3957_; lean_object* v___y_3958_; lean_object* v___y_3959_; lean_object* v___y_3960_; uint8_t v_isEq_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___x_4355_; 
v___x_3866_ = l_Lean_LocalDecl_type(v_val_3832_);
lean_inc_ref(v___x_3866_);
v___x_4355_ = l_Lean_Meta_matchNot_x3f(v___x_3866_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
if (lean_obj_tag(v___x_4355_) == 0)
{
lean_object* v_a_4356_; 
v_a_4356_ = lean_ctor_get(v___x_4355_, 0);
lean_inc(v_a_4356_);
lean_dec_ref_known(v___x_4355_, 1);
if (lean_obj_tag(v_a_4356_) == 1)
{
lean_object* v_val_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4416_; 
v_val_4357_ = lean_ctor_get(v_a_4356_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v_a_4356_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4359_ = v_a_4356_;
v_isShared_4360_ = v_isSharedCheck_4416_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_val_4357_);
lean_dec(v_a_4356_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4416_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4361_; 
v___x_4361_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_4357_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
if (lean_obj_tag(v___x_4361_) == 0)
{
lean_object* v_a_4362_; 
v_a_4362_ = lean_ctor_get(v___x_4361_, 0);
lean_inc(v_a_4362_);
lean_dec_ref_known(v___x_4361_, 1);
if (lean_obj_tag(v_a_4362_) == 1)
{
lean_object* v_val_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4407_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec_ref(v_config_3800_);
v_val_4363_ = lean_ctor_get(v_a_4362_, 0);
v_isSharedCheck_4407_ = !lean_is_exclusive(v_a_4362_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4365_ = v_a_4362_;
v_isShared_4366_ = v_isSharedCheck_4407_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_val_4363_);
lean_dec(v_a_4362_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4407_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4367_; 
lean_inc(v_mvarId_3801_);
v___x_4367_ = l_Lean_MVarId_getType(v_mvarId_3801_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
if (lean_obj_tag(v___x_4367_) == 0)
{
lean_object* v_a_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v_a_4368_ = lean_ctor_get(v___x_4367_, 0);
lean_inc(v_a_4368_);
lean_dec_ref_known(v___x_4367_, 1);
v___x_4369_ = l_Lean_LocalDecl_toExpr(v_val_3832_);
v___x_4370_ = l_Lean_mkFVar(v_val_4363_);
v___x_4371_ = l_Lean_Expr_app___override(v___x_4369_, v___x_4370_);
v___x_4372_ = l_Lean_Meta_mkFalseElim(v_a_4368_, v___x_4371_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_object* v_a_4373_; lean_object* v___x_4374_; 
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
lean_inc(v_a_4373_);
lean_dec_ref_known(v___x_4372_, 1);
v___x_4374_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3801_, v_a_4373_, v___y_3807_);
if (lean_obj_tag(v___x_4374_) == 0)
{
lean_object* v___x_4375_; lean_object* v___x_4377_; 
lean_dec_ref_known(v___x_4374_, 1);
v___x_4375_ = lean_box(v___x_3811_);
if (v_isShared_4366_ == 0)
{
lean_ctor_set(v___x_4365_, 0, v___x_4375_);
v___x_4377_ = v___x_4365_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v___x_4375_);
v___x_4377_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
lean_object* v___x_4378_; lean_object* v___x_4380_; 
v___x_4378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4378_, 0, v___x_4377_);
lean_ctor_set(v___x_4378_, 1, v___x_3836_);
if (v_isShared_4360_ == 0)
{
lean_ctor_set_tag(v___x_4359_, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4378_);
v___x_4380_ = v___x_4359_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v___x_4378_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
v_a_3818_ = v___x_4380_;
goto v___jp_3817_;
}
}
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_del_object(v___x_4365_);
lean_del_object(v___x_4359_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_4383_ = lean_ctor_get(v___x_4374_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4374_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4374_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4374_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
else
{
lean_object* v_a_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4398_; 
lean_del_object(v___x_4365_);
lean_del_object(v___x_4359_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4391_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4393_ = v___x_4372_;
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_a_4391_);
lean_dec(v___x_4372_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4396_; 
if (v_isShared_4394_ == 0)
{
v___x_4396_ = v___x_4393_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_a_4391_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_del_object(v___x_4365_);
lean_dec(v_val_4363_);
lean_del_object(v___x_4359_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4399_ = lean_ctor_get(v___x_4367_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4367_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4367_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4367_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
}
else
{
lean_dec(v_a_4362_);
lean_del_object(v___x_4359_);
v___y_4219_ = v___y_3806_;
v___y_4220_ = v___y_3807_;
v___y_4221_ = v___y_3808_;
v___y_4222_ = v___y_3809_;
goto v___jp_4218_;
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
lean_del_object(v___x_4359_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4408_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4361_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4361_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
}
else
{
lean_dec(v_a_4356_);
v___y_4219_ = v___y_3806_;
v___y_4220_ = v___y_3807_;
v___y_4221_ = v___y_3808_;
v___y_4222_ = v___y_3809_;
goto v___jp_4218_;
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4417_ = lean_ctor_get(v___x_4355_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4355_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4419_ = v___x_4355_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_a_4417_);
lean_dec(v___x_4355_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4417_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
v___jp_3867_:
{
uint8_t v_genDiseq_3874_; 
v_genDiseq_3874_ = lean_ctor_get_uint8(v_config_3800_, sizeof(void*)*1 + 2);
if (v_genDiseq_3874_ == 0)
{
lean_dec_ref(v___x_3866_);
v___y_3839_ = v___y_3868_;
v___y_3840_ = v___y_3869_;
v___y_3841_ = v___y_3870_;
v___y_3842_ = v___y_3871_;
v___y_3843_ = v___y_3872_;
v___y_3844_ = v___y_3873_;
goto v___jp_3838_;
}
else
{
uint8_t v___x_3875_; 
v___x_3875_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3866_);
lean_dec_ref(v___x_3866_);
if (v___x_3875_ == 0)
{
v___y_3839_ = v___y_3868_;
v___y_3840_ = v___y_3869_;
v___y_3841_ = v___y_3870_;
v___y_3842_ = v___y_3871_;
v___y_3843_ = v___y_3872_;
v___y_3844_ = v___y_3873_;
goto v___jp_3838_;
}
else
{
lean_object* v___x_3876_; 
lean_inc(v_val_3832_);
lean_inc(v_mvarId_3801_);
v___x_3876_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3801_, v_val_3832_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v_a_3877_; uint8_t v___x_3878_; 
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_a_3877_);
lean_dec_ref_known(v___x_3876_, 1);
v___x_3878_ = lean_unbox(v_a_3877_);
lean_dec(v_a_3877_);
if (v___x_3878_ == 0)
{
v___y_3839_ = v___y_3868_;
v___y_3840_ = v___y_3869_;
v___y_3841_ = v___y_3870_;
v___y_3842_ = v___y_3871_;
v___y_3843_ = v___y_3872_;
v___y_3844_ = v___y_3873_;
goto v___jp_3838_;
}
else
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v___x_3879_ = lean_box(v___x_3811_);
v___x_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
v___x_3881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3880_);
lean_ctor_set(v___x_3881_, 1, v___x_3836_);
v___x_3882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
v_a_3818_ = v___x_3882_;
goto v___jp_3817_;
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_3883_ = lean_ctor_get(v___x_3876_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3876_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3876_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3876_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
}
v___jp_3891_:
{
uint8_t v___x_3899_; 
v___x_3899_ = l_Lean_Exception_isInterrupt(v_a_3898_);
if (v___x_3899_ == 0)
{
uint8_t v___x_3900_; 
lean_inc_ref(v_a_3898_);
v___x_3900_ = l_Lean_Exception_isRuntime(v_a_3898_);
if (v___x_3900_ == 0)
{
lean_dec_ref(v_a_3898_);
v___y_3868_ = v___y_3893_;
v___y_3869_ = v___y_3895_;
v___y_3870_ = v___y_3897_;
v___y_3871_ = v___y_3894_;
v___y_3872_ = v___y_3892_;
v___y_3873_ = v___y_3896_;
goto v___jp_3867_;
}
else
{
lean_object* v___x_3901_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v___x_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3901_, 0, v_a_3898_);
return v___x_3901_;
}
}
else
{
lean_object* v___x_3902_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v___x_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3902_, 0, v_a_3898_);
return v___x_3902_;
}
}
v___jp_3903_:
{
if (lean_obj_tag(v___y_3911_) == 0)
{
lean_object* v_a_3912_; lean_object* v___x_3913_; uint8_t v___x_3914_; 
v_a_3912_ = lean_ctor_get(v___y_3911_, 0);
lean_inc(v_a_3912_);
lean_dec_ref_known(v___y_3911_, 1);
v___x_3913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3914_ = l_Lean_Expr_isConstOf(v_a_3912_, v___x_3913_);
lean_dec(v_a_3912_);
if (v___x_3914_ == 0)
{
lean_dec_ref(v___y_3907_);
v___y_3868_ = v___y_3905_;
v___y_3869_ = v___y_3908_;
v___y_3870_ = v___y_3910_;
v___y_3871_ = v___y_3906_;
v___y_3872_ = v___y_3904_;
v___y_3873_ = v___y_3909_;
goto v___jp_3867_;
}
else
{
lean_object* v___x_3915_; 
lean_inc_ref(v___y_3907_);
v___x_3915_ = l_Lean_Meta_mkEqRefl(v___y_3907_, v___y_3910_, v___y_3906_, v___y_3904_, v___y_3909_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3917_; lean_object* v_dummy_3918_; lean_object* v_nargs_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3916_);
lean_dec_ref_known(v___x_3915_, 1);
v___x_3917_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3918_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_3919_ = l_Lean_Expr_getAppNumArgs(v___y_3907_);
lean_inc(v_nargs_3919_);
v___x_3920_ = lean_mk_array(v_nargs_3919_, v_dummy_3918_);
v___x_3921_ = lean_unsigned_to_nat(1u);
v___x_3922_ = lean_nat_sub(v_nargs_3919_, v___x_3921_);
lean_dec(v_nargs_3919_);
v___x_3923_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3907_, v___x_3920_, v___x_3922_);
v___x_3924_ = lean_array_push(v___x_3923_, v_a_3916_);
v___x_3925_ = l_Lean_mkAppN(v___x_3917_, v___x_3924_);
lean_dec_ref(v___x_3924_);
lean_inc(v_mvarId_3801_);
v___x_3926_ = l_Lean_MVarId_getType(v_mvarId_3801_, v___y_3910_, v___y_3906_, v___y_3904_, v___y_3909_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v_a_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3927_);
lean_dec_ref_known(v___x_3926_, 1);
lean_inc(v_val_3832_);
v___x_3928_ = l_Lean_LocalDecl_toExpr(v_val_3832_);
v___x_3929_ = l_Lean_Meta_mkAbsurd(v_a_3927_, v___x_3928_, v___x_3925_, v___y_3910_, v___y_3906_, v___y_3904_, v___y_3909_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3949_; 
v_a_3930_ = lean_ctor_get(v___x_3929_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3929_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3932_ = v___x_3929_;
v_isShared_3933_ = v_isSharedCheck_3949_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3929_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3949_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3934_; 
lean_inc(v_mvarId_3801_);
v___x_3934_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3801_, v_a_3930_, v___y_3906_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3946_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3946_ == 0)
{
lean_object* v_unused_3947_; 
v_unused_3947_ = lean_ctor_get(v___x_3934_, 0);
lean_dec(v_unused_3947_);
v___x_3936_ = v___x_3934_;
v_isShared_3937_ = v_isSharedCheck_3946_;
goto v_resetjp_3935_;
}
else
{
lean_dec(v___x_3934_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3946_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3938_; lean_object* v___x_3940_; 
v___x_3938_ = lean_box(v___x_3811_);
if (v_isShared_3937_ == 0)
{
lean_ctor_set_tag(v___x_3936_, 1);
lean_ctor_set(v___x_3936_, 0, v___x_3938_);
v___x_3940_ = v___x_3936_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3938_);
v___x_3940_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
lean_object* v___x_3941_; lean_object* v___x_3943_; 
v___x_3941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
lean_ctor_set(v___x_3941_, 1, v___x_3836_);
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 0, v___x_3941_);
v___x_3943_ = v___x_3932_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v___x_3941_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
v_a_3818_ = v___x_3943_;
goto v___jp_3817_;
}
}
}
}
else
{
lean_object* v_a_3948_; 
lean_del_object(v___x_3932_);
v_a_3948_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3948_);
lean_dec_ref_known(v___x_3934_, 1);
v___y_3892_ = v___y_3904_;
v___y_3893_ = v___y_3905_;
v___y_3894_ = v___y_3906_;
v___y_3895_ = v___y_3908_;
v___y_3896_ = v___y_3909_;
v___y_3897_ = v___y_3910_;
v_a_3898_ = v_a_3948_;
goto v___jp_3891_;
}
}
}
else
{
lean_object* v_a_3950_; 
v_a_3950_ = lean_ctor_get(v___x_3929_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3929_, 1);
v___y_3892_ = v___y_3904_;
v___y_3893_ = v___y_3905_;
v___y_3894_ = v___y_3906_;
v___y_3895_ = v___y_3908_;
v___y_3896_ = v___y_3909_;
v___y_3897_ = v___y_3910_;
v_a_3898_ = v_a_3950_;
goto v___jp_3891_;
}
}
else
{
lean_object* v_a_3951_; 
lean_dec_ref(v___x_3925_);
v_a_3951_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3951_);
lean_dec_ref_known(v___x_3926_, 1);
v___y_3892_ = v___y_3904_;
v___y_3893_ = v___y_3905_;
v___y_3894_ = v___y_3906_;
v___y_3895_ = v___y_3908_;
v___y_3896_ = v___y_3909_;
v___y_3897_ = v___y_3910_;
v_a_3898_ = v_a_3951_;
goto v___jp_3891_;
}
}
else
{
lean_object* v_a_3952_; 
lean_dec_ref(v___y_3907_);
v_a_3952_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3952_);
lean_dec_ref_known(v___x_3915_, 1);
v___y_3892_ = v___y_3904_;
v___y_3893_ = v___y_3905_;
v___y_3894_ = v___y_3906_;
v___y_3895_ = v___y_3908_;
v___y_3896_ = v___y_3909_;
v___y_3897_ = v___y_3910_;
v_a_3898_ = v_a_3952_;
goto v___jp_3891_;
}
}
}
else
{
lean_object* v_a_3953_; 
lean_dec_ref(v___y_3907_);
v_a_3953_ = lean_ctor_get(v___y_3911_, 0);
lean_inc(v_a_3953_);
lean_dec_ref_known(v___y_3911_, 1);
v___y_3892_ = v___y_3904_;
v___y_3893_ = v___y_3905_;
v___y_3894_ = v___y_3906_;
v___y_3895_ = v___y_3908_;
v___y_3896_ = v___y_3909_;
v___y_3897_ = v___y_3910_;
v_a_3898_ = v_a_3953_;
goto v___jp_3891_;
}
}
v___jp_3954_:
{
uint8_t v_useDecide_3961_; 
v_useDecide_3961_ = lean_ctor_get_uint8(v_config_3800_, sizeof(void*)*1);
if (v_useDecide_3961_ == 0)
{
v___y_3868_ = v___y_3955_;
v___y_3869_ = v_isHEq_3956_;
v___y_3870_ = v___y_3957_;
v___y_3871_ = v___y_3958_;
v___y_3872_ = v___y_3959_;
v___y_3873_ = v___y_3960_;
goto v___jp_3867_;
}
else
{
uint8_t v___x_3962_; 
v___x_3962_ = l_Lean_Expr_hasFVar(v___x_3866_);
if (v___x_3962_ == 0)
{
lean_object* v___x_3963_; 
lean_inc_ref(v___x_3866_);
v___x_3963_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3866_, v___y_3958_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; uint8_t v___x_3965_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_a_3964_);
lean_dec_ref_known(v___x_3963_, 1);
v___x_3965_ = l_Lean_Expr_hasMVar(v_a_3964_);
if (v___x_3965_ == 0)
{
uint8_t v___x_3966_; 
v___x_3966_ = l_Lean_Expr_hasFVar(v_a_3964_);
lean_dec(v_a_3964_);
if (v___x_3966_ == 0)
{
lean_object* v___x_3967_; 
lean_inc_ref(v___x_3866_);
v___x_3967_ = l_Lean_Meta_mkDecide(v___x_3866_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3969_; uint8_t v_transparency_3970_; uint8_t v___x_3971_; uint8_t v___x_3972_; 
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_a_3968_);
lean_dec_ref_known(v___x_3967_, 1);
v___x_3969_ = l_Lean_Meta_Context_config(v___y_3957_);
v_transparency_3970_ = lean_ctor_get_uint8(v___x_3969_, 9);
lean_dec_ref(v___x_3969_);
v___x_3971_ = 1;
v___x_3972_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3970_, v___x_3971_);
if (v___x_3972_ == 0)
{
lean_object* v_keyedConfig_3973_; uint8_t v_trackZetaDelta_3974_; lean_object* v_zetaDeltaSet_3975_; lean_object* v_lctx_3976_; lean_object* v_localInstances_3977_; lean_object* v_defEqCtx_x3f_3978_; lean_object* v_synthPendingDepth_3979_; lean_object* v_customCanUnfoldPredicate_x3f_3980_; uint8_t v_univApprox_3981_; uint8_t v_inTypeClassResolution_3982_; uint8_t v_cacheInferType_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
v_keyedConfig_3973_ = lean_ctor_get(v___y_3957_, 0);
v_trackZetaDelta_3974_ = lean_ctor_get_uint8(v___y_3957_, sizeof(void*)*7);
v_zetaDeltaSet_3975_ = lean_ctor_get(v___y_3957_, 1);
v_lctx_3976_ = lean_ctor_get(v___y_3957_, 2);
v_localInstances_3977_ = lean_ctor_get(v___y_3957_, 3);
v_defEqCtx_x3f_3978_ = lean_ctor_get(v___y_3957_, 4);
v_synthPendingDepth_3979_ = lean_ctor_get(v___y_3957_, 5);
v_customCanUnfoldPredicate_x3f_3980_ = lean_ctor_get(v___y_3957_, 6);
v_univApprox_3981_ = lean_ctor_get_uint8(v___y_3957_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3982_ = lean_ctor_get_uint8(v___y_3957_, sizeof(void*)*7 + 2);
v_cacheInferType_3983_ = lean_ctor_get_uint8(v___y_3957_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3973_);
v___x_3984_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3971_, v_keyedConfig_3973_);
lean_inc(v_customCanUnfoldPredicate_x3f_3980_);
lean_inc(v_synthPendingDepth_3979_);
lean_inc(v_defEqCtx_x3f_3978_);
lean_inc_ref(v_localInstances_3977_);
lean_inc_ref(v_lctx_3976_);
lean_inc(v_zetaDeltaSet_3975_);
v___x_3985_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3985_, 0, v___x_3984_);
lean_ctor_set(v___x_3985_, 1, v_zetaDeltaSet_3975_);
lean_ctor_set(v___x_3985_, 2, v_lctx_3976_);
lean_ctor_set(v___x_3985_, 3, v_localInstances_3977_);
lean_ctor_set(v___x_3985_, 4, v_defEqCtx_x3f_3978_);
lean_ctor_set(v___x_3985_, 5, v_synthPendingDepth_3979_);
lean_ctor_set(v___x_3985_, 6, v_customCanUnfoldPredicate_x3f_3980_);
lean_ctor_set_uint8(v___x_3985_, sizeof(void*)*7, v_trackZetaDelta_3974_);
lean_ctor_set_uint8(v___x_3985_, sizeof(void*)*7 + 1, v_univApprox_3981_);
lean_ctor_set_uint8(v___x_3985_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3982_);
lean_ctor_set_uint8(v___x_3985_, sizeof(void*)*7 + 3, v_cacheInferType_3983_);
lean_inc(v___y_3960_);
lean_inc_ref(v___y_3959_);
lean_inc(v___y_3958_);
lean_inc(v_a_3968_);
v___x_3986_ = lean_whnf(v_a_3968_, v___x_3985_, v___y_3958_, v___y_3959_, v___y_3960_);
v___y_3904_ = v___y_3959_;
v___y_3905_ = v___y_3955_;
v___y_3906_ = v___y_3958_;
v___y_3907_ = v_a_3968_;
v___y_3908_ = v_isHEq_3956_;
v___y_3909_ = v___y_3960_;
v___y_3910_ = v___y_3957_;
v___y_3911_ = v___x_3986_;
goto v___jp_3903_;
}
else
{
lean_object* v___x_3987_; 
lean_inc(v___y_3960_);
lean_inc_ref(v___y_3959_);
lean_inc(v___y_3958_);
lean_inc_ref(v___y_3957_);
lean_inc(v_a_3968_);
v___x_3987_ = lean_whnf(v_a_3968_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_);
v___y_3904_ = v___y_3959_;
v___y_3905_ = v___y_3955_;
v___y_3906_ = v___y_3958_;
v___y_3907_ = v_a_3968_;
v___y_3908_ = v_isHEq_3956_;
v___y_3909_ = v___y_3960_;
v___y_3910_ = v___y_3957_;
v___y_3911_ = v___x_3987_;
goto v___jp_3903_;
}
}
else
{
lean_object* v_a_3988_; 
v_a_3988_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_a_3988_);
lean_dec_ref_known(v___x_3967_, 1);
v___y_3892_ = v___y_3959_;
v___y_3893_ = v___y_3955_;
v___y_3894_ = v___y_3958_;
v___y_3895_ = v_isHEq_3956_;
v___y_3896_ = v___y_3960_;
v___y_3897_ = v___y_3957_;
v_a_3898_ = v_a_3988_;
goto v___jp_3891_;
}
}
else
{
v___y_3868_ = v___y_3955_;
v___y_3869_ = v_isHEq_3956_;
v___y_3870_ = v___y_3957_;
v___y_3871_ = v___y_3958_;
v___y_3872_ = v___y_3959_;
v___y_3873_ = v___y_3960_;
goto v___jp_3867_;
}
}
else
{
lean_dec(v_a_3964_);
v___y_3868_ = v___y_3955_;
v___y_3869_ = v_isHEq_3956_;
v___y_3870_ = v___y_3957_;
v___y_3871_ = v___y_3958_;
v___y_3872_ = v___y_3959_;
v___y_3873_ = v___y_3960_;
goto v___jp_3867_;
}
}
else
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_3989_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3991_ = v___x_3963_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v___x_3963_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
else
{
v___y_3868_ = v___y_3955_;
v___y_3869_ = v_isHEq_3956_;
v___y_3870_ = v___y_3957_;
v___y_3871_ = v___y_3958_;
v___y_3872_ = v___y_3959_;
v___y_3873_ = v___y_3960_;
goto v___jp_3867_;
}
}
}
v___jp_3997_:
{
lean_object* v___x_4003_; 
lean_inc_ref(v___x_3866_);
v___x_4003_ = l_Lean_Meta_matchHEq_x3f(v___x_3866_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc(v_a_4004_);
lean_dec_ref_known(v___x_4003_, 1);
if (lean_obj_tag(v_a_4004_) == 1)
{
lean_object* v_val_4005_; lean_object* v_snd_4006_; lean_object* v_snd_4007_; lean_object* v_fst_4008_; lean_object* v_fst_4009_; lean_object* v_fst_4010_; lean_object* v_snd_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4111_; 
v_val_4005_ = lean_ctor_get(v_a_4004_, 0);
lean_inc(v_val_4005_);
lean_dec_ref_known(v_a_4004_, 1);
v_snd_4006_ = lean_ctor_get(v_val_4005_, 1);
lean_inc(v_snd_4006_);
v_snd_4007_ = lean_ctor_get(v_snd_4006_, 1);
lean_inc(v_snd_4007_);
v_fst_4008_ = lean_ctor_get(v_val_4005_, 0);
lean_inc(v_fst_4008_);
lean_dec(v_val_4005_);
v_fst_4009_ = lean_ctor_get(v_snd_4006_, 0);
lean_inc(v_fst_4009_);
lean_dec(v_snd_4006_);
v_fst_4010_ = lean_ctor_get(v_snd_4007_, 0);
v_snd_4011_ = lean_ctor_get(v_snd_4007_, 1);
v_isSharedCheck_4111_ = !lean_is_exclusive(v_snd_4007_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4013_ = v_snd_4007_;
v_isShared_4014_ = v_isSharedCheck_4111_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_snd_4011_);
lean_inc(v_fst_4010_);
lean_dec(v_snd_4007_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4111_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4015_; 
v___x_4015_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4009_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v_a_4016_; 
v_a_4016_ = lean_ctor_get(v___x_4015_, 0);
lean_inc(v_a_4016_);
lean_dec_ref_known(v___x_4015_, 1);
if (lean_obj_tag(v_a_4016_) == 1)
{
lean_object* v_val_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4102_; 
v_val_4017_ = lean_ctor_get(v_a_4016_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v_a_4016_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4019_ = v_a_4016_;
v_isShared_4020_ = v_isSharedCheck_4102_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_val_4017_);
lean_dec(v_a_4016_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4102_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4021_; 
v___x_4021_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4011_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_4021_, 1);
if (lean_obj_tag(v_a_4022_) == 1)
{
lean_object* v_toConstantVal_4023_; lean_object* v_val_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4093_; 
v_toConstantVal_4023_ = lean_ctor_get(v_val_4017_, 0);
lean_inc_ref(v_toConstantVal_4023_);
lean_dec(v_val_4017_);
v_val_4024_ = lean_ctor_get(v_a_4022_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v_a_4022_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4026_ = v_a_4022_;
v_isShared_4027_ = v_isSharedCheck_4093_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_val_4024_);
lean_dec(v_a_4022_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4093_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v_toConstantVal_4028_; lean_object* v_name_4029_; lean_object* v_name_4030_; uint8_t v___x_4031_; 
v_toConstantVal_4028_ = lean_ctor_get(v_val_4024_, 0);
lean_inc_ref(v_toConstantVal_4028_);
lean_dec(v_val_4024_);
v_name_4029_ = lean_ctor_get(v_toConstantVal_4023_, 0);
lean_inc(v_name_4029_);
lean_dec_ref(v_toConstantVal_4023_);
v_name_4030_ = lean_ctor_get(v_toConstantVal_4028_, 0);
lean_inc(v_name_4030_);
lean_dec_ref(v_toConstantVal_4028_);
v___x_4031_ = lean_name_eq(v_name_4029_, v_name_4030_);
lean_dec(v_name_4030_);
lean_dec(v_name_4029_);
if (v___x_4031_ == 0)
{
lean_object* v___x_4032_; 
v___x_4032_ = l_Lean_Meta_isExprDefEq(v_fst_4008_, v_fst_4010_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4032_) == 0)
{
lean_object* v_a_4033_; uint8_t v___x_4034_; 
v_a_4033_ = lean_ctor_get(v___x_4032_, 0);
lean_inc(v_a_4033_);
lean_dec_ref_known(v___x_4032_, 1);
v___x_4034_ = lean_unbox(v_a_4033_);
lean_dec(v_a_4033_);
if (v___x_4034_ == 0)
{
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
v___y_3955_ = v_isEq_3998_;
v_isHEq_3956_ = v___x_3811_;
v___y_3957_ = v___y_3999_;
v___y_3958_ = v___y_4000_;
v___y_3959_ = v___y_4001_;
v___y_3960_ = v___y_4002_;
goto v___jp_3954_;
}
else
{
lean_object* v___x_4035_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec_ref(v_config_3800_);
lean_inc(v_mvarId_3801_);
v___x_4035_ = l_Lean_MVarId_getType(v_mvarId_3801_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4035_) == 0)
{
lean_object* v_a_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v_a_4036_ = lean_ctor_get(v___x_4035_, 0);
lean_inc(v_a_4036_);
lean_dec_ref_known(v___x_4035_, 1);
v___x_4037_ = l_Lean_LocalDecl_toExpr(v_val_3832_);
v___x_4038_ = l_Lean_Meta_mkEqOfHEq(v___x_4037_, v___x_3811_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4040_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4039_);
lean_dec_ref_known(v___x_4038_, 1);
v___x_4040_ = l_Lean_Meta_mkNoConfusion(v_a_4036_, v_a_4039_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4042_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref_known(v___x_4040_, 1);
v___x_4042_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3801_, v_a_4041_, v___y_4000_);
if (lean_obj_tag(v___x_4042_) == 0)
{
lean_object* v___x_4043_; lean_object* v___x_4045_; 
lean_dec_ref_known(v___x_4042_, 1);
v___x_4043_ = lean_box(v___x_3811_);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 0, v___x_4043_);
v___x_4045_ = v___x_4026_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v___x_4043_);
v___x_4045_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
lean_object* v___x_4047_; 
if (v_isShared_4014_ == 0)
{
lean_ctor_set(v___x_4013_, 1, v___x_3836_);
lean_ctor_set(v___x_4013_, 0, v___x_4045_);
v___x_4047_ = v___x_4013_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4045_);
lean_ctor_set(v_reuseFailAlloc_4051_, 1, v___x_3836_);
v___x_4047_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
lean_object* v___x_4049_; 
if (v_isShared_4020_ == 0)
{
lean_ctor_set_tag(v___x_4019_, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4047_);
v___x_4049_ = v___x_4019_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v___x_4047_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
v_a_3818_ = v___x_4049_;
goto v___jp_3817_;
}
}
}
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_4053_ = lean_ctor_get(v___x_4042_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4042_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4042_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4042_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4068_; 
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4061_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4063_ = v___x_4040_;
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_4040_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4061_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
lean_dec(v_a_4036_);
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4069_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___x_4038_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___x_4038_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4077_ = lean_ctor_get(v___x_4035_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_4035_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4035_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
}
else
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4085_ = lean_ctor_get(v___x_4032_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4032_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v___x_4032_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___x_4032_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
else
{
lean_del_object(v___x_4026_);
lean_del_object(v___x_4019_);
lean_del_object(v___x_4013_);
lean_dec(v_fst_4010_);
lean_dec(v_fst_4008_);
v___y_3955_ = v_isEq_3998_;
v_isHEq_3956_ = v___x_3811_;
v___y_3957_ = v___y_3999_;
v___y_3958_ = v___y_4000_;
v___y_3959_ = v___y_4001_;
v___y_3960_ = v___y_4002_;
goto v___jp_3954_;
}
}
}
else
{
lean_dec(v_a_4022_);
lean_del_object(v___x_4019_);
lean_dec(v_val_4017_);
lean_del_object(v___x_4013_);
lean_dec(v_fst_4010_);
lean_dec(v_fst_4008_);
v___y_3955_ = v_isEq_3998_;
v_isHEq_3956_ = v___x_3811_;
v___y_3957_ = v___y_3999_;
v___y_3958_ = v___y_4000_;
v___y_3959_ = v___y_4001_;
v___y_3960_ = v___y_4002_;
goto v___jp_3954_;
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_del_object(v___x_4019_);
lean_dec(v_val_4017_);
lean_del_object(v___x_4013_);
lean_dec(v_fst_4010_);
lean_dec(v_fst_4008_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4094_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4021_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4021_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
}
else
{
lean_dec(v_a_4016_);
lean_del_object(v___x_4013_);
lean_dec(v_snd_4011_);
lean_dec(v_fst_4010_);
lean_dec(v_fst_4008_);
v___y_3955_ = v_isEq_3998_;
v_isHEq_3956_ = v___x_3811_;
v___y_3957_ = v___y_3999_;
v___y_3958_ = v___y_4000_;
v___y_3959_ = v___y_4001_;
v___y_3960_ = v___y_4002_;
goto v___jp_3954_;
}
}
else
{
lean_object* v_a_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4110_; 
lean_del_object(v___x_4013_);
lean_dec(v_snd_4011_);
lean_dec(v_fst_4010_);
lean_dec(v_fst_4008_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4103_ = lean_ctor_get(v___x_4015_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4015_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4105_ = v___x_4015_;
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_a_4103_);
lean_dec(v___x_4015_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4108_; 
if (v_isShared_4106_ == 0)
{
v___x_4108_ = v___x_4105_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_4103_);
v___x_4108_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
return v___x_4108_;
}
}
}
}
}
else
{
lean_dec(v_a_4004_);
v___y_3955_ = v_isEq_3998_;
v_isHEq_3956_ = v___x_3865_;
v___y_3957_ = v___y_3999_;
v___y_3958_ = v___y_4000_;
v___y_3959_ = v___y_4001_;
v___y_3960_ = v___y_4002_;
goto v___jp_3954_;
}
}
else
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4112_ = lean_ctor_get(v___x_4003_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4114_ = v___x_4003_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4003_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4112_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
return v___x_4117_;
}
}
}
}
v___jp_4120_:
{
lean_object* v___x_4125_; 
lean_inc_ref(v___x_3866_);
v___x_4125_ = l_Lean_Meta_matchEq_x3f(v___x_3866_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_a_4126_);
lean_dec_ref_known(v___x_4125_, 1);
if (lean_obj_tag(v_a_4126_) == 1)
{
lean_object* v_val_4127_; lean_object* v_snd_4128_; lean_object* v_fst_4129_; lean_object* v_snd_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4209_; 
v_val_4127_ = lean_ctor_get(v_a_4126_, 0);
lean_inc(v_val_4127_);
lean_dec_ref_known(v_a_4126_, 1);
v_snd_4128_ = lean_ctor_get(v_val_4127_, 1);
lean_inc(v_snd_4128_);
lean_dec(v_val_4127_);
v_fst_4129_ = lean_ctor_get(v_snd_4128_, 0);
v_snd_4130_ = lean_ctor_get(v_snd_4128_, 1);
v_isSharedCheck_4209_ = !lean_is_exclusive(v_snd_4128_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4132_ = v_snd_4128_;
v_isShared_4133_ = v_isSharedCheck_4209_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_snd_4130_);
lean_inc(v_fst_4129_);
lean_dec(v_snd_4128_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4209_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4134_; 
v___x_4134_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4129_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
if (lean_obj_tag(v___x_4134_) == 0)
{
lean_object* v_a_4135_; 
v_a_4135_ = lean_ctor_get(v___x_4134_, 0);
lean_inc(v_a_4135_);
lean_dec_ref_known(v___x_4134_, 1);
if (lean_obj_tag(v_a_4135_) == 1)
{
lean_object* v_val_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4200_; 
v_val_4136_ = lean_ctor_get(v_a_4135_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v_a_4135_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4138_ = v_a_4135_;
v_isShared_4139_ = v_isSharedCheck_4200_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_val_4136_);
lean_dec(v_a_4135_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4200_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4140_; 
v___x_4140_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4130_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v_a_4141_; 
v_a_4141_ = lean_ctor_get(v___x_4140_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v___x_4140_, 1);
if (lean_obj_tag(v_a_4141_) == 1)
{
lean_object* v_toConstantVal_4142_; lean_object* v_val_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4191_; 
v_toConstantVal_4142_ = lean_ctor_get(v_val_4136_, 0);
lean_inc_ref(v_toConstantVal_4142_);
lean_dec(v_val_4136_);
v_val_4143_ = lean_ctor_get(v_a_4141_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_a_4141_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4145_ = v_a_4141_;
v_isShared_4146_ = v_isSharedCheck_4191_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_val_4143_);
lean_dec(v_a_4141_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4191_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v_toConstantVal_4147_; lean_object* v_name_4148_; lean_object* v_name_4149_; uint8_t v___x_4150_; 
v_toConstantVal_4147_ = lean_ctor_get(v_val_4143_, 0);
lean_inc_ref(v_toConstantVal_4147_);
lean_dec(v_val_4143_);
v_name_4148_ = lean_ctor_get(v_toConstantVal_4142_, 0);
lean_inc(v_name_4148_);
lean_dec_ref(v_toConstantVal_4142_);
v_name_4149_ = lean_ctor_get(v_toConstantVal_4147_, 0);
lean_inc(v_name_4149_);
lean_dec_ref(v_toConstantVal_4147_);
v___x_4150_ = lean_name_eq(v_name_4148_, v_name_4149_);
lean_dec(v_name_4149_);
lean_dec(v_name_4148_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec_ref(v_config_3800_);
lean_inc(v_mvarId_3801_);
v___x_4151_ = l_Lean_MVarId_getType(v_mvarId_3801_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v_a_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v_a_4152_ = lean_ctor_get(v___x_4151_, 0);
lean_inc(v_a_4152_);
lean_dec_ref_known(v___x_4151_, 1);
v___x_4153_ = l_Lean_LocalDecl_toExpr(v_val_3832_);
v___x_4154_ = l_Lean_Meta_mkNoConfusion(v_a_4152_, v___x_4153_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4156_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref_known(v___x_4154_, 1);
v___x_4156_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3801_, v_a_4155_, v___y_4122_);
if (lean_obj_tag(v___x_4156_) == 0)
{
lean_object* v___x_4157_; lean_object* v___x_4159_; 
lean_dec_ref_known(v___x_4156_, 1);
v___x_4157_ = lean_box(v___x_3811_);
if (v_isShared_4146_ == 0)
{
lean_ctor_set(v___x_4145_, 0, v___x_4157_);
v___x_4159_ = v___x_4145_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v___x_4157_);
v___x_4159_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
lean_object* v___x_4161_; 
if (v_isShared_4133_ == 0)
{
lean_ctor_set(v___x_4132_, 1, v___x_3836_);
lean_ctor_set(v___x_4132_, 0, v___x_4159_);
v___x_4161_ = v___x_4132_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v___x_4159_);
lean_ctor_set(v_reuseFailAlloc_4165_, 1, v___x_3836_);
v___x_4161_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
lean_object* v___x_4163_; 
if (v_isShared_4139_ == 0)
{
lean_ctor_set_tag(v___x_4138_, 0);
lean_ctor_set(v___x_4138_, 0, v___x_4161_);
v___x_4163_ = v___x_4138_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4161_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
v_a_3818_ = v___x_4163_;
goto v___jp_3817_;
}
}
}
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_del_object(v___x_4145_);
lean_del_object(v___x_4138_);
lean_del_object(v___x_4132_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_4167_ = lean_ctor_get(v___x_4156_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4156_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___x_4156_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4156_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
else
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4182_; 
lean_del_object(v___x_4145_);
lean_del_object(v___x_4138_);
lean_del_object(v___x_4132_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4175_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4177_ = v___x_4154_;
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4154_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4190_; 
lean_del_object(v___x_4145_);
lean_del_object(v___x_4138_);
lean_del_object(v___x_4132_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4183_ = lean_ctor_get(v___x_4151_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___x_4151_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4185_ = v___x_4151_;
v_isShared_4186_ = v_isSharedCheck_4190_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v___x_4151_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4190_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4188_; 
if (v_isShared_4186_ == 0)
{
v___x_4188_ = v___x_4185_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_a_4183_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
}
}
else
{
lean_del_object(v___x_4145_);
lean_del_object(v___x_4138_);
lean_del_object(v___x_4132_);
v_isEq_3998_ = v___x_3811_;
v___y_3999_ = v___y_4121_;
v___y_4000_ = v___y_4122_;
v___y_4001_ = v___y_4123_;
v___y_4002_ = v___y_4124_;
goto v___jp_3997_;
}
}
}
else
{
lean_dec(v_a_4141_);
lean_del_object(v___x_4138_);
lean_dec(v_val_4136_);
lean_del_object(v___x_4132_);
v_isEq_3998_ = v___x_3811_;
v___y_3999_ = v___y_4121_;
v___y_4000_ = v___y_4122_;
v___y_4001_ = v___y_4123_;
v___y_4002_ = v___y_4124_;
goto v___jp_3997_;
}
}
else
{
lean_object* v_a_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4199_; 
lean_del_object(v___x_4138_);
lean_dec(v_val_4136_);
lean_del_object(v___x_4132_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4192_ = lean_ctor_get(v___x_4140_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v___x_4140_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4194_ = v___x_4140_;
v_isShared_4195_ = v_isSharedCheck_4199_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_a_4192_);
lean_dec(v___x_4140_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4199_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4197_; 
if (v_isShared_4195_ == 0)
{
v___x_4197_ = v___x_4194_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v_a_4192_);
v___x_4197_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
return v___x_4197_;
}
}
}
}
}
else
{
lean_dec(v_a_4135_);
lean_del_object(v___x_4132_);
lean_dec(v_snd_4130_);
v_isEq_3998_ = v___x_3811_;
v___y_3999_ = v___y_4121_;
v___y_4000_ = v___y_4122_;
v___y_4001_ = v___y_4123_;
v___y_4002_ = v___y_4124_;
goto v___jp_3997_;
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
lean_del_object(v___x_4132_);
lean_dec(v_snd_4130_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4201_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4134_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4134_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
else
{
lean_dec(v_a_4126_);
v_isEq_3998_ = v___x_3865_;
v___y_3999_ = v___y_4121_;
v___y_4000_ = v___y_4122_;
v___y_4001_ = v___y_4123_;
v___y_4002_ = v___y_4124_;
goto v___jp_3997_;
}
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4217_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4210_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4212_ = v___x_4125_;
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4125_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4213_ == 0)
{
v___x_4215_ = v___x_4212_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
}
}
v___jp_4218_:
{
lean_object* v___x_4223_; 
lean_inc_ref(v___x_3866_);
v___x_4223_ = l_Lean_refutableHasNotBit_x3f(v___x_3866_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
if (lean_obj_tag(v_a_4224_) == 1)
{
lean_object* v_val_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4265_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec_ref(v_config_3800_);
v_val_4225_ = lean_ctor_get(v_a_4224_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v_a_4224_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4227_ = v_a_4224_;
v_isShared_4228_ = v_isSharedCheck_4265_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_val_4225_);
lean_dec(v_a_4224_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4265_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4229_; 
lean_inc(v_mvarId_3801_);
v___x_4229_ = l_Lean_MVarId_getType(v_mvarId_3801_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
lean_inc(v_a_4230_);
lean_dec_ref_known(v___x_4229_, 1);
v___x_4231_ = l_Lean_LocalDecl_toExpr(v_val_3832_);
v___x_4232_ = l_Lean_Meta_mkAbsurd(v_a_4230_, v_val_4225_, v___x_4231_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4232_) == 0)
{
lean_object* v_a_4233_; lean_object* v___x_4234_; 
v_a_4233_ = lean_ctor_get(v___x_4232_, 0);
lean_inc(v_a_4233_);
lean_dec_ref_known(v___x_4232_, 1);
v___x_4234_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3801_, v_a_4233_, v___y_4220_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v___x_4235_; lean_object* v___x_4237_; 
lean_dec_ref_known(v___x_4234_, 1);
v___x_4235_ = lean_box(v___x_3811_);
if (v_isShared_4228_ == 0)
{
lean_ctor_set(v___x_4227_, 0, v___x_4235_);
v___x_4237_ = v___x_4227_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
lean_ctor_set(v___x_4238_, 1, v___x_3836_);
v___x_4239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4238_);
v_a_3818_ = v___x_4239_;
goto v___jp_3817_;
}
}
else
{
lean_object* v_a_4241_; lean_object* v___x_4243_; uint8_t v_isShared_4244_; uint8_t v_isSharedCheck_4248_; 
lean_del_object(v___x_4227_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_4241_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4243_ = v___x_4234_;
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
else
{
lean_inc(v_a_4241_);
lean_dec(v___x_4234_);
v___x_4243_ = lean_box(0);
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
v_resetjp_4242_:
{
lean_object* v___x_4246_; 
if (v_isShared_4244_ == 0)
{
v___x_4246_ = v___x_4243_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v_a_4241_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
}
else
{
lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4256_; 
lean_del_object(v___x_4227_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4249_ = lean_ctor_get(v___x_4232_, 0);
v_isSharedCheck_4256_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4256_ == 0)
{
v___x_4251_ = v___x_4232_;
v_isShared_4252_ = v_isSharedCheck_4256_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v___x_4232_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4256_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v___x_4254_; 
if (v_isShared_4252_ == 0)
{
v___x_4254_ = v___x_4251_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v_a_4249_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
return v___x_4254_;
}
}
}
}
else
{
lean_object* v_a_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4264_; 
lean_del_object(v___x_4227_);
lean_dec(v_val_4225_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4257_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4264_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4264_ == 0)
{
v___x_4259_ = v___x_4229_;
v_isShared_4260_ = v_isSharedCheck_4264_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_a_4257_);
lean_dec(v___x_4229_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4264_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
lean_object* v___x_4262_; 
if (v_isShared_4260_ == 0)
{
v___x_4262_ = v___x_4259_;
goto v_reusejp_4261_;
}
else
{
lean_object* v_reuseFailAlloc_4263_; 
v_reuseFailAlloc_4263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4263_, 0, v_a_4257_);
v___x_4262_ = v_reuseFailAlloc_4263_;
goto v_reusejp_4261_;
}
v_reusejp_4261_:
{
return v___x_4262_;
}
}
}
}
}
else
{
lean_object* v___x_4266_; 
lean_dec(v_a_4224_);
lean_inc_ref(v___x_3866_);
v___x_4266_ = l_Lean_Meta_matchNe_x3f(v___x_3866_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc(v_a_4267_);
lean_dec_ref_known(v___x_4266_, 1);
if (lean_obj_tag(v_a_4267_) == 1)
{
lean_object* v_val_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4338_; 
v_val_4268_ = lean_ctor_get(v_a_4267_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v_a_4267_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4270_ = v_a_4267_;
v_isShared_4271_ = v_isSharedCheck_4338_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_val_4268_);
lean_dec(v_a_4267_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4338_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v_snd_4272_; lean_object* v_fst_4273_; lean_object* v_snd_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4337_; 
v_snd_4272_ = lean_ctor_get(v_val_4268_, 1);
lean_inc(v_snd_4272_);
lean_dec(v_val_4268_);
v_fst_4273_ = lean_ctor_get(v_snd_4272_, 0);
v_snd_4274_ = lean_ctor_get(v_snd_4272_, 1);
v_isSharedCheck_4337_ = !lean_is_exclusive(v_snd_4272_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4276_ = v_snd_4272_;
v_isShared_4277_ = v_isSharedCheck_4337_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_snd_4274_);
lean_inc(v_fst_4273_);
lean_dec(v_snd_4272_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4337_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4278_; 
lean_inc(v_fst_4273_);
v___x_4278_ = l_Lean_Meta_isExprDefEq(v_fst_4273_, v_snd_4274_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4278_) == 0)
{
lean_object* v_a_4279_; uint8_t v___x_4280_; 
v_a_4279_ = lean_ctor_get(v___x_4278_, 0);
lean_inc(v_a_4279_);
lean_dec_ref_known(v___x_4278_, 1);
v___x_4280_ = lean_unbox(v_a_4279_);
lean_dec(v_a_4279_);
if (v___x_4280_ == 0)
{
lean_del_object(v___x_4276_);
lean_dec(v_fst_4273_);
lean_del_object(v___x_4270_);
v___y_4121_ = v___y_4219_;
v___y_4122_ = v___y_4220_;
v___y_4123_ = v___y_4221_;
v___y_4124_ = v___y_4222_;
goto v___jp_4120_;
}
else
{
lean_object* v___x_4281_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec_ref(v_config_3800_);
lean_inc(v_mvarId_3801_);
v___x_4281_ = l_Lean_MVarId_getType(v_mvarId_3801_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4281_) == 0)
{
lean_object* v_a_4282_; lean_object* v___x_4283_; 
v_a_4282_ = lean_ctor_get(v___x_4281_, 0);
lean_inc(v_a_4282_);
lean_dec_ref_known(v___x_4281_, 1);
v___x_4283_ = l_Lean_Meta_mkEqRefl(v_fst_4273_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4283_) == 0)
{
lean_object* v_a_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; 
v_a_4284_ = lean_ctor_get(v___x_4283_, 0);
lean_inc(v_a_4284_);
lean_dec_ref_known(v___x_4283_, 1);
v___x_4285_ = l_Lean_LocalDecl_toExpr(v_val_3832_);
v___x_4286_ = l_Lean_Meta_mkAbsurd(v_a_4282_, v_a_4284_, v___x_4285_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4286_) == 0)
{
lean_object* v_a_4287_; lean_object* v___x_4288_; 
v_a_4287_ = lean_ctor_get(v___x_4286_, 0);
lean_inc(v_a_4287_);
lean_dec_ref_known(v___x_4286_, 1);
v___x_4288_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3801_, v_a_4287_, v___y_4220_);
if (lean_obj_tag(v___x_4288_) == 0)
{
lean_object* v___x_4289_; lean_object* v___x_4291_; 
lean_dec_ref_known(v___x_4288_, 1);
v___x_4289_ = lean_box(v___x_3811_);
if (v_isShared_4271_ == 0)
{
lean_ctor_set(v___x_4270_, 0, v___x_4289_);
v___x_4291_ = v___x_4270_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v___x_4289_);
v___x_4291_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
lean_object* v___x_4293_; 
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 1, v___x_3836_);
lean_ctor_set(v___x_4276_, 0, v___x_4291_);
v___x_4293_ = v___x_4276_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v___x_4291_);
lean_ctor_set(v_reuseFailAlloc_4295_, 1, v___x_3836_);
v___x_4293_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
lean_object* v___x_4294_; 
v___x_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4293_);
v_a_3818_ = v___x_4294_;
goto v___jp_3817_;
}
}
}
else
{
lean_object* v_a_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4304_; 
lean_del_object(v___x_4276_);
lean_del_object(v___x_4270_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_4297_ = lean_ctor_get(v___x_4288_, 0);
v_isSharedCheck_4304_ = !lean_is_exclusive(v___x_4288_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4299_ = v___x_4288_;
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_a_4297_);
lean_dec(v___x_4288_);
v___x_4299_ = lean_box(0);
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
v_resetjp_4298_:
{
lean_object* v___x_4302_; 
if (v_isShared_4300_ == 0)
{
v___x_4302_ = v___x_4299_;
goto v_reusejp_4301_;
}
else
{
lean_object* v_reuseFailAlloc_4303_; 
v_reuseFailAlloc_4303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4303_, 0, v_a_4297_);
v___x_4302_ = v_reuseFailAlloc_4303_;
goto v_reusejp_4301_;
}
v_reusejp_4301_:
{
return v___x_4302_;
}
}
}
}
else
{
lean_object* v_a_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4312_; 
lean_del_object(v___x_4276_);
lean_del_object(v___x_4270_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4305_ = lean_ctor_get(v___x_4286_, 0);
v_isSharedCheck_4312_ = !lean_is_exclusive(v___x_4286_);
if (v_isSharedCheck_4312_ == 0)
{
v___x_4307_ = v___x_4286_;
v_isShared_4308_ = v_isSharedCheck_4312_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_a_4305_);
lean_dec(v___x_4286_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4312_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4310_; 
if (v_isShared_4308_ == 0)
{
v___x_4310_ = v___x_4307_;
goto v_reusejp_4309_;
}
else
{
lean_object* v_reuseFailAlloc_4311_; 
v_reuseFailAlloc_4311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4311_, 0, v_a_4305_);
v___x_4310_ = v_reuseFailAlloc_4311_;
goto v_reusejp_4309_;
}
v_reusejp_4309_:
{
return v___x_4310_;
}
}
}
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
lean_dec(v_a_4282_);
lean_del_object(v___x_4276_);
lean_del_object(v___x_4270_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4313_ = lean_ctor_get(v___x_4283_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4283_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4283_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4283_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
else
{
lean_object* v_a_4321_; lean_object* v___x_4323_; uint8_t v_isShared_4324_; uint8_t v_isSharedCheck_4328_; 
lean_del_object(v___x_4276_);
lean_dec(v_fst_4273_);
lean_del_object(v___x_4270_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
v_a_4321_ = lean_ctor_get(v___x_4281_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v___x_4281_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4323_ = v___x_4281_;
v_isShared_4324_ = v_isSharedCheck_4328_;
goto v_resetjp_4322_;
}
else
{
lean_inc(v_a_4321_);
lean_dec(v___x_4281_);
v___x_4323_ = lean_box(0);
v_isShared_4324_ = v_isSharedCheck_4328_;
goto v_resetjp_4322_;
}
v_resetjp_4322_:
{
lean_object* v___x_4326_; 
if (v_isShared_4324_ == 0)
{
v___x_4326_ = v___x_4323_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v_a_4321_);
v___x_4326_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
return v___x_4326_;
}
}
}
}
}
else
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
lean_del_object(v___x_4276_);
lean_dec(v_fst_4273_);
lean_del_object(v___x_4270_);
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4329_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4331_ = v___x_4278_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4278_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_a_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
}
}
else
{
lean_dec(v_a_4267_);
v___y_4121_ = v___y_4219_;
v___y_4122_ = v___y_4220_;
v___y_4123_ = v___y_4221_;
v___y_4124_ = v___y_4222_;
goto v___jp_4120_;
}
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4346_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4339_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4341_ = v___x_4266_;
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4266_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4344_; 
if (v_isShared_4342_ == 0)
{
v___x_4344_ = v___x_4341_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v_a_4339_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
}
else
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_4347_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4223_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4223_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4347_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
}
}
else
{
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_3826_ = v___x_3837_;
goto v___jp_3825_;
}
v___jp_3838_:
{
uint8_t v_emptyType_3845_; 
v_emptyType_3845_ = lean_ctor_get_uint8(v_config_3800_, sizeof(void*)*1 + 1);
if (v_emptyType_3845_ == 0)
{
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_3826_ = v___x_3837_;
goto v___jp_3825_;
}
else
{
if (v___y_3839_ == 0)
{
if (v___y_3840_ == 0)
{
lean_object* v_searchFuel_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
v_searchFuel_3846_ = lean_ctor_get(v_config_3800_, 0);
v___x_3847_ = l_Lean_LocalDecl_fvarId(v_val_3832_);
lean_dec(v_val_3832_);
lean_inc(v_searchFuel_3846_);
lean_inc(v_mvarId_3801_);
v___x_3848_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3801_, v___x_3847_, v_searchFuel_3846_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3848_) == 0)
{
lean_object* v_a_3849_; uint8_t v___x_3850_; 
v_a_3849_ = lean_ctor_get(v___x_3848_, 0);
lean_inc(v_a_3849_);
lean_dec_ref_known(v___x_3848_, 1);
v___x_3850_ = lean_unbox(v_a_3849_);
lean_dec(v_a_3849_);
if (v___x_3850_ == 0)
{
lean_del_object(v___x_3834_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_3826_ = v___x_3837_;
goto v___jp_3825_;
}
else
{
lean_object* v___x_3851_; lean_object* v___x_3853_; 
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v___x_3851_ = lean_box(v___x_3811_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 0, v___x_3851_);
v___x_3853_ = v___x_3834_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
lean_ctor_set(v___x_3854_, 1, v___x_3836_);
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3854_);
v_a_3818_ = v___x_3855_;
goto v___jp_3817_;
}
}
}
else
{
lean_object* v_a_3857_; lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3864_; 
lean_del_object(v___x_3834_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_mvarId_3801_);
lean_dec_ref(v_config_3800_);
v_a_3857_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3859_ = v___x_3848_;
v_isShared_3860_ = v_isSharedCheck_3864_;
goto v_resetjp_3858_;
}
else
{
lean_inc(v_a_3857_);
lean_dec(v___x_3848_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3864_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
lean_object* v___x_3862_; 
if (v_isShared_3860_ == 0)
{
v___x_3862_ = v___x_3859_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v_a_3857_);
v___x_3862_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
return v___x_3862_;
}
}
}
}
else
{
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_3826_ = v___x_3837_;
goto v___jp_3825_;
}
}
else
{
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
v_a_3826_ = v___x_3837_;
goto v___jp_3825_;
}
}
}
}
}
v___jp_3817_:
{
lean_object* v___x_3819_; lean_object* v___x_3821_; 
v___x_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3819_, 0, v_a_3818_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3819_);
v___x_3821_ = v___x_3815_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3819_);
lean_ctor_set(v_reuseFailAlloc_3823_, 1, v_snd_3813_);
v___x_3821_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
lean_object* v___x_3822_; 
v___x_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
return v___x_3822_;
}
}
v___jp_3825_:
{
lean_object* v___x_3827_; size_t v___x_3828_; size_t v___x_3829_; lean_object* v___x_3830_; 
v___x_3827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3824_);
lean_ctor_set(v___x_3827_, 1, v_a_3826_);
v___x_3828_ = ((size_t)1ULL);
v___x_3829_ = lean_usize_add(v_i_3804_, v___x_3828_);
v___x_3830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3800_, v_mvarId_3801_, v_as_3802_, v_sz_3803_, v___x_3829_, v___x_3827_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
return v___x_3830_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_config_4428_, lean_object* v_mvarId_4429_, lean_object* v_as_4430_, lean_object* v_sz_4431_, lean_object* v_i_4432_, lean_object* v_b_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
size_t v_sz_boxed_4439_; size_t v_i_boxed_4440_; lean_object* v_res_4441_; 
v_sz_boxed_4439_ = lean_unbox_usize(v_sz_4431_);
lean_dec(v_sz_4431_);
v_i_boxed_4440_ = lean_unbox_usize(v_i_4432_);
lean_dec(v_i_4432_);
v_res_4441_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4428_, v_mvarId_4429_, v_as_4430_, v_sz_boxed_4439_, v_i_boxed_4440_, v_b_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec_ref(v_as_4430_);
return v_res_4441_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object* v_init_4442_, lean_object* v_config_4443_, lean_object* v_mvarId_4444_, lean_object* v_n_4445_, lean_object* v_b_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_){
_start:
{
if (lean_obj_tag(v_n_4445_) == 0)
{
lean_object* v_cs_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; size_t v_sz_4455_; size_t v___x_4456_; lean_object* v___x_4457_; 
v_cs_4452_ = lean_ctor_get(v_n_4445_, 0);
v___x_4453_ = lean_box(0);
v___x_4454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4453_);
lean_ctor_set(v___x_4454_, 1, v_b_4446_);
v_sz_4455_ = lean_array_size(v_cs_4452_);
v___x_4456_ = ((size_t)0ULL);
v___x_4457_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4442_, v_config_4443_, v_mvarId_4444_, v_cs_4452_, v_sz_4455_, v___x_4456_, v___x_4454_, v___y_4447_, v___y_4448_, v___y_4449_, v___y_4450_);
if (lean_obj_tag(v___x_4457_) == 0)
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4472_; 
v_a_4458_ = lean_ctor_get(v___x_4457_, 0);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4457_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4460_ = v___x_4457_;
v_isShared_4461_ = v_isSharedCheck_4472_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v___x_4457_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4472_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v_fst_4462_; 
v_fst_4462_ = lean_ctor_get(v_a_4458_, 0);
if (lean_obj_tag(v_fst_4462_) == 0)
{
lean_object* v_snd_4463_; lean_object* v___x_4464_; lean_object* v___x_4466_; 
v_snd_4463_ = lean_ctor_get(v_a_4458_, 1);
lean_inc(v_snd_4463_);
lean_dec(v_a_4458_);
v___x_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4464_, 0, v_snd_4463_);
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 0, v___x_4464_);
v___x_4466_ = v___x_4460_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v___x_4464_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
else
{
lean_object* v_val_4468_; lean_object* v___x_4470_; 
lean_inc_ref(v_fst_4462_);
lean_dec(v_a_4458_);
v_val_4468_ = lean_ctor_get(v_fst_4462_, 0);
lean_inc(v_val_4468_);
lean_dec_ref_known(v_fst_4462_, 1);
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 0, v_val_4468_);
v___x_4470_ = v___x_4460_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_val_4468_);
v___x_4470_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
return v___x_4470_;
}
}
}
}
else
{
lean_object* v_a_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4480_; 
v_a_4473_ = lean_ctor_get(v___x_4457_, 0);
v_isSharedCheck_4480_ = !lean_is_exclusive(v___x_4457_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4475_ = v___x_4457_;
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_a_4473_);
lean_dec(v___x_4457_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
lean_object* v___x_4478_; 
if (v_isShared_4476_ == 0)
{
v___x_4478_ = v___x_4475_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_a_4473_);
v___x_4478_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
return v___x_4478_;
}
}
}
}
else
{
lean_object* v_vs_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; size_t v_sz_4484_; size_t v___x_4485_; lean_object* v___x_4486_; 
v_vs_4481_ = lean_ctor_get(v_n_4445_, 0);
v___x_4482_ = lean_box(0);
v___x_4483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4483_, 0, v___x_4482_);
lean_ctor_set(v___x_4483_, 1, v_b_4446_);
v_sz_4484_ = lean_array_size(v_vs_4481_);
v___x_4485_ = ((size_t)0ULL);
v___x_4486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4443_, v_mvarId_4444_, v_vs_4481_, v_sz_4484_, v___x_4485_, v___x_4483_, v___y_4447_, v___y_4448_, v___y_4449_, v___y_4450_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_object* v_a_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4501_; 
v_a_4487_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4489_ = v___x_4486_;
v_isShared_4490_ = v_isSharedCheck_4501_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_a_4487_);
lean_dec(v___x_4486_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4501_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v_fst_4491_; 
v_fst_4491_ = lean_ctor_get(v_a_4487_, 0);
if (lean_obj_tag(v_fst_4491_) == 0)
{
lean_object* v_snd_4492_; lean_object* v___x_4493_; lean_object* v___x_4495_; 
v_snd_4492_ = lean_ctor_get(v_a_4487_, 1);
lean_inc(v_snd_4492_);
lean_dec(v_a_4487_);
v___x_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4493_, 0, v_snd_4492_);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v___x_4493_);
v___x_4495_ = v___x_4489_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v___x_4493_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
else
{
lean_object* v_val_4497_; lean_object* v___x_4499_; 
lean_inc_ref(v_fst_4491_);
lean_dec(v_a_4487_);
v_val_4497_ = lean_ctor_get(v_fst_4491_, 0);
lean_inc(v_val_4497_);
lean_dec_ref_known(v_fst_4491_, 1);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v_val_4497_);
v___x_4499_ = v___x_4489_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_val_4497_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
return v___x_4499_;
}
}
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
v_a_4502_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4486_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4486_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object* v_init_4510_, lean_object* v_config_4511_, lean_object* v_mvarId_4512_, lean_object* v_as_4513_, size_t v_sz_4514_, size_t v_i_4515_, lean_object* v_b_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_){
_start:
{
uint8_t v___x_4522_; 
v___x_4522_ = lean_usize_dec_lt(v_i_4515_, v_sz_4514_);
if (v___x_4522_ == 0)
{
lean_object* v___x_4523_; 
lean_dec(v_mvarId_4512_);
lean_dec_ref(v_config_4511_);
v___x_4523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4523_, 0, v_b_4516_);
return v___x_4523_;
}
else
{
lean_object* v_snd_4524_; lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4558_; 
v_snd_4524_ = lean_ctor_get(v_b_4516_, 1);
v_isSharedCheck_4558_ = !lean_is_exclusive(v_b_4516_);
if (v_isSharedCheck_4558_ == 0)
{
lean_object* v_unused_4559_; 
v_unused_4559_ = lean_ctor_get(v_b_4516_, 0);
lean_dec(v_unused_4559_);
v___x_4526_ = v_b_4516_;
v_isShared_4527_ = v_isSharedCheck_4558_;
goto v_resetjp_4525_;
}
else
{
lean_inc(v_snd_4524_);
lean_dec(v_b_4516_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4558_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4528_; lean_object* v_a_4529_; lean_object* v___x_4530_; 
v___x_4528_ = lean_box(0);
v_a_4529_ = lean_array_uget_borrowed(v_as_4513_, v_i_4515_);
lean_inc(v_snd_4524_);
lean_inc(v_mvarId_4512_);
lean_inc_ref(v_config_4511_);
v___x_4530_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4510_, v_config_4511_, v_mvarId_4512_, v_a_4529_, v_snd_4524_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
if (lean_obj_tag(v___x_4530_) == 0)
{
lean_object* v_a_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4549_; 
v_a_4531_ = lean_ctor_get(v___x_4530_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4530_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4533_ = v___x_4530_;
v_isShared_4534_ = v_isSharedCheck_4549_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_a_4531_);
lean_dec(v___x_4530_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4549_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
if (lean_obj_tag(v_a_4531_) == 0)
{
lean_object* v___x_4535_; lean_object* v___x_4537_; 
lean_dec(v_mvarId_4512_);
lean_dec_ref(v_config_4511_);
v___x_4535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4535_, 0, v_a_4531_);
if (v_isShared_4527_ == 0)
{
lean_ctor_set(v___x_4526_, 0, v___x_4535_);
v___x_4537_ = v___x_4526_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v___x_4535_);
lean_ctor_set(v_reuseFailAlloc_4541_, 1, v_snd_4524_);
v___x_4537_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
lean_object* v___x_4539_; 
if (v_isShared_4534_ == 0)
{
lean_ctor_set(v___x_4533_, 0, v___x_4537_);
v___x_4539_ = v___x_4533_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v___x_4537_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
return v___x_4539_;
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; 
lean_del_object(v___x_4533_);
lean_dec(v_snd_4524_);
v_a_4542_ = lean_ctor_get(v_a_4531_, 0);
lean_inc(v_a_4542_);
lean_dec_ref_known(v_a_4531_, 1);
if (v_isShared_4527_ == 0)
{
lean_ctor_set(v___x_4526_, 1, v_a_4542_);
lean_ctor_set(v___x_4526_, 0, v___x_4528_);
v___x_4544_ = v___x_4526_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v___x_4528_);
lean_ctor_set(v_reuseFailAlloc_4548_, 1, v_a_4542_);
v___x_4544_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
size_t v___x_4545_; size_t v___x_4546_; 
v___x_4545_ = ((size_t)1ULL);
v___x_4546_ = lean_usize_add(v_i_4515_, v___x_4545_);
v_i_4515_ = v___x_4546_;
v_b_4516_ = v___x_4544_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
lean_del_object(v___x_4526_);
lean_dec(v_snd_4524_);
lean_dec(v_mvarId_4512_);
lean_dec_ref(v_config_4511_);
v_a_4550_ = lean_ctor_get(v___x_4530_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4530_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4552_ = v___x_4530_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4530_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object* v_init_4560_, lean_object* v_config_4561_, lean_object* v_mvarId_4562_, lean_object* v_as_4563_, lean_object* v_sz_4564_, lean_object* v_i_4565_, lean_object* v_b_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_){
_start:
{
size_t v_sz_boxed_4572_; size_t v_i_boxed_4573_; lean_object* v_res_4574_; 
v_sz_boxed_4572_ = lean_unbox_usize(v_sz_4564_);
lean_dec(v_sz_4564_);
v_i_boxed_4573_ = lean_unbox_usize(v_i_4565_);
lean_dec(v_i_4565_);
v_res_4574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4560_, v_config_4561_, v_mvarId_4562_, v_as_4563_, v_sz_boxed_4572_, v_i_boxed_4573_, v_b_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
lean_dec(v___y_4570_);
lean_dec_ref(v___y_4569_);
lean_dec(v___y_4568_);
lean_dec_ref(v___y_4567_);
lean_dec_ref(v_as_4563_);
lean_dec_ref(v_init_4560_);
return v_res_4574_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object* v_init_4575_, lean_object* v_config_4576_, lean_object* v_mvarId_4577_, lean_object* v_n_4578_, lean_object* v_b_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_){
_start:
{
lean_object* v_res_4585_; 
v_res_4585_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4575_, v_config_4576_, v_mvarId_4577_, v_n_4578_, v_b_4579_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
lean_dec(v___y_4581_);
lean_dec_ref(v___y_4580_);
lean_dec_ref(v_n_4578_);
lean_dec_ref(v_init_4575_);
return v_res_4585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object* v_config_4586_, lean_object* v_mvarId_4587_, lean_object* v_t_4588_, lean_object* v_init_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
lean_object* v_root_4595_; lean_object* v_tail_4596_; lean_object* v___x_4597_; 
v_root_4595_ = lean_ctor_get(v_t_4588_, 0);
v_tail_4596_ = lean_ctor_get(v_t_4588_, 1);
lean_inc(v_mvarId_4587_);
lean_inc_ref(v_config_4586_);
lean_inc_ref(v_init_4589_);
v___x_4597_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4589_, v_config_4586_, v_mvarId_4587_, v_root_4595_, v_init_4589_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_);
lean_dec_ref(v_init_4589_);
if (lean_obj_tag(v___x_4597_) == 0)
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4634_; 
v_a_4598_ = lean_ctor_get(v___x_4597_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v___x_4597_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4600_ = v___x_4597_;
v_isShared_4601_ = v_isSharedCheck_4634_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4597_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4634_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
if (lean_obj_tag(v_a_4598_) == 0)
{
lean_object* v_a_4602_; lean_object* v___x_4604_; 
lean_dec(v_mvarId_4587_);
lean_dec_ref(v_config_4586_);
v_a_4602_ = lean_ctor_get(v_a_4598_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v_a_4598_, 1);
if (v_isShared_4601_ == 0)
{
lean_ctor_set(v___x_4600_, 0, v_a_4602_);
v___x_4604_ = v___x_4600_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4602_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
else
{
lean_object* v_a_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; size_t v_sz_4609_; size_t v___x_4610_; lean_object* v___x_4611_; 
lean_del_object(v___x_4600_);
v_a_4606_ = lean_ctor_get(v_a_4598_, 0);
lean_inc(v_a_4606_);
lean_dec_ref_known(v_a_4598_, 1);
v___x_4607_ = lean_box(0);
v___x_4608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4607_);
lean_ctor_set(v___x_4608_, 1, v_a_4606_);
v_sz_4609_ = lean_array_size(v_tail_4596_);
v___x_4610_ = ((size_t)0ULL);
v___x_4611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_4586_, v_mvarId_4587_, v_tail_4596_, v_sz_4609_, v___x_4610_, v___x_4608_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_);
if (lean_obj_tag(v___x_4611_) == 0)
{
lean_object* v_a_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4625_; 
v_a_4612_ = lean_ctor_get(v___x_4611_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4614_ = v___x_4611_;
v_isShared_4615_ = v_isSharedCheck_4625_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_a_4612_);
lean_dec(v___x_4611_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4625_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v_fst_4616_; 
v_fst_4616_ = lean_ctor_get(v_a_4612_, 0);
if (lean_obj_tag(v_fst_4616_) == 0)
{
lean_object* v_snd_4617_; lean_object* v___x_4619_; 
v_snd_4617_ = lean_ctor_get(v_a_4612_, 1);
lean_inc(v_snd_4617_);
lean_dec(v_a_4612_);
if (v_isShared_4615_ == 0)
{
lean_ctor_set(v___x_4614_, 0, v_snd_4617_);
v___x_4619_ = v___x_4614_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v_snd_4617_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
else
{
lean_object* v_val_4621_; lean_object* v___x_4623_; 
lean_inc_ref(v_fst_4616_);
lean_dec(v_a_4612_);
v_val_4621_ = lean_ctor_get(v_fst_4616_, 0);
lean_inc(v_val_4621_);
lean_dec_ref_known(v_fst_4616_, 1);
if (v_isShared_4615_ == 0)
{
lean_ctor_set(v___x_4614_, 0, v_val_4621_);
v___x_4623_ = v___x_4614_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_val_4621_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
return v___x_4623_;
}
}
}
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
v_a_4626_ = lean_ctor_get(v___x_4611_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4611_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4611_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
}
}
else
{
lean_object* v_a_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4642_; 
lean_dec(v_mvarId_4587_);
lean_dec_ref(v_config_4586_);
v_a_4635_ = lean_ctor_get(v___x_4597_, 0);
v_isSharedCheck_4642_ = !lean_is_exclusive(v___x_4597_);
if (v_isSharedCheck_4642_ == 0)
{
v___x_4637_ = v___x_4597_;
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_a_4635_);
lean_dec(v___x_4597_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v___x_4640_; 
if (v_isShared_4638_ == 0)
{
v___x_4640_ = v___x_4637_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_a_4635_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
return v___x_4640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object* v_config_4643_, lean_object* v_mvarId_4644_, lean_object* v_t_4645_, lean_object* v_init_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
lean_object* v_res_4652_; 
v_res_4652_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4643_, v_mvarId_4644_, v_t_4645_, v_init_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec_ref(v_t_4645_);
return v_res_4652_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object* v_mvarId_4653_, lean_object* v___x_4654_, lean_object* v_config_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_){
_start:
{
lean_object* v___x_4661_; 
lean_inc(v_mvarId_4653_);
v___x_4661_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4653_, v___x_4654_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4661_) == 0)
{
lean_object* v___x_4662_; 
lean_dec_ref_known(v___x_4661_, 1);
lean_inc(v_mvarId_4653_);
v___x_4662_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_4653_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4696_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4665_ = v___x_4662_;
v_isShared_4666_ = v_isSharedCheck_4696_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v___x_4662_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4696_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
uint8_t v___x_4667_; 
v___x_4667_ = lean_unbox(v_a_4663_);
if (v___x_4667_ == 0)
{
lean_object* v_lctx_4668_; lean_object* v_decls_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
lean_del_object(v___x_4665_);
v_lctx_4668_ = lean_ctor_get(v___y_4656_, 2);
v_decls_4669_ = lean_ctor_get(v_lctx_4668_, 1);
v___x_4670_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_4671_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4655_, v_mvarId_4653_, v_decls_4669_, v___x_4670_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4671_) == 0)
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4684_; 
v_a_4672_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4684_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4684_ == 0)
{
v___x_4674_ = v___x_4671_;
v_isShared_4675_ = v_isSharedCheck_4684_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v___x_4671_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4684_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v_fst_4676_; 
v_fst_4676_ = lean_ctor_get(v_a_4672_, 0);
lean_inc(v_fst_4676_);
lean_dec(v_a_4672_);
if (lean_obj_tag(v_fst_4676_) == 0)
{
lean_object* v___x_4678_; 
if (v_isShared_4675_ == 0)
{
lean_ctor_set(v___x_4674_, 0, v_a_4663_);
v___x_4678_ = v___x_4674_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4663_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
else
{
lean_object* v_val_4680_; lean_object* v___x_4682_; 
lean_dec(v_a_4663_);
v_val_4680_ = lean_ctor_get(v_fst_4676_, 0);
lean_inc(v_val_4680_);
lean_dec_ref_known(v_fst_4676_, 1);
if (v_isShared_4675_ == 0)
{
lean_ctor_set(v___x_4674_, 0, v_val_4680_);
v___x_4682_ = v___x_4674_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4683_; 
v_reuseFailAlloc_4683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4683_, 0, v_val_4680_);
v___x_4682_ = v_reuseFailAlloc_4683_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
return v___x_4682_;
}
}
}
}
else
{
lean_object* v_a_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4692_; 
lean_dec(v_a_4663_);
v_a_4685_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4692_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4692_ == 0)
{
v___x_4687_ = v___x_4671_;
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
else
{
lean_inc(v_a_4685_);
lean_dec(v___x_4671_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
lean_object* v___x_4690_; 
if (v_isShared_4688_ == 0)
{
v___x_4690_ = v___x_4687_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v_a_4685_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
}
else
{
lean_object* v___x_4694_; 
lean_dec_ref(v_config_4655_);
lean_dec(v_mvarId_4653_);
if (v_isShared_4666_ == 0)
{
v___x_4694_ = v___x_4665_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v_a_4663_);
v___x_4694_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
return v___x_4694_;
}
}
}
}
else
{
lean_dec_ref(v_config_4655_);
lean_dec(v_mvarId_4653_);
return v___x_4662_;
}
}
else
{
lean_object* v_a_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4704_; 
lean_dec_ref(v_config_4655_);
lean_dec(v_mvarId_4653_);
v_a_4697_ = lean_ctor_get(v___x_4661_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4661_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4699_ = v___x_4661_;
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_a_4697_);
lean_dec(v___x_4661_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4697_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object* v_mvarId_4705_, lean_object* v___x_4706_, lean_object* v_config_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_){
_start:
{
lean_object* v_res_4713_; 
v_res_4713_ = l_Lean_MVarId_contradictionCore___lam__0(v_mvarId_4705_, v___x_4706_, v_config_4707_, v___y_4708_, v___y_4709_, v___y_4710_, v___y_4711_);
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
lean_dec(v___y_4709_);
lean_dec_ref(v___y_4708_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object* v_mvarId_4716_, lean_object* v_config_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_){
_start:
{
lean_object* v___x_4723_; lean_object* v___f_4724_; lean_object* v___x_4725_; 
v___x_4723_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
lean_inc(v_mvarId_4716_);
v___f_4724_ = lean_alloc_closure((void*)(l_Lean_MVarId_contradictionCore___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4724_, 0, v_mvarId_4716_);
lean_closure_set(v___f_4724_, 1, v___x_4723_);
lean_closure_set(v___f_4724_, 2, v_config_4717_);
v___x_4725_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_4716_, v___f_4724_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object* v_mvarId_4726_, lean_object* v_config_4727_, lean_object* v_a_4728_, lean_object* v_a_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_){
_start:
{
lean_object* v_res_4733_; 
v_res_4733_ = l_Lean_MVarId_contradictionCore(v_mvarId_4726_, v_config_4727_, v_a_4728_, v_a_4729_, v_a_4730_, v_a_4731_);
lean_dec(v_a_4731_);
lean_dec_ref(v_a_4730_);
lean_dec(v_a_4729_);
lean_dec_ref(v_a_4728_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object* v_mvarId_4734_, lean_object* v_config_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_, lean_object* v_a_4738_, lean_object* v_a_4739_){
_start:
{
lean_object* v___x_4741_; 
lean_inc(v_mvarId_4734_);
v___x_4741_ = l_Lean_MVarId_contradictionCore(v_mvarId_4734_, v_config_4735_, v_a_4736_, v_a_4737_, v_a_4738_, v_a_4739_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4754_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4744_ = v___x_4741_;
v_isShared_4745_ = v_isSharedCheck_4754_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v___x_4741_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4754_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
uint8_t v___x_4746_; 
v___x_4746_ = lean_unbox(v_a_4742_);
lean_dec(v_a_4742_);
if (v___x_4746_ == 0)
{
lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; 
lean_del_object(v___x_4744_);
v___x_4747_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
v___x_4748_ = lean_box(0);
v___x_4749_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4747_, v_mvarId_4734_, v___x_4748_, v_a_4736_, v_a_4737_, v_a_4738_, v_a_4739_);
return v___x_4749_;
}
else
{
lean_object* v___x_4750_; lean_object* v___x_4752_; 
lean_dec(v_mvarId_4734_);
v___x_4750_ = lean_box(0);
if (v_isShared_4745_ == 0)
{
lean_ctor_set(v___x_4744_, 0, v___x_4750_);
v___x_4752_ = v___x_4744_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v___x_4750_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
else
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
lean_dec(v_mvarId_4734_);
v_a_4755_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v___x_4741_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4741_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object* v_mvarId_4763_, lean_object* v_config_4764_, lean_object* v_a_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_){
_start:
{
lean_object* v_res_4770_; 
v_res_4770_ = l_Lean_MVarId_contradiction(v_mvarId_4763_, v_config_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_);
lean_dec(v_a_4768_);
lean_dec_ref(v_a_4767_);
lean_dec(v_a_4766_);
lean_dec_ref(v_a_4765_);
return v_res_4770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4833_; uint8_t v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; 
v___x_4833_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_4834_ = 0;
v___x_4835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4836_ = l_Lean_registerTraceClass(v___x_4833_, v___x_4834_, v___x_4835_);
return v___x_4836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object* v_a_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
return v_res_4838_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Contradiction(builtin);
}
#ifdef __cplusplus
}
#endif
