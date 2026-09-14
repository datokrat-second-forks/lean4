// Lean compiler output
// Module: Lean.Meta.InferType
// Imports: public import Lean.Data.LBool public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg();
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_ProjReductionKind_ctorIdx(uint8_t);
uint8_t l_Lean_Meta_instBEqEtaStructMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint8_t l_Lean_Level_isNeverZero(lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_throwUnknown___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Core_instantiateTypeLevelParams___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_mkExprConfigCacheKey___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRange(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Literal_type(lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadRefCoreM;
extern lean_object* l_Lean_Core_instAddMessageContextCoreM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwInterruptException___redArg(lean_object*);
lean_object* l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Meta.InferType.0.Lean.Expr.instantiateBetaRevRange.visit"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.InferType"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "application expected"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateApp!Impl"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__0;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__1;
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Expr.instantiateBetaRevRange"};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__2 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__2_value;
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "assertion violation: stop ≤ args.size\n    "};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__3 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__3_value;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwFunctionExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "function expected"};
static const lean_object* l_Lean_Meta_throwFunctionExpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwFunctionExpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwFunctionExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "incorrect number of universe levels "};
static const lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid projection"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nfrom type"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwTypeExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "type expected"};
static const lean_object* l_Lean_Meta_throwTypeExpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwTypeExpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwTypeExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwTypeExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwUnknownMVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unknown metavariable '\?"};
static const lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwUnknownMVar___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__1;
static const lean_string_object l_Lean_Meta_throwUnknownMVar___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_throwUnknownMVar___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected bound variable "};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "outParam"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_isPropFormerType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_isPropFormerType___closed__0 = (const lean_object*)&l_Lean_Meta_isPropFormerType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected dependent type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "type "};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " does not have "};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(lean_object* v_start_1_, lean_object* v_stop_2_, lean_object* v_args_3_, lean_object* v_vidx_4_, lean_object* v_offset_5_){
_start:
{
lean_object* v_n_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v_n_6_ = lean_nat_sub(v_stop_2_, v_start_1_);
v___x_7_ = lean_nat_add(v_offset_5_, v_n_6_);
v___x_8_ = lean_nat_dec_lt(v_vidx_4_, v___x_7_);
lean_dec(v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_nat_sub(v_vidx_4_, v_n_6_);
lean_dec(v_n_6_);
v___x_10_ = l_Lean_Expr_bvar___override(v___x_9_);
return v___x_10_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
lean_dec(v_n_6_);
v___x_11_ = l_Lean_instInhabitedExpr;
v___x_12_ = lean_nat_sub(v_vidx_4_, v_offset_5_);
v___x_13_ = lean_nat_sub(v_stop_2_, v___x_12_);
lean_dec(v___x_12_);
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_nat_sub(v___x_13_, v___x_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_array_get_borrowed(v___x_11_, v_args_3_, v___x_15_);
lean_dec(v___x_15_);
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_expr_lift_loose_bvars(v___x_16_, v___x_17_, v_offset_5_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar___boxed(lean_object* v_start_19_, lean_object* v_stop_20_, lean_object* v_args_21_, lean_object* v_vidx_22_, lean_object* v_offset_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(v_start_19_, v_stop_20_, v_args_21_, v_vidx_22_, v_offset_23_);
lean_dec(v_offset_23_);
lean_dec(v_vidx_22_);
lean_dec_ref(v_args_21_);
lean_dec(v_stop_20_);
lean_dec(v_start_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
if (lean_obj_tag(v_x_26_) == 0)
{
return v_x_25_;
}
else
{
lean_object* v_key_27_; lean_object* v_value_28_; lean_object* v_tail_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_56_; 
v_key_27_ = lean_ctor_get(v_x_26_, 0);
v_value_28_ = lean_ctor_get(v_x_26_, 1);
v_tail_29_ = lean_ctor_get(v_x_26_, 2);
v_isSharedCheck_56_ = !lean_is_exclusive(v_x_26_);
if (v_isSharedCheck_56_ == 0)
{
v___x_31_ = v_x_26_;
v_isShared_32_ = v_isSharedCheck_56_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_tail_29_);
lean_inc(v_value_28_);
lean_inc(v_key_27_);
lean_dec(v_x_26_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_56_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v_fst_33_; lean_object* v_snd_34_; lean_object* v___x_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; uint64_t v___x_39_; uint64_t v___x_40_; uint64_t v_fold_41_; uint64_t v___x_42_; uint64_t v___x_43_; uint64_t v___x_44_; size_t v___x_45_; size_t v___x_46_; size_t v___x_47_; size_t v___x_48_; size_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; 
v_fst_33_ = lean_ctor_get(v_key_27_, 0);
v_snd_34_ = lean_ctor_get(v_key_27_, 1);
v___x_35_ = lean_array_get_size(v_x_25_);
v___x_36_ = l_Lean_ExprStructEq_hash(v_fst_33_);
v___x_37_ = lean_uint64_of_nat(v_snd_34_);
v___x_38_ = lean_uint64_mix_hash(v___x_36_, v___x_37_);
v___x_39_ = 32ULL;
v___x_40_ = lean_uint64_shift_right(v___x_38_, v___x_39_);
v_fold_41_ = lean_uint64_xor(v___x_38_, v___x_40_);
v___x_42_ = 16ULL;
v___x_43_ = lean_uint64_shift_right(v_fold_41_, v___x_42_);
v___x_44_ = lean_uint64_xor(v_fold_41_, v___x_43_);
v___x_45_ = lean_uint64_to_usize(v___x_44_);
v___x_46_ = lean_usize_of_nat(v___x_35_);
v___x_47_ = ((size_t)1ULL);
v___x_48_ = lean_usize_sub(v___x_46_, v___x_47_);
v___x_49_ = lean_usize_land(v___x_45_, v___x_48_);
v___x_50_ = lean_array_uget_borrowed(v_x_25_, v___x_49_);
lean_inc(v___x_50_);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 2, v___x_50_);
v___x_52_ = v___x_31_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_key_27_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v_value_28_);
lean_ctor_set(v_reuseFailAlloc_55_, 2, v___x_50_);
v___x_52_ = v_reuseFailAlloc_55_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_53_; 
v___x_53_ = lean_array_uset(v_x_25_, v___x_49_, v___x_52_);
v_x_25_ = v___x_53_;
v_x_26_ = v_tail_29_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(lean_object* v_i_57_, lean_object* v_source_58_, lean_object* v_target_59_){
_start:
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = lean_array_get_size(v_source_58_);
v___x_61_ = lean_nat_dec_lt(v_i_57_, v___x_60_);
if (v___x_61_ == 0)
{
lean_dec_ref(v_source_58_);
lean_dec(v_i_57_);
return v_target_59_;
}
else
{
lean_object* v_es_62_; lean_object* v___x_63_; lean_object* v_source_64_; lean_object* v_target_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_es_62_ = lean_array_fget(v_source_58_, v_i_57_);
v___x_63_ = lean_box(0);
v_source_64_ = lean_array_fset(v_source_58_, v_i_57_, v___x_63_);
v_target_65_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(v_target_59_, v_es_62_);
v___x_66_ = lean_unsigned_to_nat(1u);
v___x_67_ = lean_nat_add(v_i_57_, v___x_66_);
lean_dec(v_i_57_);
v_i_57_ = v___x_67_;
v_source_58_ = v_source_64_;
v_target_59_ = v_target_65_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(lean_object* v_data_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v_nbuckets_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_70_ = lean_array_get_size(v_data_69_);
v___x_71_ = lean_unsigned_to_nat(2u);
v_nbuckets_72_ = lean_nat_mul(v___x_70_, v___x_71_);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = lean_box(0);
v___x_75_ = lean_mk_array(v_nbuckets_72_, v___x_74_);
v___x_76_ = lean_array_propagate_mark(v_data_69_, v___x_75_);
v___x_77_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(v___x_73_, v_data_69_, v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(lean_object* v_a_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
uint8_t v___x_80_; 
v___x_80_ = 0;
return v___x_80_;
}
else
{
lean_object* v_key_81_; lean_object* v_tail_82_; uint8_t v___y_84_; lean_object* v_fst_86_; lean_object* v_snd_87_; lean_object* v_fst_88_; lean_object* v_snd_89_; uint8_t v___x_90_; 
v_key_81_ = lean_ctor_get(v_x_79_, 0);
v_tail_82_ = lean_ctor_get(v_x_79_, 2);
v_fst_86_ = lean_ctor_get(v_key_81_, 0);
v_snd_87_ = lean_ctor_get(v_key_81_, 1);
v_fst_88_ = lean_ctor_get(v_a_78_, 0);
v_snd_89_ = lean_ctor_get(v_a_78_, 1);
v___x_90_ = l_Lean_ExprStructEq_beq(v_fst_86_, v_fst_88_);
if (v___x_90_ == 0)
{
v___y_84_ = v___x_90_;
goto v___jp_83_;
}
else
{
uint8_t v___x_91_; 
v___x_91_ = lean_nat_dec_eq(v_snd_87_, v_snd_89_);
v___y_84_ = v___x_91_;
goto v___jp_83_;
}
v___jp_83_:
{
if (v___y_84_ == 0)
{
v_x_79_ = v_tail_82_;
goto _start;
}
else
{
return v___y_84_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg___boxed(lean_object* v_a_92_, lean_object* v_x_93_){
_start:
{
uint8_t v_res_94_; lean_object* v_r_95_; 
v_res_94_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_92_, v_x_93_);
lean_dec(v_x_93_);
lean_dec_ref(v_a_92_);
v_r_95_ = lean_box(v_res_94_);
return v_r_95_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(lean_object* v_a_96_, lean_object* v_b_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
lean_dec(v_b_97_);
lean_dec_ref(v_a_96_);
return v_x_98_;
}
else
{
lean_object* v_key_99_; lean_object* v_value_100_; lean_object* v_tail_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_120_; 
v_key_99_ = lean_ctor_get(v_x_98_, 0);
v_value_100_ = lean_ctor_get(v_x_98_, 1);
v_tail_101_ = lean_ctor_get(v_x_98_, 2);
v_isSharedCheck_120_ = !lean_is_exclusive(v_x_98_);
if (v_isSharedCheck_120_ == 0)
{
v___x_103_ = v_x_98_;
v_isShared_104_ = v_isSharedCheck_120_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_tail_101_);
lean_inc(v_value_100_);
lean_inc(v_key_99_);
lean_dec(v_x_98_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_120_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
uint8_t v___y_106_; lean_object* v_fst_114_; lean_object* v_snd_115_; lean_object* v_fst_116_; lean_object* v_snd_117_; uint8_t v___x_118_; 
v_fst_114_ = lean_ctor_get(v_key_99_, 0);
v_snd_115_ = lean_ctor_get(v_key_99_, 1);
v_fst_116_ = lean_ctor_get(v_a_96_, 0);
v_snd_117_ = lean_ctor_get(v_a_96_, 1);
v___x_118_ = l_Lean_ExprStructEq_beq(v_fst_114_, v_fst_116_);
if (v___x_118_ == 0)
{
v___y_106_ = v___x_118_;
goto v___jp_105_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = lean_nat_dec_eq(v_snd_115_, v_snd_117_);
v___y_106_ = v___x_119_;
goto v___jp_105_;
}
v___jp_105_:
{
if (v___y_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_96_, v_b_97_, v_tail_101_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 2, v___x_107_);
v___x_109_ = v___x_103_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_key_99_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_value_100_);
lean_ctor_set(v_reuseFailAlloc_110_, 2, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec(v_value_100_);
lean_dec(v_key_99_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v_b_97_);
lean_ctor_set(v___x_103_, 0, v_a_96_);
v___x_112_ = v___x_103_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_96_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_b_97_);
lean_ctor_set(v_reuseFailAlloc_113_, 2, v_tail_101_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(lean_object* v_m_121_, lean_object* v_a_122_, lean_object* v_b_123_){
_start:
{
lean_object* v_size_124_; lean_object* v_buckets_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_172_; 
v_size_124_ = lean_ctor_get(v_m_121_, 0);
v_buckets_125_ = lean_ctor_get(v_m_121_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_m_121_);
if (v_isSharedCheck_172_ == 0)
{
v___x_127_ = v_m_121_;
v_isShared_128_ = v_isSharedCheck_172_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_buckets_125_);
lean_inc(v_size_124_);
lean_dec(v_m_121_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_172_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v_fst_129_; lean_object* v_snd_130_; lean_object* v___x_131_; uint64_t v___x_132_; uint64_t v___x_133_; uint64_t v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; uint64_t v_fold_137_; uint64_t v___x_138_; uint64_t v___x_139_; uint64_t v___x_140_; size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; lean_object* v_bkt_146_; uint8_t v___x_147_; 
v_fst_129_ = lean_ctor_get(v_a_122_, 0);
v_snd_130_ = lean_ctor_get(v_a_122_, 1);
v___x_131_ = lean_array_get_size(v_buckets_125_);
v___x_132_ = l_Lean_ExprStructEq_hash(v_fst_129_);
v___x_133_ = lean_uint64_of_nat(v_snd_130_);
v___x_134_ = lean_uint64_mix_hash(v___x_132_, v___x_133_);
v___x_135_ = 32ULL;
v___x_136_ = lean_uint64_shift_right(v___x_134_, v___x_135_);
v_fold_137_ = lean_uint64_xor(v___x_134_, v___x_136_);
v___x_138_ = 16ULL;
v___x_139_ = lean_uint64_shift_right(v_fold_137_, v___x_138_);
v___x_140_ = lean_uint64_xor(v_fold_137_, v___x_139_);
v___x_141_ = lean_uint64_to_usize(v___x_140_);
v___x_142_ = lean_usize_of_nat(v___x_131_);
v___x_143_ = ((size_t)1ULL);
v___x_144_ = lean_usize_sub(v___x_142_, v___x_143_);
v___x_145_ = lean_usize_land(v___x_141_, v___x_144_);
v_bkt_146_ = lean_array_uget_borrowed(v_buckets_125_, v___x_145_);
v___x_147_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_122_, v_bkt_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v_size_x27_149_; lean_object* v___x_150_; lean_object* v_buckets_x27_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v_size_x27_149_ = lean_nat_add(v_size_124_, v___x_148_);
lean_dec(v_size_124_);
lean_inc(v_bkt_146_);
v___x_150_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_150_, 0, v_a_122_);
lean_ctor_set(v___x_150_, 1, v_b_123_);
lean_ctor_set(v___x_150_, 2, v_bkt_146_);
v_buckets_x27_151_ = lean_array_uset(v_buckets_125_, v___x_145_, v___x_150_);
v___x_152_ = lean_unsigned_to_nat(4u);
v___x_153_ = lean_nat_mul(v_size_x27_149_, v___x_152_);
v___x_154_ = lean_unsigned_to_nat(3u);
v___x_155_ = lean_nat_div(v___x_153_, v___x_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_array_get_size(v_buckets_x27_151_);
v___x_157_ = lean_nat_dec_le(v___x_155_, v___x_156_);
lean_dec(v___x_155_);
if (v___x_157_ == 0)
{
lean_object* v_val_158_; lean_object* v___x_160_; 
v_val_158_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(v_buckets_x27_151_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_val_158_);
lean_ctor_set(v___x_127_, 0, v_size_x27_149_);
v___x_160_ = v___x_127_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_size_x27_149_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_val_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
else
{
lean_object* v___x_163_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_buckets_x27_151_);
lean_ctor_set(v___x_127_, 0, v_size_x27_149_);
v___x_163_ = v___x_127_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_size_x27_149_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_buckets_x27_151_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
else
{
lean_object* v___x_165_; lean_object* v_buckets_x27_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
lean_inc(v_bkt_146_);
v___x_165_ = lean_box(0);
v_buckets_x27_166_ = lean_array_uset(v_buckets_125_, v___x_145_, v___x_165_);
v___x_167_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_122_, v_b_123_, v_bkt_146_);
v___x_168_ = lean_array_uset(v_buckets_x27_166_, v___x_145_, v___x_167_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v___x_168_);
v___x_170_ = v___x_127_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_size_124_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(lean_object* v_msg_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = l_Lean_instInhabitedExpr;
v___x_175_ = lean_panic_fn_borrowed(v___x_174_, v_msg_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object* v_msg_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___f_185_; lean_object* v___f_186_; lean_object* v___f_187_; lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_7746__overap_198_; lean_object* v___x_199_; 
v___f_185_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0));
v___f_186_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1));
v___f_187_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2));
v___f_188_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3));
v___f_189_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4));
v___f_190_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5));
v___f_191_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6));
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___f_185_);
lean_ctor_set(v___x_192_, 1, v___f_186_);
v___x_193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___f_187_);
lean_ctor_set(v___x_193_, 2, v___f_188_);
lean_ctor_set(v___x_193_, 3, v___f_189_);
lean_ctor_set(v___x_193_, 4, v___f_190_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v___f_191_);
v___x_195_ = l_Lean_MonadStateCacheT_instMonad___redArg(v___x_194_);
v___x_196_ = l_Lean_instInhabitedExpr;
v___x_197_ = l_instInhabitedOfMonad___redArg(v___x_195_, v___x_196_);
v___x_7746__overap_198_ = lean_panic_fn_borrowed(v___x_197_, v_msg_183_);
lean_dec(v___x_197_);
v___x_199_ = lean_apply_1(v___x_7746__overap_198_, v___y_184_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(lean_object* v_a_200_, lean_object* v_x_201_){
_start:
{
if (lean_obj_tag(v_x_201_) == 0)
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
else
{
lean_object* v_key_203_; lean_object* v_value_204_; lean_object* v_tail_205_; uint8_t v___y_207_; lean_object* v_fst_210_; lean_object* v_snd_211_; lean_object* v_fst_212_; lean_object* v_snd_213_; uint8_t v___x_214_; 
v_key_203_ = lean_ctor_get(v_x_201_, 0);
v_value_204_ = lean_ctor_get(v_x_201_, 1);
v_tail_205_ = lean_ctor_get(v_x_201_, 2);
v_fst_210_ = lean_ctor_get(v_key_203_, 0);
v_snd_211_ = lean_ctor_get(v_key_203_, 1);
v_fst_212_ = lean_ctor_get(v_a_200_, 0);
v_snd_213_ = lean_ctor_get(v_a_200_, 1);
v___x_214_ = l_Lean_ExprStructEq_beq(v_fst_210_, v_fst_212_);
if (v___x_214_ == 0)
{
v___y_207_ = v___x_214_;
goto v___jp_206_;
}
else
{
uint8_t v___x_215_; 
v___x_215_ = lean_nat_dec_eq(v_snd_211_, v_snd_213_);
v___y_207_ = v___x_215_;
goto v___jp_206_;
}
v___jp_206_:
{
if (v___y_207_ == 0)
{
v_x_201_ = v_tail_205_;
goto _start;
}
else
{
lean_object* v___x_209_; 
lean_inc(v_value_204_);
v___x_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_209_, 0, v_value_204_);
return v___x_209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg___boxed(lean_object* v_a_216_, lean_object* v_x_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_216_, v_x_217_);
lean_dec(v_x_217_);
lean_dec_ref(v_a_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(lean_object* v_m_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_buckets_221_; lean_object* v_fst_222_; lean_object* v_snd_223_; lean_object* v___x_224_; uint64_t v___x_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; uint64_t v___x_229_; uint64_t v_fold_230_; uint64_t v___x_231_; uint64_t v___x_232_; uint64_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_buckets_221_ = lean_ctor_get(v_m_219_, 1);
v_fst_222_ = lean_ctor_get(v_a_220_, 0);
v_snd_223_ = lean_ctor_get(v_a_220_, 1);
v___x_224_ = lean_array_get_size(v_buckets_221_);
v___x_225_ = l_Lean_ExprStructEq_hash(v_fst_222_);
v___x_226_ = lean_uint64_of_nat(v_snd_223_);
v___x_227_ = lean_uint64_mix_hash(v___x_225_, v___x_226_);
v___x_228_ = 32ULL;
v___x_229_ = lean_uint64_shift_right(v___x_227_, v___x_228_);
v_fold_230_ = lean_uint64_xor(v___x_227_, v___x_229_);
v___x_231_ = 16ULL;
v___x_232_ = lean_uint64_shift_right(v_fold_230_, v___x_231_);
v___x_233_ = lean_uint64_xor(v_fold_230_, v___x_232_);
v___x_234_ = lean_uint64_to_usize(v___x_233_);
v___x_235_ = lean_usize_of_nat(v___x_224_);
v___x_236_ = ((size_t)1ULL);
v___x_237_ = lean_usize_sub(v___x_235_, v___x_236_);
v___x_238_ = lean_usize_land(v___x_234_, v___x_237_);
v___x_239_ = lean_array_uget_borrowed(v_buckets_221_, v___x_238_);
v___x_240_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_220_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg___boxed(lean_object* v_m_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_m_241_, v_a_242_);
lean_dec_ref(v_a_242_);
lean_dec_ref(v_m_241_);
return v_res_243_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_247_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_248_ = lean_unsigned_to_nat(21u);
v___x_249_ = lean_unsigned_to_nat(96u);
v___x_250_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_251_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_252_ = l_mkPanicMessageWithDecl(v___x_251_, v___x_250_, v___x_249_, v___x_248_, v___x_247_);
return v___x_252_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_254_ = lean_unsigned_to_nat(21u);
v___x_255_ = lean_unsigned_to_nat(97u);
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_257_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_258_ = l_mkPanicMessageWithDecl(v___x_257_, v___x_256_, v___x_255_, v___x_254_, v___x_253_);
return v___x_258_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_259_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_260_ = lean_unsigned_to_nat(21u);
v___x_261_ = lean_unsigned_to_nat(98u);
v___x_262_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_263_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_264_ = l_mkPanicMessageWithDecl(v___x_263_, v___x_262_, v___x_261_, v___x_260_, v___x_259_);
return v___x_264_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_265_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_266_ = lean_unsigned_to_nat(21u);
v___x_267_ = lean_unsigned_to_nat(95u);
v___x_268_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_269_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_270_ = l_mkPanicMessageWithDecl(v___x_269_, v___x_268_, v___x_267_, v___x_266_, v___x_265_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(lean_object* v_start_271_, lean_object* v_stop_272_, lean_object* v_args_273_, lean_object* v_e_274_, lean_object* v_offset_275_, lean_object* v___y_276_){
_start:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = l_Lean_Expr_looseBVarRange(v_e_274_);
v___x_278_ = lean_nat_dec_le(v___x_277_, v_offset_275_);
lean_dec(v___x_277_);
if (v___x_278_ == 0)
{
if (lean_obj_tag(v_e_274_) == 5)
{
lean_object* v_fn_279_; lean_object* v_arg_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_fn_279_ = lean_ctor_get(v_e_274_, 0);
lean_inc_ref(v_fn_279_);
v_arg_280_ = lean_ctor_get(v_e_274_, 1);
lean_inc_ref(v_arg_280_);
lean_inc(v_offset_275_);
lean_inc_ref(v_e_274_);
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v_e_274_);
lean_ctor_set(v___x_281_, 1, v_offset_275_);
v___x_282_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v___y_276_, v___x_281_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v___x_283_; lean_object* v_fst_284_; lean_object* v_snd_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
v___x_283_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_271_, v_stop_272_, v_args_273_, v_e_274_, v_fn_279_, v_arg_280_, v_offset_275_, v___y_276_);
v_fst_284_ = lean_ctor_get(v___x_283_, 0);
v_snd_285_ = lean_ctor_get(v___x_283_, 1);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_293_ == 0)
{
v___x_287_ = v___x_283_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_snd_285_);
lean_inc(v_fst_284_);
lean_dec(v___x_283_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_291_; 
lean_inc(v_fst_284_);
v___x_289_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_snd_285_, v___x_281_, v_fst_284_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v___x_289_);
v___x_291_ = v___x_287_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_fst_284_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v___x_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
lean_object* v_val_294_; lean_object* v___x_295_; 
lean_dec_ref_known(v___x_281_, 2);
lean_dec_ref(v_arg_280_);
lean_dec_ref_known(v_e_274_, 2);
lean_dec_ref(v_fn_279_);
lean_dec(v_offset_275_);
v_val_294_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_val_294_);
lean_dec_ref_known(v___x_282_, 1);
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v_val_294_);
lean_ctor_set(v___x_295_, 1, v___y_276_);
return v___x_295_;
}
}
else
{
lean_object* v___x_296_; 
v___x_296_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_271_, v_stop_272_, v_args_273_, v_e_274_, v_offset_275_, v___y_276_);
return v___x_296_;
}
}
else
{
lean_object* v___x_297_; 
lean_dec(v_offset_275_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v_e_274_);
lean_ctor_set(v___x_297_, 1, v___y_276_);
return v___x_297_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_301_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2));
v___x_302_ = lean_unsigned_to_nat(18u);
v___x_303_ = lean_unsigned_to_nat(2002u);
v___x_304_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1));
v___x_305_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0));
v___x_306_ = l_mkPanicMessageWithDecl(v___x_305_, v___x_304_, v___x_303_, v___x_302_, v___x_301_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(lean_object* v_start_307_, lean_object* v_stop_308_, lean_object* v_args_309_, lean_object* v_e_310_, lean_object* v_f_311_, lean_object* v_a_312_, lean_object* v_offset_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_315_; lean_object* v_fst_316_; lean_object* v_snd_317_; lean_object* v___x_318_; 
lean_inc(v_offset_313_);
v___x_315_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(v_start_307_, v_stop_308_, v_args_309_, v_f_311_, v_offset_313_, v___y_314_);
v_fst_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_fst_316_);
v_snd_317_ = lean_ctor_get(v___x_315_, 1);
lean_inc(v_snd_317_);
lean_dec_ref(v___x_315_);
v___x_318_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_307_, v_stop_308_, v_args_309_, v_a_312_, v_offset_313_, v_snd_317_);
if (lean_obj_tag(v_e_310_) == 5)
{
lean_object* v_fst_319_; lean_object* v_snd_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_343_; 
v_fst_319_ = lean_ctor_get(v___x_318_, 0);
v_snd_320_ = lean_ctor_get(v___x_318_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_343_ == 0)
{
v___x_322_ = v___x_318_;
v_isShared_323_ = v_isSharedCheck_343_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_snd_320_);
lean_inc(v_fst_319_);
lean_dec(v___x_318_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_343_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v_fn_324_; lean_object* v_arg_325_; size_t v___x_326_; size_t v___x_327_; uint8_t v___x_328_; 
v_fn_324_ = lean_ctor_get(v_e_310_, 0);
v_arg_325_ = lean_ctor_get(v_e_310_, 1);
v___x_326_ = lean_ptr_addr(v_fn_324_);
v___x_327_ = lean_ptr_addr(v_fst_316_);
v___x_328_ = lean_usize_dec_eq(v___x_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_331_; 
lean_dec_ref_known(v_e_310_, 2);
v___x_329_ = l_Lean_Expr_app___override(v_fst_316_, v_fst_319_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_329_);
v___x_331_ = v___x_322_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_snd_320_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
else
{
size_t v___x_333_; size_t v___x_334_; uint8_t v___x_335_; 
v___x_333_ = lean_ptr_addr(v_arg_325_);
v___x_334_ = lean_ptr_addr(v_fst_319_);
v___x_335_ = lean_usize_dec_eq(v___x_333_, v___x_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_338_; 
lean_dec_ref_known(v_e_310_, 2);
v___x_336_ = l_Lean_Expr_app___override(v_fst_316_, v_fst_319_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_336_);
v___x_338_ = v___x_322_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_snd_320_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
else
{
lean_object* v___x_341_; 
lean_dec(v_fst_319_);
lean_dec(v_fst_316_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v_e_310_);
v___x_341_ = v___x_322_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_e_310_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_snd_320_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
else
{
lean_object* v_snd_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_fst_316_);
lean_dec_ref(v_e_310_);
v_snd_344_ = lean_ctor_get(v___x_318_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v___x_318_, 0);
lean_dec(v_unused_354_);
v___x_346_ = v___x_318_;
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_snd_344_);
lean_dec(v___x_318_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_348_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3);
v___x_349_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(v___x_348_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_349_);
v___x_351_ = v___x_346_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_snd_344_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_355_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_356_ = lean_unsigned_to_nat(21u);
v___x_357_ = lean_unsigned_to_nat(99u);
v___x_358_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_359_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_360_ = l_mkPanicMessageWithDecl(v___x_359_, v___x_358_, v___x_357_, v___x_356_, v___x_355_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object* v_start_361_, lean_object* v_stop_362_, lean_object* v_args_363_, lean_object* v_e_364_, lean_object* v_offset_365_, lean_object* v___y_366_){
_start:
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = l_Lean_Expr_looseBVarRange(v_e_364_);
v___x_368_ = lean_nat_dec_le(v___x_367_, v_offset_365_);
lean_dec(v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; lean_object* v_fst_371_; lean_object* v_snd_372_; lean_object* v___y_376_; lean_object* v___x_379_; 
lean_inc(v_offset_365_);
lean_inc_ref(v_e_364_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_e_364_);
lean_ctor_set(v___x_369_, 1, v_offset_365_);
v___x_379_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v___y_366_, v___x_369_);
if (lean_obj_tag(v___x_379_) == 0)
{
switch(lean_obj_tag(v_e_364_))
{
case 0:
{
lean_object* v_deBruijnIndex_380_; lean_object* v___x_381_; 
v_deBruijnIndex_380_ = lean_ctor_get(v_e_364_, 0);
lean_inc(v_deBruijnIndex_380_);
lean_dec_ref_known(v_e_364_, 1);
v___x_381_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(v_start_361_, v_stop_362_, v_args_363_, v_deBruijnIndex_380_, v_offset_365_);
lean_dec(v_offset_365_);
lean_dec(v_deBruijnIndex_380_);
v_fst_371_ = v___x_381_;
v_snd_372_ = v___y_366_;
goto v___jp_370_;
}
case 1:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec_ref_known(v_e_364_, 1);
lean_dec(v_offset_365_);
v___x_382_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3);
v___x_383_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_382_, v___y_366_);
v___y_376_ = v___x_383_;
goto v___jp_375_;
}
case 2:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
lean_dec_ref_known(v_e_364_, 1);
lean_dec(v_offset_365_);
v___x_384_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4);
v___x_385_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_384_, v___y_366_);
v___y_376_ = v___x_385_;
goto v___jp_375_;
}
case 3:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
lean_dec_ref_known(v_e_364_, 1);
lean_dec(v_offset_365_);
v___x_386_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5);
v___x_387_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_386_, v___y_366_);
v___y_376_ = v___x_387_;
goto v___jp_375_;
}
case 4:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref_known(v_e_364_, 2);
lean_dec(v_offset_365_);
v___x_388_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6);
v___x_389_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_388_, v___y_366_);
v___y_376_ = v___x_389_;
goto v___jp_375_;
}
case 5:
{
lean_object* v_fn_390_; lean_object* v_arg_391_; lean_object* v_head_392_; uint8_t v___x_393_; 
v_fn_390_ = lean_ctor_get(v_e_364_, 0);
v_arg_391_ = lean_ctor_get(v_e_364_, 1);
v_head_392_ = l_Lean_Expr_getAppFn(v_e_364_);
v___x_393_ = l_Lean_Expr_isBVar(v_head_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; 
lean_inc_ref(v_arg_391_);
lean_inc_ref(v_fn_390_);
lean_dec_ref(v_head_392_);
v___x_394_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_361_, v_stop_362_, v_args_363_, v_e_364_, v_fn_390_, v_arg_391_, v_offset_365_, v___y_366_);
v___y_376_ = v___x_394_;
goto v___jp_375_;
}
else
{
lean_object* v___x_395_; lean_object* v_fst_396_; lean_object* v_snd_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; size_t v_sz_401_; size_t v___x_402_; lean_object* v___x_403_; lean_object* v_fst_404_; lean_object* v_snd_405_; lean_object* v___x_406_; 
lean_inc(v_offset_365_);
v___x_395_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_head_392_, v_offset_365_, v___y_366_);
v_fst_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_fst_396_);
v_snd_397_ = lean_ctor_get(v___x_395_, 1);
lean_inc(v_snd_397_);
lean_dec_ref(v___x_395_);
v___x_398_ = l_Lean_Expr_getAppNumArgs(v_e_364_);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
lean_dec(v___x_398_);
v___x_400_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_364_, v___x_399_);
v_sz_401_ = lean_array_size(v___x_400_);
v___x_402_ = ((size_t)0ULL);
v___x_403_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_361_, v_stop_362_, v_args_363_, v_offset_365_, v_sz_401_, v___x_402_, v___x_400_, v_snd_397_);
v_fst_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_fst_404_);
v_snd_405_ = lean_ctor_get(v___x_403_, 1);
lean_inc(v_snd_405_);
lean_dec_ref(v___x_403_);
v___x_406_ = l_Lean_Expr_betaRev(v_fst_396_, v_fst_404_, v___x_368_, v___x_368_);
lean_dec(v_fst_404_);
v_fst_371_ = v___x_406_;
v_snd_372_ = v_snd_405_;
goto v___jp_370_;
}
}
case 6:
{
lean_object* v_binderName_407_; lean_object* v_binderType_408_; lean_object* v_body_409_; uint8_t v_binderInfo_410_; lean_object* v___x_411_; lean_object* v_fst_412_; lean_object* v_snd_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_fst_417_; lean_object* v_snd_418_; size_t v___x_419_; size_t v___x_420_; uint8_t v___x_421_; 
v_binderName_407_ = lean_ctor_get(v_e_364_, 0);
v_binderType_408_ = lean_ctor_get(v_e_364_, 1);
v_body_409_ = lean_ctor_get(v_e_364_, 2);
v_binderInfo_410_ = lean_ctor_get_uint8(v_e_364_, sizeof(void*)*3 + 8);
lean_inc(v_offset_365_);
lean_inc_ref(v_binderType_408_);
v___x_411_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_binderType_408_, v_offset_365_, v___y_366_);
v_fst_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_fst_412_);
v_snd_413_ = lean_ctor_get(v___x_411_, 1);
lean_inc(v_snd_413_);
lean_dec_ref(v___x_411_);
v___x_414_ = lean_unsigned_to_nat(1u);
v___x_415_ = lean_nat_add(v_offset_365_, v___x_414_);
lean_dec(v_offset_365_);
lean_inc_ref(v_body_409_);
v___x_416_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_body_409_, v___x_415_, v_snd_413_);
v_fst_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_fst_417_);
v_snd_418_ = lean_ctor_get(v___x_416_, 1);
lean_inc(v_snd_418_);
lean_dec_ref(v___x_416_);
v___x_419_ = lean_ptr_addr(v_binderType_408_);
v___x_420_ = lean_ptr_addr(v_fst_412_);
v___x_421_ = lean_usize_dec_eq(v___x_419_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
lean_inc(v_binderName_407_);
lean_dec_ref_known(v_e_364_, 3);
v___x_422_ = l_Lean_Expr_lam___override(v_binderName_407_, v_fst_412_, v_fst_417_, v_binderInfo_410_);
v_fst_371_ = v___x_422_;
v_snd_372_ = v_snd_418_;
goto v___jp_370_;
}
else
{
size_t v___x_423_; size_t v___x_424_; uint8_t v___x_425_; 
v___x_423_ = lean_ptr_addr(v_body_409_);
v___x_424_ = lean_ptr_addr(v_fst_417_);
v___x_425_ = lean_usize_dec_eq(v___x_423_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; 
lean_inc(v_binderName_407_);
lean_dec_ref_known(v_e_364_, 3);
v___x_426_ = l_Lean_Expr_lam___override(v_binderName_407_, v_fst_412_, v_fst_417_, v_binderInfo_410_);
v_fst_371_ = v___x_426_;
v_snd_372_ = v_snd_418_;
goto v___jp_370_;
}
else
{
uint8_t v___x_427_; 
v___x_427_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_410_, v_binderInfo_410_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
lean_inc(v_binderName_407_);
lean_dec_ref_known(v_e_364_, 3);
v___x_428_ = l_Lean_Expr_lam___override(v_binderName_407_, v_fst_412_, v_fst_417_, v_binderInfo_410_);
v_fst_371_ = v___x_428_;
v_snd_372_ = v_snd_418_;
goto v___jp_370_;
}
else
{
lean_dec(v_fst_417_);
lean_dec(v_fst_412_);
v_fst_371_ = v_e_364_;
v_snd_372_ = v_snd_418_;
goto v___jp_370_;
}
}
}
}
case 7:
{
lean_object* v_binderName_429_; lean_object* v_binderType_430_; lean_object* v_body_431_; uint8_t v_binderInfo_432_; lean_object* v___x_433_; lean_object* v_fst_434_; lean_object* v_snd_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v_fst_439_; lean_object* v_snd_440_; size_t v___x_441_; size_t v___x_442_; uint8_t v___x_443_; 
v_binderName_429_ = lean_ctor_get(v_e_364_, 0);
v_binderType_430_ = lean_ctor_get(v_e_364_, 1);
v_body_431_ = lean_ctor_get(v_e_364_, 2);
v_binderInfo_432_ = lean_ctor_get_uint8(v_e_364_, sizeof(void*)*3 + 8);
lean_inc(v_offset_365_);
lean_inc_ref(v_binderType_430_);
v___x_433_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_binderType_430_, v_offset_365_, v___y_366_);
v_fst_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_fst_434_);
v_snd_435_ = lean_ctor_get(v___x_433_, 1);
lean_inc(v_snd_435_);
lean_dec_ref(v___x_433_);
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = lean_nat_add(v_offset_365_, v___x_436_);
lean_dec(v_offset_365_);
lean_inc_ref(v_body_431_);
v___x_438_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_body_431_, v___x_437_, v_snd_435_);
v_fst_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_fst_439_);
v_snd_440_ = lean_ctor_get(v___x_438_, 1);
lean_inc(v_snd_440_);
lean_dec_ref(v___x_438_);
v___x_441_ = lean_ptr_addr(v_binderType_430_);
v___x_442_ = lean_ptr_addr(v_fst_434_);
v___x_443_ = lean_usize_dec_eq(v___x_441_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; 
lean_inc(v_binderName_429_);
lean_dec_ref_known(v_e_364_, 3);
v___x_444_ = l_Lean_Expr_forallE___override(v_binderName_429_, v_fst_434_, v_fst_439_, v_binderInfo_432_);
v_fst_371_ = v___x_444_;
v_snd_372_ = v_snd_440_;
goto v___jp_370_;
}
else
{
size_t v___x_445_; size_t v___x_446_; uint8_t v___x_447_; 
v___x_445_ = lean_ptr_addr(v_body_431_);
v___x_446_ = lean_ptr_addr(v_fst_439_);
v___x_447_ = lean_usize_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
lean_inc(v_binderName_429_);
lean_dec_ref_known(v_e_364_, 3);
v___x_448_ = l_Lean_Expr_forallE___override(v_binderName_429_, v_fst_434_, v_fst_439_, v_binderInfo_432_);
v_fst_371_ = v___x_448_;
v_snd_372_ = v_snd_440_;
goto v___jp_370_;
}
else
{
uint8_t v___x_449_; 
v___x_449_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_432_, v_binderInfo_432_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; 
lean_inc(v_binderName_429_);
lean_dec_ref_known(v_e_364_, 3);
v___x_450_ = l_Lean_Expr_forallE___override(v_binderName_429_, v_fst_434_, v_fst_439_, v_binderInfo_432_);
v_fst_371_ = v___x_450_;
v_snd_372_ = v_snd_440_;
goto v___jp_370_;
}
else
{
lean_dec(v_fst_439_);
lean_dec(v_fst_434_);
v_fst_371_ = v_e_364_;
v_snd_372_ = v_snd_440_;
goto v___jp_370_;
}
}
}
}
case 8:
{
lean_object* v_declName_451_; lean_object* v_type_452_; lean_object* v_value_453_; lean_object* v_body_454_; uint8_t v_nondep_455_; lean_object* v___x_456_; lean_object* v_fst_457_; lean_object* v_snd_458_; lean_object* v___x_459_; lean_object* v_fst_460_; lean_object* v_snd_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v_fst_465_; lean_object* v_snd_466_; size_t v___x_467_; size_t v___x_468_; uint8_t v___x_469_; 
v_declName_451_ = lean_ctor_get(v_e_364_, 0);
v_type_452_ = lean_ctor_get(v_e_364_, 1);
v_value_453_ = lean_ctor_get(v_e_364_, 2);
v_body_454_ = lean_ctor_get(v_e_364_, 3);
v_nondep_455_ = lean_ctor_get_uint8(v_e_364_, sizeof(void*)*4 + 8);
lean_inc_n(v_offset_365_, 2);
lean_inc_ref(v_type_452_);
v___x_456_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_type_452_, v_offset_365_, v___y_366_);
v_fst_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_fst_457_);
v_snd_458_ = lean_ctor_get(v___x_456_, 1);
lean_inc(v_snd_458_);
lean_dec_ref(v___x_456_);
lean_inc_ref(v_value_453_);
v___x_459_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_value_453_, v_offset_365_, v_snd_458_);
v_fst_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_fst_460_);
v_snd_461_ = lean_ctor_get(v___x_459_, 1);
lean_inc(v_snd_461_);
lean_dec_ref(v___x_459_);
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = lean_nat_add(v_offset_365_, v___x_462_);
lean_dec(v_offset_365_);
lean_inc_ref(v_body_454_);
v___x_464_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_body_454_, v___x_463_, v_snd_461_);
v_fst_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_fst_465_);
v_snd_466_ = lean_ctor_get(v___x_464_, 1);
lean_inc(v_snd_466_);
lean_dec_ref(v___x_464_);
v___x_467_ = lean_ptr_addr(v_type_452_);
v___x_468_ = lean_ptr_addr(v_fst_457_);
v___x_469_ = lean_usize_dec_eq(v___x_467_, v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
lean_inc(v_declName_451_);
lean_dec_ref_known(v_e_364_, 4);
v___x_470_ = l_Lean_Expr_letE___override(v_declName_451_, v_fst_457_, v_fst_460_, v_fst_465_, v_nondep_455_);
v_fst_371_ = v___x_470_;
v_snd_372_ = v_snd_466_;
goto v___jp_370_;
}
else
{
size_t v___x_471_; size_t v___x_472_; uint8_t v___x_473_; 
v___x_471_ = lean_ptr_addr(v_value_453_);
v___x_472_ = lean_ptr_addr(v_fst_460_);
v___x_473_ = lean_usize_dec_eq(v___x_471_, v___x_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; 
lean_inc(v_declName_451_);
lean_dec_ref_known(v_e_364_, 4);
v___x_474_ = l_Lean_Expr_letE___override(v_declName_451_, v_fst_457_, v_fst_460_, v_fst_465_, v_nondep_455_);
v_fst_371_ = v___x_474_;
v_snd_372_ = v_snd_466_;
goto v___jp_370_;
}
else
{
size_t v___x_475_; size_t v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_ptr_addr(v_body_454_);
v___x_476_ = lean_ptr_addr(v_fst_465_);
v___x_477_ = lean_usize_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
lean_inc(v_declName_451_);
lean_dec_ref_known(v_e_364_, 4);
v___x_478_ = l_Lean_Expr_letE___override(v_declName_451_, v_fst_457_, v_fst_460_, v_fst_465_, v_nondep_455_);
v_fst_371_ = v___x_478_;
v_snd_372_ = v_snd_466_;
goto v___jp_370_;
}
else
{
lean_dec(v_fst_465_);
lean_dec(v_fst_460_);
lean_dec(v_fst_457_);
v_fst_371_ = v_e_364_;
v_snd_372_ = v_snd_466_;
goto v___jp_370_;
}
}
}
}
case 9:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec_ref_known(v_e_364_, 1);
lean_dec(v_offset_365_);
v___x_479_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7);
v___x_480_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_479_, v___y_366_);
v___y_376_ = v___x_480_;
goto v___jp_375_;
}
case 10:
{
lean_object* v_data_481_; lean_object* v_expr_482_; lean_object* v___x_483_; lean_object* v_fst_484_; lean_object* v_snd_485_; size_t v___x_486_; size_t v___x_487_; uint8_t v___x_488_; 
v_data_481_ = lean_ctor_get(v_e_364_, 0);
v_expr_482_ = lean_ctor_get(v_e_364_, 1);
lean_inc_ref(v_expr_482_);
v___x_483_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_expr_482_, v_offset_365_, v___y_366_);
v_fst_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_fst_484_);
v_snd_485_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_snd_485_);
lean_dec_ref(v___x_483_);
v___x_486_ = lean_ptr_addr(v_expr_482_);
v___x_487_ = lean_ptr_addr(v_fst_484_);
v___x_488_ = lean_usize_dec_eq(v___x_486_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_inc(v_data_481_);
lean_dec_ref_known(v_e_364_, 2);
v___x_489_ = l_Lean_Expr_mdata___override(v_data_481_, v_fst_484_);
v_fst_371_ = v___x_489_;
v_snd_372_ = v_snd_485_;
goto v___jp_370_;
}
else
{
lean_dec(v_fst_484_);
v_fst_371_ = v_e_364_;
v_snd_372_ = v_snd_485_;
goto v___jp_370_;
}
}
default: 
{
lean_object* v_typeName_490_; lean_object* v_idx_491_; lean_object* v_struct_492_; lean_object* v___x_493_; lean_object* v_fst_494_; lean_object* v_snd_495_; size_t v___x_496_; size_t v___x_497_; uint8_t v___x_498_; 
v_typeName_490_ = lean_ctor_get(v_e_364_, 0);
v_idx_491_ = lean_ctor_get(v_e_364_, 1);
v_struct_492_ = lean_ctor_get(v_e_364_, 2);
lean_inc_ref(v_struct_492_);
v___x_493_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_361_, v_stop_362_, v_args_363_, v_struct_492_, v_offset_365_, v___y_366_);
v_fst_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_fst_494_);
v_snd_495_ = lean_ctor_get(v___x_493_, 1);
lean_inc(v_snd_495_);
lean_dec_ref(v___x_493_);
v___x_496_ = lean_ptr_addr(v_struct_492_);
v___x_497_ = lean_ptr_addr(v_fst_494_);
v___x_498_ = lean_usize_dec_eq(v___x_496_, v___x_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_inc(v_idx_491_);
lean_inc(v_typeName_490_);
lean_dec_ref_known(v_e_364_, 3);
v___x_499_ = l_Lean_Expr_proj___override(v_typeName_490_, v_idx_491_, v_fst_494_);
v_fst_371_ = v___x_499_;
v_snd_372_ = v_snd_495_;
goto v___jp_370_;
}
else
{
lean_dec(v_fst_494_);
v_fst_371_ = v_e_364_;
v_snd_372_ = v_snd_495_;
goto v___jp_370_;
}
}
}
}
else
{
lean_object* v_val_500_; lean_object* v___x_501_; 
lean_dec_ref_known(v___x_369_, 2);
lean_dec(v_offset_365_);
lean_dec_ref(v_e_364_);
v_val_500_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_val_500_);
lean_dec_ref_known(v___x_379_, 1);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v_val_500_);
lean_ctor_set(v___x_501_, 1, v___y_366_);
return v___x_501_;
}
v___jp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
lean_inc_ref(v_fst_371_);
v___x_373_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_snd_372_, v___x_369_, v_fst_371_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v_fst_371_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
return v___x_374_;
}
v___jp_375_:
{
lean_object* v_fst_377_; lean_object* v_snd_378_; 
v_fst_377_ = lean_ctor_get(v___y_376_, 0);
lean_inc(v_fst_377_);
v_snd_378_ = lean_ctor_get(v___y_376_, 1);
lean_inc(v_snd_378_);
lean_dec_ref(v___y_376_);
v_fst_371_ = v_fst_377_;
v_snd_372_ = v_snd_378_;
goto v___jp_370_;
}
}
else
{
lean_object* v___x_502_; 
lean_dec(v_offset_365_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v_e_364_);
lean_ctor_set(v___x_502_, 1, v___y_366_);
return v___x_502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object* v_start_503_, lean_object* v_stop_504_, lean_object* v_args_505_, lean_object* v_offset_506_, size_t v_sz_507_, size_t v_i_508_, lean_object* v_bs_509_, lean_object* v___y_510_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = lean_usize_dec_lt(v_i_508_, v_sz_507_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
lean_dec(v_offset_506_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v_bs_509_);
lean_ctor_set(v___x_512_, 1, v___y_510_);
return v___x_512_;
}
else
{
lean_object* v_v_513_; lean_object* v___x_514_; lean_object* v_fst_515_; lean_object* v_snd_516_; lean_object* v___x_517_; lean_object* v_bs_x27_518_; size_t v___x_519_; size_t v___x_520_; lean_object* v___x_521_; 
v_v_513_ = lean_array_uget_borrowed(v_bs_509_, v_i_508_);
lean_inc(v_offset_506_);
lean_inc(v_v_513_);
v___x_514_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_503_, v_stop_504_, v_args_505_, v_v_513_, v_offset_506_, v___y_510_);
v_fst_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_fst_515_);
v_snd_516_ = lean_ctor_get(v___x_514_, 1);
lean_inc(v_snd_516_);
lean_dec_ref(v___x_514_);
v___x_517_ = lean_unsigned_to_nat(0u);
v_bs_x27_518_ = lean_array_uset(v_bs_509_, v_i_508_, v___x_517_);
v___x_519_ = ((size_t)1ULL);
v___x_520_ = lean_usize_add(v_i_508_, v___x_519_);
v___x_521_ = lean_array_uset(v_bs_x27_518_, v_i_508_, v_fst_515_);
v_i_508_ = v___x_520_;
v_bs_509_ = v___x_521_;
v___y_510_ = v_snd_516_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object* v_start_523_, lean_object* v_stop_524_, lean_object* v_args_525_, lean_object* v_offset_526_, lean_object* v_sz_527_, lean_object* v_i_528_, lean_object* v_bs_529_, lean_object* v___y_530_){
_start:
{
size_t v_sz_boxed_531_; size_t v_i_boxed_532_; lean_object* v_res_533_; 
v_sz_boxed_531_ = lean_unbox_usize(v_sz_527_);
lean_dec(v_sz_527_);
v_i_boxed_532_ = lean_unbox_usize(v_i_528_);
lean_dec(v_i_528_);
v_res_533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_523_, v_stop_524_, v_args_525_, v_offset_526_, v_sz_boxed_531_, v_i_boxed_532_, v_bs_529_, v___y_530_);
lean_dec_ref(v_args_525_);
lean_dec(v_stop_524_);
lean_dec(v_start_523_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta___boxed(lean_object* v_start_534_, lean_object* v_stop_535_, lean_object* v_args_536_, lean_object* v_e_537_, lean_object* v_offset_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(v_start_534_, v_stop_535_, v_args_536_, v_e_537_, v_offset_538_, v___y_539_);
lean_dec_ref(v_args_536_);
lean_dec(v_stop_535_);
lean_dec(v_start_534_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___boxed(lean_object* v_start_541_, lean_object* v_stop_542_, lean_object* v_args_543_, lean_object* v_e_544_, lean_object* v_f_545_, lean_object* v_a_546_, lean_object* v_offset_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_541_, v_stop_542_, v_args_543_, v_e_544_, v_f_545_, v_a_546_, v_offset_547_, v___y_548_);
lean_dec_ref(v_args_543_);
lean_dec(v_stop_542_);
lean_dec(v_start_541_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object* v_start_550_, lean_object* v_stop_551_, lean_object* v_args_552_, lean_object* v_e_553_, lean_object* v_offset_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_550_, v_stop_551_, v_args_552_, v_e_553_, v_offset_554_, v___y_555_);
lean_dec_ref(v_args_552_);
lean_dec(v_stop_551_);
lean_dec(v_start_550_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(lean_object* v_00_u03b2_557_, lean_object* v_m_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_m_558_, v_a_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___boxed(lean_object* v_00_u03b2_561_, lean_object* v_m_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(v_00_u03b2_561_, v_m_562_, v_a_563_);
lean_dec_ref(v_a_563_);
lean_dec_ref(v_m_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1(lean_object* v_00_u03b2_565_, lean_object* v_m_566_, lean_object* v_a_567_, lean_object* v_b_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_m_566_, v_a_567_, v_b_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(lean_object* v_00_u03b2_570_, lean_object* v_a_571_, lean_object* v_x_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_571_, v_x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___boxed(lean_object* v_00_u03b2_574_, lean_object* v_a_575_, lean_object* v_x_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(v_00_u03b2_574_, v_a_575_, v_x_576_);
lean_dec(v_x_576_);
lean_dec_ref(v_a_575_);
return v_res_577_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(lean_object* v_00_u03b2_578_, lean_object* v_a_579_, lean_object* v_x_580_){
_start:
{
uint8_t v___x_581_; 
v___x_581_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_579_, v_x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___boxed(lean_object* v_00_u03b2_582_, lean_object* v_a_583_, lean_object* v_x_584_){
_start:
{
uint8_t v_res_585_; lean_object* v_r_586_; 
v_res_585_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(v_00_u03b2_582_, v_a_583_, v_x_584_);
lean_dec(v_x_584_);
lean_dec_ref(v_a_583_);
v_r_586_ = lean_box(v_res_585_);
return v_r_586_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3(lean_object* v_00_u03b2_587_, lean_object* v_data_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(v_data_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4(lean_object* v_00_u03b2_590_, lean_object* v_a_591_, lean_object* v_b_592_, lean_object* v_x_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_591_, v_b_592_, v_x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_595_, lean_object* v_i_596_, lean_object* v_source_597_, lean_object* v_target_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(v_i_596_, v_source_597_, v_target_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10(lean_object* v_00_u03b2_600_, lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(v_x_601_, v_x_602_);
return v___x_603_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object* v_as_604_, size_t v_i_605_, size_t v_stop_606_){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = lean_usize_dec_eq(v_i_605_, v_stop_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_608_ = lean_array_uget_borrowed(v_as_604_, v_i_605_);
v___x_609_ = l_Lean_Expr_consumeMData(v___x_608_);
v___x_610_ = l_Lean_Expr_isLambda(v___x_609_);
lean_dec_ref(v___x_609_);
if (v___x_610_ == 0)
{
size_t v___x_611_; size_t v___x_612_; 
v___x_611_ = ((size_t)1ULL);
v___x_612_ = lean_usize_add(v_i_605_, v___x_611_);
v_i_605_ = v___x_612_;
goto _start;
}
else
{
return v___x_610_;
}
}
else
{
uint8_t v___x_614_; 
v___x_614_ = 0;
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0___boxed(lean_object* v_as_615_, lean_object* v_i_616_, lean_object* v_stop_617_){
_start:
{
size_t v_i_boxed_618_; size_t v_stop_boxed_619_; uint8_t v_res_620_; lean_object* v_r_621_; 
v_i_boxed_618_ = lean_unbox_usize(v_i_616_);
lean_dec(v_i_616_);
v_stop_boxed_619_ = lean_unbox_usize(v_stop_617_);
lean_dec(v_stop_617_);
v_res_620_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v_as_615_, v_i_boxed_618_, v_stop_boxed_619_);
lean_dec_ref(v_as_615_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__0(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_622_ = lean_box(0);
v___x_623_ = lean_unsigned_to_nat(16u);
v___x_624_ = lean_mk_array(v___x_623_, v___x_622_);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__1(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_625_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__0, &l_Lean_Expr_instantiateBetaRevRange___closed__0_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__0);
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
lean_ctor_set(v___x_627_, 1, v___x_625_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__4(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_630_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__3));
v___x_631_ = lean_unsigned_to_nat(4u);
v___x_632_ = lean_unsigned_to_nat(39u);
v___x_633_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__2));
v___x_634_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_635_ = l_mkPanicMessageWithDecl(v___x_634_, v___x_633_, v___x_632_, v___x_631_, v___x_630_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object* v_e_636_, lean_object* v_start_637_, lean_object* v_stop_638_, lean_object* v_args_639_){
_start:
{
lean_object* v___y_641_; uint8_t v___y_653_; uint8_t v___x_660_; 
v___x_660_ = l_Lean_Expr_hasLooseBVars(v_e_636_);
if (v___x_660_ == 0)
{
v___y_653_ = v___x_660_;
goto v___jp_652_;
}
else
{
uint8_t v___x_661_; 
v___x_661_ = lean_nat_dec_lt(v_start_637_, v_stop_638_);
v___y_653_ = v___x_661_;
goto v___jp_652_;
}
v___jp_640_:
{
uint8_t v___x_642_; 
v___x_642_ = lean_nat_dec_lt(v_start_637_, v___y_641_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; 
lean_dec(v___y_641_);
v___x_643_ = lean_expr_instantiate_rev_range(v_e_636_, v_start_637_, v_stop_638_, v_args_639_);
lean_dec(v_stop_638_);
lean_dec_ref(v_e_636_);
return v___x_643_;
}
else
{
size_t v___x_644_; size_t v___x_645_; uint8_t v___x_646_; 
v___x_644_ = lean_usize_of_nat(v_start_637_);
v___x_645_ = lean_usize_of_nat(v___y_641_);
lean_dec(v___y_641_);
v___x_646_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v_args_639_, v___x_644_, v___x_645_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; 
v___x_647_ = lean_expr_instantiate_rev_range(v_e_636_, v_start_637_, v_stop_638_, v_args_639_);
lean_dec(v_stop_638_);
lean_dec_ref(v_e_636_);
return v___x_647_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v_fst_651_; 
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__1, &l_Lean_Expr_instantiateBetaRevRange___closed__1_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__1);
v___x_650_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_637_, v_stop_638_, v_args_639_, v_e_636_, v___x_648_, v___x_649_);
lean_dec(v_stop_638_);
v_fst_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_fst_651_);
lean_dec_ref(v___x_650_);
return v_fst_651_;
}
}
}
v___jp_652_:
{
if (v___y_653_ == 0)
{
lean_dec(v_stop_638_);
return v_e_636_;
}
else
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = lean_array_get_size(v_args_639_);
v___x_655_ = lean_nat_dec_le(v_stop_638_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; 
lean_dec(v_stop_638_);
lean_dec_ref(v_e_636_);
v___x_656_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__4, &l_Lean_Expr_instantiateBetaRevRange___closed__4_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__4);
v___x_657_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(v___x_656_);
return v___x_657_;
}
else
{
uint8_t v___x_658_; 
v___x_658_ = lean_nat_dec_lt(v_start_637_, v_stop_638_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; 
v___x_659_ = lean_expr_instantiate_rev_range(v_e_636_, v_start_637_, v_stop_638_, v_args_639_);
lean_dec(v_stop_638_);
lean_dec_ref(v_e_636_);
return v___x_659_;
}
else
{
if (v___x_655_ == 0)
{
v___y_641_ = v___x_654_;
goto v___jp_640_;
}
else
{
lean_inc(v_stop_638_);
v___y_641_ = v_stop_638_;
goto v___jp_640_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object* v_e_662_, lean_object* v_start_663_, lean_object* v_stop_664_, lean_object* v_args_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Expr_instantiateBetaRevRange(v_e_662_, v_start_663_, v_stop_664_, v_args_665_);
lean_dec_ref(v_args_665_);
lean_dec(v_start_663_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object* v_msgData_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_673_; lean_object* v_env_674_; lean_object* v___x_675_; lean_object* v_toCold_676_; lean_object* v_mctx_677_; lean_object* v_lctx_678_; lean_object* v_options_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_673_ = lean_st_ref_get(v___y_671_);
v_env_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc_ref(v_env_674_);
lean_dec(v___x_673_);
v___x_675_ = lean_st_ref_get(v___y_669_);
v_toCold_676_ = lean_ctor_get(v___y_670_, 0);
v_mctx_677_ = lean_ctor_get(v___x_675_, 0);
lean_inc_ref(v_mctx_677_);
lean_dec(v___x_675_);
v_lctx_678_ = lean_ctor_get(v___y_668_, 2);
v_options_679_ = lean_ctor_get(v_toCold_676_, 2);
lean_inc_ref(v_options_679_);
lean_inc_ref(v_lctx_678_);
v___x_680_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_680_, 0, v_env_674_);
lean_ctor_set(v___x_680_, 1, v_mctx_677_);
lean_ctor_set(v___x_680_, 2, v_lctx_678_);
lean_ctor_set(v___x_680_, 3, v_options_679_);
v___x_681_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v_msgData_667_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object* v_msgData_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msgData_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object* v_msg_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_ref_696_; lean_object* v___x_697_; lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_706_; 
v_ref_696_ = lean_ctor_get(v___y_693_, 2);
v___x_697_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msg_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_706_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_706_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_706_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_702_; lean_object* v___x_704_; 
lean_inc(v_ref_696_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v_ref_696_);
lean_ctor_set(v___x_702_, 1, v_a_698_);
if (v_isShared_701_ == 0)
{
lean_ctor_set_tag(v___x_700_, 1);
lean_ctor_set(v___x_700_, 0, v___x_702_);
v___x_704_ = v___x_700_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object* v_msg_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_713_;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = ((lean_object*)(l_Lean_Meta_throwFunctionExpected___redArg___closed__0));
v___x_716_ = l_Lean_stringToMessageData(v___x_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object* v_f_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_723_ = lean_obj_once(&l_Lean_Meta_throwFunctionExpected___redArg___closed__1, &l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1);
v___x_724_ = l_Lean_indentExpr(v_f_717_);
v___x_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_725_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object* v_f_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object* v_00_u03b1_734_, lean_object* v_f_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object* v_00_u03b1_742_, lean_object* v_f_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Meta_throwFunctionExpected(v_00_u03b1_742_, v_f_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object* v_00_u03b1_750_, lean_object* v_msg_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object* v_00_u03b1_758_, lean_object* v_msg_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(v_00_u03b1_758_, v_msg_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object* v_upperBound_766_, lean_object* v_args_767_, lean_object* v_f_768_, lean_object* v_a_769_, lean_object* v_b_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_a_777_; uint8_t v___x_781_; 
v___x_781_ = lean_nat_dec_lt(v_a_769_, v_upperBound_766_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; 
lean_dec(v_a_769_);
lean_dec_ref(v_f_768_);
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v_b_770_);
return v___x_782_;
}
else
{
lean_object* v_fst_783_; 
v_fst_783_ = lean_ctor_get(v_b_770_, 0);
lean_inc(v_fst_783_);
if (lean_obj_tag(v_fst_783_) == 7)
{
lean_object* v_snd_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_792_; 
v_snd_784_ = lean_ctor_get(v_b_770_, 1);
v_isSharedCheck_792_ = !lean_is_exclusive(v_b_770_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v_b_770_, 0);
lean_dec(v_unused_793_);
v___x_786_ = v_b_770_;
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_snd_784_);
lean_dec(v_b_770_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v_body_788_; lean_object* v___x_790_; 
v_body_788_ = lean_ctor_get(v_fst_783_, 2);
lean_inc_ref(v_body_788_);
lean_dec_ref_known(v_fst_783_, 3);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v_body_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_body_788_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v_snd_784_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
v_a_777_ = v___x_790_;
goto v___jp_776_;
}
}
}
else
{
lean_object* v_snd_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_829_; 
v_snd_794_ = lean_ctor_get(v_b_770_, 1);
v_isSharedCheck_829_ = !lean_is_exclusive(v_b_770_);
if (v_isSharedCheck_829_ == 0)
{
lean_object* v_unused_830_; 
v_unused_830_ = lean_ctor_get(v_b_770_, 0);
lean_dec(v_unused_830_);
v___x_796_ = v_b_770_;
v_isShared_797_ = v_isSharedCheck_829_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_snd_794_);
lean_dec(v_b_770_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_829_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_769_);
lean_inc(v_fst_783_);
v___x_799_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_783_, v_snd_794_, v_a_769_, v_args_767_);
lean_inc(v___y_774_);
lean_inc_ref(v___y_773_);
lean_inc(v___y_772_);
lean_inc_ref(v___y_771_);
v___x_800_ = lean_whnf(v___x_799_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_801_);
lean_dec_ref_known(v___x_800_, 1);
if (lean_obj_tag(v_a_801_) == 7)
{
lean_object* v_body_802_; lean_object* v___x_804_; 
lean_dec(v_snd_794_);
lean_dec(v_fst_783_);
v_body_802_ = lean_ctor_get(v_a_801_, 2);
lean_inc_ref(v_body_802_);
lean_dec_ref_known(v_a_801_, 3);
lean_inc(v_a_769_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v_a_769_);
lean_ctor_set(v___x_796_, 0, v_body_802_);
v___x_804_ = v___x_796_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_body_802_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_a_769_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
v_a_777_ = v___x_804_;
goto v___jp_776_;
}
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
lean_dec(v_a_801_);
v___x_806_ = lean_unsigned_to_nat(1u);
v___x_807_ = lean_nat_add(v_a_769_, v___x_806_);
lean_inc_ref(v_f_768_);
v___x_808_ = l_Lean_mkAppRange(v_f_768_, v___x_798_, v___x_807_, v_args_767_);
lean_dec(v___x_807_);
v___x_809_ = l_Lean_Meta_throwFunctionExpected___redArg(v___x_808_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v___x_811_; 
lean_dec_ref_known(v___x_809_, 1);
if (v_isShared_797_ == 0)
{
v___x_811_ = v___x_796_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_fst_783_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_snd_794_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
v_a_777_ = v___x_811_;
goto v___jp_776_;
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_del_object(v___x_796_);
lean_dec(v_snd_794_);
lean_dec(v_fst_783_);
lean_dec(v_a_769_);
lean_dec_ref(v_f_768_);
v_a_813_ = lean_ctor_get(v___x_809_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_809_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_809_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_del_object(v___x_796_);
lean_dec(v_snd_794_);
lean_dec(v_fst_783_);
lean_dec(v_a_769_);
lean_dec_ref(v_f_768_);
v_a_821_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_800_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_800_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
}
v___jp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_unsigned_to_nat(1u);
v___x_779_ = lean_nat_add(v_a_769_, v___x_778_);
lean_dec(v_a_769_);
v_a_769_ = v___x_779_;
v_b_770_ = v_a_777_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object* v_upperBound_831_, lean_object* v_args_832_, lean_object* v_f_833_, lean_object* v_a_834_, lean_object* v_b_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_831_, v_args_832_, v_f_833_, v_a_834_, v_b_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec_ref(v_args_832_);
lean_dec(v_upperBound_831_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object* v_f_842_, lean_object* v_args_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v___x_849_; 
lean_inc(v___y_847_);
lean_inc_ref(v___y_846_);
lean_inc(v___y_845_);
lean_inc_ref(v___y_844_);
lean_inc_ref(v_f_842_);
v___x_849_ = lean_infer_type(v_f_842_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = lean_array_get_size(v_args_843_);
v___x_852_ = lean_unsigned_to_nat(0u);
v___x_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_853_, 0, v_a_850_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v___x_851_, v_args_843_, v_f_842_, v___x_852_, v___x_853_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_865_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_865_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_865_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_865_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v_fst_859_; lean_object* v_snd_860_; lean_object* v___x_861_; lean_object* v___x_863_; 
v_fst_859_ = lean_ctor_get(v_a_855_, 0);
lean_inc(v_fst_859_);
v_snd_860_ = lean_ctor_get(v_a_855_, 1);
lean_inc(v_snd_860_);
lean_dec(v_a_855_);
v___x_861_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_859_, v_snd_860_, v___x_851_, v_args_843_);
lean_dec(v_snd_860_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_861_);
v___x_863_ = v___x_857_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
v_a_866_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_854_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_854_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
else
{
lean_dec_ref(v_f_842_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object* v_f_874_, lean_object* v_args_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v_f_874_, v_args_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec_ref(v_args_875_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object* v_upperBound_882_, lean_object* v_args_883_, lean_object* v_f_884_, lean_object* v_inst_885_, lean_object* v_R_886_, lean_object* v_a_887_, lean_object* v_b_888_, lean_object* v_c_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_882_, v_args_883_, v_f_884_, v_a_887_, v_b_888_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object* v_upperBound_896_, lean_object* v_args_897_, lean_object* v_f_898_, lean_object* v_inst_899_, lean_object* v_R_900_, lean_object* v_a_901_, lean_object* v_b_902_, lean_object* v_c_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(v_upperBound_896_, v_args_897_, v_f_898_, v_inst_899_, v_R_900_, v_a_901_, v_b_902_, v_c_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec_ref(v_args_897_);
lean_dec(v_upperBound_896_);
return v_res_909_;
}
}
static lean_object* _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = ((lean_object*)(l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0));
v___x_912_ = l_Lean_stringToMessageData(v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object* v_constName_913_, lean_object* v_us_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_920_ = lean_obj_once(&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1, &l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once, _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1);
v___x_921_ = l_Lean_mkConst(v_constName_913_, v_us_914_);
v___x_922_ = l_Lean_MessageData_ofExpr(v___x_921_);
v___x_923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_920_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_923_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object* v_constName_925_, lean_object* v_us_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_925_, v_us_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object* v_00_u03b1_933_, lean_object* v_constName_934_, lean_object* v_us_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_934_, v_us_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object* v_00_u03b1_942_, lean_object* v_constName_943_, lean_object* v_us_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lean_Meta_throwIncorrectNumberOfLevels(v_00_u03b1_942_, v_constName_943_, v_us_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_951_, lean_object* v_msg_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v_toCold_958_; lean_object* v_currRecDepth_959_; lean_object* v_ref_960_; uint8_t v_diag_961_; uint8_t v_suppressElabErrors_962_; lean_object* v_ref_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_toCold_958_ = lean_ctor_get(v___y_955_, 0);
v_currRecDepth_959_ = lean_ctor_get(v___y_955_, 1);
v_ref_960_ = lean_ctor_get(v___y_955_, 2);
v_diag_961_ = lean_ctor_get_uint8(v___y_955_, sizeof(void*)*3);
v_suppressElabErrors_962_ = lean_ctor_get_uint8(v___y_955_, sizeof(void*)*3 + 1);
v_ref_963_ = l_Lean_replaceRef(v_ref_951_, v_ref_960_);
lean_inc(v_currRecDepth_959_);
lean_inc_ref(v_toCold_958_);
v___x_964_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_964_, 0, v_toCold_958_);
lean_ctor_set(v___x_964_, 1, v_currRecDepth_959_);
lean_ctor_set(v___x_964_, 2, v_ref_963_);
lean_ctor_set_uint8(v___x_964_, sizeof(void*)*3, v_diag_961_);
lean_ctor_set_uint8(v___x_964_, sizeof(void*)*3 + 1, v_suppressElabErrors_962_);
v___x_965_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_952_, v___y_953_, v___y_954_, v___x_964_, v___y_956_);
lean_dec_ref_known(v___x_964_, 3);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_966_, lean_object* v_msg_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_966_, v_msg_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v_ref_966_);
return v_res_973_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_974_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
return v___x_976_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_978_ = lean_unsigned_to_nat(0u);
v___x_979_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
lean_ctor_set(v___x_979_, 2, v___x_978_);
lean_ctor_set(v___x_979_, 3, v___x_978_);
lean_ctor_set(v___x_979_, 4, v___x_977_);
lean_ctor_set(v___x_979_, 5, v___x_977_);
lean_ctor_set(v___x_979_, 6, v___x_977_);
lean_ctor_set(v___x_979_, 7, v___x_977_);
lean_ctor_set(v___x_979_, 8, v___x_977_);
lean_ctor_set(v___x_979_, 9, v___x_977_);
lean_ctor_set(v___x_979_, 10, v___x_977_);
return v___x_979_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_980_ = lean_unsigned_to_nat(32u);
v___x_981_ = lean_mk_empty_array_with_capacity(v___x_980_);
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_983_ = ((size_t)5ULL);
v___x_984_ = lean_unsigned_to_nat(0u);
v___x_985_ = lean_unsigned_to_nat(32u);
v___x_986_ = lean_mk_empty_array_with_capacity(v___x_985_);
v___x_987_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_988_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set(v___x_988_, 1, v___x_986_);
lean_ctor_set(v___x_988_, 2, v___x_984_);
lean_ctor_set(v___x_988_, 3, v___x_984_);
lean_ctor_set_usize(v___x_988_, 4, v___x_983_);
return v___x_988_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_989_ = lean_box(1);
v___x_990_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_991_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_992_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v___x_990_);
lean_ctor_set(v___x_992_, 2, v___x_989_);
return v___x_992_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_995_ = l_Lean_stringToMessageData(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_998_ = l_Lean_stringToMessageData(v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_1001_ = l_Lean_stringToMessageData(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_1004_ = l_Lean_stringToMessageData(v___x_1003_);
return v___x_1004_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14));
v___x_1007_ = l_Lean_stringToMessageData(v___x_1006_);
return v___x_1007_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16));
v___x_1010_ = l_Lean_stringToMessageData(v___x_1009_);
return v___x_1010_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18));
v___x_1013_ = l_Lean_stringToMessageData(v___x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_1014_, lean_object* v_declHint_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_env_1020_; uint8_t v___x_1021_; 
v___x_1018_ = lean_box(0);
v___x_1019_ = lean_st_ref_get(v___y_1016_);
v_env_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc_ref(v_env_1020_);
lean_dec(v___x_1019_);
v___x_1021_ = l_Lean_Name_isAnonymous(v_declHint_1015_);
if (v___x_1021_ == 0)
{
uint8_t v_isExporting_1022_; 
v_isExporting_1022_ = lean_ctor_get_uint8(v_env_1020_, sizeof(void*)*8);
if (v_isExporting_1022_ == 0)
{
lean_object* v___x_1023_; 
lean_dec_ref(v_env_1020_);
lean_dec(v_declHint_1015_);
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v_msg_1014_);
return v___x_1023_;
}
else
{
lean_object* v___x_1024_; uint8_t v___x_1025_; 
lean_inc_ref(v_env_1020_);
v___x_1024_ = l_Lean_Environment_setExporting(v_env_1020_, v___x_1021_);
lean_inc(v_declHint_1015_);
lean_inc_ref(v___x_1024_);
v___x_1025_ = l_Lean_Environment_contains(v___x_1024_, v_declHint_1015_, v_isExporting_1022_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; 
lean_dec_ref(v___x_1024_);
lean_dec_ref(v_env_1020_);
lean_dec(v_declHint_1015_);
v___x_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1026_, 0, v_msg_1014_);
return v___x_1026_;
}
else
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v_c_1032_; lean_object* v___x_1033_; 
v___x_1027_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_1028_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_1029_ = l_Lean_Options_empty;
v___x_1030_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1024_);
lean_ctor_set(v___x_1030_, 1, v___x_1027_);
lean_ctor_set(v___x_1030_, 2, v___x_1028_);
lean_ctor_set(v___x_1030_, 3, v___x_1029_);
lean_inc(v_declHint_1015_);
v___x_1031_ = l_Lean_MessageData_ofConstName(v_declHint_1015_, v___x_1021_);
v_c_1032_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1032_, 0, v___x_1030_);
lean_ctor_set(v_c_1032_, 1, v___x_1031_);
v___x_1033_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1020_, v_declHint_1015_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
lean_dec_ref(v_env_1020_);
lean_dec(v_declHint_1015_);
v___x_1034_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_1035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
lean_ctor_set(v___x_1035_, 1, v_c_1032_);
v___x_1036_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_1037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = l_Lean_MessageData_note(v___x_1037_);
v___x_1039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1039_, 0, v_msg_1014_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
return v___x_1040_;
}
else
{
lean_object* v_val_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1075_; 
v_val_1041_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1043_ = v___x_1033_;
v_isShared_1044_ = v_isSharedCheck_1075_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_val_1041_);
lean_dec(v___x_1033_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1075_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v_mod_1047_; uint8_t v___x_1048_; 
v___x_1045_ = l_Lean_Environment_header(v_env_1020_);
lean_dec_ref(v_env_1020_);
v___x_1046_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1045_);
v_mod_1047_ = lean_array_get(v___x_1018_, v___x_1046_, v_val_1041_);
lean_dec(v_val_1041_);
lean_dec_ref(v___x_1046_);
v___x_1048_ = l_Lean_isPrivateName(v_declHint_1015_);
lean_dec(v_declHint_1015_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1049_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_1050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v_c_1032_);
v___x_1051_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_1052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = l_Lean_MessageData_ofName(v_mod_1047_);
v___x_1054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = l_Lean_MessageData_note(v___x_1056_);
v___x_1058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1058_, 0, v_msg_1014_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set_tag(v___x_1043_, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1058_);
v___x_1060_ = v___x_1043_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
else
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1073_; 
v___x_1062_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_1063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v_c_1032_);
v___x_1064_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17);
v___x_1065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
v___x_1066_ = l_Lean_MessageData_ofName(v_mod_1047_);
v___x_1067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19);
v___x_1069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = l_Lean_MessageData_note(v___x_1069_);
v___x_1071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_msg_1014_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set_tag(v___x_1043_, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1071_);
v___x_1073_ = v___x_1043_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1076_; 
lean_dec_ref(v_env_1020_);
lean_dec(v_declHint_1015_);
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_msg_1014_);
return v___x_1076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_1077_, lean_object* v_declHint_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1077_, v_declHint_1078_, v___y_1079_);
lean_dec(v___y_1079_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_1082_, lean_object* v_declHint_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v___x_1089_; lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1099_; 
v___x_1089_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1082_, v_declHint_1083_, v___y_1087_);
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1092_ = v___x_1089_;
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1089_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1094_ = l_Lean_unknownIdentifierMessageTag;
v___x_1095_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v_a_1090_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v___x_1095_);
v___x_1097_ = v___x_1092_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_1100_, lean_object* v_declHint_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1100_, v_declHint_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1108_, lean_object* v_msg_1109_, lean_object* v_declHint_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___x_1116_; lean_object* v_a_1117_; lean_object* v___x_1118_; 
v___x_1116_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1109_, v_declHint_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref(v___x_1116_);
v___x_1118_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1108_, v_a_1117_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1119_, lean_object* v_msg_1120_, lean_object* v_declHint_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1119_, v_msg_1120_, v_declHint_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v_ref_1119_);
return v_res_1127_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1130_ = l_Lean_stringToMessageData(v___x_1129_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1133_ = l_Lean_stringToMessageData(v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1134_, lean_object* v_constName_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1141_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1142_ = 0;
lean_inc(v_constName_1135_);
v___x_1143_ = l_Lean_MessageData_ofConstName(v_constName_1135_, v___x_1142_);
v___x_1144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1141_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1134_, v___x_1146_, v_constName_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1148_, lean_object* v_constName_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1148_, v_constName_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v_ref_1148_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object* v_constName_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v_ref_1162_; lean_object* v___x_1163_; 
v_ref_1162_ = lean_ctor_get(v___y_1159_, 2);
v___x_1163_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1162_, v_constName_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object* v_constName_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; lean_object* v_env_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1177_ = lean_st_ref_get(v___y_1175_);
v_env_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc_ref(v_env_1178_);
lean_dec(v___x_1177_);
v___x_1179_ = 0;
lean_inc(v_constName_1171_);
v___x_1180_ = l_Lean_Environment_findConstVal_x3f(v_env_1178_, v_constName_1171_, v___x_1179_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
return v___x_1181_;
}
else
{
lean_object* v_val_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec(v_constName_1171_);
v_val_1182_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1180_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_val_1182_);
lean_dec(v___x_1180_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
lean_ctor_set_tag(v___x_1184_, 0);
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_val_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object* v_constName_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_constName_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object* v_c_1197_, lean_object* v_us_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; 
lean_inc(v_c_1197_);
v___x_1204_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_c_1197_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v_levelParams_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v_levelParams_1206_ = lean_ctor_get(v_a_1205_, 1);
v___x_1207_ = l_List_lengthTR___redArg(v_levelParams_1206_);
v___x_1208_ = l_List_lengthTR___redArg(v_us_1198_);
v___x_1209_ = lean_nat_dec_eq(v___x_1207_, v___x_1208_);
lean_dec(v___x_1208_);
lean_dec(v___x_1207_);
if (v___x_1209_ == 0)
{
lean_object* v___x_1210_; 
lean_dec(v_a_1205_);
v___x_1210_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_c_1197_, v_us_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
return v___x_1210_;
}
else
{
lean_object* v___x_1211_; 
lean_dec(v_c_1197_);
v___x_1211_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_1205_, v_us_1198_, v___y_1202_);
return v___x_1211_;
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_us_1198_);
lean_dec(v_c_1197_);
v_a_1212_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1204_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1204_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object* v_c_1220_, lean_object* v_us_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_c_1220_, v_us_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object* v_00_u03b1_1228_, lean_object* v_constName_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1236_, lean_object* v_constName_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(v_00_u03b1_1236_, v_constName_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1244_, lean_object* v_ref_1245_, lean_object* v_constName_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1245_, v_constName_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1253_, lean_object* v_ref_1254_, lean_object* v_constName_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(v_00_u03b1_1253_, v_ref_1254_, v_constName_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v_ref_1254_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1262_, lean_object* v_ref_1263_, lean_object* v_msg_1264_, lean_object* v_declHint_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1263_, v_msg_1264_, v_declHint_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1272_, lean_object* v_ref_1273_, lean_object* v_msg_1274_, lean_object* v_declHint_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1272_, v_ref_1273_, v_msg_1274_, v_declHint_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v_ref_1273_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1282_, lean_object* v_declHint_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1282_, v_declHint_1283_, v___y_1287_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1290_, lean_object* v_declHint_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1290_, v_declHint_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1298_, lean_object* v_ref_1299_, lean_object* v_msg_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1299_, v_msg_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1307_, lean_object* v_ref_1308_, lean_object* v_msg_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1307_, v_ref_1308_, v_msg_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v_ref_1308_);
return v_res_1315_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0));
v___x_1318_ = l_Lean_stringToMessageData(v___x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2));
v___x_1321_ = l_Lean_stringToMessageData(v___x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object* v_structName_1322_, lean_object* v_idx_1323_, lean_object* v_e_1324_, lean_object* v_a_1325_, lean_object* v_00_u03b1_1326_, lean_object* v_x_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1333_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
v___x_1334_ = l_Lean_mkProj(v_structName_1322_, v_idx_1323_, v_e_1324_);
v___x_1335_ = l_Lean_indentExpr(v___x_1334_);
v___x_1336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1333_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = l_Lean_indentExpr(v_a_1325_);
v___x_1340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1340_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object* v_structName_1342_, lean_object* v_idx_1343_, lean_object* v_e_1344_, lean_object* v_a_1345_, lean_object* v_00_u03b1_1346_, lean_object* v_x_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1342_, v_idx_1343_, v_e_1344_, v_a_1345_, v_00_u03b1_1346_, v_x_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object* v_constName_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v___x_1360_; lean_object* v_env_1361_; uint8_t v___x_1362_; lean_object* v___x_1363_; 
v___x_1360_ = lean_st_ref_get(v___y_1358_);
v_env_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc_ref(v_env_1361_);
lean_dec(v___x_1360_);
v___x_1362_ = 0;
lean_inc(v_constName_1354_);
v___x_1363_ = l_Lean_Environment_find_x3f(v_env_1361_, v_constName_1354_, v___x_1362_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v___x_1364_; 
v___x_1364_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
return v___x_1364_;
}
else
{
lean_object* v_val_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v_constName_1354_);
v_val_1365_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1363_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_val_1365_);
lean_dec(v___x_1363_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
lean_ctor_set_tag(v___x_1367_, 0);
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_val_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object* v_constName_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_constName_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object* v_upperBound_1380_, lean_object* v_structName_1381_, lean_object* v_e_1382_, lean_object* v_idx_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_b_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_a_1393_; uint8_t v___x_1397_; 
v___x_1397_ = lean_nat_dec_lt(v_a_1385_, v_upperBound_1380_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_idx_1383_);
lean_dec_ref(v_e_1382_);
lean_dec(v_structName_1381_);
v___x_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1398_, 0, v_b_1386_);
return v___x_1398_;
}
else
{
lean_object* v___x_1399_; 
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
lean_inc_ref(v___y_1387_);
v___x_1399_ = lean_whnf(v_b_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_a_1400_);
lean_dec_ref_known(v___x_1399_, 1);
if (lean_obj_tag(v_a_1400_) == 7)
{
lean_object* v_body_1401_; uint8_t v___x_1402_; 
v_body_1401_ = lean_ctor_get(v_a_1400_, 2);
lean_inc_ref(v_body_1401_);
lean_dec_ref_known(v_a_1400_, 3);
v___x_1402_ = l_Lean_Expr_hasLooseBVars(v_body_1401_);
if (v___x_1402_ == 0)
{
v_a_1393_ = v_body_1401_;
goto v___jp_1392_;
}
else
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
lean_inc_ref(v_e_1382_);
lean_inc(v_a_1385_);
lean_inc(v_structName_1381_);
v___x_1403_ = l_Lean_mkProj(v_structName_1381_, v_a_1385_, v_e_1382_);
v___x_1404_ = lean_expr_instantiate1(v_body_1401_, v___x_1403_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v_body_1401_);
v_a_1393_ = v___x_1404_;
goto v___jp_1392_;
}
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1405_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1382_);
lean_inc(v_idx_1383_);
lean_inc(v_structName_1381_);
v___x_1406_ = l_Lean_mkProj(v_structName_1381_, v_idx_1383_, v_e_1382_);
v___x_1407_ = l_Lean_indentExpr(v___x_1406_);
v___x_1408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1405_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1408_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
lean_inc_ref(v_a_1384_);
v___x_1411_ = l_Lean_indentExpr(v_a_1384_);
v___x_1412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1412_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_dec_ref_known(v___x_1413_, 1);
v_a_1393_ = v_a_1400_;
goto v___jp_1392_;
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_a_1400_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_idx_1383_);
lean_dec_ref(v_e_1382_);
lean_dec(v_structName_1381_);
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1413_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
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
else
{
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_idx_1383_);
lean_dec_ref(v_e_1382_);
lean_dec(v_structName_1381_);
return v___x_1399_;
}
}
v___jp_1392_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_unsigned_to_nat(1u);
v___x_1395_ = lean_nat_add(v_a_1385_, v___x_1394_);
lean_dec(v_a_1385_);
v_a_1385_ = v___x_1395_;
v_b_1386_ = v_a_1393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object* v_upperBound_1422_, lean_object* v_structName_1423_, lean_object* v_e_1424_, lean_object* v_idx_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_b_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1422_, v_structName_1423_, v_e_1424_, v_idx_1425_, v_a_1426_, v_a_1427_, v_b_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v_upperBound_1422_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object* v_upperBound_1435_, lean_object* v_structName_1436_, lean_object* v_e_1437_, lean_object* v_idx_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_b_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_a_1448_; uint8_t v___x_1452_; 
v___x_1452_ = lean_nat_dec_lt(v_a_1440_, v_upperBound_1435_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; 
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_idx_1438_);
lean_dec_ref(v_e_1437_);
lean_dec(v_structName_1436_);
v___x_1453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1453_, 0, v_b_1441_);
return v___x_1453_;
}
else
{
lean_object* v___x_1454_; 
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
v___x_1454_ = lean_whnf(v_b_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
if (lean_obj_tag(v_a_1455_) == 7)
{
lean_object* v_body_1456_; uint8_t v___x_1457_; 
v_body_1456_ = lean_ctor_get(v_a_1455_, 2);
lean_inc_ref(v_body_1456_);
lean_dec_ref_known(v_a_1455_, 3);
v___x_1457_ = l_Lean_Expr_hasLooseBVars(v_body_1456_);
if (v___x_1457_ == 0)
{
v_a_1448_ = v_body_1456_;
goto v___jp_1447_;
}
else
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
lean_inc_ref(v_e_1437_);
lean_inc(v_a_1440_);
lean_inc(v_structName_1436_);
v___x_1458_ = l_Lean_mkProj(v_structName_1436_, v_a_1440_, v_e_1437_);
v___x_1459_ = lean_expr_instantiate1(v_body_1456_, v___x_1458_);
lean_dec_ref(v___x_1458_);
lean_dec_ref(v_body_1456_);
v_a_1448_ = v___x_1459_;
goto v___jp_1447_;
}
}
else
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1460_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1437_);
lean_inc(v_idx_1438_);
lean_inc(v_structName_1436_);
v___x_1461_ = l_Lean_mkProj(v_structName_1436_, v_idx_1438_, v_e_1437_);
v___x_1462_ = l_Lean_indentExpr(v___x_1461_);
v___x_1463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1460_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
lean_inc_ref(v_a_1439_);
v___x_1466_ = l_Lean_indentExpr(v_a_1439_);
v___x_1467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1465_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
v___x_1468_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1467_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_dec_ref_known(v___x_1468_, 1);
v_a_1448_ = v_a_1455_;
goto v___jp_1447_;
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec(v_a_1455_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_idx_1438_);
lean_dec_ref(v_e_1437_);
lean_dec(v_structName_1436_);
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1468_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
else
{
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_idx_1438_);
lean_dec_ref(v_e_1437_);
lean_dec(v_structName_1436_);
return v___x_1454_;
}
}
v___jp_1447_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_unsigned_to_nat(1u);
v___x_1450_ = lean_nat_add(v_a_1440_, v___x_1449_);
lean_dec(v_a_1440_);
v___x_1451_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1435_, v_structName_1436_, v_e_1437_, v_idx_1438_, v_a_1439_, v___x_1450_, v_a_1448_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
return v___x_1451_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object* v_upperBound_1477_, lean_object* v_structName_1478_, lean_object* v_e_1479_, lean_object* v_idx_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_b_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1477_, v_structName_1478_, v_e_1479_, v_idx_1480_, v_a_1481_, v_a_1482_, v_b_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
lean_dec(v___y_1487_);
lean_dec_ref(v___y_1486_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec(v_upperBound_1477_);
return v_res_1489_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0(void){
_start:
{
lean_object* v___x_1490_; lean_object* v_dummy_1491_; 
v___x_1490_ = lean_box(0);
v_dummy_1491_ = l_Lean_Expr_sort___override(v___x_1490_);
return v_dummy_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object* v_structName_1492_, lean_object* v_idx_1493_, lean_object* v_e_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; 
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
lean_inc(v___y_1496_);
lean_inc_ref(v___y_1495_);
lean_inc_ref(v_e_1494_);
v___x_1500_ = lean_infer_type(v_e_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1502_; 
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1501_);
lean_dec_ref_known(v___x_1500_, 1);
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
lean_inc(v___y_1496_);
lean_inc_ref(v___y_1495_);
v___x_1502_ = lean_whnf(v_a_1501_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1504_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1502_, 1);
v___x_1504_ = l_Lean_Expr_getAppFn(v_a_1503_);
if (lean_obj_tag(v___x_1504_) == 4)
{
lean_object* v_declName_1505_; lean_object* v_us_1506_; lean_object* v___x_1507_; lean_object* v_env_1511_; uint8_t v___x_1512_; lean_object* v___x_1513_; 
v_declName_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_declName_1505_);
v_us_1506_ = lean_ctor_get(v___x_1504_, 1);
lean_inc(v_us_1506_);
lean_dec_ref_known(v___x_1504_, 2);
v___x_1507_ = lean_st_ref_get(v___y_1498_);
v_env_1511_ = lean_ctor_get(v___x_1507_, 0);
lean_inc_ref(v_env_1511_);
lean_dec(v___x_1507_);
v___x_1512_ = 0;
v___x_1513_ = l_Lean_Environment_find_x3f(v_env_1511_, v_declName_1505_, v___x_1512_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_dec(v_us_1506_);
v___x_1514_ = lean_box(0);
v___x_1515_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1514_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
return v___x_1515_;
}
else
{
lean_object* v_val_1516_; 
v_val_1516_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_val_1516_);
lean_dec_ref_known(v___x_1513_, 1);
if (lean_obj_tag(v_val_1516_) == 5)
{
lean_object* v_val_1517_; lean_object* v_ctors_1518_; 
v_val_1517_ = lean_ctor_get(v_val_1516_, 0);
lean_inc_ref(v_val_1517_);
lean_dec_ref_known(v_val_1516_, 1);
v_ctors_1518_ = lean_ctor_get(v_val_1517_, 4);
lean_inc(v_ctors_1518_);
if (lean_obj_tag(v_ctors_1518_) == 1)
{
lean_object* v_tail_1519_; 
v_tail_1519_ = lean_ctor_get(v_ctors_1518_, 1);
if (lean_obj_tag(v_tail_1519_) == 0)
{
lean_object* v_toConstantVal_1520_; lean_object* v_numParams_1521_; lean_object* v_numIndices_1522_; lean_object* v_head_1523_; lean_object* v___x_1524_; 
v_toConstantVal_1520_ = lean_ctor_get(v_val_1517_, 0);
lean_inc_ref(v_toConstantVal_1520_);
v_numParams_1521_ = lean_ctor_get(v_val_1517_, 1);
lean_inc(v_numParams_1521_);
v_numIndices_1522_ = lean_ctor_get(v_val_1517_, 2);
lean_inc(v_numIndices_1522_);
lean_dec_ref(v_val_1517_);
v_head_1523_ = lean_ctor_get(v_ctors_1518_, 0);
lean_inc(v_head_1523_);
lean_dec_ref_known(v_ctors_1518_, 2);
v___x_1524_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_head_1523_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1524_, 1);
if (lean_obj_tag(v_a_1525_) == 6)
{
lean_object* v_val_1526_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v___y_1531_; lean_object* v_name_1566_; uint8_t v___x_1567_; 
v_val_1526_ = lean_ctor_get(v_a_1525_, 0);
lean_inc_ref(v_val_1526_);
lean_dec_ref_known(v_a_1525_, 1);
v_name_1566_ = lean_ctor_get(v_toConstantVal_1520_, 0);
lean_inc(v_name_1566_);
lean_dec_ref(v_toConstantVal_1520_);
v___x_1567_ = lean_name_eq(v_name_1566_, v_structName_1492_);
lean_dec(v_name_1566_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v_val_1526_);
lean_dec(v_numIndices_1522_);
lean_dec(v_numParams_1521_);
lean_dec(v_us_1506_);
v___x_1568_ = lean_box(0);
v___x_1569_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1568_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
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
else
{
v___y_1528_ = v___y_1495_;
v___y_1529_ = v___y_1496_;
v___y_1530_ = v___y_1497_;
v___y_1531_ = v___y_1498_;
goto v___jp_1527_;
}
v___jp_1527_:
{
lean_object* v_dummy_1532_; lean_object* v_nargs_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; uint8_t v___x_1540_; 
v_dummy_1532_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
v_nargs_1533_ = l_Lean_Expr_getAppNumArgs(v_a_1503_);
lean_inc(v_nargs_1533_);
v___x_1534_ = lean_mk_array(v_nargs_1533_, v_dummy_1532_);
v___x_1535_ = lean_unsigned_to_nat(1u);
v___x_1536_ = lean_nat_sub(v_nargs_1533_, v___x_1535_);
lean_dec(v_nargs_1533_);
lean_inc(v_a_1503_);
v___x_1537_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1503_, v___x_1534_, v___x_1536_);
v___x_1538_ = lean_nat_add(v_numParams_1521_, v_numIndices_1522_);
lean_dec(v_numIndices_1522_);
v___x_1539_ = lean_array_get_size(v___x_1537_);
v___x_1540_ = lean_nat_dec_eq(v___x_1538_, v___x_1539_);
lean_dec(v___x_1538_);
if (v___x_1540_ == 0)
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_dec_ref(v___x_1537_);
lean_dec_ref(v_val_1526_);
lean_dec(v_numParams_1521_);
lean_dec(v_us_1506_);
v___x_1541_ = lean_box(0);
v___x_1542_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1541_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
return v___x_1542_;
}
else
{
lean_object* v_toConstantVal_1543_; lean_object* v_name_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v_toConstantVal_1543_ = lean_ctor_get(v_val_1526_, 0);
lean_inc_ref(v_toConstantVal_1543_);
lean_dec_ref(v_val_1526_);
v_name_1544_ = lean_ctor_get(v_toConstantVal_1543_, 0);
lean_inc(v_name_1544_);
lean_dec_ref(v_toConstantVal_1543_);
v___x_1545_ = l_Lean_mkConst(v_name_1544_, v_us_1506_);
v___x_1546_ = lean_unsigned_to_nat(0u);
v___x_1547_ = l_Array_toSubarray___redArg(v___x_1537_, v___x_1546_, v_numParams_1521_);
v___x_1548_ = l_Subarray_copy___redArg(v___x_1547_);
v___x_1549_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_1545_, v___x_1548_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec_ref(v___x_1548_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1551_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
lean_inc(v_a_1503_);
lean_inc_ref(v_e_1494_);
lean_inc(v_structName_1492_);
lean_inc(v_idx_1493_);
v___x_1551_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_idx_1493_, v_structName_1492_, v_e_1494_, v_idx_1493_, v_a_1503_, v___x_1546_, v_a_1550_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1553_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
v___x_1553_ = lean_whnf(v_a_1552_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1565_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1565_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1565_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
if (lean_obj_tag(v_a_1554_) == 7)
{
lean_object* v_binderType_1558_; lean_object* v___x_1559_; lean_object* v___x_1561_; 
lean_dec(v_a_1503_);
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
v_binderType_1558_ = lean_ctor_get(v_a_1554_, 1);
lean_inc_ref(v_binderType_1558_);
lean_dec_ref_known(v_a_1554_, 3);
v___x_1559_ = lean_expr_consume_type_annotations(v_binderType_1558_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1559_);
v___x_1561_ = v___x_1556_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1559_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_del_object(v___x_1556_);
lean_dec(v_a_1554_);
v___x_1563_ = lean_box(0);
v___x_1564_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1563_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
return v___x_1564_;
}
}
}
else
{
lean_dec(v_a_1503_);
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
return v___x_1553_;
}
}
else
{
lean_dec(v_a_1503_);
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
return v___x_1551_;
}
}
else
{
lean_dec(v_a_1503_);
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
return v___x_1549_;
}
}
}
}
else
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
lean_dec(v_a_1525_);
lean_dec(v_numIndices_1522_);
lean_dec(v_numParams_1521_);
lean_dec_ref(v_toConstantVal_1520_);
lean_dec(v_us_1506_);
v___x_1578_ = lean_box(0);
v___x_1579_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1578_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
return v___x_1579_;
}
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_dec(v_numIndices_1522_);
lean_dec(v_numParams_1521_);
lean_dec_ref(v_toConstantVal_1520_);
lean_dec(v_us_1506_);
lean_dec(v_a_1503_);
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
v_a_1580_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1524_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1524_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_1518_, 2);
lean_dec_ref(v_val_1517_);
lean_dec(v_us_1506_);
goto v___jp_1508_;
}
}
else
{
lean_dec(v_ctors_1518_);
lean_dec_ref(v_val_1517_);
lean_dec(v_us_1506_);
goto v___jp_1508_;
}
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
lean_dec(v_val_1516_);
lean_dec(v_us_1506_);
v___x_1588_ = lean_box(0);
v___x_1589_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1588_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
return v___x_1589_;
}
}
v___jp_1508_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1509_ = lean_box(0);
v___x_1510_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1509_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
return v___x_1510_;
}
}
else
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
lean_dec_ref(v___x_1504_);
v___x_1590_ = lean_box(0);
v___x_1591_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1492_, v_idx_1493_, v_e_1494_, v_a_1503_, lean_box(0), v___x_1590_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
return v___x_1591_;
}
}
else
{
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
return v___x_1502_;
}
}
else
{
lean_dec_ref(v_e_1494_);
lean_dec(v_idx_1493_);
lean_dec(v_structName_1492_);
return v___x_1500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object* v_structName_1592_, lean_object* v_idx_1593_, lean_object* v_e_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_structName_1592_, v_idx_1593_, v_e_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object* v_upperBound_1601_, lean_object* v_structName_1602_, lean_object* v_e_1603_, lean_object* v_idx_1604_, lean_object* v_a_1605_, lean_object* v_inst_1606_, lean_object* v_R_1607_, lean_object* v_a_1608_, lean_object* v_b_1609_, lean_object* v_c_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1601_, v_structName_1602_, v_e_1603_, v_idx_1604_, v_a_1605_, v_a_1608_, v_b_1609_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object* v_upperBound_1617_, lean_object* v_structName_1618_, lean_object* v_e_1619_, lean_object* v_idx_1620_, lean_object* v_a_1621_, lean_object* v_inst_1622_, lean_object* v_R_1623_, lean_object* v_a_1624_, lean_object* v_b_1625_, lean_object* v_c_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(v_upperBound_1617_, v_structName_1618_, v_e_1619_, v_idx_1620_, v_a_1621_, v_inst_1622_, v_R_1623_, v_a_1624_, v_b_1625_, v_c_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v_upperBound_1617_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object* v_upperBound_1633_, lean_object* v_structName_1634_, lean_object* v_e_1635_, lean_object* v_idx_1636_, lean_object* v_a_1637_, lean_object* v_inst_1638_, lean_object* v_R_1639_, lean_object* v_a_1640_, lean_object* v_b_1641_, lean_object* v_c_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1633_, v_structName_1634_, v_e_1635_, v_idx_1636_, v_a_1637_, v_a_1640_, v_b_1641_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object* v_upperBound_1649_, lean_object* v_structName_1650_, lean_object* v_e_1651_, lean_object* v_idx_1652_, lean_object* v_a_1653_, lean_object* v_inst_1654_, lean_object* v_R_1655_, lean_object* v_a_1656_, lean_object* v_b_1657_, lean_object* v_c_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(v_upperBound_1649_, v_structName_1650_, v_e_1651_, v_idx_1652_, v_a_1653_, v_inst_1654_, v_R_1655_, v_a_1656_, v_b_1657_, v_c_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v_upperBound_1649_);
return v_res_1664_;
}
}
static lean_object* _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = ((lean_object*)(l_Lean_Meta_throwTypeExpected___redArg___closed__0));
v___x_1667_ = l_Lean_stringToMessageData(v___x_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object* v_type_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1674_ = lean_obj_once(&l_Lean_Meta_throwTypeExpected___redArg___closed__1, &l_Lean_Meta_throwTypeExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1);
v___x_1675_ = l_Lean_indentExpr(v_type_1668_);
v___x_1676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1676_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object* v_type_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object* v_00_u03b1_1685_, lean_object* v_type_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object* v_00_u03b1_1693_, lean_object* v_type_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lean_Meta_throwTypeExpected(v_00_u03b1_1693_, v_type_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1701_, lean_object* v_x_1702_, lean_object* v_x_1703_, lean_object* v_x_1704_){
_start:
{
lean_object* v_ks_1705_; lean_object* v_vs_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1730_; 
v_ks_1705_ = lean_ctor_get(v_x_1701_, 0);
v_vs_1706_ = lean_ctor_get(v_x_1701_, 1);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_x_1701_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1708_ = v_x_1701_;
v_isShared_1709_ = v_isSharedCheck_1730_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_vs_1706_);
lean_inc(v_ks_1705_);
lean_dec(v_x_1701_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1730_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1710_; uint8_t v___x_1711_; 
v___x_1710_ = lean_array_get_size(v_ks_1705_);
v___x_1711_ = lean_nat_dec_lt(v_x_1702_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1715_; 
lean_dec(v_x_1702_);
v___x_1712_ = lean_array_push(v_ks_1705_, v_x_1703_);
v___x_1713_ = lean_array_push(v_vs_1706_, v_x_1704_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1713_);
lean_ctor_set(v___x_1708_, 0, v___x_1712_);
v___x_1715_ = v___x_1708_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1712_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
else
{
lean_object* v_k_x27_1717_; uint8_t v___x_1718_; 
v_k_x27_1717_ = lean_array_fget_borrowed(v_ks_1705_, v_x_1702_);
v___x_1718_ = l_Lean_instBEqMVarId_beq(v_x_1703_, v_k_x27_1717_);
if (v___x_1718_ == 0)
{
lean_object* v___x_1720_; 
if (v_isShared_1709_ == 0)
{
v___x_1720_ = v___x_1708_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_ks_1705_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v_vs_1706_);
v___x_1720_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_unsigned_to_nat(1u);
v___x_1722_ = lean_nat_add(v_x_1702_, v___x_1721_);
lean_dec(v_x_1702_);
v_x_1701_ = v___x_1720_;
v_x_1702_ = v___x_1722_;
goto _start;
}
}
else
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1725_ = lean_array_fset(v_ks_1705_, v_x_1702_, v_x_1703_);
v___x_1726_ = lean_array_fset(v_vs_1706_, v_x_1702_, v_x_1704_);
lean_dec(v_x_1702_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1726_);
lean_ctor_set(v___x_1708_, 0, v___x_1725_);
v___x_1728_ = v___x_1708_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1725_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v___x_1726_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1731_, lean_object* v_k_1732_, lean_object* v_v_1733_){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1731_, v___x_1734_, v_k_1732_, v_v_1733_);
return v___x_1735_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1737_, size_t v_x_1738_, size_t v_x_1739_, lean_object* v_x_1740_, lean_object* v_x_1741_){
_start:
{
if (lean_obj_tag(v_x_1737_) == 0)
{
lean_object* v_es_1742_; size_t v___x_1743_; size_t v___x_1744_; lean_object* v_j_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; 
v_es_1742_ = lean_ctor_get(v_x_1737_, 0);
v___x_1743_ = ((size_t)31ULL);
v___x_1744_ = lean_usize_land(v_x_1738_, v___x_1743_);
v_j_1745_ = lean_usize_to_nat(v___x_1744_);
v___x_1746_ = lean_array_get_size(v_es_1742_);
v___x_1747_ = lean_nat_dec_lt(v_j_1745_, v___x_1746_);
if (v___x_1747_ == 0)
{
lean_dec(v_j_1745_);
lean_dec(v_x_1741_);
lean_dec(v_x_1740_);
return v_x_1737_;
}
else
{
lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1786_; 
lean_inc_ref(v_es_1742_);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_x_1737_);
if (v_isSharedCheck_1786_ == 0)
{
lean_object* v_unused_1787_; 
v_unused_1787_ = lean_ctor_get(v_x_1737_, 0);
lean_dec(v_unused_1787_);
v___x_1749_ = v_x_1737_;
v_isShared_1750_ = v_isSharedCheck_1786_;
goto v_resetjp_1748_;
}
else
{
lean_dec(v_x_1737_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1786_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v_v_1751_; lean_object* v___x_1752_; lean_object* v_xs_x27_1753_; lean_object* v___y_1755_; 
v_v_1751_ = lean_array_fget(v_es_1742_, v_j_1745_);
v___x_1752_ = lean_box(0);
v_xs_x27_1753_ = lean_array_fset(v_es_1742_, v_j_1745_, v___x_1752_);
switch(lean_obj_tag(v_v_1751_))
{
case 0:
{
lean_object* v_key_1760_; lean_object* v_val_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1771_; 
v_key_1760_ = lean_ctor_get(v_v_1751_, 0);
v_val_1761_ = lean_ctor_get(v_v_1751_, 1);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_v_1751_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1763_ = v_v_1751_;
v_isShared_1764_ = v_isSharedCheck_1771_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_val_1761_);
lean_inc(v_key_1760_);
lean_dec(v_v_1751_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1771_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
uint8_t v___x_1765_; 
v___x_1765_ = l_Lean_instBEqMVarId_beq(v_x_1740_, v_key_1760_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
lean_del_object(v___x_1763_);
v___x_1766_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1760_, v_val_1761_, v_x_1740_, v_x_1741_);
v___x_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
v___y_1755_ = v___x_1767_;
goto v___jp_1754_;
}
else
{
lean_object* v___x_1769_; 
lean_dec(v_val_1761_);
lean_dec(v_key_1760_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 1, v_x_1741_);
lean_ctor_set(v___x_1763_, 0, v_x_1740_);
v___x_1769_ = v___x_1763_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_x_1740_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v_x_1741_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
v___y_1755_ = v___x_1769_;
goto v___jp_1754_;
}
}
}
}
case 1:
{
lean_object* v_node_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1784_; 
v_node_1772_ = lean_ctor_get(v_v_1751_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v_v_1751_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1774_ = v_v_1751_;
v_isShared_1775_ = v_isSharedCheck_1784_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_node_1772_);
lean_dec(v_v_1751_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1784_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
size_t v___x_1776_; size_t v___x_1777_; size_t v___x_1778_; size_t v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1782_; 
v___x_1776_ = ((size_t)5ULL);
v___x_1777_ = lean_usize_shift_right(v_x_1738_, v___x_1776_);
v___x_1778_ = ((size_t)1ULL);
v___x_1779_ = lean_usize_add(v_x_1739_, v___x_1778_);
v___x_1780_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_node_1772_, v___x_1777_, v___x_1779_, v_x_1740_, v_x_1741_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1780_);
v___x_1782_ = v___x_1774_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
v___y_1755_ = v___x_1782_;
goto v___jp_1754_;
}
}
}
default: 
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1785_, 0, v_x_1740_);
lean_ctor_set(v___x_1785_, 1, v_x_1741_);
v___y_1755_ = v___x_1785_;
goto v___jp_1754_;
}
}
v___jp_1754_:
{
lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1756_ = lean_array_fset(v_xs_x27_1753_, v_j_1745_, v___y_1755_);
lean_dec(v_j_1745_);
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 0, v___x_1756_);
v___x_1758_ = v___x_1749_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
else
{
lean_object* v_ks_1788_; lean_object* v_vs_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1807_; 
v_ks_1788_ = lean_ctor_get(v_x_1737_, 0);
v_vs_1789_ = lean_ctor_get(v_x_1737_, 1);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_x_1737_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1791_ = v_x_1737_;
v_isShared_1792_ = v_isSharedCheck_1807_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_vs_1789_);
lean_inc(v_ks_1788_);
lean_dec(v_x_1737_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1807_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_ks_1788_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_vs_1789_);
v___x_1794_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v_newNode_1795_; size_t v___x_1796_; uint8_t v___x_1797_; 
v_newNode_1795_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1794_, v_x_1740_, v_x_1741_);
v___x_1796_ = ((size_t)7ULL);
v___x_1797_ = lean_usize_dec_le(v___x_1796_, v_x_1739_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; 
v___x_1798_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1795_);
v___x_1799_ = lean_unsigned_to_nat(4u);
v___x_1800_ = lean_nat_dec_lt(v___x_1798_, v___x_1799_);
lean_dec(v___x_1798_);
if (v___x_1800_ == 0)
{
lean_object* v_ks_1801_; lean_object* v_vs_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v_ks_1801_ = lean_ctor_get(v_newNode_1795_, 0);
lean_inc_ref(v_ks_1801_);
v_vs_1802_ = lean_ctor_get(v_newNode_1795_, 1);
lean_inc_ref(v_vs_1802_);
lean_dec_ref(v_newNode_1795_);
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_1805_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1739_, v_ks_1801_, v_vs_1802_, v___x_1803_, v___x_1804_);
lean_dec_ref(v_vs_1802_);
lean_dec_ref(v_ks_1801_);
return v___x_1805_;
}
else
{
return v_newNode_1795_;
}
}
else
{
return v_newNode_1795_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1808_, lean_object* v_keys_1809_, lean_object* v_vals_1810_, lean_object* v_i_1811_, lean_object* v_entries_1812_){
_start:
{
lean_object* v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = lean_array_get_size(v_keys_1809_);
v___x_1814_ = lean_nat_dec_lt(v_i_1811_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_dec(v_i_1811_);
return v_entries_1812_;
}
else
{
lean_object* v_k_1815_; lean_object* v_v_1816_; uint64_t v___x_1817_; size_t v_h_1818_; size_t v___x_1819_; lean_object* v___x_1820_; size_t v___x_1821_; size_t v___x_1822_; size_t v___x_1823_; size_t v_h_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_k_1815_ = lean_array_fget_borrowed(v_keys_1809_, v_i_1811_);
v_v_1816_ = lean_array_fget_borrowed(v_vals_1810_, v_i_1811_);
v___x_1817_ = l_Lean_instHashableMVarId_hash(v_k_1815_);
v_h_1818_ = lean_uint64_to_usize(v___x_1817_);
v___x_1819_ = ((size_t)5ULL);
v___x_1820_ = lean_unsigned_to_nat(1u);
v___x_1821_ = ((size_t)1ULL);
v___x_1822_ = lean_usize_sub(v_depth_1808_, v___x_1821_);
v___x_1823_ = lean_usize_mul(v___x_1819_, v___x_1822_);
v_h_1824_ = lean_usize_shift_right(v_h_1818_, v___x_1823_);
v___x_1825_ = lean_nat_add(v_i_1811_, v___x_1820_);
lean_dec(v_i_1811_);
lean_inc(v_v_1816_);
lean_inc(v_k_1815_);
v___x_1826_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_entries_1812_, v_h_1824_, v_depth_1808_, v_k_1815_, v_v_1816_);
v_i_1811_ = v___x_1825_;
v_entries_1812_ = v___x_1826_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1828_, lean_object* v_keys_1829_, lean_object* v_vals_1830_, lean_object* v_i_1831_, lean_object* v_entries_1832_){
_start:
{
size_t v_depth_boxed_1833_; lean_object* v_res_1834_; 
v_depth_boxed_1833_ = lean_unbox_usize(v_depth_1828_);
lean_dec(v_depth_1828_);
v_res_1834_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1833_, v_keys_1829_, v_vals_1830_, v_i_1831_, v_entries_1832_);
lean_dec_ref(v_vals_1830_);
lean_dec_ref(v_keys_1829_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1835_, lean_object* v_x_1836_, lean_object* v_x_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_){
_start:
{
size_t v_x_1298__boxed_1840_; size_t v_x_1299__boxed_1841_; lean_object* v_res_1842_; 
v_x_1298__boxed_1840_ = lean_unbox_usize(v_x_1836_);
lean_dec(v_x_1836_);
v_x_1299__boxed_1841_ = lean_unbox_usize(v_x_1837_);
lean_dec(v_x_1837_);
v_res_1842_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1835_, v_x_1298__boxed_1840_, v_x_1299__boxed_1841_, v_x_1838_, v_x_1839_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object* v_x_1843_, lean_object* v_x_1844_, lean_object* v_x_1845_){
_start:
{
uint64_t v___x_1846_; size_t v___x_1847_; size_t v___x_1848_; lean_object* v___x_1849_; 
v___x_1846_ = l_Lean_instHashableMVarId_hash(v_x_1844_);
v___x_1847_ = lean_uint64_to_usize(v___x_1846_);
v___x_1848_ = ((size_t)1ULL);
v___x_1849_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1843_, v___x_1847_, v___x_1848_, v_x_1844_, v_x_1845_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object* v_mvarId_1850_, lean_object* v_val_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v_mctx_1855_; lean_object* v_cache_1856_; lean_object* v_zetaDeltaFVarIds_1857_; lean_object* v_postponed_1858_; lean_object* v_diag_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1888_; 
v___x_1854_ = lean_st_ref_take(v___y_1852_);
v_mctx_1855_ = lean_ctor_get(v___x_1854_, 0);
v_cache_1856_ = lean_ctor_get(v___x_1854_, 1);
v_zetaDeltaFVarIds_1857_ = lean_ctor_get(v___x_1854_, 2);
v_postponed_1858_ = lean_ctor_get(v___x_1854_, 3);
v_diag_1859_ = lean_ctor_get(v___x_1854_, 4);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1861_ = v___x_1854_;
v_isShared_1862_ = v_isSharedCheck_1888_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_diag_1859_);
lean_inc(v_postponed_1858_);
lean_inc(v_zetaDeltaFVarIds_1857_);
lean_inc(v_cache_1856_);
lean_inc(v_mctx_1855_);
lean_dec(v___x_1854_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1888_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v_depth_1863_; lean_object* v_levelAssignDepth_1864_; lean_object* v_lmvarCounter_1865_; lean_object* v_mvarCounter_1866_; lean_object* v_lDecls_1867_; lean_object* v_decls_1868_; lean_object* v_userNames_1869_; lean_object* v_lAssignment_1870_; lean_object* v_eAssignment_1871_; lean_object* v_dAssignment_1872_; lean_object* v_instanceTypedMVars_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1887_; 
v_depth_1863_ = lean_ctor_get(v_mctx_1855_, 0);
v_levelAssignDepth_1864_ = lean_ctor_get(v_mctx_1855_, 1);
v_lmvarCounter_1865_ = lean_ctor_get(v_mctx_1855_, 2);
v_mvarCounter_1866_ = lean_ctor_get(v_mctx_1855_, 3);
v_lDecls_1867_ = lean_ctor_get(v_mctx_1855_, 4);
v_decls_1868_ = lean_ctor_get(v_mctx_1855_, 5);
v_userNames_1869_ = lean_ctor_get(v_mctx_1855_, 6);
v_lAssignment_1870_ = lean_ctor_get(v_mctx_1855_, 7);
v_eAssignment_1871_ = lean_ctor_get(v_mctx_1855_, 8);
v_dAssignment_1872_ = lean_ctor_get(v_mctx_1855_, 9);
v_instanceTypedMVars_1873_ = lean_ctor_get(v_mctx_1855_, 10);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_mctx_1855_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1875_ = v_mctx_1855_;
v_isShared_1876_ = v_isSharedCheck_1887_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_instanceTypedMVars_1873_);
lean_inc(v_dAssignment_1872_);
lean_inc(v_eAssignment_1871_);
lean_inc(v_lAssignment_1870_);
lean_inc(v_userNames_1869_);
lean_inc(v_decls_1868_);
lean_inc(v_lDecls_1867_);
lean_inc(v_mvarCounter_1866_);
lean_inc(v_lmvarCounter_1865_);
lean_inc(v_levelAssignDepth_1864_);
lean_inc(v_depth_1863_);
lean_dec(v_mctx_1855_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1887_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1877_ = lean_box(0);
v___x_1878_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_eAssignment_1871_, v_mvarId_1850_, v_val_1851_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 8, v___x_1878_);
v___x_1880_ = v___x_1875_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_depth_1863_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_levelAssignDepth_1864_);
lean_ctor_set(v_reuseFailAlloc_1886_, 2, v_lmvarCounter_1865_);
lean_ctor_set(v_reuseFailAlloc_1886_, 3, v_mvarCounter_1866_);
lean_ctor_set(v_reuseFailAlloc_1886_, 4, v_lDecls_1867_);
lean_ctor_set(v_reuseFailAlloc_1886_, 5, v_decls_1868_);
lean_ctor_set(v_reuseFailAlloc_1886_, 6, v_userNames_1869_);
lean_ctor_set(v_reuseFailAlloc_1886_, 7, v_lAssignment_1870_);
lean_ctor_set(v_reuseFailAlloc_1886_, 8, v___x_1878_);
lean_ctor_set(v_reuseFailAlloc_1886_, 9, v_dAssignment_1872_);
lean_ctor_set(v_reuseFailAlloc_1886_, 10, v_instanceTypedMVars_1873_);
v___x_1880_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1882_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v___x_1880_);
v___x_1882_ = v___x_1861_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v___x_1880_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v_cache_1856_);
lean_ctor_set(v_reuseFailAlloc_1885_, 2, v_zetaDeltaFVarIds_1857_);
lean_ctor_set(v_reuseFailAlloc_1885_, 3, v_postponed_1858_);
lean_ctor_set(v_reuseFailAlloc_1885_, 4, v_diag_1859_);
v___x_1882_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_st_ref_put(v___y_1852_, v___x_1882_);
v___x_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1877_);
return v___x_1884_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object* v_mvarId_1889_, lean_object* v_val_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1889_, v_val_1890_, v___y_1891_);
lean_dec(v___y_1891_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object* v_type_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v___x_1900_; 
lean_inc(v___y_1898_);
lean_inc_ref(v___y_1897_);
lean_inc(v___y_1896_);
lean_inc_ref(v___y_1895_);
lean_inc_ref(v_type_1894_);
v___x_1900_ = lean_infer_type(v_type_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1902_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v___x_1902_ = l_Lean_Meta_whnfD(v_a_1901_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1937_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1905_ = v___x_1902_;
v_isShared_1906_ = v_isSharedCheck_1937_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1902_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1937_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
switch(lean_obj_tag(v_a_1903_))
{
case 3:
{
lean_object* v_u_1907_; lean_object* v___x_1909_; 
lean_dec_ref(v_type_1894_);
v_u_1907_ = lean_ctor_get(v_a_1903_, 0);
lean_inc(v_u_1907_);
lean_dec_ref_known(v_a_1903_, 1);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 0, v_u_1907_);
v___x_1909_ = v___x_1905_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_u_1907_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
case 2:
{
lean_object* v_mvarId_1911_; lean_object* v___x_1912_; 
lean_del_object(v___x_1905_);
v_mvarId_1911_ = lean_ctor_get(v_a_1903_, 0);
lean_inc_n(v_mvarId_1911_, 2);
lean_dec_ref_known(v_a_1903_, 1);
v___x_1912_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1911_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; uint8_t v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = lean_unbox(v_a_1913_);
lean_dec(v_a_1913_);
if (v___x_1914_ == 0)
{
lean_object* v___x_1915_; 
lean_dec_ref(v_type_1894_);
v___x_1915_ = l_Lean_Meta_mkFreshLevelMVar(v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc_n(v_a_1916_, 2);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = l_Lean_mkSort(v_a_1916_);
v___x_1918_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1911_, v___x_1917_, v___y_1896_);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1925_ == 0)
{
lean_object* v_unused_1926_; 
v_unused_1926_ = lean_ctor_get(v___x_1918_, 0);
lean_dec(v_unused_1926_);
v___x_1920_ = v___x_1918_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_dec(v___x_1918_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 0, v_a_1916_);
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1916_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
else
{
lean_dec(v_mvarId_1911_);
return v___x_1915_;
}
}
else
{
lean_object* v___x_1927_; 
lean_dec(v_mvarId_1911_);
v___x_1927_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
return v___x_1927_;
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec(v_mvarId_1911_);
lean_dec_ref(v_type_1894_);
v_a_1928_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1912_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1912_);
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
default: 
{
lean_object* v___x_1936_; 
lean_del_object(v___x_1905_);
lean_dec(v_a_1903_);
v___x_1936_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
return v___x_1936_;
}
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
lean_dec_ref(v_type_1894_);
v_a_1938_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1902_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1902_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec_ref(v_type_1894_);
v_a_1946_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1900_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1900_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object* v_type_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_Meta_getLevel(v_type_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object* v_mvarId_1961_, lean_object* v_val_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1961_, v_val_1962_, v___y_1964_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object* v_mvarId_1969_, lean_object* v_val_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(v_mvarId_1969_, v_val_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object* v_00_u03b2_1977_, lean_object* v_x_1978_, lean_object* v_x_1979_, lean_object* v_x_1980_){
_start:
{
lean_object* v___x_1981_; 
v___x_1981_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_x_1978_, v_x_1979_, v_x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1982_, lean_object* v_x_1983_, size_t v_x_1984_, size_t v_x_1985_, lean_object* v_x_1986_, lean_object* v_x_1987_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1983_, v_x_1984_, v_x_1985_, v_x_1986_, v_x_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1989_, lean_object* v_x_1990_, lean_object* v_x_1991_, lean_object* v_x_1992_, lean_object* v_x_1993_, lean_object* v_x_1994_){
_start:
{
size_t v_x_1659__boxed_1995_; size_t v_x_1660__boxed_1996_; lean_object* v_res_1997_; 
v_x_1659__boxed_1995_ = lean_unbox_usize(v_x_1991_);
lean_dec(v_x_1991_);
v_x_1660__boxed_1996_ = lean_unbox_usize(v_x_1992_);
lean_dec(v_x_1992_);
v_res_1997_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(v_00_u03b2_1989_, v_x_1990_, v_x_1659__boxed_1995_, v_x_1660__boxed_1996_, v_x_1993_, v_x_1994_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1998_, lean_object* v_n_1999_, lean_object* v_k_2000_, lean_object* v_v_2001_){
_start:
{
lean_object* v___x_2002_; 
v___x_2002_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1999_, v_k_2000_, v_v_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2003_, size_t v_depth_2004_, lean_object* v_keys_2005_, lean_object* v_vals_2006_, lean_object* v_heq_2007_, lean_object* v_i_2008_, lean_object* v_entries_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_2004_, v_keys_2005_, v_vals_2006_, v_i_2008_, v_entries_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2011_, lean_object* v_depth_2012_, lean_object* v_keys_2013_, lean_object* v_vals_2014_, lean_object* v_heq_2015_, lean_object* v_i_2016_, lean_object* v_entries_2017_){
_start:
{
size_t v_depth_boxed_2018_; lean_object* v_res_2019_; 
v_depth_boxed_2018_ = lean_unbox_usize(v_depth_2012_);
lean_dec(v_depth_2012_);
v_res_2019_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2011_, v_depth_boxed_2018_, v_keys_2013_, v_vals_2014_, v_heq_2015_, v_i_2016_, v_entries_2017_);
lean_dec_ref(v_vals_2014_);
lean_dec_ref(v_keys_2013_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2020_, lean_object* v_x_2021_, lean_object* v_x_2022_, lean_object* v_x_2023_, lean_object* v_x_2024_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2021_, v_x_2022_, v_x_2023_, v_x_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object* v_k_2026_, lean_object* v_b_2027_, lean_object* v_c_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; 
lean_inc(v___y_2032_);
lean_inc_ref(v___y_2031_);
lean_inc(v___y_2030_);
lean_inc_ref(v___y_2029_);
v___x_2034_ = lean_apply_7(v_k_2026_, v_b_2027_, v_c_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, lean_box(0));
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object* v_k_2035_, lean_object* v_b_2036_, lean_object* v_c_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(v_k_2035_, v_b_2036_, v_c_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object* v_type_2044_, lean_object* v_k_2045_, uint8_t v_cleanupAnnotations_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v___f_2052_; uint8_t v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___f_2052_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2052_, 0, v_k_2045_);
v___x_2053_ = 0;
v___x_2054_ = lean_box(0);
v___x_2055_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2053_, v___x_2054_, v_type_2044_, v___f_2052_, v_cleanupAnnotations_2046_, v___x_2053_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2055_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2055_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
v_a_2064_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2055_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2055_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object* v_type_2072_, lean_object* v_k_2073_, lean_object* v_cleanupAnnotations_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2080_; lean_object* v_res_2081_; 
v_cleanupAnnotations_boxed_2080_ = lean_unbox(v_cleanupAnnotations_2074_);
v_res_2081_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2072_, v_k_2073_, v_cleanupAnnotations_boxed_2080_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object* v_00_u03b1_2082_, lean_object* v_type_2083_, lean_object* v_k_2084_, uint8_t v_cleanupAnnotations_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2083_, v_k_2084_, v_cleanupAnnotations_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object* v_00_u03b1_2092_, lean_object* v_type_2093_, lean_object* v_k_2094_, lean_object* v_cleanupAnnotations_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2101_; lean_object* v_res_2102_; 
v_cleanupAnnotations_boxed_2101_ = lean_unbox(v_cleanupAnnotations_2095_);
v_res_2102_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(v_00_u03b1_2092_, v_type_2093_, v_k_2094_, v_cleanupAnnotations_boxed_2101_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object* v_as_2103_, size_t v_i_2104_, size_t v_stop_2105_, lean_object* v_b_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
uint8_t v___x_2112_; 
v___x_2112_ = lean_usize_dec_eq(v_i_2104_, v_stop_2105_);
if (v___x_2112_ == 0)
{
size_t v___x_2113_; size_t v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2113_ = ((size_t)1ULL);
v___x_2114_ = lean_usize_sub(v_i_2104_, v___x_2113_);
v___x_2115_ = lean_array_uget_borrowed(v_as_2103_, v___x_2114_);
lean_inc(v___y_2110_);
lean_inc_ref(v___y_2109_);
lean_inc(v___y_2108_);
lean_inc_ref(v___y_2107_);
lean_inc(v___x_2115_);
v___x_2116_ = lean_infer_type(v___x_2115_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2118_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = l_Lean_Meta_getLevel(v_a_2117_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2120_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2118_, 1);
v___x_2120_ = l_Lean_mkLevelIMax_x27(v_a_2119_, v_b_2106_);
v_i_2104_ = v___x_2114_;
v_b_2106_ = v___x_2120_;
goto _start;
}
else
{
lean_dec(v_b_2106_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2122_; 
v_a_2122_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2122_);
lean_dec_ref_known(v___x_2118_, 1);
v_i_2104_ = v___x_2114_;
v_b_2106_ = v_a_2122_;
goto _start;
}
else
{
return v___x_2118_;
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec(v_b_2106_);
v_a_2124_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2116_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2116_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v_b_2106_);
return v___x_2132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object* v_as_2133_, lean_object* v_i_2134_, lean_object* v_stop_2135_, lean_object* v_b_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
size_t v_i_boxed_2142_; size_t v_stop_boxed_2143_; lean_object* v_res_2144_; 
v_i_boxed_2142_ = lean_unbox_usize(v_i_2134_);
lean_dec(v_i_2134_);
v_stop_boxed_2143_ = lean_unbox_usize(v_stop_2135_);
lean_dec(v_stop_2135_);
v_res_2144_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_as_2133_, v_i_boxed_2142_, v_stop_boxed_2143_, v_b_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec_ref(v_as_2133_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object* v_xs_2145_, lean_object* v_e_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v___y_2153_; lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_Meta_getLevel(v_e_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
v___x_2174_ = lean_array_get_size(v_xs_2145_);
v___x_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = lean_nat_dec_lt(v___x_2175_, v___x_2174_);
if (v___x_2176_ == 0)
{
lean_dec(v_a_2173_);
v___y_2153_ = v___x_2172_;
goto v___jp_2152_;
}
else
{
size_t v___x_2177_; size_t v___x_2178_; lean_object* v___x_2179_; 
lean_dec_ref_known(v___x_2172_, 1);
v___x_2177_ = lean_usize_of_nat(v___x_2174_);
v___x_2178_ = ((size_t)0ULL);
v___x_2179_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_xs_2145_, v___x_2177_, v___x_2178_, v_a_2173_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
v___y_2153_ = v___x_2179_;
goto v___jp_2152_;
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
v_a_2180_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2172_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2172_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
v___jp_2152_:
{
if (lean_obj_tag(v___y_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2163_; 
v_a_2154_ = lean_ctor_get(v___y_2153_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___y_2153_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2156_ = v___y_2153_;
v_isShared_2157_ = v_isSharedCheck_2163_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___y_2153_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2163_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2161_; 
v___x_2158_ = l_Lean_Level_normalize(v_a_2154_);
lean_dec(v_a_2154_);
v___x_2159_ = l_Lean_mkSort(v___x_2158_);
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
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v_a_2164_ = lean_ctor_get(v___y_2153_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___y_2153_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___y_2153_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___y_2153_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object* v_xs_2188_, lean_object* v_e_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(v_xs_2188_, v_e_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec_ref(v_xs_2188_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object* v_e_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v___f_2203_; uint8_t v___x_2204_; lean_object* v___x_2205_; 
v___f_2203_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0));
v___x_2204_ = 0;
v___x_2205_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_e_2197_, v___f_2203_, v___x_2204_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object* v_e_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object* v_e_2213_, lean_object* v_k_2214_, uint8_t v_cleanupAnnotations_2215_, uint8_t v_preserveNondepLet_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v___f_2222_; uint8_t v___x_2223_; uint8_t v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___f_2222_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2222_, 0, v_k_2214_);
v___x_2223_ = 1;
v___x_2224_ = 0;
v___x_2225_ = lean_box(0);
v___x_2226_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2213_, v___x_2223_, v___x_2223_, v_preserveNondepLet_2216_, v___x_2224_, v___x_2225_, v___f_2222_, v_cleanupAnnotations_2215_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
v_a_2227_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2226_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2226_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2226_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2226_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object* v_e_2243_, lean_object* v_k_2244_, lean_object* v_cleanupAnnotations_2245_, lean_object* v_preserveNondepLet_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2252_; uint8_t v_preserveNondepLet_boxed_2253_; lean_object* v_res_2254_; 
v_cleanupAnnotations_boxed_2252_ = lean_unbox(v_cleanupAnnotations_2245_);
v_preserveNondepLet_boxed_2253_ = lean_unbox(v_preserveNondepLet_2246_);
v_res_2254_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2243_, v_k_2244_, v_cleanupAnnotations_boxed_2252_, v_preserveNondepLet_boxed_2253_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object* v_00_u03b1_2255_, lean_object* v_e_2256_, lean_object* v_k_2257_, uint8_t v_cleanupAnnotations_2258_, uint8_t v_preserveNondepLet_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2256_, v_k_2257_, v_cleanupAnnotations_2258_, v_preserveNondepLet_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object* v_00_u03b1_2266_, lean_object* v_e_2267_, lean_object* v_k_2268_, lean_object* v_cleanupAnnotations_2269_, lean_object* v_preserveNondepLet_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2276_; uint8_t v_preserveNondepLet_boxed_2277_; lean_object* v_res_2278_; 
v_cleanupAnnotations_boxed_2276_ = lean_unbox(v_cleanupAnnotations_2269_);
v_preserveNondepLet_boxed_2277_ = lean_unbox(v_preserveNondepLet_2270_);
v_res_2278_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(v_00_u03b1_2266_, v_e_2267_, v_k_2268_, v_cleanupAnnotations_boxed_2276_, v_preserveNondepLet_boxed_2277_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object* v_xs_2279_, lean_object* v_e_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v___x_2286_; 
lean_inc(v___y_2284_);
lean_inc_ref(v___y_2283_);
lean_inc(v___y_2282_);
lean_inc_ref(v___y_2281_);
v___x_2286_ = lean_infer_type(v_e_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_object* v_a_2287_; uint8_t v___x_2288_; uint8_t v___x_2289_; uint8_t v___x_2290_; lean_object* v___x_2291_; 
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_a_2287_);
lean_dec_ref_known(v___x_2286_, 1);
v___x_2288_ = 0;
v___x_2289_ = 1;
v___x_2290_ = 1;
v___x_2291_ = l_Lean_Meta_mkForallFVars(v_xs_2279_, v_a_2287_, v___x_2288_, v___x_2289_, v___x_2288_, v___x_2290_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
return v___x_2291_;
}
else
{
return v___x_2286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object* v_xs_2292_, lean_object* v_e_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(v_xs_2292_, v_e_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec_ref(v_xs_2292_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object* v_e_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
lean_object* v___f_2307_; uint8_t v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; 
v___f_2307_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0));
v___x_2308_ = 0;
v___x_2309_ = 1;
v___x_2310_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2301_, v___f_2307_, v___x_2308_, v___x_2309_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object* v_e_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
return v_res_2317_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__0));
v___x_2320_ = l_Lean_stringToMessageData(v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__2));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object* v_mvarId_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2330_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__1, &l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1);
v___x_2331_ = l_Lean_MessageData_ofName(v_mvarId_2324_);
v___x_2332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__3, &l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3);
v___x_2334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_2334_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object* v_mvarId_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
lean_dec(v___y_2338_);
lean_dec_ref(v___y_2337_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object* v_00_u03b1_2343_, lean_object* v_mvarId_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object* v_00_u03b1_2351_, lean_object* v_mvarId_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lean_Meta_throwUnknownMVar(v_00_u03b1_2351_, v_mvarId_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object* v_mvarId_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v_mctx_2366_; lean_object* v___x_2367_; 
v___x_2365_ = lean_st_ref_get(v___y_2361_);
v_mctx_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc_ref(v_mctx_2366_);
lean_dec(v___x_2365_);
v___x_2367_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2366_, v_mvarId_2359_);
lean_dec_ref(v_mctx_2366_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
return v___x_2368_;
}
else
{
lean_object* v_val_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2377_; 
lean_dec(v_mvarId_2359_);
v_val_2369_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2371_ = v___x_2367_;
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_val_2369_);
lean_dec(v___x_2367_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v_type_2373_; lean_object* v___x_2375_; 
v_type_2373_ = lean_ctor_get(v_val_2369_, 2);
lean_inc_ref(v_type_2373_);
lean_dec(v_val_2369_);
if (v_isShared_2372_ == 0)
{
lean_ctor_set_tag(v___x_2371_, 0);
lean_ctor_set(v___x_2371_, 0, v_type_2373_);
v___x_2375_ = v___x_2371_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_type_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object* v_mvarId_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object* v_fvarId_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_lctx_2390_; lean_object* v___x_2391_; 
v_lctx_2390_ = lean_ctor_get(v___y_2386_, 2);
lean_inc(v_fvarId_2385_);
lean_inc_ref(v_lctx_2390_);
v___x_2391_ = lean_local_ctx_find(v_lctx_2390_, v_fvarId_2385_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v___x_2392_; 
v___x_2392_ = l_Lean_FVarId_throwUnknown___redArg(v_fvarId_2385_, v___y_2387_, v___y_2388_);
return v___x_2392_;
}
else
{
lean_object* v_val_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2401_; 
lean_dec(v_fvarId_2385_);
v_val_2393_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2395_ = v___x_2391_;
v_isShared_2396_ = v_isSharedCheck_2401_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_val_2393_);
lean_dec(v___x_2391_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2401_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2397_; lean_object* v___x_2399_; 
v___x_2397_ = l_Lean_LocalDecl_type(v_val_2393_);
lean_dec(v_val_2393_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set_tag(v___x_2395_, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2397_);
v___x_2399_ = v___x_2395_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2397_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object* v_fvarId_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec_ref(v___y_2403_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object* v_fvarId_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2408_, v___y_2409_, v___y_2411_, v___y_2412_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object* v_fvarId_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(v_fvarId_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
return v_res_2421_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0(void){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = l_instMonadEIO___redArg();
return v___x_2422_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1(void){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0);
v___x_2424_ = l_StateRefT_x27_instMonad___redArg(v___x_2423_);
return v___x_2424_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4(void){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = l_instMonadExceptOfEIO___redArg();
return v___x_2427_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___f_2429_; 
v___x_2428_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4);
v___f_2429_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2429_, 0, v___x_2428_);
return v___f_2429_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___f_2431_; 
v___x_2430_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4);
v___f_2431_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_2431_, 0, v___x_2430_);
return v___f_2431_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7(void){
_start:
{
lean_object* v___f_2432_; lean_object* v___f_2433_; lean_object* v___x_2434_; 
v___f_2432_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6);
v___f_2433_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5);
v___x_2434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___f_2433_);
lean_ctor_set(v___x_2434_, 1, v___f_2432_);
return v___x_2434_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___f_2436_; 
v___x_2435_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7);
v___f_2436_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2436_, 0, v___x_2435_);
return v___f_2436_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9(void){
_start:
{
lean_object* v___x_2437_; lean_object* v___f_2438_; 
v___x_2437_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7);
v___f_2438_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_2438_, 0, v___x_2437_);
return v___f_2438_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10(void){
_start:
{
lean_object* v___f_2439_; lean_object* v___f_2440_; lean_object* v___x_2441_; 
v___f_2439_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9);
v___f_2440_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8);
v___x_2441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___f_2440_);
lean_ctor_set(v___x_2441_, 1, v___f_2439_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object* v_e_2444_, lean_object* v_inferType_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
uint8_t v_cacheInferType_2490_; 
v_cacheInferType_2490_ = lean_ctor_get_uint8(v___y_2446_, sizeof(void*)*7 + 3);
if (v_cacheInferType_2490_ == 0)
{
lean_dec_ref(v_e_2444_);
goto v___jp_2451_;
}
else
{
uint8_t v___x_2491_; 
v___x_2491_ = l_Lean_Expr_hasMVar(v_e_2444_);
if (v___x_2491_ == 0)
{
lean_object* v___f_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___f_2492_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11));
v___x_2493_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12));
v___x_2494_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2444_, v___y_2446_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2592_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2497_ = v___x_2494_;
v_isShared_2498_ = v_isSharedCheck_2592_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2494_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2592_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2539_; lean_object* v_cache_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2587_; 
v___x_2539_ = lean_st_ref_get(v___y_2447_);
v_cache_2540_ = lean_ctor_get(v___x_2539_, 1);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2587_ == 0)
{
lean_object* v_unused_2588_; lean_object* v_unused_2589_; lean_object* v_unused_2590_; lean_object* v_unused_2591_; 
v_unused_2588_ = lean_ctor_get(v___x_2539_, 4);
lean_dec(v_unused_2588_);
v_unused_2589_ = lean_ctor_get(v___x_2539_, 3);
lean_dec(v_unused_2589_);
v_unused_2590_ = lean_ctor_get(v___x_2539_, 2);
lean_dec(v_unused_2590_);
v_unused_2591_ = lean_ctor_get(v___x_2539_, 0);
lean_dec(v_unused_2591_);
v___x_2542_ = v___x_2539_;
v_isShared_2543_ = v_isSharedCheck_2587_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_cache_2540_);
lean_dec(v___x_2539_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2587_;
goto v_resetjp_2541_;
}
v___jp_2499_:
{
lean_object* v___x_2500_; 
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
v___x_2500_ = lean_apply_5(v_inferType_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, lean_box(0));
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; uint8_t v___x_2502_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
lean_inc(v_a_2501_);
v___x_2502_ = l_Lean_Expr_hasMVar(v_a_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2537_; 
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2537_ == 0)
{
lean_object* v_unused_2538_; 
v_unused_2538_ = lean_ctor_get(v___x_2500_, 0);
lean_dec(v_unused_2538_);
v___x_2504_ = v___x_2500_;
v_isShared_2505_ = v_isSharedCheck_2537_;
goto v_resetjp_2503_;
}
else
{
lean_dec(v___x_2500_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2537_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2506_; lean_object* v_cache_2507_; lean_object* v_mctx_2508_; lean_object* v_zetaDeltaFVarIds_2509_; lean_object* v_postponed_2510_; lean_object* v_diag_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2536_; 
v___x_2506_ = lean_st_ref_take(v___y_2447_);
v_cache_2507_ = lean_ctor_get(v___x_2506_, 1);
v_mctx_2508_ = lean_ctor_get(v___x_2506_, 0);
v_zetaDeltaFVarIds_2509_ = lean_ctor_get(v___x_2506_, 2);
v_postponed_2510_ = lean_ctor_get(v___x_2506_, 3);
v_diag_2511_ = lean_ctor_get(v___x_2506_, 4);
v_isSharedCheck_2536_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2513_ = v___x_2506_;
v_isShared_2514_ = v_isSharedCheck_2536_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_diag_2511_);
lean_inc(v_postponed_2510_);
lean_inc(v_zetaDeltaFVarIds_2509_);
lean_inc(v_cache_2507_);
lean_inc(v_mctx_2508_);
lean_dec(v___x_2506_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2536_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v_inferType_2515_; lean_object* v_funInfo_2516_; lean_object* v_synthInstance_2517_; lean_object* v_whnf_2518_; lean_object* v_defEqTrans_2519_; lean_object* v_defEqPerm_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2535_; 
v_inferType_2515_ = lean_ctor_get(v_cache_2507_, 0);
v_funInfo_2516_ = lean_ctor_get(v_cache_2507_, 1);
v_synthInstance_2517_ = lean_ctor_get(v_cache_2507_, 2);
v_whnf_2518_ = lean_ctor_get(v_cache_2507_, 3);
v_defEqTrans_2519_ = lean_ctor_get(v_cache_2507_, 4);
v_defEqPerm_2520_ = lean_ctor_get(v_cache_2507_, 5);
v_isSharedCheck_2535_ = !lean_is_exclusive(v_cache_2507_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2522_ = v_cache_2507_;
v_isShared_2523_ = v_isSharedCheck_2535_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_defEqPerm_2520_);
lean_inc(v_defEqTrans_2519_);
lean_inc(v_whnf_2518_);
lean_inc(v_synthInstance_2517_);
lean_inc(v_funInfo_2516_);
lean_inc(v_inferType_2515_);
lean_dec(v_cache_2507_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2535_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_inc(v_a_2501_);
v___x_2524_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2492_, v___x_2493_, v_inferType_2515_, v_a_2495_, v_a_2501_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2524_);
v___x_2526_ = v___x_2522_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v___x_2524_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v_funInfo_2516_);
lean_ctor_set(v_reuseFailAlloc_2534_, 2, v_synthInstance_2517_);
lean_ctor_set(v_reuseFailAlloc_2534_, 3, v_whnf_2518_);
lean_ctor_set(v_reuseFailAlloc_2534_, 4, v_defEqTrans_2519_);
lean_ctor_set(v_reuseFailAlloc_2534_, 5, v_defEqPerm_2520_);
v___x_2526_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2528_; 
if (v_isShared_2514_ == 0)
{
lean_ctor_set(v___x_2513_, 1, v___x_2526_);
v___x_2528_ = v___x_2513_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_mctx_2508_);
lean_ctor_set(v_reuseFailAlloc_2533_, 1, v___x_2526_);
lean_ctor_set(v_reuseFailAlloc_2533_, 2, v_zetaDeltaFVarIds_2509_);
lean_ctor_set(v_reuseFailAlloc_2533_, 3, v_postponed_2510_);
lean_ctor_set(v_reuseFailAlloc_2533_, 4, v_diag_2511_);
v___x_2528_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2529_; lean_object* v___x_2531_; 
v___x_2529_ = lean_st_ref_put(v___y_2447_, v___x_2528_);
if (v_isShared_2505_ == 0)
{
v___x_2531_ = v___x_2504_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2501_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2501_);
lean_dec(v_a_2495_);
return v___x_2500_;
}
}
else
{
lean_dec(v_a_2495_);
return v___x_2500_;
}
}
v_resetjp_2541_:
{
lean_object* v_inferType_2544_; lean_object* v___x_2545_; 
v_inferType_2544_ = lean_ctor_get(v_cache_2540_, 0);
lean_inc_ref(v_inferType_2544_);
lean_dec_ref(v_cache_2540_);
lean_inc(v_a_2495_);
v___x_2545_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2492_, v___x_2493_, v_inferType_2544_, v_a_2495_);
lean_dec_ref(v_inferType_2544_);
if (lean_obj_tag(v___x_2545_) == 0)
{
lean_object* v___x_2546_; lean_object* v_toApplicative_2547_; lean_object* v_toFunctor_2548_; lean_object* v_toSeq_2549_; lean_object* v_toSeqLeft_2550_; lean_object* v_toSeqRight_2551_; lean_object* v___f_2552_; lean_object* v___f_2553_; lean_object* v___f_2554_; lean_object* v___f_2555_; lean_object* v___x_2556_; lean_object* v___f_2557_; lean_object* v___f_2558_; lean_object* v___f_2559_; lean_object* v___x_2561_; 
lean_del_object(v___x_2497_);
v___x_2546_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1);
v_toApplicative_2547_ = lean_ctor_get(v___x_2546_, 0);
v_toFunctor_2548_ = lean_ctor_get(v_toApplicative_2547_, 0);
v_toSeq_2549_ = lean_ctor_get(v_toApplicative_2547_, 2);
v_toSeqLeft_2550_ = lean_ctor_get(v_toApplicative_2547_, 3);
v_toSeqRight_2551_ = lean_ctor_get(v_toApplicative_2547_, 4);
v___f_2552_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2));
v___f_2553_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3));
lean_inc_ref_n(v_toFunctor_2548_, 2);
v___f_2554_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2554_, 0, v_toFunctor_2548_);
v___f_2555_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2555_, 0, v_toFunctor_2548_);
v___x_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___f_2554_);
lean_ctor_set(v___x_2556_, 1, v___f_2555_);
lean_inc(v_toSeqRight_2551_);
v___f_2557_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2557_, 0, v_toSeqRight_2551_);
lean_inc(v_toSeqLeft_2550_);
v___f_2558_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2558_, 0, v_toSeqLeft_2550_);
lean_inc(v_toSeq_2549_);
v___f_2559_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2559_, 0, v_toSeq_2549_);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 4, v___f_2557_);
lean_ctor_set(v___x_2542_, 3, v___f_2558_);
lean_ctor_set(v___x_2542_, 2, v___f_2559_);
lean_ctor_set(v___x_2542_, 1, v___f_2552_);
lean_ctor_set(v___x_2542_, 0, v___x_2556_);
v___x_2561_ = v___x_2542_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2556_);
lean_ctor_set(v_reuseFailAlloc_2582_, 1, v___f_2552_);
lean_ctor_set(v_reuseFailAlloc_2582_, 2, v___f_2559_);
lean_ctor_set(v_reuseFailAlloc_2582_, 3, v___f_2558_);
lean_ctor_set(v_reuseFailAlloc_2582_, 4, v___f_2557_);
v___x_2561_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v_toCold_2568_; lean_object* v_cancelTk_x3f_2569_; 
v___x_2562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
lean_ctor_set(v___x_2562_, 1, v___f_2553_);
v___x_2563_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10);
v___x_2564_ = l_Lean_Core_instMonadRefCoreM;
v___x_2565_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2566_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2565_, v___x_2562_);
v___x_2567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2563_);
lean_ctor_set(v___x_2567_, 1, v___x_2564_);
lean_ctor_set(v___x_2567_, 2, v___x_2566_);
v_toCold_2568_ = lean_ctor_get(v___y_2448_, 0);
v_cancelTk_x3f_2569_ = lean_ctor_get(v_toCold_2568_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2569_) == 1)
{
lean_object* v_val_2570_; uint8_t v___x_2571_; 
v_val_2570_ = lean_ctor_get(v_cancelTk_x3f_2569_, 0);
v___x_2571_ = l_IO_CancelToken_isSet(v_val_2570_);
if (v___x_2571_ == 0)
{
lean_dec_ref_known(v___x_2567_, 3);
goto v___jp_2499_;
}
else
{
lean_object* v___x_2348__overap_2572_; lean_object* v___x_2573_; 
v___x_2348__overap_2572_ = l_Lean_throwInterruptException___redArg(v___x_2567_);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
v___x_2573_ = lean_apply_3(v___x_2348__overap_2572_, v___y_2448_, v___y_2449_, lean_box(0));
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_dec_ref_known(v___x_2573_, 1);
goto v___jp_2499_;
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec(v_a_2495_);
lean_dec_ref(v_inferType_2445_);
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2573_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2573_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2567_, 3);
goto v___jp_2499_;
}
}
}
else
{
lean_object* v_val_2583_; lean_object* v___x_2585_; 
lean_del_object(v___x_2542_);
lean_dec(v_a_2495_);
lean_dec_ref(v_inferType_2445_);
v_val_2583_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_val_2583_);
lean_dec_ref_known(v___x_2545_, 1);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v_val_2583_);
v___x_2585_ = v___x_2497_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_val_2583_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec_ref(v_inferType_2445_);
v_a_2593_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2494_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2494_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_dec_ref(v_e_2444_);
goto v___jp_2451_;
}
}
v___jp_2451_:
{
lean_object* v___x_2452_; lean_object* v_toApplicative_2453_; lean_object* v_toFunctor_2454_; lean_object* v_toSeq_2455_; lean_object* v_toSeqLeft_2456_; lean_object* v_toSeqRight_2457_; lean_object* v___f_2458_; lean_object* v___f_2459_; lean_object* v___f_2460_; lean_object* v___f_2461_; lean_object* v___x_2462_; lean_object* v___f_2463_; lean_object* v___f_2464_; lean_object* v___f_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v_toCold_2473_; lean_object* v_cancelTk_x3f_2474_; 
v___x_2452_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1);
v_toApplicative_2453_ = lean_ctor_get(v___x_2452_, 0);
v_toFunctor_2454_ = lean_ctor_get(v_toApplicative_2453_, 0);
v_toSeq_2455_ = lean_ctor_get(v_toApplicative_2453_, 2);
v_toSeqLeft_2456_ = lean_ctor_get(v_toApplicative_2453_, 3);
v_toSeqRight_2457_ = lean_ctor_get(v_toApplicative_2453_, 4);
v___f_2458_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2));
v___f_2459_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3));
lean_inc_ref_n(v_toFunctor_2454_, 2);
v___f_2460_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2460_, 0, v_toFunctor_2454_);
v___f_2461_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2461_, 0, v_toFunctor_2454_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___f_2460_);
lean_ctor_set(v___x_2462_, 1, v___f_2461_);
lean_inc(v_toSeqRight_2457_);
v___f_2463_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2463_, 0, v_toSeqRight_2457_);
lean_inc(v_toSeqLeft_2456_);
v___f_2464_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2464_, 0, v_toSeqLeft_2456_);
lean_inc(v_toSeq_2455_);
v___f_2465_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2465_, 0, v_toSeq_2455_);
v___x_2466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2462_);
lean_ctor_set(v___x_2466_, 1, v___f_2458_);
lean_ctor_set(v___x_2466_, 2, v___f_2465_);
lean_ctor_set(v___x_2466_, 3, v___f_2464_);
lean_ctor_set(v___x_2466_, 4, v___f_2463_);
v___x_2467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
lean_ctor_set(v___x_2467_, 1, v___f_2459_);
v___x_2468_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10);
v___x_2469_ = l_Lean_Core_instMonadRefCoreM;
v___x_2470_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2471_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2470_, v___x_2467_);
v___x_2472_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2468_);
lean_ctor_set(v___x_2472_, 1, v___x_2469_);
lean_ctor_set(v___x_2472_, 2, v___x_2471_);
v_toCold_2473_ = lean_ctor_get(v___y_2448_, 0);
v_cancelTk_x3f_2474_ = lean_ctor_get(v_toCold_2473_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2474_) == 1)
{
lean_object* v_val_2475_; uint8_t v___x_2476_; 
v_val_2475_ = lean_ctor_get(v_cancelTk_x3f_2474_, 0);
v___x_2476_ = l_IO_CancelToken_isSet(v_val_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; 
lean_dec_ref_known(v___x_2472_, 3);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
v___x_2477_ = lean_apply_5(v_inferType_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, lean_box(0));
return v___x_2477_;
}
else
{
lean_object* v___x_2320__overap_2478_; lean_object* v___x_2479_; 
v___x_2320__overap_2478_ = l_Lean_throwInterruptException___redArg(v___x_2472_);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
v___x_2479_ = lean_apply_3(v___x_2320__overap_2478_, v___y_2448_, v___y_2449_, lean_box(0));
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v___x_2480_; 
lean_dec_ref_known(v___x_2479_, 1);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
v___x_2480_ = lean_apply_5(v_inferType_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, lean_box(0));
return v___x_2480_;
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_dec_ref(v_inferType_2445_);
v_a_2481_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2479_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2479_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
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
}
else
{
lean_object* v___x_2489_; 
lean_dec_ref_known(v___x_2472_, 3);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
lean_inc(v___y_2447_);
lean_inc_ref(v___y_2446_);
v___x_2489_ = lean_apply_5(v_inferType_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, lean_box(0));
return v___x_2489_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object* v_e_2601_, lean_object* v_inferType_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(v_e_2601_, v_inferType_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
return v_res_2608_;
}
}
static lean_object* _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = 2;
v___x_2610_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v___x_2609_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0(lean_object* v_x_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v___x_2663_; uint8_t v_beta_2664_; 
v___x_2663_ = l_Lean_Meta_Context_config(v___y_2612_);
v_beta_2664_ = lean_ctor_get_uint8(v___x_2663_, 13);
if (v_beta_2664_ == 0)
{
lean_dec_ref(v___x_2663_);
goto v___jp_2617_;
}
else
{
uint8_t v_iota_2665_; 
v_iota_2665_ = lean_ctor_get_uint8(v___x_2663_, 12);
if (v_iota_2665_ == 0)
{
lean_dec_ref(v___x_2663_);
goto v___jp_2617_;
}
else
{
uint8_t v_zeta_2666_; 
v_zeta_2666_ = lean_ctor_get_uint8(v___x_2663_, 15);
if (v_zeta_2666_ == 0)
{
lean_dec_ref(v___x_2663_);
goto v___jp_2617_;
}
else
{
uint8_t v_zetaHave_2667_; 
v_zetaHave_2667_ = lean_ctor_get_uint8(v___x_2663_, 18);
if (v_zetaHave_2667_ == 0)
{
lean_dec_ref(v___x_2663_);
goto v___jp_2617_;
}
else
{
uint8_t v_zetaDelta_2668_; 
v_zetaDelta_2668_ = lean_ctor_get_uint8(v___x_2663_, 16);
if (v_zetaDelta_2668_ == 0)
{
lean_dec_ref(v___x_2663_);
goto v___jp_2617_;
}
else
{
uint8_t v_etaStruct_2669_; uint8_t v_proj_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; 
v_etaStruct_2669_ = lean_ctor_get_uint8(v___x_2663_, 10);
v_proj_2670_ = lean_ctor_get_uint8(v___x_2663_, 14);
lean_dec_ref(v___x_2663_);
v___x_2671_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_2670_);
v___x_2672_ = lean_obj_once(&l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0, &l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0);
v___x_2673_ = lean_nat_dec_eq(v___x_2671_, v___x_2672_);
lean_dec(v___x_2671_);
if (v___x_2673_ == 0)
{
goto v___jp_2617_;
}
else
{
uint8_t v___x_2674_; uint8_t v___x_2675_; 
v___x_2674_ = 0;
v___x_2675_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_2669_, v___x_2674_);
if (v___x_2675_ == 0)
{
goto v___jp_2617_;
}
else
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_apply_5(v_x_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, lean_box(0));
return v___x_2676_;
}
}
}
}
}
}
}
v___jp_2617_:
{
lean_object* v___x_2618_; uint8_t v_foApprox_2619_; uint8_t v_ctxApprox_2620_; uint8_t v_quasiPatternApprox_2621_; uint8_t v_constApprox_2622_; uint8_t v_isDefEqStuckEx_2623_; uint8_t v_unificationHints_2624_; uint8_t v_proofIrrelevance_2625_; uint8_t v_assignSyntheticOpaque_2626_; uint8_t v_offsetCnstrs_2627_; uint8_t v_transparency_2628_; uint8_t v_univApprox_2629_; uint8_t v_zetaUnused_2630_; uint8_t v_canUnfoldPredicateConfig_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2662_; 
v___x_2618_ = l_Lean_Meta_Context_config(v___y_2612_);
v_foApprox_2619_ = lean_ctor_get_uint8(v___x_2618_, 0);
v_ctxApprox_2620_ = lean_ctor_get_uint8(v___x_2618_, 1);
v_quasiPatternApprox_2621_ = lean_ctor_get_uint8(v___x_2618_, 2);
v_constApprox_2622_ = lean_ctor_get_uint8(v___x_2618_, 3);
v_isDefEqStuckEx_2623_ = lean_ctor_get_uint8(v___x_2618_, 4);
v_unificationHints_2624_ = lean_ctor_get_uint8(v___x_2618_, 5);
v_proofIrrelevance_2625_ = lean_ctor_get_uint8(v___x_2618_, 6);
v_assignSyntheticOpaque_2626_ = lean_ctor_get_uint8(v___x_2618_, 7);
v_offsetCnstrs_2627_ = lean_ctor_get_uint8(v___x_2618_, 8);
v_transparency_2628_ = lean_ctor_get_uint8(v___x_2618_, 9);
v_univApprox_2629_ = lean_ctor_get_uint8(v___x_2618_, 11);
v_zetaUnused_2630_ = lean_ctor_get_uint8(v___x_2618_, 17);
v_canUnfoldPredicateConfig_2631_ = lean_ctor_get_uint8(v___x_2618_, 19);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2633_ = v___x_2618_;
v_isShared_2634_ = v_isSharedCheck_2662_;
goto v_resetjp_2632_;
}
else
{
lean_dec(v___x_2618_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2662_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
uint8_t v___x_2635_; uint8_t v___x_2636_; uint8_t v___x_2637_; lean_object* v___x_2639_; 
v___x_2635_ = 1;
v___x_2636_ = 0;
v___x_2637_ = 2;
if (v_isShared_2634_ == 0)
{
v___x_2639_ = v___x_2633_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 0, v_foApprox_2619_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 1, v_ctxApprox_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 2, v_quasiPatternApprox_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 3, v_constApprox_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 4, v_isDefEqStuckEx_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 5, v_unificationHints_2624_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 6, v_proofIrrelevance_2625_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 7, v_assignSyntheticOpaque_2626_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 8, v_offsetCnstrs_2627_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 9, v_transparency_2628_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 11, v_univApprox_2629_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 17, v_zetaUnused_2630_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 19, v_canUnfoldPredicateConfig_2631_);
v___x_2639_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
uint8_t v_trackZetaDelta_2640_; lean_object* v_zetaDeltaSet_2641_; lean_object* v_lctx_2642_; lean_object* v_localInstances_2643_; lean_object* v_defEqCtx_x3f_2644_; lean_object* v_synthPendingDepth_2645_; lean_object* v_customCanUnfoldPredicate_x3f_2646_; uint8_t v_univApprox_2647_; uint8_t v_inTypeClassResolution_2648_; uint8_t v_cacheInferType_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2659_; 
lean_ctor_set_uint8(v___x_2639_, 10, v___x_2636_);
lean_ctor_set_uint8(v___x_2639_, 12, v___x_2635_);
lean_ctor_set_uint8(v___x_2639_, 13, v___x_2635_);
lean_ctor_set_uint8(v___x_2639_, 14, v___x_2637_);
lean_ctor_set_uint8(v___x_2639_, 15, v___x_2635_);
lean_ctor_set_uint8(v___x_2639_, 16, v___x_2635_);
lean_ctor_set_uint8(v___x_2639_, 18, v___x_2635_);
v_trackZetaDelta_2640_ = lean_ctor_get_uint8(v___y_2612_, sizeof(void*)*7);
v_zetaDeltaSet_2641_ = lean_ctor_get(v___y_2612_, 1);
v_lctx_2642_ = lean_ctor_get(v___y_2612_, 2);
v_localInstances_2643_ = lean_ctor_get(v___y_2612_, 3);
v_defEqCtx_x3f_2644_ = lean_ctor_get(v___y_2612_, 4);
v_synthPendingDepth_2645_ = lean_ctor_get(v___y_2612_, 5);
v_customCanUnfoldPredicate_x3f_2646_ = lean_ctor_get(v___y_2612_, 6);
v_univApprox_2647_ = lean_ctor_get_uint8(v___y_2612_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2648_ = lean_ctor_get_uint8(v___y_2612_, sizeof(void*)*7 + 2);
v_cacheInferType_2649_ = lean_ctor_get_uint8(v___y_2612_, sizeof(void*)*7 + 3);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___y_2612_);
if (v_isSharedCheck_2659_ == 0)
{
lean_object* v_unused_2660_; 
v_unused_2660_ = lean_ctor_get(v___y_2612_, 0);
lean_dec(v_unused_2660_);
v___x_2651_ = v___y_2612_;
v_isShared_2652_ = v_isSharedCheck_2659_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_2646_);
lean_inc(v_synthPendingDepth_2645_);
lean_inc(v_defEqCtx_x3f_2644_);
lean_inc(v_localInstances_2643_);
lean_inc(v_lctx_2642_);
lean_inc(v_zetaDeltaSet_2641_);
lean_dec(v___y_2612_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2659_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
uint64_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2656_; 
v___x_2653_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2639_);
v___x_2654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2654_, 0, v___x_2639_);
lean_ctor_set_uint64(v___x_2654_, sizeof(void*)*1, v___x_2653_);
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2654_);
v___x_2656_ = v___x_2651_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2654_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v_zetaDeltaSet_2641_);
lean_ctor_set(v_reuseFailAlloc_2658_, 2, v_lctx_2642_);
lean_ctor_set(v_reuseFailAlloc_2658_, 3, v_localInstances_2643_);
lean_ctor_set(v_reuseFailAlloc_2658_, 4, v_defEqCtx_x3f_2644_);
lean_ctor_set(v_reuseFailAlloc_2658_, 5, v_synthPendingDepth_2645_);
lean_ctor_set(v_reuseFailAlloc_2658_, 6, v_customCanUnfoldPredicate_x3f_2646_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*7, v_trackZetaDelta_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*7 + 1, v_univApprox_2647_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2648_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*7 + 3, v_cacheInferType_2649_);
v___x_2656_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_apply_5(v_x_2611_, v___x_2656_, v___y_2613_, v___y_2614_, v___y_2615_, lean_box(0));
return v___x_2657_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___boxed(lean_object* v_x_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object* v_x_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v___y_2691_; lean_object* v___x_2708_; uint8_t v_transparency_2709_; uint8_t v___x_2710_; uint8_t v___x_2711_; 
v___x_2708_ = l_Lean_Meta_Context_config(v___y_2685_);
v_transparency_2709_ = lean_ctor_get_uint8(v___x_2708_, 9);
lean_dec_ref(v___x_2708_);
v___x_2710_ = 1;
v___x_2711_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2709_, v___x_2710_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; 
lean_inc(v___y_2688_);
lean_inc_ref(v___y_2687_);
lean_inc(v___y_2686_);
lean_inc_ref(v___y_2685_);
v___x_2712_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_);
v___y_2691_ = v___x_2712_;
goto v___jp_2690_;
}
else
{
lean_object* v_keyedConfig_2713_; uint8_t v_trackZetaDelta_2714_; lean_object* v_zetaDeltaSet_2715_; lean_object* v_lctx_2716_; lean_object* v_localInstances_2717_; lean_object* v_defEqCtx_x3f_2718_; lean_object* v_synthPendingDepth_2719_; lean_object* v_customCanUnfoldPredicate_x3f_2720_; uint8_t v_univApprox_2721_; uint8_t v_inTypeClassResolution_2722_; uint8_t v_cacheInferType_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v_keyedConfig_2713_ = lean_ctor_get(v___y_2685_, 0);
v_trackZetaDelta_2714_ = lean_ctor_get_uint8(v___y_2685_, sizeof(void*)*7);
v_zetaDeltaSet_2715_ = lean_ctor_get(v___y_2685_, 1);
v_lctx_2716_ = lean_ctor_get(v___y_2685_, 2);
v_localInstances_2717_ = lean_ctor_get(v___y_2685_, 3);
v_defEqCtx_x3f_2718_ = lean_ctor_get(v___y_2685_, 4);
v_synthPendingDepth_2719_ = lean_ctor_get(v___y_2685_, 5);
v_customCanUnfoldPredicate_x3f_2720_ = lean_ctor_get(v___y_2685_, 6);
v_univApprox_2721_ = lean_ctor_get_uint8(v___y_2685_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2722_ = lean_ctor_get_uint8(v___y_2685_, sizeof(void*)*7 + 2);
v_cacheInferType_2723_ = lean_ctor_get_uint8(v___y_2685_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2713_);
v___x_2724_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2710_, v_keyedConfig_2713_);
lean_inc(v_customCanUnfoldPredicate_x3f_2720_);
lean_inc(v_synthPendingDepth_2719_);
lean_inc(v_defEqCtx_x3f_2718_);
lean_inc_ref(v_localInstances_2717_);
lean_inc_ref(v_lctx_2716_);
lean_inc(v_zetaDeltaSet_2715_);
v___x_2725_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2725_, 0, v___x_2724_);
lean_ctor_set(v___x_2725_, 1, v_zetaDeltaSet_2715_);
lean_ctor_set(v___x_2725_, 2, v_lctx_2716_);
lean_ctor_set(v___x_2725_, 3, v_localInstances_2717_);
lean_ctor_set(v___x_2725_, 4, v_defEqCtx_x3f_2718_);
lean_ctor_set(v___x_2725_, 5, v_synthPendingDepth_2719_);
lean_ctor_set(v___x_2725_, 6, v_customCanUnfoldPredicate_x3f_2720_);
lean_ctor_set_uint8(v___x_2725_, sizeof(void*)*7, v_trackZetaDelta_2714_);
lean_ctor_set_uint8(v___x_2725_, sizeof(void*)*7 + 1, v_univApprox_2721_);
lean_ctor_set_uint8(v___x_2725_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2722_);
lean_ctor_set_uint8(v___x_2725_, sizeof(void*)*7 + 3, v_cacheInferType_2723_);
lean_inc(v___y_2688_);
lean_inc_ref(v___y_2687_);
lean_inc(v___y_2686_);
v___x_2726_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2684_, v___x_2725_, v___y_2686_, v___y_2687_, v___y_2688_);
v___y_2691_ = v___x_2726_;
goto v___jp_2690_;
}
v___jp_2690_:
{
if (lean_obj_tag(v___y_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
v_a_2692_ = lean_ctor_get(v___y_2691_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___y_2691_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___y_2691_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___y_2691_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
else
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2707_; 
v_a_2700_ = lean_ctor_get(v___y_2691_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___y_2691_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2702_ = v___y_2691_;
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___y_2691_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object* v_x_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lean_Meta_withInferTypeConfig___redArg(v_x_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_);
lean_dec(v___y_2731_);
lean_dec_ref(v___y_2730_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2728_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object* v_00_u03b1_2734_, lean_object* v_x_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v___y_2742_; lean_object* v___x_2759_; uint8_t v_transparency_2760_; uint8_t v___x_2761_; uint8_t v___x_2762_; 
v___x_2759_ = l_Lean_Meta_Context_config(v___y_2736_);
v_transparency_2760_ = lean_ctor_get_uint8(v___x_2759_, 9);
lean_dec_ref(v___x_2759_);
v___x_2761_ = 1;
v___x_2762_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2760_, v___x_2761_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; 
lean_inc(v___y_2739_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc_ref(v___y_2736_);
v___x_2763_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
v___y_2742_ = v___x_2763_;
goto v___jp_2741_;
}
else
{
lean_object* v_keyedConfig_2764_; uint8_t v_trackZetaDelta_2765_; lean_object* v_zetaDeltaSet_2766_; lean_object* v_lctx_2767_; lean_object* v_localInstances_2768_; lean_object* v_defEqCtx_x3f_2769_; lean_object* v_synthPendingDepth_2770_; lean_object* v_customCanUnfoldPredicate_x3f_2771_; uint8_t v_univApprox_2772_; uint8_t v_inTypeClassResolution_2773_; uint8_t v_cacheInferType_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v_keyedConfig_2764_ = lean_ctor_get(v___y_2736_, 0);
v_trackZetaDelta_2765_ = lean_ctor_get_uint8(v___y_2736_, sizeof(void*)*7);
v_zetaDeltaSet_2766_ = lean_ctor_get(v___y_2736_, 1);
v_lctx_2767_ = lean_ctor_get(v___y_2736_, 2);
v_localInstances_2768_ = lean_ctor_get(v___y_2736_, 3);
v_defEqCtx_x3f_2769_ = lean_ctor_get(v___y_2736_, 4);
v_synthPendingDepth_2770_ = lean_ctor_get(v___y_2736_, 5);
v_customCanUnfoldPredicate_x3f_2771_ = lean_ctor_get(v___y_2736_, 6);
v_univApprox_2772_ = lean_ctor_get_uint8(v___y_2736_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2773_ = lean_ctor_get_uint8(v___y_2736_, sizeof(void*)*7 + 2);
v_cacheInferType_2774_ = lean_ctor_get_uint8(v___y_2736_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2764_);
v___x_2775_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2761_, v_keyedConfig_2764_);
lean_inc(v_customCanUnfoldPredicate_x3f_2771_);
lean_inc(v_synthPendingDepth_2770_);
lean_inc(v_defEqCtx_x3f_2769_);
lean_inc_ref(v_localInstances_2768_);
lean_inc_ref(v_lctx_2767_);
lean_inc(v_zetaDeltaSet_2766_);
v___x_2776_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2776_, 0, v___x_2775_);
lean_ctor_set(v___x_2776_, 1, v_zetaDeltaSet_2766_);
lean_ctor_set(v___x_2776_, 2, v_lctx_2767_);
lean_ctor_set(v___x_2776_, 3, v_localInstances_2768_);
lean_ctor_set(v___x_2776_, 4, v_defEqCtx_x3f_2769_);
lean_ctor_set(v___x_2776_, 5, v_synthPendingDepth_2770_);
lean_ctor_set(v___x_2776_, 6, v_customCanUnfoldPredicate_x3f_2771_);
lean_ctor_set_uint8(v___x_2776_, sizeof(void*)*7, v_trackZetaDelta_2765_);
lean_ctor_set_uint8(v___x_2776_, sizeof(void*)*7 + 1, v_univApprox_2772_);
lean_ctor_set_uint8(v___x_2776_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2773_);
lean_ctor_set_uint8(v___x_2776_, sizeof(void*)*7 + 3, v_cacheInferType_2774_);
lean_inc(v___y_2739_);
lean_inc_ref(v___y_2738_);
lean_inc(v___y_2737_);
v___x_2777_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2735_, v___x_2776_, v___y_2737_, v___y_2738_, v___y_2739_);
v___y_2742_ = v___x_2777_;
goto v___jp_2741_;
}
v___jp_2741_:
{
if (lean_obj_tag(v___y_2742_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
v_a_2743_ = lean_ctor_get(v___y_2742_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___y_2742_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___y_2742_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___y_2742_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
v_a_2751_ = lean_ctor_get(v___y_2742_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___y_2742_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2753_ = v___y_2742_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___y_2742_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object* v_00_u03b1_2778_, lean_object* v_x_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lean_Meta_withInferTypeConfig(v_00_u03b1_2778_, v_x_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
return v_res_2785_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2786_ = lean_box(0);
v___x_2787_ = l_Lean_interruptExceptionId;
v___x_2788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
lean_ctor_set(v___x_2788_, 1, v___x_2786_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(){
_start:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2790_ = lean_obj_once(&l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0, &l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0);
v___x_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object* v___y_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object* v_00_u03b1_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object* v_00_u03b1_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(v_00_u03b1_2799_, v___y_2800_, v___y_2801_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_x_2804_, lean_object* v_x_2805_, lean_object* v_x_2806_, lean_object* v_x_2807_){
_start:
{
lean_object* v_ks_2808_; lean_object* v_vs_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2838_; 
v_ks_2808_ = lean_ctor_get(v_x_2804_, 0);
v_vs_2809_ = lean_ctor_get(v_x_2804_, 1);
v_isSharedCheck_2838_ = !lean_is_exclusive(v_x_2804_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2811_ = v_x_2804_;
v_isShared_2812_ = v_isSharedCheck_2838_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_vs_2809_);
lean_inc(v_ks_2808_);
lean_dec(v_x_2804_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2838_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
uint8_t v___y_2814_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2826_ = lean_array_get_size(v_ks_2808_);
v___x_2827_ = lean_nat_dec_lt(v_x_2805_, v___x_2826_);
if (v___x_2827_ == 0)
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
lean_del_object(v___x_2811_);
lean_dec(v_x_2805_);
v___x_2828_ = lean_array_push(v_ks_2808_, v_x_2806_);
v___x_2829_ = lean_array_push(v_vs_2809_, v_x_2807_);
v___x_2830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2828_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
return v___x_2830_;
}
else
{
lean_object* v_expr_2831_; uint64_t v_configKey_2832_; lean_object* v_k_x27_2833_; lean_object* v_expr_2834_; uint64_t v_configKey_2835_; uint8_t v___x_2836_; 
v_expr_2831_ = lean_ctor_get(v_x_2806_, 0);
v_configKey_2832_ = lean_ctor_get_uint64(v_x_2806_, sizeof(void*)*1);
v_k_x27_2833_ = lean_array_fget_borrowed(v_ks_2808_, v_x_2805_);
v_expr_2834_ = lean_ctor_get(v_k_x27_2833_, 0);
v_configKey_2835_ = lean_ctor_get_uint64(v_k_x27_2833_, sizeof(void*)*1);
v___x_2836_ = lean_expr_equal(v_expr_2831_, v_expr_2834_);
if (v___x_2836_ == 0)
{
v___y_2814_ = v___x_2836_;
goto v___jp_2813_;
}
else
{
uint8_t v___x_2837_; 
v___x_2837_ = lean_uint64_dec_eq(v_configKey_2832_, v_configKey_2835_);
v___y_2814_ = v___x_2837_;
goto v___jp_2813_;
}
}
v___jp_2813_:
{
if (v___y_2814_ == 0)
{
lean_object* v___x_2816_; 
if (v_isShared_2812_ == 0)
{
v___x_2816_ = v___x_2811_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_ks_2808_);
lean_ctor_set(v_reuseFailAlloc_2820_, 1, v_vs_2809_);
v___x_2816_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2817_ = lean_unsigned_to_nat(1u);
v___x_2818_ = lean_nat_add(v_x_2805_, v___x_2817_);
lean_dec(v_x_2805_);
v_x_2804_ = v___x_2816_;
v_x_2805_ = v___x_2818_;
goto _start;
}
}
else
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
v___x_2821_ = lean_array_fset(v_ks_2808_, v_x_2805_, v_x_2806_);
v___x_2822_ = lean_array_fset(v_vs_2809_, v_x_2805_, v_x_2807_);
lean_dec(v_x_2805_);
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 1, v___x_2822_);
lean_ctor_set(v___x_2811_, 0, v___x_2821_);
v___x_2824_ = v___x_2811_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2821_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object* v_n_2839_, lean_object* v_k_2840_, lean_object* v_v_2841_){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(v_n_2839_, v___x_2842_, v_k_2840_, v_v_2841_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object* v_x_2844_, size_t v_x_2845_, size_t v_x_2846_, lean_object* v_x_2847_, lean_object* v_x_2848_){
_start:
{
if (lean_obj_tag(v_x_2844_) == 0)
{
lean_object* v_es_2849_; size_t v___x_2850_; size_t v___x_2851_; lean_object* v_j_2852_; lean_object* v___x_2853_; uint8_t v___x_2854_; 
v_es_2849_ = lean_ctor_get(v_x_2844_, 0);
v___x_2850_ = ((size_t)31ULL);
v___x_2851_ = lean_usize_land(v_x_2845_, v___x_2850_);
v_j_2852_ = lean_usize_to_nat(v___x_2851_);
v___x_2853_ = lean_array_get_size(v_es_2849_);
v___x_2854_ = lean_nat_dec_lt(v_j_2852_, v___x_2853_);
if (v___x_2854_ == 0)
{
lean_dec(v_j_2852_);
lean_dec(v_x_2848_);
lean_dec_ref(v_x_2847_);
return v_x_2844_;
}
else
{
lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2900_; 
lean_inc_ref(v_es_2849_);
v_isSharedCheck_2900_ = !lean_is_exclusive(v_x_2844_);
if (v_isSharedCheck_2900_ == 0)
{
lean_object* v_unused_2901_; 
v_unused_2901_ = lean_ctor_get(v_x_2844_, 0);
lean_dec(v_unused_2901_);
v___x_2856_ = v_x_2844_;
v_isShared_2857_ = v_isSharedCheck_2900_;
goto v_resetjp_2855_;
}
else
{
lean_dec(v_x_2844_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2900_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v_v_2858_; lean_object* v___x_2859_; lean_object* v_xs_x27_2860_; lean_object* v___y_2862_; 
v_v_2858_ = lean_array_fget(v_es_2849_, v_j_2852_);
v___x_2859_ = lean_box(0);
v_xs_x27_2860_ = lean_array_fset(v_es_2849_, v_j_2852_, v___x_2859_);
switch(lean_obj_tag(v_v_2858_))
{
case 0:
{
lean_object* v_key_2867_; lean_object* v_val_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2885_; 
v_key_2867_ = lean_ctor_get(v_v_2858_, 0);
v_val_2868_ = lean_ctor_get(v_v_2858_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_v_2858_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2870_ = v_v_2858_;
v_isShared_2871_ = v_isSharedCheck_2885_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_val_2868_);
lean_inc(v_key_2867_);
lean_dec(v_v_2858_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2885_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
uint8_t v___y_2873_; lean_object* v_expr_2879_; uint64_t v_configKey_2880_; lean_object* v_expr_2881_; uint64_t v_configKey_2882_; uint8_t v___x_2883_; 
v_expr_2879_ = lean_ctor_get(v_x_2847_, 0);
v_configKey_2880_ = lean_ctor_get_uint64(v_x_2847_, sizeof(void*)*1);
v_expr_2881_ = lean_ctor_get(v_key_2867_, 0);
v_configKey_2882_ = lean_ctor_get_uint64(v_key_2867_, sizeof(void*)*1);
v___x_2883_ = lean_expr_equal(v_expr_2879_, v_expr_2881_);
if (v___x_2883_ == 0)
{
v___y_2873_ = v___x_2883_;
goto v___jp_2872_;
}
else
{
uint8_t v___x_2884_; 
v___x_2884_ = lean_uint64_dec_eq(v_configKey_2880_, v_configKey_2882_);
v___y_2873_ = v___x_2884_;
goto v___jp_2872_;
}
v___jp_2872_:
{
if (v___y_2873_ == 0)
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
lean_del_object(v___x_2870_);
v___x_2874_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2867_, v_val_2868_, v_x_2847_, v_x_2848_);
v___x_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
v___y_2862_ = v___x_2875_;
goto v___jp_2861_;
}
else
{
lean_object* v___x_2877_; 
lean_dec(v_val_2868_);
lean_dec(v_key_2867_);
if (v_isShared_2871_ == 0)
{
lean_ctor_set(v___x_2870_, 1, v_x_2848_);
lean_ctor_set(v___x_2870_, 0, v_x_2847_);
v___x_2877_ = v___x_2870_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_x_2847_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v_x_2848_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
v___y_2862_ = v___x_2877_;
goto v___jp_2861_;
}
}
}
}
}
case 1:
{
lean_object* v_node_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2898_; 
v_node_2886_ = lean_ctor_get(v_v_2858_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_v_2858_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2888_ = v_v_2858_;
v_isShared_2889_ = v_isSharedCheck_2898_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_node_2886_);
lean_dec(v_v_2858_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2898_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
size_t v___x_2890_; size_t v___x_2891_; size_t v___x_2892_; size_t v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2896_; 
v___x_2890_ = ((size_t)5ULL);
v___x_2891_ = lean_usize_shift_right(v_x_2845_, v___x_2890_);
v___x_2892_ = ((size_t)1ULL);
v___x_2893_ = lean_usize_add(v_x_2846_, v___x_2892_);
v___x_2894_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_node_2886_, v___x_2891_, v___x_2893_, v_x_2847_, v_x_2848_);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 0, v___x_2894_);
v___x_2896_ = v___x_2888_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v___x_2894_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
v___y_2862_ = v___x_2896_;
goto v___jp_2861_;
}
}
}
default: 
{
lean_object* v___x_2899_; 
v___x_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2899_, 0, v_x_2847_);
lean_ctor_set(v___x_2899_, 1, v_x_2848_);
v___y_2862_ = v___x_2899_;
goto v___jp_2861_;
}
}
v___jp_2861_:
{
lean_object* v___x_2863_; lean_object* v___x_2865_; 
v___x_2863_ = lean_array_fset(v_xs_x27_2860_, v_j_2852_, v___y_2862_);
lean_dec(v_j_2852_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v___x_2863_);
v___x_2865_ = v___x_2856_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2863_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
else
{
lean_object* v_ks_2902_; lean_object* v_vs_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2921_; 
v_ks_2902_ = lean_ctor_get(v_x_2844_, 0);
v_vs_2903_ = lean_ctor_get(v_x_2844_, 1);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_x_2844_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2905_ = v_x_2844_;
v_isShared_2906_ = v_isSharedCheck_2921_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_vs_2903_);
lean_inc(v_ks_2902_);
lean_dec(v_x_2844_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2921_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_ks_2902_);
lean_ctor_set(v_reuseFailAlloc_2920_, 1, v_vs_2903_);
v___x_2908_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v_newNode_2909_; size_t v___x_2910_; uint8_t v___x_2911_; 
v_newNode_2909_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v___x_2908_, v_x_2847_, v_x_2848_);
v___x_2910_ = ((size_t)7ULL);
v___x_2911_ = lean_usize_dec_le(v___x_2910_, v_x_2846_);
if (v___x_2911_ == 0)
{
lean_object* v___x_2912_; lean_object* v___x_2913_; uint8_t v___x_2914_; 
v___x_2912_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2909_);
v___x_2913_ = lean_unsigned_to_nat(4u);
v___x_2914_ = lean_nat_dec_lt(v___x_2912_, v___x_2913_);
lean_dec(v___x_2912_);
if (v___x_2914_ == 0)
{
lean_object* v_ks_2915_; lean_object* v_vs_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v_ks_2915_ = lean_ctor_get(v_newNode_2909_, 0);
lean_inc_ref(v_ks_2915_);
v_vs_2916_ = lean_ctor_get(v_newNode_2909_, 1);
lean_inc_ref(v_vs_2916_);
lean_dec_ref(v_newNode_2909_);
v___x_2917_ = lean_unsigned_to_nat(0u);
v___x_2918_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_2919_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_x_2846_, v_ks_2915_, v_vs_2916_, v___x_2917_, v___x_2918_);
lean_dec_ref(v_vs_2916_);
lean_dec_ref(v_ks_2915_);
return v___x_2919_;
}
else
{
return v_newNode_2909_;
}
}
else
{
return v_newNode_2909_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t v_depth_2922_, lean_object* v_keys_2923_, lean_object* v_vals_2924_, lean_object* v_i_2925_, lean_object* v_entries_2926_){
_start:
{
lean_object* v___x_2927_; uint8_t v___x_2928_; 
v___x_2927_ = lean_array_get_size(v_keys_2923_);
v___x_2928_ = lean_nat_dec_lt(v_i_2925_, v___x_2927_);
if (v___x_2928_ == 0)
{
lean_dec(v_i_2925_);
return v_entries_2926_;
}
else
{
lean_object* v_k_2929_; lean_object* v_expr_2930_; uint64_t v_configKey_2931_; lean_object* v_v_2932_; uint64_t v___x_2933_; uint64_t v___x_2934_; size_t v_h_2935_; size_t v___x_2936_; lean_object* v___x_2937_; size_t v___x_2938_; size_t v___x_2939_; size_t v___x_2940_; size_t v_h_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v_k_2929_ = lean_array_fget_borrowed(v_keys_2923_, v_i_2925_);
v_expr_2930_ = lean_ctor_get(v_k_2929_, 0);
v_configKey_2931_ = lean_ctor_get_uint64(v_k_2929_, sizeof(void*)*1);
v_v_2932_ = lean_array_fget_borrowed(v_vals_2924_, v_i_2925_);
v___x_2933_ = l_Lean_Expr_hash(v_expr_2930_);
v___x_2934_ = lean_uint64_mix_hash(v___x_2933_, v_configKey_2931_);
v_h_2935_ = lean_uint64_to_usize(v___x_2934_);
v___x_2936_ = ((size_t)5ULL);
v___x_2937_ = lean_unsigned_to_nat(1u);
v___x_2938_ = ((size_t)1ULL);
v___x_2939_ = lean_usize_sub(v_depth_2922_, v___x_2938_);
v___x_2940_ = lean_usize_mul(v___x_2936_, v___x_2939_);
v_h_2941_ = lean_usize_shift_right(v_h_2935_, v___x_2940_);
v___x_2942_ = lean_nat_add(v_i_2925_, v___x_2937_);
lean_dec(v_i_2925_);
lean_inc(v_v_2932_);
lean_inc(v_k_2929_);
v___x_2943_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_entries_2926_, v_h_2941_, v_depth_2922_, v_k_2929_, v_v_2932_);
v_i_2925_ = v___x_2942_;
v_entries_2926_ = v___x_2943_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_depth_2945_, lean_object* v_keys_2946_, lean_object* v_vals_2947_, lean_object* v_i_2948_, lean_object* v_entries_2949_){
_start:
{
size_t v_depth_boxed_2950_; lean_object* v_res_2951_; 
v_depth_boxed_2950_ = lean_unbox_usize(v_depth_2945_);
lean_dec(v_depth_2945_);
v_res_2951_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_boxed_2950_, v_keys_2946_, v_vals_2947_, v_i_2948_, v_entries_2949_);
lean_dec_ref(v_vals_2947_);
lean_dec_ref(v_keys_2946_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object* v_x_2952_, lean_object* v_x_2953_, lean_object* v_x_2954_, lean_object* v_x_2955_, lean_object* v_x_2956_){
_start:
{
size_t v_x_2442__boxed_2957_; size_t v_x_2443__boxed_2958_; lean_object* v_res_2959_; 
v_x_2442__boxed_2957_ = lean_unbox_usize(v_x_2953_);
lean_dec(v_x_2953_);
v_x_2443__boxed_2958_ = lean_unbox_usize(v_x_2954_);
lean_dec(v_x_2954_);
v_res_2959_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_2952_, v_x_2442__boxed_2957_, v_x_2443__boxed_2958_, v_x_2955_, v_x_2956_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object* v_x_2960_, lean_object* v_x_2961_, lean_object* v_x_2962_){
_start:
{
lean_object* v_expr_2963_; uint64_t v_configKey_2964_; uint64_t v___x_2965_; uint64_t v___x_2966_; size_t v___x_2967_; size_t v___x_2968_; lean_object* v___x_2969_; 
v_expr_2963_ = lean_ctor_get(v_x_2961_, 0);
v_configKey_2964_ = lean_ctor_get_uint64(v_x_2961_, sizeof(void*)*1);
v___x_2965_ = l_Lean_Expr_hash(v_expr_2963_);
v___x_2966_ = lean_uint64_mix_hash(v___x_2965_, v_configKey_2964_);
v___x_2967_ = lean_uint64_to_usize(v___x_2966_);
v___x_2968_ = ((size_t)1ULL);
v___x_2969_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_2960_, v___x_2967_, v___x_2968_, v_x_2961_, v_x_2962_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object* v_keys_2970_, lean_object* v_vals_2971_, lean_object* v_i_2972_, lean_object* v_k_2973_){
_start:
{
uint8_t v___y_2975_; lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2981_ = lean_array_get_size(v_keys_2970_);
v___x_2982_ = lean_nat_dec_lt(v_i_2972_, v___x_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; 
lean_dec(v_i_2972_);
v___x_2983_ = lean_box(0);
return v___x_2983_;
}
else
{
lean_object* v_expr_2984_; uint64_t v_configKey_2985_; lean_object* v_k_x27_2986_; lean_object* v_expr_2987_; uint64_t v_configKey_2988_; uint8_t v___x_2989_; 
v_expr_2984_ = lean_ctor_get(v_k_2973_, 0);
v_configKey_2985_ = lean_ctor_get_uint64(v_k_2973_, sizeof(void*)*1);
v_k_x27_2986_ = lean_array_fget_borrowed(v_keys_2970_, v_i_2972_);
v_expr_2987_ = lean_ctor_get(v_k_x27_2986_, 0);
v_configKey_2988_ = lean_ctor_get_uint64(v_k_x27_2986_, sizeof(void*)*1);
v___x_2989_ = lean_expr_equal(v_expr_2984_, v_expr_2987_);
if (v___x_2989_ == 0)
{
v___y_2975_ = v___x_2989_;
goto v___jp_2974_;
}
else
{
uint8_t v___x_2990_; 
v___x_2990_ = lean_uint64_dec_eq(v_configKey_2985_, v_configKey_2988_);
v___y_2975_ = v___x_2990_;
goto v___jp_2974_;
}
}
v___jp_2974_:
{
if (v___y_2975_ == 0)
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2976_ = lean_unsigned_to_nat(1u);
v___x_2977_ = lean_nat_add(v_i_2972_, v___x_2976_);
lean_dec(v_i_2972_);
v_i_2972_ = v___x_2977_;
goto _start;
}
else
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = lean_array_fget_borrowed(v_vals_2971_, v_i_2972_);
lean_dec(v_i_2972_);
lean_inc(v___x_2979_);
v___x_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
return v___x_2980_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_keys_2991_, lean_object* v_vals_2992_, lean_object* v_i_2993_, lean_object* v_k_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_2991_, v_vals_2992_, v_i_2993_, v_k_2994_);
lean_dec_ref(v_k_2994_);
lean_dec_ref(v_vals_2992_);
lean_dec_ref(v_keys_2991_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object* v_x_2996_, size_t v_x_2997_, lean_object* v_x_2998_){
_start:
{
if (lean_obj_tag(v_x_2996_) == 0)
{
lean_object* v_es_2999_; lean_object* v___x_3000_; size_t v___x_3001_; size_t v___x_3002_; lean_object* v_j_3003_; lean_object* v___x_3004_; 
v_es_2999_ = lean_ctor_get(v_x_2996_, 0);
v___x_3000_ = lean_box(2);
v___x_3001_ = ((size_t)31ULL);
v___x_3002_ = lean_usize_land(v_x_2997_, v___x_3001_);
v_j_3003_ = lean_usize_to_nat(v___x_3002_);
v___x_3004_ = lean_array_get_borrowed(v___x_3000_, v_es_2999_, v_j_3003_);
lean_dec(v_j_3003_);
switch(lean_obj_tag(v___x_3004_))
{
case 0:
{
lean_object* v_key_3005_; lean_object* v_val_3006_; uint8_t v___y_3008_; lean_object* v_expr_3011_; uint64_t v_configKey_3012_; lean_object* v_expr_3013_; uint64_t v_configKey_3014_; uint8_t v___x_3015_; 
v_key_3005_ = lean_ctor_get(v___x_3004_, 0);
v_val_3006_ = lean_ctor_get(v___x_3004_, 1);
v_expr_3011_ = lean_ctor_get(v_x_2998_, 0);
v_configKey_3012_ = lean_ctor_get_uint64(v_x_2998_, sizeof(void*)*1);
v_expr_3013_ = lean_ctor_get(v_key_3005_, 0);
v_configKey_3014_ = lean_ctor_get_uint64(v_key_3005_, sizeof(void*)*1);
v___x_3015_ = lean_expr_equal(v_expr_3011_, v_expr_3013_);
if (v___x_3015_ == 0)
{
v___y_3008_ = v___x_3015_;
goto v___jp_3007_;
}
else
{
uint8_t v___x_3016_; 
v___x_3016_ = lean_uint64_dec_eq(v_configKey_3012_, v_configKey_3014_);
v___y_3008_ = v___x_3016_;
goto v___jp_3007_;
}
v___jp_3007_:
{
if (v___y_3008_ == 0)
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_box(0);
return v___x_3009_;
}
else
{
lean_object* v___x_3010_; 
lean_inc(v_val_3006_);
v___x_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3010_, 0, v_val_3006_);
return v___x_3010_;
}
}
}
case 1:
{
lean_object* v_node_3017_; size_t v___x_3018_; size_t v___x_3019_; 
v_node_3017_ = lean_ctor_get(v___x_3004_, 0);
v___x_3018_ = ((size_t)5ULL);
v___x_3019_ = lean_usize_shift_right(v_x_2997_, v___x_3018_);
v_x_2996_ = v_node_3017_;
v_x_2997_ = v___x_3019_;
goto _start;
}
default: 
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_box(0);
return v___x_3021_;
}
}
}
else
{
lean_object* v_ks_3022_; lean_object* v_vs_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v_ks_3022_ = lean_ctor_get(v_x_2996_, 0);
v_vs_3023_ = lean_ctor_get(v_x_2996_, 1);
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_ks_3022_, v_vs_3023_, v___x_3024_, v_x_2998_);
return v___x_3025_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object* v_x_3026_, lean_object* v_x_3027_, lean_object* v_x_3028_){
_start:
{
size_t v_x_2646__boxed_3029_; lean_object* v_res_3030_; 
v_x_2646__boxed_3029_ = lean_unbox_usize(v_x_3027_);
lean_dec(v_x_3027_);
v_res_3030_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3026_, v_x_2646__boxed_3029_, v_x_3028_);
lean_dec_ref(v_x_3028_);
lean_dec_ref(v_x_3026_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object* v_x_3031_, lean_object* v_x_3032_){
_start:
{
lean_object* v_expr_3033_; uint64_t v_configKey_3034_; uint64_t v___x_3035_; uint64_t v___x_3036_; size_t v___x_3037_; lean_object* v___x_3038_; 
v_expr_3033_ = lean_ctor_get(v_x_3032_, 0);
v_configKey_3034_ = lean_ctor_get_uint64(v_x_3032_, sizeof(void*)*1);
v___x_3035_ = l_Lean_Expr_hash(v_expr_3033_);
v___x_3036_ = lean_uint64_mix_hash(v___x_3035_, v_configKey_3034_);
v___x_3037_ = lean_uint64_to_usize(v___x_3036_);
v___x_3038_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3031_, v___x_3037_, v_x_3032_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object* v_x_3039_, lean_object* v_x_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3039_, v_x_3040_);
lean_dec_ref(v_x_3040_);
lean_dec_ref(v_x_3039_);
return v_res_3041_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1(void){
_start:
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0));
v___x_3044_ = l_Lean_stringToMessageData(v___x_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object* v_e_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
switch(lean_obj_tag(v_e_3045_))
{
case 0:
{
lean_object* v_deBruijnIndex_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v_deBruijnIndex_3083_ = lean_ctor_get(v_e_3045_, 0);
lean_inc(v_deBruijnIndex_3083_);
lean_dec_ref_known(v_e_3045_, 1);
v___x_3084_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1);
v___x_3085_ = l_Lean_mkBVar(v_deBruijnIndex_3083_);
v___x_3086_ = l_Lean_MessageData_ofExpr(v___x_3085_);
v___x_3087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3084_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_3087_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3088_;
}
case 1:
{
lean_object* v_fvarId_3089_; lean_object* v___x_3090_; 
v_fvarId_3089_ = lean_ctor_get(v_e_3045_, 0);
lean_inc(v_fvarId_3089_);
lean_dec_ref_known(v_e_3045_, 1);
v___x_3090_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3089_, v___y_3046_, v___y_3048_, v___y_3049_);
return v___x_3090_;
}
case 2:
{
lean_object* v_mvarId_3091_; lean_object* v___x_3092_; 
v_mvarId_3091_ = lean_ctor_get(v_e_3045_, 0);
lean_inc(v_mvarId_3091_);
lean_dec_ref_known(v_e_3045_, 1);
v___x_3092_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3091_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3092_;
}
case 3:
{
lean_object* v_u_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v_u_3093_ = lean_ctor_get(v_e_3045_, 0);
lean_inc(v_u_3093_);
lean_dec_ref_known(v_e_3045_, 1);
v___x_3094_ = l_Lean_Level_succ___override(v_u_3093_);
v___x_3095_ = l_Lean_mkSort(v___x_3094_);
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
case 4:
{
lean_object* v_declName_3097_; lean_object* v_us_3098_; 
v_declName_3097_ = lean_ctor_get(v_e_3045_, 0);
lean_inc(v_declName_3097_);
v_us_3098_ = lean_ctor_get(v_e_3045_, 1);
lean_inc(v_us_3098_);
if (lean_obj_tag(v_us_3098_) == 0)
{
lean_object* v___x_3115_; 
lean_dec_ref_known(v_e_3045_, 2);
v___x_3115_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3097_, v_us_3098_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3115_;
}
else
{
uint8_t v_cacheInferType_3116_; 
v_cacheInferType_3116_ = lean_ctor_get_uint8(v___y_3046_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3116_ == 0)
{
lean_dec_ref_known(v_e_3045_, 2);
goto v___jp_3099_;
}
else
{
uint8_t v___x_3117_; 
v___x_3117_ = l_Lean_Expr_hasMVar(v_e_3045_);
if (v___x_3117_ == 0)
{
lean_object* v___x_3118_; 
v___x_3118_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3045_, v___y_3046_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3184_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3121_ = v___x_3118_;
v_isShared_3122_ = v_isSharedCheck_3184_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3118_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3184_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3163_; lean_object* v_cache_3164_; lean_object* v_inferType_3165_; lean_object* v___x_3166_; 
v___x_3163_ = lean_st_ref_get(v___y_3047_);
v_cache_3164_ = lean_ctor_get(v___x_3163_, 1);
lean_inc_ref(v_cache_3164_);
lean_dec(v___x_3163_);
v_inferType_3165_ = lean_ctor_get(v_cache_3164_, 0);
lean_inc_ref(v_inferType_3165_);
lean_dec_ref(v_cache_3164_);
v___x_3166_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3165_, v_a_3119_);
lean_dec_ref(v_inferType_3165_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_toCold_3167_; lean_object* v_cancelTk_x3f_3168_; 
lean_del_object(v___x_3121_);
v_toCold_3167_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3168_ = lean_ctor_get(v_toCold_3167_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3168_) == 1)
{
lean_object* v_val_3169_; uint8_t v___x_3170_; 
v_val_3169_ = lean_ctor_get(v_cancelTk_x3f_3168_, 0);
v___x_3170_ = l_IO_CancelToken_isSet(v_val_3169_);
if (v___x_3170_ == 0)
{
goto v___jp_3123_;
}
else
{
lean_object* v___x_3171_; lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
lean_dec(v_a_3119_);
lean_dec(v_us_3098_);
lean_dec(v_declName_3097_);
v___x_3171_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3171_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3171_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
else
{
goto v___jp_3123_;
}
}
else
{
lean_object* v_val_3180_; lean_object* v___x_3182_; 
lean_dec(v_a_3119_);
lean_dec(v_us_3098_);
lean_dec(v_declName_3097_);
v_val_3180_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_val_3180_);
lean_dec_ref_known(v___x_3166_, 1);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v_val_3180_);
v___x_3182_ = v___x_3121_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_val_3180_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
v___jp_3123_:
{
lean_object* v___x_3124_; 
v___x_3124_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3097_, v_us_3098_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; uint8_t v___x_3126_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3125_);
v___x_3126_ = l_Lean_Expr_hasMVar(v_a_3125_);
if (v___x_3126_ == 0)
{
lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3161_; 
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3161_ == 0)
{
lean_object* v_unused_3162_; 
v_unused_3162_ = lean_ctor_get(v___x_3124_, 0);
lean_dec(v_unused_3162_);
v___x_3128_ = v___x_3124_;
v_isShared_3129_ = v_isSharedCheck_3161_;
goto v_resetjp_3127_;
}
else
{
lean_dec(v___x_3124_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3161_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3130_; lean_object* v_cache_3131_; lean_object* v_mctx_3132_; lean_object* v_zetaDeltaFVarIds_3133_; lean_object* v_postponed_3134_; lean_object* v_diag_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3160_; 
v___x_3130_ = lean_st_ref_take(v___y_3047_);
v_cache_3131_ = lean_ctor_get(v___x_3130_, 1);
v_mctx_3132_ = lean_ctor_get(v___x_3130_, 0);
v_zetaDeltaFVarIds_3133_ = lean_ctor_get(v___x_3130_, 2);
v_postponed_3134_ = lean_ctor_get(v___x_3130_, 3);
v_diag_3135_ = lean_ctor_get(v___x_3130_, 4);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3137_ = v___x_3130_;
v_isShared_3138_ = v_isSharedCheck_3160_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_diag_3135_);
lean_inc(v_postponed_3134_);
lean_inc(v_zetaDeltaFVarIds_3133_);
lean_inc(v_cache_3131_);
lean_inc(v_mctx_3132_);
lean_dec(v___x_3130_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3160_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v_inferType_3139_; lean_object* v_funInfo_3140_; lean_object* v_synthInstance_3141_; lean_object* v_whnf_3142_; lean_object* v_defEqTrans_3143_; lean_object* v_defEqPerm_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3159_; 
v_inferType_3139_ = lean_ctor_get(v_cache_3131_, 0);
v_funInfo_3140_ = lean_ctor_get(v_cache_3131_, 1);
v_synthInstance_3141_ = lean_ctor_get(v_cache_3131_, 2);
v_whnf_3142_ = lean_ctor_get(v_cache_3131_, 3);
v_defEqTrans_3143_ = lean_ctor_get(v_cache_3131_, 4);
v_defEqPerm_3144_ = lean_ctor_get(v_cache_3131_, 5);
v_isSharedCheck_3159_ = !lean_is_exclusive(v_cache_3131_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3146_ = v_cache_3131_;
v_isShared_3147_ = v_isSharedCheck_3159_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_defEqPerm_3144_);
lean_inc(v_defEqTrans_3143_);
lean_inc(v_whnf_3142_);
lean_inc(v_synthInstance_3141_);
lean_inc(v_funInfo_3140_);
lean_inc(v_inferType_3139_);
lean_dec(v_cache_3131_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3159_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3148_; lean_object* v___x_3150_; 
lean_inc(v_a_3125_);
v___x_3148_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3139_, v_a_3119_, v_a_3125_);
if (v_isShared_3147_ == 0)
{
lean_ctor_set(v___x_3146_, 0, v___x_3148_);
v___x_3150_ = v___x_3146_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v___x_3148_);
lean_ctor_set(v_reuseFailAlloc_3158_, 1, v_funInfo_3140_);
lean_ctor_set(v_reuseFailAlloc_3158_, 2, v_synthInstance_3141_);
lean_ctor_set(v_reuseFailAlloc_3158_, 3, v_whnf_3142_);
lean_ctor_set(v_reuseFailAlloc_3158_, 4, v_defEqTrans_3143_);
lean_ctor_set(v_reuseFailAlloc_3158_, 5, v_defEqPerm_3144_);
v___x_3150_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
lean_object* v___x_3152_; 
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 1, v___x_3150_);
v___x_3152_ = v___x_3137_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_mctx_3132_);
lean_ctor_set(v_reuseFailAlloc_3157_, 1, v___x_3150_);
lean_ctor_set(v_reuseFailAlloc_3157_, 2, v_zetaDeltaFVarIds_3133_);
lean_ctor_set(v_reuseFailAlloc_3157_, 3, v_postponed_3134_);
lean_ctor_set(v_reuseFailAlloc_3157_, 4, v_diag_3135_);
v___x_3152_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
lean_object* v___x_3153_; lean_object* v___x_3155_; 
v___x_3153_ = lean_st_ref_put(v___y_3047_, v___x_3152_);
if (v_isShared_3129_ == 0)
{
v___x_3155_ = v___x_3128_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3125_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3125_);
lean_dec(v_a_3119_);
return v___x_3124_;
}
}
else
{
lean_dec(v_a_3119_);
return v___x_3124_;
}
}
}
}
else
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3192_; 
lean_dec(v_us_3098_);
lean_dec(v_declName_3097_);
v_a_3185_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3187_ = v___x_3118_;
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3118_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3190_; 
if (v_isShared_3188_ == 0)
{
v___x_3190_ = v___x_3187_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_a_3185_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3045_, 2);
goto v___jp_3099_;
}
}
}
v___jp_3099_:
{
lean_object* v_toCold_3100_; lean_object* v_cancelTk_x3f_3101_; 
v_toCold_3100_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3101_ = lean_ctor_get(v_toCold_3100_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3101_) == 1)
{
lean_object* v_val_3102_; uint8_t v___x_3103_; 
v_val_3102_ = lean_ctor_get(v_cancelTk_x3f_3101_, 0);
v___x_3103_ = l_IO_CancelToken_isSet(v_val_3102_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; 
v___x_3104_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3097_, v_us_3098_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3104_;
}
else
{
lean_object* v___x_3105_; lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec(v_us_3098_);
lean_dec(v_declName_3097_);
v___x_3105_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3105_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3105_);
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
else
{
lean_object* v___x_3114_; 
v___x_3114_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3097_, v_us_3098_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3114_;
}
}
}
case 5:
{
lean_object* v_fn_3193_; uint8_t v_cacheInferType_3194_; lean_object* v_nargs_3195_; lean_object* v___x_3196_; lean_object* v_dummy_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v_fn_3193_ = lean_ctor_get(v_e_3045_, 0);
v_cacheInferType_3194_ = lean_ctor_get_uint8(v___y_3046_, sizeof(void*)*7 + 3);
v_nargs_3195_ = l_Lean_Expr_getAppNumArgs(v_e_3045_);
v___x_3196_ = l_Lean_Expr_getAppFn(v_fn_3193_);
v_dummy_3197_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
lean_inc(v_nargs_3195_);
v___x_3198_ = lean_mk_array(v_nargs_3195_, v_dummy_3197_);
v___x_3199_ = lean_unsigned_to_nat(1u);
v___x_3200_ = lean_nat_sub(v_nargs_3195_, v___x_3199_);
lean_dec(v_nargs_3195_);
lean_inc_ref(v_e_3045_);
v___x_3201_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3045_, v___x_3198_, v___x_3200_);
if (v_cacheInferType_3194_ == 0)
{
lean_dec_ref_known(v_e_3045_, 2);
goto v___jp_3202_;
}
else
{
uint8_t v___x_3218_; 
v___x_3218_ = l_Lean_Expr_hasMVar(v_e_3045_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; 
v___x_3219_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3045_, v___y_3046_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3285_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3285_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3285_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3264_; lean_object* v_cache_3265_; lean_object* v_inferType_3266_; lean_object* v___x_3267_; 
v___x_3264_ = lean_st_ref_get(v___y_3047_);
v_cache_3265_ = lean_ctor_get(v___x_3264_, 1);
lean_inc_ref(v_cache_3265_);
lean_dec(v___x_3264_);
v_inferType_3266_ = lean_ctor_get(v_cache_3265_, 0);
lean_inc_ref(v_inferType_3266_);
lean_dec_ref(v_cache_3265_);
v___x_3267_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3266_, v_a_3220_);
lean_dec_ref(v_inferType_3266_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v_toCold_3268_; lean_object* v_cancelTk_x3f_3269_; 
lean_del_object(v___x_3222_);
v_toCold_3268_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3269_ = lean_ctor_get(v_toCold_3268_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3269_) == 1)
{
lean_object* v_val_3270_; uint8_t v___x_3271_; 
v_val_3270_ = lean_ctor_get(v_cancelTk_x3f_3269_, 0);
v___x_3271_ = l_IO_CancelToken_isSet(v_val_3270_);
if (v___x_3271_ == 0)
{
goto v___jp_3224_;
}
else
{
lean_object* v___x_3272_; lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
lean_dec(v_a_3220_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3196_);
v___x_3272_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v___x_3272_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v___x_3272_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
else
{
goto v___jp_3224_;
}
}
else
{
lean_object* v_val_3281_; lean_object* v___x_3283_; 
lean_dec(v_a_3220_);
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3196_);
v_val_3281_ = lean_ctor_get(v___x_3267_, 0);
lean_inc(v_val_3281_);
lean_dec_ref_known(v___x_3267_, 1);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 0, v_val_3281_);
v___x_3283_ = v___x_3222_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_val_3281_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
v___jp_3224_:
{
lean_object* v___x_3225_; 
v___x_3225_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3196_, v___x_3201_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
lean_dec_ref(v___x_3201_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; uint8_t v___x_3227_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
v___x_3227_ = l_Lean_Expr_hasMVar(v_a_3226_);
if (v___x_3227_ == 0)
{
lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3262_; 
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3262_ == 0)
{
lean_object* v_unused_3263_; 
v_unused_3263_ = lean_ctor_get(v___x_3225_, 0);
lean_dec(v_unused_3263_);
v___x_3229_ = v___x_3225_;
v_isShared_3230_ = v_isSharedCheck_3262_;
goto v_resetjp_3228_;
}
else
{
lean_dec(v___x_3225_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3262_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3231_; lean_object* v_cache_3232_; lean_object* v_mctx_3233_; lean_object* v_zetaDeltaFVarIds_3234_; lean_object* v_postponed_3235_; lean_object* v_diag_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3261_; 
v___x_3231_ = lean_st_ref_take(v___y_3047_);
v_cache_3232_ = lean_ctor_get(v___x_3231_, 1);
v_mctx_3233_ = lean_ctor_get(v___x_3231_, 0);
v_zetaDeltaFVarIds_3234_ = lean_ctor_get(v___x_3231_, 2);
v_postponed_3235_ = lean_ctor_get(v___x_3231_, 3);
v_diag_3236_ = lean_ctor_get(v___x_3231_, 4);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3238_ = v___x_3231_;
v_isShared_3239_ = v_isSharedCheck_3261_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_diag_3236_);
lean_inc(v_postponed_3235_);
lean_inc(v_zetaDeltaFVarIds_3234_);
lean_inc(v_cache_3232_);
lean_inc(v_mctx_3233_);
lean_dec(v___x_3231_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3261_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v_inferType_3240_; lean_object* v_funInfo_3241_; lean_object* v_synthInstance_3242_; lean_object* v_whnf_3243_; lean_object* v_defEqTrans_3244_; lean_object* v_defEqPerm_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3260_; 
v_inferType_3240_ = lean_ctor_get(v_cache_3232_, 0);
v_funInfo_3241_ = lean_ctor_get(v_cache_3232_, 1);
v_synthInstance_3242_ = lean_ctor_get(v_cache_3232_, 2);
v_whnf_3243_ = lean_ctor_get(v_cache_3232_, 3);
v_defEqTrans_3244_ = lean_ctor_get(v_cache_3232_, 4);
v_defEqPerm_3245_ = lean_ctor_get(v_cache_3232_, 5);
v_isSharedCheck_3260_ = !lean_is_exclusive(v_cache_3232_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3247_ = v_cache_3232_;
v_isShared_3248_ = v_isSharedCheck_3260_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_defEqPerm_3245_);
lean_inc(v_defEqTrans_3244_);
lean_inc(v_whnf_3243_);
lean_inc(v_synthInstance_3242_);
lean_inc(v_funInfo_3241_);
lean_inc(v_inferType_3240_);
lean_dec(v_cache_3232_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3260_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3249_; lean_object* v___x_3251_; 
lean_inc(v_a_3226_);
v___x_3249_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3240_, v_a_3220_, v_a_3226_);
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 0, v___x_3249_);
v___x_3251_ = v___x_3247_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v___x_3249_);
lean_ctor_set(v_reuseFailAlloc_3259_, 1, v_funInfo_3241_);
lean_ctor_set(v_reuseFailAlloc_3259_, 2, v_synthInstance_3242_);
lean_ctor_set(v_reuseFailAlloc_3259_, 3, v_whnf_3243_);
lean_ctor_set(v_reuseFailAlloc_3259_, 4, v_defEqTrans_3244_);
lean_ctor_set(v_reuseFailAlloc_3259_, 5, v_defEqPerm_3245_);
v___x_3251_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
lean_object* v___x_3253_; 
if (v_isShared_3239_ == 0)
{
lean_ctor_set(v___x_3238_, 1, v___x_3251_);
v___x_3253_ = v___x_3238_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_mctx_3233_);
lean_ctor_set(v_reuseFailAlloc_3258_, 1, v___x_3251_);
lean_ctor_set(v_reuseFailAlloc_3258_, 2, v_zetaDeltaFVarIds_3234_);
lean_ctor_set(v_reuseFailAlloc_3258_, 3, v_postponed_3235_);
lean_ctor_set(v_reuseFailAlloc_3258_, 4, v_diag_3236_);
v___x_3253_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3254_ = lean_st_ref_put(v___y_3047_, v___x_3253_);
if (v_isShared_3230_ == 0)
{
v___x_3256_ = v___x_3229_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3226_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3226_);
lean_dec(v_a_3220_);
return v___x_3225_;
}
}
else
{
lean_dec(v_a_3220_);
return v___x_3225_;
}
}
}
}
else
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3293_; 
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3196_);
v_a_3286_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3288_ = v___x_3219_;
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___x_3219_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3291_; 
if (v_isShared_3289_ == 0)
{
v___x_3291_ = v___x_3288_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3286_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3045_, 2);
goto v___jp_3202_;
}
}
v___jp_3202_:
{
lean_object* v_toCold_3203_; lean_object* v_cancelTk_x3f_3204_; 
v_toCold_3203_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3204_ = lean_ctor_get(v_toCold_3203_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3204_) == 1)
{
lean_object* v_val_3205_; uint8_t v___x_3206_; 
v_val_3205_ = lean_ctor_get(v_cancelTk_x3f_3204_, 0);
v___x_3206_ = l_IO_CancelToken_isSet(v_val_3205_);
if (v___x_3206_ == 0)
{
lean_object* v___x_3207_; 
v___x_3207_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3196_, v___x_3201_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
lean_dec_ref(v___x_3201_);
return v___x_3207_;
}
else
{
lean_object* v___x_3208_; lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3196_);
v___x_3208_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3208_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3208_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v___x_3217_; 
v___x_3217_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3196_, v___x_3201_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
lean_dec_ref(v___x_3201_);
return v___x_3217_;
}
}
}
case 7:
{
uint8_t v_cacheInferType_3294_; 
v_cacheInferType_3294_ = lean_ctor_get_uint8(v___y_3046_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3294_ == 0)
{
goto v___jp_3067_;
}
else
{
uint8_t v___x_3295_; 
v___x_3295_ = l_Lean_Expr_hasMVar(v_e_3045_);
if (v___x_3295_ == 0)
{
lean_object* v___x_3296_; 
lean_inc_ref(v_e_3045_);
v___x_3296_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3045_, v___y_3046_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3362_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3299_ = v___x_3296_;
v_isShared_3300_ = v_isSharedCheck_3362_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3296_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3362_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3341_; lean_object* v_cache_3342_; lean_object* v_inferType_3343_; lean_object* v___x_3344_; 
v___x_3341_ = lean_st_ref_get(v___y_3047_);
v_cache_3342_ = lean_ctor_get(v___x_3341_, 1);
lean_inc_ref(v_cache_3342_);
lean_dec(v___x_3341_);
v_inferType_3343_ = lean_ctor_get(v_cache_3342_, 0);
lean_inc_ref(v_inferType_3343_);
lean_dec_ref(v_cache_3342_);
v___x_3344_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3343_, v_a_3297_);
lean_dec_ref(v_inferType_3343_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_toCold_3345_; lean_object* v_cancelTk_x3f_3346_; 
lean_del_object(v___x_3299_);
v_toCold_3345_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3346_ = lean_ctor_get(v_toCold_3345_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3346_) == 1)
{
lean_object* v_val_3347_; uint8_t v___x_3348_; 
v_val_3347_ = lean_ctor_get(v_cancelTk_x3f_3346_, 0);
v___x_3348_ = l_IO_CancelToken_isSet(v_val_3347_);
if (v___x_3348_ == 0)
{
goto v___jp_3301_;
}
else
{
lean_object* v___x_3349_; lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
lean_dec(v_a_3297_);
lean_dec_ref_known(v_e_3045_, 3);
v___x_3349_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3349_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3349_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
else
{
goto v___jp_3301_;
}
}
else
{
lean_object* v_val_3358_; lean_object* v___x_3360_; 
lean_dec(v_a_3297_);
lean_dec_ref_known(v_e_3045_, 3);
v_val_3358_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_val_3358_);
lean_dec_ref_known(v___x_3344_, 1);
if (v_isShared_3300_ == 0)
{
lean_ctor_set(v___x_3299_, 0, v_val_3358_);
v___x_3360_ = v___x_3299_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_val_3358_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
}
}
v___jp_3301_:
{
lean_object* v___x_3302_; 
v___x_3302_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; uint8_t v___x_3304_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3303_);
v___x_3304_ = l_Lean_Expr_hasMVar(v_a_3303_);
if (v___x_3304_ == 0)
{
lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3339_; 
v_isSharedCheck_3339_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3339_ == 0)
{
lean_object* v_unused_3340_; 
v_unused_3340_ = lean_ctor_get(v___x_3302_, 0);
lean_dec(v_unused_3340_);
v___x_3306_ = v___x_3302_;
v_isShared_3307_ = v_isSharedCheck_3339_;
goto v_resetjp_3305_;
}
else
{
lean_dec(v___x_3302_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3339_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___x_3308_; lean_object* v_cache_3309_; lean_object* v_mctx_3310_; lean_object* v_zetaDeltaFVarIds_3311_; lean_object* v_postponed_3312_; lean_object* v_diag_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3338_; 
v___x_3308_ = lean_st_ref_take(v___y_3047_);
v_cache_3309_ = lean_ctor_get(v___x_3308_, 1);
v_mctx_3310_ = lean_ctor_get(v___x_3308_, 0);
v_zetaDeltaFVarIds_3311_ = lean_ctor_get(v___x_3308_, 2);
v_postponed_3312_ = lean_ctor_get(v___x_3308_, 3);
v_diag_3313_ = lean_ctor_get(v___x_3308_, 4);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3315_ = v___x_3308_;
v_isShared_3316_ = v_isSharedCheck_3338_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_diag_3313_);
lean_inc(v_postponed_3312_);
lean_inc(v_zetaDeltaFVarIds_3311_);
lean_inc(v_cache_3309_);
lean_inc(v_mctx_3310_);
lean_dec(v___x_3308_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3338_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v_inferType_3317_; lean_object* v_funInfo_3318_; lean_object* v_synthInstance_3319_; lean_object* v_whnf_3320_; lean_object* v_defEqTrans_3321_; lean_object* v_defEqPerm_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3337_; 
v_inferType_3317_ = lean_ctor_get(v_cache_3309_, 0);
v_funInfo_3318_ = lean_ctor_get(v_cache_3309_, 1);
v_synthInstance_3319_ = lean_ctor_get(v_cache_3309_, 2);
v_whnf_3320_ = lean_ctor_get(v_cache_3309_, 3);
v_defEqTrans_3321_ = lean_ctor_get(v_cache_3309_, 4);
v_defEqPerm_3322_ = lean_ctor_get(v_cache_3309_, 5);
v_isSharedCheck_3337_ = !lean_is_exclusive(v_cache_3309_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3324_ = v_cache_3309_;
v_isShared_3325_ = v_isSharedCheck_3337_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_defEqPerm_3322_);
lean_inc(v_defEqTrans_3321_);
lean_inc(v_whnf_3320_);
lean_inc(v_synthInstance_3319_);
lean_inc(v_funInfo_3318_);
lean_inc(v_inferType_3317_);
lean_dec(v_cache_3309_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3337_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3326_; lean_object* v___x_3328_; 
lean_inc(v_a_3303_);
v___x_3326_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3317_, v_a_3297_, v_a_3303_);
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3326_);
v___x_3328_ = v___x_3324_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v___x_3326_);
lean_ctor_set(v_reuseFailAlloc_3336_, 1, v_funInfo_3318_);
lean_ctor_set(v_reuseFailAlloc_3336_, 2, v_synthInstance_3319_);
lean_ctor_set(v_reuseFailAlloc_3336_, 3, v_whnf_3320_);
lean_ctor_set(v_reuseFailAlloc_3336_, 4, v_defEqTrans_3321_);
lean_ctor_set(v_reuseFailAlloc_3336_, 5, v_defEqPerm_3322_);
v___x_3328_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
lean_object* v___x_3330_; 
if (v_isShared_3316_ == 0)
{
lean_ctor_set(v___x_3315_, 1, v___x_3328_);
v___x_3330_ = v___x_3315_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_mctx_3310_);
lean_ctor_set(v_reuseFailAlloc_3335_, 1, v___x_3328_);
lean_ctor_set(v_reuseFailAlloc_3335_, 2, v_zetaDeltaFVarIds_3311_);
lean_ctor_set(v_reuseFailAlloc_3335_, 3, v_postponed_3312_);
lean_ctor_set(v_reuseFailAlloc_3335_, 4, v_diag_3313_);
v___x_3330_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
lean_object* v___x_3331_; lean_object* v___x_3333_; 
v___x_3331_ = lean_st_ref_put(v___y_3047_, v___x_3330_);
if (v_isShared_3307_ == 0)
{
v___x_3333_ = v___x_3306_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3303_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3303_);
lean_dec(v_a_3297_);
return v___x_3302_;
}
}
else
{
lean_dec(v_a_3297_);
return v___x_3302_;
}
}
}
}
else
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3370_; 
lean_dec_ref_known(v_e_3045_, 3);
v_a_3363_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3365_ = v___x_3296_;
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v___x_3296_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3368_; 
if (v_isShared_3366_ == 0)
{
v___x_3368_ = v___x_3365_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3363_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
}
}
else
{
goto v___jp_3067_;
}
}
}
case 9:
{
lean_object* v_a_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v_a_3371_ = lean_ctor_get(v_e_3045_, 0);
lean_inc_ref(v_a_3371_);
lean_dec_ref_known(v_e_3045_, 1);
v___x_3372_ = l_Lean_Literal_type(v_a_3371_);
lean_dec_ref(v_a_3371_);
v___x_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
return v___x_3373_;
}
case 10:
{
lean_object* v_expr_3374_; 
v_expr_3374_ = lean_ctor_get(v_e_3045_, 1);
lean_inc_ref(v_expr_3374_);
lean_dec_ref_known(v_e_3045_, 2);
v_e_3045_ = v_expr_3374_;
goto _start;
}
case 11:
{
lean_object* v_typeName_3376_; lean_object* v_idx_3377_; lean_object* v_struct_3378_; uint8_t v_cacheInferType_3395_; 
v_typeName_3376_ = lean_ctor_get(v_e_3045_, 0);
lean_inc(v_typeName_3376_);
v_idx_3377_ = lean_ctor_get(v_e_3045_, 1);
lean_inc(v_idx_3377_);
v_struct_3378_ = lean_ctor_get(v_e_3045_, 2);
lean_inc_ref(v_struct_3378_);
v_cacheInferType_3395_ = lean_ctor_get_uint8(v___y_3046_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3395_ == 0)
{
lean_dec_ref_known(v_e_3045_, 3);
goto v___jp_3379_;
}
else
{
uint8_t v___x_3396_; 
v___x_3396_ = l_Lean_Expr_hasMVar(v_e_3045_);
if (v___x_3396_ == 0)
{
lean_object* v___x_3397_; 
v___x_3397_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3045_, v___y_3046_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3463_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3400_ = v___x_3397_;
v_isShared_3401_ = v_isSharedCheck_3463_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3397_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3463_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3442_; lean_object* v_cache_3443_; lean_object* v_inferType_3444_; lean_object* v___x_3445_; 
v___x_3442_ = lean_st_ref_get(v___y_3047_);
v_cache_3443_ = lean_ctor_get(v___x_3442_, 1);
lean_inc_ref(v_cache_3443_);
lean_dec(v___x_3442_);
v_inferType_3444_ = lean_ctor_get(v_cache_3443_, 0);
lean_inc_ref(v_inferType_3444_);
lean_dec_ref(v_cache_3443_);
v___x_3445_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3444_, v_a_3398_);
lean_dec_ref(v_inferType_3444_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_toCold_3446_; lean_object* v_cancelTk_x3f_3447_; 
lean_del_object(v___x_3400_);
v_toCold_3446_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3447_ = lean_ctor_get(v_toCold_3446_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3447_) == 1)
{
lean_object* v_val_3448_; uint8_t v___x_3449_; 
v_val_3448_ = lean_ctor_get(v_cancelTk_x3f_3447_, 0);
v___x_3449_ = l_IO_CancelToken_isSet(v_val_3448_);
if (v___x_3449_ == 0)
{
goto v___jp_3402_;
}
else
{
lean_object* v___x_3450_; lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3458_; 
lean_dec(v_a_3398_);
lean_dec_ref(v_struct_3378_);
lean_dec(v_idx_3377_);
lean_dec(v_typeName_3376_);
v___x_3450_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3453_ = v___x_3450_;
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3450_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3456_; 
if (v_isShared_3454_ == 0)
{
v___x_3456_ = v___x_3453_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_a_3451_);
v___x_3456_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
return v___x_3456_;
}
}
}
}
else
{
goto v___jp_3402_;
}
}
else
{
lean_object* v_val_3459_; lean_object* v___x_3461_; 
lean_dec(v_a_3398_);
lean_dec_ref(v_struct_3378_);
lean_dec(v_idx_3377_);
lean_dec(v_typeName_3376_);
v_val_3459_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_val_3459_);
lean_dec_ref_known(v___x_3445_, 1);
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 0, v_val_3459_);
v___x_3461_ = v___x_3400_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_val_3459_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
v___jp_3402_:
{
lean_object* v___x_3403_; 
v___x_3403_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3376_, v_idx_3377_, v_struct_3378_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; uint8_t v___x_3405_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
v___x_3405_ = l_Lean_Expr_hasMVar(v_a_3404_);
if (v___x_3405_ == 0)
{
lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3440_; 
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3440_ == 0)
{
lean_object* v_unused_3441_; 
v_unused_3441_ = lean_ctor_get(v___x_3403_, 0);
lean_dec(v_unused_3441_);
v___x_3407_ = v___x_3403_;
v_isShared_3408_ = v_isSharedCheck_3440_;
goto v_resetjp_3406_;
}
else
{
lean_dec(v___x_3403_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3440_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3409_; lean_object* v_cache_3410_; lean_object* v_mctx_3411_; lean_object* v_zetaDeltaFVarIds_3412_; lean_object* v_postponed_3413_; lean_object* v_diag_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3439_; 
v___x_3409_ = lean_st_ref_take(v___y_3047_);
v_cache_3410_ = lean_ctor_get(v___x_3409_, 1);
v_mctx_3411_ = lean_ctor_get(v___x_3409_, 0);
v_zetaDeltaFVarIds_3412_ = lean_ctor_get(v___x_3409_, 2);
v_postponed_3413_ = lean_ctor_get(v___x_3409_, 3);
v_diag_3414_ = lean_ctor_get(v___x_3409_, 4);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3416_ = v___x_3409_;
v_isShared_3417_ = v_isSharedCheck_3439_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_diag_3414_);
lean_inc(v_postponed_3413_);
lean_inc(v_zetaDeltaFVarIds_3412_);
lean_inc(v_cache_3410_);
lean_inc(v_mctx_3411_);
lean_dec(v___x_3409_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3439_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v_inferType_3418_; lean_object* v_funInfo_3419_; lean_object* v_synthInstance_3420_; lean_object* v_whnf_3421_; lean_object* v_defEqTrans_3422_; lean_object* v_defEqPerm_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3438_; 
v_inferType_3418_ = lean_ctor_get(v_cache_3410_, 0);
v_funInfo_3419_ = lean_ctor_get(v_cache_3410_, 1);
v_synthInstance_3420_ = lean_ctor_get(v_cache_3410_, 2);
v_whnf_3421_ = lean_ctor_get(v_cache_3410_, 3);
v_defEqTrans_3422_ = lean_ctor_get(v_cache_3410_, 4);
v_defEqPerm_3423_ = lean_ctor_get(v_cache_3410_, 5);
v_isSharedCheck_3438_ = !lean_is_exclusive(v_cache_3410_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3425_ = v_cache_3410_;
v_isShared_3426_ = v_isSharedCheck_3438_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_defEqPerm_3423_);
lean_inc(v_defEqTrans_3422_);
lean_inc(v_whnf_3421_);
lean_inc(v_synthInstance_3420_);
lean_inc(v_funInfo_3419_);
lean_inc(v_inferType_3418_);
lean_dec(v_cache_3410_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3438_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3427_; lean_object* v___x_3429_; 
lean_inc(v_a_3404_);
v___x_3427_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3418_, v_a_3398_, v_a_3404_);
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 0, v___x_3427_);
v___x_3429_ = v___x_3425_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v___x_3427_);
lean_ctor_set(v_reuseFailAlloc_3437_, 1, v_funInfo_3419_);
lean_ctor_set(v_reuseFailAlloc_3437_, 2, v_synthInstance_3420_);
lean_ctor_set(v_reuseFailAlloc_3437_, 3, v_whnf_3421_);
lean_ctor_set(v_reuseFailAlloc_3437_, 4, v_defEqTrans_3422_);
lean_ctor_set(v_reuseFailAlloc_3437_, 5, v_defEqPerm_3423_);
v___x_3429_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3431_; 
if (v_isShared_3417_ == 0)
{
lean_ctor_set(v___x_3416_, 1, v___x_3429_);
v___x_3431_ = v___x_3416_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_mctx_3411_);
lean_ctor_set(v_reuseFailAlloc_3436_, 1, v___x_3429_);
lean_ctor_set(v_reuseFailAlloc_3436_, 2, v_zetaDeltaFVarIds_3412_);
lean_ctor_set(v_reuseFailAlloc_3436_, 3, v_postponed_3413_);
lean_ctor_set(v_reuseFailAlloc_3436_, 4, v_diag_3414_);
v___x_3431_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
lean_object* v___x_3432_; lean_object* v___x_3434_; 
v___x_3432_ = lean_st_ref_put(v___y_3047_, v___x_3431_);
if (v_isShared_3408_ == 0)
{
v___x_3434_ = v___x_3407_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3404_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3404_);
lean_dec(v_a_3398_);
return v___x_3403_;
}
}
else
{
lean_dec(v_a_3398_);
return v___x_3403_;
}
}
}
}
else
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
lean_dec_ref(v_struct_3378_);
lean_dec(v_idx_3377_);
lean_dec(v_typeName_3376_);
v_a_3464_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3397_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3397_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3045_, 3);
goto v___jp_3379_;
}
}
v___jp_3379_:
{
lean_object* v_toCold_3380_; lean_object* v_cancelTk_x3f_3381_; 
v_toCold_3380_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3381_ = lean_ctor_get(v_toCold_3380_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3381_) == 1)
{
lean_object* v_val_3382_; uint8_t v___x_3383_; 
v_val_3382_ = lean_ctor_get(v_cancelTk_x3f_3381_, 0);
v___x_3383_ = l_IO_CancelToken_isSet(v_val_3382_);
if (v___x_3383_ == 0)
{
lean_object* v___x_3384_; 
v___x_3384_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3376_, v_idx_3377_, v_struct_3378_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3384_;
}
else
{
lean_object* v___x_3385_; lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3393_; 
lean_dec_ref(v_struct_3378_);
lean_dec(v_idx_3377_);
lean_dec(v_typeName_3376_);
v___x_3385_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3385_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3385_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3391_; 
if (v_isShared_3389_ == 0)
{
v___x_3391_ = v___x_3388_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_a_3386_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
}
else
{
lean_object* v___x_3394_; 
v___x_3394_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3376_, v_idx_3377_, v_struct_3378_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3394_;
}
}
}
default: 
{
uint8_t v_cacheInferType_3472_; 
v_cacheInferType_3472_ = lean_ctor_get_uint8(v___y_3046_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3472_ == 0)
{
goto v___jp_3051_;
}
else
{
uint8_t v___x_3473_; 
v___x_3473_ = l_Lean_Expr_hasMVar(v_e_3045_);
if (v___x_3473_ == 0)
{
lean_object* v___x_3474_; 
lean_inc_ref(v_e_3045_);
v___x_3474_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3045_, v___y_3046_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3540_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3477_ = v___x_3474_;
v_isShared_3478_ = v_isSharedCheck_3540_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3474_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3540_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3519_; lean_object* v_cache_3520_; lean_object* v_inferType_3521_; lean_object* v___x_3522_; 
v___x_3519_ = lean_st_ref_get(v___y_3047_);
v_cache_3520_ = lean_ctor_get(v___x_3519_, 1);
lean_inc_ref(v_cache_3520_);
lean_dec(v___x_3519_);
v_inferType_3521_ = lean_ctor_get(v_cache_3520_, 0);
lean_inc_ref(v_inferType_3521_);
lean_dec_ref(v_cache_3520_);
v___x_3522_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3521_, v_a_3475_);
lean_dec_ref(v_inferType_3521_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_toCold_3523_; lean_object* v_cancelTk_x3f_3524_; 
lean_del_object(v___x_3477_);
v_toCold_3523_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3524_ = lean_ctor_get(v_toCold_3523_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3524_) == 1)
{
lean_object* v_val_3525_; uint8_t v___x_3526_; 
v_val_3525_ = lean_ctor_get(v_cancelTk_x3f_3524_, 0);
v___x_3526_ = l_IO_CancelToken_isSet(v_val_3525_);
if (v___x_3526_ == 0)
{
goto v___jp_3479_;
}
else
{
lean_object* v___x_3527_; lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
lean_dec(v_a_3475_);
lean_dec_ref(v_e_3045_);
v___x_3527_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3527_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3527_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
goto v___jp_3479_;
}
}
else
{
lean_object* v_val_3536_; lean_object* v___x_3538_; 
lean_dec(v_a_3475_);
lean_dec_ref(v_e_3045_);
v_val_3536_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_val_3536_);
lean_dec_ref_known(v___x_3522_, 1);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 0, v_val_3536_);
v___x_3538_ = v___x_3477_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_val_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
v___jp_3479_:
{
lean_object* v___x_3480_; 
v___x_3480_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; uint8_t v___x_3482_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
v___x_3482_ = l_Lean_Expr_hasMVar(v_a_3481_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3517_; 
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3517_ == 0)
{
lean_object* v_unused_3518_; 
v_unused_3518_ = lean_ctor_get(v___x_3480_, 0);
lean_dec(v_unused_3518_);
v___x_3484_ = v___x_3480_;
v_isShared_3485_ = v_isSharedCheck_3517_;
goto v_resetjp_3483_;
}
else
{
lean_dec(v___x_3480_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3517_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3486_; lean_object* v_cache_3487_; lean_object* v_mctx_3488_; lean_object* v_zetaDeltaFVarIds_3489_; lean_object* v_postponed_3490_; lean_object* v_diag_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3516_; 
v___x_3486_ = lean_st_ref_take(v___y_3047_);
v_cache_3487_ = lean_ctor_get(v___x_3486_, 1);
v_mctx_3488_ = lean_ctor_get(v___x_3486_, 0);
v_zetaDeltaFVarIds_3489_ = lean_ctor_get(v___x_3486_, 2);
v_postponed_3490_ = lean_ctor_get(v___x_3486_, 3);
v_diag_3491_ = lean_ctor_get(v___x_3486_, 4);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3493_ = v___x_3486_;
v_isShared_3494_ = v_isSharedCheck_3516_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_diag_3491_);
lean_inc(v_postponed_3490_);
lean_inc(v_zetaDeltaFVarIds_3489_);
lean_inc(v_cache_3487_);
lean_inc(v_mctx_3488_);
lean_dec(v___x_3486_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3516_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v_inferType_3495_; lean_object* v_funInfo_3496_; lean_object* v_synthInstance_3497_; lean_object* v_whnf_3498_; lean_object* v_defEqTrans_3499_; lean_object* v_defEqPerm_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3515_; 
v_inferType_3495_ = lean_ctor_get(v_cache_3487_, 0);
v_funInfo_3496_ = lean_ctor_get(v_cache_3487_, 1);
v_synthInstance_3497_ = lean_ctor_get(v_cache_3487_, 2);
v_whnf_3498_ = lean_ctor_get(v_cache_3487_, 3);
v_defEqTrans_3499_ = lean_ctor_get(v_cache_3487_, 4);
v_defEqPerm_3500_ = lean_ctor_get(v_cache_3487_, 5);
v_isSharedCheck_3515_ = !lean_is_exclusive(v_cache_3487_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3502_ = v_cache_3487_;
v_isShared_3503_ = v_isSharedCheck_3515_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_defEqPerm_3500_);
lean_inc(v_defEqTrans_3499_);
lean_inc(v_whnf_3498_);
lean_inc(v_synthInstance_3497_);
lean_inc(v_funInfo_3496_);
lean_inc(v_inferType_3495_);
lean_dec(v_cache_3487_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3515_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3504_; lean_object* v___x_3506_; 
lean_inc(v_a_3481_);
v___x_3504_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3495_, v_a_3475_, v_a_3481_);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 0, v___x_3504_);
v___x_3506_ = v___x_3502_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v___x_3504_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_funInfo_3496_);
lean_ctor_set(v_reuseFailAlloc_3514_, 2, v_synthInstance_3497_);
lean_ctor_set(v_reuseFailAlloc_3514_, 3, v_whnf_3498_);
lean_ctor_set(v_reuseFailAlloc_3514_, 4, v_defEqTrans_3499_);
lean_ctor_set(v_reuseFailAlloc_3514_, 5, v_defEqPerm_3500_);
v___x_3506_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
lean_object* v___x_3508_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 1, v___x_3506_);
v___x_3508_ = v___x_3493_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_mctx_3488_);
lean_ctor_set(v_reuseFailAlloc_3513_, 1, v___x_3506_);
lean_ctor_set(v_reuseFailAlloc_3513_, 2, v_zetaDeltaFVarIds_3489_);
lean_ctor_set(v_reuseFailAlloc_3513_, 3, v_postponed_3490_);
lean_ctor_set(v_reuseFailAlloc_3513_, 4, v_diag_3491_);
v___x_3508_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; lean_object* v___x_3511_; 
v___x_3509_ = lean_st_ref_put(v___y_3047_, v___x_3508_);
if (v_isShared_3485_ == 0)
{
v___x_3511_ = v___x_3484_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3481_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3481_);
lean_dec(v_a_3475_);
return v___x_3480_;
}
}
else
{
lean_dec(v_a_3475_);
return v___x_3480_;
}
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec_ref(v_e_3045_);
v_a_3541_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3474_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3474_);
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
goto v___jp_3051_;
}
}
}
}
v___jp_3051_:
{
lean_object* v_toCold_3052_; lean_object* v_cancelTk_x3f_3053_; 
v_toCold_3052_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3053_ = lean_ctor_get(v_toCold_3052_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3053_) == 1)
{
lean_object* v_val_3054_; uint8_t v___x_3055_; 
v_val_3054_ = lean_ctor_get(v_cancelTk_x3f_3053_, 0);
v___x_3055_ = l_IO_CancelToken_isSet(v_val_3054_);
if (v___x_3055_ == 0)
{
lean_object* v___x_3056_; 
v___x_3056_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3056_;
}
else
{
lean_object* v___x_3057_; lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec_ref(v_e_3045_);
v___x_3057_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3057_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3057_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
else
{
lean_object* v___x_3066_; 
v___x_3066_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3066_;
}
}
v___jp_3067_:
{
lean_object* v_toCold_3068_; lean_object* v_cancelTk_x3f_3069_; 
v_toCold_3068_ = lean_ctor_get(v___y_3048_, 0);
v_cancelTk_x3f_3069_ = lean_ctor_get(v_toCold_3068_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3069_) == 1)
{
lean_object* v_val_3070_; uint8_t v___x_3071_; 
v_val_3070_ = lean_ctor_get(v_cancelTk_x3f_3069_, 0);
v___x_3071_ = l_IO_CancelToken_isSet(v_val_3070_);
if (v___x_3071_ == 0)
{
lean_object* v___x_3072_; 
v___x_3072_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3072_;
}
else
{
lean_object* v___x_3073_; lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
lean_dec_ref(v_e_3045_);
v___x_3073_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3076_ = v___x_3073_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3073_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
else
{
lean_object* v___x_3082_; 
v___x_3082_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
return v___x_3082_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object* v_e_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
lean_object* v_res_3555_; 
v_res_3555_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_);
lean_dec(v___y_3553_);
lean_dec_ref(v___y_3552_);
lean_dec(v___y_3551_);
lean_dec_ref(v___y_3550_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object* v_00_u03b2_3556_, lean_object* v_x_3557_, lean_object* v_x_3558_, lean_object* v_x_3559_){
_start:
{
lean_object* v___x_3560_; 
v___x_3560_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_x_3557_, v_x_3558_, v_x_3559_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object* v_00_u03b2_3561_, lean_object* v_x_3562_, lean_object* v_x_3563_){
_start:
{
lean_object* v___x_3564_; 
v___x_3564_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3562_, v_x_3563_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object* v_00_u03b2_3565_, lean_object* v_x_3566_, lean_object* v_x_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(v_00_u03b2_3565_, v_x_3566_, v_x_3567_);
lean_dec_ref(v_x_3567_);
lean_dec_ref(v_x_3566_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object* v_00_u03b2_3569_, lean_object* v_x_3570_, size_t v_x_3571_, size_t v_x_3572_, lean_object* v_x_3573_, lean_object* v_x_3574_){
_start:
{
lean_object* v___x_3575_; 
v___x_3575_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_3570_, v_x_3571_, v_x_3572_, v_x_3573_, v_x_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3576_, lean_object* v_x_3577_, lean_object* v_x_3578_, lean_object* v_x_3579_, lean_object* v_x_3580_, lean_object* v_x_3581_){
_start:
{
size_t v_x_3696__boxed_3582_; size_t v_x_3697__boxed_3583_; lean_object* v_res_3584_; 
v_x_3696__boxed_3582_ = lean_unbox_usize(v_x_3578_);
lean_dec(v_x_3578_);
v_x_3697__boxed_3583_ = lean_unbox_usize(v_x_3579_);
lean_dec(v_x_3579_);
v_res_3584_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(v_00_u03b2_3576_, v_x_3577_, v_x_3696__boxed_3582_, v_x_3697__boxed_3583_, v_x_3580_, v_x_3581_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object* v_00_u03b2_3585_, lean_object* v_x_3586_, size_t v_x_3587_, lean_object* v_x_3588_){
_start:
{
lean_object* v___x_3589_; 
v___x_3589_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3586_, v_x_3587_, v_x_3588_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3590_, lean_object* v_x_3591_, lean_object* v_x_3592_, lean_object* v_x_3593_){
_start:
{
size_t v_x_3713__boxed_3594_; lean_object* v_res_3595_; 
v_x_3713__boxed_3594_ = lean_unbox_usize(v_x_3592_);
lean_dec(v_x_3592_);
v_res_3595_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(v_00_u03b2_3590_, v_x_3591_, v_x_3713__boxed_3594_, v_x_3593_);
lean_dec_ref(v_x_3593_);
lean_dec_ref(v_x_3591_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_3596_, lean_object* v_n_3597_, lean_object* v_k_3598_, lean_object* v_v_3599_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v_n_3597_, v_k_3598_, v_v_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_3601_, size_t v_depth_3602_, lean_object* v_keys_3603_, lean_object* v_vals_3604_, lean_object* v_heq_3605_, lean_object* v_i_3606_, lean_object* v_entries_3607_){
_start:
{
lean_object* v___x_3608_; 
v___x_3608_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_3602_, v_keys_3603_, v_vals_3604_, v_i_3606_, v_entries_3607_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3609_, lean_object* v_depth_3610_, lean_object* v_keys_3611_, lean_object* v_vals_3612_, lean_object* v_heq_3613_, lean_object* v_i_3614_, lean_object* v_entries_3615_){
_start:
{
size_t v_depth_boxed_3616_; lean_object* v_res_3617_; 
v_depth_boxed_3616_ = lean_unbox_usize(v_depth_3610_);
lean_dec(v_depth_3610_);
v_res_3617_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(v_00_u03b2_3609_, v_depth_boxed_3616_, v_keys_3611_, v_vals_3612_, v_heq_3613_, v_i_3614_, v_entries_3615_);
lean_dec_ref(v_vals_3612_);
lean_dec_ref(v_keys_3611_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_3618_, lean_object* v_keys_3619_, lean_object* v_vals_3620_, lean_object* v_heq_3621_, lean_object* v_i_3622_, lean_object* v_k_3623_){
_start:
{
lean_object* v___x_3624_; 
v___x_3624_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_3619_, v_vals_3620_, v_i_3622_, v_k_3623_);
return v___x_3624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3625_, lean_object* v_keys_3626_, lean_object* v_vals_3627_, lean_object* v_heq_3628_, lean_object* v_i_3629_, lean_object* v_k_3630_){
_start:
{
lean_object* v_res_3631_; 
v_res_3631_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(v_00_u03b2_3625_, v_keys_3626_, v_vals_3627_, v_heq_3628_, v_i_3629_, v_k_3630_);
lean_dec_ref(v_k_3630_);
lean_dec_ref(v_vals_3627_);
lean_dec_ref(v_keys_3626_);
return v_res_3631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3632_, lean_object* v_x_3633_, lean_object* v_x_3634_, lean_object* v_x_3635_, lean_object* v_x_3636_){
_start:
{
lean_object* v___x_3637_; 
v___x_3637_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(v_x_3633_, v_x_3634_, v_x_3635_, v_x_3636_);
return v___x_3637_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3643_ = l_Lean_maxRecDepthErrorMessage;
v___x_3644_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3643_);
return v___x_3644_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3645_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3);
v___x_3646_ = l_Lean_MessageData_ofFormat(v___x_3645_);
return v___x_3646_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3647_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4);
v___x_3648_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2));
v___x_3649_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3648_);
lean_ctor_set(v___x_3649_, 1, v___x_3647_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object* v_ref_3650_){
_start:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3652_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5);
v___x_3653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3653_, 0, v_ref_3650_);
lean_ctor_set(v___x_3653_, 1, v___x_3652_);
v___x_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object* v_ref_3655_, lean_object* v___y_3656_){
_start:
{
lean_object* v_res_3657_; 
v_res_3657_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3655_);
return v_res_3657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object* v_00_u03b1_3658_, lean_object* v_ref_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_){
_start:
{
lean_object* v___x_3665_; 
v___x_3665_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3659_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object* v_00_u03b1_3666_, lean_object* v_ref_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_){
_start:
{
lean_object* v_res_3673_; 
v_res_3673_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(v_00_u03b1_3666_, v_ref_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
return v_res_3673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0(lean_object* v_e_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_){
_start:
{
lean_object* v___x_3726_; uint8_t v_beta_3727_; 
v___x_3726_ = l_Lean_Meta_Context_config(v___y_3675_);
v_beta_3727_ = lean_ctor_get_uint8(v___x_3726_, 13);
if (v_beta_3727_ == 0)
{
lean_dec_ref(v___x_3726_);
goto v___jp_3680_;
}
else
{
uint8_t v_iota_3728_; 
v_iota_3728_ = lean_ctor_get_uint8(v___x_3726_, 12);
if (v_iota_3728_ == 0)
{
lean_dec_ref(v___x_3726_);
goto v___jp_3680_;
}
else
{
uint8_t v_zeta_3729_; 
v_zeta_3729_ = lean_ctor_get_uint8(v___x_3726_, 15);
if (v_zeta_3729_ == 0)
{
lean_dec_ref(v___x_3726_);
goto v___jp_3680_;
}
else
{
uint8_t v_zetaHave_3730_; 
v_zetaHave_3730_ = lean_ctor_get_uint8(v___x_3726_, 18);
if (v_zetaHave_3730_ == 0)
{
lean_dec_ref(v___x_3726_);
goto v___jp_3680_;
}
else
{
uint8_t v_zetaDelta_3731_; 
v_zetaDelta_3731_ = lean_ctor_get_uint8(v___x_3726_, 16);
if (v_zetaDelta_3731_ == 0)
{
lean_dec_ref(v___x_3726_);
goto v___jp_3680_;
}
else
{
uint8_t v_etaStruct_3732_; uint8_t v_proj_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; uint8_t v___x_3736_; 
v_etaStruct_3732_ = lean_ctor_get_uint8(v___x_3726_, 10);
v_proj_3733_ = lean_ctor_get_uint8(v___x_3726_, 14);
lean_dec_ref(v___x_3726_);
v___x_3734_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_3733_);
v___x_3735_ = lean_obj_once(&l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0, &l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0);
v___x_3736_ = lean_nat_dec_eq(v___x_3734_, v___x_3735_);
lean_dec(v___x_3734_);
if (v___x_3736_ == 0)
{
goto v___jp_3680_;
}
else
{
uint8_t v___x_3737_; uint8_t v___x_3738_; 
v___x_3737_ = 0;
v___x_3738_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_3732_, v___x_3737_);
if (v___x_3738_ == 0)
{
goto v___jp_3680_;
}
else
{
lean_object* v___x_3739_; 
v___x_3739_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3674_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_);
lean_dec_ref(v___y_3675_);
return v___x_3739_;
}
}
}
}
}
}
}
v___jp_3680_:
{
lean_object* v___x_3681_; uint8_t v_foApprox_3682_; uint8_t v_ctxApprox_3683_; uint8_t v_quasiPatternApprox_3684_; uint8_t v_constApprox_3685_; uint8_t v_isDefEqStuckEx_3686_; uint8_t v_unificationHints_3687_; uint8_t v_proofIrrelevance_3688_; uint8_t v_assignSyntheticOpaque_3689_; uint8_t v_offsetCnstrs_3690_; uint8_t v_transparency_3691_; uint8_t v_univApprox_3692_; uint8_t v_zetaUnused_3693_; uint8_t v_canUnfoldPredicateConfig_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3725_; 
v___x_3681_ = l_Lean_Meta_Context_config(v___y_3675_);
v_foApprox_3682_ = lean_ctor_get_uint8(v___x_3681_, 0);
v_ctxApprox_3683_ = lean_ctor_get_uint8(v___x_3681_, 1);
v_quasiPatternApprox_3684_ = lean_ctor_get_uint8(v___x_3681_, 2);
v_constApprox_3685_ = lean_ctor_get_uint8(v___x_3681_, 3);
v_isDefEqStuckEx_3686_ = lean_ctor_get_uint8(v___x_3681_, 4);
v_unificationHints_3687_ = lean_ctor_get_uint8(v___x_3681_, 5);
v_proofIrrelevance_3688_ = lean_ctor_get_uint8(v___x_3681_, 6);
v_assignSyntheticOpaque_3689_ = lean_ctor_get_uint8(v___x_3681_, 7);
v_offsetCnstrs_3690_ = lean_ctor_get_uint8(v___x_3681_, 8);
v_transparency_3691_ = lean_ctor_get_uint8(v___x_3681_, 9);
v_univApprox_3692_ = lean_ctor_get_uint8(v___x_3681_, 11);
v_zetaUnused_3693_ = lean_ctor_get_uint8(v___x_3681_, 17);
v_canUnfoldPredicateConfig_3694_ = lean_ctor_get_uint8(v___x_3681_, 19);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3696_ = v___x_3681_;
v_isShared_3697_ = v_isSharedCheck_3725_;
goto v_resetjp_3695_;
}
else
{
lean_dec(v___x_3681_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3725_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
uint8_t v___x_3698_; uint8_t v___x_3699_; uint8_t v___x_3700_; lean_object* v___x_3702_; 
v___x_3698_ = 1;
v___x_3699_ = 0;
v___x_3700_ = 2;
if (v_isShared_3697_ == 0)
{
v___x_3702_ = v___x_3696_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 0, v_foApprox_3682_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 1, v_ctxApprox_3683_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 2, v_quasiPatternApprox_3684_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 3, v_constApprox_3685_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 4, v_isDefEqStuckEx_3686_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 5, v_unificationHints_3687_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 6, v_proofIrrelevance_3688_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 7, v_assignSyntheticOpaque_3689_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 8, v_offsetCnstrs_3690_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 9, v_transparency_3691_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 11, v_univApprox_3692_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 17, v_zetaUnused_3693_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, 19, v_canUnfoldPredicateConfig_3694_);
v___x_3702_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
uint8_t v_trackZetaDelta_3703_; lean_object* v_zetaDeltaSet_3704_; lean_object* v_lctx_3705_; lean_object* v_localInstances_3706_; lean_object* v_defEqCtx_x3f_3707_; lean_object* v_synthPendingDepth_3708_; lean_object* v_customCanUnfoldPredicate_x3f_3709_; uint8_t v_univApprox_3710_; uint8_t v_inTypeClassResolution_3711_; uint8_t v_cacheInferType_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3722_; 
lean_ctor_set_uint8(v___x_3702_, 10, v___x_3699_);
lean_ctor_set_uint8(v___x_3702_, 12, v___x_3698_);
lean_ctor_set_uint8(v___x_3702_, 13, v___x_3698_);
lean_ctor_set_uint8(v___x_3702_, 14, v___x_3700_);
lean_ctor_set_uint8(v___x_3702_, 15, v___x_3698_);
lean_ctor_set_uint8(v___x_3702_, 16, v___x_3698_);
lean_ctor_set_uint8(v___x_3702_, 18, v___x_3698_);
v_trackZetaDelta_3703_ = lean_ctor_get_uint8(v___y_3675_, sizeof(void*)*7);
v_zetaDeltaSet_3704_ = lean_ctor_get(v___y_3675_, 1);
v_lctx_3705_ = lean_ctor_get(v___y_3675_, 2);
v_localInstances_3706_ = lean_ctor_get(v___y_3675_, 3);
v_defEqCtx_x3f_3707_ = lean_ctor_get(v___y_3675_, 4);
v_synthPendingDepth_3708_ = lean_ctor_get(v___y_3675_, 5);
v_customCanUnfoldPredicate_x3f_3709_ = lean_ctor_get(v___y_3675_, 6);
v_univApprox_3710_ = lean_ctor_get_uint8(v___y_3675_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3711_ = lean_ctor_get_uint8(v___y_3675_, sizeof(void*)*7 + 2);
v_cacheInferType_3712_ = lean_ctor_get_uint8(v___y_3675_, sizeof(void*)*7 + 3);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___y_3675_);
if (v_isSharedCheck_3722_ == 0)
{
lean_object* v_unused_3723_; 
v_unused_3723_ = lean_ctor_get(v___y_3675_, 0);
lean_dec(v_unused_3723_);
v___x_3714_ = v___y_3675_;
v_isShared_3715_ = v_isSharedCheck_3722_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_3709_);
lean_inc(v_synthPendingDepth_3708_);
lean_inc(v_defEqCtx_x3f_3707_);
lean_inc(v_localInstances_3706_);
lean_inc(v_lctx_3705_);
lean_inc(v_zetaDeltaSet_3704_);
lean_dec(v___y_3675_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3722_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
uint64_t v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3719_; 
v___x_3716_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3702_);
v___x_3717_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3717_, 0, v___x_3702_);
lean_ctor_set_uint64(v___x_3717_, sizeof(void*)*1, v___x_3716_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v___x_3717_);
v___x_3719_ = v___x_3714_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v___x_3717_);
lean_ctor_set(v_reuseFailAlloc_3721_, 1, v_zetaDeltaSet_3704_);
lean_ctor_set(v_reuseFailAlloc_3721_, 2, v_lctx_3705_);
lean_ctor_set(v_reuseFailAlloc_3721_, 3, v_localInstances_3706_);
lean_ctor_set(v_reuseFailAlloc_3721_, 4, v_defEqCtx_x3f_3707_);
lean_ctor_set(v_reuseFailAlloc_3721_, 5, v_synthPendingDepth_3708_);
lean_ctor_set(v_reuseFailAlloc_3721_, 6, v_customCanUnfoldPredicate_x3f_3709_);
lean_ctor_set_uint8(v_reuseFailAlloc_3721_, sizeof(void*)*7, v_trackZetaDelta_3703_);
lean_ctor_set_uint8(v_reuseFailAlloc_3721_, sizeof(void*)*7 + 1, v_univApprox_3710_);
lean_ctor_set_uint8(v_reuseFailAlloc_3721_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3711_);
lean_ctor_set_uint8(v_reuseFailAlloc_3721_, sizeof(void*)*7 + 3, v_cacheInferType_3712_);
v___x_3719_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
lean_object* v___x_3720_; 
v___x_3720_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3674_, v___x_3719_, v___y_3676_, v___y_3677_, v___y_3678_);
lean_dec_ref(v___x_3719_);
return v___x_3720_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0___boxed(lean_object* v_e_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
lean_object* v_res_3746_; 
v_res_3746_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
lean_dec(v___y_3742_);
return v_res_3746_;
}
}
LEAN_EXPORT lean_object* lean_infer_type(lean_object* v_e_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
lean_object* v___y_3754_; lean_object* v_toCold_3771_; lean_object* v_currRecDepth_3772_; lean_object* v_ref_3773_; uint8_t v_diag_3774_; uint8_t v_suppressElabErrors_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3815_; 
v_toCold_3771_ = lean_ctor_get(v___y_3750_, 0);
v_currRecDepth_3772_ = lean_ctor_get(v___y_3750_, 1);
v_ref_3773_ = lean_ctor_get(v___y_3750_, 2);
v_diag_3774_ = lean_ctor_get_uint8(v___y_3750_, sizeof(void*)*3);
v_suppressElabErrors_3775_ = lean_ctor_get_uint8(v___y_3750_, sizeof(void*)*3 + 1);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___y_3750_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3777_ = v___y_3750_;
v_isShared_3778_ = v_isSharedCheck_3815_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_ref_3773_);
lean_inc(v_currRecDepth_3772_);
lean_inc(v_toCold_3771_);
lean_dec(v___y_3750_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3815_;
goto v_resetjp_3776_;
}
v___jp_3753_:
{
if (lean_obj_tag(v___y_3754_) == 0)
{
lean_object* v_a_3755_; lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3762_; 
v_a_3755_ = lean_ctor_get(v___y_3754_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___y_3754_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3757_ = v___y_3754_;
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
else
{
lean_inc(v_a_3755_);
lean_dec(v___y_3754_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v___x_3760_; 
if (v_isShared_3758_ == 0)
{
v___x_3760_ = v___x_3757_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_a_3755_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
}
else
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
v_a_3763_ = lean_ctor_get(v___y_3754_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___y_3754_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3765_ = v___y_3754_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___y_3754_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3763_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
v_resetjp_3776_:
{
lean_object* v_maxRecDepth_3779_; lean_object* v___x_3811_; uint8_t v___x_3812_; 
v_maxRecDepth_3779_ = lean_ctor_get(v_toCold_3771_, 3);
v___x_3811_ = lean_unsigned_to_nat(0u);
v___x_3812_ = lean_nat_dec_eq(v_maxRecDepth_3779_, v___x_3811_);
if (v___x_3812_ == 0)
{
uint8_t v___x_3813_; 
v___x_3813_ = lean_nat_dec_eq(v_currRecDepth_3772_, v_maxRecDepth_3779_);
if (v___x_3813_ == 0)
{
goto v___jp_3780_;
}
else
{
lean_object* v___x_3814_; 
lean_del_object(v___x_3777_);
lean_dec(v_currRecDepth_3772_);
lean_dec_ref(v_toCold_3771_);
lean_dec(v___y_3751_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec_ref(v_e_3747_);
v___x_3814_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3773_);
return v___x_3814_;
}
}
else
{
goto v___jp_3780_;
}
v___jp_3780_:
{
lean_object* v___x_3781_; uint8_t v_transparency_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3786_; 
v___x_3781_ = l_Lean_Meta_Context_config(v___y_3748_);
v_transparency_3782_ = lean_ctor_get_uint8(v___x_3781_, 9);
lean_dec_ref(v___x_3781_);
v___x_3783_ = lean_unsigned_to_nat(1u);
v___x_3784_ = lean_nat_add(v_currRecDepth_3772_, v___x_3783_);
lean_dec(v_currRecDepth_3772_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 1, v___x_3784_);
v___x_3786_ = v___x_3777_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_toCold_3771_);
lean_ctor_set(v_reuseFailAlloc_3810_, 1, v___x_3784_);
lean_ctor_set(v_reuseFailAlloc_3810_, 2, v_ref_3773_);
lean_ctor_set_uint8(v_reuseFailAlloc_3810_, sizeof(void*)*3, v_diag_3774_);
lean_ctor_set_uint8(v_reuseFailAlloc_3810_, sizeof(void*)*3 + 1, v_suppressElabErrors_3775_);
v___x_3786_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
uint8_t v___x_3787_; uint8_t v___x_3788_; 
v___x_3787_ = 1;
v___x_3788_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_3782_, v___x_3787_);
if (v___x_3788_ == 0)
{
lean_object* v___x_3789_; 
v___x_3789_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3747_, v___y_3748_, v___y_3749_, v___x_3786_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec_ref(v___x_3786_);
lean_dec(v___y_3749_);
v___y_3754_ = v___x_3789_;
goto v___jp_3753_;
}
else
{
lean_object* v_keyedConfig_3790_; uint8_t v_trackZetaDelta_3791_; lean_object* v_zetaDeltaSet_3792_; lean_object* v_lctx_3793_; lean_object* v_localInstances_3794_; lean_object* v_defEqCtx_x3f_3795_; lean_object* v_synthPendingDepth_3796_; lean_object* v_customCanUnfoldPredicate_x3f_3797_; uint8_t v_univApprox_3798_; uint8_t v_inTypeClassResolution_3799_; uint8_t v_cacheInferType_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3809_; 
v_keyedConfig_3790_ = lean_ctor_get(v___y_3748_, 0);
v_trackZetaDelta_3791_ = lean_ctor_get_uint8(v___y_3748_, sizeof(void*)*7);
v_zetaDeltaSet_3792_ = lean_ctor_get(v___y_3748_, 1);
v_lctx_3793_ = lean_ctor_get(v___y_3748_, 2);
v_localInstances_3794_ = lean_ctor_get(v___y_3748_, 3);
v_defEqCtx_x3f_3795_ = lean_ctor_get(v___y_3748_, 4);
v_synthPendingDepth_3796_ = lean_ctor_get(v___y_3748_, 5);
v_customCanUnfoldPredicate_x3f_3797_ = lean_ctor_get(v___y_3748_, 6);
v_univApprox_3798_ = lean_ctor_get_uint8(v___y_3748_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3799_ = lean_ctor_get_uint8(v___y_3748_, sizeof(void*)*7 + 2);
v_cacheInferType_3800_ = lean_ctor_get_uint8(v___y_3748_, sizeof(void*)*7 + 3);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___y_3748_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3802_ = v___y_3748_;
v_isShared_3803_ = v_isSharedCheck_3809_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_3797_);
lean_inc(v_synthPendingDepth_3796_);
lean_inc(v_defEqCtx_x3f_3795_);
lean_inc(v_localInstances_3794_);
lean_inc(v_lctx_3793_);
lean_inc(v_zetaDeltaSet_3792_);
lean_inc(v_keyedConfig_3790_);
lean_dec(v___y_3748_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3809_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v___x_3804_; lean_object* v___x_3806_; 
v___x_3804_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3787_, v_keyedConfig_3790_);
if (v_isShared_3803_ == 0)
{
lean_ctor_set(v___x_3802_, 0, v___x_3804_);
v___x_3806_ = v___x_3802_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3804_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v_zetaDeltaSet_3792_);
lean_ctor_set(v_reuseFailAlloc_3808_, 2, v_lctx_3793_);
lean_ctor_set(v_reuseFailAlloc_3808_, 3, v_localInstances_3794_);
lean_ctor_set(v_reuseFailAlloc_3808_, 4, v_defEqCtx_x3f_3795_);
lean_ctor_set(v_reuseFailAlloc_3808_, 5, v_synthPendingDepth_3796_);
lean_ctor_set(v_reuseFailAlloc_3808_, 6, v_customCanUnfoldPredicate_x3f_3797_);
lean_ctor_set_uint8(v_reuseFailAlloc_3808_, sizeof(void*)*7, v_trackZetaDelta_3791_);
lean_ctor_set_uint8(v_reuseFailAlloc_3808_, sizeof(void*)*7 + 1, v_univApprox_3798_);
lean_ctor_set_uint8(v_reuseFailAlloc_3808_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3799_);
lean_ctor_set_uint8(v_reuseFailAlloc_3808_, sizeof(void*)*7 + 3, v_cacheInferType_3800_);
v___x_3806_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
lean_object* v___x_3807_; 
v___x_3807_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3747_, v___x_3806_, v___y_3749_, v___x_3786_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec_ref(v___x_3786_);
lean_dec(v___y_3749_);
v___y_3754_ = v___x_3807_;
goto v___jp_3753_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object* v_e_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = lean_infer_type(v_e_3816_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object* v_x_3823_){
_start:
{
switch(lean_obj_tag(v_x_3823_))
{
case 0:
{
uint8_t v___x_3824_; 
v___x_3824_ = 1;
return v___x_3824_;
}
case 2:
{
lean_object* v_a_3825_; lean_object* v_a_3826_; uint8_t v___x_3827_; 
v_a_3825_ = lean_ctor_get(v_x_3823_, 0);
v_a_3826_ = lean_ctor_get(v_x_3823_, 1);
v___x_3827_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3825_);
if (v___x_3827_ == 0)
{
return v___x_3827_;
}
else
{
v_x_3823_ = v_a_3826_;
goto _start;
}
}
case 3:
{
lean_object* v_a_3829_; 
v_a_3829_ = lean_ctor_get(v_x_3823_, 1);
v_x_3823_ = v_a_3829_;
goto _start;
}
default: 
{
uint8_t v___x_3831_; 
v___x_3831_ = 0;
return v___x_3831_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object* v_x_3832_){
_start:
{
uint8_t v_res_3833_; lean_object* v_r_3834_; 
v_res_3833_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_x_3832_);
lean_dec(v_x_3832_);
v_r_3834_ = lean_box(v_res_3833_);
return v_r_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object* v_l_3835_, lean_object* v___y_3836_){
_start:
{
lean_object* v___x_3838_; lean_object* v_mctx_3839_; lean_object* v___x_3840_; lean_object* v_fst_3841_; lean_object* v_snd_3842_; lean_object* v___x_3843_; lean_object* v_cache_3844_; lean_object* v_zetaDeltaFVarIds_3845_; lean_object* v_postponed_3846_; lean_object* v_diag_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3856_; 
v___x_3838_ = lean_st_ref_get(v___y_3836_);
v_mctx_3839_ = lean_ctor_get(v___x_3838_, 0);
lean_inc_ref(v_mctx_3839_);
lean_dec(v___x_3838_);
v___x_3840_ = lean_instantiate_level_mvars(v_mctx_3839_, v_l_3835_);
v_fst_3841_ = lean_ctor_get(v___x_3840_, 0);
lean_inc(v_fst_3841_);
v_snd_3842_ = lean_ctor_get(v___x_3840_, 1);
lean_inc(v_snd_3842_);
lean_dec_ref(v___x_3840_);
v___x_3843_ = lean_st_ref_take(v___y_3836_);
v_cache_3844_ = lean_ctor_get(v___x_3843_, 1);
v_zetaDeltaFVarIds_3845_ = lean_ctor_get(v___x_3843_, 2);
v_postponed_3846_ = lean_ctor_get(v___x_3843_, 3);
v_diag_3847_ = lean_ctor_get(v___x_3843_, 4);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3843_);
if (v_isSharedCheck_3856_ == 0)
{
lean_object* v_unused_3857_; 
v_unused_3857_ = lean_ctor_get(v___x_3843_, 0);
lean_dec(v_unused_3857_);
v___x_3849_ = v___x_3843_;
v_isShared_3850_ = v_isSharedCheck_3856_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_diag_3847_);
lean_inc(v_postponed_3846_);
lean_inc(v_zetaDeltaFVarIds_3845_);
lean_inc(v_cache_3844_);
lean_dec(v___x_3843_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3856_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v_fst_3841_);
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_fst_3841_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_cache_3844_);
lean_ctor_set(v_reuseFailAlloc_3855_, 2, v_zetaDeltaFVarIds_3845_);
lean_ctor_set(v_reuseFailAlloc_3855_, 3, v_postponed_3846_);
lean_ctor_set(v_reuseFailAlloc_3855_, 4, v_diag_3847_);
v___x_3852_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3853_ = lean_st_ref_put(v___y_3836_, v___x_3852_);
v___x_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3854_, 0, v_snd_3842_);
return v___x_3854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object* v_l_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
lean_object* v_res_3861_; 
v_res_3861_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3858_, v___y_3859_);
lean_dec(v___y_3859_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object* v_l_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3862_, v___y_3864_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object* v_l_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(v_l_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
lean_dec_ref(v___y_3870_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object* v_x_3876_, lean_object* v_x_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_){
_start:
{
switch(lean_obj_tag(v_x_3876_))
{
case 3:
{
lean_object* v_u_3887_; lean_object* v___x_3888_; uint8_t v___x_3889_; 
v_u_3887_ = lean_ctor_get(v_x_3876_, 0);
lean_inc(v_u_3887_);
lean_dec_ref_known(v_x_3876_, 1);
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3889_ = lean_nat_dec_eq(v_x_3877_, v___x_3888_);
lean_dec(v_x_3877_);
if (v___x_3889_ == 0)
{
lean_dec(v_u_3887_);
goto v___jp_3883_;
}
else
{
lean_object* v___x_3890_; 
v___x_3890_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_3887_, v___y_3879_);
if (lean_obj_tag(v___x_3890_) == 0)
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3901_; 
v_a_3891_ = lean_ctor_get(v___x_3890_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v___x_3890_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3893_ = v___x_3890_;
v_isShared_3894_ = v_isSharedCheck_3901_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3890_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3901_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
uint8_t v___x_3895_; uint8_t v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3899_; 
v___x_3895_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3891_);
lean_dec(v_a_3891_);
v___x_3896_ = l_Lean_Bool_toLBool(v___x_3895_);
v___x_3897_ = lean_box(v___x_3896_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 0, v___x_3897_);
v___x_3899_ = v___x_3893_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v___x_3897_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
v_a_3902_ = lean_ctor_get(v___x_3890_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3890_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3890_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3890_);
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
}
case 7:
{
lean_object* v_body_3910_; lean_object* v_zero_3911_; uint8_t v_isZero_3912_; 
v_body_3910_ = lean_ctor_get(v_x_3876_, 2);
lean_inc_ref(v_body_3910_);
lean_dec_ref_known(v_x_3876_, 3);
v_zero_3911_ = lean_unsigned_to_nat(0u);
v_isZero_3912_ = lean_nat_dec_eq(v_x_3877_, v_zero_3911_);
if (v_isZero_3912_ == 1)
{
uint8_t v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
lean_dec_ref(v_body_3910_);
lean_dec(v_x_3877_);
v___x_3913_ = 0;
v___x_3914_ = lean_box(v___x_3913_);
v___x_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
return v___x_3915_;
}
else
{
lean_object* v_one_3916_; lean_object* v_n_3917_; 
v_one_3916_ = lean_unsigned_to_nat(1u);
v_n_3917_ = lean_nat_sub(v_x_3877_, v_one_3916_);
lean_dec(v_x_3877_);
v_x_3876_ = v_body_3910_;
v_x_3877_ = v_n_3917_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3919_; 
v_body_3919_ = lean_ctor_get(v_x_3876_, 3);
lean_inc_ref(v_body_3919_);
lean_dec_ref_known(v_x_3876_, 4);
v_x_3876_ = v_body_3919_;
goto _start;
}
case 10:
{
lean_object* v_expr_3921_; 
v_expr_3921_ = lean_ctor_get(v_x_3876_, 1);
lean_inc_ref(v_expr_3921_);
lean_dec_ref_known(v_x_3876_, 2);
v_x_3876_ = v_expr_3921_;
goto _start;
}
default: 
{
lean_dec(v_x_3877_);
lean_dec_ref(v_x_3876_);
goto v___jp_3883_;
}
}
v___jp_3883_:
{
uint8_t v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3884_ = 2;
v___x_3885_ = lean_box(v___x_3884_);
v___x_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3885_);
return v___x_3886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object* v_x_3923_, lean_object* v_x_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_){
_start:
{
lean_object* v_res_3930_; 
v_res_3930_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_x_3923_, v_x_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3927_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object* v_x_3931_, lean_object* v_x_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
switch(lean_obj_tag(v_x_3931_))
{
case 4:
{
lean_object* v_declName_3938_; lean_object* v_us_3939_; lean_object* v___x_3940_; 
v_declName_3938_ = lean_ctor_get(v_x_3931_, 0);
lean_inc(v_declName_3938_);
v_us_3939_ = lean_ctor_get(v_x_3931_, 1);
lean_inc(v_us_3939_);
lean_dec_ref_known(v_x_3931_, 2);
v___x_3940_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3938_, v_us_3939_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3942_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v___x_3940_, 1);
v___x_3942_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3941_, v_x_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
return v___x_3942_;
}
else
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3950_; 
lean_dec(v_x_3932_);
v_a_3943_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3945_ = v___x_3940_;
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v___x_3940_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3943_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_3951_; lean_object* v___x_3952_; 
v_fvarId_3951_ = lean_ctor_get(v_x_3931_, 0);
lean_inc(v_fvarId_3951_);
lean_dec_ref_known(v_x_3931_, 1);
v___x_3952_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3951_, v___y_3933_, v___y_3935_, v___y_3936_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3954_; 
v_a_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3953_);
lean_dec_ref_known(v___x_3952_, 1);
v___x_3954_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3953_, v_x_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
return v___x_3954_;
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
lean_dec(v_x_3932_);
v_a_3955_ = lean_ctor_get(v___x_3952_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3952_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3952_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_3963_; lean_object* v___x_3964_; 
v_mvarId_3963_ = lean_ctor_get(v_x_3931_, 0);
lean_inc(v_mvarId_3963_);
lean_dec_ref_known(v_x_3931_, 1);
v___x_3964_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3963_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
if (lean_obj_tag(v___x_3964_) == 0)
{
lean_object* v_a_3965_; lean_object* v___x_3966_; 
v_a_3965_ = lean_ctor_get(v___x_3964_, 0);
lean_inc(v_a_3965_);
lean_dec_ref_known(v___x_3964_, 1);
v___x_3966_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3965_, v_x_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
return v___x_3966_;
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
lean_dec(v_x_3932_);
v_a_3967_ = lean_ctor_get(v___x_3964_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3964_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___x_3964_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3964_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3967_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
case 5:
{
lean_object* v_fn_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v_fn_3975_ = lean_ctor_get(v_x_3931_, 0);
lean_inc_ref(v_fn_3975_);
lean_dec_ref_known(v_x_3931_, 2);
v___x_3976_ = lean_unsigned_to_nat(1u);
v___x_3977_ = lean_nat_add(v_x_3932_, v___x_3976_);
lean_dec(v_x_3932_);
v_x_3931_ = v_fn_3975_;
v_x_3932_ = v___x_3977_;
goto _start;
}
case 10:
{
lean_object* v_expr_3979_; 
v_expr_3979_ = lean_ctor_get(v_x_3931_, 1);
lean_inc_ref(v_expr_3979_);
lean_dec_ref_known(v_x_3931_, 2);
v_x_3931_ = v_expr_3979_;
goto _start;
}
case 8:
{
lean_object* v_body_3981_; 
v_body_3981_ = lean_ctor_get(v_x_3931_, 3);
lean_inc_ref(v_body_3981_);
lean_dec_ref_known(v_x_3931_, 4);
v_x_3931_ = v_body_3981_;
goto _start;
}
case 6:
{
lean_object* v_body_3983_; lean_object* v_zero_3984_; uint8_t v_isZero_3985_; 
v_body_3983_ = lean_ctor_get(v_x_3931_, 2);
lean_inc_ref(v_body_3983_);
lean_dec_ref_known(v_x_3931_, 3);
v_zero_3984_ = lean_unsigned_to_nat(0u);
v_isZero_3985_ = lean_nat_dec_eq(v_x_3932_, v_zero_3984_);
if (v_isZero_3985_ == 1)
{
uint8_t v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
lean_dec_ref(v_body_3983_);
lean_dec(v_x_3932_);
v___x_3986_ = 0;
v___x_3987_ = lean_box(v___x_3986_);
v___x_3988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
return v___x_3988_;
}
else
{
lean_object* v_one_3989_; lean_object* v_n_3990_; 
v_one_3989_ = lean_unsigned_to_nat(1u);
v_n_3990_ = lean_nat_sub(v_x_3932_, v_one_3989_);
lean_dec(v_x_3932_);
v_x_3931_ = v_body_3983_;
v_x_3932_ = v_n_3990_;
goto _start;
}
}
default: 
{
uint8_t v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; 
lean_dec(v_x_3932_);
lean_dec_ref(v_x_3931_);
v___x_3992_ = 2;
v___x_3993_ = lean_box(v___x_3992_);
v___x_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3993_);
return v___x_3994_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object* v_x_3995_, lean_object* v_x_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_x_3995_, v_x_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
lean_dec(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec(v___y_3998_);
lean_dec_ref(v___y_3997_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object* v_x_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_){
_start:
{
switch(lean_obj_tag(v_x_4003_))
{
case 0:
{
uint8_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
lean_dec_ref_known(v_x_4003_, 1);
v___x_4009_ = 2;
v___x_4010_ = lean_box(v___x_4009_);
v___x_4011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4010_);
return v___x_4011_;
}
case 1:
{
lean_object* v_fvarId_4012_; lean_object* v___x_4013_; 
v_fvarId_4012_ = lean_ctor_get(v_x_4003_, 0);
lean_inc(v_fvarId_4012_);
lean_dec_ref_known(v_x_4003_, 1);
v___x_4013_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4012_, v___y_4004_, v___y_4006_, v___y_4007_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4014_);
lean_dec_ref_known(v___x_4013_, 1);
v___x_4015_ = lean_unsigned_to_nat(0u);
v___x_4016_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4014_, v___x_4015_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
return v___x_4016_;
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4024_; 
v_a_4017_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4019_ = v___x_4013_;
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_4013_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4025_; lean_object* v___x_4026_; 
v_mvarId_4025_ = lean_ctor_get(v_x_4003_, 0);
lean_inc(v_mvarId_4025_);
lean_dec_ref_known(v_x_4003_, 1);
v___x_4026_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4025_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v_a_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v_a_4027_ = lean_ctor_get(v___x_4026_, 0);
lean_inc(v_a_4027_);
lean_dec_ref_known(v___x_4026_, 1);
v___x_4028_ = lean_unsigned_to_nat(0u);
v___x_4029_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4027_, v___x_4028_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
return v___x_4029_;
}
else
{
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4037_; 
v_a_4030_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4032_ = v___x_4026_;
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v___x_4026_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4035_; 
if (v_isShared_4033_ == 0)
{
v___x_4035_ = v___x_4032_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_a_4030_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
return v___x_4035_;
}
}
}
}
case 4:
{
lean_object* v_declName_4038_; lean_object* v_us_4039_; lean_object* v___x_4040_; 
v_declName_4038_ = lean_ctor_get(v_x_4003_, 0);
lean_inc(v_declName_4038_);
v_us_4039_ = lean_ctor_get(v_x_4003_, 1);
lean_inc(v_us_4039_);
lean_dec_ref_known(v_x_4003_, 2);
v___x_4040_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4038_, v_us_4039_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref_known(v___x_4040_, 1);
v___x_4042_ = lean_unsigned_to_nat(0u);
v___x_4043_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4041_, v___x_4042_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
return v___x_4043_;
}
else
{
lean_object* v_a_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4051_; 
v_a_4044_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4051_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4051_ == 0)
{
v___x_4046_ = v___x_4040_;
v_isShared_4047_ = v_isSharedCheck_4051_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_a_4044_);
lean_dec(v___x_4040_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4051_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
lean_object* v___x_4049_; 
if (v_isShared_4047_ == 0)
{
v___x_4049_ = v___x_4046_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_a_4044_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
}
}
case 5:
{
lean_object* v_fn_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v_fn_4052_ = lean_ctor_get(v_x_4003_, 0);
lean_inc_ref(v_fn_4052_);
lean_dec_ref_known(v_x_4003_, 2);
v___x_4053_ = lean_unsigned_to_nat(1u);
v___x_4054_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_fn_4052_, v___x_4053_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
return v___x_4054_;
}
case 7:
{
lean_object* v_body_4055_; 
v_body_4055_ = lean_ctor_get(v_x_4003_, 2);
lean_inc_ref(v_body_4055_);
lean_dec_ref_known(v_x_4003_, 3);
v_x_4003_ = v_body_4055_;
goto _start;
}
case 8:
{
lean_object* v_body_4057_; 
v_body_4057_ = lean_ctor_get(v_x_4003_, 3);
lean_inc_ref(v_body_4057_);
lean_dec_ref_known(v_x_4003_, 4);
v_x_4003_ = v_body_4057_;
goto _start;
}
case 10:
{
lean_object* v_expr_4059_; 
v_expr_4059_ = lean_ctor_get(v_x_4003_, 1);
lean_inc_ref(v_expr_4059_);
lean_dec_ref_known(v_x_4003_, 2);
v_x_4003_ = v_expr_4059_;
goto _start;
}
case 11:
{
uint8_t v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
lean_dec_ref_known(v_x_4003_, 3);
v___x_4061_ = 2;
v___x_4062_ = lean_box(v___x_4061_);
v___x_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
return v___x_4063_;
}
default: 
{
uint8_t v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
lean_dec_ref(v_x_4003_);
v___x_4064_ = 0;
v___x_4065_ = lean_box(v___x_4064_);
v___x_4066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4065_);
return v___x_4066_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object* v_x_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lean_Meta_isPropQuick(v_x_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object* v_e_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_){
_start:
{
lean_object* v___x_4080_; 
lean_inc_ref(v_e_4074_);
v___x_4080_ = l_Lean_Meta_isPropQuick(v_e_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_);
if (lean_obj_tag(v___x_4080_) == 0)
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4137_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4083_ = v___x_4080_;
v_isShared_4084_ = v_isSharedCheck_4137_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4080_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4137_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
uint8_t v___x_4085_; 
v___x_4085_ = lean_unbox(v_a_4081_);
lean_dec(v_a_4081_);
switch(v___x_4085_)
{
case 0:
{
uint8_t v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4089_; 
lean_dec_ref(v_e_4074_);
v___x_4086_ = 0;
v___x_4087_ = lean_box(v___x_4086_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 0, v___x_4087_);
v___x_4089_ = v___x_4083_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v___x_4087_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
case 1:
{
uint8_t v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4094_; 
lean_dec_ref(v_e_4074_);
v___x_4091_ = 1;
v___x_4092_ = lean_box(v___x_4091_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 0, v___x_4092_);
v___x_4094_ = v___x_4083_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
default: 
{
lean_object* v___x_4096_; 
lean_del_object(v___x_4083_);
lean_inc(v___y_4078_);
lean_inc_ref(v___y_4077_);
lean_inc(v___y_4076_);
lean_inc_ref(v___y_4075_);
v___x_4096_ = lean_infer_type(v_e_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_object* v_a_4097_; lean_object* v___x_4098_; 
v_a_4097_ = lean_ctor_get(v___x_4096_, 0);
lean_inc(v_a_4097_);
lean_dec_ref_known(v___x_4096_, 1);
v___x_4098_ = l_Lean_Meta_whnfD(v_a_4097_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4120_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4101_ = v___x_4098_;
v_isShared_4102_ = v_isSharedCheck_4120_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_a_4099_);
lean_dec(v___x_4098_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4120_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
if (lean_obj_tag(v_a_4099_) == 3)
{
lean_object* v_u_4103_; lean_object* v___x_4104_; lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4114_; 
lean_del_object(v___x_4101_);
v_u_4103_ = lean_ctor_get(v_a_4099_, 0);
lean_inc(v_u_4103_);
lean_dec_ref_known(v_a_4099_, 1);
v___x_4104_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_4103_, v___y_4076_);
v_a_4105_ = lean_ctor_get(v___x_4104_, 0);
v_isSharedCheck_4114_ = !lean_is_exclusive(v___x_4104_);
if (v_isSharedCheck_4114_ == 0)
{
v___x_4107_ = v___x_4104_;
v_isShared_4108_ = v_isSharedCheck_4114_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4104_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4114_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
uint8_t v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4112_; 
v___x_4109_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_4105_);
lean_dec(v_a_4105_);
v___x_4110_ = lean_box(v___x_4109_);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v___x_4110_);
v___x_4112_ = v___x_4107_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v___x_4110_);
v___x_4112_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
return v___x_4112_;
}
}
}
else
{
uint8_t v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4118_; 
lean_dec(v_a_4099_);
v___x_4115_ = 0;
v___x_4116_ = lean_box(v___x_4115_);
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 0, v___x_4116_);
v___x_4118_ = v___x_4101_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4116_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
return v___x_4118_;
}
}
}
}
else
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
v_a_4121_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4098_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4098_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
v_a_4129_ = lean_ctor_get(v___x_4096_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4096_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4096_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4096_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
lean_dec_ref(v_e_4074_);
v_a_4138_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4080_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4080_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object* v_e_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_){
_start:
{
lean_object* v_res_4152_; 
v_res_4152_ = l_Lean_Meta_isProp(v_e_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
return v_res_4152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object* v_x_4153_){
_start:
{
switch(lean_obj_tag(v_x_4153_))
{
case 0:
{
lean_object* v___x_4154_; 
v___x_4154_ = lean_unsigned_to_nat(0u);
return v___x_4154_;
}
case 1:
{
lean_object* v___x_4155_; 
v___x_4155_ = lean_unsigned_to_nat(1u);
return v___x_4155_;
}
case 2:
{
lean_object* v___x_4156_; 
v___x_4156_ = lean_unsigned_to_nat(2u);
return v___x_4156_;
}
default: 
{
lean_object* v___x_4157_; 
v___x_4157_ = lean_unsigned_to_nat(3u);
return v___x_4157_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object* v_x_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(v_x_4158_);
lean_dec(v_x_4158_);
return v_res_4159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object* v_t_4160_, lean_object* v_k_4161_){
_start:
{
if (lean_obj_tag(v_t_4160_) == 3)
{
lean_object* v_idx_4162_; lean_object* v___x_4163_; 
v_idx_4162_ = lean_ctor_get(v_t_4160_, 0);
lean_inc(v_idx_4162_);
lean_dec_ref_known(v_t_4160_, 1);
v___x_4163_ = lean_apply_1(v_k_4161_, v_idx_4162_);
return v___x_4163_;
}
else
{
lean_dec(v_t_4160_);
return v_k_4161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object* v_motive_4164_, lean_object* v_ctorIdx_4165_, lean_object* v_t_4166_, lean_object* v_h_4167_, lean_object* v_k_4168_){
_start:
{
lean_object* v___x_4169_; 
v___x_4169_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4166_, v_k_4168_);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object* v_motive_4170_, lean_object* v_ctorIdx_4171_, lean_object* v_t_4172_, lean_object* v_h_4173_, lean_object* v_k_4174_){
_start:
{
lean_object* v_res_4175_; 
v_res_4175_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(v_motive_4170_, v_ctorIdx_4171_, v_t_4172_, v_h_4173_, v_k_4174_);
lean_dec(v_ctorIdx_4171_);
return v_res_4175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object* v_t_4176_, lean_object* v_false_4177_){
_start:
{
lean_object* v___x_4178_; 
v___x_4178_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4176_, v_false_4177_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object* v_motive_4179_, lean_object* v_t_4180_, lean_object* v_h_4181_, lean_object* v_false_4182_){
_start:
{
lean_object* v___x_4183_; 
v___x_4183_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4180_, v_false_4182_);
return v___x_4183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object* v_t_4184_, lean_object* v_true_4185_){
_start:
{
lean_object* v___x_4186_; 
v___x_4186_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4184_, v_true_4185_);
return v___x_4186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object* v_motive_4187_, lean_object* v_t_4188_, lean_object* v_h_4189_, lean_object* v_true_4190_){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4188_, v_true_4190_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object* v_t_4192_, lean_object* v_undef_4193_){
_start:
{
lean_object* v___x_4194_; 
v___x_4194_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4192_, v_undef_4193_);
return v___x_4194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object* v_motive_4195_, lean_object* v_t_4196_, lean_object* v_h_4197_, lean_object* v_undef_4198_){
_start:
{
lean_object* v___x_4199_; 
v___x_4199_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4196_, v_undef_4198_);
return v___x_4199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object* v_t_4200_, lean_object* v_bvar_4201_){
_start:
{
lean_object* v___x_4202_; 
v___x_4202_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4200_, v_bvar_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object* v_motive_4203_, lean_object* v_t_4204_, lean_object* v_h_4205_, lean_object* v_bvar_4206_){
_start:
{
lean_object* v___x_4207_; 
v___x_4207_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4204_, v_bvar_4206_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t v_x_4208_){
_start:
{
switch(v_x_4208_)
{
case 0:
{
lean_object* v___x_4209_; 
v___x_4209_ = lean_box(0);
return v___x_4209_;
}
case 1:
{
lean_object* v___x_4210_; 
v___x_4210_ = lean_box(1);
return v___x_4210_;
}
default: 
{
lean_object* v___x_4211_; 
v___x_4211_ = lean_box(2);
return v___x_4211_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object* v_x_4212_){
_start:
{
uint8_t v_x_25__boxed_4213_; lean_object* v_res_4214_; 
v_x_25__boxed_4213_ = lean_unbox(v_x_4212_);
v_res_4214_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v_x_25__boxed_4213_);
return v_res_4214_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object* v_x_4215_){
_start:
{
switch(lean_obj_tag(v_x_4215_))
{
case 0:
{
uint8_t v___x_4216_; 
v___x_4216_ = 0;
return v___x_4216_;
}
case 1:
{
uint8_t v___x_4217_; 
v___x_4217_ = 1;
return v___x_4217_;
}
default: 
{
uint8_t v___x_4218_; 
v___x_4218_ = 2;
return v___x_4218_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object* v_x_4219_){
_start:
{
uint8_t v_res_4220_; lean_object* v_r_4221_; 
v_res_4220_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_x_4219_);
lean_dec(v_x_4219_);
v_r_4221_ = lean_box(v_res_4220_);
return v_r_4221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object* v_e_4223_){
_start:
{
switch(lean_obj_tag(v_e_4223_))
{
case 3:
{
lean_object* v_u_4224_; uint8_t v___x_4225_; 
v_u_4224_ = lean_ctor_get(v_e_4223_, 0);
v___x_4225_ = l_Lean_Level_isNeverZero(v_u_4224_);
if (v___x_4225_ == 0)
{
uint8_t v___x_4226_; 
v___x_4226_ = l_Lean_Level_isZero(v_u_4224_);
if (v___x_4226_ == 0)
{
lean_object* v___x_4227_; 
v___x_4227_ = lean_box(2);
return v___x_4227_;
}
else
{
lean_object* v___x_4228_; 
v___x_4228_ = lean_box(1);
return v___x_4228_;
}
}
else
{
lean_object* v___x_4229_; 
v___x_4229_ = lean_box(0);
return v___x_4229_;
}
}
case 5:
{
lean_object* v_fn_4230_; 
v_fn_4230_ = lean_ctor_get(v_e_4223_, 0);
if (lean_obj_tag(v_fn_4230_) == 4)
{
lean_object* v_declName_4231_; 
v_declName_4231_ = lean_ctor_get(v_fn_4230_, 0);
if (lean_obj_tag(v_declName_4231_) == 1)
{
lean_object* v_pre_4232_; 
v_pre_4232_ = lean_ctor_get(v_declName_4231_, 0);
if (lean_obj_tag(v_pre_4232_) == 0)
{
lean_object* v_arg_4233_; lean_object* v_str_4234_; lean_object* v___x_4235_; uint8_t v___x_4236_; 
v_arg_4233_ = lean_ctor_get(v_e_4223_, 1);
v_str_4234_ = lean_ctor_get(v_declName_4231_, 1);
v___x_4235_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0));
v___x_4236_ = lean_string_dec_eq(v_str_4234_, v___x_4235_);
if (v___x_4236_ == 0)
{
lean_object* v___x_4237_; 
v___x_4237_ = lean_box(2);
return v___x_4237_;
}
else
{
v_e_4223_ = v_arg_4233_;
goto _start;
}
}
else
{
lean_object* v___x_4239_; 
v___x_4239_ = lean_box(2);
return v___x_4239_;
}
}
else
{
lean_object* v___x_4240_; 
v___x_4240_ = lean_box(2);
return v___x_4240_;
}
}
else
{
lean_object* v___x_4241_; 
v___x_4241_ = lean_box(2);
return v___x_4241_;
}
}
default: 
{
lean_object* v___x_4242_; 
v___x_4242_ = lean_box(2);
return v___x_4242_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object* v_e_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_e_4243_);
lean_dec_ref(v_e_4243_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object* v_r_4245_, lean_object* v_binderType_4246_){
_start:
{
if (lean_obj_tag(v_r_4245_) == 3)
{
lean_object* v_idx_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4259_; 
v_idx_4247_ = lean_ctor_get(v_r_4245_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v_r_4245_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4249_ = v_r_4245_;
v_isShared_4250_ = v_isSharedCheck_4259_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_idx_4247_);
lean_dec(v_r_4245_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4259_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v_zero_4251_; uint8_t v_isZero_4252_; 
v_zero_4251_ = lean_unsigned_to_nat(0u);
v_isZero_4252_ = lean_nat_dec_eq(v_idx_4247_, v_zero_4251_);
if (v_isZero_4252_ == 1)
{
lean_object* v___x_4253_; 
lean_del_object(v___x_4249_);
lean_dec(v_idx_4247_);
v___x_4253_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_binderType_4246_);
return v___x_4253_;
}
else
{
lean_object* v_one_4254_; lean_object* v_n_4255_; lean_object* v___x_4257_; 
v_one_4254_ = lean_unsigned_to_nat(1u);
v_n_4255_ = lean_nat_sub(v_idx_4247_, v_one_4254_);
lean_dec(v_idx_4247_);
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v_n_4255_);
v___x_4257_ = v___x_4249_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_n_4255_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
}
}
else
{
return v_r_4245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object* v_r_4260_, lean_object* v_binderType_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_r_4260_, v_binderType_4261_);
lean_dec_ref(v_binderType_4261_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object* v_x_4263_, lean_object* v_x_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_){
_start:
{
lean_object* v_type_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; 
switch(lean_obj_tag(v_x_4263_))
{
case 7:
{
lean_object* v_binderType_4298_; lean_object* v_body_4299_; lean_object* v_zero_4300_; uint8_t v_isZero_4301_; 
v_binderType_4298_ = lean_ctor_get(v_x_4263_, 1);
v_body_4299_ = lean_ctor_get(v_x_4263_, 2);
v_zero_4300_ = lean_unsigned_to_nat(0u);
v_isZero_4301_ = lean_nat_dec_eq(v_x_4264_, v_zero_4300_);
if (v_isZero_4301_ == 1)
{
v_type_4271_ = v_x_4263_;
v___y_4272_ = v___y_4265_;
v___y_4273_ = v___y_4266_;
v___y_4274_ = v___y_4267_;
v___y_4275_ = v___y_4268_;
goto v___jp_4270_;
}
else
{
lean_object* v_one_4302_; lean_object* v_n_4303_; lean_object* v___x_4304_; 
lean_inc_ref(v_body_4299_);
lean_inc_ref(v_binderType_4298_);
lean_dec_ref_known(v_x_4263_, 3);
v_one_4302_ = lean_unsigned_to_nat(1u);
v_n_4303_ = lean_nat_sub(v_x_4264_, v_one_4302_);
v___x_4304_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4299_, v_n_4303_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
lean_dec(v_n_4303_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4313_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4313_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4313_ == 0)
{
v___x_4307_ = v___x_4304_;
v_isShared_4308_ = v_isSharedCheck_4313_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_a_4305_);
lean_dec(v___x_4304_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4313_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4309_; lean_object* v___x_4311_; 
v___x_4309_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4305_, v_binderType_4298_);
lean_dec_ref(v_binderType_4298_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 0, v___x_4309_);
v___x_4311_ = v___x_4307_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v___x_4309_);
v___x_4311_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
return v___x_4311_;
}
}
}
else
{
lean_dec_ref(v_binderType_4298_);
return v___x_4304_;
}
}
}
case 8:
{
lean_object* v_type_4314_; lean_object* v_body_4315_; lean_object* v___x_4316_; 
v_type_4314_ = lean_ctor_get(v_x_4263_, 1);
lean_inc_ref(v_type_4314_);
v_body_4315_ = lean_ctor_get(v_x_4263_, 3);
lean_inc_ref(v_body_4315_);
lean_dec_ref_known(v_x_4263_, 4);
v___x_4316_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4315_, v_x_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4325_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4325_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4325_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4321_; lean_object* v___x_4323_; 
v___x_4321_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4317_, v_type_4314_);
lean_dec_ref(v_type_4314_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set(v___x_4319_, 0, v___x_4321_);
v___x_4323_ = v___x_4319_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v___x_4321_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
else
{
lean_dec_ref(v_type_4314_);
return v___x_4316_;
}
}
case 10:
{
lean_object* v_expr_4326_; 
v_expr_4326_ = lean_ctor_get(v_x_4263_, 1);
lean_inc_ref(v_expr_4326_);
lean_dec_ref_known(v_x_4263_, 2);
v_x_4263_ = v_expr_4326_;
goto _start;
}
case 0:
{
lean_object* v_deBruijnIndex_4328_; lean_object* v___x_4329_; uint8_t v___x_4330_; 
v_deBruijnIndex_4328_ = lean_ctor_get(v_x_4263_, 0);
lean_inc(v_deBruijnIndex_4328_);
lean_dec_ref_known(v_x_4263_, 1);
v___x_4329_ = lean_unsigned_to_nat(0u);
v___x_4330_ = lean_nat_dec_eq(v_x_4264_, v___x_4329_);
if (v___x_4330_ == 0)
{
lean_dec(v_deBruijnIndex_4328_);
goto v___jp_4295_;
}
else
{
lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4331_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4331_, 0, v_deBruijnIndex_4328_);
v___x_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4331_);
return v___x_4332_;
}
}
default: 
{
lean_object* v___x_4333_; uint8_t v___x_4334_; 
v___x_4333_ = lean_unsigned_to_nat(0u);
v___x_4334_ = lean_nat_dec_eq(v_x_4264_, v___x_4333_);
if (v___x_4334_ == 0)
{
lean_dec_ref(v_x_4263_);
goto v___jp_4295_;
}
else
{
v_type_4271_ = v_x_4263_;
v___y_4272_ = v___y_4265_;
v___y_4273_ = v___y_4266_;
v___y_4274_ = v___y_4267_;
v___y_4275_ = v___y_4268_;
goto v___jp_4270_;
}
}
}
v___jp_4270_:
{
lean_object* v___x_4276_; 
v___x_4276_ = l_Lean_Meta_isPropQuick(v_type_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
if (lean_obj_tag(v___x_4276_) == 0)
{
lean_object* v_a_4277_; lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4286_; 
v_a_4277_ = lean_ctor_get(v___x_4276_, 0);
v_isSharedCheck_4286_ = !lean_is_exclusive(v___x_4276_);
if (v_isSharedCheck_4286_ == 0)
{
v___x_4279_ = v___x_4276_;
v_isShared_4280_ = v_isSharedCheck_4286_;
goto v_resetjp_4278_;
}
else
{
lean_inc(v_a_4277_);
lean_dec(v___x_4276_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4286_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
uint8_t v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4284_; 
v___x_4281_ = lean_unbox(v_a_4277_);
lean_dec(v_a_4277_);
v___x_4282_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v___x_4281_);
if (v_isShared_4280_ == 0)
{
lean_ctor_set(v___x_4279_, 0, v___x_4282_);
v___x_4284_ = v___x_4279_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4285_; 
v_reuseFailAlloc_4285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4285_, 0, v___x_4282_);
v___x_4284_ = v_reuseFailAlloc_4285_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
return v___x_4284_;
}
}
}
else
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
v_a_4287_ = lean_ctor_get(v___x_4276_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4276_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4276_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v___x_4276_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
v___jp_4295_:
{
lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4296_ = lean_box(2);
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object* v_x_4335_, lean_object* v_x_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
lean_object* v_res_4342_; 
v_res_4342_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_x_4335_, v_x_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
lean_dec(v___y_4338_);
lean_dec_ref(v___y_4337_);
lean_dec(v_x_4336_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object* v_e_4343_, lean_object* v_n_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_){
_start:
{
lean_object* v___x_4350_; 
v___x_4350_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_e_4343_, v_n_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
if (lean_obj_tag(v___x_4350_) == 0)
{
lean_object* v_a_4351_; lean_object* v___x_4353_; uint8_t v_isShared_4354_; uint8_t v_isSharedCheck_4360_; 
v_a_4351_ = lean_ctor_get(v___x_4350_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4350_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4353_ = v___x_4350_;
v_isShared_4354_ = v_isSharedCheck_4360_;
goto v_resetjp_4352_;
}
else
{
lean_inc(v_a_4351_);
lean_dec(v___x_4350_);
v___x_4353_ = lean_box(0);
v_isShared_4354_ = v_isSharedCheck_4360_;
goto v_resetjp_4352_;
}
v_resetjp_4352_:
{
uint8_t v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4358_; 
v___x_4355_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_a_4351_);
lean_dec(v_a_4351_);
v___x_4356_ = lean_box(v___x_4355_);
if (v_isShared_4354_ == 0)
{
lean_ctor_set(v___x_4353_, 0, v___x_4356_);
v___x_4358_ = v___x_4353_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v___x_4356_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
v_a_4361_ = lean_ctor_get(v___x_4350_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4350_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4350_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4350_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object* v_e_4369_, lean_object* v_n_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
lean_object* v_res_4376_; 
v_res_4376_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_e_4369_, v_n_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec(v___y_4372_);
lean_dec_ref(v___y_4371_);
lean_dec(v_n_4370_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object* v_x_4377_, lean_object* v_x_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
switch(lean_obj_tag(v_x_4377_))
{
case 4:
{
lean_object* v_declName_4384_; lean_object* v_us_4385_; lean_object* v___x_4386_; 
v_declName_4384_ = lean_ctor_get(v_x_4377_, 0);
lean_inc(v_declName_4384_);
v_us_4385_ = lean_ctor_get(v_x_4377_, 1);
lean_inc(v_us_4385_);
lean_dec_ref_known(v_x_4377_, 2);
v___x_4386_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4384_, v_us_4385_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4388_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4386_, 1);
v___x_4388_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4387_, v_x_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v_x_4378_);
return v___x_4388_;
}
else
{
lean_object* v_a_4389_; lean_object* v___x_4391_; uint8_t v_isShared_4392_; uint8_t v_isSharedCheck_4396_; 
lean_dec(v_x_4378_);
v_a_4389_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4396_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4396_ == 0)
{
v___x_4391_ = v___x_4386_;
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
else
{
lean_inc(v_a_4389_);
lean_dec(v___x_4386_);
v___x_4391_ = lean_box(0);
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
v_resetjp_4390_:
{
lean_object* v___x_4394_; 
if (v_isShared_4392_ == 0)
{
v___x_4394_ = v___x_4391_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_a_4389_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4397_; lean_object* v___x_4398_; 
v_fvarId_4397_ = lean_ctor_get(v_x_4377_, 0);
lean_inc(v_fvarId_4397_);
lean_dec_ref_known(v_x_4377_, 1);
v___x_4398_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4397_, v___y_4379_, v___y_4381_, v___y_4382_);
if (lean_obj_tag(v___x_4398_) == 0)
{
lean_object* v_a_4399_; lean_object* v___x_4400_; 
v_a_4399_ = lean_ctor_get(v___x_4398_, 0);
lean_inc(v_a_4399_);
lean_dec_ref_known(v___x_4398_, 1);
v___x_4400_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4399_, v_x_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v_x_4378_);
return v___x_4400_;
}
else
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4408_; 
lean_dec(v_x_4378_);
v_a_4401_ = lean_ctor_get(v___x_4398_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4398_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4403_ = v___x_4398_;
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v___x_4398_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4406_; 
if (v_isShared_4404_ == 0)
{
v___x_4406_ = v___x_4403_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4401_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4409_; lean_object* v___x_4410_; 
v_mvarId_4409_ = lean_ctor_get(v_x_4377_, 0);
lean_inc(v_mvarId_4409_);
lean_dec_ref_known(v_x_4377_, 1);
v___x_4410_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4409_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
if (lean_obj_tag(v___x_4410_) == 0)
{
lean_object* v_a_4411_; lean_object* v___x_4412_; 
v_a_4411_ = lean_ctor_get(v___x_4410_, 0);
lean_inc(v_a_4411_);
lean_dec_ref_known(v___x_4410_, 1);
v___x_4412_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4411_, v_x_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v_x_4378_);
return v___x_4412_;
}
else
{
lean_object* v_a_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4420_; 
lean_dec(v_x_4378_);
v_a_4413_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4420_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4420_ == 0)
{
v___x_4415_ = v___x_4410_;
v_isShared_4416_ = v_isSharedCheck_4420_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_a_4413_);
lean_dec(v___x_4410_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4420_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___x_4418_; 
if (v_isShared_4416_ == 0)
{
v___x_4418_ = v___x_4415_;
goto v_reusejp_4417_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v_a_4413_);
v___x_4418_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4417_;
}
v_reusejp_4417_:
{
return v___x_4418_;
}
}
}
}
case 5:
{
lean_object* v_fn_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v_fn_4421_ = lean_ctor_get(v_x_4377_, 0);
lean_inc_ref(v_fn_4421_);
lean_dec_ref_known(v_x_4377_, 2);
v___x_4422_ = lean_unsigned_to_nat(1u);
v___x_4423_ = lean_nat_add(v_x_4378_, v___x_4422_);
lean_dec(v_x_4378_);
v_x_4377_ = v_fn_4421_;
v_x_4378_ = v___x_4423_;
goto _start;
}
case 10:
{
lean_object* v_expr_4425_; 
v_expr_4425_ = lean_ctor_get(v_x_4377_, 1);
lean_inc_ref(v_expr_4425_);
lean_dec_ref_known(v_x_4377_, 2);
v_x_4377_ = v_expr_4425_;
goto _start;
}
case 8:
{
lean_object* v_body_4427_; 
v_body_4427_ = lean_ctor_get(v_x_4377_, 3);
lean_inc_ref(v_body_4427_);
lean_dec_ref_known(v_x_4377_, 4);
v_x_4377_ = v_body_4427_;
goto _start;
}
case 6:
{
lean_object* v_body_4429_; lean_object* v_zero_4430_; uint8_t v_isZero_4431_; 
v_body_4429_ = lean_ctor_get(v_x_4377_, 2);
lean_inc_ref(v_body_4429_);
lean_dec_ref_known(v_x_4377_, 3);
v_zero_4430_ = lean_unsigned_to_nat(0u);
v_isZero_4431_ = lean_nat_dec_eq(v_x_4378_, v_zero_4430_);
if (v_isZero_4431_ == 1)
{
lean_object* v___x_4432_; 
lean_dec(v_x_4378_);
v___x_4432_ = l_Lean_Meta_isProofQuick(v_body_4429_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
return v___x_4432_;
}
else
{
lean_object* v_one_4433_; lean_object* v_n_4434_; 
v_one_4433_ = lean_unsigned_to_nat(1u);
v_n_4434_ = lean_nat_sub(v_x_4378_, v_one_4433_);
lean_dec(v_x_4378_);
v_x_4377_ = v_body_4429_;
v_x_4378_ = v_n_4434_;
goto _start;
}
}
default: 
{
uint8_t v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
lean_dec(v_x_4378_);
lean_dec_ref(v_x_4377_);
v___x_4436_ = 2;
v___x_4437_ = lean_box(v___x_4436_);
v___x_4438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4437_);
return v___x_4438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object* v_x_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
switch(lean_obj_tag(v_x_4439_))
{
case 0:
{
uint8_t v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
lean_dec_ref_known(v_x_4439_, 1);
v___x_4445_ = 2;
v___x_4446_ = lean_box(v___x_4445_);
v___x_4447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
return v___x_4447_;
}
case 1:
{
lean_object* v_fvarId_4448_; lean_object* v___x_4449_; 
v_fvarId_4448_ = lean_ctor_get(v_x_4439_, 0);
lean_inc(v_fvarId_4448_);
lean_dec_ref_known(v_x_4439_, 1);
v___x_4449_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4448_, v___y_4440_, v___y_4442_, v___y_4443_);
if (lean_obj_tag(v___x_4449_) == 0)
{
lean_object* v_a_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; 
v_a_4450_ = lean_ctor_get(v___x_4449_, 0);
lean_inc(v_a_4450_);
lean_dec_ref_known(v___x_4449_, 1);
v___x_4451_ = lean_unsigned_to_nat(0u);
v___x_4452_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4450_, v___x_4451_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
return v___x_4452_;
}
else
{
lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
v_a_4453_ = lean_ctor_get(v___x_4449_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4449_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4455_ = v___x_4449_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4449_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4461_; lean_object* v___x_4462_; 
v_mvarId_4461_ = lean_ctor_get(v_x_4439_, 0);
lean_inc(v_mvarId_4461_);
lean_dec_ref_known(v_x_4439_, 1);
v___x_4462_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4461_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
if (lean_obj_tag(v___x_4462_) == 0)
{
lean_object* v_a_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; 
v_a_4463_ = lean_ctor_get(v___x_4462_, 0);
lean_inc(v_a_4463_);
lean_dec_ref_known(v___x_4462_, 1);
v___x_4464_ = lean_unsigned_to_nat(0u);
v___x_4465_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4463_, v___x_4464_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
return v___x_4465_;
}
else
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4473_; 
v_a_4466_ = lean_ctor_get(v___x_4462_, 0);
v_isSharedCheck_4473_ = !lean_is_exclusive(v___x_4462_);
if (v_isSharedCheck_4473_ == 0)
{
v___x_4468_ = v___x_4462_;
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4462_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4471_; 
if (v_isShared_4469_ == 0)
{
v___x_4471_ = v___x_4468_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v_a_4466_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
}
}
case 4:
{
lean_object* v_declName_4474_; lean_object* v_us_4475_; lean_object* v___x_4476_; 
v_declName_4474_ = lean_ctor_get(v_x_4439_, 0);
lean_inc(v_declName_4474_);
v_us_4475_ = lean_ctor_get(v_x_4439_, 1);
lean_inc(v_us_4475_);
lean_dec_ref_known(v_x_4439_, 2);
v___x_4476_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4474_, v_us_4475_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
if (lean_obj_tag(v___x_4476_) == 0)
{
lean_object* v_a_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
v_a_4477_ = lean_ctor_get(v___x_4476_, 0);
lean_inc(v_a_4477_);
lean_dec_ref_known(v___x_4476_, 1);
v___x_4478_ = lean_unsigned_to_nat(0u);
v___x_4479_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4477_, v___x_4478_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
return v___x_4479_;
}
else
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4487_; 
v_a_4480_ = lean_ctor_get(v___x_4476_, 0);
v_isSharedCheck_4487_ = !lean_is_exclusive(v___x_4476_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4482_ = v___x_4476_;
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4476_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4485_; 
if (v_isShared_4483_ == 0)
{
v___x_4485_ = v___x_4482_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v_a_4480_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
}
}
case 5:
{
lean_object* v_fn_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v_fn_4488_ = lean_ctor_get(v_x_4439_, 0);
lean_inc_ref(v_fn_4488_);
lean_dec_ref_known(v_x_4439_, 2);
v___x_4489_ = lean_unsigned_to_nat(1u);
v___x_4490_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_fn_4488_, v___x_4489_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
return v___x_4490_;
}
case 6:
{
lean_object* v_body_4491_; 
v_body_4491_ = lean_ctor_get(v_x_4439_, 2);
lean_inc_ref(v_body_4491_);
lean_dec_ref_known(v_x_4439_, 3);
v_x_4439_ = v_body_4491_;
goto _start;
}
case 8:
{
lean_object* v_body_4493_; 
v_body_4493_ = lean_ctor_get(v_x_4439_, 3);
lean_inc_ref(v_body_4493_);
lean_dec_ref_known(v_x_4439_, 4);
v_x_4439_ = v_body_4493_;
goto _start;
}
case 10:
{
lean_object* v_expr_4495_; 
v_expr_4495_ = lean_ctor_get(v_x_4439_, 1);
lean_inc_ref(v_expr_4495_);
lean_dec_ref_known(v_x_4439_, 2);
v_x_4439_ = v_expr_4495_;
goto _start;
}
case 11:
{
uint8_t v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
lean_dec_ref_known(v_x_4439_, 3);
v___x_4497_ = 2;
v___x_4498_ = lean_box(v___x_4497_);
v___x_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
return v___x_4499_;
}
default: 
{
uint8_t v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
lean_dec_ref(v_x_4439_);
v___x_4500_ = 0;
v___x_4501_ = lean_box(v___x_4500_);
v___x_4502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4501_);
return v___x_4502_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object* v_x_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_){
_start:
{
lean_object* v_res_4509_; 
v_res_4509_ = l_Lean_Meta_isProofQuick(v_x_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
return v_res_4509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object* v_x_4510_, lean_object* v_x_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_){
_start:
{
lean_object* v_res_4517_; 
v_res_4517_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_x_4510_, v_x_4511_, v___y_4512_, v___y_4513_, v___y_4514_, v___y_4515_);
lean_dec(v___y_4515_);
lean_dec_ref(v___y_4514_);
lean_dec(v___y_4513_);
lean_dec_ref(v___y_4512_);
return v_res_4517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object* v_e_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_){
_start:
{
lean_object* v___x_4524_; 
lean_inc_ref(v_e_4518_);
v___x_4524_ = l_Lean_Meta_isProofQuick(v_e_4518_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_);
if (lean_obj_tag(v___x_4524_) == 0)
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4551_; 
v_a_4525_ = lean_ctor_get(v___x_4524_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4527_ = v___x_4524_;
v_isShared_4528_ = v_isSharedCheck_4551_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4524_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4551_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
uint8_t v___x_4529_; 
v___x_4529_ = lean_unbox(v_a_4525_);
lean_dec(v_a_4525_);
switch(v___x_4529_)
{
case 0:
{
uint8_t v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4533_; 
lean_dec_ref(v_e_4518_);
v___x_4530_ = 0;
v___x_4531_ = lean_box(v___x_4530_);
if (v_isShared_4528_ == 0)
{
lean_ctor_set(v___x_4527_, 0, v___x_4531_);
v___x_4533_ = v___x_4527_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v___x_4531_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
case 1:
{
uint8_t v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4538_; 
lean_dec_ref(v_e_4518_);
v___x_4535_ = 1;
v___x_4536_ = lean_box(v___x_4535_);
if (v_isShared_4528_ == 0)
{
lean_ctor_set(v___x_4527_, 0, v___x_4536_);
v___x_4538_ = v___x_4527_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v___x_4536_);
v___x_4538_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
return v___x_4538_;
}
}
default: 
{
lean_object* v___x_4540_; 
lean_del_object(v___x_4527_);
lean_inc(v___y_4522_);
lean_inc_ref(v___y_4521_);
lean_inc(v___y_4520_);
lean_inc_ref(v___y_4519_);
v___x_4540_ = lean_infer_type(v_e_4518_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_);
if (lean_obj_tag(v___x_4540_) == 0)
{
lean_object* v_a_4541_; lean_object* v___x_4542_; 
v_a_4541_ = lean_ctor_get(v___x_4540_, 0);
lean_inc(v_a_4541_);
lean_dec_ref_known(v___x_4540_, 1);
v___x_4542_ = l_Lean_Meta_isProp(v_a_4541_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_);
return v___x_4542_;
}
else
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
v_a_4543_ = lean_ctor_get(v___x_4540_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4540_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4540_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4540_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_a_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
return v___x_4548_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
lean_dec_ref(v_e_4518_);
v_a_4552_ = lean_ctor_get(v___x_4524_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4554_ = v___x_4524_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4524_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4557_; 
if (v_isShared_4555_ == 0)
{
v___x_4557_ = v___x_4554_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4552_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object* v_e_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_){
_start:
{
lean_object* v_res_4566_; 
v_res_4566_ = l_Lean_Meta_isProof(v_e_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object* v_x_4567_, lean_object* v_x_4568_){
_start:
{
switch(lean_obj_tag(v_x_4567_))
{
case 3:
{
lean_object* v___x_4574_; uint8_t v___x_4575_; 
v___x_4574_ = lean_unsigned_to_nat(0u);
v___x_4575_ = lean_nat_dec_eq(v_x_4568_, v___x_4574_);
lean_dec(v_x_4568_);
if (v___x_4575_ == 0)
{
goto v___jp_4570_;
}
else
{
uint8_t v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4576_ = 1;
v___x_4577_ = lean_box(v___x_4576_);
v___x_4578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4578_, 0, v___x_4577_);
return v___x_4578_;
}
}
case 7:
{
lean_object* v_body_4579_; lean_object* v_zero_4580_; uint8_t v_isZero_4581_; 
v_body_4579_ = lean_ctor_get(v_x_4567_, 2);
v_zero_4580_ = lean_unsigned_to_nat(0u);
v_isZero_4581_ = lean_nat_dec_eq(v_x_4568_, v_zero_4580_);
if (v_isZero_4581_ == 1)
{
uint8_t v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
lean_dec(v_x_4568_);
v___x_4582_ = 0;
v___x_4583_ = lean_box(v___x_4582_);
v___x_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4584_, 0, v___x_4583_);
return v___x_4584_;
}
else
{
lean_object* v_one_4585_; lean_object* v_n_4586_; 
v_one_4585_ = lean_unsigned_to_nat(1u);
v_n_4586_ = lean_nat_sub(v_x_4568_, v_one_4585_);
lean_dec(v_x_4568_);
v_x_4567_ = v_body_4579_;
v_x_4568_ = v_n_4586_;
goto _start;
}
}
case 8:
{
lean_object* v_body_4588_; 
v_body_4588_ = lean_ctor_get(v_x_4567_, 3);
v_x_4567_ = v_body_4588_;
goto _start;
}
case 10:
{
lean_object* v_expr_4590_; 
v_expr_4590_ = lean_ctor_get(v_x_4567_, 1);
v_x_4567_ = v_expr_4590_;
goto _start;
}
default: 
{
lean_dec(v_x_4568_);
goto v___jp_4570_;
}
}
v___jp_4570_:
{
uint8_t v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4571_ = 2;
v___x_4572_ = lean_box(v___x_4571_);
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
return v___x_4573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object* v_x_4592_, lean_object* v_x_4593_, lean_object* v___y_4594_){
_start:
{
lean_object* v_res_4595_; 
v_res_4595_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4592_, v_x_4593_);
lean_dec_ref(v_x_4592_);
return v_res_4595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object* v_x_4596_, lean_object* v_x_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_){
_start:
{
lean_object* v___x_4603_; 
v___x_4603_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4596_, v_x_4597_);
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object* v_x_4604_, lean_object* v_x_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v_res_4611_; 
v_res_4611_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(v_x_4604_, v_x_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_);
lean_dec(v___y_4609_);
lean_dec_ref(v___y_4608_);
lean_dec(v___y_4607_);
lean_dec_ref(v___y_4606_);
lean_dec_ref(v_x_4604_);
return v_res_4611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object* v_x_4612_, lean_object* v_x_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
switch(lean_obj_tag(v_x_4612_))
{
case 4:
{
lean_object* v_declName_4619_; lean_object* v_us_4620_; lean_object* v___x_4621_; 
v_declName_4619_ = lean_ctor_get(v_x_4612_, 0);
lean_inc(v_declName_4619_);
v_us_4620_ = lean_ctor_get(v_x_4612_, 1);
lean_inc(v_us_4620_);
lean_dec_ref_known(v_x_4612_, 2);
v___x_4621_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4619_, v_us_4620_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
if (lean_obj_tag(v___x_4621_) == 0)
{
lean_object* v_a_4622_; lean_object* v___x_4623_; 
v_a_4622_ = lean_ctor_get(v___x_4621_, 0);
lean_inc(v_a_4622_);
lean_dec_ref_known(v___x_4621_, 1);
v___x_4623_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4622_, v_x_4613_);
lean_dec(v_a_4622_);
return v___x_4623_;
}
else
{
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4631_; 
lean_dec(v_x_4613_);
v_a_4624_ = lean_ctor_get(v___x_4621_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4621_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4626_ = v___x_4621_;
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4621_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4629_; 
if (v_isShared_4627_ == 0)
{
v___x_4629_ = v___x_4626_;
goto v_reusejp_4628_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4624_);
v___x_4629_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4628_;
}
v_reusejp_4628_:
{
return v___x_4629_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4632_; lean_object* v___x_4633_; 
v_fvarId_4632_ = lean_ctor_get(v_x_4612_, 0);
lean_inc(v_fvarId_4632_);
lean_dec_ref_known(v_x_4612_, 1);
v___x_4633_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4632_, v___y_4614_, v___y_4616_, v___y_4617_);
if (lean_obj_tag(v___x_4633_) == 0)
{
lean_object* v_a_4634_; lean_object* v___x_4635_; 
v_a_4634_ = lean_ctor_get(v___x_4633_, 0);
lean_inc(v_a_4634_);
lean_dec_ref_known(v___x_4633_, 1);
v___x_4635_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4634_, v_x_4613_);
lean_dec(v_a_4634_);
return v___x_4635_;
}
else
{
lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4643_; 
lean_dec(v_x_4613_);
v_a_4636_ = lean_ctor_get(v___x_4633_, 0);
v_isSharedCheck_4643_ = !lean_is_exclusive(v___x_4633_);
if (v_isSharedCheck_4643_ == 0)
{
v___x_4638_ = v___x_4633_;
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4633_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4641_; 
if (v_isShared_4639_ == 0)
{
v___x_4641_ = v___x_4638_;
goto v_reusejp_4640_;
}
else
{
lean_object* v_reuseFailAlloc_4642_; 
v_reuseFailAlloc_4642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4642_, 0, v_a_4636_);
v___x_4641_ = v_reuseFailAlloc_4642_;
goto v_reusejp_4640_;
}
v_reusejp_4640_:
{
return v___x_4641_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4644_; lean_object* v___x_4645_; 
v_mvarId_4644_ = lean_ctor_get(v_x_4612_, 0);
lean_inc(v_mvarId_4644_);
lean_dec_ref_known(v_x_4612_, 1);
v___x_4645_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4644_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
if (lean_obj_tag(v___x_4645_) == 0)
{
lean_object* v_a_4646_; lean_object* v___x_4647_; 
v_a_4646_ = lean_ctor_get(v___x_4645_, 0);
lean_inc(v_a_4646_);
lean_dec_ref_known(v___x_4645_, 1);
v___x_4647_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4646_, v_x_4613_);
lean_dec(v_a_4646_);
return v___x_4647_;
}
else
{
lean_object* v_a_4648_; lean_object* v___x_4650_; uint8_t v_isShared_4651_; uint8_t v_isSharedCheck_4655_; 
lean_dec(v_x_4613_);
v_a_4648_ = lean_ctor_get(v___x_4645_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v___x_4645_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4650_ = v___x_4645_;
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
else
{
lean_inc(v_a_4648_);
lean_dec(v___x_4645_);
v___x_4650_ = lean_box(0);
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
v_resetjp_4649_:
{
lean_object* v___x_4653_; 
if (v_isShared_4651_ == 0)
{
v___x_4653_ = v___x_4650_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_a_4648_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
return v___x_4653_;
}
}
}
}
case 5:
{
lean_object* v_fn_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; 
v_fn_4656_ = lean_ctor_get(v_x_4612_, 0);
lean_inc_ref(v_fn_4656_);
lean_dec_ref_known(v_x_4612_, 2);
v___x_4657_ = lean_unsigned_to_nat(1u);
v___x_4658_ = lean_nat_add(v_x_4613_, v___x_4657_);
lean_dec(v_x_4613_);
v_x_4612_ = v_fn_4656_;
v_x_4613_ = v___x_4658_;
goto _start;
}
case 10:
{
lean_object* v_expr_4660_; 
v_expr_4660_ = lean_ctor_get(v_x_4612_, 1);
lean_inc_ref(v_expr_4660_);
lean_dec_ref_known(v_x_4612_, 2);
v_x_4612_ = v_expr_4660_;
goto _start;
}
case 8:
{
lean_object* v_body_4662_; 
v_body_4662_ = lean_ctor_get(v_x_4612_, 3);
lean_inc_ref(v_body_4662_);
lean_dec_ref_known(v_x_4612_, 4);
v_x_4612_ = v_body_4662_;
goto _start;
}
case 6:
{
lean_object* v_body_4664_; lean_object* v_zero_4665_; uint8_t v_isZero_4666_; 
v_body_4664_ = lean_ctor_get(v_x_4612_, 2);
lean_inc_ref(v_body_4664_);
lean_dec_ref_known(v_x_4612_, 3);
v_zero_4665_ = lean_unsigned_to_nat(0u);
v_isZero_4666_ = lean_nat_dec_eq(v_x_4613_, v_zero_4665_);
if (v_isZero_4666_ == 1)
{
uint8_t v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; 
lean_dec_ref(v_body_4664_);
lean_dec(v_x_4613_);
v___x_4667_ = 0;
v___x_4668_ = lean_box(v___x_4667_);
v___x_4669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4668_);
return v___x_4669_;
}
else
{
lean_object* v_one_4670_; lean_object* v_n_4671_; 
v_one_4670_ = lean_unsigned_to_nat(1u);
v_n_4671_ = lean_nat_sub(v_x_4613_, v_one_4670_);
lean_dec(v_x_4613_);
v_x_4612_ = v_body_4664_;
v_x_4613_ = v_n_4671_;
goto _start;
}
}
default: 
{
uint8_t v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; 
lean_dec(v_x_4613_);
lean_dec_ref(v_x_4612_);
v___x_4673_ = 2;
v___x_4674_ = lean_box(v___x_4673_);
v___x_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
return v___x_4675_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object* v_x_4676_, lean_object* v_x_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_){
_start:
{
lean_object* v_res_4683_; 
v_res_4683_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_x_4676_, v_x_4677_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_);
lean_dec(v___y_4681_);
lean_dec_ref(v___y_4680_);
lean_dec(v___y_4679_);
lean_dec_ref(v___y_4678_);
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object* v_x_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_){
_start:
{
switch(lean_obj_tag(v_x_4684_))
{
case 1:
{
lean_object* v_fvarId_4690_; lean_object* v___x_4691_; 
v_fvarId_4690_ = lean_ctor_get(v_x_4684_, 0);
lean_inc(v_fvarId_4690_);
lean_dec_ref_known(v_x_4684_, 1);
v___x_4691_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4690_, v___y_4685_, v___y_4687_, v___y_4688_);
if (lean_obj_tag(v___x_4691_) == 0)
{
lean_object* v_a_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v_a_4692_ = lean_ctor_get(v___x_4691_, 0);
lean_inc(v_a_4692_);
lean_dec_ref_known(v___x_4691_, 1);
v___x_4693_ = lean_unsigned_to_nat(0u);
v___x_4694_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4692_, v___x_4693_);
lean_dec(v_a_4692_);
return v___x_4694_;
}
else
{
lean_object* v_a_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4702_; 
v_a_4695_ = lean_ctor_get(v___x_4691_, 0);
v_isSharedCheck_4702_ = !lean_is_exclusive(v___x_4691_);
if (v_isSharedCheck_4702_ == 0)
{
v___x_4697_ = v___x_4691_;
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_a_4695_);
lean_dec(v___x_4691_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
lean_object* v___x_4700_; 
if (v_isShared_4698_ == 0)
{
v___x_4700_ = v___x_4697_;
goto v_reusejp_4699_;
}
else
{
lean_object* v_reuseFailAlloc_4701_; 
v_reuseFailAlloc_4701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4701_, 0, v_a_4695_);
v___x_4700_ = v_reuseFailAlloc_4701_;
goto v_reusejp_4699_;
}
v_reusejp_4699_:
{
return v___x_4700_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4703_; lean_object* v___x_4704_; 
v_mvarId_4703_ = lean_ctor_get(v_x_4684_, 0);
lean_inc(v_mvarId_4703_);
lean_dec_ref_known(v_x_4684_, 1);
v___x_4704_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4703_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4705_);
lean_dec_ref_known(v___x_4704_, 1);
v___x_4706_ = lean_unsigned_to_nat(0u);
v___x_4707_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4705_, v___x_4706_);
lean_dec(v_a_4705_);
return v___x_4707_;
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4715_; 
v_a_4708_ = lean_ctor_get(v___x_4704_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4704_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4710_ = v___x_4704_;
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4704_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4713_; 
if (v_isShared_4711_ == 0)
{
v___x_4713_ = v___x_4710_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4708_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
return v___x_4713_;
}
}
}
}
case 3:
{
uint8_t v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; 
lean_dec_ref_known(v_x_4684_, 1);
v___x_4716_ = 1;
v___x_4717_ = lean_box(v___x_4716_);
v___x_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4718_, 0, v___x_4717_);
return v___x_4718_;
}
case 4:
{
lean_object* v_declName_4719_; lean_object* v_us_4720_; lean_object* v___x_4721_; 
v_declName_4719_ = lean_ctor_get(v_x_4684_, 0);
lean_inc(v_declName_4719_);
v_us_4720_ = lean_ctor_get(v_x_4684_, 1);
lean_inc(v_us_4720_);
lean_dec_ref_known(v_x_4684_, 2);
v___x_4721_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4719_, v_us_4720_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_);
if (lean_obj_tag(v___x_4721_) == 0)
{
lean_object* v_a_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; 
v_a_4722_ = lean_ctor_get(v___x_4721_, 0);
lean_inc(v_a_4722_);
lean_dec_ref_known(v___x_4721_, 1);
v___x_4723_ = lean_unsigned_to_nat(0u);
v___x_4724_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4722_, v___x_4723_);
lean_dec(v_a_4722_);
return v___x_4724_;
}
else
{
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4732_; 
v_a_4725_ = lean_ctor_get(v___x_4721_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4721_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4727_ = v___x_4721_;
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4721_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4730_; 
if (v_isShared_4728_ == 0)
{
v___x_4730_ = v___x_4727_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_a_4725_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
}
case 5:
{
lean_object* v_fn_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; 
v_fn_4733_ = lean_ctor_get(v_x_4684_, 0);
lean_inc_ref(v_fn_4733_);
lean_dec_ref_known(v_x_4684_, 2);
v___x_4734_ = lean_unsigned_to_nat(1u);
v___x_4735_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_fn_4733_, v___x_4734_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_);
return v___x_4735_;
}
case 6:
{
uint8_t v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
lean_dec_ref_known(v_x_4684_, 3);
v___x_4736_ = 0;
v___x_4737_ = lean_box(v___x_4736_);
v___x_4738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4738_, 0, v___x_4737_);
return v___x_4738_;
}
case 7:
{
uint8_t v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; 
lean_dec_ref_known(v_x_4684_, 3);
v___x_4739_ = 1;
v___x_4740_ = lean_box(v___x_4739_);
v___x_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4740_);
return v___x_4741_;
}
case 8:
{
lean_object* v_body_4742_; 
v_body_4742_ = lean_ctor_get(v_x_4684_, 3);
lean_inc_ref(v_body_4742_);
lean_dec_ref_known(v_x_4684_, 4);
v_x_4684_ = v_body_4742_;
goto _start;
}
case 9:
{
uint8_t v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
lean_dec_ref_known(v_x_4684_, 1);
v___x_4744_ = 0;
v___x_4745_ = lean_box(v___x_4744_);
v___x_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4746_, 0, v___x_4745_);
return v___x_4746_;
}
case 10:
{
lean_object* v_expr_4747_; 
v_expr_4747_ = lean_ctor_get(v_x_4684_, 1);
lean_inc_ref(v_expr_4747_);
lean_dec_ref_known(v_x_4684_, 2);
v_x_4684_ = v_expr_4747_;
goto _start;
}
default: 
{
uint8_t v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; 
lean_dec_ref(v_x_4684_);
v___x_4749_ = 2;
v___x_4750_ = lean_box(v___x_4749_);
v___x_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4750_);
return v___x_4751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object* v_x_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
lean_object* v_res_4758_; 
v_res_4758_ = l_Lean_Meta_isTypeQuick(v_x_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_);
lean_dec(v___y_4756_);
lean_dec_ref(v___y_4755_);
lean_dec(v___y_4754_);
lean_dec_ref(v___y_4753_);
return v_res_4758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object* v_e_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_){
_start:
{
lean_object* v___x_4765_; 
lean_inc_ref(v_e_4759_);
v___x_4765_ = l_Lean_Meta_isTypeQuick(v_e_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
if (lean_obj_tag(v___x_4765_) == 0)
{
lean_object* v_a_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4815_; 
v_a_4766_ = lean_ctor_get(v___x_4765_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4765_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4768_ = v___x_4765_;
v_isShared_4769_ = v_isSharedCheck_4815_;
goto v_resetjp_4767_;
}
else
{
lean_inc(v_a_4766_);
lean_dec(v___x_4765_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4815_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
uint8_t v___x_4770_; 
v___x_4770_ = lean_unbox(v_a_4766_);
lean_dec(v_a_4766_);
switch(v___x_4770_)
{
case 0:
{
uint8_t v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4774_; 
lean_dec_ref(v_e_4759_);
v___x_4771_ = 0;
v___x_4772_ = lean_box(v___x_4771_);
if (v_isShared_4769_ == 0)
{
lean_ctor_set(v___x_4768_, 0, v___x_4772_);
v___x_4774_ = v___x_4768_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v___x_4772_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
case 1:
{
uint8_t v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4779_; 
lean_dec_ref(v_e_4759_);
v___x_4776_ = 1;
v___x_4777_ = lean_box(v___x_4776_);
if (v_isShared_4769_ == 0)
{
lean_ctor_set(v___x_4768_, 0, v___x_4777_);
v___x_4779_ = v___x_4768_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4780_; 
v_reuseFailAlloc_4780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4780_, 0, v___x_4777_);
v___x_4779_ = v_reuseFailAlloc_4780_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
return v___x_4779_;
}
}
default: 
{
lean_object* v___x_4781_; 
lean_del_object(v___x_4768_);
lean_inc(v___y_4763_);
lean_inc_ref(v___y_4762_);
lean_inc(v___y_4761_);
lean_inc_ref(v___y_4760_);
v___x_4781_ = lean_infer_type(v_e_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v___x_4783_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v___x_4783_ = l_Lean_Meta_whnfD(v_a_4782_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
if (lean_obj_tag(v___x_4783_) == 0)
{
lean_object* v_a_4784_; lean_object* v___x_4786_; uint8_t v_isShared_4787_; uint8_t v_isSharedCheck_4798_; 
v_a_4784_ = lean_ctor_get(v___x_4783_, 0);
v_isSharedCheck_4798_ = !lean_is_exclusive(v___x_4783_);
if (v_isSharedCheck_4798_ == 0)
{
v___x_4786_ = v___x_4783_;
v_isShared_4787_ = v_isSharedCheck_4798_;
goto v_resetjp_4785_;
}
else
{
lean_inc(v_a_4784_);
lean_dec(v___x_4783_);
v___x_4786_ = lean_box(0);
v_isShared_4787_ = v_isSharedCheck_4798_;
goto v_resetjp_4785_;
}
v_resetjp_4785_:
{
if (lean_obj_tag(v_a_4784_) == 3)
{
uint8_t v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4791_; 
lean_dec_ref_known(v_a_4784_, 1);
v___x_4788_ = 1;
v___x_4789_ = lean_box(v___x_4788_);
if (v_isShared_4787_ == 0)
{
lean_ctor_set(v___x_4786_, 0, v___x_4789_);
v___x_4791_ = v___x_4786_;
goto v_reusejp_4790_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v___x_4789_);
v___x_4791_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4790_;
}
v_reusejp_4790_:
{
return v___x_4791_;
}
}
else
{
uint8_t v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4796_; 
lean_dec(v_a_4784_);
v___x_4793_ = 0;
v___x_4794_ = lean_box(v___x_4793_);
if (v_isShared_4787_ == 0)
{
lean_ctor_set(v___x_4786_, 0, v___x_4794_);
v___x_4796_ = v___x_4786_;
goto v_reusejp_4795_;
}
else
{
lean_object* v_reuseFailAlloc_4797_; 
v_reuseFailAlloc_4797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4797_, 0, v___x_4794_);
v___x_4796_ = v_reuseFailAlloc_4797_;
goto v_reusejp_4795_;
}
v_reusejp_4795_:
{
return v___x_4796_;
}
}
}
}
else
{
lean_object* v_a_4799_; lean_object* v___x_4801_; uint8_t v_isShared_4802_; uint8_t v_isSharedCheck_4806_; 
v_a_4799_ = lean_ctor_get(v___x_4783_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v___x_4783_);
if (v_isSharedCheck_4806_ == 0)
{
v___x_4801_ = v___x_4783_;
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
else
{
lean_inc(v_a_4799_);
lean_dec(v___x_4783_);
v___x_4801_ = lean_box(0);
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
v_resetjp_4800_:
{
lean_object* v___x_4804_; 
if (v_isShared_4802_ == 0)
{
v___x_4804_ = v___x_4801_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v_a_4799_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
}
}
else
{
lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4814_; 
v_a_4807_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4809_ = v___x_4781_;
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4781_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4812_; 
if (v_isShared_4810_ == 0)
{
v___x_4812_ = v___x_4809_;
goto v_reusejp_4811_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_a_4807_);
v___x_4812_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4811_;
}
v_reusejp_4811_:
{
return v___x_4812_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4823_; 
lean_dec_ref(v_e_4759_);
v_a_4816_ = lean_ctor_get(v___x_4765_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4765_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4818_ = v___x_4765_;
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4765_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4821_; 
if (v_isShared_4819_ == 0)
{
v___x_4821_ = v___x_4818_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_a_4816_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
return v___x_4821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object* v_e_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_){
_start:
{
lean_object* v_res_4830_; 
v_res_4830_ = l_Lean_Meta_isType(v_e_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_);
lean_dec(v___y_4828_);
lean_dec_ref(v___y_4827_);
lean_dec(v___y_4826_);
lean_dec_ref(v___y_4825_);
return v_res_4830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object* v_x_4831_){
_start:
{
switch(lean_obj_tag(v_x_4831_))
{
case 7:
{
lean_object* v_body_4832_; 
v_body_4832_ = lean_ctor_get(v_x_4831_, 2);
v_x_4831_ = v_body_4832_;
goto _start;
}
case 3:
{
lean_object* v_u_4834_; lean_object* v___x_4835_; 
v_u_4834_ = lean_ctor_get(v_x_4831_, 0);
lean_inc(v_u_4834_);
v___x_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4835_, 0, v_u_4834_);
return v___x_4835_;
}
default: 
{
lean_object* v___x_4836_; 
v___x_4836_ = lean_box(0);
return v___x_4836_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object* v_x_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_x_4837_);
lean_dec_ref(v_x_4837_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object* v_xs_4839_, lean_object* v_body_4840_, lean_object* v_x_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_){
_start:
{
lean_object* v_res_4847_; 
v_res_4847_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(v_xs_4839_, v_body_4840_, v_x_4841_, v___y_4842_, v___y_4843_, v___y_4844_, v___y_4845_);
lean_dec(v___y_4845_);
lean_dec_ref(v___y_4844_);
lean_dec(v___y_4843_);
lean_dec_ref(v___y_4842_);
return v_res_4847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object* v_type_4850_, lean_object* v_xs_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_){
_start:
{
lean_object* v_l_4858_; 
switch(lean_obj_tag(v_type_4850_))
{
case 3:
{
lean_object* v_u_4861_; 
lean_dec_ref(v_xs_4851_);
v_u_4861_ = lean_ctor_get(v_type_4850_, 0);
lean_inc(v_u_4861_);
lean_dec_ref_known(v_type_4850_, 1);
v_l_4858_ = v_u_4861_;
goto v___jp_4857_;
}
case 7:
{
lean_object* v_binderName_4862_; lean_object* v_binderType_4863_; lean_object* v_body_4864_; uint8_t v_binderInfo_4865_; lean_object* v___f_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v_binderName_4862_ = lean_ctor_get(v_type_4850_, 0);
lean_inc(v_binderName_4862_);
v_binderType_4863_ = lean_ctor_get(v_type_4850_, 1);
lean_inc_ref(v_binderType_4863_);
v_body_4864_ = lean_ctor_get(v_type_4850_, 2);
lean_inc_ref(v_body_4864_);
v_binderInfo_4865_ = lean_ctor_get_uint8(v_type_4850_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_4850_, 3);
lean_inc_ref(v_xs_4851_);
v___f_4866_ = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4866_, 0, v_xs_4851_);
lean_closure_set(v___f_4866_, 1, v_body_4864_);
v___x_4867_ = lean_expr_instantiate_rev(v_binderType_4863_, v_xs_4851_);
lean_dec_ref(v_xs_4851_);
lean_dec_ref(v_binderType_4863_);
v___x_4868_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_4862_, v_binderInfo_4865_, v___x_4867_, v___f_4866_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_);
return v___x_4868_;
}
default: 
{
lean_object* v___x_4869_; lean_object* v___x_4870_; 
v___x_4869_ = lean_expr_instantiate_rev(v_type_4850_, v_xs_4851_);
lean_dec_ref(v_xs_4851_);
lean_dec_ref(v_type_4850_);
v___x_4870_ = l_Lean_Meta_whnfD(v___x_4869_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_);
if (lean_obj_tag(v___x_4870_) == 0)
{
lean_object* v_a_4871_; lean_object* v___x_4873_; uint8_t v_isShared_4874_; uint8_t v_isSharedCheck_4882_; 
v_a_4871_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4882_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4882_ == 0)
{
v___x_4873_ = v___x_4870_;
v_isShared_4874_ = v_isSharedCheck_4882_;
goto v_resetjp_4872_;
}
else
{
lean_inc(v_a_4871_);
lean_dec(v___x_4870_);
v___x_4873_ = lean_box(0);
v_isShared_4874_ = v_isSharedCheck_4882_;
goto v_resetjp_4872_;
}
v_resetjp_4872_:
{
switch(lean_obj_tag(v_a_4871_))
{
case 3:
{
lean_object* v_u_4875_; 
lean_del_object(v___x_4873_);
v_u_4875_ = lean_ctor_get(v_a_4871_, 0);
lean_inc(v_u_4875_);
lean_dec_ref_known(v_a_4871_, 1);
v_l_4858_ = v_u_4875_;
goto v___jp_4857_;
}
case 7:
{
lean_object* v___x_4876_; 
lean_del_object(v___x_4873_);
v___x_4876_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v_type_4850_ = v_a_4871_;
v_xs_4851_ = v___x_4876_;
goto _start;
}
default: 
{
lean_object* v___x_4878_; lean_object* v___x_4880_; 
lean_dec(v_a_4871_);
v___x_4878_ = lean_box(0);
if (v_isShared_4874_ == 0)
{
lean_ctor_set(v___x_4873_, 0, v___x_4878_);
v___x_4880_ = v___x_4873_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v___x_4878_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
return v___x_4880_;
}
}
}
}
}
else
{
lean_object* v_a_4883_; lean_object* v___x_4885_; uint8_t v_isShared_4886_; uint8_t v_isSharedCheck_4890_; 
v_a_4883_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4890_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4890_ == 0)
{
v___x_4885_ = v___x_4870_;
v_isShared_4886_ = v_isSharedCheck_4890_;
goto v_resetjp_4884_;
}
else
{
lean_inc(v_a_4883_);
lean_dec(v___x_4870_);
v___x_4885_ = lean_box(0);
v_isShared_4886_ = v_isSharedCheck_4890_;
goto v_resetjp_4884_;
}
v_resetjp_4884_:
{
lean_object* v___x_4888_; 
if (v_isShared_4886_ == 0)
{
v___x_4888_ = v___x_4885_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4889_; 
v_reuseFailAlloc_4889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4889_, 0, v_a_4883_);
v___x_4888_ = v_reuseFailAlloc_4889_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
return v___x_4888_;
}
}
}
}
}
v___jp_4857_:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; 
v___x_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4859_, 0, v_l_4858_);
v___x_4860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4860_, 0, v___x_4859_);
return v___x_4860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object* v_xs_4891_, lean_object* v_body_4892_, lean_object* v_x_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4899_ = lean_array_push(v_xs_4891_, v_x_4893_);
v___x_4900_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_body_4892_, v___x_4899_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_);
return v___x_4900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object* v_type_4901_, lean_object* v_xs_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_){
_start:
{
lean_object* v_res_4908_; 
v_res_4908_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4901_, v_xs_4902_, v___y_4903_, v___y_4904_, v___y_4905_, v___y_4906_);
lean_dec(v___y_4906_);
lean_dec_ref(v___y_4905_);
lean_dec(v___y_4904_);
lean_dec_ref(v___y_4903_);
return v_res_4908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object* v___y_4909_, lean_object* v_cache_4910_, lean_object* v_a_x3f_4911_){
_start:
{
lean_object* v___x_4913_; lean_object* v_mctx_4914_; lean_object* v_zetaDeltaFVarIds_4915_; lean_object* v_postponed_4916_; lean_object* v_diag_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4927_; 
v___x_4913_ = lean_st_ref_take(v___y_4909_);
v_mctx_4914_ = lean_ctor_get(v___x_4913_, 0);
v_zetaDeltaFVarIds_4915_ = lean_ctor_get(v___x_4913_, 2);
v_postponed_4916_ = lean_ctor_get(v___x_4913_, 3);
v_diag_4917_ = lean_ctor_get(v___x_4913_, 4);
v_isSharedCheck_4927_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4927_ == 0)
{
lean_object* v_unused_4928_; 
v_unused_4928_ = lean_ctor_get(v___x_4913_, 1);
lean_dec(v_unused_4928_);
v___x_4919_ = v___x_4913_;
v_isShared_4920_ = v_isSharedCheck_4927_;
goto v_resetjp_4918_;
}
else
{
lean_inc(v_diag_4917_);
lean_inc(v_postponed_4916_);
lean_inc(v_zetaDeltaFVarIds_4915_);
lean_inc(v_mctx_4914_);
lean_dec(v___x_4913_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4927_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
lean_object* v___x_4921_; lean_object* v___x_4923_; 
v___x_4921_ = lean_box(0);
if (v_isShared_4920_ == 0)
{
lean_ctor_set(v___x_4919_, 1, v_cache_4910_);
v___x_4923_ = v___x_4919_;
goto v_reusejp_4922_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_mctx_4914_);
lean_ctor_set(v_reuseFailAlloc_4926_, 1, v_cache_4910_);
lean_ctor_set(v_reuseFailAlloc_4926_, 2, v_zetaDeltaFVarIds_4915_);
lean_ctor_set(v_reuseFailAlloc_4926_, 3, v_postponed_4916_);
lean_ctor_set(v_reuseFailAlloc_4926_, 4, v_diag_4917_);
v___x_4923_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4922_;
}
v_reusejp_4922_:
{
lean_object* v___x_4924_; lean_object* v___x_4925_; 
v___x_4924_ = lean_st_ref_put(v___y_4909_, v___x_4923_);
v___x_4925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4925_, 0, v___x_4921_);
return v___x_4925_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object* v___y_4929_, lean_object* v_cache_4930_, lean_object* v_a_x3f_4931_, lean_object* v___y_4932_){
_start:
{
lean_object* v_res_4933_; 
v_res_4933_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v___y_4929_, v_cache_4930_, v_a_x3f_4931_);
lean_dec(v_a_x3f_4931_);
lean_dec(v___y_4929_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object* v_type_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_){
_start:
{
lean_object* v___x_4940_; 
v___x_4940_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_type_4934_);
if (lean_obj_tag(v___x_4940_) == 0)
{
lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v_cache_4943_; lean_object* v___x_4944_; 
v___x_4941_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v___x_4942_ = lean_st_ref_get(v___y_4936_);
v_cache_4943_ = lean_ctor_get(v___x_4942_, 1);
lean_inc_ref(v_cache_4943_);
lean_dec(v___x_4942_);
v___x_4944_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4934_, v___x_4941_, v___y_4935_, v___y_4936_, v___y_4937_, v___y_4938_);
if (lean_obj_tag(v___x_4944_) == 0)
{
lean_object* v_a_4945_; lean_object* v___x_4947_; uint8_t v_isShared_4948_; uint8_t v_isSharedCheck_4961_; 
v_a_4945_ = lean_ctor_get(v___x_4944_, 0);
v_isSharedCheck_4961_ = !lean_is_exclusive(v___x_4944_);
if (v_isSharedCheck_4961_ == 0)
{
v___x_4947_ = v___x_4944_;
v_isShared_4948_ = v_isSharedCheck_4961_;
goto v_resetjp_4946_;
}
else
{
lean_inc(v_a_4945_);
lean_dec(v___x_4944_);
v___x_4947_ = lean_box(0);
v_isShared_4948_ = v_isSharedCheck_4961_;
goto v_resetjp_4946_;
}
v_resetjp_4946_:
{
lean_object* v___x_4950_; 
lean_inc(v_a_4945_);
if (v_isShared_4948_ == 0)
{
lean_ctor_set_tag(v___x_4947_, 1);
v___x_4950_ = v___x_4947_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_a_4945_);
v___x_4950_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
lean_object* v___x_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_4958_; 
v___x_4951_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v___y_4936_, v_cache_4943_, v___x_4950_);
lean_dec_ref(v___x_4950_);
v_isSharedCheck_4958_ = !lean_is_exclusive(v___x_4951_);
if (v_isSharedCheck_4958_ == 0)
{
lean_object* v_unused_4959_; 
v_unused_4959_ = lean_ctor_get(v___x_4951_, 0);
lean_dec(v_unused_4959_);
v___x_4953_ = v___x_4951_;
v_isShared_4954_ = v_isSharedCheck_4958_;
goto v_resetjp_4952_;
}
else
{
lean_dec(v___x_4951_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_4958_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v___x_4956_; 
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 0, v_a_4945_);
v___x_4956_ = v___x_4953_;
goto v_reusejp_4955_;
}
else
{
lean_object* v_reuseFailAlloc_4957_; 
v_reuseFailAlloc_4957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4957_, 0, v_a_4945_);
v___x_4956_ = v_reuseFailAlloc_4957_;
goto v_reusejp_4955_;
}
v_reusejp_4955_:
{
return v___x_4956_;
}
}
}
}
}
else
{
lean_object* v_a_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_4971_; 
v_a_4962_ = lean_ctor_get(v___x_4944_, 0);
lean_inc(v_a_4962_);
lean_dec_ref_known(v___x_4944_, 1);
v___x_4963_ = lean_box(0);
v___x_4964_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v___y_4936_, v_cache_4943_, v___x_4963_);
v_isSharedCheck_4971_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_4971_ == 0)
{
lean_object* v_unused_4972_; 
v_unused_4972_ = lean_ctor_get(v___x_4964_, 0);
lean_dec(v_unused_4972_);
v___x_4966_ = v___x_4964_;
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
else
{
lean_dec(v___x_4964_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4969_; 
if (v_isShared_4967_ == 0)
{
lean_ctor_set_tag(v___x_4966_, 1);
lean_ctor_set(v___x_4966_, 0, v_a_4962_);
v___x_4969_ = v___x_4966_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v_a_4962_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
return v___x_4969_;
}
}
}
}
else
{
lean_object* v___x_4973_; 
lean_dec_ref(v_type_4934_);
v___x_4973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4973_, 0, v___x_4940_);
return v___x_4973_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object* v_type_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_res_4980_; 
v_res_4980_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
return v_res_4980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object* v_type_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_){
_start:
{
lean_object* v___x_4987_; 
v___x_4987_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4981_, v___y_4982_, v___y_4983_, v___y_4984_, v___y_4985_);
if (lean_obj_tag(v___x_4987_) == 0)
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_5002_; 
v_a_4988_ = lean_ctor_get(v___x_4987_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v___x_4987_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4990_ = v___x_4987_;
v_isShared_4991_ = v_isSharedCheck_5002_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4987_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_5002_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
if (lean_obj_tag(v_a_4988_) == 0)
{
uint8_t v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4995_; 
v___x_4992_ = 0;
v___x_4993_ = lean_box(v___x_4992_);
if (v_isShared_4991_ == 0)
{
lean_ctor_set(v___x_4990_, 0, v___x_4993_);
v___x_4995_ = v___x_4990_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v___x_4993_);
v___x_4995_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
return v___x_4995_;
}
}
else
{
uint8_t v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_5000_; 
lean_dec_ref_known(v_a_4988_, 1);
v___x_4997_ = 1;
v___x_4998_ = lean_box(v___x_4997_);
if (v_isShared_4991_ == 0)
{
lean_ctor_set(v___x_4990_, 0, v___x_4998_);
v___x_5000_ = v___x_4990_;
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
}
else
{
lean_object* v_a_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5010_; 
v_a_5003_ = lean_ctor_get(v___x_4987_, 0);
v_isSharedCheck_5010_ = !lean_is_exclusive(v___x_4987_);
if (v_isSharedCheck_5010_ == 0)
{
v___x_5005_ = v___x_4987_;
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_a_5003_);
lean_dec(v___x_4987_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object* v_type_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_){
_start:
{
lean_object* v_res_5017_; 
v_res_5017_ = l_Lean_Meta_isTypeFormerType(v_type_5011_, v___y_5012_, v___y_5013_, v___y_5014_, v___y_5015_);
lean_dec(v___y_5015_);
lean_dec_ref(v___y_5014_);
lean_dec(v___y_5013_);
lean_dec_ref(v___y_5012_);
return v_res_5017_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object* v_x_5018_, lean_object* v_x_5019_){
_start:
{
if (lean_obj_tag(v_x_5018_) == 0)
{
if (lean_obj_tag(v_x_5019_) == 0)
{
uint8_t v___x_5020_; 
v___x_5020_ = 1;
return v___x_5020_;
}
else
{
uint8_t v___x_5021_; 
v___x_5021_ = 0;
return v___x_5021_;
}
}
else
{
if (lean_obj_tag(v_x_5019_) == 0)
{
uint8_t v___x_5022_; 
v___x_5022_ = 0;
return v___x_5022_;
}
else
{
lean_object* v_val_5023_; lean_object* v_val_5024_; uint8_t v___x_5025_; 
v_val_5023_ = lean_ctor_get(v_x_5018_, 0);
v_val_5024_ = lean_ctor_get(v_x_5019_, 0);
v___x_5025_ = lean_level_eq(v_val_5023_, v_val_5024_);
return v___x_5025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object* v_x_5026_, lean_object* v_x_5027_){
_start:
{
uint8_t v_res_5028_; lean_object* v_r_5029_; 
v_res_5028_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_x_5026_, v_x_5027_);
lean_dec(v_x_5027_);
lean_dec(v_x_5026_);
v_r_5029_ = lean_box(v_res_5028_);
return v_r_5029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object* v_type_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_){
_start:
{
lean_object* v___x_5038_; 
v___x_5038_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_);
if (lean_obj_tag(v___x_5038_) == 0)
{
lean_object* v_a_5039_; lean_object* v___x_5041_; uint8_t v_isShared_5042_; uint8_t v_isSharedCheck_5049_; 
v_a_5039_ = lean_ctor_get(v___x_5038_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v___x_5038_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_5041_ = v___x_5038_;
v_isShared_5042_ = v_isSharedCheck_5049_;
goto v_resetjp_5040_;
}
else
{
lean_inc(v_a_5039_);
lean_dec(v___x_5038_);
v___x_5041_ = lean_box(0);
v_isShared_5042_ = v_isSharedCheck_5049_;
goto v_resetjp_5040_;
}
v_resetjp_5040_:
{
lean_object* v___x_5043_; uint8_t v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5047_; 
v___x_5043_ = ((lean_object*)(l_Lean_Meta_isPropFormerType___closed__0));
v___x_5044_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_a_5039_, v___x_5043_);
lean_dec(v_a_5039_);
v___x_5045_ = lean_box(v___x_5044_);
if (v_isShared_5042_ == 0)
{
lean_ctor_set(v___x_5041_, 0, v___x_5045_);
v___x_5047_ = v___x_5041_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v___x_5045_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
}
else
{
lean_object* v_a_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5057_; 
v_a_5050_ = lean_ctor_get(v___x_5038_, 0);
v_isSharedCheck_5057_ = !lean_is_exclusive(v___x_5038_);
if (v_isSharedCheck_5057_ == 0)
{
v___x_5052_ = v___x_5038_;
v_isShared_5053_ = v_isSharedCheck_5057_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_a_5050_);
lean_dec(v___x_5038_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5057_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v___x_5055_; 
if (v_isShared_5053_ == 0)
{
v___x_5055_ = v___x_5052_;
goto v_reusejp_5054_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v_a_5050_);
v___x_5055_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5054_;
}
v_reusejp_5054_:
{
return v___x_5055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object* v_type_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_){
_start:
{
lean_object* v_res_5064_; 
v_res_5064_ = l_Lean_Meta_isPropFormerType(v_type_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_);
lean_dec(v___y_5062_);
lean_dec_ref(v___y_5061_);
lean_dec(v___y_5060_);
lean_dec_ref(v___y_5059_);
return v_res_5064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object* v_e_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_){
_start:
{
lean_object* v___x_5071_; 
lean_inc(v___y_5069_);
lean_inc_ref(v___y_5068_);
lean_inc(v___y_5067_);
lean_inc_ref(v___y_5066_);
v___x_5071_ = lean_infer_type(v_e_5065_, v___y_5066_, v___y_5067_, v___y_5068_, v___y_5069_);
if (lean_obj_tag(v___x_5071_) == 0)
{
lean_object* v_a_5072_; lean_object* v___x_5073_; 
v_a_5072_ = lean_ctor_get(v___x_5071_, 0);
lean_inc(v_a_5072_);
lean_dec_ref_known(v___x_5071_, 1);
v___x_5073_ = l_Lean_Meta_isTypeFormerType(v_a_5072_, v___y_5066_, v___y_5067_, v___y_5068_, v___y_5069_);
return v___x_5073_;
}
else
{
lean_object* v_a_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5081_; 
v_a_5074_ = lean_ctor_get(v___x_5071_, 0);
v_isSharedCheck_5081_ = !lean_is_exclusive(v___x_5071_);
if (v_isSharedCheck_5081_ == 0)
{
v___x_5076_ = v___x_5071_;
v_isShared_5077_ = v_isSharedCheck_5081_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_a_5074_);
lean_dec(v___x_5071_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5081_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5079_; 
if (v_isShared_5077_ == 0)
{
v___x_5079_ = v___x_5076_;
goto v_reusejp_5078_;
}
else
{
lean_object* v_reuseFailAlloc_5080_; 
v_reuseFailAlloc_5080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5080_, 0, v_a_5074_);
v___x_5079_ = v_reuseFailAlloc_5080_;
goto v_reusejp_5078_;
}
v_reusejp_5078_:
{
return v___x_5079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object* v_e_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_){
_start:
{
lean_object* v_res_5088_; 
v_res_5088_ = l_Lean_Meta_isTypeFormer(v_e_5082_, v___y_5083_, v___y_5084_, v___y_5085_, v___y_5086_);
lean_dec(v___y_5086_);
lean_dec_ref(v___y_5085_);
lean_dec(v___y_5084_);
lean_dec_ref(v___y_5083_);
return v_res_5088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object* v_type_5089_, lean_object* v_maxFVars_x3f_5090_, lean_object* v_k_5091_, uint8_t v_cleanupAnnotations_5092_, uint8_t v_whnfType_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_){
_start:
{
lean_object* v___f_5099_; lean_object* v___x_5100_; 
v___f_5099_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5099_, 0, v_k_5091_);
v___x_5100_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_5089_, v_maxFVars_x3f_5090_, v___f_5099_, v_cleanupAnnotations_5092_, v_whnfType_5093_, v___y_5094_, v___y_5095_, v___y_5096_, v___y_5097_);
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5108_; 
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5103_ = v___x_5100_;
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5100_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5106_; 
if (v_isShared_5104_ == 0)
{
v___x_5106_ = v___x_5103_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v_a_5101_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
else
{
lean_object* v_a_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5116_; 
v_a_5109_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5116_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5116_ == 0)
{
v___x_5111_ = v___x_5100_;
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_a_5109_);
lean_dec(v___x_5100_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5114_; 
if (v_isShared_5112_ == 0)
{
v___x_5114_ = v___x_5111_;
goto v_reusejp_5113_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v_a_5109_);
v___x_5114_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5113_;
}
v_reusejp_5113_:
{
return v___x_5114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object* v_type_5117_, lean_object* v_maxFVars_x3f_5118_, lean_object* v_k_5119_, lean_object* v_cleanupAnnotations_5120_, lean_object* v_whnfType_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5127_; uint8_t v_whnfType_boxed_5128_; lean_object* v_res_5129_; 
v_cleanupAnnotations_boxed_5127_ = lean_unbox(v_cleanupAnnotations_5120_);
v_whnfType_boxed_5128_ = lean_unbox(v_whnfType_5121_);
v_res_5129_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5117_, v_maxFVars_x3f_5118_, v_k_5119_, v_cleanupAnnotations_boxed_5127_, v_whnfType_boxed_5128_, v___y_5122_, v___y_5123_, v___y_5124_, v___y_5125_);
lean_dec(v___y_5125_);
lean_dec_ref(v___y_5124_);
lean_dec(v___y_5123_);
lean_dec_ref(v___y_5122_);
return v_res_5129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object* v_00_u03b1_5130_, lean_object* v_type_5131_, lean_object* v_maxFVars_x3f_5132_, lean_object* v_k_5133_, uint8_t v_cleanupAnnotations_5134_, uint8_t v_whnfType_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_){
_start:
{
lean_object* v___x_5141_; 
v___x_5141_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5131_, v_maxFVars_x3f_5132_, v_k_5133_, v_cleanupAnnotations_5134_, v_whnfType_5135_, v___y_5136_, v___y_5137_, v___y_5138_, v___y_5139_);
return v___x_5141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object* v_00_u03b1_5142_, lean_object* v_type_5143_, lean_object* v_maxFVars_x3f_5144_, lean_object* v_k_5145_, lean_object* v_cleanupAnnotations_5146_, lean_object* v_whnfType_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5153_; uint8_t v_whnfType_boxed_5154_; lean_object* v_res_5155_; 
v_cleanupAnnotations_boxed_5153_ = lean_unbox(v_cleanupAnnotations_5146_);
v_whnfType_boxed_5154_ = lean_unbox(v_whnfType_5147_);
v_res_5155_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(v_00_u03b1_5142_, v_type_5143_, v_maxFVars_x3f_5144_, v_k_5145_, v_cleanupAnnotations_boxed_5153_, v_whnfType_boxed_5154_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_);
lean_dec(v___y_5151_);
lean_dec_ref(v___y_5150_);
lean_dec(v___y_5149_);
lean_dec_ref(v___y_5148_);
return v_res_5155_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object* v_a_5156_, lean_object* v_as_5157_, size_t v_i_5158_, size_t v_stop_5159_){
_start:
{
uint8_t v___x_5160_; 
v___x_5160_ = lean_usize_dec_eq(v_i_5158_, v_stop_5159_);
if (v___x_5160_ == 0)
{
lean_object* v___x_5161_; uint8_t v___x_5162_; 
v___x_5161_ = lean_array_uget_borrowed(v_as_5157_, v_i_5158_);
v___x_5162_ = lean_expr_eqv(v_a_5156_, v___x_5161_);
if (v___x_5162_ == 0)
{
size_t v___x_5163_; size_t v___x_5164_; 
v___x_5163_ = ((size_t)1ULL);
v___x_5164_ = lean_usize_add(v_i_5158_, v___x_5163_);
v_i_5158_ = v___x_5164_;
goto _start;
}
else
{
return v___x_5162_;
}
}
else
{
uint8_t v___x_5166_; 
v___x_5166_ = 0;
return v___x_5166_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object* v_a_5167_, lean_object* v_as_5168_, lean_object* v_i_5169_, lean_object* v_stop_5170_){
_start:
{
size_t v_i_boxed_5171_; size_t v_stop_boxed_5172_; uint8_t v_res_5173_; lean_object* v_r_5174_; 
v_i_boxed_5171_ = lean_unbox_usize(v_i_5169_);
lean_dec(v_i_5169_);
v_stop_boxed_5172_ = lean_unbox_usize(v_stop_5170_);
lean_dec(v_stop_5170_);
v_res_5173_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5167_, v_as_5168_, v_i_boxed_5171_, v_stop_boxed_5172_);
lean_dec_ref(v_as_5168_);
lean_dec_ref(v_a_5167_);
v_r_5174_ = lean_box(v_res_5173_);
return v_r_5174_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object* v_as_5175_, lean_object* v_a_5176_){
_start:
{
lean_object* v___x_5177_; lean_object* v___x_5178_; uint8_t v___x_5179_; 
v___x_5177_ = lean_unsigned_to_nat(0u);
v___x_5178_ = lean_array_get_size(v_as_5175_);
v___x_5179_ = lean_nat_dec_lt(v___x_5177_, v___x_5178_);
if (v___x_5179_ == 0)
{
return v___x_5179_;
}
else
{
if (v___x_5179_ == 0)
{
return v___x_5179_;
}
else
{
size_t v___x_5180_; size_t v___x_5181_; uint8_t v___x_5182_; 
v___x_5180_ = ((size_t)0ULL);
v___x_5181_ = lean_usize_of_nat(v___x_5178_);
v___x_5182_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5176_, v_as_5175_, v___x_5180_, v___x_5181_);
return v___x_5182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object* v_as_5183_, lean_object* v_a_5184_){
_start:
{
uint8_t v_res_5185_; lean_object* v_r_5186_; 
v_res_5185_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_as_5183_, v_a_5184_);
lean_dec_ref(v_a_5184_);
lean_dec_ref(v_as_5183_);
v_r_5186_ = lean_box(v_res_5185_);
return v_r_5186_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object* v_xs_5187_, lean_object* v_e_5188_){
_start:
{
uint8_t v___x_5189_; lean_object* v_d_5191_; lean_object* v_b_5192_; 
v___x_5189_ = l_Lean_Expr_hasFVar(v_e_5188_);
if (v___x_5189_ == 0)
{
lean_dec_ref(v_e_5188_);
return v___x_5189_;
}
else
{
switch(lean_obj_tag(v_e_5188_))
{
case 7:
{
lean_object* v_binderType_5195_; lean_object* v_body_5196_; 
v_binderType_5195_ = lean_ctor_get(v_e_5188_, 1);
lean_inc_ref(v_binderType_5195_);
v_body_5196_ = lean_ctor_get(v_e_5188_, 2);
lean_inc_ref(v_body_5196_);
lean_dec_ref_known(v_e_5188_, 3);
v_d_5191_ = v_binderType_5195_;
v_b_5192_ = v_body_5196_;
goto v___jp_5190_;
}
case 6:
{
lean_object* v_binderType_5197_; lean_object* v_body_5198_; 
v_binderType_5197_ = lean_ctor_get(v_e_5188_, 1);
lean_inc_ref(v_binderType_5197_);
v_body_5198_ = lean_ctor_get(v_e_5188_, 2);
lean_inc_ref(v_body_5198_);
lean_dec_ref_known(v_e_5188_, 3);
v_d_5191_ = v_binderType_5197_;
v_b_5192_ = v_body_5198_;
goto v___jp_5190_;
}
case 10:
{
lean_object* v_expr_5199_; 
v_expr_5199_ = lean_ctor_get(v_e_5188_, 1);
lean_inc_ref(v_expr_5199_);
lean_dec_ref_known(v_e_5188_, 2);
v_e_5188_ = v_expr_5199_;
goto _start;
}
case 8:
{
lean_object* v_type_5201_; lean_object* v_value_5202_; lean_object* v_body_5203_; uint8_t v___x_5204_; 
v_type_5201_ = lean_ctor_get(v_e_5188_, 1);
lean_inc_ref(v_type_5201_);
v_value_5202_ = lean_ctor_get(v_e_5188_, 2);
lean_inc_ref(v_value_5202_);
v_body_5203_ = lean_ctor_get(v_e_5188_, 3);
lean_inc_ref(v_body_5203_);
lean_dec_ref_known(v_e_5188_, 4);
v___x_5204_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5187_, v_type_5201_);
if (v___x_5204_ == 0)
{
uint8_t v___x_5205_; 
v___x_5205_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5187_, v_value_5202_);
if (v___x_5205_ == 0)
{
v_e_5188_ = v_body_5203_;
goto _start;
}
else
{
lean_dec_ref(v_body_5203_);
return v___x_5189_;
}
}
else
{
lean_dec_ref(v_body_5203_);
lean_dec_ref(v_value_5202_);
return v___x_5189_;
}
}
case 5:
{
lean_object* v_fn_5207_; lean_object* v_arg_5208_; uint8_t v___x_5209_; 
v_fn_5207_ = lean_ctor_get(v_e_5188_, 0);
lean_inc_ref(v_fn_5207_);
v_arg_5208_ = lean_ctor_get(v_e_5188_, 1);
lean_inc_ref(v_arg_5208_);
lean_dec_ref_known(v_e_5188_, 2);
v___x_5209_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5187_, v_fn_5207_);
if (v___x_5209_ == 0)
{
v_e_5188_ = v_arg_5208_;
goto _start;
}
else
{
lean_dec_ref(v_arg_5208_);
return v___x_5189_;
}
}
case 11:
{
lean_object* v_struct_5211_; 
v_struct_5211_ = lean_ctor_get(v_e_5188_, 2);
lean_inc_ref(v_struct_5211_);
lean_dec_ref_known(v_e_5188_, 3);
v_e_5188_ = v_struct_5211_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_5213_; lean_object* v___x_5214_; uint8_t v___x_5215_; 
v_fvarId_5213_ = lean_ctor_get(v_e_5188_, 0);
lean_inc(v_fvarId_5213_);
lean_dec_ref_known(v_e_5188_, 1);
v___x_5214_ = l_Lean_Expr_fvar___override(v_fvarId_5213_);
v___x_5215_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_xs_5187_, v___x_5214_);
lean_dec_ref(v___x_5214_);
return v___x_5215_;
}
default: 
{
uint8_t v___x_5216_; 
lean_dec_ref(v_e_5188_);
v___x_5216_ = 0;
return v___x_5216_;
}
}
}
v___jp_5190_:
{
uint8_t v___x_5193_; 
v___x_5193_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5187_, v_d_5191_);
if (v___x_5193_ == 0)
{
v_e_5188_ = v_b_5192_;
goto _start;
}
else
{
lean_dec_ref(v_b_5192_);
return v___x_5189_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object* v_xs_5217_, lean_object* v_e_5218_){
_start:
{
uint8_t v_res_5219_; lean_object* v_r_5220_; 
v_res_5219_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5217_, v_e_5218_);
lean_dec_ref(v_xs_5217_);
v_r_5220_ = lean_box(v_res_5219_);
return v_r_5220_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1(void){
_start:
{
lean_object* v___x_5222_; lean_object* v___x_5223_; 
v___x_5222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0));
v___x_5223_ = l_Lean_stringToMessageData(v___x_5222_);
return v___x_5223_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5225_; lean_object* v___x_5226_; 
v___x_5225_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2));
v___x_5226_ = l_Lean_stringToMessageData(v___x_5225_);
return v___x_5226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object* v_xs_5227_, lean_object* v_type_5228_, lean_object* v_as_5229_, size_t v_sz_5230_, size_t v_i_5231_, lean_object* v_b_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_){
_start:
{
lean_object* v_a_5239_; uint8_t v___x_5243_; 
v___x_5243_ = lean_usize_dec_lt(v_i_5231_, v_sz_5230_);
if (v___x_5243_ == 0)
{
lean_object* v___x_5244_; 
lean_dec_ref(v_type_5228_);
v___x_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5244_, 0, v_b_5232_);
return v___x_5244_;
}
else
{
lean_object* v___x_5245_; lean_object* v_a_5246_; uint8_t v___x_5247_; 
v___x_5245_ = lean_box(0);
v_a_5246_ = lean_array_uget_borrowed(v_as_5229_, v_i_5231_);
lean_inc(v_a_5246_);
v___x_5247_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5227_, v_a_5246_);
if (v___x_5247_ == 0)
{
v_a_5239_ = v___x_5245_;
goto v___jp_5238_;
}
else
{
lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; 
v___x_5248_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1);
lean_inc(v_a_5246_);
v___x_5249_ = l_Lean_MessageData_ofExpr(v_a_5246_);
v___x_5250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5248_);
lean_ctor_set(v___x_5250_, 1, v___x_5249_);
v___x_5251_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3);
v___x_5252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5252_, 0, v___x_5250_);
lean_ctor_set(v___x_5252_, 1, v___x_5251_);
lean_inc_ref(v_type_5228_);
v___x_5253_ = l_Lean_MessageData_ofExpr(v_type_5228_);
v___x_5254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5254_, 0, v___x_5252_);
lean_ctor_set(v___x_5254_, 1, v___x_5253_);
v___x_5255_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5254_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_);
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_dec_ref_known(v___x_5255_, 1);
v_a_5239_ = v___x_5245_;
goto v___jp_5238_;
}
else
{
lean_dec_ref(v_type_5228_);
return v___x_5255_;
}
}
}
v___jp_5238_:
{
size_t v___x_5240_; size_t v___x_5241_; 
v___x_5240_ = ((size_t)1ULL);
v___x_5241_ = lean_usize_add(v_i_5231_, v___x_5240_);
v_i_5231_ = v___x_5241_;
v_b_5232_ = v_a_5239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object* v_xs_5256_, lean_object* v_type_5257_, lean_object* v_as_5258_, lean_object* v_sz_5259_, lean_object* v_i_5260_, lean_object* v_b_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_){
_start:
{
size_t v_sz_boxed_5267_; size_t v_i_boxed_5268_; lean_object* v_res_5269_; 
v_sz_boxed_5267_ = lean_unbox_usize(v_sz_5259_);
lean_dec(v_sz_5259_);
v_i_boxed_5268_ = lean_unbox_usize(v_i_5260_);
lean_dec(v_i_5260_);
v_res_5269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5256_, v_type_5257_, v_as_5258_, v_sz_boxed_5267_, v_i_boxed_5268_, v_b_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_);
lean_dec(v___y_5265_);
lean_dec_ref(v___y_5264_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec_ref(v_as_5258_);
lean_dec_ref(v_xs_5256_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t v_sz_5270_, size_t v_i_5271_, lean_object* v_bs_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_){
_start:
{
uint8_t v___x_5278_; 
v___x_5278_ = lean_usize_dec_lt(v_i_5271_, v_sz_5270_);
if (v___x_5278_ == 0)
{
lean_object* v___x_5279_; 
v___x_5279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5279_, 0, v_bs_5272_);
return v___x_5279_;
}
else
{
lean_object* v_v_5280_; lean_object* v___x_5281_; lean_object* v_bs_x27_5282_; lean_object* v___x_5283_; 
v_v_5280_ = lean_array_uget(v_bs_5272_, v_i_5271_);
v___x_5281_ = lean_unsigned_to_nat(0u);
v_bs_x27_5282_ = lean_array_uset(v_bs_5272_, v_i_5271_, v___x_5281_);
lean_inc(v___y_5276_);
lean_inc_ref(v___y_5275_);
lean_inc(v___y_5274_);
lean_inc_ref(v___y_5273_);
v___x_5283_ = lean_infer_type(v_v_5280_, v___y_5273_, v___y_5274_, v___y_5275_, v___y_5276_);
if (lean_obj_tag(v___x_5283_) == 0)
{
lean_object* v_a_5284_; size_t v___x_5285_; size_t v___x_5286_; lean_object* v___x_5287_; 
v_a_5284_ = lean_ctor_get(v___x_5283_, 0);
lean_inc(v_a_5284_);
lean_dec_ref_known(v___x_5283_, 1);
v___x_5285_ = ((size_t)1ULL);
v___x_5286_ = lean_usize_add(v_i_5271_, v___x_5285_);
v___x_5287_ = lean_array_uset(v_bs_x27_5282_, v_i_5271_, v_a_5284_);
v_i_5271_ = v___x_5286_;
v_bs_5272_ = v___x_5287_;
goto _start;
}
else
{
lean_object* v_a_5289_; lean_object* v___x_5291_; uint8_t v_isShared_5292_; uint8_t v_isSharedCheck_5296_; 
lean_dec_ref(v_bs_x27_5282_);
v_a_5289_ = lean_ctor_get(v___x_5283_, 0);
v_isSharedCheck_5296_ = !lean_is_exclusive(v___x_5283_);
if (v_isSharedCheck_5296_ == 0)
{
v___x_5291_ = v___x_5283_;
v_isShared_5292_ = v_isSharedCheck_5296_;
goto v_resetjp_5290_;
}
else
{
lean_inc(v_a_5289_);
lean_dec(v___x_5283_);
v___x_5291_ = lean_box(0);
v_isShared_5292_ = v_isSharedCheck_5296_;
goto v_resetjp_5290_;
}
v_resetjp_5290_:
{
lean_object* v___x_5294_; 
if (v_isShared_5292_ == 0)
{
v___x_5294_ = v___x_5291_;
goto v_reusejp_5293_;
}
else
{
lean_object* v_reuseFailAlloc_5295_; 
v_reuseFailAlloc_5295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5295_, 0, v_a_5289_);
v___x_5294_ = v_reuseFailAlloc_5295_;
goto v_reusejp_5293_;
}
v_reusejp_5293_:
{
return v___x_5294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object* v_sz_5297_, lean_object* v_i_5298_, lean_object* v_bs_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_){
_start:
{
size_t v_sz_boxed_5305_; size_t v_i_boxed_5306_; lean_object* v_res_5307_; 
v_sz_boxed_5305_ = lean_unbox_usize(v_sz_5297_);
lean_dec(v_sz_5297_);
v_i_boxed_5306_ = lean_unbox_usize(v_i_5298_);
lean_dec(v_i_5298_);
v_res_5307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_boxed_5305_, v_i_boxed_5306_, v_bs_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
lean_dec(v___y_5303_);
lean_dec_ref(v___y_5302_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
return v_res_5307_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5309_; lean_object* v___x_5310_; 
v___x_5309_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__0));
v___x_5310_ = l_Lean_stringToMessageData(v___x_5309_);
return v___x_5310_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5312_; lean_object* v___x_5313_; 
v___x_5312_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__2));
v___x_5313_ = l_Lean_stringToMessageData(v___x_5312_);
return v___x_5313_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
v___x_5315_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__4));
v___x_5316_ = l_Lean_stringToMessageData(v___x_5315_);
return v___x_5316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object* v_type_5317_, lean_object* v_n_5318_, lean_object* v_xs_5319_, lean_object* v_x_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_){
_start:
{
lean_object* v___x_5350_; uint8_t v___x_5351_; 
v___x_5350_ = lean_array_get_size(v_xs_5319_);
v___x_5351_ = lean_nat_dec_eq(v___x_5350_, v_n_5318_);
if (v___x_5351_ == 0)
{
lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
lean_dec_ref(v_xs_5319_);
v___x_5352_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__1, &l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1);
v___x_5353_ = l_Lean_MessageData_ofExpr(v_type_5317_);
v___x_5354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5354_, 0, v___x_5352_);
lean_ctor_set(v___x_5354_, 1, v___x_5353_);
v___x_5355_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__3, &l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3);
v___x_5356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5356_, 0, v___x_5354_);
lean_ctor_set(v___x_5356_, 1, v___x_5355_);
v___x_5357_ = l_Nat_reprFast(v_n_5318_);
v___x_5358_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5358_, 0, v___x_5357_);
v___x_5359_ = l_Lean_MessageData_ofFormat(v___x_5358_);
v___x_5360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5356_);
lean_ctor_set(v___x_5360_, 1, v___x_5359_);
v___x_5361_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__5, &l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5);
v___x_5362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5362_, 0, v___x_5360_);
lean_ctor_set(v___x_5362_, 1, v___x_5361_);
v___x_5363_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5362_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_);
v_a_5364_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5363_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5363_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
else
{
lean_dec(v_n_5318_);
goto v___jp_5326_;
}
v___jp_5326_:
{
size_t v_sz_5327_; size_t v___x_5328_; lean_object* v___x_5329_; 
v_sz_5327_ = lean_array_size(v_xs_5319_);
v___x_5328_ = ((size_t)0ULL);
lean_inc_ref(v_xs_5319_);
v___x_5329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_5327_, v___x_5328_, v_xs_5319_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_);
if (lean_obj_tag(v___x_5329_) == 0)
{
lean_object* v_a_5330_; lean_object* v___x_5331_; size_t v_sz_5332_; lean_object* v___x_5333_; 
v_a_5330_ = lean_ctor_get(v___x_5329_, 0);
lean_inc(v_a_5330_);
lean_dec_ref_known(v___x_5329_, 1);
v___x_5331_ = lean_box(0);
v_sz_5332_ = lean_array_size(v_a_5330_);
v___x_5333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5319_, v_type_5317_, v_a_5330_, v_sz_5332_, v___x_5328_, v___x_5331_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_);
lean_dec_ref(v_xs_5319_);
if (lean_obj_tag(v___x_5333_) == 0)
{
lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5340_; 
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5340_ == 0)
{
lean_object* v_unused_5341_; 
v_unused_5341_ = lean_ctor_get(v___x_5333_, 0);
lean_dec(v_unused_5341_);
v___x_5335_ = v___x_5333_;
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
else
{
lean_dec(v___x_5333_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5338_; 
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 0, v_a_5330_);
v___x_5338_ = v___x_5335_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v_a_5330_);
v___x_5338_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
return v___x_5338_;
}
}
}
else
{
lean_object* v_a_5342_; lean_object* v___x_5344_; uint8_t v_isShared_5345_; uint8_t v_isSharedCheck_5349_; 
lean_dec(v_a_5330_);
v_a_5342_ = lean_ctor_get(v___x_5333_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5344_ = v___x_5333_;
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
else
{
lean_inc(v_a_5342_);
lean_dec(v___x_5333_);
v___x_5344_ = lean_box(0);
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
v_resetjp_5343_:
{
lean_object* v___x_5347_; 
if (v_isShared_5345_ == 0)
{
v___x_5347_ = v___x_5344_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5348_; 
v_reuseFailAlloc_5348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5348_, 0, v_a_5342_);
v___x_5347_ = v_reuseFailAlloc_5348_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
return v___x_5347_;
}
}
}
}
else
{
lean_dec_ref(v_xs_5319_);
lean_dec_ref(v_type_5317_);
return v___x_5329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object* v_type_5372_, lean_object* v_n_5373_, lean_object* v_xs_5374_, lean_object* v_x_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_){
_start:
{
lean_object* v_res_5381_; 
v_res_5381_ = l_Lean_Meta_arrowDomainsN___lam__0(v_type_5372_, v_n_5373_, v_xs_5374_, v_x_5375_, v___y_5376_, v___y_5377_, v___y_5378_, v___y_5379_);
lean_dec(v___y_5379_);
lean_dec_ref(v___y_5378_);
lean_dec(v___y_5377_);
lean_dec_ref(v___y_5376_);
lean_dec_ref(v_x_5375_);
return v_res_5381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object* v_n_5382_, lean_object* v_type_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_){
_start:
{
lean_object* v___f_5389_; lean_object* v___x_5390_; uint8_t v___x_5391_; lean_object* v___x_5392_; 
lean_inc(v_n_5382_);
lean_inc_ref(v_type_5383_);
v___f_5389_ = lean_alloc_closure((void*)(l_Lean_Meta_arrowDomainsN___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5389_, 0, v_type_5383_);
lean_closure_set(v___f_5389_, 1, v_n_5382_);
v___x_5390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5390_, 0, v_n_5382_);
v___x_5391_ = 0;
v___x_5392_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5383_, v___x_5390_, v___f_5389_, v___x_5391_, v___x_5391_, v___y_5384_, v___y_5385_, v___y_5386_, v___y_5387_);
return v___x_5392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object* v_n_5393_, lean_object* v_type_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_){
_start:
{
lean_object* v_res_5400_; 
v_res_5400_ = l_Lean_Meta_arrowDomainsN(v_n_5393_, v_type_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_);
lean_dec(v___y_5398_);
lean_dec_ref(v___y_5397_);
lean_dec(v___y_5396_);
lean_dec_ref(v___y_5395_);
return v_res_5400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object* v_n_5401_, lean_object* v_e_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_){
_start:
{
lean_object* v___x_5408_; 
lean_inc(v___y_5406_);
lean_inc_ref(v___y_5405_);
lean_inc(v___y_5404_);
lean_inc_ref(v___y_5403_);
v___x_5408_ = lean_infer_type(v_e_5402_, v___y_5403_, v___y_5404_, v___y_5405_, v___y_5406_);
if (lean_obj_tag(v___x_5408_) == 0)
{
lean_object* v_a_5409_; lean_object* v___x_5410_; 
v_a_5409_ = lean_ctor_get(v___x_5408_, 0);
lean_inc(v_a_5409_);
lean_dec_ref_known(v___x_5408_, 1);
v___x_5410_ = l_Lean_Meta_arrowDomainsN(v_n_5401_, v_a_5409_, v___y_5403_, v___y_5404_, v___y_5405_, v___y_5406_);
return v___x_5410_;
}
else
{
lean_object* v_a_5411_; lean_object* v___x_5413_; uint8_t v_isShared_5414_; uint8_t v_isSharedCheck_5418_; 
lean_dec(v_n_5401_);
v_a_5411_ = lean_ctor_get(v___x_5408_, 0);
v_isSharedCheck_5418_ = !lean_is_exclusive(v___x_5408_);
if (v_isSharedCheck_5418_ == 0)
{
v___x_5413_ = v___x_5408_;
v_isShared_5414_ = v_isSharedCheck_5418_;
goto v_resetjp_5412_;
}
else
{
lean_inc(v_a_5411_);
lean_dec(v___x_5408_);
v___x_5413_ = lean_box(0);
v_isShared_5414_ = v_isSharedCheck_5418_;
goto v_resetjp_5412_;
}
v_resetjp_5412_:
{
lean_object* v___x_5416_; 
if (v_isShared_5414_ == 0)
{
v___x_5416_ = v___x_5413_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v_a_5411_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object* v_n_5419_, lean_object* v_e_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_){
_start:
{
lean_object* v_res_5426_; 
v_res_5426_ = l_Lean_Meta_inferArgumentTypesN(v_n_5419_, v_e_5420_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_);
lean_dec(v___y_5424_);
lean_dec_ref(v___y_5423_);
lean_dec(v___y_5422_);
lean_dec_ref(v___y_5421_);
return v_res_5426_;
}
}
lean_object* runtime_initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_InferType(builtin);
}
#ifdef __cplusplus
}
#endif
