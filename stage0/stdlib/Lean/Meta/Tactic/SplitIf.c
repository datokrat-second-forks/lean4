// Lean compiler output
// Module: Lean.Meta.Tactic.SplitIf
// Imports: public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Tactic.Simp.Main import Init.UDecidable
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isIte(lean_object*);
uint8_t l_Lean_Expr_isDIte(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_byCasesDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* lean_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_addCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpTheorems_addConst(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTarget(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqPtr___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_instHashablePtr___redArg___lam__0___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Meta_isIteLike___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Meta_isIteLike___closed__0 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__0_value;
static const lean_string_object l_Lean_Meta_isIteLike___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_isIteLike___closed__1 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__1_value;
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_isIteLike___closed__1_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Meta_isIteLike___closed__2 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__2_value;
static const lean_string_object l_Lean_Meta_isIteLike___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_isIteLike___closed__3 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__3_value;
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_isIteLike___closed__3_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Meta_isIteLike___closed__4 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_Meta_isIteLike(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isIteLike___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerIte(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerIte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerMatch(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerMatch___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchValue"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(127, 90, 239, 50, 101, 126, 224, 231)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqPtr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashablePtr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 90, 54, 167, 41, 130, 106, 252)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(146, 27, 182, 221, 54, 36, 194, 80)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "candidate:"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toDecidable"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(145, 87, 100, 98, 142, 208, 95, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(196, 237, 71, 156, 244, 3, 80, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 7, 10, 91, 49, 15, 80, 52)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 103, .m_capacity = 103, .m_length = 102, .m_data = "use the old semantics for the `split` tactic where nested `if-then-else` terms could be simplified too"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 141, 87, 76, 47, 100, 236, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_split;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1(lean_object*);
static lean_once_cell_t l_Lean_Meta_SplitIf_getSimpContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__0;
static lean_once_cell_t l_Lean_Meta_SplitIf_getSimpContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__1;
static lean_once_cell_t l_Lean_Meta_SplitIf_getSimpContext___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__2;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_left"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__3 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__3_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(224, 237, 116, 5, 155, 59, 56, 160)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__4 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__4_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ite_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__5 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 39, 8, 237, 213, 91, 107, 69)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__6 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__6_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_left"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__7 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value),LEAN_SCALAR_PTR_LITERAL(239, 169, 41, 13, 119, 67, 249, 86)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__8 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__8_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dite_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__9 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value),LEAN_SCALAR_PTR_LITERAL(138, 158, 15, 234, 166, 144, 231, 97)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__10 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__10_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(47, 91, 172, 106, 10, 51, 189, 44)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__11 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__11_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value),LEAN_SCALAR_PTR_LITERAL(226, 127, 188, 147, 183, 148, 17, 43)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__12 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__12_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value),LEAN_SCALAR_PTR_LITERAL(32, 95, 146, 40, 200, 88, 9, 188)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__13 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value),LEAN_SCALAR_PTR_LITERAL(133, 196, 119, 188, 182, 137, 173, 132)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__14 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "not_not_intro"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 174, 41, 152, 198, 172, 7, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "splitIf"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(181, 95, 169, 53, 171, 116, 20, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "discharge\? "};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__3_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 77, 228, 243, 158, 228, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value),LEAN_SCALAR_PTR_LITERAL(124, 27, 93, 224, 42, 131, 56, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "matchValue_pos"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 159, 69, 197, 113, 242, 29, 20)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "matchValue_neg"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2_value),LEAN_SCALAR_PTR_LITERAL(12, 104, 10, 241, 231, 85, 37, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__3_value),LEAN_SCALAR_PTR_LITERAL(174, 159, 76, 118, 81, 43, 136, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value),LEAN_SCALAR_PTR_LITERAL(75, 94, 186, 56, 13, 202, 202, 70)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SplitIf"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(76, 221, 255, 40, 254, 93, 36, 145)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(77, 67, 39, 96, 166, 188, 81, 166)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(56, 202, 4, 90, 23, 96, 207, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(148, 235, 194, 225, 124, 161, 64, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(167, 120, 249, 182, 103, 12, 98, 131)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceIte'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(244, 195, 180, 159, 75, 12, 135, 86)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceDIte'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(167, 195, 231, 206, 69, 191, 167, 198)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__2_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceUIte'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(172, 255, 110, 191, 3, 59, 147, 90)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__4_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__24_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reduceMatchValue'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(120, 143, 142, 152, 72, 29, 109, 217)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "splitting on "};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "could not find if to split:"};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__0;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__1;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__2;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__3;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__4;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__5;
static const lean_string_object l_Lean_Meta_simpIfTarget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Meta.Tactic.SplitIf"};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__6 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__6_value;
static const lean_string_object l_Lean_Meta_simpIfTarget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.simpIfTarget"};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__7 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__7_value;
static const lean_string_object l_Lean_Meta_simpIfTarget___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__8 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__8_value;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__9;
static const lean_array_object l_Lean_Meta_simpIfTarget___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__10 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__10_value;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_simpIfLocalDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.simpIfLocalDecl"};
static const lean_object* l_Lean_Meta_simpIfLocalDecl___closed__0 = (const lean_object*)&l_Lean_Meta_simpIfLocalDecl___closed__0_value;
static lean_once_cell_t l_Lean_Meta_simpIfLocalDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfLocalDecl___closed__1;
static lean_once_cell_t l_Lean_Meta_simpIfLocalDecl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfLocalDecl___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "failure"};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 90, 54, 167, 41, 130, 106, 252)}};
static const lean_ctor_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 82, 27, 41, 121, 237, 120, 228)}};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2;
static const lean_string_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "`split` tactic failed to simplify target using new hypotheses Goals:\n"};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4;
static const lean_string_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 137, 76, 163, 76, 115, 6, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 24, 105, 171, 156, 89, 145, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 224, 164, 228, 171, 225, 60, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(181, 248, 17, 89, 207, 85, 0, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(140, 203, 248, 13, 200, 236, 3, 225)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(79, 37, 36, 7, 71, 199, 210, 30)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isIteLike(lean_object* v_e_10_){
_start:
{
uint8_t v___x_11_; 
v___x_11_ = l_Lean_Expr_isIte(v_e_10_);
if (v___x_11_ == 0)
{
uint8_t v___x_12_; 
v___x_12_ = l_Lean_Expr_isDIte(v_e_10_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_13_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_14_ = lean_unsigned_to_nat(5u);
v___x_15_ = l_Lean_Expr_isAppOfArity(v_e_10_, v___x_13_, v___x_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_17_ = l_Lean_Expr_isAppOfArity(v_e_10_, v___x_16_, v___x_14_);
return v___x_17_;
}
else
{
return v___x_15_;
}
}
else
{
return v___x_12_;
}
}
else
{
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isIteLike___boxed(lean_object* v_e_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_Lean_Meta_isIteLike(v_e_18_);
lean_dec_ref(v_e_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl(uint8_t v_x_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(v_x_21_);
v___x_23_ = lean_obj_tag_nat(v___x_22_);
lean_dec(v___x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl___boxed(lean_object* v_x_24_){
_start:
{
uint8_t v_x_4__boxed_25_; lean_object* v_res_26_; 
v_x_4__boxed_25_ = lean_unbox(v_x_24_);
v_res_26_ = l_Lean_Meta_SplitKind_ctorIdx___impl(v_x_4__boxed_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg(lean_object* v_k_27_){
_start:
{
lean_inc(v_k_27_);
return v_k_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg___boxed(lean_object* v_k_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Meta_SplitKind_ctorElim___redArg(v_k_28_);
lean_dec(v_k_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim(lean_object* v_motive_30_, lean_object* v_ctorIdx_31_, uint8_t v_t_32_, lean_object* v_h_33_, lean_object* v_k_34_){
_start:
{
lean_inc(v_k_34_);
return v_k_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___boxed(lean_object* v_motive_35_, lean_object* v_ctorIdx_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_k_39_){
_start:
{
uint8_t v_t_boxed_40_; lean_object* v_res_41_; 
v_t_boxed_40_ = lean_unbox(v_t_37_);
v_res_41_ = l_Lean_Meta_SplitKind_ctorElim(v_motive_35_, v_ctorIdx_36_, v_t_boxed_40_, v_h_38_, v_k_39_);
lean_dec(v_k_39_);
lean_dec(v_ctorIdx_36_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg(lean_object* v_ite_42_){
_start:
{
lean_inc(v_ite_42_);
return v_ite_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg___boxed(lean_object* v_ite_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_Meta_SplitKind_ite_elim___redArg(v_ite_43_);
lean_dec(v_ite_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim(lean_object* v_motive_45_, uint8_t v_t_46_, lean_object* v_h_47_, lean_object* v_ite_48_){
_start:
{
lean_inc(v_ite_48_);
return v_ite_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___boxed(lean_object* v_motive_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_ite_52_){
_start:
{
uint8_t v_t_boxed_53_; lean_object* v_res_54_; 
v_t_boxed_53_ = lean_unbox(v_t_50_);
v_res_54_ = l_Lean_Meta_SplitKind_ite_elim(v_motive_49_, v_t_boxed_53_, v_h_51_, v_ite_52_);
lean_dec(v_ite_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg(lean_object* v_match_55_){
_start:
{
lean_inc(v_match_55_);
return v_match_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg___boxed(lean_object* v_match_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_SplitKind_match_elim___redArg(v_match_56_);
lean_dec(v_match_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim(lean_object* v_motive_58_, uint8_t v_t_59_, lean_object* v_h_60_, lean_object* v_match_61_){
_start:
{
lean_inc(v_match_61_);
return v_match_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___boxed(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_match_65_){
_start:
{
uint8_t v_t_boxed_66_; lean_object* v_res_67_; 
v_t_boxed_66_ = lean_unbox(v_t_63_);
v_res_67_ = l_Lean_Meta_SplitKind_match_elim(v_motive_62_, v_t_boxed_66_, v_h_64_, v_match_65_);
lean_dec(v_match_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg(lean_object* v_both_68_){
_start:
{
lean_inc(v_both_68_);
return v_both_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg___boxed(lean_object* v_both_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Meta_SplitKind_both_elim___redArg(v_both_69_);
lean_dec(v_both_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim(lean_object* v_motive_71_, uint8_t v_t_72_, lean_object* v_h_73_, lean_object* v_both_74_){
_start:
{
lean_inc(v_both_74_);
return v_both_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___boxed(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_both_78_){
_start:
{
uint8_t v_t_boxed_79_; lean_object* v_res_80_; 
v_t_boxed_79_ = lean_unbox(v_t_76_);
v_res_80_ = l_Lean_Meta_SplitKind_both_elim(v_motive_75_, v_t_boxed_79_, v_h_77_, v_both_78_);
lean_dec(v_both_78_);
return v_res_80_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerIte(uint8_t v_x_81_){
_start:
{
switch(v_x_81_)
{
case 0:
{
uint8_t v___x_82_; 
v___x_82_ = 1;
return v___x_82_;
}
case 2:
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
default: 
{
uint8_t v___x_84_; 
v___x_84_ = 0;
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerIte___boxed(lean_object* v_x_85_){
_start:
{
uint8_t v_x_22__boxed_86_; uint8_t v_res_87_; lean_object* v_r_88_; 
v_x_22__boxed_86_ = lean_unbox(v_x_85_);
v_res_87_ = l_Lean_Meta_SplitKind_considerIte(v_x_22__boxed_86_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerMatch(uint8_t v_x_89_){
_start:
{
switch(v_x_89_)
{
case 1:
{
uint8_t v___x_90_; 
v___x_90_ = 1;
return v___x_90_;
}
case 2:
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
default: 
{
uint8_t v___x_92_; 
v___x_92_ = 0;
return v___x_92_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerMatch___boxed(lean_object* v_x_93_){
_start:
{
uint8_t v_x_22__boxed_94_; uint8_t v_res_95_; lean_object* v_r_96_; 
v_x_22__boxed_94_ = lean_unbox(v_x_93_);
v_res_95_ = l_Lean_Meta_SplitKind_considerMatch(v_x_22__boxed_94_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(lean_object* v_a_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
uint8_t v___x_99_; 
v___x_99_ = 0;
return v___x_99_;
}
else
{
lean_object* v_key_100_; lean_object* v_tail_101_; uint8_t v___x_102_; 
v_key_100_ = lean_ctor_get(v_x_98_, 0);
v_tail_101_ = lean_ctor_get(v_x_98_, 2);
v___x_102_ = lean_expr_eqv(v_key_100_, v_a_97_);
if (v___x_102_ == 0)
{
v_x_98_ = v_tail_101_;
goto _start;
}
else
{
return v___x_102_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_104_, lean_object* v_x_105_){
_start:
{
uint8_t v_res_106_; lean_object* v_r_107_; 
v_res_106_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_104_, v_x_105_);
lean_dec(v_x_105_);
lean_dec_ref(v_a_104_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(lean_object* v_m_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_buckets_110_; lean_object* v___x_111_; uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v___x_114_; uint64_t v_fold_115_; uint64_t v___x_116_; uint64_t v___x_117_; uint64_t v___x_118_; size_t v___x_119_; size_t v___x_120_; size_t v___x_121_; size_t v___x_122_; size_t v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v_buckets_110_ = lean_ctor_get(v_m_108_, 1);
v___x_111_ = lean_array_get_size(v_buckets_110_);
v___x_112_ = l_Lean_Expr_hash(v_a_109_);
v___x_113_ = 32ULL;
v___x_114_ = lean_uint64_shift_right(v___x_112_, v___x_113_);
v_fold_115_ = lean_uint64_xor(v___x_112_, v___x_114_);
v___x_116_ = 16ULL;
v___x_117_ = lean_uint64_shift_right(v_fold_115_, v___x_116_);
v___x_118_ = lean_uint64_xor(v_fold_115_, v___x_117_);
v___x_119_ = lean_uint64_to_usize(v___x_118_);
v___x_120_ = lean_usize_of_nat(v___x_111_);
v___x_121_ = ((size_t)1ULL);
v___x_122_ = lean_usize_sub(v___x_120_, v___x_121_);
v___x_123_ = lean_usize_land(v___x_119_, v___x_122_);
v___x_124_ = lean_array_uget_borrowed(v_buckets_110_, v___x_123_);
v___x_125_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_109_, v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg___boxed(lean_object* v_m_126_, lean_object* v_a_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_m_126_, v_a_127_);
lean_dec_ref(v_a_127_);
lean_dec_ref(v_m_126_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(lean_object* v_upperBound_138_, lean_object* v_args_139_, lean_object* v_a_140_, lean_object* v_b_141_){
_start:
{
uint8_t v___x_142_; 
v___x_142_ = lean_nat_dec_lt(v_a_140_, v_upperBound_138_);
if (v___x_142_ == 0)
{
lean_dec(v_a_140_);
lean_inc_ref(v_b_141_);
return v_b_141_;
}
else
{
lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_143_ = l_Lean_instInhabitedExpr;
v___x_144_ = lean_array_get_borrowed(v___x_143_, v_args_139_, v_a_140_);
v___x_145_ = l_Lean_Expr_hasLooseBVars(v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_add(v_a_140_, v___x_147_);
lean_dec(v_a_140_);
v_a_140_ = v___x_148_;
v_b_141_ = v___x_146_;
goto _start;
}
else
{
lean_object* v___x_150_; 
lean_dec(v_a_140_);
v___x_150_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2));
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_151_, lean_object* v_args_152_, lean_object* v_a_153_, lean_object* v_b_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v_upperBound_151_, v_args_152_, v_a_153_, v_b_154_);
lean_dec_ref(v_b_154_);
lean_dec_ref(v_args_152_);
lean_dec(v_upperBound_151_);
return v_res_155_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v_dummy_157_; 
v___x_156_ = lean_box(0);
v_dummy_157_ = l_Lean_Expr_sort___override(v___x_156_);
return v_dummy_157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(lean_object* v_env_169_, lean_object* v_ctx_170_, lean_object* v_e_171_){
_start:
{
lean_object* v_exceptionSet_172_; uint8_t v_kind_173_; lean_object* v_e_175_; uint8_t v___y_217_; uint8_t v___x_226_; 
v_exceptionSet_172_ = lean_ctor_get(v_ctx_170_, 0);
v_kind_173_ = lean_ctor_get_uint8(v_ctx_170_, sizeof(void*)*1);
v___x_226_ = l_Lean_Meta_SplitKind_considerIte(v_kind_173_);
if (v___x_226_ == 0)
{
goto v___jp_179_;
}
else
{
lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_227_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5));
v___x_228_ = l_Lean_Expr_isAppOf(v_e_171_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6));
v___x_230_ = l_Lean_Expr_isAppOf(v_e_171_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_232_ = l_Lean_Expr_isAppOf(v_e_171_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_234_ = l_Lean_Expr_isAppOf(v_e_171_, v___x_233_);
if (v___x_234_ == 0)
{
goto v___jp_202_;
}
else
{
v___y_217_ = v___x_234_;
goto v___jp_216_;
}
}
else
{
v___y_217_ = v___x_226_;
goto v___jp_216_;
}
}
else
{
v___y_217_ = v___x_226_;
goto v___jp_216_;
}
}
else
{
v___y_217_ = v___x_226_;
goto v___jp_216_;
}
}
v___jp_174_:
{
uint8_t v___x_176_; 
v___x_176_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_exceptionSet_172_, v_e_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_177_, 0, v_e_175_);
return v___x_177_;
}
else
{
lean_object* v___x_178_; 
lean_dec_ref(v_e_175_);
v___x_178_ = lean_box(0);
return v___x_178_;
}
}
v___jp_179_:
{
uint8_t v___x_180_; 
v___x_180_ = l_Lean_Meta_SplitKind_considerMatch(v_kind_173_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
lean_dec_ref(v_e_171_);
lean_dec_ref(v_env_169_);
v___x_181_ = lean_box(0);
return v___x_181_;
}
else
{
lean_object* v___x_182_; 
v___x_182_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_169_, v_e_171_);
if (lean_obj_tag(v___x_182_) == 1)
{
lean_object* v_val_183_; lean_object* v_numDiscrs_184_; lean_object* v_nargs_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v_dummy_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v_args_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v_fst_195_; 
v_val_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_val_183_);
lean_dec_ref_known(v___x_182_, 1);
v_numDiscrs_184_ = lean_ctor_get(v_val_183_, 1);
v_nargs_185_ = l_Lean_Expr_getAppNumArgs(v_e_171_);
v___x_186_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_183_);
v___x_187_ = lean_nat_add(v___x_186_, v_numDiscrs_184_);
v_dummy_188_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0);
lean_inc(v_nargs_185_);
v___x_189_ = lean_mk_array(v_nargs_185_, v_dummy_188_);
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_nat_sub(v_nargs_185_, v___x_190_);
lean_dec(v_nargs_185_);
lean_inc_ref(v_e_171_);
v_args_192_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_171_, v___x_189_, v___x_191_);
v___x_193_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_194_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v___x_187_, v_args_192_, v___x_186_, v___x_193_);
lean_dec(v___x_187_);
v_fst_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_fst_195_);
lean_dec_ref(v___x_194_);
if (lean_obj_tag(v_fst_195_) == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_196_ = lean_array_get_size(v_args_192_);
lean_dec_ref(v_args_192_);
v___x_197_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_183_);
lean_dec(v_val_183_);
v___x_198_ = lean_nat_sub(v___x_196_, v___x_197_);
lean_dec(v___x_197_);
v___x_199_ = l_Lean_Expr_getBoundedAppFn(v___x_198_, v_e_171_);
lean_dec_ref(v_e_171_);
v_e_175_ = v___x_199_;
goto v___jp_174_;
}
else
{
lean_object* v_val_200_; 
lean_dec_ref(v_args_192_);
lean_dec(v_val_183_);
lean_dec_ref(v_e_171_);
v_val_200_ = lean_ctor_get(v_fst_195_, 0);
lean_inc(v_val_200_);
lean_dec_ref_known(v_fst_195_, 1);
return v_val_200_;
}
}
else
{
lean_object* v___x_201_; 
lean_dec(v___x_182_);
lean_dec_ref(v_e_171_);
v___x_201_ = lean_box(0);
return v___x_201_;
}
}
}
v___jp_202_:
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_204_ = l_Lean_Expr_isAppOf(v_e_171_, v___x_203_);
if (v___x_204_ == 0)
{
goto v___jp_179_;
}
else
{
lean_object* v_numArgs_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v_numArgs_205_ = l_Lean_Expr_getAppNumArgs(v_e_171_);
v___x_206_ = lean_unsigned_to_nat(6u);
v___x_207_ = lean_nat_dec_le(v___x_206_, v_numArgs_205_);
if (v___x_207_ == 0)
{
lean_dec(v_numArgs_205_);
goto v___jp_179_;
}
else
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_208_ = lean_unsigned_to_nat(4u);
v___x_209_ = l_Lean_Expr_getRevArg_x21(v_e_171_, v___x_208_);
v___x_210_ = l_Lean_Expr_hasLooseBVars(v___x_209_);
lean_dec_ref(v___x_209_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_211_ = lean_unsigned_to_nat(3u);
v___x_212_ = l_Lean_Expr_getRevArg_x21(v_e_171_, v___x_211_);
v___x_213_ = l_Lean_Expr_hasLooseBVars(v___x_212_);
lean_dec_ref(v___x_212_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec_ref(v_env_169_);
v___x_214_ = lean_nat_sub(v_numArgs_205_, v___x_206_);
lean_dec(v_numArgs_205_);
v___x_215_ = l_Lean_Expr_getBoundedAppFn(v___x_214_, v_e_171_);
lean_dec_ref(v_e_171_);
v_e_175_ = v___x_215_;
goto v___jp_174_;
}
else
{
lean_dec(v_numArgs_205_);
goto v___jp_179_;
}
}
else
{
lean_dec(v_numArgs_205_);
goto v___jp_179_;
}
}
}
}
v___jp_216_:
{
lean_object* v_numArgs_218_; lean_object* v___x_219_; uint8_t v___x_220_; 
v_numArgs_218_ = l_Lean_Expr_getAppNumArgs(v_e_171_);
v___x_219_ = lean_unsigned_to_nat(5u);
v___x_220_ = lean_nat_dec_le(v___x_219_, v_numArgs_218_);
if (v___x_220_ == 0)
{
lean_dec(v_numArgs_218_);
goto v___jp_202_;
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_221_ = lean_unsigned_to_nat(3u);
v___x_222_ = l_Lean_Expr_getRevArg_x21(v_e_171_, v___x_221_);
v___x_223_ = l_Lean_Expr_hasLooseBVars(v___x_222_);
lean_dec_ref(v___x_222_);
if (v___x_223_ == 0)
{
if (v___y_217_ == 0)
{
lean_dec(v_numArgs_218_);
goto v___jp_202_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_dec_ref(v_env_169_);
v___x_224_ = lean_nat_sub(v_numArgs_218_, v___x_219_);
lean_dec(v_numArgs_218_);
v___x_225_ = l_Lean_Expr_getBoundedAppFn(v___x_224_, v_e_171_);
lean_dec_ref(v_e_171_);
v_e_175_ = v___x_225_;
goto v___jp_174_;
}
}
else
{
lean_dec(v_numArgs_218_);
goto v___jp_202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___boxed(lean_object* v_env_235_, lean_object* v_ctx_236_, lean_object* v_e_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(v_env_235_, v_ctx_236_, v_e_237_);
lean_dec_ref(v_ctx_236_);
return v_res_238_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(lean_object* v_00_u03b2_239_, lean_object* v_m_240_, lean_object* v_a_241_){
_start:
{
uint8_t v___x_242_; 
v___x_242_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_m_240_, v_a_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___boxed(lean_object* v_00_u03b2_243_, lean_object* v_m_244_, lean_object* v_a_245_){
_start:
{
uint8_t v_res_246_; lean_object* v_r_247_; 
v_res_246_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(v_00_u03b2_243_, v_m_244_, v_a_245_);
lean_dec_ref(v_a_245_);
lean_dec_ref(v_m_244_);
v_r_247_ = lean_box(v_res_246_);
return v_r_247_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(lean_object* v_upperBound_248_, lean_object* v_args_249_, lean_object* v_inst_250_, lean_object* v_R_251_, lean_object* v_a_252_, lean_object* v_b_253_, lean_object* v_c_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v_upperBound_248_, v_args_249_, v_a_252_, v_b_253_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___boxed(lean_object* v_upperBound_256_, lean_object* v_args_257_, lean_object* v_inst_258_, lean_object* v_R_259_, lean_object* v_a_260_, lean_object* v_b_261_, lean_object* v_c_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(v_upperBound_256_, v_args_257_, v_inst_258_, v_R_259_, v_a_260_, v_b_261_, v_c_262_);
lean_dec_ref(v_b_261_);
lean_dec_ref(v_args_257_);
lean_dec(v_upperBound_256_);
return v_res_263_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(lean_object* v_00_u03b2_264_, lean_object* v_a_265_, lean_object* v_x_266_){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_265_, v_x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_268_, lean_object* v_a_269_, lean_object* v_x_270_){
_start:
{
uint8_t v_res_271_; lean_object* v_r_272_; 
v_res_271_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(v_00_u03b2_268_, v_a_269_, v_x_270_);
lean_dec(v_x_270_);
lean_dec_ref(v_a_269_);
v_r_272_ = lean_box(v_res_271_);
return v_r_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg(lean_object* v_e_277_, lean_object* v_a_278_){
_start:
{
lean_object* v___f_280_; lean_object* v___f_281_; uint8_t v___x_282_; 
v___f_280_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0));
v___f_281_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1));
lean_inc_ref(v_e_277_);
v___x_282_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_280_, v___f_281_, v_a_278_, v_e_277_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_283_ = lean_box(0);
v___x_284_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_280_, v___f_281_, v_a_278_, v_e_277_, v___x_283_);
v___x_285_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2));
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec_ref(v_e_277_);
v___x_288_ = lean_box(0);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v_a_278_);
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___boxed(lean_object* v_e_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Meta_FindSplitImpl_checkVisited___redArg(v_e_291_, v_a_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited(lean_object* v_e_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v___f_303_; lean_object* v___f_304_; uint8_t v___x_305_; 
v___f_303_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0));
v___f_304_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1));
lean_inc_ref(v_e_295_);
v___x_305_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_303_, v___f_304_, v_a_297_, v_e_295_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_306_ = lean_box(0);
v___x_307_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_303_, v___f_304_, v_a_297_, v_e_295_, v___x_306_);
v___x_308_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2));
v___x_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_307_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
return v___x_310_;
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
lean_dec_ref(v_e_295_);
v___x_311_ = lean_box(0);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v_a_297_);
v___x_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___boxed(lean_object* v_e_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_Meta_FindSplitImpl_checkVisited(v_e_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
lean_dec_ref(v_a_315_);
return v_res_322_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(lean_object* v_a_323_, lean_object* v_x_324_){
_start:
{
if (lean_obj_tag(v_x_324_) == 0)
{
uint8_t v___x_325_; 
v___x_325_ = 0;
return v___x_325_;
}
else
{
lean_object* v_key_326_; lean_object* v_tail_327_; size_t v___x_328_; size_t v___x_329_; uint8_t v___x_330_; 
v_key_326_ = lean_ctor_get(v_x_324_, 0);
v_tail_327_ = lean_ctor_get(v_x_324_, 2);
v___x_328_ = lean_ptr_addr(v_key_326_);
v___x_329_ = lean_ptr_addr(v_a_323_);
v___x_330_ = lean_usize_dec_eq(v___x_328_, v___x_329_);
if (v___x_330_ == 0)
{
v_x_324_ = v_tail_327_;
goto _start;
}
else
{
return v___x_330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg___boxed(lean_object* v_a_332_, lean_object* v_x_333_){
_start:
{
uint8_t v_res_334_; lean_object* v_r_335_; 
v_res_334_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_332_, v_x_333_);
lean_dec(v_x_333_);
lean_dec_ref(v_a_332_);
v_r_335_ = lean_box(v_res_334_);
return v_r_335_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
return v_x_336_;
}
else
{
lean_object* v_key_338_; lean_object* v_value_339_; lean_object* v_tail_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_366_; 
v_key_338_ = lean_ctor_get(v_x_337_, 0);
v_value_339_ = lean_ctor_get(v_x_337_, 1);
v_tail_340_ = lean_ctor_get(v_x_337_, 2);
v_isSharedCheck_366_ = !lean_is_exclusive(v_x_337_);
if (v_isSharedCheck_366_ == 0)
{
v___x_342_ = v_x_337_;
v_isShared_343_ = v_isSharedCheck_366_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_tail_340_);
lean_inc(v_value_339_);
lean_inc(v_key_338_);
lean_dec(v_x_337_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_366_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; size_t v___x_345_; uint64_t v___x_346_; uint64_t v___x_347_; uint64_t v___x_348_; uint64_t v___x_349_; uint64_t v___x_350_; uint64_t v_fold_351_; uint64_t v___x_352_; uint64_t v___x_353_; uint64_t v___x_354_; size_t v___x_355_; size_t v___x_356_; size_t v___x_357_; size_t v___x_358_; size_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_344_ = lean_array_get_size(v_x_336_);
v___x_345_ = lean_ptr_addr(v_key_338_);
v___x_346_ = lean_usize_to_uint64(v___x_345_);
v___x_347_ = 11ULL;
v___x_348_ = lean_uint64_mix_hash(v___x_346_, v___x_347_);
v___x_349_ = 32ULL;
v___x_350_ = lean_uint64_shift_right(v___x_348_, v___x_349_);
v_fold_351_ = lean_uint64_xor(v___x_348_, v___x_350_);
v___x_352_ = 16ULL;
v___x_353_ = lean_uint64_shift_right(v_fold_351_, v___x_352_);
v___x_354_ = lean_uint64_xor(v_fold_351_, v___x_353_);
v___x_355_ = lean_uint64_to_usize(v___x_354_);
v___x_356_ = lean_usize_of_nat(v___x_344_);
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_sub(v___x_356_, v___x_357_);
v___x_359_ = lean_usize_land(v___x_355_, v___x_358_);
v___x_360_ = lean_array_uget_borrowed(v_x_336_, v___x_359_);
lean_inc(v___x_360_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 2, v___x_360_);
v___x_362_ = v___x_342_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_key_338_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_value_339_);
lean_ctor_set(v_reuseFailAlloc_365_, 2, v___x_360_);
v___x_362_ = v_reuseFailAlloc_365_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_363_; 
v___x_363_ = lean_array_uset(v_x_336_, v___x_359_, v___x_362_);
v_x_336_ = v___x_363_;
v_x_337_ = v_tail_340_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(lean_object* v_i_367_, lean_object* v_source_368_, lean_object* v_target_369_){
_start:
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_array_get_size(v_source_368_);
v___x_371_ = lean_nat_dec_lt(v_i_367_, v___x_370_);
if (v___x_371_ == 0)
{
lean_dec_ref(v_source_368_);
lean_dec(v_i_367_);
return v_target_369_;
}
else
{
lean_object* v_es_372_; lean_object* v___x_373_; lean_object* v_source_374_; lean_object* v_target_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_es_372_ = lean_array_fget(v_source_368_, v_i_367_);
v___x_373_ = lean_box(0);
v_source_374_ = lean_array_fset(v_source_368_, v_i_367_, v___x_373_);
v_target_375_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_target_369_, v_es_372_);
v___x_376_ = lean_unsigned_to_nat(1u);
v___x_377_ = lean_nat_add(v_i_367_, v___x_376_);
lean_dec(v_i_367_);
v_i_367_ = v___x_377_;
v_source_368_ = v_source_374_;
v_target_369_ = v_target_375_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(lean_object* v_data_379_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v_nbuckets_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_380_ = lean_array_get_size(v_data_379_);
v___x_381_ = lean_unsigned_to_nat(2u);
v_nbuckets_382_ = lean_nat_mul(v___x_380_, v___x_381_);
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = lean_box(0);
v___x_385_ = lean_mk_array(v_nbuckets_382_, v___x_384_);
v___x_386_ = lean_array_propagate_mark(v_data_379_, v___x_385_);
v___x_387_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(v___x_383_, v_data_379_, v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(lean_object* v_m_388_, lean_object* v_a_389_, lean_object* v_b_390_){
_start:
{
lean_object* v_size_391_; lean_object* v_buckets_392_; lean_object* v___x_393_; size_t v___x_394_; uint64_t v___x_395_; uint64_t v___x_396_; uint64_t v___x_397_; uint64_t v___x_398_; uint64_t v___x_399_; uint64_t v_fold_400_; uint64_t v___x_401_; uint64_t v___x_402_; uint64_t v___x_403_; size_t v___x_404_; size_t v___x_405_; size_t v___x_406_; size_t v___x_407_; size_t v___x_408_; lean_object* v_bkt_409_; uint8_t v___x_410_; 
v_size_391_ = lean_ctor_get(v_m_388_, 0);
v_buckets_392_ = lean_ctor_get(v_m_388_, 1);
v___x_393_ = lean_array_get_size(v_buckets_392_);
v___x_394_ = lean_ptr_addr(v_a_389_);
v___x_395_ = lean_usize_to_uint64(v___x_394_);
v___x_396_ = 11ULL;
v___x_397_ = lean_uint64_mix_hash(v___x_395_, v___x_396_);
v___x_398_ = 32ULL;
v___x_399_ = lean_uint64_shift_right(v___x_397_, v___x_398_);
v_fold_400_ = lean_uint64_xor(v___x_397_, v___x_399_);
v___x_401_ = 16ULL;
v___x_402_ = lean_uint64_shift_right(v_fold_400_, v___x_401_);
v___x_403_ = lean_uint64_xor(v_fold_400_, v___x_402_);
v___x_404_ = lean_uint64_to_usize(v___x_403_);
v___x_405_ = lean_usize_of_nat(v___x_393_);
v___x_406_ = ((size_t)1ULL);
v___x_407_ = lean_usize_sub(v___x_405_, v___x_406_);
v___x_408_ = lean_usize_land(v___x_404_, v___x_407_);
v_bkt_409_ = lean_array_uget_borrowed(v_buckets_392_, v___x_408_);
v___x_410_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_389_, v_bkt_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_431_; 
lean_inc_ref(v_buckets_392_);
lean_inc(v_size_391_);
v_isSharedCheck_431_ = !lean_is_exclusive(v_m_388_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; lean_object* v_unused_433_; 
v_unused_432_ = lean_ctor_get(v_m_388_, 1);
lean_dec(v_unused_432_);
v_unused_433_ = lean_ctor_get(v_m_388_, 0);
lean_dec(v_unused_433_);
v___x_412_ = v_m_388_;
v_isShared_413_ = v_isSharedCheck_431_;
goto v_resetjp_411_;
}
else
{
lean_dec(v_m_388_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_431_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v_size_x27_415_; lean_object* v___x_416_; lean_object* v_buckets_x27_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_414_ = lean_unsigned_to_nat(1u);
v_size_x27_415_ = lean_nat_add(v_size_391_, v___x_414_);
lean_dec(v_size_391_);
lean_inc(v_bkt_409_);
v___x_416_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_416_, 0, v_a_389_);
lean_ctor_set(v___x_416_, 1, v_b_390_);
lean_ctor_set(v___x_416_, 2, v_bkt_409_);
v_buckets_x27_417_ = lean_array_uset(v_buckets_392_, v___x_408_, v___x_416_);
v___x_418_ = lean_unsigned_to_nat(4u);
v___x_419_ = lean_nat_mul(v_size_x27_415_, v___x_418_);
v___x_420_ = lean_unsigned_to_nat(3u);
v___x_421_ = lean_nat_div(v___x_419_, v___x_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_array_get_size(v_buckets_x27_417_);
v___x_423_ = lean_nat_dec_le(v___x_421_, v___x_422_);
lean_dec(v___x_421_);
if (v___x_423_ == 0)
{
lean_object* v_val_424_; lean_object* v___x_426_; 
v_val_424_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(v_buckets_x27_417_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v_val_424_);
lean_ctor_set(v___x_412_, 0, v_size_x27_415_);
v___x_426_ = v___x_412_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_size_x27_415_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_val_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
else
{
lean_object* v___x_429_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v_buckets_x27_417_);
lean_ctor_set(v___x_412_, 0, v_size_x27_415_);
v___x_429_ = v___x_412_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_size_x27_415_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_buckets_x27_417_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
else
{
lean_dec(v_b_390_);
lean_dec_ref(v_a_389_);
return v_m_388_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(lean_object* v_m_434_, lean_object* v_a_435_){
_start:
{
lean_object* v_buckets_436_; lean_object* v___x_437_; size_t v___x_438_; uint64_t v___x_439_; uint64_t v___x_440_; uint64_t v___x_441_; uint64_t v___x_442_; uint64_t v___x_443_; uint64_t v_fold_444_; uint64_t v___x_445_; uint64_t v___x_446_; uint64_t v___x_447_; size_t v___x_448_; size_t v___x_449_; size_t v___x_450_; size_t v___x_451_; size_t v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_buckets_436_ = lean_ctor_get(v_m_434_, 1);
v___x_437_ = lean_array_get_size(v_buckets_436_);
v___x_438_ = lean_ptr_addr(v_a_435_);
v___x_439_ = lean_usize_to_uint64(v___x_438_);
v___x_440_ = 11ULL;
v___x_441_ = lean_uint64_mix_hash(v___x_439_, v___x_440_);
v___x_442_ = 32ULL;
v___x_443_ = lean_uint64_shift_right(v___x_441_, v___x_442_);
v_fold_444_ = lean_uint64_xor(v___x_441_, v___x_443_);
v___x_445_ = 16ULL;
v___x_446_ = lean_uint64_shift_right(v_fold_444_, v___x_445_);
v___x_447_ = lean_uint64_xor(v_fold_444_, v___x_446_);
v___x_448_ = lean_uint64_to_usize(v___x_447_);
v___x_449_ = lean_usize_of_nat(v___x_437_);
v___x_450_ = ((size_t)1ULL);
v___x_451_ = lean_usize_sub(v___x_449_, v___x_450_);
v___x_452_ = lean_usize_land(v___x_448_, v___x_451_);
v___x_453_ = lean_array_uget_borrowed(v_buckets_436_, v___x_452_);
v___x_454_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_435_, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg___boxed(lean_object* v_m_455_, lean_object* v_a_456_){
_start:
{
uint8_t v_res_457_; lean_object* v_r_458_; 
v_res_457_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_m_455_, v_a_456_);
lean_dec_ref(v_a_456_);
lean_dec_ref(v_m_455_);
v_r_458_ = lean_box(v_res_457_);
return v_r_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit(lean_object* v_e_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; uint8_t v___x_498_; 
v___x_498_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_a_461_, v_e_459_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_env_502_; lean_object* v___x_503_; 
v___x_499_ = lean_box(0);
lean_inc_ref_n(v_e_459_, 2);
v___x_500_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(v_a_461_, v_e_459_, v___x_499_);
v___x_501_ = lean_st_ref_get(v_a_465_);
v_env_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc_ref(v_env_502_);
lean_dec(v___x_501_);
v___x_503_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(v_env_502_, v_a_460_, v_e_459_);
if (lean_obj_tag(v___x_503_) == 1)
{
lean_object* v___x_504_; lean_object* v___x_505_; 
lean_dec_ref(v_e_459_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
lean_ctor_set(v___x_504_, 1, v___x_500_);
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
return v___x_505_;
}
else
{
uint8_t v___x_506_; 
lean_dec(v___x_503_);
v___x_506_ = l_Lean_Expr_hasLooseBVars(v_e_459_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_inc_ref(v_e_459_);
v___x_507_ = l_Lean_Meta_isProof(v_e_459_, v_a_462_, v_a_463_, v_a_464_, v_a_465_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_518_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_518_ == 0)
{
v___x_510_ = v___x_507_;
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
uint8_t v___x_512_; 
v___x_512_ = lean_unbox(v_a_508_);
lean_dec(v_a_508_);
if (v___x_512_ == 0)
{
lean_del_object(v___x_510_);
v___y_468_ = v_a_460_;
v___y_469_ = v___x_500_;
v___y_470_ = v_a_462_;
v___y_471_ = v_a_463_;
v___y_472_ = v_a_464_;
v___y_473_ = v_a_465_;
goto v___jp_467_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
lean_dec_ref(v_e_459_);
v___x_513_ = lean_box(0);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v___x_500_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_514_);
v___x_516_ = v___x_510_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v___x_500_);
lean_dec_ref(v_e_459_);
v_a_519_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_507_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_507_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
v___y_468_ = v_a_460_;
v___y_469_ = v___x_500_;
v___y_470_ = v_a_462_;
v___y_471_ = v_a_463_;
v___y_472_ = v_a_464_;
v___y_473_ = v_a_465_;
goto v___jp_467_;
}
}
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v_e_459_);
v___x_527_ = lean_box(0);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v_a_461_);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
v___jp_467_:
{
switch(lean_obj_tag(v_e_459_))
{
case 6:
{
lean_object* v_body_474_; 
v_body_474_ = lean_ctor_get(v_e_459_, 2);
lean_inc_ref(v_body_474_);
lean_dec_ref_known(v_e_459_, 3);
v_e_459_ = v_body_474_;
v_a_460_ = v___y_468_;
v_a_461_ = v___y_469_;
v_a_462_ = v___y_470_;
v_a_463_ = v___y_471_;
v_a_464_ = v___y_472_;
v_a_465_ = v___y_473_;
goto _start;
}
case 11:
{
lean_object* v_struct_476_; 
v_struct_476_ = lean_ctor_get(v_e_459_, 2);
lean_inc_ref(v_struct_476_);
lean_dec_ref_known(v_e_459_, 3);
v_e_459_ = v_struct_476_;
v_a_460_ = v___y_468_;
v_a_461_ = v___y_469_;
v_a_462_ = v___y_470_;
v_a_463_ = v___y_471_;
v_a_464_ = v___y_472_;
v_a_465_ = v___y_473_;
goto _start;
}
case 10:
{
lean_object* v_expr_478_; 
v_expr_478_ = lean_ctor_get(v_e_459_, 1);
lean_inc_ref(v_expr_478_);
lean_dec_ref_known(v_e_459_, 2);
v_e_459_ = v_expr_478_;
v_a_460_ = v___y_468_;
v_a_461_ = v___y_469_;
v_a_462_ = v___y_470_;
v_a_463_ = v___y_471_;
v_a_464_ = v___y_472_;
v_a_465_ = v___y_473_;
goto _start;
}
case 7:
{
lean_object* v_binderType_480_; lean_object* v_body_481_; lean_object* v___x_482_; 
v_binderType_480_ = lean_ctor_get(v_e_459_, 1);
lean_inc_ref(v_binderType_480_);
v_body_481_ = lean_ctor_get(v_e_459_, 2);
lean_inc_ref(v_body_481_);
lean_dec_ref_known(v_e_459_, 3);
v___x_482_ = l_Lean_Meta_FindSplitImpl_visit(v_binderType_480_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v_fst_484_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
v_fst_484_ = lean_ctor_get(v_a_483_, 0);
if (lean_obj_tag(v_fst_484_) == 0)
{
lean_object* v_snd_485_; 
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v_snd_485_ = lean_ctor_get(v_a_483_, 1);
lean_inc(v_snd_485_);
lean_dec(v_a_483_);
v_e_459_ = v_body_481_;
v_a_460_ = v___y_468_;
v_a_461_ = v_snd_485_;
v_a_462_ = v___y_470_;
v_a_463_ = v___y_471_;
v_a_464_ = v___y_472_;
v_a_465_ = v___y_473_;
goto _start;
}
else
{
lean_dec_ref(v_body_481_);
return v___x_482_;
}
}
else
{
lean_dec_ref(v_body_481_);
return v___x_482_;
}
}
case 8:
{
lean_object* v_value_487_; lean_object* v_body_488_; lean_object* v___x_489_; 
v_value_487_ = lean_ctor_get(v_e_459_, 2);
lean_inc_ref(v_value_487_);
v_body_488_ = lean_ctor_get(v_e_459_, 3);
lean_inc_ref(v_body_488_);
lean_dec_ref_known(v_e_459_, 4);
v___x_489_ = l_Lean_Meta_FindSplitImpl_visit(v_value_487_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v_a_490_; lean_object* v_fst_491_; 
v_a_490_ = lean_ctor_get(v___x_489_, 0);
v_fst_491_ = lean_ctor_get(v_a_490_, 0);
if (lean_obj_tag(v_fst_491_) == 0)
{
lean_object* v_snd_492_; 
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_489_, 1);
v_snd_492_ = lean_ctor_get(v_a_490_, 1);
lean_inc(v_snd_492_);
lean_dec(v_a_490_);
v_e_459_ = v_body_488_;
v_a_460_ = v___y_468_;
v_a_461_ = v_snd_492_;
v_a_462_ = v___y_470_;
v_a_463_ = v___y_471_;
v_a_464_ = v___y_472_;
v_a_465_ = v___y_473_;
goto _start;
}
else
{
lean_dec_ref(v_body_488_);
return v___x_489_;
}
}
else
{
lean_dec_ref(v_body_488_);
return v___x_489_;
}
}
case 5:
{
lean_object* v___x_494_; 
v___x_494_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(v_e_459_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
return v___x_494_;
}
default: 
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
lean_dec_ref(v_e_459_);
v___x_495_ = lean_box(0);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___y_469_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(lean_object* v_upperBound_530_, lean_object* v_args_531_, lean_object* v_info_532_, lean_object* v_a_533_, lean_object* v_b_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_a_543_; lean_object* v_snd_544_; lean_object* v_a_548_; lean_object* v_snd_549_; uint8_t v___x_553_; 
v___x_553_ = lean_nat_dec_lt(v_a_533_, v_upperBound_530_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec(v_a_533_);
v___x_554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_554_, 0, v_b_534_);
lean_ctor_set(v___x_554_, 1, v___y_536_);
v___x_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
return v___x_555_;
}
else
{
lean_object* v_paramInfo_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
lean_dec_ref(v_b_534_);
v_paramInfo_556_ = lean_ctor_get(v_info_532_, 0);
v___x_557_ = lean_box(0);
v___x_558_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_559_ = lean_array_fget_borrowed(v_args_531_, v_a_533_);
v___x_560_ = lean_array_get_size(v_paramInfo_556_);
v___x_561_ = lean_nat_dec_lt(v_a_533_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; 
lean_inc(v___x_559_);
v___x_562_ = l_Lean_Meta_FindSplitImpl_visit(v___x_559_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v_fst_564_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_562_, 1);
v_fst_564_ = lean_ctor_get(v_a_563_, 0);
if (lean_obj_tag(v_fst_564_) == 1)
{
lean_object* v_snd_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_573_; 
lean_inc_ref(v_fst_564_);
lean_dec(v_a_533_);
v_snd_565_ = lean_ctor_get(v_a_563_, 1);
v_isSharedCheck_573_ = !lean_is_exclusive(v_a_563_);
if (v_isSharedCheck_573_ == 0)
{
lean_object* v_unused_574_; 
v_unused_574_ = lean_ctor_get(v_a_563_, 0);
lean_dec(v_unused_574_);
v___x_567_ = v_a_563_;
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_snd_565_);
lean_dec(v_a_563_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_569_, 0, v_fst_564_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 1, v___x_557_);
lean_ctor_set(v___x_567_, 0, v___x_569_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v___x_557_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
v_a_543_ = v___x_571_;
v_snd_544_ = v_snd_565_;
goto v___jp_542_;
}
}
}
else
{
lean_object* v_snd_575_; 
v_snd_575_ = lean_ctor_get(v_a_563_, 1);
lean_inc(v_snd_575_);
lean_dec(v_a_563_);
v_a_548_ = v___x_558_;
v_snd_549_ = v_snd_575_;
goto v___jp_547_;
}
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec(v_a_533_);
v_a_576_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_562_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_562_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
else
{
lean_object* v___x_584_; uint8_t v_isProp_585_; 
v___x_584_ = lean_array_fget_borrowed(v_paramInfo_556_, v_a_533_);
v_isProp_585_ = lean_ctor_get_uint8(v___x_584_, sizeof(void*)*1 + 2);
if (v_isProp_585_ == 0)
{
uint8_t v___x_586_; 
v___x_586_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_584_);
if (v___x_586_ == 0)
{
v_a_548_ = v___x_558_;
v_snd_549_ = v___y_536_;
goto v___jp_547_;
}
else
{
lean_object* v___x_587_; 
lean_inc(v___x_559_);
v___x_587_ = l_Lean_Meta_FindSplitImpl_visit(v___x_559_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v_fst_589_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v_fst_589_ = lean_ctor_get(v_a_588_, 0);
if (lean_obj_tag(v_fst_589_) == 1)
{
lean_object* v_snd_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_598_; 
lean_inc_ref(v_fst_589_);
lean_dec(v_a_533_);
v_snd_590_ = lean_ctor_get(v_a_588_, 1);
v_isSharedCheck_598_ = !lean_is_exclusive(v_a_588_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v_a_588_, 0);
lean_dec(v_unused_599_);
v___x_592_ = v_a_588_;
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_snd_590_);
lean_dec(v_a_588_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_594_, 0, v_fst_589_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_557_);
lean_ctor_set(v___x_592_, 0, v___x_594_);
v___x_596_ = v___x_592_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v___x_557_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
v_a_543_ = v___x_596_;
v_snd_544_ = v_snd_590_;
goto v___jp_542_;
}
}
}
else
{
lean_object* v_snd_600_; 
v_snd_600_ = lean_ctor_get(v_a_588_, 1);
lean_inc(v_snd_600_);
lean_dec(v_a_588_);
v_a_548_ = v___x_558_;
v_snd_549_ = v_snd_600_;
goto v___jp_547_;
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
lean_dec(v_a_533_);
v_a_601_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_587_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_587_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
else
{
v_a_548_ = v___x_558_;
v_snd_549_ = v___y_536_;
goto v___jp_547_;
}
}
}
v___jp_542_:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v_a_543_);
lean_ctor_set(v___x_545_, 1, v_snd_544_);
v___x_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
return v___x_546_;
}
v___jp_547_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_unsigned_to_nat(1u);
v___x_551_ = lean_nat_add(v_a_533_, v___x_550_);
lean_dec(v_a_533_);
lean_inc_ref(v_a_548_);
v_a_533_ = v___x_551_;
v_b_534_ = v_a_548_;
v___y_536_ = v_snd_549_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(lean_object* v_x_613_, lean_object* v_x_614_, lean_object* v_x_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_info_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; 
if (lean_obj_tag(v_x_613_) == 5)
{
lean_object* v_fn_665_; lean_object* v_arg_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_fn_665_ = lean_ctor_get(v_x_613_, 0);
lean_inc_ref(v_fn_665_);
v_arg_666_ = lean_ctor_get(v_x_613_, 1);
lean_inc_ref(v_arg_666_);
lean_dec_ref_known(v_x_613_, 2);
v___x_667_ = lean_array_set(v_x_614_, v_x_615_, v_arg_666_);
v___x_668_ = lean_unsigned_to_nat(1u);
v___x_669_ = lean_nat_sub(v_x_615_, v___x_668_);
lean_dec(v_x_615_);
v_x_613_ = v_fn_665_;
v_x_614_ = v___x_667_;
v_x_615_ = v___x_669_;
goto _start;
}
else
{
uint8_t v___x_671_; 
lean_dec(v_x_615_);
v___x_671_ = l_Lean_Expr_hasLooseBVars(v_x_613_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_box(0);
lean_inc_ref(v_x_613_);
v___x_673_ = l_Lean_Meta_getFunInfo(v_x_613_, v___x_672_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_673_, 1);
v_info_624_ = v_a_674_;
v___y_625_ = v___y_616_;
v___y_626_ = v___y_617_;
v___y_627_ = v___y_618_;
v___y_628_ = v___y_619_;
v___y_629_ = v___y_620_;
v___y_630_ = v___y_621_;
goto v___jp_623_;
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
lean_dec_ref(v___y_617_);
lean_dec_ref(v_x_614_);
lean_dec_ref(v_x_613_);
v_a_675_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_673_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_673_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
else
{
lean_object* v___x_683_; 
v___x_683_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1));
v_info_624_ = v___x_683_;
v___y_625_ = v___y_616_;
v___y_626_ = v___y_617_;
v___y_627_ = v___y_618_;
v___y_628_ = v___y_619_;
v___y_629_ = v___y_620_;
v___y_630_ = v___y_621_;
goto v___jp_623_;
}
}
v___jp_623_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_631_ = lean_array_get_size(v_x_614_);
v___x_632_ = lean_unsigned_to_nat(0u);
v___x_633_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_634_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v___x_631_, v_x_614_, v_info_624_, v___x_632_, v___x_633_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
lean_dec_ref(v_info_624_);
lean_dec_ref(v_x_614_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_656_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_656_ == 0)
{
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_656_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_656_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v_fst_639_; lean_object* v_fst_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_654_; 
v_fst_639_ = lean_ctor_get(v_a_635_, 0);
lean_inc(v_fst_639_);
v_fst_640_ = lean_ctor_get(v_fst_639_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v_fst_639_);
if (v_isSharedCheck_654_ == 0)
{
lean_object* v_unused_655_; 
v_unused_655_ = lean_ctor_get(v_fst_639_, 1);
lean_dec(v_unused_655_);
v___x_642_ = v_fst_639_;
v_isShared_643_ = v_isSharedCheck_654_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_fst_640_);
lean_dec(v_fst_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_654_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
if (lean_obj_tag(v_fst_640_) == 0)
{
lean_object* v_snd_644_; lean_object* v___x_645_; 
lean_del_object(v___x_642_);
lean_del_object(v___x_637_);
v_snd_644_ = lean_ctor_get(v_a_635_, 1);
lean_inc(v_snd_644_);
lean_dec(v_a_635_);
v___x_645_ = l_Lean_Meta_FindSplitImpl_visit(v_x_613_, v___y_625_, v_snd_644_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
return v___x_645_;
}
else
{
lean_object* v_snd_646_; lean_object* v_val_647_; lean_object* v___x_649_; 
lean_dec_ref(v_x_613_);
v_snd_646_ = lean_ctor_get(v_a_635_, 1);
lean_inc(v_snd_646_);
lean_dec(v_a_635_);
v_val_647_ = lean_ctor_get(v_fst_640_, 0);
lean_inc(v_val_647_);
lean_dec_ref_known(v_fst_640_, 1);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 1, v_snd_646_);
lean_ctor_set(v___x_642_, 0, v_val_647_);
v___x_649_ = v___x_642_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_val_647_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_snd_646_);
v___x_649_ = v_reuseFailAlloc_653_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_651_; 
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 0, v___x_649_);
v___x_651_ = v___x_637_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec_ref(v_x_613_);
v_a_657_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_634_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_634_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(lean_object* v_e_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_dummy_692_; lean_object* v_nargs_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_dummy_692_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0);
v_nargs_693_ = l_Lean_Expr_getAppNumArgs(v_e_684_);
lean_inc(v_nargs_693_);
v___x_694_ = lean_mk_array(v_nargs_693_, v_dummy_692_);
v___x_695_ = lean_unsigned_to_nat(1u);
v___x_696_ = lean_nat_sub(v_nargs_693_, v___x_695_);
lean_dec(v_nargs_693_);
v___x_697_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(v_e_684_, v___x_694_, v___x_696_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f___boxed(lean_object* v_e_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(v_e_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec_ref(v_a_699_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___boxed(lean_object* v_x_707_, lean_object* v_x_708_, lean_object* v_x_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(v_x_707_, v_x_708_, v_x_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec_ref(v___y_710_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___boxed(lean_object* v_upperBound_718_, lean_object* v_args_719_, lean_object* v_info_720_, lean_object* v_a_721_, lean_object* v_b_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v_upperBound_718_, v_args_719_, v_info_720_, v_a_721_, v_b_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec_ref(v___y_723_);
lean_dec_ref(v_info_720_);
lean_dec_ref(v_args_719_);
lean_dec(v_upperBound_718_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit___boxed(lean_object* v_e_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Meta_FindSplitImpl_visit(v_e_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
lean_dec(v_a_735_);
lean_dec_ref(v_a_734_);
lean_dec_ref(v_a_732_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(lean_object* v_upperBound_740_, lean_object* v_args_741_, lean_object* v_info_742_, lean_object* v_inst_743_, lean_object* v_R_744_, lean_object* v_a_745_, lean_object* v_b_746_, lean_object* v_c_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v_upperBound_740_, v_args_741_, v_info_742_, v_a_745_, v_b_746_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___boxed(lean_object* v_upperBound_756_, lean_object* v_args_757_, lean_object* v_info_758_, lean_object* v_inst_759_, lean_object* v_R_760_, lean_object* v_a_761_, lean_object* v_b_762_, lean_object* v_c_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(v_upperBound_756_, v_args_757_, v_info_758_, v_inst_759_, v_R_760_, v_a_761_, v_b_762_, v_c_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec_ref(v___y_764_);
lean_dec_ref(v_info_758_);
lean_dec_ref(v_args_757_);
lean_dec(v_upperBound_756_);
return v_res_771_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(lean_object* v_00_u03b2_772_, lean_object* v_m_773_, lean_object* v_a_774_){
_start:
{
uint8_t v___x_775_; 
v___x_775_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_m_773_, v_a_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___boxed(lean_object* v_00_u03b2_776_, lean_object* v_m_777_, lean_object* v_a_778_){
_start:
{
uint8_t v_res_779_; lean_object* v_r_780_; 
v_res_779_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(v_00_u03b2_776_, v_m_777_, v_a_778_);
lean_dec_ref(v_a_778_);
lean_dec_ref(v_m_777_);
v_r_780_ = lean_box(v_res_779_);
return v_r_780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4(lean_object* v_00_u03b2_781_, lean_object* v_m_782_, lean_object* v_a_783_, lean_object* v_b_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(v_m_782_, v_a_783_, v_b_784_);
return v___x_785_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(lean_object* v_00_u03b2_786_, lean_object* v_a_787_, lean_object* v_x_788_){
_start:
{
uint8_t v___x_789_; 
v___x_789_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_787_, v_x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___boxed(lean_object* v_00_u03b2_790_, lean_object* v_a_791_, lean_object* v_x_792_){
_start:
{
uint8_t v_res_793_; lean_object* v_r_794_; 
v_res_793_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(v_00_u03b2_790_, v_a_791_, v_x_792_);
lean_dec(v_x_792_);
lean_dec_ref(v_a_791_);
v_r_794_ = lean_box(v_res_793_);
return v_r_794_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5(lean_object* v_00_u03b2_795_, lean_object* v_data_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(v_data_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_798_, lean_object* v_i_799_, lean_object* v_source_800_, lean_object* v_target_801_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(v_i_799_, v_source_800_, v_target_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_x_804_, v_x_805_);
return v___x_806_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_unsigned_to_nat(64u);
v___x_808_ = l_Lean_mkPtrSet___redArg(v___x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(uint8_t v_kind_809_, lean_object* v_exceptionSet_810_, lean_object* v_e_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_817_, 0, v_exceptionSet_810_);
lean_ctor_set_uint8(v___x_817_, sizeof(void*)*1, v_kind_809_);
v___x_818_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0);
v___x_819_ = l_Lean_Meta_FindSplitImpl_visit(v_e_811_, v___x_817_, v___x_818_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
lean_dec_ref_known(v___x_817_, 1);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_828_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_828_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v_fst_824_; lean_object* v___x_826_; 
v_fst_824_ = lean_ctor_get(v_a_820_, 0);
lean_inc(v_fst_824_);
lean_dec(v_a_820_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v_fst_824_);
v___x_826_ = v___x_822_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_fst_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
v_a_829_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_819_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_819_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___boxed(lean_object* v_kind_837_, lean_object* v_exceptionSet_838_, lean_object* v_e_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_){
_start:
{
uint8_t v_kind_boxed_845_; lean_object* v_res_846_; 
v_kind_boxed_845_ = lean_unbox(v_kind_837_);
v_res_846_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(v_kind_boxed_845_, v_exceptionSet_838_, v_e_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
lean_dec_ref(v_a_840_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(lean_object* v_msgData_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; lean_object* v_env_854_; uint8_t v___x_855_; lean_object* v_env_856_; lean_object* v___x_857_; lean_object* v_toCold_858_; lean_object* v_mctx_859_; lean_object* v_lctx_860_; lean_object* v_options_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_853_ = lean_st_ref_get(v___y_851_);
v_env_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc_ref(v_env_854_);
lean_dec(v___x_853_);
v___x_855_ = 0;
v_env_856_ = l_Lean_Environment_setRecordingDeps(v_env_854_, v___x_855_);
v___x_857_ = lean_st_ref_get(v___y_849_);
v_toCold_858_ = lean_ctor_get(v___y_850_, 0);
v_mctx_859_ = lean_ctor_get(v___x_857_, 0);
lean_inc_ref(v_mctx_859_);
lean_dec(v___x_857_);
v_lctx_860_ = lean_ctor_get(v___y_848_, 2);
v_options_861_ = lean_ctor_get(v_toCold_858_, 2);
lean_inc_ref(v_options_861_);
lean_inc_ref(v_lctx_860_);
v___x_862_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_862_, 0, v_env_856_);
lean_ctor_set(v___x_862_, 1, v_mctx_859_);
lean_ctor_set(v___x_862_, 2, v_lctx_860_);
lean_ctor_set(v___x_862_, 3, v_options_861_);
v___x_863_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
lean_ctor_set(v___x_863_, 1, v_msgData_847_);
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msgData_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
return v_res_871_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_872_; double v___x_873_; 
v___x_872_ = lean_unsigned_to_nat(0u);
v___x_873_ = lean_float_of_nat(v___x_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(lean_object* v_cls_877_, lean_object* v_msg_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_ref_884_; lean_object* v___x_885_; lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_931_; 
v_ref_884_ = lean_ctor_get(v___y_881_, 2);
v___x_885_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msg_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
v_a_886_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_931_ == 0)
{
v___x_888_ = v___x_885_;
v_isShared_889_ = v_isSharedCheck_931_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_885_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_931_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v_traceState_891_; lean_object* v_env_892_; lean_object* v_nextMacroScope_893_; lean_object* v_ngen_894_; lean_object* v_auxDeclNGen_895_; lean_object* v_cache_896_; lean_object* v_recordedDeps_897_; lean_object* v_messages_898_; lean_object* v_infoState_899_; lean_object* v_snapshotTasks_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_930_; 
v___x_890_ = lean_st_ref_take(v___y_882_);
v_traceState_891_ = lean_ctor_get(v___x_890_, 4);
v_env_892_ = lean_ctor_get(v___x_890_, 0);
v_nextMacroScope_893_ = lean_ctor_get(v___x_890_, 1);
v_ngen_894_ = lean_ctor_get(v___x_890_, 2);
v_auxDeclNGen_895_ = lean_ctor_get(v___x_890_, 3);
v_cache_896_ = lean_ctor_get(v___x_890_, 5);
v_recordedDeps_897_ = lean_ctor_get(v___x_890_, 6);
v_messages_898_ = lean_ctor_get(v___x_890_, 7);
v_infoState_899_ = lean_ctor_get(v___x_890_, 8);
v_snapshotTasks_900_ = lean_ctor_get(v___x_890_, 9);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_930_ == 0)
{
v___x_902_ = v___x_890_;
v_isShared_903_ = v_isSharedCheck_930_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_snapshotTasks_900_);
lean_inc(v_infoState_899_);
lean_inc(v_messages_898_);
lean_inc(v_recordedDeps_897_);
lean_inc(v_cache_896_);
lean_inc(v_traceState_891_);
lean_inc(v_auxDeclNGen_895_);
lean_inc(v_ngen_894_);
lean_inc(v_nextMacroScope_893_);
lean_inc(v_env_892_);
lean_dec(v___x_890_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_930_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
uint64_t v_tid_904_; lean_object* v_traces_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_929_; 
v_tid_904_ = lean_ctor_get_uint64(v_traceState_891_, sizeof(void*)*1);
v_traces_905_ = lean_ctor_get(v_traceState_891_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v_traceState_891_);
if (v_isSharedCheck_929_ == 0)
{
v___x_907_ = v_traceState_891_;
v_isShared_908_ = v_isSharedCheck_929_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_traces_905_);
lean_dec(v_traceState_891_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_929_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v___x_910_; double v___x_911_; uint8_t v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_920_; 
v___x_909_ = lean_box(0);
v___x_910_ = lean_box(0);
v___x_911_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0);
v___x_912_ = 0;
v___x_913_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1));
v___x_914_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_914_, 0, v_cls_877_);
lean_ctor_set(v___x_914_, 1, v___x_910_);
lean_ctor_set(v___x_914_, 2, v___x_913_);
lean_ctor_set_float(v___x_914_, sizeof(void*)*3, v___x_911_);
lean_ctor_set_float(v___x_914_, sizeof(void*)*3 + 8, v___x_911_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*3 + 16, v___x_912_);
v___x_915_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2));
v___x_916_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v_a_886_);
lean_ctor_set(v___x_916_, 2, v___x_915_);
lean_inc(v_ref_884_);
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v_ref_884_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = l_Lean_PersistentArray_push___redArg(v_traces_905_, v___x_917_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v___x_918_);
v___x_920_ = v___x_907_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_918_);
lean_ctor_set_uint64(v_reuseFailAlloc_928_, sizeof(void*)*1, v_tid_904_);
v___x_920_ = v_reuseFailAlloc_928_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
lean_object* v___x_922_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 4, v___x_920_);
v___x_922_ = v___x_902_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_env_892_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_nextMacroScope_893_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v_ngen_894_);
lean_ctor_set(v_reuseFailAlloc_927_, 3, v_auxDeclNGen_895_);
lean_ctor_set(v_reuseFailAlloc_927_, 4, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_927_, 5, v_cache_896_);
lean_ctor_set(v_reuseFailAlloc_927_, 6, v_recordedDeps_897_);
lean_ctor_set(v_reuseFailAlloc_927_, 7, v_messages_898_);
lean_ctor_set(v_reuseFailAlloc_927_, 8, v_infoState_899_);
lean_ctor_set(v_reuseFailAlloc_927_, 9, v_snapshotTasks_900_);
v___x_922_ = v_reuseFailAlloc_927_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_923_ = lean_st_ref_put(v___y_882_, v___x_922_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_909_);
v___x_925_ = v___x_888_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_909_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___boxed(lean_object* v_cls_932_, lean_object* v_msg_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v_cls_932_, v_msg_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
return v_res_939_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2));
v___x_949_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_950_ = l_Lean_Name_append(v___x_949_, v___x_948_);
return v___x_950_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6));
v___x_953_ = l_Lean_stringToMessageData(v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(uint8_t v_kind_954_, lean_object* v_exceptionSet_955_, lean_object* v_e_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_962_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_962_, 0, v_exceptionSet_955_);
lean_ctor_set_uint8(v___x_962_, sizeof(void*)*1, v_kind_954_);
v___x_963_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0);
v___x_964_ = l_Lean_Meta_FindSplitImpl_visit(v_e_956_, v___x_962_, v___x_963_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
lean_dec_ref_known(v___x_962_, 1);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_1012_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_1012_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_1012_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v_fst_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_1010_; 
v_fst_969_ = lean_ctor_get(v_a_965_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_a_965_);
if (v_isSharedCheck_1010_ == 0)
{
lean_object* v_unused_1011_; 
v_unused_1011_ = lean_ctor_get(v_a_965_, 1);
lean_dec(v_unused_1011_);
v___x_971_ = v_a_965_;
v_isShared_972_ = v_isSharedCheck_1010_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_fst_969_);
lean_dec(v_a_965_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_1010_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
if (lean_obj_tag(v_fst_969_) == 1)
{
lean_object* v_toCold_973_; lean_object* v_options_974_; lean_object* v_val_975_; lean_object* v_inheritedTraceOptions_976_; uint8_t v_hasTrace_977_; lean_object* v___x_979_; 
v_toCold_973_ = lean_ctor_get(v_a_959_, 0);
v_options_974_ = lean_ctor_get(v_toCold_973_, 2);
v_val_975_ = lean_ctor_get(v_fst_969_, 0);
v_inheritedTraceOptions_976_ = lean_ctor_get(v_toCold_973_, 11);
v_hasTrace_977_ = lean_ctor_get_uint8(v_options_974_, sizeof(void*)*1);
lean_inc_ref(v_fst_969_);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 0, v_fst_969_);
v___x_979_ = v___x_967_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_fst_969_);
v___x_979_ = v_reuseFailAlloc_1005_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
if (v_hasTrace_977_ == 0)
{
lean_dec_ref_known(v_fst_969_, 1);
lean_del_object(v___x_971_);
return v___x_979_;
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_980_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2));
v___x_981_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5);
v___x_982_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_976_, v_options_974_, v___x_981_);
if (v___x_982_ == 0)
{
lean_dec_ref_known(v_fst_969_, 1);
lean_del_object(v___x_971_);
return v___x_979_;
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
lean_dec_ref(v___x_979_);
v___x_983_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7);
lean_inc(v_val_975_);
v___x_984_ = l_Lean_indentExpr(v_val_975_);
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 7);
lean_ctor_set(v___x_971_, 1, v___x_984_);
lean_ctor_set(v___x_971_, 0, v___x_983_);
v___x_986_ = v___x_971_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v___x_984_);
v___x_986_ = v_reuseFailAlloc_1004_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_980_, v___x_986_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_994_ == 0)
{
lean_object* v_unused_995_; 
v_unused_995_ = lean_ctor_get(v___x_987_, 0);
lean_dec(v_unused_995_);
v___x_989_ = v___x_987_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_dec(v___x_987_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 0, v_fst_969_);
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_fst_969_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec_ref_known(v_fst_969_, 1);
v_a_996_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_987_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_987_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1008_; 
lean_del_object(v___x_971_);
lean_dec(v_fst_969_);
v___x_1006_ = lean_box(0);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 0, v___x_1006_);
v___x_1008_ = v___x_967_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_a_1013_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_964_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_964_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___boxed(lean_object* v_kind_1021_, lean_object* v_exceptionSet_1022_, lean_object* v_e_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
uint8_t v_kind_boxed_1029_; lean_object* v_res_1030_; 
v_kind_boxed_1029_ = lean_unbox(v_kind_1021_);
v_res_1030_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(v_kind_boxed_1029_, v_exceptionSet_1022_, v_e_1023_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_a_1024_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(uint8_t v_kind_1031_, lean_object* v_exceptionSet_1032_, lean_object* v_e_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v___x_1039_; 
lean_inc_ref(v_exceptionSet_1032_);
v___x_1039_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(v_kind_1031_, v_exceptionSet_1032_, v_e_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
if (lean_obj_tag(v_a_1040_) == 1)
{
lean_object* v_val_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1063_; 
v_val_1041_ = lean_ctor_get(v_a_1040_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_a_1040_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1043_ = v_a_1040_;
v_isShared_1044_ = v_isSharedCheck_1063_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_val_1041_);
lean_dec(v_a_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1063_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
uint8_t v___x_1045_; 
v___x_1045_ = l_Lean_Meta_isIteLike(v_val_1041_);
if (v___x_1045_ == 0)
{
lean_del_object(v___x_1043_);
lean_dec(v_val_1041_);
lean_dec_ref(v_exceptionSet_1032_);
return v___x_1039_;
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec_ref_known(v___x_1039_, 1);
v___x_1046_ = lean_unsigned_to_nat(3u);
v___x_1047_ = l_Lean_Expr_getRevArg_x21(v_val_1041_, v___x_1046_);
v___x_1048_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_1031_, v_exceptionSet_1032_, v___x_1047_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1062_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1051_ = v___x_1048_;
v_isShared_1052_ = v_isSharedCheck_1062_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1062_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___y_1054_; 
if (lean_obj_tag(v_a_1049_) == 0)
{
v___y_1054_ = v_val_1041_;
goto v___jp_1053_;
}
else
{
lean_object* v_val_1061_; 
lean_dec(v_val_1041_);
v_val_1061_ = lean_ctor_get(v_a_1049_, 0);
lean_inc(v_val_1061_);
lean_dec_ref_known(v_a_1049_, 1);
v___y_1054_ = v_val_1061_;
goto v___jp_1053_;
}
v___jp_1053_:
{
lean_object* v___x_1056_; 
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 0, v___y_1054_);
v___x_1056_ = v___x_1043_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___y_1054_);
v___x_1056_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1058_; 
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1056_);
v___x_1058_ = v___x_1051_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
}
else
{
lean_del_object(v___x_1043_);
lean_dec(v_val_1041_);
return v___x_1048_;
}
}
}
}
else
{
lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1071_; 
lean_dec(v_a_1040_);
lean_dec_ref(v_exceptionSet_1032_);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1071_ == 0)
{
lean_object* v_unused_1072_; 
v_unused_1072_ = lean_ctor_get(v___x_1039_, 0);
lean_dec(v_unused_1072_);
v___x_1065_ = v___x_1039_;
v_isShared_1066_ = v_isSharedCheck_1071_;
goto v_resetjp_1064_;
}
else
{
lean_dec(v___x_1039_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1071_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1067_ = lean_box(0);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1067_);
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
lean_dec_ref(v_exceptionSet_1032_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go___boxed(lean_object* v_kind_1073_, lean_object* v_exceptionSet_1074_, lean_object* v_e_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_){
_start:
{
uint8_t v_kind_boxed_1081_; lean_object* v_res_1082_; 
v_kind_boxed_1081_ = lean_unbox(v_kind_1073_);
v_res_1082_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_boxed_1081_, v_exceptionSet_1074_, v_e_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_);
lean_dec(v_a_1079_);
lean_dec_ref(v_a_1078_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(lean_object* v_e_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v___x_1086_; 
v___x_1086_ = l_Lean_Expr_hasMVar(v_e_1083_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_e_1083_);
return v___x_1087_;
}
else
{
lean_object* v___x_1088_; lean_object* v_mctx_1089_; lean_object* v___x_1090_; lean_object* v_fst_1091_; lean_object* v_snd_1092_; lean_object* v___x_1093_; lean_object* v_cache_1094_; lean_object* v_zetaDeltaFVarIds_1095_; lean_object* v_postponed_1096_; lean_object* v_diag_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1106_; 
v___x_1088_ = lean_st_ref_get(v___y_1084_);
v_mctx_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc_ref(v_mctx_1089_);
lean_dec(v___x_1088_);
v___x_1090_ = l_Lean_instantiateMVarsCore(v_mctx_1089_, v_e_1083_);
v_fst_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_fst_1091_);
v_snd_1092_ = lean_ctor_get(v___x_1090_, 1);
lean_inc(v_snd_1092_);
lean_dec_ref(v___x_1090_);
v___x_1093_ = lean_st_ref_take(v___y_1084_);
v_cache_1094_ = lean_ctor_get(v___x_1093_, 1);
v_zetaDeltaFVarIds_1095_ = lean_ctor_get(v___x_1093_, 2);
v_postponed_1096_ = lean_ctor_get(v___x_1093_, 3);
v_diag_1097_ = lean_ctor_get(v___x_1093_, 4);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1106_ == 0)
{
lean_object* v_unused_1107_; 
v_unused_1107_ = lean_ctor_get(v___x_1093_, 0);
lean_dec(v_unused_1107_);
v___x_1099_ = v___x_1093_;
v_isShared_1100_ = v_isSharedCheck_1106_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_diag_1097_);
lean_inc(v_postponed_1096_);
lean_inc(v_zetaDeltaFVarIds_1095_);
lean_inc(v_cache_1094_);
lean_dec(v___x_1093_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1106_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v_snd_1092_);
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_snd_1092_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_cache_1094_);
lean_ctor_set(v_reuseFailAlloc_1105_, 2, v_zetaDeltaFVarIds_1095_);
lean_ctor_set(v_reuseFailAlloc_1105_, 3, v_postponed_1096_);
lean_ctor_set(v_reuseFailAlloc_1105_, 4, v_diag_1097_);
v___x_1102_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_st_ref_put(v___y_1084_, v___x_1102_);
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v_fst_1091_);
return v___x_1104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg___boxed(lean_object* v_e_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_1108_, v___y_1109_);
lean_dec(v___y_1109_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0(lean_object* v_e_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_1112_, v___y_1114_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___boxed(lean_object* v_e_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0(v_e_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f(lean_object* v_e_1126_, uint8_t v_kind_1127_, lean_object* v_exceptionSet_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v_a_1135_; lean_object* v___x_1136_; 
v___x_1134_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_1126_, v_a_1130_);
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref(v___x_1134_);
v___x_1136_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_1127_, v_exceptionSet_1128_, v_a_1135_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f___boxed(lean_object* v_e_1137_, lean_object* v_kind_1138_, lean_object* v_exceptionSet_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_){
_start:
{
uint8_t v_kind_boxed_1145_; lean_object* v_res_1146_; 
v_kind_boxed_1145_ = lean_unbox(v_kind_1138_);
v_res_1146_ = l_Lean_Meta_findSplit_x3f(v_e_1137_, v_kind_boxed_1145_, v_exceptionSet_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
return v_res_1146_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_unsigned_to_nat(16u);
v___x_1149_ = lean_mk_array(v___x_1148_, v___x_1147_);
return v___x_1149_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1(void){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1150_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v___x_1150_);
return v___x_1152_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_box(0);
v___x_1158_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3));
v___x_1159_ = l_Lean_mkConst(v___x_1158_, v___x_1157_);
return v___x_1159_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1165_ = lean_box(0);
v___x_1166_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7));
v___x_1167_ = l_Lean_mkConst(v___x_1166_, v___x_1165_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(lean_object* v_e_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_){
_start:
{
uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = 0;
v___x_1178_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1);
v___x_1179_ = l_Lean_Meta_findSplit_x3f(v_e_1168_, v___x_1177_, v___x_1178_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1242_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1182_ = v___x_1179_;
v_isShared_1183_ = v_isSharedCheck_1242_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1179_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1242_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
if (lean_obj_tag(v_a_1180_) == 1)
{
lean_object* v_val_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1237_; 
v_val_1184_ = lean_ctor_get(v_a_1180_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_a_1180_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1186_ = v_a_1180_;
v_isShared_1187_ = v_isSharedCheck_1237_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_val_1184_);
lean_dec(v_a_1180_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1237_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_1189_ = l_Lean_Expr_isAppOf(v_val_1184_, v___x_1188_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v___x_1190_ = lean_unsigned_to_nat(3u);
v___x_1191_ = l_Lean_Expr_getRevArg_x21(v_val_1184_, v___x_1190_);
v___x_1192_ = lean_unsigned_to_nat(2u);
v___x_1193_ = l_Lean_Expr_getRevArg_x21(v_val_1184_, v___x_1192_);
v___x_1204_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_1205_ = l_Lean_Expr_isAppOf(v_val_1184_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1206_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_1207_ = l_Lean_Expr_isAppOf(v_val_1184_, v___x_1206_);
lean_dec(v_val_1184_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1191_);
lean_ctor_set(v___x_1208_, 1, v___x_1193_);
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
v___x_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
return v___x_1210_;
}
else
{
goto v___jp_1194_;
}
}
else
{
lean_dec(v_val_1184_);
goto v___jp_1194_;
}
v___jp_1194_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1199_; 
v___x_1195_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4);
lean_inc_ref(v___x_1191_);
v___x_1196_ = l_Lean_mkAppB(v___x_1195_, v___x_1191_, v___x_1193_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1191_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v___x_1197_);
v___x_1199_ = v___x_1186_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_object* v___x_1201_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1199_);
v___x_1201_ = v___x_1182_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
else
{
lean_object* v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = l_Lean_Expr_cleanupAnnotations(v_val_1184_);
lean_dec(v_val_1184_);
v___x_1212_ = l_Lean_Expr_isApp(v___x_1211_);
if (v___x_1212_ == 0)
{
lean_dec_ref(v___x_1211_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1211_);
lean_dec_ref(v___x_1211_);
v___x_1214_ = l_Lean_Expr_isApp(v___x_1213_);
if (v___x_1214_ == 0)
{
lean_dec_ref(v___x_1213_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1213_);
lean_dec_ref(v___x_1213_);
v___x_1216_ = l_Lean_Expr_isApp(v___x_1215_);
if (v___x_1216_ == 0)
{
lean_dec_ref(v___x_1215_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1215_);
v___x_1218_ = l_Lean_Expr_isApp(v___x_1217_);
if (v___x_1218_ == 0)
{
lean_dec_ref(v___x_1217_);
lean_dec_ref(v___x_1215_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1217_);
v___x_1220_ = l_Lean_Expr_isApp(v___x_1219_);
if (v___x_1220_ == 0)
{
lean_dec_ref(v___x_1219_);
lean_dec_ref(v___x_1217_);
lean_dec_ref(v___x_1215_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1219_);
v___x_1222_ = l_Lean_Expr_isApp(v___x_1221_);
if (v___x_1222_ == 0)
{
lean_dec_ref(v___x_1221_);
lean_dec_ref(v___x_1219_);
lean_dec_ref(v___x_1217_);
lean_dec_ref(v___x_1215_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v___x_1223_; uint8_t v___x_1224_; 
v___x_1223_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1221_);
lean_dec_ref(v___x_1221_);
v___x_1224_ = l_Lean_Expr_isConstOf(v___x_1223_, v___x_1188_);
lean_dec_ref(v___x_1223_);
if (v___x_1224_ == 0)
{
lean_dec_ref(v___x_1219_);
lean_dec_ref(v___x_1217_);
lean_dec_ref(v___x_1215_);
lean_del_object(v___x_1186_);
lean_del_object(v___x_1182_);
goto v___jp_1174_;
}
else
{
lean_object* v_arg_1225_; lean_object* v_arg_1226_; lean_object* v_arg_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1232_; 
v_arg_1225_ = lean_ctor_get(v___x_1215_, 1);
lean_inc_ref(v_arg_1225_);
lean_dec_ref(v___x_1215_);
v_arg_1226_ = lean_ctor_get(v___x_1217_, 1);
lean_inc_ref_n(v_arg_1226_, 2);
lean_dec_ref(v___x_1217_);
v_arg_1227_ = lean_ctor_get(v___x_1219_, 1);
lean_inc_ref(v_arg_1227_);
lean_dec_ref(v___x_1219_);
v___x_1228_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8);
v___x_1229_ = l_Lean_mkApp3(v___x_1228_, v_arg_1226_, v_arg_1227_, v_arg_1225_);
v___x_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1230_, 0, v_arg_1226_);
lean_ctor_set(v___x_1230_, 1, v___x_1229_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v___x_1230_);
v___x_1232_ = v___x_1186_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1230_);
v___x_1232_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1234_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1232_);
v___x_1234_ = v___x_1182_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
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
}
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1240_; 
lean_dec(v_a_1180_);
v___x_1238_ = lean_box(0);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1238_);
v___x_1240_ = v___x_1182_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
v_a_1243_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1179_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1179_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
v___jp_1174_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_box(0);
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___boxed(lean_object* v_e_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(v_e_1251_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(lean_object* v_name_1258_, lean_object* v_decl_1259_, lean_object* v_ref_1260_){
_start:
{
lean_object* v_defValue_1262_; lean_object* v_descr_1263_; lean_object* v_deprecation_x3f_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v_defValue_1262_ = lean_ctor_get(v_decl_1259_, 0);
v_descr_1263_ = lean_ctor_get(v_decl_1259_, 1);
v_deprecation_x3f_1264_ = lean_ctor_get(v_decl_1259_, 2);
v___x_1265_ = lean_alloc_ctor(1, 0, 1);
v___x_1266_ = lean_unbox(v_defValue_1262_);
lean_ctor_set_uint8(v___x_1265_, 0, v___x_1266_);
lean_inc(v_deprecation_x3f_1264_);
lean_inc_ref(v_descr_1263_);
lean_inc_n(v_name_1258_, 2);
v___x_1267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1267_, 0, v_name_1258_);
lean_ctor_set(v___x_1267_, 1, v_ref_1260_);
lean_ctor_set(v___x_1267_, 2, v___x_1265_);
lean_ctor_set(v___x_1267_, 3, v_descr_1263_);
lean_ctor_set(v___x_1267_, 4, v_deprecation_x3f_1264_);
v___x_1268_ = lean_register_option(v_name_1258_, v___x_1267_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1276_; 
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1276_ == 0)
{
lean_object* v_unused_1277_; 
v_unused_1277_ = lean_ctor_get(v___x_1268_, 0);
lean_dec(v_unused_1277_);
v___x_1270_ = v___x_1268_;
v_isShared_1271_ = v_isSharedCheck_1276_;
goto v_resetjp_1269_;
}
else
{
lean_dec(v___x_1268_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1276_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; lean_object* v___x_1274_; 
lean_inc(v_defValue_1262_);
v___x_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1272_, 0, v_name_1258_);
lean_ctor_set(v___x_1272_, 1, v_defValue_1262_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v___x_1272_);
v___x_1274_ = v___x_1270_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1272_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec(v_name_1258_);
v_a_1278_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1268_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1268_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1286_, lean_object* v_decl_1287_, lean_object* v_ref_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(v_name_1286_, v_decl_1287_, v_ref_1288_);
lean_dec_ref(v_decl_1287_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1309_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1310_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1311_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1312_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(v___x_1309_, v___x_1310_, v___x_1311_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4____boxed(lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
return v_res_1314_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1315_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg(){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___boxed(lean_object* v___dummy_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
return v_res_1321_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1322_; 
v___x_1322_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0(lean_object* v_00_u03b2_1323_){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0);
return v___x_1324_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg(){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___boxed(lean_object* v___dummy_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
return v_res_1330_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1(lean_object* v_00_u03b2_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
return v___x_1333_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0(void){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_1334_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__1(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__2(void){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v_s_1341_; 
v___x_1337_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__1, &l_Lean_Meta_SplitIf_getSimpContext___closed__1_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__1);
v___x_1338_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
v___x_1339_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0);
v___x_1340_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__0, &l_Lean_Meta_SplitIf_getSimpContext___closed__0_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0);
v_s_1341_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_s_1341_, 0, v___x_1340_);
lean_ctor_set(v_s_1341_, 1, v___x_1340_);
lean_ctor_set(v_s_1341_, 2, v___x_1339_);
lean_ctor_set(v_s_1341_, 3, v___x_1338_);
lean_ctor_set(v_s_1341_, 4, v___x_1339_);
lean_ctor_set(v_s_1341_, 5, v___x_1337_);
return v_s_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext(lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_){
_start:
{
lean_object* v_s_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; uint8_t v___x_1374_; lean_object* v_s_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v_s_1371_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__2, &l_Lean_Meta_SplitIf_getSimpContext___closed__2_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__2);
v___x_1372_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__4));
v___x_1373_ = 1;
v___x_1374_ = 0;
v___x_1427_ = lean_unsigned_to_nat(1000u);
v___x_1428_ = l_Lean_Meta_SimpTheorems_addConst(v_s_1371_, v___x_1372_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
v___x_1430_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__6));
v___x_1431_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1429_, v___x_1430_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v___x_1431_, 1);
v___x_1433_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__8));
v___x_1434_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1432_, v___x_1433_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1436_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__10));
v___x_1437_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1435_, v___x_1436_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; lean_object* v_env_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = lean_st_ref_get(v_a_1369_);
v_env_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc_ref(v_env_1440_);
lean_dec(v___x_1439_);
v___x_1441_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__11));
v___x_1442_ = l_Lean_Environment_contains(v_env_1440_, v___x_1441_, v___x_1373_);
if (v___x_1442_ == 0)
{
v_s_1376_ = v_a_1438_;
v___y_1377_ = v_a_1366_;
v___y_1378_ = v_a_1368_;
v___y_1379_ = v_a_1369_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1443_; 
v___x_1443_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1438_, v___x_1441_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__12));
v___x_1446_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1444_, v___x_1445_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__13));
v___x_1449_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1447_, v___x_1448_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1451_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__14));
v___x_1452_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1450_, v___x_1451_, v___x_1373_, v___x_1374_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v_s_1376_ = v_a_1453_;
v___y_1377_ = v_a_1366_;
v___y_1378_ = v_a_1368_;
v___y_1379_ = v_a_1369_;
goto v___jp_1375_;
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
v_a_1454_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1452_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1452_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
v_a_1462_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1449_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1449_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
v_a_1470_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1446_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1446_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
v_a_1478_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1443_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1443_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
v_a_1486_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1437_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1437_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
else
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
v_a_1494_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___x_1434_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1434_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1494_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
v_a_1502_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v___x_1431_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1431_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
v_a_1510_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1428_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1428_);
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
v___jp_1375_:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_1379_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v_a_1381_; lean_object* v___x_1382_; lean_object* v_maxSteps_1383_; lean_object* v_maxDischargeDepth_1384_; uint8_t v_contextual_1385_; uint8_t v_memoize_1386_; uint8_t v_singlePass_1387_; uint8_t v_zeta_1388_; uint8_t v_beta_1389_; uint8_t v_eta_1390_; uint8_t v_etaStruct_1391_; uint8_t v_iota_1392_; uint8_t v_proj_1393_; uint8_t v_decide_1394_; uint8_t v_arith_1395_; uint8_t v_autoUnfold_1396_; uint8_t v_failIfUnchanged_1397_; uint8_t v_ground_1398_; uint8_t v_unfoldPartialApp_1399_; uint8_t v_zetaDelta_1400_; uint8_t v_index_1401_; uint8_t v_implicitDefEqProofs_1402_; uint8_t v_zetaUnused_1403_; uint8_t v_catchRuntime_1404_; uint8_t v_zetaHave_1405_; uint8_t v_congrConsts_1406_; uint8_t v_bitVecOfNat_1407_; uint8_t v_warnExponents_1408_; uint8_t v_suggestions_1409_; lean_object* v_maxSuggestions_1410_; uint8_t v_locals_1411_; uint8_t v_instances_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_1383_ = lean_ctor_get(v___x_1382_, 0);
v_maxDischargeDepth_1384_ = lean_ctor_get(v___x_1382_, 1);
v_contextual_1385_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3);
v_memoize_1386_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 1);
v_singlePass_1387_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 2);
v_zeta_1388_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 3);
v_beta_1389_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 4);
v_eta_1390_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 5);
v_etaStruct_1391_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 6);
v_iota_1392_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 7);
v_proj_1393_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 8);
v_decide_1394_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 9);
v_arith_1395_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 10);
v_autoUnfold_1396_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 11);
v_failIfUnchanged_1397_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 13);
v_ground_1398_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_1399_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 15);
v_zetaDelta_1400_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 16);
v_index_1401_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_1402_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 18);
v_zetaUnused_1403_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 19);
v_catchRuntime_1404_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 20);
v_zetaHave_1405_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 21);
v_congrConsts_1406_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 23);
v_bitVecOfNat_1407_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 24);
v_warnExponents_1408_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 25);
v_suggestions_1409_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 26);
v_maxSuggestions_1410_ = lean_ctor_get(v___x_1382_, 2);
v_locals_1411_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 27);
v_instances_1412_ = lean_ctor_get_uint8(v___x_1382_, sizeof(void*)*3 + 28);
lean_inc(v_maxSuggestions_1410_);
lean_inc(v_maxDischargeDepth_1384_);
lean_inc(v_maxSteps_1383_);
v___x_1413_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1413_, 0, v_maxSteps_1383_);
lean_ctor_set(v___x_1413_, 1, v_maxDischargeDepth_1384_);
lean_ctor_set(v___x_1413_, 2, v_maxSuggestions_1410_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3, v_contextual_1385_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 1, v_memoize_1386_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 2, v_singlePass_1387_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 3, v_zeta_1388_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 4, v_beta_1389_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 5, v_eta_1390_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 6, v_etaStruct_1391_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 7, v_iota_1392_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 8, v_proj_1393_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 9, v_decide_1394_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 10, v_arith_1395_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 11, v_autoUnfold_1396_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 12, v___x_1374_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 13, v_failIfUnchanged_1397_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 14, v_ground_1398_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 15, v_unfoldPartialApp_1399_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 16, v_zetaDelta_1400_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 17, v_index_1401_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_1402_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 19, v_zetaUnused_1403_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 20, v_catchRuntime_1404_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 21, v_zetaHave_1405_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 22, v___x_1373_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 23, v_congrConsts_1406_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 24, v_bitVecOfNat_1407_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 25, v_warnExponents_1408_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 26, v_suggestions_1409_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 27, v_locals_1411_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3 + 28, v_instances_1412_);
v___x_1414_ = lean_unsigned_to_nat(1u);
v___x_1415_ = lean_mk_empty_array_with_capacity(v___x_1414_);
v___x_1416_ = lean_array_push(v___x_1415_, v_s_1376_);
v___x_1417_ = l_Lean_Options_empty;
v___x_1418_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1413_, v___x_1416_, v_a_1381_, v___x_1417_, v___y_1377_, v___y_1378_, v___y_1379_);
return v___x_1418_;
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec_ref(v_s_1376_);
v_a_1419_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1380_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1380_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext___boxed(lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec_ref(v_a_1518_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_1528_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1532_; lean_object* v_maxSteps_1533_; lean_object* v_maxDischargeDepth_1534_; uint8_t v_contextual_1535_; uint8_t v_memoize_1536_; uint8_t v_singlePass_1537_; uint8_t v_zeta_1538_; uint8_t v_beta_1539_; uint8_t v_eta_1540_; uint8_t v_etaStruct_1541_; uint8_t v_iota_1542_; uint8_t v_proj_1543_; uint8_t v_decide_1544_; uint8_t v_arith_1545_; uint8_t v_autoUnfold_1546_; uint8_t v_failIfUnchanged_1547_; uint8_t v_ground_1548_; uint8_t v_unfoldPartialApp_1549_; uint8_t v_zetaDelta_1550_; uint8_t v_index_1551_; uint8_t v_implicitDefEqProofs_1552_; uint8_t v_zetaUnused_1553_; uint8_t v_catchRuntime_1554_; uint8_t v_zetaHave_1555_; uint8_t v_congrConsts_1556_; uint8_t v_bitVecOfNat_1557_; uint8_t v_warnExponents_1558_; uint8_t v_suggestions_1559_; lean_object* v_maxSuggestions_1560_; uint8_t v_locals_1561_; uint8_t v_instances_1562_; uint8_t v___x_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___x_1532_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_1533_ = lean_ctor_get(v___x_1532_, 0);
v_maxDischargeDepth_1534_ = lean_ctor_get(v___x_1532_, 1);
v_contextual_1535_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3);
v_memoize_1536_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 1);
v_singlePass_1537_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 2);
v_zeta_1538_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 3);
v_beta_1539_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 4);
v_eta_1540_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 5);
v_etaStruct_1541_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 6);
v_iota_1542_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 7);
v_proj_1543_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 8);
v_decide_1544_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 9);
v_arith_1545_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 10);
v_autoUnfold_1546_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 11);
v_failIfUnchanged_1547_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 13);
v_ground_1548_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_1549_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 15);
v_zetaDelta_1550_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 16);
v_index_1551_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_1552_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 18);
v_zetaUnused_1553_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 19);
v_catchRuntime_1554_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 20);
v_zetaHave_1555_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 21);
v_congrConsts_1556_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 23);
v_bitVecOfNat_1557_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 24);
v_warnExponents_1558_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 25);
v_suggestions_1559_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 26);
v_maxSuggestions_1560_ = lean_ctor_get(v___x_1532_, 2);
v_locals_1561_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 27);
v_instances_1562_ = lean_ctor_get_uint8(v___x_1532_, sizeof(void*)*3 + 28);
v___x_1563_ = 0;
v___x_1564_ = 1;
lean_inc(v_maxSuggestions_1560_);
lean_inc(v_maxDischargeDepth_1534_);
lean_inc(v_maxSteps_1533_);
v___x_1565_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1565_, 0, v_maxSteps_1533_);
lean_ctor_set(v___x_1565_, 1, v_maxDischargeDepth_1534_);
lean_ctor_set(v___x_1565_, 2, v_maxSuggestions_1560_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3, v_contextual_1535_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 1, v_memoize_1536_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 2, v_singlePass_1537_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 3, v_zeta_1538_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 4, v_beta_1539_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 5, v_eta_1540_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 6, v_etaStruct_1541_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 7, v_iota_1542_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 8, v_proj_1543_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 9, v_decide_1544_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 10, v_arith_1545_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 11, v_autoUnfold_1546_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 12, v___x_1563_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 13, v_failIfUnchanged_1547_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 14, v_ground_1548_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 15, v_unfoldPartialApp_1549_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 16, v_zetaDelta_1550_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 17, v_index_1551_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_1552_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 19, v_zetaUnused_1553_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 20, v_catchRuntime_1554_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 21, v_zetaHave_1555_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 22, v___x_1564_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 23, v_congrConsts_1556_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 24, v_bitVecOfNat_1557_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 25, v_warnExponents_1558_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 26, v_suggestions_1559_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 27, v_locals_1561_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*3 + 28, v_instances_1562_);
v___x_1566_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0));
v___x_1567_ = l_Lean_Options_empty;
v___x_1568_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1565_, v___x_1566_, v_a_1531_, v___x_1567_, v_a_1526_, v_a_1527_, v_a_1528_);
return v___x_1568_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
v_a_1569_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1530_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1530_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___boxed(lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_1577_, v_a_1578_, v_a_1579_);
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
lean_dec_ref(v_a_1577_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_1582_, v_a_1584_, v_a_1585_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___boxed(lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_);
lean_dec(v_a_1591_);
lean_dec_ref(v_a_1590_);
lean_dec(v_a_1589_);
lean_dec_ref(v_a_1588_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(lean_object* v_e_1594_, lean_object* v___y_1595_){
_start:
{
uint8_t v___x_1597_; 
v___x_1597_ = l_Lean_Expr_hasMVar(v_e_1594_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_e_1594_);
return v___x_1598_;
}
else
{
lean_object* v___x_1599_; lean_object* v_mctx_1600_; lean_object* v___x_1601_; lean_object* v_fst_1602_; lean_object* v_snd_1603_; lean_object* v___x_1604_; lean_object* v_cache_1605_; lean_object* v_zetaDeltaFVarIds_1606_; lean_object* v_postponed_1607_; lean_object* v_diag_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1617_; 
v___x_1599_ = lean_st_ref_get(v___y_1595_);
v_mctx_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc_ref(v_mctx_1600_);
lean_dec(v___x_1599_);
v___x_1601_ = l_Lean_instantiateMVarsCore(v_mctx_1600_, v_e_1594_);
v_fst_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_fst_1602_);
v_snd_1603_ = lean_ctor_get(v___x_1601_, 1);
lean_inc(v_snd_1603_);
lean_dec_ref(v___x_1601_);
v___x_1604_ = lean_st_ref_take(v___y_1595_);
v_cache_1605_ = lean_ctor_get(v___x_1604_, 1);
v_zetaDeltaFVarIds_1606_ = lean_ctor_get(v___x_1604_, 2);
v_postponed_1607_ = lean_ctor_get(v___x_1604_, 3);
v_diag_1608_ = lean_ctor_get(v___x_1604_, 4);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1617_ == 0)
{
lean_object* v_unused_1618_; 
v_unused_1618_ = lean_ctor_get(v___x_1604_, 0);
lean_dec(v_unused_1618_);
v___x_1610_ = v___x_1604_;
v_isShared_1611_ = v_isSharedCheck_1617_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_diag_1608_);
lean_inc(v_postponed_1607_);
lean_inc(v_zetaDeltaFVarIds_1606_);
lean_inc(v_cache_1605_);
lean_dec(v___x_1604_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1617_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_snd_1603_);
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_snd_1603_);
lean_ctor_set(v_reuseFailAlloc_1616_, 1, v_cache_1605_);
lean_ctor_set(v_reuseFailAlloc_1616_, 2, v_zetaDeltaFVarIds_1606_);
lean_ctor_set(v_reuseFailAlloc_1616_, 3, v_postponed_1607_);
lean_ctor_set(v_reuseFailAlloc_1616_, 4, v_diag_1608_);
v___x_1613_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_st_ref_put(v___y_1595_, v___x_1613_);
v___x_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1615_, 0, v_fst_1602_);
return v___x_1615_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg___boxed(lean_object* v_e_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_e_1619_, v___y_1620_);
lean_dec(v___y_1620_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(lean_object* v_e_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_e_1623_, v___y_1628_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___boxed(lean_object* v_e_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(v_e_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(lean_object* v_cls_1643_, lean_object* v_msg_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_ref_1650_; lean_object* v___x_1651_; lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1697_; 
v_ref_1650_ = lean_ctor_get(v___y_1647_, 2);
v___x_1651_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msg_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1654_ = v___x_1651_;
v_isShared_1655_ = v_isSharedCheck_1697_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1651_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1697_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1656_; lean_object* v_traceState_1657_; lean_object* v_env_1658_; lean_object* v_nextMacroScope_1659_; lean_object* v_ngen_1660_; lean_object* v_auxDeclNGen_1661_; lean_object* v_cache_1662_; lean_object* v_recordedDeps_1663_; lean_object* v_messages_1664_; lean_object* v_infoState_1665_; lean_object* v_snapshotTasks_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1696_; 
v___x_1656_ = lean_st_ref_take(v___y_1648_);
v_traceState_1657_ = lean_ctor_get(v___x_1656_, 4);
v_env_1658_ = lean_ctor_get(v___x_1656_, 0);
v_nextMacroScope_1659_ = lean_ctor_get(v___x_1656_, 1);
v_ngen_1660_ = lean_ctor_get(v___x_1656_, 2);
v_auxDeclNGen_1661_ = lean_ctor_get(v___x_1656_, 3);
v_cache_1662_ = lean_ctor_get(v___x_1656_, 5);
v_recordedDeps_1663_ = lean_ctor_get(v___x_1656_, 6);
v_messages_1664_ = lean_ctor_get(v___x_1656_, 7);
v_infoState_1665_ = lean_ctor_get(v___x_1656_, 8);
v_snapshotTasks_1666_ = lean_ctor_get(v___x_1656_, 9);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1668_ = v___x_1656_;
v_isShared_1669_ = v_isSharedCheck_1696_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_snapshotTasks_1666_);
lean_inc(v_infoState_1665_);
lean_inc(v_messages_1664_);
lean_inc(v_recordedDeps_1663_);
lean_inc(v_cache_1662_);
lean_inc(v_traceState_1657_);
lean_inc(v_auxDeclNGen_1661_);
lean_inc(v_ngen_1660_);
lean_inc(v_nextMacroScope_1659_);
lean_inc(v_env_1658_);
lean_dec(v___x_1656_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1696_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
uint64_t v_tid_1670_; lean_object* v_traces_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1695_; 
v_tid_1670_ = lean_ctor_get_uint64(v_traceState_1657_, sizeof(void*)*1);
v_traces_1671_ = lean_ctor_get(v_traceState_1657_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_traceState_1657_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1673_ = v_traceState_1657_;
v_isShared_1674_ = v_isSharedCheck_1695_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_traces_1671_);
lean_dec(v_traceState_1657_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1695_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; double v___x_1677_; uint8_t v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1675_ = lean_box(0);
v___x_1676_ = lean_box(0);
v___x_1677_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0);
v___x_1678_ = 0;
v___x_1679_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1));
v___x_1680_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1680_, 0, v_cls_1643_);
lean_ctor_set(v___x_1680_, 1, v___x_1676_);
lean_ctor_set(v___x_1680_, 2, v___x_1679_);
lean_ctor_set_float(v___x_1680_, sizeof(void*)*3, v___x_1677_);
lean_ctor_set_float(v___x_1680_, sizeof(void*)*3 + 8, v___x_1677_);
lean_ctor_set_uint8(v___x_1680_, sizeof(void*)*3 + 16, v___x_1678_);
v___x_1681_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2));
v___x_1682_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1680_);
lean_ctor_set(v___x_1682_, 1, v_a_1652_);
lean_ctor_set(v___x_1682_, 2, v___x_1681_);
lean_inc(v_ref_1650_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_ref_1650_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = l_Lean_PersistentArray_push___redArg(v_traces_1671_, v___x_1683_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1684_);
v___x_1686_ = v___x_1673_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1684_);
lean_ctor_set_uint64(v_reuseFailAlloc_1694_, sizeof(void*)*1, v_tid_1670_);
v___x_1686_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1688_; 
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 4, v___x_1686_);
v___x_1688_ = v___x_1668_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_env_1658_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v_nextMacroScope_1659_);
lean_ctor_set(v_reuseFailAlloc_1693_, 2, v_ngen_1660_);
lean_ctor_set(v_reuseFailAlloc_1693_, 3, v_auxDeclNGen_1661_);
lean_ctor_set(v_reuseFailAlloc_1693_, 4, v___x_1686_);
lean_ctor_set(v_reuseFailAlloc_1693_, 5, v_cache_1662_);
lean_ctor_set(v_reuseFailAlloc_1693_, 6, v_recordedDeps_1663_);
lean_ctor_set(v_reuseFailAlloc_1693_, 7, v_messages_1664_);
lean_ctor_set(v_reuseFailAlloc_1693_, 8, v_infoState_1665_);
lean_ctor_set(v_reuseFailAlloc_1693_, 9, v_snapshotTasks_1666_);
v___x_1688_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
lean_object* v___x_1689_; lean_object* v___x_1691_; 
v___x_1689_ = lean_st_ref_put(v___y_1648_, v___x_1688_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 0, v___x_1675_);
v___x_1691_ = v___x_1654_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1675_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg___boxed(lean_object* v_cls_1698_, lean_object* v_msg_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(v_cls_1698_, v_msg_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v_res_1705_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = lean_box(0);
v___x_1713_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__3));
v___x_1714_ = l_Lean_mkConst(v___x_1713_, v___x_1712_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_numIndices_1715_, lean_object* v_a_1716_, lean_object* v_as_1717_, lean_object* v_i_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v_zero_1724_; uint8_t v_isZero_1725_; 
v_zero_1724_ = lean_unsigned_to_nat(0u);
v_isZero_1725_ = lean_nat_dec_eq(v_i_1718_, v_zero_1724_);
if (v_isZero_1725_ == 1)
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec(v_i_1718_);
lean_dec_ref(v_a_1716_);
v___x_1726_ = lean_box(0);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
return v___x_1727_;
}
else
{
lean_object* v_one_1728_; lean_object* v_n_1729_; lean_object* v___x_1730_; 
v_one_1728_ = lean_unsigned_to_nat(1u);
v_n_1729_ = lean_nat_sub(v_i_1718_, v_one_1728_);
lean_dec(v_i_1718_);
v___x_1730_ = lean_array_fget(v_as_1717_, v_n_1729_);
if (lean_obj_tag(v___x_1730_) == 0)
{
v_i_1718_ = v_n_1729_;
goto _start;
}
else
{
lean_object* v_val_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1796_; 
v_val_1732_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1734_ = v___x_1730_;
v_isShared_1735_ = v_isSharedCheck_1796_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_val_1732_);
lean_dec(v___x_1730_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1796_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = l_Lean_LocalDecl_index(v_val_1732_);
v___x_1737_ = lean_nat_dec_le(v_numIndices_1715_, v___x_1736_);
lean_dec(v___x_1736_);
if (v___x_1737_ == 0)
{
uint8_t v___x_1738_; 
v___x_1738_ = l_Lean_LocalDecl_isAuxDecl(v_val_1732_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = l_Lean_LocalDecl_type(v_val_1732_);
lean_inc_ref(v___x_1739_);
lean_inc_ref(v_a_1716_);
v___x_1740_ = l_Lean_Meta_isExprDefEq(v_a_1716_, v___x_1739_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1785_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1785_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1785_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
uint8_t v___x_1745_; 
v___x_1745_ = lean_unbox(v_a_1741_);
lean_dec(v_a_1741_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; uint8_t v___x_1747_; 
lean_del_object(v___x_1743_);
v___x_1746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1));
v___x_1747_ = l_Lean_Expr_isAppOfArity(v_a_1716_, v___x_1746_, v_one_1728_);
if (v___x_1747_ == 0)
{
lean_dec_ref(v___x_1739_);
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1718_ = v_n_1729_;
goto _start;
}
else
{
lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1749_ = l_Lean_Expr_appArg_x21(v_a_1716_);
v___x_1750_ = l_Lean_Expr_isAppOfArity(v___x_1749_, v___x_1746_, v_one_1728_);
if (v___x_1750_ == 0)
{
lean_dec_ref(v___x_1749_);
lean_dec_ref(v___x_1739_);
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1718_ = v_n_1729_;
goto _start;
}
else
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = l_Lean_Expr_appArg_x21(v___x_1749_);
lean_dec_ref(v___x_1749_);
lean_inc_ref(v___x_1752_);
v___x_1753_ = l_Lean_Meta_isExprDefEq(v___x_1752_, v___x_1739_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1769_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1756_ = v___x_1753_;
v_isShared_1757_ = v_isSharedCheck_1769_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1753_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1769_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_unbox(v_a_1754_);
lean_dec(v_a_1754_);
if (v___x_1758_ == 0)
{
lean_del_object(v___x_1756_);
lean_dec_ref(v___x_1752_);
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1718_ = v_n_1729_;
goto _start;
}
else
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
lean_dec(v_n_1729_);
lean_dec_ref(v_a_1716_);
v___x_1760_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__4, &l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__4);
v___x_1761_ = l_Lean_LocalDecl_toExpr(v_val_1732_);
v___x_1762_ = l_Lean_mkAppB(v___x_1760_, v___x_1752_, v___x_1761_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v___x_1762_);
v___x_1764_ = v___x_1734_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1766_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v___x_1764_);
v___x_1766_ = v___x_1756_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref(v___x_1752_);
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
lean_dec(v_n_1729_);
lean_dec_ref(v_a_1716_);
v_a_1770_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1753_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1753_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
}
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1780_; 
lean_dec_ref(v___x_1739_);
lean_dec(v_n_1729_);
lean_dec_ref(v_a_1716_);
v___x_1778_ = l_Lean_LocalDecl_toExpr(v_val_1732_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v___x_1778_);
v___x_1780_ = v___x_1734_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1778_);
v___x_1780_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
lean_object* v___x_1782_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1780_);
v___x_1782_ = v___x_1743_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
lean_dec_ref(v___x_1739_);
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
lean_dec(v_n_1729_);
lean_dec_ref(v_a_1716_);
v_a_1786_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1740_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1740_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1718_ = v_n_1729_;
goto _start;
}
}
else
{
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1718_ = v_n_1729_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_numIndices_1797_, lean_object* v_a_1798_, lean_object* v_as_1799_, lean_object* v_i_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_1797_, v_a_1798_, v_as_1799_, v_i_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec_ref(v_as_1799_);
lean_dec(v_numIndices_1797_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(lean_object* v_numIndices_1807_, lean_object* v_a_1808_, lean_object* v_as_1809_, lean_object* v_i_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_zero_1819_; uint8_t v_isZero_1820_; 
v_zero_1819_ = lean_unsigned_to_nat(0u);
v_isZero_1820_ = lean_nat_dec_eq(v_i_1810_, v_zero_1819_);
if (v_isZero_1820_ == 1)
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_dec(v_i_1810_);
lean_dec_ref(v_a_1808_);
v___x_1821_ = lean_box(0);
v___x_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
else
{
lean_object* v_one_1823_; lean_object* v_n_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_one_1823_ = lean_unsigned_to_nat(1u);
v_n_1824_ = lean_nat_sub(v_i_1810_, v_one_1823_);
lean_dec(v_i_1810_);
v___x_1825_ = lean_array_fget_borrowed(v_as_1809_, v_n_1824_);
lean_inc_ref(v_a_1808_);
v___x_1826_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(v_numIndices_1807_, v_a_1808_, v___x_1825_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
if (lean_obj_tag(v_a_1827_) == 0)
{
lean_dec_ref_known(v___x_1826_, 1);
v_i_1810_ = v_n_1824_;
goto _start;
}
else
{
lean_dec(v_n_1824_);
lean_dec_ref(v_a_1808_);
return v___x_1826_;
}
}
else
{
lean_dec(v_n_1824_);
lean_dec_ref(v_a_1808_);
return v___x_1826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(lean_object* v_numIndices_1829_, lean_object* v_a_1830_, lean_object* v_x_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
if (lean_obj_tag(v_x_1831_) == 0)
{
lean_object* v_cs_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v_cs_1840_ = lean_ctor_get(v_x_1831_, 0);
v___x_1841_ = lean_array_get_size(v_cs_1840_);
v___x_1842_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_numIndices_1829_, v_a_1830_, v_cs_1840_, v___x_1841_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
return v___x_1842_;
}
else
{
lean_object* v_vs_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v_vs_1843_ = lean_ctor_get(v_x_1831_, 0);
v___x_1844_ = lean_array_get_size(v_vs_1843_);
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_1829_, v_a_1830_, v_vs_1843_, v___x_1844_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
return v___x_1845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3___boxed(lean_object* v_numIndices_1846_, lean_object* v_a_1847_, lean_object* v_x_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(v_numIndices_1846_, v_a_1847_, v_x_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec(v___y_1849_);
lean_dec_ref(v_x_1848_);
lean_dec(v_numIndices_1846_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_numIndices_1858_, lean_object* v_a_1859_, lean_object* v_as_1860_, lean_object* v_i_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v_res_1870_; 
v_res_1870_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_numIndices_1858_, v_a_1859_, v_as_1860_, v_i_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v_as_1860_);
lean_dec(v_numIndices_1858_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(lean_object* v_numIndices_1871_, lean_object* v_a_1872_, lean_object* v_t_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_root_1882_; lean_object* v_tail_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v_root_1882_ = lean_ctor_get(v_t_1873_, 0);
v_tail_1883_ = lean_ctor_get(v_t_1873_, 1);
v___x_1884_ = lean_array_get_size(v_tail_1883_);
lean_inc_ref(v_a_1872_);
v___x_1885_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_1871_, v_a_1872_, v_tail_1883_, v___x_1884_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
if (lean_obj_tag(v_a_1886_) == 0)
{
lean_object* v___x_1887_; 
lean_dec_ref_known(v___x_1885_, 1);
v___x_1887_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(v_numIndices_1871_, v_a_1872_, v_root_1882_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
return v___x_1887_;
}
else
{
lean_dec_ref(v_a_1872_);
return v___x_1885_;
}
}
else
{
lean_dec_ref(v_a_1872_);
return v___x_1885_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1___boxed(lean_object* v_numIndices_1888_, lean_object* v_a_1889_, lean_object* v_t_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(v_numIndices_1888_, v_a_1889_, v_t_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v_t_1890_);
lean_dec(v_numIndices_1888_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(lean_object* v_numIndices_1900_, lean_object* v_a_1901_, lean_object* v_lctx_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_decls_1911_; lean_object* v___x_1912_; 
v_decls_1911_ = lean_ctor_get(v_lctx_1902_, 1);
v___x_1912_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(v_numIndices_1900_, v_a_1901_, v_decls_1911_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___boxed(lean_object* v_numIndices_1913_, lean_object* v_a_1914_, lean_object* v_lctx_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(v_numIndices_1913_, v_a_1914_, v_lctx_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec(v___y_1916_);
lean_dec_ref(v_lctx_1915_);
lean_dec(v_numIndices_1913_);
return v_res_1924_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1929_ = lean_box(0);
v___x_1930_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1));
v___x_1931_ = l_Lean_mkConst(v___x_1930_, v___x_1929_);
return v___x_1931_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5(void){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1935_ = lean_box(0);
v___x_1936_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4));
v___x_1937_ = l_Lean_mkConst(v___x_1936_, v___x_1935_);
return v___x_1937_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9(void){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1944_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8));
v___x_1945_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_1946_ = l_Lean_Name_append(v___x_1945_, v___x_1944_);
return v___x_1946_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11(void){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10));
v___x_1949_ = l_Lean_stringToMessageData(v___x_1948_);
return v___x_1949_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12));
v___x_1952_ = l_Lean_stringToMessageData(v___x_1951_);
return v___x_1952_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16(void){
_start:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15));
v___x_1957_ = l_Lean_MessageData_ofFormat(v___x_1956_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(lean_object* v_numIndices_1958_, uint8_t v_useDecide_1959_, lean_object* v_prop_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v___x_1969_; lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_2104_; 
v___x_1969_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_prop_1960_, v_a_1965_);
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_1972_ = v___x_1969_;
v_isShared_1973_ = v_isSharedCheck_2104_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1969_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_2104_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v_toCold_2071_; lean_object* v_options_2072_; uint8_t v_hasTrace_2073_; 
v_toCold_2071_ = lean_ctor_get(v_a_1966_, 0);
v_options_2072_ = lean_ctor_get(v_toCold_2071_, 2);
v_hasTrace_2073_ = lean_ctor_get_uint8(v_options_2072_, sizeof(void*)*1);
if (v_hasTrace_2073_ == 0)
{
v___y_2031_ = v_a_1961_;
v___y_2032_ = v_a_1962_;
v___y_2033_ = v_a_1963_;
v___y_2034_ = v_a_1964_;
v___y_2035_ = v_a_1965_;
v___y_2036_ = v_a_1966_;
v___y_2037_ = v_a_1967_;
goto v___jp_2030_;
}
else
{
lean_object* v_inheritedTraceOptions_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; 
v_inheritedTraceOptions_2074_ = lean_ctor_get(v_toCold_2071_, 11);
v___x_2075_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8));
v___x_2076_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9);
v___x_2077_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2074_, v_options_2072_, v___x_2076_);
if (v___x_2077_ == 0)
{
v___y_2031_ = v_a_1961_;
v___y_2032_ = v_a_1962_;
v___y_2033_ = v_a_1963_;
v___y_2034_ = v_a_1964_;
v___y_2035_ = v_a_1965_;
v___y_2036_ = v_a_1966_;
v___y_2037_ = v_a_1967_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___y_2084_; lean_object* v___x_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; 
v___x_2078_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11);
lean_inc(v_a_1970_);
v___x_2079_ = l_Lean_MessageData_ofExpr(v_a_1970_);
v___x_2080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2078_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13);
v___x_2082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2080_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1));
v___x_2098_ = lean_unsigned_to_nat(1u);
v___x_2099_ = l_Lean_Expr_isAppOfArity(v_a_1970_, v___x_2097_, v___x_2098_);
if (v___x_2099_ == 0)
{
goto v___jp_2095_;
}
else
{
lean_object* v___x_2100_; uint8_t v___x_2101_; 
v___x_2100_ = l_Lean_Expr_appArg_x21(v_a_1970_);
v___x_2101_ = l_Lean_Expr_isAppOfArity(v___x_2100_, v___x_2097_, v___x_2098_);
if (v___x_2101_ == 0)
{
lean_dec_ref(v___x_2100_);
goto v___jp_2095_;
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2102_ = l_Lean_Expr_appArg_x21(v___x_2100_);
lean_dec_ref(v___x_2100_);
v___x_2103_ = l_Lean_MessageData_ofExpr(v___x_2102_);
v___y_2084_ = v___x_2103_;
goto v___jp_2083_;
}
}
v___jp_2083_:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2082_);
lean_ctor_set(v___x_2085_, 1, v___y_2084_);
v___x_2086_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(v___x_2075_, v___x_2085_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_dec_ref_known(v___x_2086_, 1);
v___y_2031_ = v_a_1961_;
v___y_2032_ = v_a_1962_;
v___y_2033_ = v_a_1963_;
v___y_2034_ = v_a_1964_;
v___y_2035_ = v_a_1965_;
v___y_2036_ = v_a_1966_;
v___y_2037_ = v_a_1967_;
goto v___jp_2030_;
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_del_object(v___x_1972_);
lean_dec(v_a_1970_);
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
v___jp_2095_:
{
lean_object* v___x_2096_; 
v___x_2096_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16);
v___y_2084_ = v___x_2096_;
goto v___jp_2083_;
}
}
}
v___jp_1974_:
{
lean_object* v_lctx_1982_; lean_object* v___x_1983_; 
v_lctx_1982_ = lean_ctor_get(v___y_1978_, 2);
v___x_1983_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(v_numIndices_1958_, v_a_1970_, v_lctx_1982_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
return v___x_1983_;
}
v___jp_1984_:
{
if (lean_obj_tag(v___y_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1996_; uint8_t v___x_1997_; 
v_a_1995_ = lean_ctor_get(v___y_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___y_1994_, 1);
v___x_1996_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1));
v___x_1997_ = l_Lean_Expr_isConstOf(v_a_1995_, v___x_1996_);
lean_dec(v_a_1995_);
if (v___x_1997_ == 0)
{
lean_dec_ref(v___y_1992_);
lean_dec_ref(v___y_1990_);
lean_del_object(v___x_1972_);
v___y_1975_ = v___y_1985_;
v___y_1976_ = v___y_1988_;
v___y_1977_ = v___y_1991_;
v___y_1978_ = v___y_1987_;
v___y_1979_ = v___y_1986_;
v___y_1980_ = v___y_1989_;
v___y_1981_ = v___y_1993_;
goto v___jp_1974_;
}
else
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
lean_dec(v_a_1970_);
v___x_1998_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2);
v___x_1999_ = l_Lean_Meta_mkEqRefl(v___x_1998_, v___y_1987_, v___y_1986_, v___y_1989_, v___y_1993_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2013_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2002_ = v___x_1999_;
v_isShared_2003_ = v_isSharedCheck_2013_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1999_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2013_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2004_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5);
v___x_2005_ = l_Lean_Expr_appArg_x21(v___y_1990_);
lean_dec_ref(v___y_1990_);
v___x_2006_ = l_Lean_mkApp3(v___x_2004_, v___y_1992_, v___x_2005_, v_a_2000_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set_tag(v___x_1972_, 1);
lean_ctor_set(v___x_1972_, 0, v___x_2006_);
v___x_2008_ = v___x_1972_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 0, v___x_2008_);
v___x_2010_ = v___x_2002_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_dec_ref(v___y_1992_);
lean_dec_ref(v___y_1990_);
lean_del_object(v___x_1972_);
v_a_2014_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_1999_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_1999_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
else
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2029_; 
lean_dec_ref(v___y_1992_);
lean_dec_ref(v___y_1990_);
lean_del_object(v___x_1972_);
lean_dec(v_a_1970_);
v_a_2022_ = lean_ctor_get(v___y_1994_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___y_1994_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2024_ = v___y_1994_;
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___y_1994_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
v___jp_2030_:
{
if (v_useDecide_1959_ == 0)
{
lean_del_object(v___x_1972_);
v___y_1975_ = v___y_2031_;
v___y_1976_ = v___y_2032_;
v___y_1977_ = v___y_2033_;
v___y_1978_ = v___y_2034_;
v___y_1979_ = v___y_2035_;
v___y_1980_ = v___y_2036_;
v___y_1981_ = v___y_2037_;
goto v___jp_1974_;
}
else
{
lean_object* v___x_2038_; lean_object* v_a_2039_; uint8_t v___x_2040_; 
lean_inc(v_a_1970_);
v___x_2038_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_a_1970_, v___y_2035_);
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref(v___x_2038_);
v___x_2040_ = l_Lean_Expr_hasFVar(v_a_2039_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2041_; 
v___x_2041_ = l_Lean_Expr_hasMVar(v_a_2039_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; 
lean_inc(v_a_2039_);
v___x_2042_ = l_Lean_Meta_mkDecide(v_a_2039_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2044_; uint8_t v_transparency_2045_; uint8_t v___x_2046_; uint8_t v___x_2047_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2043_);
lean_dec_ref_known(v___x_2042_, 1);
v___x_2044_ = l_Lean_Meta_Context_config(v___y_2034_);
v_transparency_2045_ = lean_ctor_get_uint8(v___x_2044_, 9);
lean_dec_ref(v___x_2044_);
v___x_2046_ = 1;
v___x_2047_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2045_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v_keyedConfig_2048_; uint8_t v_trackZetaDelta_2049_; lean_object* v_zetaDeltaSet_2050_; lean_object* v_lctx_2051_; lean_object* v_localInstances_2052_; lean_object* v_defEqCtx_x3f_2053_; lean_object* v_synthPendingDepth_2054_; lean_object* v_customCanUnfoldPredicate_x3f_2055_; uint8_t v_univApprox_2056_; uint8_t v_inTypeClassResolution_2057_; uint8_t v_cacheInferType_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v_keyedConfig_2048_ = lean_ctor_get(v___y_2034_, 0);
v_trackZetaDelta_2049_ = lean_ctor_get_uint8(v___y_2034_, sizeof(void*)*7);
v_zetaDeltaSet_2050_ = lean_ctor_get(v___y_2034_, 1);
v_lctx_2051_ = lean_ctor_get(v___y_2034_, 2);
v_localInstances_2052_ = lean_ctor_get(v___y_2034_, 3);
v_defEqCtx_x3f_2053_ = lean_ctor_get(v___y_2034_, 4);
v_synthPendingDepth_2054_ = lean_ctor_get(v___y_2034_, 5);
v_customCanUnfoldPredicate_x3f_2055_ = lean_ctor_get(v___y_2034_, 6);
v_univApprox_2056_ = lean_ctor_get_uint8(v___y_2034_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2057_ = lean_ctor_get_uint8(v___y_2034_, sizeof(void*)*7 + 2);
v_cacheInferType_2058_ = lean_ctor_get_uint8(v___y_2034_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2048_);
v___x_2059_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2046_, v_keyedConfig_2048_);
lean_inc(v_customCanUnfoldPredicate_x3f_2055_);
lean_inc(v_synthPendingDepth_2054_);
lean_inc(v_defEqCtx_x3f_2053_);
lean_inc_ref(v_localInstances_2052_);
lean_inc_ref(v_lctx_2051_);
lean_inc(v_zetaDeltaSet_2050_);
v___x_2060_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_zetaDeltaSet_2050_);
lean_ctor_set(v___x_2060_, 2, v_lctx_2051_);
lean_ctor_set(v___x_2060_, 3, v_localInstances_2052_);
lean_ctor_set(v___x_2060_, 4, v_defEqCtx_x3f_2053_);
lean_ctor_set(v___x_2060_, 5, v_synthPendingDepth_2054_);
lean_ctor_set(v___x_2060_, 6, v_customCanUnfoldPredicate_x3f_2055_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7, v_trackZetaDelta_2049_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7 + 1, v_univApprox_2056_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2057_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7 + 3, v_cacheInferType_2058_);
lean_inc(v___y_2037_);
lean_inc_ref(v___y_2036_);
lean_inc(v___y_2035_);
lean_inc(v_a_2043_);
v___x_2061_ = lean_whnf(v_a_2043_, v___x_2060_, v___y_2035_, v___y_2036_, v___y_2037_);
v___y_1985_ = v___y_2031_;
v___y_1986_ = v___y_2035_;
v___y_1987_ = v___y_2034_;
v___y_1988_ = v___y_2032_;
v___y_1989_ = v___y_2036_;
v___y_1990_ = v_a_2043_;
v___y_1991_ = v___y_2033_;
v___y_1992_ = v_a_2039_;
v___y_1993_ = v___y_2037_;
v___y_1994_ = v___x_2061_;
goto v___jp_1984_;
}
else
{
lean_object* v___x_2062_; 
lean_inc(v___y_2037_);
lean_inc_ref(v___y_2036_);
lean_inc(v___y_2035_);
lean_inc_ref(v___y_2034_);
lean_inc(v_a_2043_);
v___x_2062_ = lean_whnf(v_a_2043_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
v___y_1985_ = v___y_2031_;
v___y_1986_ = v___y_2035_;
v___y_1987_ = v___y_2034_;
v___y_1988_ = v___y_2032_;
v___y_1989_ = v___y_2036_;
v___y_1990_ = v_a_2043_;
v___y_1991_ = v___y_2033_;
v___y_1992_ = v_a_2039_;
v___y_1993_ = v___y_2037_;
v___y_1994_ = v___x_2062_;
goto v___jp_1984_;
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec(v_a_2039_);
lean_del_object(v___x_1972_);
lean_dec(v_a_1970_);
v_a_2063_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2042_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2042_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_dec(v_a_2039_);
lean_del_object(v___x_1972_);
v___y_1975_ = v___y_2031_;
v___y_1976_ = v___y_2032_;
v___y_1977_ = v___y_2033_;
v___y_1978_ = v___y_2034_;
v___y_1979_ = v___y_2035_;
v___y_1980_ = v___y_2036_;
v___y_1981_ = v___y_2037_;
goto v___jp_1974_;
}
}
else
{
lean_dec(v_a_2039_);
lean_del_object(v___x_1972_);
v___y_1975_ = v___y_2031_;
v___y_1976_ = v___y_2032_;
v___y_1977_ = v___y_2033_;
v___y_1978_ = v___y_2034_;
v___y_1979_ = v___y_2035_;
v___y_1980_ = v___y_2036_;
v___y_1981_ = v___y_2037_;
goto v___jp_1974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed(lean_object* v_numIndices_2105_, lean_object* v_useDecide_2106_, lean_object* v_prop_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
uint8_t v_useDecide_boxed_2116_; lean_object* v_res_2117_; 
v_useDecide_boxed_2116_ = lean_unbox(v_useDecide_2106_);
v_res_2117_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2105_, v_useDecide_boxed_2116_, v_prop_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
lean_dec(v_a_2114_);
lean_dec_ref(v_a_2113_);
lean_dec(v_a_2112_);
lean_dec_ref(v_a_2111_);
lean_dec(v_a_2110_);
lean_dec_ref(v_a_2109_);
lean_dec(v_a_2108_);
lean_dec(v_numIndices_2105_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2(lean_object* v_cls_2118_, lean_object* v_msg_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v___x_2128_; 
v___x_2128_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(v_cls_2118_, v_msg_2119_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___boxed(lean_object* v_cls_2129_, lean_object* v_msg_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2(v_cls_2129_, v_msg_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2(lean_object* v_numIndices_2140_, lean_object* v_a_2141_, lean_object* v_as_2142_, lean_object* v_i_2143_, lean_object* v_a_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_2140_, v_a_2141_, v_as_2142_, v_i_2143_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_numIndices_2154_, lean_object* v_a_2155_, lean_object* v_as_2156_, lean_object* v_i_2157_, lean_object* v_a_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2(v_numIndices_2154_, v_a_2155_, v_as_2156_, v_i_2157_, v_a_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
lean_dec(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v___y_2159_);
lean_dec_ref(v_as_2156_);
lean_dec(v_numIndices_2154_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5(lean_object* v_numIndices_2168_, lean_object* v_a_2169_, lean_object* v_as_2170_, lean_object* v_i_2171_, lean_object* v_a_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v___x_2181_; 
v___x_2181_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_numIndices_2168_, v_a_2169_, v_as_2170_, v_i_2171_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_numIndices_2182_, lean_object* v_a_2183_, lean_object* v_as_2184_, lean_object* v_i_2185_, lean_object* v_a_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5(v_numIndices_2182_, v_a_2183_, v_as_2184_, v_i_2185_, v_a_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v_as_2184_);
lean_dec(v_numIndices_2182_);
return v_res_2195_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = lean_box(0);
v___x_2201_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1));
v___x_2202_ = l_Lean_mkConst(v___x_2201_, v___x_2200_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(lean_object* v_numIndices_2206_, uint8_t v_useDecideBool_2207_, lean_object* v_e_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_){
_start:
{
lean_object* v___x_2220_; 
lean_inc_ref(v_e_2208_);
v___x_2220_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2208_, v_a_2213_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_a_2221_);
lean_dec_ref_known(v___x_2220_, 1);
v___x_2222_ = l_Lean_Expr_cleanupAnnotations(v_a_2221_);
lean_dec(v_a_2221_);
v___x_2223_ = l_Lean_Expr_isApp(v___x_2222_);
if (v___x_2223_ == 0)
{
lean_dec_ref(v___x_2222_);
lean_dec_ref(v_e_2208_);
goto v___jp_2217_;
}
else
{
lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2224_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2222_);
v___x_2225_ = l_Lean_Expr_isApp(v___x_2224_);
if (v___x_2225_ == 0)
{
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2222_);
lean_dec_ref(v_e_2208_);
goto v___jp_2217_;
}
else
{
lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2226_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2224_);
v___x_2227_ = l_Lean_Expr_isApp(v___x_2226_);
if (v___x_2227_ == 0)
{
lean_dec_ref(v___x_2226_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2222_);
lean_dec_ref(v_e_2208_);
goto v___jp_2217_;
}
else
{
lean_object* v___x_2228_; uint8_t v___x_2229_; 
v___x_2228_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2226_);
v___x_2229_ = l_Lean_Expr_isApp(v___x_2228_);
if (v___x_2229_ == 0)
{
lean_dec_ref(v___x_2228_);
lean_dec_ref(v___x_2226_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2222_);
lean_dec_ref(v_e_2208_);
goto v___jp_2217_;
}
else
{
lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2230_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2228_);
v___x_2231_ = l_Lean_Expr_isApp(v___x_2230_);
if (v___x_2231_ == 0)
{
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2228_);
lean_dec_ref(v___x_2226_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2222_);
lean_dec_ref(v_e_2208_);
goto v___jp_2217_;
}
else
{
lean_object* v___x_2232_; lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2232_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2230_);
v___x_2233_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5));
v___x_2234_ = l_Lean_Expr_isConstOf(v___x_2232_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_dec_ref(v___x_2232_);
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2228_);
lean_dec_ref(v___x_2226_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v___x_2222_);
lean_dec_ref(v_e_2208_);
goto v___jp_2217_;
}
else
{
lean_object* v_arg_2235_; lean_object* v_arg_2236_; lean_object* v_arg_2237_; lean_object* v_arg_2238_; lean_object* v_arg_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v_arg_2235_ = lean_ctor_get(v___x_2222_, 1);
lean_inc_ref(v_arg_2235_);
lean_dec_ref(v___x_2222_);
v_arg_2236_ = lean_ctor_get(v___x_2224_, 1);
lean_inc_ref(v_arg_2236_);
lean_dec_ref(v___x_2224_);
v_arg_2237_ = lean_ctor_get(v___x_2226_, 1);
lean_inc_ref(v_arg_2237_);
lean_dec_ref(v___x_2226_);
v_arg_2238_ = lean_ctor_get(v___x_2228_, 1);
lean_inc_ref_n(v_arg_2238_, 2);
lean_dec_ref(v___x_2228_);
v_arg_2239_ = lean_ctor_get(v___x_2230_, 1);
lean_inc_ref(v_arg_2239_);
lean_dec_ref(v___x_2230_);
v___x_2240_ = l_Lean_Expr_constLevels_x21(v___x_2232_);
v___x_2241_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2206_, v_useDecideBool_2207_, v_arg_2238_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2384_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2244_ = v___x_2241_;
v_isShared_2245_ = v_isSharedCheck_2384_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2384_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
if (lean_obj_tag(v_a_2242_) == 1)
{
lean_object* v_val_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2261_; 
lean_dec_ref(v___x_2232_);
lean_dec_ref(v_e_2208_);
v_val_2246_ = lean_ctor_get(v_a_2242_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_a_2242_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2248_ = v_a_2242_;
v_isShared_2249_ = v_isSharedCheck_2261_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_val_2246_);
lean_dec(v_a_2242_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2261_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2254_; 
v___x_2250_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__4));
v___x_2251_ = l_Lean_mkConst(v___x_2250_, v___x_2240_);
lean_inc_ref(v_arg_2236_);
v___x_2252_ = l_Lean_mkApp6(v___x_2251_, v_arg_2238_, v_arg_2237_, v_val_2246_, v_arg_2239_, v_arg_2236_, v_arg_2235_);
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 0, v___x_2252_);
v___x_2254_ = v___x_2248_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2252_);
v___x_2254_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2258_; 
v___x_2255_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2255_, 0, v_arg_2236_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
lean_ctor_set_uint8(v___x_2255_, sizeof(void*)*2, v___x_2234_);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 0, v___x_2256_);
v___x_2258_ = v___x_2244_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2256_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2263_; 
lean_del_object(v___x_2244_);
lean_dec(v_a_2242_);
lean_inc_ref(v_arg_2238_);
v___x_2262_ = l_Lean_mkNot(v_arg_2238_);
v___x_2263_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2206_, v_useDecideBool_2207_, v___x_2262_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2375_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2375_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2375_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
if (lean_obj_tag(v_a_2264_) == 1)
{
lean_object* v_val_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2283_; 
lean_dec_ref(v___x_2232_);
lean_dec_ref(v_e_2208_);
v_val_2268_ = lean_ctor_get(v_a_2264_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v_a_2264_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2270_ = v_a_2264_;
v_isShared_2271_ = v_isSharedCheck_2283_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_val_2268_);
lean_dec(v_a_2264_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2283_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2276_; 
v___x_2272_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__6));
v___x_2273_ = l_Lean_mkConst(v___x_2272_, v___x_2240_);
lean_inc_ref(v_arg_2235_);
v___x_2274_ = l_Lean_mkApp6(v___x_2273_, v_arg_2238_, v_arg_2237_, v_val_2268_, v_arg_2239_, v_arg_2236_, v_arg_2235_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v___x_2274_);
v___x_2276_ = v___x_2270_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v___x_2274_);
v___x_2276_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2280_; 
v___x_2277_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2277_, 0, v_arg_2235_);
lean_ctor_set(v___x_2277_, 1, v___x_2276_);
lean_ctor_set_uint8(v___x_2277_, sizeof(void*)*2, v___x_2234_);
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2278_);
v___x_2280_ = v___x_2266_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2278_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
else
{
lean_object* v___x_2284_; 
lean_del_object(v___x_2266_);
lean_dec(v_a_2264_);
lean_inc(v_a_2215_);
lean_inc_ref(v_a_2214_);
lean_inc(v_a_2213_);
lean_inc_ref(v_a_2212_);
lean_inc(v_a_2211_);
lean_inc_ref(v_a_2210_);
lean_inc(v_a_2209_);
lean_inc_ref(v_arg_2238_);
v___x_2284_ = lean_simp(v_arg_2238_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2366_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2366_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2366_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v_expr_2289_; uint8_t v___x_2290_; 
v_expr_2289_ = lean_ctor_get(v_a_2285_, 0);
v___x_2290_ = lean_expr_eqv(v_expr_2289_, v_arg_2238_);
if (v___x_2290_ == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_del_object(v___x_2287_);
v___x_2291_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2);
lean_inc_ref(v_expr_2289_);
v___x_2292_ = l_Lean_Expr_app___override(v___x_2291_, v_expr_2289_);
v___x_2293_ = lean_box(0);
v___x_2294_ = l_Lean_Meta_trySynthInstance(v___x_2292_, v___x_2293_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2343_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2297_ = v___x_2294_;
v_isShared_2298_ = v_isSharedCheck_2343_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2343_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
if (lean_obj_tag(v_a_2295_) == 1)
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2329_; 
lean_inc_ref(v_expr_2289_);
lean_del_object(v___x_2297_);
lean_dec_ref(v_e_2208_);
v_a_2299_ = lean_ctor_get(v_a_2295_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v_a_2295_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2301_ = v_a_2295_;
v_isShared_2302_ = v_isSharedCheck_2329_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v_a_2295_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2329_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2303_; 
v___x_2303_ = l_Lean_Meta_Simp_Result_getProof(v_a_2285_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2320_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2320_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2320_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2313_; 
v___x_2308_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__4));
v___x_2309_ = l_Lean_mkConst(v___x_2308_, v___x_2240_);
lean_inc_ref(v_arg_2235_);
lean_inc_ref(v_arg_2236_);
lean_inc(v_a_2299_);
lean_inc_ref(v_expr_2289_);
lean_inc_ref(v_arg_2239_);
v___x_2310_ = l_Lean_mkApp8(v___x_2309_, v_arg_2239_, v_arg_2238_, v_expr_2289_, v_arg_2237_, v_a_2299_, v_arg_2236_, v_arg_2235_, v_a_2304_);
v___x_2311_ = l_Lean_mkApp5(v___x_2232_, v_arg_2239_, v_expr_2289_, v_a_2299_, v_arg_2236_, v_arg_2235_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set(v___x_2301_, 0, v___x_2310_);
v___x_2313_ = v___x_2301_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v___x_2310_);
v___x_2313_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2317_; 
v___x_2314_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2314_, 0, v___x_2311_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
lean_ctor_set_uint8(v___x_2314_, sizeof(void*)*2, v___x_2234_);
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v___x_2315_);
v___x_2317_ = v___x_2306_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_del_object(v___x_2301_);
lean_dec(v_a_2299_);
lean_dec_ref(v_expr_2289_);
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
v_a_2321_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2303_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2303_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
}
else
{
lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2340_; 
lean_dec(v_a_2295_);
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_a_2285_);
if (v_isSharedCheck_2340_ == 0)
{
lean_object* v_unused_2341_; lean_object* v_unused_2342_; 
v_unused_2341_ = lean_ctor_get(v_a_2285_, 1);
lean_dec(v_unused_2341_);
v_unused_2342_ = lean_ctor_get(v_a_2285_, 0);
lean_dec(v_unused_2342_);
v___x_2331_ = v_a_2285_;
v_isShared_2332_ = v_isSharedCheck_2340_;
goto v_resetjp_2330_;
}
else
{
lean_dec(v_a_2285_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2340_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 1, v___x_2293_);
lean_ctor_set(v___x_2331_, 0, v_e_2208_);
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_e_2208_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v___x_2293_);
v___x_2334_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2335_; lean_object* v___x_2337_; 
lean_ctor_set_uint8(v___x_2334_, sizeof(void*)*2, v___x_2234_);
v___x_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v___x_2335_);
v___x_2337_ = v___x_2297_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2335_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec(v_a_2285_);
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
lean_dec_ref(v_e_2208_);
v_a_2344_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2294_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2294_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2363_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
v_isSharedCheck_2363_ = !lean_is_exclusive(v_a_2285_);
if (v_isSharedCheck_2363_ == 0)
{
lean_object* v_unused_2364_; lean_object* v_unused_2365_; 
v_unused_2364_ = lean_ctor_get(v_a_2285_, 1);
lean_dec(v_unused_2364_);
v_unused_2365_ = lean_ctor_get(v_a_2285_, 0);
lean_dec(v_unused_2365_);
v___x_2353_ = v_a_2285_;
v_isShared_2354_ = v_isSharedCheck_2363_;
goto v_resetjp_2352_;
}
else
{
lean_dec(v_a_2285_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2363_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2355_ = lean_box(0);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 1, v___x_2355_);
lean_ctor_set(v___x_2353_, 0, v_e_2208_);
v___x_2357_ = v___x_2353_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_e_2208_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2358_; lean_object* v___x_2360_; 
lean_ctor_set_uint8(v___x_2357_, sizeof(void*)*2, v___x_2234_);
v___x_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2358_);
v___x_2360_ = v___x_2287_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
}
}
else
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2374_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
lean_dec_ref(v_e_2208_);
v_a_2367_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2369_ = v___x_2284_;
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2284_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2367_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
lean_dec_ref(v_e_2208_);
v_a_2376_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2263_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2263_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_arg_2239_);
lean_dec_ref(v_arg_2238_);
lean_dec_ref(v_arg_2237_);
lean_dec_ref(v_arg_2236_);
lean_dec_ref(v_arg_2235_);
lean_dec_ref(v___x_2232_);
lean_dec_ref(v_e_2208_);
v_a_2385_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2241_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2241_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
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
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec_ref(v_e_2208_);
v_a_2393_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2220_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2220_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
v___jp_2217_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
return v___x_2219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed(lean_object* v_numIndices_2401_, lean_object* v_useDecideBool_2402_, lean_object* v_e_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
uint8_t v_useDecideBool_boxed_2412_; lean_object* v_res_2413_; 
v_useDecideBool_boxed_2412_ = lean_unbox(v_useDecideBool_2402_);
v_res_2413_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(v_numIndices_2401_, v_useDecideBool_boxed_2412_, v_e_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_);
lean_dec(v_a_2410_);
lean_dec_ref(v_a_2409_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
lean_dec(v_a_2406_);
lean_dec_ref(v_a_2405_);
lean_dec(v_a_2404_);
lean_dec(v_numIndices_2401_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(lean_object* v_e_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_){
_start:
{
if (lean_obj_tag(v_e_2417_) == 6)
{
lean_object* v_binderName_2421_; lean_object* v___x_2422_; 
v_binderName_2421_ = lean_ctor_get(v_e_2417_, 0);
lean_inc(v_binderName_2421_);
v___x_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2422_, 0, v_binderName_2421_);
return v___x_2422_;
}
else
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1));
v___x_2424_ = l_Lean_Core_mkFreshUserName(v___x_2423_, v_a_2418_, v_a_2419_);
return v___x_2424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___boxed(lean_object* v_e_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_e_2425_, v_a_2426_, v_a_2427_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec_ref(v_e_2425_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(lean_object* v_e_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_e_2430_, v_a_2433_, v_a_2434_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___boxed(lean_object* v_e_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(v_e_2437_, v_a_2438_, v_a_2439_, v_a_2440_, v_a_2441_);
lean_dec(v_a_2441_);
lean_dec_ref(v_a_2440_);
lean_dec(v_a_2439_);
lean_dec_ref(v_a_2438_);
lean_dec_ref(v_e_2437_);
return v_res_2443_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3(void){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = lean_box(0);
v___x_2450_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2));
v___x_2451_ = l_Lean_mkConst(v___x_2450_, v___x_2449_);
return v___x_2451_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = lean_unsigned_to_nat(0u);
v___x_2453_ = l_Lean_mkBVar(v___x_2452_);
return v___x_2453_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2458_ = lean_box(0);
v___x_2459_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6));
v___x_2460_ = l_Lean_mkConst(v___x_2459_, v___x_2458_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(lean_object* v_numIndices_2464_, uint8_t v_useDecideBool_2465_, lean_object* v_e_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v___x_2478_; 
lean_inc_ref(v_e_2466_);
v___x_2478_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2466_, v_a_2471_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_object* v_a_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; 
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_a_2479_);
lean_dec_ref_known(v___x_2478_, 1);
v___x_2480_ = l_Lean_Expr_cleanupAnnotations(v_a_2479_);
lean_dec(v_a_2479_);
v___x_2481_ = l_Lean_Expr_isApp(v___x_2480_);
if (v___x_2481_ == 0)
{
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_e_2466_);
goto v___jp_2475_;
}
else
{
lean_object* v___x_2482_; uint8_t v___x_2483_; 
v___x_2482_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2480_);
v___x_2483_ = l_Lean_Expr_isApp(v___x_2482_);
if (v___x_2483_ == 0)
{
lean_dec_ref(v___x_2482_);
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_e_2466_);
goto v___jp_2475_;
}
else
{
lean_object* v___x_2484_; uint8_t v___x_2485_; 
v___x_2484_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2482_);
v___x_2485_ = l_Lean_Expr_isApp(v___x_2484_);
if (v___x_2485_ == 0)
{
lean_dec_ref(v___x_2484_);
lean_dec_ref(v___x_2482_);
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_e_2466_);
goto v___jp_2475_;
}
else
{
lean_object* v___x_2486_; uint8_t v___x_2487_; 
v___x_2486_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2484_);
v___x_2487_ = l_Lean_Expr_isApp(v___x_2486_);
if (v___x_2487_ == 0)
{
lean_dec_ref(v___x_2486_);
lean_dec_ref(v___x_2484_);
lean_dec_ref(v___x_2482_);
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_e_2466_);
goto v___jp_2475_;
}
else
{
lean_object* v___x_2488_; uint8_t v___x_2489_; 
v___x_2488_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2486_);
v___x_2489_ = l_Lean_Expr_isApp(v___x_2488_);
if (v___x_2489_ == 0)
{
lean_dec_ref(v___x_2488_);
lean_dec_ref(v___x_2486_);
lean_dec_ref(v___x_2484_);
lean_dec_ref(v___x_2482_);
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_e_2466_);
goto v___jp_2475_;
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2491_; uint8_t v___x_2492_; 
v___x_2490_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2488_);
v___x_2491_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6));
v___x_2492_ = l_Lean_Expr_isConstOf(v___x_2490_, v___x_2491_);
if (v___x_2492_ == 0)
{
lean_dec_ref(v___x_2490_);
lean_dec_ref(v___x_2488_);
lean_dec_ref(v___x_2486_);
lean_dec_ref(v___x_2484_);
lean_dec_ref(v___x_2482_);
lean_dec_ref(v___x_2480_);
lean_dec_ref(v_e_2466_);
goto v___jp_2475_;
}
else
{
lean_object* v_arg_2493_; lean_object* v_arg_2494_; lean_object* v_arg_2495_; lean_object* v_arg_2496_; lean_object* v_arg_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v_arg_2493_ = lean_ctor_get(v___x_2480_, 1);
lean_inc_ref(v_arg_2493_);
lean_dec_ref(v___x_2480_);
v_arg_2494_ = lean_ctor_get(v___x_2482_, 1);
lean_inc_ref(v_arg_2494_);
lean_dec_ref(v___x_2482_);
v_arg_2495_ = lean_ctor_get(v___x_2484_, 1);
lean_inc_ref(v_arg_2495_);
lean_dec_ref(v___x_2484_);
v_arg_2496_ = lean_ctor_get(v___x_2486_, 1);
lean_inc_ref_n(v_arg_2496_, 2);
lean_dec_ref(v___x_2486_);
v_arg_2497_ = lean_ctor_get(v___x_2488_, 1);
lean_inc_ref(v_arg_2497_);
lean_dec_ref(v___x_2488_);
v___x_2498_ = l_Lean_Expr_constLevels_x21(v___x_2490_);
v___x_2499_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2464_, v_useDecideBool_2465_, v_arg_2496_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2671_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2502_ = v___x_2499_;
v_isShared_2503_ = v_isSharedCheck_2671_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2499_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2671_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
if (lean_obj_tag(v_a_2500_) == 1)
{
lean_object* v_val_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2521_; 
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_val_2504_ = lean_ctor_get(v_a_2500_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v_a_2500_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2506_ = v_a_2500_;
v_isShared_2507_ = v_isSharedCheck_2521_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_val_2504_);
lean_dec(v_a_2500_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2521_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2514_; 
lean_inc(v_val_2504_);
lean_inc_ref(v_arg_2494_);
v___x_2508_ = l_Lean_Expr_app___override(v_arg_2494_, v_val_2504_);
v___x_2509_ = l_Lean_Expr_headBeta(v___x_2508_);
v___x_2510_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__8));
v___x_2511_ = l_Lean_mkConst(v___x_2510_, v___x_2498_);
v___x_2512_ = l_Lean_mkApp6(v___x_2511_, v_arg_2496_, v_arg_2495_, v_val_2504_, v_arg_2497_, v_arg_2494_, v_arg_2493_);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2512_);
v___x_2514_ = v___x_2506_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2512_);
v___x_2514_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2518_; 
v___x_2515_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2515_, 0, v___x_2509_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
lean_ctor_set_uint8(v___x_2515_, sizeof(void*)*2, v___x_2492_);
v___x_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 0, v___x_2516_);
v___x_2518_ = v___x_2502_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v___x_2516_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
else
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
lean_del_object(v___x_2502_);
lean_dec(v_a_2500_);
lean_inc_ref(v_arg_2496_);
v___x_2522_ = l_Lean_mkNot(v_arg_2496_);
v___x_2523_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2464_, v_useDecideBool_2465_, v___x_2522_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2662_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2526_ = v___x_2523_;
v_isShared_2527_ = v_isSharedCheck_2662_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2523_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2662_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
if (lean_obj_tag(v_a_2524_) == 1)
{
lean_object* v_val_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2545_; 
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_val_2528_ = lean_ctor_get(v_a_2524_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v_a_2524_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2530_ = v_a_2524_;
v_isShared_2531_ = v_isSharedCheck_2545_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_val_2528_);
lean_dec(v_a_2524_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2545_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
lean_inc(v_val_2528_);
lean_inc_ref(v_arg_2493_);
v___x_2532_ = l_Lean_Expr_app___override(v_arg_2493_, v_val_2528_);
v___x_2533_ = l_Lean_Expr_headBeta(v___x_2532_);
v___x_2534_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__10));
v___x_2535_ = l_Lean_mkConst(v___x_2534_, v___x_2498_);
v___x_2536_ = l_Lean_mkApp6(v___x_2535_, v_arg_2496_, v_arg_2495_, v_val_2528_, v_arg_2497_, v_arg_2494_, v_arg_2493_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 0, v___x_2536_);
v___x_2538_ = v___x_2530_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2542_; 
v___x_2539_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2539_, 0, v___x_2533_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
lean_ctor_set_uint8(v___x_2539_, sizeof(void*)*2, v___x_2492_);
v___x_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2540_);
v___x_2542_ = v___x_2526_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2540_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
else
{
lean_object* v___x_2546_; 
lean_del_object(v___x_2526_);
lean_dec(v_a_2524_);
lean_inc(v_a_2473_);
lean_inc_ref(v_a_2472_);
lean_inc(v_a_2471_);
lean_inc_ref(v_a_2470_);
lean_inc(v_a_2469_);
lean_inc_ref(v_a_2468_);
lean_inc(v_a_2467_);
lean_inc_ref(v_arg_2496_);
v___x_2546_ = lean_simp(v_arg_2496_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2653_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2549_ = v___x_2546_;
v_isShared_2550_ = v_isSharedCheck_2653_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2546_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2653_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v_expr_2551_; uint8_t v___x_2552_; 
v_expr_2551_ = lean_ctor_get(v_a_2547_, 0);
v___x_2552_ = lean_expr_eqv(v_expr_2551_, v_arg_2496_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; 
lean_inc_ref(v_expr_2551_);
lean_del_object(v___x_2549_);
v___x_2553_ = l_Lean_Meta_Simp_Result_getProof(v_a_2547_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
v___x_2555_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2);
lean_inc_ref(v_expr_2551_);
v___x_2556_ = l_Lean_Expr_app___override(v___x_2555_, v_expr_2551_);
v___x_2557_ = lean_box(0);
v___x_2558_ = l_Lean_Meta_trySynthInstance(v___x_2556_, v___x_2557_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2558_) == 0)
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2622_; 
v_a_2559_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2561_ = v___x_2558_;
v_isShared_2562_ = v_isSharedCheck_2622_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2558_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2622_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
if (lean_obj_tag(v_a_2559_) == 1)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2616_; 
lean_del_object(v___x_2561_);
lean_dec_ref(v_e_2466_);
v_a_2563_ = lean_ctor_get(v_a_2559_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v_a_2559_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2565_ = v_a_2559_;
v_isShared_2566_ = v_isSharedCheck_2616_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v_a_2559_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2616_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2567_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3);
v___x_2568_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4);
lean_inc(v_a_2554_);
lean_inc_ref(v_expr_2551_);
lean_inc_ref(v_arg_2496_);
v___x_2569_ = l_Lean_mkApp4(v___x_2567_, v_arg_2496_, v_expr_2551_, v_a_2554_, v___x_2568_);
lean_inc_ref(v_arg_2494_);
v___x_2570_ = l_Lean_Expr_app___override(v_arg_2494_, v___x_2569_);
v___x_2571_ = l_Lean_Expr_headBeta(v___x_2570_);
v___x_2572_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_arg_2494_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; uint8_t v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
v___x_2574_ = 0;
lean_inc_ref_n(v_expr_2551_, 2);
v___x_2575_ = l_Lean_mkLambda(v_a_2573_, v___x_2574_, v_expr_2551_, v___x_2571_);
v___x_2576_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7);
lean_inc(v_a_2554_);
lean_inc_ref(v_arg_2496_);
v___x_2577_ = l_Lean_mkApp4(v___x_2576_, v_arg_2496_, v_expr_2551_, v_a_2554_, v___x_2568_);
lean_inc_ref(v_arg_2493_);
v___x_2578_ = l_Lean_Expr_app___override(v_arg_2493_, v___x_2577_);
v___x_2579_ = l_Lean_Expr_headBeta(v___x_2578_);
v___x_2580_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_arg_2493_, v_a_2472_, v_a_2473_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2599_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2583_ = v___x_2580_;
v_isShared_2584_ = v_isSharedCheck_2599_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2580_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2599_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2592_; 
lean_inc_ref_n(v_expr_2551_, 2);
v___x_2585_ = l_Lean_mkNot(v_expr_2551_);
v___x_2586_ = l_Lean_mkLambda(v_a_2581_, v___x_2574_, v___x_2585_, v___x_2579_);
lean_inc(v_a_2563_);
lean_inc_ref(v_arg_2497_);
v___x_2587_ = l_Lean_mkApp5(v___x_2490_, v_arg_2497_, v_expr_2551_, v_a_2563_, v___x_2575_, v___x_2586_);
v___x_2588_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__9));
v___x_2589_ = l_Lean_mkConst(v___x_2588_, v___x_2498_);
v___x_2590_ = l_Lean_mkApp8(v___x_2589_, v_arg_2497_, v_arg_2496_, v_expr_2551_, v_arg_2495_, v_a_2563_, v_arg_2494_, v_arg_2493_, v_a_2554_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v___x_2590_);
v___x_2592_ = v___x_2565_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2590_);
v___x_2592_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2593_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2593_, 0, v___x_2587_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*2, v___x_2492_);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v___x_2594_);
v___x_2596_ = v___x_2583_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec_ref(v___x_2579_);
lean_dec_ref(v___x_2575_);
lean_del_object(v___x_2565_);
lean_dec(v_a_2563_);
lean_dec(v_a_2554_);
lean_dec_ref(v_expr_2551_);
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
v_a_2600_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2580_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2580_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
lean_dec_ref(v___x_2571_);
lean_del_object(v___x_2565_);
lean_dec(v_a_2563_);
lean_dec(v_a_2554_);
lean_dec_ref(v_expr_2551_);
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
v_a_2608_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2572_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2572_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
else
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2620_; 
lean_dec(v_a_2559_);
lean_dec(v_a_2554_);
lean_dec_ref(v_expr_2551_);
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
v___x_2617_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2617_, 0, v_e_2466_);
lean_ctor_set(v___x_2617_, 1, v___x_2557_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*2, v___x_2492_);
v___x_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 0, v___x_2618_);
v___x_2620_ = v___x_2561_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
lean_dec(v_a_2554_);
lean_dec_ref(v_expr_2551_);
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_a_2623_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2558_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2558_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
else
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2638_; 
lean_dec_ref(v_expr_2551_);
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_a_2631_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2633_ = v___x_2553_;
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2553_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2636_; 
if (v_isShared_2634_ == 0)
{
v___x_2636_ = v___x_2633_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_a_2631_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
}
else
{
lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2650_; 
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
v_isSharedCheck_2650_ = !lean_is_exclusive(v_a_2547_);
if (v_isSharedCheck_2650_ == 0)
{
lean_object* v_unused_2651_; lean_object* v_unused_2652_; 
v_unused_2651_ = lean_ctor_get(v_a_2547_, 1);
lean_dec(v_unused_2651_);
v_unused_2652_ = lean_ctor_get(v_a_2547_, 0);
lean_dec(v_unused_2652_);
v___x_2640_ = v_a_2547_;
v_isShared_2641_ = v_isSharedCheck_2650_;
goto v_resetjp_2639_;
}
else
{
lean_dec(v_a_2547_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2650_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2642_; lean_object* v___x_2644_; 
v___x_2642_ = lean_box(0);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 1, v___x_2642_);
lean_ctor_set(v___x_2640_, 0, v_e_2466_);
v___x_2644_ = v___x_2640_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_e_2466_);
lean_ctor_set(v_reuseFailAlloc_2649_, 1, v___x_2642_);
v___x_2644_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
lean_object* v___x_2645_; lean_object* v___x_2647_; 
lean_ctor_set_uint8(v___x_2644_, sizeof(void*)*2, v___x_2492_);
v___x_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2644_);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 0, v___x_2645_);
v___x_2647_ = v___x_2549_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
}
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_a_2654_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2546_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_dec(v___x_2546_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
}
}
}
else
{
lean_object* v_a_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2670_; 
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_a_2663_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2665_ = v___x_2523_;
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_a_2663_);
lean_dec(v___x_2523_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2668_; 
if (v_isShared_2666_ == 0)
{
v___x_2668_ = v___x_2665_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2663_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v___x_2498_);
lean_dec_ref(v_arg_2497_);
lean_dec_ref(v_arg_2496_);
lean_dec_ref(v_arg_2495_);
lean_dec_ref(v_arg_2494_);
lean_dec_ref(v_arg_2493_);
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_e_2466_);
v_a_2672_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2499_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2499_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
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
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec_ref(v_e_2466_);
v_a_2680_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2478_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2478_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
v___jp_2475_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2476_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
return v___x_2477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed(lean_object* v_numIndices_2688_, lean_object* v_useDecideBool_2689_, lean_object* v_e_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
uint8_t v_useDecideBool_boxed_2699_; lean_object* v_res_2700_; 
v_useDecideBool_boxed_2699_ = lean_unbox(v_useDecideBool_2689_);
v_res_2700_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(v_numIndices_2688_, v_useDecideBool_boxed_2699_, v_e_2690_, v_a_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_);
lean_dec(v_a_2697_);
lean_dec_ref(v_a_2696_);
lean_dec(v_a_2695_);
lean_dec_ref(v_a_2694_);
lean_dec(v_a_2693_);
lean_dec_ref(v_a_2692_);
lean_dec(v_a_2691_);
lean_dec(v_numIndices_2688_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27(lean_object* v_numIndices_2711_, uint8_t v_useDecideBool_2712_, lean_object* v_e_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_){
_start:
{
lean_object* v___x_2725_; 
lean_inc_ref(v_e_2713_);
v___x_2725_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2713_, v_a_2718_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2727_; uint8_t v___x_2728_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc(v_a_2726_);
lean_dec_ref_known(v___x_2725_, 1);
v___x_2727_ = l_Lean_Expr_cleanupAnnotations(v_a_2726_);
lean_dec(v_a_2726_);
v___x_2728_ = l_Lean_Expr_isApp(v___x_2727_);
if (v___x_2728_ == 0)
{
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2729_; uint8_t v___x_2730_; 
v___x_2729_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2727_);
v___x_2730_ = l_Lean_Expr_isApp(v___x_2729_);
if (v___x_2730_ == 0)
{
lean_dec_ref(v___x_2729_);
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2729_);
v___x_2732_ = l_Lean_Expr_isApp(v___x_2731_);
if (v___x_2732_ == 0)
{
lean_dec_ref(v___x_2731_);
lean_dec_ref(v___x_2729_);
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2733_; uint8_t v___x_2734_; 
v___x_2733_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2731_);
v___x_2734_ = l_Lean_Expr_isApp(v___x_2733_);
if (v___x_2734_ == 0)
{
lean_dec_ref(v___x_2733_);
lean_dec_ref(v___x_2731_);
lean_dec_ref(v___x_2729_);
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2735_; uint8_t v___x_2736_; 
v___x_2735_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2733_);
v___x_2736_ = l_Lean_Expr_isApp(v___x_2735_);
if (v___x_2736_ == 0)
{
lean_dec_ref(v___x_2735_);
lean_dec_ref(v___x_2733_);
lean_dec_ref(v___x_2731_);
lean_dec_ref(v___x_2729_);
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2737_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2735_);
v___x_2738_ = l_Lean_Expr_isApp(v___x_2737_);
if (v___x_2738_ == 0)
{
lean_dec_ref(v___x_2737_);
lean_dec_ref(v___x_2735_);
lean_dec_ref(v___x_2733_);
lean_dec_ref(v___x_2731_);
lean_dec_ref(v___x_2729_);
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; 
v___x_2739_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2737_);
v___x_2740_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_2741_ = l_Lean_Expr_isConstOf(v___x_2739_, v___x_2740_);
if (v___x_2741_ == 0)
{
lean_dec_ref(v___x_2739_);
lean_dec_ref(v___x_2737_);
lean_dec_ref(v___x_2735_);
lean_dec_ref(v___x_2733_);
lean_dec_ref(v___x_2731_);
lean_dec_ref(v___x_2729_);
lean_dec_ref(v___x_2727_);
lean_dec_ref(v_e_2713_);
goto v___jp_2722_;
}
else
{
lean_object* v_arg_2742_; lean_object* v_arg_2743_; lean_object* v_arg_2744_; lean_object* v_arg_2745_; lean_object* v_arg_2746_; lean_object* v_arg_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v_arg_2742_ = lean_ctor_get(v___x_2727_, 1);
lean_inc_ref(v_arg_2742_);
lean_dec_ref(v___x_2727_);
v_arg_2743_ = lean_ctor_get(v___x_2729_, 1);
lean_inc_ref(v_arg_2743_);
lean_dec_ref(v___x_2729_);
v_arg_2744_ = lean_ctor_get(v___x_2731_, 1);
lean_inc_ref(v_arg_2744_);
lean_dec_ref(v___x_2731_);
v_arg_2745_ = lean_ctor_get(v___x_2733_, 1);
lean_inc_ref_n(v_arg_2745_, 2);
lean_dec_ref(v___x_2733_);
v_arg_2746_ = lean_ctor_get(v___x_2735_, 1);
lean_inc_ref(v_arg_2746_);
lean_dec_ref(v___x_2735_);
v_arg_2747_ = lean_ctor_get(v___x_2737_, 1);
lean_inc_ref(v_arg_2747_);
lean_dec_ref(v___x_2737_);
v___x_2748_ = l_Lean_Expr_constLevels_x21(v___x_2739_);
lean_dec_ref(v___x_2739_);
v___x_2749_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2711_, v_useDecideBool_2712_, v_arg_2745_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2811_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2811_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2811_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
if (lean_obj_tag(v_a_2750_) == 1)
{
lean_object* v_val_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2771_; 
lean_dec_ref(v_e_2713_);
v_val_2754_ = lean_ctor_get(v_a_2750_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v_a_2750_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2756_ = v_a_2750_;
v_isShared_2757_ = v_isSharedCheck_2771_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_val_2754_);
lean_dec(v_a_2750_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2771_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2764_; 
lean_inc(v_val_2754_);
lean_inc_ref(v_arg_2743_);
v___x_2758_ = l_Lean_Expr_app___override(v_arg_2743_, v_val_2754_);
v___x_2759_ = l_Lean_Expr_headBeta(v___x_2758_);
v___x_2760_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1));
v___x_2761_ = l_Lean_mkConst(v___x_2760_, v___x_2748_);
v___x_2762_ = l_Lean_mkApp7(v___x_2761_, v_arg_2747_, v_arg_2746_, v_arg_2745_, v_arg_2744_, v_arg_2743_, v_arg_2742_, v_val_2754_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2762_);
v___x_2764_ = v___x_2756_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v___x_2762_);
v___x_2764_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2768_; 
v___x_2765_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2765_, 0, v___x_2759_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*2, v___x_2741_);
v___x_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2765_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v___x_2766_);
v___x_2768_ = v___x_2752_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
else
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
lean_del_object(v___x_2752_);
lean_dec(v_a_2750_);
lean_inc_ref(v_arg_2745_);
v___x_2772_ = l_Lean_mkNot(v_arg_2745_);
v___x_2773_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2711_, v_useDecideBool_2712_, v___x_2772_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2802_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2776_ = v___x_2773_;
v_isShared_2777_ = v_isSharedCheck_2802_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2773_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2802_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
if (lean_obj_tag(v_a_2774_) == 1)
{
lean_object* v_val_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2795_; 
lean_dec_ref(v_e_2713_);
v_val_2778_ = lean_ctor_get(v_a_2774_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v_a_2774_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2780_ = v_a_2774_;
v_isShared_2781_ = v_isSharedCheck_2795_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_val_2778_);
lean_dec(v_a_2774_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2795_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2788_; 
lean_inc(v_val_2778_);
lean_inc_ref(v_arg_2742_);
v___x_2782_ = l_Lean_Expr_app___override(v_arg_2742_, v_val_2778_);
v___x_2783_ = l_Lean_Expr_headBeta(v___x_2782_);
v___x_2784_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3));
v___x_2785_ = l_Lean_mkConst(v___x_2784_, v___x_2748_);
v___x_2786_ = l_Lean_mkApp7(v___x_2785_, v_arg_2747_, v_arg_2746_, v_arg_2745_, v_arg_2744_, v_arg_2743_, v_arg_2742_, v_val_2778_);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 0, v___x_2786_);
v___x_2788_ = v___x_2780_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v___x_2786_);
v___x_2788_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2789_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2789_, 0, v___x_2783_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
lean_ctor_set_uint8(v___x_2789_, sizeof(void*)*2, v___x_2741_);
v___x_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 0, v___x_2790_);
v___x_2792_ = v___x_2776_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
else
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2800_; 
lean_dec(v_a_2774_);
lean_dec(v___x_2748_);
lean_dec_ref(v_arg_2747_);
lean_dec_ref(v_arg_2746_);
lean_dec_ref(v_arg_2745_);
lean_dec_ref(v_arg_2744_);
lean_dec_ref(v_arg_2743_);
lean_dec_ref(v_arg_2742_);
v___x_2796_ = lean_box(0);
v___x_2797_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2797_, 0, v_e_2713_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
lean_ctor_set_uint8(v___x_2797_, sizeof(void*)*2, v___x_2741_);
v___x_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 0, v___x_2798_);
v___x_2800_ = v___x_2776_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v___x_2798_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
lean_dec(v___x_2748_);
lean_dec_ref(v_arg_2747_);
lean_dec_ref(v_arg_2746_);
lean_dec_ref(v_arg_2745_);
lean_dec_ref(v_arg_2744_);
lean_dec_ref(v_arg_2743_);
lean_dec_ref(v_arg_2742_);
lean_dec_ref(v_e_2713_);
v_a_2803_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2773_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2773_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_dec(v___x_2748_);
lean_dec_ref(v_arg_2747_);
lean_dec_ref(v_arg_2746_);
lean_dec_ref(v_arg_2745_);
lean_dec_ref(v_arg_2744_);
lean_dec_ref(v_arg_2743_);
lean_dec_ref(v_arg_2742_);
lean_dec_ref(v_e_2713_);
v_a_2812_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2749_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2749_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
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
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec_ref(v_e_2713_);
v_a_2820_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2725_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2725_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
v___jp_2722_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___boxed(lean_object* v_numIndices_2828_, lean_object* v_useDecideBool_2829_, lean_object* v_e_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_){
_start:
{
uint8_t v_useDecideBool_boxed_2839_; lean_object* v_res_2840_; 
v_useDecideBool_boxed_2839_ = lean_unbox(v_useDecideBool_2829_);
v_res_2840_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27(v_numIndices_2828_, v_useDecideBool_boxed_2839_, v_e_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
lean_dec(v_a_2837_);
lean_dec_ref(v_a_2836_);
lean_dec(v_a_2835_);
lean_dec_ref(v_a_2834_);
lean_dec(v_a_2833_);
lean_dec_ref(v_a_2832_);
lean_dec(v_a_2831_);
lean_dec(v_numIndices_2828_);
return v_res_2840_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1(void){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2843_ = lean_box(0);
v___x_2844_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__0));
v___x_2845_ = l_Lean_mkConst(v___x_2844_, v___x_2843_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27(lean_object* v_numIndices_2852_, uint8_t v_useDecideBool_2853_, lean_object* v_e_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v___x_2866_; uint8_t v___x_2867_; 
v___x_2866_ = l_Lean_Expr_cleanupAnnotations(v_e_2854_);
v___x_2867_ = l_Lean_Expr_isApp(v___x_2866_);
if (v___x_2867_ == 0)
{
lean_dec_ref(v___x_2866_);
lean_dec_ref(v_e_2854_);
goto v___jp_2863_;
}
else
{
lean_object* v___x_2868_; uint8_t v___x_2869_; 
v___x_2868_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2866_);
v___x_2869_ = l_Lean_Expr_isApp(v___x_2868_);
if (v___x_2869_ == 0)
{
lean_dec_ref(v___x_2868_);
lean_dec_ref(v___x_2866_);
lean_dec_ref(v_e_2854_);
goto v___jp_2863_;
}
else
{
lean_object* v___x_2870_; uint8_t v___x_2871_; 
v___x_2870_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2868_);
v___x_2871_ = l_Lean_Expr_isApp(v___x_2870_);
if (v___x_2871_ == 0)
{
lean_dec_ref(v___x_2870_);
lean_dec_ref(v___x_2868_);
lean_dec_ref(v___x_2866_);
lean_dec_ref(v_e_2854_);
goto v___jp_2863_;
}
else
{
lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2872_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2870_);
v___x_2873_ = l_Lean_Expr_isApp(v___x_2872_);
if (v___x_2873_ == 0)
{
lean_dec_ref(v___x_2872_);
lean_dec_ref(v___x_2870_);
lean_dec_ref(v___x_2868_);
lean_dec_ref(v___x_2866_);
lean_dec_ref(v_e_2854_);
goto v___jp_2863_;
}
else
{
lean_object* v___x_2874_; uint8_t v___x_2875_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v_fst_2884_; lean_object* v_snd_2885_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v_fst_2900_; lean_object* v_snd_2901_; 
v___x_2874_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2872_);
v___x_2875_ = l_Lean_Expr_isApp(v___x_2874_);
if (v___x_2875_ == 0)
{
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec_ref(v___x_2870_);
lean_dec_ref(v___x_2868_);
lean_dec_ref(v___x_2866_);
lean_dec_ref(v_e_2854_);
goto v___jp_2863_;
}
else
{
lean_object* v_arg_2908_; lean_object* v_arg_2909_; lean_object* v_arg_2910_; lean_object* v_arg_2911_; lean_object* v_arg_2912_; uint8_t v_fst_2914_; lean_object* v_fst_2915_; lean_object* v_fst_2916_; lean_object* v_fst_2917_; lean_object* v_fst_2918_; lean_object* v_snd_2919_; lean_object* v___x_3087_; lean_object* v___x_3088_; uint8_t v___x_3089_; 
v_arg_2908_ = lean_ctor_get(v___x_2866_, 1);
lean_inc_ref(v_arg_2908_);
lean_dec_ref(v___x_2866_);
v_arg_2909_ = lean_ctor_get(v___x_2868_, 1);
lean_inc_ref(v_arg_2909_);
lean_dec_ref(v___x_2868_);
v_arg_2910_ = lean_ctor_get(v___x_2870_, 1);
lean_inc_ref(v_arg_2910_);
lean_dec_ref(v___x_2870_);
v_arg_2911_ = lean_ctor_get(v___x_2872_, 1);
lean_inc_ref(v_arg_2911_);
lean_dec_ref(v___x_2872_);
v_arg_2912_ = lean_ctor_get(v___x_2874_, 1);
lean_inc_ref(v_arg_2912_);
v___x_3087_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2874_);
lean_dec_ref(v___x_2874_);
v___x_3088_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_3089_ = l_Lean_Expr_isConstOf(v___x_3087_, v___x_3088_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; uint8_t v___x_3091_; 
v___x_3090_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_3091_ = l_Lean_Expr_isConstOf(v___x_3087_, v___x_3090_);
if (v___x_3091_ == 0)
{
lean_dec_ref(v___x_3087_);
lean_dec_ref(v_arg_2912_);
lean_dec_ref(v_arg_2911_);
lean_dec_ref(v_arg_2910_);
lean_dec_ref(v_arg_2909_);
lean_dec_ref(v_arg_2908_);
lean_dec_ref(v_e_2854_);
goto v___jp_2863_;
}
else
{
v_fst_2914_ = v___x_3089_;
v_fst_2915_ = v___x_3087_;
v_fst_2916_ = v_arg_2911_;
v_fst_2917_ = v_arg_2910_;
v_fst_2918_ = v_arg_2909_;
v_snd_2919_ = v_arg_2908_;
goto v___jp_2913_;
}
}
else
{
v_fst_2914_ = v___x_3089_;
v_fst_2915_ = v___x_3087_;
v_fst_2916_ = v_arg_2911_;
v_fst_2917_ = v_arg_2910_;
v_fst_2918_ = v_arg_2909_;
v_snd_2919_ = v_arg_2908_;
goto v___jp_2913_;
}
v___jp_2913_:
{
lean_object* v_us_2920_; lean_object* v___x_2921_; 
v_us_2920_ = l_Lean_Expr_constLevels_x21(v_fst_2915_);
lean_inc_ref(v_fst_2916_);
v___x_2921_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2852_, v_useDecideBool_2853_, v_fst_2916_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2921_, 1);
if (lean_obj_tag(v_a_2922_) == 1)
{
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_e_2854_);
if (v_fst_2914_ == 0)
{
lean_object* v_val_2923_; lean_object* v___x_2924_; 
v_val_2923_ = lean_ctor_get(v_a_2922_, 0);
lean_inc(v_val_2923_);
lean_dec_ref_known(v_a_2922_, 1);
v___x_2924_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__11));
lean_inc_ref(v_fst_2918_);
v___y_2877_ = v_fst_2916_;
v___y_2878_ = v_snd_2919_;
v___y_2879_ = v_fst_2917_;
v___y_2880_ = v_fst_2918_;
v___y_2881_ = v_arg_2912_;
v___y_2882_ = v_val_2923_;
v___y_2883_ = v_us_2920_;
v_fst_2884_ = v_fst_2918_;
v_snd_2885_ = v___x_2924_;
goto v___jp_2876_;
}
else
{
lean_object* v_val_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v_val_2925_ = lean_ctor_get(v_a_2922_, 0);
lean_inc_n(v_val_2925_, 2);
lean_dec_ref_known(v_a_2922_, 1);
lean_inc_ref(v_fst_2918_);
v___x_2926_ = l_Lean_Expr_app___override(v_fst_2918_, v_val_2925_);
v___x_2927_ = l_Lean_Expr_headBeta(v___x_2926_);
v___x_2928_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__13));
v___y_2877_ = v_fst_2916_;
v___y_2878_ = v_snd_2919_;
v___y_2879_ = v_fst_2917_;
v___y_2880_ = v_fst_2918_;
v___y_2881_ = v_arg_2912_;
v___y_2882_ = v_val_2925_;
v___y_2883_ = v_us_2920_;
v_fst_2884_ = v___x_2927_;
v_snd_2885_ = v___x_2928_;
goto v___jp_2876_;
}
}
else
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
lean_dec(v_a_2922_);
lean_inc_ref(v_fst_2916_);
v___x_2929_ = l_Lean_mkNot(v_fst_2916_);
v___x_2930_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2852_, v_useDecideBool_2853_, v___x_2929_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2930_, 1);
if (lean_obj_tag(v_a_2931_) == 1)
{
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_e_2854_);
if (v_fst_2914_ == 0)
{
lean_object* v_val_2932_; lean_object* v___x_2933_; 
v_val_2932_ = lean_ctor_get(v_a_2931_, 0);
lean_inc(v_val_2932_);
lean_dec_ref_known(v_a_2931_, 1);
v___x_2933_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__12));
lean_inc_ref(v_snd_2919_);
v___y_2893_ = v_fst_2916_;
v___y_2894_ = v_snd_2919_;
v___y_2895_ = v_fst_2917_;
v___y_2896_ = v_fst_2918_;
v___y_2897_ = v_val_2932_;
v___y_2898_ = v_arg_2912_;
v___y_2899_ = v_us_2920_;
v_fst_2900_ = v_snd_2919_;
v_snd_2901_ = v___x_2933_;
goto v___jp_2892_;
}
else
{
lean_object* v_val_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_val_2934_ = lean_ctor_get(v_a_2931_, 0);
lean_inc_n(v_val_2934_, 2);
lean_dec_ref_known(v_a_2931_, 1);
lean_inc_ref(v_snd_2919_);
v___x_2935_ = l_Lean_Expr_app___override(v_snd_2919_, v_val_2934_);
v___x_2936_ = l_Lean_Expr_headBeta(v___x_2935_);
v___x_2937_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__14));
v___y_2893_ = v_fst_2916_;
v___y_2894_ = v_snd_2919_;
v___y_2895_ = v_fst_2917_;
v___y_2896_ = v_fst_2918_;
v___y_2897_ = v_val_2934_;
v___y_2898_ = v_arg_2912_;
v___y_2899_ = v_us_2920_;
v_fst_2900_ = v___x_2936_;
v_snd_2901_ = v___x_2937_;
goto v___jp_2892_;
}
}
else
{
lean_object* v___x_2938_; 
lean_dec(v_a_2931_);
lean_inc(v_a_2861_);
lean_inc_ref(v_a_2860_);
lean_inc(v_a_2859_);
lean_inc_ref(v_a_2858_);
lean_inc(v_a_2857_);
lean_inc_ref(v_a_2856_);
lean_inc(v_a_2855_);
lean_inc_ref(v_fst_2916_);
v___x_2938_ = lean_simp(v_fst_2916_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_3062_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_2941_ = v___x_2938_;
v_isShared_2942_ = v_isSharedCheck_3062_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2938_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_3062_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v_expr_2943_; uint8_t v___x_2944_; 
v_expr_2943_ = lean_ctor_get(v_a_2939_, 0);
v___x_2944_ = lean_expr_eqv(v_expr_2943_, v_fst_2916_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; 
lean_inc_ref(v_expr_2943_);
lean_del_object(v___x_2941_);
v___x_2945_ = l_Lean_Meta_Simp_Result_getProof(v_a_2939_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_a_2946_);
lean_dec_ref_known(v___x_2945_, 1);
v___x_2947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1);
lean_inc_ref(v_expr_2943_);
v___x_2948_ = l_Lean_Expr_app___override(v___x_2947_, v_expr_2943_);
v___x_2949_ = lean_box(0);
v___x_2950_ = l_Lean_Meta_trySynthInstance(v___x_2948_, v___x_2949_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_3031_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_2953_ = v___x_2950_;
v_isShared_2954_ = v_isSharedCheck_3031_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2950_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_3031_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
if (lean_obj_tag(v_a_2951_) == 1)
{
lean_dec_ref(v_e_2854_);
if (v_fst_2914_ == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2971_; 
v_a_2955_ = lean_ctor_get(v_a_2951_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v_a_2951_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2957_ = v_a_2951_;
v_isShared_2958_ = v_isSharedCheck_2971_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v_a_2951_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2971_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2964_; 
v___x_2959_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2));
v___x_2960_ = l_Lean_mkConst(v___x_2959_, v_us_2920_);
lean_inc_ref(v_snd_2919_);
lean_inc_ref(v_fst_2918_);
lean_inc(v_a_2955_);
lean_inc_ref(v_expr_2943_);
lean_inc_ref(v_arg_2912_);
v___x_2961_ = l_Lean_mkApp8(v___x_2960_, v_arg_2912_, v_fst_2916_, v_expr_2943_, v_fst_2917_, v_a_2955_, v_fst_2918_, v_snd_2919_, v_a_2946_);
v___x_2962_ = l_Lean_mkApp5(v_fst_2915_, v_arg_2912_, v_expr_2943_, v_a_2955_, v_fst_2918_, v_snd_2919_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v___x_2961_);
v___x_2964_ = v___x_2957_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2961_);
v___x_2964_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2968_; 
v___x_2965_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2965_, 0, v___x_2962_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
lean_ctor_set_uint8(v___x_2965_, sizeof(void*)*2, v___x_2875_);
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 0, v___x_2966_);
v___x_2968_ = v___x_2953_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2966_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
else
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3025_; 
lean_del_object(v___x_2953_);
v_a_2972_ = lean_ctor_get(v_a_2951_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v_a_2951_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_2974_ = v_a_2951_;
v_isShared_2975_ = v_isSharedCheck_3025_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v_a_2951_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3025_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2976_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3);
v___x_2977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4);
lean_inc(v_a_2946_);
lean_inc_ref(v_expr_2943_);
lean_inc_ref(v_fst_2916_);
v___x_2978_ = l_Lean_mkApp4(v___x_2976_, v_fst_2916_, v_expr_2943_, v_a_2946_, v___x_2977_);
lean_inc_ref(v_fst_2918_);
v___x_2979_ = l_Lean_Expr_app___override(v_fst_2918_, v___x_2978_);
v___x_2980_ = l_Lean_Expr_headBeta(v___x_2979_);
v___x_2981_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_fst_2918_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v_a_2982_; uint8_t v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2981_, 1);
v___x_2983_ = 0;
lean_inc_ref_n(v_expr_2943_, 2);
v___x_2984_ = l_Lean_mkLambda(v_a_2982_, v___x_2983_, v_expr_2943_, v___x_2980_);
v___x_2985_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7);
lean_inc(v_a_2946_);
lean_inc_ref(v_fst_2916_);
v___x_2986_ = l_Lean_mkApp4(v___x_2985_, v_fst_2916_, v_expr_2943_, v_a_2946_, v___x_2977_);
lean_inc_ref(v_snd_2919_);
v___x_2987_ = l_Lean_Expr_app___override(v_snd_2919_, v___x_2986_);
v___x_2988_ = l_Lean_Expr_headBeta(v___x_2987_);
v___x_2989_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_snd_2919_, v_a_2860_, v_a_2861_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3008_; 
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2992_ = v___x_2989_;
v_isShared_2993_ = v_isSharedCheck_3008_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2989_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3008_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3001_; 
lean_inc_ref_n(v_expr_2943_, 2);
v___x_2994_ = l_Lean_mkNot(v_expr_2943_);
v___x_2995_ = l_Lean_mkLambda(v_a_2990_, v___x_2983_, v___x_2994_, v___x_2988_);
v___x_2996_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3));
v___x_2997_ = l_Lean_mkConst(v___x_2996_, v_us_2920_);
lean_inc(v_a_2972_);
lean_inc_ref(v_arg_2912_);
v___x_2998_ = l_Lean_mkApp8(v___x_2997_, v_arg_2912_, v_fst_2916_, v_expr_2943_, v_fst_2917_, v_a_2972_, v_fst_2918_, v_snd_2919_, v_a_2946_);
v___x_2999_ = l_Lean_mkApp5(v_fst_2915_, v_arg_2912_, v_expr_2943_, v_a_2972_, v___x_2984_, v___x_2995_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 0, v___x_2998_);
v___x_3001_ = v___x_2974_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_2998_);
v___x_3001_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3005_; 
v___x_3002_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3002_, 0, v___x_2999_);
lean_ctor_set(v___x_3002_, 1, v___x_3001_);
lean_ctor_set_uint8(v___x_3002_, sizeof(void*)*2, v___x_2875_);
v___x_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3002_);
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 0, v___x_3003_);
v___x_3005_ = v___x_2992_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec_ref(v___x_2988_);
lean_dec_ref(v___x_2984_);
lean_del_object(v___x_2974_);
lean_dec(v_a_2972_);
lean_dec(v_a_2946_);
lean_dec_ref(v_expr_2943_);
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
v_a_3009_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_2989_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_2989_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_dec_ref(v___x_2980_);
lean_del_object(v___x_2974_);
lean_dec(v_a_2972_);
lean_dec(v_a_2946_);
lean_dec_ref(v_expr_2943_);
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
v_a_3017_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_2981_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_2981_);
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
}
}
else
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3029_; 
lean_dec(v_a_2951_);
lean_dec(v_a_2946_);
lean_dec_ref(v_expr_2943_);
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
v___x_3026_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3026_, 0, v_e_2854_);
lean_ctor_set(v___x_3026_, 1, v___x_2949_);
lean_ctor_set_uint8(v___x_3026_, sizeof(void*)*2, v___x_2875_);
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 0, v___x_3027_);
v___x_3029_ = v___x_2953_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3027_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_dec(v_a_2946_);
lean_dec_ref(v_expr_2943_);
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
lean_dec_ref(v_e_2854_);
v_a_3032_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_2950_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_2950_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_dec_ref(v_expr_2943_);
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
lean_dec_ref(v_e_2854_);
v_a_3040_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_2945_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_2945_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
else
{
lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3059_; 
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
v_isSharedCheck_3059_ = !lean_is_exclusive(v_a_2939_);
if (v_isSharedCheck_3059_ == 0)
{
lean_object* v_unused_3060_; lean_object* v_unused_3061_; 
v_unused_3060_ = lean_ctor_get(v_a_2939_, 1);
lean_dec(v_unused_3060_);
v_unused_3061_ = lean_ctor_get(v_a_2939_, 0);
lean_dec(v_unused_3061_);
v___x_3049_ = v_a_2939_;
v_isShared_3050_ = v_isSharedCheck_3059_;
goto v_resetjp_3048_;
}
else
{
lean_dec(v_a_2939_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3059_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v___x_3051_; lean_object* v___x_3053_; 
v___x_3051_ = lean_box(0);
if (v_isShared_3050_ == 0)
{
lean_ctor_set(v___x_3049_, 1, v___x_3051_);
lean_ctor_set(v___x_3049_, 0, v_e_2854_);
v___x_3053_ = v___x_3049_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_e_2854_);
lean_ctor_set(v_reuseFailAlloc_3058_, 1, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3054_; lean_object* v___x_3056_; 
lean_ctor_set_uint8(v___x_3053_, sizeof(void*)*2, v___x_2875_);
v___x_3054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3053_);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 0, v___x_3054_);
v___x_3056_ = v___x_2941_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
}
}
else
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
lean_dec_ref(v_e_2854_);
v_a_3063_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3065_ = v___x_2938_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v___x_2938_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3063_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
}
}
else
{
lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
lean_dec_ref(v_e_2854_);
v_a_3071_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___x_2930_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___x_2930_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
}
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
lean_dec(v_us_2920_);
lean_dec_ref(v_snd_2919_);
lean_dec_ref(v_fst_2918_);
lean_dec_ref(v_fst_2917_);
lean_dec_ref(v_fst_2916_);
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_arg_2912_);
lean_dec_ref(v_e_2854_);
v_a_3079_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_2921_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_2921_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
v___jp_2876_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
lean_inc(v_snd_2885_);
v___x_2886_ = l_Lean_mkConst(v_snd_2885_, v___y_2883_);
v___x_2887_ = l_Lean_mkApp6(v___x_2886_, v___y_2877_, v___y_2879_, v___y_2882_, v___y_2881_, v___y_2880_, v___y_2878_);
v___x_2888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2887_);
v___x_2889_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2889_, 0, v_fst_2884_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
lean_ctor_set_uint8(v___x_2889_, sizeof(void*)*2, v___x_2875_);
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
return v___x_2891_;
}
v___jp_2892_:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
lean_inc(v_snd_2901_);
v___x_2902_ = l_Lean_mkConst(v_snd_2901_, v___y_2899_);
v___x_2903_ = l_Lean_mkApp6(v___x_2902_, v___y_2893_, v___y_2895_, v___y_2897_, v___y_2898_, v___y_2896_, v___y_2894_);
v___x_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
v___x_2905_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2905_, 0, v_fst_2900_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
lean_ctor_set_uint8(v___x_2905_, sizeof(void*)*2, v___x_2875_);
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
return v___x_2907_;
}
}
}
}
}
v___jp_2863_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2864_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2864_);
return v___x_2865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___boxed(lean_object* v_numIndices_3092_, lean_object* v_useDecideBool_3093_, lean_object* v_e_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_){
_start:
{
uint8_t v_useDecideBool_boxed_3103_; lean_object* v_res_3104_; 
v_useDecideBool_boxed_3103_ = lean_unbox(v_useDecideBool_3093_);
v_res_3104_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27(v_numIndices_3092_, v_useDecideBool_boxed_3103_, v_e_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_);
lean_dec(v_a_3101_);
lean_dec_ref(v_a_3100_);
lean_dec(v_a_3099_);
lean_dec_ref(v_a_3098_);
lean_dec(v_a_3097_);
lean_dec_ref(v_a_3096_);
lean_dec(v_a_3095_);
lean_dec(v_numIndices_3092_);
return v_res_3104_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v_s_3107_; 
v___x_3105_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
v___x_3106_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__0, &l_Lean_Meta_SplitIf_getSimpContext___closed__0_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0);
v_s_3107_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_s_3107_, 0, v___x_3106_);
lean_ctor_set(v_s_3107_, 1, v___x_3106_);
lean_ctor_set(v_s_3107_, 2, v___x_3105_);
lean_ctor_set(v_s_3107_, 3, v___x_3105_);
return v_s_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(lean_object* v_numIndices_3219_, uint8_t v_useDecide_3220_){
_start:
{
lean_object* v_s_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; uint8_t v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v_s_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v_s_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v_s_3241_; lean_object* v___x_3242_; lean_object* v_s_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v_s_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v_s_3222_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0);
v___x_3223_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2));
v___x_3224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15));
v___x_3225_ = 0;
v___x_3226_ = lean_box(v_useDecide_3220_);
lean_inc_n(v_numIndices_3219_, 3);
v___x_3227_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed), 11, 2);
lean_closure_set(v___x_3227_, 0, v_numIndices_3219_);
lean_closure_set(v___x_3227_, 1, v___x_3226_);
v___x_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3227_);
v_s_3229_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3222_, v___x_3223_, v___x_3224_, v___x_3225_, v___x_3228_);
v___x_3230_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17));
v___x_3231_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19));
v___x_3232_ = lean_box(v_useDecide_3220_);
v___x_3233_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed), 11, 2);
lean_closure_set(v___x_3233_, 0, v_numIndices_3219_);
lean_closure_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3233_);
v_s_3235_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3229_, v___x_3230_, v___x_3231_, v___x_3225_, v___x_3234_);
v___x_3236_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21));
v___x_3237_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23));
v___x_3238_ = lean_box(v_useDecide_3220_);
v___x_3239_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___boxed), 11, 2);
lean_closure_set(v___x_3239_, 0, v_numIndices_3219_);
lean_closure_set(v___x_3239_, 1, v___x_3238_);
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
lean_inc_ref(v___x_3240_);
v_s_3241_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3235_, v___x_3236_, v___x_3237_, v___x_3225_, v___x_3240_);
v___x_3242_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__25));
v_s_3243_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3241_, v___x_3242_, v___x_3237_, v___x_3225_, v___x_3240_);
v___x_3244_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27));
v___x_3245_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29));
v___x_3246_ = lean_box(v_useDecide_3220_);
v___x_3247_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___boxed), 11, 2);
lean_closure_set(v___x_3247_, 0, v_numIndices_3219_);
lean_closure_set(v___x_3247_, 1, v___x_3246_);
v___x_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3247_);
v_s_3249_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3243_, v___x_3244_, v___x_3245_, v___x_3225_, v___x_3248_);
v___x_3250_ = lean_unsigned_to_nat(1u);
v___x_3251_ = lean_mk_empty_array_with_capacity(v___x_3250_);
v___x_3252_ = lean_array_push(v___x_3251_, v_s_3249_);
v___x_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
return v___x_3253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___boxed(lean_object* v_numIndices_3254_, lean_object* v_useDecide_3255_, lean_object* v_a_3256_){
_start:
{
uint8_t v_useDecide_boxed_3257_; lean_object* v_res_3258_; 
v_useDecide_boxed_3257_ = lean_unbox(v_useDecide_3255_);
v_res_3258_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_numIndices_3254_, v_useDecide_boxed_3257_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(lean_object* v_numIndices_3259_, uint8_t v_useDecide_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_numIndices_3259_, v_useDecide_3260_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___boxed(lean_object* v_numIndices_3267_, lean_object* v_useDecide_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_){
_start:
{
uint8_t v_useDecide_boxed_3274_; lean_object* v_res_3275_; 
v_useDecide_boxed_3274_ = lean_unbox(v_useDecide_3268_);
v_res_3275_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(v_numIndices_3267_, v_useDecide_boxed_3274_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_);
lean_dec(v_a_3272_);
lean_dec_ref(v_a_3271_);
lean_dec(v_a_3270_);
lean_dec_ref(v_a_3269_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(uint8_t v_useDecide_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v_lctx_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v_lctx_3279_ = lean_ctor_get(v_a_3277_, 2);
lean_inc_ref(v_lctx_3279_);
v___x_3280_ = lean_local_ctx_num_indices(v_lctx_3279_);
v___x_3281_ = lean_box(v_useDecide_3276_);
v___x_3282_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed), 11, 2);
lean_closure_set(v___x_3282_, 0, v___x_3280_);
lean_closure_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg___boxed(lean_object* v_useDecide_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_){
_start:
{
uint8_t v_useDecide_boxed_3287_; lean_object* v_res_3288_; 
v_useDecide_boxed_3287_ = lean_unbox(v_useDecide_3284_);
v_res_3288_ = l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(v_useDecide_boxed_3287_, v_a_3285_);
lean_dec_ref(v_a_3285_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t v_useDecide_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_){
_start:
{
lean_object* v___x_3295_; 
v___x_3295_ = l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(v_useDecide_3289_, v_a_3290_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed(lean_object* v_useDecide_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_){
_start:
{
uint8_t v_useDecide_boxed_3302_; lean_object* v_res_3303_; 
v_useDecide_boxed_3302_ = lean_unbox(v_useDecide_3296_);
v_res_3303_ = l_Lean_Meta_SplitIf_mkDischarge_x3f(v_useDecide_boxed_3302_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_);
lean_dec(v_a_3300_);
lean_dec_ref(v_a_3299_);
lean_dec(v_a_3298_);
lean_dec_ref(v_a_3297_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(lean_object* v_mvarId_3304_, lean_object* v_x_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3304_, v_x_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3319_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3314_ = v___x_3311_;
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3311_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3317_; 
if (v_isShared_3315_ == 0)
{
v___x_3317_ = v___x_3314_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_a_3312_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3327_; 
v_a_3320_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3322_ = v___x_3311_;
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3311_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3325_; 
if (v_isShared_3323_ == 0)
{
v___x_3325_ = v___x_3322_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3320_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_3328_, lean_object* v_x_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3328_, v_x_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_);
lean_dec(v___y_3333_);
lean_dec_ref(v___y_3332_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0(lean_object* v_00_u03b1_3336_, lean_object* v_mvarId_3337_, lean_object* v_x_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3337_, v_x_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___boxed(lean_object* v_00_u03b1_3345_, lean_object* v_mvarId_3346_, lean_object* v_x_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_){
_start:
{
lean_object* v_res_3353_; 
v_res_3353_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0(v_00_u03b1_3345_, v_mvarId_3346_, v_x_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
return v_res_3353_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3355_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0));
v___x_3356_ = l_Lean_stringToMessageData(v___x_3355_);
return v___x_3356_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3358_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2));
v___x_3359_ = l_Lean_stringToMessageData(v___x_3358_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(lean_object* v_e_3360_, lean_object* v_mvarId_3361_, lean_object* v_hName_x3f_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_){
_start:
{
lean_object* v___x_3371_; lean_object* v_a_3372_; lean_object* v___x_3373_; 
v___x_3371_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_3360_, v___y_3364_);
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc_n(v_a_3372_, 2);
lean_dec_ref(v___x_3371_);
v___x_3373_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(v_a_3372_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3373_, 1);
if (lean_obj_tag(v_a_3374_) == 1)
{
lean_object* v_val_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3450_; 
lean_dec(v_a_3372_);
v_val_3375_ = lean_ctor_get(v_a_3374_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_a_3374_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3377_ = v_a_3374_;
v_isShared_3378_ = v_isSharedCheck_3450_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_val_3375_);
lean_dec(v_a_3374_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3450_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v_fst_3379_; lean_object* v_snd_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3449_; 
v_fst_3379_ = lean_ctor_get(v_val_3375_, 0);
v_snd_3380_ = lean_ctor_get(v_val_3375_, 1);
v_isSharedCheck_3449_ = !lean_is_exclusive(v_val_3375_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3382_ = v_val_3375_;
v_isShared_3383_ = v_isSharedCheck_3449_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_snd_3380_);
lean_inc(v_fst_3379_);
lean_dec(v_val_3375_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3449_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___y_3385_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v_hName_3411_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; 
if (lean_obj_tag(v_hName_x3f_3362_) == 0)
{
lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3437_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1));
v___x_3438_ = l_Lean_Core_mkFreshUserName(v___x_3437_, v___y_3365_, v___y_3366_);
if (lean_obj_tag(v___x_3438_) == 0)
{
lean_object* v_a_3439_; 
v_a_3439_ = lean_ctor_get(v___x_3438_, 0);
lean_inc(v_a_3439_);
lean_dec_ref_known(v___x_3438_, 1);
v_hName_3411_ = v_a_3439_;
v___y_3412_ = v___y_3363_;
v___y_3413_ = v___y_3364_;
v___y_3414_ = v___y_3365_;
v___y_3415_ = v___y_3366_;
goto v___jp_3410_;
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
lean_del_object(v___x_3382_);
lean_dec(v_snd_3380_);
lean_dec(v_fst_3379_);
lean_del_object(v___x_3377_);
lean_dec(v_mvarId_3361_);
v_a_3440_ = lean_ctor_get(v___x_3438_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3438_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3438_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3438_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
else
{
lean_object* v_val_3448_; 
v_val_3448_ = lean_ctor_get(v_hName_x3f_3362_, 0);
lean_inc(v_val_3448_);
lean_dec_ref_known(v_hName_x3f_3362_, 1);
v_hName_3411_ = v_val_3448_;
v___y_3412_ = v___y_3363_;
v___y_3413_ = v___y_3364_;
v___y_3414_ = v___y_3365_;
v___y_3415_ = v___y_3366_;
goto v___jp_3410_;
}
v___jp_3384_:
{
lean_object* v___x_3390_; 
v___x_3390_ = l_Lean_MVarId_byCasesDec(v_mvarId_3361_, v_fst_3379_, v_snd_3380_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3401_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3393_ = v___x_3390_;
v_isShared_3394_ = v_isSharedCheck_3401_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3390_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3401_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3396_; 
if (v_isShared_3378_ == 0)
{
lean_ctor_set(v___x_3377_, 0, v_a_3391_);
v___x_3396_ = v___x_3377_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3391_);
v___x_3396_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
lean_object* v___x_3398_; 
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 0, v___x_3396_);
v___x_3398_ = v___x_3393_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v___x_3396_);
v___x_3398_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
return v___x_3398_;
}
}
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_del_object(v___x_3377_);
v_a_3402_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3390_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3390_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
v___jp_3410_:
{
lean_object* v_toCold_3416_; lean_object* v_options_3417_; uint8_t v_hasTrace_3418_; 
v_toCold_3416_ = lean_ctor_get(v___y_3414_, 0);
v_options_3417_ = lean_ctor_get(v_toCold_3416_, 2);
v_hasTrace_3418_ = lean_ctor_get_uint8(v_options_3417_, sizeof(void*)*1);
if (v_hasTrace_3418_ == 0)
{
lean_del_object(v___x_3382_);
v___y_3385_ = v_hName_3411_;
v___y_3386_ = v___y_3412_;
v___y_3387_ = v___y_3413_;
v___y_3388_ = v___y_3414_;
v___y_3389_ = v___y_3415_;
goto v___jp_3384_;
}
else
{
lean_object* v_inheritedTraceOptions_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; uint8_t v___x_3422_; 
v_inheritedTraceOptions_3419_ = lean_ctor_get(v_toCold_3416_, 11);
v___x_3420_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8));
v___x_3421_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9);
v___x_3422_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3419_, v_options_3417_, v___x_3421_);
if (v___x_3422_ == 0)
{
lean_del_object(v___x_3382_);
v___y_3385_ = v_hName_3411_;
v___y_3386_ = v___y_3412_;
v___y_3387_ = v___y_3413_;
v___y_3388_ = v___y_3414_;
v___y_3389_ = v___y_3415_;
goto v___jp_3384_;
}
else
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3426_; 
v___x_3423_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1);
lean_inc(v_snd_3380_);
v___x_3424_ = l_Lean_MessageData_ofExpr(v_snd_3380_);
if (v_isShared_3383_ == 0)
{
lean_ctor_set_tag(v___x_3382_, 7);
lean_ctor_set(v___x_3382_, 1, v___x_3424_);
lean_ctor_set(v___x_3382_, 0, v___x_3423_);
v___x_3426_ = v___x_3382_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v___x_3423_);
lean_ctor_set(v_reuseFailAlloc_3436_, 1, v___x_3424_);
v___x_3426_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
lean_object* v___x_3427_; 
v___x_3427_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_3420_, v___x_3426_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_dec_ref_known(v___x_3427_, 1);
v___y_3385_ = v_hName_3411_;
v___y_3386_ = v___y_3412_;
v___y_3387_ = v___y_3413_;
v___y_3388_ = v___y_3414_;
v___y_3389_ = v___y_3415_;
goto v___jp_3384_;
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec(v_hName_3411_);
lean_dec(v_snd_3380_);
lean_dec(v_fst_3379_);
lean_del_object(v___x_3377_);
lean_dec(v_mvarId_3361_);
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3427_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3427_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
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
else
{
lean_object* v_toCold_3451_; lean_object* v_options_3452_; uint8_t v_hasTrace_3453_; 
lean_dec(v_a_3374_);
lean_dec(v_hName_x3f_3362_);
lean_dec(v_mvarId_3361_);
v_toCold_3451_ = lean_ctor_get(v___y_3365_, 0);
v_options_3452_ = lean_ctor_get(v_toCold_3451_, 2);
v_hasTrace_3453_ = lean_ctor_get_uint8(v_options_3452_, sizeof(void*)*1);
if (v_hasTrace_3453_ == 0)
{
lean_dec(v_a_3372_);
goto v___jp_3368_;
}
else
{
lean_object* v_inheritedTraceOptions_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; uint8_t v___x_3457_; 
v_inheritedTraceOptions_3454_ = lean_ctor_get(v_toCold_3451_, 11);
v___x_3455_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8));
v___x_3456_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9);
v___x_3457_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3454_, v_options_3452_, v___x_3456_);
if (v___x_3457_ == 0)
{
lean_dec(v_a_3372_);
goto v___jp_3368_;
}
else
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3458_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3);
v___x_3459_ = l_Lean_indentExpr(v_a_3372_);
v___x_3460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3458_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
v___x_3461_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_3455_, v___x_3460_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_dec_ref_known(v___x_3461_, 1);
goto v___jp_3368_;
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec(v_a_3372_);
lean_dec(v_hName_x3f_3362_);
lean_dec(v_mvarId_3361_);
v_a_3470_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3373_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3373_);
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
v___jp_3368_:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3369_ = lean_box(0);
v___x_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
return v___x_3370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed(lean_object* v_e_3478_, lean_object* v_mvarId_3479_, lean_object* v_hName_x3f_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v_res_3486_; 
v_res_3486_ = l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(v_e_3478_, v_mvarId_3479_, v_hName_x3f_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
lean_dec(v___y_3484_);
lean_dec_ref(v___y_3483_);
lean_dec(v___y_3482_);
lean_dec_ref(v___y_3481_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f(lean_object* v_mvarId_3487_, lean_object* v_e_3488_, lean_object* v_hName_x3f_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_){
_start:
{
lean_object* v___f_3495_; lean_object* v___x_3496_; 
lean_inc(v_mvarId_3487_);
v___f_3495_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3495_, 0, v_e_3488_);
lean_closure_set(v___f_3495_, 1, v_mvarId_3487_);
lean_closure_set(v___f_3495_, 2, v_hName_x3f_3489_);
v___x_3496_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3487_, v___f_3495_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___boxed(lean_object* v_mvarId_3497_, lean_object* v_e_3498_, lean_object* v_hName_x3f_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_3497_, v_e_3498_, v_hName_x3f_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_);
lean_dec(v_a_3503_);
lean_dec_ref(v_a_3502_);
lean_dec(v_a_3501_);
lean_dec_ref(v_a_3500_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_){
_start:
{
lean_object* v_lctx_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v_lctx_3511_ = lean_ctor_get(v___y_3506_, 2);
lean_inc_ref(v_lctx_3511_);
lean_dec_ref(v___y_3506_);
v___x_3512_ = lean_local_ctx_num_indices(v_lctx_3511_);
v___x_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed(lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3515_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(lean_object* v_mvarId_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_){
_start:
{
lean_object* v___f_3527_; lean_object* v___x_3528_; 
v___f_3527_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0));
v___x_3528_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3521_, v___f_3527_, v_a_3522_, v_a_3523_, v_a_3524_, v_a_3525_);
return v___x_3528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___boxed(lean_object* v_mvarId_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_);
lean_dec(v_a_3533_);
lean_dec_ref(v_a_3532_);
lean_dec(v_a_3531_);
lean_dec_ref(v_a_3530_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0(lean_object* v_msg_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_){
_start:
{
lean_object* v___f_3543_; lean_object* v___x_1613__overap_3544_; lean_object* v___x_3545_; 
v___f_3543_ = ((lean_object*)(l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0));
v___x_1613__overap_3544_ = lean_panic_fn_borrowed(v___f_3543_, v_msg_3537_);
lean_inc(v___y_3541_);
lean_inc_ref(v___y_3540_);
lean_inc(v___y_3539_);
lean_inc_ref(v___y_3538_);
v___x_3545_ = lean_apply_5(v___x_1613__overap_3544_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, lean_box(0));
return v___x_3545_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___boxed(lean_object* v_msg_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v_msg_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec_ref(v___y_3547_);
return v_res_3552_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(lean_object* v_opts_3553_, lean_object* v_opt_3554_){
_start:
{
lean_object* v_name_3555_; lean_object* v_defValue_3556_; lean_object* v_map_3557_; lean_object* v___x_3558_; 
v_name_3555_ = lean_ctor_get(v_opt_3554_, 0);
v_defValue_3556_ = lean_ctor_get(v_opt_3554_, 1);
v_map_3557_ = lean_ctor_get(v_opts_3553_, 0);
v___x_3558_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3557_, v_name_3555_);
if (lean_obj_tag(v___x_3558_) == 0)
{
uint8_t v___x_3559_; 
v___x_3559_ = lean_unbox(v_defValue_3556_);
return v___x_3559_;
}
else
{
lean_object* v_val_3560_; 
v_val_3560_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_val_3560_);
lean_dec_ref_known(v___x_3558_, 1);
if (lean_obj_tag(v_val_3560_) == 1)
{
uint8_t v_v_3561_; 
v_v_3561_ = lean_ctor_get_uint8(v_val_3560_, 0);
lean_dec_ref_known(v_val_3560_, 0);
return v_v_3561_;
}
else
{
uint8_t v___x_3562_; 
lean_dec(v_val_3560_);
v___x_3562_ = lean_unbox(v_defValue_3556_);
return v___x_3562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1___boxed(lean_object* v_opts_3563_, lean_object* v_opt_3564_){
_start:
{
uint8_t v_res_3565_; lean_object* v_r_3566_; 
v_res_3565_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v_opts_3563_, v_opt_3564_);
lean_dec_ref(v_opt_3564_);
lean_dec_ref(v_opts_3563_);
v_r_3566_ = lean_box(v_res_3565_);
return v_r_3566_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__0(void){
_start:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3567_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3567_);
return v___x_3568_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__1(void){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3569_ = lean_unsigned_to_nat(0u);
v___x_3570_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__0, &l_Lean_Meta_simpIfTarget___closed__0_once, _init_l_Lean_Meta_simpIfTarget___closed__0);
v___x_3571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3570_);
lean_ctor_set(v___x_3571_, 1, v___x_3569_);
return v___x_3571_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__2(void){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3572_ = lean_unsigned_to_nat(32u);
v___x_3573_ = lean_mk_empty_array_with_capacity(v___x_3572_);
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
return v___x_3574_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__3(void){
_start:
{
size_t v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3575_ = ((size_t)5ULL);
v___x_3576_ = lean_unsigned_to_nat(0u);
v___x_3577_ = lean_unsigned_to_nat(32u);
v___x_3578_ = lean_mk_empty_array_with_capacity(v___x_3577_);
v___x_3579_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__2, &l_Lean_Meta_simpIfTarget___closed__2_once, _init_l_Lean_Meta_simpIfTarget___closed__2);
v___x_3580_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
lean_ctor_set(v___x_3580_, 1, v___x_3578_);
lean_ctor_set(v___x_3580_, 2, v___x_3576_);
lean_ctor_set(v___x_3580_, 3, v___x_3576_);
lean_ctor_set_usize(v___x_3580_, 4, v___x_3575_);
return v___x_3580_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__4(void){
_start:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3581_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__3, &l_Lean_Meta_simpIfTarget___closed__3_once, _init_l_Lean_Meta_simpIfTarget___closed__3);
v___x_3582_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__0, &l_Lean_Meta_simpIfTarget___closed__0_once, _init_l_Lean_Meta_simpIfTarget___closed__0);
v___x_3583_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
lean_ctor_set(v___x_3583_, 1, v___x_3582_);
lean_ctor_set(v___x_3583_, 2, v___x_3582_);
lean_ctor_set(v___x_3583_, 3, v___x_3581_);
return v___x_3583_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__5(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3584_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__4, &l_Lean_Meta_simpIfTarget___closed__4_once, _init_l_Lean_Meta_simpIfTarget___closed__4);
v___x_3585_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__1, &l_Lean_Meta_simpIfTarget___closed__1_once, _init_l_Lean_Meta_simpIfTarget___closed__1);
v___x_3586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3585_);
lean_ctor_set(v___x_3586_, 1, v___x_3584_);
return v___x_3586_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__9(void){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3590_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3591_ = lean_unsigned_to_nat(78u);
v___x_3592_ = lean_unsigned_to_nat(366u);
v___x_3593_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__7));
v___x_3594_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3595_ = l_mkPanicMessageWithDecl(v___x_3594_, v___x_3593_, v___x_3592_, v___x_3591_, v___x_3590_);
return v___x_3595_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__11(void){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3598_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3599_ = lean_unsigned_to_nat(128u);
v___x_3600_ = lean_unsigned_to_nat(370u);
v___x_3601_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__7));
v___x_3602_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3603_ = l_mkPanicMessageWithDecl(v___x_3602_, v___x_3601_, v___x_3600_, v___x_3599_, v___x_3598_);
return v___x_3603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget(lean_object* v_mvarId_3604_, uint8_t v_useDecide_3605_, uint8_t v_useNewSemantics_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_){
_start:
{
if (v_useNewSemantics_3606_ == 0)
{
lean_object* v___x_3659_; lean_object* v___x_3660_; uint8_t v___x_3661_; 
v___x_3659_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3609_);
v___x_3660_ = l_Lean_Meta_backward_split;
v___x_3661_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v___x_3659_, v___x_3660_);
lean_dec_ref(v___x_3659_);
if (v___x_3661_ == 0)
{
goto v___jp_3612_;
}
else
{
lean_object* v___x_3662_; 
v___x_3662_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3663_);
lean_dec_ref_known(v___x_3662_, 1);
v___x_3664_ = lean_box(v_useDecide_3605_);
v___x_3665_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed), 6, 1);
lean_closure_set(v___x_3665_, 0, v___x_3664_);
lean_inc(v_mvarId_3604_);
v___x_3666_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3604_, v___x_3665_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_a_3667_);
lean_dec_ref_known(v___x_3666_, 1);
v___x_3668_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__10));
v___x_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3669_, 0, v_a_3667_);
v___x_3670_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3671_ = l_Lean_Meta_simpTarget(v_mvarId_3604_, v_a_3663_, v___x_3668_, v___x_3669_, v_useNewSemantics_3606_, v___x_3670_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3683_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3674_ = v___x_3671_;
v_isShared_3675_ = v_isSharedCheck_3683_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3671_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3683_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v_fst_3676_; 
v_fst_3676_ = lean_ctor_get(v_a_3672_, 0);
lean_inc(v_fst_3676_);
lean_dec(v_a_3672_);
if (lean_obj_tag(v_fst_3676_) == 1)
{
lean_object* v_val_3677_; lean_object* v___x_3679_; 
v_val_3677_ = lean_ctor_get(v_fst_3676_, 0);
lean_inc(v_val_3677_);
lean_dec_ref_known(v_fst_3676_, 1);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 0, v_val_3677_);
v___x_3679_ = v___x_3674_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_val_3677_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
else
{
lean_object* v___x_3681_; lean_object* v___x_3682_; 
lean_dec(v_fst_3676_);
lean_del_object(v___x_3674_);
v___x_3681_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__11, &l_Lean_Meta_simpIfTarget___closed__11_once, _init_l_Lean_Meta_simpIfTarget___closed__11);
v___x_3682_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3681_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
return v___x_3682_;
}
}
}
else
{
lean_object* v_a_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3691_; 
v_a_3684_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3686_ = v___x_3671_;
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_a_3684_);
lean_dec(v___x_3671_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3684_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
}
}
else
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3699_; 
lean_dec(v_a_3663_);
lean_dec(v_mvarId_3604_);
v_a_3692_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3694_ = v___x_3666_;
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3666_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3697_; 
if (v_isShared_3695_ == 0)
{
v___x_3697_ = v___x_3694_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_a_3692_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
}
else
{
lean_object* v_a_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3707_; 
lean_dec(v_mvarId_3604_);
v_a_3700_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3702_ = v___x_3662_;
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_a_3700_);
lean_dec(v___x_3662_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3705_; 
if (v_isShared_3703_ == 0)
{
v___x_3705_ = v___x_3702_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v_a_3700_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
}
}
}
else
{
goto v___jp_3612_;
}
v___jp_3612_:
{
lean_object* v___x_3613_; 
v___x_3613_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_3607_, v_a_3609_, v_a_3610_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; lean_object* v___x_3615_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___x_3613_, 1);
lean_inc(v_mvarId_3604_);
v___x_3615_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_3604_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3617_; lean_object* v_a_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3615_, 1);
v___x_3617_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_a_3616_, v_useDecide_3605_);
v_a_3618_ = lean_ctor_get(v___x_3617_, 0);
lean_inc(v_a_3618_);
lean_dec_ref(v___x_3617_);
v___x_3619_ = lean_box(0);
v___x_3620_ = 0;
v___x_3621_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3622_ = l_Lean_Meta_simpTarget(v_mvarId_3604_, v_a_3614_, v_a_3618_, v___x_3619_, v___x_3620_, v___x_3621_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3634_; 
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v_fst_3627_; 
v_fst_3627_ = lean_ctor_get(v_a_3623_, 0);
lean_inc(v_fst_3627_);
lean_dec(v_a_3623_);
if (lean_obj_tag(v_fst_3627_) == 1)
{
lean_object* v_val_3628_; lean_object* v___x_3630_; 
v_val_3628_ = lean_ctor_get(v_fst_3627_, 0);
lean_inc(v_val_3628_);
lean_dec_ref_known(v_fst_3627_, 1);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 0, v_val_3628_);
v___x_3630_ = v___x_3625_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_val_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
else
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
lean_dec(v_fst_3627_);
lean_del_object(v___x_3625_);
v___x_3632_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__9, &l_Lean_Meta_simpIfTarget___closed__9_once, _init_l_Lean_Meta_simpIfTarget___closed__9);
v___x_3633_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3632_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
return v___x_3633_;
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
v_a_3635_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3622_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3622_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
else
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3650_; 
lean_dec(v_a_3614_);
lean_dec(v_mvarId_3604_);
v_a_3643_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3645_ = v___x_3615_;
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3615_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3648_; 
if (v_isShared_3646_ == 0)
{
v___x_3648_ = v___x_3645_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3643_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_mvarId_3604_);
v_a_3651_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3613_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3613_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget___boxed(lean_object* v_mvarId_3708_, lean_object* v_useDecide_3709_, lean_object* v_useNewSemantics_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_, lean_object* v_a_3715_){
_start:
{
uint8_t v_useDecide_boxed_3716_; uint8_t v_useNewSemantics_boxed_3717_; lean_object* v_res_3718_; 
v_useDecide_boxed_3716_ = lean_unbox(v_useDecide_3709_);
v_useNewSemantics_boxed_3717_ = lean_unbox(v_useNewSemantics_3710_);
v_res_3718_ = l_Lean_Meta_simpIfTarget(v_mvarId_3708_, v_useDecide_boxed_3716_, v_useNewSemantics_boxed_3717_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3714_);
lean_dec(v_a_3714_);
lean_dec_ref(v_a_3713_);
lean_dec(v_a_3712_);
lean_dec_ref(v_a_3711_);
return v_res_3718_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfLocalDecl___closed__1(void){
_start:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3720_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3721_ = lean_unsigned_to_nat(93u);
v___x_3722_ = lean_unsigned_to_nat(382u);
v___x_3723_ = ((lean_object*)(l_Lean_Meta_simpIfLocalDecl___closed__0));
v___x_3724_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3725_ = l_mkPanicMessageWithDecl(v___x_3724_, v___x_3723_, v___x_3722_, v___x_3721_, v___x_3720_);
return v___x_3725_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfLocalDecl___closed__2(void){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v___x_3726_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3727_ = lean_unsigned_to_nat(133u);
v___x_3728_ = lean_unsigned_to_nat(386u);
v___x_3729_ = ((lean_object*)(l_Lean_Meta_simpIfLocalDecl___closed__0));
v___x_3730_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3731_ = l_mkPanicMessageWithDecl(v___x_3730_, v___x_3729_, v___x_3728_, v___x_3727_, v___x_3726_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl(lean_object* v_mvarId_3732_, lean_object* v_fvarId_3733_, uint8_t v_useNewSemantics_3734_, lean_object* v_a_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_){
_start:
{
if (v_useNewSemantics_3734_ == 0)
{
lean_object* v___x_3788_; lean_object* v___x_3789_; uint8_t v___x_3790_; 
v___x_3788_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3737_);
v___x_3789_ = l_Lean_Meta_backward_split;
v___x_3790_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v___x_3788_, v___x_3789_);
lean_dec_ref(v___x_3788_);
if (v___x_3790_ == 0)
{
goto v___jp_3740_;
}
else
{
lean_object* v___x_3791_; 
v___x_3791_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
if (lean_obj_tag(v___x_3791_) == 0)
{
lean_object* v_a_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v_a_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_a_3792_);
lean_dec_ref_known(v___x_3791_, 1);
v___x_3793_ = lean_box(v_useNewSemantics_3734_);
v___x_3794_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed), 6, 1);
lean_closure_set(v___x_3794_, 0, v___x_3793_);
lean_inc(v_mvarId_3732_);
v___x_3795_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3732_, v___x_3794_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3795_, 1);
v___x_3797_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__10));
v___x_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3798_, 0, v_a_3796_);
v___x_3799_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3800_ = l_Lean_Meta_simpLocalDecl(v_mvarId_3732_, v_fvarId_3733_, v_a_3792_, v___x_3797_, v___x_3798_, v_useNewSemantics_3734_, v___x_3799_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3813_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3803_ = v___x_3800_;
v_isShared_3804_ = v_isSharedCheck_3813_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3800_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3813_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v_fst_3805_; 
v_fst_3805_ = lean_ctor_get(v_a_3801_, 0);
lean_inc(v_fst_3805_);
lean_dec(v_a_3801_);
if (lean_obj_tag(v_fst_3805_) == 1)
{
lean_object* v_val_3806_; lean_object* v_snd_3807_; lean_object* v___x_3809_; 
v_val_3806_ = lean_ctor_get(v_fst_3805_, 0);
lean_inc(v_val_3806_);
lean_dec_ref_known(v_fst_3805_, 1);
v_snd_3807_ = lean_ctor_get(v_val_3806_, 1);
lean_inc(v_snd_3807_);
lean_dec(v_val_3806_);
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 0, v_snd_3807_);
v___x_3809_ = v___x_3803_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_snd_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
else
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
lean_dec(v_fst_3805_);
lean_del_object(v___x_3803_);
v___x_3811_ = lean_obj_once(&l_Lean_Meta_simpIfLocalDecl___closed__2, &l_Lean_Meta_simpIfLocalDecl___closed__2_once, _init_l_Lean_Meta_simpIfLocalDecl___closed__2);
v___x_3812_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3811_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
return v___x_3812_;
}
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
v_a_3814_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3800_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3800_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_dec(v_a_3792_);
lean_dec(v_fvarId_3733_);
lean_dec(v_mvarId_3732_);
v_a_3822_ = lean_ctor_get(v___x_3795_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3795_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3795_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
else
{
lean_object* v_a_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3837_; 
lean_dec(v_fvarId_3733_);
lean_dec(v_mvarId_3732_);
v_a_3830_ = lean_ctor_get(v___x_3791_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3791_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3832_ = v___x_3791_;
v_isShared_3833_ = v_isSharedCheck_3837_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_a_3830_);
lean_dec(v___x_3791_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3837_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___x_3835_; 
if (v_isShared_3833_ == 0)
{
v___x_3835_ = v___x_3832_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v_a_3830_);
v___x_3835_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
return v___x_3835_;
}
}
}
}
}
else
{
goto v___jp_3740_;
}
v___jp_3740_:
{
lean_object* v___x_3741_; 
v___x_3741_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_3735_, v_a_3737_, v_a_3738_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3743_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3741_, 1);
lean_inc(v_mvarId_3732_);
v___x_3743_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_3732_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; uint8_t v___x_3745_; lean_object* v___x_3746_; lean_object* v_a_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3744_);
lean_dec_ref_known(v___x_3743_, 1);
v___x_3745_ = 0;
v___x_3746_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_a_3744_, v___x_3745_);
v_a_3747_ = lean_ctor_get(v___x_3746_, 0);
lean_inc(v_a_3747_);
lean_dec_ref(v___x_3746_);
v___x_3748_ = lean_box(0);
v___x_3749_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3750_ = l_Lean_Meta_simpLocalDecl(v_mvarId_3732_, v_fvarId_3733_, v_a_3742_, v_a_3747_, v___x_3748_, v___x_3745_, v___x_3749_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3763_; 
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3753_ = v___x_3750_;
v_isShared_3754_ = v_isSharedCheck_3763_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3750_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3763_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v_fst_3755_; 
v_fst_3755_ = lean_ctor_get(v_a_3751_, 0);
lean_inc(v_fst_3755_);
lean_dec(v_a_3751_);
if (lean_obj_tag(v_fst_3755_) == 1)
{
lean_object* v_val_3756_; lean_object* v_snd_3757_; lean_object* v___x_3759_; 
v_val_3756_ = lean_ctor_get(v_fst_3755_, 0);
lean_inc(v_val_3756_);
lean_dec_ref_known(v_fst_3755_, 1);
v_snd_3757_ = lean_ctor_get(v_val_3756_, 1);
lean_inc(v_snd_3757_);
lean_dec(v_val_3756_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 0, v_snd_3757_);
v___x_3759_ = v___x_3753_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_snd_3757_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
else
{
lean_object* v___x_3761_; lean_object* v___x_3762_; 
lean_dec(v_fst_3755_);
lean_del_object(v___x_3753_);
v___x_3761_ = lean_obj_once(&l_Lean_Meta_simpIfLocalDecl___closed__1, &l_Lean_Meta_simpIfLocalDecl___closed__1_once, _init_l_Lean_Meta_simpIfLocalDecl___closed__1);
v___x_3762_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3761_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
return v___x_3762_;
}
}
}
else
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
v_a_3764_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3766_ = v___x_3750_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3750_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3764_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
else
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3779_; 
lean_dec(v_a_3742_);
lean_dec(v_fvarId_3733_);
lean_dec(v_mvarId_3732_);
v_a_3772_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3774_ = v___x_3743_;
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3743_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3777_; 
if (v_isShared_3775_ == 0)
{
v___x_3777_ = v___x_3774_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_a_3772_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec(v_fvarId_3733_);
lean_dec(v_mvarId_3732_);
v_a_3780_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3741_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3741_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3785_; 
if (v_isShared_3783_ == 0)
{
v___x_3785_ = v___x_3782_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3780_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl___boxed(lean_object* v_mvarId_3838_, lean_object* v_fvarId_3839_, lean_object* v_useNewSemantics_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_){
_start:
{
uint8_t v_useNewSemantics_boxed_3846_; lean_object* v_res_3847_; 
v_useNewSemantics_boxed_3846_ = lean_unbox(v_useNewSemantics_3840_);
v_res_3847_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_3838_, v_fvarId_3839_, v_useNewSemantics_boxed_3846_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec_ref(v_a_3841_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(lean_object* v_x_x3f_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_Meta_saveState___redArg(v___y_3850_, v___y_3852_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3899_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3857_ = v___x_3854_;
v_isShared_3858_ = v_isSharedCheck_3899_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_a_3855_);
lean_dec(v___x_3854_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3899_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v_a_3860_; lean_object* v___x_3886_; 
lean_inc(v___y_3852_);
lean_inc_ref(v___y_3851_);
lean_inc(v___y_3850_);
lean_inc_ref(v___y_3849_);
v___x_3886_ = lean_apply_5(v_x_x3f_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, lean_box(0));
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_a_3887_);
if (lean_obj_tag(v_a_3887_) == 0)
{
lean_object* v___x_3888_; 
lean_dec_ref_known(v___x_3886_, 1);
lean_inc(v_a_3855_);
v___x_3888_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3855_, v___y_3850_, v___y_3852_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
lean_del_object(v___x_3857_);
lean_dec(v_a_3855_);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3895_ == 0)
{
lean_object* v_unused_3896_; 
v_unused_3896_ = lean_ctor_get(v___x_3888_, 0);
lean_dec(v_unused_3896_);
v___x_3890_ = v___x_3888_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_dec(v___x_3888_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 0, v_a_3887_);
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3887_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
else
{
lean_object* v_a_3897_; 
v_a_3897_ = lean_ctor_get(v___x_3888_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3888_, 1);
v_a_3860_ = v_a_3897_;
goto v___jp_3859_;
}
}
else
{
lean_dec_ref_known(v_a_3887_, 1);
lean_del_object(v___x_3857_);
lean_dec(v_a_3855_);
return v___x_3886_;
}
}
else
{
lean_object* v_a_3898_; 
v_a_3898_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_a_3898_);
lean_dec_ref_known(v___x_3886_, 1);
v_a_3860_ = v_a_3898_;
goto v___jp_3859_;
}
v___jp_3859_:
{
uint8_t v___x_3861_; 
v___x_3861_ = l_Lean_Exception_isInterrupt(v_a_3860_);
if (v___x_3861_ == 0)
{
uint8_t v___x_3862_; 
lean_inc_ref(v_a_3860_);
v___x_3862_ = l_Lean_Exception_isRuntime(v_a_3860_);
if (v___x_3862_ == 0)
{
lean_object* v___x_3863_; 
lean_del_object(v___x_3857_);
v___x_3863_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3855_, v___y_3850_, v___y_3852_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3870_ == 0)
{
lean_object* v_unused_3871_; 
v_unused_3871_ = lean_ctor_get(v___x_3863_, 0);
lean_dec(v_unused_3871_);
v___x_3865_ = v___x_3863_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_dec(v___x_3863_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
lean_ctor_set_tag(v___x_3865_, 1);
lean_ctor_set(v___x_3865_, 0, v_a_3860_);
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3860_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
lean_dec_ref(v_a_3860_);
v_a_3872_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3863_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3863_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
else
{
lean_object* v___x_3881_; 
lean_dec(v_a_3855_);
if (v_isShared_3858_ == 0)
{
lean_ctor_set_tag(v___x_3857_, 1);
lean_ctor_set(v___x_3857_, 0, v_a_3860_);
v___x_3881_ = v___x_3857_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3860_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
else
{
lean_object* v___x_3884_; 
lean_dec(v_a_3855_);
if (v_isShared_3858_ == 0)
{
lean_ctor_set_tag(v___x_3857_, 1);
lean_ctor_set(v___x_3857_, 0, v_a_3860_);
v___x_3884_ = v___x_3857_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_a_3860_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
}
}
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
lean_dec_ref(v_x_x3f_3848_);
v_a_3900_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3854_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3854_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg___boxed(lean_object* v_x_x3f_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v_x_x3f_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
lean_dec(v___y_3912_);
lean_dec_ref(v___y_3911_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(lean_object* v_00_u03b1_3915_, lean_object* v_x_x3f_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_){
_start:
{
lean_object* v___x_3922_; 
v___x_3922_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v_x_x3f_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___boxed(lean_object* v_00_u03b1_3923_, lean_object* v_x_x3f_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_){
_start:
{
lean_object* v_res_3930_; 
v_res_3930_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(v_00_u03b1_3923_, v_x_x3f_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3927_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
return v_res_3930_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3935_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_3936_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_3937_ = l_Lean_Name_append(v___x_3936_, v___x_3935_);
return v___x_3937_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3939_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3));
v___x_3940_ = l_Lean_stringToMessageData(v___x_3939_);
return v___x_3940_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3942_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5));
v___x_3943_ = l_Lean_stringToMessageData(v___x_3942_);
return v___x_3943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0(lean_object* v_mvarId_3944_, lean_object* v_hName_x3f_3945_, uint8_t v_useNewSemantics_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v___x_3955_; 
lean_inc(v_mvarId_3944_);
v___x_3955_ = l_Lean_MVarId_getType(v_mvarId_3944_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
if (lean_obj_tag(v___x_3955_) == 0)
{
lean_object* v_a_3956_; lean_object* v___x_3957_; 
v_a_3956_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_a_3956_);
lean_dec_ref_known(v___x_3955_, 1);
v___x_3957_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_3944_, v_a_3956_, v_hName_x3f_3945_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_4055_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_3960_ = v___x_3957_;
v_isShared_3961_ = v_isSharedCheck_4055_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_4055_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
if (lean_obj_tag(v_a_3958_) == 1)
{
lean_object* v_val_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_4050_; 
lean_del_object(v___x_3960_);
v_val_3962_ = lean_ctor_get(v_a_3958_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v_a_3958_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_3964_ = v_a_3958_;
v_isShared_3965_ = v_isSharedCheck_4050_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_val_3962_);
lean_dec(v_a_3958_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_4050_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v_fst_3966_; lean_object* v_snd_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_4049_; 
v_fst_3966_ = lean_ctor_get(v_val_3962_, 0);
v_snd_3967_ = lean_ctor_get(v_val_3962_, 1);
v_isSharedCheck_4049_ = !lean_is_exclusive(v_val_3962_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_3969_ = v_val_3962_;
v_isShared_3970_ = v_isSharedCheck_4049_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_snd_3967_);
lean_inc(v_fst_3966_);
lean_dec(v_val_3962_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_4049_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v_mvarId_3971_; lean_object* v_fvarId_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_4048_; 
v_mvarId_3971_ = lean_ctor_get(v_fst_3966_, 0);
v_fvarId_3972_ = lean_ctor_get(v_fst_3966_, 1);
v_isSharedCheck_4048_ = !lean_is_exclusive(v_fst_3966_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_3974_ = v_fst_3966_;
v_isShared_3975_ = v_isSharedCheck_4048_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_fvarId_3972_);
lean_inc(v_mvarId_3971_);
lean_dec(v_fst_3966_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_4048_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
uint8_t v___x_3976_; lean_object* v___x_3977_; 
v___x_3976_ = 0;
lean_inc(v_mvarId_3971_);
v___x_3977_ = l_Lean_Meta_simpIfTarget(v_mvarId_3971_, v___x_3976_, v_useNewSemantics_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
if (lean_obj_tag(v___x_3977_) == 0)
{
lean_object* v_a_3978_; lean_object* v_mvarId_3979_; lean_object* v_fvarId_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_4039_; 
v_a_3978_ = lean_ctor_get(v___x_3977_, 0);
lean_inc(v_a_3978_);
lean_dec_ref_known(v___x_3977_, 1);
v_mvarId_3979_ = lean_ctor_get(v_snd_3967_, 0);
v_fvarId_3980_ = lean_ctor_get(v_snd_3967_, 1);
v_isSharedCheck_4039_ = !lean_is_exclusive(v_snd_3967_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_3982_ = v_snd_3967_;
v_isShared_3983_ = v_isSharedCheck_4039_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_fvarId_3980_);
lean_inc(v_mvarId_3979_);
lean_dec(v_snd_3967_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_4039_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3984_; 
lean_inc(v_mvarId_3979_);
v___x_3984_ = l_Lean_Meta_simpIfTarget(v_mvarId_3979_, v___x_3976_, v_useNewSemantics_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_4030_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_3987_ = v___x_3984_;
v_isShared_3988_ = v_isSharedCheck_4030_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3984_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_4030_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
uint8_t v___x_4005_; 
v___x_4005_ = l_Lean_instBEqMVarId_beq(v_mvarId_3971_, v_a_3978_);
lean_dec(v_mvarId_3971_);
if (v___x_4005_ == 0)
{
lean_dec(v_mvarId_3979_);
goto v___jp_3989_;
}
else
{
uint8_t v___x_4006_; 
v___x_4006_ = l_Lean_instBEqMVarId_beq(v_mvarId_3979_, v_a_3985_);
lean_dec(v_mvarId_3979_);
if (v___x_4006_ == 0)
{
goto v___jp_3989_;
}
else
{
lean_object* v_toCold_4007_; lean_object* v_options_4008_; uint8_t v_hasTrace_4009_; 
lean_del_object(v___x_3987_);
lean_del_object(v___x_3982_);
lean_dec(v_fvarId_3980_);
lean_del_object(v___x_3974_);
lean_dec(v_fvarId_3972_);
lean_del_object(v___x_3969_);
lean_del_object(v___x_3964_);
v_toCold_4007_ = lean_ctor_get(v___y_3949_, 0);
v_options_4008_ = lean_ctor_get(v_toCold_4007_, 2);
v_hasTrace_4009_ = lean_ctor_get_uint8(v_options_4008_, sizeof(void*)*1);
if (v_hasTrace_4009_ == 0)
{
lean_dec(v_a_3985_);
lean_dec(v_a_3978_);
goto v___jp_3952_;
}
else
{
lean_object* v_inheritedTraceOptions_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; uint8_t v___x_4013_; 
v_inheritedTraceOptions_4010_ = lean_ctor_get(v_toCold_4007_, 11);
v___x_4011_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_4012_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2);
v___x_4013_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4010_, v_options_4008_, v___x_4012_);
if (v___x_4013_ == 0)
{
lean_dec(v_a_3985_);
lean_dec(v_a_3978_);
goto v___jp_3952_;
}
else
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4014_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4);
v___x_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4015_, 0, v_a_3978_);
v___x_4016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4014_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6);
v___x_4018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4016_);
lean_ctor_set(v___x_4018_, 1, v___x_4017_);
v___x_4019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4019_, 0, v_a_3985_);
v___x_4020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4020_, 0, v___x_4018_);
lean_ctor_set(v___x_4020_, 1, v___x_4019_);
v___x_4021_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_4011_, v___x_4020_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_dec_ref_known(v___x_4021_, 1);
goto v___jp_3952_;
}
else
{
lean_object* v_a_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4029_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4029_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4029_ == 0)
{
v___x_4024_ = v___x_4021_;
v_isShared_4025_ = v_isSharedCheck_4029_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_a_4022_);
lean_dec(v___x_4021_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4029_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4027_; 
if (v_isShared_4025_ == 0)
{
v___x_4027_ = v___x_4024_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v_a_4022_);
v___x_4027_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
return v___x_4027_;
}
}
}
}
}
}
}
v___jp_3989_:
{
lean_object* v___x_3991_; 
if (v_isShared_3983_ == 0)
{
lean_ctor_set(v___x_3982_, 1, v_fvarId_3972_);
lean_ctor_set(v___x_3982_, 0, v_a_3978_);
v___x_3991_ = v___x_3982_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_a_3978_);
lean_ctor_set(v_reuseFailAlloc_4004_, 1, v_fvarId_3972_);
v___x_3991_ = v_reuseFailAlloc_4004_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
lean_object* v___x_3993_; 
if (v_isShared_3975_ == 0)
{
lean_ctor_set(v___x_3974_, 1, v_fvarId_3980_);
lean_ctor_set(v___x_3974_, 0, v_a_3985_);
v___x_3993_ = v___x_3974_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3985_);
lean_ctor_set(v_reuseFailAlloc_4003_, 1, v_fvarId_3980_);
v___x_3993_ = v_reuseFailAlloc_4003_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
lean_object* v___x_3995_; 
if (v_isShared_3970_ == 0)
{
lean_ctor_set(v___x_3969_, 1, v___x_3993_);
lean_ctor_set(v___x_3969_, 0, v___x_3991_);
v___x_3995_ = v___x_3969_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v___x_3991_);
lean_ctor_set(v_reuseFailAlloc_4002_, 1, v___x_3993_);
v___x_3995_ = v_reuseFailAlloc_4002_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
lean_object* v___x_3997_; 
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 0, v___x_3995_);
v___x_3997_ = v___x_3964_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v___x_3995_);
v___x_3997_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3999_; 
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 0, v___x_3997_);
v___x_3999_ = v___x_3987_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v___x_3997_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4038_; 
lean_del_object(v___x_3982_);
lean_dec(v_fvarId_3980_);
lean_dec(v_mvarId_3979_);
lean_dec(v_a_3978_);
lean_del_object(v___x_3974_);
lean_dec(v_fvarId_3972_);
lean_dec(v_mvarId_3971_);
lean_del_object(v___x_3969_);
lean_del_object(v___x_3964_);
v_a_4031_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_3984_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_3984_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4036_; 
if (v_isShared_4034_ == 0)
{
v___x_4036_ = v___x_4033_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_a_4031_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
lean_del_object(v___x_3974_);
lean_dec(v_fvarId_3972_);
lean_dec(v_mvarId_3971_);
lean_del_object(v___x_3969_);
lean_dec(v_snd_3967_);
lean_del_object(v___x_3964_);
v_a_4040_ = lean_ctor_get(v___x_3977_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_3977_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_3977_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4051_; lean_object* v___x_4053_; 
lean_dec(v_a_3958_);
v___x_4051_ = lean_box(0);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v___x_4051_);
v___x_4053_ = v___x_3960_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v___x_4051_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
}
else
{
return v___x_3957_;
}
}
else
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4063_; 
lean_dec(v_hName_x3f_3945_);
lean_dec(v_mvarId_3944_);
v_a_4056_ = lean_ctor_get(v___x_3955_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_3955_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4058_ = v___x_3955_;
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_3955_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4061_; 
if (v_isShared_4059_ == 0)
{
v___x_4061_ = v___x_4058_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_a_4056_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
v___jp_3952_:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = lean_box(0);
v___x_3954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
return v___x_3954_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed(lean_object* v_mvarId_4064_, lean_object* v_hName_x3f_4065_, lean_object* v_useNewSemantics_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_){
_start:
{
uint8_t v_useNewSemantics_boxed_4072_; lean_object* v_res_4073_; 
v_useNewSemantics_boxed_4072_ = lean_unbox(v_useNewSemantics_4066_);
v_res_4073_ = l_Lean_Meta_splitIfTarget_x3f___lam__0(v_mvarId_4064_, v_hName_x3f_4065_, v_useNewSemantics_boxed_4072_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_);
lean_dec(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec(v___y_4068_);
lean_dec_ref(v___y_4067_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object* v_mvarId_4074_, lean_object* v_hName_x3f_4075_, uint8_t v_useNewSemantics_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_){
_start:
{
lean_object* v___x_4082_; lean_object* v___f_4083_; lean_object* v___x_4084_; 
v___x_4082_ = lean_box(v_useNewSemantics_4076_);
v___f_4083_ = lean_alloc_closure((void*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4083_, 0, v_mvarId_4074_);
lean_closure_set(v___f_4083_, 1, v_hName_x3f_4075_);
lean_closure_set(v___f_4083_, 2, v___x_4082_);
v___x_4084_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v___f_4083_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___boxed(lean_object* v_mvarId_4085_, lean_object* v_hName_x3f_4086_, lean_object* v_useNewSemantics_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_){
_start:
{
uint8_t v_useNewSemantics_boxed_4093_; lean_object* v_res_4094_; 
v_useNewSemantics_boxed_4093_ = lean_unbox(v_useNewSemantics_4087_);
v_res_4094_ = l_Lean_Meta_splitIfTarget_x3f(v_mvarId_4085_, v_hName_x3f_4086_, v_useNewSemantics_boxed_4093_, v_a_4088_, v_a_4089_, v_a_4090_, v_a_4091_);
lean_dec(v_a_4091_);
lean_dec_ref(v_a_4090_);
lean_dec(v_a_4089_);
lean_dec_ref(v_a_4088_);
return v_res_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(lean_object* v___x_4095_, lean_object* v_mvarId_4096_, lean_object* v_hName_x3f_4097_, lean_object* v_fvarId_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v___x_4107_; 
lean_inc(v___y_4102_);
lean_inc_ref(v___y_4101_);
lean_inc(v___y_4100_);
lean_inc_ref(v___y_4099_);
v___x_4107_ = lean_infer_type(v___x_4095_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v___x_4109_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
lean_inc(v_a_4108_);
lean_dec_ref_known(v___x_4107_, 1);
v___x_4109_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_4096_, v_a_4108_, v_hName_x3f_4097_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4205_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4112_ = v___x_4109_;
v_isShared_4113_ = v_isSharedCheck_4205_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4109_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4205_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
if (lean_obj_tag(v_a_4110_) == 1)
{
lean_object* v_val_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4200_; 
lean_del_object(v___x_4112_);
v_val_4114_ = lean_ctor_get(v_a_4110_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v_a_4110_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4116_ = v_a_4110_;
v_isShared_4117_ = v_isSharedCheck_4200_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_val_4114_);
lean_dec(v_a_4110_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4200_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v_fst_4118_; lean_object* v_snd_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4199_; 
v_fst_4118_ = lean_ctor_get(v_val_4114_, 0);
v_snd_4119_ = lean_ctor_get(v_val_4114_, 1);
v_isSharedCheck_4199_ = !lean_is_exclusive(v_val_4114_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4121_ = v_val_4114_;
v_isShared_4122_ = v_isSharedCheck_4199_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_snd_4119_);
lean_inc(v_fst_4118_);
lean_dec(v_val_4114_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4199_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v_mvarId_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4197_; 
v_mvarId_4123_ = lean_ctor_get(v_fst_4118_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_fst_4118_);
if (v_isSharedCheck_4197_ == 0)
{
lean_object* v_unused_4198_; 
v_unused_4198_ = lean_ctor_get(v_fst_4118_, 1);
lean_dec(v_unused_4198_);
v___x_4125_ = v_fst_4118_;
v_isShared_4126_ = v_isSharedCheck_4197_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_mvarId_4123_);
lean_dec(v_fst_4118_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4197_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
uint8_t v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = 0;
lean_inc(v_fvarId_4098_);
lean_inc(v_mvarId_4123_);
v___x_4128_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_4123_, v_fvarId_4098_, v___x_4127_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4128_) == 0)
{
lean_object* v_a_4129_; lean_object* v_mvarId_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4187_; 
v_a_4129_ = lean_ctor_get(v___x_4128_, 0);
lean_inc(v_a_4129_);
lean_dec_ref_known(v___x_4128_, 1);
v_mvarId_4130_ = lean_ctor_get(v_snd_4119_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v_snd_4119_);
if (v_isSharedCheck_4187_ == 0)
{
lean_object* v_unused_4188_; 
v_unused_4188_ = lean_ctor_get(v_snd_4119_, 1);
lean_dec(v_unused_4188_);
v___x_4132_ = v_snd_4119_;
v_isShared_4133_ = v_isSharedCheck_4187_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_mvarId_4130_);
lean_dec(v_snd_4119_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4187_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4134_; 
lean_inc(v_mvarId_4130_);
v___x_4134_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_4130_, v_fvarId_4098_, v___x_4127_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4134_) == 0)
{
lean_object* v_a_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4178_; 
v_a_4135_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4137_ = v___x_4134_;
v_isShared_4138_ = v_isSharedCheck_4178_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_a_4135_);
lean_dec(v___x_4134_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4178_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
uint8_t v___x_4149_; 
v___x_4149_ = l_Lean_instBEqMVarId_beq(v_mvarId_4123_, v_a_4129_);
lean_dec(v_mvarId_4123_);
if (v___x_4149_ == 0)
{
lean_del_object(v___x_4132_);
lean_dec(v_mvarId_4130_);
lean_del_object(v___x_4125_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
goto v___jp_4139_;
}
else
{
uint8_t v___x_4150_; 
v___x_4150_ = l_Lean_instBEqMVarId_beq(v_mvarId_4130_, v_a_4135_);
lean_dec(v_mvarId_4130_);
if (v___x_4150_ == 0)
{
lean_del_object(v___x_4132_);
lean_del_object(v___x_4125_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
goto v___jp_4139_;
}
else
{
lean_object* v_toCold_4151_; lean_object* v_options_4152_; uint8_t v_hasTrace_4153_; 
lean_del_object(v___x_4137_);
lean_del_object(v___x_4121_);
lean_del_object(v___x_4116_);
v_toCold_4151_ = lean_ctor_get(v___y_4101_, 0);
v_options_4152_ = lean_ctor_get(v_toCold_4151_, 2);
v_hasTrace_4153_ = lean_ctor_get_uint8(v_options_4152_, sizeof(void*)*1);
if (v_hasTrace_4153_ == 0)
{
lean_dec(v_a_4135_);
lean_del_object(v___x_4132_);
lean_dec(v_a_4129_);
lean_del_object(v___x_4125_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
goto v___jp_4104_;
}
else
{
lean_object* v_inheritedTraceOptions_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; uint8_t v___x_4157_; 
v_inheritedTraceOptions_4154_ = lean_ctor_get(v_toCold_4151_, 11);
v___x_4155_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_4156_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2);
v___x_4157_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4154_, v_options_4152_, v___x_4156_);
if (v___x_4157_ == 0)
{
lean_dec(v_a_4135_);
lean_del_object(v___x_4132_);
lean_dec(v_a_4129_);
lean_del_object(v___x_4125_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
goto v___jp_4104_;
}
else
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4161_; 
v___x_4158_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4);
v___x_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4159_, 0, v_a_4129_);
if (v_isShared_4133_ == 0)
{
lean_ctor_set_tag(v___x_4132_, 7);
lean_ctor_set(v___x_4132_, 1, v___x_4159_);
lean_ctor_set(v___x_4132_, 0, v___x_4158_);
v___x_4161_ = v___x_4132_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4158_);
lean_ctor_set(v_reuseFailAlloc_4177_, 1, v___x_4159_);
v___x_4161_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
lean_object* v___x_4162_; lean_object* v___x_4164_; 
v___x_4162_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6);
if (v_isShared_4126_ == 0)
{
lean_ctor_set_tag(v___x_4125_, 7);
lean_ctor_set(v___x_4125_, 1, v___x_4162_);
lean_ctor_set(v___x_4125_, 0, v___x_4161_);
v___x_4164_ = v___x_4125_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4161_);
lean_ctor_set(v_reuseFailAlloc_4176_, 1, v___x_4162_);
v___x_4164_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
v___x_4165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4165_, 0, v_a_4135_);
v___x_4166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4164_);
lean_ctor_set(v___x_4166_, 1, v___x_4165_);
v___x_4167_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_4155_, v___x_4166_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
if (lean_obj_tag(v___x_4167_) == 0)
{
lean_dec_ref_known(v___x_4167_, 1);
goto v___jp_4104_;
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4175_; 
v_a_4168_ = lean_ctor_get(v___x_4167_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4167_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4170_ = v___x_4167_;
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v___x_4167_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4173_; 
if (v_isShared_4171_ == 0)
{
v___x_4173_ = v___x_4170_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4168_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
}
}
}
}
}
v___jp_4139_:
{
lean_object* v___x_4141_; 
if (v_isShared_4122_ == 0)
{
lean_ctor_set(v___x_4121_, 1, v_a_4135_);
lean_ctor_set(v___x_4121_, 0, v_a_4129_);
v___x_4141_ = v___x_4121_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_a_4129_);
lean_ctor_set(v_reuseFailAlloc_4148_, 1, v_a_4135_);
v___x_4141_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
lean_object* v___x_4143_; 
if (v_isShared_4117_ == 0)
{
lean_ctor_set(v___x_4116_, 0, v___x_4141_);
v___x_4143_ = v___x_4116_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v___x_4141_);
v___x_4143_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
lean_object* v___x_4145_; 
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 0, v___x_4143_);
v___x_4145_ = v___x_4137_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v___x_4143_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
}
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
lean_del_object(v___x_4132_);
lean_dec(v_mvarId_4130_);
lean_dec(v_a_4129_);
lean_del_object(v___x_4125_);
lean_dec(v_mvarId_4123_);
lean_del_object(v___x_4121_);
lean_del_object(v___x_4116_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
v_a_4179_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4181_ = v___x_4134_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v___x_4134_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
}
}
else
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4196_; 
lean_del_object(v___x_4125_);
lean_dec(v_mvarId_4123_);
lean_del_object(v___x_4121_);
lean_dec(v_snd_4119_);
lean_del_object(v___x_4116_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v_fvarId_4098_);
v_a_4189_ = lean_ctor_get(v___x_4128_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4128_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4191_ = v___x_4128_;
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v___x_4128_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___x_4194_; 
if (v_isShared_4192_ == 0)
{
v___x_4194_ = v___x_4191_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v_a_4189_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4201_; lean_object* v___x_4203_; 
lean_dec(v_a_4110_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v_fvarId_4098_);
v___x_4201_ = lean_box(0);
if (v_isShared_4113_ == 0)
{
lean_ctor_set(v___x_4112_, 0, v___x_4201_);
v___x_4203_ = v___x_4112_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v___x_4201_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
return v___x_4203_;
}
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v_fvarId_4098_);
v_a_4206_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4109_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4109_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
}
else
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4221_; 
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v_fvarId_4098_);
lean_dec(v_hName_x3f_4097_);
lean_dec(v_mvarId_4096_);
v_a_4214_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4216_ = v___x_4107_;
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_4107_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4219_; 
if (v_isShared_4217_ == 0)
{
v___x_4219_ = v___x_4216_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4214_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
v___jp_4104_:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4105_ = lean_box(0);
v___x_4106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
return v___x_4106_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed(lean_object* v___x_4222_, lean_object* v_mvarId_4223_, lean_object* v_hName_x3f_4224_, lean_object* v_fvarId_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(v___x_4222_, v_mvarId_4223_, v_hName_x3f_4224_, v_fvarId_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f(lean_object* v_mvarId_4232_, lean_object* v_fvarId_4233_, lean_object* v_hName_x3f_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_){
_start:
{
lean_object* v___x_4240_; lean_object* v___f_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; 
lean_inc(v_fvarId_4233_);
v___x_4240_ = l_Lean_mkFVar(v_fvarId_4233_);
lean_inc(v_mvarId_4232_);
v___f_4241_ = lean_alloc_closure((void*)(l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4241_, 0, v___x_4240_);
lean_closure_set(v___f_4241_, 1, v_mvarId_4232_);
lean_closure_set(v___f_4241_, 2, v_hName_x3f_4234_);
lean_closure_set(v___f_4241_, 3, v_fvarId_4233_);
v___x_4242_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_4242_, 0, lean_box(0));
lean_closure_set(v___x_4242_, 1, v_mvarId_4232_);
lean_closure_set(v___x_4242_, 2, v___f_4241_);
v___x_4243_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v___x_4242_, v_a_4235_, v_a_4236_, v_a_4237_, v_a_4238_);
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___boxed(lean_object* v_mvarId_4244_, lean_object* v_fvarId_4245_, lean_object* v_hName_x3f_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_, lean_object* v_a_4251_){
_start:
{
lean_object* v_res_4252_; 
v_res_4252_ = l_Lean_Meta_splitIfLocalDecl_x3f(v_mvarId_4244_, v_fvarId_4245_, v_hName_x3f_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_);
lean_dec(v_a_4250_);
lean_dec_ref(v_a_4249_);
lean_dec(v_a_4248_);
lean_dec_ref(v_a_4247_);
return v_res_4252_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; 
v___x_4273_ = lean_unsigned_to_nat(3526097586u);
v___x_4274_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_4275_ = l_Lean_Name_num___override(v___x_4274_, v___x_4273_);
return v___x_4275_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
v___x_4277_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_4278_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4279_ = l_Lean_Name_str___override(v___x_4278_, v___x_4277_);
return v___x_4279_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; 
v___x_4281_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_4282_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4283_ = l_Lean_Name_str___override(v___x_4282_, v___x_4281_);
return v___x_4283_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; 
v___x_4284_ = lean_unsigned_to_nat(2u);
v___x_4285_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4286_ = l_Lean_Name_num___override(v___x_4285_, v___x_4284_);
return v___x_4286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4288_; uint8_t v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; 
v___x_4288_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8));
v___x_4289_ = 0;
v___x_4290_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4291_ = l_Lean_registerTraceClass(v___x_4288_, v___x_4289_, v___x_4290_);
return v___x_4291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2____boxed(lean_object* v_a_4292_){
_start:
{
lean_object* v_res_4293_; 
v_res_4293_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
return v_res_4293_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_split = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_split);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Init_UDecidable(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_SplitIf(builtin);
}
#ifdef __cplusplus
}
#endif
