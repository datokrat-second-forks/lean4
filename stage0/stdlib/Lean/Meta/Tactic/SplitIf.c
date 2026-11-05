// Lean compiler output
// Module: Lean.Meta.Tactic.SplitIf
// Imports: public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Tactic.Simp.Main import Lean.Meta.Tactic.BoolToProp import Init.UDecidable
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_byCasesDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_boolCondToProp_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isIte(lean_object*);
uint8_t l_Lean_Expr_isDIte(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
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
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
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
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpTheorems_addConst(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Meta_isIteLike___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_isIteLike___closed__5 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__5_value;
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__5_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_isIteLike___closed__6 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__6_value;
static const lean_string_object l_Lean_Meta_isIteLike___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_isIteLike___closed__7 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__7_value;
static const lean_string_object l_Lean_Meta_isIteLike___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Meta_isIteLike___closed__8 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__8_value;
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_isIteLike___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_isIteLike___closed__8_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 59, 48, 241, 48, 106, 255)}};
static const lean_object* l_Lean_Meta_isIteLike___closed__9 = (const lean_object*)&l_Lean_Meta_isIteLike___closed__9_value;
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
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchValue"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(127, 90, 239, 50, 101, 126, 224, 231)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_prop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_prop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dcond_neg"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__5 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value),LEAN_SCALAR_PTR_LITERAL(130, 205, 190, 244, 239, 213, 246, 117)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__6 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__6_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_pos"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__7 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value),LEAN_SCALAR_PTR_LITERAL(92, 34, 41, 42, 220, 235, 208, 212)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__8 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__8_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cond_neg"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__9 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value),LEAN_SCALAR_PTR_LITERAL(49, 12, 112, 38, 148, 75, 173, 29)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__10 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__10_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dcond_pos"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__11 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__11_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__11_value),LEAN_SCALAR_PTR_LITERAL(175, 105, 2, 180, 243, 3, 49, 224)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__12 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__12_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ite_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__13 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value),LEAN_SCALAR_PTR_LITERAL(61, 39, 8, 237, 213, 91, 107, 69)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__14 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__14_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_left"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__15 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__15_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__15_value),LEAN_SCALAR_PTR_LITERAL(239, 169, 41, 13, 119, 67, 249, 86)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__16 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__16_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dite_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__17 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__17_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__17_value),LEAN_SCALAR_PTR_LITERAL(138, 158, 15, 234, 166, 144, 231, 97)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__18 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__18_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(47, 91, 172, 106, 10, 51, 189, 44)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__19 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__19_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value),LEAN_SCALAR_PTR_LITERAL(226, 127, 188, 147, 183, 148, 17, 43)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__20 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__20_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__15_value),LEAN_SCALAR_PTR_LITERAL(32, 95, 146, 40, 200, 88, 9, 188)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__21 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__21_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__17_value),LEAN_SCALAR_PTR_LITERAL(133, 196, 119, 188, 182, 137, 173, 132)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__22 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "not_not_intro"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 174, 41, 152, 198, 172, 7, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ne_false_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(131, 230, 211, 39, 71, 40, 16, 80)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ne_true_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(20, 245, 128, 126, 41, 148, 38, 48)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "splitIf"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(181, 95, 169, 53, 171, 116, 20, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "discharge\? "};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__19;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__21;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__22_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(124, 27, 93, 224, 42, 131, 56, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "matchValue_pos"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 159, 69, 197, 113, 242, 29, 20)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "matchValue_neg"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 253, 20, 98, 36, 205)}};
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(75, 94, 186, 56, 13, 202, 202, 70)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dcond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isIteLike___closed__7_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(114, 67, 6, 247, 164, 172, 6, 82)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__6_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceCond'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(249, 118, 175, 137, 178, 122, 48, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_isIteLike___closed__9_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__30_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__31 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__31_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__32 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__32_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__33 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__33_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reduceMatchValue'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__34 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__34_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(120, 143, 142, 152, 72, 29, 109, 217)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__35 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__35_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_byCasesBool___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_MVarId_byCasesBool___lam__2___closed__0 = (const lean_object*)&l_Lean_MVarId_byCasesBool___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_byCasesBool___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCasesBool___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_MVarId_byCasesBool___lam__2___closed__1 = (const lean_object*)&l_Lean_MVarId_byCasesBool___lam__2___closed__1_value;
static const lean_string_object l_Lean_MVarId_byCasesBool___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_MVarId_byCasesBool___lam__2___closed__2 = (const lean_object*)&l_Lean_MVarId_byCasesBool___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_byCasesBool___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCasesBool___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_MVarId_byCasesBool___lam__2___closed__3 = (const lean_object*)&l_Lean_MVarId_byCasesBool___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "splitting on "};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "splitting on the value of "};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "could not find if to split:"};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__5;
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__14_value),LEAN_SCALAR_PTR_LITERAL(140, 203, 248, 13, 200, 236, 3, 225)}};
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
LEAN_EXPORT uint8_t l_Lean_Meta_isIteLike(lean_object* v_e_18_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = l_Lean_Expr_isIte(v_e_18_);
if (v___x_19_ == 0)
{
uint8_t v___x_20_; 
v___x_20_ = l_Lean_Expr_isDIte(v_e_18_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_21_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_22_ = lean_unsigned_to_nat(5u);
v___x_23_ = l_Lean_Expr_isAppOfArity(v_e_18_, v___x_21_, v___x_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_24_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_25_ = l_Lean_Expr_isAppOfArity(v_e_18_, v___x_24_, v___x_22_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_26_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__6));
v___x_27_ = lean_unsigned_to_nat(4u);
v___x_28_ = l_Lean_Expr_isAppOfArity(v_e_18_, v___x_26_, v___x_27_);
if (v___x_28_ == 0)
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__9));
v___x_30_ = l_Lean_Expr_isAppOfArity(v_e_18_, v___x_29_, v___x_27_);
return v___x_30_;
}
else
{
return v___x_28_;
}
}
else
{
return v___x_25_;
}
}
else
{
return v___x_23_;
}
}
else
{
return v___x_20_;
}
}
else
{
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isIteLike___boxed(lean_object* v_e_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l_Lean_Meta_isIteLike(v_e_31_);
lean_dec_ref(v_e_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl(uint8_t v_x_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(v_x_34_);
v___x_36_ = lean_obj_tag_nat(v___x_35_);
lean_dec(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl___boxed(lean_object* v_x_37_){
_start:
{
uint8_t v_x_4__boxed_38_; lean_object* v_res_39_; 
v_x_4__boxed_38_ = lean_unbox(v_x_37_);
v_res_39_ = l_Lean_Meta_SplitKind_ctorIdx___impl(v_x_4__boxed_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg(lean_object* v_k_40_){
_start:
{
lean_inc(v_k_40_);
return v_k_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg___boxed(lean_object* v_k_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_Meta_SplitKind_ctorElim___redArg(v_k_41_);
lean_dec(v_k_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, uint8_t v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
lean_inc(v_k_47_);
return v_k_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
uint8_t v_t_boxed_53_; lean_object* v_res_54_; 
v_t_boxed_53_ = lean_unbox(v_t_50_);
v_res_54_ = l_Lean_Meta_SplitKind_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_boxed_53_, v_h_51_, v_k_52_);
lean_dec(v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg(lean_object* v_ite_55_){
_start:
{
lean_inc(v_ite_55_);
return v_ite_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg___boxed(lean_object* v_ite_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_SplitKind_ite_elim___redArg(v_ite_56_);
lean_dec(v_ite_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim(lean_object* v_motive_58_, uint8_t v_t_59_, lean_object* v_h_60_, lean_object* v_ite_61_){
_start:
{
lean_inc(v_ite_61_);
return v_ite_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___boxed(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_ite_65_){
_start:
{
uint8_t v_t_boxed_66_; lean_object* v_res_67_; 
v_t_boxed_66_ = lean_unbox(v_t_63_);
v_res_67_ = l_Lean_Meta_SplitKind_ite_elim(v_motive_62_, v_t_boxed_66_, v_h_64_, v_ite_65_);
lean_dec(v_ite_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg(lean_object* v_match_68_){
_start:
{
lean_inc(v_match_68_);
return v_match_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg___boxed(lean_object* v_match_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Meta_SplitKind_match_elim___redArg(v_match_69_);
lean_dec(v_match_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim(lean_object* v_motive_71_, uint8_t v_t_72_, lean_object* v_h_73_, lean_object* v_match_74_){
_start:
{
lean_inc(v_match_74_);
return v_match_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___boxed(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_match_78_){
_start:
{
uint8_t v_t_boxed_79_; lean_object* v_res_80_; 
v_t_boxed_79_ = lean_unbox(v_t_76_);
v_res_80_ = l_Lean_Meta_SplitKind_match_elim(v_motive_75_, v_t_boxed_79_, v_h_77_, v_match_78_);
lean_dec(v_match_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg(lean_object* v_both_81_){
_start:
{
lean_inc(v_both_81_);
return v_both_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg___boxed(lean_object* v_both_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_Meta_SplitKind_both_elim___redArg(v_both_82_);
lean_dec(v_both_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim(lean_object* v_motive_84_, uint8_t v_t_85_, lean_object* v_h_86_, lean_object* v_both_87_){
_start:
{
lean_inc(v_both_87_);
return v_both_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___boxed(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_both_91_){
_start:
{
uint8_t v_t_boxed_92_; lean_object* v_res_93_; 
v_t_boxed_92_ = lean_unbox(v_t_89_);
v_res_93_ = l_Lean_Meta_SplitKind_both_elim(v_motive_88_, v_t_boxed_92_, v_h_90_, v_both_91_);
lean_dec(v_both_91_);
return v_res_93_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerIte(uint8_t v_x_94_){
_start:
{
switch(v_x_94_)
{
case 0:
{
uint8_t v___x_95_; 
v___x_95_ = 1;
return v___x_95_;
}
case 2:
{
uint8_t v___x_96_; 
v___x_96_ = 1;
return v___x_96_;
}
default: 
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerIte___boxed(lean_object* v_x_98_){
_start:
{
uint8_t v_x_22__boxed_99_; uint8_t v_res_100_; lean_object* v_r_101_; 
v_x_22__boxed_99_ = lean_unbox(v_x_98_);
v_res_100_ = l_Lean_Meta_SplitKind_considerIte(v_x_22__boxed_99_);
v_r_101_ = lean_box(v_res_100_);
return v_r_101_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerMatch(uint8_t v_x_102_){
_start:
{
switch(v_x_102_)
{
case 1:
{
uint8_t v___x_103_; 
v___x_103_ = 1;
return v___x_103_;
}
case 2:
{
uint8_t v___x_104_; 
v___x_104_ = 1;
return v___x_104_;
}
default: 
{
uint8_t v___x_105_; 
v___x_105_ = 0;
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerMatch___boxed(lean_object* v_x_106_){
_start:
{
uint8_t v_x_22__boxed_107_; uint8_t v_res_108_; lean_object* v_r_109_; 
v_x_22__boxed_107_ = lean_unbox(v_x_106_);
v_res_108_ = l_Lean_Meta_SplitKind_considerMatch(v_x_22__boxed_107_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(lean_object* v_a_110_, lean_object* v_x_111_){
_start:
{
if (lean_obj_tag(v_x_111_) == 0)
{
uint8_t v___x_112_; 
v___x_112_ = 0;
return v___x_112_;
}
else
{
lean_object* v_key_113_; lean_object* v_tail_114_; uint8_t v___x_115_; 
v_key_113_ = lean_ctor_get(v_x_111_, 0);
v_tail_114_ = lean_ctor_get(v_x_111_, 2);
v___x_115_ = lean_expr_eqv(v_key_113_, v_a_110_);
if (v___x_115_ == 0)
{
v_x_111_ = v_tail_114_;
goto _start;
}
else
{
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_117_, lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_117_, v_x_118_);
lean_dec(v_x_118_);
lean_dec_ref(v_a_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(lean_object* v_m_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_buckets_123_; lean_object* v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; uint64_t v___x_127_; uint64_t v_fold_128_; uint64_t v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; size_t v___x_132_; size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; size_t v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v_buckets_123_ = lean_ctor_get(v_m_121_, 1);
v___x_124_ = lean_array_get_size(v_buckets_123_);
v___x_125_ = l_Lean_Expr_hash(v_a_122_);
v___x_126_ = 32ULL;
v___x_127_ = lean_uint64_shift_right(v___x_125_, v___x_126_);
v_fold_128_ = lean_uint64_xor(v___x_125_, v___x_127_);
v___x_129_ = 16ULL;
v___x_130_ = lean_uint64_shift_right(v_fold_128_, v___x_129_);
v___x_131_ = lean_uint64_xor(v_fold_128_, v___x_130_);
v___x_132_ = lean_uint64_to_usize(v___x_131_);
v___x_133_ = lean_usize_of_nat(v___x_124_);
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_sub(v___x_133_, v___x_134_);
v___x_136_ = lean_usize_land(v___x_132_, v___x_135_);
v___x_137_ = lean_array_uget_borrowed(v_buckets_123_, v___x_136_);
v___x_138_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_122_, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg___boxed(lean_object* v_m_139_, lean_object* v_a_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_m_139_, v_a_140_);
lean_dec_ref(v_a_140_);
lean_dec_ref(v_m_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(lean_object* v_upperBound_151_, lean_object* v_args_152_, lean_object* v_a_153_, lean_object* v_b_154_){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = lean_nat_dec_lt(v_a_153_, v_upperBound_151_);
if (v___x_155_ == 0)
{
lean_dec(v_a_153_);
lean_inc_ref(v_b_154_);
return v_b_154_;
}
else
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_156_ = l_Lean_instInhabitedExpr;
v___x_157_ = lean_array_get_borrowed(v___x_156_, v_args_152_, v_a_153_);
v___x_158_ = l_Lean_Expr_hasLooseBVars(v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_add(v_a_153_, v___x_160_);
lean_dec(v_a_153_);
v_a_153_ = v___x_161_;
v_b_154_ = v___x_159_;
goto _start;
}
else
{
lean_object* v___x_163_; 
lean_dec(v_a_153_);
v___x_163_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2));
return v___x_163_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_164_, lean_object* v_args_165_, lean_object* v_a_166_, lean_object* v_b_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v_upperBound_164_, v_args_165_, v_a_166_, v_b_167_);
lean_dec_ref(v_b_167_);
lean_dec_ref(v_args_165_);
lean_dec(v_upperBound_164_);
return v_res_168_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0(void){
_start:
{
lean_object* v___x_169_; lean_object* v_dummy_170_; 
v___x_169_ = lean_box(0);
v_dummy_170_ = l_Lean_Expr_sort___override(v___x_169_);
return v_dummy_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(lean_object* v_env_181_, lean_object* v_ctx_182_, lean_object* v_e_183_){
_start:
{
lean_object* v_exceptionSet_184_; uint8_t v_kind_185_; lean_object* v_e_187_; uint8_t v___y_229_; uint8_t v___x_240_; uint8_t v___y_247_; 
v_exceptionSet_184_ = lean_ctor_get(v_ctx_182_, 0);
v_kind_185_ = lean_ctor_get_uint8(v_ctx_182_, sizeof(void*)*1);
v___x_240_ = l_Lean_Meta_SplitKind_considerIte(v_kind_185_);
if (v___x_240_ == 0)
{
goto v___jp_191_;
}
else
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_257_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5));
v___x_259_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_261_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_263_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_262_);
if (v___x_263_ == 0)
{
goto v___jp_241_;
}
else
{
v___y_247_ = v___x_263_;
goto v___jp_246_;
}
}
else
{
v___y_247_ = v___x_240_;
goto v___jp_246_;
}
}
else
{
v___y_247_ = v___x_240_;
goto v___jp_246_;
}
}
else
{
v___y_247_ = v___x_240_;
goto v___jp_246_;
}
}
v___jp_186_:
{
uint8_t v___x_188_; 
v___x_188_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_exceptionSet_184_, v_e_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v_e_187_);
return v___x_189_;
}
else
{
lean_object* v___x_190_; 
lean_dec_ref(v_e_187_);
v___x_190_ = lean_box(0);
return v___x_190_;
}
}
v___jp_191_:
{
uint8_t v___x_192_; 
v___x_192_ = l_Lean_Meta_SplitKind_considerMatch(v_kind_185_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
lean_dec_ref(v_e_183_);
lean_dec_ref(v_env_181_);
v___x_193_ = lean_box(0);
return v___x_193_;
}
else
{
lean_object* v___x_194_; 
v___x_194_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_181_, v_e_183_);
if (lean_obj_tag(v___x_194_) == 1)
{
lean_object* v_val_195_; lean_object* v_numDiscrs_196_; lean_object* v_nargs_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v_dummy_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_args_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_fst_207_; 
v_val_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_val_195_);
lean_dec_ref_known(v___x_194_, 1);
v_numDiscrs_196_ = lean_ctor_get(v_val_195_, 1);
v_nargs_197_ = l_Lean_Expr_getAppNumArgs(v_e_183_);
v___x_198_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_195_);
v___x_199_ = lean_nat_add(v___x_198_, v_numDiscrs_196_);
v_dummy_200_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0);
lean_inc(v_nargs_197_);
v___x_201_ = lean_mk_array(v_nargs_197_, v_dummy_200_);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = lean_nat_sub(v_nargs_197_, v___x_202_);
lean_dec(v_nargs_197_);
lean_inc_ref(v_e_183_);
v_args_204_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_183_, v___x_201_, v___x_203_);
v___x_205_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_206_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v___x_199_, v_args_204_, v___x_198_, v___x_205_);
lean_dec(v___x_199_);
v_fst_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_fst_207_);
lean_dec_ref(v___x_206_);
if (lean_obj_tag(v_fst_207_) == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_208_ = lean_array_get_size(v_args_204_);
lean_dec_ref(v_args_204_);
v___x_209_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_195_);
lean_dec(v_val_195_);
v___x_210_ = lean_nat_sub(v___x_208_, v___x_209_);
lean_dec(v___x_209_);
v___x_211_ = l_Lean_Expr_getBoundedAppFn(v___x_210_, v_e_183_);
lean_dec_ref(v_e_183_);
v_e_187_ = v___x_211_;
goto v___jp_186_;
}
else
{
lean_object* v_val_212_; 
lean_dec_ref(v_args_204_);
lean_dec(v_val_195_);
lean_dec_ref(v_e_183_);
v_val_212_ = lean_ctor_get(v_fst_207_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v_fst_207_, 1);
return v_val_212_;
}
}
else
{
lean_object* v___x_213_; 
lean_dec(v___x_194_);
lean_dec_ref(v_e_183_);
v___x_213_ = lean_box(0);
return v___x_213_;
}
}
}
v___jp_214_:
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3));
v___x_216_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_215_);
if (v___x_216_ == 0)
{
goto v___jp_191_;
}
else
{
lean_object* v_numArgs_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_numArgs_217_ = l_Lean_Expr_getAppNumArgs(v_e_183_);
v___x_218_ = lean_unsigned_to_nat(6u);
v___x_219_ = lean_nat_dec_le(v___x_218_, v_numArgs_217_);
if (v___x_219_ == 0)
{
lean_dec(v_numArgs_217_);
goto v___jp_191_;
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = lean_unsigned_to_nat(4u);
v___x_221_ = l_Lean_Expr_getRevArg_x21(v_e_183_, v___x_220_);
v___x_222_ = l_Lean_Expr_hasLooseBVars(v___x_221_);
lean_dec_ref(v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_223_ = lean_unsigned_to_nat(3u);
v___x_224_ = l_Lean_Expr_getRevArg_x21(v_e_183_, v___x_223_);
v___x_225_ = l_Lean_Expr_hasLooseBVars(v___x_224_);
lean_dec_ref(v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec_ref(v_env_181_);
v___x_226_ = lean_nat_sub(v_numArgs_217_, v___x_218_);
lean_dec(v_numArgs_217_);
v___x_227_ = l_Lean_Expr_getBoundedAppFn(v___x_226_, v_e_183_);
lean_dec_ref(v_e_183_);
v_e_187_ = v___x_227_;
goto v___jp_186_;
}
else
{
lean_dec(v_numArgs_217_);
goto v___jp_191_;
}
}
else
{
lean_dec(v_numArgs_217_);
goto v___jp_191_;
}
}
}
}
v___jp_228_:
{
lean_object* v_numArgs_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v_numArgs_230_ = l_Lean_Expr_getAppNumArgs(v_e_183_);
v___x_231_ = lean_unsigned_to_nat(4u);
v___x_232_ = lean_nat_dec_le(v___x_231_, v_numArgs_230_);
if (v___x_232_ == 0)
{
lean_dec(v_numArgs_230_);
goto v___jp_214_;
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_nat_sub(v_numArgs_230_, v___x_233_);
v___x_235_ = lean_nat_sub(v___x_234_, v___x_233_);
lean_dec(v___x_234_);
v___x_236_ = l_Lean_Expr_getRevArg_x21(v_e_183_, v___x_235_);
v___x_237_ = l_Lean_Expr_hasLooseBVars(v___x_236_);
lean_dec_ref(v___x_236_);
if (v___x_237_ == 0)
{
if (v___y_229_ == 0)
{
lean_dec(v_numArgs_230_);
goto v___jp_214_;
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec_ref(v_env_181_);
v___x_238_ = lean_nat_sub(v_numArgs_230_, v___x_231_);
lean_dec(v_numArgs_230_);
v___x_239_ = l_Lean_Expr_getBoundedAppFn(v___x_238_, v_e_183_);
lean_dec_ref(v_e_183_);
v_e_187_ = v___x_239_;
goto v___jp_186_;
}
}
else
{
lean_dec(v_numArgs_230_);
goto v___jp_214_;
}
}
}
v___jp_241_:
{
lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_242_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__6));
v___x_243_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__9));
v___x_245_ = l_Lean_Expr_isAppOf(v_e_183_, v___x_244_);
if (v___x_245_ == 0)
{
goto v___jp_214_;
}
else
{
v___y_229_ = v___x_245_;
goto v___jp_228_;
}
}
else
{
v___y_229_ = v___x_240_;
goto v___jp_228_;
}
}
v___jp_246_:
{
lean_object* v_numArgs_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v_numArgs_248_ = l_Lean_Expr_getAppNumArgs(v_e_183_);
v___x_249_ = lean_unsigned_to_nat(5u);
v___x_250_ = lean_nat_dec_le(v___x_249_, v_numArgs_248_);
if (v___x_250_ == 0)
{
lean_dec(v_numArgs_248_);
goto v___jp_241_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_251_ = lean_unsigned_to_nat(3u);
v___x_252_ = l_Lean_Expr_getRevArg_x21(v_e_183_, v___x_251_);
v___x_253_ = l_Lean_Expr_hasLooseBVars(v___x_252_);
lean_dec_ref(v___x_252_);
if (v___x_253_ == 0)
{
if (v___y_247_ == 0)
{
lean_dec(v_numArgs_248_);
goto v___jp_241_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec_ref(v_env_181_);
v___x_254_ = lean_nat_sub(v_numArgs_248_, v___x_249_);
lean_dec(v_numArgs_248_);
v___x_255_ = l_Lean_Expr_getBoundedAppFn(v___x_254_, v_e_183_);
lean_dec_ref(v_e_183_);
v_e_187_ = v___x_255_;
goto v___jp_186_;
}
}
else
{
lean_dec(v_numArgs_248_);
goto v___jp_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___boxed(lean_object* v_env_264_, lean_object* v_ctx_265_, lean_object* v_e_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(v_env_264_, v_ctx_265_, v_e_266_);
lean_dec_ref(v_ctx_265_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(lean_object* v_00_u03b2_268_, lean_object* v_m_269_, lean_object* v_a_270_){
_start:
{
uint8_t v___x_271_; 
v___x_271_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_m_269_, v_a_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___boxed(lean_object* v_00_u03b2_272_, lean_object* v_m_273_, lean_object* v_a_274_){
_start:
{
uint8_t v_res_275_; lean_object* v_r_276_; 
v_res_275_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(v_00_u03b2_272_, v_m_273_, v_a_274_);
lean_dec_ref(v_a_274_);
lean_dec_ref(v_m_273_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(lean_object* v_upperBound_277_, lean_object* v_args_278_, lean_object* v_inst_279_, lean_object* v_R_280_, lean_object* v_a_281_, lean_object* v_b_282_, lean_object* v_c_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v_upperBound_277_, v_args_278_, v_a_281_, v_b_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___boxed(lean_object* v_upperBound_285_, lean_object* v_args_286_, lean_object* v_inst_287_, lean_object* v_R_288_, lean_object* v_a_289_, lean_object* v_b_290_, lean_object* v_c_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(v_upperBound_285_, v_args_286_, v_inst_287_, v_R_288_, v_a_289_, v_b_290_, v_c_291_);
lean_dec_ref(v_b_290_);
lean_dec_ref(v_args_286_);
lean_dec(v_upperBound_285_);
return v_res_292_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(lean_object* v_00_u03b2_293_, lean_object* v_a_294_, lean_object* v_x_295_){
_start:
{
uint8_t v___x_296_; 
v___x_296_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_294_, v_x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_297_, lean_object* v_a_298_, lean_object* v_x_299_){
_start:
{
uint8_t v_res_300_; lean_object* v_r_301_; 
v_res_300_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(v_00_u03b2_297_, v_a_298_, v_x_299_);
lean_dec(v_x_299_);
lean_dec_ref(v_a_298_);
v_r_301_ = lean_box(v_res_300_);
return v_r_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg(lean_object* v_e_306_, lean_object* v_a_307_){
_start:
{
lean_object* v___f_309_; lean_object* v___f_310_; uint8_t v___x_311_; 
v___f_309_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0));
v___f_310_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1));
lean_inc_ref(v_e_306_);
v___x_311_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_309_, v___f_310_, v_a_307_, v_e_306_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_312_ = lean_box(0);
v___x_313_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_309_, v___f_310_, v_a_307_, v_e_306_, v___x_312_);
v___x_314_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2));
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v___x_313_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
else
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec_ref(v_e_306_);
v___x_317_ = lean_box(0);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v_a_307_);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___boxed(lean_object* v_e_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_Meta_FindSplitImpl_checkVisited___redArg(v_e_320_, v_a_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited(lean_object* v_e_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v___f_332_; lean_object* v___f_333_; uint8_t v___x_334_; 
v___f_332_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0));
v___f_333_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1));
lean_inc_ref(v_e_324_);
v___x_334_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_332_, v___f_333_, v_a_326_, v_e_324_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_335_ = lean_box(0);
v___x_336_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_332_, v___f_333_, v_a_326_, v_e_324_, v___x_335_);
v___x_337_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2));
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_336_);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
lean_dec_ref(v_e_324_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_a_326_);
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___boxed(lean_object* v_e_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Meta_FindSplitImpl_checkVisited(v_e_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec_ref(v_a_344_);
return v_res_351_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(lean_object* v_a_352_, lean_object* v_x_353_){
_start:
{
if (lean_obj_tag(v_x_353_) == 0)
{
uint8_t v___x_354_; 
v___x_354_ = 0;
return v___x_354_;
}
else
{
lean_object* v_key_355_; lean_object* v_tail_356_; size_t v___x_357_; size_t v___x_358_; uint8_t v___x_359_; 
v_key_355_ = lean_ctor_get(v_x_353_, 0);
v_tail_356_ = lean_ctor_get(v_x_353_, 2);
v___x_357_ = lean_ptr_addr(v_key_355_);
v___x_358_ = lean_ptr_addr(v_a_352_);
v___x_359_ = lean_usize_dec_eq(v___x_357_, v___x_358_);
if (v___x_359_ == 0)
{
v_x_353_ = v_tail_356_;
goto _start;
}
else
{
return v___x_359_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg___boxed(lean_object* v_a_361_, lean_object* v_x_362_){
_start:
{
uint8_t v_res_363_; lean_object* v_r_364_; 
v_res_363_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_361_, v_x_362_);
lean_dec(v_x_362_);
lean_dec_ref(v_a_361_);
v_r_364_ = lean_box(v_res_363_);
return v_r_364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
return v_x_365_;
}
else
{
lean_object* v_key_367_; lean_object* v_value_368_; lean_object* v_tail_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_395_; 
v_key_367_ = lean_ctor_get(v_x_366_, 0);
v_value_368_ = lean_ctor_get(v_x_366_, 1);
v_tail_369_ = lean_ctor_get(v_x_366_, 2);
v_isSharedCheck_395_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_395_ == 0)
{
v___x_371_ = v_x_366_;
v_isShared_372_ = v_isSharedCheck_395_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_tail_369_);
lean_inc(v_value_368_);
lean_inc(v_key_367_);
lean_dec(v_x_366_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_395_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; size_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; uint64_t v___x_377_; uint64_t v___x_378_; uint64_t v___x_379_; uint64_t v_fold_380_; uint64_t v___x_381_; uint64_t v___x_382_; uint64_t v___x_383_; size_t v___x_384_; size_t v___x_385_; size_t v___x_386_; size_t v___x_387_; size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_373_ = lean_array_get_size(v_x_365_);
v___x_374_ = lean_ptr_addr(v_key_367_);
v___x_375_ = lean_usize_to_uint64(v___x_374_);
v___x_376_ = 11ULL;
v___x_377_ = lean_uint64_mix_hash(v___x_375_, v___x_376_);
v___x_378_ = 32ULL;
v___x_379_ = lean_uint64_shift_right(v___x_377_, v___x_378_);
v_fold_380_ = lean_uint64_xor(v___x_377_, v___x_379_);
v___x_381_ = 16ULL;
v___x_382_ = lean_uint64_shift_right(v_fold_380_, v___x_381_);
v___x_383_ = lean_uint64_xor(v_fold_380_, v___x_382_);
v___x_384_ = lean_uint64_to_usize(v___x_383_);
v___x_385_ = lean_usize_of_nat(v___x_373_);
v___x_386_ = ((size_t)1ULL);
v___x_387_ = lean_usize_sub(v___x_385_, v___x_386_);
v___x_388_ = lean_usize_land(v___x_384_, v___x_387_);
v___x_389_ = lean_array_uget_borrowed(v_x_365_, v___x_388_);
lean_inc(v___x_389_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 2, v___x_389_);
v___x_391_ = v___x_371_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_key_367_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_value_368_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v___x_389_);
v___x_391_ = v_reuseFailAlloc_394_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
lean_object* v___x_392_; 
v___x_392_ = lean_array_uset(v_x_365_, v___x_388_, v___x_391_);
v_x_365_ = v___x_392_;
v_x_366_ = v_tail_369_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(lean_object* v_i_396_, lean_object* v_source_397_, lean_object* v_target_398_){
_start:
{
lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_399_ = lean_array_get_size(v_source_397_);
v___x_400_ = lean_nat_dec_lt(v_i_396_, v___x_399_);
if (v___x_400_ == 0)
{
lean_dec_ref(v_source_397_);
lean_dec(v_i_396_);
return v_target_398_;
}
else
{
lean_object* v_es_401_; lean_object* v___x_402_; lean_object* v_source_403_; lean_object* v_target_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_es_401_ = lean_array_fget(v_source_397_, v_i_396_);
v___x_402_ = lean_box(0);
v_source_403_ = lean_array_fset(v_source_397_, v_i_396_, v___x_402_);
v_target_404_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_target_398_, v_es_401_);
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = lean_nat_add(v_i_396_, v___x_405_);
lean_dec(v_i_396_);
v_i_396_ = v___x_406_;
v_source_397_ = v_source_403_;
v_target_398_ = v_target_404_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(lean_object* v_data_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v_nbuckets_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_409_ = lean_array_get_size(v_data_408_);
v___x_410_ = lean_unsigned_to_nat(2u);
v_nbuckets_411_ = lean_nat_mul(v___x_409_, v___x_410_);
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = lean_box(0);
v___x_414_ = lean_mk_array(v_nbuckets_411_, v___x_413_);
v___x_415_ = lean_array_propagate_mark(v_data_408_, v___x_414_);
v___x_416_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(v___x_412_, v_data_408_, v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(lean_object* v_m_417_, lean_object* v_a_418_, lean_object* v_b_419_){
_start:
{
lean_object* v_size_420_; lean_object* v_buckets_421_; lean_object* v___x_422_; size_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; uint64_t v___x_426_; uint64_t v___x_427_; uint64_t v___x_428_; uint64_t v_fold_429_; uint64_t v___x_430_; uint64_t v___x_431_; uint64_t v___x_432_; size_t v___x_433_; size_t v___x_434_; size_t v___x_435_; size_t v___x_436_; size_t v___x_437_; lean_object* v_bkt_438_; uint8_t v___x_439_; 
v_size_420_ = lean_ctor_get(v_m_417_, 0);
v_buckets_421_ = lean_ctor_get(v_m_417_, 1);
v___x_422_ = lean_array_get_size(v_buckets_421_);
v___x_423_ = lean_ptr_addr(v_a_418_);
v___x_424_ = lean_usize_to_uint64(v___x_423_);
v___x_425_ = 11ULL;
v___x_426_ = lean_uint64_mix_hash(v___x_424_, v___x_425_);
v___x_427_ = 32ULL;
v___x_428_ = lean_uint64_shift_right(v___x_426_, v___x_427_);
v_fold_429_ = lean_uint64_xor(v___x_426_, v___x_428_);
v___x_430_ = 16ULL;
v___x_431_ = lean_uint64_shift_right(v_fold_429_, v___x_430_);
v___x_432_ = lean_uint64_xor(v_fold_429_, v___x_431_);
v___x_433_ = lean_uint64_to_usize(v___x_432_);
v___x_434_ = lean_usize_of_nat(v___x_422_);
v___x_435_ = ((size_t)1ULL);
v___x_436_ = lean_usize_sub(v___x_434_, v___x_435_);
v___x_437_ = lean_usize_land(v___x_433_, v___x_436_);
v_bkt_438_ = lean_array_uget_borrowed(v_buckets_421_, v___x_437_);
v___x_439_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_418_, v_bkt_438_);
if (v___x_439_ == 0)
{
lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_460_; 
lean_inc_ref(v_buckets_421_);
lean_inc(v_size_420_);
v_isSharedCheck_460_ = !lean_is_exclusive(v_m_417_);
if (v_isSharedCheck_460_ == 0)
{
lean_object* v_unused_461_; lean_object* v_unused_462_; 
v_unused_461_ = lean_ctor_get(v_m_417_, 1);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v_m_417_, 0);
lean_dec(v_unused_462_);
v___x_441_ = v_m_417_;
v_isShared_442_ = v_isSharedCheck_460_;
goto v_resetjp_440_;
}
else
{
lean_dec(v_m_417_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_460_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v_size_x27_444_; lean_object* v___x_445_; lean_object* v_buckets_x27_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_443_ = lean_unsigned_to_nat(1u);
v_size_x27_444_ = lean_nat_add(v_size_420_, v___x_443_);
lean_dec(v_size_420_);
lean_inc(v_bkt_438_);
v___x_445_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_445_, 0, v_a_418_);
lean_ctor_set(v___x_445_, 1, v_b_419_);
lean_ctor_set(v___x_445_, 2, v_bkt_438_);
v_buckets_x27_446_ = lean_array_uset(v_buckets_421_, v___x_437_, v___x_445_);
v___x_447_ = lean_unsigned_to_nat(4u);
v___x_448_ = lean_nat_mul(v_size_x27_444_, v___x_447_);
v___x_449_ = lean_unsigned_to_nat(3u);
v___x_450_ = lean_nat_div(v___x_448_, v___x_449_);
lean_dec(v___x_448_);
v___x_451_ = lean_array_get_size(v_buckets_x27_446_);
v___x_452_ = lean_nat_dec_le(v___x_450_, v___x_451_);
lean_dec(v___x_450_);
if (v___x_452_ == 0)
{
lean_object* v_val_453_; lean_object* v___x_455_; 
v_val_453_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(v_buckets_x27_446_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v_val_453_);
lean_ctor_set(v___x_441_, 0, v_size_x27_444_);
v___x_455_ = v___x_441_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_size_x27_444_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_val_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
else
{
lean_object* v___x_458_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v_buckets_x27_446_);
lean_ctor_set(v___x_441_, 0, v_size_x27_444_);
v___x_458_ = v___x_441_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_size_x27_444_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_buckets_x27_446_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
else
{
lean_dec(v_b_419_);
lean_dec_ref(v_a_418_);
return v_m_417_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(lean_object* v_m_463_, lean_object* v_a_464_){
_start:
{
lean_object* v_buckets_465_; lean_object* v___x_466_; size_t v___x_467_; uint64_t v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v___x_471_; uint64_t v___x_472_; uint64_t v_fold_473_; uint64_t v___x_474_; uint64_t v___x_475_; uint64_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; size_t v___x_480_; size_t v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_buckets_465_ = lean_ctor_get(v_m_463_, 1);
v___x_466_ = lean_array_get_size(v_buckets_465_);
v___x_467_ = lean_ptr_addr(v_a_464_);
v___x_468_ = lean_usize_to_uint64(v___x_467_);
v___x_469_ = 11ULL;
v___x_470_ = lean_uint64_mix_hash(v___x_468_, v___x_469_);
v___x_471_ = 32ULL;
v___x_472_ = lean_uint64_shift_right(v___x_470_, v___x_471_);
v_fold_473_ = lean_uint64_xor(v___x_470_, v___x_472_);
v___x_474_ = 16ULL;
v___x_475_ = lean_uint64_shift_right(v_fold_473_, v___x_474_);
v___x_476_ = lean_uint64_xor(v_fold_473_, v___x_475_);
v___x_477_ = lean_uint64_to_usize(v___x_476_);
v___x_478_ = lean_usize_of_nat(v___x_466_);
v___x_479_ = ((size_t)1ULL);
v___x_480_ = lean_usize_sub(v___x_478_, v___x_479_);
v___x_481_ = lean_usize_land(v___x_477_, v___x_480_);
v___x_482_ = lean_array_uget_borrowed(v_buckets_465_, v___x_481_);
v___x_483_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_464_, v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg___boxed(lean_object* v_m_484_, lean_object* v_a_485_){
_start:
{
uint8_t v_res_486_; lean_object* v_r_487_; 
v_res_486_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_m_484_, v_a_485_);
lean_dec_ref(v_a_485_);
lean_dec_ref(v_m_484_);
v_r_487_ = lean_box(v_res_486_);
return v_r_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit(lean_object* v_e_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; uint8_t v___x_527_; 
v___x_527_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_a_490_, v_e_488_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v_env_531_; lean_object* v___x_532_; 
v___x_528_ = lean_box(0);
lean_inc_ref_n(v_e_488_, 2);
v___x_529_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(v_a_490_, v_e_488_, v___x_528_);
v___x_530_ = lean_st_ref_get(v_a_494_);
v_env_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc_ref(v_env_531_);
lean_dec(v___x_530_);
v___x_532_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(v_env_531_, v_a_489_, v_e_488_);
if (lean_obj_tag(v___x_532_) == 1)
{
lean_object* v___x_533_; lean_object* v___x_534_; 
lean_dec_ref(v_e_488_);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v___x_529_);
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
else
{
uint8_t v___x_535_; 
lean_dec(v___x_532_);
v___x_535_ = l_Lean_Expr_hasLooseBVars(v_e_488_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_inc_ref(v_e_488_);
v___x_536_ = l_Lean_Meta_isProof(v_e_488_, v_a_491_, v_a_492_, v_a_493_, v_a_494_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_547_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_547_ == 0)
{
v___x_539_ = v___x_536_;
v_isShared_540_ = v_isSharedCheck_547_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_536_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_547_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
uint8_t v___x_541_; 
v___x_541_ = lean_unbox(v_a_537_);
lean_dec(v_a_537_);
if (v___x_541_ == 0)
{
lean_del_object(v___x_539_);
v___y_497_ = v_a_489_;
v___y_498_ = v___x_529_;
v___y_499_ = v_a_491_;
v___y_500_ = v_a_492_;
v___y_501_ = v_a_493_;
v___y_502_ = v_a_494_;
goto v___jp_496_;
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
lean_dec_ref(v_e_488_);
v___x_542_ = lean_box(0);
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___x_529_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_543_);
v___x_545_ = v___x_539_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec_ref(v___x_529_);
lean_dec_ref(v_e_488_);
v_a_548_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_536_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_536_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
else
{
v___y_497_ = v_a_489_;
v___y_498_ = v___x_529_;
v___y_499_ = v_a_491_;
v___y_500_ = v_a_492_;
v___y_501_ = v_a_493_;
v___y_502_ = v_a_494_;
goto v___jp_496_;
}
}
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec_ref(v_e_488_);
v___x_556_ = lean_box(0);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
lean_ctor_set(v___x_557_, 1, v_a_490_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
return v___x_558_;
}
v___jp_496_:
{
switch(lean_obj_tag(v_e_488_))
{
case 6:
{
lean_object* v_body_503_; 
v_body_503_ = lean_ctor_get(v_e_488_, 2);
lean_inc_ref(v_body_503_);
lean_dec_ref_known(v_e_488_, 3);
v_e_488_ = v_body_503_;
v_a_489_ = v___y_497_;
v_a_490_ = v___y_498_;
v_a_491_ = v___y_499_;
v_a_492_ = v___y_500_;
v_a_493_ = v___y_501_;
v_a_494_ = v___y_502_;
goto _start;
}
case 11:
{
lean_object* v_struct_505_; 
v_struct_505_ = lean_ctor_get(v_e_488_, 2);
lean_inc_ref(v_struct_505_);
lean_dec_ref_known(v_e_488_, 3);
v_e_488_ = v_struct_505_;
v_a_489_ = v___y_497_;
v_a_490_ = v___y_498_;
v_a_491_ = v___y_499_;
v_a_492_ = v___y_500_;
v_a_493_ = v___y_501_;
v_a_494_ = v___y_502_;
goto _start;
}
case 10:
{
lean_object* v_expr_507_; 
v_expr_507_ = lean_ctor_get(v_e_488_, 1);
lean_inc_ref(v_expr_507_);
lean_dec_ref_known(v_e_488_, 2);
v_e_488_ = v_expr_507_;
v_a_489_ = v___y_497_;
v_a_490_ = v___y_498_;
v_a_491_ = v___y_499_;
v_a_492_ = v___y_500_;
v_a_493_ = v___y_501_;
v_a_494_ = v___y_502_;
goto _start;
}
case 7:
{
lean_object* v_binderType_509_; lean_object* v_body_510_; lean_object* v___x_511_; 
v_binderType_509_ = lean_ctor_get(v_e_488_, 1);
lean_inc_ref(v_binderType_509_);
v_body_510_ = lean_ctor_get(v_e_488_, 2);
lean_inc_ref(v_body_510_);
lean_dec_ref_known(v_e_488_, 3);
v___x_511_ = l_Lean_Meta_FindSplitImpl_visit(v_binderType_509_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v_fst_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_fst_513_ = lean_ctor_get(v_a_512_, 0);
if (lean_obj_tag(v_fst_513_) == 0)
{
lean_object* v_snd_514_; 
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
v_snd_514_ = lean_ctor_get(v_a_512_, 1);
lean_inc(v_snd_514_);
lean_dec(v_a_512_);
v_e_488_ = v_body_510_;
v_a_489_ = v___y_497_;
v_a_490_ = v_snd_514_;
v_a_491_ = v___y_499_;
v_a_492_ = v___y_500_;
v_a_493_ = v___y_501_;
v_a_494_ = v___y_502_;
goto _start;
}
else
{
lean_dec_ref(v_body_510_);
return v___x_511_;
}
}
else
{
lean_dec_ref(v_body_510_);
return v___x_511_;
}
}
case 8:
{
lean_object* v_value_516_; lean_object* v_body_517_; lean_object* v___x_518_; 
v_value_516_ = lean_ctor_get(v_e_488_, 2);
lean_inc_ref(v_value_516_);
v_body_517_ = lean_ctor_get(v_e_488_, 3);
lean_inc_ref(v_body_517_);
lean_dec_ref_known(v_e_488_, 4);
v___x_518_ = l_Lean_Meta_FindSplitImpl_visit(v_value_516_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v_fst_520_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_fst_520_ = lean_ctor_get(v_a_519_, 0);
if (lean_obj_tag(v_fst_520_) == 0)
{
lean_object* v_snd_521_; 
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v_snd_521_ = lean_ctor_get(v_a_519_, 1);
lean_inc(v_snd_521_);
lean_dec(v_a_519_);
v_e_488_ = v_body_517_;
v_a_489_ = v___y_497_;
v_a_490_ = v_snd_521_;
v_a_491_ = v___y_499_;
v_a_492_ = v___y_500_;
v_a_493_ = v___y_501_;
v_a_494_ = v___y_502_;
goto _start;
}
else
{
lean_dec_ref(v_body_517_);
return v___x_518_;
}
}
else
{
lean_dec_ref(v_body_517_);
return v___x_518_;
}
}
case 5:
{
lean_object* v___x_523_; 
v___x_523_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(v_e_488_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
return v___x_523_;
}
default: 
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec_ref(v_e_488_);
v___x_524_ = lean_box(0);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v___y_498_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(lean_object* v_upperBound_559_, lean_object* v_args_560_, lean_object* v_info_561_, lean_object* v_a_562_, lean_object* v_b_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_a_572_; lean_object* v_snd_573_; lean_object* v_a_577_; lean_object* v_snd_578_; uint8_t v___x_582_; 
v___x_582_ = lean_nat_dec_lt(v_a_562_, v_upperBound_559_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec(v_a_562_);
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_b_563_);
lean_ctor_set(v___x_583_, 1, v___y_565_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
else
{
lean_object* v_paramInfo_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
lean_dec_ref(v_b_563_);
v_paramInfo_585_ = lean_ctor_get(v_info_561_, 0);
v___x_586_ = lean_box(0);
v___x_587_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_588_ = lean_array_fget_borrowed(v_args_560_, v_a_562_);
v___x_589_ = lean_array_get_size(v_paramInfo_585_);
v___x_590_ = lean_nat_dec_lt(v_a_562_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
lean_inc(v___x_588_);
v___x_591_ = l_Lean_Meta_FindSplitImpl_visit(v___x_588_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v_fst_593_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v_fst_593_ = lean_ctor_get(v_a_592_, 0);
if (lean_obj_tag(v_fst_593_) == 1)
{
lean_object* v_snd_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_602_; 
lean_inc_ref(v_fst_593_);
lean_dec(v_a_562_);
v_snd_594_ = lean_ctor_get(v_a_592_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_a_592_);
if (v_isSharedCheck_602_ == 0)
{
lean_object* v_unused_603_; 
v_unused_603_ = lean_ctor_get(v_a_592_, 0);
lean_dec(v_unused_603_);
v___x_596_ = v_a_592_;
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_snd_594_);
lean_dec(v_a_592_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_598_, 0, v_fst_593_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v___x_586_);
lean_ctor_set(v___x_596_, 0, v___x_598_);
v___x_600_ = v___x_596_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___x_586_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
v_a_572_ = v___x_600_;
v_snd_573_ = v_snd_594_;
goto v___jp_571_;
}
}
}
else
{
lean_object* v_snd_604_; 
v_snd_604_ = lean_ctor_get(v_a_592_, 1);
lean_inc(v_snd_604_);
lean_dec(v_a_592_);
v_a_577_ = v___x_587_;
v_snd_578_ = v_snd_604_;
goto v___jp_576_;
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_562_);
v_a_605_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_591_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_591_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v___x_613_; uint8_t v_isProp_614_; 
v___x_613_ = lean_array_fget_borrowed(v_paramInfo_585_, v_a_562_);
v_isProp_614_ = lean_ctor_get_uint8(v___x_613_, sizeof(void*)*1 + 2);
if (v_isProp_614_ == 0)
{
uint8_t v___x_615_; 
v___x_615_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_613_);
if (v___x_615_ == 0)
{
v_a_577_ = v___x_587_;
v_snd_578_ = v___y_565_;
goto v___jp_576_;
}
else
{
lean_object* v___x_616_; 
lean_inc(v___x_588_);
v___x_616_ = l_Lean_Meta_FindSplitImpl_visit(v___x_588_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v_fst_618_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_616_, 1);
v_fst_618_ = lean_ctor_get(v_a_617_, 0);
if (lean_obj_tag(v_fst_618_) == 1)
{
lean_object* v_snd_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_627_; 
lean_inc_ref(v_fst_618_);
lean_dec(v_a_562_);
v_snd_619_ = lean_ctor_get(v_a_617_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_a_617_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; 
v_unused_628_ = lean_ctor_get(v_a_617_, 0);
lean_dec(v_unused_628_);
v___x_621_ = v_a_617_;
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_snd_619_);
lean_dec(v_a_617_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v_fst_618_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 1, v___x_586_);
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v___x_586_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
v_a_572_ = v___x_625_;
v_snd_573_ = v_snd_619_;
goto v___jp_571_;
}
}
}
else
{
lean_object* v_snd_629_; 
v_snd_629_ = lean_ctor_get(v_a_617_, 1);
lean_inc(v_snd_629_);
lean_dec(v_a_617_);
v_a_577_ = v___x_587_;
v_snd_578_ = v_snd_629_;
goto v___jp_576_;
}
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec(v_a_562_);
v_a_630_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_616_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_616_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
else
{
v_a_577_ = v___x_587_;
v_snd_578_ = v___y_565_;
goto v___jp_576_;
}
}
}
v___jp_571_:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v_a_572_);
lean_ctor_set(v___x_574_, 1, v_snd_573_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
v___jp_576_:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1u);
v___x_580_ = lean_nat_add(v_a_562_, v___x_579_);
lean_dec(v_a_562_);
lean_inc_ref(v_a_577_);
v_a_562_ = v___x_580_;
v_b_563_ = v_a_577_;
v___y_565_ = v_snd_578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(lean_object* v_x_642_, lean_object* v_x_643_, lean_object* v_x_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v_info_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; 
if (lean_obj_tag(v_x_642_) == 5)
{
lean_object* v_fn_694_; lean_object* v_arg_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_fn_694_ = lean_ctor_get(v_x_642_, 0);
lean_inc_ref(v_fn_694_);
v_arg_695_ = lean_ctor_get(v_x_642_, 1);
lean_inc_ref(v_arg_695_);
lean_dec_ref_known(v_x_642_, 2);
v___x_696_ = lean_array_set(v_x_643_, v_x_644_, v_arg_695_);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_nat_sub(v_x_644_, v___x_697_);
lean_dec(v_x_644_);
v_x_642_ = v_fn_694_;
v_x_643_ = v___x_696_;
v_x_644_ = v___x_698_;
goto _start;
}
else
{
uint8_t v___x_700_; 
lean_dec(v_x_644_);
v___x_700_ = l_Lean_Expr_hasLooseBVars(v_x_642_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = lean_box(0);
lean_inc_ref(v_x_642_);
v___x_702_ = l_Lean_Meta_getFunInfo(v_x_642_, v___x_701_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v_info_653_ = v_a_703_;
v___y_654_ = v___y_645_;
v___y_655_ = v___y_646_;
v___y_656_ = v___y_647_;
v___y_657_ = v___y_648_;
v___y_658_ = v___y_649_;
v___y_659_ = v___y_650_;
goto v___jp_652_;
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec_ref(v___y_646_);
lean_dec_ref(v_x_643_);
lean_dec_ref(v_x_642_);
v_a_704_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_702_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_702_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v___x_712_; 
v___x_712_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1));
v_info_653_ = v___x_712_;
v___y_654_ = v___y_645_;
v___y_655_ = v___y_646_;
v___y_656_ = v___y_647_;
v___y_657_ = v___y_648_;
v___y_658_ = v___y_649_;
v___y_659_ = v___y_650_;
goto v___jp_652_;
}
}
v___jp_652_:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_660_ = lean_array_get_size(v_x_643_);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_663_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v___x_660_, v_x_643_, v_info_653_, v___x_661_, v___x_662_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec_ref(v_info_653_);
lean_dec_ref(v_x_643_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_685_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_685_ == 0)
{
v___x_666_ = v___x_663_;
v_isShared_667_ = v_isSharedCheck_685_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_685_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v_fst_668_; lean_object* v_fst_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_683_; 
v_fst_668_ = lean_ctor_get(v_a_664_, 0);
lean_inc(v_fst_668_);
v_fst_669_ = lean_ctor_get(v_fst_668_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v_fst_668_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v_fst_668_, 1);
lean_dec(v_unused_684_);
v___x_671_ = v_fst_668_;
v_isShared_672_ = v_isSharedCheck_683_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_fst_669_);
lean_dec(v_fst_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_683_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
if (lean_obj_tag(v_fst_669_) == 0)
{
lean_object* v_snd_673_; lean_object* v___x_674_; 
lean_del_object(v___x_671_);
lean_del_object(v___x_666_);
v_snd_673_ = lean_ctor_get(v_a_664_, 1);
lean_inc(v_snd_673_);
lean_dec(v_a_664_);
v___x_674_ = l_Lean_Meta_FindSplitImpl_visit(v_x_642_, v___y_654_, v_snd_673_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
return v___x_674_;
}
else
{
lean_object* v_snd_675_; lean_object* v_val_676_; lean_object* v___x_678_; 
lean_dec_ref(v_x_642_);
v_snd_675_ = lean_ctor_get(v_a_664_, 1);
lean_inc(v_snd_675_);
lean_dec(v_a_664_);
v_val_676_ = lean_ctor_get(v_fst_669_, 0);
lean_inc(v_val_676_);
lean_dec_ref_known(v_fst_669_, 1);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v_snd_675_);
lean_ctor_set(v___x_671_, 0, v_val_676_);
v___x_678_ = v___x_671_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_val_676_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_snd_675_);
v___x_678_ = v_reuseFailAlloc_682_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_680_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_678_);
v___x_680_ = v___x_666_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
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
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_x_642_);
v_a_686_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_663_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_663_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(lean_object* v_e_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_dummy_721_; lean_object* v_nargs_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_dummy_721_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0);
v_nargs_722_ = l_Lean_Expr_getAppNumArgs(v_e_713_);
lean_inc(v_nargs_722_);
v___x_723_ = lean_mk_array(v_nargs_722_, v_dummy_721_);
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = lean_nat_sub(v_nargs_722_, v___x_724_);
lean_dec(v_nargs_722_);
v___x_726_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(v_e_713_, v___x_723_, v___x_725_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f___boxed(lean_object* v_e_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(v_e_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec_ref(v_a_728_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___boxed(lean_object* v_x_736_, lean_object* v_x_737_, lean_object* v_x_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(v_x_736_, v_x_737_, v_x_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec_ref(v___y_739_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___boxed(lean_object* v_upperBound_747_, lean_object* v_args_748_, lean_object* v_info_749_, lean_object* v_a_750_, lean_object* v_b_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v_upperBound_747_, v_args_748_, v_info_749_, v_a_750_, v_b_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec_ref(v___y_752_);
lean_dec_ref(v_info_749_);
lean_dec_ref(v_args_748_);
lean_dec(v_upperBound_747_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit___boxed(lean_object* v_e_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_Meta_FindSplitImpl_visit(v_e_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_, v_a_765_, v_a_766_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec_ref(v_a_761_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(lean_object* v_upperBound_769_, lean_object* v_args_770_, lean_object* v_info_771_, lean_object* v_inst_772_, lean_object* v_R_773_, lean_object* v_a_774_, lean_object* v_b_775_, lean_object* v_c_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v_upperBound_769_, v_args_770_, v_info_771_, v_a_774_, v_b_775_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___boxed(lean_object* v_upperBound_785_, lean_object* v_args_786_, lean_object* v_info_787_, lean_object* v_inst_788_, lean_object* v_R_789_, lean_object* v_a_790_, lean_object* v_b_791_, lean_object* v_c_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(v_upperBound_785_, v_args_786_, v_info_787_, v_inst_788_, v_R_789_, v_a_790_, v_b_791_, v_c_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec_ref(v___y_793_);
lean_dec_ref(v_info_787_);
lean_dec_ref(v_args_786_);
lean_dec(v_upperBound_785_);
return v_res_800_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(lean_object* v_00_u03b2_801_, lean_object* v_m_802_, lean_object* v_a_803_){
_start:
{
uint8_t v___x_804_; 
v___x_804_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_m_802_, v_a_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___boxed(lean_object* v_00_u03b2_805_, lean_object* v_m_806_, lean_object* v_a_807_){
_start:
{
uint8_t v_res_808_; lean_object* v_r_809_; 
v_res_808_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(v_00_u03b2_805_, v_m_806_, v_a_807_);
lean_dec_ref(v_a_807_);
lean_dec_ref(v_m_806_);
v_r_809_ = lean_box(v_res_808_);
return v_r_809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4(lean_object* v_00_u03b2_810_, lean_object* v_m_811_, lean_object* v_a_812_, lean_object* v_b_813_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(v_m_811_, v_a_812_, v_b_813_);
return v___x_814_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(lean_object* v_00_u03b2_815_, lean_object* v_a_816_, lean_object* v_x_817_){
_start:
{
uint8_t v___x_818_; 
v___x_818_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_816_, v_x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___boxed(lean_object* v_00_u03b2_819_, lean_object* v_a_820_, lean_object* v_x_821_){
_start:
{
uint8_t v_res_822_; lean_object* v_r_823_; 
v_res_822_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(v_00_u03b2_819_, v_a_820_, v_x_821_);
lean_dec(v_x_821_);
lean_dec_ref(v_a_820_);
v_r_823_ = lean_box(v_res_822_);
return v_r_823_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5(lean_object* v_00_u03b2_824_, lean_object* v_data_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(v_data_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_827_, lean_object* v_i_828_, lean_object* v_source_829_, lean_object* v_target_830_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(v_i_828_, v_source_829_, v_target_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_832_, lean_object* v_x_833_, lean_object* v_x_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_x_833_, v_x_834_);
return v___x_835_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_unsigned_to_nat(64u);
v___x_837_ = l_Lean_mkPtrSet___redArg(v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(uint8_t v_kind_838_, lean_object* v_exceptionSet_839_, lean_object* v_e_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_846_, 0, v_exceptionSet_839_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*1, v_kind_838_);
v___x_847_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0);
v___x_848_ = l_Lean_Meta_FindSplitImpl_visit(v_e_840_, v___x_846_, v___x_847_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
lean_dec_ref_known(v___x_846_, 1);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_857_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_857_ == 0)
{
v___x_851_ = v___x_848_;
v_isShared_852_ = v_isSharedCheck_857_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_848_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_857_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v_fst_853_; lean_object* v___x_855_; 
v_fst_853_ = lean_ctor_get(v_a_849_, 0);
lean_inc(v_fst_853_);
lean_dec(v_a_849_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v_fst_853_);
v___x_855_ = v___x_851_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_fst_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
v_a_858_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_848_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_848_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___boxed(lean_object* v_kind_866_, lean_object* v_exceptionSet_867_, lean_object* v_e_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
uint8_t v_kind_boxed_874_; lean_object* v_res_875_; 
v_kind_boxed_874_ = lean_unbox(v_kind_866_);
v_res_875_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(v_kind_boxed_874_, v_exceptionSet_867_, v_e_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
lean_dec(v_a_870_);
lean_dec_ref(v_a_869_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(lean_object* v_msgData_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_882_; lean_object* v_env_883_; uint8_t v___x_884_; lean_object* v_env_885_; lean_object* v___x_886_; lean_object* v_toCold_887_; lean_object* v_mctx_888_; lean_object* v_lctx_889_; lean_object* v_options_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_882_ = lean_st_ref_get(v___y_880_);
v_env_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc_ref(v_env_883_);
lean_dec(v___x_882_);
v___x_884_ = 0;
v_env_885_ = l_Lean_Environment_setRecordingDeps(v_env_883_, v___x_884_);
v___x_886_ = lean_st_ref_get(v___y_878_);
v_toCold_887_ = lean_ctor_get(v___y_879_, 0);
v_mctx_888_ = lean_ctor_get(v___x_886_, 0);
lean_inc_ref(v_mctx_888_);
lean_dec(v___x_886_);
v_lctx_889_ = lean_ctor_get(v___y_877_, 2);
v_options_890_ = lean_ctor_get(v_toCold_887_, 2);
lean_inc_ref(v_options_890_);
lean_inc_ref(v_lctx_889_);
v___x_891_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_891_, 0, v_env_885_);
lean_ctor_set(v___x_891_, 1, v_mctx_888_);
lean_ctor_set(v___x_891_, 2, v_lctx_889_);
lean_ctor_set(v___x_891_, 3, v_options_890_);
v___x_892_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
lean_ctor_set(v___x_892_, 1, v_msgData_876_);
v___x_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msgData_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
return v_res_900_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_901_; double v___x_902_; 
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = lean_float_of_nat(v___x_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(lean_object* v_cls_906_, lean_object* v_msg_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_ref_913_; lean_object* v___x_914_; lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_960_; 
v_ref_913_ = lean_ctor_get(v___y_910_, 2);
v___x_914_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msg_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
v_a_915_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_960_ == 0)
{
v___x_917_ = v___x_914_;
v_isShared_918_ = v_isSharedCheck_960_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_914_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_960_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; lean_object* v_traceState_920_; lean_object* v_env_921_; lean_object* v_nextMacroScope_922_; lean_object* v_ngen_923_; lean_object* v_auxDeclNGen_924_; lean_object* v_cache_925_; lean_object* v_recordedDeps_926_; lean_object* v_messages_927_; lean_object* v_infoState_928_; lean_object* v_snapshotTasks_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_959_; 
v___x_919_ = lean_st_ref_take(v___y_911_);
v_traceState_920_ = lean_ctor_get(v___x_919_, 4);
v_env_921_ = lean_ctor_get(v___x_919_, 0);
v_nextMacroScope_922_ = lean_ctor_get(v___x_919_, 1);
v_ngen_923_ = lean_ctor_get(v___x_919_, 2);
v_auxDeclNGen_924_ = lean_ctor_get(v___x_919_, 3);
v_cache_925_ = lean_ctor_get(v___x_919_, 5);
v_recordedDeps_926_ = lean_ctor_get(v___x_919_, 6);
v_messages_927_ = lean_ctor_get(v___x_919_, 7);
v_infoState_928_ = lean_ctor_get(v___x_919_, 8);
v_snapshotTasks_929_ = lean_ctor_get(v___x_919_, 9);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_959_ == 0)
{
v___x_931_ = v___x_919_;
v_isShared_932_ = v_isSharedCheck_959_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_snapshotTasks_929_);
lean_inc(v_infoState_928_);
lean_inc(v_messages_927_);
lean_inc(v_recordedDeps_926_);
lean_inc(v_cache_925_);
lean_inc(v_traceState_920_);
lean_inc(v_auxDeclNGen_924_);
lean_inc(v_ngen_923_);
lean_inc(v_nextMacroScope_922_);
lean_inc(v_env_921_);
lean_dec(v___x_919_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_959_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
uint64_t v_tid_933_; lean_object* v_traces_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_958_; 
v_tid_933_ = lean_ctor_get_uint64(v_traceState_920_, sizeof(void*)*1);
v_traces_934_ = lean_ctor_get(v_traceState_920_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_traceState_920_);
if (v_isSharedCheck_958_ == 0)
{
v___x_936_ = v_traceState_920_;
v_isShared_937_ = v_isSharedCheck_958_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_traces_934_);
lean_dec(v_traceState_920_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_958_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v___x_939_; double v___x_940_; uint8_t v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_938_ = lean_box(0);
v___x_939_ = lean_box(0);
v___x_940_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0);
v___x_941_ = 0;
v___x_942_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1));
v___x_943_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_943_, 0, v_cls_906_);
lean_ctor_set(v___x_943_, 1, v___x_939_);
lean_ctor_set(v___x_943_, 2, v___x_942_);
lean_ctor_set_float(v___x_943_, sizeof(void*)*3, v___x_940_);
lean_ctor_set_float(v___x_943_, sizeof(void*)*3 + 8, v___x_940_);
lean_ctor_set_uint8(v___x_943_, sizeof(void*)*3 + 16, v___x_941_);
v___x_944_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2));
v___x_945_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set(v___x_945_, 1, v_a_915_);
lean_ctor_set(v___x_945_, 2, v___x_944_);
lean_inc(v_ref_913_);
v___x_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_946_, 0, v_ref_913_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = l_Lean_PersistentArray_push___redArg(v_traces_934_, v___x_946_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v___x_947_);
v___x_949_ = v___x_936_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_947_);
lean_ctor_set_uint64(v_reuseFailAlloc_957_, sizeof(void*)*1, v_tid_933_);
v___x_949_ = v_reuseFailAlloc_957_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_951_; 
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 4, v___x_949_);
v___x_951_ = v___x_931_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_env_921_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_nextMacroScope_922_);
lean_ctor_set(v_reuseFailAlloc_956_, 2, v_ngen_923_);
lean_ctor_set(v_reuseFailAlloc_956_, 3, v_auxDeclNGen_924_);
lean_ctor_set(v_reuseFailAlloc_956_, 4, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_956_, 5, v_cache_925_);
lean_ctor_set(v_reuseFailAlloc_956_, 6, v_recordedDeps_926_);
lean_ctor_set(v_reuseFailAlloc_956_, 7, v_messages_927_);
lean_ctor_set(v_reuseFailAlloc_956_, 8, v_infoState_928_);
lean_ctor_set(v_reuseFailAlloc_956_, 9, v_snapshotTasks_929_);
v___x_951_ = v_reuseFailAlloc_956_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_952_ = lean_st_ref_put(v___y_911_, v___x_951_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 0, v___x_938_);
v___x_954_ = v___x_917_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_938_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___boxed(lean_object* v_cls_961_, lean_object* v_msg_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v_cls_961_, v_msg_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
return v_res_968_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2));
v___x_978_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_979_ = l_Lean_Name_append(v___x_978_, v___x_977_);
return v___x_979_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6));
v___x_982_ = l_Lean_stringToMessageData(v___x_981_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(uint8_t v_kind_983_, lean_object* v_exceptionSet_984_, lean_object* v_e_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_991_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_991_, 0, v_exceptionSet_984_);
lean_ctor_set_uint8(v___x_991_, sizeof(void*)*1, v_kind_983_);
v___x_992_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0);
v___x_993_ = l_Lean_Meta_FindSplitImpl_visit(v_e_985_, v___x_991_, v___x_992_, v_a_986_, v_a_987_, v_a_988_, v_a_989_);
lean_dec_ref_known(v___x_991_, 1);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1041_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_996_ = v___x_993_;
v_isShared_997_ = v_isSharedCheck_1041_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_993_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1041_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v_fst_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1039_; 
v_fst_998_ = lean_ctor_get(v_a_994_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_a_994_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v_a_994_, 1);
lean_dec(v_unused_1040_);
v___x_1000_ = v_a_994_;
v_isShared_1001_ = v_isSharedCheck_1039_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_fst_998_);
lean_dec(v_a_994_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1039_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
if (lean_obj_tag(v_fst_998_) == 1)
{
lean_object* v_toCold_1002_; lean_object* v_options_1003_; lean_object* v_val_1004_; lean_object* v_inheritedTraceOptions_1005_; uint8_t v_hasTrace_1006_; lean_object* v___x_1008_; 
v_toCold_1002_ = lean_ctor_get(v_a_988_, 0);
v_options_1003_ = lean_ctor_get(v_toCold_1002_, 2);
v_val_1004_ = lean_ctor_get(v_fst_998_, 0);
v_inheritedTraceOptions_1005_ = lean_ctor_get(v_toCold_1002_, 11);
v_hasTrace_1006_ = lean_ctor_get_uint8(v_options_1003_, sizeof(void*)*1);
lean_inc_ref(v_fst_998_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 0, v_fst_998_);
v___x_1008_ = v___x_996_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_fst_998_);
v___x_1008_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
if (v_hasTrace_1006_ == 0)
{
lean_dec_ref_known(v_fst_998_, 1);
lean_del_object(v___x_1000_);
return v___x_1008_;
}
else
{
lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1009_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2));
v___x_1010_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5);
v___x_1011_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1005_, v_options_1003_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_dec_ref_known(v_fst_998_, 1);
lean_del_object(v___x_1000_);
return v___x_1008_;
}
else
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1015_; 
lean_dec_ref(v___x_1008_);
v___x_1012_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7);
lean_inc(v_val_1004_);
v___x_1013_ = l_Lean_indentExpr(v_val_1004_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set_tag(v___x_1000_, 7);
lean_ctor_set(v___x_1000_, 1, v___x_1013_);
lean_ctor_set(v___x_1000_, 0, v___x_1012_);
v___x_1015_ = v___x_1000_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_1009_, v___x_1015_, v_a_986_, v_a_987_, v_a_988_, v_a_989_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v___x_1016_, 0);
lean_dec(v_unused_1024_);
v___x_1018_ = v___x_1016_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_dec(v___x_1016_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v_fst_998_);
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_fst_998_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref_known(v_fst_998_, 1);
v_a_1025_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1016_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1016_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
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
lean_object* v___x_1035_; lean_object* v___x_1037_; 
lean_del_object(v___x_1000_);
lean_dec(v_fst_998_);
v___x_1035_ = lean_box(0);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 0, v___x_1035_);
v___x_1037_ = v___x_996_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
v_a_1042_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_993_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_993_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___boxed(lean_object* v_kind_1050_, lean_object* v_exceptionSet_1051_, lean_object* v_e_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_){
_start:
{
uint8_t v_kind_boxed_1058_; lean_object* v_res_1059_; 
v_kind_boxed_1058_ = lean_unbox(v_kind_1050_);
v_res_1059_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(v_kind_boxed_1058_, v_exceptionSet_1051_, v_e_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(uint8_t v_kind_1060_, lean_object* v_exceptionSet_1061_, lean_object* v_e_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_){
_start:
{
lean_object* v___x_1068_; 
lean_inc_ref(v_exceptionSet_1061_);
v___x_1068_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(v_kind_1060_, v_exceptionSet_1061_, v_e_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
if (lean_obj_tag(v_a_1069_) == 1)
{
lean_object* v_val_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1095_; 
v_val_1070_ = lean_ctor_get(v_a_1069_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_a_1069_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1072_ = v_a_1069_;
v_isShared_1073_ = v_isSharedCheck_1095_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_val_1070_);
lean_dec(v_a_1069_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1095_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
uint8_t v___x_1074_; 
v___x_1074_ = l_Lean_Meta_isIteLike(v_val_1070_);
if (v___x_1074_ == 0)
{
lean_del_object(v___x_1072_);
lean_dec(v_val_1070_);
lean_dec_ref(v_exceptionSet_1061_);
return v___x_1068_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
lean_dec_ref_known(v___x_1068_, 1);
v___x_1075_ = lean_unsigned_to_nat(1u);
v___x_1076_ = l_Lean_Expr_getAppNumArgs(v_val_1070_);
v___x_1077_ = lean_nat_sub(v___x_1076_, v___x_1075_);
lean_dec(v___x_1076_);
v___x_1078_ = lean_nat_sub(v___x_1077_, v___x_1075_);
lean_dec(v___x_1077_);
v___x_1079_ = l_Lean_Expr_getRevArg_x21(v_val_1070_, v___x_1078_);
v___x_1080_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_1060_, v_exceptionSet_1061_, v___x_1079_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1094_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1094_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1094_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___y_1086_; 
if (lean_obj_tag(v_a_1081_) == 0)
{
v___y_1086_ = v_val_1070_;
goto v___jp_1085_;
}
else
{
lean_object* v_val_1093_; 
lean_dec(v_val_1070_);
v_val_1093_ = lean_ctor_get(v_a_1081_, 0);
lean_inc(v_val_1093_);
lean_dec_ref_known(v_a_1081_, 1);
v___y_1086_ = v_val_1093_;
goto v___jp_1085_;
}
v___jp_1085_:
{
lean_object* v___x_1088_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 0, v___y_1086_);
v___x_1088_ = v___x_1072_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___y_1086_);
v___x_1088_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
lean_object* v___x_1090_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1088_);
v___x_1090_ = v___x_1083_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
}
else
{
lean_del_object(v___x_1072_);
lean_dec(v_val_1070_);
return v___x_1080_;
}
}
}
}
else
{
lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v_a_1069_);
lean_dec_ref(v_exceptionSet_1061_);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1103_ == 0)
{
lean_object* v_unused_1104_; 
v_unused_1104_ = lean_ctor_get(v___x_1068_, 0);
lean_dec(v_unused_1104_);
v___x_1097_ = v___x_1068_;
v_isShared_1098_ = v_isSharedCheck_1103_;
goto v_resetjp_1096_;
}
else
{
lean_dec(v___x_1068_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1103_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1099_ = lean_box(0);
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1099_);
v___x_1101_ = v___x_1097_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
else
{
lean_dec_ref(v_exceptionSet_1061_);
return v___x_1068_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go___boxed(lean_object* v_kind_1105_, lean_object* v_exceptionSet_1106_, lean_object* v_e_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
uint8_t v_kind_boxed_1113_; lean_object* v_res_1114_; 
v_kind_boxed_1113_ = lean_unbox(v_kind_1105_);
v_res_1114_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_boxed_1113_, v_exceptionSet_1106_, v_e_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(lean_object* v_e_1115_, lean_object* v___y_1116_){
_start:
{
uint8_t v___x_1118_; 
v___x_1118_ = l_Lean_Expr_hasMVar(v_e_1115_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1119_, 0, v_e_1115_);
return v___x_1119_;
}
else
{
lean_object* v___x_1120_; lean_object* v_mctx_1121_; lean_object* v___x_1122_; lean_object* v_fst_1123_; lean_object* v_snd_1124_; lean_object* v___x_1125_; lean_object* v_cache_1126_; lean_object* v_zetaDeltaFVarIds_1127_; lean_object* v_postponed_1128_; lean_object* v_diag_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1138_; 
v___x_1120_ = lean_st_ref_get(v___y_1116_);
v_mctx_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc_ref(v_mctx_1121_);
lean_dec(v___x_1120_);
v___x_1122_ = l_Lean_instantiateMVarsCore(v_mctx_1121_, v_e_1115_);
v_fst_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_fst_1123_);
v_snd_1124_ = lean_ctor_get(v___x_1122_, 1);
lean_inc(v_snd_1124_);
lean_dec_ref(v___x_1122_);
v___x_1125_ = lean_st_ref_take(v___y_1116_);
v_cache_1126_ = lean_ctor_get(v___x_1125_, 1);
v_zetaDeltaFVarIds_1127_ = lean_ctor_get(v___x_1125_, 2);
v_postponed_1128_ = lean_ctor_get(v___x_1125_, 3);
v_diag_1129_ = lean_ctor_get(v___x_1125_, 4);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1138_ == 0)
{
lean_object* v_unused_1139_; 
v_unused_1139_ = lean_ctor_get(v___x_1125_, 0);
lean_dec(v_unused_1139_);
v___x_1131_ = v___x_1125_;
v_isShared_1132_ = v_isSharedCheck_1138_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_diag_1129_);
lean_inc(v_postponed_1128_);
lean_inc(v_zetaDeltaFVarIds_1127_);
lean_inc(v_cache_1126_);
lean_dec(v___x_1125_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1138_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 0, v_snd_1124_);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_snd_1124_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_cache_1126_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_zetaDeltaFVarIds_1127_);
lean_ctor_set(v_reuseFailAlloc_1137_, 3, v_postponed_1128_);
lean_ctor_set(v_reuseFailAlloc_1137_, 4, v_diag_1129_);
v___x_1134_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_st_ref_put(v___y_1116_, v___x_1134_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_fst_1123_);
return v___x_1136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg___boxed(lean_object* v_e_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_1140_, v___y_1141_);
lean_dec(v___y_1141_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0(lean_object* v_e_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_1144_, v___y_1146_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___boxed(lean_object* v_e_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0(v_e_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f(lean_object* v_e_1158_, uint8_t v_kind_1159_, lean_object* v_exceptionSet_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v___x_1166_; lean_object* v_a_1167_; lean_object* v___x_1168_; 
v___x_1166_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_1158_, v_a_1162_);
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref(v___x_1166_);
v___x_1168_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_1159_, v_exceptionSet_1160_, v_a_1167_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f___boxed(lean_object* v_e_1169_, lean_object* v_kind_1170_, lean_object* v_exceptionSet_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
uint8_t v_kind_boxed_1177_; lean_object* v_res_1178_; 
v_kind_boxed_1177_ = lean_unbox(v_kind_1170_);
v_res_1178_ = l_Lean_Meta_findSplit_x3f(v_e_1169_, v_kind_boxed_1177_, v_exceptionSet_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
lean_dec(v_a_1173_);
lean_dec_ref(v_a_1172_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorIdx___impl(lean_object* v_x_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_obj_tag_nat(v_x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorIdx___impl___boxed(lean_object* v_x_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorIdx___impl(v_x_1181_);
lean_dec_ref(v_x_1181_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(lean_object* v_t_1183_, lean_object* v_k_1184_){
_start:
{
if (lean_obj_tag(v_t_1183_) == 0)
{
lean_object* v_cond_1185_; lean_object* v_dec_1186_; lean_object* v___x_1187_; 
v_cond_1185_ = lean_ctor_get(v_t_1183_, 0);
lean_inc_ref(v_cond_1185_);
v_dec_1186_ = lean_ctor_get(v_t_1183_, 1);
lean_inc_ref(v_dec_1186_);
lean_dec_ref_known(v_t_1183_, 2);
v___x_1187_ = lean_apply_2(v_k_1184_, v_cond_1185_, v_dec_1186_);
return v___x_1187_;
}
else
{
lean_object* v_b_1188_; lean_object* v___x_1189_; 
v_b_1188_ = lean_ctor_get(v_t_1183_, 0);
lean_inc_ref(v_b_1188_);
lean_dec_ref_known(v_t_1183_, 1);
v___x_1189_ = lean_apply_1(v_k_1184_, v_b_1188_);
return v___x_1189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim(lean_object* v_motive_1190_, lean_object* v_ctorIdx_1191_, lean_object* v_t_1192_, lean_object* v_h_1193_, lean_object* v_k_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(v_t_1192_, v_k_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___boxed(lean_object* v_motive_1196_, lean_object* v_ctorIdx_1197_, lean_object* v_t_1198_, lean_object* v_h_1199_, lean_object* v_k_1200_){
_start:
{
lean_object* v_res_1201_; 
v_res_1201_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim(v_motive_1196_, v_ctorIdx_1197_, v_t_1198_, v_h_1199_, v_k_1200_);
lean_dec(v_ctorIdx_1197_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_prop_elim___redArg(lean_object* v_t_1202_, lean_object* v_prop_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(v_t_1202_, v_prop_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_prop_elim(lean_object* v_motive_1205_, lean_object* v_t_1206_, lean_object* v_h_1207_, lean_object* v_prop_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(v_t_1206_, v_prop_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_bool_elim___redArg(lean_object* v_t_1210_, lean_object* v_bool_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(v_t_1210_, v_bool_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_bool_elim(lean_object* v_motive_1213_, lean_object* v_t_1214_, lean_object* v_h_1215_, lean_object* v_bool_1216_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_IfToSplit_ctorElim___redArg(v_t_1214_, v_bool_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f(lean_object* v_c_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = l_Lean_Expr_cleanupAnnotations(v_c_1227_);
v___x_1240_ = l_Lean_Expr_isApp(v___x_1239_);
if (v___x_1240_ == 0)
{
lean_dec_ref(v___x_1239_);
goto v___jp_1233_;
}
else
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1239_);
v___x_1242_ = l_Lean_Expr_isApp(v___x_1241_);
if (v___x_1242_ == 0)
{
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
goto v___jp_1233_;
}
else
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1241_);
v___x_1244_ = l_Lean_Expr_isApp(v___x_1243_);
if (v___x_1244_ == 0)
{
lean_dec_ref(v___x_1243_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
goto v___jp_1233_;
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1245_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1243_);
v___x_1246_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1));
v___x_1247_ = l_Lean_Expr_isConstOf(v___x_1245_, v___x_1246_);
lean_dec_ref(v___x_1245_);
if (v___x_1247_ == 0)
{
lean_dec_ref(v___x_1243_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
goto v___jp_1233_;
}
else
{
lean_object* v_arg_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v_arg_1248_ = lean_ctor_get(v___x_1243_, 1);
lean_inc_ref(v_arg_1248_);
lean_dec_ref(v___x_1243_);
v___x_1249_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2));
v___x_1250_ = l_Lean_Expr_isConstOf(v_arg_1248_, v___x_1249_);
lean_dec_ref(v_arg_1248_);
if (v___x_1250_ == 0)
{
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
goto v___jp_1236_;
}
else
{
lean_object* v_arg_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v_arg_1251_ = lean_ctor_get(v___x_1239_, 1);
lean_inc_ref(v_arg_1251_);
lean_dec_ref(v___x_1239_);
v___x_1252_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4));
v___x_1253_ = l_Lean_Expr_isConstOf(v_arg_1251_, v___x_1252_);
lean_dec_ref(v_arg_1251_);
if (v___x_1253_ == 0)
{
lean_dec_ref(v___x_1241_);
goto v___jp_1236_;
}
else
{
lean_object* v_arg_1254_; lean_object* v___x_1255_; 
v_arg_1254_ = lean_ctor_get(v___x_1241_, 1);
lean_inc_ref_n(v_arg_1254_, 2);
lean_dec_ref(v___x_1241_);
v___x_1255_ = l_Lean_Meta_boolCondToProp_x3f(v_arg_1254_, v___x_1247_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1275_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1275_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1275_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
if (lean_obj_tag(v_a_1256_) == 0)
{
lean_object* v___x_1260_; lean_object* v___x_1262_; 
lean_dec_ref(v_arg_1254_);
v___x_1260_ = lean_box(0);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1260_);
v___x_1262_ = v___x_1258_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___x_1260_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
else
{
lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1273_; 
v_isSharedCheck_1273_ = !lean_is_exclusive(v_a_1256_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; 
v_unused_1274_ = lean_ctor_get(v_a_1256_, 0);
lean_dec(v_unused_1274_);
v___x_1265_ = v_a_1256_;
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
else
{
lean_dec(v_a_1256_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v_arg_1254_);
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_arg_1254_);
v___x_1268_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1270_; 
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1268_);
v___x_1270_ = v___x_1258_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_arg_1254_);
v_a_1276_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1255_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1255_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
}
}
}
}
v___jp_1233_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_box(0);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
v___jp_1236_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_box(0);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___boxed(lean_object* v_c_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f(v_c_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec_ref(v_c_1284_);
return v_res_1290_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = lean_box(0);
v___x_1292_ = lean_unsigned_to_nat(16u);
v___x_1293_ = lean_mk_array(v___x_1292_, v___x_1291_);
return v___x_1293_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1294_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0);
v___x_1295_ = lean_unsigned_to_nat(0u);
v___x_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___x_1294_);
return v___x_1296_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4(void){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = lean_box(0);
v___x_1302_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3));
v___x_1303_ = l_Lean_mkConst(v___x_1302_, v___x_1301_);
return v___x_1303_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_box(0);
v___x_1310_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7));
v___x_1311_ = l_Lean_mkConst(v___x_1310_, v___x_1309_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(lean_object* v_e_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
uint8_t v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = 0;
v___x_1322_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1);
v___x_1323_ = l_Lean_Meta_findSplit_x3f(v_e_1312_, v___x_1321_, v___x_1322_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1427_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1427_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1427_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
if (lean_obj_tag(v_a_1324_) == 1)
{
lean_object* v_val_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1422_; 
v_val_1328_ = lean_ctor_get(v_a_1324_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_a_1324_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1330_ = v_a_1324_;
v_isShared_1331_ = v_isSharedCheck_1422_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_val_1328_);
lean_dec(v_a_1324_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1422_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1332_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3));
v___x_1333_ = l_Lean_Expr_isAppOf(v_val_1328_, v___x_1332_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1334_ = lean_unsigned_to_nat(1u);
v___x_1335_ = l_Lean_Expr_getAppNumArgs(v_val_1328_);
v___x_1336_ = lean_nat_sub(v___x_1335_, v___x_1334_);
v___x_1337_ = lean_nat_sub(v___x_1336_, v___x_1334_);
lean_dec(v___x_1336_);
v___x_1338_ = l_Lean_Expr_getRevArg_x21(v_val_1328_, v___x_1337_);
v___x_1347_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__6));
v___x_1348_ = l_Lean_Expr_isAppOf(v_val_1328_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__9));
v___x_1350_ = l_Lean_Expr_isAppOf(v_val_1328_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
v___x_1351_ = lean_unsigned_to_nat(2u);
v___x_1352_ = lean_nat_sub(v___x_1335_, v___x_1351_);
lean_dec(v___x_1335_);
v___x_1353_ = lean_nat_sub(v___x_1352_, v___x_1334_);
lean_dec(v___x_1352_);
v___x_1354_ = l_Lean_Expr_getRevArg_x21(v_val_1328_, v___x_1353_);
v___x_1389_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_1390_ = l_Lean_Expr_isAppOf(v_val_1328_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_1392_ = l_Lean_Expr_isAppOf(v_val_1328_, v___x_1391_);
lean_dec(v_val_1328_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1338_);
lean_ctor_set(v___x_1393_, 1, v___x_1354_);
v___x_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
else
{
goto v___jp_1355_;
}
}
else
{
lean_dec(v_val_1328_);
goto v___jp_1355_;
}
v___jp_1355_:
{
lean_object* v___x_1356_; 
v___x_1356_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f(v___x_1338_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1380_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1359_ = v___x_1356_;
v_isShared_1360_ = v_isSharedCheck_1380_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1356_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1380_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
if (lean_obj_tag(v_a_1357_) == 1)
{
lean_object* v_val_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1372_; 
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1338_);
v_val_1361_ = lean_ctor_get(v_a_1357_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v_a_1357_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1363_ = v_a_1357_;
v_isShared_1364_ = v_isSharedCheck_1372_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_val_1361_);
lean_dec(v_a_1357_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1372_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; lean_object* v___x_1367_; 
v___x_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_val_1361_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 0, v___x_1365_);
v___x_1367_ = v___x_1363_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
lean_object* v___x_1369_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1367_);
v___x_1369_ = v___x_1359_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1378_; 
lean_dec(v_a_1357_);
v___x_1373_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4);
lean_inc_ref(v___x_1338_);
v___x_1374_ = l_Lean_mkAppB(v___x_1373_, v___x_1338_, v___x_1354_);
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1338_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1376_);
v___x_1378_ = v___x_1359_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1376_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1338_);
v_a_1381_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1356_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1356_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_dec(v___x_1335_);
lean_dec(v_val_1328_);
goto v___jp_1339_;
}
}
else
{
lean_dec(v___x_1335_);
lean_dec(v_val_1328_);
goto v___jp_1339_;
}
v___jp_1339_:
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
v___x_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1340_);
v___x_1342_ = v___x_1330_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
lean_object* v___x_1344_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1342_);
v___x_1344_ = v___x_1326_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
else
{
lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1396_ = l_Lean_Expr_cleanupAnnotations(v_val_1328_);
lean_dec(v_val_1328_);
v___x_1397_ = l_Lean_Expr_isApp(v___x_1396_);
if (v___x_1397_ == 0)
{
lean_dec_ref(v___x_1396_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1398_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1396_);
lean_dec_ref(v___x_1396_);
v___x_1399_ = l_Lean_Expr_isApp(v___x_1398_);
if (v___x_1399_ == 0)
{
lean_dec_ref(v___x_1398_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1400_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1398_);
lean_dec_ref(v___x_1398_);
v___x_1401_ = l_Lean_Expr_isApp(v___x_1400_);
if (v___x_1401_ == 0)
{
lean_dec_ref(v___x_1400_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1400_);
v___x_1403_ = l_Lean_Expr_isApp(v___x_1402_);
if (v___x_1403_ == 0)
{
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___x_1400_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1404_; uint8_t v___x_1405_; 
v___x_1404_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1402_);
v___x_1405_ = l_Lean_Expr_isApp(v___x_1404_);
if (v___x_1405_ == 0)
{
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___x_1400_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1406_; uint8_t v___x_1407_; 
v___x_1406_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1404_);
v___x_1407_ = l_Lean_Expr_isApp(v___x_1406_);
if (v___x_1407_ == 0)
{
lean_dec_ref(v___x_1406_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___x_1400_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1408_; uint8_t v___x_1409_; 
v___x_1408_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1406_);
lean_dec_ref(v___x_1406_);
v___x_1409_ = l_Lean_Expr_isConstOf(v___x_1408_, v___x_1332_);
lean_dec_ref(v___x_1408_);
if (v___x_1409_ == 0)
{
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___x_1400_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1326_);
goto v___jp_1318_;
}
else
{
lean_object* v_arg_1410_; lean_object* v_arg_1411_; lean_object* v_arg_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1417_; 
v_arg_1410_ = lean_ctor_get(v___x_1400_, 1);
lean_inc_ref(v_arg_1410_);
lean_dec_ref(v___x_1400_);
v_arg_1411_ = lean_ctor_get(v___x_1402_, 1);
lean_inc_ref_n(v_arg_1411_, 2);
lean_dec_ref(v___x_1402_);
v_arg_1412_ = lean_ctor_get(v___x_1404_, 1);
lean_inc_ref(v_arg_1412_);
lean_dec_ref(v___x_1404_);
v___x_1413_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8);
v___x_1414_ = l_Lean_mkApp3(v___x_1413_, v_arg_1411_, v_arg_1412_, v_arg_1410_);
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v_arg_1411_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1415_);
v___x_1417_ = v___x_1330_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1415_);
v___x_1417_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
lean_object* v___x_1419_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1417_);
v___x_1419_ = v___x_1326_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1417_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
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
lean_object* v___x_1423_; lean_object* v___x_1425_; 
lean_dec(v_a_1324_);
v___x_1423_ = lean_box(0);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1423_);
v___x_1425_ = v___x_1326_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_a_1428_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1323_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1323_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
v___jp_1318_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_box(0);
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
return v___x_1320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___boxed(lean_object* v_e_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(v_e_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_a_1438_);
lean_dec_ref(v_a_1437_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(lean_object* v_name_1443_, lean_object* v_decl_1444_, lean_object* v_ref_1445_){
_start:
{
lean_object* v_defValue_1447_; lean_object* v_descr_1448_; lean_object* v_deprecation_x3f_1449_; lean_object* v___x_1450_; uint8_t v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v_defValue_1447_ = lean_ctor_get(v_decl_1444_, 0);
v_descr_1448_ = lean_ctor_get(v_decl_1444_, 1);
v_deprecation_x3f_1449_ = lean_ctor_get(v_decl_1444_, 2);
v___x_1450_ = lean_alloc_ctor(1, 0, 1);
v___x_1451_ = lean_unbox(v_defValue_1447_);
lean_ctor_set_uint8(v___x_1450_, 0, v___x_1451_);
lean_inc(v_deprecation_x3f_1449_);
lean_inc_ref(v_descr_1448_);
lean_inc_n(v_name_1443_, 2);
v___x_1452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1452_, 0, v_name_1443_);
lean_ctor_set(v___x_1452_, 1, v_ref_1445_);
lean_ctor_set(v___x_1452_, 2, v___x_1450_);
lean_ctor_set(v___x_1452_, 3, v_descr_1448_);
lean_ctor_set(v___x_1452_, 4, v_deprecation_x3f_1449_);
v___x_1453_ = lean_register_option(v_name_1443_, v___x_1452_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1461_; 
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1461_ == 0)
{
lean_object* v_unused_1462_; 
v_unused_1462_ = lean_ctor_get(v___x_1453_, 0);
lean_dec(v_unused_1462_);
v___x_1455_ = v___x_1453_;
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
else
{
lean_dec(v___x_1453_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; lean_object* v___x_1459_; 
lean_inc(v_defValue_1447_);
v___x_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1457_, 0, v_name_1443_);
lean_ctor_set(v___x_1457_, 1, v_defValue_1447_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v___x_1457_);
v___x_1459_ = v___x_1455_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
lean_dec(v_name_1443_);
v_a_1463_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1453_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1453_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1471_, lean_object* v_decl_1472_, lean_object* v_ref_1473_, lean_object* v_a_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(v_name_1471_, v_decl_1472_, v_ref_1473_);
lean_dec_ref(v_decl_1472_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1494_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1495_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1496_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1497_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(v___x_1494_, v___x_1495_, v___x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4____boxed(lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
return v_res_1499_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1500_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg(){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___boxed(lean_object* v___dummy_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
return v_res_1506_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0(lean_object* v_00_u03b2_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0);
return v___x_1509_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg(){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___boxed(lean_object* v___dummy_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
return v_res_1515_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1(lean_object* v_00_u03b2_1517_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
return v___x_1518_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0(void){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_1519_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__1(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
return v___x_1521_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__2(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v_s_1526_; 
v___x_1522_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__1, &l_Lean_Meta_SplitIf_getSimpContext___closed__1_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__1);
v___x_1523_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
v___x_1524_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0);
v___x_1525_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__0, &l_Lean_Meta_SplitIf_getSimpContext___closed__0_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0);
v_s_1526_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_s_1526_, 0, v___x_1525_);
lean_ctor_set(v_s_1526_, 1, v___x_1525_);
lean_ctor_set(v_s_1526_, 2, v___x_1524_);
lean_ctor_set(v_s_1526_, 3, v___x_1523_);
lean_ctor_set(v_s_1526_, 4, v___x_1524_);
lean_ctor_set(v_s_1526_, 5, v___x_1522_);
return v_s_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext(lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v_s_1572_; lean_object* v___x_1573_; uint8_t v___x_1574_; uint8_t v___x_1575_; lean_object* v_s_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___x_1628_; lean_object* v_s_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___x_1682_; 
v_s_1572_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__2, &l_Lean_Meta_SplitIf_getSimpContext___closed__2_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__2);
v___x_1573_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__4));
v___x_1574_ = 1;
v___x_1575_ = 0;
v___x_1628_ = lean_unsigned_to_nat(1000u);
v___x_1682_ = l_Lean_Meta_SimpTheorems_addConst(v_s_1572_, v___x_1573_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v___x_1682_, 1);
v___x_1684_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__14));
v___x_1685_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1683_, v___x_1684_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_a_1686_);
lean_dec_ref_known(v___x_1685_, 1);
v___x_1687_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__16));
v___x_1688_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1686_, v___x_1687_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1688_, 1);
v___x_1690_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__18));
v___x_1691_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1689_, v___x_1690_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1693_; lean_object* v_env_1694_; lean_object* v___x_1695_; uint8_t v___x_1696_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
v___x_1693_ = lean_st_ref_get(v_a_1570_);
v_env_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc_ref(v_env_1694_);
lean_dec(v___x_1693_);
v___x_1695_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__19));
v___x_1696_ = l_Lean_Environment_contains(v_env_1694_, v___x_1695_, v___x_1574_);
if (v___x_1696_ == 0)
{
v_s_1630_ = v_a_1692_;
v___y_1631_ = v_a_1567_;
v___y_1632_ = v_a_1568_;
v___y_1633_ = v_a_1569_;
v___y_1634_ = v_a_1570_;
goto v___jp_1629_;
}
else
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1692_, v___x_1695_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v___x_1699_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__20));
v___x_1700_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1698_, v___x_1699_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___x_1702_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__21));
v___x_1703_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1701_, v___x_1702_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1705_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__22));
v___x_1706_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1704_, v___x_1705_, v___x_1574_, v___x_1575_, v___x_1628_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_a_1707_);
lean_dec_ref_known(v___x_1706_, 1);
v_s_1630_ = v_a_1707_;
v___y_1631_ = v_a_1567_;
v___y_1632_ = v_a_1568_;
v___y_1633_ = v_a_1569_;
v___y_1634_ = v_a_1570_;
goto v___jp_1629_;
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
v_a_1708_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1706_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1706_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1723_; 
v_a_1716_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1718_ = v___x_1703_;
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1703_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1721_; 
if (v_isShared_1719_ == 0)
{
v___x_1721_ = v___x_1718_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1716_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
else
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1731_; 
v_a_1724_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1726_ = v___x_1700_;
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1700_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1729_; 
if (v_isShared_1727_ == 0)
{
v___x_1729_ = v___x_1726_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1724_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_a_1732_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1697_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1697_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
v_a_1740_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1691_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1691_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
v_a_1748_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1688_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1688_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
v_a_1756_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1685_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1685_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
v_a_1764_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1682_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1682_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
v___jp_1576_:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_1580_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; lean_object* v_maxSteps_1584_; lean_object* v_maxDischargeDepth_1585_; uint8_t v_contextual_1586_; uint8_t v_memoize_1587_; uint8_t v_singlePass_1588_; uint8_t v_zeta_1589_; uint8_t v_beta_1590_; uint8_t v_eta_1591_; uint8_t v_etaStruct_1592_; uint8_t v_iota_1593_; uint8_t v_proj_1594_; uint8_t v_decide_1595_; uint8_t v_arith_1596_; uint8_t v_autoUnfold_1597_; uint8_t v_failIfUnchanged_1598_; uint8_t v_ground_1599_; uint8_t v_unfoldPartialApp_1600_; uint8_t v_zetaDelta_1601_; uint8_t v_index_1602_; uint8_t v_implicitDefEqProofs_1603_; uint8_t v_zetaUnused_1604_; uint8_t v_catchRuntime_1605_; uint8_t v_zetaHave_1606_; uint8_t v_congrConsts_1607_; uint8_t v_bitVecOfNat_1608_; uint8_t v_warnExponents_1609_; uint8_t v_suggestions_1610_; lean_object* v_maxSuggestions_1611_; uint8_t v_locals_1612_; uint8_t v_instances_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1583_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_1584_ = lean_ctor_get(v___x_1583_, 0);
v_maxDischargeDepth_1585_ = lean_ctor_get(v___x_1583_, 1);
v_contextual_1586_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3);
v_memoize_1587_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 1);
v_singlePass_1588_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 2);
v_zeta_1589_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 3);
v_beta_1590_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 4);
v_eta_1591_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 5);
v_etaStruct_1592_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 6);
v_iota_1593_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 7);
v_proj_1594_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 8);
v_decide_1595_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 9);
v_arith_1596_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 10);
v_autoUnfold_1597_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 11);
v_failIfUnchanged_1598_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 13);
v_ground_1599_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_1600_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 15);
v_zetaDelta_1601_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 16);
v_index_1602_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_1603_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 18);
v_zetaUnused_1604_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 19);
v_catchRuntime_1605_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 20);
v_zetaHave_1606_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 21);
v_congrConsts_1607_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 23);
v_bitVecOfNat_1608_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 24);
v_warnExponents_1609_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 25);
v_suggestions_1610_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 26);
v_maxSuggestions_1611_ = lean_ctor_get(v___x_1583_, 2);
v_locals_1612_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 27);
v_instances_1613_ = lean_ctor_get_uint8(v___x_1583_, sizeof(void*)*3 + 28);
lean_inc(v_maxSuggestions_1611_);
lean_inc(v_maxDischargeDepth_1585_);
lean_inc(v_maxSteps_1584_);
v___x_1614_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1614_, 0, v_maxSteps_1584_);
lean_ctor_set(v___x_1614_, 1, v_maxDischargeDepth_1585_);
lean_ctor_set(v___x_1614_, 2, v_maxSuggestions_1611_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3, v_contextual_1586_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 1, v_memoize_1587_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 2, v_singlePass_1588_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 3, v_zeta_1589_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 4, v_beta_1590_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 5, v_eta_1591_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 6, v_etaStruct_1592_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 7, v_iota_1593_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 8, v_proj_1594_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 9, v_decide_1595_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 10, v_arith_1596_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 11, v_autoUnfold_1597_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 12, v___x_1575_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 13, v_failIfUnchanged_1598_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 14, v_ground_1599_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 15, v_unfoldPartialApp_1600_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 16, v_zetaDelta_1601_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 17, v_index_1602_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_1603_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 19, v_zetaUnused_1604_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 20, v_catchRuntime_1605_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 21, v_zetaHave_1606_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 22, v___x_1574_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 23, v_congrConsts_1607_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 24, v_bitVecOfNat_1608_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 25, v_warnExponents_1609_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 26, v_suggestions_1610_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 27, v_locals_1612_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 28, v_instances_1613_);
v___x_1615_ = lean_unsigned_to_nat(1u);
v___x_1616_ = lean_mk_empty_array_with_capacity(v___x_1615_);
v___x_1617_ = lean_array_push(v___x_1616_, v_s_1577_);
v___x_1618_ = l_Lean_Options_empty;
v___x_1619_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1614_, v___x_1617_, v_a_1582_, v___x_1618_, v___y_1578_, v___y_1579_, v___y_1580_);
return v___x_1619_;
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
lean_dec_ref(v_s_1577_);
v_a_1620_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1581_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1581_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
v___jp_1629_:
{
lean_object* v___x_1635_; lean_object* v_env_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v___x_1635_ = lean_st_ref_get(v___y_1634_);
v_env_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc_ref(v_env_1636_);
lean_dec(v___x_1635_);
v___x_1637_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__6));
v___x_1638_ = l_Lean_Environment_contains(v_env_1636_, v___x_1637_, v___x_1574_);
if (v___x_1638_ == 0)
{
v_s_1577_ = v_s_1630_;
v___y_1578_ = v___y_1631_;
v___y_1579_ = v___y_1633_;
v___y_1580_ = v___y_1634_;
goto v___jp_1576_;
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__8));
v___x_1640_ = l_Lean_Meta_SimpTheorems_addConst(v_s_1630_, v___x_1639_, v___x_1574_, v___x_1575_, v___x_1628_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__10));
v___x_1643_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1641_, v___x_1642_, v___x_1574_, v___x_1575_, v___x_1628_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v___x_1643_, 1);
v___x_1645_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__12));
v___x_1646_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1644_, v___x_1645_, v___x_1574_, v___x_1575_, v___x_1628_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1648_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
v___x_1648_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1647_, v___x_1637_, v___x_1574_, v___x_1575_, v___x_1628_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
v_s_1577_ = v_a_1649_;
v___y_1578_ = v___y_1631_;
v___y_1579_ = v___y_1633_;
v___y_1580_ = v___y_1634_;
goto v___jp_1576_;
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
v_a_1650_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1648_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1648_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1646_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1646_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
v_a_1666_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1643_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1643_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
v_a_1674_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1640_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1640_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1674_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext___boxed(lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_1782_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1786_; lean_object* v_maxSteps_1787_; lean_object* v_maxDischargeDepth_1788_; uint8_t v_contextual_1789_; uint8_t v_memoize_1790_; uint8_t v_singlePass_1791_; uint8_t v_zeta_1792_; uint8_t v_beta_1793_; uint8_t v_eta_1794_; uint8_t v_etaStruct_1795_; uint8_t v_iota_1796_; uint8_t v_proj_1797_; uint8_t v_decide_1798_; uint8_t v_arith_1799_; uint8_t v_autoUnfold_1800_; uint8_t v_failIfUnchanged_1801_; uint8_t v_ground_1802_; uint8_t v_unfoldPartialApp_1803_; uint8_t v_zetaDelta_1804_; uint8_t v_index_1805_; uint8_t v_implicitDefEqProofs_1806_; uint8_t v_zetaUnused_1807_; uint8_t v_catchRuntime_1808_; uint8_t v_zetaHave_1809_; uint8_t v_congrConsts_1810_; uint8_t v_bitVecOfNat_1811_; uint8_t v_warnExponents_1812_; uint8_t v_suggestions_1813_; lean_object* v_maxSuggestions_1814_; uint8_t v_locals_1815_; uint8_t v_instances_1816_; uint8_t v___x_1817_; uint8_t v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1784_, 1);
v___x_1786_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_1787_ = lean_ctor_get(v___x_1786_, 0);
v_maxDischargeDepth_1788_ = lean_ctor_get(v___x_1786_, 1);
v_contextual_1789_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3);
v_memoize_1790_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 1);
v_singlePass_1791_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 2);
v_zeta_1792_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 3);
v_beta_1793_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 4);
v_eta_1794_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 5);
v_etaStruct_1795_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 6);
v_iota_1796_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 7);
v_proj_1797_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 8);
v_decide_1798_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 9);
v_arith_1799_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 10);
v_autoUnfold_1800_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 11);
v_failIfUnchanged_1801_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 13);
v_ground_1802_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_1803_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 15);
v_zetaDelta_1804_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 16);
v_index_1805_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_1806_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 18);
v_zetaUnused_1807_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 19);
v_catchRuntime_1808_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 20);
v_zetaHave_1809_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 21);
v_congrConsts_1810_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 23);
v_bitVecOfNat_1811_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 24);
v_warnExponents_1812_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 25);
v_suggestions_1813_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 26);
v_maxSuggestions_1814_ = lean_ctor_get(v___x_1786_, 2);
v_locals_1815_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 27);
v_instances_1816_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*3 + 28);
v___x_1817_ = 0;
v___x_1818_ = 1;
lean_inc(v_maxSuggestions_1814_);
lean_inc(v_maxDischargeDepth_1788_);
lean_inc(v_maxSteps_1787_);
v___x_1819_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1819_, 0, v_maxSteps_1787_);
lean_ctor_set(v___x_1819_, 1, v_maxDischargeDepth_1788_);
lean_ctor_set(v___x_1819_, 2, v_maxSuggestions_1814_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3, v_contextual_1789_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 1, v_memoize_1790_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 2, v_singlePass_1791_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 3, v_zeta_1792_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 4, v_beta_1793_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 5, v_eta_1794_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 6, v_etaStruct_1795_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 7, v_iota_1796_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 8, v_proj_1797_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 9, v_decide_1798_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 10, v_arith_1799_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 11, v_autoUnfold_1800_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 12, v___x_1817_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 13, v_failIfUnchanged_1801_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 14, v_ground_1802_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 15, v_unfoldPartialApp_1803_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 16, v_zetaDelta_1804_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 17, v_index_1805_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_1806_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 19, v_zetaUnused_1807_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 20, v_catchRuntime_1808_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 21, v_zetaHave_1809_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 22, v___x_1818_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 23, v_congrConsts_1810_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 24, v_bitVecOfNat_1811_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 25, v_warnExponents_1812_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 26, v_suggestions_1813_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 27, v_locals_1815_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3 + 28, v_instances_1816_);
v___x_1820_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0));
v___x_1821_ = l_Lean_Options_empty;
v___x_1822_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1819_, v___x_1820_, v_a_1785_, v___x_1821_, v_a_1780_, v_a_1781_, v_a_1782_);
return v___x_1822_;
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
v_a_1823_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1784_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1784_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___boxed(lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec_ref(v_a_1831_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v___x_1841_; 
v___x_1841_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_1836_, v_a_1838_, v_a_1839_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___boxed(lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
return v_res_1847_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1854_ = lean_box(0);
v___x_1855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__3));
v___x_1856_ = l_Lean_mkConst(v___x_1855_, v___x_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_numIndices_1857_, lean_object* v_prop_1858_, lean_object* v_as_1859_, lean_object* v_i_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_zero_1866_; uint8_t v_isZero_1867_; 
v_zero_1866_ = lean_unsigned_to_nat(0u);
v_isZero_1867_ = lean_nat_dec_eq(v_i_1860_, v_zero_1866_);
if (v_isZero_1867_ == 1)
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
lean_dec(v_i_1860_);
lean_dec_ref(v_prop_1858_);
v___x_1868_ = lean_box(0);
v___x_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
return v___x_1869_;
}
else
{
lean_object* v_one_1870_; lean_object* v_n_1871_; lean_object* v___x_1872_; 
v_one_1870_ = lean_unsigned_to_nat(1u);
v_n_1871_ = lean_nat_sub(v_i_1860_, v_one_1870_);
lean_dec(v_i_1860_);
v___x_1872_ = lean_array_fget(v_as_1859_, v_n_1871_);
if (lean_obj_tag(v___x_1872_) == 0)
{
v_i_1860_ = v_n_1871_;
goto _start;
}
else
{
lean_object* v_val_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1938_; 
v_val_1874_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1876_ = v___x_1872_;
v_isShared_1877_ = v_isSharedCheck_1938_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_val_1874_);
lean_dec(v___x_1872_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1938_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1878_ = l_Lean_LocalDecl_index(v_val_1874_);
v___x_1879_ = lean_nat_dec_le(v_numIndices_1857_, v___x_1878_);
lean_dec(v___x_1878_);
if (v___x_1879_ == 0)
{
uint8_t v___x_1880_; 
v___x_1880_ = l_Lean_LocalDecl_isAuxDecl(v_val_1874_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = l_Lean_LocalDecl_type(v_val_1874_);
lean_inc_ref(v___x_1881_);
lean_inc_ref(v_prop_1858_);
v___x_1882_ = l_Lean_Meta_isExprDefEq(v_prop_1858_, v___x_1881_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1927_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1927_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1927_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
uint8_t v___x_1887_; 
v___x_1887_ = lean_unbox(v_a_1883_);
lean_dec(v_a_1883_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; uint8_t v___x_1889_; 
lean_del_object(v___x_1885_);
v___x_1888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__1));
v___x_1889_ = l_Lean_Expr_isAppOfArity(v_prop_1858_, v___x_1888_, v_one_1870_);
if (v___x_1889_ == 0)
{
lean_dec_ref(v___x_1881_);
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
v_i_1860_ = v_n_1871_;
goto _start;
}
else
{
lean_object* v___x_1891_; uint8_t v___x_1892_; 
v___x_1891_ = l_Lean_Expr_appArg_x21(v_prop_1858_);
v___x_1892_ = l_Lean_Expr_isAppOfArity(v___x_1891_, v___x_1888_, v_one_1870_);
if (v___x_1892_ == 0)
{
lean_dec_ref(v___x_1891_);
lean_dec_ref(v___x_1881_);
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
v_i_1860_ = v_n_1871_;
goto _start;
}
else
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = l_Lean_Expr_appArg_x21(v___x_1891_);
lean_dec_ref(v___x_1891_);
lean_inc_ref(v___x_1894_);
v___x_1895_ = l_Lean_Meta_isExprDefEq(v___x_1894_, v___x_1881_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1911_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1898_ = v___x_1895_;
v_isShared_1899_ = v_isSharedCheck_1911_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1895_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1911_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
uint8_t v___x_1900_; 
v___x_1900_ = lean_unbox(v_a_1896_);
lean_dec(v_a_1896_);
if (v___x_1900_ == 0)
{
lean_del_object(v___x_1898_);
lean_dec_ref(v___x_1894_);
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
v_i_1860_ = v_n_1871_;
goto _start;
}
else
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1906_; 
lean_dec(v_n_1871_);
lean_dec_ref(v_prop_1858_);
v___x_1902_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__4, &l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__4);
v___x_1903_ = l_Lean_LocalDecl_toExpr(v_val_1874_);
v___x_1904_ = l_Lean_mkAppB(v___x_1902_, v___x_1894_, v___x_1903_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1904_);
v___x_1906_ = v___x_1876_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1904_);
v___x_1906_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
lean_object* v___x_1908_; 
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1906_);
v___x_1908_ = v___x_1898_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec_ref(v___x_1894_);
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
lean_dec(v_n_1871_);
lean_dec_ref(v_prop_1858_);
v_a_1912_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1895_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1895_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
}
}
else
{
lean_object* v___x_1920_; lean_object* v___x_1922_; 
lean_dec_ref(v___x_1881_);
lean_dec(v_n_1871_);
lean_dec_ref(v_prop_1858_);
v___x_1920_ = l_Lean_LocalDecl_toExpr(v_val_1874_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1920_);
v___x_1922_ = v___x_1876_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
lean_object* v___x_1924_; 
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v___x_1922_);
v___x_1924_ = v___x_1885_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec_ref(v___x_1881_);
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
lean_dec(v_n_1871_);
lean_dec_ref(v_prop_1858_);
v_a_1928_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1882_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1882_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
v_i_1860_ = v_n_1871_;
goto _start;
}
}
else
{
lean_del_object(v___x_1876_);
lean_dec(v_val_1874_);
v_i_1860_ = v_n_1871_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_numIndices_1939_, lean_object* v_prop_1940_, lean_object* v_as_1941_, lean_object* v_i_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg(v_numIndices_1939_, v_prop_1940_, v_as_1941_, v_i_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec_ref(v_as_1941_);
lean_dec(v_numIndices_1939_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_numIndices_1949_, lean_object* v_prop_1950_, lean_object* v_as_1951_, lean_object* v_i_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
lean_object* v_zero_1958_; uint8_t v_isZero_1959_; 
v_zero_1958_ = lean_unsigned_to_nat(0u);
v_isZero_1959_ = lean_nat_dec_eq(v_i_1952_, v_zero_1958_);
if (v_isZero_1959_ == 1)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
lean_dec(v_i_1952_);
lean_dec_ref(v_prop_1950_);
v___x_1960_ = lean_box(0);
v___x_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
return v___x_1961_;
}
else
{
lean_object* v_one_1962_; lean_object* v_n_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v_one_1962_ = lean_unsigned_to_nat(1u);
v_n_1963_ = lean_nat_sub(v_i_1952_, v_one_1962_);
lean_dec(v_i_1952_);
v___x_1964_ = lean_array_fget_borrowed(v_as_1951_, v_n_1963_);
lean_inc_ref(v_prop_1950_);
v___x_1965_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2(v_numIndices_1949_, v_prop_1950_, v___x_1964_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
if (lean_obj_tag(v_a_1966_) == 0)
{
lean_dec_ref_known(v___x_1965_, 1);
v_i_1952_ = v_n_1963_;
goto _start;
}
else
{
lean_dec(v_n_1963_);
lean_dec_ref(v_prop_1950_);
return v___x_1965_;
}
}
else
{
lean_dec(v_n_1963_);
lean_dec_ref(v_prop_1950_);
return v___x_1965_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2(lean_object* v_numIndices_1968_, lean_object* v_prop_1969_, lean_object* v_x_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
if (lean_obj_tag(v_x_1970_) == 0)
{
lean_object* v_cs_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_cs_1976_ = lean_ctor_get(v_x_1970_, 0);
v___x_1977_ = lean_array_get_size(v_cs_1976_);
v___x_1978_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg(v_numIndices_1968_, v_prop_1969_, v_cs_1976_, v___x_1977_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
return v___x_1978_;
}
else
{
lean_object* v_vs_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v_vs_1979_ = lean_ctor_get(v_x_1970_, 0);
v___x_1980_ = lean_array_get_size(v_vs_1979_);
v___x_1981_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg(v_numIndices_1968_, v_prop_1969_, v_vs_1979_, v___x_1980_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
return v___x_1981_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_numIndices_1982_, lean_object* v_prop_1983_, lean_object* v_x_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2(v_numIndices_1982_, v_prop_1983_, v_x_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_x_1984_);
lean_dec(v_numIndices_1982_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_numIndices_1991_, lean_object* v_prop_1992_, lean_object* v_as_1993_, lean_object* v_i_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg(v_numIndices_1991_, v_prop_1992_, v_as_1993_, v_i_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec_ref(v_as_1993_);
lean_dec(v_numIndices_1991_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0(lean_object* v_numIndices_2001_, lean_object* v_prop_2002_, lean_object* v_t_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_){
_start:
{
lean_object* v_root_2009_; lean_object* v_tail_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v_root_2009_ = lean_ctor_get(v_t_2003_, 0);
v_tail_2010_ = lean_ctor_get(v_t_2003_, 1);
v___x_2011_ = lean_array_get_size(v_tail_2010_);
lean_inc_ref(v_prop_2002_);
v___x_2012_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg(v_numIndices_2001_, v_prop_2002_, v_tail_2010_, v___x_2011_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
if (lean_obj_tag(v_a_2013_) == 0)
{
lean_object* v___x_2014_; 
lean_dec_ref_known(v___x_2012_, 1);
v___x_2014_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2(v_numIndices_2001_, v_prop_2002_, v_root_2009_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
return v___x_2014_;
}
else
{
lean_dec_ref(v_prop_2002_);
return v___x_2012_;
}
}
else
{
lean_dec_ref(v_prop_2002_);
return v___x_2012_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0___boxed(lean_object* v_numIndices_2015_, lean_object* v_prop_2016_, lean_object* v_t_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0(v_numIndices_2015_, v_prop_2016_, v_t_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
lean_dec_ref(v_t_2017_);
lean_dec(v_numIndices_2015_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0(lean_object* v_numIndices_2024_, lean_object* v_prop_2025_, lean_object* v_lctx_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_decls_2032_; lean_object* v___x_2033_; 
v_decls_2032_ = lean_ctor_get(v_lctx_2026_, 1);
v___x_2033_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0(v_numIndices_2024_, v_prop_2025_, v_decls_2032_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0___boxed(lean_object* v_numIndices_2034_, lean_object* v_prop_2035_, lean_object* v_lctx_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0(v_numIndices_2034_, v_prop_2035_, v_lctx_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec_ref(v_lctx_2036_);
lean_dec(v_numIndices_2034_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f(lean_object* v_numIndices_2043_, lean_object* v_prop_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_){
_start:
{
lean_object* v_lctx_2050_; lean_object* v___x_2051_; 
v_lctx_2050_ = lean_ctor_get(v_a_2045_, 2);
v___x_2051_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0(v_numIndices_2043_, v_prop_2044_, v_lctx_2050_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_);
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f___boxed(lean_object* v_numIndices_2052_, lean_object* v_prop_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f(v_numIndices_2052_, v_prop_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_);
lean_dec(v_a_2057_);
lean_dec_ref(v_a_2056_);
lean_dec(v_a_2055_);
lean_dec_ref(v_a_2054_);
lean_dec(v_numIndices_2052_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1(lean_object* v_numIndices_2060_, lean_object* v_prop_2061_, lean_object* v_as_2062_, lean_object* v_i_2063_, lean_object* v_a_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v___x_2070_; 
v___x_2070_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg(v_numIndices_2060_, v_prop_2061_, v_as_2062_, v_i_2063_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_numIndices_2071_, lean_object* v_prop_2072_, lean_object* v_as_2073_, lean_object* v_i_2074_, lean_object* v_a_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1(v_numIndices_2071_, v_prop_2072_, v_as_2073_, v_i_2074_, v_a_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec_ref(v_as_2073_);
lean_dec(v_numIndices_2071_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_numIndices_2082_, lean_object* v_prop_2083_, lean_object* v_as_2084_, lean_object* v_i_2085_, lean_object* v_a_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_){
_start:
{
lean_object* v___x_2092_; 
v___x_2092_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___redArg(v_numIndices_2082_, v_prop_2083_, v_as_2084_, v_i_2085_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_numIndices_2093_, lean_object* v_prop_2094_, lean_object* v_as_2095_, lean_object* v_i_2096_, lean_object* v_a_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__2_spec__3(v_numIndices_2093_, v_prop_2094_, v_as_2095_, v_i_2096_, v_a_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec_ref(v_as_2095_);
lean_dec(v_numIndices_2093_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f(lean_object* v_numIndices_2108_, lean_object* v_prop_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v___x_2118_; uint8_t v___x_2119_; 
v___x_2118_ = l_Lean_Expr_cleanupAnnotations(v_prop_2109_);
v___x_2119_ = l_Lean_Expr_isApp(v___x_2118_);
if (v___x_2119_ == 0)
{
lean_dec_ref(v___x_2118_);
goto v___jp_2115_;
}
else
{
lean_object* v___x_2120_; uint8_t v___x_2121_; 
v___x_2120_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2118_);
v___x_2121_ = l_Lean_Expr_isApp(v___x_2120_);
if (v___x_2121_ == 0)
{
lean_dec_ref(v___x_2120_);
lean_dec_ref(v___x_2118_);
goto v___jp_2115_;
}
else
{
lean_object* v___x_2122_; uint8_t v___x_2123_; 
v___x_2122_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2120_);
v___x_2123_ = l_Lean_Expr_isApp(v___x_2122_);
if (v___x_2123_ == 0)
{
lean_dec_ref(v___x_2122_);
lean_dec_ref(v___x_2120_);
lean_dec_ref(v___x_2118_);
goto v___jp_2115_;
}
else
{
lean_object* v___x_2124_; lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2124_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2122_);
v___x_2125_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1));
v___x_2126_ = l_Lean_Expr_isConstOf(v___x_2124_, v___x_2125_);
lean_dec_ref(v___x_2124_);
if (v___x_2126_ == 0)
{
lean_dec_ref(v___x_2122_);
lean_dec_ref(v___x_2120_);
lean_dec_ref(v___x_2118_);
goto v___jp_2115_;
}
else
{
lean_object* v_arg_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v_arg_2127_ = lean_ctor_get(v___x_2122_, 1);
lean_inc_ref(v_arg_2127_);
lean_dec_ref(v___x_2122_);
v___x_2128_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2));
v___x_2129_ = l_Lean_Expr_isConstOf(v_arg_2127_, v___x_2128_);
lean_dec_ref(v_arg_2127_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
lean_dec_ref(v___x_2120_);
lean_dec_ref(v___x_2118_);
v___x_2130_ = lean_box(0);
v___x_2131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2130_);
return v___x_2131_;
}
else
{
lean_object* v_arg_2132_; lean_object* v_arg_2133_; uint8_t v_val_2135_; lean_object* v___x_2192_; uint8_t v___x_2193_; 
v_arg_2132_ = lean_ctor_get(v___x_2118_, 1);
lean_inc_ref(v_arg_2132_);
lean_dec_ref(v___x_2118_);
v_arg_2133_ = lean_ctor_get(v___x_2120_, 1);
lean_inc_ref(v_arg_2133_);
lean_dec_ref(v___x_2120_);
v___x_2192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4));
v___x_2193_ = l_Lean_Expr_isConstOf(v_arg_2132_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2194_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1));
v___x_2195_ = l_Lean_Expr_isConstOf(v_arg_2132_, v___x_2194_);
lean_dec_ref(v_arg_2132_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
lean_dec_ref(v_arg_2133_);
v___x_2196_ = lean_box(0);
v___x_2197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
return v___x_2197_;
}
else
{
v_val_2135_ = v___x_2193_;
goto v___jp_2134_;
}
}
else
{
lean_dec_ref(v_arg_2132_);
v_val_2135_ = v___x_2126_;
goto v___jp_2134_;
}
v___jp_2134_:
{
lean_object* v___x_2136_; 
v___x_2136_ = l_Lean_Meta_boolCondToProp_x3f(v_arg_2133_, v_val_2135_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2183_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2183_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2183_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
if (lean_obj_tag(v_a_2137_) == 1)
{
lean_object* v_val_2141_; lean_object* v_fst_2142_; lean_object* v_snd_2143_; lean_object* v___x_2144_; 
lean_del_object(v___x_2139_);
v_val_2141_ = lean_ctor_get(v_a_2137_, 0);
lean_inc(v_val_2141_);
lean_dec_ref_known(v_a_2137_, 1);
v_fst_2142_ = lean_ctor_get(v_val_2141_, 0);
lean_inc(v_fst_2142_);
v_snd_2143_ = lean_ctor_get(v_val_2141_, 1);
lean_inc(v_snd_2143_);
lean_dec(v_val_2141_);
v___x_2144_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f(v_numIndices_2108_, v_fst_2142_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2178_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2147_ = v___x_2144_;
v_isShared_2148_ = v_isSharedCheck_2178_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2178_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
if (lean_obj_tag(v_a_2145_) == 1)
{
lean_object* v_val_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2173_; 
lean_del_object(v___x_2147_);
v_val_2149_ = lean_ctor_get(v_a_2145_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v_a_2145_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2151_ = v_a_2145_;
v_isShared_2152_ = v_isSharedCheck_2173_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_val_2149_);
lean_dec(v_a_2145_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2173_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2153_; 
v___x_2153_ = l_Lean_Meta_mkEqMPR(v_snd_2143_, v_val_2149_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2164_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2156_ = v___x_2153_;
v_isShared_2157_ = v_isSharedCheck_2164_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2153_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2164_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v_a_2154_);
v___x_2159_ = v___x_2151_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2161_; 
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2159_);
v___x_2161_ = v___x_2156_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2159_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_del_object(v___x_2151_);
v_a_2165_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2153_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2153_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2176_; 
lean_dec(v_a_2145_);
lean_dec(v_snd_2143_);
v___x_2174_ = lean_box(0);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v___x_2174_);
v___x_2176_ = v___x_2147_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
else
{
lean_dec(v_snd_2143_);
return v___x_2144_;
}
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2181_; 
lean_dec(v_a_2137_);
v___x_2179_ = lean_box(0);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2179_);
v___x_2181_ = v___x_2139_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
v_a_2184_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2136_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2136_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
}
}
}
}
v___jp_2115_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_box(0);
v___x_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2116_);
return v___x_2117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___boxed(lean_object* v_numIndices_2198_, lean_object* v_prop_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f(v_numIndices_2198_, v_prop_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
lean_dec(v_a_2201_);
lean_dec_ref(v_a_2200_);
lean_dec_ref(v_prop_2199_);
lean_dec(v_numIndices_2198_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(lean_object* v_e_2206_, lean_object* v___y_2207_){
_start:
{
uint8_t v___x_2209_; 
v___x_2209_ = l_Lean_Expr_hasMVar(v_e_2206_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; 
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_e_2206_);
return v___x_2210_;
}
else
{
lean_object* v___x_2211_; lean_object* v_mctx_2212_; lean_object* v___x_2213_; lean_object* v_fst_2214_; lean_object* v_snd_2215_; lean_object* v___x_2216_; lean_object* v_cache_2217_; lean_object* v_zetaDeltaFVarIds_2218_; lean_object* v_postponed_2219_; lean_object* v_diag_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2229_; 
v___x_2211_ = lean_st_ref_get(v___y_2207_);
v_mctx_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc_ref(v_mctx_2212_);
lean_dec(v___x_2211_);
v___x_2213_ = l_Lean_instantiateMVarsCore(v_mctx_2212_, v_e_2206_);
v_fst_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_fst_2214_);
v_snd_2215_ = lean_ctor_get(v___x_2213_, 1);
lean_inc(v_snd_2215_);
lean_dec_ref(v___x_2213_);
v___x_2216_ = lean_st_ref_take(v___y_2207_);
v_cache_2217_ = lean_ctor_get(v___x_2216_, 1);
v_zetaDeltaFVarIds_2218_ = lean_ctor_get(v___x_2216_, 2);
v_postponed_2219_ = lean_ctor_get(v___x_2216_, 3);
v_diag_2220_ = lean_ctor_get(v___x_2216_, 4);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2229_ == 0)
{
lean_object* v_unused_2230_; 
v_unused_2230_ = lean_ctor_get(v___x_2216_, 0);
lean_dec(v_unused_2230_);
v___x_2222_ = v___x_2216_;
v_isShared_2223_ = v_isSharedCheck_2229_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_diag_2220_);
lean_inc(v_postponed_2219_);
lean_inc(v_zetaDeltaFVarIds_2218_);
lean_inc(v_cache_2217_);
lean_dec(v___x_2216_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2229_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v_snd_2215_);
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_snd_2215_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_cache_2217_);
lean_ctor_set(v_reuseFailAlloc_2228_, 2, v_zetaDeltaFVarIds_2218_);
lean_ctor_set(v_reuseFailAlloc_2228_, 3, v_postponed_2219_);
lean_ctor_set(v_reuseFailAlloc_2228_, 4, v_diag_2220_);
v___x_2225_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_st_ref_put(v___y_2207_, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v_fst_2214_);
return v___x_2227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg___boxed(lean_object* v_e_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_e_2231_, v___y_2232_);
lean_dec(v___y_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(lean_object* v_e_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_e_2235_, v___y_2240_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___boxed(lean_object* v_e_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(v_e_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg(lean_object* v_cls_2255_, lean_object* v_msg_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_ref_2262_; lean_object* v___x_2263_; lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2309_; 
v_ref_2262_ = lean_ctor_get(v___y_2259_, 2);
v___x_2263_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msg_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2309_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2309_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v_traceState_2269_; lean_object* v_env_2270_; lean_object* v_nextMacroScope_2271_; lean_object* v_ngen_2272_; lean_object* v_auxDeclNGen_2273_; lean_object* v_cache_2274_; lean_object* v_recordedDeps_2275_; lean_object* v_messages_2276_; lean_object* v_infoState_2277_; lean_object* v_snapshotTasks_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2308_; 
v___x_2268_ = lean_st_ref_take(v___y_2260_);
v_traceState_2269_ = lean_ctor_get(v___x_2268_, 4);
v_env_2270_ = lean_ctor_get(v___x_2268_, 0);
v_nextMacroScope_2271_ = lean_ctor_get(v___x_2268_, 1);
v_ngen_2272_ = lean_ctor_get(v___x_2268_, 2);
v_auxDeclNGen_2273_ = lean_ctor_get(v___x_2268_, 3);
v_cache_2274_ = lean_ctor_get(v___x_2268_, 5);
v_recordedDeps_2275_ = lean_ctor_get(v___x_2268_, 6);
v_messages_2276_ = lean_ctor_get(v___x_2268_, 7);
v_infoState_2277_ = lean_ctor_get(v___x_2268_, 8);
v_snapshotTasks_2278_ = lean_ctor_get(v___x_2268_, 9);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2280_ = v___x_2268_;
v_isShared_2281_ = v_isSharedCheck_2308_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_snapshotTasks_2278_);
lean_inc(v_infoState_2277_);
lean_inc(v_messages_2276_);
lean_inc(v_recordedDeps_2275_);
lean_inc(v_cache_2274_);
lean_inc(v_traceState_2269_);
lean_inc(v_auxDeclNGen_2273_);
lean_inc(v_ngen_2272_);
lean_inc(v_nextMacroScope_2271_);
lean_inc(v_env_2270_);
lean_dec(v___x_2268_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2308_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
uint64_t v_tid_2282_; lean_object* v_traces_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2307_; 
v_tid_2282_ = lean_ctor_get_uint64(v_traceState_2269_, sizeof(void*)*1);
v_traces_2283_ = lean_ctor_get(v_traceState_2269_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v_traceState_2269_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2285_ = v_traceState_2269_;
v_isShared_2286_ = v_isSharedCheck_2307_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_traces_2283_);
lean_dec(v_traceState_2269_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2307_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; double v___x_2289_; uint8_t v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2298_; 
v___x_2287_ = lean_box(0);
v___x_2288_ = lean_box(0);
v___x_2289_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0);
v___x_2290_ = 0;
v___x_2291_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1));
v___x_2292_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2292_, 0, v_cls_2255_);
lean_ctor_set(v___x_2292_, 1, v___x_2288_);
lean_ctor_set(v___x_2292_, 2, v___x_2291_);
lean_ctor_set_float(v___x_2292_, sizeof(void*)*3, v___x_2289_);
lean_ctor_set_float(v___x_2292_, sizeof(void*)*3 + 8, v___x_2289_);
lean_ctor_set_uint8(v___x_2292_, sizeof(void*)*3 + 16, v___x_2290_);
v___x_2293_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2));
v___x_2294_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set(v___x_2294_, 1, v_a_2264_);
lean_ctor_set(v___x_2294_, 2, v___x_2293_);
lean_inc(v_ref_2262_);
v___x_2295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2295_, 0, v_ref_2262_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = l_Lean_PersistentArray_push___redArg(v_traces_2283_, v___x_2295_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 0, v___x_2296_);
v___x_2298_ = v___x_2285_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2296_);
lean_ctor_set_uint64(v_reuseFailAlloc_2306_, sizeof(void*)*1, v_tid_2282_);
v___x_2298_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
lean_object* v___x_2300_; 
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 4, v___x_2298_);
v___x_2300_ = v___x_2280_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_env_2270_);
lean_ctor_set(v_reuseFailAlloc_2305_, 1, v_nextMacroScope_2271_);
lean_ctor_set(v_reuseFailAlloc_2305_, 2, v_ngen_2272_);
lean_ctor_set(v_reuseFailAlloc_2305_, 3, v_auxDeclNGen_2273_);
lean_ctor_set(v_reuseFailAlloc_2305_, 4, v___x_2298_);
lean_ctor_set(v_reuseFailAlloc_2305_, 5, v_cache_2274_);
lean_ctor_set(v_reuseFailAlloc_2305_, 6, v_recordedDeps_2275_);
lean_ctor_set(v_reuseFailAlloc_2305_, 7, v_messages_2276_);
lean_ctor_set(v_reuseFailAlloc_2305_, 8, v_infoState_2277_);
lean_ctor_set(v_reuseFailAlloc_2305_, 9, v_snapshotTasks_2278_);
v___x_2300_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
lean_object* v___x_2301_; lean_object* v___x_2303_; 
v___x_2301_ = lean_st_ref_put(v___y_2260_, v___x_2300_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2287_);
v___x_2303_ = v___x_2266_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v___x_2287_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg___boxed(lean_object* v_cls_2310_, lean_object* v_msg_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg(v_cls_2310_, v_msg_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
return v_res_2317_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0(void){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_unsigned_to_nat(1u);
v___x_2319_ = l_Lean_Level_ofNat(v___x_2318_);
return v___x_2319_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1(void){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2320_ = lean_box(0);
v___x_2321_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0);
v___x_2322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
lean_ctor_set(v___x_2322_, 1, v___x_2320_);
return v___x_2322_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2323_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1);
v___x_2324_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1));
v___x_2325_ = l_Lean_mkConst(v___x_2324_, v___x_2323_);
return v___x_2325_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2326_ = lean_box(0);
v___x_2327_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4));
v___x_2328_ = l_Lean_mkConst(v___x_2327_, v___x_2326_);
return v___x_2328_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2333_ = lean_box(0);
v___x_2334_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5));
v___x_2335_ = l_Lean_mkConst(v___x_2334_, v___x_2333_);
return v___x_2335_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7(void){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2336_ = lean_box(0);
v___x_2337_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1));
v___x_2338_ = l_Lean_mkConst(v___x_2337_, v___x_2336_);
return v___x_2338_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2343_ = lean_box(0);
v___x_2344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9));
v___x_2345_ = l_Lean_mkConst(v___x_2344_, v___x_2343_);
return v___x_2345_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13(void){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2349_ = lean_box(0);
v___x_2350_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12));
v___x_2351_ = l_Lean_mkConst(v___x_2350_, v___x_2349_);
return v___x_2351_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17(void){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2358_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16));
v___x_2359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_2360_ = l_Lean_Name_append(v___x_2359_, v___x_2358_);
return v___x_2360_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__19(void){
_start:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__18));
v___x_2363_ = l_Lean_stringToMessageData(v___x_2362_);
return v___x_2363_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__21(void){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__20));
v___x_2366_ = l_Lean_stringToMessageData(v___x_2365_);
return v___x_2366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__24(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__23));
v___x_2371_ = l_Lean_MessageData_ofFormat(v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(lean_object* v_numIndices_2372_, uint8_t v_useDecide_2373_, lean_object* v_prop_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_h_2384_; lean_object* v___x_2390_; lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2613_; 
v___x_2390_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_prop_2374_, v_a_2379_);
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2393_ = v___x_2390_;
v_isShared_2394_ = v_isSharedCheck_2613_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2390_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2613_;
goto v_resetjp_2392_;
}
v___jp_2383_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2385_, 0, v_h_2384_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
v___jp_2387_:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = lean_box(0);
v___x_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
return v___x_2389_;
}
v_resetjp_2392_:
{
lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v_toCold_2580_; lean_object* v_options_2581_; uint8_t v_hasTrace_2582_; 
v_toCold_2580_ = lean_ctor_get(v_a_2380_, 0);
v_options_2581_ = lean_ctor_get(v_toCold_2580_, 2);
v_hasTrace_2582_ = lean_ctor_get_uint8(v_options_2581_, sizeof(void*)*1);
if (v_hasTrace_2582_ == 0)
{
v___y_2540_ = v_a_2375_;
v___y_2541_ = v_a_2376_;
v___y_2542_ = v_a_2377_;
v___y_2543_ = v_a_2378_;
v___y_2544_ = v_a_2379_;
v___y_2545_ = v_a_2380_;
v___y_2546_ = v_a_2381_;
goto v___jp_2539_;
}
else
{
lean_object* v_inheritedTraceOptions_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; 
v_inheritedTraceOptions_2583_ = lean_ctor_get(v_toCold_2580_, 11);
v___x_2584_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16));
v___x_2585_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17);
v___x_2586_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2583_, v_options_2581_, v___x_2585_);
if (v___x_2586_ == 0)
{
v___y_2540_ = v_a_2375_;
v___y_2541_ = v_a_2376_;
v___y_2542_ = v_a_2377_;
v___y_2543_ = v_a_2378_;
v___y_2544_ = v_a_2379_;
v___y_2545_ = v_a_2380_;
v___y_2546_ = v_a_2381_;
goto v___jp_2539_;
}
else
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___y_2593_; lean_object* v___x_2606_; lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2587_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__19, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__19_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__19);
lean_inc(v_a_2391_);
v___x_2588_ = l_Lean_MessageData_ofExpr(v_a_2391_);
v___x_2589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__21, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__21_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__21);
v___x_2591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2589_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
v___x_2606_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__1));
v___x_2607_ = lean_unsigned_to_nat(1u);
v___x_2608_ = l_Lean_Expr_isAppOfArity(v_a_2391_, v___x_2606_, v___x_2607_);
if (v___x_2608_ == 0)
{
goto v___jp_2604_;
}
else
{
lean_object* v___x_2609_; uint8_t v___x_2610_; 
v___x_2609_ = l_Lean_Expr_appArg_x21(v_a_2391_);
v___x_2610_ = l_Lean_Expr_isAppOfArity(v___x_2609_, v___x_2606_, v___x_2607_);
if (v___x_2610_ == 0)
{
lean_dec_ref(v___x_2609_);
goto v___jp_2604_;
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = l_Lean_Expr_appArg_x21(v___x_2609_);
lean_dec_ref(v___x_2609_);
v___x_2612_ = l_Lean_MessageData_ofExpr(v___x_2611_);
v___y_2593_ = v___x_2612_;
goto v___jp_2592_;
}
}
v___jp_2592_:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2591_);
lean_ctor_set(v___x_2594_, 1, v___y_2593_);
v___x_2595_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg(v___x_2584_, v___x_2594_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_dec_ref_known(v___x_2595_, 1);
v___y_2540_ = v_a_2375_;
v___y_2541_ = v_a_2376_;
v___y_2542_ = v_a_2377_;
v___y_2543_ = v_a_2378_;
v___y_2544_ = v_a_2379_;
v___y_2545_ = v_a_2380_;
v___y_2546_ = v_a_2381_;
goto v___jp_2539_;
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
lean_del_object(v___x_2393_);
lean_dec(v_a_2391_);
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2595_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2595_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
v___jp_2604_:
{
lean_object* v___x_2605_; 
v___x_2605_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__24, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__24_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__24);
v___y_2593_ = v___x_2605_;
goto v___jp_2592_;
}
}
}
v___jp_2395_:
{
lean_object* v___x_2400_; 
lean_inc(v_a_2391_);
v___x_2400_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f(v_numIndices_2372_, v_a_2391_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref_known(v___x_2400_, 1);
if (lean_obj_tag(v_a_2401_) == 1)
{
lean_object* v_val_2402_; 
lean_dec(v_a_2391_);
v_val_2402_ = lean_ctor_get(v_a_2401_, 0);
lean_inc(v_val_2402_);
lean_dec_ref_known(v_a_2401_, 1);
v_h_2384_ = v_val_2402_;
goto v___jp_2383_;
}
else
{
lean_object* v___x_2403_; 
lean_dec(v_a_2401_);
v___x_2403_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f(v_numIndices_2372_, v_a_2391_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2495_; 
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2406_ = v___x_2403_;
v_isShared_2407_ = v_isSharedCheck_2495_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2403_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2495_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
if (lean_obj_tag(v_a_2404_) == 1)
{
lean_object* v_val_2408_; 
lean_del_object(v___x_2406_);
lean_dec(v_a_2391_);
v_val_2408_ = lean_ctor_get(v_a_2404_, 0);
lean_inc(v_val_2408_);
lean_dec_ref_known(v_a_2404_, 1);
v_h_2384_ = v_val_2408_;
goto v___jp_2383_;
}
else
{
lean_object* v___x_2409_; lean_object* v___x_2410_; uint8_t v___x_2411_; 
lean_dec(v_a_2404_);
v___x_2409_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_findHyp_x3f_spec__0_spec__0_spec__1___redArg___closed__1));
v___x_2410_ = lean_unsigned_to_nat(1u);
v___x_2411_ = l_Lean_Expr_isAppOfArity(v_a_2391_, v___x_2409_, v___x_2410_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; lean_object* v___x_2414_; 
lean_dec(v_a_2391_);
v___x_2412_ = lean_box(0);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2412_);
v___x_2414_ = v___x_2406_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
else
{
lean_object* v___x_2416_; lean_object* v___x_2417_; uint8_t v___x_2418_; 
v___x_2416_ = l_Lean_Expr_appArg_x21(v_a_2391_);
lean_dec(v_a_2391_);
v___x_2417_ = l_Lean_Expr_cleanupAnnotations(v___x_2416_);
lean_dec_ref(v___x_2416_);
v___x_2418_ = l_Lean_Expr_isApp(v___x_2417_);
if (v___x_2418_ == 0)
{
lean_dec_ref(v___x_2417_);
lean_del_object(v___x_2406_);
goto v___jp_2387_;
}
else
{
lean_object* v___x_2419_; uint8_t v___x_2420_; 
v___x_2419_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2417_);
v___x_2420_ = l_Lean_Expr_isApp(v___x_2419_);
if (v___x_2420_ == 0)
{
lean_dec_ref(v___x_2419_);
lean_dec_ref(v___x_2417_);
lean_del_object(v___x_2406_);
goto v___jp_2387_;
}
else
{
lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2421_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2419_);
v___x_2422_ = l_Lean_Expr_isApp(v___x_2421_);
if (v___x_2422_ == 0)
{
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___x_2419_);
lean_dec_ref(v___x_2417_);
lean_del_object(v___x_2406_);
goto v___jp_2387_;
}
else
{
lean_object* v___x_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; 
v___x_2423_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2421_);
v___x_2424_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__1));
v___x_2425_ = l_Lean_Expr_isConstOf(v___x_2423_, v___x_2424_);
lean_dec_ref(v___x_2423_);
if (v___x_2425_ == 0)
{
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___x_2419_);
lean_dec_ref(v___x_2417_);
lean_del_object(v___x_2406_);
goto v___jp_2387_;
}
else
{
lean_object* v_arg_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v_arg_2426_ = lean_ctor_get(v___x_2421_, 1);
lean_inc_ref(v_arg_2426_);
lean_dec_ref(v___x_2421_);
v___x_2427_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2));
v___x_2428_ = l_Lean_Expr_isConstOf(v_arg_2426_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; lean_object* v___x_2431_; 
lean_dec_ref(v_arg_2426_);
lean_dec_ref(v___x_2419_);
lean_dec_ref(v___x_2417_);
v___x_2429_ = lean_box(0);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2429_);
v___x_2431_ = v___x_2406_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2429_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
else
{
lean_object* v_arg_2433_; lean_object* v_arg_2434_; lean_object* v___x_2435_; uint8_t v___x_2436_; 
v_arg_2433_ = lean_ctor_get(v___x_2417_, 1);
lean_inc_ref(v_arg_2433_);
lean_dec_ref(v___x_2417_);
v_arg_2434_ = lean_ctor_get(v___x_2419_, 1);
lean_inc_ref(v_arg_2434_);
lean_dec_ref(v___x_2419_);
v___x_2435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4));
v___x_2436_ = l_Lean_Expr_isConstOf(v_arg_2433_, v___x_2435_);
if (v___x_2436_ == 0)
{
lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2437_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1));
v___x_2438_ = l_Lean_Expr_isConstOf(v_arg_2433_, v___x_2437_);
lean_dec_ref(v_arg_2433_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
lean_dec_ref(v_arg_2434_);
lean_dec_ref(v_arg_2426_);
v___x_2439_ = lean_box(0);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2439_);
v___x_2441_ = v___x_2406_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
else
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
lean_del_object(v___x_2406_);
v___x_2443_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2);
v___x_2444_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3);
lean_inc_ref(v_arg_2434_);
v___x_2445_ = l_Lean_mkApp3(v___x_2443_, v_arg_2426_, v_arg_2434_, v___x_2444_);
v___x_2446_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f(v_numIndices_2372_, v___x_2445_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec_ref(v___x_2445_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2468_; 
v_a_2447_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2449_ = v___x_2446_;
v_isShared_2450_ = v_isSharedCheck_2468_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2468_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
if (lean_obj_tag(v_a_2447_) == 1)
{
lean_object* v_val_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2463_; 
v_val_2451_ = lean_ctor_get(v_a_2447_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_a_2447_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2453_ = v_a_2447_;
v_isShared_2454_ = v_isSharedCheck_2463_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_val_2451_);
lean_dec(v_a_2447_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2463_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2458_; 
v___x_2455_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6);
v___x_2456_ = l_Lean_mkAppB(v___x_2455_, v_arg_2434_, v_val_2451_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2456_);
v___x_2458_ = v___x_2453_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2456_);
v___x_2458_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2460_; 
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 0, v___x_2458_);
v___x_2460_ = v___x_2449_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
else
{
lean_object* v___x_2464_; lean_object* v___x_2466_; 
lean_dec(v_a_2447_);
lean_dec_ref(v_arg_2434_);
v___x_2464_ = lean_box(0);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 0, v___x_2464_);
v___x_2466_ = v___x_2449_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v___x_2464_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
else
{
lean_dec_ref(v_arg_2434_);
return v___x_2446_;
}
}
}
else
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; 
lean_dec_ref(v_arg_2433_);
lean_del_object(v___x_2406_);
v___x_2469_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2);
v___x_2470_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7);
lean_inc_ref(v_arg_2434_);
v___x_2471_ = l_Lean_mkApp3(v___x_2469_, v_arg_2426_, v_arg_2434_, v___x_2470_);
v___x_2472_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f(v_numIndices_2372_, v___x_2471_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec_ref(v___x_2471_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2494_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2475_ = v___x_2472_;
v_isShared_2476_ = v_isSharedCheck_2494_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v___x_2472_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2494_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
if (lean_obj_tag(v_a_2473_) == 1)
{
lean_object* v_val_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2489_; 
v_val_2477_ = lean_ctor_get(v_a_2473_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v_a_2473_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2479_ = v_a_2473_;
v_isShared_2480_ = v_isSharedCheck_2489_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_val_2477_);
lean_dec(v_a_2473_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2489_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2484_; 
v___x_2481_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10);
v___x_2482_ = l_Lean_mkAppB(v___x_2481_, v_arg_2434_, v_val_2477_);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 0, v___x_2482_);
v___x_2484_ = v___x_2479_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v___x_2482_);
v___x_2484_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2486_; 
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2484_);
v___x_2486_ = v___x_2475_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
lean_dec(v_a_2473_);
lean_dec_ref(v_arg_2434_);
v___x_2490_ = lean_box(0);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2490_);
v___x_2492_ = v___x_2475_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v___x_2490_);
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
lean_dec_ref(v_arg_2434_);
return v___x_2472_;
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
lean_dec(v_a_2391_);
return v___x_2403_;
}
}
}
else
{
lean_dec(v_a_2391_);
return v___x_2400_;
}
}
v___jp_2496_:
{
if (lean_obj_tag(v___y_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v_a_2504_ = lean_ctor_get(v___y_2503_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___y_2503_, 1);
v___x_2505_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4));
v___x_2506_ = l_Lean_Expr_isConstOf(v_a_2504_, v___x_2505_);
lean_dec(v_a_2504_);
if (v___x_2506_ == 0)
{
lean_dec_ref(v___y_2501_);
lean_dec_ref(v___y_2499_);
lean_del_object(v___x_2393_);
v___y_2396_ = v___y_2498_;
v___y_2397_ = v___y_2497_;
v___y_2398_ = v___y_2500_;
v___y_2399_ = v___y_2502_;
goto v___jp_2395_;
}
else
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
lean_dec(v_a_2391_);
v___x_2507_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3);
v___x_2508_ = l_Lean_Meta_mkEqRefl(v___x_2507_, v___y_2498_, v___y_2497_, v___y_2500_, v___y_2502_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2522_; 
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2511_ = v___x_2508_;
v_isShared_2512_ = v_isSharedCheck_2522_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2522_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2517_; 
v___x_2513_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13);
v___x_2514_ = l_Lean_Expr_appArg_x21(v___y_2499_);
lean_dec_ref(v___y_2499_);
v___x_2515_ = l_Lean_mkApp3(v___x_2513_, v___y_2501_, v___x_2514_, v_a_2509_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set_tag(v___x_2393_, 1);
lean_ctor_set(v___x_2393_, 0, v___x_2515_);
v___x_2517_ = v___x_2393_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
lean_object* v___x_2519_; 
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2517_);
v___x_2519_ = v___x_2511_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2517_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec_ref(v___y_2501_);
lean_dec_ref(v___y_2499_);
lean_del_object(v___x_2393_);
v_a_2523_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2508_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2508_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
lean_dec_ref(v___y_2501_);
lean_dec_ref(v___y_2499_);
lean_del_object(v___x_2393_);
lean_dec(v_a_2391_);
v_a_2531_ = lean_ctor_get(v___y_2503_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___y_2503_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___y_2503_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___y_2503_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2531_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
v___jp_2539_:
{
if (v_useDecide_2373_ == 0)
{
lean_del_object(v___x_2393_);
v___y_2396_ = v___y_2543_;
v___y_2397_ = v___y_2544_;
v___y_2398_ = v___y_2545_;
v___y_2399_ = v___y_2546_;
goto v___jp_2395_;
}
else
{
lean_object* v___x_2547_; lean_object* v_a_2548_; uint8_t v___x_2549_; 
lean_inc(v_a_2391_);
v___x_2547_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_a_2391_, v___y_2544_);
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref(v___x_2547_);
v___x_2549_ = l_Lean_Expr_hasFVar(v_a_2548_);
if (v___x_2549_ == 0)
{
uint8_t v___x_2550_; 
v___x_2550_ = l_Lean_Expr_hasMVar(v_a_2548_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
lean_inc(v_a_2548_);
v___x_2551_ = l_Lean_Meta_mkDecide(v_a_2548_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2553_; uint8_t v_transparency_2554_; uint8_t v___x_2555_; uint8_t v___x_2556_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = l_Lean_Meta_Context_config(v___y_2543_);
v_transparency_2554_ = lean_ctor_get_uint8(v___x_2553_, 9);
lean_dec_ref(v___x_2553_);
v___x_2555_ = 1;
v___x_2556_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2554_, v___x_2555_);
if (v___x_2556_ == 0)
{
lean_object* v_keyedConfig_2557_; uint8_t v_trackZetaDelta_2558_; lean_object* v_zetaDeltaSet_2559_; lean_object* v_lctx_2560_; lean_object* v_localInstances_2561_; lean_object* v_defEqCtx_x3f_2562_; lean_object* v_synthPendingDepth_2563_; lean_object* v_customCanUnfoldPredicate_x3f_2564_; uint8_t v_univApprox_2565_; uint8_t v_inTypeClassResolution_2566_; uint8_t v_cacheInferType_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v_keyedConfig_2557_ = lean_ctor_get(v___y_2543_, 0);
v_trackZetaDelta_2558_ = lean_ctor_get_uint8(v___y_2543_, sizeof(void*)*7);
v_zetaDeltaSet_2559_ = lean_ctor_get(v___y_2543_, 1);
v_lctx_2560_ = lean_ctor_get(v___y_2543_, 2);
v_localInstances_2561_ = lean_ctor_get(v___y_2543_, 3);
v_defEqCtx_x3f_2562_ = lean_ctor_get(v___y_2543_, 4);
v_synthPendingDepth_2563_ = lean_ctor_get(v___y_2543_, 5);
v_customCanUnfoldPredicate_x3f_2564_ = lean_ctor_get(v___y_2543_, 6);
v_univApprox_2565_ = lean_ctor_get_uint8(v___y_2543_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2566_ = lean_ctor_get_uint8(v___y_2543_, sizeof(void*)*7 + 2);
v_cacheInferType_2567_ = lean_ctor_get_uint8(v___y_2543_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2557_);
v___x_2568_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2555_, v_keyedConfig_2557_);
lean_inc(v_customCanUnfoldPredicate_x3f_2564_);
lean_inc(v_synthPendingDepth_2563_);
lean_inc(v_defEqCtx_x3f_2562_);
lean_inc_ref(v_localInstances_2561_);
lean_inc_ref(v_lctx_2560_);
lean_inc(v_zetaDeltaSet_2559_);
v___x_2569_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v_zetaDeltaSet_2559_);
lean_ctor_set(v___x_2569_, 2, v_lctx_2560_);
lean_ctor_set(v___x_2569_, 3, v_localInstances_2561_);
lean_ctor_set(v___x_2569_, 4, v_defEqCtx_x3f_2562_);
lean_ctor_set(v___x_2569_, 5, v_synthPendingDepth_2563_);
lean_ctor_set(v___x_2569_, 6, v_customCanUnfoldPredicate_x3f_2564_);
lean_ctor_set_uint8(v___x_2569_, sizeof(void*)*7, v_trackZetaDelta_2558_);
lean_ctor_set_uint8(v___x_2569_, sizeof(void*)*7 + 1, v_univApprox_2565_);
lean_ctor_set_uint8(v___x_2569_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2566_);
lean_ctor_set_uint8(v___x_2569_, sizeof(void*)*7 + 3, v_cacheInferType_2567_);
lean_inc(v___y_2546_);
lean_inc_ref(v___y_2545_);
lean_inc(v___y_2544_);
lean_inc(v_a_2552_);
v___x_2570_ = lean_whnf(v_a_2552_, v___x_2569_, v___y_2544_, v___y_2545_, v___y_2546_);
v___y_2497_ = v___y_2544_;
v___y_2498_ = v___y_2543_;
v___y_2499_ = v_a_2552_;
v___y_2500_ = v___y_2545_;
v___y_2501_ = v_a_2548_;
v___y_2502_ = v___y_2546_;
v___y_2503_ = v___x_2570_;
goto v___jp_2496_;
}
else
{
lean_object* v___x_2571_; 
lean_inc(v___y_2546_);
lean_inc_ref(v___y_2545_);
lean_inc(v___y_2544_);
lean_inc_ref(v___y_2543_);
lean_inc(v_a_2552_);
v___x_2571_ = lean_whnf(v_a_2552_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
v___y_2497_ = v___y_2544_;
v___y_2498_ = v___y_2543_;
v___y_2499_ = v_a_2552_;
v___y_2500_ = v___y_2545_;
v___y_2501_ = v_a_2548_;
v___y_2502_ = v___y_2546_;
v___y_2503_ = v___x_2571_;
goto v___jp_2496_;
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec(v_a_2548_);
lean_del_object(v___x_2393_);
lean_dec(v_a_2391_);
v_a_2572_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2551_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2551_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
}
else
{
lean_dec(v_a_2548_);
lean_del_object(v___x_2393_);
v___y_2396_ = v___y_2543_;
v___y_2397_ = v___y_2544_;
v___y_2398_ = v___y_2545_;
v___y_2399_ = v___y_2546_;
goto v___jp_2395_;
}
}
else
{
lean_dec(v_a_2548_);
lean_del_object(v___x_2393_);
v___y_2396_ = v___y_2543_;
v___y_2397_ = v___y_2544_;
v___y_2398_ = v___y_2545_;
v___y_2399_ = v___y_2546_;
goto v___jp_2395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed(lean_object* v_numIndices_2614_, lean_object* v_useDecide_2615_, lean_object* v_prop_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_){
_start:
{
uint8_t v_useDecide_boxed_2625_; lean_object* v_res_2626_; 
v_useDecide_boxed_2625_ = lean_unbox(v_useDecide_2615_);
v_res_2626_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2614_, v_useDecide_boxed_2625_, v_prop_2616_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_);
lean_dec(v_a_2623_);
lean_dec_ref(v_a_2622_);
lean_dec(v_a_2621_);
lean_dec_ref(v_a_2620_);
lean_dec(v_a_2619_);
lean_dec_ref(v_a_2618_);
lean_dec(v_a_2617_);
lean_dec(v_numIndices_2614_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(lean_object* v_cls_2627_, lean_object* v_msg_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v___x_2637_; 
v___x_2637_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___redArg(v_cls_2627_, v_msg_2628_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___boxed(lean_object* v_cls_2638_, lean_object* v_msg_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(v_cls_2638_, v_msg_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
return v_res_2648_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2(void){
_start:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2653_ = lean_box(0);
v___x_2654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1));
v___x_2655_ = l_Lean_mkConst(v___x_2654_, v___x_2653_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(lean_object* v_numIndices_2659_, uint8_t v_useDecideBool_2660_, lean_object* v_e_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_){
_start:
{
lean_object* v___x_2673_; 
lean_inc_ref(v_e_2661_);
v___x_2673_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2661_, v_a_2666_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2675_; uint8_t v___x_2676_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v___x_2675_ = l_Lean_Expr_cleanupAnnotations(v_a_2674_);
lean_dec(v_a_2674_);
v___x_2676_ = l_Lean_Expr_isApp(v___x_2675_);
if (v___x_2676_ == 0)
{
lean_dec_ref(v___x_2675_);
lean_dec_ref(v_e_2661_);
goto v___jp_2670_;
}
else
{
lean_object* v___x_2677_; uint8_t v___x_2678_; 
v___x_2677_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2675_);
v___x_2678_ = l_Lean_Expr_isApp(v___x_2677_);
if (v___x_2678_ == 0)
{
lean_dec_ref(v___x_2677_);
lean_dec_ref(v___x_2675_);
lean_dec_ref(v_e_2661_);
goto v___jp_2670_;
}
else
{
lean_object* v___x_2679_; uint8_t v___x_2680_; 
v___x_2679_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2677_);
v___x_2680_ = l_Lean_Expr_isApp(v___x_2679_);
if (v___x_2680_ == 0)
{
lean_dec_ref(v___x_2679_);
lean_dec_ref(v___x_2677_);
lean_dec_ref(v___x_2675_);
lean_dec_ref(v_e_2661_);
goto v___jp_2670_;
}
else
{
lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2681_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2679_);
v___x_2682_ = l_Lean_Expr_isApp(v___x_2681_);
if (v___x_2682_ == 0)
{
lean_dec_ref(v___x_2681_);
lean_dec_ref(v___x_2679_);
lean_dec_ref(v___x_2677_);
lean_dec_ref(v___x_2675_);
lean_dec_ref(v_e_2661_);
goto v___jp_2670_;
}
else
{
lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2683_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2681_);
v___x_2684_ = l_Lean_Expr_isApp(v___x_2683_);
if (v___x_2684_ == 0)
{
lean_dec_ref(v___x_2683_);
lean_dec_ref(v___x_2681_);
lean_dec_ref(v___x_2679_);
lean_dec_ref(v___x_2677_);
lean_dec_ref(v___x_2675_);
lean_dec_ref(v_e_2661_);
goto v___jp_2670_;
}
else
{
lean_object* v___x_2685_; lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2685_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2683_);
v___x_2686_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_2687_ = l_Lean_Expr_isConstOf(v___x_2685_, v___x_2686_);
if (v___x_2687_ == 0)
{
lean_dec_ref(v___x_2685_);
lean_dec_ref(v___x_2683_);
lean_dec_ref(v___x_2681_);
lean_dec_ref(v___x_2679_);
lean_dec_ref(v___x_2677_);
lean_dec_ref(v___x_2675_);
lean_dec_ref(v_e_2661_);
goto v___jp_2670_;
}
else
{
lean_object* v_arg_2688_; lean_object* v_arg_2689_; lean_object* v_arg_2690_; lean_object* v_arg_2691_; lean_object* v_arg_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v_arg_2688_ = lean_ctor_get(v___x_2675_, 1);
lean_inc_ref(v_arg_2688_);
lean_dec_ref(v___x_2675_);
v_arg_2689_ = lean_ctor_get(v___x_2677_, 1);
lean_inc_ref(v_arg_2689_);
lean_dec_ref(v___x_2677_);
v_arg_2690_ = lean_ctor_get(v___x_2679_, 1);
lean_inc_ref(v_arg_2690_);
lean_dec_ref(v___x_2679_);
v_arg_2691_ = lean_ctor_get(v___x_2681_, 1);
lean_inc_ref_n(v_arg_2691_, 2);
lean_dec_ref(v___x_2681_);
v_arg_2692_ = lean_ctor_get(v___x_2683_, 1);
lean_inc_ref(v_arg_2692_);
lean_dec_ref(v___x_2683_);
v___x_2693_ = l_Lean_Expr_constLevels_x21(v___x_2685_);
v___x_2694_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2659_, v_useDecideBool_2660_, v_arg_2691_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2837_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2697_ = v___x_2694_;
v_isShared_2698_ = v_isSharedCheck_2837_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2837_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
if (lean_obj_tag(v_a_2695_) == 1)
{
lean_object* v_val_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2714_; 
lean_dec_ref(v___x_2685_);
lean_dec_ref(v_e_2661_);
v_val_2699_ = lean_ctor_get(v_a_2695_, 0);
v_isSharedCheck_2714_ = !lean_is_exclusive(v_a_2695_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2701_ = v_a_2695_;
v_isShared_2702_ = v_isSharedCheck_2714_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_val_2699_);
lean_dec(v_a_2695_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2714_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2707_; 
v___x_2703_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__4));
v___x_2704_ = l_Lean_mkConst(v___x_2703_, v___x_2693_);
lean_inc_ref(v_arg_2689_);
v___x_2705_ = l_Lean_mkApp6(v___x_2704_, v_arg_2691_, v_arg_2690_, v_val_2699_, v_arg_2692_, v_arg_2689_, v_arg_2688_);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v___x_2705_);
v___x_2707_ = v___x_2701_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2711_; 
v___x_2708_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2708_, 0, v_arg_2689_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
lean_ctor_set_uint8(v___x_2708_, sizeof(void*)*2, v___x_2687_);
v___x_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2709_);
v___x_2711_ = v___x_2697_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2709_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
else
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
lean_del_object(v___x_2697_);
lean_dec(v_a_2695_);
lean_inc_ref(v_arg_2691_);
v___x_2715_ = l_Lean_mkNot(v_arg_2691_);
v___x_2716_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2659_, v_useDecideBool_2660_, v___x_2715_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2828_; 
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2719_ = v___x_2716_;
v_isShared_2720_ = v_isSharedCheck_2828_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2828_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
if (lean_obj_tag(v_a_2717_) == 1)
{
lean_object* v_val_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2736_; 
lean_dec_ref(v___x_2685_);
lean_dec_ref(v_e_2661_);
v_val_2721_ = lean_ctor_get(v_a_2717_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_a_2717_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2723_ = v_a_2717_;
v_isShared_2724_ = v_isSharedCheck_2736_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_val_2721_);
lean_dec(v_a_2717_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2736_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2729_; 
v___x_2725_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__14));
v___x_2726_ = l_Lean_mkConst(v___x_2725_, v___x_2693_);
lean_inc_ref(v_arg_2688_);
v___x_2727_ = l_Lean_mkApp6(v___x_2726_, v_arg_2691_, v_arg_2690_, v_val_2721_, v_arg_2692_, v_arg_2689_, v_arg_2688_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 0, v___x_2727_);
v___x_2729_ = v___x_2723_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2727_);
v___x_2729_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2730_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2730_, 0, v_arg_2688_);
lean_ctor_set(v___x_2730_, 1, v___x_2729_);
lean_ctor_set_uint8(v___x_2730_, sizeof(void*)*2, v___x_2687_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 0, v___x_2731_);
v___x_2733_ = v___x_2719_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2731_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
else
{
lean_object* v___x_2737_; 
lean_del_object(v___x_2719_);
lean_dec(v_a_2717_);
lean_inc(v_a_2668_);
lean_inc_ref(v_a_2667_);
lean_inc(v_a_2666_);
lean_inc_ref(v_a_2665_);
lean_inc(v_a_2664_);
lean_inc_ref(v_a_2663_);
lean_inc(v_a_2662_);
lean_inc_ref(v_arg_2691_);
v___x_2737_ = lean_simp(v_arg_2691_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2819_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2740_ = v___x_2737_;
v_isShared_2741_ = v_isSharedCheck_2819_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2737_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2819_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v_expr_2742_; uint8_t v___x_2743_; 
v_expr_2742_ = lean_ctor_get(v_a_2738_, 0);
v___x_2743_ = lean_expr_eqv(v_expr_2742_, v_arg_2691_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
lean_del_object(v___x_2740_);
v___x_2744_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2);
lean_inc_ref(v_expr_2742_);
v___x_2745_ = l_Lean_Expr_app___override(v___x_2744_, v_expr_2742_);
v___x_2746_ = lean_box(0);
v___x_2747_ = l_Lean_Meta_trySynthInstance(v___x_2745_, v___x_2746_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2796_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2750_ = v___x_2747_;
v_isShared_2751_ = v_isSharedCheck_2796_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2747_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2796_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
if (lean_obj_tag(v_a_2748_) == 1)
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2782_; 
lean_inc_ref(v_expr_2742_);
lean_del_object(v___x_2750_);
lean_dec_ref(v_e_2661_);
v_a_2752_ = lean_ctor_get(v_a_2748_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_a_2748_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2754_ = v_a_2748_;
v_isShared_2755_ = v_isSharedCheck_2782_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v_a_2748_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2782_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Lean_Meta_Simp_Result_getProof(v_a_2738_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2773_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2759_ = v___x_2756_;
v_isShared_2760_ = v_isSharedCheck_2773_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2756_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2773_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2761_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__4));
v___x_2762_ = l_Lean_mkConst(v___x_2761_, v___x_2693_);
lean_inc_ref(v_arg_2688_);
lean_inc_ref(v_arg_2689_);
lean_inc(v_a_2752_);
lean_inc_ref(v_expr_2742_);
lean_inc_ref(v_arg_2692_);
v___x_2763_ = l_Lean_mkApp8(v___x_2762_, v_arg_2692_, v_arg_2691_, v_expr_2742_, v_arg_2690_, v_a_2752_, v_arg_2689_, v_arg_2688_, v_a_2757_);
v___x_2764_ = l_Lean_mkApp5(v___x_2685_, v_arg_2692_, v_expr_2742_, v_a_2752_, v_arg_2689_, v_arg_2688_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 0, v___x_2763_);
v___x_2766_ = v___x_2754_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2763_);
v___x_2766_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2770_; 
v___x_2767_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2767_, 0, v___x_2764_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
lean_ctor_set_uint8(v___x_2767_, sizeof(void*)*2, v___x_2687_);
v___x_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2767_);
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v___x_2768_);
v___x_2770_ = v___x_2759_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v___x_2768_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_del_object(v___x_2754_);
lean_dec(v_a_2752_);
lean_dec_ref(v_expr_2742_);
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
v_a_2774_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2756_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2756_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
else
{
lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2793_; 
lean_dec(v_a_2748_);
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_a_2738_);
if (v_isSharedCheck_2793_ == 0)
{
lean_object* v_unused_2794_; lean_object* v_unused_2795_; 
v_unused_2794_ = lean_ctor_get(v_a_2738_, 1);
lean_dec(v_unused_2794_);
v_unused_2795_ = lean_ctor_get(v_a_2738_, 0);
lean_dec(v_unused_2795_);
v___x_2784_ = v_a_2738_;
v_isShared_2785_ = v_isSharedCheck_2793_;
goto v_resetjp_2783_;
}
else
{
lean_dec(v_a_2738_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2793_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 1, v___x_2746_);
lean_ctor_set(v___x_2784_, 0, v_e_2661_);
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_e_2661_);
lean_ctor_set(v_reuseFailAlloc_2792_, 1, v___x_2746_);
v___x_2787_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; lean_object* v___x_2790_; 
lean_ctor_set_uint8(v___x_2787_, sizeof(void*)*2, v___x_2687_);
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v___x_2788_);
v___x_2790_ = v___x_2750_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2788_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
}
else
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
lean_dec(v_a_2738_);
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
lean_dec_ref(v_e_2661_);
v_a_2797_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2799_ = v___x_2747_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2747_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2797_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
else
{
lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2816_; 
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
v_isSharedCheck_2816_ = !lean_is_exclusive(v_a_2738_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; lean_object* v_unused_2818_; 
v_unused_2817_ = lean_ctor_get(v_a_2738_, 1);
lean_dec(v_unused_2817_);
v_unused_2818_ = lean_ctor_get(v_a_2738_, 0);
lean_dec(v_unused_2818_);
v___x_2806_ = v_a_2738_;
v_isShared_2807_ = v_isSharedCheck_2816_;
goto v_resetjp_2805_;
}
else
{
lean_dec(v_a_2738_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2816_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2808_; lean_object* v___x_2810_; 
v___x_2808_ = lean_box(0);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 1, v___x_2808_);
lean_ctor_set(v___x_2806_, 0, v_e_2661_);
v___x_2810_ = v___x_2806_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_e_2661_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v___x_2808_);
v___x_2810_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
lean_object* v___x_2811_; lean_object* v___x_2813_; 
lean_ctor_set_uint8(v___x_2810_, sizeof(void*)*2, v___x_2687_);
v___x_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2810_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2811_);
v___x_2813_ = v___x_2740_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2811_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
lean_dec_ref(v_e_2661_);
v_a_2820_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2737_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2737_);
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
}
}
}
else
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
lean_dec_ref(v_e_2661_);
v_a_2829_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2831_ = v___x_2716_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2716_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
return v___x_2834_;
}
}
}
}
}
}
else
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2845_; 
lean_dec(v___x_2693_);
lean_dec_ref(v_arg_2692_);
lean_dec_ref(v_arg_2691_);
lean_dec_ref(v_arg_2690_);
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v___x_2685_);
lean_dec_ref(v_e_2661_);
v_a_2838_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2840_ = v___x_2694_;
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2694_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2843_; 
if (v_isShared_2841_ == 0)
{
v___x_2843_ = v___x_2840_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2838_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
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
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2853_; 
lean_dec_ref(v_e_2661_);
v_a_2846_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2848_ = v___x_2673_;
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2673_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
v___jp_2670_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed(lean_object* v_numIndices_2854_, lean_object* v_useDecideBool_2855_, lean_object* v_e_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
uint8_t v_useDecideBool_boxed_2865_; lean_object* v_res_2866_; 
v_useDecideBool_boxed_2865_ = lean_unbox(v_useDecideBool_2855_);
v_res_2866_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(v_numIndices_2854_, v_useDecideBool_boxed_2865_, v_e_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_);
lean_dec(v_a_2863_);
lean_dec_ref(v_a_2862_);
lean_dec(v_a_2861_);
lean_dec_ref(v_a_2860_);
lean_dec(v_a_2859_);
lean_dec_ref(v_a_2858_);
lean_dec(v_a_2857_);
lean_dec(v_numIndices_2854_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(lean_object* v_e_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
if (lean_obj_tag(v_e_2870_) == 6)
{
lean_object* v_binderName_2874_; lean_object* v___x_2875_; 
v_binderName_2874_ = lean_ctor_get(v_e_2870_, 0);
lean_inc(v_binderName_2874_);
v___x_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2875_, 0, v_binderName_2874_);
return v___x_2875_;
}
else
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2876_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1));
v___x_2877_ = l_Lean_Core_mkFreshUserName(v___x_2876_, v_a_2871_, v_a_2872_);
return v___x_2877_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___boxed(lean_object* v_e_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_){
_start:
{
lean_object* v_res_2882_; 
v_res_2882_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_e_2878_, v_a_2879_, v_a_2880_);
lean_dec(v_a_2880_);
lean_dec_ref(v_a_2879_);
lean_dec_ref(v_e_2878_);
return v_res_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(lean_object* v_e_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_e_2883_, v_a_2886_, v_a_2887_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___boxed(lean_object* v_e_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(v_e_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
lean_dec(v_a_2894_);
lean_dec_ref(v_a_2893_);
lean_dec(v_a_2892_);
lean_dec_ref(v_a_2891_);
lean_dec_ref(v_e_2890_);
return v_res_2896_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2(void){
_start:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2901_ = lean_box(0);
v___x_2902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1));
v___x_2903_ = l_Lean_mkConst(v___x_2902_, v___x_2901_);
return v___x_2903_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = lean_unsigned_to_nat(0u);
v___x_2905_ = l_Lean_mkBVar(v___x_2904_);
return v___x_2905_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6(void){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2910_ = lean_box(0);
v___x_2911_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5));
v___x_2912_ = l_Lean_mkConst(v___x_2911_, v___x_2910_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(lean_object* v_numIndices_2916_, uint8_t v_useDecideBool_2917_, lean_object* v_e_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_){
_start:
{
lean_object* v___x_2930_; 
lean_inc_ref(v_e_2918_);
v___x_2930_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2918_, v_a_2923_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2930_, 1);
v___x_2932_ = l_Lean_Expr_cleanupAnnotations(v_a_2931_);
lean_dec(v_a_2931_);
v___x_2933_ = l_Lean_Expr_isApp(v___x_2932_);
if (v___x_2933_ == 0)
{
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_e_2918_);
goto v___jp_2927_;
}
else
{
lean_object* v___x_2934_; uint8_t v___x_2935_; 
v___x_2934_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2932_);
v___x_2935_ = l_Lean_Expr_isApp(v___x_2934_);
if (v___x_2935_ == 0)
{
lean_dec_ref(v___x_2934_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_e_2918_);
goto v___jp_2927_;
}
else
{
lean_object* v___x_2936_; uint8_t v___x_2937_; 
v___x_2936_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2934_);
v___x_2937_ = l_Lean_Expr_isApp(v___x_2936_);
if (v___x_2937_ == 0)
{
lean_dec_ref(v___x_2936_);
lean_dec_ref(v___x_2934_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_e_2918_);
goto v___jp_2927_;
}
else
{
lean_object* v___x_2938_; uint8_t v___x_2939_; 
v___x_2938_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2936_);
v___x_2939_ = l_Lean_Expr_isApp(v___x_2938_);
if (v___x_2939_ == 0)
{
lean_dec_ref(v___x_2938_);
lean_dec_ref(v___x_2936_);
lean_dec_ref(v___x_2934_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_e_2918_);
goto v___jp_2927_;
}
else
{
lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2940_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2938_);
v___x_2941_ = l_Lean_Expr_isApp(v___x_2940_);
if (v___x_2941_ == 0)
{
lean_dec_ref(v___x_2940_);
lean_dec_ref(v___x_2938_);
lean_dec_ref(v___x_2936_);
lean_dec_ref(v___x_2934_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_e_2918_);
goto v___jp_2927_;
}
else
{
lean_object* v___x_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v___x_2942_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2940_);
v___x_2943_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5));
v___x_2944_ = l_Lean_Expr_isConstOf(v___x_2942_, v___x_2943_);
if (v___x_2944_ == 0)
{
lean_dec_ref(v___x_2942_);
lean_dec_ref(v___x_2940_);
lean_dec_ref(v___x_2938_);
lean_dec_ref(v___x_2936_);
lean_dec_ref(v___x_2934_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_e_2918_);
goto v___jp_2927_;
}
else
{
lean_object* v_arg_2945_; lean_object* v_arg_2946_; lean_object* v_arg_2947_; lean_object* v_arg_2948_; lean_object* v_arg_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v_arg_2945_ = lean_ctor_get(v___x_2932_, 1);
lean_inc_ref(v_arg_2945_);
lean_dec_ref(v___x_2932_);
v_arg_2946_ = lean_ctor_get(v___x_2934_, 1);
lean_inc_ref(v_arg_2946_);
lean_dec_ref(v___x_2934_);
v_arg_2947_ = lean_ctor_get(v___x_2936_, 1);
lean_inc_ref(v_arg_2947_);
lean_dec_ref(v___x_2936_);
v_arg_2948_ = lean_ctor_get(v___x_2938_, 1);
lean_inc_ref_n(v_arg_2948_, 2);
lean_dec_ref(v___x_2938_);
v_arg_2949_ = lean_ctor_get(v___x_2940_, 1);
lean_inc_ref(v_arg_2949_);
lean_dec_ref(v___x_2940_);
v___x_2950_ = l_Lean_Expr_constLevels_x21(v___x_2942_);
v___x_2951_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2916_, v_useDecideBool_2917_, v_arg_2948_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_3123_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_2954_ = v___x_2951_;
v_isShared_2955_ = v_isSharedCheck_3123_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2951_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_3123_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
if (lean_obj_tag(v_a_2952_) == 1)
{
lean_object* v_val_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2973_; 
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_val_2956_ = lean_ctor_get(v_a_2952_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_a_2952_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2958_ = v_a_2952_;
v_isShared_2959_ = v_isSharedCheck_2973_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_val_2956_);
lean_dec(v_a_2952_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2973_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2966_; 
lean_inc(v_val_2956_);
lean_inc_ref(v_arg_2946_);
v___x_2960_ = l_Lean_Expr_app___override(v_arg_2946_, v_val_2956_);
v___x_2961_ = l_Lean_Expr_headBeta(v___x_2960_);
v___x_2962_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__16));
v___x_2963_ = l_Lean_mkConst(v___x_2962_, v___x_2950_);
v___x_2964_ = l_Lean_mkApp6(v___x_2963_, v_arg_2948_, v_arg_2947_, v_val_2956_, v_arg_2949_, v_arg_2946_, v_arg_2945_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_2964_);
v___x_2966_ = v___x_2958_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2964_);
v___x_2966_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2970_; 
v___x_2967_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2967_, 0, v___x_2961_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*2, v___x_2944_);
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v___x_2968_);
v___x_2970_ = v___x_2954_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
else
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
lean_del_object(v___x_2954_);
lean_dec(v_a_2952_);
lean_inc_ref(v_arg_2948_);
v___x_2974_ = l_Lean_mkNot(v_arg_2948_);
v___x_2975_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2916_, v_useDecideBool_2917_, v___x_2974_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3114_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_2978_ = v___x_2975_;
v_isShared_2979_ = v_isSharedCheck_3114_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2975_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3114_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
if (lean_obj_tag(v_a_2976_) == 1)
{
lean_object* v_val_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_val_2980_ = lean_ctor_get(v_a_2976_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v_a_2976_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2982_ = v_a_2976_;
v_isShared_2983_ = v_isSharedCheck_2997_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_val_2980_);
lean_dec(v_a_2976_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2997_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2990_; 
lean_inc(v_val_2980_);
lean_inc_ref(v_arg_2945_);
v___x_2984_ = l_Lean_Expr_app___override(v_arg_2945_, v_val_2980_);
v___x_2985_ = l_Lean_Expr_headBeta(v___x_2984_);
v___x_2986_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__18));
v___x_2987_ = l_Lean_mkConst(v___x_2986_, v___x_2950_);
v___x_2988_ = l_Lean_mkApp6(v___x_2987_, v_arg_2948_, v_arg_2947_, v_val_2980_, v_arg_2949_, v_arg_2946_, v_arg_2945_);
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 0, v___x_2988_);
v___x_2990_ = v___x_2982_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2988_);
v___x_2990_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2994_; 
v___x_2991_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2991_, 0, v___x_2985_);
lean_ctor_set(v___x_2991_, 1, v___x_2990_);
lean_ctor_set_uint8(v___x_2991_, sizeof(void*)*2, v___x_2944_);
v___x_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v___x_2992_);
v___x_2994_ = v___x_2978_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2992_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
else
{
lean_object* v___x_2998_; 
lean_del_object(v___x_2978_);
lean_dec(v_a_2976_);
lean_inc(v_a_2925_);
lean_inc_ref(v_a_2924_);
lean_inc(v_a_2923_);
lean_inc_ref(v_a_2922_);
lean_inc(v_a_2921_);
lean_inc_ref(v_a_2920_);
lean_inc(v_a_2919_);
lean_inc_ref(v_arg_2948_);
v___x_2998_ = lean_simp(v_arg_2948_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3105_; 
v_a_2999_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3001_ = v___x_2998_;
v_isShared_3002_ = v_isSharedCheck_3105_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2998_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3105_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v_expr_3003_; uint8_t v___x_3004_; 
v_expr_3003_ = lean_ctor_get(v_a_2999_, 0);
v___x_3004_ = lean_expr_eqv(v_expr_3003_, v_arg_2948_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3005_; 
lean_inc_ref(v_expr_3003_);
lean_del_object(v___x_3001_);
v___x_3005_ = l_Lean_Meta_Simp_Result_getProof(v_a_2999_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
lean_dec_ref_known(v___x_3005_, 1);
v___x_3007_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2);
lean_inc_ref(v_expr_3003_);
v___x_3008_ = l_Lean_Expr_app___override(v___x_3007_, v_expr_3003_);
v___x_3009_ = lean_box(0);
v___x_3010_ = l_Lean_Meta_trySynthInstance(v___x_3008_, v___x_3009_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3074_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3013_ = v___x_3010_;
v_isShared_3014_ = v_isSharedCheck_3074_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_3010_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3074_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
if (lean_obj_tag(v_a_3011_) == 1)
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3068_; 
lean_del_object(v___x_3013_);
lean_dec_ref(v_e_2918_);
v_a_3015_ = lean_ctor_get(v_a_3011_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v_a_3011_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3017_ = v_a_3011_;
v_isShared_3018_ = v_isSharedCheck_3068_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v_a_3011_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3068_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3019_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2);
v___x_3020_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3);
lean_inc(v_a_3006_);
lean_inc_ref(v_expr_3003_);
lean_inc_ref(v_arg_2948_);
v___x_3021_ = l_Lean_mkApp4(v___x_3019_, v_arg_2948_, v_expr_3003_, v_a_3006_, v___x_3020_);
lean_inc_ref(v_arg_2946_);
v___x_3022_ = l_Lean_Expr_app___override(v_arg_2946_, v___x_3021_);
v___x_3023_ = l_Lean_Expr_headBeta(v___x_3022_);
v___x_3024_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_arg_2946_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; uint8_t v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
v___x_3026_ = 0;
lean_inc_ref_n(v_expr_3003_, 2);
v___x_3027_ = l_Lean_mkLambda(v_a_3025_, v___x_3026_, v_expr_3003_, v___x_3023_);
v___x_3028_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6);
lean_inc(v_a_3006_);
lean_inc_ref(v_arg_2948_);
v___x_3029_ = l_Lean_mkApp4(v___x_3028_, v_arg_2948_, v_expr_3003_, v_a_3006_, v___x_3020_);
lean_inc_ref(v_arg_2945_);
v___x_3030_ = l_Lean_Expr_app___override(v_arg_2945_, v___x_3029_);
v___x_3031_ = l_Lean_Expr_headBeta(v___x_3030_);
v___x_3032_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_arg_2945_, v_a_2924_, v_a_2925_);
if (lean_obj_tag(v___x_3032_) == 0)
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3051_; 
v_a_3033_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3035_ = v___x_3032_;
v_isShared_3036_ = v_isSharedCheck_3051_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3032_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3051_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3044_; 
lean_inc_ref_n(v_expr_3003_, 2);
v___x_3037_ = l_Lean_mkNot(v_expr_3003_);
v___x_3038_ = l_Lean_mkLambda(v_a_3033_, v___x_3026_, v___x_3037_, v___x_3031_);
lean_inc(v_a_3015_);
lean_inc_ref(v_arg_2949_);
v___x_3039_ = l_Lean_mkApp5(v___x_2942_, v_arg_2949_, v_expr_3003_, v_a_3015_, v___x_3027_, v___x_3038_);
v___x_3040_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8));
v___x_3041_ = l_Lean_mkConst(v___x_3040_, v___x_2950_);
v___x_3042_ = l_Lean_mkApp8(v___x_3041_, v_arg_2949_, v_arg_2948_, v_expr_3003_, v_arg_2947_, v_a_3015_, v_arg_2946_, v_arg_2945_, v_a_3006_);
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 0, v___x_3042_);
v___x_3044_ = v___x_3017_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3042_);
v___x_3044_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3045_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3045_, 0, v___x_3039_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
lean_ctor_set_uint8(v___x_3045_, sizeof(void*)*2, v___x_2944_);
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
if (v_isShared_3036_ == 0)
{
lean_ctor_set(v___x_3035_, 0, v___x_3046_);
v___x_3048_ = v___x_3035_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3046_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
}
else
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
lean_dec_ref(v___x_3031_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3017_);
lean_dec(v_a_3015_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_3003_);
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
v_a_3052_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3054_ = v___x_3032_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3032_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3052_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec_ref(v___x_3023_);
lean_del_object(v___x_3017_);
lean_dec(v_a_3015_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_3003_);
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
v_a_3060_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3024_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3024_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
}
else
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3072_; 
lean_dec(v_a_3011_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_3003_);
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
v___x_3069_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3069_, 0, v_e_2918_);
lean_ctor_set(v___x_3069_, 1, v___x_3009_);
lean_ctor_set_uint8(v___x_3069_, sizeof(void*)*2, v___x_2944_);
v___x_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 0, v___x_3070_);
v___x_3072_ = v___x_3013_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3070_);
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
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_3003_);
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_a_3075_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3010_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3010_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec_ref(v_expr_3003_);
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_a_3083_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3005_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3005_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
else
{
lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_a_2999_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; lean_object* v_unused_3104_; 
v_unused_3103_ = lean_ctor_get(v_a_2999_, 1);
lean_dec(v_unused_3103_);
v_unused_3104_ = lean_ctor_get(v_a_2999_, 0);
lean_dec(v_unused_3104_);
v___x_3092_ = v_a_2999_;
v_isShared_3093_ = v_isSharedCheck_3102_;
goto v_resetjp_3091_;
}
else
{
lean_dec(v_a_2999_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3102_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3094_; lean_object* v___x_3096_; 
v___x_3094_ = lean_box(0);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 1, v___x_3094_);
lean_ctor_set(v___x_3092_, 0, v_e_2918_);
v___x_3096_ = v___x_3092_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_e_2918_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___x_3094_);
v___x_3096_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3097_; lean_object* v___x_3099_; 
lean_ctor_set_uint8(v___x_3096_, sizeof(void*)*2, v___x_2944_);
v___x_3097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 0, v___x_3097_);
v___x_3099_ = v___x_3001_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v___x_3097_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_a_3106_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_2998_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_2998_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_a_3115_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_2975_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_2975_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
lean_dec(v___x_2950_);
lean_dec_ref(v_arg_2949_);
lean_dec_ref(v_arg_2948_);
lean_dec_ref(v_arg_2947_);
lean_dec_ref(v_arg_2946_);
lean_dec_ref(v_arg_2945_);
lean_dec_ref(v___x_2942_);
lean_dec_ref(v_e_2918_);
v_a_3124_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_2951_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_2951_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
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
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec_ref(v_e_2918_);
v_a_3132_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_2930_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_2930_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
v___jp_2927_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
return v___x_2929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed(lean_object* v_numIndices_3140_, lean_object* v_useDecideBool_3141_, lean_object* v_e_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_){
_start:
{
uint8_t v_useDecideBool_boxed_3151_; lean_object* v_res_3152_; 
v_useDecideBool_boxed_3151_ = lean_unbox(v_useDecideBool_3141_);
v_res_3152_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(v_numIndices_3140_, v_useDecideBool_boxed_3151_, v_e_3142_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec_ref(v_a_3144_);
lean_dec(v_a_3143_);
lean_dec(v_numIndices_3140_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27(lean_object* v_numIndices_3163_, uint8_t v_useDecideBool_3164_, lean_object* v_e_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_){
_start:
{
lean_object* v___x_3177_; 
lean_inc_ref(v_e_3165_);
v___x_3177_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3165_, v_a_3170_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3178_);
lean_dec_ref_known(v___x_3177_, 1);
v___x_3179_ = l_Lean_Expr_cleanupAnnotations(v_a_3178_);
lean_dec(v_a_3178_);
v___x_3180_ = l_Lean_Expr_isApp(v___x_3179_);
if (v___x_3180_ == 0)
{
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v___x_3181_; uint8_t v___x_3182_; 
v___x_3181_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3179_);
v___x_3182_ = l_Lean_Expr_isApp(v___x_3181_);
if (v___x_3182_ == 0)
{
lean_dec_ref(v___x_3181_);
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v___x_3183_; uint8_t v___x_3184_; 
v___x_3183_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3181_);
v___x_3184_ = l_Lean_Expr_isApp(v___x_3183_);
if (v___x_3184_ == 0)
{
lean_dec_ref(v___x_3183_);
lean_dec_ref(v___x_3181_);
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v___x_3185_; uint8_t v___x_3186_; 
v___x_3185_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3183_);
v___x_3186_ = l_Lean_Expr_isApp(v___x_3185_);
if (v___x_3186_ == 0)
{
lean_dec_ref(v___x_3185_);
lean_dec_ref(v___x_3183_);
lean_dec_ref(v___x_3181_);
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3187_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3185_);
v___x_3188_ = l_Lean_Expr_isApp(v___x_3187_);
if (v___x_3188_ == 0)
{
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3185_);
lean_dec_ref(v___x_3183_);
lean_dec_ref(v___x_3181_);
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v___x_3189_; uint8_t v___x_3190_; 
v___x_3189_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3187_);
v___x_3190_ = l_Lean_Expr_isApp(v___x_3189_);
if (v___x_3190_ == 0)
{
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3185_);
lean_dec_ref(v___x_3183_);
lean_dec_ref(v___x_3181_);
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; 
v___x_3191_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3189_);
v___x_3192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3));
v___x_3193_ = l_Lean_Expr_isConstOf(v___x_3191_, v___x_3192_);
if (v___x_3193_ == 0)
{
lean_dec_ref(v___x_3191_);
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3185_);
lean_dec_ref(v___x_3183_);
lean_dec_ref(v___x_3181_);
lean_dec_ref(v___x_3179_);
lean_dec_ref(v_e_3165_);
goto v___jp_3174_;
}
else
{
lean_object* v_arg_3194_; lean_object* v_arg_3195_; lean_object* v_arg_3196_; lean_object* v_arg_3197_; lean_object* v_arg_3198_; lean_object* v_arg_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v_arg_3194_ = lean_ctor_get(v___x_3179_, 1);
lean_inc_ref(v_arg_3194_);
lean_dec_ref(v___x_3179_);
v_arg_3195_ = lean_ctor_get(v___x_3181_, 1);
lean_inc_ref(v_arg_3195_);
lean_dec_ref(v___x_3181_);
v_arg_3196_ = lean_ctor_get(v___x_3183_, 1);
lean_inc_ref(v_arg_3196_);
lean_dec_ref(v___x_3183_);
v_arg_3197_ = lean_ctor_get(v___x_3185_, 1);
lean_inc_ref_n(v_arg_3197_, 2);
lean_dec_ref(v___x_3185_);
v_arg_3198_ = lean_ctor_get(v___x_3187_, 1);
lean_inc_ref(v_arg_3198_);
lean_dec_ref(v___x_3187_);
v_arg_3199_ = lean_ctor_get(v___x_3189_, 1);
lean_inc_ref(v_arg_3199_);
lean_dec_ref(v___x_3189_);
v___x_3200_ = l_Lean_Expr_constLevels_x21(v___x_3191_);
lean_dec_ref(v___x_3191_);
v___x_3201_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_3163_, v_useDecideBool_3164_, v_arg_3197_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3263_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3204_ = v___x_3201_;
v_isShared_3205_ = v_isSharedCheck_3263_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3201_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3263_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
if (lean_obj_tag(v_a_3202_) == 1)
{
lean_object* v_val_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3223_; 
lean_dec_ref(v_e_3165_);
v_val_3206_ = lean_ctor_get(v_a_3202_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v_a_3202_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3208_ = v_a_3202_;
v_isShared_3209_ = v_isSharedCheck_3223_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_val_3206_);
lean_dec(v_a_3202_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3223_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3216_; 
lean_inc(v_val_3206_);
lean_inc_ref(v_arg_3195_);
v___x_3210_ = l_Lean_Expr_app___override(v_arg_3195_, v_val_3206_);
v___x_3211_ = l_Lean_Expr_headBeta(v___x_3210_);
v___x_3212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__1));
v___x_3213_ = l_Lean_mkConst(v___x_3212_, v___x_3200_);
v___x_3214_ = l_Lean_mkApp7(v___x_3213_, v_arg_3199_, v_arg_3198_, v_arg_3197_, v_arg_3196_, v_arg_3195_, v_arg_3194_, v_val_3206_);
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 0, v___x_3214_);
v___x_3216_ = v___x_3208_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v___x_3214_);
v___x_3216_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3217_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3217_, 0, v___x_3211_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
lean_ctor_set_uint8(v___x_3217_, sizeof(void*)*2, v___x_3193_);
v___x_3218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3217_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3218_);
v___x_3220_ = v___x_3204_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3218_);
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
lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_del_object(v___x_3204_);
lean_dec(v_a_3202_);
lean_inc_ref(v_arg_3197_);
v___x_3224_ = l_Lean_mkNot(v_arg_3197_);
v___x_3225_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_3163_, v_useDecideBool_3164_, v___x_3224_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3254_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3228_ = v___x_3225_;
v_isShared_3229_ = v_isSharedCheck_3254_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3225_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3254_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
if (lean_obj_tag(v_a_3226_) == 1)
{
lean_object* v_val_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3247_; 
lean_dec_ref(v_e_3165_);
v_val_3230_ = lean_ctor_get(v_a_3226_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v_a_3226_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3232_ = v_a_3226_;
v_isShared_3233_ = v_isSharedCheck_3247_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_val_3230_);
lean_dec(v_a_3226_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3247_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3240_; 
lean_inc(v_val_3230_);
lean_inc_ref(v_arg_3194_);
v___x_3234_ = l_Lean_Expr_app___override(v_arg_3194_, v_val_3230_);
v___x_3235_ = l_Lean_Expr_headBeta(v___x_3234_);
v___x_3236_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___closed__3));
v___x_3237_ = l_Lean_mkConst(v___x_3236_, v___x_3200_);
v___x_3238_ = l_Lean_mkApp7(v___x_3237_, v_arg_3199_, v_arg_3198_, v_arg_3197_, v_arg_3196_, v_arg_3195_, v_arg_3194_, v_val_3230_);
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 0, v___x_3238_);
v___x_3240_ = v___x_3232_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3238_);
v___x_3240_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3244_; 
v___x_3241_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3241_, 0, v___x_3235_);
lean_ctor_set(v___x_3241_, 1, v___x_3240_);
lean_ctor_set_uint8(v___x_3241_, sizeof(void*)*2, v___x_3193_);
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
if (v_isShared_3229_ == 0)
{
lean_ctor_set(v___x_3228_, 0, v___x_3242_);
v___x_3244_ = v___x_3228_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
else
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3252_; 
lean_dec(v_a_3226_);
lean_dec(v___x_3200_);
lean_dec_ref(v_arg_3199_);
lean_dec_ref(v_arg_3198_);
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_arg_3196_);
lean_dec_ref(v_arg_3195_);
lean_dec_ref(v_arg_3194_);
v___x_3248_ = lean_box(0);
v___x_3249_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3249_, 0, v_e_3165_);
lean_ctor_set(v___x_3249_, 1, v___x_3248_);
lean_ctor_set_uint8(v___x_3249_, sizeof(void*)*2, v___x_3193_);
v___x_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3249_);
if (v_isShared_3229_ == 0)
{
lean_ctor_set(v___x_3228_, 0, v___x_3250_);
v___x_3252_ = v___x_3228_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v___x_3250_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
else
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec(v___x_3200_);
lean_dec_ref(v_arg_3199_);
lean_dec_ref(v_arg_3198_);
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_arg_3196_);
lean_dec_ref(v_arg_3195_);
lean_dec_ref(v_arg_3194_);
lean_dec_ref(v_e_3165_);
v_a_3255_ = lean_ctor_get(v___x_3225_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3225_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3225_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
}
}
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
lean_dec(v___x_3200_);
lean_dec_ref(v_arg_3199_);
lean_dec_ref(v_arg_3198_);
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_arg_3196_);
lean_dec_ref(v_arg_3195_);
lean_dec_ref(v_arg_3194_);
lean_dec_ref(v_e_3165_);
v_a_3264_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3201_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3201_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
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
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
lean_dec_ref(v_e_3165_);
v_a_3272_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3177_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3177_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
v___jp_3174_:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3175_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
return v___x_3176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___boxed(lean_object* v_numIndices_3280_, lean_object* v_useDecideBool_3281_, lean_object* v_e_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_){
_start:
{
uint8_t v_useDecideBool_boxed_3291_; lean_object* v_res_3292_; 
v_useDecideBool_boxed_3291_ = lean_unbox(v_useDecideBool_3281_);
v_res_3292_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27(v_numIndices_3280_, v_useDecideBool_boxed_3291_, v_e_3282_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_, v_a_3287_, v_a_3288_, v_a_3289_);
lean_dec(v_a_3289_);
lean_dec_ref(v_a_3288_);
lean_dec(v_a_3287_);
lean_dec_ref(v_a_3286_);
lean_dec(v_a_3285_);
lean_dec_ref(v_a_3284_);
lean_dec(v_a_3283_);
lean_dec(v_numIndices_3280_);
return v_res_3292_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3295_ = lean_box(0);
v___x_3296_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__0));
v___x_3297_ = l_Lean_mkConst(v___x_3296_, v___x_3295_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27(lean_object* v_numIndices_3304_, uint8_t v_useDecideBool_3305_, lean_object* v_e_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v___x_3318_; uint8_t v___x_3319_; 
v___x_3318_ = l_Lean_Expr_cleanupAnnotations(v_e_3306_);
v___x_3319_ = l_Lean_Expr_isApp(v___x_3318_);
if (v___x_3319_ == 0)
{
lean_dec_ref(v___x_3318_);
lean_dec_ref(v_e_3306_);
goto v___jp_3315_;
}
else
{
lean_object* v___x_3320_; uint8_t v___x_3321_; 
v___x_3320_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3318_);
v___x_3321_ = l_Lean_Expr_isApp(v___x_3320_);
if (v___x_3321_ == 0)
{
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3318_);
lean_dec_ref(v_e_3306_);
goto v___jp_3315_;
}
else
{
lean_object* v___x_3322_; uint8_t v___x_3323_; 
v___x_3322_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3320_);
v___x_3323_ = l_Lean_Expr_isApp(v___x_3322_);
if (v___x_3323_ == 0)
{
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3318_);
lean_dec_ref(v_e_3306_);
goto v___jp_3315_;
}
else
{
lean_object* v___x_3324_; uint8_t v___x_3325_; 
v___x_3324_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3322_);
v___x_3325_ = l_Lean_Expr_isApp(v___x_3324_);
if (v___x_3325_ == 0)
{
lean_dec_ref(v___x_3324_);
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3318_);
lean_dec_ref(v_e_3306_);
goto v___jp_3315_;
}
else
{
lean_object* v___x_3326_; uint8_t v___x_3327_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v_fst_3336_; lean_object* v_snd_3337_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v_fst_3352_; lean_object* v_snd_3353_; 
v___x_3326_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3324_);
v___x_3327_ = l_Lean_Expr_isApp(v___x_3326_);
if (v___x_3327_ == 0)
{
lean_dec_ref(v___x_3326_);
lean_dec_ref(v___x_3324_);
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3318_);
lean_dec_ref(v_e_3306_);
goto v___jp_3315_;
}
else
{
lean_object* v_arg_3360_; lean_object* v_arg_3361_; lean_object* v_arg_3362_; lean_object* v_arg_3363_; lean_object* v_arg_3364_; uint8_t v_fst_3366_; lean_object* v_fst_3367_; lean_object* v_fst_3368_; lean_object* v_fst_3369_; lean_object* v_fst_3370_; lean_object* v_snd_3371_; lean_object* v___x_3539_; lean_object* v___x_3540_; uint8_t v___x_3541_; 
v_arg_3360_ = lean_ctor_get(v___x_3318_, 1);
lean_inc_ref(v_arg_3360_);
lean_dec_ref(v___x_3318_);
v_arg_3361_ = lean_ctor_get(v___x_3320_, 1);
lean_inc_ref(v_arg_3361_);
lean_dec_ref(v___x_3320_);
v_arg_3362_ = lean_ctor_get(v___x_3322_, 1);
lean_inc_ref(v_arg_3362_);
lean_dec_ref(v___x_3322_);
v_arg_3363_ = lean_ctor_get(v___x_3324_, 1);
lean_inc_ref(v_arg_3363_);
lean_dec_ref(v___x_3324_);
v_arg_3364_ = lean_ctor_get(v___x_3326_, 1);
lean_inc_ref(v_arg_3364_);
v___x_3539_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3326_);
lean_dec_ref(v___x_3326_);
v___x_3540_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__4));
v___x_3541_ = l_Lean_Expr_isConstOf(v___x_3539_, v___x_3540_);
if (v___x_3541_ == 0)
{
lean_object* v___x_3542_; uint8_t v___x_3543_; 
v___x_3542_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__2));
v___x_3543_ = l_Lean_Expr_isConstOf(v___x_3539_, v___x_3542_);
if (v___x_3543_ == 0)
{
lean_dec_ref(v___x_3539_);
lean_dec_ref(v_arg_3364_);
lean_dec_ref(v_arg_3363_);
lean_dec_ref(v_arg_3362_);
lean_dec_ref(v_arg_3361_);
lean_dec_ref(v_arg_3360_);
lean_dec_ref(v_e_3306_);
goto v___jp_3315_;
}
else
{
v_fst_3366_ = v___x_3541_;
v_fst_3367_ = v___x_3539_;
v_fst_3368_ = v_arg_3363_;
v_fst_3369_ = v_arg_3362_;
v_fst_3370_ = v_arg_3361_;
v_snd_3371_ = v_arg_3360_;
goto v___jp_3365_;
}
}
else
{
v_fst_3366_ = v___x_3541_;
v_fst_3367_ = v___x_3539_;
v_fst_3368_ = v_arg_3363_;
v_fst_3369_ = v_arg_3362_;
v_fst_3370_ = v_arg_3361_;
v_snd_3371_ = v_arg_3360_;
goto v___jp_3365_;
}
v___jp_3365_:
{
lean_object* v_us_3372_; lean_object* v___x_3373_; 
v_us_3372_ = l_Lean_Expr_constLevels_x21(v_fst_3367_);
lean_inc_ref(v_fst_3368_);
v___x_3373_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_3304_, v_useDecideBool_3305_, v_fst_3368_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3373_, 1);
if (lean_obj_tag(v_a_3374_) == 1)
{
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_e_3306_);
if (v_fst_3366_ == 0)
{
lean_object* v_val_3375_; lean_object* v___x_3376_; 
v_val_3375_ = lean_ctor_get(v_a_3374_, 0);
lean_inc(v_val_3375_);
lean_dec_ref_known(v_a_3374_, 1);
v___x_3376_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__19));
lean_inc_ref(v_fst_3370_);
v___y_3329_ = v_fst_3369_;
v___y_3330_ = v_val_3375_;
v___y_3331_ = v_arg_3364_;
v___y_3332_ = v_us_3372_;
v___y_3333_ = v_snd_3371_;
v___y_3334_ = v_fst_3368_;
v___y_3335_ = v_fst_3370_;
v_fst_3336_ = v_fst_3370_;
v_snd_3337_ = v___x_3376_;
goto v___jp_3328_;
}
else
{
lean_object* v_val_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v_val_3377_ = lean_ctor_get(v_a_3374_, 0);
lean_inc_n(v_val_3377_, 2);
lean_dec_ref_known(v_a_3374_, 1);
lean_inc_ref(v_fst_3370_);
v___x_3378_ = l_Lean_Expr_app___override(v_fst_3370_, v_val_3377_);
v___x_3379_ = l_Lean_Expr_headBeta(v___x_3378_);
v___x_3380_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__21));
v___y_3329_ = v_fst_3369_;
v___y_3330_ = v_val_3377_;
v___y_3331_ = v_arg_3364_;
v___y_3332_ = v_us_3372_;
v___y_3333_ = v_snd_3371_;
v___y_3334_ = v_fst_3368_;
v___y_3335_ = v_fst_3370_;
v_fst_3336_ = v___x_3379_;
v_snd_3337_ = v___x_3380_;
goto v___jp_3328_;
}
}
else
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
lean_dec(v_a_3374_);
lean_inc_ref(v_fst_3368_);
v___x_3381_ = l_Lean_mkNot(v_fst_3368_);
v___x_3382_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_3304_, v_useDecideBool_3305_, v___x_3381_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___x_3382_, 1);
if (lean_obj_tag(v_a_3383_) == 1)
{
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_e_3306_);
if (v_fst_3366_ == 0)
{
lean_object* v_val_3384_; lean_object* v___x_3385_; 
v_val_3384_ = lean_ctor_get(v_a_3383_, 0);
lean_inc(v_val_3384_);
lean_dec_ref_known(v_a_3383_, 1);
v___x_3385_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__20));
lean_inc_ref(v_snd_3371_);
v___y_3345_ = v_val_3384_;
v___y_3346_ = v_fst_3369_;
v___y_3347_ = v_arg_3364_;
v___y_3348_ = v_us_3372_;
v___y_3349_ = v_snd_3371_;
v___y_3350_ = v_fst_3368_;
v___y_3351_ = v_fst_3370_;
v_fst_3352_ = v_snd_3371_;
v_snd_3353_ = v___x_3385_;
goto v___jp_3344_;
}
else
{
lean_object* v_val_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v_val_3386_ = lean_ctor_get(v_a_3383_, 0);
lean_inc_n(v_val_3386_, 2);
lean_dec_ref_known(v_a_3383_, 1);
lean_inc_ref(v_snd_3371_);
v___x_3387_ = l_Lean_Expr_app___override(v_snd_3371_, v_val_3386_);
v___x_3388_ = l_Lean_Expr_headBeta(v___x_3387_);
v___x_3389_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__22));
v___y_3345_ = v_val_3386_;
v___y_3346_ = v_fst_3369_;
v___y_3347_ = v_arg_3364_;
v___y_3348_ = v_us_3372_;
v___y_3349_ = v_snd_3371_;
v___y_3350_ = v_fst_3368_;
v___y_3351_ = v_fst_3370_;
v_fst_3352_ = v___x_3388_;
v_snd_3353_ = v___x_3389_;
goto v___jp_3344_;
}
}
else
{
lean_object* v___x_3390_; 
lean_dec(v_a_3383_);
lean_inc(v_a_3313_);
lean_inc_ref(v_a_3312_);
lean_inc(v_a_3311_);
lean_inc_ref(v_a_3310_);
lean_inc(v_a_3309_);
lean_inc_ref(v_a_3308_);
lean_inc(v_a_3307_);
lean_inc_ref(v_fst_3368_);
v___x_3390_ = lean_simp(v_fst_3368_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3514_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3393_ = v___x_3390_;
v_isShared_3394_ = v_isSharedCheck_3514_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3390_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3514_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v_expr_3395_; uint8_t v___x_3396_; 
v_expr_3395_ = lean_ctor_get(v_a_3391_, 0);
v___x_3396_ = lean_expr_eqv(v_expr_3395_, v_fst_3368_);
if (v___x_3396_ == 0)
{
lean_object* v___x_3397_; 
lean_inc_ref(v_expr_3395_);
lean_del_object(v___x_3393_);
v___x_3397_ = l_Lean_Meta_Simp_Result_getProof(v_a_3391_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__1);
lean_inc_ref(v_expr_3395_);
v___x_3400_ = l_Lean_Expr_app___override(v___x_3399_, v_expr_3395_);
v___x_3401_ = lean_box(0);
v___x_3402_ = l_Lean_Meta_trySynthInstance(v___x_3400_, v___x_3401_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3483_; 
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3405_ = v___x_3402_;
v_isShared_3406_ = v_isSharedCheck_3483_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3402_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3483_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
if (lean_obj_tag(v_a_3403_) == 1)
{
lean_dec_ref(v_e_3306_);
if (v_fst_3366_ == 0)
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3423_; 
v_a_3407_ = lean_ctor_get(v_a_3403_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_a_3403_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3409_ = v_a_3403_;
v_isShared_3410_ = v_isSharedCheck_3423_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v_a_3403_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3423_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3411_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__2));
v___x_3412_ = l_Lean_mkConst(v___x_3411_, v_us_3372_);
lean_inc_ref(v_snd_3371_);
lean_inc_ref(v_fst_3370_);
lean_inc(v_a_3407_);
lean_inc_ref(v_expr_3395_);
lean_inc_ref(v_arg_3364_);
v___x_3413_ = l_Lean_mkApp8(v___x_3412_, v_arg_3364_, v_fst_3368_, v_expr_3395_, v_fst_3369_, v_a_3407_, v_fst_3370_, v_snd_3371_, v_a_3398_);
v___x_3414_ = l_Lean_mkApp5(v_fst_3367_, v_arg_3364_, v_expr_3395_, v_a_3407_, v_fst_3370_, v_snd_3371_);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3413_);
v___x_3416_ = v___x_3409_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v___x_3413_);
v___x_3416_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3420_; 
v___x_3417_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3417_, 0, v___x_3414_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
lean_ctor_set_uint8(v___x_3417_, sizeof(void*)*2, v___x_3327_);
v___x_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
if (v_isShared_3406_ == 0)
{
lean_ctor_set(v___x_3405_, 0, v___x_3418_);
v___x_3420_ = v___x_3405_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v___x_3418_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
else
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3477_; 
lean_del_object(v___x_3405_);
v_a_3424_ = lean_ctor_get(v_a_3403_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v_a_3403_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3426_ = v_a_3403_;
v_isShared_3427_ = v_isSharedCheck_3477_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v_a_3403_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3477_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3428_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2);
v___x_3429_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3);
lean_inc(v_a_3398_);
lean_inc_ref(v_expr_3395_);
lean_inc_ref(v_fst_3368_);
v___x_3430_ = l_Lean_mkApp4(v___x_3428_, v_fst_3368_, v_expr_3395_, v_a_3398_, v___x_3429_);
lean_inc_ref(v_fst_3370_);
v___x_3431_ = l_Lean_Expr_app___override(v_fst_3370_, v___x_3430_);
v___x_3432_ = l_Lean_Expr_headBeta(v___x_3431_);
v___x_3433_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_fst_3370_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; uint8_t v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_a_3434_);
lean_dec_ref_known(v___x_3433_, 1);
v___x_3435_ = 0;
lean_inc_ref_n(v_expr_3395_, 2);
v___x_3436_ = l_Lean_mkLambda(v_a_3434_, v___x_3435_, v_expr_3395_, v___x_3432_);
v___x_3437_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6);
lean_inc(v_a_3398_);
lean_inc_ref(v_fst_3368_);
v___x_3438_ = l_Lean_mkApp4(v___x_3437_, v_fst_3368_, v_expr_3395_, v_a_3398_, v___x_3429_);
lean_inc_ref(v_snd_3371_);
v___x_3439_ = l_Lean_Expr_app___override(v_snd_3371_, v___x_3438_);
v___x_3440_ = l_Lean_Expr_headBeta(v___x_3439_);
v___x_3441_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_snd_3371_, v_a_3312_, v_a_3313_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3460_; 
v_a_3442_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3444_ = v___x_3441_;
v_isShared_3445_ = v_isSharedCheck_3460_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3441_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3460_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3453_; 
lean_inc_ref_n(v_expr_3395_, 2);
v___x_3446_ = l_Lean_mkNot(v_expr_3395_);
v___x_3447_ = l_Lean_mkLambda(v_a_3442_, v___x_3435_, v___x_3446_, v___x_3440_);
v___x_3448_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___closed__3));
v___x_3449_ = l_Lean_mkConst(v___x_3448_, v_us_3372_);
lean_inc(v_a_3424_);
lean_inc_ref(v_arg_3364_);
v___x_3450_ = l_Lean_mkApp8(v___x_3449_, v_arg_3364_, v_fst_3368_, v_expr_3395_, v_fst_3369_, v_a_3424_, v_fst_3370_, v_snd_3371_, v_a_3398_);
v___x_3451_ = l_Lean_mkApp5(v_fst_3367_, v_arg_3364_, v_expr_3395_, v_a_3424_, v___x_3436_, v___x_3447_);
if (v_isShared_3427_ == 0)
{
lean_ctor_set(v___x_3426_, 0, v___x_3450_);
v___x_3453_ = v___x_3426_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3450_);
v___x_3453_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3457_; 
v___x_3454_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3454_, 0, v___x_3451_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
lean_ctor_set_uint8(v___x_3454_, sizeof(void*)*2, v___x_3327_);
v___x_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 0, v___x_3455_);
v___x_3457_ = v___x_3444_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3455_);
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
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_dec_ref(v___x_3440_);
lean_dec_ref(v___x_3436_);
lean_del_object(v___x_3426_);
lean_dec(v_a_3424_);
lean_dec(v_a_3398_);
lean_dec_ref(v_expr_3395_);
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
v_a_3461_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3441_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3441_);
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
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
lean_dec_ref(v___x_3432_);
lean_del_object(v___x_3426_);
lean_dec(v_a_3424_);
lean_dec(v_a_3398_);
lean_dec_ref(v_expr_3395_);
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
v_a_3469_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3433_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3433_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
}
else
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
lean_dec(v_a_3403_);
lean_dec(v_a_3398_);
lean_dec_ref(v_expr_3395_);
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
v___x_3478_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3478_, 0, v_e_3306_);
lean_ctor_set(v___x_3478_, 1, v___x_3401_);
lean_ctor_set_uint8(v___x_3478_, sizeof(void*)*2, v___x_3327_);
v___x_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3478_);
if (v_isShared_3406_ == 0)
{
lean_ctor_set(v___x_3405_, 0, v___x_3479_);
v___x_3481_ = v___x_3405_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
lean_dec(v_a_3398_);
lean_dec_ref(v_expr_3395_);
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
lean_dec_ref(v_e_3306_);
v_a_3484_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3486_ = v___x_3402_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3402_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
else
{
lean_object* v_a_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
lean_dec_ref(v_expr_3395_);
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
lean_dec_ref(v_e_3306_);
v_a_3492_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3397_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_a_3492_);
lean_dec(v___x_3397_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3497_; 
if (v_isShared_3495_ == 0)
{
v___x_3497_ = v___x_3494_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3492_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
else
{
lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3511_; 
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_a_3391_);
if (v_isSharedCheck_3511_ == 0)
{
lean_object* v_unused_3512_; lean_object* v_unused_3513_; 
v_unused_3512_ = lean_ctor_get(v_a_3391_, 1);
lean_dec(v_unused_3512_);
v_unused_3513_ = lean_ctor_get(v_a_3391_, 0);
lean_dec(v_unused_3513_);
v___x_3501_ = v_a_3391_;
v_isShared_3502_ = v_isSharedCheck_3511_;
goto v_resetjp_3500_;
}
else
{
lean_dec(v_a_3391_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3511_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3503_; lean_object* v___x_3505_; 
v___x_3503_ = lean_box(0);
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 1, v___x_3503_);
lean_ctor_set(v___x_3501_, 0, v_e_3306_);
v___x_3505_ = v___x_3501_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_e_3306_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v___x_3503_);
v___x_3505_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
lean_object* v___x_3506_; lean_object* v___x_3508_; 
lean_ctor_set_uint8(v___x_3505_, sizeof(void*)*2, v___x_3327_);
v___x_3506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 0, v___x_3506_);
v___x_3508_ = v___x_3393_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
lean_dec_ref(v_e_3306_);
v_a_3515_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3390_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3390_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
if (v_isShared_3518_ == 0)
{
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
}
else
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3530_; 
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
lean_dec_ref(v_e_3306_);
v_a_3523_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3525_ = v___x_3382_;
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3382_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3523_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
}
}
else
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3538_; 
lean_dec(v_us_3372_);
lean_dec_ref(v_snd_3371_);
lean_dec_ref(v_fst_3370_);
lean_dec_ref(v_fst_3369_);
lean_dec_ref(v_fst_3368_);
lean_dec_ref(v_fst_3367_);
lean_dec_ref(v_arg_3364_);
lean_dec_ref(v_e_3306_);
v_a_3531_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3533_ = v___x_3373_;
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3373_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3536_; 
if (v_isShared_3534_ == 0)
{
v___x_3536_ = v___x_3533_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_a_3531_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
}
v___jp_3328_:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
lean_inc(v_snd_3337_);
v___x_3338_ = l_Lean_mkConst(v_snd_3337_, v___y_3332_);
v___x_3339_ = l_Lean_mkApp6(v___x_3338_, v___y_3334_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3335_, v___y_3333_);
v___x_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
v___x_3341_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3341_, 0, v_fst_3336_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
lean_ctor_set_uint8(v___x_3341_, sizeof(void*)*2, v___x_3327_);
v___x_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
v___x_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
return v___x_3343_;
}
v___jp_3344_:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
lean_inc(v_snd_3353_);
v___x_3354_ = l_Lean_mkConst(v_snd_3353_, v___y_3348_);
v___x_3355_ = l_Lean_mkApp6(v___x_3354_, v___y_3350_, v___y_3346_, v___y_3345_, v___y_3347_, v___y_3351_, v___y_3349_);
v___x_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3355_);
v___x_3357_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3357_, 0, v_fst_3352_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*2, v___x_3327_);
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
return v___x_3359_;
}
}
}
}
}
v___jp_3315_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
return v___x_3317_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___boxed(lean_object* v_numIndices_3544_, lean_object* v_useDecideBool_3545_, lean_object* v_e_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_){
_start:
{
uint8_t v_useDecideBool_boxed_3555_; lean_object* v_res_3556_; 
v_useDecideBool_boxed_3555_ = lean_unbox(v_useDecideBool_3545_);
v_res_3556_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27(v_numIndices_3544_, v_useDecideBool_boxed_3555_, v_e_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_);
lean_dec(v_a_3553_);
lean_dec_ref(v_a_3552_);
lean_dec(v_a_3551_);
lean_dec_ref(v_a_3550_);
lean_dec(v_a_3549_);
lean_dec_ref(v_a_3548_);
lean_dec(v_a_3547_);
lean_dec(v_numIndices_3544_);
return v_res_3556_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3557_ = lean_box(0);
v___x_3558_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__2));
v___x_3559_ = l_Lean_mkConst(v___x_3558_, v___x_3557_);
return v___x_3559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0(lean_object* v_fst_3560_, lean_object* v_v_3561_){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3562_ = lean_box(0);
v___x_3563_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2);
v___x_3564_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0___closed__0);
v___x_3565_ = l_Lean_mkConst(v_v_3561_, v___x_3562_);
v___x_3566_ = l_Lean_mkApp3(v___x_3563_, v___x_3564_, v_fst_3560_, v___x_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__1(lean_object* v_a_3567_, lean_object* v_br_3568_, uint8_t v___x_3569_, uint8_t v___x_3570_, lean_object* v_hb_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_){
_start:
{
lean_object* v___x_3577_; 
lean_inc_ref(v_hb_3571_);
v___x_3577_ = l_Lean_Meta_mkEqTrans(v_a_3567_, v_hb_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; uint8_t v___x_3584_; lean_object* v___x_3585_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_a_3578_);
lean_dec_ref_known(v___x_3577_, 1);
v___x_3579_ = l_Lean_Expr_app___override(v_br_3568_, v_a_3578_);
v___x_3580_ = l_Lean_Expr_headBeta(v___x_3579_);
v___x_3581_ = lean_unsigned_to_nat(1u);
v___x_3582_ = lean_mk_empty_array_with_capacity(v___x_3581_);
v___x_3583_ = lean_array_push(v___x_3582_, v_hb_3571_);
v___x_3584_ = 1;
lean_inc_ref(v___x_3580_);
v___x_3585_ = l_Lean_Meta_mkLambdaFVars(v___x_3583_, v___x_3580_, v___x_3569_, v___x_3570_, v___x_3569_, v___x_3570_, v___x_3584_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3587_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3585_, 1);
v___x_3587_ = l_Lean_Meta_mkEqRefl(v___x_3580_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v___x_3589_ = l_Lean_Meta_mkLambdaFVars(v___x_3583_, v_a_3588_, v___x_3569_, v___x_3570_, v___x_3569_, v___x_3570_, v___x_3584_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
lean_dec_ref(v___x_3583_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3598_; 
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3592_ = v___x_3589_;
v_isShared_3593_ = v_isSharedCheck_3598_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3589_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3598_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3594_; lean_object* v___x_3596_; 
v___x_3594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3594_, 0, v_a_3586_);
lean_ctor_set(v___x_3594_, 1, v_a_3590_);
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v___x_3594_);
v___x_3596_ = v___x_3592_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3594_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
else
{
lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3606_; 
lean_dec(v_a_3586_);
v_a_3599_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3601_ = v___x_3589_;
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_dec(v___x_3589_);
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
lean_dec(v_a_3586_);
lean_dec_ref(v___x_3583_);
v_a_3607_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___x_3587_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3587_);
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
lean_dec_ref(v___x_3583_);
lean_dec_ref(v___x_3580_);
v_a_3615_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3617_ = v___x_3585_;
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3585_);
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
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_dec_ref(v_hb_3571_);
lean_dec_ref(v_br_3568_);
v_a_3623_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3577_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3577_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
if (v_isShared_3626_ == 0)
{
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3623_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__1___boxed(lean_object* v_a_3631_, lean_object* v_br_3632_, lean_object* v___x_3633_, lean_object* v___x_3634_, lean_object* v_hb_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_){
_start:
{
uint8_t v___x_19099__boxed_3641_; uint8_t v___x_19100__boxed_3642_; lean_object* v_res_3643_; 
v___x_19099__boxed_3641_ = lean_unbox(v___x_3633_);
v___x_19100__boxed_3642_ = lean_unbox(v___x_3634_);
v_res_3643_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__1(v_a_3631_, v_br_3632_, v___x_19099__boxed_3641_, v___x_19100__boxed_3642_, v_hb_3635_, v___y_3636_, v___y_3637_, v___y_3638_, v___y_3639_);
lean_dec(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___lam__0(lean_object* v_k_3644_, lean_object* v_b_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
lean_object* v___x_3651_; 
lean_inc(v___y_3649_);
lean_inc_ref(v___y_3648_);
lean_inc(v___y_3647_);
lean_inc_ref(v___y_3646_);
v___x_3651_ = lean_apply_6(v_k_3644_, v_b_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, lean_box(0));
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_3652_, lean_object* v_b_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___lam__0(v_k_3652_, v_b_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_);
lean_dec(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg(lean_object* v_name_3660_, uint8_t v_bi_3661_, lean_object* v_type_3662_, lean_object* v_k_3663_, uint8_t v_kind_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v___f_3670_; lean_object* v___x_3671_; 
v___f_3670_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3670_, 0, v_k_3663_);
v___x_3671_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3660_, v_bi_3661_, v_type_3662_, v___f_3670_, v_kind_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3671_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3671_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
v_a_3680_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3671_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3671_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg___boxed(lean_object* v_name_3688_, lean_object* v_bi_3689_, lean_object* v_type_3690_, lean_object* v_k_3691_, lean_object* v_kind_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_){
_start:
{
uint8_t v_bi_boxed_3698_; uint8_t v_kind_boxed_3699_; lean_object* v_res_3700_; 
v_bi_boxed_3698_ = lean_unbox(v_bi_3689_);
v_kind_boxed_3699_ = lean_unbox(v_kind_3692_);
v_res_3700_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg(v_name_3688_, v_bi_boxed_3698_, v_type_3690_, v_k_3691_, v_kind_boxed_3699_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
lean_dec(v___y_3694_);
lean_dec_ref(v___y_3693_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(lean_object* v_name_3701_, lean_object* v_type_3702_, lean_object* v_k_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
uint8_t v___x_3709_; uint8_t v___x_3710_; lean_object* v___x_3711_; 
v___x_3709_ = 0;
v___x_3710_ = 0;
v___x_3711_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg(v_name_3701_, v___x_3709_, v_type_3702_, v_k_3703_, v___x_3710_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_);
return v___x_3711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg___boxed(lean_object* v_name_3712_, lean_object* v_type_3713_, lean_object* v_k_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(v_name_3712_, v_type_3713_, v_k_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2(lean_object* v_a_3721_, uint8_t v___x_3722_, uint8_t v___x_3723_, lean_object* v_expr_3724_, lean_object* v_v_3725_, lean_object* v_br_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___f_3734_; lean_object* v___x_3735_; 
v___x_3732_ = lean_box(v___x_3722_);
v___x_3733_ = lean_box(v___x_3723_);
lean_inc_ref(v_br_3726_);
v___f_3734_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3734_, 0, v_a_3721_);
lean_closure_set(v___f_3734_, 1, v_br_3726_);
lean_closure_set(v___f_3734_, 2, v___x_3732_);
lean_closure_set(v___f_3734_, 3, v___x_3733_);
v___x_3735_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_br_3726_, v___y_3729_, v___y_3730_);
lean_dec_ref(v_br_3726_);
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v_a_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v_a_3736_ = lean_ctor_get(v___x_3735_, 0);
lean_inc(v_a_3736_);
lean_dec_ref_known(v___x_3735_, 1);
v___x_3737_ = lean_box(0);
v___x_3738_ = l_Lean_mkConst(v_v_3725_, v___x_3737_);
v___x_3739_ = l_Lean_Meta_mkEq(v_expr_3724_, v___x_3738_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_a_3740_; lean_object* v___x_3741_; 
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
lean_inc(v_a_3740_);
lean_dec_ref_known(v___x_3739_, 1);
v___x_3741_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(v_a_3736_, v_a_3740_, v___f_3734_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
return v___x_3741_;
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_dec(v_a_3736_);
lean_dec_ref(v___f_3734_);
v_a_3742_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3739_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3739_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec_ref(v___f_3734_);
lean_dec(v_v_3725_);
lean_dec_ref(v_expr_3724_);
v_a_3750_ = lean_ctor_get(v___x_3735_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3735_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3735_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2___boxed(lean_object* v_a_3758_, lean_object* v___x_3759_, lean_object* v___x_3760_, lean_object* v_expr_3761_, lean_object* v_v_3762_, lean_object* v_br_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_){
_start:
{
uint8_t v___x_19320__boxed_3769_; uint8_t v___x_19321__boxed_3770_; lean_object* v_res_3771_; 
v___x_19320__boxed_3769_ = lean_unbox(v___x_3759_);
v___x_19321__boxed_3770_ = lean_unbox(v___x_3760_);
v_res_3771_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2(v_a_3758_, v___x_19320__boxed_3769_, v___x_19321__boxed_3770_, v_expr_3761_, v_v_3762_, v_br_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_);
lean_dec(v___y_3767_);
lean_dec_ref(v___y_3766_);
lean_dec(v___y_3765_);
lean_dec_ref(v___y_3764_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27(lean_object* v_numIndices_3776_, uint8_t v_useDecideBool_3777_, lean_object* v_e_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_){
_start:
{
lean_object* v___x_3790_; uint8_t v___x_3791_; 
v___x_3790_ = l_Lean_Expr_cleanupAnnotations(v_e_3778_);
v___x_3791_ = l_Lean_Expr_isApp(v___x_3790_);
if (v___x_3791_ == 0)
{
lean_dec_ref(v___x_3790_);
lean_dec_ref(v_e_3778_);
goto v___jp_3787_;
}
else
{
lean_object* v___x_3792_; uint8_t v___x_3793_; 
v___x_3792_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3790_);
v___x_3793_ = l_Lean_Expr_isApp(v___x_3792_);
if (v___x_3793_ == 0)
{
lean_dec_ref(v___x_3792_);
lean_dec_ref(v___x_3790_);
lean_dec_ref(v_e_3778_);
goto v___jp_3787_;
}
else
{
lean_object* v___x_3794_; uint8_t v___x_3795_; 
v___x_3794_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3792_);
v___x_3795_ = l_Lean_Expr_isApp(v___x_3794_);
if (v___x_3795_ == 0)
{
lean_dec_ref(v___x_3794_);
lean_dec_ref(v___x_3792_);
lean_dec_ref(v___x_3790_);
lean_dec_ref(v_e_3778_);
goto v___jp_3787_;
}
else
{
lean_object* v___x_3796_; uint8_t v___x_3797_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v___y_3801_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v___y_3804_; lean_object* v_fst_3805_; lean_object* v_snd_3806_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v_fst_3820_; lean_object* v_snd_3821_; 
v___x_3796_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3794_);
v___x_3797_ = l_Lean_Expr_isApp(v___x_3796_);
if (v___x_3797_ == 0)
{
lean_dec_ref(v___x_3796_);
lean_dec_ref(v___x_3794_);
lean_dec_ref(v___x_3792_);
lean_dec_ref(v___x_3790_);
lean_dec_ref(v_e_3778_);
goto v___jp_3787_;
}
else
{
lean_object* v_arg_3828_; lean_object* v_arg_3829_; lean_object* v_arg_3830_; lean_object* v_arg_3831_; uint8_t v_fst_3833_; lean_object* v_fst_3834_; lean_object* v_fst_3835_; lean_object* v_fst_3836_; lean_object* v_snd_3837_; lean_object* v___x_4021_; lean_object* v___x_4022_; uint8_t v___x_4023_; 
v_arg_3828_ = lean_ctor_get(v___x_3790_, 1);
lean_inc_ref(v_arg_3828_);
lean_dec_ref(v___x_3790_);
v_arg_3829_ = lean_ctor_get(v___x_3792_, 1);
lean_inc_ref(v_arg_3829_);
lean_dec_ref(v___x_3792_);
v_arg_3830_ = lean_ctor_get(v___x_3794_, 1);
lean_inc_ref(v_arg_3830_);
lean_dec_ref(v___x_3794_);
v_arg_3831_ = lean_ctor_get(v___x_3796_, 1);
lean_inc_ref(v_arg_3831_);
v___x_4021_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3796_);
lean_dec_ref(v___x_3796_);
v___x_4022_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__9));
v___x_4023_ = l_Lean_Expr_isConstOf(v___x_4021_, v___x_4022_);
if (v___x_4023_ == 0)
{
lean_object* v___x_4024_; uint8_t v___x_4025_; 
v___x_4024_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__6));
v___x_4025_ = l_Lean_Expr_isConstOf(v___x_4021_, v___x_4024_);
if (v___x_4025_ == 0)
{
lean_dec_ref(v___x_4021_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_arg_3830_);
lean_dec_ref(v_arg_3829_);
lean_dec_ref(v_arg_3828_);
lean_dec_ref(v_e_3778_);
goto v___jp_3787_;
}
else
{
v_fst_3833_ = v___x_4023_;
v_fst_3834_ = v___x_4021_;
v_fst_3835_ = v_arg_3830_;
v_fst_3836_ = v_arg_3829_;
v_snd_3837_ = v_arg_3828_;
goto v___jp_3832_;
}
}
else
{
v_fst_3833_ = v___x_4023_;
v_fst_3834_ = v___x_4021_;
v_fst_3835_ = v_arg_3830_;
v_fst_3836_ = v_arg_3829_;
v_snd_3837_ = v_arg_3828_;
goto v___jp_3832_;
}
v___jp_3832_:
{
lean_object* v_us_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v_us_3838_ = l_Lean_Expr_constLevels_x21(v_fst_3834_);
v___x_3839_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_boolEqTrueWithView_x3f___closed__4));
lean_inc_ref(v_fst_3835_);
v___x_3840_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0(v_fst_3835_, v___x_3839_);
v___x_3841_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_3776_, v_useDecideBool_3777_, v___x_3840_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_a_3842_);
lean_dec_ref_known(v___x_3841_, 1);
if (lean_obj_tag(v_a_3842_) == 1)
{
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_e_3778_);
if (v_fst_3833_ == 0)
{
lean_object* v_val_3843_; lean_object* v___x_3844_; 
v_val_3843_ = lean_ctor_get(v_a_3842_, 0);
lean_inc(v_val_3843_);
lean_dec_ref_known(v_a_3842_, 1);
v___x_3844_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__8));
lean_inc_ref(v_fst_3836_);
v___y_3799_ = v_us_3838_;
v___y_3800_ = v_fst_3836_;
v___y_3801_ = v_fst_3835_;
v___y_3802_ = v_arg_3831_;
v___y_3803_ = v_snd_3837_;
v___y_3804_ = v_val_3843_;
v_fst_3805_ = v_fst_3836_;
v_snd_3806_ = v___x_3844_;
goto v___jp_3798_;
}
else
{
lean_object* v_val_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
v_val_3845_ = lean_ctor_get(v_a_3842_, 0);
lean_inc_n(v_val_3845_, 2);
lean_dec_ref_known(v_a_3842_, 1);
lean_inc_ref(v_fst_3836_);
v___x_3846_ = l_Lean_Expr_app___override(v_fst_3836_, v_val_3845_);
v___x_3847_ = l_Lean_Expr_headBeta(v___x_3846_);
v___x_3848_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__12));
v___y_3799_ = v_us_3838_;
v___y_3800_ = v_fst_3836_;
v___y_3801_ = v_fst_3835_;
v___y_3802_ = v_arg_3831_;
v___y_3803_ = v_snd_3837_;
v___y_3804_ = v_val_3845_;
v_fst_3805_ = v___x_3847_;
v_snd_3806_ = v___x_3848_;
goto v___jp_3798_;
}
}
else
{
lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
lean_dec(v_a_3842_);
v___x_3849_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_fromBoolView_x3f___closed__1));
lean_inc_ref(v_fst_3835_);
v___x_3850_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__0(v_fst_3835_, v___x_3849_);
v___x_3851_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_3776_, v_useDecideBool_3777_, v___x_3850_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
lean_inc(v_a_3852_);
lean_dec_ref_known(v___x_3851_, 1);
if (lean_obj_tag(v_a_3852_) == 1)
{
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_e_3778_);
if (v_fst_3833_ == 0)
{
lean_object* v_val_3853_; lean_object* v___x_3854_; 
v_val_3853_ = lean_ctor_get(v_a_3852_, 0);
lean_inc(v_val_3853_);
lean_dec_ref_known(v_a_3852_, 1);
v___x_3854_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__10));
lean_inc_ref(v_snd_3837_);
v___y_3814_ = v_us_3838_;
v___y_3815_ = v_fst_3836_;
v___y_3816_ = v_fst_3835_;
v___y_3817_ = v_val_3853_;
v___y_3818_ = v_arg_3831_;
v___y_3819_ = v_snd_3837_;
v_fst_3820_ = v_snd_3837_;
v_snd_3821_ = v___x_3854_;
goto v___jp_3813_;
}
else
{
lean_object* v_val_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
v_val_3855_ = lean_ctor_get(v_a_3852_, 0);
lean_inc_n(v_val_3855_, 2);
lean_dec_ref_known(v_a_3852_, 1);
lean_inc_ref(v_snd_3837_);
v___x_3856_ = l_Lean_Expr_app___override(v_snd_3837_, v_val_3855_);
v___x_3857_ = l_Lean_Expr_headBeta(v___x_3856_);
v___x_3858_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__6));
v___y_3814_ = v_us_3838_;
v___y_3815_ = v_fst_3836_;
v___y_3816_ = v_fst_3835_;
v___y_3817_ = v_val_3855_;
v___y_3818_ = v_arg_3831_;
v___y_3819_ = v_snd_3837_;
v_fst_3820_ = v___x_3857_;
v_snd_3821_ = v___x_3858_;
goto v___jp_3813_;
}
}
else
{
lean_object* v___x_3859_; 
lean_dec(v_a_3852_);
lean_inc(v_a_3785_);
lean_inc_ref(v_a_3784_);
lean_inc(v_a_3783_);
lean_inc_ref(v_a_3782_);
lean_inc(v_a_3781_);
lean_inc_ref(v_a_3780_);
lean_inc(v_a_3779_);
lean_inc_ref(v_fst_3835_);
v___x_3859_ = lean_simp(v_fst_3835_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3996_; 
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3862_ = v___x_3859_;
v_isShared_3863_ = v_isSharedCheck_3996_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3859_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3996_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v_expr_3864_; uint8_t v___x_3865_; 
v_expr_3864_ = lean_ctor_get(v_a_3860_, 0);
v___x_3865_ = lean_expr_eqv(v_expr_3864_, v_fst_3835_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; 
lean_inc_ref(v_expr_3864_);
lean_del_object(v___x_3862_);
v___x_3866_ = l_Lean_Meta_Simp_Result_getProof(v_a_3860_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3866_) == 0)
{
if (v_fst_3833_ == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
lean_dec(v_us_3838_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_e_3778_);
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_a_3867_);
lean_dec_ref_known(v___x_3866_, 1);
lean_inc_ref(v_arg_3831_);
lean_inc_ref(v_fst_3834_);
v___x_3868_ = l_Lean_Expr_app___override(v_fst_3834_, v_arg_3831_);
v___x_3869_ = l_Lean_Meta_mkCongrArg(v___x_3868_, v_a_3867_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3869_) == 0)
{
lean_object* v_a_3870_; lean_object* v___x_3871_; 
v_a_3870_ = lean_ctor_get(v___x_3869_, 0);
lean_inc(v_a_3870_);
lean_dec_ref_known(v___x_3869_, 1);
lean_inc_ref(v_fst_3836_);
v___x_3871_ = l_Lean_Meta_mkCongrFun(v_a_3870_, v_fst_3836_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3873_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
lean_inc(v_a_3872_);
lean_dec_ref_known(v___x_3871_, 1);
lean_inc_ref(v_snd_3837_);
v___x_3873_ = l_Lean_Meta_mkCongrFun(v_a_3872_, v_snd_3837_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3873_) == 0)
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3885_; 
v_a_3874_ = lean_ctor_get(v___x_3873_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3873_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3876_ = v___x_3873_;
v_isShared_3877_ = v_isSharedCheck_3885_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3873_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3885_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3883_; 
v___x_3878_ = l_Lean_mkApp4(v_fst_3834_, v_arg_3831_, v_expr_3864_, v_fst_3836_, v_snd_3837_);
v___x_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3879_, 0, v_a_3874_);
v___x_3880_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
lean_ctor_set_uint8(v___x_3880_, sizeof(void*)*2, v___x_3797_);
v___x_3881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3880_);
if (v_isShared_3877_ == 0)
{
lean_ctor_set(v___x_3876_, 0, v___x_3881_);
v___x_3883_ = v___x_3876_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3881_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
else
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3893_; 
lean_dec_ref(v_expr_3864_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v_a_3886_ = lean_ctor_get(v___x_3873_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3873_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3888_ = v___x_3873_;
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3873_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
}
else
{
lean_object* v_a_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3901_; 
lean_dec_ref(v_expr_3864_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v_a_3894_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3896_ = v___x_3871_;
v_isShared_3897_ = v_isSharedCheck_3901_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_a_3894_);
lean_dec(v___x_3871_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3901_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3899_; 
if (v_isShared_3897_ == 0)
{
v___x_3899_ = v___x_3896_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3894_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
lean_dec_ref(v_expr_3864_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v_a_3902_ = lean_ctor_get(v___x_3869_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3869_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3869_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3869_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3902_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
}
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3973_; 
v_a_3910_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3912_ = v___x_3866_;
v_isShared_3913_ = v_isSharedCheck_3973_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3866_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3973_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3914_; lean_object* v_env_3915_; lean_object* v___x_3916_; uint8_t v___x_3917_; 
v___x_3914_ = lean_st_ref_get(v_a_3785_);
v_env_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc_ref(v_env_3915_);
lean_dec(v___x_3914_);
v___x_3916_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1));
v___x_3917_ = l_Lean_Environment_contains(v_env_3915_, v___x_3916_, v___x_3797_);
if (v___x_3917_ == 0)
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3922_; 
lean_dec(v_a_3910_);
lean_dec_ref(v_expr_3864_);
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v___x_3918_ = lean_box(0);
v___x_3919_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3919_, 0, v_e_3778_);
lean_ctor_set(v___x_3919_, 1, v___x_3918_);
lean_ctor_set_uint8(v___x_3919_, sizeof(void*)*2, v___x_3797_);
v___x_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 0, v___x_3920_);
v___x_3922_ = v___x_3912_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v___x_3920_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
else
{
lean_object* v___x_3924_; 
lean_del_object(v___x_3912_);
lean_dec_ref(v_e_3778_);
lean_inc_ref(v_fst_3836_);
lean_inc_ref(v_expr_3864_);
lean_inc(v_a_3910_);
v___x_3924_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2(v_a_3910_, v___x_3865_, v___x_3797_, v_expr_3864_, v___x_3839_, v_fst_3836_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3925_; lean_object* v_fst_3926_; lean_object* v_snd_3927_; lean_object* v___x_3928_; 
v_a_3925_ = lean_ctor_get(v___x_3924_, 0);
lean_inc(v_a_3925_);
lean_dec_ref_known(v___x_3924_, 1);
v_fst_3926_ = lean_ctor_get(v_a_3925_, 0);
lean_inc(v_fst_3926_);
v_snd_3927_ = lean_ctor_get(v_a_3925_, 1);
lean_inc(v_snd_3927_);
lean_dec(v_a_3925_);
lean_inc_ref(v_snd_3837_);
lean_inc_ref(v_expr_3864_);
lean_inc(v_a_3910_);
v___x_3928_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___lam__2(v_a_3910_, v___x_3865_, v___x_3797_, v_expr_3864_, v___x_3849_, v_snd_3837_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3956_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3931_ = v___x_3928_;
v_isShared_3932_ = v_isSharedCheck_3956_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v___x_3928_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3956_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v_fst_3933_; lean_object* v_snd_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3954_; 
v_fst_3933_ = lean_ctor_get(v_a_3929_, 0);
lean_inc_n(v_fst_3933_, 2);
v_snd_3934_ = lean_ctor_get(v_a_3929_, 1);
lean_inc(v_snd_3934_);
lean_dec(v_a_3929_);
v___x_3935_ = l_Lean_mkConst(v___x_3916_, v_us_3838_);
v___x_3936_ = lean_unsigned_to_nat(10u);
v___x_3937_ = lean_mk_empty_array_with_capacity(v___x_3936_);
lean_inc_ref(v_arg_3831_);
v___x_3938_ = lean_array_push(v___x_3937_, v_arg_3831_);
v___x_3939_ = lean_array_push(v___x_3938_, v_fst_3835_);
lean_inc_ref(v_expr_3864_);
v___x_3940_ = lean_array_push(v___x_3939_, v_expr_3864_);
v___x_3941_ = lean_array_push(v___x_3940_, v_fst_3836_);
lean_inc(v_fst_3926_);
v___x_3942_ = lean_array_push(v___x_3941_, v_fst_3926_);
v___x_3943_ = lean_array_push(v___x_3942_, v_snd_3837_);
v___x_3944_ = lean_array_push(v___x_3943_, v_fst_3933_);
v___x_3945_ = lean_array_push(v___x_3944_, v_a_3910_);
v___x_3946_ = lean_array_push(v___x_3945_, v_snd_3927_);
v___x_3947_ = lean_array_push(v___x_3946_, v_snd_3934_);
v___x_3948_ = l_Lean_mkAppN(v___x_3935_, v___x_3947_);
lean_dec_ref(v___x_3947_);
v___x_3949_ = l_Lean_mkApp4(v_fst_3834_, v_arg_3831_, v_expr_3864_, v_fst_3926_, v_fst_3933_);
v___x_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3948_);
v___x_3951_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3951_, 0, v___x_3949_);
lean_ctor_set(v___x_3951_, 1, v___x_3950_);
lean_ctor_set_uint8(v___x_3951_, sizeof(void*)*2, v___x_3797_);
v___x_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
if (v_isShared_3932_ == 0)
{
lean_ctor_set(v___x_3931_, 0, v___x_3952_);
v___x_3954_ = v___x_3931_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3952_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
else
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3964_; 
lean_dec(v_snd_3927_);
lean_dec(v_fst_3926_);
lean_dec(v_a_3910_);
lean_dec_ref(v_expr_3864_);
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v_a_3957_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3959_ = v___x_3928_;
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3928_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_dec(v_a_3910_);
lean_dec_ref(v_expr_3864_);
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v_a_3965_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3924_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3924_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
lean_dec_ref(v_expr_3864_);
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3778_);
v_a_3974_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3981_ == 0)
{
v___x_3976_ = v___x_3866_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v___x_3866_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3974_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
else
{
lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3993_; 
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
v_isSharedCheck_3993_ = !lean_is_exclusive(v_a_3860_);
if (v_isSharedCheck_3993_ == 0)
{
lean_object* v_unused_3994_; lean_object* v_unused_3995_; 
v_unused_3994_ = lean_ctor_get(v_a_3860_, 1);
lean_dec(v_unused_3994_);
v_unused_3995_ = lean_ctor_get(v_a_3860_, 0);
lean_dec(v_unused_3995_);
v___x_3983_ = v_a_3860_;
v_isShared_3984_ = v_isSharedCheck_3993_;
goto v_resetjp_3982_;
}
else
{
lean_dec(v_a_3860_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3993_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; lean_object* v___x_3987_; 
v___x_3985_ = lean_box(0);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 1, v___x_3985_);
lean_ctor_set(v___x_3983_, 0, v_e_3778_);
v___x_3987_ = v___x_3983_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_e_3778_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v___x_3985_);
v___x_3987_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
lean_object* v___x_3988_; lean_object* v___x_3990_; 
lean_ctor_set_uint8(v___x_3987_, sizeof(void*)*2, v___x_3797_);
v___x_3988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 0, v___x_3988_);
v___x_3990_ = v___x_3862_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v___x_3988_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
}
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3778_);
v_a_3997_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3859_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3859_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
}
}
else
{
lean_object* v_a_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4012_; 
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3778_);
v_a_4005_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_4012_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_4007_ = v___x_3851_;
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_a_4005_);
lean_dec(v___x_3851_);
v___x_4007_ = lean_box(0);
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
v_resetjp_4006_:
{
lean_object* v___x_4010_; 
if (v_isShared_4008_ == 0)
{
v___x_4010_ = v___x_4007_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_a_4005_);
v___x_4010_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
return v___x_4010_;
}
}
}
}
}
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
lean_dec(v_us_3838_);
lean_dec_ref(v_snd_3837_);
lean_dec_ref(v_fst_3836_);
lean_dec_ref(v_fst_3835_);
lean_dec_ref(v_fst_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3778_);
v_a_4013_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___x_3841_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_3841_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4019_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
return v___x_4018_;
}
}
}
}
}
v___jp_3798_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
lean_inc(v_snd_3806_);
v___x_3807_ = l_Lean_mkConst(v_snd_3806_, v___y_3799_);
v___x_3808_ = l_Lean_mkApp5(v___x_3807_, v___y_3802_, v___y_3801_, v___y_3800_, v___y_3803_, v___y_3804_);
v___x_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
v___x_3810_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3810_, 0, v_fst_3805_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
lean_ctor_set_uint8(v___x_3810_, sizeof(void*)*2, v___x_3797_);
v___x_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
v___x_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3811_);
return v___x_3812_;
}
v___jp_3813_:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; 
lean_inc(v_snd_3821_);
v___x_3822_ = l_Lean_mkConst(v_snd_3821_, v___y_3814_);
v___x_3823_ = l_Lean_mkApp5(v___x_3822_, v___y_3818_, v___y_3816_, v___y_3815_, v___y_3819_, v___y_3817_);
v___x_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3824_, 0, v___x_3823_);
v___x_3825_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3825_, 0, v_fst_3820_);
lean_ctor_set(v___x_3825_, 1, v___x_3824_);
lean_ctor_set_uint8(v___x_3825_, sizeof(void*)*2, v___x_3797_);
v___x_3826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3825_);
v___x_3827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3826_);
return v___x_3827_;
}
}
}
}
v___jp_3787_:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3788_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3788_);
return v___x_3789_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___boxed(lean_object* v_numIndices_4026_, lean_object* v_useDecideBool_4027_, lean_object* v_e_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_){
_start:
{
uint8_t v_useDecideBool_boxed_4037_; lean_object* v_res_4038_; 
v_useDecideBool_boxed_4037_ = lean_unbox(v_useDecideBool_4027_);
v_res_4038_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27(v_numIndices_4026_, v_useDecideBool_boxed_4037_, v_e_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_, v_a_4034_, v_a_4035_);
lean_dec(v_a_4035_);
lean_dec_ref(v_a_4034_);
lean_dec(v_a_4033_);
lean_dec_ref(v_a_4032_);
lean_dec(v_a_4031_);
lean_dec_ref(v_a_4030_);
lean_dec(v_a_4029_);
lean_dec(v_numIndices_4026_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0(lean_object* v_00_u03b1_4039_, lean_object* v_name_4040_, uint8_t v_bi_4041_, lean_object* v_type_4042_, lean_object* v_k_4043_, uint8_t v_kind_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v___x_4050_; 
v___x_4050_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___redArg(v_name_4040_, v_bi_4041_, v_type_4042_, v_k_4043_, v_kind_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
return v___x_4050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4051_, lean_object* v_name_4052_, lean_object* v_bi_4053_, lean_object* v_type_4054_, lean_object* v_k_4055_, lean_object* v_kind_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
uint8_t v_bi_boxed_4062_; uint8_t v_kind_boxed_4063_; lean_object* v_res_4064_; 
v_bi_boxed_4062_ = lean_unbox(v_bi_4053_);
v_kind_boxed_4063_ = lean_unbox(v_kind_4056_);
v_res_4064_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0_spec__0(v_00_u03b1_4051_, v_name_4052_, v_bi_boxed_4062_, v_type_4054_, v_k_4055_, v_kind_boxed_4063_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_);
lean_dec(v___y_4060_);
lean_dec_ref(v___y_4059_);
lean_dec(v___y_4058_);
lean_dec_ref(v___y_4057_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0(lean_object* v_00_u03b1_4065_, lean_object* v_name_4066_, lean_object* v_type_4067_, lean_object* v_k_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(v_name_4066_, v_type_4067_, v_k_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___boxed(lean_object* v_00_u03b1_4075_, lean_object* v_name_4076_, lean_object* v_type_4077_, lean_object* v_k_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v_res_4084_; 
v_res_4084_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0(v_00_u03b1_4075_, v_name_4076_, v_type_4077_, v_k_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
return v_res_4084_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0(void){
_start:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v_s_4087_; 
v___x_4085_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
v___x_4086_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__0, &l_Lean_Meta_SplitIf_getSimpContext___closed__0_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0);
v_s_4087_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_s_4087_, 0, v___x_4086_);
lean_ctor_set(v_s_4087_, 1, v___x_4086_);
lean_ctor_set(v_s_4087_, 2, v___x_4085_);
lean_ctor_set(v_s_4087_, 3, v___x_4085_);
return v_s_4087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(lean_object* v_numIndices_4227_, uint8_t v_useDecide_4228_){
_start:
{
lean_object* v_s_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; uint8_t v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v_s_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v_s_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v_s_4249_; lean_object* v___x_4250_; lean_object* v_s_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v_s_4257_; lean_object* v___x_4258_; lean_object* v_s_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v_s_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
v_s_4230_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0);
v___x_4231_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2));
v___x_4232_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15));
v___x_4233_ = 0;
v___x_4234_ = lean_box(v_useDecide_4228_);
lean_inc_n(v_numIndices_4227_, 4);
v___x_4235_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed), 11, 2);
lean_closure_set(v___x_4235_, 0, v_numIndices_4227_);
lean_closure_set(v___x_4235_, 1, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
v_s_4237_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4230_, v___x_4231_, v___x_4232_, v___x_4233_, v___x_4236_);
v___x_4238_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17));
v___x_4239_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19));
v___x_4240_ = lean_box(v_useDecide_4228_);
v___x_4241_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed), 11, 2);
lean_closure_set(v___x_4241_, 0, v_numIndices_4227_);
lean_closure_set(v___x_4241_, 1, v___x_4240_);
v___x_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
v_s_4243_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4237_, v___x_4238_, v___x_4239_, v___x_4233_, v___x_4242_);
v___x_4244_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21));
v___x_4245_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23));
v___x_4246_ = lean_box(v_useDecide_4228_);
v___x_4247_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceUIte_x27___boxed), 11, 2);
lean_closure_set(v___x_4247_, 0, v_numIndices_4227_);
lean_closure_set(v___x_4247_, 1, v___x_4246_);
v___x_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
lean_inc_ref(v___x_4248_);
v_s_4249_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4243_, v___x_4244_, v___x_4245_, v___x_4233_, v___x_4248_);
v___x_4250_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__25));
v_s_4251_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4249_, v___x_4250_, v___x_4245_, v___x_4233_, v___x_4248_);
v___x_4252_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__27));
v___x_4253_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__29));
v___x_4254_ = lean_box(v_useDecide_4228_);
v___x_4255_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___boxed), 11, 2);
lean_closure_set(v___x_4255_, 0, v_numIndices_4227_);
lean_closure_set(v___x_4255_, 1, v___x_4254_);
v___x_4256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4255_);
lean_inc_ref(v___x_4256_);
v_s_4257_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4251_, v___x_4252_, v___x_4253_, v___x_4233_, v___x_4256_);
v___x_4258_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__31));
v_s_4259_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4257_, v___x_4258_, v___x_4253_, v___x_4233_, v___x_4256_);
v___x_4260_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__33));
v___x_4261_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__35));
v___x_4262_ = lean_box(v_useDecide_4228_);
v___x_4263_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceMatchValue_x27___boxed), 11, 2);
lean_closure_set(v___x_4263_, 0, v_numIndices_4227_);
lean_closure_set(v___x_4263_, 1, v___x_4262_);
v___x_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4263_);
v_s_4265_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4259_, v___x_4260_, v___x_4261_, v___x_4233_, v___x_4264_);
v___x_4266_ = lean_unsigned_to_nat(1u);
v___x_4267_ = lean_mk_empty_array_with_capacity(v___x_4266_);
v___x_4268_ = lean_array_push(v___x_4267_, v_s_4265_);
v___x_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4268_);
return v___x_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___boxed(lean_object* v_numIndices_4270_, lean_object* v_useDecide_4271_, lean_object* v_a_4272_){
_start:
{
uint8_t v_useDecide_boxed_4273_; lean_object* v_res_4274_; 
v_useDecide_boxed_4273_ = lean_unbox(v_useDecide_4271_);
v_res_4274_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_numIndices_4270_, v_useDecide_boxed_4273_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(lean_object* v_numIndices_4275_, uint8_t v_useDecide_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_){
_start:
{
lean_object* v___x_4282_; 
v___x_4282_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_numIndices_4275_, v_useDecide_4276_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___boxed(lean_object* v_numIndices_4283_, lean_object* v_useDecide_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_, lean_object* v_a_4289_){
_start:
{
uint8_t v_useDecide_boxed_4290_; lean_object* v_res_4291_; 
v_useDecide_boxed_4290_ = lean_unbox(v_useDecide_4284_);
v_res_4291_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(v_numIndices_4283_, v_useDecide_boxed_4290_, v_a_4285_, v_a_4286_, v_a_4287_, v_a_4288_);
lean_dec(v_a_4288_);
lean_dec_ref(v_a_4287_);
lean_dec(v_a_4286_);
lean_dec_ref(v_a_4285_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(uint8_t v_useDecide_4292_, lean_object* v_a_4293_){
_start:
{
lean_object* v_lctx_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
v_lctx_4295_ = lean_ctor_get(v_a_4293_, 2);
lean_inc_ref(v_lctx_4295_);
v___x_4296_ = lean_local_ctx_num_indices(v_lctx_4295_);
v___x_4297_ = lean_box(v_useDecide_4292_);
v___x_4298_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed), 11, 2);
lean_closure_set(v___x_4298_, 0, v___x_4296_);
lean_closure_set(v___x_4298_, 1, v___x_4297_);
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4298_);
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg___boxed(lean_object* v_useDecide_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_){
_start:
{
uint8_t v_useDecide_boxed_4303_; lean_object* v_res_4304_; 
v_useDecide_boxed_4303_ = lean_unbox(v_useDecide_4300_);
v_res_4304_ = l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(v_useDecide_boxed_4303_, v_a_4301_);
lean_dec_ref(v_a_4301_);
return v_res_4304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t v_useDecide_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_){
_start:
{
lean_object* v___x_4311_; 
v___x_4311_ = l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(v_useDecide_4305_, v_a_4306_);
return v___x_4311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed(lean_object* v_useDecide_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_){
_start:
{
uint8_t v_useDecide_boxed_4318_; lean_object* v_res_4319_; 
v_useDecide_boxed_4318_ = lean_unbox(v_useDecide_4312_);
v_res_4319_ = l_Lean_Meta_SplitIf_mkDischarge_x3f(v_useDecide_boxed_4318_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_);
lean_dec(v_a_4316_);
lean_dec_ref(v_a_4315_);
lean_dec(v_a_4314_);
lean_dec_ref(v_a_4313_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___lam__0(lean_object* v_goalType_4320_, lean_object* v_tag_4321_, lean_object* v_hyp_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_goalType_4320_, v_tag_4321_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; uint8_t v___x_4333_; uint8_t v___x_4334_; uint8_t v___x_4335_; lean_object* v___x_4336_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc_n(v_a_4329_, 2);
lean_dec_ref_known(v___x_4328_, 1);
v___x_4330_ = lean_unsigned_to_nat(1u);
v___x_4331_ = lean_mk_empty_array_with_capacity(v___x_4330_);
lean_inc_ref(v_hyp_4322_);
v___x_4332_ = lean_array_push(v___x_4331_, v_hyp_4322_);
v___x_4333_ = 0;
v___x_4334_ = 1;
v___x_4335_ = 1;
v___x_4336_ = l_Lean_Meta_mkLambdaFVars(v___x_4332_, v_a_4329_, v___x_4333_, v___x_4334_, v___x_4333_, v___x_4334_, v___x_4335_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
lean_dec_ref(v___x_4332_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4348_; 
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4348_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4348_ == 0)
{
v___x_4339_ = v___x_4336_;
v_isShared_4340_ = v_isSharedCheck_4348_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4336_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4348_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4346_; 
v___x_4341_ = l_Lean_Expr_mvarId_x21(v_a_4329_);
lean_dec(v_a_4329_);
v___x_4342_ = l_Lean_Expr_fvarId_x21(v_hyp_4322_);
lean_dec_ref(v_hyp_4322_);
v___x_4343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4341_);
lean_ctor_set(v___x_4343_, 1, v___x_4342_);
v___x_4344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4344_, 0, v_a_4337_);
lean_ctor_set(v___x_4344_, 1, v___x_4343_);
if (v_isShared_4340_ == 0)
{
lean_ctor_set(v___x_4339_, 0, v___x_4344_);
v___x_4346_ = v___x_4339_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4344_);
v___x_4346_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
return v___x_4346_;
}
}
}
else
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4356_; 
lean_dec(v_a_4329_);
lean_dec_ref(v_hyp_4322_);
v_a_4349_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4356_ == 0)
{
v___x_4351_ = v___x_4336_;
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v___x_4336_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v_a_4349_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
lean_dec_ref(v_hyp_4322_);
v_a_4357_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4359_ = v___x_4328_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4328_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___lam__0___boxed(lean_object* v_goalType_4365_, lean_object* v_tag_4366_, lean_object* v_hyp_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___lam__0(v_goalType_4365_, v_tag_4366_, v_hyp_4367_, v___y_4368_, v___y_4369_, v___y_4370_, v___y_4371_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
lean_dec(v___y_4369_);
lean_dec_ref(v___y_4368_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal(lean_object* v_p_4374_, lean_object* v_hName_4375_, lean_object* v_goalType_4376_, lean_object* v_tag_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_, lean_object* v_a_4381_){
_start:
{
lean_object* v___f_4383_; lean_object* v___x_4384_; 
v___f_4383_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4383_, 0, v_goalType_4376_);
lean_closure_set(v___f_4383_, 1, v_tag_4377_);
v___x_4384_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(v_hName_4375_, v_p_4374_, v___f_4383_, v_a_4378_, v_a_4379_, v_a_4380_, v_a_4381_);
return v___x_4384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal___boxed(lean_object* v_p_4385_, lean_object* v_hName_4386_, lean_object* v_goalType_4387_, lean_object* v_tag_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal(v_p_4385_, v_hName_4386_, v_goalType_4387_, v_tag_4388_, v_a_4389_, v_a_4390_, v_a_4391_, v_a_4392_);
lean_dec(v_a_4392_);
lean_dec_ref(v_a_4391_);
lean_dec(v_a_4390_);
lean_dec_ref(v_a_4389_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(lean_object* v_mvarId_4395_, lean_object* v_x_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v___x_4402_; 
v___x_4402_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4395_, v_x_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4402_) == 0)
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4410_; 
v_a_4403_ = lean_ctor_get(v___x_4402_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4402_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4405_ = v___x_4402_;
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4402_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
else
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4418_; 
v_a_4411_ = lean_ctor_get(v___x_4402_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4402_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4413_ = v___x_4402_;
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4402_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4411_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg___boxed(lean_object* v_mvarId_4419_, lean_object* v_x_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_4419_, v_x_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1(lean_object* v_00_u03b1_4427_, lean_object* v_mvarId_4428_, lean_object* v_x_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v___x_4435_; 
v___x_4435_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_4428_, v_x_4429_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___boxed(lean_object* v_00_u03b1_4436_, lean_object* v_mvarId_4437_, lean_object* v_x_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
lean_object* v_res_4444_; 
v_res_4444_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1(v_00_u03b1_4436_, v_mvarId_4437_, v_x_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__0(lean_object* v_snd_4445_, lean_object* v_fst_4446_, lean_object* v_h_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_){
_start:
{
lean_object* v___x_4453_; 
lean_inc_ref(v_h_4447_);
v___x_4453_ = l_Lean_Meta_mkEqMP(v_snd_4445_, v_h_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_);
if (lean_obj_tag(v___x_4453_) == 0)
{
lean_object* v_a_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; uint8_t v___x_4460_; uint8_t v___x_4461_; uint8_t v___x_4462_; lean_object* v___x_4463_; 
v_a_4454_ = lean_ctor_get(v___x_4453_, 0);
lean_inc(v_a_4454_);
lean_dec_ref_known(v___x_4453_, 1);
v___x_4455_ = lean_unsigned_to_nat(1u);
v___x_4456_ = lean_mk_empty_array_with_capacity(v___x_4455_);
lean_inc_ref(v___x_4456_);
v___x_4457_ = lean_array_push(v___x_4456_, v_h_4447_);
v___x_4458_ = lean_array_push(v___x_4456_, v_a_4454_);
v___x_4459_ = l_Lean_Expr_beta(v_fst_4446_, v___x_4458_);
v___x_4460_ = 0;
v___x_4461_ = 1;
v___x_4462_ = 1;
v___x_4463_ = l_Lean_Meta_mkLambdaFVars(v___x_4457_, v___x_4459_, v___x_4460_, v___x_4461_, v___x_4460_, v___x_4461_, v___x_4462_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_);
lean_dec_ref(v___x_4457_);
return v___x_4463_;
}
else
{
lean_dec_ref(v_h_4447_);
lean_dec_ref(v_fst_4446_);
return v___x_4453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__0___boxed(lean_object* v_snd_4464_, lean_object* v_fst_4465_, lean_object* v_h_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
lean_object* v_res_4472_; 
v_res_4472_ = l_Lean_MVarId_byCasesBool___lam__0(v_snd_4464_, v_fst_4465_, v_h_4466_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
lean_dec(v___y_4470_);
lean_dec_ref(v___y_4469_);
lean_dec(v___y_4468_);
lean_dec_ref(v___y_4467_);
return v_res_4472_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__1(lean_object* v_b_4473_, lean_object* v_hName_4474_, lean_object* v_a_4475_, uint8_t v_value_4476_, lean_object* v_tag_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_){
_start:
{
lean_object* v___y_4484_; 
if (v_value_4476_ == 0)
{
lean_object* v___x_4538_; 
v___x_4538_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7);
v___y_4484_ = v___x_4538_;
goto v___jp_4483_;
}
else
{
lean_object* v___x_4539_; 
v___x_4539_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3);
v___y_4484_ = v___x_4539_;
goto v___jp_4483_;
}
v___jp_4483_:
{
lean_object* v___x_4485_; 
lean_inc_ref(v___y_4484_);
lean_inc_ref(v_b_4473_);
v___x_4485_ = l_Lean_Meta_mkEq(v_b_4473_, v___y_4484_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
if (lean_obj_tag(v___x_4485_) == 0)
{
lean_object* v_a_4486_; lean_object* v___x_4487_; 
v_a_4486_ = lean_ctor_get(v___x_4485_, 0);
lean_inc(v_a_4486_);
lean_dec_ref_known(v___x_4485_, 1);
v___x_4487_ = l_Lean_Meta_boolCondToProp_x3f(v_b_4473_, v_value_4476_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
if (lean_obj_tag(v___x_4487_) == 0)
{
lean_object* v_a_4488_; 
v_a_4488_ = lean_ctor_get(v___x_4487_, 0);
lean_inc(v_a_4488_);
lean_dec_ref_known(v___x_4487_, 1);
if (lean_obj_tag(v_a_4488_) == 1)
{
lean_object* v_val_4489_; lean_object* v_fst_4490_; lean_object* v_snd_4491_; lean_object* v___x_4492_; 
v_val_4489_ = lean_ctor_get(v_a_4488_, 0);
lean_inc(v_val_4489_);
lean_dec_ref_known(v_a_4488_, 1);
v_fst_4490_ = lean_ctor_get(v_val_4489_, 0);
lean_inc(v_fst_4490_);
v_snd_4491_ = lean_ctor_get(v_val_4489_, 1);
lean_inc(v_snd_4491_);
lean_dec(v_val_4489_);
lean_inc(v_hName_4474_);
v___x_4492_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal(v_fst_4490_, v_hName_4474_, v_a_4475_, v_tag_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_a_4493_; lean_object* v_fst_4494_; lean_object* v_snd_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4520_; 
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc(v_a_4493_);
lean_dec_ref_known(v___x_4492_, 1);
v_fst_4494_ = lean_ctor_get(v_a_4493_, 0);
v_snd_4495_ = lean_ctor_get(v_a_4493_, 1);
v_isSharedCheck_4520_ = !lean_is_exclusive(v_a_4493_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4497_ = v_a_4493_;
v_isShared_4498_ = v_isSharedCheck_4520_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_snd_4495_);
lean_inc(v_fst_4494_);
lean_dec(v_a_4493_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4520_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___f_4499_; lean_object* v___x_4500_; 
v___f_4499_ = lean_alloc_closure((void*)(l_Lean_MVarId_byCasesBool___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4499_, 0, v_snd_4491_);
lean_closure_set(v___f_4499_, 1, v_fst_4494_);
v___x_4500_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27_spec__0___redArg(v_hName_4474_, v_a_4486_, v___f_4499_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4511_; 
v_a_4501_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4503_ = v___x_4500_;
v_isShared_4504_ = v_isSharedCheck_4511_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4500_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4511_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4498_ == 0)
{
lean_ctor_set(v___x_4497_, 0, v_a_4501_);
v___x_4506_ = v___x_4497_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4501_);
lean_ctor_set(v_reuseFailAlloc_4510_, 1, v_snd_4495_);
v___x_4506_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
lean_object* v___x_4508_; 
if (v_isShared_4504_ == 0)
{
lean_ctor_set(v___x_4503_, 0, v___x_4506_);
v___x_4508_ = v___x_4503_;
goto v_reusejp_4507_;
}
else
{
lean_object* v_reuseFailAlloc_4509_; 
v_reuseFailAlloc_4509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4509_, 0, v___x_4506_);
v___x_4508_ = v_reuseFailAlloc_4509_;
goto v_reusejp_4507_;
}
v_reusejp_4507_:
{
return v___x_4508_;
}
}
}
}
else
{
lean_object* v_a_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4519_; 
lean_del_object(v___x_4497_);
lean_dec(v_snd_4495_);
v_a_4512_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4514_ = v___x_4500_;
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_a_4512_);
lean_dec(v___x_4500_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4517_; 
if (v_isShared_4515_ == 0)
{
v___x_4517_ = v___x_4514_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v_a_4512_);
v___x_4517_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
return v___x_4517_;
}
}
}
}
}
else
{
lean_dec(v_snd_4491_);
lean_dec(v_a_4486_);
lean_dec(v_hName_4474_);
return v___x_4492_;
}
}
else
{
lean_object* v___x_4521_; 
lean_dec(v_a_4488_);
v___x_4521_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_mkByCasesSubgoal(v_a_4486_, v_hName_4474_, v_a_4475_, v_tag_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
return v___x_4521_;
}
}
else
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
lean_dec(v_a_4486_);
lean_dec(v_tag_4477_);
lean_dec_ref(v_a_4475_);
lean_dec(v_hName_4474_);
v_a_4522_ = lean_ctor_get(v___x_4487_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v___x_4487_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v___x_4487_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
return v___x_4527_;
}
}
}
}
else
{
lean_object* v_a_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4537_; 
lean_dec(v_tag_4477_);
lean_dec_ref(v_a_4475_);
lean_dec(v_hName_4474_);
lean_dec_ref(v_b_4473_);
v_a_4530_ = lean_ctor_get(v___x_4485_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v___x_4485_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4532_ = v___x_4485_;
v_isShared_4533_ = v_isSharedCheck_4537_;
goto v_resetjp_4531_;
}
else
{
lean_inc(v_a_4530_);
lean_dec(v___x_4485_);
v___x_4532_ = lean_box(0);
v_isShared_4533_ = v_isSharedCheck_4537_;
goto v_resetjp_4531_;
}
v_resetjp_4531_:
{
lean_object* v___x_4535_; 
if (v_isShared_4533_ == 0)
{
v___x_4535_ = v___x_4532_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v_a_4530_);
v___x_4535_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
return v___x_4535_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__1___boxed(lean_object* v_b_4540_, lean_object* v_hName_4541_, lean_object* v_a_4542_, lean_object* v_value_4543_, lean_object* v_tag_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_){
_start:
{
uint8_t v_value_boxed_4550_; lean_object* v_res_4551_; 
v_value_boxed_4550_ = lean_unbox(v_value_4543_);
v_res_4551_ = l_Lean_MVarId_byCasesBool___lam__1(v_b_4540_, v_hName_4541_, v_a_4542_, v_value_boxed_4550_, v_tag_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_);
lean_dec(v___y_4548_);
lean_dec_ref(v___y_4547_);
lean_dec(v___y_4546_);
lean_dec_ref(v___y_4545_);
return v_res_4551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object* v_x_4552_, lean_object* v_x_4553_, lean_object* v_x_4554_, lean_object* v_x_4555_){
_start:
{
lean_object* v_ks_4556_; lean_object* v_vs_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4581_; 
v_ks_4556_ = lean_ctor_get(v_x_4552_, 0);
v_vs_4557_ = lean_ctor_get(v_x_4552_, 1);
v_isSharedCheck_4581_ = !lean_is_exclusive(v_x_4552_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4559_ = v_x_4552_;
v_isShared_4560_ = v_isSharedCheck_4581_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_vs_4557_);
lean_inc(v_ks_4556_);
lean_dec(v_x_4552_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4581_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4561_; uint8_t v___x_4562_; 
v___x_4561_ = lean_array_get_size(v_ks_4556_);
v___x_4562_ = lean_nat_dec_lt(v_x_4553_, v___x_4561_);
if (v___x_4562_ == 0)
{
lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4566_; 
lean_dec(v_x_4553_);
v___x_4563_ = lean_array_push(v_ks_4556_, v_x_4554_);
v___x_4564_ = lean_array_push(v_vs_4557_, v_x_4555_);
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 1, v___x_4564_);
lean_ctor_set(v___x_4559_, 0, v___x_4563_);
v___x_4566_ = v___x_4559_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v___x_4563_);
lean_ctor_set(v_reuseFailAlloc_4567_, 1, v___x_4564_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
return v___x_4566_;
}
}
else
{
lean_object* v_k_x27_4568_; uint8_t v___x_4569_; 
v_k_x27_4568_ = lean_array_fget_borrowed(v_ks_4556_, v_x_4553_);
v___x_4569_ = l_Lean_instBEqMVarId_beq(v_x_4554_, v_k_x27_4568_);
if (v___x_4569_ == 0)
{
lean_object* v___x_4571_; 
if (v_isShared_4560_ == 0)
{
v___x_4571_ = v___x_4559_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_ks_4556_);
lean_ctor_set(v_reuseFailAlloc_4575_, 1, v_vs_4557_);
v___x_4571_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4572_ = lean_unsigned_to_nat(1u);
v___x_4573_ = lean_nat_add(v_x_4553_, v___x_4572_);
lean_dec(v_x_4553_);
v_x_4552_ = v___x_4571_;
v_x_4553_ = v___x_4573_;
goto _start;
}
}
else
{
lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4579_; 
v___x_4576_ = lean_array_fset(v_ks_4556_, v_x_4553_, v_x_4554_);
v___x_4577_ = lean_array_fset(v_vs_4557_, v_x_4553_, v_x_4555_);
lean_dec(v_x_4553_);
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 1, v___x_4577_);
lean_ctor_set(v___x_4559_, 0, v___x_4576_);
v___x_4579_ = v___x_4559_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v___x_4576_);
lean_ctor_set(v_reuseFailAlloc_4580_, 1, v___x_4577_);
v___x_4579_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
return v___x_4579_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_n_4582_, lean_object* v_k_4583_, lean_object* v_v_4584_){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; 
v___x_4585_ = lean_unsigned_to_nat(0u);
v___x_4586_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_n_4582_, v___x_4585_, v_k_4583_, v_v_4584_);
return v___x_4586_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4587_; 
v___x_4587_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(lean_object* v_x_4588_, size_t v_x_4589_, size_t v_x_4590_, lean_object* v_x_4591_, lean_object* v_x_4592_){
_start:
{
if (lean_obj_tag(v_x_4588_) == 0)
{
lean_object* v_es_4593_; size_t v___x_4594_; size_t v___x_4595_; lean_object* v_j_4596_; lean_object* v___x_4597_; uint8_t v___x_4598_; 
v_es_4593_ = lean_ctor_get(v_x_4588_, 0);
v___x_4594_ = ((size_t)31ULL);
v___x_4595_ = lean_usize_land(v_x_4589_, v___x_4594_);
v_j_4596_ = lean_usize_to_nat(v___x_4595_);
v___x_4597_ = lean_array_get_size(v_es_4593_);
v___x_4598_ = lean_nat_dec_lt(v_j_4596_, v___x_4597_);
if (v___x_4598_ == 0)
{
lean_dec(v_j_4596_);
lean_dec(v_x_4592_);
lean_dec(v_x_4591_);
return v_x_4588_;
}
else
{
lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4637_; 
lean_inc_ref(v_es_4593_);
v_isSharedCheck_4637_ = !lean_is_exclusive(v_x_4588_);
if (v_isSharedCheck_4637_ == 0)
{
lean_object* v_unused_4638_; 
v_unused_4638_ = lean_ctor_get(v_x_4588_, 0);
lean_dec(v_unused_4638_);
v___x_4600_ = v_x_4588_;
v_isShared_4601_ = v_isSharedCheck_4637_;
goto v_resetjp_4599_;
}
else
{
lean_dec(v_x_4588_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4637_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v_v_4602_; lean_object* v___x_4603_; lean_object* v_xs_x27_4604_; lean_object* v___y_4606_; 
v_v_4602_ = lean_array_fget(v_es_4593_, v_j_4596_);
v___x_4603_ = lean_box(0);
v_xs_x27_4604_ = lean_array_fset(v_es_4593_, v_j_4596_, v___x_4603_);
switch(lean_obj_tag(v_v_4602_))
{
case 0:
{
lean_object* v_key_4611_; lean_object* v_val_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4622_; 
v_key_4611_ = lean_ctor_get(v_v_4602_, 0);
v_val_4612_ = lean_ctor_get(v_v_4602_, 1);
v_isSharedCheck_4622_ = !lean_is_exclusive(v_v_4602_);
if (v_isSharedCheck_4622_ == 0)
{
v___x_4614_ = v_v_4602_;
v_isShared_4615_ = v_isSharedCheck_4622_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_val_4612_);
lean_inc(v_key_4611_);
lean_dec(v_v_4602_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4622_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
uint8_t v___x_4616_; 
v___x_4616_ = l_Lean_instBEqMVarId_beq(v_x_4591_, v_key_4611_);
if (v___x_4616_ == 0)
{
lean_object* v___x_4617_; lean_object* v___x_4618_; 
lean_del_object(v___x_4614_);
v___x_4617_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4611_, v_val_4612_, v_x_4591_, v_x_4592_);
v___x_4618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4618_, 0, v___x_4617_);
v___y_4606_ = v___x_4618_;
goto v___jp_4605_;
}
else
{
lean_object* v___x_4620_; 
lean_dec(v_val_4612_);
lean_dec(v_key_4611_);
if (v_isShared_4615_ == 0)
{
lean_ctor_set(v___x_4614_, 1, v_x_4592_);
lean_ctor_set(v___x_4614_, 0, v_x_4591_);
v___x_4620_ = v___x_4614_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v_x_4591_);
lean_ctor_set(v_reuseFailAlloc_4621_, 1, v_x_4592_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
v___y_4606_ = v___x_4620_;
goto v___jp_4605_;
}
}
}
}
case 1:
{
lean_object* v_node_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4635_; 
v_node_4623_ = lean_ctor_get(v_v_4602_, 0);
v_isSharedCheck_4635_ = !lean_is_exclusive(v_v_4602_);
if (v_isSharedCheck_4635_ == 0)
{
v___x_4625_ = v_v_4602_;
v_isShared_4626_ = v_isSharedCheck_4635_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_node_4623_);
lean_dec(v_v_4602_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4635_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
size_t v___x_4627_; size_t v___x_4628_; size_t v___x_4629_; size_t v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4633_; 
v___x_4627_ = ((size_t)5ULL);
v___x_4628_ = lean_usize_shift_right(v_x_4589_, v___x_4627_);
v___x_4629_ = ((size_t)1ULL);
v___x_4630_ = lean_usize_add(v_x_4590_, v___x_4629_);
v___x_4631_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(v_node_4623_, v___x_4628_, v___x_4630_, v_x_4591_, v_x_4592_);
if (v_isShared_4626_ == 0)
{
lean_ctor_set(v___x_4625_, 0, v___x_4631_);
v___x_4633_ = v___x_4625_;
goto v_reusejp_4632_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v___x_4631_);
v___x_4633_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4632_;
}
v_reusejp_4632_:
{
v___y_4606_ = v___x_4633_;
goto v___jp_4605_;
}
}
}
default: 
{
lean_object* v___x_4636_; 
v___x_4636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4636_, 0, v_x_4591_);
lean_ctor_set(v___x_4636_, 1, v_x_4592_);
v___y_4606_ = v___x_4636_;
goto v___jp_4605_;
}
}
v___jp_4605_:
{
lean_object* v___x_4607_; lean_object* v___x_4609_; 
v___x_4607_ = lean_array_fset(v_xs_x27_4604_, v_j_4596_, v___y_4606_);
lean_dec(v_j_4596_);
if (v_isShared_4601_ == 0)
{
lean_ctor_set(v___x_4600_, 0, v___x_4607_);
v___x_4609_ = v___x_4600_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v___x_4607_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
return v___x_4609_;
}
}
}
}
}
else
{
lean_object* v_ks_4639_; lean_object* v_vs_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4658_; 
v_ks_4639_ = lean_ctor_get(v_x_4588_, 0);
v_vs_4640_ = lean_ctor_get(v_x_4588_, 1);
v_isSharedCheck_4658_ = !lean_is_exclusive(v_x_4588_);
if (v_isSharedCheck_4658_ == 0)
{
v___x_4642_ = v_x_4588_;
v_isShared_4643_ = v_isSharedCheck_4658_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_vs_4640_);
lean_inc(v_ks_4639_);
lean_dec(v_x_4588_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4658_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
lean_object* v___x_4645_; 
if (v_isShared_4643_ == 0)
{
v___x_4645_ = v___x_4642_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v_ks_4639_);
lean_ctor_set(v_reuseFailAlloc_4657_, 1, v_vs_4640_);
v___x_4645_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
lean_object* v_newNode_4646_; size_t v___x_4647_; uint8_t v___x_4648_; 
v_newNode_4646_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3___redArg(v___x_4645_, v_x_4591_, v_x_4592_);
v___x_4647_ = ((size_t)7ULL);
v___x_4648_ = lean_usize_dec_le(v___x_4647_, v_x_4590_);
if (v___x_4648_ == 0)
{
lean_object* v___x_4649_; lean_object* v___x_4650_; uint8_t v___x_4651_; 
v___x_4649_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4646_);
v___x_4650_ = lean_unsigned_to_nat(4u);
v___x_4651_ = lean_nat_dec_lt(v___x_4649_, v___x_4650_);
lean_dec(v___x_4649_);
if (v___x_4651_ == 0)
{
lean_object* v_ks_4652_; lean_object* v_vs_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v_ks_4652_ = lean_ctor_get(v_newNode_4646_, 0);
lean_inc_ref(v_ks_4652_);
v_vs_4653_ = lean_ctor_get(v_newNode_4646_, 1);
lean_inc_ref(v_vs_4653_);
lean_dec_ref(v_newNode_4646_);
v___x_4654_ = lean_unsigned_to_nat(0u);
v___x_4655_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_4656_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg(v_x_4590_, v_ks_4652_, v_vs_4653_, v___x_4654_, v___x_4655_);
lean_dec_ref(v_vs_4653_);
lean_dec_ref(v_ks_4652_);
return v___x_4656_;
}
else
{
return v_newNode_4646_;
}
}
else
{
return v_newNode_4646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg(size_t v_depth_4659_, lean_object* v_keys_4660_, lean_object* v_vals_4661_, lean_object* v_i_4662_, lean_object* v_entries_4663_){
_start:
{
lean_object* v___x_4664_; uint8_t v___x_4665_; 
v___x_4664_ = lean_array_get_size(v_keys_4660_);
v___x_4665_ = lean_nat_dec_lt(v_i_4662_, v___x_4664_);
if (v___x_4665_ == 0)
{
lean_dec(v_i_4662_);
return v_entries_4663_;
}
else
{
lean_object* v_k_4666_; lean_object* v_v_4667_; uint64_t v___x_4668_; size_t v_h_4669_; size_t v___x_4670_; lean_object* v___x_4671_; size_t v___x_4672_; size_t v___x_4673_; size_t v___x_4674_; size_t v_h_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; 
v_k_4666_ = lean_array_fget_borrowed(v_keys_4660_, v_i_4662_);
v_v_4667_ = lean_array_fget_borrowed(v_vals_4661_, v_i_4662_);
v___x_4668_ = l_Lean_instHashableMVarId_hash(v_k_4666_);
v_h_4669_ = lean_uint64_to_usize(v___x_4668_);
v___x_4670_ = ((size_t)5ULL);
v___x_4671_ = lean_unsigned_to_nat(1u);
v___x_4672_ = ((size_t)1ULL);
v___x_4673_ = lean_usize_sub(v_depth_4659_, v___x_4672_);
v___x_4674_ = lean_usize_mul(v___x_4670_, v___x_4673_);
v_h_4675_ = lean_usize_shift_right(v_h_4669_, v___x_4674_);
v___x_4676_ = lean_nat_add(v_i_4662_, v___x_4671_);
lean_dec(v_i_4662_);
lean_inc(v_v_4667_);
lean_inc(v_k_4666_);
v___x_4677_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(v_entries_4663_, v_h_4675_, v_depth_4659_, v_k_4666_, v_v_4667_);
v_i_4662_ = v___x_4676_;
v_entries_4663_ = v___x_4677_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_depth_4679_, lean_object* v_keys_4680_, lean_object* v_vals_4681_, lean_object* v_i_4682_, lean_object* v_entries_4683_){
_start:
{
size_t v_depth_boxed_4684_; lean_object* v_res_4685_; 
v_depth_boxed_4684_ = lean_unbox_usize(v_depth_4679_);
lean_dec(v_depth_4679_);
v_res_4685_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_boxed_4684_, v_keys_4680_, v_vals_4681_, v_i_4682_, v_entries_4683_);
lean_dec_ref(v_vals_4681_);
lean_dec_ref(v_keys_4680_);
return v_res_4685_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_4686_, lean_object* v_x_4687_, lean_object* v_x_4688_, lean_object* v_x_4689_, lean_object* v_x_4690_){
_start:
{
size_t v_x_3077__boxed_4691_; size_t v_x_3078__boxed_4692_; lean_object* v_res_4693_; 
v_x_3077__boxed_4691_ = lean_unbox_usize(v_x_4687_);
lean_dec(v_x_4687_);
v_x_3078__boxed_4692_ = lean_unbox_usize(v_x_4688_);
lean_dec(v_x_4688_);
v_res_4693_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(v_x_4686_, v_x_3077__boxed_4691_, v_x_3078__boxed_4692_, v_x_4689_, v_x_4690_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0___redArg(lean_object* v_x_4694_, lean_object* v_x_4695_, lean_object* v_x_4696_){
_start:
{
uint64_t v___x_4697_; size_t v___x_4698_; size_t v___x_4699_; lean_object* v___x_4700_; 
v___x_4697_ = l_Lean_instHashableMVarId_hash(v_x_4695_);
v___x_4698_ = lean_uint64_to_usize(v___x_4697_);
v___x_4699_ = ((size_t)1ULL);
v___x_4700_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(v_x_4694_, v___x_4698_, v___x_4699_, v_x_4695_, v_x_4696_);
return v___x_4700_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg(lean_object* v_mvarId_4701_, lean_object* v_val_4702_, lean_object* v___y_4703_){
_start:
{
lean_object* v___x_4705_; lean_object* v_mctx_4706_; lean_object* v_cache_4707_; lean_object* v_zetaDeltaFVarIds_4708_; lean_object* v_postponed_4709_; lean_object* v_diag_4710_; lean_object* v___x_4712_; uint8_t v_isShared_4713_; uint8_t v_isSharedCheck_4740_; 
v___x_4705_ = lean_st_ref_take(v___y_4703_);
v_mctx_4706_ = lean_ctor_get(v___x_4705_, 0);
v_cache_4707_ = lean_ctor_get(v___x_4705_, 1);
v_zetaDeltaFVarIds_4708_ = lean_ctor_get(v___x_4705_, 2);
v_postponed_4709_ = lean_ctor_get(v___x_4705_, 3);
v_diag_4710_ = lean_ctor_get(v___x_4705_, 4);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4712_ = v___x_4705_;
v_isShared_4713_ = v_isSharedCheck_4740_;
goto v_resetjp_4711_;
}
else
{
lean_inc(v_diag_4710_);
lean_inc(v_postponed_4709_);
lean_inc(v_zetaDeltaFVarIds_4708_);
lean_inc(v_cache_4707_);
lean_inc(v_mctx_4706_);
lean_dec(v___x_4705_);
v___x_4712_ = lean_box(0);
v_isShared_4713_ = v_isSharedCheck_4740_;
goto v_resetjp_4711_;
}
v_resetjp_4711_:
{
lean_object* v_depth_4714_; lean_object* v_levelAssignDepth_4715_; lean_object* v_lmvarCounter_4716_; lean_object* v_mvarCounter_4717_; lean_object* v_lDecls_4718_; lean_object* v_decls_4719_; lean_object* v_userNames_4720_; lean_object* v_lAssignment_4721_; lean_object* v_eAssignment_4722_; lean_object* v_dAssignment_4723_; lean_object* v_instanceTypedMVars_4724_; lean_object* v_synthNormMemo_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4739_; 
v_depth_4714_ = lean_ctor_get(v_mctx_4706_, 0);
v_levelAssignDepth_4715_ = lean_ctor_get(v_mctx_4706_, 1);
v_lmvarCounter_4716_ = lean_ctor_get(v_mctx_4706_, 2);
v_mvarCounter_4717_ = lean_ctor_get(v_mctx_4706_, 3);
v_lDecls_4718_ = lean_ctor_get(v_mctx_4706_, 4);
v_decls_4719_ = lean_ctor_get(v_mctx_4706_, 5);
v_userNames_4720_ = lean_ctor_get(v_mctx_4706_, 6);
v_lAssignment_4721_ = lean_ctor_get(v_mctx_4706_, 7);
v_eAssignment_4722_ = lean_ctor_get(v_mctx_4706_, 8);
v_dAssignment_4723_ = lean_ctor_get(v_mctx_4706_, 9);
v_instanceTypedMVars_4724_ = lean_ctor_get(v_mctx_4706_, 10);
v_synthNormMemo_4725_ = lean_ctor_get(v_mctx_4706_, 11);
v_isSharedCheck_4739_ = !lean_is_exclusive(v_mctx_4706_);
if (v_isSharedCheck_4739_ == 0)
{
v___x_4727_ = v_mctx_4706_;
v_isShared_4728_ = v_isSharedCheck_4739_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_synthNormMemo_4725_);
lean_inc(v_instanceTypedMVars_4724_);
lean_inc(v_dAssignment_4723_);
lean_inc(v_eAssignment_4722_);
lean_inc(v_lAssignment_4721_);
lean_inc(v_userNames_4720_);
lean_inc(v_decls_4719_);
lean_inc(v_lDecls_4718_);
lean_inc(v_mvarCounter_4717_);
lean_inc(v_lmvarCounter_4716_);
lean_inc(v_levelAssignDepth_4715_);
lean_inc(v_depth_4714_);
lean_dec(v_mctx_4706_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4739_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4732_; 
v___x_4729_ = lean_box(0);
v___x_4730_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0___redArg(v_eAssignment_4722_, v_mvarId_4701_, v_val_4702_);
if (v_isShared_4728_ == 0)
{
lean_ctor_set(v___x_4727_, 8, v___x_4730_);
v___x_4732_ = v___x_4727_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4738_; 
v_reuseFailAlloc_4738_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_4738_, 0, v_depth_4714_);
lean_ctor_set(v_reuseFailAlloc_4738_, 1, v_levelAssignDepth_4715_);
lean_ctor_set(v_reuseFailAlloc_4738_, 2, v_lmvarCounter_4716_);
lean_ctor_set(v_reuseFailAlloc_4738_, 3, v_mvarCounter_4717_);
lean_ctor_set(v_reuseFailAlloc_4738_, 4, v_lDecls_4718_);
lean_ctor_set(v_reuseFailAlloc_4738_, 5, v_decls_4719_);
lean_ctor_set(v_reuseFailAlloc_4738_, 6, v_userNames_4720_);
lean_ctor_set(v_reuseFailAlloc_4738_, 7, v_lAssignment_4721_);
lean_ctor_set(v_reuseFailAlloc_4738_, 8, v___x_4730_);
lean_ctor_set(v_reuseFailAlloc_4738_, 9, v_dAssignment_4723_);
lean_ctor_set(v_reuseFailAlloc_4738_, 10, v_instanceTypedMVars_4724_);
lean_ctor_set(v_reuseFailAlloc_4738_, 11, v_synthNormMemo_4725_);
v___x_4732_ = v_reuseFailAlloc_4738_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
lean_object* v___x_4734_; 
if (v_isShared_4713_ == 0)
{
lean_ctor_set(v___x_4712_, 0, v___x_4732_);
v___x_4734_ = v___x_4712_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4737_; 
v_reuseFailAlloc_4737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4737_, 0, v___x_4732_);
lean_ctor_set(v_reuseFailAlloc_4737_, 1, v_cache_4707_);
lean_ctor_set(v_reuseFailAlloc_4737_, 2, v_zetaDeltaFVarIds_4708_);
lean_ctor_set(v_reuseFailAlloc_4737_, 3, v_postponed_4709_);
lean_ctor_set(v_reuseFailAlloc_4737_, 4, v_diag_4710_);
v___x_4734_ = v_reuseFailAlloc_4737_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; 
v___x_4735_ = lean_st_ref_put(v___y_4703_, v___x_4734_);
v___x_4736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4736_, 0, v___x_4729_);
return v___x_4736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg___boxed(lean_object* v_mvarId_4741_, lean_object* v_val_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg(v_mvarId_4741_, v_val_4742_, v___y_4743_);
lean_dec(v___y_4743_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__2(lean_object* v_mvarId_4752_, lean_object* v_b_4753_, lean_object* v_hName_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_){
_start:
{
lean_object* v___x_4760_; 
lean_inc(v_mvarId_4752_);
v___x_4760_ = l_Lean_MVarId_getType(v_mvarId_4752_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
if (lean_obj_tag(v___x_4760_) == 0)
{
lean_object* v_a_4761_; lean_object* v___x_4762_; 
v_a_4761_ = lean_ctor_get(v___x_4760_, 0);
lean_inc(v_a_4761_);
lean_dec_ref_known(v___x_4760_, 1);
lean_inc(v_mvarId_4752_);
v___x_4762_ = l_Lean_MVarId_getTag(v_mvarId_4752_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
if (lean_obj_tag(v___x_4762_) == 0)
{
lean_object* v_a_4763_; lean_object* v___x_4764_; 
v_a_4763_ = lean_ctor_get(v___x_4762_, 0);
lean_inc(v_a_4763_);
lean_dec_ref_known(v___x_4762_, 1);
lean_inc(v_a_4761_);
v___x_4764_ = l_Lean_Meta_getLevel(v_a_4761_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
if (lean_obj_tag(v___x_4764_) == 0)
{
lean_object* v_a_4765_; uint8_t v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v_a_4765_ = lean_ctor_get(v___x_4764_, 0);
lean_inc(v_a_4765_);
lean_dec_ref_known(v___x_4764_, 1);
v___x_4766_ = 1;
v___x_4767_ = ((lean_object*)(l_Lean_MVarId_byCasesBool___lam__2___closed__1));
lean_inc(v_a_4763_);
v___x_4768_ = l_Lean_Name_append(v_a_4763_, v___x_4767_);
lean_inc(v_a_4761_);
lean_inc(v_hName_4754_);
lean_inc_ref(v_b_4753_);
v___x_4769_ = l_Lean_MVarId_byCasesBool___lam__1(v_b_4753_, v_hName_4754_, v_a_4761_, v___x_4766_, v___x_4768_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
if (lean_obj_tag(v___x_4769_) == 0)
{
lean_object* v_a_4770_; lean_object* v_fst_4771_; lean_object* v_snd_4772_; lean_object* v___x_4774_; uint8_t v_isShared_4775_; uint8_t v_isSharedCheck_4814_; 
v_a_4770_ = lean_ctor_get(v___x_4769_, 0);
lean_inc(v_a_4770_);
lean_dec_ref_known(v___x_4769_, 1);
v_fst_4771_ = lean_ctor_get(v_a_4770_, 0);
v_snd_4772_ = lean_ctor_get(v_a_4770_, 1);
v_isSharedCheck_4814_ = !lean_is_exclusive(v_a_4770_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4774_ = v_a_4770_;
v_isShared_4775_ = v_isSharedCheck_4814_;
goto v_resetjp_4773_;
}
else
{
lean_inc(v_snd_4772_);
lean_inc(v_fst_4771_);
lean_dec(v_a_4770_);
v___x_4774_ = lean_box(0);
v_isShared_4775_ = v_isSharedCheck_4814_;
goto v_resetjp_4773_;
}
v_resetjp_4773_:
{
uint8_t v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4776_ = 0;
v___x_4777_ = ((lean_object*)(l_Lean_MVarId_byCasesBool___lam__2___closed__3));
v___x_4778_ = l_Lean_Name_append(v_a_4763_, v___x_4777_);
lean_inc(v_a_4761_);
lean_inc_ref(v_b_4753_);
v___x_4779_ = l_Lean_MVarId_byCasesBool___lam__1(v_b_4753_, v_hName_4754_, v_a_4761_, v___x_4776_, v___x_4778_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v_fst_4781_; lean_object* v_snd_4782_; lean_object* v___x_4784_; uint8_t v_isShared_4785_; uint8_t v_isSharedCheck_4805_; 
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
lean_inc(v_a_4780_);
lean_dec_ref_known(v___x_4779_, 1);
v_fst_4781_ = lean_ctor_get(v_a_4780_, 0);
v_snd_4782_ = lean_ctor_get(v_a_4780_, 1);
v_isSharedCheck_4805_ = !lean_is_exclusive(v_a_4780_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4784_ = v_a_4780_;
v_isShared_4785_ = v_isSharedCheck_4805_;
goto v_resetjp_4783_;
}
else
{
lean_inc(v_snd_4782_);
lean_inc(v_fst_4781_);
lean_dec(v_a_4780_);
v___x_4784_ = lean_box(0);
v_isShared_4785_ = v_isSharedCheck_4805_;
goto v_resetjp_4783_;
}
v_resetjp_4783_:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4789_; 
v___x_4786_ = ((lean_object*)(l_Lean_Meta_isIteLike___closed__9));
v___x_4787_ = lean_box(0);
if (v_isShared_4775_ == 0)
{
lean_ctor_set_tag(v___x_4774_, 1);
lean_ctor_set(v___x_4774_, 1, v___x_4787_);
lean_ctor_set(v___x_4774_, 0, v_a_4765_);
v___x_4789_ = v___x_4774_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v_a_4765_);
lean_ctor_set(v_reuseFailAlloc_4804_, 1, v___x_4787_);
v___x_4789_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4802_; 
v___x_4790_ = l_Lean_Expr_const___override(v___x_4786_, v___x_4789_);
v___x_4791_ = l_Lean_mkApp4(v___x_4790_, v_a_4761_, v_b_4753_, v_fst_4771_, v_fst_4781_);
v___x_4792_ = l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg(v_mvarId_4752_, v___x_4791_, v___y_4756_);
v_isSharedCheck_4802_ = !lean_is_exclusive(v___x_4792_);
if (v_isSharedCheck_4802_ == 0)
{
lean_object* v_unused_4803_; 
v_unused_4803_ = lean_ctor_get(v___x_4792_, 0);
lean_dec(v_unused_4803_);
v___x_4794_ = v___x_4792_;
v_isShared_4795_ = v_isSharedCheck_4802_;
goto v_resetjp_4793_;
}
else
{
lean_dec(v___x_4792_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4802_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
lean_object* v___x_4797_; 
if (v_isShared_4785_ == 0)
{
lean_ctor_set(v___x_4784_, 0, v_snd_4772_);
v___x_4797_ = v___x_4784_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v_snd_4772_);
lean_ctor_set(v_reuseFailAlloc_4801_, 1, v_snd_4782_);
v___x_4797_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
lean_object* v___x_4799_; 
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 0, v___x_4797_);
v___x_4799_ = v___x_4794_;
goto v_reusejp_4798_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v___x_4797_);
v___x_4799_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4798_;
}
v_reusejp_4798_:
{
return v___x_4799_;
}
}
}
}
}
}
else
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4813_; 
lean_del_object(v___x_4774_);
lean_dec(v_snd_4772_);
lean_dec(v_fst_4771_);
lean_dec(v_a_4765_);
lean_dec(v_a_4761_);
lean_dec_ref(v_b_4753_);
lean_dec(v_mvarId_4752_);
v_a_4806_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4813_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4808_ = v___x_4779_;
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4779_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4811_; 
if (v_isShared_4809_ == 0)
{
v___x_4811_ = v___x_4808_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v_a_4806_);
v___x_4811_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
return v___x_4811_;
}
}
}
}
}
else
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4822_; 
lean_dec(v_a_4765_);
lean_dec(v_a_4763_);
lean_dec(v_a_4761_);
lean_dec(v_hName_4754_);
lean_dec_ref(v_b_4753_);
lean_dec(v_mvarId_4752_);
v_a_4815_ = lean_ctor_get(v___x_4769_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4769_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4817_ = v___x_4769_;
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v___x_4769_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4820_; 
if (v_isShared_4818_ == 0)
{
v___x_4820_ = v___x_4817_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_a_4815_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
}
else
{
lean_object* v_a_4823_; lean_object* v___x_4825_; uint8_t v_isShared_4826_; uint8_t v_isSharedCheck_4830_; 
lean_dec(v_a_4763_);
lean_dec(v_a_4761_);
lean_dec(v_hName_4754_);
lean_dec_ref(v_b_4753_);
lean_dec(v_mvarId_4752_);
v_a_4823_ = lean_ctor_get(v___x_4764_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4764_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4825_ = v___x_4764_;
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
else
{
lean_inc(v_a_4823_);
lean_dec(v___x_4764_);
v___x_4825_ = lean_box(0);
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
v_resetjp_4824_:
{
lean_object* v___x_4828_; 
if (v_isShared_4826_ == 0)
{
v___x_4828_ = v___x_4825_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v_a_4823_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
return v___x_4828_;
}
}
}
}
else
{
lean_object* v_a_4831_; lean_object* v___x_4833_; uint8_t v_isShared_4834_; uint8_t v_isSharedCheck_4838_; 
lean_dec(v_a_4761_);
lean_dec(v_hName_4754_);
lean_dec_ref(v_b_4753_);
lean_dec(v_mvarId_4752_);
v_a_4831_ = lean_ctor_get(v___x_4762_, 0);
v_isSharedCheck_4838_ = !lean_is_exclusive(v___x_4762_);
if (v_isSharedCheck_4838_ == 0)
{
v___x_4833_ = v___x_4762_;
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
else
{
lean_inc(v_a_4831_);
lean_dec(v___x_4762_);
v___x_4833_ = lean_box(0);
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
v_resetjp_4832_:
{
lean_object* v___x_4836_; 
if (v_isShared_4834_ == 0)
{
v___x_4836_ = v___x_4833_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v_a_4831_);
v___x_4836_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
return v___x_4836_;
}
}
}
}
else
{
lean_object* v_a_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
lean_dec(v_hName_4754_);
lean_dec_ref(v_b_4753_);
lean_dec(v_mvarId_4752_);
v_a_4839_ = lean_ctor_get(v___x_4760_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4760_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4841_ = v___x_4760_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_a_4839_);
lean_dec(v___x_4760_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_a_4839_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___lam__2___boxed(lean_object* v_mvarId_4847_, lean_object* v_b_4848_, lean_object* v_hName_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_){
_start:
{
lean_object* v_res_4855_; 
v_res_4855_ = l_Lean_MVarId_byCasesBool___lam__2(v_mvarId_4847_, v_b_4848_, v_hName_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_);
lean_dec(v___y_4853_);
lean_dec_ref(v___y_4852_);
lean_dec(v___y_4851_);
lean_dec_ref(v___y_4850_);
return v_res_4855_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool(lean_object* v_mvarId_4856_, lean_object* v_b_4857_, lean_object* v_hName_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_){
_start:
{
lean_object* v___f_4864_; lean_object* v___x_4865_; 
lean_inc(v_mvarId_4856_);
v___f_4864_ = lean_alloc_closure((void*)(l_Lean_MVarId_byCasesBool___lam__2___boxed), 8, 3);
lean_closure_set(v___f_4864_, 0, v_mvarId_4856_);
lean_closure_set(v___f_4864_, 1, v_b_4857_);
lean_closure_set(v___f_4864_, 2, v_hName_4858_);
v___x_4865_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_4856_, v___f_4864_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesBool___boxed(lean_object* v_mvarId_4866_, lean_object* v_b_4867_, lean_object* v_hName_4868_, lean_object* v_a_4869_, lean_object* v_a_4870_, lean_object* v_a_4871_, lean_object* v_a_4872_, lean_object* v_a_4873_){
_start:
{
lean_object* v_res_4874_; 
v_res_4874_ = l_Lean_MVarId_byCasesBool(v_mvarId_4866_, v_b_4867_, v_hName_4868_, v_a_4869_, v_a_4870_, v_a_4871_, v_a_4872_);
lean_dec(v_a_4872_);
lean_dec_ref(v_a_4871_);
lean_dec(v_a_4870_);
lean_dec_ref(v_a_4869_);
return v_res_4874_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0(lean_object* v_mvarId_4875_, lean_object* v_val_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_){
_start:
{
lean_object* v___x_4882_; 
v___x_4882_ = l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___redArg(v_mvarId_4875_, v_val_4876_, v___y_4878_);
return v___x_4882_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0___boxed(lean_object* v_mvarId_4883_, lean_object* v_val_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_){
_start:
{
lean_object* v_res_4890_; 
v_res_4890_ = l_Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0(v_mvarId_4883_, v_val_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
lean_dec(v___y_4886_);
lean_dec_ref(v___y_4885_);
return v_res_4890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0(lean_object* v_00_u03b2_4891_, lean_object* v_x_4892_, lean_object* v_x_4893_, lean_object* v_x_4894_){
_start:
{
lean_object* v___x_4895_; 
v___x_4895_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0___redArg(v_x_4892_, v_x_4893_, v_x_4894_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_4896_, lean_object* v_x_4897_, size_t v_x_4898_, size_t v_x_4899_, lean_object* v_x_4900_, lean_object* v_x_4901_){
_start:
{
lean_object* v___x_4902_; 
v___x_4902_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___redArg(v_x_4897_, v_x_4898_, v_x_4899_, v_x_4900_, v_x_4901_);
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_4903_, lean_object* v_x_4904_, lean_object* v_x_4905_, lean_object* v_x_4906_, lean_object* v_x_4907_, lean_object* v_x_4908_){
_start:
{
size_t v_x_3533__boxed_4909_; size_t v_x_3534__boxed_4910_; lean_object* v_res_4911_; 
v_x_3533__boxed_4909_ = lean_unbox_usize(v_x_4905_);
lean_dec(v_x_4905_);
v_x_3534__boxed_4910_ = lean_unbox_usize(v_x_4906_);
lean_dec(v_x_4906_);
v_res_4911_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2(v_00_u03b2_4903_, v_x_4904_, v_x_3533__boxed_4909_, v_x_3534__boxed_4910_, v_x_4907_, v_x_4908_);
return v_res_4911_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_4912_, lean_object* v_n_4913_, lean_object* v_k_4914_, lean_object* v_v_4915_){
_start:
{
lean_object* v___x_4916_; 
v___x_4916_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3___redArg(v_n_4913_, v_k_4914_, v_v_4915_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_4917_, size_t v_depth_4918_, lean_object* v_keys_4919_, lean_object* v_vals_4920_, lean_object* v_heq_4921_, lean_object* v_i_4922_, lean_object* v_entries_4923_){
_start:
{
lean_object* v___x_4924_; 
v___x_4924_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_4918_, v_keys_4919_, v_vals_4920_, v_i_4922_, v_entries_4923_);
return v___x_4924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_4925_, lean_object* v_depth_4926_, lean_object* v_keys_4927_, lean_object* v_vals_4928_, lean_object* v_heq_4929_, lean_object* v_i_4930_, lean_object* v_entries_4931_){
_start:
{
size_t v_depth_boxed_4932_; lean_object* v_res_4933_; 
v_depth_boxed_4932_ = lean_unbox_usize(v_depth_4926_);
lean_dec(v_depth_4926_);
v_res_4933_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_4925_, v_depth_boxed_4932_, v_keys_4927_, v_vals_4928_, v_heq_4929_, v_i_4930_, v_entries_4931_);
lean_dec_ref(v_vals_4928_);
lean_dec_ref(v_keys_4927_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_4934_, lean_object* v_x_4935_, lean_object* v_x_4936_, lean_object* v_x_4937_, lean_object* v_x_4938_){
_start:
{
lean_object* v___x_4939_; 
v___x_4939_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_byCasesBool_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_x_4935_, v_x_4936_, v_x_4937_, v_x_4938_);
return v___x_4939_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4941_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0));
v___x_4942_ = l_Lean_stringToMessageData(v___x_4941_);
return v___x_4942_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4944_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2));
v___x_4945_ = l_Lean_stringToMessageData(v___x_4944_);
return v___x_4945_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4947_; lean_object* v___x_4948_; 
v___x_4947_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__4));
v___x_4948_ = l_Lean_stringToMessageData(v___x_4947_);
return v___x_4948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(lean_object* v_mvarId_4949_, lean_object* v_e_4950_, lean_object* v_hName_x3f_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_){
_start:
{
lean_object* v___y_4961_; lean_object* v___y_4962_; lean_object* v___y_4963_; lean_object* v___y_4964_; lean_object* v___y_4965_; lean_object* v___y_4966_; lean_object* v___y_4967_; lean_object* v___y_4987_; lean_object* v___y_4988_; lean_object* v___y_4989_; lean_object* v___y_4990_; lean_object* v___y_4991_; lean_object* v___y_4992_; lean_object* v___x_5011_; lean_object* v_a_5012_; lean_object* v___x_5013_; 
v___x_5011_ = l_Lean_instantiateMVars___at___00Lean_Meta_findSplit_x3f_spec__0___redArg(v_e_4950_, v___y_4953_);
v_a_5012_ = lean_ctor_get(v___x_5011_, 0);
lean_inc_n(v_a_5012_, 2);
lean_dec_ref(v___x_5011_);
v___x_5013_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(v_a_5012_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_);
if (lean_obj_tag(v___x_5013_) == 0)
{
lean_object* v_a_5014_; 
v_a_5014_ = lean_ctor_get(v___x_5013_, 0);
lean_inc(v_a_5014_);
lean_dec_ref_known(v___x_5013_, 1);
if (lean_obj_tag(v_a_5014_) == 1)
{
lean_object* v_val_5015_; lean_object* v_hName_5017_; lean_object* v___y_5018_; lean_object* v___y_5019_; lean_object* v___y_5020_; lean_object* v___y_5021_; 
lean_dec(v_a_5012_);
v_val_5015_ = lean_ctor_get(v_a_5014_, 0);
lean_inc(v_val_5015_);
lean_dec_ref_known(v_a_5014_, 1);
if (lean_obj_tag(v_hName_x3f_4951_) == 0)
{
lean_object* v___x_5072_; lean_object* v___x_5073_; 
v___x_5072_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1));
v___x_5073_ = l_Lean_Core_mkFreshUserName(v___x_5072_, v___y_4954_, v___y_4955_);
if (lean_obj_tag(v___x_5073_) == 0)
{
lean_object* v_a_5074_; 
v_a_5074_ = lean_ctor_get(v___x_5073_, 0);
lean_inc(v_a_5074_);
lean_dec_ref_known(v___x_5073_, 1);
v_hName_5017_ = v_a_5074_;
v___y_5018_ = v___y_4952_;
v___y_5019_ = v___y_4953_;
v___y_5020_ = v___y_4954_;
v___y_5021_ = v___y_4955_;
goto v___jp_5016_;
}
else
{
lean_object* v_a_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5082_; 
lean_dec(v_val_5015_);
lean_dec(v_mvarId_4949_);
v_a_5075_ = lean_ctor_get(v___x_5073_, 0);
v_isSharedCheck_5082_ = !lean_is_exclusive(v___x_5073_);
if (v_isSharedCheck_5082_ == 0)
{
v___x_5077_ = v___x_5073_;
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_a_5075_);
lean_dec(v___x_5073_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
lean_object* v___x_5080_; 
if (v_isShared_5078_ == 0)
{
v___x_5080_ = v___x_5077_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v_a_5075_);
v___x_5080_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
return v___x_5080_;
}
}
}
}
else
{
lean_object* v_val_5083_; 
v_val_5083_ = lean_ctor_get(v_hName_x3f_4951_, 0);
lean_inc(v_val_5083_);
lean_dec_ref_known(v_hName_x3f_4951_, 1);
v_hName_5017_ = v_val_5083_;
v___y_5018_ = v___y_4952_;
v___y_5019_ = v___y_4953_;
v___y_5020_ = v___y_4954_;
v___y_5021_ = v___y_4955_;
goto v___jp_5016_;
}
v___jp_5016_:
{
if (lean_obj_tag(v_val_5015_) == 0)
{
lean_object* v_toCold_5022_; lean_object* v_options_5023_; uint8_t v_hasTrace_5024_; 
v_toCold_5022_ = lean_ctor_get(v___y_5020_, 0);
v_options_5023_ = lean_ctor_get(v_toCold_5022_, 2);
v_hasTrace_5024_ = lean_ctor_get_uint8(v_options_5023_, sizeof(void*)*1);
if (v_hasTrace_5024_ == 0)
{
lean_object* v_cond_5025_; lean_object* v_dec_5026_; 
v_cond_5025_ = lean_ctor_get(v_val_5015_, 0);
lean_inc_ref(v_cond_5025_);
v_dec_5026_ = lean_ctor_get(v_val_5015_, 1);
lean_inc_ref(v_dec_5026_);
lean_dec_ref_known(v_val_5015_, 2);
v___y_4961_ = v_dec_5026_;
v___y_4962_ = v_hName_5017_;
v___y_4963_ = v_cond_5025_;
v___y_4964_ = v___y_5018_;
v___y_4965_ = v___y_5019_;
v___y_4966_ = v___y_5020_;
v___y_4967_ = v___y_5021_;
goto v___jp_4960_;
}
else
{
lean_object* v_cond_5027_; lean_object* v_dec_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5050_; 
v_cond_5027_ = lean_ctor_get(v_val_5015_, 0);
v_dec_5028_ = lean_ctor_get(v_val_5015_, 1);
v_isSharedCheck_5050_ = !lean_is_exclusive(v_val_5015_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5030_ = v_val_5015_;
v_isShared_5031_ = v_isSharedCheck_5050_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_dec_5028_);
lean_inc(v_cond_5027_);
lean_dec(v_val_5015_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5050_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v_inheritedTraceOptions_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; uint8_t v___x_5035_; 
v_inheritedTraceOptions_5032_ = lean_ctor_get(v_toCold_5022_, 11);
v___x_5033_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16));
v___x_5034_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17);
v___x_5035_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5032_, v_options_5023_, v___x_5034_);
if (v___x_5035_ == 0)
{
lean_del_object(v___x_5030_);
v___y_4961_ = v_dec_5028_;
v___y_4962_ = v_hName_5017_;
v___y_4963_ = v_cond_5027_;
v___y_4964_ = v___y_5018_;
v___y_4965_ = v___y_5019_;
v___y_4966_ = v___y_5020_;
v___y_4967_ = v___y_5021_;
goto v___jp_4960_;
}
else
{
lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5039_; 
v___x_5036_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1);
lean_inc_ref(v_dec_5028_);
v___x_5037_ = l_Lean_MessageData_ofExpr(v_dec_5028_);
if (v_isShared_5031_ == 0)
{
lean_ctor_set_tag(v___x_5030_, 7);
lean_ctor_set(v___x_5030_, 1, v___x_5037_);
lean_ctor_set(v___x_5030_, 0, v___x_5036_);
v___x_5039_ = v___x_5030_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v___x_5036_);
lean_ctor_set(v_reuseFailAlloc_5049_, 1, v___x_5037_);
v___x_5039_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
lean_object* v___x_5040_; 
v___x_5040_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_5033_, v___x_5039_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_);
if (lean_obj_tag(v___x_5040_) == 0)
{
lean_dec_ref_known(v___x_5040_, 1);
v___y_4961_ = v_dec_5028_;
v___y_4962_ = v_hName_5017_;
v___y_4963_ = v_cond_5027_;
v___y_4964_ = v___y_5018_;
v___y_4965_ = v___y_5019_;
v___y_4966_ = v___y_5020_;
v___y_4967_ = v___y_5021_;
goto v___jp_4960_;
}
else
{
lean_object* v_a_5041_; lean_object* v___x_5043_; uint8_t v_isShared_5044_; uint8_t v_isSharedCheck_5048_; 
lean_dec_ref(v_dec_5028_);
lean_dec_ref(v_cond_5027_);
lean_dec(v_hName_5017_);
lean_dec(v_mvarId_4949_);
v_a_5041_ = lean_ctor_get(v___x_5040_, 0);
v_isSharedCheck_5048_ = !lean_is_exclusive(v___x_5040_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_5043_ = v___x_5040_;
v_isShared_5044_ = v_isSharedCheck_5048_;
goto v_resetjp_5042_;
}
else
{
lean_inc(v_a_5041_);
lean_dec(v___x_5040_);
v___x_5043_ = lean_box(0);
v_isShared_5044_ = v_isSharedCheck_5048_;
goto v_resetjp_5042_;
}
v_resetjp_5042_:
{
lean_object* v___x_5046_; 
if (v_isShared_5044_ == 0)
{
v___x_5046_ = v___x_5043_;
goto v_reusejp_5045_;
}
else
{
lean_object* v_reuseFailAlloc_5047_; 
v_reuseFailAlloc_5047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5047_, 0, v_a_5041_);
v___x_5046_ = v_reuseFailAlloc_5047_;
goto v_reusejp_5045_;
}
v_reusejp_5045_:
{
return v___x_5046_;
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
lean_object* v_toCold_5051_; lean_object* v_options_5052_; uint8_t v_hasTrace_5053_; 
v_toCold_5051_ = lean_ctor_get(v___y_5020_, 0);
v_options_5052_ = lean_ctor_get(v_toCold_5051_, 2);
v_hasTrace_5053_ = lean_ctor_get_uint8(v_options_5052_, sizeof(void*)*1);
if (v_hasTrace_5053_ == 0)
{
lean_object* v_b_5054_; 
v_b_5054_ = lean_ctor_get(v_val_5015_, 0);
lean_inc_ref(v_b_5054_);
lean_dec_ref_known(v_val_5015_, 1);
v___y_4987_ = v_b_5054_;
v___y_4988_ = v_hName_5017_;
v___y_4989_ = v___y_5018_;
v___y_4990_ = v___y_5019_;
v___y_4991_ = v___y_5020_;
v___y_4992_ = v___y_5021_;
goto v___jp_4986_;
}
else
{
lean_object* v_b_5055_; lean_object* v_inheritedTraceOptions_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; uint8_t v___x_5059_; 
v_b_5055_ = lean_ctor_get(v_val_5015_, 0);
lean_inc_ref(v_b_5055_);
lean_dec_ref_known(v_val_5015_, 1);
v_inheritedTraceOptions_5056_ = lean_ctor_get(v_toCold_5051_, 11);
v___x_5057_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16));
v___x_5058_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17);
v___x_5059_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5056_, v_options_5052_, v___x_5058_);
if (v___x_5059_ == 0)
{
v___y_4987_ = v_b_5055_;
v___y_4988_ = v_hName_5017_;
v___y_4989_ = v___y_5018_;
v___y_4990_ = v___y_5019_;
v___y_4991_ = v___y_5020_;
v___y_4992_ = v___y_5021_;
goto v___jp_4986_;
}
else
{
lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; 
v___x_5060_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3);
lean_inc_ref(v_b_5055_);
v___x_5061_ = l_Lean_MessageData_ofExpr(v_b_5055_);
v___x_5062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5060_);
lean_ctor_set(v___x_5062_, 1, v___x_5061_);
v___x_5063_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_5057_, v___x_5062_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_dec_ref_known(v___x_5063_, 1);
v___y_4987_ = v_b_5055_;
v___y_4988_ = v_hName_5017_;
v___y_4989_ = v___y_5018_;
v___y_4990_ = v___y_5019_;
v___y_4991_ = v___y_5020_;
v___y_4992_ = v___y_5021_;
goto v___jp_4986_;
}
else
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5071_; 
lean_dec_ref(v_b_5055_);
lean_dec(v_hName_5017_);
lean_dec(v_mvarId_4949_);
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5071_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5071_ == 0)
{
v___x_5066_ = v___x_5063_;
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5063_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___x_5069_; 
if (v_isShared_5067_ == 0)
{
v___x_5069_ = v___x_5066_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v_a_5064_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
return v___x_5069_;
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
lean_object* v_toCold_5084_; lean_object* v_options_5085_; uint8_t v_hasTrace_5086_; 
lean_dec(v_a_5014_);
lean_dec(v_hName_x3f_4951_);
lean_dec(v_mvarId_4949_);
v_toCold_5084_ = lean_ctor_get(v___y_4954_, 0);
v_options_5085_ = lean_ctor_get(v_toCold_5084_, 2);
v_hasTrace_5086_ = lean_ctor_get_uint8(v_options_5085_, sizeof(void*)*1);
if (v_hasTrace_5086_ == 0)
{
lean_dec(v_a_5012_);
goto v___jp_4957_;
}
else
{
lean_object* v_inheritedTraceOptions_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; uint8_t v___x_5090_; 
v_inheritedTraceOptions_5087_ = lean_ctor_get(v_toCold_5084_, 11);
v___x_5088_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16));
v___x_5089_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__17);
v___x_5090_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5087_, v_options_5085_, v___x_5089_);
if (v___x_5090_ == 0)
{
lean_dec(v_a_5012_);
goto v___jp_4957_;
}
else
{
lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; 
v___x_5091_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__5, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__5_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__5);
v___x_5092_ = l_Lean_indentExpr(v_a_5012_);
v___x_5093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5091_);
lean_ctor_set(v___x_5093_, 1, v___x_5092_);
v___x_5094_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_5088_, v___x_5093_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_);
if (lean_obj_tag(v___x_5094_) == 0)
{
lean_dec_ref_known(v___x_5094_, 1);
goto v___jp_4957_;
}
else
{
lean_object* v_a_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5102_; 
v_a_5095_ = lean_ctor_get(v___x_5094_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v___x_5094_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5097_ = v___x_5094_;
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_a_5095_);
lean_dec(v___x_5094_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5100_; 
if (v_isShared_5098_ == 0)
{
v___x_5100_ = v___x_5097_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_a_5095_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
return v___x_5100_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5110_; 
lean_dec(v_a_5012_);
lean_dec(v_hName_x3f_4951_);
lean_dec(v_mvarId_4949_);
v_a_5103_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5105_ = v___x_5013_;
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v___x_5013_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v___x_5108_; 
if (v_isShared_5106_ == 0)
{
v___x_5108_ = v___x_5105_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5103_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
return v___x_5108_;
}
}
}
v___jp_4957_:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; 
v___x_4958_ = lean_box(0);
v___x_4959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4959_, 0, v___x_4958_);
return v___x_4959_;
}
v___jp_4960_:
{
lean_object* v___x_4968_; 
v___x_4968_ = l_Lean_MVarId_byCasesDec(v_mvarId_4949_, v___y_4963_, v___y_4961_, v___y_4962_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_);
if (lean_obj_tag(v___x_4968_) == 0)
{
lean_object* v_a_4969_; lean_object* v___x_4971_; uint8_t v_isShared_4972_; uint8_t v_isSharedCheck_4977_; 
v_a_4969_ = lean_ctor_get(v___x_4968_, 0);
v_isSharedCheck_4977_ = !lean_is_exclusive(v___x_4968_);
if (v_isSharedCheck_4977_ == 0)
{
v___x_4971_ = v___x_4968_;
v_isShared_4972_ = v_isSharedCheck_4977_;
goto v_resetjp_4970_;
}
else
{
lean_inc(v_a_4969_);
lean_dec(v___x_4968_);
v___x_4971_ = lean_box(0);
v_isShared_4972_ = v_isSharedCheck_4977_;
goto v_resetjp_4970_;
}
v_resetjp_4970_:
{
lean_object* v___x_4973_; lean_object* v___x_4975_; 
v___x_4973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4973_, 0, v_a_4969_);
if (v_isShared_4972_ == 0)
{
lean_ctor_set(v___x_4971_, 0, v___x_4973_);
v___x_4975_ = v___x_4971_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4976_; 
v_reuseFailAlloc_4976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4976_, 0, v___x_4973_);
v___x_4975_ = v_reuseFailAlloc_4976_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
return v___x_4975_;
}
}
}
else
{
lean_object* v_a_4978_; lean_object* v___x_4980_; uint8_t v_isShared_4981_; uint8_t v_isSharedCheck_4985_; 
v_a_4978_ = lean_ctor_get(v___x_4968_, 0);
v_isSharedCheck_4985_ = !lean_is_exclusive(v___x_4968_);
if (v_isSharedCheck_4985_ == 0)
{
v___x_4980_ = v___x_4968_;
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
else
{
lean_inc(v_a_4978_);
lean_dec(v___x_4968_);
v___x_4980_ = lean_box(0);
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
v_resetjp_4979_:
{
lean_object* v___x_4983_; 
if (v_isShared_4981_ == 0)
{
v___x_4983_ = v___x_4980_;
goto v_reusejp_4982_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v_a_4978_);
v___x_4983_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4982_;
}
v_reusejp_4982_:
{
return v___x_4983_;
}
}
}
}
v___jp_4986_:
{
lean_object* v___x_4993_; 
v___x_4993_ = l_Lean_MVarId_byCasesBool(v_mvarId_4949_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_);
if (lean_obj_tag(v___x_4993_) == 0)
{
lean_object* v_a_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5002_; 
v_a_4994_ = lean_ctor_get(v___x_4993_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v___x_4993_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4996_ = v___x_4993_;
v_isShared_4997_ = v_isSharedCheck_5002_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_a_4994_);
lean_dec(v___x_4993_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5002_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4998_; lean_object* v___x_5000_; 
v___x_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4998_, 0, v_a_4994_);
if (v_isShared_4997_ == 0)
{
lean_ctor_set(v___x_4996_, 0, v___x_4998_);
v___x_5000_ = v___x_4996_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5001_; 
v_reuseFailAlloc_5001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v___x_4998_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
return v___x_5000_;
}
}
}
else
{
lean_object* v_a_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5010_; 
v_a_5003_ = lean_ctor_get(v___x_4993_, 0);
v_isSharedCheck_5010_ = !lean_is_exclusive(v___x_4993_);
if (v_isSharedCheck_5010_ == 0)
{
v___x_5005_ = v___x_4993_;
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_a_5003_);
lean_dec(v___x_4993_);
v___x_5005_ = lean_box(0);
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
v_resetjp_5004_:
{
lean_object* v___x_5008_; 
if (v_isShared_5006_ == 0)
{
v___x_5008_ = v___x_5005_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v_a_5003_);
v___x_5008_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
return v___x_5008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed(lean_object* v_mvarId_5111_, lean_object* v_e_5112_, lean_object* v_hName_x3f_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v_res_5119_; 
v_res_5119_ = l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(v_mvarId_5111_, v_e_5112_, v_hName_x3f_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_);
lean_dec(v___y_5117_);
lean_dec_ref(v___y_5116_);
lean_dec(v___y_5115_);
lean_dec_ref(v___y_5114_);
return v_res_5119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f(lean_object* v_mvarId_5120_, lean_object* v_e_5121_, lean_object* v_hName_x3f_5122_, lean_object* v_a_5123_, lean_object* v_a_5124_, lean_object* v_a_5125_, lean_object* v_a_5126_){
_start:
{
lean_object* v___f_5128_; lean_object* v___x_5129_; 
lean_inc(v_mvarId_5120_);
v___f_5128_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_5128_, 0, v_mvarId_5120_);
lean_closure_set(v___f_5128_, 1, v_e_5121_);
lean_closure_set(v___f_5128_, 2, v_hName_x3f_5122_);
v___x_5129_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_5120_, v___f_5128_, v_a_5123_, v_a_5124_, v_a_5125_, v_a_5126_);
return v___x_5129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___boxed(lean_object* v_mvarId_5130_, lean_object* v_e_5131_, lean_object* v_hName_x3f_5132_, lean_object* v_a_5133_, lean_object* v_a_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_a_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_5130_, v_e_5131_, v_hName_x3f_5132_, v_a_5133_, v_a_5134_, v_a_5135_, v_a_5136_);
lean_dec(v_a_5136_);
lean_dec_ref(v_a_5135_);
lean_dec(v_a_5134_);
lean_dec_ref(v_a_5133_);
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_){
_start:
{
lean_object* v_lctx_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
v_lctx_5144_ = lean_ctor_get(v___y_5139_, 2);
lean_inc_ref(v_lctx_5144_);
lean_dec_ref(v___y_5139_);
v___x_5145_ = lean_local_ctx_num_indices(v_lctx_5144_);
v___x_5146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5146_, 0, v___x_5145_);
return v___x_5146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed(lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_);
lean_dec(v___y_5150_);
lean_dec_ref(v___y_5149_);
lean_dec(v___y_5148_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(lean_object* v_mvarId_5154_, lean_object* v_a_5155_, lean_object* v_a_5156_, lean_object* v_a_5157_, lean_object* v_a_5158_){
_start:
{
lean_object* v___f_5160_; lean_object* v___x_5161_; 
v___f_5160_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0));
v___x_5161_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_5154_, v___f_5160_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___boxed(lean_object* v_mvarId_5162_, lean_object* v_a_5163_, lean_object* v_a_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_){
_start:
{
lean_object* v_res_5168_; 
v_res_5168_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_5162_, v_a_5163_, v_a_5164_, v_a_5165_, v_a_5166_);
lean_dec(v_a_5166_);
lean_dec_ref(v_a_5165_);
lean_dec(v_a_5164_);
lean_dec_ref(v_a_5163_);
return v_res_5168_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0(lean_object* v_msg_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v___f_5176_; lean_object* v___x_1613__overap_5177_; lean_object* v___x_5178_; 
v___f_5176_ = ((lean_object*)(l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0));
v___x_1613__overap_5177_ = lean_panic_fn_borrowed(v___f_5176_, v_msg_5170_);
lean_inc(v___y_5174_);
lean_inc_ref(v___y_5173_);
lean_inc(v___y_5172_);
lean_inc_ref(v___y_5171_);
v___x_5178_ = lean_apply_5(v___x_1613__overap_5177_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, lean_box(0));
return v___x_5178_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___boxed(lean_object* v_msg_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_, lean_object* v___y_5184_){
_start:
{
lean_object* v_res_5185_; 
v_res_5185_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v_msg_5179_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
lean_dec(v___y_5183_);
lean_dec_ref(v___y_5182_);
lean_dec(v___y_5181_);
lean_dec_ref(v___y_5180_);
return v_res_5185_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(lean_object* v_opts_5186_, lean_object* v_opt_5187_){
_start:
{
lean_object* v_name_5188_; lean_object* v_defValue_5189_; lean_object* v_map_5190_; lean_object* v___x_5191_; 
v_name_5188_ = lean_ctor_get(v_opt_5187_, 0);
v_defValue_5189_ = lean_ctor_get(v_opt_5187_, 1);
v_map_5190_ = lean_ctor_get(v_opts_5186_, 0);
v___x_5191_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5190_, v_name_5188_);
if (lean_obj_tag(v___x_5191_) == 0)
{
uint8_t v___x_5192_; 
v___x_5192_ = lean_unbox(v_defValue_5189_);
return v___x_5192_;
}
else
{
lean_object* v_val_5193_; 
v_val_5193_ = lean_ctor_get(v___x_5191_, 0);
lean_inc(v_val_5193_);
lean_dec_ref_known(v___x_5191_, 1);
if (lean_obj_tag(v_val_5193_) == 1)
{
uint8_t v_v_5194_; 
v_v_5194_ = lean_ctor_get_uint8(v_val_5193_, 0);
lean_dec_ref_known(v_val_5193_, 0);
return v_v_5194_;
}
else
{
uint8_t v___x_5195_; 
lean_dec(v_val_5193_);
v___x_5195_ = lean_unbox(v_defValue_5189_);
return v___x_5195_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1___boxed(lean_object* v_opts_5196_, lean_object* v_opt_5197_){
_start:
{
uint8_t v_res_5198_; lean_object* v_r_5199_; 
v_res_5198_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v_opts_5196_, v_opt_5197_);
lean_dec_ref(v_opt_5197_);
lean_dec_ref(v_opts_5196_);
v_r_5199_ = lean_box(v_res_5198_);
return v_r_5199_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__0(void){
_start:
{
lean_object* v___x_5200_; lean_object* v___x_5201_; 
v___x_5200_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_5201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5201_, 0, v___x_5200_);
return v___x_5201_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__1(void){
_start:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; 
v___x_5202_ = lean_unsigned_to_nat(0u);
v___x_5203_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__0, &l_Lean_Meta_simpIfTarget___closed__0_once, _init_l_Lean_Meta_simpIfTarget___closed__0);
v___x_5204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5204_, 0, v___x_5203_);
lean_ctor_set(v___x_5204_, 1, v___x_5202_);
return v___x_5204_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__2(void){
_start:
{
lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; 
v___x_5205_ = lean_unsigned_to_nat(32u);
v___x_5206_ = lean_mk_empty_array_with_capacity(v___x_5205_);
v___x_5207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5207_, 0, v___x_5206_);
return v___x_5207_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__3(void){
_start:
{
size_t v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; 
v___x_5208_ = ((size_t)5ULL);
v___x_5209_ = lean_unsigned_to_nat(0u);
v___x_5210_ = lean_unsigned_to_nat(32u);
v___x_5211_ = lean_mk_empty_array_with_capacity(v___x_5210_);
v___x_5212_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__2, &l_Lean_Meta_simpIfTarget___closed__2_once, _init_l_Lean_Meta_simpIfTarget___closed__2);
v___x_5213_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5213_, 0, v___x_5212_);
lean_ctor_set(v___x_5213_, 1, v___x_5211_);
lean_ctor_set(v___x_5213_, 2, v___x_5209_);
lean_ctor_set(v___x_5213_, 3, v___x_5209_);
lean_ctor_set_usize(v___x_5213_, 4, v___x_5208_);
return v___x_5213_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__4(void){
_start:
{
lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; 
v___x_5214_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__3, &l_Lean_Meta_simpIfTarget___closed__3_once, _init_l_Lean_Meta_simpIfTarget___closed__3);
v___x_5215_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__0, &l_Lean_Meta_simpIfTarget___closed__0_once, _init_l_Lean_Meta_simpIfTarget___closed__0);
v___x_5216_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5215_);
lean_ctor_set(v___x_5216_, 1, v___x_5215_);
lean_ctor_set(v___x_5216_, 2, v___x_5215_);
lean_ctor_set(v___x_5216_, 3, v___x_5214_);
return v___x_5216_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__5(void){
_start:
{
lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; 
v___x_5217_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__4, &l_Lean_Meta_simpIfTarget___closed__4_once, _init_l_Lean_Meta_simpIfTarget___closed__4);
v___x_5218_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__1, &l_Lean_Meta_simpIfTarget___closed__1_once, _init_l_Lean_Meta_simpIfTarget___closed__1);
v___x_5219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5219_, 0, v___x_5218_);
lean_ctor_set(v___x_5219_, 1, v___x_5217_);
return v___x_5219_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__9(void){
_start:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
v___x_5223_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_5224_ = lean_unsigned_to_nat(78u);
v___x_5225_ = lean_unsigned_to_nat(496u);
v___x_5226_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__7));
v___x_5227_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_5228_ = l_mkPanicMessageWithDecl(v___x_5227_, v___x_5226_, v___x_5225_, v___x_5224_, v___x_5223_);
return v___x_5228_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__11(void){
_start:
{
lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5231_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_5232_ = lean_unsigned_to_nat(128u);
v___x_5233_ = lean_unsigned_to_nat(500u);
v___x_5234_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__7));
v___x_5235_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_5236_ = l_mkPanicMessageWithDecl(v___x_5235_, v___x_5234_, v___x_5233_, v___x_5232_, v___x_5231_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget(lean_object* v_mvarId_5237_, uint8_t v_useDecide_5238_, uint8_t v_useNewSemantics_5239_, lean_object* v_a_5240_, lean_object* v_a_5241_, lean_object* v_a_5242_, lean_object* v_a_5243_){
_start:
{
if (v_useNewSemantics_5239_ == 0)
{
lean_object* v___x_5292_; lean_object* v___x_5293_; uint8_t v___x_5294_; 
v___x_5292_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_5242_);
v___x_5293_ = l_Lean_Meta_backward_split;
v___x_5294_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v___x_5292_, v___x_5293_);
lean_dec_ref(v___x_5292_);
if (v___x_5294_ == 0)
{
goto v___jp_5245_;
}
else
{
lean_object* v___x_5295_; 
v___x_5295_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
if (lean_obj_tag(v___x_5295_) == 0)
{
lean_object* v_a_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; 
v_a_5296_ = lean_ctor_get(v___x_5295_, 0);
lean_inc(v_a_5296_);
lean_dec_ref_known(v___x_5295_, 1);
v___x_5297_ = lean_box(v_useDecide_5238_);
v___x_5298_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed), 6, 1);
lean_closure_set(v___x_5298_, 0, v___x_5297_);
lean_inc(v_mvarId_5237_);
v___x_5299_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_5237_, v___x_5298_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
if (lean_obj_tag(v___x_5299_) == 0)
{
lean_object* v_a_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v_a_5300_ = lean_ctor_get(v___x_5299_, 0);
lean_inc(v_a_5300_);
lean_dec_ref_known(v___x_5299_, 1);
v___x_5301_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__10));
v___x_5302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5302_, 0, v_a_5300_);
v___x_5303_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_5304_ = l_Lean_Meta_simpTarget(v_mvarId_5237_, v_a_5296_, v___x_5301_, v___x_5302_, v_useNewSemantics_5239_, v___x_5303_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
if (lean_obj_tag(v___x_5304_) == 0)
{
lean_object* v_a_5305_; lean_object* v___x_5307_; uint8_t v_isShared_5308_; uint8_t v_isSharedCheck_5316_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5316_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5316_ == 0)
{
v___x_5307_ = v___x_5304_;
v_isShared_5308_ = v_isSharedCheck_5316_;
goto v_resetjp_5306_;
}
else
{
lean_inc(v_a_5305_);
lean_dec(v___x_5304_);
v___x_5307_ = lean_box(0);
v_isShared_5308_ = v_isSharedCheck_5316_;
goto v_resetjp_5306_;
}
v_resetjp_5306_:
{
lean_object* v_fst_5309_; 
v_fst_5309_ = lean_ctor_get(v_a_5305_, 0);
lean_inc(v_fst_5309_);
lean_dec(v_a_5305_);
if (lean_obj_tag(v_fst_5309_) == 1)
{
lean_object* v_val_5310_; lean_object* v___x_5312_; 
v_val_5310_ = lean_ctor_get(v_fst_5309_, 0);
lean_inc(v_val_5310_);
lean_dec_ref_known(v_fst_5309_, 1);
if (v_isShared_5308_ == 0)
{
lean_ctor_set(v___x_5307_, 0, v_val_5310_);
v___x_5312_ = v___x_5307_;
goto v_reusejp_5311_;
}
else
{
lean_object* v_reuseFailAlloc_5313_; 
v_reuseFailAlloc_5313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5313_, 0, v_val_5310_);
v___x_5312_ = v_reuseFailAlloc_5313_;
goto v_reusejp_5311_;
}
v_reusejp_5311_:
{
return v___x_5312_;
}
}
else
{
lean_object* v___x_5314_; lean_object* v___x_5315_; 
lean_dec(v_fst_5309_);
lean_del_object(v___x_5307_);
v___x_5314_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__11, &l_Lean_Meta_simpIfTarget___closed__11_once, _init_l_Lean_Meta_simpIfTarget___closed__11);
v___x_5315_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_5314_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
return v___x_5315_;
}
}
}
else
{
lean_object* v_a_5317_; lean_object* v___x_5319_; uint8_t v_isShared_5320_; uint8_t v_isSharedCheck_5324_; 
v_a_5317_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5319_ = v___x_5304_;
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
else
{
lean_inc(v_a_5317_);
lean_dec(v___x_5304_);
v___x_5319_ = lean_box(0);
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
v_resetjp_5318_:
{
lean_object* v___x_5322_; 
if (v_isShared_5320_ == 0)
{
v___x_5322_ = v___x_5319_;
goto v_reusejp_5321_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v_a_5317_);
v___x_5322_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5321_;
}
v_reusejp_5321_:
{
return v___x_5322_;
}
}
}
}
else
{
lean_object* v_a_5325_; lean_object* v___x_5327_; uint8_t v_isShared_5328_; uint8_t v_isSharedCheck_5332_; 
lean_dec(v_a_5296_);
lean_dec(v_mvarId_5237_);
v_a_5325_ = lean_ctor_get(v___x_5299_, 0);
v_isSharedCheck_5332_ = !lean_is_exclusive(v___x_5299_);
if (v_isSharedCheck_5332_ == 0)
{
v___x_5327_ = v___x_5299_;
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
else
{
lean_inc(v_a_5325_);
lean_dec(v___x_5299_);
v___x_5327_ = lean_box(0);
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
v_resetjp_5326_:
{
lean_object* v___x_5330_; 
if (v_isShared_5328_ == 0)
{
v___x_5330_ = v___x_5327_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v_a_5325_);
v___x_5330_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
return v___x_5330_;
}
}
}
}
else
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5340_; 
lean_dec(v_mvarId_5237_);
v_a_5333_ = lean_ctor_get(v___x_5295_, 0);
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5295_);
if (v_isSharedCheck_5340_ == 0)
{
v___x_5335_ = v___x_5295_;
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v___x_5295_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5338_; 
if (v_isShared_5336_ == 0)
{
v___x_5338_ = v___x_5335_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v_a_5333_);
v___x_5338_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
return v___x_5338_;
}
}
}
}
}
else
{
goto v___jp_5245_;
}
v___jp_5245_:
{
lean_object* v___x_5246_; 
v___x_5246_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_5240_, v_a_5242_, v_a_5243_);
if (lean_obj_tag(v___x_5246_) == 0)
{
lean_object* v_a_5247_; lean_object* v___x_5248_; 
v_a_5247_ = lean_ctor_get(v___x_5246_, 0);
lean_inc(v_a_5247_);
lean_dec_ref_known(v___x_5246_, 1);
lean_inc(v_mvarId_5237_);
v___x_5248_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_5237_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
if (lean_obj_tag(v___x_5248_) == 0)
{
lean_object* v_a_5249_; lean_object* v___x_5250_; lean_object* v_a_5251_; lean_object* v___x_5252_; uint8_t v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; 
v_a_5249_ = lean_ctor_get(v___x_5248_, 0);
lean_inc(v_a_5249_);
lean_dec_ref_known(v___x_5248_, 1);
v___x_5250_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_a_5249_, v_useDecide_5238_);
v_a_5251_ = lean_ctor_get(v___x_5250_, 0);
lean_inc(v_a_5251_);
lean_dec_ref(v___x_5250_);
v___x_5252_ = lean_box(0);
v___x_5253_ = 0;
v___x_5254_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_5255_ = l_Lean_Meta_simpTarget(v_mvarId_5237_, v_a_5247_, v_a_5251_, v___x_5252_, v___x_5253_, v___x_5254_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_object* v_a_5256_; lean_object* v___x_5258_; uint8_t v_isShared_5259_; uint8_t v_isSharedCheck_5267_; 
v_a_5256_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5267_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5267_ == 0)
{
v___x_5258_ = v___x_5255_;
v_isShared_5259_ = v_isSharedCheck_5267_;
goto v_resetjp_5257_;
}
else
{
lean_inc(v_a_5256_);
lean_dec(v___x_5255_);
v___x_5258_ = lean_box(0);
v_isShared_5259_ = v_isSharedCheck_5267_;
goto v_resetjp_5257_;
}
v_resetjp_5257_:
{
lean_object* v_fst_5260_; 
v_fst_5260_ = lean_ctor_get(v_a_5256_, 0);
lean_inc(v_fst_5260_);
lean_dec(v_a_5256_);
if (lean_obj_tag(v_fst_5260_) == 1)
{
lean_object* v_val_5261_; lean_object* v___x_5263_; 
v_val_5261_ = lean_ctor_get(v_fst_5260_, 0);
lean_inc(v_val_5261_);
lean_dec_ref_known(v_fst_5260_, 1);
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 0, v_val_5261_);
v___x_5263_ = v___x_5258_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v_val_5261_);
v___x_5263_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
return v___x_5263_;
}
}
else
{
lean_object* v___x_5265_; lean_object* v___x_5266_; 
lean_dec(v_fst_5260_);
lean_del_object(v___x_5258_);
v___x_5265_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__9, &l_Lean_Meta_simpIfTarget___closed__9_once, _init_l_Lean_Meta_simpIfTarget___closed__9);
v___x_5266_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_5265_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_);
return v___x_5266_;
}
}
}
else
{
lean_object* v_a_5268_; lean_object* v___x_5270_; uint8_t v_isShared_5271_; uint8_t v_isSharedCheck_5275_; 
v_a_5268_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5275_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5275_ == 0)
{
v___x_5270_ = v___x_5255_;
v_isShared_5271_ = v_isSharedCheck_5275_;
goto v_resetjp_5269_;
}
else
{
lean_inc(v_a_5268_);
lean_dec(v___x_5255_);
v___x_5270_ = lean_box(0);
v_isShared_5271_ = v_isSharedCheck_5275_;
goto v_resetjp_5269_;
}
v_resetjp_5269_:
{
lean_object* v___x_5273_; 
if (v_isShared_5271_ == 0)
{
v___x_5273_ = v___x_5270_;
goto v_reusejp_5272_;
}
else
{
lean_object* v_reuseFailAlloc_5274_; 
v_reuseFailAlloc_5274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5274_, 0, v_a_5268_);
v___x_5273_ = v_reuseFailAlloc_5274_;
goto v_reusejp_5272_;
}
v_reusejp_5272_:
{
return v___x_5273_;
}
}
}
}
else
{
lean_object* v_a_5276_; lean_object* v___x_5278_; uint8_t v_isShared_5279_; uint8_t v_isSharedCheck_5283_; 
lean_dec(v_a_5247_);
lean_dec(v_mvarId_5237_);
v_a_5276_ = lean_ctor_get(v___x_5248_, 0);
v_isSharedCheck_5283_ = !lean_is_exclusive(v___x_5248_);
if (v_isSharedCheck_5283_ == 0)
{
v___x_5278_ = v___x_5248_;
v_isShared_5279_ = v_isSharedCheck_5283_;
goto v_resetjp_5277_;
}
else
{
lean_inc(v_a_5276_);
lean_dec(v___x_5248_);
v___x_5278_ = lean_box(0);
v_isShared_5279_ = v_isSharedCheck_5283_;
goto v_resetjp_5277_;
}
v_resetjp_5277_:
{
lean_object* v___x_5281_; 
if (v_isShared_5279_ == 0)
{
v___x_5281_ = v___x_5278_;
goto v_reusejp_5280_;
}
else
{
lean_object* v_reuseFailAlloc_5282_; 
v_reuseFailAlloc_5282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5282_, 0, v_a_5276_);
v___x_5281_ = v_reuseFailAlloc_5282_;
goto v_reusejp_5280_;
}
v_reusejp_5280_:
{
return v___x_5281_;
}
}
}
}
else
{
lean_object* v_a_5284_; lean_object* v___x_5286_; uint8_t v_isShared_5287_; uint8_t v_isSharedCheck_5291_; 
lean_dec(v_mvarId_5237_);
v_a_5284_ = lean_ctor_get(v___x_5246_, 0);
v_isSharedCheck_5291_ = !lean_is_exclusive(v___x_5246_);
if (v_isSharedCheck_5291_ == 0)
{
v___x_5286_ = v___x_5246_;
v_isShared_5287_ = v_isSharedCheck_5291_;
goto v_resetjp_5285_;
}
else
{
lean_inc(v_a_5284_);
lean_dec(v___x_5246_);
v___x_5286_ = lean_box(0);
v_isShared_5287_ = v_isSharedCheck_5291_;
goto v_resetjp_5285_;
}
v_resetjp_5285_:
{
lean_object* v___x_5289_; 
if (v_isShared_5287_ == 0)
{
v___x_5289_ = v___x_5286_;
goto v_reusejp_5288_;
}
else
{
lean_object* v_reuseFailAlloc_5290_; 
v_reuseFailAlloc_5290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5290_, 0, v_a_5284_);
v___x_5289_ = v_reuseFailAlloc_5290_;
goto v_reusejp_5288_;
}
v_reusejp_5288_:
{
return v___x_5289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget___boxed(lean_object* v_mvarId_5341_, lean_object* v_useDecide_5342_, lean_object* v_useNewSemantics_5343_, lean_object* v_a_5344_, lean_object* v_a_5345_, lean_object* v_a_5346_, lean_object* v_a_5347_, lean_object* v_a_5348_){
_start:
{
uint8_t v_useDecide_boxed_5349_; uint8_t v_useNewSemantics_boxed_5350_; lean_object* v_res_5351_; 
v_useDecide_boxed_5349_ = lean_unbox(v_useDecide_5342_);
v_useNewSemantics_boxed_5350_ = lean_unbox(v_useNewSemantics_5343_);
v_res_5351_ = l_Lean_Meta_simpIfTarget(v_mvarId_5341_, v_useDecide_boxed_5349_, v_useNewSemantics_boxed_5350_, v_a_5344_, v_a_5345_, v_a_5346_, v_a_5347_);
lean_dec(v_a_5347_);
lean_dec_ref(v_a_5346_);
lean_dec(v_a_5345_);
lean_dec_ref(v_a_5344_);
return v_res_5351_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfLocalDecl___closed__1(void){
_start:
{
lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; 
v___x_5353_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_5354_ = lean_unsigned_to_nat(93u);
v___x_5355_ = lean_unsigned_to_nat(512u);
v___x_5356_ = ((lean_object*)(l_Lean_Meta_simpIfLocalDecl___closed__0));
v___x_5357_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_5358_ = l_mkPanicMessageWithDecl(v___x_5357_, v___x_5356_, v___x_5355_, v___x_5354_, v___x_5353_);
return v___x_5358_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfLocalDecl___closed__2(void){
_start:
{
lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; 
v___x_5359_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_5360_ = lean_unsigned_to_nat(133u);
v___x_5361_ = lean_unsigned_to_nat(516u);
v___x_5362_ = ((lean_object*)(l_Lean_Meta_simpIfLocalDecl___closed__0));
v___x_5363_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_5364_ = l_mkPanicMessageWithDecl(v___x_5363_, v___x_5362_, v___x_5361_, v___x_5360_, v___x_5359_);
return v___x_5364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl(lean_object* v_mvarId_5365_, lean_object* v_fvarId_5366_, uint8_t v_useNewSemantics_5367_, lean_object* v_a_5368_, lean_object* v_a_5369_, lean_object* v_a_5370_, lean_object* v_a_5371_){
_start:
{
if (v_useNewSemantics_5367_ == 0)
{
lean_object* v___x_5421_; lean_object* v___x_5422_; uint8_t v___x_5423_; 
v___x_5421_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_5370_);
v___x_5422_ = l_Lean_Meta_backward_split;
v___x_5423_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v___x_5421_, v___x_5422_);
lean_dec_ref(v___x_5421_);
if (v___x_5423_ == 0)
{
goto v___jp_5373_;
}
else
{
lean_object* v___x_5424_; 
v___x_5424_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
if (lean_obj_tag(v___x_5424_) == 0)
{
lean_object* v_a_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
v_a_5425_ = lean_ctor_get(v___x_5424_, 0);
lean_inc(v_a_5425_);
lean_dec_ref_known(v___x_5424_, 1);
v___x_5426_ = lean_box(v_useNewSemantics_5367_);
v___x_5427_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed), 6, 1);
lean_closure_set(v___x_5427_, 0, v___x_5426_);
lean_inc(v_mvarId_5365_);
v___x_5428_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___redArg(v_mvarId_5365_, v___x_5427_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_object* v_a_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; 
v_a_5429_ = lean_ctor_get(v___x_5428_, 0);
lean_inc(v_a_5429_);
lean_dec_ref_known(v___x_5428_, 1);
v___x_5430_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__10));
v___x_5431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5431_, 0, v_a_5429_);
v___x_5432_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_5433_ = l_Lean_Meta_simpLocalDecl(v_mvarId_5365_, v_fvarId_5366_, v_a_5425_, v___x_5430_, v___x_5431_, v_useNewSemantics_5367_, v___x_5432_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
if (lean_obj_tag(v___x_5433_) == 0)
{
lean_object* v_a_5434_; lean_object* v___x_5436_; uint8_t v_isShared_5437_; uint8_t v_isSharedCheck_5446_; 
v_a_5434_ = lean_ctor_get(v___x_5433_, 0);
v_isSharedCheck_5446_ = !lean_is_exclusive(v___x_5433_);
if (v_isSharedCheck_5446_ == 0)
{
v___x_5436_ = v___x_5433_;
v_isShared_5437_ = v_isSharedCheck_5446_;
goto v_resetjp_5435_;
}
else
{
lean_inc(v_a_5434_);
lean_dec(v___x_5433_);
v___x_5436_ = lean_box(0);
v_isShared_5437_ = v_isSharedCheck_5446_;
goto v_resetjp_5435_;
}
v_resetjp_5435_:
{
lean_object* v_fst_5438_; 
v_fst_5438_ = lean_ctor_get(v_a_5434_, 0);
lean_inc(v_fst_5438_);
lean_dec(v_a_5434_);
if (lean_obj_tag(v_fst_5438_) == 1)
{
lean_object* v_val_5439_; lean_object* v_snd_5440_; lean_object* v___x_5442_; 
v_val_5439_ = lean_ctor_get(v_fst_5438_, 0);
lean_inc(v_val_5439_);
lean_dec_ref_known(v_fst_5438_, 1);
v_snd_5440_ = lean_ctor_get(v_val_5439_, 1);
lean_inc(v_snd_5440_);
lean_dec(v_val_5439_);
if (v_isShared_5437_ == 0)
{
lean_ctor_set(v___x_5436_, 0, v_snd_5440_);
v___x_5442_ = v___x_5436_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_snd_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
else
{
lean_object* v___x_5444_; lean_object* v___x_5445_; 
lean_dec(v_fst_5438_);
lean_del_object(v___x_5436_);
v___x_5444_ = lean_obj_once(&l_Lean_Meta_simpIfLocalDecl___closed__2, &l_Lean_Meta_simpIfLocalDecl___closed__2_once, _init_l_Lean_Meta_simpIfLocalDecl___closed__2);
v___x_5445_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_5444_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
return v___x_5445_;
}
}
}
else
{
lean_object* v_a_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5454_; 
v_a_5447_ = lean_ctor_get(v___x_5433_, 0);
v_isSharedCheck_5454_ = !lean_is_exclusive(v___x_5433_);
if (v_isSharedCheck_5454_ == 0)
{
v___x_5449_ = v___x_5433_;
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_a_5447_);
lean_dec(v___x_5433_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5452_; 
if (v_isShared_5450_ == 0)
{
v___x_5452_ = v___x_5449_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5453_; 
v_reuseFailAlloc_5453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5453_, 0, v_a_5447_);
v___x_5452_ = v_reuseFailAlloc_5453_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
return v___x_5452_;
}
}
}
}
else
{
lean_object* v_a_5455_; lean_object* v___x_5457_; uint8_t v_isShared_5458_; uint8_t v_isSharedCheck_5462_; 
lean_dec(v_a_5425_);
lean_dec(v_fvarId_5366_);
lean_dec(v_mvarId_5365_);
v_a_5455_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5462_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5462_ == 0)
{
v___x_5457_ = v___x_5428_;
v_isShared_5458_ = v_isSharedCheck_5462_;
goto v_resetjp_5456_;
}
else
{
lean_inc(v_a_5455_);
lean_dec(v___x_5428_);
v___x_5457_ = lean_box(0);
v_isShared_5458_ = v_isSharedCheck_5462_;
goto v_resetjp_5456_;
}
v_resetjp_5456_:
{
lean_object* v___x_5460_; 
if (v_isShared_5458_ == 0)
{
v___x_5460_ = v___x_5457_;
goto v_reusejp_5459_;
}
else
{
lean_object* v_reuseFailAlloc_5461_; 
v_reuseFailAlloc_5461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5461_, 0, v_a_5455_);
v___x_5460_ = v_reuseFailAlloc_5461_;
goto v_reusejp_5459_;
}
v_reusejp_5459_:
{
return v___x_5460_;
}
}
}
}
else
{
lean_object* v_a_5463_; lean_object* v___x_5465_; uint8_t v_isShared_5466_; uint8_t v_isSharedCheck_5470_; 
lean_dec(v_fvarId_5366_);
lean_dec(v_mvarId_5365_);
v_a_5463_ = lean_ctor_get(v___x_5424_, 0);
v_isSharedCheck_5470_ = !lean_is_exclusive(v___x_5424_);
if (v_isSharedCheck_5470_ == 0)
{
v___x_5465_ = v___x_5424_;
v_isShared_5466_ = v_isSharedCheck_5470_;
goto v_resetjp_5464_;
}
else
{
lean_inc(v_a_5463_);
lean_dec(v___x_5424_);
v___x_5465_ = lean_box(0);
v_isShared_5466_ = v_isSharedCheck_5470_;
goto v_resetjp_5464_;
}
v_resetjp_5464_:
{
lean_object* v___x_5468_; 
if (v_isShared_5466_ == 0)
{
v___x_5468_ = v___x_5465_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5469_; 
v_reuseFailAlloc_5469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5469_, 0, v_a_5463_);
v___x_5468_ = v_reuseFailAlloc_5469_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
return v___x_5468_;
}
}
}
}
}
else
{
goto v___jp_5373_;
}
v___jp_5373_:
{
lean_object* v___x_5374_; 
v___x_5374_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_5368_, v_a_5370_, v_a_5371_);
if (lean_obj_tag(v___x_5374_) == 0)
{
lean_object* v_a_5375_; lean_object* v___x_5376_; 
v_a_5375_ = lean_ctor_get(v___x_5374_, 0);
lean_inc(v_a_5375_);
lean_dec_ref_known(v___x_5374_, 1);
lean_inc(v_mvarId_5365_);
v___x_5376_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_5365_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
if (lean_obj_tag(v___x_5376_) == 0)
{
lean_object* v_a_5377_; uint8_t v___x_5378_; lean_object* v___x_5379_; lean_object* v_a_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; 
v_a_5377_ = lean_ctor_get(v___x_5376_, 0);
lean_inc(v_a_5377_);
lean_dec_ref_known(v___x_5376_, 1);
v___x_5378_ = 0;
v___x_5379_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_a_5377_, v___x_5378_);
v_a_5380_ = lean_ctor_get(v___x_5379_, 0);
lean_inc(v_a_5380_);
lean_dec_ref(v___x_5379_);
v___x_5381_ = lean_box(0);
v___x_5382_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_5383_ = l_Lean_Meta_simpLocalDecl(v_mvarId_5365_, v_fvarId_5366_, v_a_5375_, v_a_5380_, v___x_5381_, v___x_5378_, v___x_5382_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
if (lean_obj_tag(v___x_5383_) == 0)
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5396_; 
v_a_5384_ = lean_ctor_get(v___x_5383_, 0);
v_isSharedCheck_5396_ = !lean_is_exclusive(v___x_5383_);
if (v_isSharedCheck_5396_ == 0)
{
v___x_5386_ = v___x_5383_;
v_isShared_5387_ = v_isSharedCheck_5396_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v___x_5383_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5396_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v_fst_5388_; 
v_fst_5388_ = lean_ctor_get(v_a_5384_, 0);
lean_inc(v_fst_5388_);
lean_dec(v_a_5384_);
if (lean_obj_tag(v_fst_5388_) == 1)
{
lean_object* v_val_5389_; lean_object* v_snd_5390_; lean_object* v___x_5392_; 
v_val_5389_ = lean_ctor_get(v_fst_5388_, 0);
lean_inc(v_val_5389_);
lean_dec_ref_known(v_fst_5388_, 1);
v_snd_5390_ = lean_ctor_get(v_val_5389_, 1);
lean_inc(v_snd_5390_);
lean_dec(v_val_5389_);
if (v_isShared_5387_ == 0)
{
lean_ctor_set(v___x_5386_, 0, v_snd_5390_);
v___x_5392_ = v___x_5386_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v_snd_5390_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
return v___x_5392_;
}
}
else
{
lean_object* v___x_5394_; lean_object* v___x_5395_; 
lean_dec(v_fst_5388_);
lean_del_object(v___x_5386_);
v___x_5394_ = lean_obj_once(&l_Lean_Meta_simpIfLocalDecl___closed__1, &l_Lean_Meta_simpIfLocalDecl___closed__1_once, _init_l_Lean_Meta_simpIfLocalDecl___closed__1);
v___x_5395_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_5394_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
return v___x_5395_;
}
}
}
else
{
lean_object* v_a_5397_; lean_object* v___x_5399_; uint8_t v_isShared_5400_; uint8_t v_isSharedCheck_5404_; 
v_a_5397_ = lean_ctor_get(v___x_5383_, 0);
v_isSharedCheck_5404_ = !lean_is_exclusive(v___x_5383_);
if (v_isSharedCheck_5404_ == 0)
{
v___x_5399_ = v___x_5383_;
v_isShared_5400_ = v_isSharedCheck_5404_;
goto v_resetjp_5398_;
}
else
{
lean_inc(v_a_5397_);
lean_dec(v___x_5383_);
v___x_5399_ = lean_box(0);
v_isShared_5400_ = v_isSharedCheck_5404_;
goto v_resetjp_5398_;
}
v_resetjp_5398_:
{
lean_object* v___x_5402_; 
if (v_isShared_5400_ == 0)
{
v___x_5402_ = v___x_5399_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v_a_5397_);
v___x_5402_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
return v___x_5402_;
}
}
}
}
else
{
lean_object* v_a_5405_; lean_object* v___x_5407_; uint8_t v_isShared_5408_; uint8_t v_isSharedCheck_5412_; 
lean_dec(v_a_5375_);
lean_dec(v_fvarId_5366_);
lean_dec(v_mvarId_5365_);
v_a_5405_ = lean_ctor_get(v___x_5376_, 0);
v_isSharedCheck_5412_ = !lean_is_exclusive(v___x_5376_);
if (v_isSharedCheck_5412_ == 0)
{
v___x_5407_ = v___x_5376_;
v_isShared_5408_ = v_isSharedCheck_5412_;
goto v_resetjp_5406_;
}
else
{
lean_inc(v_a_5405_);
lean_dec(v___x_5376_);
v___x_5407_ = lean_box(0);
v_isShared_5408_ = v_isSharedCheck_5412_;
goto v_resetjp_5406_;
}
v_resetjp_5406_:
{
lean_object* v___x_5410_; 
if (v_isShared_5408_ == 0)
{
v___x_5410_ = v___x_5407_;
goto v_reusejp_5409_;
}
else
{
lean_object* v_reuseFailAlloc_5411_; 
v_reuseFailAlloc_5411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5411_, 0, v_a_5405_);
v___x_5410_ = v_reuseFailAlloc_5411_;
goto v_reusejp_5409_;
}
v_reusejp_5409_:
{
return v___x_5410_;
}
}
}
}
else
{
lean_object* v_a_5413_; lean_object* v___x_5415_; uint8_t v_isShared_5416_; uint8_t v_isSharedCheck_5420_; 
lean_dec(v_fvarId_5366_);
lean_dec(v_mvarId_5365_);
v_a_5413_ = lean_ctor_get(v___x_5374_, 0);
v_isSharedCheck_5420_ = !lean_is_exclusive(v___x_5374_);
if (v_isSharedCheck_5420_ == 0)
{
v___x_5415_ = v___x_5374_;
v_isShared_5416_ = v_isSharedCheck_5420_;
goto v_resetjp_5414_;
}
else
{
lean_inc(v_a_5413_);
lean_dec(v___x_5374_);
v___x_5415_ = lean_box(0);
v_isShared_5416_ = v_isSharedCheck_5420_;
goto v_resetjp_5414_;
}
v_resetjp_5414_:
{
lean_object* v___x_5418_; 
if (v_isShared_5416_ == 0)
{
v___x_5418_ = v___x_5415_;
goto v_reusejp_5417_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v_a_5413_);
v___x_5418_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5417_;
}
v_reusejp_5417_:
{
return v___x_5418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl___boxed(lean_object* v_mvarId_5471_, lean_object* v_fvarId_5472_, lean_object* v_useNewSemantics_5473_, lean_object* v_a_5474_, lean_object* v_a_5475_, lean_object* v_a_5476_, lean_object* v_a_5477_, lean_object* v_a_5478_){
_start:
{
uint8_t v_useNewSemantics_boxed_5479_; lean_object* v_res_5480_; 
v_useNewSemantics_boxed_5479_ = lean_unbox(v_useNewSemantics_5473_);
v_res_5480_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_5471_, v_fvarId_5472_, v_useNewSemantics_boxed_5479_, v_a_5474_, v_a_5475_, v_a_5476_, v_a_5477_);
lean_dec(v_a_5477_);
lean_dec_ref(v_a_5476_);
lean_dec(v_a_5475_);
lean_dec_ref(v_a_5474_);
return v_res_5480_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(lean_object* v_x_x3f_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_){
_start:
{
lean_object* v___x_5487_; 
v___x_5487_ = l_Lean_Meta_saveState___redArg(v___y_5483_, v___y_5485_);
if (lean_obj_tag(v___x_5487_) == 0)
{
lean_object* v_a_5488_; lean_object* v___x_5490_; uint8_t v_isShared_5491_; uint8_t v_isSharedCheck_5532_; 
v_a_5488_ = lean_ctor_get(v___x_5487_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5487_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5490_ = v___x_5487_;
v_isShared_5491_ = v_isSharedCheck_5532_;
goto v_resetjp_5489_;
}
else
{
lean_inc(v_a_5488_);
lean_dec(v___x_5487_);
v___x_5490_ = lean_box(0);
v_isShared_5491_ = v_isSharedCheck_5532_;
goto v_resetjp_5489_;
}
v_resetjp_5489_:
{
lean_object* v_a_5493_; lean_object* v___x_5519_; 
lean_inc(v___y_5485_);
lean_inc_ref(v___y_5484_);
lean_inc(v___y_5483_);
lean_inc_ref(v___y_5482_);
v___x_5519_ = lean_apply_5(v_x_x3f_5481_, v___y_5482_, v___y_5483_, v___y_5484_, v___y_5485_, lean_box(0));
if (lean_obj_tag(v___x_5519_) == 0)
{
lean_object* v_a_5520_; 
v_a_5520_ = lean_ctor_get(v___x_5519_, 0);
lean_inc(v_a_5520_);
if (lean_obj_tag(v_a_5520_) == 0)
{
lean_object* v___x_5521_; 
lean_dec_ref_known(v___x_5519_, 1);
lean_inc(v_a_5488_);
v___x_5521_ = l_Lean_Meta_SavedState_restore___redArg(v_a_5488_, v___y_5483_, v___y_5485_);
if (lean_obj_tag(v___x_5521_) == 0)
{
lean_object* v___x_5523_; uint8_t v_isShared_5524_; uint8_t v_isSharedCheck_5528_; 
lean_del_object(v___x_5490_);
lean_dec(v_a_5488_);
v_isSharedCheck_5528_ = !lean_is_exclusive(v___x_5521_);
if (v_isSharedCheck_5528_ == 0)
{
lean_object* v_unused_5529_; 
v_unused_5529_ = lean_ctor_get(v___x_5521_, 0);
lean_dec(v_unused_5529_);
v___x_5523_ = v___x_5521_;
v_isShared_5524_ = v_isSharedCheck_5528_;
goto v_resetjp_5522_;
}
else
{
lean_dec(v___x_5521_);
v___x_5523_ = lean_box(0);
v_isShared_5524_ = v_isSharedCheck_5528_;
goto v_resetjp_5522_;
}
v_resetjp_5522_:
{
lean_object* v___x_5526_; 
if (v_isShared_5524_ == 0)
{
lean_ctor_set(v___x_5523_, 0, v_a_5520_);
v___x_5526_ = v___x_5523_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5527_; 
v_reuseFailAlloc_5527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5527_, 0, v_a_5520_);
v___x_5526_ = v_reuseFailAlloc_5527_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
return v___x_5526_;
}
}
}
else
{
lean_object* v_a_5530_; 
v_a_5530_ = lean_ctor_get(v___x_5521_, 0);
lean_inc(v_a_5530_);
lean_dec_ref_known(v___x_5521_, 1);
v_a_5493_ = v_a_5530_;
goto v___jp_5492_;
}
}
else
{
lean_dec_ref_known(v_a_5520_, 1);
lean_del_object(v___x_5490_);
lean_dec(v_a_5488_);
return v___x_5519_;
}
}
else
{
lean_object* v_a_5531_; 
v_a_5531_ = lean_ctor_get(v___x_5519_, 0);
lean_inc(v_a_5531_);
lean_dec_ref_known(v___x_5519_, 1);
v_a_5493_ = v_a_5531_;
goto v___jp_5492_;
}
v___jp_5492_:
{
uint8_t v___x_5494_; 
v___x_5494_ = l_Lean_Exception_isInterrupt(v_a_5493_);
if (v___x_5494_ == 0)
{
uint8_t v___x_5495_; 
lean_inc_ref(v_a_5493_);
v___x_5495_ = l_Lean_Exception_isRuntime(v_a_5493_);
if (v___x_5495_ == 0)
{
lean_object* v___x_5496_; 
lean_del_object(v___x_5490_);
v___x_5496_ = l_Lean_Meta_SavedState_restore___redArg(v_a_5488_, v___y_5483_, v___y_5485_);
if (lean_obj_tag(v___x_5496_) == 0)
{
lean_object* v___x_5498_; uint8_t v_isShared_5499_; uint8_t v_isSharedCheck_5503_; 
v_isSharedCheck_5503_ = !lean_is_exclusive(v___x_5496_);
if (v_isSharedCheck_5503_ == 0)
{
lean_object* v_unused_5504_; 
v_unused_5504_ = lean_ctor_get(v___x_5496_, 0);
lean_dec(v_unused_5504_);
v___x_5498_ = v___x_5496_;
v_isShared_5499_ = v_isSharedCheck_5503_;
goto v_resetjp_5497_;
}
else
{
lean_dec(v___x_5496_);
v___x_5498_ = lean_box(0);
v_isShared_5499_ = v_isSharedCheck_5503_;
goto v_resetjp_5497_;
}
v_resetjp_5497_:
{
lean_object* v___x_5501_; 
if (v_isShared_5499_ == 0)
{
lean_ctor_set_tag(v___x_5498_, 1);
lean_ctor_set(v___x_5498_, 0, v_a_5493_);
v___x_5501_ = v___x_5498_;
goto v_reusejp_5500_;
}
else
{
lean_object* v_reuseFailAlloc_5502_; 
v_reuseFailAlloc_5502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5502_, 0, v_a_5493_);
v___x_5501_ = v_reuseFailAlloc_5502_;
goto v_reusejp_5500_;
}
v_reusejp_5500_:
{
return v___x_5501_;
}
}
}
else
{
lean_object* v_a_5505_; lean_object* v___x_5507_; uint8_t v_isShared_5508_; uint8_t v_isSharedCheck_5512_; 
lean_dec_ref(v_a_5493_);
v_a_5505_ = lean_ctor_get(v___x_5496_, 0);
v_isSharedCheck_5512_ = !lean_is_exclusive(v___x_5496_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5507_ = v___x_5496_;
v_isShared_5508_ = v_isSharedCheck_5512_;
goto v_resetjp_5506_;
}
else
{
lean_inc(v_a_5505_);
lean_dec(v___x_5496_);
v___x_5507_ = lean_box(0);
v_isShared_5508_ = v_isSharedCheck_5512_;
goto v_resetjp_5506_;
}
v_resetjp_5506_:
{
lean_object* v___x_5510_; 
if (v_isShared_5508_ == 0)
{
v___x_5510_ = v___x_5507_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_a_5505_);
v___x_5510_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
return v___x_5510_;
}
}
}
}
else
{
lean_object* v___x_5514_; 
lean_dec(v_a_5488_);
if (v_isShared_5491_ == 0)
{
lean_ctor_set_tag(v___x_5490_, 1);
lean_ctor_set(v___x_5490_, 0, v_a_5493_);
v___x_5514_ = v___x_5490_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5515_; 
v_reuseFailAlloc_5515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5515_, 0, v_a_5493_);
v___x_5514_ = v_reuseFailAlloc_5515_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
return v___x_5514_;
}
}
}
else
{
lean_object* v___x_5517_; 
lean_dec(v_a_5488_);
if (v_isShared_5491_ == 0)
{
lean_ctor_set_tag(v___x_5490_, 1);
lean_ctor_set(v___x_5490_, 0, v_a_5493_);
v___x_5517_ = v___x_5490_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5518_; 
v_reuseFailAlloc_5518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5518_, 0, v_a_5493_);
v___x_5517_ = v_reuseFailAlloc_5518_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
return v___x_5517_;
}
}
}
}
}
else
{
lean_object* v_a_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5540_; 
lean_dec_ref(v_x_x3f_5481_);
v_a_5533_ = lean_ctor_get(v___x_5487_, 0);
v_isSharedCheck_5540_ = !lean_is_exclusive(v___x_5487_);
if (v_isSharedCheck_5540_ == 0)
{
v___x_5535_ = v___x_5487_;
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_a_5533_);
lean_dec(v___x_5487_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_a_5533_);
v___x_5538_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
return v___x_5538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg___boxed(lean_object* v_x_x3f_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_){
_start:
{
lean_object* v_res_5547_; 
v_res_5547_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v_x_x3f_5541_, v___y_5542_, v___y_5543_, v___y_5544_, v___y_5545_);
lean_dec(v___y_5545_);
lean_dec_ref(v___y_5544_);
lean_dec(v___y_5543_);
lean_dec_ref(v___y_5542_);
return v_res_5547_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(lean_object* v_00_u03b1_5548_, lean_object* v_x_x3f_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_){
_start:
{
lean_object* v___x_5555_; 
v___x_5555_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v_x_x3f_5549_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_);
return v___x_5555_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___boxed(lean_object* v_00_u03b1_5556_, lean_object* v_x_x3f_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_){
_start:
{
lean_object* v_res_5563_; 
v_res_5563_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(v_00_u03b1_5556_, v_x_x3f_5557_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_);
lean_dec(v___y_5561_);
lean_dec_ref(v___y_5560_);
lean_dec(v___y_5559_);
lean_dec_ref(v___y_5558_);
return v_res_5563_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2(void){
_start:
{
lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; 
v___x_5568_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_5569_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_5570_ = l_Lean_Name_append(v___x_5569_, v___x_5568_);
return v___x_5570_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4(void){
_start:
{
lean_object* v___x_5572_; lean_object* v___x_5573_; 
v___x_5572_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3));
v___x_5573_ = l_Lean_stringToMessageData(v___x_5572_);
return v___x_5573_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6(void){
_start:
{
lean_object* v___x_5575_; lean_object* v___x_5576_; 
v___x_5575_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5));
v___x_5576_ = l_Lean_stringToMessageData(v___x_5575_);
return v___x_5576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0(lean_object* v_mvarId_5577_, lean_object* v_hName_x3f_5578_, uint8_t v_useNewSemantics_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_, lean_object* v___y_5583_){
_start:
{
lean_object* v___x_5588_; 
lean_inc(v_mvarId_5577_);
v___x_5588_ = l_Lean_MVarId_getType(v_mvarId_5577_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_);
if (lean_obj_tag(v___x_5588_) == 0)
{
lean_object* v_a_5589_; lean_object* v___x_5590_; 
v_a_5589_ = lean_ctor_get(v___x_5588_, 0);
lean_inc(v_a_5589_);
lean_dec_ref_known(v___x_5588_, 1);
v___x_5590_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_5577_, v_a_5589_, v_hName_x3f_5578_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_a_5591_; lean_object* v___x_5593_; uint8_t v_isShared_5594_; uint8_t v_isSharedCheck_5688_; 
v_a_5591_ = lean_ctor_get(v___x_5590_, 0);
v_isSharedCheck_5688_ = !lean_is_exclusive(v___x_5590_);
if (v_isSharedCheck_5688_ == 0)
{
v___x_5593_ = v___x_5590_;
v_isShared_5594_ = v_isSharedCheck_5688_;
goto v_resetjp_5592_;
}
else
{
lean_inc(v_a_5591_);
lean_dec(v___x_5590_);
v___x_5593_ = lean_box(0);
v_isShared_5594_ = v_isSharedCheck_5688_;
goto v_resetjp_5592_;
}
v_resetjp_5592_:
{
if (lean_obj_tag(v_a_5591_) == 1)
{
lean_object* v_val_5595_; lean_object* v___x_5597_; uint8_t v_isShared_5598_; uint8_t v_isSharedCheck_5683_; 
lean_del_object(v___x_5593_);
v_val_5595_ = lean_ctor_get(v_a_5591_, 0);
v_isSharedCheck_5683_ = !lean_is_exclusive(v_a_5591_);
if (v_isSharedCheck_5683_ == 0)
{
v___x_5597_ = v_a_5591_;
v_isShared_5598_ = v_isSharedCheck_5683_;
goto v_resetjp_5596_;
}
else
{
lean_inc(v_val_5595_);
lean_dec(v_a_5591_);
v___x_5597_ = lean_box(0);
v_isShared_5598_ = v_isSharedCheck_5683_;
goto v_resetjp_5596_;
}
v_resetjp_5596_:
{
lean_object* v_fst_5599_; lean_object* v_snd_5600_; lean_object* v___x_5602_; uint8_t v_isShared_5603_; uint8_t v_isSharedCheck_5682_; 
v_fst_5599_ = lean_ctor_get(v_val_5595_, 0);
v_snd_5600_ = lean_ctor_get(v_val_5595_, 1);
v_isSharedCheck_5682_ = !lean_is_exclusive(v_val_5595_);
if (v_isSharedCheck_5682_ == 0)
{
v___x_5602_ = v_val_5595_;
v_isShared_5603_ = v_isSharedCheck_5682_;
goto v_resetjp_5601_;
}
else
{
lean_inc(v_snd_5600_);
lean_inc(v_fst_5599_);
lean_dec(v_val_5595_);
v___x_5602_ = lean_box(0);
v_isShared_5603_ = v_isSharedCheck_5682_;
goto v_resetjp_5601_;
}
v_resetjp_5601_:
{
lean_object* v_mvarId_5604_; lean_object* v_fvarId_5605_; lean_object* v___x_5607_; uint8_t v_isShared_5608_; uint8_t v_isSharedCheck_5681_; 
v_mvarId_5604_ = lean_ctor_get(v_fst_5599_, 0);
v_fvarId_5605_ = lean_ctor_get(v_fst_5599_, 1);
v_isSharedCheck_5681_ = !lean_is_exclusive(v_fst_5599_);
if (v_isSharedCheck_5681_ == 0)
{
v___x_5607_ = v_fst_5599_;
v_isShared_5608_ = v_isSharedCheck_5681_;
goto v_resetjp_5606_;
}
else
{
lean_inc(v_fvarId_5605_);
lean_inc(v_mvarId_5604_);
lean_dec(v_fst_5599_);
v___x_5607_ = lean_box(0);
v_isShared_5608_ = v_isSharedCheck_5681_;
goto v_resetjp_5606_;
}
v_resetjp_5606_:
{
uint8_t v___x_5609_; lean_object* v___x_5610_; 
v___x_5609_ = 0;
lean_inc(v_mvarId_5604_);
v___x_5610_ = l_Lean_Meta_simpIfTarget(v_mvarId_5604_, v___x_5609_, v_useNewSemantics_5579_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_);
if (lean_obj_tag(v___x_5610_) == 0)
{
lean_object* v_a_5611_; lean_object* v_mvarId_5612_; lean_object* v_fvarId_5613_; lean_object* v___x_5615_; uint8_t v_isShared_5616_; uint8_t v_isSharedCheck_5672_; 
v_a_5611_ = lean_ctor_get(v___x_5610_, 0);
lean_inc(v_a_5611_);
lean_dec_ref_known(v___x_5610_, 1);
v_mvarId_5612_ = lean_ctor_get(v_snd_5600_, 0);
v_fvarId_5613_ = lean_ctor_get(v_snd_5600_, 1);
v_isSharedCheck_5672_ = !lean_is_exclusive(v_snd_5600_);
if (v_isSharedCheck_5672_ == 0)
{
v___x_5615_ = v_snd_5600_;
v_isShared_5616_ = v_isSharedCheck_5672_;
goto v_resetjp_5614_;
}
else
{
lean_inc(v_fvarId_5613_);
lean_inc(v_mvarId_5612_);
lean_dec(v_snd_5600_);
v___x_5615_ = lean_box(0);
v_isShared_5616_ = v_isSharedCheck_5672_;
goto v_resetjp_5614_;
}
v_resetjp_5614_:
{
lean_object* v___x_5617_; 
lean_inc(v_mvarId_5612_);
v___x_5617_ = l_Lean_Meta_simpIfTarget(v_mvarId_5612_, v___x_5609_, v_useNewSemantics_5579_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_);
if (lean_obj_tag(v___x_5617_) == 0)
{
lean_object* v_a_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5663_; 
v_a_5618_ = lean_ctor_get(v___x_5617_, 0);
v_isSharedCheck_5663_ = !lean_is_exclusive(v___x_5617_);
if (v_isSharedCheck_5663_ == 0)
{
v___x_5620_ = v___x_5617_;
v_isShared_5621_ = v_isSharedCheck_5663_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_a_5618_);
lean_dec(v___x_5617_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5663_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
uint8_t v___x_5638_; 
v___x_5638_ = l_Lean_instBEqMVarId_beq(v_mvarId_5604_, v_a_5611_);
lean_dec(v_mvarId_5604_);
if (v___x_5638_ == 0)
{
lean_dec(v_mvarId_5612_);
goto v___jp_5622_;
}
else
{
uint8_t v___x_5639_; 
v___x_5639_ = l_Lean_instBEqMVarId_beq(v_mvarId_5612_, v_a_5618_);
lean_dec(v_mvarId_5612_);
if (v___x_5639_ == 0)
{
goto v___jp_5622_;
}
else
{
lean_object* v_toCold_5640_; lean_object* v_options_5641_; uint8_t v_hasTrace_5642_; 
lean_del_object(v___x_5620_);
lean_del_object(v___x_5615_);
lean_dec(v_fvarId_5613_);
lean_del_object(v___x_5607_);
lean_dec(v_fvarId_5605_);
lean_del_object(v___x_5602_);
lean_del_object(v___x_5597_);
v_toCold_5640_ = lean_ctor_get(v___y_5582_, 0);
v_options_5641_ = lean_ctor_get(v_toCold_5640_, 2);
v_hasTrace_5642_ = lean_ctor_get_uint8(v_options_5641_, sizeof(void*)*1);
if (v_hasTrace_5642_ == 0)
{
lean_dec(v_a_5618_);
lean_dec(v_a_5611_);
goto v___jp_5585_;
}
else
{
lean_object* v_inheritedTraceOptions_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; uint8_t v___x_5646_; 
v_inheritedTraceOptions_5643_ = lean_ctor_get(v_toCold_5640_, 11);
v___x_5644_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_5645_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2);
v___x_5646_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5643_, v_options_5641_, v___x_5645_);
if (v___x_5646_ == 0)
{
lean_dec(v_a_5618_);
lean_dec(v_a_5611_);
goto v___jp_5585_;
}
else
{
lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; 
v___x_5647_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4);
v___x_5648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5648_, 0, v_a_5611_);
v___x_5649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5649_, 0, v___x_5647_);
lean_ctor_set(v___x_5649_, 1, v___x_5648_);
v___x_5650_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6);
v___x_5651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5651_, 0, v___x_5649_);
lean_ctor_set(v___x_5651_, 1, v___x_5650_);
v___x_5652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5652_, 0, v_a_5618_);
v___x_5653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5653_, 0, v___x_5651_);
lean_ctor_set(v___x_5653_, 1, v___x_5652_);
v___x_5654_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_5644_, v___x_5653_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_);
if (lean_obj_tag(v___x_5654_) == 0)
{
lean_dec_ref_known(v___x_5654_, 1);
goto v___jp_5585_;
}
else
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
v_a_5655_ = lean_ctor_get(v___x_5654_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5654_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5657_ = v___x_5654_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5654_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5655_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
}
}
}
v___jp_5622_:
{
lean_object* v___x_5624_; 
if (v_isShared_5616_ == 0)
{
lean_ctor_set(v___x_5615_, 1, v_fvarId_5605_);
lean_ctor_set(v___x_5615_, 0, v_a_5611_);
v___x_5624_ = v___x_5615_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v_a_5611_);
lean_ctor_set(v_reuseFailAlloc_5637_, 1, v_fvarId_5605_);
v___x_5624_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
lean_object* v___x_5626_; 
if (v_isShared_5608_ == 0)
{
lean_ctor_set(v___x_5607_, 1, v_fvarId_5613_);
lean_ctor_set(v___x_5607_, 0, v_a_5618_);
v___x_5626_ = v___x_5607_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5636_; 
v_reuseFailAlloc_5636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5636_, 0, v_a_5618_);
lean_ctor_set(v_reuseFailAlloc_5636_, 1, v_fvarId_5613_);
v___x_5626_ = v_reuseFailAlloc_5636_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
lean_object* v___x_5628_; 
if (v_isShared_5603_ == 0)
{
lean_ctor_set(v___x_5602_, 1, v___x_5626_);
lean_ctor_set(v___x_5602_, 0, v___x_5624_);
v___x_5628_ = v___x_5602_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5635_; 
v_reuseFailAlloc_5635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5635_, 0, v___x_5624_);
lean_ctor_set(v_reuseFailAlloc_5635_, 1, v___x_5626_);
v___x_5628_ = v_reuseFailAlloc_5635_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
lean_object* v___x_5630_; 
if (v_isShared_5598_ == 0)
{
lean_ctor_set(v___x_5597_, 0, v___x_5628_);
v___x_5630_ = v___x_5597_;
goto v_reusejp_5629_;
}
else
{
lean_object* v_reuseFailAlloc_5634_; 
v_reuseFailAlloc_5634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5634_, 0, v___x_5628_);
v___x_5630_ = v_reuseFailAlloc_5634_;
goto v_reusejp_5629_;
}
v_reusejp_5629_:
{
lean_object* v___x_5632_; 
if (v_isShared_5621_ == 0)
{
lean_ctor_set(v___x_5620_, 0, v___x_5630_);
v___x_5632_ = v___x_5620_;
goto v_reusejp_5631_;
}
else
{
lean_object* v_reuseFailAlloc_5633_; 
v_reuseFailAlloc_5633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5633_, 0, v___x_5630_);
v___x_5632_ = v_reuseFailAlloc_5633_;
goto v_reusejp_5631_;
}
v_reusejp_5631_:
{
return v___x_5632_;
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
lean_object* v_a_5664_; lean_object* v___x_5666_; uint8_t v_isShared_5667_; uint8_t v_isSharedCheck_5671_; 
lean_del_object(v___x_5615_);
lean_dec(v_fvarId_5613_);
lean_dec(v_mvarId_5612_);
lean_dec(v_a_5611_);
lean_del_object(v___x_5607_);
lean_dec(v_fvarId_5605_);
lean_dec(v_mvarId_5604_);
lean_del_object(v___x_5602_);
lean_del_object(v___x_5597_);
v_a_5664_ = lean_ctor_get(v___x_5617_, 0);
v_isSharedCheck_5671_ = !lean_is_exclusive(v___x_5617_);
if (v_isSharedCheck_5671_ == 0)
{
v___x_5666_ = v___x_5617_;
v_isShared_5667_ = v_isSharedCheck_5671_;
goto v_resetjp_5665_;
}
else
{
lean_inc(v_a_5664_);
lean_dec(v___x_5617_);
v___x_5666_ = lean_box(0);
v_isShared_5667_ = v_isSharedCheck_5671_;
goto v_resetjp_5665_;
}
v_resetjp_5665_:
{
lean_object* v___x_5669_; 
if (v_isShared_5667_ == 0)
{
v___x_5669_ = v___x_5666_;
goto v_reusejp_5668_;
}
else
{
lean_object* v_reuseFailAlloc_5670_; 
v_reuseFailAlloc_5670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5670_, 0, v_a_5664_);
v___x_5669_ = v_reuseFailAlloc_5670_;
goto v_reusejp_5668_;
}
v_reusejp_5668_:
{
return v___x_5669_;
}
}
}
}
}
else
{
lean_object* v_a_5673_; lean_object* v___x_5675_; uint8_t v_isShared_5676_; uint8_t v_isSharedCheck_5680_; 
lean_del_object(v___x_5607_);
lean_dec(v_fvarId_5605_);
lean_dec(v_mvarId_5604_);
lean_del_object(v___x_5602_);
lean_dec(v_snd_5600_);
lean_del_object(v___x_5597_);
v_a_5673_ = lean_ctor_get(v___x_5610_, 0);
v_isSharedCheck_5680_ = !lean_is_exclusive(v___x_5610_);
if (v_isSharedCheck_5680_ == 0)
{
v___x_5675_ = v___x_5610_;
v_isShared_5676_ = v_isSharedCheck_5680_;
goto v_resetjp_5674_;
}
else
{
lean_inc(v_a_5673_);
lean_dec(v___x_5610_);
v___x_5675_ = lean_box(0);
v_isShared_5676_ = v_isSharedCheck_5680_;
goto v_resetjp_5674_;
}
v_resetjp_5674_:
{
lean_object* v___x_5678_; 
if (v_isShared_5676_ == 0)
{
v___x_5678_ = v___x_5675_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5679_; 
v_reuseFailAlloc_5679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5679_, 0, v_a_5673_);
v___x_5678_ = v_reuseFailAlloc_5679_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
return v___x_5678_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5684_; lean_object* v___x_5686_; 
lean_dec(v_a_5591_);
v___x_5684_ = lean_box(0);
if (v_isShared_5594_ == 0)
{
lean_ctor_set(v___x_5593_, 0, v___x_5684_);
v___x_5686_ = v___x_5593_;
goto v_reusejp_5685_;
}
else
{
lean_object* v_reuseFailAlloc_5687_; 
v_reuseFailAlloc_5687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5687_, 0, v___x_5684_);
v___x_5686_ = v_reuseFailAlloc_5687_;
goto v_reusejp_5685_;
}
v_reusejp_5685_:
{
return v___x_5686_;
}
}
}
}
else
{
return v___x_5590_;
}
}
else
{
lean_object* v_a_5689_; lean_object* v___x_5691_; uint8_t v_isShared_5692_; uint8_t v_isSharedCheck_5696_; 
lean_dec(v_hName_x3f_5578_);
lean_dec(v_mvarId_5577_);
v_a_5689_ = lean_ctor_get(v___x_5588_, 0);
v_isSharedCheck_5696_ = !lean_is_exclusive(v___x_5588_);
if (v_isSharedCheck_5696_ == 0)
{
v___x_5691_ = v___x_5588_;
v_isShared_5692_ = v_isSharedCheck_5696_;
goto v_resetjp_5690_;
}
else
{
lean_inc(v_a_5689_);
lean_dec(v___x_5588_);
v___x_5691_ = lean_box(0);
v_isShared_5692_ = v_isSharedCheck_5696_;
goto v_resetjp_5690_;
}
v_resetjp_5690_:
{
lean_object* v___x_5694_; 
if (v_isShared_5692_ == 0)
{
v___x_5694_ = v___x_5691_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5695_; 
v_reuseFailAlloc_5695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5695_, 0, v_a_5689_);
v___x_5694_ = v_reuseFailAlloc_5695_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
return v___x_5694_;
}
}
}
v___jp_5585_:
{
lean_object* v___x_5586_; lean_object* v___x_5587_; 
v___x_5586_ = lean_box(0);
v___x_5587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5587_, 0, v___x_5586_);
return v___x_5587_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed(lean_object* v_mvarId_5697_, lean_object* v_hName_x3f_5698_, lean_object* v_useNewSemantics_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_){
_start:
{
uint8_t v_useNewSemantics_boxed_5705_; lean_object* v_res_5706_; 
v_useNewSemantics_boxed_5705_ = lean_unbox(v_useNewSemantics_5699_);
v_res_5706_ = l_Lean_Meta_splitIfTarget_x3f___lam__0(v_mvarId_5697_, v_hName_x3f_5698_, v_useNewSemantics_boxed_5705_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_);
lean_dec(v___y_5703_);
lean_dec_ref(v___y_5702_);
lean_dec(v___y_5701_);
lean_dec_ref(v___y_5700_);
return v_res_5706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object* v_mvarId_5707_, lean_object* v_hName_x3f_5708_, uint8_t v_useNewSemantics_5709_, lean_object* v_a_5710_, lean_object* v_a_5711_, lean_object* v_a_5712_, lean_object* v_a_5713_){
_start:
{
lean_object* v___x_5715_; lean_object* v___f_5716_; lean_object* v___x_5717_; 
v___x_5715_ = lean_box(v_useNewSemantics_5709_);
v___f_5716_ = lean_alloc_closure((void*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_5716_, 0, v_mvarId_5707_);
lean_closure_set(v___f_5716_, 1, v_hName_x3f_5708_);
lean_closure_set(v___f_5716_, 2, v___x_5715_);
v___x_5717_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v___f_5716_, v_a_5710_, v_a_5711_, v_a_5712_, v_a_5713_);
return v___x_5717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___boxed(lean_object* v_mvarId_5718_, lean_object* v_hName_x3f_5719_, lean_object* v_useNewSemantics_5720_, lean_object* v_a_5721_, lean_object* v_a_5722_, lean_object* v_a_5723_, lean_object* v_a_5724_, lean_object* v_a_5725_){
_start:
{
uint8_t v_useNewSemantics_boxed_5726_; lean_object* v_res_5727_; 
v_useNewSemantics_boxed_5726_ = lean_unbox(v_useNewSemantics_5720_);
v_res_5727_ = l_Lean_Meta_splitIfTarget_x3f(v_mvarId_5718_, v_hName_x3f_5719_, v_useNewSemantics_boxed_5726_, v_a_5721_, v_a_5722_, v_a_5723_, v_a_5724_);
lean_dec(v_a_5724_);
lean_dec_ref(v_a_5723_);
lean_dec(v_a_5722_);
lean_dec_ref(v_a_5721_);
return v_res_5727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(lean_object* v___x_5728_, lean_object* v_mvarId_5729_, lean_object* v_hName_x3f_5730_, lean_object* v_fvarId_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_){
_start:
{
lean_object* v___x_5740_; 
lean_inc(v___y_5735_);
lean_inc_ref(v___y_5734_);
lean_inc(v___y_5733_);
lean_inc_ref(v___y_5732_);
v___x_5740_ = lean_infer_type(v___x_5728_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_);
if (lean_obj_tag(v___x_5740_) == 0)
{
lean_object* v_a_5741_; lean_object* v___x_5742_; 
v_a_5741_ = lean_ctor_get(v___x_5740_, 0);
lean_inc(v_a_5741_);
lean_dec_ref_known(v___x_5740_, 1);
v___x_5742_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_5729_, v_a_5741_, v_hName_x3f_5730_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_);
if (lean_obj_tag(v___x_5742_) == 0)
{
lean_object* v_a_5743_; lean_object* v___x_5745_; uint8_t v_isShared_5746_; uint8_t v_isSharedCheck_5838_; 
v_a_5743_ = lean_ctor_get(v___x_5742_, 0);
v_isSharedCheck_5838_ = !lean_is_exclusive(v___x_5742_);
if (v_isSharedCheck_5838_ == 0)
{
v___x_5745_ = v___x_5742_;
v_isShared_5746_ = v_isSharedCheck_5838_;
goto v_resetjp_5744_;
}
else
{
lean_inc(v_a_5743_);
lean_dec(v___x_5742_);
v___x_5745_ = lean_box(0);
v_isShared_5746_ = v_isSharedCheck_5838_;
goto v_resetjp_5744_;
}
v_resetjp_5744_:
{
if (lean_obj_tag(v_a_5743_) == 1)
{
lean_object* v_val_5747_; lean_object* v___x_5749_; uint8_t v_isShared_5750_; uint8_t v_isSharedCheck_5833_; 
lean_del_object(v___x_5745_);
v_val_5747_ = lean_ctor_get(v_a_5743_, 0);
v_isSharedCheck_5833_ = !lean_is_exclusive(v_a_5743_);
if (v_isSharedCheck_5833_ == 0)
{
v___x_5749_ = v_a_5743_;
v_isShared_5750_ = v_isSharedCheck_5833_;
goto v_resetjp_5748_;
}
else
{
lean_inc(v_val_5747_);
lean_dec(v_a_5743_);
v___x_5749_ = lean_box(0);
v_isShared_5750_ = v_isSharedCheck_5833_;
goto v_resetjp_5748_;
}
v_resetjp_5748_:
{
lean_object* v_fst_5751_; lean_object* v_snd_5752_; lean_object* v___x_5754_; uint8_t v_isShared_5755_; uint8_t v_isSharedCheck_5832_; 
v_fst_5751_ = lean_ctor_get(v_val_5747_, 0);
v_snd_5752_ = lean_ctor_get(v_val_5747_, 1);
v_isSharedCheck_5832_ = !lean_is_exclusive(v_val_5747_);
if (v_isSharedCheck_5832_ == 0)
{
v___x_5754_ = v_val_5747_;
v_isShared_5755_ = v_isSharedCheck_5832_;
goto v_resetjp_5753_;
}
else
{
lean_inc(v_snd_5752_);
lean_inc(v_fst_5751_);
lean_dec(v_val_5747_);
v___x_5754_ = lean_box(0);
v_isShared_5755_ = v_isSharedCheck_5832_;
goto v_resetjp_5753_;
}
v_resetjp_5753_:
{
lean_object* v_mvarId_5756_; lean_object* v___x_5758_; uint8_t v_isShared_5759_; uint8_t v_isSharedCheck_5830_; 
v_mvarId_5756_ = lean_ctor_get(v_fst_5751_, 0);
v_isSharedCheck_5830_ = !lean_is_exclusive(v_fst_5751_);
if (v_isSharedCheck_5830_ == 0)
{
lean_object* v_unused_5831_; 
v_unused_5831_ = lean_ctor_get(v_fst_5751_, 1);
lean_dec(v_unused_5831_);
v___x_5758_ = v_fst_5751_;
v_isShared_5759_ = v_isSharedCheck_5830_;
goto v_resetjp_5757_;
}
else
{
lean_inc(v_mvarId_5756_);
lean_dec(v_fst_5751_);
v___x_5758_ = lean_box(0);
v_isShared_5759_ = v_isSharedCheck_5830_;
goto v_resetjp_5757_;
}
v_resetjp_5757_:
{
uint8_t v___x_5760_; lean_object* v___x_5761_; 
v___x_5760_ = 0;
lean_inc(v_fvarId_5731_);
lean_inc(v_mvarId_5756_);
v___x_5761_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_5756_, v_fvarId_5731_, v___x_5760_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_);
if (lean_obj_tag(v___x_5761_) == 0)
{
lean_object* v_a_5762_; lean_object* v_mvarId_5763_; lean_object* v___x_5765_; uint8_t v_isShared_5766_; uint8_t v_isSharedCheck_5820_; 
v_a_5762_ = lean_ctor_get(v___x_5761_, 0);
lean_inc(v_a_5762_);
lean_dec_ref_known(v___x_5761_, 1);
v_mvarId_5763_ = lean_ctor_get(v_snd_5752_, 0);
v_isSharedCheck_5820_ = !lean_is_exclusive(v_snd_5752_);
if (v_isSharedCheck_5820_ == 0)
{
lean_object* v_unused_5821_; 
v_unused_5821_ = lean_ctor_get(v_snd_5752_, 1);
lean_dec(v_unused_5821_);
v___x_5765_ = v_snd_5752_;
v_isShared_5766_ = v_isSharedCheck_5820_;
goto v_resetjp_5764_;
}
else
{
lean_inc(v_mvarId_5763_);
lean_dec(v_snd_5752_);
v___x_5765_ = lean_box(0);
v_isShared_5766_ = v_isSharedCheck_5820_;
goto v_resetjp_5764_;
}
v_resetjp_5764_:
{
lean_object* v___x_5767_; 
lean_inc(v_mvarId_5763_);
v___x_5767_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_5763_, v_fvarId_5731_, v___x_5760_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_);
if (lean_obj_tag(v___x_5767_) == 0)
{
lean_object* v_a_5768_; lean_object* v___x_5770_; uint8_t v_isShared_5771_; uint8_t v_isSharedCheck_5811_; 
v_a_5768_ = lean_ctor_get(v___x_5767_, 0);
v_isSharedCheck_5811_ = !lean_is_exclusive(v___x_5767_);
if (v_isSharedCheck_5811_ == 0)
{
v___x_5770_ = v___x_5767_;
v_isShared_5771_ = v_isSharedCheck_5811_;
goto v_resetjp_5769_;
}
else
{
lean_inc(v_a_5768_);
lean_dec(v___x_5767_);
v___x_5770_ = lean_box(0);
v_isShared_5771_ = v_isSharedCheck_5811_;
goto v_resetjp_5769_;
}
v_resetjp_5769_:
{
uint8_t v___x_5782_; 
v___x_5782_ = l_Lean_instBEqMVarId_beq(v_mvarId_5756_, v_a_5762_);
lean_dec(v_mvarId_5756_);
if (v___x_5782_ == 0)
{
lean_del_object(v___x_5765_);
lean_dec(v_mvarId_5763_);
lean_del_object(v___x_5758_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
goto v___jp_5772_;
}
else
{
uint8_t v___x_5783_; 
v___x_5783_ = l_Lean_instBEqMVarId_beq(v_mvarId_5763_, v_a_5768_);
lean_dec(v_mvarId_5763_);
if (v___x_5783_ == 0)
{
lean_del_object(v___x_5765_);
lean_del_object(v___x_5758_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
goto v___jp_5772_;
}
else
{
lean_object* v_toCold_5784_; lean_object* v_options_5785_; uint8_t v_hasTrace_5786_; 
lean_del_object(v___x_5770_);
lean_del_object(v___x_5754_);
lean_del_object(v___x_5749_);
v_toCold_5784_ = lean_ctor_get(v___y_5734_, 0);
v_options_5785_ = lean_ctor_get(v_toCold_5784_, 2);
v_hasTrace_5786_ = lean_ctor_get_uint8(v_options_5785_, sizeof(void*)*1);
if (v_hasTrace_5786_ == 0)
{
lean_dec(v_a_5768_);
lean_del_object(v___x_5765_);
lean_dec(v_a_5762_);
lean_del_object(v___x_5758_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
goto v___jp_5737_;
}
else
{
lean_object* v_inheritedTraceOptions_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; uint8_t v___x_5790_; 
v_inheritedTraceOptions_5787_ = lean_ctor_get(v_toCold_5784_, 11);
v___x_5788_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_5789_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2);
v___x_5790_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5787_, v_options_5785_, v___x_5789_);
if (v___x_5790_ == 0)
{
lean_dec(v_a_5768_);
lean_del_object(v___x_5765_);
lean_dec(v_a_5762_);
lean_del_object(v___x_5758_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
goto v___jp_5737_;
}
else
{
lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5794_; 
v___x_5791_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4);
v___x_5792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5792_, 0, v_a_5762_);
if (v_isShared_5766_ == 0)
{
lean_ctor_set_tag(v___x_5765_, 7);
lean_ctor_set(v___x_5765_, 1, v___x_5792_);
lean_ctor_set(v___x_5765_, 0, v___x_5791_);
v___x_5794_ = v___x_5765_;
goto v_reusejp_5793_;
}
else
{
lean_object* v_reuseFailAlloc_5810_; 
v_reuseFailAlloc_5810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5810_, 0, v___x_5791_);
lean_ctor_set(v_reuseFailAlloc_5810_, 1, v___x_5792_);
v___x_5794_ = v_reuseFailAlloc_5810_;
goto v_reusejp_5793_;
}
v_reusejp_5793_:
{
lean_object* v___x_5795_; lean_object* v___x_5797_; 
v___x_5795_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6);
if (v_isShared_5759_ == 0)
{
lean_ctor_set_tag(v___x_5758_, 7);
lean_ctor_set(v___x_5758_, 1, v___x_5795_);
lean_ctor_set(v___x_5758_, 0, v___x_5794_);
v___x_5797_ = v___x_5758_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5809_; 
v_reuseFailAlloc_5809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5809_, 0, v___x_5794_);
lean_ctor_set(v_reuseFailAlloc_5809_, 1, v___x_5795_);
v___x_5797_ = v_reuseFailAlloc_5809_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; 
v___x_5798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5798_, 0, v_a_5768_);
v___x_5799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5797_);
lean_ctor_set(v___x_5799_, 1, v___x_5798_);
v___x_5800_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_5788_, v___x_5799_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
if (lean_obj_tag(v___x_5800_) == 0)
{
lean_dec_ref_known(v___x_5800_, 1);
goto v___jp_5737_;
}
else
{
lean_object* v_a_5801_; lean_object* v___x_5803_; uint8_t v_isShared_5804_; uint8_t v_isSharedCheck_5808_; 
v_a_5801_ = lean_ctor_get(v___x_5800_, 0);
v_isSharedCheck_5808_ = !lean_is_exclusive(v___x_5800_);
if (v_isSharedCheck_5808_ == 0)
{
v___x_5803_ = v___x_5800_;
v_isShared_5804_ = v_isSharedCheck_5808_;
goto v_resetjp_5802_;
}
else
{
lean_inc(v_a_5801_);
lean_dec(v___x_5800_);
v___x_5803_ = lean_box(0);
v_isShared_5804_ = v_isSharedCheck_5808_;
goto v_resetjp_5802_;
}
v_resetjp_5802_:
{
lean_object* v___x_5806_; 
if (v_isShared_5804_ == 0)
{
v___x_5806_ = v___x_5803_;
goto v_reusejp_5805_;
}
else
{
lean_object* v_reuseFailAlloc_5807_; 
v_reuseFailAlloc_5807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5807_, 0, v_a_5801_);
v___x_5806_ = v_reuseFailAlloc_5807_;
goto v_reusejp_5805_;
}
v_reusejp_5805_:
{
return v___x_5806_;
}
}
}
}
}
}
}
}
}
v___jp_5772_:
{
lean_object* v___x_5774_; 
if (v_isShared_5755_ == 0)
{
lean_ctor_set(v___x_5754_, 1, v_a_5768_);
lean_ctor_set(v___x_5754_, 0, v_a_5762_);
v___x_5774_ = v___x_5754_;
goto v_reusejp_5773_;
}
else
{
lean_object* v_reuseFailAlloc_5781_; 
v_reuseFailAlloc_5781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5781_, 0, v_a_5762_);
lean_ctor_set(v_reuseFailAlloc_5781_, 1, v_a_5768_);
v___x_5774_ = v_reuseFailAlloc_5781_;
goto v_reusejp_5773_;
}
v_reusejp_5773_:
{
lean_object* v___x_5776_; 
if (v_isShared_5750_ == 0)
{
lean_ctor_set(v___x_5749_, 0, v___x_5774_);
v___x_5776_ = v___x_5749_;
goto v_reusejp_5775_;
}
else
{
lean_object* v_reuseFailAlloc_5780_; 
v_reuseFailAlloc_5780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5780_, 0, v___x_5774_);
v___x_5776_ = v_reuseFailAlloc_5780_;
goto v_reusejp_5775_;
}
v_reusejp_5775_:
{
lean_object* v___x_5778_; 
if (v_isShared_5771_ == 0)
{
lean_ctor_set(v___x_5770_, 0, v___x_5776_);
v___x_5778_ = v___x_5770_;
goto v_reusejp_5777_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v___x_5776_);
v___x_5778_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5777_;
}
v_reusejp_5777_:
{
return v___x_5778_;
}
}
}
}
}
}
else
{
lean_object* v_a_5812_; lean_object* v___x_5814_; uint8_t v_isShared_5815_; uint8_t v_isSharedCheck_5819_; 
lean_del_object(v___x_5765_);
lean_dec(v_mvarId_5763_);
lean_dec(v_a_5762_);
lean_del_object(v___x_5758_);
lean_dec(v_mvarId_5756_);
lean_del_object(v___x_5754_);
lean_del_object(v___x_5749_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
v_a_5812_ = lean_ctor_get(v___x_5767_, 0);
v_isSharedCheck_5819_ = !lean_is_exclusive(v___x_5767_);
if (v_isSharedCheck_5819_ == 0)
{
v___x_5814_ = v___x_5767_;
v_isShared_5815_ = v_isSharedCheck_5819_;
goto v_resetjp_5813_;
}
else
{
lean_inc(v_a_5812_);
lean_dec(v___x_5767_);
v___x_5814_ = lean_box(0);
v_isShared_5815_ = v_isSharedCheck_5819_;
goto v_resetjp_5813_;
}
v_resetjp_5813_:
{
lean_object* v___x_5817_; 
if (v_isShared_5815_ == 0)
{
v___x_5817_ = v___x_5814_;
goto v_reusejp_5816_;
}
else
{
lean_object* v_reuseFailAlloc_5818_; 
v_reuseFailAlloc_5818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5818_, 0, v_a_5812_);
v___x_5817_ = v_reuseFailAlloc_5818_;
goto v_reusejp_5816_;
}
v_reusejp_5816_:
{
return v___x_5817_;
}
}
}
}
}
else
{
lean_object* v_a_5822_; lean_object* v___x_5824_; uint8_t v_isShared_5825_; uint8_t v_isSharedCheck_5829_; 
lean_del_object(v___x_5758_);
lean_dec(v_mvarId_5756_);
lean_del_object(v___x_5754_);
lean_dec(v_snd_5752_);
lean_del_object(v___x_5749_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
lean_dec(v_fvarId_5731_);
v_a_5822_ = lean_ctor_get(v___x_5761_, 0);
v_isSharedCheck_5829_ = !lean_is_exclusive(v___x_5761_);
if (v_isSharedCheck_5829_ == 0)
{
v___x_5824_ = v___x_5761_;
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
else
{
lean_inc(v_a_5822_);
lean_dec(v___x_5761_);
v___x_5824_ = lean_box(0);
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
v_resetjp_5823_:
{
lean_object* v___x_5827_; 
if (v_isShared_5825_ == 0)
{
v___x_5827_ = v___x_5824_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5828_; 
v_reuseFailAlloc_5828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5828_, 0, v_a_5822_);
v___x_5827_ = v_reuseFailAlloc_5828_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
return v___x_5827_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5834_; lean_object* v___x_5836_; 
lean_dec(v_a_5743_);
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
lean_dec(v_fvarId_5731_);
v___x_5834_ = lean_box(0);
if (v_isShared_5746_ == 0)
{
lean_ctor_set(v___x_5745_, 0, v___x_5834_);
v___x_5836_ = v___x_5745_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v___x_5834_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
return v___x_5836_;
}
}
}
}
else
{
lean_object* v_a_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5846_; 
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
lean_dec(v_fvarId_5731_);
v_a_5839_ = lean_ctor_get(v___x_5742_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v___x_5742_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5841_ = v___x_5742_;
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_a_5839_);
lean_dec(v___x_5742_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
lean_object* v___x_5844_; 
if (v_isShared_5842_ == 0)
{
v___x_5844_ = v___x_5841_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v_a_5839_);
v___x_5844_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
return v___x_5844_;
}
}
}
}
else
{
lean_object* v_a_5847_; lean_object* v___x_5849_; uint8_t v_isShared_5850_; uint8_t v_isSharedCheck_5854_; 
lean_dec(v___y_5735_);
lean_dec_ref(v___y_5734_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
lean_dec(v_fvarId_5731_);
lean_dec(v_hName_x3f_5730_);
lean_dec(v_mvarId_5729_);
v_a_5847_ = lean_ctor_get(v___x_5740_, 0);
v_isSharedCheck_5854_ = !lean_is_exclusive(v___x_5740_);
if (v_isSharedCheck_5854_ == 0)
{
v___x_5849_ = v___x_5740_;
v_isShared_5850_ = v_isSharedCheck_5854_;
goto v_resetjp_5848_;
}
else
{
lean_inc(v_a_5847_);
lean_dec(v___x_5740_);
v___x_5849_ = lean_box(0);
v_isShared_5850_ = v_isSharedCheck_5854_;
goto v_resetjp_5848_;
}
v_resetjp_5848_:
{
lean_object* v___x_5852_; 
if (v_isShared_5850_ == 0)
{
v___x_5852_ = v___x_5849_;
goto v_reusejp_5851_;
}
else
{
lean_object* v_reuseFailAlloc_5853_; 
v_reuseFailAlloc_5853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5853_, 0, v_a_5847_);
v___x_5852_ = v_reuseFailAlloc_5853_;
goto v_reusejp_5851_;
}
v_reusejp_5851_:
{
return v___x_5852_;
}
}
}
v___jp_5737_:
{
lean_object* v___x_5738_; lean_object* v___x_5739_; 
v___x_5738_ = lean_box(0);
v___x_5739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5738_);
return v___x_5739_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed(lean_object* v___x_5855_, lean_object* v_mvarId_5856_, lean_object* v_hName_x3f_5857_, lean_object* v_fvarId_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_){
_start:
{
lean_object* v_res_5864_; 
v_res_5864_ = l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(v___x_5855_, v_mvarId_5856_, v_hName_x3f_5857_, v_fvarId_5858_, v___y_5859_, v___y_5860_, v___y_5861_, v___y_5862_);
return v_res_5864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f(lean_object* v_mvarId_5865_, lean_object* v_fvarId_5866_, lean_object* v_hName_x3f_5867_, lean_object* v_a_5868_, lean_object* v_a_5869_, lean_object* v_a_5870_, lean_object* v_a_5871_){
_start:
{
lean_object* v___x_5873_; lean_object* v___f_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; 
lean_inc(v_fvarId_5866_);
v___x_5873_ = l_Lean_mkFVar(v_fvarId_5866_);
lean_inc(v_mvarId_5865_);
v___f_5874_ = lean_alloc_closure((void*)(l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed), 9, 4);
lean_closure_set(v___f_5874_, 0, v___x_5873_);
lean_closure_set(v___f_5874_, 1, v_mvarId_5865_);
lean_closure_set(v___f_5874_, 2, v_hName_x3f_5867_);
lean_closure_set(v___f_5874_, 3, v_fvarId_5866_);
v___x_5875_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_MVarId_byCasesBool_spec__1___boxed), 8, 3);
lean_closure_set(v___x_5875_, 0, lean_box(0));
lean_closure_set(v___x_5875_, 1, v_mvarId_5865_);
lean_closure_set(v___x_5875_, 2, v___f_5874_);
v___x_5876_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v___x_5875_, v_a_5868_, v_a_5869_, v_a_5870_, v_a_5871_);
return v___x_5876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___boxed(lean_object* v_mvarId_5877_, lean_object* v_fvarId_5878_, lean_object* v_hName_x3f_5879_, lean_object* v_a_5880_, lean_object* v_a_5881_, lean_object* v_a_5882_, lean_object* v_a_5883_, lean_object* v_a_5884_){
_start:
{
lean_object* v_res_5885_; 
v_res_5885_ = l_Lean_Meta_splitIfLocalDecl_x3f(v_mvarId_5877_, v_fvarId_5878_, v_hName_x3f_5879_, v_a_5880_, v_a_5881_, v_a_5882_, v_a_5883_);
lean_dec(v_a_5883_);
lean_dec_ref(v_a_5882_);
lean_dec(v_a_5881_);
lean_dec_ref(v_a_5880_);
return v_res_5885_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v___x_5906_ = lean_unsigned_to_nat(3526097586u);
v___x_5907_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_5908_ = l_Lean_Name_num___override(v___x_5907_, v___x_5906_);
return v___x_5908_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; 
v___x_5910_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_5911_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_5912_ = l_Lean_Name_str___override(v___x_5911_, v___x_5910_);
return v___x_5912_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; 
v___x_5914_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_5915_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_5916_ = l_Lean_Name_str___override(v___x_5915_, v___x_5914_);
return v___x_5916_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v___x_5917_ = lean_unsigned_to_nat(2u);
v___x_5918_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_5919_ = l_Lean_Name_num___override(v___x_5918_, v___x_5917_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5921_; uint8_t v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; 
v___x_5921_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__16));
v___x_5922_ = 0;
v___x_5923_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_5924_ = l_Lean_registerTraceClass(v___x_5921_, v___x_5922_, v___x_5923_);
return v___x_5924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2____boxed(lean_object* v_a_5925_){
_start:
{
lean_object* v_res_5926_; 
v_res_5926_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
return v_res_5926_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin);
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
res = runtime_initialize_Lean_Meta_Tactic_BoolToProp(builtin);
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
lean_object* initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin);
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
res = initialize_Lean_Meta_Tactic_BoolToProp(builtin);
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
