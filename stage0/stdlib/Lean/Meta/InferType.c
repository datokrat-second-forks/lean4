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
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instMonadExceptOfEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value)}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__13 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__13_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__14 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__14_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__15 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__14_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__15_value)}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__16 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__16_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__16_value)} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__17 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__17_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__16_value)} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__18 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__17_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__18_value)}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__19 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__19_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__19_value)} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__20 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__20_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__19_value)} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__21 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__20_value),((lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__21_value)}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__22 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__22_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__23 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__23_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__24 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__24_value;
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
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10));
v___x_2446_ = l_StateRefT_x27_instMonad___redArg(v___x_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object* v_e_2470_, lean_object* v_inferType_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
uint8_t v_cacheInferType_2516_; 
v_cacheInferType_2516_ = lean_ctor_get_uint8(v___y_2472_, sizeof(void*)*7 + 3);
if (v_cacheInferType_2516_ == 0)
{
lean_dec_ref(v_e_2470_);
goto v___jp_2477_;
}
else
{
uint8_t v___x_2517_; 
v___x_2517_ = l_Lean_Expr_hasMVar(v_e_2470_);
if (v___x_2517_ == 0)
{
lean_object* v___f_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___f_2518_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__23));
v___x_2519_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__24));
v___x_2520_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2470_, v___y_2472_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2618_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2523_ = v___x_2520_;
v_isShared_2524_ = v_isSharedCheck_2618_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_a_2521_);
lean_dec(v___x_2520_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2618_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2565_; lean_object* v_cache_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2613_; 
v___x_2565_ = lean_st_ref_get(v___y_2473_);
v_cache_2566_ = lean_ctor_get(v___x_2565_, 1);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2613_ == 0)
{
lean_object* v_unused_2614_; lean_object* v_unused_2615_; lean_object* v_unused_2616_; lean_object* v_unused_2617_; 
v_unused_2614_ = lean_ctor_get(v___x_2565_, 4);
lean_dec(v_unused_2614_);
v_unused_2615_ = lean_ctor_get(v___x_2565_, 3);
lean_dec(v_unused_2615_);
v_unused_2616_ = lean_ctor_get(v___x_2565_, 2);
lean_dec(v_unused_2616_);
v_unused_2617_ = lean_ctor_get(v___x_2565_, 0);
lean_dec(v_unused_2617_);
v___x_2568_ = v___x_2565_;
v_isShared_2569_ = v_isSharedCheck_2613_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_cache_2566_);
lean_dec(v___x_2565_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2613_;
goto v_resetjp_2567_;
}
v___jp_2525_:
{
lean_object* v___x_2526_; 
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
v___x_2526_ = lean_apply_5(v_inferType_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, lean_box(0));
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; uint8_t v___x_2528_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
v___x_2528_ = l_Lean_Expr_hasMVar(v_a_2527_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2563_; 
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2563_ == 0)
{
lean_object* v_unused_2564_; 
v_unused_2564_ = lean_ctor_get(v___x_2526_, 0);
lean_dec(v_unused_2564_);
v___x_2530_ = v___x_2526_;
v_isShared_2531_ = v_isSharedCheck_2563_;
goto v_resetjp_2529_;
}
else
{
lean_dec(v___x_2526_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2563_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; lean_object* v_cache_2533_; lean_object* v_mctx_2534_; lean_object* v_zetaDeltaFVarIds_2535_; lean_object* v_postponed_2536_; lean_object* v_diag_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2562_; 
v___x_2532_ = lean_st_ref_take(v___y_2473_);
v_cache_2533_ = lean_ctor_get(v___x_2532_, 1);
v_mctx_2534_ = lean_ctor_get(v___x_2532_, 0);
v_zetaDeltaFVarIds_2535_ = lean_ctor_get(v___x_2532_, 2);
v_postponed_2536_ = lean_ctor_get(v___x_2532_, 3);
v_diag_2537_ = lean_ctor_get(v___x_2532_, 4);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2539_ = v___x_2532_;
v_isShared_2540_ = v_isSharedCheck_2562_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_diag_2537_);
lean_inc(v_postponed_2536_);
lean_inc(v_zetaDeltaFVarIds_2535_);
lean_inc(v_cache_2533_);
lean_inc(v_mctx_2534_);
lean_dec(v___x_2532_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2562_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v_inferType_2541_; lean_object* v_funInfo_2542_; lean_object* v_synthInstance_2543_; lean_object* v_whnf_2544_; lean_object* v_defEqTrans_2545_; lean_object* v_defEqPerm_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2561_; 
v_inferType_2541_ = lean_ctor_get(v_cache_2533_, 0);
v_funInfo_2542_ = lean_ctor_get(v_cache_2533_, 1);
v_synthInstance_2543_ = lean_ctor_get(v_cache_2533_, 2);
v_whnf_2544_ = lean_ctor_get(v_cache_2533_, 3);
v_defEqTrans_2545_ = lean_ctor_get(v_cache_2533_, 4);
v_defEqPerm_2546_ = lean_ctor_get(v_cache_2533_, 5);
v_isSharedCheck_2561_ = !lean_is_exclusive(v_cache_2533_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2548_ = v_cache_2533_;
v_isShared_2549_ = v_isSharedCheck_2561_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_defEqPerm_2546_);
lean_inc(v_defEqTrans_2545_);
lean_inc(v_whnf_2544_);
lean_inc(v_synthInstance_2543_);
lean_inc(v_funInfo_2542_);
lean_inc(v_inferType_2541_);
lean_dec(v_cache_2533_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2561_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2550_; lean_object* v___x_2552_; 
lean_inc(v_a_2527_);
v___x_2550_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2518_, v___x_2519_, v_inferType_2541_, v_a_2521_, v_a_2527_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2550_);
v___x_2552_ = v___x_2548_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2550_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_funInfo_2542_);
lean_ctor_set(v_reuseFailAlloc_2560_, 2, v_synthInstance_2543_);
lean_ctor_set(v_reuseFailAlloc_2560_, 3, v_whnf_2544_);
lean_ctor_set(v_reuseFailAlloc_2560_, 4, v_defEqTrans_2545_);
lean_ctor_set(v_reuseFailAlloc_2560_, 5, v_defEqPerm_2546_);
v___x_2552_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
lean_object* v___x_2554_; 
if (v_isShared_2540_ == 0)
{
lean_ctor_set(v___x_2539_, 1, v___x_2552_);
v___x_2554_ = v___x_2539_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_mctx_2534_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v___x_2552_);
lean_ctor_set(v_reuseFailAlloc_2559_, 2, v_zetaDeltaFVarIds_2535_);
lean_ctor_set(v_reuseFailAlloc_2559_, 3, v_postponed_2536_);
lean_ctor_set(v_reuseFailAlloc_2559_, 4, v_diag_2537_);
v___x_2554_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2555_; lean_object* v___x_2557_; 
v___x_2555_ = lean_st_ref_put(v___y_2473_, v___x_2554_);
if (v_isShared_2531_ == 0)
{
v___x_2557_ = v___x_2530_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2527_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2527_);
lean_dec(v_a_2521_);
return v___x_2526_;
}
}
else
{
lean_dec(v_a_2521_);
return v___x_2526_;
}
}
v_resetjp_2567_:
{
lean_object* v_inferType_2570_; lean_object* v___x_2571_; 
v_inferType_2570_ = lean_ctor_get(v_cache_2566_, 0);
lean_inc_ref(v_inferType_2570_);
lean_dec_ref(v_cache_2566_);
lean_inc(v_a_2521_);
v___x_2571_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2518_, v___x_2519_, v_inferType_2570_, v_a_2521_);
lean_dec_ref(v_inferType_2570_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v___x_2572_; lean_object* v_toApplicative_2573_; lean_object* v_toFunctor_2574_; lean_object* v_toSeq_2575_; lean_object* v_toSeqLeft_2576_; lean_object* v_toSeqRight_2577_; lean_object* v___f_2578_; lean_object* v___f_2579_; lean_object* v___f_2580_; lean_object* v___f_2581_; lean_object* v___x_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___f_2585_; lean_object* v___x_2587_; 
lean_del_object(v___x_2523_);
v___x_2572_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11);
v_toApplicative_2573_ = lean_ctor_get(v___x_2572_, 0);
v_toFunctor_2574_ = lean_ctor_get(v_toApplicative_2573_, 0);
v_toSeq_2575_ = lean_ctor_get(v_toApplicative_2573_, 2);
v_toSeqLeft_2576_ = lean_ctor_get(v_toApplicative_2573_, 3);
v_toSeqRight_2577_ = lean_ctor_get(v_toApplicative_2573_, 4);
v___f_2578_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12));
v___f_2579_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__13));
lean_inc_ref_n(v_toFunctor_2574_, 2);
v___f_2580_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2580_, 0, v_toFunctor_2574_);
v___f_2581_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2581_, 0, v_toFunctor_2574_);
v___x_2582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___f_2580_);
lean_ctor_set(v___x_2582_, 1, v___f_2581_);
lean_inc(v_toSeqRight_2577_);
v___f_2583_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2583_, 0, v_toSeqRight_2577_);
lean_inc(v_toSeqLeft_2576_);
v___f_2584_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2584_, 0, v_toSeqLeft_2576_);
lean_inc(v_toSeq_2575_);
v___f_2585_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2585_, 0, v_toSeq_2575_);
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 4, v___f_2583_);
lean_ctor_set(v___x_2568_, 3, v___f_2584_);
lean_ctor_set(v___x_2568_, 2, v___f_2585_);
lean_ctor_set(v___x_2568_, 1, v___f_2578_);
lean_ctor_set(v___x_2568_, 0, v___x_2582_);
v___x_2587_ = v___x_2568_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2582_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v___f_2578_);
lean_ctor_set(v_reuseFailAlloc_2608_, 2, v___f_2585_);
lean_ctor_set(v_reuseFailAlloc_2608_, 3, v___f_2584_);
lean_ctor_set(v_reuseFailAlloc_2608_, 4, v___f_2583_);
v___x_2587_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v_toCold_2594_; lean_object* v_cancelTk_x3f_2595_; 
v___x_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
lean_ctor_set(v___x_2588_, 1, v___f_2579_);
v___x_2589_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__22));
v___x_2590_ = l_Lean_Core_instMonadRefCoreM;
v___x_2591_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2592_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2591_, v___x_2588_);
v___x_2593_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2589_);
lean_ctor_set(v___x_2593_, 1, v___x_2590_);
lean_ctor_set(v___x_2593_, 2, v___x_2592_);
v_toCold_2594_ = lean_ctor_get(v___y_2474_, 0);
v_cancelTk_x3f_2595_ = lean_ctor_get(v_toCold_2594_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2595_) == 1)
{
lean_object* v_val_2596_; uint8_t v___x_2597_; 
v_val_2596_ = lean_ctor_get(v_cancelTk_x3f_2595_, 0);
v___x_2597_ = l_IO_CancelToken_isSet(v_val_2596_);
if (v___x_2597_ == 0)
{
lean_dec_ref_known(v___x_2593_, 3);
goto v___jp_2525_;
}
else
{
lean_object* v___x_2372__overap_2598_; lean_object* v___x_2599_; 
v___x_2372__overap_2598_ = l_Lean_throwInterruptException___redArg(v___x_2593_);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
v___x_2599_ = lean_apply_3(v___x_2372__overap_2598_, v___y_2474_, v___y_2475_, lean_box(0));
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_dec_ref_known(v___x_2599_, 1);
goto v___jp_2525_;
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec(v_a_2521_);
lean_dec_ref(v_inferType_2471_);
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2599_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2599_);
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
}
else
{
lean_dec_ref_known(v___x_2593_, 3);
goto v___jp_2525_;
}
}
}
else
{
lean_object* v_val_2609_; lean_object* v___x_2611_; 
lean_del_object(v___x_2568_);
lean_dec(v_a_2521_);
lean_dec_ref(v_inferType_2471_);
v_val_2609_ = lean_ctor_get(v___x_2571_, 0);
lean_inc(v_val_2609_);
lean_dec_ref_known(v___x_2571_, 1);
if (v_isShared_2524_ == 0)
{
lean_ctor_set(v___x_2523_, 0, v_val_2609_);
v___x_2611_ = v___x_2523_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_val_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec_ref(v_inferType_2471_);
v_a_2619_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2520_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2520_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
else
{
lean_dec_ref(v_e_2470_);
goto v___jp_2477_;
}
}
v___jp_2477_:
{
lean_object* v___x_2478_; lean_object* v_toApplicative_2479_; lean_object* v_toFunctor_2480_; lean_object* v_toSeq_2481_; lean_object* v_toSeqLeft_2482_; lean_object* v_toSeqRight_2483_; lean_object* v___f_2484_; lean_object* v___f_2485_; lean_object* v___f_2486_; lean_object* v___f_2487_; lean_object* v___x_2488_; lean_object* v___f_2489_; lean_object* v___f_2490_; lean_object* v___f_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v_toCold_2499_; lean_object* v_cancelTk_x3f_2500_; 
v___x_2478_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11);
v_toApplicative_2479_ = lean_ctor_get(v___x_2478_, 0);
v_toFunctor_2480_ = lean_ctor_get(v_toApplicative_2479_, 0);
v_toSeq_2481_ = lean_ctor_get(v_toApplicative_2479_, 2);
v_toSeqLeft_2482_ = lean_ctor_get(v_toApplicative_2479_, 3);
v_toSeqRight_2483_ = lean_ctor_get(v_toApplicative_2479_, 4);
v___f_2484_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12));
v___f_2485_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__13));
lean_inc_ref_n(v_toFunctor_2480_, 2);
v___f_2486_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2486_, 0, v_toFunctor_2480_);
v___f_2487_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2487_, 0, v_toFunctor_2480_);
v___x_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___f_2486_);
lean_ctor_set(v___x_2488_, 1, v___f_2487_);
lean_inc(v_toSeqRight_2483_);
v___f_2489_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2489_, 0, v_toSeqRight_2483_);
lean_inc(v_toSeqLeft_2482_);
v___f_2490_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2490_, 0, v_toSeqLeft_2482_);
lean_inc(v_toSeq_2481_);
v___f_2491_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2491_, 0, v_toSeq_2481_);
v___x_2492_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2488_);
lean_ctor_set(v___x_2492_, 1, v___f_2484_);
lean_ctor_set(v___x_2492_, 2, v___f_2491_);
lean_ctor_set(v___x_2492_, 3, v___f_2490_);
lean_ctor_set(v___x_2492_, 4, v___f_2489_);
v___x_2493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
lean_ctor_set(v___x_2493_, 1, v___f_2485_);
v___x_2494_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__22));
v___x_2495_ = l_Lean_Core_instMonadRefCoreM;
v___x_2496_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2497_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2496_, v___x_2493_);
v___x_2498_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2494_);
lean_ctor_set(v___x_2498_, 1, v___x_2495_);
lean_ctor_set(v___x_2498_, 2, v___x_2497_);
v_toCold_2499_ = lean_ctor_get(v___y_2474_, 0);
v_cancelTk_x3f_2500_ = lean_ctor_get(v_toCold_2499_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2500_) == 1)
{
lean_object* v_val_2501_; uint8_t v___x_2502_; 
v_val_2501_ = lean_ctor_get(v_cancelTk_x3f_2500_, 0);
v___x_2502_ = l_IO_CancelToken_isSet(v_val_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2503_; 
lean_dec_ref_known(v___x_2498_, 3);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
v___x_2503_ = lean_apply_5(v_inferType_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, lean_box(0));
return v___x_2503_;
}
else
{
lean_object* v___x_2332__overap_2504_; lean_object* v___x_2505_; 
v___x_2332__overap_2504_ = l_Lean_throwInterruptException___redArg(v___x_2498_);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
v___x_2505_ = lean_apply_3(v___x_2332__overap_2504_, v___y_2474_, v___y_2475_, lean_box(0));
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v___x_2506_; 
lean_dec_ref_known(v___x_2505_, 1);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
v___x_2506_ = lean_apply_5(v_inferType_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, lean_box(0));
return v___x_2506_;
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec_ref(v_inferType_2471_);
v_a_2507_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2505_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2505_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
else
{
lean_object* v___x_2515_; 
lean_dec_ref_known(v___x_2498_, 3);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
v___x_2515_ = lean_apply_5(v_inferType_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, lean_box(0));
return v___x_2515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object* v_e_2627_, lean_object* v_inferType_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(v_e_2627_, v_inferType_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
return v_res_2634_;
}
}
static lean_object* _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = 2;
v___x_2636_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v___x_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0(lean_object* v_x_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2689_; uint8_t v_beta_2690_; 
v___x_2689_ = l_Lean_Meta_Context_config(v___y_2638_);
v_beta_2690_ = lean_ctor_get_uint8(v___x_2689_, 13);
if (v_beta_2690_ == 0)
{
lean_dec_ref(v___x_2689_);
goto v___jp_2643_;
}
else
{
uint8_t v_iota_2691_; 
v_iota_2691_ = lean_ctor_get_uint8(v___x_2689_, 12);
if (v_iota_2691_ == 0)
{
lean_dec_ref(v___x_2689_);
goto v___jp_2643_;
}
else
{
uint8_t v_zeta_2692_; 
v_zeta_2692_ = lean_ctor_get_uint8(v___x_2689_, 15);
if (v_zeta_2692_ == 0)
{
lean_dec_ref(v___x_2689_);
goto v___jp_2643_;
}
else
{
uint8_t v_zetaHave_2693_; 
v_zetaHave_2693_ = lean_ctor_get_uint8(v___x_2689_, 18);
if (v_zetaHave_2693_ == 0)
{
lean_dec_ref(v___x_2689_);
goto v___jp_2643_;
}
else
{
uint8_t v_zetaDelta_2694_; 
v_zetaDelta_2694_ = lean_ctor_get_uint8(v___x_2689_, 16);
if (v_zetaDelta_2694_ == 0)
{
lean_dec_ref(v___x_2689_);
goto v___jp_2643_;
}
else
{
uint8_t v_etaStruct_2695_; uint8_t v_proj_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; uint8_t v___x_2699_; 
v_etaStruct_2695_ = lean_ctor_get_uint8(v___x_2689_, 10);
v_proj_2696_ = lean_ctor_get_uint8(v___x_2689_, 14);
lean_dec_ref(v___x_2689_);
v___x_2697_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_2696_);
v___x_2698_ = lean_obj_once(&l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0, &l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0);
v___x_2699_ = lean_nat_dec_eq(v___x_2697_, v___x_2698_);
lean_dec(v___x_2697_);
if (v___x_2699_ == 0)
{
goto v___jp_2643_;
}
else
{
uint8_t v___x_2700_; uint8_t v___x_2701_; 
v___x_2700_ = 0;
v___x_2701_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_2695_, v___x_2700_);
if (v___x_2701_ == 0)
{
goto v___jp_2643_;
}
else
{
lean_object* v___x_2702_; 
v___x_2702_ = lean_apply_5(v_x_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, lean_box(0));
return v___x_2702_;
}
}
}
}
}
}
}
v___jp_2643_:
{
lean_object* v___x_2644_; uint8_t v_foApprox_2645_; uint8_t v_ctxApprox_2646_; uint8_t v_quasiPatternApprox_2647_; uint8_t v_constApprox_2648_; uint8_t v_isDefEqStuckEx_2649_; uint8_t v_unificationHints_2650_; uint8_t v_proofIrrelevance_2651_; uint8_t v_assignSyntheticOpaque_2652_; uint8_t v_offsetCnstrs_2653_; uint8_t v_transparency_2654_; uint8_t v_univApprox_2655_; uint8_t v_zetaUnused_2656_; uint8_t v_canUnfoldPredicateConfig_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2688_; 
v___x_2644_ = l_Lean_Meta_Context_config(v___y_2638_);
v_foApprox_2645_ = lean_ctor_get_uint8(v___x_2644_, 0);
v_ctxApprox_2646_ = lean_ctor_get_uint8(v___x_2644_, 1);
v_quasiPatternApprox_2647_ = lean_ctor_get_uint8(v___x_2644_, 2);
v_constApprox_2648_ = lean_ctor_get_uint8(v___x_2644_, 3);
v_isDefEqStuckEx_2649_ = lean_ctor_get_uint8(v___x_2644_, 4);
v_unificationHints_2650_ = lean_ctor_get_uint8(v___x_2644_, 5);
v_proofIrrelevance_2651_ = lean_ctor_get_uint8(v___x_2644_, 6);
v_assignSyntheticOpaque_2652_ = lean_ctor_get_uint8(v___x_2644_, 7);
v_offsetCnstrs_2653_ = lean_ctor_get_uint8(v___x_2644_, 8);
v_transparency_2654_ = lean_ctor_get_uint8(v___x_2644_, 9);
v_univApprox_2655_ = lean_ctor_get_uint8(v___x_2644_, 11);
v_zetaUnused_2656_ = lean_ctor_get_uint8(v___x_2644_, 17);
v_canUnfoldPredicateConfig_2657_ = lean_ctor_get_uint8(v___x_2644_, 19);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2659_ = v___x_2644_;
v_isShared_2660_ = v_isSharedCheck_2688_;
goto v_resetjp_2658_;
}
else
{
lean_dec(v___x_2644_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2688_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
uint8_t v___x_2661_; uint8_t v___x_2662_; uint8_t v___x_2663_; lean_object* v___x_2665_; 
v___x_2661_ = 1;
v___x_2662_ = 0;
v___x_2663_ = 2;
if (v_isShared_2660_ == 0)
{
v___x_2665_ = v___x_2659_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 0, v_foApprox_2645_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 1, v_ctxApprox_2646_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 2, v_quasiPatternApprox_2647_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 3, v_constApprox_2648_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 4, v_isDefEqStuckEx_2649_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 5, v_unificationHints_2650_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 6, v_proofIrrelevance_2651_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 7, v_assignSyntheticOpaque_2652_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 8, v_offsetCnstrs_2653_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 9, v_transparency_2654_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 11, v_univApprox_2655_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 17, v_zetaUnused_2656_);
lean_ctor_set_uint8(v_reuseFailAlloc_2687_, 19, v_canUnfoldPredicateConfig_2657_);
v___x_2665_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
uint8_t v_trackZetaDelta_2666_; lean_object* v_zetaDeltaSet_2667_; lean_object* v_lctx_2668_; lean_object* v_localInstances_2669_; lean_object* v_defEqCtx_x3f_2670_; lean_object* v_synthPendingDepth_2671_; lean_object* v_customCanUnfoldPredicate_x3f_2672_; uint8_t v_univApprox_2673_; uint8_t v_inTypeClassResolution_2674_; uint8_t v_cacheInferType_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2685_; 
lean_ctor_set_uint8(v___x_2665_, 10, v___x_2662_);
lean_ctor_set_uint8(v___x_2665_, 12, v___x_2661_);
lean_ctor_set_uint8(v___x_2665_, 13, v___x_2661_);
lean_ctor_set_uint8(v___x_2665_, 14, v___x_2663_);
lean_ctor_set_uint8(v___x_2665_, 15, v___x_2661_);
lean_ctor_set_uint8(v___x_2665_, 16, v___x_2661_);
lean_ctor_set_uint8(v___x_2665_, 18, v___x_2661_);
v_trackZetaDelta_2666_ = lean_ctor_get_uint8(v___y_2638_, sizeof(void*)*7);
v_zetaDeltaSet_2667_ = lean_ctor_get(v___y_2638_, 1);
v_lctx_2668_ = lean_ctor_get(v___y_2638_, 2);
v_localInstances_2669_ = lean_ctor_get(v___y_2638_, 3);
v_defEqCtx_x3f_2670_ = lean_ctor_get(v___y_2638_, 4);
v_synthPendingDepth_2671_ = lean_ctor_get(v___y_2638_, 5);
v_customCanUnfoldPredicate_x3f_2672_ = lean_ctor_get(v___y_2638_, 6);
v_univApprox_2673_ = lean_ctor_get_uint8(v___y_2638_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2674_ = lean_ctor_get_uint8(v___y_2638_, sizeof(void*)*7 + 2);
v_cacheInferType_2675_ = lean_ctor_get_uint8(v___y_2638_, sizeof(void*)*7 + 3);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___y_2638_);
if (v_isSharedCheck_2685_ == 0)
{
lean_object* v_unused_2686_; 
v_unused_2686_ = lean_ctor_get(v___y_2638_, 0);
lean_dec(v_unused_2686_);
v___x_2677_ = v___y_2638_;
v_isShared_2678_ = v_isSharedCheck_2685_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_2672_);
lean_inc(v_synthPendingDepth_2671_);
lean_inc(v_defEqCtx_x3f_2670_);
lean_inc(v_localInstances_2669_);
lean_inc(v_lctx_2668_);
lean_inc(v_zetaDeltaSet_2667_);
lean_dec(v___y_2638_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2685_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
uint64_t v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2679_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2665_);
v___x_2680_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2680_, 0, v___x_2665_);
lean_ctor_set_uint64(v___x_2680_, sizeof(void*)*1, v___x_2679_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2680_);
v___x_2682_ = v___x_2677_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_zetaDeltaSet_2667_);
lean_ctor_set(v_reuseFailAlloc_2684_, 2, v_lctx_2668_);
lean_ctor_set(v_reuseFailAlloc_2684_, 3, v_localInstances_2669_);
lean_ctor_set(v_reuseFailAlloc_2684_, 4, v_defEqCtx_x3f_2670_);
lean_ctor_set(v_reuseFailAlloc_2684_, 5, v_synthPendingDepth_2671_);
lean_ctor_set(v_reuseFailAlloc_2684_, 6, v_customCanUnfoldPredicate_x3f_2672_);
lean_ctor_set_uint8(v_reuseFailAlloc_2684_, sizeof(void*)*7, v_trackZetaDelta_2666_);
lean_ctor_set_uint8(v_reuseFailAlloc_2684_, sizeof(void*)*7 + 1, v_univApprox_2673_);
lean_ctor_set_uint8(v_reuseFailAlloc_2684_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2674_);
lean_ctor_set_uint8(v_reuseFailAlloc_2684_, sizeof(void*)*7 + 3, v_cacheInferType_2675_);
v___x_2682_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
lean_object* v___x_2683_; 
v___x_2683_ = lean_apply_5(v_x_2637_, v___x_2682_, v___y_2639_, v___y_2640_, v___y_2641_, lean_box(0));
return v___x_2683_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___boxed(lean_object* v_x_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object* v_x_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___y_2717_; lean_object* v___x_2734_; uint8_t v_transparency_2735_; uint8_t v___x_2736_; uint8_t v___x_2737_; 
v___x_2734_ = l_Lean_Meta_Context_config(v___y_2711_);
v_transparency_2735_ = lean_ctor_get_uint8(v___x_2734_, 9);
lean_dec_ref(v___x_2734_);
v___x_2736_ = 1;
v___x_2737_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2735_, v___x_2736_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; 
lean_inc(v___y_2714_);
lean_inc_ref(v___y_2713_);
lean_inc(v___y_2712_);
lean_inc_ref(v___y_2711_);
v___x_2738_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
v___y_2717_ = v___x_2738_;
goto v___jp_2716_;
}
else
{
lean_object* v_keyedConfig_2739_; uint8_t v_trackZetaDelta_2740_; lean_object* v_zetaDeltaSet_2741_; lean_object* v_lctx_2742_; lean_object* v_localInstances_2743_; lean_object* v_defEqCtx_x3f_2744_; lean_object* v_synthPendingDepth_2745_; lean_object* v_customCanUnfoldPredicate_x3f_2746_; uint8_t v_univApprox_2747_; uint8_t v_inTypeClassResolution_2748_; uint8_t v_cacheInferType_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v_keyedConfig_2739_ = lean_ctor_get(v___y_2711_, 0);
v_trackZetaDelta_2740_ = lean_ctor_get_uint8(v___y_2711_, sizeof(void*)*7);
v_zetaDeltaSet_2741_ = lean_ctor_get(v___y_2711_, 1);
v_lctx_2742_ = lean_ctor_get(v___y_2711_, 2);
v_localInstances_2743_ = lean_ctor_get(v___y_2711_, 3);
v_defEqCtx_x3f_2744_ = lean_ctor_get(v___y_2711_, 4);
v_synthPendingDepth_2745_ = lean_ctor_get(v___y_2711_, 5);
v_customCanUnfoldPredicate_x3f_2746_ = lean_ctor_get(v___y_2711_, 6);
v_univApprox_2747_ = lean_ctor_get_uint8(v___y_2711_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2748_ = lean_ctor_get_uint8(v___y_2711_, sizeof(void*)*7 + 2);
v_cacheInferType_2749_ = lean_ctor_get_uint8(v___y_2711_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2739_);
v___x_2750_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2736_, v_keyedConfig_2739_);
lean_inc(v_customCanUnfoldPredicate_x3f_2746_);
lean_inc(v_synthPendingDepth_2745_);
lean_inc(v_defEqCtx_x3f_2744_);
lean_inc_ref(v_localInstances_2743_);
lean_inc_ref(v_lctx_2742_);
lean_inc(v_zetaDeltaSet_2741_);
v___x_2751_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
lean_ctor_set(v___x_2751_, 1, v_zetaDeltaSet_2741_);
lean_ctor_set(v___x_2751_, 2, v_lctx_2742_);
lean_ctor_set(v___x_2751_, 3, v_localInstances_2743_);
lean_ctor_set(v___x_2751_, 4, v_defEqCtx_x3f_2744_);
lean_ctor_set(v___x_2751_, 5, v_synthPendingDepth_2745_);
lean_ctor_set(v___x_2751_, 6, v_customCanUnfoldPredicate_x3f_2746_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*7, v_trackZetaDelta_2740_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*7 + 1, v_univApprox_2747_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2748_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*7 + 3, v_cacheInferType_2749_);
lean_inc(v___y_2714_);
lean_inc_ref(v___y_2713_);
lean_inc(v___y_2712_);
v___x_2752_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2710_, v___x_2751_, v___y_2712_, v___y_2713_, v___y_2714_);
v___y_2717_ = v___x_2752_;
goto v___jp_2716_;
}
v___jp_2716_:
{
if (lean_obj_tag(v___y_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
v_a_2718_ = lean_ctor_get(v___y_2717_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___y_2717_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___y_2717_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___y_2717_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_a_2726_ = lean_ctor_get(v___y_2717_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___y_2717_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___y_2717_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___y_2717_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object* v_x_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lean_Meta_withInferTypeConfig___redArg(v_x_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
lean_dec(v___y_2755_);
lean_dec_ref(v___y_2754_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object* v_00_u03b1_2760_, lean_object* v_x_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v___y_2768_; lean_object* v___x_2785_; uint8_t v_transparency_2786_; uint8_t v___x_2787_; uint8_t v___x_2788_; 
v___x_2785_ = l_Lean_Meta_Context_config(v___y_2762_);
v_transparency_2786_ = lean_ctor_get_uint8(v___x_2785_, 9);
lean_dec_ref(v___x_2785_);
v___x_2787_ = 1;
v___x_2788_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2786_, v___x_2787_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; 
lean_inc(v___y_2765_);
lean_inc_ref(v___y_2764_);
lean_inc(v___y_2763_);
lean_inc_ref(v___y_2762_);
v___x_2789_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
v___y_2768_ = v___x_2789_;
goto v___jp_2767_;
}
else
{
lean_object* v_keyedConfig_2790_; uint8_t v_trackZetaDelta_2791_; lean_object* v_zetaDeltaSet_2792_; lean_object* v_lctx_2793_; lean_object* v_localInstances_2794_; lean_object* v_defEqCtx_x3f_2795_; lean_object* v_synthPendingDepth_2796_; lean_object* v_customCanUnfoldPredicate_x3f_2797_; uint8_t v_univApprox_2798_; uint8_t v_inTypeClassResolution_2799_; uint8_t v_cacheInferType_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v_keyedConfig_2790_ = lean_ctor_get(v___y_2762_, 0);
v_trackZetaDelta_2791_ = lean_ctor_get_uint8(v___y_2762_, sizeof(void*)*7);
v_zetaDeltaSet_2792_ = lean_ctor_get(v___y_2762_, 1);
v_lctx_2793_ = lean_ctor_get(v___y_2762_, 2);
v_localInstances_2794_ = lean_ctor_get(v___y_2762_, 3);
v_defEqCtx_x3f_2795_ = lean_ctor_get(v___y_2762_, 4);
v_synthPendingDepth_2796_ = lean_ctor_get(v___y_2762_, 5);
v_customCanUnfoldPredicate_x3f_2797_ = lean_ctor_get(v___y_2762_, 6);
v_univApprox_2798_ = lean_ctor_get_uint8(v___y_2762_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2799_ = lean_ctor_get_uint8(v___y_2762_, sizeof(void*)*7 + 2);
v_cacheInferType_2800_ = lean_ctor_get_uint8(v___y_2762_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2790_);
v___x_2801_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2787_, v_keyedConfig_2790_);
lean_inc(v_customCanUnfoldPredicate_x3f_2797_);
lean_inc(v_synthPendingDepth_2796_);
lean_inc(v_defEqCtx_x3f_2795_);
lean_inc_ref(v_localInstances_2794_);
lean_inc_ref(v_lctx_2793_);
lean_inc(v_zetaDeltaSet_2792_);
v___x_2802_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
lean_ctor_set(v___x_2802_, 1, v_zetaDeltaSet_2792_);
lean_ctor_set(v___x_2802_, 2, v_lctx_2793_);
lean_ctor_set(v___x_2802_, 3, v_localInstances_2794_);
lean_ctor_set(v___x_2802_, 4, v_defEqCtx_x3f_2795_);
lean_ctor_set(v___x_2802_, 5, v_synthPendingDepth_2796_);
lean_ctor_set(v___x_2802_, 6, v_customCanUnfoldPredicate_x3f_2797_);
lean_ctor_set_uint8(v___x_2802_, sizeof(void*)*7, v_trackZetaDelta_2791_);
lean_ctor_set_uint8(v___x_2802_, sizeof(void*)*7 + 1, v_univApprox_2798_);
lean_ctor_set_uint8(v___x_2802_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2799_);
lean_ctor_set_uint8(v___x_2802_, sizeof(void*)*7 + 3, v_cacheInferType_2800_);
lean_inc(v___y_2765_);
lean_inc_ref(v___y_2764_);
lean_inc(v___y_2763_);
v___x_2803_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2761_, v___x_2802_, v___y_2763_, v___y_2764_, v___y_2765_);
v___y_2768_ = v___x_2803_;
goto v___jp_2767_;
}
v___jp_2767_:
{
if (lean_obj_tag(v___y_2768_) == 0)
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2776_; 
v_a_2769_ = lean_ctor_get(v___y_2768_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___y_2768_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2771_ = v___y_2768_;
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___y_2768_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2774_; 
if (v_isShared_2772_ == 0)
{
v___x_2774_ = v___x_2771_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2769_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
return v___x_2774_;
}
}
}
else
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2784_; 
v_a_2777_ = lean_ctor_get(v___y_2768_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___y_2768_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2779_ = v___y_2768_;
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v___y_2768_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2782_; 
if (v_isShared_2780_ == 0)
{
v___x_2782_ = v___x_2779_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2777_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object* v_00_u03b1_2804_, lean_object* v_x_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lean_Meta_withInferTypeConfig(v_00_u03b1_2804_, v_x_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
return v_res_2811_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2812_ = lean_box(0);
v___x_2813_ = l_Lean_interruptExceptionId;
v___x_2814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2813_);
lean_ctor_set(v___x_2814_, 1, v___x_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = lean_obj_once(&l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0, &l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0);
v___x_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object* v___y_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object* v_00_u03b1_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object* v_00_u03b1_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(v_00_u03b1_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_x_2830_, lean_object* v_x_2831_, lean_object* v_x_2832_, lean_object* v_x_2833_){
_start:
{
lean_object* v_ks_2834_; lean_object* v_vs_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2864_; 
v_ks_2834_ = lean_ctor_get(v_x_2830_, 0);
v_vs_2835_ = lean_ctor_get(v_x_2830_, 1);
v_isSharedCheck_2864_ = !lean_is_exclusive(v_x_2830_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2837_ = v_x_2830_;
v_isShared_2838_ = v_isSharedCheck_2864_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_vs_2835_);
lean_inc(v_ks_2834_);
lean_dec(v_x_2830_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2864_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
uint8_t v___y_2840_; lean_object* v___x_2852_; uint8_t v___x_2853_; 
v___x_2852_ = lean_array_get_size(v_ks_2834_);
v___x_2853_ = lean_nat_dec_lt(v_x_2831_, v___x_2852_);
if (v___x_2853_ == 0)
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
lean_del_object(v___x_2837_);
lean_dec(v_x_2831_);
v___x_2854_ = lean_array_push(v_ks_2834_, v_x_2832_);
v___x_2855_ = lean_array_push(v_vs_2835_, v_x_2833_);
v___x_2856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2854_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
return v___x_2856_;
}
else
{
lean_object* v_expr_2857_; uint64_t v_configKey_2858_; lean_object* v_k_x27_2859_; lean_object* v_expr_2860_; uint64_t v_configKey_2861_; uint8_t v___x_2862_; 
v_expr_2857_ = lean_ctor_get(v_x_2832_, 0);
v_configKey_2858_ = lean_ctor_get_uint64(v_x_2832_, sizeof(void*)*1);
v_k_x27_2859_ = lean_array_fget_borrowed(v_ks_2834_, v_x_2831_);
v_expr_2860_ = lean_ctor_get(v_k_x27_2859_, 0);
v_configKey_2861_ = lean_ctor_get_uint64(v_k_x27_2859_, sizeof(void*)*1);
v___x_2862_ = lean_expr_equal(v_expr_2857_, v_expr_2860_);
if (v___x_2862_ == 0)
{
v___y_2840_ = v___x_2862_;
goto v___jp_2839_;
}
else
{
uint8_t v___x_2863_; 
v___x_2863_ = lean_uint64_dec_eq(v_configKey_2858_, v_configKey_2861_);
v___y_2840_ = v___x_2863_;
goto v___jp_2839_;
}
}
v___jp_2839_:
{
if (v___y_2840_ == 0)
{
lean_object* v___x_2842_; 
if (v_isShared_2838_ == 0)
{
v___x_2842_ = v___x_2837_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_ks_2834_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v_vs_2835_);
v___x_2842_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = lean_unsigned_to_nat(1u);
v___x_2844_ = lean_nat_add(v_x_2831_, v___x_2843_);
lean_dec(v_x_2831_);
v_x_2830_ = v___x_2842_;
v_x_2831_ = v___x_2844_;
goto _start;
}
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2847_ = lean_array_fset(v_ks_2834_, v_x_2831_, v_x_2832_);
v___x_2848_ = lean_array_fset(v_vs_2835_, v_x_2831_, v_x_2833_);
lean_dec(v_x_2831_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 1, v___x_2848_);
lean_ctor_set(v___x_2837_, 0, v___x_2847_);
v___x_2850_ = v___x_2837_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2847_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v___x_2848_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object* v_n_2865_, lean_object* v_k_2866_, lean_object* v_v_2867_){
_start:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = lean_unsigned_to_nat(0u);
v___x_2869_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(v_n_2865_, v___x_2868_, v_k_2866_, v_v_2867_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object* v_x_2870_, size_t v_x_2871_, size_t v_x_2872_, lean_object* v_x_2873_, lean_object* v_x_2874_){
_start:
{
if (lean_obj_tag(v_x_2870_) == 0)
{
lean_object* v_es_2875_; size_t v___x_2876_; size_t v___x_2877_; lean_object* v_j_2878_; lean_object* v___x_2879_; uint8_t v___x_2880_; 
v_es_2875_ = lean_ctor_get(v_x_2870_, 0);
v___x_2876_ = ((size_t)31ULL);
v___x_2877_ = lean_usize_land(v_x_2871_, v___x_2876_);
v_j_2878_ = lean_usize_to_nat(v___x_2877_);
v___x_2879_ = lean_array_get_size(v_es_2875_);
v___x_2880_ = lean_nat_dec_lt(v_j_2878_, v___x_2879_);
if (v___x_2880_ == 0)
{
lean_dec(v_j_2878_);
lean_dec(v_x_2874_);
lean_dec_ref(v_x_2873_);
return v_x_2870_;
}
else
{
lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2926_; 
lean_inc_ref(v_es_2875_);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_x_2870_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; 
v_unused_2927_ = lean_ctor_get(v_x_2870_, 0);
lean_dec(v_unused_2927_);
v___x_2882_ = v_x_2870_;
v_isShared_2883_ = v_isSharedCheck_2926_;
goto v_resetjp_2881_;
}
else
{
lean_dec(v_x_2870_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2926_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v_v_2884_; lean_object* v___x_2885_; lean_object* v_xs_x27_2886_; lean_object* v___y_2888_; 
v_v_2884_ = lean_array_fget(v_es_2875_, v_j_2878_);
v___x_2885_ = lean_box(0);
v_xs_x27_2886_ = lean_array_fset(v_es_2875_, v_j_2878_, v___x_2885_);
switch(lean_obj_tag(v_v_2884_))
{
case 0:
{
lean_object* v_key_2893_; lean_object* v_val_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2911_; 
v_key_2893_ = lean_ctor_get(v_v_2884_, 0);
v_val_2894_ = lean_ctor_get(v_v_2884_, 1);
v_isSharedCheck_2911_ = !lean_is_exclusive(v_v_2884_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2896_ = v_v_2884_;
v_isShared_2897_ = v_isSharedCheck_2911_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_val_2894_);
lean_inc(v_key_2893_);
lean_dec(v_v_2884_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2911_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
uint8_t v___y_2899_; lean_object* v_expr_2905_; uint64_t v_configKey_2906_; lean_object* v_expr_2907_; uint64_t v_configKey_2908_; uint8_t v___x_2909_; 
v_expr_2905_ = lean_ctor_get(v_x_2873_, 0);
v_configKey_2906_ = lean_ctor_get_uint64(v_x_2873_, sizeof(void*)*1);
v_expr_2907_ = lean_ctor_get(v_key_2893_, 0);
v_configKey_2908_ = lean_ctor_get_uint64(v_key_2893_, sizeof(void*)*1);
v___x_2909_ = lean_expr_equal(v_expr_2905_, v_expr_2907_);
if (v___x_2909_ == 0)
{
v___y_2899_ = v___x_2909_;
goto v___jp_2898_;
}
else
{
uint8_t v___x_2910_; 
v___x_2910_ = lean_uint64_dec_eq(v_configKey_2906_, v_configKey_2908_);
v___y_2899_ = v___x_2910_;
goto v___jp_2898_;
}
v___jp_2898_:
{
if (v___y_2899_ == 0)
{
lean_object* v___x_2900_; lean_object* v___x_2901_; 
lean_del_object(v___x_2896_);
v___x_2900_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2893_, v_val_2894_, v_x_2873_, v_x_2874_);
v___x_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
v___y_2888_ = v___x_2901_;
goto v___jp_2887_;
}
else
{
lean_object* v___x_2903_; 
lean_dec(v_val_2894_);
lean_dec(v_key_2893_);
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v_x_2874_);
lean_ctor_set(v___x_2896_, 0, v_x_2873_);
v___x_2903_ = v___x_2896_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v_x_2873_);
lean_ctor_set(v_reuseFailAlloc_2904_, 1, v_x_2874_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
v___y_2888_ = v___x_2903_;
goto v___jp_2887_;
}
}
}
}
}
case 1:
{
lean_object* v_node_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2924_; 
v_node_2912_ = lean_ctor_get(v_v_2884_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v_v_2884_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2914_ = v_v_2884_;
v_isShared_2915_ = v_isSharedCheck_2924_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_node_2912_);
lean_dec(v_v_2884_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2924_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
size_t v___x_2916_; size_t v___x_2917_; size_t v___x_2918_; size_t v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2922_; 
v___x_2916_ = ((size_t)5ULL);
v___x_2917_ = lean_usize_shift_right(v_x_2871_, v___x_2916_);
v___x_2918_ = ((size_t)1ULL);
v___x_2919_ = lean_usize_add(v_x_2872_, v___x_2918_);
v___x_2920_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_node_2912_, v___x_2917_, v___x_2919_, v_x_2873_, v_x_2874_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v___x_2920_);
v___x_2922_ = v___x_2914_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v___x_2920_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
v___y_2888_ = v___x_2922_;
goto v___jp_2887_;
}
}
}
default: 
{
lean_object* v___x_2925_; 
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v_x_2873_);
lean_ctor_set(v___x_2925_, 1, v_x_2874_);
v___y_2888_ = v___x_2925_;
goto v___jp_2887_;
}
}
v___jp_2887_:
{
lean_object* v___x_2889_; lean_object* v___x_2891_; 
v___x_2889_ = lean_array_fset(v_xs_x27_2886_, v_j_2878_, v___y_2888_);
lean_dec(v_j_2878_);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 0, v___x_2889_);
v___x_2891_ = v___x_2882_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v___x_2889_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
}
}
else
{
lean_object* v_ks_2928_; lean_object* v_vs_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2947_; 
v_ks_2928_ = lean_ctor_get(v_x_2870_, 0);
v_vs_2929_ = lean_ctor_get(v_x_2870_, 1);
v_isSharedCheck_2947_ = !lean_is_exclusive(v_x_2870_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2931_ = v_x_2870_;
v_isShared_2932_ = v_isSharedCheck_2947_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_vs_2929_);
lean_inc(v_ks_2928_);
lean_dec(v_x_2870_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2947_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_ks_2928_);
lean_ctor_set(v_reuseFailAlloc_2946_, 1, v_vs_2929_);
v___x_2934_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
lean_object* v_newNode_2935_; size_t v___x_2936_; uint8_t v___x_2937_; 
v_newNode_2935_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v___x_2934_, v_x_2873_, v_x_2874_);
v___x_2936_ = ((size_t)7ULL);
v___x_2937_ = lean_usize_dec_le(v___x_2936_, v_x_2872_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v___x_2938_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2935_);
v___x_2939_ = lean_unsigned_to_nat(4u);
v___x_2940_ = lean_nat_dec_lt(v___x_2938_, v___x_2939_);
lean_dec(v___x_2938_);
if (v___x_2940_ == 0)
{
lean_object* v_ks_2941_; lean_object* v_vs_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v_ks_2941_ = lean_ctor_get(v_newNode_2935_, 0);
lean_inc_ref(v_ks_2941_);
v_vs_2942_ = lean_ctor_get(v_newNode_2935_, 1);
lean_inc_ref(v_vs_2942_);
lean_dec_ref(v_newNode_2935_);
v___x_2943_ = lean_unsigned_to_nat(0u);
v___x_2944_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_2945_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_x_2872_, v_ks_2941_, v_vs_2942_, v___x_2943_, v___x_2944_);
lean_dec_ref(v_vs_2942_);
lean_dec_ref(v_ks_2941_);
return v___x_2945_;
}
else
{
return v_newNode_2935_;
}
}
else
{
return v_newNode_2935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t v_depth_2948_, lean_object* v_keys_2949_, lean_object* v_vals_2950_, lean_object* v_i_2951_, lean_object* v_entries_2952_){
_start:
{
lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2953_ = lean_array_get_size(v_keys_2949_);
v___x_2954_ = lean_nat_dec_lt(v_i_2951_, v___x_2953_);
if (v___x_2954_ == 0)
{
lean_dec(v_i_2951_);
return v_entries_2952_;
}
else
{
lean_object* v_k_2955_; lean_object* v_expr_2956_; uint64_t v_configKey_2957_; lean_object* v_v_2958_; uint64_t v___x_2959_; uint64_t v___x_2960_; size_t v_h_2961_; size_t v___x_2962_; lean_object* v___x_2963_; size_t v___x_2964_; size_t v___x_2965_; size_t v___x_2966_; size_t v_h_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v_k_2955_ = lean_array_fget_borrowed(v_keys_2949_, v_i_2951_);
v_expr_2956_ = lean_ctor_get(v_k_2955_, 0);
v_configKey_2957_ = lean_ctor_get_uint64(v_k_2955_, sizeof(void*)*1);
v_v_2958_ = lean_array_fget_borrowed(v_vals_2950_, v_i_2951_);
v___x_2959_ = l_Lean_Expr_hash(v_expr_2956_);
v___x_2960_ = lean_uint64_mix_hash(v___x_2959_, v_configKey_2957_);
v_h_2961_ = lean_uint64_to_usize(v___x_2960_);
v___x_2962_ = ((size_t)5ULL);
v___x_2963_ = lean_unsigned_to_nat(1u);
v___x_2964_ = ((size_t)1ULL);
v___x_2965_ = lean_usize_sub(v_depth_2948_, v___x_2964_);
v___x_2966_ = lean_usize_mul(v___x_2962_, v___x_2965_);
v_h_2967_ = lean_usize_shift_right(v_h_2961_, v___x_2966_);
v___x_2968_ = lean_nat_add(v_i_2951_, v___x_2963_);
lean_dec(v_i_2951_);
lean_inc(v_v_2958_);
lean_inc(v_k_2955_);
v___x_2969_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_entries_2952_, v_h_2967_, v_depth_2948_, v_k_2955_, v_v_2958_);
v_i_2951_ = v___x_2968_;
v_entries_2952_ = v___x_2969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_depth_2971_, lean_object* v_keys_2972_, lean_object* v_vals_2973_, lean_object* v_i_2974_, lean_object* v_entries_2975_){
_start:
{
size_t v_depth_boxed_2976_; lean_object* v_res_2977_; 
v_depth_boxed_2976_ = lean_unbox_usize(v_depth_2971_);
lean_dec(v_depth_2971_);
v_res_2977_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_boxed_2976_, v_keys_2972_, v_vals_2973_, v_i_2974_, v_entries_2975_);
lean_dec_ref(v_vals_2973_);
lean_dec_ref(v_keys_2972_);
return v_res_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object* v_x_2978_, lean_object* v_x_2979_, lean_object* v_x_2980_, lean_object* v_x_2981_, lean_object* v_x_2982_){
_start:
{
size_t v_x_2456__boxed_2983_; size_t v_x_2457__boxed_2984_; lean_object* v_res_2985_; 
v_x_2456__boxed_2983_ = lean_unbox_usize(v_x_2979_);
lean_dec(v_x_2979_);
v_x_2457__boxed_2984_ = lean_unbox_usize(v_x_2980_);
lean_dec(v_x_2980_);
v_res_2985_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_2978_, v_x_2456__boxed_2983_, v_x_2457__boxed_2984_, v_x_2981_, v_x_2982_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object* v_x_2986_, lean_object* v_x_2987_, lean_object* v_x_2988_){
_start:
{
lean_object* v_expr_2989_; uint64_t v_configKey_2990_; uint64_t v___x_2991_; uint64_t v___x_2992_; size_t v___x_2993_; size_t v___x_2994_; lean_object* v___x_2995_; 
v_expr_2989_ = lean_ctor_get(v_x_2987_, 0);
v_configKey_2990_ = lean_ctor_get_uint64(v_x_2987_, sizeof(void*)*1);
v___x_2991_ = l_Lean_Expr_hash(v_expr_2989_);
v___x_2992_ = lean_uint64_mix_hash(v___x_2991_, v_configKey_2990_);
v___x_2993_ = lean_uint64_to_usize(v___x_2992_);
v___x_2994_ = ((size_t)1ULL);
v___x_2995_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_2986_, v___x_2993_, v___x_2994_, v_x_2987_, v_x_2988_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object* v_keys_2996_, lean_object* v_vals_2997_, lean_object* v_i_2998_, lean_object* v_k_2999_){
_start:
{
uint8_t v___y_3001_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_3007_ = lean_array_get_size(v_keys_2996_);
v___x_3008_ = lean_nat_dec_lt(v_i_2998_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; 
lean_dec(v_i_2998_);
v___x_3009_ = lean_box(0);
return v___x_3009_;
}
else
{
lean_object* v_expr_3010_; uint64_t v_configKey_3011_; lean_object* v_k_x27_3012_; lean_object* v_expr_3013_; uint64_t v_configKey_3014_; uint8_t v___x_3015_; 
v_expr_3010_ = lean_ctor_get(v_k_2999_, 0);
v_configKey_3011_ = lean_ctor_get_uint64(v_k_2999_, sizeof(void*)*1);
v_k_x27_3012_ = lean_array_fget_borrowed(v_keys_2996_, v_i_2998_);
v_expr_3013_ = lean_ctor_get(v_k_x27_3012_, 0);
v_configKey_3014_ = lean_ctor_get_uint64(v_k_x27_3012_, sizeof(void*)*1);
v___x_3015_ = lean_expr_equal(v_expr_3010_, v_expr_3013_);
if (v___x_3015_ == 0)
{
v___y_3001_ = v___x_3015_;
goto v___jp_3000_;
}
else
{
uint8_t v___x_3016_; 
v___x_3016_ = lean_uint64_dec_eq(v_configKey_3011_, v_configKey_3014_);
v___y_3001_ = v___x_3016_;
goto v___jp_3000_;
}
}
v___jp_3000_:
{
if (v___y_3001_ == 0)
{
lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_3002_ = lean_unsigned_to_nat(1u);
v___x_3003_ = lean_nat_add(v_i_2998_, v___x_3002_);
lean_dec(v_i_2998_);
v_i_2998_ = v___x_3003_;
goto _start;
}
else
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3005_ = lean_array_fget_borrowed(v_vals_2997_, v_i_2998_);
lean_dec(v_i_2998_);
lean_inc(v___x_3005_);
v___x_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
return v___x_3006_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_keys_3017_, lean_object* v_vals_3018_, lean_object* v_i_3019_, lean_object* v_k_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_3017_, v_vals_3018_, v_i_3019_, v_k_3020_);
lean_dec_ref(v_k_3020_);
lean_dec_ref(v_vals_3018_);
lean_dec_ref(v_keys_3017_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object* v_x_3022_, size_t v_x_3023_, lean_object* v_x_3024_){
_start:
{
if (lean_obj_tag(v_x_3022_) == 0)
{
lean_object* v_es_3025_; lean_object* v___x_3026_; size_t v___x_3027_; size_t v___x_3028_; lean_object* v_j_3029_; lean_object* v___x_3030_; 
v_es_3025_ = lean_ctor_get(v_x_3022_, 0);
v___x_3026_ = lean_box(2);
v___x_3027_ = ((size_t)31ULL);
v___x_3028_ = lean_usize_land(v_x_3023_, v___x_3027_);
v_j_3029_ = lean_usize_to_nat(v___x_3028_);
v___x_3030_ = lean_array_get_borrowed(v___x_3026_, v_es_3025_, v_j_3029_);
lean_dec(v_j_3029_);
switch(lean_obj_tag(v___x_3030_))
{
case 0:
{
lean_object* v_key_3031_; lean_object* v_val_3032_; uint8_t v___y_3034_; lean_object* v_expr_3037_; uint64_t v_configKey_3038_; lean_object* v_expr_3039_; uint64_t v_configKey_3040_; uint8_t v___x_3041_; 
v_key_3031_ = lean_ctor_get(v___x_3030_, 0);
v_val_3032_ = lean_ctor_get(v___x_3030_, 1);
v_expr_3037_ = lean_ctor_get(v_x_3024_, 0);
v_configKey_3038_ = lean_ctor_get_uint64(v_x_3024_, sizeof(void*)*1);
v_expr_3039_ = lean_ctor_get(v_key_3031_, 0);
v_configKey_3040_ = lean_ctor_get_uint64(v_key_3031_, sizeof(void*)*1);
v___x_3041_ = lean_expr_equal(v_expr_3037_, v_expr_3039_);
if (v___x_3041_ == 0)
{
v___y_3034_ = v___x_3041_;
goto v___jp_3033_;
}
else
{
uint8_t v___x_3042_; 
v___x_3042_ = lean_uint64_dec_eq(v_configKey_3038_, v_configKey_3040_);
v___y_3034_ = v___x_3042_;
goto v___jp_3033_;
}
v___jp_3033_:
{
if (v___y_3034_ == 0)
{
lean_object* v___x_3035_; 
v___x_3035_ = lean_box(0);
return v___x_3035_;
}
else
{
lean_object* v___x_3036_; 
lean_inc(v_val_3032_);
v___x_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3036_, 0, v_val_3032_);
return v___x_3036_;
}
}
}
case 1:
{
lean_object* v_node_3043_; size_t v___x_3044_; size_t v___x_3045_; 
v_node_3043_ = lean_ctor_get(v___x_3030_, 0);
v___x_3044_ = ((size_t)5ULL);
v___x_3045_ = lean_usize_shift_right(v_x_3023_, v___x_3044_);
v_x_3022_ = v_node_3043_;
v_x_3023_ = v___x_3045_;
goto _start;
}
default: 
{
lean_object* v___x_3047_; 
v___x_3047_ = lean_box(0);
return v___x_3047_;
}
}
}
else
{
lean_object* v_ks_3048_; lean_object* v_vs_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v_ks_3048_ = lean_ctor_get(v_x_3022_, 0);
v_vs_3049_ = lean_ctor_get(v_x_3022_, 1);
v___x_3050_ = lean_unsigned_to_nat(0u);
v___x_3051_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_ks_3048_, v_vs_3049_, v___x_3050_, v_x_3024_);
return v___x_3051_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object* v_x_3052_, lean_object* v_x_3053_, lean_object* v_x_3054_){
_start:
{
size_t v_x_2660__boxed_3055_; lean_object* v_res_3056_; 
v_x_2660__boxed_3055_ = lean_unbox_usize(v_x_3053_);
lean_dec(v_x_3053_);
v_res_3056_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3052_, v_x_2660__boxed_3055_, v_x_3054_);
lean_dec_ref(v_x_3054_);
lean_dec_ref(v_x_3052_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object* v_x_3057_, lean_object* v_x_3058_){
_start:
{
lean_object* v_expr_3059_; uint64_t v_configKey_3060_; uint64_t v___x_3061_; uint64_t v___x_3062_; size_t v___x_3063_; lean_object* v___x_3064_; 
v_expr_3059_ = lean_ctor_get(v_x_3058_, 0);
v_configKey_3060_ = lean_ctor_get_uint64(v_x_3058_, sizeof(void*)*1);
v___x_3061_ = l_Lean_Expr_hash(v_expr_3059_);
v___x_3062_ = lean_uint64_mix_hash(v___x_3061_, v_configKey_3060_);
v___x_3063_ = lean_uint64_to_usize(v___x_3062_);
v___x_3064_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3057_, v___x_3063_, v_x_3058_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object* v_x_3065_, lean_object* v_x_3066_){
_start:
{
lean_object* v_res_3067_; 
v_res_3067_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3065_, v_x_3066_);
lean_dec_ref(v_x_3066_);
lean_dec_ref(v_x_3065_);
return v_res_3067_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1(void){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0));
v___x_3070_ = l_Lean_stringToMessageData(v___x_3069_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object* v_e_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
switch(lean_obj_tag(v_e_3071_))
{
case 0:
{
lean_object* v_deBruijnIndex_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v_deBruijnIndex_3109_ = lean_ctor_get(v_e_3071_, 0);
lean_inc(v_deBruijnIndex_3109_);
lean_dec_ref_known(v_e_3071_, 1);
v___x_3110_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1);
v___x_3111_ = l_Lean_mkBVar(v_deBruijnIndex_3109_);
v___x_3112_ = l_Lean_MessageData_ofExpr(v___x_3111_);
v___x_3113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3110_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_3113_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3114_;
}
case 1:
{
lean_object* v_fvarId_3115_; lean_object* v___x_3116_; 
v_fvarId_3115_ = lean_ctor_get(v_e_3071_, 0);
lean_inc(v_fvarId_3115_);
lean_dec_ref_known(v_e_3071_, 1);
v___x_3116_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3115_, v___y_3072_, v___y_3074_, v___y_3075_);
return v___x_3116_;
}
case 2:
{
lean_object* v_mvarId_3117_; lean_object* v___x_3118_; 
v_mvarId_3117_ = lean_ctor_get(v_e_3071_, 0);
lean_inc(v_mvarId_3117_);
lean_dec_ref_known(v_e_3071_, 1);
v___x_3118_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3117_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3118_;
}
case 3:
{
lean_object* v_u_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v_u_3119_ = lean_ctor_get(v_e_3071_, 0);
lean_inc(v_u_3119_);
lean_dec_ref_known(v_e_3071_, 1);
v___x_3120_ = l_Lean_Level_succ___override(v_u_3119_);
v___x_3121_ = l_Lean_mkSort(v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
return v___x_3122_;
}
case 4:
{
lean_object* v_declName_3123_; lean_object* v_us_3124_; 
v_declName_3123_ = lean_ctor_get(v_e_3071_, 0);
lean_inc(v_declName_3123_);
v_us_3124_ = lean_ctor_get(v_e_3071_, 1);
lean_inc(v_us_3124_);
if (lean_obj_tag(v_us_3124_) == 0)
{
lean_object* v___x_3141_; 
lean_dec_ref_known(v_e_3071_, 2);
v___x_3141_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3123_, v_us_3124_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3141_;
}
else
{
uint8_t v_cacheInferType_3142_; 
v_cacheInferType_3142_ = lean_ctor_get_uint8(v___y_3072_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3142_ == 0)
{
lean_dec_ref_known(v_e_3071_, 2);
goto v___jp_3125_;
}
else
{
uint8_t v___x_3143_; 
v___x_3143_ = l_Lean_Expr_hasMVar(v_e_3071_);
if (v___x_3143_ == 0)
{
lean_object* v___x_3144_; 
v___x_3144_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3210_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3210_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3210_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3189_; lean_object* v_cache_3190_; lean_object* v_inferType_3191_; lean_object* v___x_3192_; 
v___x_3189_ = lean_st_ref_get(v___y_3073_);
v_cache_3190_ = lean_ctor_get(v___x_3189_, 1);
lean_inc_ref(v_cache_3190_);
lean_dec(v___x_3189_);
v_inferType_3191_ = lean_ctor_get(v_cache_3190_, 0);
lean_inc_ref(v_inferType_3191_);
lean_dec_ref(v_cache_3190_);
v___x_3192_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3191_, v_a_3145_);
lean_dec_ref(v_inferType_3191_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v_toCold_3193_; lean_object* v_cancelTk_x3f_3194_; 
lean_del_object(v___x_3147_);
v_toCold_3193_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3194_ = lean_ctor_get(v_toCold_3193_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3194_) == 1)
{
lean_object* v_val_3195_; uint8_t v___x_3196_; 
v_val_3195_ = lean_ctor_get(v_cancelTk_x3f_3194_, 0);
v___x_3196_ = l_IO_CancelToken_isSet(v_val_3195_);
if (v___x_3196_ == 0)
{
goto v___jp_3149_;
}
else
{
lean_object* v___x_3197_; lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3205_; 
lean_dec(v_a_3145_);
lean_dec(v_us_3124_);
lean_dec(v_declName_3123_);
v___x_3197_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3200_ = v___x_3197_;
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v___x_3197_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3203_; 
if (v_isShared_3201_ == 0)
{
v___x_3203_ = v___x_3200_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_a_3198_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
}
else
{
goto v___jp_3149_;
}
}
else
{
lean_object* v_val_3206_; lean_object* v___x_3208_; 
lean_dec(v_a_3145_);
lean_dec(v_us_3124_);
lean_dec(v_declName_3123_);
v_val_3206_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_val_3206_);
lean_dec_ref_known(v___x_3192_, 1);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v_val_3206_);
v___x_3208_ = v___x_3147_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_val_3206_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
v___jp_3149_:
{
lean_object* v___x_3150_; 
v___x_3150_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3123_, v_us_3124_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; uint8_t v___x_3152_; 
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3151_);
v___x_3152_ = l_Lean_Expr_hasMVar(v_a_3151_);
if (v___x_3152_ == 0)
{
lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3187_; 
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3187_ == 0)
{
lean_object* v_unused_3188_; 
v_unused_3188_ = lean_ctor_get(v___x_3150_, 0);
lean_dec(v_unused_3188_);
v___x_3154_ = v___x_3150_;
v_isShared_3155_ = v_isSharedCheck_3187_;
goto v_resetjp_3153_;
}
else
{
lean_dec(v___x_3150_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3187_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v_cache_3157_; lean_object* v_mctx_3158_; lean_object* v_zetaDeltaFVarIds_3159_; lean_object* v_postponed_3160_; lean_object* v_diag_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3186_; 
v___x_3156_ = lean_st_ref_take(v___y_3073_);
v_cache_3157_ = lean_ctor_get(v___x_3156_, 1);
v_mctx_3158_ = lean_ctor_get(v___x_3156_, 0);
v_zetaDeltaFVarIds_3159_ = lean_ctor_get(v___x_3156_, 2);
v_postponed_3160_ = lean_ctor_get(v___x_3156_, 3);
v_diag_3161_ = lean_ctor_get(v___x_3156_, 4);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3163_ = v___x_3156_;
v_isShared_3164_ = v_isSharedCheck_3186_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_diag_3161_);
lean_inc(v_postponed_3160_);
lean_inc(v_zetaDeltaFVarIds_3159_);
lean_inc(v_cache_3157_);
lean_inc(v_mctx_3158_);
lean_dec(v___x_3156_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3186_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v_inferType_3165_; lean_object* v_funInfo_3166_; lean_object* v_synthInstance_3167_; lean_object* v_whnf_3168_; lean_object* v_defEqTrans_3169_; lean_object* v_defEqPerm_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3185_; 
v_inferType_3165_ = lean_ctor_get(v_cache_3157_, 0);
v_funInfo_3166_ = lean_ctor_get(v_cache_3157_, 1);
v_synthInstance_3167_ = lean_ctor_get(v_cache_3157_, 2);
v_whnf_3168_ = lean_ctor_get(v_cache_3157_, 3);
v_defEqTrans_3169_ = lean_ctor_get(v_cache_3157_, 4);
v_defEqPerm_3170_ = lean_ctor_get(v_cache_3157_, 5);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_cache_3157_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3172_ = v_cache_3157_;
v_isShared_3173_ = v_isSharedCheck_3185_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_defEqPerm_3170_);
lean_inc(v_defEqTrans_3169_);
lean_inc(v_whnf_3168_);
lean_inc(v_synthInstance_3167_);
lean_inc(v_funInfo_3166_);
lean_inc(v_inferType_3165_);
lean_dec(v_cache_3157_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3185_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3174_; lean_object* v___x_3176_; 
lean_inc(v_a_3151_);
v___x_3174_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3165_, v_a_3145_, v_a_3151_);
if (v_isShared_3173_ == 0)
{
lean_ctor_set(v___x_3172_, 0, v___x_3174_);
v___x_3176_ = v___x_3172_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___x_3174_);
lean_ctor_set(v_reuseFailAlloc_3184_, 1, v_funInfo_3166_);
lean_ctor_set(v_reuseFailAlloc_3184_, 2, v_synthInstance_3167_);
lean_ctor_set(v_reuseFailAlloc_3184_, 3, v_whnf_3168_);
lean_ctor_set(v_reuseFailAlloc_3184_, 4, v_defEqTrans_3169_);
lean_ctor_set(v_reuseFailAlloc_3184_, 5, v_defEqPerm_3170_);
v___x_3176_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
lean_object* v___x_3178_; 
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 1, v___x_3176_);
v___x_3178_ = v___x_3163_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_mctx_3158_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v___x_3176_);
lean_ctor_set(v_reuseFailAlloc_3183_, 2, v_zetaDeltaFVarIds_3159_);
lean_ctor_set(v_reuseFailAlloc_3183_, 3, v_postponed_3160_);
lean_ctor_set(v_reuseFailAlloc_3183_, 4, v_diag_3161_);
v___x_3178_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
lean_object* v___x_3179_; lean_object* v___x_3181_; 
v___x_3179_ = lean_st_ref_put(v___y_3073_, v___x_3178_);
if (v_isShared_3155_ == 0)
{
v___x_3181_ = v___x_3154_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3151_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3151_);
lean_dec(v_a_3145_);
return v___x_3150_;
}
}
else
{
lean_dec(v_a_3145_);
return v___x_3150_;
}
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
lean_dec(v_us_3124_);
lean_dec(v_declName_3123_);
v_a_3211_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3144_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3144_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3071_, 2);
goto v___jp_3125_;
}
}
}
v___jp_3125_:
{
lean_object* v_toCold_3126_; lean_object* v_cancelTk_x3f_3127_; 
v_toCold_3126_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3127_ = lean_ctor_get(v_toCold_3126_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3127_) == 1)
{
lean_object* v_val_3128_; uint8_t v___x_3129_; 
v_val_3128_ = lean_ctor_get(v_cancelTk_x3f_3127_, 0);
v___x_3129_ = l_IO_CancelToken_isSet(v_val_3128_);
if (v___x_3129_ == 0)
{
lean_object* v___x_3130_; 
v___x_3130_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3123_, v_us_3124_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3130_;
}
else
{
lean_object* v___x_3131_; lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec(v_us_3124_);
lean_dec(v_declName_3123_);
v___x_3131_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3131_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3131_);
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
}
else
{
lean_object* v___x_3140_; 
v___x_3140_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3123_, v_us_3124_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3140_;
}
}
}
case 5:
{
lean_object* v_fn_3219_; uint8_t v_cacheInferType_3220_; lean_object* v_nargs_3221_; lean_object* v___x_3222_; lean_object* v_dummy_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v_fn_3219_ = lean_ctor_get(v_e_3071_, 0);
v_cacheInferType_3220_ = lean_ctor_get_uint8(v___y_3072_, sizeof(void*)*7 + 3);
v_nargs_3221_ = l_Lean_Expr_getAppNumArgs(v_e_3071_);
v___x_3222_ = l_Lean_Expr_getAppFn(v_fn_3219_);
v_dummy_3223_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
lean_inc(v_nargs_3221_);
v___x_3224_ = lean_mk_array(v_nargs_3221_, v_dummy_3223_);
v___x_3225_ = lean_unsigned_to_nat(1u);
v___x_3226_ = lean_nat_sub(v_nargs_3221_, v___x_3225_);
lean_dec(v_nargs_3221_);
lean_inc_ref(v_e_3071_);
v___x_3227_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3071_, v___x_3224_, v___x_3226_);
if (v_cacheInferType_3220_ == 0)
{
lean_dec_ref_known(v_e_3071_, 2);
goto v___jp_3228_;
}
else
{
uint8_t v___x_3244_; 
v___x_3244_ = l_Lean_Expr_hasMVar(v_e_3071_);
if (v___x_3244_ == 0)
{
lean_object* v___x_3245_; 
v___x_3245_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3311_; 
v_a_3246_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3248_ = v___x_3245_;
v_isShared_3249_ = v_isSharedCheck_3311_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3245_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3311_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3290_; lean_object* v_cache_3291_; lean_object* v_inferType_3292_; lean_object* v___x_3293_; 
v___x_3290_ = lean_st_ref_get(v___y_3073_);
v_cache_3291_ = lean_ctor_get(v___x_3290_, 1);
lean_inc_ref(v_cache_3291_);
lean_dec(v___x_3290_);
v_inferType_3292_ = lean_ctor_get(v_cache_3291_, 0);
lean_inc_ref(v_inferType_3292_);
lean_dec_ref(v_cache_3291_);
v___x_3293_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3292_, v_a_3246_);
lean_dec_ref(v_inferType_3292_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_toCold_3294_; lean_object* v_cancelTk_x3f_3295_; 
lean_del_object(v___x_3248_);
v_toCold_3294_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3295_ = lean_ctor_get(v_toCold_3294_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3295_) == 1)
{
lean_object* v_val_3296_; uint8_t v___x_3297_; 
v_val_3296_ = lean_ctor_get(v_cancelTk_x3f_3295_, 0);
v___x_3297_ = l_IO_CancelToken_isSet(v_val_3296_);
if (v___x_3297_ == 0)
{
goto v___jp_3250_;
}
else
{
lean_object* v___x_3298_; lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3306_; 
lean_dec(v_a_3246_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3222_);
v___x_3298_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3301_ = v___x_3298_;
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3298_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3304_; 
if (v_isShared_3302_ == 0)
{
v___x_3304_ = v___x_3301_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v_a_3299_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
}
else
{
goto v___jp_3250_;
}
}
else
{
lean_object* v_val_3307_; lean_object* v___x_3309_; 
lean_dec(v_a_3246_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3222_);
v_val_3307_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_val_3307_);
lean_dec_ref_known(v___x_3293_, 1);
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 0, v_val_3307_);
v___x_3309_ = v___x_3248_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_val_3307_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
v___jp_3250_:
{
lean_object* v___x_3251_; 
v___x_3251_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3222_, v___x_3227_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
lean_dec_ref(v___x_3227_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; uint8_t v___x_3253_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
v___x_3253_ = l_Lean_Expr_hasMVar(v_a_3252_);
if (v___x_3253_ == 0)
{
lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3288_; 
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3288_ == 0)
{
lean_object* v_unused_3289_; 
v_unused_3289_ = lean_ctor_get(v___x_3251_, 0);
lean_dec(v_unused_3289_);
v___x_3255_ = v___x_3251_;
v_isShared_3256_ = v_isSharedCheck_3288_;
goto v_resetjp_3254_;
}
else
{
lean_dec(v___x_3251_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3288_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3257_; lean_object* v_cache_3258_; lean_object* v_mctx_3259_; lean_object* v_zetaDeltaFVarIds_3260_; lean_object* v_postponed_3261_; lean_object* v_diag_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3287_; 
v___x_3257_ = lean_st_ref_take(v___y_3073_);
v_cache_3258_ = lean_ctor_get(v___x_3257_, 1);
v_mctx_3259_ = lean_ctor_get(v___x_3257_, 0);
v_zetaDeltaFVarIds_3260_ = lean_ctor_get(v___x_3257_, 2);
v_postponed_3261_ = lean_ctor_get(v___x_3257_, 3);
v_diag_3262_ = lean_ctor_get(v___x_3257_, 4);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3264_ = v___x_3257_;
v_isShared_3265_ = v_isSharedCheck_3287_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_diag_3262_);
lean_inc(v_postponed_3261_);
lean_inc(v_zetaDeltaFVarIds_3260_);
lean_inc(v_cache_3258_);
lean_inc(v_mctx_3259_);
lean_dec(v___x_3257_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3287_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v_inferType_3266_; lean_object* v_funInfo_3267_; lean_object* v_synthInstance_3268_; lean_object* v_whnf_3269_; lean_object* v_defEqTrans_3270_; lean_object* v_defEqPerm_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3286_; 
v_inferType_3266_ = lean_ctor_get(v_cache_3258_, 0);
v_funInfo_3267_ = lean_ctor_get(v_cache_3258_, 1);
v_synthInstance_3268_ = lean_ctor_get(v_cache_3258_, 2);
v_whnf_3269_ = lean_ctor_get(v_cache_3258_, 3);
v_defEqTrans_3270_ = lean_ctor_get(v_cache_3258_, 4);
v_defEqPerm_3271_ = lean_ctor_get(v_cache_3258_, 5);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_cache_3258_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3273_ = v_cache_3258_;
v_isShared_3274_ = v_isSharedCheck_3286_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_defEqPerm_3271_);
lean_inc(v_defEqTrans_3270_);
lean_inc(v_whnf_3269_);
lean_inc(v_synthInstance_3268_);
lean_inc(v_funInfo_3267_);
lean_inc(v_inferType_3266_);
lean_dec(v_cache_3258_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3286_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3275_; lean_object* v___x_3277_; 
lean_inc(v_a_3252_);
v___x_3275_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3266_, v_a_3246_, v_a_3252_);
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 0, v___x_3275_);
v___x_3277_ = v___x_3273_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3275_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v_funInfo_3267_);
lean_ctor_set(v_reuseFailAlloc_3285_, 2, v_synthInstance_3268_);
lean_ctor_set(v_reuseFailAlloc_3285_, 3, v_whnf_3269_);
lean_ctor_set(v_reuseFailAlloc_3285_, 4, v_defEqTrans_3270_);
lean_ctor_set(v_reuseFailAlloc_3285_, 5, v_defEqPerm_3271_);
v___x_3277_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3279_; 
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 1, v___x_3277_);
v___x_3279_ = v___x_3264_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_mctx_3259_);
lean_ctor_set(v_reuseFailAlloc_3284_, 1, v___x_3277_);
lean_ctor_set(v_reuseFailAlloc_3284_, 2, v_zetaDeltaFVarIds_3260_);
lean_ctor_set(v_reuseFailAlloc_3284_, 3, v_postponed_3261_);
lean_ctor_set(v_reuseFailAlloc_3284_, 4, v_diag_3262_);
v___x_3279_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
lean_object* v___x_3280_; lean_object* v___x_3282_; 
v___x_3280_ = lean_st_ref_put(v___y_3073_, v___x_3279_);
if (v_isShared_3256_ == 0)
{
v___x_3282_ = v___x_3255_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3252_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3252_);
lean_dec(v_a_3246_);
return v___x_3251_;
}
}
else
{
lean_dec(v_a_3246_);
return v___x_3251_;
}
}
}
}
else
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3319_; 
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3222_);
v_a_3312_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3314_ = v___x_3245_;
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3245_);
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
v_reuseFailAlloc_3318_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec_ref_known(v_e_3071_, 2);
goto v___jp_3228_;
}
}
v___jp_3228_:
{
lean_object* v_toCold_3229_; lean_object* v_cancelTk_x3f_3230_; 
v_toCold_3229_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3230_ = lean_ctor_get(v_toCold_3229_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3230_) == 1)
{
lean_object* v_val_3231_; uint8_t v___x_3232_; 
v_val_3231_ = lean_ctor_get(v_cancelTk_x3f_3230_, 0);
v___x_3232_ = l_IO_CancelToken_isSet(v_val_3231_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3233_; 
v___x_3233_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3222_, v___x_3227_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
lean_dec_ref(v___x_3227_);
return v___x_3233_;
}
else
{
lean_object* v___x_3234_; lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3222_);
v___x_3234_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3234_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3234_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
else
{
lean_object* v___x_3243_; 
v___x_3243_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3222_, v___x_3227_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
lean_dec_ref(v___x_3227_);
return v___x_3243_;
}
}
}
case 7:
{
uint8_t v_cacheInferType_3320_; 
v_cacheInferType_3320_ = lean_ctor_get_uint8(v___y_3072_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3320_ == 0)
{
goto v___jp_3093_;
}
else
{
uint8_t v___x_3321_; 
v___x_3321_ = l_Lean_Expr_hasMVar(v_e_3071_);
if (v___x_3321_ == 0)
{
lean_object* v___x_3322_; 
lean_inc_ref(v_e_3071_);
v___x_3322_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3388_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3325_ = v___x_3322_;
v_isShared_3326_ = v_isSharedCheck_3388_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_a_3323_);
lean_dec(v___x_3322_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3388_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3367_; lean_object* v_cache_3368_; lean_object* v_inferType_3369_; lean_object* v___x_3370_; 
v___x_3367_ = lean_st_ref_get(v___y_3073_);
v_cache_3368_ = lean_ctor_get(v___x_3367_, 1);
lean_inc_ref(v_cache_3368_);
lean_dec(v___x_3367_);
v_inferType_3369_ = lean_ctor_get(v_cache_3368_, 0);
lean_inc_ref(v_inferType_3369_);
lean_dec_ref(v_cache_3368_);
v___x_3370_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3369_, v_a_3323_);
lean_dec_ref(v_inferType_3369_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_toCold_3371_; lean_object* v_cancelTk_x3f_3372_; 
lean_del_object(v___x_3325_);
v_toCold_3371_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3372_ = lean_ctor_get(v_toCold_3371_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3372_) == 1)
{
lean_object* v_val_3373_; uint8_t v___x_3374_; 
v_val_3373_ = lean_ctor_get(v_cancelTk_x3f_3372_, 0);
v___x_3374_ = l_IO_CancelToken_isSet(v_val_3373_);
if (v___x_3374_ == 0)
{
goto v___jp_3327_;
}
else
{
lean_object* v___x_3375_; lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_dec(v_a_3323_);
lean_dec_ref_known(v_e_3071_, 3);
v___x_3375_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3375_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3375_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
else
{
goto v___jp_3327_;
}
}
else
{
lean_object* v_val_3384_; lean_object* v___x_3386_; 
lean_dec(v_a_3323_);
lean_dec_ref_known(v_e_3071_, 3);
v_val_3384_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_val_3384_);
lean_dec_ref_known(v___x_3370_, 1);
if (v_isShared_3326_ == 0)
{
lean_ctor_set(v___x_3325_, 0, v_val_3384_);
v___x_3386_ = v___x_3325_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_val_3384_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
v___jp_3327_:
{
lean_object* v___x_3328_; 
v___x_3328_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; uint8_t v___x_3330_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
v___x_3330_ = l_Lean_Expr_hasMVar(v_a_3329_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3365_; 
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3365_ == 0)
{
lean_object* v_unused_3366_; 
v_unused_3366_ = lean_ctor_get(v___x_3328_, 0);
lean_dec(v_unused_3366_);
v___x_3332_ = v___x_3328_;
v_isShared_3333_ = v_isSharedCheck_3365_;
goto v_resetjp_3331_;
}
else
{
lean_dec(v___x_3328_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3365_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3334_; lean_object* v_cache_3335_; lean_object* v_mctx_3336_; lean_object* v_zetaDeltaFVarIds_3337_; lean_object* v_postponed_3338_; lean_object* v_diag_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3364_; 
v___x_3334_ = lean_st_ref_take(v___y_3073_);
v_cache_3335_ = lean_ctor_get(v___x_3334_, 1);
v_mctx_3336_ = lean_ctor_get(v___x_3334_, 0);
v_zetaDeltaFVarIds_3337_ = lean_ctor_get(v___x_3334_, 2);
v_postponed_3338_ = lean_ctor_get(v___x_3334_, 3);
v_diag_3339_ = lean_ctor_get(v___x_3334_, 4);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3341_ = v___x_3334_;
v_isShared_3342_ = v_isSharedCheck_3364_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_diag_3339_);
lean_inc(v_postponed_3338_);
lean_inc(v_zetaDeltaFVarIds_3337_);
lean_inc(v_cache_3335_);
lean_inc(v_mctx_3336_);
lean_dec(v___x_3334_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3364_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v_inferType_3343_; lean_object* v_funInfo_3344_; lean_object* v_synthInstance_3345_; lean_object* v_whnf_3346_; lean_object* v_defEqTrans_3347_; lean_object* v_defEqPerm_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3363_; 
v_inferType_3343_ = lean_ctor_get(v_cache_3335_, 0);
v_funInfo_3344_ = lean_ctor_get(v_cache_3335_, 1);
v_synthInstance_3345_ = lean_ctor_get(v_cache_3335_, 2);
v_whnf_3346_ = lean_ctor_get(v_cache_3335_, 3);
v_defEqTrans_3347_ = lean_ctor_get(v_cache_3335_, 4);
v_defEqPerm_3348_ = lean_ctor_get(v_cache_3335_, 5);
v_isSharedCheck_3363_ = !lean_is_exclusive(v_cache_3335_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3350_ = v_cache_3335_;
v_isShared_3351_ = v_isSharedCheck_3363_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_defEqPerm_3348_);
lean_inc(v_defEqTrans_3347_);
lean_inc(v_whnf_3346_);
lean_inc(v_synthInstance_3345_);
lean_inc(v_funInfo_3344_);
lean_inc(v_inferType_3343_);
lean_dec(v_cache_3335_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3363_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; lean_object* v___x_3354_; 
lean_inc(v_a_3329_);
v___x_3352_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3343_, v_a_3323_, v_a_3329_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3352_);
v___x_3354_ = v___x_3350_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3352_);
lean_ctor_set(v_reuseFailAlloc_3362_, 1, v_funInfo_3344_);
lean_ctor_set(v_reuseFailAlloc_3362_, 2, v_synthInstance_3345_);
lean_ctor_set(v_reuseFailAlloc_3362_, 3, v_whnf_3346_);
lean_ctor_set(v_reuseFailAlloc_3362_, 4, v_defEqTrans_3347_);
lean_ctor_set(v_reuseFailAlloc_3362_, 5, v_defEqPerm_3348_);
v___x_3354_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
lean_object* v___x_3356_; 
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 1, v___x_3354_);
v___x_3356_ = v___x_3341_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_mctx_3336_);
lean_ctor_set(v_reuseFailAlloc_3361_, 1, v___x_3354_);
lean_ctor_set(v_reuseFailAlloc_3361_, 2, v_zetaDeltaFVarIds_3337_);
lean_ctor_set(v_reuseFailAlloc_3361_, 3, v_postponed_3338_);
lean_ctor_set(v_reuseFailAlloc_3361_, 4, v_diag_3339_);
v___x_3356_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
lean_object* v___x_3357_; lean_object* v___x_3359_; 
v___x_3357_ = lean_st_ref_put(v___y_3073_, v___x_3356_);
if (v_isShared_3333_ == 0)
{
v___x_3359_ = v___x_3332_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3329_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3329_);
lean_dec(v_a_3323_);
return v___x_3328_;
}
}
else
{
lean_dec(v_a_3323_);
return v___x_3328_;
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec_ref_known(v_e_3071_, 3);
v_a_3389_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3322_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3322_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
else
{
goto v___jp_3093_;
}
}
}
case 9:
{
lean_object* v_a_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v_a_3397_ = lean_ctor_get(v_e_3071_, 0);
lean_inc_ref(v_a_3397_);
lean_dec_ref_known(v_e_3071_, 1);
v___x_3398_ = l_Lean_Literal_type(v_a_3397_);
lean_dec_ref(v_a_3397_);
v___x_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
case 10:
{
lean_object* v_expr_3400_; 
v_expr_3400_ = lean_ctor_get(v_e_3071_, 1);
lean_inc_ref(v_expr_3400_);
lean_dec_ref_known(v_e_3071_, 2);
v_e_3071_ = v_expr_3400_;
goto _start;
}
case 11:
{
lean_object* v_typeName_3402_; lean_object* v_idx_3403_; lean_object* v_struct_3404_; uint8_t v_cacheInferType_3421_; 
v_typeName_3402_ = lean_ctor_get(v_e_3071_, 0);
lean_inc(v_typeName_3402_);
v_idx_3403_ = lean_ctor_get(v_e_3071_, 1);
lean_inc(v_idx_3403_);
v_struct_3404_ = lean_ctor_get(v_e_3071_, 2);
lean_inc_ref(v_struct_3404_);
v_cacheInferType_3421_ = lean_ctor_get_uint8(v___y_3072_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3421_ == 0)
{
lean_dec_ref_known(v_e_3071_, 3);
goto v___jp_3405_;
}
else
{
uint8_t v___x_3422_; 
v___x_3422_ = l_Lean_Expr_hasMVar(v_e_3071_);
if (v___x_3422_ == 0)
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3489_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3426_ = v___x_3423_;
v_isShared_3427_ = v_isSharedCheck_3489_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v___x_3423_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3489_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3468_; lean_object* v_cache_3469_; lean_object* v_inferType_3470_; lean_object* v___x_3471_; 
v___x_3468_ = lean_st_ref_get(v___y_3073_);
v_cache_3469_ = lean_ctor_get(v___x_3468_, 1);
lean_inc_ref(v_cache_3469_);
lean_dec(v___x_3468_);
v_inferType_3470_ = lean_ctor_get(v_cache_3469_, 0);
lean_inc_ref(v_inferType_3470_);
lean_dec_ref(v_cache_3469_);
v___x_3471_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3470_, v_a_3424_);
lean_dec_ref(v_inferType_3470_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_toCold_3472_; lean_object* v_cancelTk_x3f_3473_; 
lean_del_object(v___x_3426_);
v_toCold_3472_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3473_ = lean_ctor_get(v_toCold_3472_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3473_) == 1)
{
lean_object* v_val_3474_; uint8_t v___x_3475_; 
v_val_3474_ = lean_ctor_get(v_cancelTk_x3f_3473_, 0);
v___x_3475_ = l_IO_CancelToken_isSet(v_val_3474_);
if (v___x_3475_ == 0)
{
goto v___jp_3428_;
}
else
{
lean_object* v___x_3476_; lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_dec(v_a_3424_);
lean_dec_ref(v_struct_3404_);
lean_dec(v_idx_3403_);
lean_dec(v_typeName_3402_);
v___x_3476_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3476_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3476_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
else
{
goto v___jp_3428_;
}
}
else
{
lean_object* v_val_3485_; lean_object* v___x_3487_; 
lean_dec(v_a_3424_);
lean_dec_ref(v_struct_3404_);
lean_dec(v_idx_3403_);
lean_dec(v_typeName_3402_);
v_val_3485_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_val_3485_);
lean_dec_ref_known(v___x_3471_, 1);
if (v_isShared_3427_ == 0)
{
lean_ctor_set(v___x_3426_, 0, v_val_3485_);
v___x_3487_ = v___x_3426_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_val_3485_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
v___jp_3428_:
{
lean_object* v___x_3429_; 
v___x_3429_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3402_, v_idx_3403_, v_struct_3404_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; uint8_t v___x_3431_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
lean_inc(v_a_3430_);
v___x_3431_ = l_Lean_Expr_hasMVar(v_a_3430_);
if (v___x_3431_ == 0)
{
lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3466_; 
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3466_ == 0)
{
lean_object* v_unused_3467_; 
v_unused_3467_ = lean_ctor_get(v___x_3429_, 0);
lean_dec(v_unused_3467_);
v___x_3433_ = v___x_3429_;
v_isShared_3434_ = v_isSharedCheck_3466_;
goto v_resetjp_3432_;
}
else
{
lean_dec(v___x_3429_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3466_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3435_; lean_object* v_cache_3436_; lean_object* v_mctx_3437_; lean_object* v_zetaDeltaFVarIds_3438_; lean_object* v_postponed_3439_; lean_object* v_diag_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3465_; 
v___x_3435_ = lean_st_ref_take(v___y_3073_);
v_cache_3436_ = lean_ctor_get(v___x_3435_, 1);
v_mctx_3437_ = lean_ctor_get(v___x_3435_, 0);
v_zetaDeltaFVarIds_3438_ = lean_ctor_get(v___x_3435_, 2);
v_postponed_3439_ = lean_ctor_get(v___x_3435_, 3);
v_diag_3440_ = lean_ctor_get(v___x_3435_, 4);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3442_ = v___x_3435_;
v_isShared_3443_ = v_isSharedCheck_3465_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_diag_3440_);
lean_inc(v_postponed_3439_);
lean_inc(v_zetaDeltaFVarIds_3438_);
lean_inc(v_cache_3436_);
lean_inc(v_mctx_3437_);
lean_dec(v___x_3435_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3465_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v_inferType_3444_; lean_object* v_funInfo_3445_; lean_object* v_synthInstance_3446_; lean_object* v_whnf_3447_; lean_object* v_defEqTrans_3448_; lean_object* v_defEqPerm_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3464_; 
v_inferType_3444_ = lean_ctor_get(v_cache_3436_, 0);
v_funInfo_3445_ = lean_ctor_get(v_cache_3436_, 1);
v_synthInstance_3446_ = lean_ctor_get(v_cache_3436_, 2);
v_whnf_3447_ = lean_ctor_get(v_cache_3436_, 3);
v_defEqTrans_3448_ = lean_ctor_get(v_cache_3436_, 4);
v_defEqPerm_3449_ = lean_ctor_get(v_cache_3436_, 5);
v_isSharedCheck_3464_ = !lean_is_exclusive(v_cache_3436_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3451_ = v_cache_3436_;
v_isShared_3452_ = v_isSharedCheck_3464_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_defEqPerm_3449_);
lean_inc(v_defEqTrans_3448_);
lean_inc(v_whnf_3447_);
lean_inc(v_synthInstance_3446_);
lean_inc(v_funInfo_3445_);
lean_inc(v_inferType_3444_);
lean_dec(v_cache_3436_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3464_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3453_; lean_object* v___x_3455_; 
lean_inc(v_a_3430_);
v___x_3453_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3444_, v_a_3424_, v_a_3430_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 0, v___x_3453_);
v___x_3455_ = v___x_3451_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3453_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v_funInfo_3445_);
lean_ctor_set(v_reuseFailAlloc_3463_, 2, v_synthInstance_3446_);
lean_ctor_set(v_reuseFailAlloc_3463_, 3, v_whnf_3447_);
lean_ctor_set(v_reuseFailAlloc_3463_, 4, v_defEqTrans_3448_);
lean_ctor_set(v_reuseFailAlloc_3463_, 5, v_defEqPerm_3449_);
v___x_3455_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
lean_object* v___x_3457_; 
if (v_isShared_3443_ == 0)
{
lean_ctor_set(v___x_3442_, 1, v___x_3455_);
v___x_3457_ = v___x_3442_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_mctx_3437_);
lean_ctor_set(v_reuseFailAlloc_3462_, 1, v___x_3455_);
lean_ctor_set(v_reuseFailAlloc_3462_, 2, v_zetaDeltaFVarIds_3438_);
lean_ctor_set(v_reuseFailAlloc_3462_, 3, v_postponed_3439_);
lean_ctor_set(v_reuseFailAlloc_3462_, 4, v_diag_3440_);
v___x_3457_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
lean_object* v___x_3458_; lean_object* v___x_3460_; 
v___x_3458_ = lean_st_ref_put(v___y_3073_, v___x_3457_);
if (v_isShared_3434_ == 0)
{
v___x_3460_ = v___x_3433_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3430_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3430_);
lean_dec(v_a_3424_);
return v___x_3429_;
}
}
else
{
lean_dec(v_a_3424_);
return v___x_3429_;
}
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref(v_struct_3404_);
lean_dec(v_idx_3403_);
lean_dec(v_typeName_3402_);
v_a_3490_ = lean_ctor_get(v___x_3423_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3423_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3423_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3071_, 3);
goto v___jp_3405_;
}
}
v___jp_3405_:
{
lean_object* v_toCold_3406_; lean_object* v_cancelTk_x3f_3407_; 
v_toCold_3406_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3407_ = lean_ctor_get(v_toCold_3406_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3407_) == 1)
{
lean_object* v_val_3408_; uint8_t v___x_3409_; 
v_val_3408_ = lean_ctor_get(v_cancelTk_x3f_3407_, 0);
v___x_3409_ = l_IO_CancelToken_isSet(v_val_3408_);
if (v___x_3409_ == 0)
{
lean_object* v___x_3410_; 
v___x_3410_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3402_, v_idx_3403_, v_struct_3404_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3410_;
}
else
{
lean_object* v___x_3411_; lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec_ref(v_struct_3404_);
lean_dec(v_idx_3403_);
lean_dec(v_typeName_3402_);
v___x_3411_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3411_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3411_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
else
{
lean_object* v___x_3420_; 
v___x_3420_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3402_, v_idx_3403_, v_struct_3404_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3420_;
}
}
}
default: 
{
uint8_t v_cacheInferType_3498_; 
v_cacheInferType_3498_ = lean_ctor_get_uint8(v___y_3072_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3498_ == 0)
{
goto v___jp_3077_;
}
else
{
uint8_t v___x_3499_; 
v___x_3499_ = l_Lean_Expr_hasMVar(v_e_3071_);
if (v___x_3499_ == 0)
{
lean_object* v___x_3500_; 
lean_inc_ref(v_e_3071_);
v___x_3500_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3566_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3503_ = v___x_3500_;
v_isShared_3504_ = v_isSharedCheck_3566_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3500_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3566_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3545_; lean_object* v_cache_3546_; lean_object* v_inferType_3547_; lean_object* v___x_3548_; 
v___x_3545_ = lean_st_ref_get(v___y_3073_);
v_cache_3546_ = lean_ctor_get(v___x_3545_, 1);
lean_inc_ref(v_cache_3546_);
lean_dec(v___x_3545_);
v_inferType_3547_ = lean_ctor_get(v_cache_3546_, 0);
lean_inc_ref(v_inferType_3547_);
lean_dec_ref(v_cache_3546_);
v___x_3548_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3547_, v_a_3501_);
lean_dec_ref(v_inferType_3547_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_toCold_3549_; lean_object* v_cancelTk_x3f_3550_; 
lean_del_object(v___x_3503_);
v_toCold_3549_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3550_ = lean_ctor_get(v_toCold_3549_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3550_) == 1)
{
lean_object* v_val_3551_; uint8_t v___x_3552_; 
v_val_3551_ = lean_ctor_get(v_cancelTk_x3f_3550_, 0);
v___x_3552_ = l_IO_CancelToken_isSet(v_val_3551_);
if (v___x_3552_ == 0)
{
goto v___jp_3505_;
}
else
{
lean_object* v___x_3553_; lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_dec(v_a_3501_);
lean_dec_ref(v_e_3071_);
v___x_3553_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3553_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3553_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
else
{
goto v___jp_3505_;
}
}
else
{
lean_object* v_val_3562_; lean_object* v___x_3564_; 
lean_dec(v_a_3501_);
lean_dec_ref(v_e_3071_);
v_val_3562_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_val_3562_);
lean_dec_ref_known(v___x_3548_, 1);
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 0, v_val_3562_);
v___x_3564_ = v___x_3503_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_val_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
v___jp_3505_:
{
lean_object* v___x_3506_; 
v___x_3506_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; uint8_t v___x_3508_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
v___x_3508_ = l_Lean_Expr_hasMVar(v_a_3507_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3543_; 
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3543_ == 0)
{
lean_object* v_unused_3544_; 
v_unused_3544_ = lean_ctor_get(v___x_3506_, 0);
lean_dec(v_unused_3544_);
v___x_3510_ = v___x_3506_;
v_isShared_3511_ = v_isSharedCheck_3543_;
goto v_resetjp_3509_;
}
else
{
lean_dec(v___x_3506_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3543_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3512_; lean_object* v_cache_3513_; lean_object* v_mctx_3514_; lean_object* v_zetaDeltaFVarIds_3515_; lean_object* v_postponed_3516_; lean_object* v_diag_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3542_; 
v___x_3512_ = lean_st_ref_take(v___y_3073_);
v_cache_3513_ = lean_ctor_get(v___x_3512_, 1);
v_mctx_3514_ = lean_ctor_get(v___x_3512_, 0);
v_zetaDeltaFVarIds_3515_ = lean_ctor_get(v___x_3512_, 2);
v_postponed_3516_ = lean_ctor_get(v___x_3512_, 3);
v_diag_3517_ = lean_ctor_get(v___x_3512_, 4);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3512_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3519_ = v___x_3512_;
v_isShared_3520_ = v_isSharedCheck_3542_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_diag_3517_);
lean_inc(v_postponed_3516_);
lean_inc(v_zetaDeltaFVarIds_3515_);
lean_inc(v_cache_3513_);
lean_inc(v_mctx_3514_);
lean_dec(v___x_3512_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3542_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v_inferType_3521_; lean_object* v_funInfo_3522_; lean_object* v_synthInstance_3523_; lean_object* v_whnf_3524_; lean_object* v_defEqTrans_3525_; lean_object* v_defEqPerm_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3541_; 
v_inferType_3521_ = lean_ctor_get(v_cache_3513_, 0);
v_funInfo_3522_ = lean_ctor_get(v_cache_3513_, 1);
v_synthInstance_3523_ = lean_ctor_get(v_cache_3513_, 2);
v_whnf_3524_ = lean_ctor_get(v_cache_3513_, 3);
v_defEqTrans_3525_ = lean_ctor_get(v_cache_3513_, 4);
v_defEqPerm_3526_ = lean_ctor_get(v_cache_3513_, 5);
v_isSharedCheck_3541_ = !lean_is_exclusive(v_cache_3513_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3528_ = v_cache_3513_;
v_isShared_3529_ = v_isSharedCheck_3541_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_defEqPerm_3526_);
lean_inc(v_defEqTrans_3525_);
lean_inc(v_whnf_3524_);
lean_inc(v_synthInstance_3523_);
lean_inc(v_funInfo_3522_);
lean_inc(v_inferType_3521_);
lean_dec(v_cache_3513_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3541_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3530_; lean_object* v___x_3532_; 
lean_inc(v_a_3507_);
v___x_3530_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3521_, v_a_3501_, v_a_3507_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 0, v___x_3530_);
v___x_3532_ = v___x_3528_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3530_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v_funInfo_3522_);
lean_ctor_set(v_reuseFailAlloc_3540_, 2, v_synthInstance_3523_);
lean_ctor_set(v_reuseFailAlloc_3540_, 3, v_whnf_3524_);
lean_ctor_set(v_reuseFailAlloc_3540_, 4, v_defEqTrans_3525_);
lean_ctor_set(v_reuseFailAlloc_3540_, 5, v_defEqPerm_3526_);
v___x_3532_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3534_; 
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 1, v___x_3532_);
v___x_3534_ = v___x_3519_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_mctx_3514_);
lean_ctor_set(v_reuseFailAlloc_3539_, 1, v___x_3532_);
lean_ctor_set(v_reuseFailAlloc_3539_, 2, v_zetaDeltaFVarIds_3515_);
lean_ctor_set(v_reuseFailAlloc_3539_, 3, v_postponed_3516_);
lean_ctor_set(v_reuseFailAlloc_3539_, 4, v_diag_3517_);
v___x_3534_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3535_; lean_object* v___x_3537_; 
v___x_3535_ = lean_st_ref_put(v___y_3073_, v___x_3534_);
if (v_isShared_3511_ == 0)
{
v___x_3537_ = v___x_3510_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3507_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3507_);
lean_dec(v_a_3501_);
return v___x_3506_;
}
}
else
{
lean_dec(v_a_3501_);
return v___x_3506_;
}
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
lean_dec_ref(v_e_3071_);
v_a_3567_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3500_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3500_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
else
{
goto v___jp_3077_;
}
}
}
}
v___jp_3077_:
{
lean_object* v_toCold_3078_; lean_object* v_cancelTk_x3f_3079_; 
v_toCold_3078_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3079_ = lean_ctor_get(v_toCold_3078_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3079_) == 1)
{
lean_object* v_val_3080_; uint8_t v___x_3081_; 
v_val_3080_ = lean_ctor_get(v_cancelTk_x3f_3079_, 0);
v___x_3081_ = l_IO_CancelToken_isSet(v_val_3080_);
if (v___x_3081_ == 0)
{
lean_object* v___x_3082_; 
v___x_3082_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3082_;
}
else
{
lean_object* v___x_3083_; lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec_ref(v_e_3071_);
v___x_3083_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3083_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3083_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
else
{
lean_object* v___x_3092_; 
v___x_3092_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3092_;
}
}
v___jp_3093_:
{
lean_object* v_toCold_3094_; lean_object* v_cancelTk_x3f_3095_; 
v_toCold_3094_ = lean_ctor_get(v___y_3074_, 0);
v_cancelTk_x3f_3095_ = lean_ctor_get(v_toCold_3094_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3095_) == 1)
{
lean_object* v_val_3096_; uint8_t v___x_3097_; 
v_val_3096_ = lean_ctor_get(v_cancelTk_x3f_3095_, 0);
v___x_3097_ = l_IO_CancelToken_isSet(v_val_3096_);
if (v___x_3097_ == 0)
{
lean_object* v___x_3098_; 
v___x_3098_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3098_;
}
else
{
lean_object* v___x_3099_; lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v_e_3071_);
v___x_3099_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3099_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3099_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
else
{
lean_object* v___x_3108_; 
v___x_3108_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3108_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object* v_e_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_);
lean_dec(v___y_3579_);
lean_dec_ref(v___y_3578_);
lean_dec(v___y_3577_);
lean_dec_ref(v___y_3576_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object* v_00_u03b2_3582_, lean_object* v_x_3583_, lean_object* v_x_3584_, lean_object* v_x_3585_){
_start:
{
lean_object* v___x_3586_; 
v___x_3586_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_x_3583_, v_x_3584_, v_x_3585_);
return v___x_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object* v_00_u03b2_3587_, lean_object* v_x_3588_, lean_object* v_x_3589_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3588_, v_x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object* v_00_u03b2_3591_, lean_object* v_x_3592_, lean_object* v_x_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(v_00_u03b2_3591_, v_x_3592_, v_x_3593_);
lean_dec_ref(v_x_3593_);
lean_dec_ref(v_x_3592_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object* v_00_u03b2_3595_, lean_object* v_x_3596_, size_t v_x_3597_, size_t v_x_3598_, lean_object* v_x_3599_, lean_object* v_x_3600_){
_start:
{
lean_object* v___x_3601_; 
v___x_3601_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_3596_, v_x_3597_, v_x_3598_, v_x_3599_, v_x_3600_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3602_, lean_object* v_x_3603_, lean_object* v_x_3604_, lean_object* v_x_3605_, lean_object* v_x_3606_, lean_object* v_x_3607_){
_start:
{
size_t v_x_3710__boxed_3608_; size_t v_x_3711__boxed_3609_; lean_object* v_res_3610_; 
v_x_3710__boxed_3608_ = lean_unbox_usize(v_x_3604_);
lean_dec(v_x_3604_);
v_x_3711__boxed_3609_ = lean_unbox_usize(v_x_3605_);
lean_dec(v_x_3605_);
v_res_3610_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(v_00_u03b2_3602_, v_x_3603_, v_x_3710__boxed_3608_, v_x_3711__boxed_3609_, v_x_3606_, v_x_3607_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object* v_00_u03b2_3611_, lean_object* v_x_3612_, size_t v_x_3613_, lean_object* v_x_3614_){
_start:
{
lean_object* v___x_3615_; 
v___x_3615_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3612_, v_x_3613_, v_x_3614_);
return v___x_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3616_, lean_object* v_x_3617_, lean_object* v_x_3618_, lean_object* v_x_3619_){
_start:
{
size_t v_x_3727__boxed_3620_; lean_object* v_res_3621_; 
v_x_3727__boxed_3620_ = lean_unbox_usize(v_x_3618_);
lean_dec(v_x_3618_);
v_res_3621_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(v_00_u03b2_3616_, v_x_3617_, v_x_3727__boxed_3620_, v_x_3619_);
lean_dec_ref(v_x_3619_);
lean_dec_ref(v_x_3617_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_3622_, lean_object* v_n_3623_, lean_object* v_k_3624_, lean_object* v_v_3625_){
_start:
{
lean_object* v___x_3626_; 
v___x_3626_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v_n_3623_, v_k_3624_, v_v_3625_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_3627_, size_t v_depth_3628_, lean_object* v_keys_3629_, lean_object* v_vals_3630_, lean_object* v_heq_3631_, lean_object* v_i_3632_, lean_object* v_entries_3633_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_3628_, v_keys_3629_, v_vals_3630_, v_i_3632_, v_entries_3633_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3635_, lean_object* v_depth_3636_, lean_object* v_keys_3637_, lean_object* v_vals_3638_, lean_object* v_heq_3639_, lean_object* v_i_3640_, lean_object* v_entries_3641_){
_start:
{
size_t v_depth_boxed_3642_; lean_object* v_res_3643_; 
v_depth_boxed_3642_ = lean_unbox_usize(v_depth_3636_);
lean_dec(v_depth_3636_);
v_res_3643_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(v_00_u03b2_3635_, v_depth_boxed_3642_, v_keys_3637_, v_vals_3638_, v_heq_3639_, v_i_3640_, v_entries_3641_);
lean_dec_ref(v_vals_3638_);
lean_dec_ref(v_keys_3637_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_3644_, lean_object* v_keys_3645_, lean_object* v_vals_3646_, lean_object* v_heq_3647_, lean_object* v_i_3648_, lean_object* v_k_3649_){
_start:
{
lean_object* v___x_3650_; 
v___x_3650_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_3645_, v_vals_3646_, v_i_3648_, v_k_3649_);
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3651_, lean_object* v_keys_3652_, lean_object* v_vals_3653_, lean_object* v_heq_3654_, lean_object* v_i_3655_, lean_object* v_k_3656_){
_start:
{
lean_object* v_res_3657_; 
v_res_3657_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(v_00_u03b2_3651_, v_keys_3652_, v_vals_3653_, v_heq_3654_, v_i_3655_, v_k_3656_);
lean_dec_ref(v_k_3656_);
lean_dec_ref(v_vals_3653_);
lean_dec_ref(v_keys_3652_);
return v_res_3657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3658_, lean_object* v_x_3659_, lean_object* v_x_3660_, lean_object* v_x_3661_, lean_object* v_x_3662_){
_start:
{
lean_object* v___x_3663_; 
v___x_3663_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(v_x_3659_, v_x_3660_, v_x_3661_, v_x_3662_);
return v___x_3663_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3669_ = l_Lean_maxRecDepthErrorMessage;
v___x_3670_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
return v___x_3670_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3671_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3);
v___x_3672_ = l_Lean_MessageData_ofFormat(v___x_3671_);
return v___x_3672_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3673_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4);
v___x_3674_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2));
v___x_3675_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
lean_ctor_set(v___x_3675_, 1, v___x_3673_);
return v___x_3675_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object* v_ref_3676_){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3678_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5);
v___x_3679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3679_, 0, v_ref_3676_);
lean_ctor_set(v___x_3679_, 1, v___x_3678_);
v___x_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3679_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object* v_ref_3681_, lean_object* v___y_3682_){
_start:
{
lean_object* v_res_3683_; 
v_res_3683_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3681_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object* v_00_u03b1_3684_, lean_object* v_ref_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3685_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object* v_00_u03b1_3692_, lean_object* v_ref_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(v_00_u03b1_3692_, v_ref_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_);
lean_dec(v___y_3697_);
lean_dec_ref(v___y_3696_);
lean_dec(v___y_3695_);
lean_dec_ref(v___y_3694_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0(lean_object* v_e_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v___x_3752_; uint8_t v_beta_3753_; 
v___x_3752_ = l_Lean_Meta_Context_config(v___y_3701_);
v_beta_3753_ = lean_ctor_get_uint8(v___x_3752_, 13);
if (v_beta_3753_ == 0)
{
lean_dec_ref(v___x_3752_);
goto v___jp_3706_;
}
else
{
uint8_t v_iota_3754_; 
v_iota_3754_ = lean_ctor_get_uint8(v___x_3752_, 12);
if (v_iota_3754_ == 0)
{
lean_dec_ref(v___x_3752_);
goto v___jp_3706_;
}
else
{
uint8_t v_zeta_3755_; 
v_zeta_3755_ = lean_ctor_get_uint8(v___x_3752_, 15);
if (v_zeta_3755_ == 0)
{
lean_dec_ref(v___x_3752_);
goto v___jp_3706_;
}
else
{
uint8_t v_zetaHave_3756_; 
v_zetaHave_3756_ = lean_ctor_get_uint8(v___x_3752_, 18);
if (v_zetaHave_3756_ == 0)
{
lean_dec_ref(v___x_3752_);
goto v___jp_3706_;
}
else
{
uint8_t v_zetaDelta_3757_; 
v_zetaDelta_3757_ = lean_ctor_get_uint8(v___x_3752_, 16);
if (v_zetaDelta_3757_ == 0)
{
lean_dec_ref(v___x_3752_);
goto v___jp_3706_;
}
else
{
uint8_t v_etaStruct_3758_; uint8_t v_proj_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
v_etaStruct_3758_ = lean_ctor_get_uint8(v___x_3752_, 10);
v_proj_3759_ = lean_ctor_get_uint8(v___x_3752_, 14);
lean_dec_ref(v___x_3752_);
v___x_3760_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_3759_);
v___x_3761_ = lean_obj_once(&l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0, &l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0);
v___x_3762_ = lean_nat_dec_eq(v___x_3760_, v___x_3761_);
lean_dec(v___x_3760_);
if (v___x_3762_ == 0)
{
goto v___jp_3706_;
}
else
{
uint8_t v___x_3763_; uint8_t v___x_3764_; 
v___x_3763_ = 0;
v___x_3764_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_3758_, v___x_3763_);
if (v___x_3764_ == 0)
{
goto v___jp_3706_;
}
else
{
lean_object* v___x_3765_; 
v___x_3765_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
lean_dec_ref(v___y_3701_);
return v___x_3765_;
}
}
}
}
}
}
}
v___jp_3706_:
{
lean_object* v___x_3707_; uint8_t v_foApprox_3708_; uint8_t v_ctxApprox_3709_; uint8_t v_quasiPatternApprox_3710_; uint8_t v_constApprox_3711_; uint8_t v_isDefEqStuckEx_3712_; uint8_t v_unificationHints_3713_; uint8_t v_proofIrrelevance_3714_; uint8_t v_assignSyntheticOpaque_3715_; uint8_t v_offsetCnstrs_3716_; uint8_t v_transparency_3717_; uint8_t v_univApprox_3718_; uint8_t v_zetaUnused_3719_; uint8_t v_canUnfoldPredicateConfig_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3751_; 
v___x_3707_ = l_Lean_Meta_Context_config(v___y_3701_);
v_foApprox_3708_ = lean_ctor_get_uint8(v___x_3707_, 0);
v_ctxApprox_3709_ = lean_ctor_get_uint8(v___x_3707_, 1);
v_quasiPatternApprox_3710_ = lean_ctor_get_uint8(v___x_3707_, 2);
v_constApprox_3711_ = lean_ctor_get_uint8(v___x_3707_, 3);
v_isDefEqStuckEx_3712_ = lean_ctor_get_uint8(v___x_3707_, 4);
v_unificationHints_3713_ = lean_ctor_get_uint8(v___x_3707_, 5);
v_proofIrrelevance_3714_ = lean_ctor_get_uint8(v___x_3707_, 6);
v_assignSyntheticOpaque_3715_ = lean_ctor_get_uint8(v___x_3707_, 7);
v_offsetCnstrs_3716_ = lean_ctor_get_uint8(v___x_3707_, 8);
v_transparency_3717_ = lean_ctor_get_uint8(v___x_3707_, 9);
v_univApprox_3718_ = lean_ctor_get_uint8(v___x_3707_, 11);
v_zetaUnused_3719_ = lean_ctor_get_uint8(v___x_3707_, 17);
v_canUnfoldPredicateConfig_3720_ = lean_ctor_get_uint8(v___x_3707_, 19);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3722_ = v___x_3707_;
v_isShared_3723_ = v_isSharedCheck_3751_;
goto v_resetjp_3721_;
}
else
{
lean_dec(v___x_3707_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3751_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
uint8_t v___x_3724_; uint8_t v___x_3725_; uint8_t v___x_3726_; lean_object* v___x_3728_; 
v___x_3724_ = 1;
v___x_3725_ = 0;
v___x_3726_ = 2;
if (v_isShared_3723_ == 0)
{
v___x_3728_ = v___x_3722_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 0, v_foApprox_3708_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 1, v_ctxApprox_3709_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 2, v_quasiPatternApprox_3710_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 3, v_constApprox_3711_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 4, v_isDefEqStuckEx_3712_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 5, v_unificationHints_3713_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 6, v_proofIrrelevance_3714_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 7, v_assignSyntheticOpaque_3715_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 8, v_offsetCnstrs_3716_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 9, v_transparency_3717_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 11, v_univApprox_3718_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 17, v_zetaUnused_3719_);
lean_ctor_set_uint8(v_reuseFailAlloc_3750_, 19, v_canUnfoldPredicateConfig_3720_);
v___x_3728_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
uint8_t v_trackZetaDelta_3729_; lean_object* v_zetaDeltaSet_3730_; lean_object* v_lctx_3731_; lean_object* v_localInstances_3732_; lean_object* v_defEqCtx_x3f_3733_; lean_object* v_synthPendingDepth_3734_; lean_object* v_customCanUnfoldPredicate_x3f_3735_; uint8_t v_univApprox_3736_; uint8_t v_inTypeClassResolution_3737_; uint8_t v_cacheInferType_3738_; lean_object* v___x_3740_; uint8_t v_isShared_3741_; uint8_t v_isSharedCheck_3748_; 
lean_ctor_set_uint8(v___x_3728_, 10, v___x_3725_);
lean_ctor_set_uint8(v___x_3728_, 12, v___x_3724_);
lean_ctor_set_uint8(v___x_3728_, 13, v___x_3724_);
lean_ctor_set_uint8(v___x_3728_, 14, v___x_3726_);
lean_ctor_set_uint8(v___x_3728_, 15, v___x_3724_);
lean_ctor_set_uint8(v___x_3728_, 16, v___x_3724_);
lean_ctor_set_uint8(v___x_3728_, 18, v___x_3724_);
v_trackZetaDelta_3729_ = lean_ctor_get_uint8(v___y_3701_, sizeof(void*)*7);
v_zetaDeltaSet_3730_ = lean_ctor_get(v___y_3701_, 1);
v_lctx_3731_ = lean_ctor_get(v___y_3701_, 2);
v_localInstances_3732_ = lean_ctor_get(v___y_3701_, 3);
v_defEqCtx_x3f_3733_ = lean_ctor_get(v___y_3701_, 4);
v_synthPendingDepth_3734_ = lean_ctor_get(v___y_3701_, 5);
v_customCanUnfoldPredicate_x3f_3735_ = lean_ctor_get(v___y_3701_, 6);
v_univApprox_3736_ = lean_ctor_get_uint8(v___y_3701_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3737_ = lean_ctor_get_uint8(v___y_3701_, sizeof(void*)*7 + 2);
v_cacheInferType_3738_ = lean_ctor_get_uint8(v___y_3701_, sizeof(void*)*7 + 3);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___y_3701_);
if (v_isSharedCheck_3748_ == 0)
{
lean_object* v_unused_3749_; 
v_unused_3749_ = lean_ctor_get(v___y_3701_, 0);
lean_dec(v_unused_3749_);
v___x_3740_ = v___y_3701_;
v_isShared_3741_ = v_isSharedCheck_3748_;
goto v_resetjp_3739_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_3735_);
lean_inc(v_synthPendingDepth_3734_);
lean_inc(v_defEqCtx_x3f_3733_);
lean_inc(v_localInstances_3732_);
lean_inc(v_lctx_3731_);
lean_inc(v_zetaDeltaSet_3730_);
lean_dec(v___y_3701_);
v___x_3740_ = lean_box(0);
v_isShared_3741_ = v_isSharedCheck_3748_;
goto v_resetjp_3739_;
}
v_resetjp_3739_:
{
uint64_t v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3745_; 
v___x_3742_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3728_);
v___x_3743_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3743_, 0, v___x_3728_);
lean_ctor_set_uint64(v___x_3743_, sizeof(void*)*1, v___x_3742_);
if (v_isShared_3741_ == 0)
{
lean_ctor_set(v___x_3740_, 0, v___x_3743_);
v___x_3745_ = v___x_3740_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v___x_3743_);
lean_ctor_set(v_reuseFailAlloc_3747_, 1, v_zetaDeltaSet_3730_);
lean_ctor_set(v_reuseFailAlloc_3747_, 2, v_lctx_3731_);
lean_ctor_set(v_reuseFailAlloc_3747_, 3, v_localInstances_3732_);
lean_ctor_set(v_reuseFailAlloc_3747_, 4, v_defEqCtx_x3f_3733_);
lean_ctor_set(v_reuseFailAlloc_3747_, 5, v_synthPendingDepth_3734_);
lean_ctor_set(v_reuseFailAlloc_3747_, 6, v_customCanUnfoldPredicate_x3f_3735_);
lean_ctor_set_uint8(v_reuseFailAlloc_3747_, sizeof(void*)*7, v_trackZetaDelta_3729_);
lean_ctor_set_uint8(v_reuseFailAlloc_3747_, sizeof(void*)*7 + 1, v_univApprox_3736_);
lean_ctor_set_uint8(v_reuseFailAlloc_3747_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3737_);
lean_ctor_set_uint8(v_reuseFailAlloc_3747_, sizeof(void*)*7 + 3, v_cacheInferType_3738_);
v___x_3745_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
lean_object* v___x_3746_; 
v___x_3746_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3700_, v___x_3745_, v___y_3702_, v___y_3703_, v___y_3704_);
lean_dec_ref(v___x_3745_);
return v___x_3746_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0___boxed(lean_object* v_e_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec(v___y_3768_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* lean_infer_type(lean_object* v_e_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
lean_object* v___y_3780_; lean_object* v_toCold_3797_; lean_object* v_currRecDepth_3798_; lean_object* v_ref_3799_; uint8_t v_diag_3800_; uint8_t v_suppressElabErrors_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3841_; 
v_toCold_3797_ = lean_ctor_get(v___y_3776_, 0);
v_currRecDepth_3798_ = lean_ctor_get(v___y_3776_, 1);
v_ref_3799_ = lean_ctor_get(v___y_3776_, 2);
v_diag_3800_ = lean_ctor_get_uint8(v___y_3776_, sizeof(void*)*3);
v_suppressElabErrors_3801_ = lean_ctor_get_uint8(v___y_3776_, sizeof(void*)*3 + 1);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___y_3776_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3803_ = v___y_3776_;
v_isShared_3804_ = v_isSharedCheck_3841_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_ref_3799_);
lean_inc(v_currRecDepth_3798_);
lean_inc(v_toCold_3797_);
lean_dec(v___y_3776_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3841_;
goto v_resetjp_3802_;
}
v___jp_3779_:
{
if (lean_obj_tag(v___y_3780_) == 0)
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
v_a_3781_ = lean_ctor_get(v___y_3780_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___y_3780_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___y_3780_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___y_3780_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
v_a_3789_ = lean_ctor_get(v___y_3780_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___y_3780_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___y_3780_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___y_3780_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
v_resetjp_3802_:
{
lean_object* v_maxRecDepth_3805_; lean_object* v___x_3837_; uint8_t v___x_3838_; 
v_maxRecDepth_3805_ = lean_ctor_get(v_toCold_3797_, 3);
v___x_3837_ = lean_unsigned_to_nat(0u);
v___x_3838_ = lean_nat_dec_eq(v_maxRecDepth_3805_, v___x_3837_);
if (v___x_3838_ == 0)
{
uint8_t v___x_3839_; 
v___x_3839_ = lean_nat_dec_eq(v_currRecDepth_3798_, v_maxRecDepth_3805_);
if (v___x_3839_ == 0)
{
goto v___jp_3806_;
}
else
{
lean_object* v___x_3840_; 
lean_del_object(v___x_3803_);
lean_dec(v_currRecDepth_3798_);
lean_dec_ref(v_toCold_3797_);
lean_dec(v___y_3777_);
lean_dec(v___y_3775_);
lean_dec_ref(v___y_3774_);
lean_dec_ref(v_e_3773_);
v___x_3840_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3799_);
return v___x_3840_;
}
}
else
{
goto v___jp_3806_;
}
v___jp_3806_:
{
lean_object* v___x_3807_; uint8_t v_transparency_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3812_; 
v___x_3807_ = l_Lean_Meta_Context_config(v___y_3774_);
v_transparency_3808_ = lean_ctor_get_uint8(v___x_3807_, 9);
lean_dec_ref(v___x_3807_);
v___x_3809_ = lean_unsigned_to_nat(1u);
v___x_3810_ = lean_nat_add(v_currRecDepth_3798_, v___x_3809_);
lean_dec(v_currRecDepth_3798_);
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 1, v___x_3810_);
v___x_3812_ = v___x_3803_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v_toCold_3797_);
lean_ctor_set(v_reuseFailAlloc_3836_, 1, v___x_3810_);
lean_ctor_set(v_reuseFailAlloc_3836_, 2, v_ref_3799_);
lean_ctor_set_uint8(v_reuseFailAlloc_3836_, sizeof(void*)*3, v_diag_3800_);
lean_ctor_set_uint8(v_reuseFailAlloc_3836_, sizeof(void*)*3 + 1, v_suppressElabErrors_3801_);
v___x_3812_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
uint8_t v___x_3813_; uint8_t v___x_3814_; 
v___x_3813_ = 1;
v___x_3814_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_3808_, v___x_3813_);
if (v___x_3814_ == 0)
{
lean_object* v___x_3815_; 
v___x_3815_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3773_, v___y_3774_, v___y_3775_, v___x_3812_, v___y_3777_);
lean_dec(v___y_3777_);
lean_dec_ref(v___x_3812_);
lean_dec(v___y_3775_);
v___y_3780_ = v___x_3815_;
goto v___jp_3779_;
}
else
{
lean_object* v_keyedConfig_3816_; uint8_t v_trackZetaDelta_3817_; lean_object* v_zetaDeltaSet_3818_; lean_object* v_lctx_3819_; lean_object* v_localInstances_3820_; lean_object* v_defEqCtx_x3f_3821_; lean_object* v_synthPendingDepth_3822_; lean_object* v_customCanUnfoldPredicate_x3f_3823_; uint8_t v_univApprox_3824_; uint8_t v_inTypeClassResolution_3825_; uint8_t v_cacheInferType_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3835_; 
v_keyedConfig_3816_ = lean_ctor_get(v___y_3774_, 0);
v_trackZetaDelta_3817_ = lean_ctor_get_uint8(v___y_3774_, sizeof(void*)*7);
v_zetaDeltaSet_3818_ = lean_ctor_get(v___y_3774_, 1);
v_lctx_3819_ = lean_ctor_get(v___y_3774_, 2);
v_localInstances_3820_ = lean_ctor_get(v___y_3774_, 3);
v_defEqCtx_x3f_3821_ = lean_ctor_get(v___y_3774_, 4);
v_synthPendingDepth_3822_ = lean_ctor_get(v___y_3774_, 5);
v_customCanUnfoldPredicate_x3f_3823_ = lean_ctor_get(v___y_3774_, 6);
v_univApprox_3824_ = lean_ctor_get_uint8(v___y_3774_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3825_ = lean_ctor_get_uint8(v___y_3774_, sizeof(void*)*7 + 2);
v_cacheInferType_3826_ = lean_ctor_get_uint8(v___y_3774_, sizeof(void*)*7 + 3);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___y_3774_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3828_ = v___y_3774_;
v_isShared_3829_ = v_isSharedCheck_3835_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_3823_);
lean_inc(v_synthPendingDepth_3822_);
lean_inc(v_defEqCtx_x3f_3821_);
lean_inc(v_localInstances_3820_);
lean_inc(v_lctx_3819_);
lean_inc(v_zetaDeltaSet_3818_);
lean_inc(v_keyedConfig_3816_);
lean_dec(v___y_3774_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3835_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; lean_object* v___x_3832_; 
v___x_3830_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3813_, v_keyedConfig_3816_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 0, v___x_3830_);
v___x_3832_ = v___x_3828_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3830_);
lean_ctor_set(v_reuseFailAlloc_3834_, 1, v_zetaDeltaSet_3818_);
lean_ctor_set(v_reuseFailAlloc_3834_, 2, v_lctx_3819_);
lean_ctor_set(v_reuseFailAlloc_3834_, 3, v_localInstances_3820_);
lean_ctor_set(v_reuseFailAlloc_3834_, 4, v_defEqCtx_x3f_3821_);
lean_ctor_set(v_reuseFailAlloc_3834_, 5, v_synthPendingDepth_3822_);
lean_ctor_set(v_reuseFailAlloc_3834_, 6, v_customCanUnfoldPredicate_x3f_3823_);
lean_ctor_set_uint8(v_reuseFailAlloc_3834_, sizeof(void*)*7, v_trackZetaDelta_3817_);
lean_ctor_set_uint8(v_reuseFailAlloc_3834_, sizeof(void*)*7 + 1, v_univApprox_3824_);
lean_ctor_set_uint8(v_reuseFailAlloc_3834_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3825_);
lean_ctor_set_uint8(v_reuseFailAlloc_3834_, sizeof(void*)*7 + 3, v_cacheInferType_3826_);
v___x_3832_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3833_; 
v___x_3833_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3773_, v___x_3832_, v___y_3775_, v___x_3812_, v___y_3777_);
lean_dec(v___y_3777_);
lean_dec_ref(v___x_3812_);
lean_dec(v___y_3775_);
v___y_3780_ = v___x_3833_;
goto v___jp_3779_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object* v_e_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = lean_infer_type(v_e_3842_, v___y_3843_, v___y_3844_, v___y_3845_, v___y_3846_);
return v_res_3848_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object* v_x_3849_){
_start:
{
switch(lean_obj_tag(v_x_3849_))
{
case 0:
{
uint8_t v___x_3850_; 
v___x_3850_ = 1;
return v___x_3850_;
}
case 2:
{
lean_object* v_a_3851_; lean_object* v_a_3852_; uint8_t v___x_3853_; 
v_a_3851_ = lean_ctor_get(v_x_3849_, 0);
v_a_3852_ = lean_ctor_get(v_x_3849_, 1);
v___x_3853_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3851_);
if (v___x_3853_ == 0)
{
return v___x_3853_;
}
else
{
v_x_3849_ = v_a_3852_;
goto _start;
}
}
case 3:
{
lean_object* v_a_3855_; 
v_a_3855_ = lean_ctor_get(v_x_3849_, 1);
v_x_3849_ = v_a_3855_;
goto _start;
}
default: 
{
uint8_t v___x_3857_; 
v___x_3857_ = 0;
return v___x_3857_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object* v_x_3858_){
_start:
{
uint8_t v_res_3859_; lean_object* v_r_3860_; 
v_res_3859_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_x_3858_);
lean_dec(v_x_3858_);
v_r_3860_ = lean_box(v_res_3859_);
return v_r_3860_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object* v_l_3861_, lean_object* v___y_3862_){
_start:
{
lean_object* v___x_3864_; lean_object* v_mctx_3865_; lean_object* v___x_3866_; lean_object* v_fst_3867_; lean_object* v_snd_3868_; lean_object* v___x_3869_; lean_object* v_cache_3870_; lean_object* v_zetaDeltaFVarIds_3871_; lean_object* v_postponed_3872_; lean_object* v_diag_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3882_; 
v___x_3864_ = lean_st_ref_get(v___y_3862_);
v_mctx_3865_ = lean_ctor_get(v___x_3864_, 0);
lean_inc_ref(v_mctx_3865_);
lean_dec(v___x_3864_);
v___x_3866_ = lean_instantiate_level_mvars(v_mctx_3865_, v_l_3861_);
v_fst_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_fst_3867_);
v_snd_3868_ = lean_ctor_get(v___x_3866_, 1);
lean_inc(v_snd_3868_);
lean_dec_ref(v___x_3866_);
v___x_3869_ = lean_st_ref_take(v___y_3862_);
v_cache_3870_ = lean_ctor_get(v___x_3869_, 1);
v_zetaDeltaFVarIds_3871_ = lean_ctor_get(v___x_3869_, 2);
v_postponed_3872_ = lean_ctor_get(v___x_3869_, 3);
v_diag_3873_ = lean_ctor_get(v___x_3869_, 4);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3869_);
if (v_isSharedCheck_3882_ == 0)
{
lean_object* v_unused_3883_; 
v_unused_3883_ = lean_ctor_get(v___x_3869_, 0);
lean_dec(v_unused_3883_);
v___x_3875_ = v___x_3869_;
v_isShared_3876_ = v_isSharedCheck_3882_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_diag_3873_);
lean_inc(v_postponed_3872_);
lean_inc(v_zetaDeltaFVarIds_3871_);
lean_inc(v_cache_3870_);
lean_dec(v___x_3869_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3882_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 0, v_fst_3867_);
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_fst_3867_);
lean_ctor_set(v_reuseFailAlloc_3881_, 1, v_cache_3870_);
lean_ctor_set(v_reuseFailAlloc_3881_, 2, v_zetaDeltaFVarIds_3871_);
lean_ctor_set(v_reuseFailAlloc_3881_, 3, v_postponed_3872_);
lean_ctor_set(v_reuseFailAlloc_3881_, 4, v_diag_3873_);
v___x_3878_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3879_ = lean_st_ref_put(v___y_3862_, v___x_3878_);
v___x_3880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3880_, 0, v_snd_3868_);
return v___x_3880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object* v_l_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3884_, v___y_3885_);
lean_dec(v___y_3885_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object* v_l_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3888_, v___y_3890_);
return v___x_3894_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object* v_l_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(v_l_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
lean_dec(v___y_3899_);
lean_dec_ref(v___y_3898_);
lean_dec(v___y_3897_);
lean_dec_ref(v___y_3896_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object* v_x_3902_, lean_object* v_x_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_){
_start:
{
switch(lean_obj_tag(v_x_3902_))
{
case 3:
{
lean_object* v_u_3913_; lean_object* v___x_3914_; uint8_t v___x_3915_; 
v_u_3913_ = lean_ctor_get(v_x_3902_, 0);
lean_inc(v_u_3913_);
lean_dec_ref_known(v_x_3902_, 1);
v___x_3914_ = lean_unsigned_to_nat(0u);
v___x_3915_ = lean_nat_dec_eq(v_x_3903_, v___x_3914_);
lean_dec(v_x_3903_);
if (v___x_3915_ == 0)
{
lean_dec(v_u_3913_);
goto v___jp_3909_;
}
else
{
lean_object* v___x_3916_; 
v___x_3916_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_3913_, v___y_3905_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3927_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3919_ = v___x_3916_;
v_isShared_3920_ = v_isSharedCheck_3927_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3916_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3927_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
uint8_t v___x_3921_; uint8_t v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3925_; 
v___x_3921_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3917_);
lean_dec(v_a_3917_);
v___x_3922_ = l_Lean_Bool_toLBool(v___x_3921_);
v___x_3923_ = lean_box(v___x_3922_);
if (v_isShared_3920_ == 0)
{
lean_ctor_set(v___x_3919_, 0, v___x_3923_);
v___x_3925_ = v___x_3919_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
v_a_3928_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___x_3916_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3916_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
}
}
case 7:
{
lean_object* v_body_3936_; lean_object* v_zero_3937_; uint8_t v_isZero_3938_; 
v_body_3936_ = lean_ctor_get(v_x_3902_, 2);
lean_inc_ref(v_body_3936_);
lean_dec_ref_known(v_x_3902_, 3);
v_zero_3937_ = lean_unsigned_to_nat(0u);
v_isZero_3938_ = lean_nat_dec_eq(v_x_3903_, v_zero_3937_);
if (v_isZero_3938_ == 1)
{
uint8_t v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
lean_dec_ref(v_body_3936_);
lean_dec(v_x_3903_);
v___x_3939_ = 0;
v___x_3940_ = lean_box(v___x_3939_);
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
return v___x_3941_;
}
else
{
lean_object* v_one_3942_; lean_object* v_n_3943_; 
v_one_3942_ = lean_unsigned_to_nat(1u);
v_n_3943_ = lean_nat_sub(v_x_3903_, v_one_3942_);
lean_dec(v_x_3903_);
v_x_3902_ = v_body_3936_;
v_x_3903_ = v_n_3943_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3945_; 
v_body_3945_ = lean_ctor_get(v_x_3902_, 3);
lean_inc_ref(v_body_3945_);
lean_dec_ref_known(v_x_3902_, 4);
v_x_3902_ = v_body_3945_;
goto _start;
}
case 10:
{
lean_object* v_expr_3947_; 
v_expr_3947_ = lean_ctor_get(v_x_3902_, 1);
lean_inc_ref(v_expr_3947_);
lean_dec_ref_known(v_x_3902_, 2);
v_x_3902_ = v_expr_3947_;
goto _start;
}
default: 
{
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3902_);
goto v___jp_3909_;
}
}
v___jp_3909_:
{
uint8_t v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3910_ = 2;
v___x_3911_ = lean_box(v___x_3910_);
v___x_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
return v___x_3912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object* v_x_3949_, lean_object* v_x_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_x_3949_, v_x_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object* v_x_3957_, lean_object* v_x_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
switch(lean_obj_tag(v_x_3957_))
{
case 4:
{
lean_object* v_declName_3964_; lean_object* v_us_3965_; lean_object* v___x_3966_; 
v_declName_3964_ = lean_ctor_get(v_x_3957_, 0);
lean_inc(v_declName_3964_);
v_us_3965_ = lean_ctor_get(v_x_3957_, 1);
lean_inc(v_us_3965_);
lean_dec_ref_known(v_x_3957_, 2);
v___x_3966_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3964_, v_us_3965_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_object* v_a_3967_; lean_object* v___x_3968_; 
v_a_3967_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_a_3967_);
lean_dec_ref_known(v___x_3966_, 1);
v___x_3968_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3967_, v_x_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
return v___x_3968_;
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
lean_dec(v_x_3958_);
v_a_3969_ = lean_ctor_get(v___x_3966_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3966_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3966_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3966_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_3977_; lean_object* v___x_3978_; 
v_fvarId_3977_ = lean_ctor_get(v_x_3957_, 0);
lean_inc(v_fvarId_3977_);
lean_dec_ref_known(v_x_3957_, 1);
v___x_3978_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3977_, v___y_3959_, v___y_3961_, v___y_3962_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3980_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3979_, v_x_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
return v___x_3980_;
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_dec(v_x_3958_);
v_a_3981_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3978_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3978_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_3989_; lean_object* v___x_3990_; 
v_mvarId_3989_ = lean_ctor_get(v_x_3957_, 0);
lean_inc(v_mvarId_3989_);
lean_dec_ref_known(v_x_3957_, 1);
v___x_3990_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3989_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3992_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3990_, 1);
v___x_3992_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3991_, v_x_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
return v___x_3992_;
}
else
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4000_; 
lean_dec(v_x_3958_);
v_a_3993_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3995_ = v___x_3990_;
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3990_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3998_; 
if (v_isShared_3996_ == 0)
{
v___x_3998_ = v___x_3995_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3993_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
case 5:
{
lean_object* v_fn_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v_fn_4001_ = lean_ctor_get(v_x_3957_, 0);
lean_inc_ref(v_fn_4001_);
lean_dec_ref_known(v_x_3957_, 2);
v___x_4002_ = lean_unsigned_to_nat(1u);
v___x_4003_ = lean_nat_add(v_x_3958_, v___x_4002_);
lean_dec(v_x_3958_);
v_x_3957_ = v_fn_4001_;
v_x_3958_ = v___x_4003_;
goto _start;
}
case 10:
{
lean_object* v_expr_4005_; 
v_expr_4005_ = lean_ctor_get(v_x_3957_, 1);
lean_inc_ref(v_expr_4005_);
lean_dec_ref_known(v_x_3957_, 2);
v_x_3957_ = v_expr_4005_;
goto _start;
}
case 8:
{
lean_object* v_body_4007_; 
v_body_4007_ = lean_ctor_get(v_x_3957_, 3);
lean_inc_ref(v_body_4007_);
lean_dec_ref_known(v_x_3957_, 4);
v_x_3957_ = v_body_4007_;
goto _start;
}
case 6:
{
lean_object* v_body_4009_; lean_object* v_zero_4010_; uint8_t v_isZero_4011_; 
v_body_4009_ = lean_ctor_get(v_x_3957_, 2);
lean_inc_ref(v_body_4009_);
lean_dec_ref_known(v_x_3957_, 3);
v_zero_4010_ = lean_unsigned_to_nat(0u);
v_isZero_4011_ = lean_nat_dec_eq(v_x_3958_, v_zero_4010_);
if (v_isZero_4011_ == 1)
{
uint8_t v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
lean_dec_ref(v_body_4009_);
lean_dec(v_x_3958_);
v___x_4012_ = 0;
v___x_4013_ = lean_box(v___x_4012_);
v___x_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
return v___x_4014_;
}
else
{
lean_object* v_one_4015_; lean_object* v_n_4016_; 
v_one_4015_ = lean_unsigned_to_nat(1u);
v_n_4016_ = lean_nat_sub(v_x_3958_, v_one_4015_);
lean_dec(v_x_3958_);
v_x_3957_ = v_body_4009_;
v_x_3958_ = v_n_4016_;
goto _start;
}
}
default: 
{
uint8_t v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
lean_dec(v_x_3958_);
lean_dec_ref(v_x_3957_);
v___x_4018_ = 2;
v___x_4019_ = lean_box(v___x_4018_);
v___x_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4020_, 0, v___x_4019_);
return v___x_4020_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object* v_x_4021_, lean_object* v_x_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_x_4021_, v_x_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_);
lean_dec(v___y_4026_);
lean_dec_ref(v___y_4025_);
lean_dec(v___y_4024_);
lean_dec_ref(v___y_4023_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object* v_x_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
switch(lean_obj_tag(v_x_4029_))
{
case 0:
{
uint8_t v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
lean_dec_ref_known(v_x_4029_, 1);
v___x_4035_ = 2;
v___x_4036_ = lean_box(v___x_4035_);
v___x_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
return v___x_4037_;
}
case 1:
{
lean_object* v_fvarId_4038_; lean_object* v___x_4039_; 
v_fvarId_4038_ = lean_ctor_get(v_x_4029_, 0);
lean_inc(v_fvarId_4038_);
lean_dec_ref_known(v_x_4029_, 1);
v___x_4039_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4038_, v___y_4030_, v___y_4032_, v___y_4033_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; 
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_a_4040_);
lean_dec_ref_known(v___x_4039_, 1);
v___x_4041_ = lean_unsigned_to_nat(0u);
v___x_4042_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4040_, v___x_4041_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
return v___x_4042_;
}
else
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
v_a_4043_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4045_ = v___x_4039_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v___x_4039_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4051_; lean_object* v___x_4052_; 
v_mvarId_4051_ = lean_ctor_get(v_x_4029_, 0);
lean_inc(v_mvarId_4051_);
lean_dec_ref_known(v_x_4029_, 1);
v___x_4052_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4051_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
if (lean_obj_tag(v___x_4052_) == 0)
{
lean_object* v_a_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; 
v_a_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_a_4053_);
lean_dec_ref_known(v___x_4052_, 1);
v___x_4054_ = lean_unsigned_to_nat(0u);
v___x_4055_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4053_, v___x_4054_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
return v___x_4055_;
}
else
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4063_; 
v_a_4056_ = lean_ctor_get(v___x_4052_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_4052_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4058_ = v___x_4052_;
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_4052_);
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
}
case 4:
{
lean_object* v_declName_4064_; lean_object* v_us_4065_; lean_object* v___x_4066_; 
v_declName_4064_ = lean_ctor_get(v_x_4029_, 0);
lean_inc(v_declName_4064_);
v_us_4065_ = lean_ctor_get(v_x_4029_, 1);
lean_inc(v_us_4065_);
lean_dec_ref_known(v_x_4029_, 2);
v___x_4066_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4064_, v_us_4065_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v_a_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4067_);
lean_dec_ref_known(v___x_4066_, 1);
v___x_4068_ = lean_unsigned_to_nat(0u);
v___x_4069_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4067_, v___x_4068_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
return v___x_4069_;
}
else
{
lean_object* v_a_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4077_; 
v_a_4070_ = lean_ctor_get(v___x_4066_, 0);
v_isSharedCheck_4077_ = !lean_is_exclusive(v___x_4066_);
if (v_isSharedCheck_4077_ == 0)
{
v___x_4072_ = v___x_4066_;
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_a_4070_);
lean_dec(v___x_4066_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v___x_4075_; 
if (v_isShared_4073_ == 0)
{
v___x_4075_ = v___x_4072_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v_a_4070_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
case 5:
{
lean_object* v_fn_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v_fn_4078_ = lean_ctor_get(v_x_4029_, 0);
lean_inc_ref(v_fn_4078_);
lean_dec_ref_known(v_x_4029_, 2);
v___x_4079_ = lean_unsigned_to_nat(1u);
v___x_4080_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_fn_4078_, v___x_4079_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
return v___x_4080_;
}
case 7:
{
lean_object* v_body_4081_; 
v_body_4081_ = lean_ctor_get(v_x_4029_, 2);
lean_inc_ref(v_body_4081_);
lean_dec_ref_known(v_x_4029_, 3);
v_x_4029_ = v_body_4081_;
goto _start;
}
case 8:
{
lean_object* v_body_4083_; 
v_body_4083_ = lean_ctor_get(v_x_4029_, 3);
lean_inc_ref(v_body_4083_);
lean_dec_ref_known(v_x_4029_, 4);
v_x_4029_ = v_body_4083_;
goto _start;
}
case 10:
{
lean_object* v_expr_4085_; 
v_expr_4085_ = lean_ctor_get(v_x_4029_, 1);
lean_inc_ref(v_expr_4085_);
lean_dec_ref_known(v_x_4029_, 2);
v_x_4029_ = v_expr_4085_;
goto _start;
}
case 11:
{
uint8_t v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
lean_dec_ref_known(v_x_4029_, 3);
v___x_4087_ = 2;
v___x_4088_ = lean_box(v___x_4087_);
v___x_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
return v___x_4089_;
}
default: 
{
uint8_t v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
lean_dec_ref(v_x_4029_);
v___x_4090_ = 0;
v___x_4091_ = lean_box(v___x_4090_);
v___x_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4092_, 0, v___x_4091_);
return v___x_4092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object* v_x_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v_res_4099_; 
v_res_4099_ = l_Lean_Meta_isPropQuick(v_x_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
lean_dec(v___y_4095_);
lean_dec_ref(v___y_4094_);
return v_res_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object* v_e_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_){
_start:
{
lean_object* v___x_4106_; 
lean_inc_ref(v_e_4100_);
v___x_4106_ = l_Lean_Meta_isPropQuick(v_e_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_);
if (lean_obj_tag(v___x_4106_) == 0)
{
lean_object* v_a_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4163_; 
v_a_4107_ = lean_ctor_get(v___x_4106_, 0);
v_isSharedCheck_4163_ = !lean_is_exclusive(v___x_4106_);
if (v_isSharedCheck_4163_ == 0)
{
v___x_4109_ = v___x_4106_;
v_isShared_4110_ = v_isSharedCheck_4163_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_a_4107_);
lean_dec(v___x_4106_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4163_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
uint8_t v___x_4111_; 
v___x_4111_ = lean_unbox(v_a_4107_);
lean_dec(v_a_4107_);
switch(v___x_4111_)
{
case 0:
{
uint8_t v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4115_; 
lean_dec_ref(v_e_4100_);
v___x_4112_ = 0;
v___x_4113_ = lean_box(v___x_4112_);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 0, v___x_4113_);
v___x_4115_ = v___x_4109_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
case 1:
{
uint8_t v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4120_; 
lean_dec_ref(v_e_4100_);
v___x_4117_ = 1;
v___x_4118_ = lean_box(v___x_4117_);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 0, v___x_4118_);
v___x_4120_ = v___x_4109_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
default: 
{
lean_object* v___x_4122_; 
lean_del_object(v___x_4109_);
lean_inc(v___y_4104_);
lean_inc_ref(v___y_4103_);
lean_inc(v___y_4102_);
lean_inc_ref(v___y_4101_);
v___x_4122_ = lean_infer_type(v_e_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v_a_4123_; lean_object* v___x_4124_; 
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4123_);
lean_dec_ref_known(v___x_4122_, 1);
v___x_4124_ = l_Lean_Meta_whnfD(v_a_4123_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4146_; 
v_a_4125_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4127_ = v___x_4124_;
v_isShared_4128_ = v_isSharedCheck_4146_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4124_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4146_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
if (lean_obj_tag(v_a_4125_) == 3)
{
lean_object* v_u_4129_; lean_object* v___x_4130_; lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4140_; 
lean_del_object(v___x_4127_);
v_u_4129_ = lean_ctor_get(v_a_4125_, 0);
lean_inc(v_u_4129_);
lean_dec_ref_known(v_a_4125_, 1);
v___x_4130_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_4129_, v___y_4102_);
v_a_4131_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4133_ = v___x_4130_;
v_isShared_4134_ = v_isSharedCheck_4140_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4130_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4140_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
uint8_t v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4138_; 
v___x_4135_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_4131_);
lean_dec(v_a_4131_);
v___x_4136_ = lean_box(v___x_4135_);
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 0, v___x_4136_);
v___x_4138_ = v___x_4133_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4136_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
else
{
uint8_t v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4144_; 
lean_dec(v_a_4125_);
v___x_4141_ = 0;
v___x_4142_ = lean_box(v___x_4141_);
if (v_isShared_4128_ == 0)
{
lean_ctor_set(v___x_4127_, 0, v___x_4142_);
v___x_4144_ = v___x_4127_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v___x_4142_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
v_a_4147_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4154_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4154_ == 0)
{
v___x_4149_ = v___x_4124_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4124_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_a_4147_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
else
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4162_; 
v_a_4155_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4162_ == 0)
{
v___x_4157_ = v___x_4122_;
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4122_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4158_ == 0)
{
v___x_4160_ = v___x_4157_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_a_4155_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4171_; 
lean_dec_ref(v_e_4100_);
v_a_4164_ = lean_ctor_get(v___x_4106_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4106_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4166_ = v___x_4106_;
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4106_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_a_4164_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object* v_e_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l_Lean_Meta_isProp(v_e_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_);
lean_dec(v___y_4176_);
lean_dec_ref(v___y_4175_);
lean_dec(v___y_4174_);
lean_dec_ref(v___y_4173_);
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object* v_x_4179_){
_start:
{
switch(lean_obj_tag(v_x_4179_))
{
case 0:
{
lean_object* v___x_4180_; 
v___x_4180_ = lean_unsigned_to_nat(0u);
return v___x_4180_;
}
case 1:
{
lean_object* v___x_4181_; 
v___x_4181_ = lean_unsigned_to_nat(1u);
return v___x_4181_;
}
case 2:
{
lean_object* v___x_4182_; 
v___x_4182_ = lean_unsigned_to_nat(2u);
return v___x_4182_;
}
default: 
{
lean_object* v___x_4183_; 
v___x_4183_ = lean_unsigned_to_nat(3u);
return v___x_4183_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object* v_x_4184_){
_start:
{
lean_object* v_res_4185_; 
v_res_4185_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(v_x_4184_);
lean_dec(v_x_4184_);
return v_res_4185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object* v_t_4186_, lean_object* v_k_4187_){
_start:
{
if (lean_obj_tag(v_t_4186_) == 3)
{
lean_object* v_idx_4188_; lean_object* v___x_4189_; 
v_idx_4188_ = lean_ctor_get(v_t_4186_, 0);
lean_inc(v_idx_4188_);
lean_dec_ref_known(v_t_4186_, 1);
v___x_4189_ = lean_apply_1(v_k_4187_, v_idx_4188_);
return v___x_4189_;
}
else
{
lean_dec(v_t_4186_);
return v_k_4187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object* v_motive_4190_, lean_object* v_ctorIdx_4191_, lean_object* v_t_4192_, lean_object* v_h_4193_, lean_object* v_k_4194_){
_start:
{
lean_object* v___x_4195_; 
v___x_4195_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4192_, v_k_4194_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object* v_motive_4196_, lean_object* v_ctorIdx_4197_, lean_object* v_t_4198_, lean_object* v_h_4199_, lean_object* v_k_4200_){
_start:
{
lean_object* v_res_4201_; 
v_res_4201_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(v_motive_4196_, v_ctorIdx_4197_, v_t_4198_, v_h_4199_, v_k_4200_);
lean_dec(v_ctorIdx_4197_);
return v_res_4201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object* v_t_4202_, lean_object* v_false_4203_){
_start:
{
lean_object* v___x_4204_; 
v___x_4204_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4202_, v_false_4203_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object* v_motive_4205_, lean_object* v_t_4206_, lean_object* v_h_4207_, lean_object* v_false_4208_){
_start:
{
lean_object* v___x_4209_; 
v___x_4209_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4206_, v_false_4208_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object* v_t_4210_, lean_object* v_true_4211_){
_start:
{
lean_object* v___x_4212_; 
v___x_4212_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4210_, v_true_4211_);
return v___x_4212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object* v_motive_4213_, lean_object* v_t_4214_, lean_object* v_h_4215_, lean_object* v_true_4216_){
_start:
{
lean_object* v___x_4217_; 
v___x_4217_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4214_, v_true_4216_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object* v_t_4218_, lean_object* v_undef_4219_){
_start:
{
lean_object* v___x_4220_; 
v___x_4220_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4218_, v_undef_4219_);
return v___x_4220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object* v_motive_4221_, lean_object* v_t_4222_, lean_object* v_h_4223_, lean_object* v_undef_4224_){
_start:
{
lean_object* v___x_4225_; 
v___x_4225_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4222_, v_undef_4224_);
return v___x_4225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object* v_t_4226_, lean_object* v_bvar_4227_){
_start:
{
lean_object* v___x_4228_; 
v___x_4228_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4226_, v_bvar_4227_);
return v___x_4228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object* v_motive_4229_, lean_object* v_t_4230_, lean_object* v_h_4231_, lean_object* v_bvar_4232_){
_start:
{
lean_object* v___x_4233_; 
v___x_4233_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4230_, v_bvar_4232_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t v_x_4234_){
_start:
{
switch(v_x_4234_)
{
case 0:
{
lean_object* v___x_4235_; 
v___x_4235_ = lean_box(0);
return v___x_4235_;
}
case 1:
{
lean_object* v___x_4236_; 
v___x_4236_ = lean_box(1);
return v___x_4236_;
}
default: 
{
lean_object* v___x_4237_; 
v___x_4237_ = lean_box(2);
return v___x_4237_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object* v_x_4238_){
_start:
{
uint8_t v_x_25__boxed_4239_; lean_object* v_res_4240_; 
v_x_25__boxed_4239_ = lean_unbox(v_x_4238_);
v_res_4240_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v_x_25__boxed_4239_);
return v_res_4240_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object* v_x_4241_){
_start:
{
switch(lean_obj_tag(v_x_4241_))
{
case 0:
{
uint8_t v___x_4242_; 
v___x_4242_ = 0;
return v___x_4242_;
}
case 1:
{
uint8_t v___x_4243_; 
v___x_4243_ = 1;
return v___x_4243_;
}
default: 
{
uint8_t v___x_4244_; 
v___x_4244_ = 2;
return v___x_4244_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object* v_x_4245_){
_start:
{
uint8_t v_res_4246_; lean_object* v_r_4247_; 
v_res_4246_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_x_4245_);
lean_dec(v_x_4245_);
v_r_4247_ = lean_box(v_res_4246_);
return v_r_4247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object* v_e_4249_){
_start:
{
switch(lean_obj_tag(v_e_4249_))
{
case 3:
{
lean_object* v_u_4250_; uint8_t v___x_4251_; 
v_u_4250_ = lean_ctor_get(v_e_4249_, 0);
v___x_4251_ = l_Lean_Level_isNeverZero(v_u_4250_);
if (v___x_4251_ == 0)
{
uint8_t v___x_4252_; 
v___x_4252_ = l_Lean_Level_isZero(v_u_4250_);
if (v___x_4252_ == 0)
{
lean_object* v___x_4253_; 
v___x_4253_ = lean_box(2);
return v___x_4253_;
}
else
{
lean_object* v___x_4254_; 
v___x_4254_ = lean_box(1);
return v___x_4254_;
}
}
else
{
lean_object* v___x_4255_; 
v___x_4255_ = lean_box(0);
return v___x_4255_;
}
}
case 5:
{
lean_object* v_fn_4256_; 
v_fn_4256_ = lean_ctor_get(v_e_4249_, 0);
if (lean_obj_tag(v_fn_4256_) == 4)
{
lean_object* v_declName_4257_; 
v_declName_4257_ = lean_ctor_get(v_fn_4256_, 0);
if (lean_obj_tag(v_declName_4257_) == 1)
{
lean_object* v_pre_4258_; 
v_pre_4258_ = lean_ctor_get(v_declName_4257_, 0);
if (lean_obj_tag(v_pre_4258_) == 0)
{
lean_object* v_arg_4259_; lean_object* v_str_4260_; lean_object* v___x_4261_; uint8_t v___x_4262_; 
v_arg_4259_ = lean_ctor_get(v_e_4249_, 1);
v_str_4260_ = lean_ctor_get(v_declName_4257_, 1);
v___x_4261_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0));
v___x_4262_ = lean_string_dec_eq(v_str_4260_, v___x_4261_);
if (v___x_4262_ == 0)
{
lean_object* v___x_4263_; 
v___x_4263_ = lean_box(2);
return v___x_4263_;
}
else
{
v_e_4249_ = v_arg_4259_;
goto _start;
}
}
else
{
lean_object* v___x_4265_; 
v___x_4265_ = lean_box(2);
return v___x_4265_;
}
}
else
{
lean_object* v___x_4266_; 
v___x_4266_ = lean_box(2);
return v___x_4266_;
}
}
else
{
lean_object* v___x_4267_; 
v___x_4267_ = lean_box(2);
return v___x_4267_;
}
}
default: 
{
lean_object* v___x_4268_; 
v___x_4268_ = lean_box(2);
return v___x_4268_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object* v_e_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_e_4269_);
lean_dec_ref(v_e_4269_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object* v_r_4271_, lean_object* v_binderType_4272_){
_start:
{
if (lean_obj_tag(v_r_4271_) == 3)
{
lean_object* v_idx_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4285_; 
v_idx_4273_ = lean_ctor_get(v_r_4271_, 0);
v_isSharedCheck_4285_ = !lean_is_exclusive(v_r_4271_);
if (v_isSharedCheck_4285_ == 0)
{
v___x_4275_ = v_r_4271_;
v_isShared_4276_ = v_isSharedCheck_4285_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_idx_4273_);
lean_dec(v_r_4271_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4285_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v_zero_4277_; uint8_t v_isZero_4278_; 
v_zero_4277_ = lean_unsigned_to_nat(0u);
v_isZero_4278_ = lean_nat_dec_eq(v_idx_4273_, v_zero_4277_);
if (v_isZero_4278_ == 1)
{
lean_object* v___x_4279_; 
lean_del_object(v___x_4275_);
lean_dec(v_idx_4273_);
v___x_4279_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_binderType_4272_);
return v___x_4279_;
}
else
{
lean_object* v_one_4280_; lean_object* v_n_4281_; lean_object* v___x_4283_; 
v_one_4280_ = lean_unsigned_to_nat(1u);
v_n_4281_ = lean_nat_sub(v_idx_4273_, v_one_4280_);
lean_dec(v_idx_4273_);
if (v_isShared_4276_ == 0)
{
lean_ctor_set(v___x_4275_, 0, v_n_4281_);
v___x_4283_ = v___x_4275_;
goto v_reusejp_4282_;
}
else
{
lean_object* v_reuseFailAlloc_4284_; 
v_reuseFailAlloc_4284_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4284_, 0, v_n_4281_);
v___x_4283_ = v_reuseFailAlloc_4284_;
goto v_reusejp_4282_;
}
v_reusejp_4282_:
{
return v___x_4283_;
}
}
}
}
else
{
return v_r_4271_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object* v_r_4286_, lean_object* v_binderType_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_r_4286_, v_binderType_4287_);
lean_dec_ref(v_binderType_4287_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object* v_x_4289_, lean_object* v_x_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_){
_start:
{
lean_object* v_type_4297_; lean_object* v___y_4298_; lean_object* v___y_4299_; lean_object* v___y_4300_; lean_object* v___y_4301_; 
switch(lean_obj_tag(v_x_4289_))
{
case 7:
{
lean_object* v_binderType_4324_; lean_object* v_body_4325_; lean_object* v_zero_4326_; uint8_t v_isZero_4327_; 
v_binderType_4324_ = lean_ctor_get(v_x_4289_, 1);
v_body_4325_ = lean_ctor_get(v_x_4289_, 2);
v_zero_4326_ = lean_unsigned_to_nat(0u);
v_isZero_4327_ = lean_nat_dec_eq(v_x_4290_, v_zero_4326_);
if (v_isZero_4327_ == 1)
{
v_type_4297_ = v_x_4289_;
v___y_4298_ = v___y_4291_;
v___y_4299_ = v___y_4292_;
v___y_4300_ = v___y_4293_;
v___y_4301_ = v___y_4294_;
goto v___jp_4296_;
}
else
{
lean_object* v_one_4328_; lean_object* v_n_4329_; lean_object* v___x_4330_; 
lean_inc_ref(v_body_4325_);
lean_inc_ref(v_binderType_4324_);
lean_dec_ref_known(v_x_4289_, 3);
v_one_4328_ = lean_unsigned_to_nat(1u);
v_n_4329_ = lean_nat_sub(v_x_4290_, v_one_4328_);
v___x_4330_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4325_, v_n_4329_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_);
lean_dec(v_n_4329_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4339_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4333_ = v___x_4330_;
v_isShared_4334_ = v_isSharedCheck_4339_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4330_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4339_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4335_; lean_object* v___x_4337_; 
v___x_4335_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4331_, v_binderType_4324_);
lean_dec_ref(v_binderType_4324_);
if (v_isShared_4334_ == 0)
{
lean_ctor_set(v___x_4333_, 0, v___x_4335_);
v___x_4337_ = v___x_4333_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v___x_4335_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
return v___x_4337_;
}
}
}
else
{
lean_dec_ref(v_binderType_4324_);
return v___x_4330_;
}
}
}
case 8:
{
lean_object* v_type_4340_; lean_object* v_body_4341_; lean_object* v___x_4342_; 
v_type_4340_ = lean_ctor_get(v_x_4289_, 1);
lean_inc_ref(v_type_4340_);
v_body_4341_ = lean_ctor_get(v_x_4289_, 3);
lean_inc_ref(v_body_4341_);
lean_dec_ref_known(v_x_4289_, 4);
v___x_4342_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4341_, v_x_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_);
if (lean_obj_tag(v___x_4342_) == 0)
{
lean_object* v_a_4343_; lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4351_; 
v_a_4343_ = lean_ctor_get(v___x_4342_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4345_ = v___x_4342_;
v_isShared_4346_ = v_isSharedCheck_4351_;
goto v_resetjp_4344_;
}
else
{
lean_inc(v_a_4343_);
lean_dec(v___x_4342_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4351_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4347_; lean_object* v___x_4349_; 
v___x_4347_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4343_, v_type_4340_);
lean_dec_ref(v_type_4340_);
if (v_isShared_4346_ == 0)
{
lean_ctor_set(v___x_4345_, 0, v___x_4347_);
v___x_4349_ = v___x_4345_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4347_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
else
{
lean_dec_ref(v_type_4340_);
return v___x_4342_;
}
}
case 10:
{
lean_object* v_expr_4352_; 
v_expr_4352_ = lean_ctor_get(v_x_4289_, 1);
lean_inc_ref(v_expr_4352_);
lean_dec_ref_known(v_x_4289_, 2);
v_x_4289_ = v_expr_4352_;
goto _start;
}
case 0:
{
lean_object* v_deBruijnIndex_4354_; lean_object* v___x_4355_; uint8_t v___x_4356_; 
v_deBruijnIndex_4354_ = lean_ctor_get(v_x_4289_, 0);
lean_inc(v_deBruijnIndex_4354_);
lean_dec_ref_known(v_x_4289_, 1);
v___x_4355_ = lean_unsigned_to_nat(0u);
v___x_4356_ = lean_nat_dec_eq(v_x_4290_, v___x_4355_);
if (v___x_4356_ == 0)
{
lean_dec(v_deBruijnIndex_4354_);
goto v___jp_4321_;
}
else
{
lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4357_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4357_, 0, v_deBruijnIndex_4354_);
v___x_4358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4357_);
return v___x_4358_;
}
}
default: 
{
lean_object* v___x_4359_; uint8_t v___x_4360_; 
v___x_4359_ = lean_unsigned_to_nat(0u);
v___x_4360_ = lean_nat_dec_eq(v_x_4290_, v___x_4359_);
if (v___x_4360_ == 0)
{
lean_dec_ref(v_x_4289_);
goto v___jp_4321_;
}
else
{
v_type_4297_ = v_x_4289_;
v___y_4298_ = v___y_4291_;
v___y_4299_ = v___y_4292_;
v___y_4300_ = v___y_4293_;
v___y_4301_ = v___y_4294_;
goto v___jp_4296_;
}
}
}
v___jp_4296_:
{
lean_object* v___x_4302_; 
v___x_4302_ = l_Lean_Meta_isPropQuick(v_type_4297_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_);
if (lean_obj_tag(v___x_4302_) == 0)
{
lean_object* v_a_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4312_; 
v_a_4303_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4312_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4312_ == 0)
{
v___x_4305_ = v___x_4302_;
v_isShared_4306_ = v_isSharedCheck_4312_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_a_4303_);
lean_dec(v___x_4302_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4312_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
uint8_t v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4310_; 
v___x_4307_ = lean_unbox(v_a_4303_);
lean_dec(v_a_4303_);
v___x_4308_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v___x_4307_);
if (v_isShared_4306_ == 0)
{
lean_ctor_set(v___x_4305_, 0, v___x_4308_);
v___x_4310_ = v___x_4305_;
goto v_reusejp_4309_;
}
else
{
lean_object* v_reuseFailAlloc_4311_; 
v_reuseFailAlloc_4311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4311_, 0, v___x_4308_);
v___x_4310_ = v_reuseFailAlloc_4311_;
goto v_reusejp_4309_;
}
v_reusejp_4309_:
{
return v___x_4310_;
}
}
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
v_a_4313_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4302_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4302_);
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
v___jp_4321_:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4322_ = lean_box(2);
v___x_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4323_, 0, v___x_4322_);
return v___x_4323_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object* v_x_4361_, lean_object* v_x_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_){
_start:
{
lean_object* v_res_4368_; 
v_res_4368_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_x_4361_, v_x_4362_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_);
lean_dec(v___y_4366_);
lean_dec_ref(v___y_4365_);
lean_dec(v___y_4364_);
lean_dec_ref(v___y_4363_);
lean_dec(v_x_4362_);
return v_res_4368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object* v_e_4369_, lean_object* v_n_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_){
_start:
{
lean_object* v___x_4376_; 
v___x_4376_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_e_4369_, v_n_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_);
if (lean_obj_tag(v___x_4376_) == 0)
{
lean_object* v_a_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4386_; 
v_a_4377_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4379_ = v___x_4376_;
v_isShared_4380_ = v_isSharedCheck_4386_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_a_4377_);
lean_dec(v___x_4376_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4386_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
uint8_t v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4384_; 
v___x_4381_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_a_4377_);
lean_dec(v_a_4377_);
v___x_4382_ = lean_box(v___x_4381_);
if (v_isShared_4380_ == 0)
{
lean_ctor_set(v___x_4379_, 0, v___x_4382_);
v___x_4384_ = v___x_4379_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v___x_4382_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
return v___x_4384_;
}
}
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4394_; 
v_a_4387_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4389_ = v___x_4376_;
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4376_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
return v___x_4392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object* v_e_4395_, lean_object* v_n_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_){
_start:
{
lean_object* v_res_4402_; 
v_res_4402_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_e_4395_, v_n_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4397_);
lean_dec(v_n_4396_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object* v_x_4403_, lean_object* v_x_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_){
_start:
{
switch(lean_obj_tag(v_x_4403_))
{
case 4:
{
lean_object* v_declName_4410_; lean_object* v_us_4411_; lean_object* v___x_4412_; 
v_declName_4410_ = lean_ctor_get(v_x_4403_, 0);
lean_inc(v_declName_4410_);
v_us_4411_ = lean_ctor_get(v_x_4403_, 1);
lean_inc(v_us_4411_);
lean_dec_ref_known(v_x_4403_, 2);
v___x_4412_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4410_, v_us_4411_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; lean_object* v___x_4414_; 
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4412_, 1);
v___x_4414_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4413_, v_x_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
lean_dec(v_x_4404_);
return v___x_4414_;
}
else
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4422_; 
lean_dec(v_x_4404_);
v_a_4415_ = lean_ctor_get(v___x_4412_, 0);
v_isSharedCheck_4422_ = !lean_is_exclusive(v___x_4412_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4417_ = v___x_4412_;
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4412_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4420_; 
if (v_isShared_4418_ == 0)
{
v___x_4420_ = v___x_4417_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_a_4415_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4423_; lean_object* v___x_4424_; 
v_fvarId_4423_ = lean_ctor_get(v_x_4403_, 0);
lean_inc(v_fvarId_4423_);
lean_dec_ref_known(v_x_4403_, 1);
v___x_4424_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4423_, v___y_4405_, v___y_4407_, v___y_4408_);
if (lean_obj_tag(v___x_4424_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4426_; 
v_a_4425_ = lean_ctor_get(v___x_4424_, 0);
lean_inc(v_a_4425_);
lean_dec_ref_known(v___x_4424_, 1);
v___x_4426_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4425_, v_x_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
lean_dec(v_x_4404_);
return v___x_4426_;
}
else
{
lean_object* v_a_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4434_; 
lean_dec(v_x_4404_);
v_a_4427_ = lean_ctor_get(v___x_4424_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4429_ = v___x_4424_;
v_isShared_4430_ = v_isSharedCheck_4434_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_a_4427_);
lean_dec(v___x_4424_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4434_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v___x_4432_; 
if (v_isShared_4430_ == 0)
{
v___x_4432_ = v___x_4429_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_a_4427_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
return v___x_4432_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4435_; lean_object* v___x_4436_; 
v_mvarId_4435_ = lean_ctor_get(v_x_4403_, 0);
lean_inc(v_mvarId_4435_);
lean_dec_ref_known(v_x_4403_, 1);
v___x_4436_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4435_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
if (lean_obj_tag(v___x_4436_) == 0)
{
lean_object* v_a_4437_; lean_object* v___x_4438_; 
v_a_4437_ = lean_ctor_get(v___x_4436_, 0);
lean_inc(v_a_4437_);
lean_dec_ref_known(v___x_4436_, 1);
v___x_4438_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4437_, v_x_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
lean_dec(v_x_4404_);
return v___x_4438_;
}
else
{
lean_object* v_a_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4446_; 
lean_dec(v_x_4404_);
v_a_4439_ = lean_ctor_get(v___x_4436_, 0);
v_isSharedCheck_4446_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4446_ == 0)
{
v___x_4441_ = v___x_4436_;
v_isShared_4442_ = v_isSharedCheck_4446_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_a_4439_);
lean_dec(v___x_4436_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4446_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v___x_4444_; 
if (v_isShared_4442_ == 0)
{
v___x_4444_ = v___x_4441_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v_a_4439_);
v___x_4444_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
return v___x_4444_;
}
}
}
}
case 5:
{
lean_object* v_fn_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; 
v_fn_4447_ = lean_ctor_get(v_x_4403_, 0);
lean_inc_ref(v_fn_4447_);
lean_dec_ref_known(v_x_4403_, 2);
v___x_4448_ = lean_unsigned_to_nat(1u);
v___x_4449_ = lean_nat_add(v_x_4404_, v___x_4448_);
lean_dec(v_x_4404_);
v_x_4403_ = v_fn_4447_;
v_x_4404_ = v___x_4449_;
goto _start;
}
case 10:
{
lean_object* v_expr_4451_; 
v_expr_4451_ = lean_ctor_get(v_x_4403_, 1);
lean_inc_ref(v_expr_4451_);
lean_dec_ref_known(v_x_4403_, 2);
v_x_4403_ = v_expr_4451_;
goto _start;
}
case 8:
{
lean_object* v_body_4453_; 
v_body_4453_ = lean_ctor_get(v_x_4403_, 3);
lean_inc_ref(v_body_4453_);
lean_dec_ref_known(v_x_4403_, 4);
v_x_4403_ = v_body_4453_;
goto _start;
}
case 6:
{
lean_object* v_body_4455_; lean_object* v_zero_4456_; uint8_t v_isZero_4457_; 
v_body_4455_ = lean_ctor_get(v_x_4403_, 2);
lean_inc_ref(v_body_4455_);
lean_dec_ref_known(v_x_4403_, 3);
v_zero_4456_ = lean_unsigned_to_nat(0u);
v_isZero_4457_ = lean_nat_dec_eq(v_x_4404_, v_zero_4456_);
if (v_isZero_4457_ == 1)
{
lean_object* v___x_4458_; 
lean_dec(v_x_4404_);
v___x_4458_ = l_Lean_Meta_isProofQuick(v_body_4455_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
return v___x_4458_;
}
else
{
lean_object* v_one_4459_; lean_object* v_n_4460_; 
v_one_4459_ = lean_unsigned_to_nat(1u);
v_n_4460_ = lean_nat_sub(v_x_4404_, v_one_4459_);
lean_dec(v_x_4404_);
v_x_4403_ = v_body_4455_;
v_x_4404_ = v_n_4460_;
goto _start;
}
}
default: 
{
uint8_t v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
lean_dec(v_x_4404_);
lean_dec_ref(v_x_4403_);
v___x_4462_ = 2;
v___x_4463_ = lean_box(v___x_4462_);
v___x_4464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4463_);
return v___x_4464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object* v_x_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_){
_start:
{
switch(lean_obj_tag(v_x_4465_))
{
case 0:
{
uint8_t v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
lean_dec_ref_known(v_x_4465_, 1);
v___x_4471_ = 2;
v___x_4472_ = lean_box(v___x_4471_);
v___x_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4473_, 0, v___x_4472_);
return v___x_4473_;
}
case 1:
{
lean_object* v_fvarId_4474_; lean_object* v___x_4475_; 
v_fvarId_4474_ = lean_ctor_get(v_x_4465_, 0);
lean_inc(v_fvarId_4474_);
lean_dec_ref_known(v_x_4465_, 1);
v___x_4475_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4474_, v___y_4466_, v___y_4468_, v___y_4469_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v_a_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v_a_4476_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_a_4476_);
lean_dec_ref_known(v___x_4475_, 1);
v___x_4477_ = lean_unsigned_to_nat(0u);
v___x_4478_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4476_, v___x_4477_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_);
return v___x_4478_;
}
else
{
lean_object* v_a_4479_; lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4486_; 
v_a_4479_ = lean_ctor_get(v___x_4475_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v___x_4475_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4481_ = v___x_4475_;
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
else
{
lean_inc(v_a_4479_);
lean_dec(v___x_4475_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
lean_object* v___x_4484_; 
if (v_isShared_4482_ == 0)
{
v___x_4484_ = v___x_4481_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_a_4479_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4487_; lean_object* v___x_4488_; 
v_mvarId_4487_ = lean_ctor_get(v_x_4465_, 0);
lean_inc(v_mvarId_4487_);
lean_dec_ref_known(v_x_4465_, 1);
v___x_4488_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4487_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v_a_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v_a_4489_ = lean_ctor_get(v___x_4488_, 0);
lean_inc(v_a_4489_);
lean_dec_ref_known(v___x_4488_, 1);
v___x_4490_ = lean_unsigned_to_nat(0u);
v___x_4491_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4489_, v___x_4490_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_);
return v___x_4491_;
}
else
{
lean_object* v_a_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4499_; 
v_a_4492_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4494_ = v___x_4488_;
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_a_4492_);
lean_dec(v___x_4488_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v___x_4497_; 
if (v_isShared_4495_ == 0)
{
v___x_4497_ = v___x_4494_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v_a_4492_);
v___x_4497_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
return v___x_4497_;
}
}
}
}
case 4:
{
lean_object* v_declName_4500_; lean_object* v_us_4501_; lean_object* v___x_4502_; 
v_declName_4500_ = lean_ctor_get(v_x_4465_, 0);
lean_inc(v_declName_4500_);
v_us_4501_ = lean_ctor_get(v_x_4465_, 1);
lean_inc(v_us_4501_);
lean_dec_ref_known(v_x_4465_, 2);
v___x_4502_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4500_, v_us_4501_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_);
if (lean_obj_tag(v___x_4502_) == 0)
{
lean_object* v_a_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v_a_4503_ = lean_ctor_get(v___x_4502_, 0);
lean_inc(v_a_4503_);
lean_dec_ref_known(v___x_4502_, 1);
v___x_4504_ = lean_unsigned_to_nat(0u);
v___x_4505_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4503_, v___x_4504_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_);
return v___x_4505_;
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
v_a_4506_ = lean_ctor_get(v___x_4502_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4502_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4502_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4502_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
case 5:
{
lean_object* v_fn_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v_fn_4514_ = lean_ctor_get(v_x_4465_, 0);
lean_inc_ref(v_fn_4514_);
lean_dec_ref_known(v_x_4465_, 2);
v___x_4515_ = lean_unsigned_to_nat(1u);
v___x_4516_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_fn_4514_, v___x_4515_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_);
return v___x_4516_;
}
case 6:
{
lean_object* v_body_4517_; 
v_body_4517_ = lean_ctor_get(v_x_4465_, 2);
lean_inc_ref(v_body_4517_);
lean_dec_ref_known(v_x_4465_, 3);
v_x_4465_ = v_body_4517_;
goto _start;
}
case 8:
{
lean_object* v_body_4519_; 
v_body_4519_ = lean_ctor_get(v_x_4465_, 3);
lean_inc_ref(v_body_4519_);
lean_dec_ref_known(v_x_4465_, 4);
v_x_4465_ = v_body_4519_;
goto _start;
}
case 10:
{
lean_object* v_expr_4521_; 
v_expr_4521_ = lean_ctor_get(v_x_4465_, 1);
lean_inc_ref(v_expr_4521_);
lean_dec_ref_known(v_x_4465_, 2);
v_x_4465_ = v_expr_4521_;
goto _start;
}
case 11:
{
uint8_t v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; 
lean_dec_ref_known(v_x_4465_, 3);
v___x_4523_ = 2;
v___x_4524_ = lean_box(v___x_4523_);
v___x_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
return v___x_4525_;
}
default: 
{
uint8_t v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; 
lean_dec_ref(v_x_4465_);
v___x_4526_ = 0;
v___x_4527_ = lean_box(v___x_4526_);
v___x_4528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4527_);
return v___x_4528_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object* v_x_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
lean_object* v_res_4535_; 
v_res_4535_ = l_Lean_Meta_isProofQuick(v_x_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
return v_res_4535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object* v_x_4536_, lean_object* v_x_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_){
_start:
{
lean_object* v_res_4543_; 
v_res_4543_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_x_4536_, v_x_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_);
lean_dec(v___y_4541_);
lean_dec_ref(v___y_4540_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
return v_res_4543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object* v_e_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_){
_start:
{
lean_object* v___x_4550_; 
lean_inc_ref(v_e_4544_);
v___x_4550_ = l_Lean_Meta_isProofQuick(v_e_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4577_; 
v_a_4551_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4553_ = v___x_4550_;
v_isShared_4554_ = v_isSharedCheck_4577_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___x_4550_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4577_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
uint8_t v___x_4555_; 
v___x_4555_ = lean_unbox(v_a_4551_);
lean_dec(v_a_4551_);
switch(v___x_4555_)
{
case 0:
{
uint8_t v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4559_; 
lean_dec_ref(v_e_4544_);
v___x_4556_ = 0;
v___x_4557_ = lean_box(v___x_4556_);
if (v_isShared_4554_ == 0)
{
lean_ctor_set(v___x_4553_, 0, v___x_4557_);
v___x_4559_ = v___x_4553_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v___x_4557_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
case 1:
{
uint8_t v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4564_; 
lean_dec_ref(v_e_4544_);
v___x_4561_ = 1;
v___x_4562_ = lean_box(v___x_4561_);
if (v_isShared_4554_ == 0)
{
lean_ctor_set(v___x_4553_, 0, v___x_4562_);
v___x_4564_ = v___x_4553_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v___x_4562_);
v___x_4564_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
return v___x_4564_;
}
}
default: 
{
lean_object* v___x_4566_; 
lean_del_object(v___x_4553_);
lean_inc(v___y_4548_);
lean_inc_ref(v___y_4547_);
lean_inc(v___y_4546_);
lean_inc_ref(v___y_4545_);
v___x_4566_ = lean_infer_type(v_e_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_);
if (lean_obj_tag(v___x_4566_) == 0)
{
lean_object* v_a_4567_; lean_object* v___x_4568_; 
v_a_4567_ = lean_ctor_get(v___x_4566_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v___x_4566_, 1);
v___x_4568_ = l_Lean_Meta_isProp(v_a_4567_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_);
return v___x_4568_;
}
else
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
v_a_4569_ = lean_ctor_get(v___x_4566_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4566_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4571_ = v___x_4566_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4566_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4569_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4578_; lean_object* v___x_4580_; uint8_t v_isShared_4581_; uint8_t v_isSharedCheck_4585_; 
lean_dec_ref(v_e_4544_);
v_a_4578_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4580_ = v___x_4550_;
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
else
{
lean_inc(v_a_4578_);
lean_dec(v___x_4550_);
v___x_4580_ = lean_box(0);
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
v_resetjp_4579_:
{
lean_object* v___x_4583_; 
if (v_isShared_4581_ == 0)
{
v___x_4583_ = v___x_4580_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v_a_4578_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object* v_e_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_){
_start:
{
lean_object* v_res_4592_; 
v_res_4592_ = l_Lean_Meta_isProof(v_e_4586_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4589_);
lean_dec(v___y_4588_);
lean_dec_ref(v___y_4587_);
return v_res_4592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object* v_x_4593_, lean_object* v_x_4594_){
_start:
{
switch(lean_obj_tag(v_x_4593_))
{
case 3:
{
lean_object* v___x_4600_; uint8_t v___x_4601_; 
v___x_4600_ = lean_unsigned_to_nat(0u);
v___x_4601_ = lean_nat_dec_eq(v_x_4594_, v___x_4600_);
lean_dec(v_x_4594_);
if (v___x_4601_ == 0)
{
goto v___jp_4596_;
}
else
{
uint8_t v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; 
v___x_4602_ = 1;
v___x_4603_ = lean_box(v___x_4602_);
v___x_4604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4604_, 0, v___x_4603_);
return v___x_4604_;
}
}
case 7:
{
lean_object* v_body_4605_; lean_object* v_zero_4606_; uint8_t v_isZero_4607_; 
v_body_4605_ = lean_ctor_get(v_x_4593_, 2);
v_zero_4606_ = lean_unsigned_to_nat(0u);
v_isZero_4607_ = lean_nat_dec_eq(v_x_4594_, v_zero_4606_);
if (v_isZero_4607_ == 1)
{
uint8_t v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
lean_dec(v_x_4594_);
v___x_4608_ = 0;
v___x_4609_ = lean_box(v___x_4608_);
v___x_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4609_);
return v___x_4610_;
}
else
{
lean_object* v_one_4611_; lean_object* v_n_4612_; 
v_one_4611_ = lean_unsigned_to_nat(1u);
v_n_4612_ = lean_nat_sub(v_x_4594_, v_one_4611_);
lean_dec(v_x_4594_);
v_x_4593_ = v_body_4605_;
v_x_4594_ = v_n_4612_;
goto _start;
}
}
case 8:
{
lean_object* v_body_4614_; 
v_body_4614_ = lean_ctor_get(v_x_4593_, 3);
v_x_4593_ = v_body_4614_;
goto _start;
}
case 10:
{
lean_object* v_expr_4616_; 
v_expr_4616_ = lean_ctor_get(v_x_4593_, 1);
v_x_4593_ = v_expr_4616_;
goto _start;
}
default: 
{
lean_dec(v_x_4594_);
goto v___jp_4596_;
}
}
v___jp_4596_:
{
uint8_t v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4597_ = 2;
v___x_4598_ = lean_box(v___x_4597_);
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
return v___x_4599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object* v_x_4618_, lean_object* v_x_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4618_, v_x_4619_);
lean_dec_ref(v_x_4618_);
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object* v_x_4622_, lean_object* v_x_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_){
_start:
{
lean_object* v___x_4629_; 
v___x_4629_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4622_, v_x_4623_);
return v___x_4629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object* v_x_4630_, lean_object* v_x_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_){
_start:
{
lean_object* v_res_4637_; 
v_res_4637_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(v_x_4630_, v_x_4631_, v___y_4632_, v___y_4633_, v___y_4634_, v___y_4635_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec(v___y_4633_);
lean_dec_ref(v___y_4632_);
lean_dec_ref(v_x_4630_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object* v_x_4638_, lean_object* v_x_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_){
_start:
{
switch(lean_obj_tag(v_x_4638_))
{
case 4:
{
lean_object* v_declName_4645_; lean_object* v_us_4646_; lean_object* v___x_4647_; 
v_declName_4645_ = lean_ctor_get(v_x_4638_, 0);
lean_inc(v_declName_4645_);
v_us_4646_ = lean_ctor_get(v_x_4638_, 1);
lean_inc(v_us_4646_);
lean_dec_ref_known(v_x_4638_, 2);
v___x_4647_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4645_, v_us_4646_, v___y_4640_, v___y_4641_, v___y_4642_, v___y_4643_);
if (lean_obj_tag(v___x_4647_) == 0)
{
lean_object* v_a_4648_; lean_object* v___x_4649_; 
v_a_4648_ = lean_ctor_get(v___x_4647_, 0);
lean_inc(v_a_4648_);
lean_dec_ref_known(v___x_4647_, 1);
v___x_4649_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4648_, v_x_4639_);
lean_dec(v_a_4648_);
return v___x_4649_;
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
lean_dec(v_x_4639_);
v_a_4650_ = lean_ctor_get(v___x_4647_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4647_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4647_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4647_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v___x_4655_; 
if (v_isShared_4653_ == 0)
{
v___x_4655_ = v___x_4652_;
goto v_reusejp_4654_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4650_);
v___x_4655_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4654_;
}
v_reusejp_4654_:
{
return v___x_4655_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4658_; lean_object* v___x_4659_; 
v_fvarId_4658_ = lean_ctor_get(v_x_4638_, 0);
lean_inc(v_fvarId_4658_);
lean_dec_ref_known(v_x_4638_, 1);
v___x_4659_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4658_, v___y_4640_, v___y_4642_, v___y_4643_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; lean_object* v___x_4661_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
lean_inc(v_a_4660_);
lean_dec_ref_known(v___x_4659_, 1);
v___x_4661_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4660_, v_x_4639_);
lean_dec(v_a_4660_);
return v___x_4661_;
}
else
{
lean_object* v_a_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4669_; 
lean_dec(v_x_4639_);
v_a_4662_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4664_ = v___x_4659_;
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_a_4662_);
lean_dec(v___x_4659_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4667_; 
if (v_isShared_4665_ == 0)
{
v___x_4667_ = v___x_4664_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v_a_4662_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4670_; lean_object* v___x_4671_; 
v_mvarId_4670_ = lean_ctor_get(v_x_4638_, 0);
lean_inc(v_mvarId_4670_);
lean_dec_ref_known(v_x_4638_, 1);
v___x_4671_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4670_, v___y_4640_, v___y_4641_, v___y_4642_, v___y_4643_);
if (lean_obj_tag(v___x_4671_) == 0)
{
lean_object* v_a_4672_; lean_object* v___x_4673_; 
v_a_4672_ = lean_ctor_get(v___x_4671_, 0);
lean_inc(v_a_4672_);
lean_dec_ref_known(v___x_4671_, 1);
v___x_4673_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4672_, v_x_4639_);
lean_dec(v_a_4672_);
return v___x_4673_;
}
else
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4681_; 
lean_dec(v_x_4639_);
v_a_4674_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4676_ = v___x_4671_;
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v___x_4671_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
if (v_isShared_4677_ == 0)
{
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
return v___x_4679_;
}
}
}
}
case 5:
{
lean_object* v_fn_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; 
v_fn_4682_ = lean_ctor_get(v_x_4638_, 0);
lean_inc_ref(v_fn_4682_);
lean_dec_ref_known(v_x_4638_, 2);
v___x_4683_ = lean_unsigned_to_nat(1u);
v___x_4684_ = lean_nat_add(v_x_4639_, v___x_4683_);
lean_dec(v_x_4639_);
v_x_4638_ = v_fn_4682_;
v_x_4639_ = v___x_4684_;
goto _start;
}
case 10:
{
lean_object* v_expr_4686_; 
v_expr_4686_ = lean_ctor_get(v_x_4638_, 1);
lean_inc_ref(v_expr_4686_);
lean_dec_ref_known(v_x_4638_, 2);
v_x_4638_ = v_expr_4686_;
goto _start;
}
case 8:
{
lean_object* v_body_4688_; 
v_body_4688_ = lean_ctor_get(v_x_4638_, 3);
lean_inc_ref(v_body_4688_);
lean_dec_ref_known(v_x_4638_, 4);
v_x_4638_ = v_body_4688_;
goto _start;
}
case 6:
{
lean_object* v_body_4690_; lean_object* v_zero_4691_; uint8_t v_isZero_4692_; 
v_body_4690_ = lean_ctor_get(v_x_4638_, 2);
lean_inc_ref(v_body_4690_);
lean_dec_ref_known(v_x_4638_, 3);
v_zero_4691_ = lean_unsigned_to_nat(0u);
v_isZero_4692_ = lean_nat_dec_eq(v_x_4639_, v_zero_4691_);
if (v_isZero_4692_ == 1)
{
uint8_t v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
lean_dec_ref(v_body_4690_);
lean_dec(v_x_4639_);
v___x_4693_ = 0;
v___x_4694_ = lean_box(v___x_4693_);
v___x_4695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4694_);
return v___x_4695_;
}
else
{
lean_object* v_one_4696_; lean_object* v_n_4697_; 
v_one_4696_ = lean_unsigned_to_nat(1u);
v_n_4697_ = lean_nat_sub(v_x_4639_, v_one_4696_);
lean_dec(v_x_4639_);
v_x_4638_ = v_body_4690_;
v_x_4639_ = v_n_4697_;
goto _start;
}
}
default: 
{
uint8_t v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
lean_dec(v_x_4639_);
lean_dec_ref(v_x_4638_);
v___x_4699_ = 2;
v___x_4700_ = lean_box(v___x_4699_);
v___x_4701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4700_);
return v___x_4701_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object* v_x_4702_, lean_object* v_x_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_x_4702_, v_x_4703_, v___y_4704_, v___y_4705_, v___y_4706_, v___y_4707_);
lean_dec(v___y_4707_);
lean_dec_ref(v___y_4706_);
lean_dec(v___y_4705_);
lean_dec_ref(v___y_4704_);
return v_res_4709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object* v_x_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_){
_start:
{
switch(lean_obj_tag(v_x_4710_))
{
case 1:
{
lean_object* v_fvarId_4716_; lean_object* v___x_4717_; 
v_fvarId_4716_ = lean_ctor_get(v_x_4710_, 0);
lean_inc(v_fvarId_4716_);
lean_dec_ref_known(v_x_4710_, 1);
v___x_4717_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4716_, v___y_4711_, v___y_4713_, v___y_4714_);
if (lean_obj_tag(v___x_4717_) == 0)
{
lean_object* v_a_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v_a_4718_ = lean_ctor_get(v___x_4717_, 0);
lean_inc(v_a_4718_);
lean_dec_ref_known(v___x_4717_, 1);
v___x_4719_ = lean_unsigned_to_nat(0u);
v___x_4720_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4718_, v___x_4719_);
lean_dec(v_a_4718_);
return v___x_4720_;
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
v_a_4721_ = lean_ctor_get(v___x_4717_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4717_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4717_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4717_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4721_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4729_; lean_object* v___x_4730_; 
v_mvarId_4729_ = lean_ctor_get(v_x_4710_, 0);
lean_inc(v_mvarId_4729_);
lean_dec_ref_known(v_x_4710_, 1);
v___x_4730_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4729_, v___y_4711_, v___y_4712_, v___y_4713_, v___y_4714_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
lean_inc(v_a_4731_);
lean_dec_ref_known(v___x_4730_, 1);
v___x_4732_ = lean_unsigned_to_nat(0u);
v___x_4733_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4731_, v___x_4732_);
lean_dec(v_a_4731_);
return v___x_4733_;
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
v_a_4734_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4730_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4730_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
case 3:
{
uint8_t v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; 
lean_dec_ref_known(v_x_4710_, 1);
v___x_4742_ = 1;
v___x_4743_ = lean_box(v___x_4742_);
v___x_4744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4743_);
return v___x_4744_;
}
case 4:
{
lean_object* v_declName_4745_; lean_object* v_us_4746_; lean_object* v___x_4747_; 
v_declName_4745_ = lean_ctor_get(v_x_4710_, 0);
lean_inc(v_declName_4745_);
v_us_4746_ = lean_ctor_get(v_x_4710_, 1);
lean_inc(v_us_4746_);
lean_dec_ref_known(v_x_4710_, 2);
v___x_4747_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4745_, v_us_4746_, v___y_4711_, v___y_4712_, v___y_4713_, v___y_4714_);
if (lean_obj_tag(v___x_4747_) == 0)
{
lean_object* v_a_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; 
v_a_4748_ = lean_ctor_get(v___x_4747_, 0);
lean_inc(v_a_4748_);
lean_dec_ref_known(v___x_4747_, 1);
v___x_4749_ = lean_unsigned_to_nat(0u);
v___x_4750_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4748_, v___x_4749_);
lean_dec(v_a_4748_);
return v___x_4750_;
}
else
{
lean_object* v_a_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4758_; 
v_a_4751_ = lean_ctor_get(v___x_4747_, 0);
v_isSharedCheck_4758_ = !lean_is_exclusive(v___x_4747_);
if (v_isSharedCheck_4758_ == 0)
{
v___x_4753_ = v___x_4747_;
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_a_4751_);
lean_dec(v___x_4747_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v___x_4756_; 
if (v_isShared_4754_ == 0)
{
v___x_4756_ = v___x_4753_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4757_; 
v_reuseFailAlloc_4757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4757_, 0, v_a_4751_);
v___x_4756_ = v_reuseFailAlloc_4757_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
return v___x_4756_;
}
}
}
}
case 5:
{
lean_object* v_fn_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; 
v_fn_4759_ = lean_ctor_get(v_x_4710_, 0);
lean_inc_ref(v_fn_4759_);
lean_dec_ref_known(v_x_4710_, 2);
v___x_4760_ = lean_unsigned_to_nat(1u);
v___x_4761_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_fn_4759_, v___x_4760_, v___y_4711_, v___y_4712_, v___y_4713_, v___y_4714_);
return v___x_4761_;
}
case 6:
{
uint8_t v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; 
lean_dec_ref_known(v_x_4710_, 3);
v___x_4762_ = 0;
v___x_4763_ = lean_box(v___x_4762_);
v___x_4764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4764_, 0, v___x_4763_);
return v___x_4764_;
}
case 7:
{
uint8_t v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; 
lean_dec_ref_known(v_x_4710_, 3);
v___x_4765_ = 1;
v___x_4766_ = lean_box(v___x_4765_);
v___x_4767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4767_, 0, v___x_4766_);
return v___x_4767_;
}
case 8:
{
lean_object* v_body_4768_; 
v_body_4768_ = lean_ctor_get(v_x_4710_, 3);
lean_inc_ref(v_body_4768_);
lean_dec_ref_known(v_x_4710_, 4);
v_x_4710_ = v_body_4768_;
goto _start;
}
case 9:
{
uint8_t v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; 
lean_dec_ref_known(v_x_4710_, 1);
v___x_4770_ = 0;
v___x_4771_ = lean_box(v___x_4770_);
v___x_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4771_);
return v___x_4772_;
}
case 10:
{
lean_object* v_expr_4773_; 
v_expr_4773_ = lean_ctor_get(v_x_4710_, 1);
lean_inc_ref(v_expr_4773_);
lean_dec_ref_known(v_x_4710_, 2);
v_x_4710_ = v_expr_4773_;
goto _start;
}
default: 
{
uint8_t v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; 
lean_dec_ref(v_x_4710_);
v___x_4775_ = 2;
v___x_4776_ = lean_box(v___x_4775_);
v___x_4777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4777_, 0, v___x_4776_);
return v___x_4777_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object* v_x_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_){
_start:
{
lean_object* v_res_4784_; 
v_res_4784_ = l_Lean_Meta_isTypeQuick(v_x_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_);
lean_dec(v___y_4782_);
lean_dec_ref(v___y_4781_);
lean_dec(v___y_4780_);
lean_dec_ref(v___y_4779_);
return v_res_4784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object* v_e_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_){
_start:
{
lean_object* v___x_4791_; 
lean_inc_ref(v_e_4785_);
v___x_4791_ = l_Lean_Meta_isTypeQuick(v_e_4785_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_);
if (lean_obj_tag(v___x_4791_) == 0)
{
lean_object* v_a_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4841_; 
v_a_4792_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4841_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4841_ == 0)
{
v___x_4794_ = v___x_4791_;
v_isShared_4795_ = v_isSharedCheck_4841_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_a_4792_);
lean_dec(v___x_4791_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4841_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
uint8_t v___x_4796_; 
v___x_4796_ = lean_unbox(v_a_4792_);
lean_dec(v_a_4792_);
switch(v___x_4796_)
{
case 0:
{
uint8_t v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4800_; 
lean_dec_ref(v_e_4785_);
v___x_4797_ = 0;
v___x_4798_ = lean_box(v___x_4797_);
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 0, v___x_4798_);
v___x_4800_ = v___x_4794_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v___x_4798_);
v___x_4800_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
return v___x_4800_;
}
}
case 1:
{
uint8_t v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4805_; 
lean_dec_ref(v_e_4785_);
v___x_4802_ = 1;
v___x_4803_ = lean_box(v___x_4802_);
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 0, v___x_4803_);
v___x_4805_ = v___x_4794_;
goto v_reusejp_4804_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v___x_4803_);
v___x_4805_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4804_;
}
v_reusejp_4804_:
{
return v___x_4805_;
}
}
default: 
{
lean_object* v___x_4807_; 
lean_del_object(v___x_4794_);
lean_inc(v___y_4789_);
lean_inc_ref(v___y_4788_);
lean_inc(v___y_4787_);
lean_inc_ref(v___y_4786_);
v___x_4807_ = lean_infer_type(v_e_4785_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_);
if (lean_obj_tag(v___x_4807_) == 0)
{
lean_object* v_a_4808_; lean_object* v___x_4809_; 
v_a_4808_ = lean_ctor_get(v___x_4807_, 0);
lean_inc(v_a_4808_);
lean_dec_ref_known(v___x_4807_, 1);
v___x_4809_ = l_Lean_Meta_whnfD(v_a_4808_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_);
if (lean_obj_tag(v___x_4809_) == 0)
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4824_; 
v_a_4810_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4812_ = v___x_4809_;
v_isShared_4813_ = v_isSharedCheck_4824_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4809_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4824_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
if (lean_obj_tag(v_a_4810_) == 3)
{
uint8_t v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4817_; 
lean_dec_ref_known(v_a_4810_, 1);
v___x_4814_ = 1;
v___x_4815_ = lean_box(v___x_4814_);
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 0, v___x_4815_);
v___x_4817_ = v___x_4812_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v___x_4815_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
else
{
uint8_t v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4822_; 
lean_dec(v_a_4810_);
v___x_4819_ = 0;
v___x_4820_ = lean_box(v___x_4819_);
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 0, v___x_4820_);
v___x_4822_ = v___x_4812_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v___x_4820_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
}
}
else
{
lean_object* v_a_4825_; lean_object* v___x_4827_; uint8_t v_isShared_4828_; uint8_t v_isSharedCheck_4832_; 
v_a_4825_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4827_ = v___x_4809_;
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
else
{
lean_inc(v_a_4825_);
lean_dec(v___x_4809_);
v___x_4827_ = lean_box(0);
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
v_resetjp_4826_:
{
lean_object* v___x_4830_; 
if (v_isShared_4828_ == 0)
{
v___x_4830_ = v___x_4827_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v_a_4825_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
}
else
{
lean_object* v_a_4833_; lean_object* v___x_4835_; uint8_t v_isShared_4836_; uint8_t v_isSharedCheck_4840_; 
v_a_4833_ = lean_ctor_get(v___x_4807_, 0);
v_isSharedCheck_4840_ = !lean_is_exclusive(v___x_4807_);
if (v_isSharedCheck_4840_ == 0)
{
v___x_4835_ = v___x_4807_;
v_isShared_4836_ = v_isSharedCheck_4840_;
goto v_resetjp_4834_;
}
else
{
lean_inc(v_a_4833_);
lean_dec(v___x_4807_);
v___x_4835_ = lean_box(0);
v_isShared_4836_ = v_isSharedCheck_4840_;
goto v_resetjp_4834_;
}
v_resetjp_4834_:
{
lean_object* v___x_4838_; 
if (v_isShared_4836_ == 0)
{
v___x_4838_ = v___x_4835_;
goto v_reusejp_4837_;
}
else
{
lean_object* v_reuseFailAlloc_4839_; 
v_reuseFailAlloc_4839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4839_, 0, v_a_4833_);
v___x_4838_ = v_reuseFailAlloc_4839_;
goto v_reusejp_4837_;
}
v_reusejp_4837_:
{
return v___x_4838_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4842_; lean_object* v___x_4844_; uint8_t v_isShared_4845_; uint8_t v_isSharedCheck_4849_; 
lean_dec_ref(v_e_4785_);
v_a_4842_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4849_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4849_ == 0)
{
v___x_4844_ = v___x_4791_;
v_isShared_4845_ = v_isSharedCheck_4849_;
goto v_resetjp_4843_;
}
else
{
lean_inc(v_a_4842_);
lean_dec(v___x_4791_);
v___x_4844_ = lean_box(0);
v_isShared_4845_ = v_isSharedCheck_4849_;
goto v_resetjp_4843_;
}
v_resetjp_4843_:
{
lean_object* v___x_4847_; 
if (v_isShared_4845_ == 0)
{
v___x_4847_ = v___x_4844_;
goto v_reusejp_4846_;
}
else
{
lean_object* v_reuseFailAlloc_4848_; 
v_reuseFailAlloc_4848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4848_, 0, v_a_4842_);
v___x_4847_ = v_reuseFailAlloc_4848_;
goto v_reusejp_4846_;
}
v_reusejp_4846_:
{
return v___x_4847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object* v_e_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_){
_start:
{
lean_object* v_res_4856_; 
v_res_4856_ = l_Lean_Meta_isType(v_e_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
return v_res_4856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object* v_x_4857_){
_start:
{
switch(lean_obj_tag(v_x_4857_))
{
case 7:
{
lean_object* v_body_4858_; 
v_body_4858_ = lean_ctor_get(v_x_4857_, 2);
v_x_4857_ = v_body_4858_;
goto _start;
}
case 3:
{
lean_object* v_u_4860_; lean_object* v___x_4861_; 
v_u_4860_ = lean_ctor_get(v_x_4857_, 0);
lean_inc(v_u_4860_);
v___x_4861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4861_, 0, v_u_4860_);
return v___x_4861_;
}
default: 
{
lean_object* v___x_4862_; 
v___x_4862_ = lean_box(0);
return v___x_4862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object* v_x_4863_){
_start:
{
lean_object* v_res_4864_; 
v_res_4864_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_x_4863_);
lean_dec_ref(v_x_4863_);
return v_res_4864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object* v_xs_4865_, lean_object* v_body_4866_, lean_object* v_x_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(v_xs_4865_, v_body_4866_, v_x_4867_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
lean_dec(v___y_4869_);
lean_dec_ref(v___y_4868_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object* v_type_4876_, lean_object* v_xs_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_){
_start:
{
lean_object* v_l_4884_; 
switch(lean_obj_tag(v_type_4876_))
{
case 3:
{
lean_object* v_u_4887_; 
lean_dec_ref(v_xs_4877_);
v_u_4887_ = lean_ctor_get(v_type_4876_, 0);
lean_inc(v_u_4887_);
lean_dec_ref_known(v_type_4876_, 1);
v_l_4884_ = v_u_4887_;
goto v___jp_4883_;
}
case 7:
{
lean_object* v_binderName_4888_; lean_object* v_binderType_4889_; lean_object* v_body_4890_; uint8_t v_binderInfo_4891_; lean_object* v___f_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; 
v_binderName_4888_ = lean_ctor_get(v_type_4876_, 0);
lean_inc(v_binderName_4888_);
v_binderType_4889_ = lean_ctor_get(v_type_4876_, 1);
lean_inc_ref(v_binderType_4889_);
v_body_4890_ = lean_ctor_get(v_type_4876_, 2);
lean_inc_ref(v_body_4890_);
v_binderInfo_4891_ = lean_ctor_get_uint8(v_type_4876_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_4876_, 3);
lean_inc_ref(v_xs_4877_);
v___f_4892_ = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4892_, 0, v_xs_4877_);
lean_closure_set(v___f_4892_, 1, v_body_4890_);
v___x_4893_ = lean_expr_instantiate_rev(v_binderType_4889_, v_xs_4877_);
lean_dec_ref(v_xs_4877_);
lean_dec_ref(v_binderType_4889_);
v___x_4894_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_4888_, v_binderInfo_4891_, v___x_4893_, v___f_4892_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_);
return v___x_4894_;
}
default: 
{
lean_object* v___x_4895_; lean_object* v___x_4896_; 
v___x_4895_ = lean_expr_instantiate_rev(v_type_4876_, v_xs_4877_);
lean_dec_ref(v_xs_4877_);
lean_dec_ref(v_type_4876_);
v___x_4896_ = l_Lean_Meta_whnfD(v___x_4895_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_);
if (lean_obj_tag(v___x_4896_) == 0)
{
lean_object* v_a_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4908_; 
v_a_4897_ = lean_ctor_get(v___x_4896_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4896_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4899_ = v___x_4896_;
v_isShared_4900_ = v_isSharedCheck_4908_;
goto v_resetjp_4898_;
}
else
{
lean_inc(v_a_4897_);
lean_dec(v___x_4896_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4908_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
switch(lean_obj_tag(v_a_4897_))
{
case 3:
{
lean_object* v_u_4901_; 
lean_del_object(v___x_4899_);
v_u_4901_ = lean_ctor_get(v_a_4897_, 0);
lean_inc(v_u_4901_);
lean_dec_ref_known(v_a_4897_, 1);
v_l_4884_ = v_u_4901_;
goto v___jp_4883_;
}
case 7:
{
lean_object* v___x_4902_; 
lean_del_object(v___x_4899_);
v___x_4902_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v_type_4876_ = v_a_4897_;
v_xs_4877_ = v___x_4902_;
goto _start;
}
default: 
{
lean_object* v___x_4904_; lean_object* v___x_4906_; 
lean_dec(v_a_4897_);
v___x_4904_ = lean_box(0);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 0, v___x_4904_);
v___x_4906_ = v___x_4899_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v___x_4904_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
}
else
{
lean_object* v_a_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4916_; 
v_a_4909_ = lean_ctor_get(v___x_4896_, 0);
v_isSharedCheck_4916_ = !lean_is_exclusive(v___x_4896_);
if (v_isSharedCheck_4916_ == 0)
{
v___x_4911_ = v___x_4896_;
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_a_4909_);
lean_dec(v___x_4896_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4914_; 
if (v_isShared_4912_ == 0)
{
v___x_4914_ = v___x_4911_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v_a_4909_);
v___x_4914_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
return v___x_4914_;
}
}
}
}
}
v___jp_4883_:
{
lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4885_, 0, v_l_4884_);
v___x_4886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4886_, 0, v___x_4885_);
return v___x_4886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object* v_xs_4917_, lean_object* v_body_4918_, lean_object* v_x_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_, lean_object* v___y_4923_){
_start:
{
lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4925_ = lean_array_push(v_xs_4917_, v_x_4919_);
v___x_4926_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_body_4918_, v___x_4925_, v___y_4920_, v___y_4921_, v___y_4922_, v___y_4923_);
return v___x_4926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object* v_type_4927_, lean_object* v_xs_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_){
_start:
{
lean_object* v_res_4934_; 
v_res_4934_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4927_, v_xs_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_);
lean_dec(v___y_4932_);
lean_dec_ref(v___y_4931_);
lean_dec(v___y_4930_);
lean_dec_ref(v___y_4929_);
return v_res_4934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object* v___y_4935_, lean_object* v_cache_4936_, lean_object* v_a_x3f_4937_){
_start:
{
lean_object* v___x_4939_; lean_object* v_mctx_4940_; lean_object* v_zetaDeltaFVarIds_4941_; lean_object* v_postponed_4942_; lean_object* v_diag_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4953_; 
v___x_4939_ = lean_st_ref_take(v___y_4935_);
v_mctx_4940_ = lean_ctor_get(v___x_4939_, 0);
v_zetaDeltaFVarIds_4941_ = lean_ctor_get(v___x_4939_, 2);
v_postponed_4942_ = lean_ctor_get(v___x_4939_, 3);
v_diag_4943_ = lean_ctor_get(v___x_4939_, 4);
v_isSharedCheck_4953_ = !lean_is_exclusive(v___x_4939_);
if (v_isSharedCheck_4953_ == 0)
{
lean_object* v_unused_4954_; 
v_unused_4954_ = lean_ctor_get(v___x_4939_, 1);
lean_dec(v_unused_4954_);
v___x_4945_ = v___x_4939_;
v_isShared_4946_ = v_isSharedCheck_4953_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_diag_4943_);
lean_inc(v_postponed_4942_);
lean_inc(v_zetaDeltaFVarIds_4941_);
lean_inc(v_mctx_4940_);
lean_dec(v___x_4939_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4953_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4947_; lean_object* v___x_4949_; 
v___x_4947_ = lean_box(0);
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 1, v_cache_4936_);
v___x_4949_ = v___x_4945_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v_mctx_4940_);
lean_ctor_set(v_reuseFailAlloc_4952_, 1, v_cache_4936_);
lean_ctor_set(v_reuseFailAlloc_4952_, 2, v_zetaDeltaFVarIds_4941_);
lean_ctor_set(v_reuseFailAlloc_4952_, 3, v_postponed_4942_);
lean_ctor_set(v_reuseFailAlloc_4952_, 4, v_diag_4943_);
v___x_4949_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
lean_object* v___x_4950_; lean_object* v___x_4951_; 
v___x_4950_ = lean_st_ref_put(v___y_4935_, v___x_4949_);
v___x_4951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4947_);
return v___x_4951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object* v___y_4955_, lean_object* v_cache_4956_, lean_object* v_a_x3f_4957_, lean_object* v___y_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v___y_4955_, v_cache_4956_, v_a_x3f_4957_);
lean_dec(v_a_x3f_4957_);
lean_dec(v___y_4955_);
return v_res_4959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object* v_type_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_){
_start:
{
lean_object* v___x_4966_; 
v___x_4966_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_type_4960_);
if (lean_obj_tag(v___x_4966_) == 0)
{
lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v_cache_4969_; lean_object* v___x_4970_; 
v___x_4967_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v___x_4968_ = lean_st_ref_get(v___y_4962_);
v_cache_4969_ = lean_ctor_get(v___x_4968_, 1);
lean_inc_ref(v_cache_4969_);
lean_dec(v___x_4968_);
v___x_4970_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4960_, v___x_4967_, v___y_4961_, v___y_4962_, v___y_4963_, v___y_4964_);
if (lean_obj_tag(v___x_4970_) == 0)
{
lean_object* v_a_4971_; lean_object* v___x_4973_; uint8_t v_isShared_4974_; uint8_t v_isSharedCheck_4987_; 
v_a_4971_ = lean_ctor_get(v___x_4970_, 0);
v_isSharedCheck_4987_ = !lean_is_exclusive(v___x_4970_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4973_ = v___x_4970_;
v_isShared_4974_ = v_isSharedCheck_4987_;
goto v_resetjp_4972_;
}
else
{
lean_inc(v_a_4971_);
lean_dec(v___x_4970_);
v___x_4973_ = lean_box(0);
v_isShared_4974_ = v_isSharedCheck_4987_;
goto v_resetjp_4972_;
}
v_resetjp_4972_:
{
lean_object* v___x_4976_; 
lean_inc(v_a_4971_);
if (v_isShared_4974_ == 0)
{
lean_ctor_set_tag(v___x_4973_, 1);
v___x_4976_ = v___x_4973_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4986_; 
v_reuseFailAlloc_4986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4986_, 0, v_a_4971_);
v___x_4976_ = v_reuseFailAlloc_4986_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
lean_object* v___x_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_4984_; 
v___x_4977_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v___y_4962_, v_cache_4969_, v___x_4976_);
lean_dec_ref(v___x_4976_);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4977_);
if (v_isSharedCheck_4984_ == 0)
{
lean_object* v_unused_4985_; 
v_unused_4985_ = lean_ctor_get(v___x_4977_, 0);
lean_dec(v_unused_4985_);
v___x_4979_ = v___x_4977_;
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
else
{
lean_dec(v___x_4977_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4982_; 
if (v_isShared_4980_ == 0)
{
lean_ctor_set(v___x_4979_, 0, v_a_4971_);
v___x_4982_ = v___x_4979_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4971_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4992_; uint8_t v_isShared_4993_; uint8_t v_isSharedCheck_4997_; 
v_a_4988_ = lean_ctor_get(v___x_4970_, 0);
lean_inc(v_a_4988_);
lean_dec_ref_known(v___x_4970_, 1);
v___x_4989_ = lean_box(0);
v___x_4990_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v___y_4962_, v_cache_4969_, v___x_4989_);
v_isSharedCheck_4997_ = !lean_is_exclusive(v___x_4990_);
if (v_isSharedCheck_4997_ == 0)
{
lean_object* v_unused_4998_; 
v_unused_4998_ = lean_ctor_get(v___x_4990_, 0);
lean_dec(v_unused_4998_);
v___x_4992_ = v___x_4990_;
v_isShared_4993_ = v_isSharedCheck_4997_;
goto v_resetjp_4991_;
}
else
{
lean_dec(v___x_4990_);
v___x_4992_ = lean_box(0);
v_isShared_4993_ = v_isSharedCheck_4997_;
goto v_resetjp_4991_;
}
v_resetjp_4991_:
{
lean_object* v___x_4995_; 
if (v_isShared_4993_ == 0)
{
lean_ctor_set_tag(v___x_4992_, 1);
lean_ctor_set(v___x_4992_, 0, v_a_4988_);
v___x_4995_ = v___x_4992_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v_a_4988_);
v___x_4995_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
return v___x_4995_;
}
}
}
}
else
{
lean_object* v___x_4999_; 
lean_dec_ref(v_type_4960_);
v___x_4999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4999_, 0, v___x_4966_);
return v___x_4999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object* v_type_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_){
_start:
{
lean_object* v_res_5006_; 
v_res_5006_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_);
lean_dec(v___y_5004_);
lean_dec_ref(v___y_5003_);
lean_dec(v___y_5002_);
lean_dec_ref(v___y_5001_);
return v_res_5006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object* v_type_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_);
if (lean_obj_tag(v___x_5013_) == 0)
{
lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5028_; 
v_a_5014_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5028_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_5016_ = v___x_5013_;
v_isShared_5017_ = v_isSharedCheck_5028_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v___x_5013_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5028_;
goto v_resetjp_5015_;
}
v_resetjp_5015_:
{
if (lean_obj_tag(v_a_5014_) == 0)
{
uint8_t v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5021_; 
v___x_5018_ = 0;
v___x_5019_ = lean_box(v___x_5018_);
if (v_isShared_5017_ == 0)
{
lean_ctor_set(v___x_5016_, 0, v___x_5019_);
v___x_5021_ = v___x_5016_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v___x_5019_);
v___x_5021_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
return v___x_5021_;
}
}
else
{
uint8_t v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5026_; 
lean_dec_ref_known(v_a_5014_, 1);
v___x_5023_ = 1;
v___x_5024_ = lean_box(v___x_5023_);
if (v_isShared_5017_ == 0)
{
lean_ctor_set(v___x_5016_, 0, v___x_5024_);
v___x_5026_ = v___x_5016_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v___x_5024_);
v___x_5026_ = v_reuseFailAlloc_5027_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
return v___x_5026_;
}
}
}
}
else
{
lean_object* v_a_5029_; lean_object* v___x_5031_; uint8_t v_isShared_5032_; uint8_t v_isSharedCheck_5036_; 
v_a_5029_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5036_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5036_ == 0)
{
v___x_5031_ = v___x_5013_;
v_isShared_5032_ = v_isSharedCheck_5036_;
goto v_resetjp_5030_;
}
else
{
lean_inc(v_a_5029_);
lean_dec(v___x_5013_);
v___x_5031_ = lean_box(0);
v_isShared_5032_ = v_isSharedCheck_5036_;
goto v_resetjp_5030_;
}
v_resetjp_5030_:
{
lean_object* v___x_5034_; 
if (v_isShared_5032_ == 0)
{
v___x_5034_ = v___x_5031_;
goto v_reusejp_5033_;
}
else
{
lean_object* v_reuseFailAlloc_5035_; 
v_reuseFailAlloc_5035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5035_, 0, v_a_5029_);
v___x_5034_ = v_reuseFailAlloc_5035_;
goto v_reusejp_5033_;
}
v_reusejp_5033_:
{
return v___x_5034_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object* v_type_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_){
_start:
{
lean_object* v_res_5043_; 
v_res_5043_ = l_Lean_Meta_isTypeFormerType(v_type_5037_, v___y_5038_, v___y_5039_, v___y_5040_, v___y_5041_);
lean_dec(v___y_5041_);
lean_dec_ref(v___y_5040_);
lean_dec(v___y_5039_);
lean_dec_ref(v___y_5038_);
return v_res_5043_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object* v_x_5044_, lean_object* v_x_5045_){
_start:
{
if (lean_obj_tag(v_x_5044_) == 0)
{
if (lean_obj_tag(v_x_5045_) == 0)
{
uint8_t v___x_5046_; 
v___x_5046_ = 1;
return v___x_5046_;
}
else
{
uint8_t v___x_5047_; 
v___x_5047_ = 0;
return v___x_5047_;
}
}
else
{
if (lean_obj_tag(v_x_5045_) == 0)
{
uint8_t v___x_5048_; 
v___x_5048_ = 0;
return v___x_5048_;
}
else
{
lean_object* v_val_5049_; lean_object* v_val_5050_; uint8_t v___x_5051_; 
v_val_5049_ = lean_ctor_get(v_x_5044_, 0);
v_val_5050_ = lean_ctor_get(v_x_5045_, 0);
v___x_5051_ = lean_level_eq(v_val_5049_, v_val_5050_);
return v___x_5051_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object* v_x_5052_, lean_object* v_x_5053_){
_start:
{
uint8_t v_res_5054_; lean_object* v_r_5055_; 
v_res_5054_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_x_5052_, v_x_5053_);
lean_dec(v_x_5053_);
lean_dec(v_x_5052_);
v_r_5055_ = lean_box(v_res_5054_);
return v_r_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object* v_type_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_){
_start:
{
lean_object* v___x_5064_; 
v___x_5064_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_);
if (lean_obj_tag(v___x_5064_) == 0)
{
lean_object* v_a_5065_; lean_object* v___x_5067_; uint8_t v_isShared_5068_; uint8_t v_isSharedCheck_5075_; 
v_a_5065_ = lean_ctor_get(v___x_5064_, 0);
v_isSharedCheck_5075_ = !lean_is_exclusive(v___x_5064_);
if (v_isSharedCheck_5075_ == 0)
{
v___x_5067_ = v___x_5064_;
v_isShared_5068_ = v_isSharedCheck_5075_;
goto v_resetjp_5066_;
}
else
{
lean_inc(v_a_5065_);
lean_dec(v___x_5064_);
v___x_5067_ = lean_box(0);
v_isShared_5068_ = v_isSharedCheck_5075_;
goto v_resetjp_5066_;
}
v_resetjp_5066_:
{
lean_object* v___x_5069_; uint8_t v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5073_; 
v___x_5069_ = ((lean_object*)(l_Lean_Meta_isPropFormerType___closed__0));
v___x_5070_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_a_5065_, v___x_5069_);
lean_dec(v_a_5065_);
v___x_5071_ = lean_box(v___x_5070_);
if (v_isShared_5068_ == 0)
{
lean_ctor_set(v___x_5067_, 0, v___x_5071_);
v___x_5073_ = v___x_5067_;
goto v_reusejp_5072_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v___x_5071_);
v___x_5073_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5072_;
}
v_reusejp_5072_:
{
return v___x_5073_;
}
}
}
else
{
lean_object* v_a_5076_; lean_object* v___x_5078_; uint8_t v_isShared_5079_; uint8_t v_isSharedCheck_5083_; 
v_a_5076_ = lean_ctor_get(v___x_5064_, 0);
v_isSharedCheck_5083_ = !lean_is_exclusive(v___x_5064_);
if (v_isSharedCheck_5083_ == 0)
{
v___x_5078_ = v___x_5064_;
v_isShared_5079_ = v_isSharedCheck_5083_;
goto v_resetjp_5077_;
}
else
{
lean_inc(v_a_5076_);
lean_dec(v___x_5064_);
v___x_5078_ = lean_box(0);
v_isShared_5079_ = v_isSharedCheck_5083_;
goto v_resetjp_5077_;
}
v_resetjp_5077_:
{
lean_object* v___x_5081_; 
if (v_isShared_5079_ == 0)
{
v___x_5081_ = v___x_5078_;
goto v_reusejp_5080_;
}
else
{
lean_object* v_reuseFailAlloc_5082_; 
v_reuseFailAlloc_5082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5082_, 0, v_a_5076_);
v___x_5081_ = v_reuseFailAlloc_5082_;
goto v_reusejp_5080_;
}
v_reusejp_5080_:
{
return v___x_5081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object* v_type_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_){
_start:
{
lean_object* v_res_5090_; 
v_res_5090_ = l_Lean_Meta_isPropFormerType(v_type_5084_, v___y_5085_, v___y_5086_, v___y_5087_, v___y_5088_);
lean_dec(v___y_5088_);
lean_dec_ref(v___y_5087_);
lean_dec(v___y_5086_);
lean_dec_ref(v___y_5085_);
return v_res_5090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object* v_e_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_){
_start:
{
lean_object* v___x_5097_; 
lean_inc(v___y_5095_);
lean_inc_ref(v___y_5094_);
lean_inc(v___y_5093_);
lean_inc_ref(v___y_5092_);
v___x_5097_ = lean_infer_type(v_e_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; lean_object* v___x_5099_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
v___x_5099_ = l_Lean_Meta_isTypeFormerType(v_a_5098_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_);
return v___x_5099_;
}
else
{
lean_object* v_a_5100_; lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5107_; 
v_a_5100_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5107_ == 0)
{
v___x_5102_ = v___x_5097_;
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
else
{
lean_inc(v_a_5100_);
lean_dec(v___x_5097_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v___x_5105_; 
if (v_isShared_5103_ == 0)
{
v___x_5105_ = v___x_5102_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v_a_5100_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object* v_e_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_){
_start:
{
lean_object* v_res_5114_; 
v_res_5114_ = l_Lean_Meta_isTypeFormer(v_e_5108_, v___y_5109_, v___y_5110_, v___y_5111_, v___y_5112_);
lean_dec(v___y_5112_);
lean_dec_ref(v___y_5111_);
lean_dec(v___y_5110_);
lean_dec_ref(v___y_5109_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object* v_type_5115_, lean_object* v_maxFVars_x3f_5116_, lean_object* v_k_5117_, uint8_t v_cleanupAnnotations_5118_, uint8_t v_whnfType_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_){
_start:
{
lean_object* v___f_5125_; lean_object* v___x_5126_; 
v___f_5125_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5125_, 0, v_k_5117_);
v___x_5126_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_5115_, v_maxFVars_x3f_5116_, v___f_5125_, v_cleanupAnnotations_5118_, v_whnfType_5119_, v___y_5120_, v___y_5121_, v___y_5122_, v___y_5123_);
if (lean_obj_tag(v___x_5126_) == 0)
{
lean_object* v_a_5127_; lean_object* v___x_5129_; uint8_t v_isShared_5130_; uint8_t v_isSharedCheck_5134_; 
v_a_5127_ = lean_ctor_get(v___x_5126_, 0);
v_isSharedCheck_5134_ = !lean_is_exclusive(v___x_5126_);
if (v_isSharedCheck_5134_ == 0)
{
v___x_5129_ = v___x_5126_;
v_isShared_5130_ = v_isSharedCheck_5134_;
goto v_resetjp_5128_;
}
else
{
lean_inc(v_a_5127_);
lean_dec(v___x_5126_);
v___x_5129_ = lean_box(0);
v_isShared_5130_ = v_isSharedCheck_5134_;
goto v_resetjp_5128_;
}
v_resetjp_5128_:
{
lean_object* v___x_5132_; 
if (v_isShared_5130_ == 0)
{
v___x_5132_ = v___x_5129_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v_a_5127_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
return v___x_5132_;
}
}
}
else
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5142_; 
v_a_5135_ = lean_ctor_get(v___x_5126_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v___x_5126_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_5137_ = v___x_5126_;
v_isShared_5138_ = v_isSharedCheck_5142_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v___x_5126_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5142_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5140_; 
if (v_isShared_5138_ == 0)
{
v___x_5140_ = v___x_5137_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5141_; 
v_reuseFailAlloc_5141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5141_, 0, v_a_5135_);
v___x_5140_ = v_reuseFailAlloc_5141_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
return v___x_5140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object* v_type_5143_, lean_object* v_maxFVars_x3f_5144_, lean_object* v_k_5145_, lean_object* v_cleanupAnnotations_5146_, lean_object* v_whnfType_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5153_; uint8_t v_whnfType_boxed_5154_; lean_object* v_res_5155_; 
v_cleanupAnnotations_boxed_5153_ = lean_unbox(v_cleanupAnnotations_5146_);
v_whnfType_boxed_5154_ = lean_unbox(v_whnfType_5147_);
v_res_5155_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5143_, v_maxFVars_x3f_5144_, v_k_5145_, v_cleanupAnnotations_boxed_5153_, v_whnfType_boxed_5154_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_);
lean_dec(v___y_5151_);
lean_dec_ref(v___y_5150_);
lean_dec(v___y_5149_);
lean_dec_ref(v___y_5148_);
return v_res_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object* v_00_u03b1_5156_, lean_object* v_type_5157_, lean_object* v_maxFVars_x3f_5158_, lean_object* v_k_5159_, uint8_t v_cleanupAnnotations_5160_, uint8_t v_whnfType_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_){
_start:
{
lean_object* v___x_5167_; 
v___x_5167_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5157_, v_maxFVars_x3f_5158_, v_k_5159_, v_cleanupAnnotations_5160_, v_whnfType_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_);
return v___x_5167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object* v_00_u03b1_5168_, lean_object* v_type_5169_, lean_object* v_maxFVars_x3f_5170_, lean_object* v_k_5171_, lean_object* v_cleanupAnnotations_5172_, lean_object* v_whnfType_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5179_; uint8_t v_whnfType_boxed_5180_; lean_object* v_res_5181_; 
v_cleanupAnnotations_boxed_5179_ = lean_unbox(v_cleanupAnnotations_5172_);
v_whnfType_boxed_5180_ = lean_unbox(v_whnfType_5173_);
v_res_5181_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(v_00_u03b1_5168_, v_type_5169_, v_maxFVars_x3f_5170_, v_k_5171_, v_cleanupAnnotations_boxed_5179_, v_whnfType_boxed_5180_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_);
lean_dec(v___y_5177_);
lean_dec_ref(v___y_5176_);
lean_dec(v___y_5175_);
lean_dec_ref(v___y_5174_);
return v_res_5181_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object* v_a_5182_, lean_object* v_as_5183_, size_t v_i_5184_, size_t v_stop_5185_){
_start:
{
uint8_t v___x_5186_; 
v___x_5186_ = lean_usize_dec_eq(v_i_5184_, v_stop_5185_);
if (v___x_5186_ == 0)
{
lean_object* v___x_5187_; uint8_t v___x_5188_; 
v___x_5187_ = lean_array_uget_borrowed(v_as_5183_, v_i_5184_);
v___x_5188_ = lean_expr_eqv(v_a_5182_, v___x_5187_);
if (v___x_5188_ == 0)
{
size_t v___x_5189_; size_t v___x_5190_; 
v___x_5189_ = ((size_t)1ULL);
v___x_5190_ = lean_usize_add(v_i_5184_, v___x_5189_);
v_i_5184_ = v___x_5190_;
goto _start;
}
else
{
return v___x_5188_;
}
}
else
{
uint8_t v___x_5192_; 
v___x_5192_ = 0;
return v___x_5192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object* v_a_5193_, lean_object* v_as_5194_, lean_object* v_i_5195_, lean_object* v_stop_5196_){
_start:
{
size_t v_i_boxed_5197_; size_t v_stop_boxed_5198_; uint8_t v_res_5199_; lean_object* v_r_5200_; 
v_i_boxed_5197_ = lean_unbox_usize(v_i_5195_);
lean_dec(v_i_5195_);
v_stop_boxed_5198_ = lean_unbox_usize(v_stop_5196_);
lean_dec(v_stop_5196_);
v_res_5199_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5193_, v_as_5194_, v_i_boxed_5197_, v_stop_boxed_5198_);
lean_dec_ref(v_as_5194_);
lean_dec_ref(v_a_5193_);
v_r_5200_ = lean_box(v_res_5199_);
return v_r_5200_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object* v_as_5201_, lean_object* v_a_5202_){
_start:
{
lean_object* v___x_5203_; lean_object* v___x_5204_; uint8_t v___x_5205_; 
v___x_5203_ = lean_unsigned_to_nat(0u);
v___x_5204_ = lean_array_get_size(v_as_5201_);
v___x_5205_ = lean_nat_dec_lt(v___x_5203_, v___x_5204_);
if (v___x_5205_ == 0)
{
return v___x_5205_;
}
else
{
if (v___x_5205_ == 0)
{
return v___x_5205_;
}
else
{
size_t v___x_5206_; size_t v___x_5207_; uint8_t v___x_5208_; 
v___x_5206_ = ((size_t)0ULL);
v___x_5207_ = lean_usize_of_nat(v___x_5204_);
v___x_5208_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5202_, v_as_5201_, v___x_5206_, v___x_5207_);
return v___x_5208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object* v_as_5209_, lean_object* v_a_5210_){
_start:
{
uint8_t v_res_5211_; lean_object* v_r_5212_; 
v_res_5211_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_as_5209_, v_a_5210_);
lean_dec_ref(v_a_5210_);
lean_dec_ref(v_as_5209_);
v_r_5212_ = lean_box(v_res_5211_);
return v_r_5212_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object* v_xs_5213_, lean_object* v_e_5214_){
_start:
{
uint8_t v___x_5215_; lean_object* v_d_5217_; lean_object* v_b_5218_; 
v___x_5215_ = l_Lean_Expr_hasFVar(v_e_5214_);
if (v___x_5215_ == 0)
{
lean_dec_ref(v_e_5214_);
return v___x_5215_;
}
else
{
switch(lean_obj_tag(v_e_5214_))
{
case 7:
{
lean_object* v_binderType_5221_; lean_object* v_body_5222_; 
v_binderType_5221_ = lean_ctor_get(v_e_5214_, 1);
lean_inc_ref(v_binderType_5221_);
v_body_5222_ = lean_ctor_get(v_e_5214_, 2);
lean_inc_ref(v_body_5222_);
lean_dec_ref_known(v_e_5214_, 3);
v_d_5217_ = v_binderType_5221_;
v_b_5218_ = v_body_5222_;
goto v___jp_5216_;
}
case 6:
{
lean_object* v_binderType_5223_; lean_object* v_body_5224_; 
v_binderType_5223_ = lean_ctor_get(v_e_5214_, 1);
lean_inc_ref(v_binderType_5223_);
v_body_5224_ = lean_ctor_get(v_e_5214_, 2);
lean_inc_ref(v_body_5224_);
lean_dec_ref_known(v_e_5214_, 3);
v_d_5217_ = v_binderType_5223_;
v_b_5218_ = v_body_5224_;
goto v___jp_5216_;
}
case 10:
{
lean_object* v_expr_5225_; 
v_expr_5225_ = lean_ctor_get(v_e_5214_, 1);
lean_inc_ref(v_expr_5225_);
lean_dec_ref_known(v_e_5214_, 2);
v_e_5214_ = v_expr_5225_;
goto _start;
}
case 8:
{
lean_object* v_type_5227_; lean_object* v_value_5228_; lean_object* v_body_5229_; uint8_t v___x_5230_; 
v_type_5227_ = lean_ctor_get(v_e_5214_, 1);
lean_inc_ref(v_type_5227_);
v_value_5228_ = lean_ctor_get(v_e_5214_, 2);
lean_inc_ref(v_value_5228_);
v_body_5229_ = lean_ctor_get(v_e_5214_, 3);
lean_inc_ref(v_body_5229_);
lean_dec_ref_known(v_e_5214_, 4);
v___x_5230_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5213_, v_type_5227_);
if (v___x_5230_ == 0)
{
uint8_t v___x_5231_; 
v___x_5231_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5213_, v_value_5228_);
if (v___x_5231_ == 0)
{
v_e_5214_ = v_body_5229_;
goto _start;
}
else
{
lean_dec_ref(v_body_5229_);
return v___x_5215_;
}
}
else
{
lean_dec_ref(v_body_5229_);
lean_dec_ref(v_value_5228_);
return v___x_5215_;
}
}
case 5:
{
lean_object* v_fn_5233_; lean_object* v_arg_5234_; uint8_t v___x_5235_; 
v_fn_5233_ = lean_ctor_get(v_e_5214_, 0);
lean_inc_ref(v_fn_5233_);
v_arg_5234_ = lean_ctor_get(v_e_5214_, 1);
lean_inc_ref(v_arg_5234_);
lean_dec_ref_known(v_e_5214_, 2);
v___x_5235_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5213_, v_fn_5233_);
if (v___x_5235_ == 0)
{
v_e_5214_ = v_arg_5234_;
goto _start;
}
else
{
lean_dec_ref(v_arg_5234_);
return v___x_5215_;
}
}
case 11:
{
lean_object* v_struct_5237_; 
v_struct_5237_ = lean_ctor_get(v_e_5214_, 2);
lean_inc_ref(v_struct_5237_);
lean_dec_ref_known(v_e_5214_, 3);
v_e_5214_ = v_struct_5237_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_5239_; lean_object* v___x_5240_; uint8_t v___x_5241_; 
v_fvarId_5239_ = lean_ctor_get(v_e_5214_, 0);
lean_inc(v_fvarId_5239_);
lean_dec_ref_known(v_e_5214_, 1);
v___x_5240_ = l_Lean_Expr_fvar___override(v_fvarId_5239_);
v___x_5241_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_xs_5213_, v___x_5240_);
lean_dec_ref(v___x_5240_);
return v___x_5241_;
}
default: 
{
uint8_t v___x_5242_; 
lean_dec_ref(v_e_5214_);
v___x_5242_ = 0;
return v___x_5242_;
}
}
}
v___jp_5216_:
{
uint8_t v___x_5219_; 
v___x_5219_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5213_, v_d_5217_);
if (v___x_5219_ == 0)
{
v_e_5214_ = v_b_5218_;
goto _start;
}
else
{
lean_dec_ref(v_b_5218_);
return v___x_5215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object* v_xs_5243_, lean_object* v_e_5244_){
_start:
{
uint8_t v_res_5245_; lean_object* v_r_5246_; 
v_res_5245_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5243_, v_e_5244_);
lean_dec_ref(v_xs_5243_);
v_r_5246_ = lean_box(v_res_5245_);
return v_r_5246_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1(void){
_start:
{
lean_object* v___x_5248_; lean_object* v___x_5249_; 
v___x_5248_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0));
v___x_5249_ = l_Lean_stringToMessageData(v___x_5248_);
return v___x_5249_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; 
v___x_5251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2));
v___x_5252_ = l_Lean_stringToMessageData(v___x_5251_);
return v___x_5252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object* v_xs_5253_, lean_object* v_type_5254_, lean_object* v_as_5255_, size_t v_sz_5256_, size_t v_i_5257_, lean_object* v_b_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_){
_start:
{
lean_object* v_a_5265_; uint8_t v___x_5269_; 
v___x_5269_ = lean_usize_dec_lt(v_i_5257_, v_sz_5256_);
if (v___x_5269_ == 0)
{
lean_object* v___x_5270_; 
lean_dec_ref(v_type_5254_);
v___x_5270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5270_, 0, v_b_5258_);
return v___x_5270_;
}
else
{
lean_object* v___x_5271_; lean_object* v_a_5272_; uint8_t v___x_5273_; 
v___x_5271_ = lean_box(0);
v_a_5272_ = lean_array_uget_borrowed(v_as_5255_, v_i_5257_);
lean_inc(v_a_5272_);
v___x_5273_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5253_, v_a_5272_);
if (v___x_5273_ == 0)
{
v_a_5265_ = v___x_5271_;
goto v___jp_5264_;
}
else
{
lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5274_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1);
lean_inc(v_a_5272_);
v___x_5275_ = l_Lean_MessageData_ofExpr(v_a_5272_);
v___x_5276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5276_, 0, v___x_5274_);
lean_ctor_set(v___x_5276_, 1, v___x_5275_);
v___x_5277_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3);
v___x_5278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5278_, 0, v___x_5276_);
lean_ctor_set(v___x_5278_, 1, v___x_5277_);
lean_inc_ref(v_type_5254_);
v___x_5279_ = l_Lean_MessageData_ofExpr(v_type_5254_);
v___x_5280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5280_, 0, v___x_5278_);
lean_ctor_set(v___x_5280_, 1, v___x_5279_);
v___x_5281_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5280_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_);
if (lean_obj_tag(v___x_5281_) == 0)
{
lean_dec_ref_known(v___x_5281_, 1);
v_a_5265_ = v___x_5271_;
goto v___jp_5264_;
}
else
{
lean_dec_ref(v_type_5254_);
return v___x_5281_;
}
}
}
v___jp_5264_:
{
size_t v___x_5266_; size_t v___x_5267_; 
v___x_5266_ = ((size_t)1ULL);
v___x_5267_ = lean_usize_add(v_i_5257_, v___x_5266_);
v_i_5257_ = v___x_5267_;
v_b_5258_ = v_a_5265_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object* v_xs_5282_, lean_object* v_type_5283_, lean_object* v_as_5284_, lean_object* v_sz_5285_, lean_object* v_i_5286_, lean_object* v_b_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_){
_start:
{
size_t v_sz_boxed_5293_; size_t v_i_boxed_5294_; lean_object* v_res_5295_; 
v_sz_boxed_5293_ = lean_unbox_usize(v_sz_5285_);
lean_dec(v_sz_5285_);
v_i_boxed_5294_ = lean_unbox_usize(v_i_5286_);
lean_dec(v_i_5286_);
v_res_5295_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5282_, v_type_5283_, v_as_5284_, v_sz_boxed_5293_, v_i_boxed_5294_, v_b_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v___y_5288_);
lean_dec_ref(v_as_5284_);
lean_dec_ref(v_xs_5282_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t v_sz_5296_, size_t v_i_5297_, lean_object* v_bs_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_){
_start:
{
uint8_t v___x_5304_; 
v___x_5304_ = lean_usize_dec_lt(v_i_5297_, v_sz_5296_);
if (v___x_5304_ == 0)
{
lean_object* v___x_5305_; 
v___x_5305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5305_, 0, v_bs_5298_);
return v___x_5305_;
}
else
{
lean_object* v_v_5306_; lean_object* v___x_5307_; lean_object* v_bs_x27_5308_; lean_object* v___x_5309_; 
v_v_5306_ = lean_array_uget(v_bs_5298_, v_i_5297_);
v___x_5307_ = lean_unsigned_to_nat(0u);
v_bs_x27_5308_ = lean_array_uset(v_bs_5298_, v_i_5297_, v___x_5307_);
lean_inc(v___y_5302_);
lean_inc_ref(v___y_5301_);
lean_inc(v___y_5300_);
lean_inc_ref(v___y_5299_);
v___x_5309_ = lean_infer_type(v_v_5306_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_);
if (lean_obj_tag(v___x_5309_) == 0)
{
lean_object* v_a_5310_; size_t v___x_5311_; size_t v___x_5312_; lean_object* v___x_5313_; 
v_a_5310_ = lean_ctor_get(v___x_5309_, 0);
lean_inc(v_a_5310_);
lean_dec_ref_known(v___x_5309_, 1);
v___x_5311_ = ((size_t)1ULL);
v___x_5312_ = lean_usize_add(v_i_5297_, v___x_5311_);
v___x_5313_ = lean_array_uset(v_bs_x27_5308_, v_i_5297_, v_a_5310_);
v_i_5297_ = v___x_5312_;
v_bs_5298_ = v___x_5313_;
goto _start;
}
else
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5322_; 
lean_dec_ref(v_bs_x27_5308_);
v_a_5315_ = lean_ctor_get(v___x_5309_, 0);
v_isSharedCheck_5322_ = !lean_is_exclusive(v___x_5309_);
if (v_isSharedCheck_5322_ == 0)
{
v___x_5317_ = v___x_5309_;
v_isShared_5318_ = v_isSharedCheck_5322_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_a_5315_);
lean_dec(v___x_5309_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5322_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
lean_object* v___x_5320_; 
if (v_isShared_5318_ == 0)
{
v___x_5320_ = v___x_5317_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v_a_5315_);
v___x_5320_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
return v___x_5320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object* v_sz_5323_, lean_object* v_i_5324_, lean_object* v_bs_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_){
_start:
{
size_t v_sz_boxed_5331_; size_t v_i_boxed_5332_; lean_object* v_res_5333_; 
v_sz_boxed_5331_ = lean_unbox_usize(v_sz_5323_);
lean_dec(v_sz_5323_);
v_i_boxed_5332_ = lean_unbox_usize(v_i_5324_);
lean_dec(v_i_5324_);
v_res_5333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_boxed_5331_, v_i_boxed_5332_, v_bs_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
return v_res_5333_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5335_; lean_object* v___x_5336_; 
v___x_5335_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__0));
v___x_5336_ = l_Lean_stringToMessageData(v___x_5335_);
return v___x_5336_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5338_; lean_object* v___x_5339_; 
v___x_5338_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__2));
v___x_5339_ = l_Lean_stringToMessageData(v___x_5338_);
return v___x_5339_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5341_; lean_object* v___x_5342_; 
v___x_5341_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__4));
v___x_5342_ = l_Lean_stringToMessageData(v___x_5341_);
return v___x_5342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object* v_type_5343_, lean_object* v_n_5344_, lean_object* v_xs_5345_, lean_object* v_x_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_){
_start:
{
lean_object* v___x_5376_; uint8_t v___x_5377_; 
v___x_5376_ = lean_array_get_size(v_xs_5345_);
v___x_5377_ = lean_nat_dec_eq(v___x_5376_, v_n_5344_);
if (v___x_5377_ == 0)
{
lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5397_; 
lean_dec_ref(v_xs_5345_);
v___x_5378_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__1, &l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1);
v___x_5379_ = l_Lean_MessageData_ofExpr(v_type_5343_);
v___x_5380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5380_, 0, v___x_5378_);
lean_ctor_set(v___x_5380_, 1, v___x_5379_);
v___x_5381_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__3, &l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3);
v___x_5382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5382_, 0, v___x_5380_);
lean_ctor_set(v___x_5382_, 1, v___x_5381_);
v___x_5383_ = l_Nat_reprFast(v_n_5344_);
v___x_5384_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5384_, 0, v___x_5383_);
v___x_5385_ = l_Lean_MessageData_ofFormat(v___x_5384_);
v___x_5386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5386_, 0, v___x_5382_);
lean_ctor_set(v___x_5386_, 1, v___x_5385_);
v___x_5387_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__5, &l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5);
v___x_5388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5388_, 0, v___x_5386_);
lean_ctor_set(v___x_5388_, 1, v___x_5387_);
v___x_5389_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5388_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_);
v_a_5390_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5392_ = v___x_5389_;
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v___x_5389_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5395_; 
if (v_isShared_5393_ == 0)
{
v___x_5395_ = v___x_5392_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5396_; 
v_reuseFailAlloc_5396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5396_, 0, v_a_5390_);
v___x_5395_ = v_reuseFailAlloc_5396_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
return v___x_5395_;
}
}
}
else
{
lean_dec(v_n_5344_);
goto v___jp_5352_;
}
v___jp_5352_:
{
size_t v_sz_5353_; size_t v___x_5354_; lean_object* v___x_5355_; 
v_sz_5353_ = lean_array_size(v_xs_5345_);
v___x_5354_ = ((size_t)0ULL);
lean_inc_ref(v_xs_5345_);
v___x_5355_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_5353_, v___x_5354_, v_xs_5345_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_);
if (lean_obj_tag(v___x_5355_) == 0)
{
lean_object* v_a_5356_; lean_object* v___x_5357_; size_t v_sz_5358_; lean_object* v___x_5359_; 
v_a_5356_ = lean_ctor_get(v___x_5355_, 0);
lean_inc(v_a_5356_);
lean_dec_ref_known(v___x_5355_, 1);
v___x_5357_ = lean_box(0);
v_sz_5358_ = lean_array_size(v_a_5356_);
v___x_5359_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5345_, v_type_5343_, v_a_5356_, v_sz_5358_, v___x_5354_, v___x_5357_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_);
lean_dec_ref(v_xs_5345_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5366_; 
v_isSharedCheck_5366_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5366_ == 0)
{
lean_object* v_unused_5367_; 
v_unused_5367_ = lean_ctor_get(v___x_5359_, 0);
lean_dec(v_unused_5367_);
v___x_5361_ = v___x_5359_;
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
else
{
lean_dec(v___x_5359_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v___x_5364_; 
if (v_isShared_5362_ == 0)
{
lean_ctor_set(v___x_5361_, 0, v_a_5356_);
v___x_5364_ = v___x_5361_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v_a_5356_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
else
{
lean_object* v_a_5368_; lean_object* v___x_5370_; uint8_t v_isShared_5371_; uint8_t v_isSharedCheck_5375_; 
lean_dec(v_a_5356_);
v_a_5368_ = lean_ctor_get(v___x_5359_, 0);
v_isSharedCheck_5375_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5375_ == 0)
{
v___x_5370_ = v___x_5359_;
v_isShared_5371_ = v_isSharedCheck_5375_;
goto v_resetjp_5369_;
}
else
{
lean_inc(v_a_5368_);
lean_dec(v___x_5359_);
v___x_5370_ = lean_box(0);
v_isShared_5371_ = v_isSharedCheck_5375_;
goto v_resetjp_5369_;
}
v_resetjp_5369_:
{
lean_object* v___x_5373_; 
if (v_isShared_5371_ == 0)
{
v___x_5373_ = v___x_5370_;
goto v_reusejp_5372_;
}
else
{
lean_object* v_reuseFailAlloc_5374_; 
v_reuseFailAlloc_5374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5374_, 0, v_a_5368_);
v___x_5373_ = v_reuseFailAlloc_5374_;
goto v_reusejp_5372_;
}
v_reusejp_5372_:
{
return v___x_5373_;
}
}
}
}
else
{
lean_dec_ref(v_xs_5345_);
lean_dec_ref(v_type_5343_);
return v___x_5355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object* v_type_5398_, lean_object* v_n_5399_, lean_object* v_xs_5400_, lean_object* v_x_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_){
_start:
{
lean_object* v_res_5407_; 
v_res_5407_ = l_Lean_Meta_arrowDomainsN___lam__0(v_type_5398_, v_n_5399_, v_xs_5400_, v_x_5401_, v___y_5402_, v___y_5403_, v___y_5404_, v___y_5405_);
lean_dec(v___y_5405_);
lean_dec_ref(v___y_5404_);
lean_dec(v___y_5403_);
lean_dec_ref(v___y_5402_);
lean_dec_ref(v_x_5401_);
return v_res_5407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object* v_n_5408_, lean_object* v_type_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_){
_start:
{
lean_object* v___f_5415_; lean_object* v___x_5416_; uint8_t v___x_5417_; lean_object* v___x_5418_; 
lean_inc(v_n_5408_);
lean_inc_ref(v_type_5409_);
v___f_5415_ = lean_alloc_closure((void*)(l_Lean_Meta_arrowDomainsN___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5415_, 0, v_type_5409_);
lean_closure_set(v___f_5415_, 1, v_n_5408_);
v___x_5416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5416_, 0, v_n_5408_);
v___x_5417_ = 0;
v___x_5418_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5409_, v___x_5416_, v___f_5415_, v___x_5417_, v___x_5417_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object* v_n_5419_, lean_object* v_type_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_){
_start:
{
lean_object* v_res_5426_; 
v_res_5426_ = l_Lean_Meta_arrowDomainsN(v_n_5419_, v_type_5420_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_);
lean_dec(v___y_5424_);
lean_dec_ref(v___y_5423_);
lean_dec(v___y_5422_);
lean_dec_ref(v___y_5421_);
return v_res_5426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object* v_n_5427_, lean_object* v_e_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_){
_start:
{
lean_object* v___x_5434_; 
lean_inc(v___y_5432_);
lean_inc_ref(v___y_5431_);
lean_inc(v___y_5430_);
lean_inc_ref(v___y_5429_);
v___x_5434_ = lean_infer_type(v_e_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_);
if (lean_obj_tag(v___x_5434_) == 0)
{
lean_object* v_a_5435_; lean_object* v___x_5436_; 
v_a_5435_ = lean_ctor_get(v___x_5434_, 0);
lean_inc(v_a_5435_);
lean_dec_ref_known(v___x_5434_, 1);
v___x_5436_ = l_Lean_Meta_arrowDomainsN(v_n_5427_, v_a_5435_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_);
return v___x_5436_;
}
else
{
lean_object* v_a_5437_; lean_object* v___x_5439_; uint8_t v_isShared_5440_; uint8_t v_isSharedCheck_5444_; 
lean_dec(v_n_5427_);
v_a_5437_ = lean_ctor_get(v___x_5434_, 0);
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5434_);
if (v_isSharedCheck_5444_ == 0)
{
v___x_5439_ = v___x_5434_;
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
else
{
lean_inc(v_a_5437_);
lean_dec(v___x_5434_);
v___x_5439_ = lean_box(0);
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
v_resetjp_5438_:
{
lean_object* v___x_5442_; 
if (v_isShared_5440_ == 0)
{
v___x_5442_ = v___x_5439_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_a_5437_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object* v_n_5445_, lean_object* v_e_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_){
_start:
{
lean_object* v_res_5452_; 
v_res_5452_ = l_Lean_Meta_inferArgumentTypesN(v_n_5445_, v_e_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
lean_dec(v___y_5450_);
lean_dec_ref(v___y_5449_);
lean_dec(v___y_5448_);
lean_dec_ref(v___y_5447_);
return v_res_5452_;
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
