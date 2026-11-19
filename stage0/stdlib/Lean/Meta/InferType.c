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
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
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
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
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
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isAlwaysZero(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t l_Lean_Meta_instBEqEtaStructMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t lean_expr_equal_budgeted(lean_object*, lean_object*, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Level_instantiateParams(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadRefCoreM;
extern lean_object* l_Lean_Core_instAddMessageContextCoreM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwInterruptException___redArg(lean_object*);
lean_object* l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isNeverZero(lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10_value;
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
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Expr.instantiateBetaRevRange"};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__0 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__0_value;
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "assertion violation: stop ≤ args.size\n    "};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__1 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__1_value;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__2;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__3;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_LevelSubst_apply(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_LevelSubst_applyList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lam__0___boxed(lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected bound variable "};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* v_key_81_; lean_object* v_tail_82_; lean_object* v_fst_83_; lean_object* v_snd_84_; lean_object* v_fst_85_; lean_object* v_snd_86_; uint8_t v___x_87_; 
v_key_81_ = lean_ctor_get(v_x_79_, 0);
v_tail_82_ = lean_ctor_get(v_x_79_, 2);
v_fst_83_ = lean_ctor_get(v_key_81_, 0);
v_snd_84_ = lean_ctor_get(v_key_81_, 1);
v_fst_85_ = lean_ctor_get(v_a_78_, 0);
v_snd_86_ = lean_ctor_get(v_a_78_, 1);
v___x_87_ = l_Lean_ExprStructEq_beq(v_fst_83_, v_fst_85_);
if (v___x_87_ == 0)
{
v_x_79_ = v_tail_82_;
goto _start;
}
else
{
uint8_t v___x_89_; 
v___x_89_ = lean_nat_dec_eq(v_snd_84_, v_snd_86_);
if (v___x_89_ == 0)
{
v_x_79_ = v_tail_82_;
goto _start;
}
else
{
return v___x_89_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg___boxed(lean_object* v_a_91_, lean_object* v_x_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_91_, v_x_92_);
lean_dec(v_x_92_);
lean_dec_ref(v_a_91_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(lean_object* v_a_95_, lean_object* v_b_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_97_) == 0)
{
lean_dec(v_b_96_);
lean_dec_ref(v_a_95_);
return v_x_97_;
}
else
{
lean_object* v_key_98_; lean_object* v_value_99_; lean_object* v_tail_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_116_; 
v_key_98_ = lean_ctor_get(v_x_97_, 0);
v_value_99_ = lean_ctor_get(v_x_97_, 1);
v_tail_100_ = lean_ctor_get(v_x_97_, 2);
v_isSharedCheck_116_ = !lean_is_exclusive(v_x_97_);
if (v_isSharedCheck_116_ == 0)
{
v___x_102_ = v_x_97_;
v_isShared_103_ = v_isSharedCheck_116_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_tail_100_);
lean_inc(v_value_99_);
lean_inc(v_key_98_);
lean_dec(v_x_97_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_116_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v_fst_109_; lean_object* v_snd_110_; lean_object* v_fst_111_; lean_object* v_snd_112_; uint8_t v___x_113_; 
v_fst_109_ = lean_ctor_get(v_key_98_, 0);
v_snd_110_ = lean_ctor_get(v_key_98_, 1);
v_fst_111_ = lean_ctor_get(v_a_95_, 0);
v_snd_112_ = lean_ctor_get(v_a_95_, 1);
v___x_113_ = l_Lean_ExprStructEq_beq(v_fst_109_, v_fst_111_);
if (v___x_113_ == 0)
{
goto v___jp_104_;
}
else
{
uint8_t v___x_114_; 
v___x_114_ = lean_nat_dec_eq(v_snd_110_, v_snd_112_);
if (v___x_114_ == 0)
{
goto v___jp_104_;
}
else
{
lean_object* v___x_115_; 
lean_del_object(v___x_102_);
lean_dec(v_value_99_);
lean_dec(v_key_98_);
v___x_115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_115_, 0, v_a_95_);
lean_ctor_set(v___x_115_, 1, v_b_96_);
lean_ctor_set(v___x_115_, 2, v_tail_100_);
return v___x_115_;
}
}
v___jp_104_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_95_, v_b_96_, v_tail_100_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 2, v___x_105_);
v___x_107_ = v___x_102_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_key_98_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_value_99_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v___x_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(lean_object* v_m_117_, lean_object* v_a_118_, lean_object* v_b_119_){
_start:
{
lean_object* v_size_120_; lean_object* v_buckets_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_168_; 
v_size_120_ = lean_ctor_get(v_m_117_, 0);
v_buckets_121_ = lean_ctor_get(v_m_117_, 1);
v_isSharedCheck_168_ = !lean_is_exclusive(v_m_117_);
if (v_isSharedCheck_168_ == 0)
{
v___x_123_ = v_m_117_;
v_isShared_124_ = v_isSharedCheck_168_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_buckets_121_);
lean_inc(v_size_120_);
lean_dec(v_m_117_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_168_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v_fst_125_; lean_object* v_snd_126_; lean_object* v___x_127_; uint64_t v___x_128_; uint64_t v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; uint64_t v___x_132_; uint64_t v_fold_133_; uint64_t v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; size_t v___x_141_; lean_object* v_bkt_142_; uint8_t v___x_143_; 
v_fst_125_ = lean_ctor_get(v_a_118_, 0);
v_snd_126_ = lean_ctor_get(v_a_118_, 1);
v___x_127_ = lean_array_get_size(v_buckets_121_);
v___x_128_ = l_Lean_ExprStructEq_hash(v_fst_125_);
v___x_129_ = lean_uint64_of_nat(v_snd_126_);
v___x_130_ = lean_uint64_mix_hash(v___x_128_, v___x_129_);
v___x_131_ = 32ULL;
v___x_132_ = lean_uint64_shift_right(v___x_130_, v___x_131_);
v_fold_133_ = lean_uint64_xor(v___x_130_, v___x_132_);
v___x_134_ = 16ULL;
v___x_135_ = lean_uint64_shift_right(v_fold_133_, v___x_134_);
v___x_136_ = lean_uint64_xor(v_fold_133_, v___x_135_);
v___x_137_ = lean_uint64_to_usize(v___x_136_);
v___x_138_ = lean_usize_of_nat(v___x_127_);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_sub(v___x_138_, v___x_139_);
v___x_141_ = lean_usize_land(v___x_137_, v___x_140_);
v_bkt_142_ = lean_array_uget_borrowed(v_buckets_121_, v___x_141_);
v___x_143_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_118_, v_bkt_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; lean_object* v_size_x27_145_; lean_object* v___x_146_; lean_object* v_buckets_x27_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v_size_x27_145_ = lean_nat_add(v_size_120_, v___x_144_);
lean_dec(v_size_120_);
lean_inc(v_bkt_142_);
v___x_146_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_146_, 0, v_a_118_);
lean_ctor_set(v___x_146_, 1, v_b_119_);
lean_ctor_set(v___x_146_, 2, v_bkt_142_);
v_buckets_x27_147_ = lean_array_uset(v_buckets_121_, v___x_141_, v___x_146_);
v___x_148_ = lean_unsigned_to_nat(4u);
v___x_149_ = lean_nat_mul(v_size_x27_145_, v___x_148_);
v___x_150_ = lean_unsigned_to_nat(3u);
v___x_151_ = lean_nat_div(v___x_149_, v___x_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_array_get_size(v_buckets_x27_147_);
v___x_153_ = lean_nat_dec_le(v___x_151_, v___x_152_);
lean_dec(v___x_151_);
if (v___x_153_ == 0)
{
lean_object* v_val_154_; lean_object* v___x_156_; 
v_val_154_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(v_buckets_x27_147_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v_val_154_);
lean_ctor_set(v___x_123_, 0, v_size_x27_145_);
v___x_156_ = v___x_123_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_size_x27_145_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_val_154_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
else
{
lean_object* v___x_159_; 
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v_buckets_x27_147_);
lean_ctor_set(v___x_123_, 0, v_size_x27_145_);
v___x_159_ = v___x_123_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_size_x27_145_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_buckets_x27_147_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v___x_161_; lean_object* v_buckets_x27_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
lean_inc(v_bkt_142_);
v___x_161_ = lean_box(0);
v_buckets_x27_162_ = lean_array_uset(v_buckets_121_, v___x_141_, v___x_161_);
v___x_163_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_118_, v_b_119_, v_bkt_142_);
v___x_164_ = lean_array_uset(v_buckets_x27_162_, v___x_141_, v___x_163_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v___x_164_);
v___x_166_ = v___x_123_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_size_120_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(lean_object* v_msg_169_){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = l_Lean_instInhabitedExpr;
v___x_171_ = lean_panic_fn_borrowed(v___x_170_, v_msg_169_);
return v___x_171_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1(void){
_start:
{
lean_object* v___x_173_; lean_object* v___f_174_; 
v___x_173_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_174_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_174_, 0, v___x_173_);
return v___f_174_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object* v_msg_184_, lean_object* v___y_185_){
_start:
{
lean_object* v___x_186_; lean_object* v___f_187_; lean_object* v___f_188_; lean_object* v___x_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___f_192_; lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_4808__overap_205_; lean_object* v___x_206_; 
v___x_186_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0));
v___f_187_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1, &l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1);
v___f_188_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_188_, 0, v___x_186_);
lean_closure_set(v___f_188_, 1, v___f_187_);
v___x_189_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2));
v___f_190_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3));
v___f_191_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_191_, 0, v___x_189_);
lean_closure_set(v___f_191_, 1, v___f_190_);
v___f_192_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4));
v___f_193_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5));
v___f_194_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6));
v___f_195_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7));
v___f_196_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8));
v___f_197_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9));
v___f_198_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10));
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v___f_192_);
lean_ctor_set(v___x_199_, 1, v___f_193_);
v___x_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___f_194_);
lean_ctor_set(v___x_200_, 2, v___f_195_);
lean_ctor_set(v___x_200_, 3, v___f_196_);
lean_ctor_set(v___x_200_, 4, v___f_197_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___f_198_);
v___x_202_ = l_Lean_MonadStateCacheT_instMonad___redArg(v___f_188_, v___f_191_, v___x_201_);
v___x_203_ = l_Lean_instInhabitedExpr;
v___x_204_ = l_instInhabitedOfMonad___redArg(v___x_202_, v___x_203_);
v___x_4808__overap_205_ = lean_panic_fn_borrowed(v___x_204_, v_msg_184_);
lean_dec(v___x_204_);
v___x_206_ = lean_apply_1(v___x_4808__overap_205_, v___y_185_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(lean_object* v_a_207_, lean_object* v_x_208_){
_start:
{
if (lean_obj_tag(v_x_208_) == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v_key_210_; lean_object* v_value_211_; lean_object* v_tail_212_; lean_object* v_fst_213_; lean_object* v_snd_214_; lean_object* v_fst_215_; lean_object* v_snd_216_; uint8_t v___x_217_; 
v_key_210_ = lean_ctor_get(v_x_208_, 0);
v_value_211_ = lean_ctor_get(v_x_208_, 1);
v_tail_212_ = lean_ctor_get(v_x_208_, 2);
v_fst_213_ = lean_ctor_get(v_key_210_, 0);
v_snd_214_ = lean_ctor_get(v_key_210_, 1);
v_fst_215_ = lean_ctor_get(v_a_207_, 0);
v_snd_216_ = lean_ctor_get(v_a_207_, 1);
v___x_217_ = l_Lean_ExprStructEq_beq(v_fst_213_, v_fst_215_);
if (v___x_217_ == 0)
{
v_x_208_ = v_tail_212_;
goto _start;
}
else
{
uint8_t v___x_219_; 
v___x_219_ = lean_nat_dec_eq(v_snd_214_, v_snd_216_);
if (v___x_219_ == 0)
{
v_x_208_ = v_tail_212_;
goto _start;
}
else
{
lean_object* v___x_221_; 
lean_inc(v_value_211_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v_value_211_);
return v___x_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg___boxed(lean_object* v_a_222_, lean_object* v_x_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_222_, v_x_223_);
lean_dec(v_x_223_);
lean_dec_ref(v_a_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(lean_object* v_m_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_buckets_227_; lean_object* v_fst_228_; lean_object* v_snd_229_; lean_object* v___x_230_; uint64_t v___x_231_; uint64_t v___x_232_; uint64_t v___x_233_; uint64_t v___x_234_; uint64_t v___x_235_; uint64_t v_fold_236_; uint64_t v___x_237_; uint64_t v___x_238_; uint64_t v___x_239_; size_t v___x_240_; size_t v___x_241_; size_t v___x_242_; size_t v___x_243_; size_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_buckets_227_ = lean_ctor_get(v_m_225_, 1);
v_fst_228_ = lean_ctor_get(v_a_226_, 0);
v_snd_229_ = lean_ctor_get(v_a_226_, 1);
v___x_230_ = lean_array_get_size(v_buckets_227_);
v___x_231_ = l_Lean_ExprStructEq_hash(v_fst_228_);
v___x_232_ = lean_uint64_of_nat(v_snd_229_);
v___x_233_ = lean_uint64_mix_hash(v___x_231_, v___x_232_);
v___x_234_ = 32ULL;
v___x_235_ = lean_uint64_shift_right(v___x_233_, v___x_234_);
v_fold_236_ = lean_uint64_xor(v___x_233_, v___x_235_);
v___x_237_ = 16ULL;
v___x_238_ = lean_uint64_shift_right(v_fold_236_, v___x_237_);
v___x_239_ = lean_uint64_xor(v_fold_236_, v___x_238_);
v___x_240_ = lean_uint64_to_usize(v___x_239_);
v___x_241_ = lean_usize_of_nat(v___x_230_);
v___x_242_ = ((size_t)1ULL);
v___x_243_ = lean_usize_sub(v___x_241_, v___x_242_);
v___x_244_ = lean_usize_land(v___x_240_, v___x_243_);
v___x_245_ = lean_array_uget_borrowed(v_buckets_227_, v___x_244_);
v___x_246_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_226_, v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg___boxed(lean_object* v_m_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_m_247_, v_a_248_);
lean_dec_ref(v_a_248_);
lean_dec_ref(v_m_247_);
return v_res_249_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_254_ = lean_unsigned_to_nat(21u);
v___x_255_ = lean_unsigned_to_nat(96u);
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_257_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_258_ = l_mkPanicMessageWithDecl(v___x_257_, v___x_256_, v___x_255_, v___x_254_, v___x_253_);
return v___x_258_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_259_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_260_ = lean_unsigned_to_nat(21u);
v___x_261_ = lean_unsigned_to_nat(97u);
v___x_262_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_263_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_264_ = l_mkPanicMessageWithDecl(v___x_263_, v___x_262_, v___x_261_, v___x_260_, v___x_259_);
return v___x_264_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_265_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_266_ = lean_unsigned_to_nat(21u);
v___x_267_ = lean_unsigned_to_nat(98u);
v___x_268_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_269_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_270_ = l_mkPanicMessageWithDecl(v___x_269_, v___x_268_, v___x_267_, v___x_266_, v___x_265_);
return v___x_270_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_271_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_272_ = lean_unsigned_to_nat(21u);
v___x_273_ = lean_unsigned_to_nat(95u);
v___x_274_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_275_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_276_ = l_mkPanicMessageWithDecl(v___x_275_, v___x_274_, v___x_273_, v___x_272_, v___x_271_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(lean_object* v_start_277_, lean_object* v_stop_278_, lean_object* v_args_279_, lean_object* v_e_280_, lean_object* v_offset_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = l_Lean_Expr_looseBVarRange(v_e_280_);
v___x_284_ = lean_nat_dec_le(v___x_283_, v_offset_281_);
lean_dec(v___x_283_);
if (v___x_284_ == 0)
{
if (lean_obj_tag(v_e_280_) == 5)
{
lean_object* v_fn_285_; lean_object* v_arg_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_fn_285_ = lean_ctor_get(v_e_280_, 0);
lean_inc_ref(v_fn_285_);
v_arg_286_ = lean_ctor_get(v_e_280_, 1);
lean_inc_ref(v_arg_286_);
lean_inc(v_offset_281_);
lean_inc_ref(v_e_280_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v_e_280_);
lean_ctor_set(v___x_287_, 1, v_offset_281_);
v___x_288_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_a_282_, v___x_287_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v___x_289_; lean_object* v_fst_290_; lean_object* v_snd_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_299_; 
v___x_289_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_277_, v_stop_278_, v_args_279_, v_e_280_, v_fn_285_, v_arg_286_, v_offset_281_, v_a_282_);
v_fst_290_ = lean_ctor_get(v___x_289_, 0);
v_snd_291_ = lean_ctor_get(v___x_289_, 1);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_299_ == 0)
{
v___x_293_ = v___x_289_;
v_isShared_294_ = v_isSharedCheck_299_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_snd_291_);
lean_inc(v_fst_290_);
lean_dec(v___x_289_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_299_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_295_; lean_object* v___x_297_; 
lean_inc(v_fst_290_);
v___x_295_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_snd_291_, v___x_287_, v_fst_290_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 1, v___x_295_);
v___x_297_ = v___x_293_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_fst_290_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
else
{
lean_object* v_val_300_; lean_object* v___x_301_; 
lean_dec_ref_known(v___x_287_, 2);
lean_dec_ref(v_arg_286_);
lean_dec_ref_known(v_e_280_, 2);
lean_dec_ref(v_fn_285_);
lean_dec(v_offset_281_);
v_val_300_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_val_300_);
lean_dec_ref_known(v___x_288_, 1);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v_val_300_);
lean_ctor_set(v___x_301_, 1, v_a_282_);
return v___x_301_;
}
}
else
{
lean_object* v___x_302_; 
v___x_302_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_277_, v_stop_278_, v_args_279_, v_e_280_, v_offset_281_, v_a_282_);
return v___x_302_;
}
}
else
{
lean_object* v___x_303_; 
lean_dec(v_offset_281_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_e_280_);
lean_ctor_set(v___x_303_, 1, v_a_282_);
return v___x_303_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_307_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2));
v___x_308_ = lean_unsigned_to_nat(18u);
v___x_309_ = lean_unsigned_to_nat(1906u);
v___x_310_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1));
v___x_311_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0));
v___x_312_ = l_mkPanicMessageWithDecl(v___x_311_, v___x_310_, v___x_309_, v___x_308_, v___x_307_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(lean_object* v_start_313_, lean_object* v_stop_314_, lean_object* v_args_315_, lean_object* v_e_316_, lean_object* v_f_317_, lean_object* v_a_318_, lean_object* v_offset_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___x_321_; lean_object* v_fst_322_; lean_object* v_snd_323_; lean_object* v___x_324_; 
lean_inc(v_offset_319_);
v___x_321_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(v_start_313_, v_stop_314_, v_args_315_, v_f_317_, v_offset_319_, v_a_320_);
v_fst_322_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_fst_322_);
v_snd_323_ = lean_ctor_get(v___x_321_, 1);
lean_inc(v_snd_323_);
lean_dec_ref(v___x_321_);
v___x_324_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_313_, v_stop_314_, v_args_315_, v_a_318_, v_offset_319_, v_snd_323_);
if (lean_obj_tag(v_e_316_) == 5)
{
lean_object* v_fst_325_; lean_object* v_snd_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_349_; 
v_fst_325_ = lean_ctor_get(v___x_324_, 0);
v_snd_326_ = lean_ctor_get(v___x_324_, 1);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_349_ == 0)
{
v___x_328_ = v___x_324_;
v_isShared_329_ = v_isSharedCheck_349_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_snd_326_);
lean_inc(v_fst_325_);
lean_dec(v___x_324_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_349_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v_fn_330_; lean_object* v_arg_331_; size_t v___x_332_; size_t v___x_333_; uint8_t v___x_334_; 
v_fn_330_ = lean_ctor_get(v_e_316_, 0);
v_arg_331_ = lean_ctor_get(v_e_316_, 1);
v___x_332_ = lean_ptr_addr(v_fn_330_);
v___x_333_ = lean_ptr_addr(v_fst_322_);
v___x_334_ = lean_usize_dec_eq(v___x_332_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_337_; 
lean_dec_ref_known(v_e_316_, 2);
v___x_335_ = l_Lean_Expr_app___override(v_fst_322_, v_fst_325_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_335_);
v___x_337_ = v___x_328_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_snd_326_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
else
{
size_t v___x_339_; size_t v___x_340_; uint8_t v___x_341_; 
v___x_339_ = lean_ptr_addr(v_arg_331_);
v___x_340_ = lean_ptr_addr(v_fst_325_);
v___x_341_ = lean_usize_dec_eq(v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_344_; 
lean_dec_ref_known(v_e_316_, 2);
v___x_342_ = l_Lean_Expr_app___override(v_fst_322_, v_fst_325_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_342_);
v___x_344_ = v___x_328_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_snd_326_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
else
{
lean_object* v___x_347_; 
lean_dec(v_fst_325_);
lean_dec(v_fst_322_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v_e_316_);
v___x_347_ = v___x_328_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_e_316_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_snd_326_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
else
{
lean_object* v_snd_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_359_; 
lean_dec(v_fst_322_);
lean_dec_ref(v_e_316_);
v_snd_350_ = lean_ctor_get(v___x_324_, 1);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; 
v_unused_360_ = lean_ctor_get(v___x_324_, 0);
lean_dec(v_unused_360_);
v___x_352_ = v___x_324_;
v_isShared_353_ = v_isSharedCheck_359_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_snd_350_);
lean_dec(v___x_324_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_359_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_354_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3);
v___x_355_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(v___x_354_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_355_);
v___x_357_ = v___x_352_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_snd_350_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_361_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_362_ = lean_unsigned_to_nat(21u);
v___x_363_ = lean_unsigned_to_nat(99u);
v___x_364_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_365_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_366_ = l_mkPanicMessageWithDecl(v___x_365_, v___x_364_, v___x_363_, v___x_362_, v___x_361_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object* v_start_367_, lean_object* v_stop_368_, lean_object* v_args_369_, lean_object* v_e_370_, lean_object* v_offset_371_, lean_object* v_a_372_){
_start:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = l_Lean_Expr_looseBVarRange(v_e_370_);
v___x_374_ = lean_nat_dec_le(v___x_373_, v_offset_371_);
lean_dec(v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v_fst_377_; lean_object* v_snd_378_; lean_object* v___y_382_; lean_object* v___x_385_; 
lean_inc(v_offset_371_);
lean_inc_ref(v_e_370_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v_e_370_);
lean_ctor_set(v___x_375_, 1, v_offset_371_);
v___x_385_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_a_372_, v___x_375_);
if (lean_obj_tag(v___x_385_) == 0)
{
switch(lean_obj_tag(v_e_370_))
{
case 0:
{
lean_object* v_deBruijnIndex_386_; lean_object* v___x_387_; 
v_deBruijnIndex_386_ = lean_ctor_get(v_e_370_, 0);
lean_inc(v_deBruijnIndex_386_);
lean_dec_ref_known(v_e_370_, 1);
v___x_387_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(v_start_367_, v_stop_368_, v_args_369_, v_deBruijnIndex_386_, v_offset_371_);
lean_dec(v_offset_371_);
lean_dec(v_deBruijnIndex_386_);
v_fst_377_ = v___x_387_;
v_snd_378_ = v_a_372_;
goto v___jp_376_;
}
case 1:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref_known(v_e_370_, 1);
lean_dec(v_offset_371_);
v___x_388_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3);
v___x_389_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_388_, v_a_372_);
v___y_382_ = v___x_389_;
goto v___jp_381_;
}
case 2:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
lean_dec_ref_known(v_e_370_, 1);
lean_dec(v_offset_371_);
v___x_390_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4);
v___x_391_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_390_, v_a_372_);
v___y_382_ = v___x_391_;
goto v___jp_381_;
}
case 3:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref_known(v_e_370_, 1);
lean_dec(v_offset_371_);
v___x_392_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5);
v___x_393_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_392_, v_a_372_);
v___y_382_ = v___x_393_;
goto v___jp_381_;
}
case 4:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec_ref_known(v_e_370_, 2);
lean_dec(v_offset_371_);
v___x_394_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6);
v___x_395_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_394_, v_a_372_);
v___y_382_ = v___x_395_;
goto v___jp_381_;
}
case 5:
{
lean_object* v_fn_396_; lean_object* v_arg_397_; lean_object* v_head_398_; uint8_t v___x_399_; 
v_fn_396_ = lean_ctor_get(v_e_370_, 0);
v_arg_397_ = lean_ctor_get(v_e_370_, 1);
v_head_398_ = l_Lean_Expr_getAppFn(v_e_370_);
v___x_399_ = l_Lean_Expr_isBVar(v_head_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; 
lean_inc_ref(v_arg_397_);
lean_inc_ref(v_fn_396_);
lean_dec_ref(v_head_398_);
v___x_400_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_367_, v_stop_368_, v_args_369_, v_e_370_, v_fn_396_, v_arg_397_, v_offset_371_, v_a_372_);
v___y_382_ = v___x_400_;
goto v___jp_381_;
}
else
{
lean_object* v___x_401_; lean_object* v_fst_402_; lean_object* v_snd_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; size_t v_sz_407_; size_t v___x_408_; lean_object* v___x_409_; lean_object* v_fst_410_; lean_object* v_snd_411_; lean_object* v___x_412_; 
lean_inc(v_offset_371_);
v___x_401_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_head_398_, v_offset_371_, v_a_372_);
v_fst_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_fst_402_);
v_snd_403_ = lean_ctor_get(v___x_401_, 1);
lean_inc(v_snd_403_);
lean_dec_ref(v___x_401_);
v___x_404_ = l_Lean_Expr_getAppNumArgs(v_e_370_);
v___x_405_ = lean_mk_empty_array_with_capacity(v___x_404_);
lean_dec(v___x_404_);
v___x_406_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_370_, v___x_405_);
v_sz_407_ = lean_array_size(v___x_406_);
v___x_408_ = ((size_t)0ULL);
v___x_409_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_367_, v_stop_368_, v_args_369_, v_offset_371_, v_sz_407_, v___x_408_, v___x_406_, v_snd_403_);
v_fst_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_fst_410_);
v_snd_411_ = lean_ctor_get(v___x_409_, 1);
lean_inc(v_snd_411_);
lean_dec_ref(v___x_409_);
v___x_412_ = l_Lean_Expr_betaRev(v_fst_402_, v_fst_410_, v___x_374_, v___x_374_);
lean_dec(v_fst_410_);
v_fst_377_ = v___x_412_;
v_snd_378_ = v_snd_411_;
goto v___jp_376_;
}
}
case 6:
{
lean_object* v_binderName_413_; lean_object* v_binderType_414_; lean_object* v_body_415_; uint8_t v_binderInfo_416_; lean_object* v___x_417_; lean_object* v_fst_418_; lean_object* v_snd_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v_fst_423_; lean_object* v_snd_424_; size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v_binderName_413_ = lean_ctor_get(v_e_370_, 0);
v_binderType_414_ = lean_ctor_get(v_e_370_, 1);
v_body_415_ = lean_ctor_get(v_e_370_, 2);
v_binderInfo_416_ = lean_ctor_get_uint8(v_e_370_, sizeof(void*)*3 + 8);
lean_inc(v_offset_371_);
lean_inc_ref(v_binderType_414_);
v___x_417_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_binderType_414_, v_offset_371_, v_a_372_);
v_fst_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_fst_418_);
v_snd_419_ = lean_ctor_get(v___x_417_, 1);
lean_inc(v_snd_419_);
lean_dec_ref(v___x_417_);
v___x_420_ = lean_unsigned_to_nat(1u);
v___x_421_ = lean_nat_add(v_offset_371_, v___x_420_);
lean_dec(v_offset_371_);
lean_inc_ref(v_body_415_);
v___x_422_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_body_415_, v___x_421_, v_snd_419_);
v_fst_423_ = lean_ctor_get(v___x_422_, 0);
lean_inc(v_fst_423_);
v_snd_424_ = lean_ctor_get(v___x_422_, 1);
lean_inc(v_snd_424_);
lean_dec_ref(v___x_422_);
v___x_425_ = lean_ptr_addr(v_binderType_414_);
v___x_426_ = lean_ptr_addr(v_fst_418_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
lean_inc(v_binderName_413_);
lean_dec_ref_known(v_e_370_, 3);
v___x_428_ = l_Lean_Expr_lam___override(v_binderName_413_, v_fst_418_, v_fst_423_, v_binderInfo_416_);
v_fst_377_ = v___x_428_;
v_snd_378_ = v_snd_424_;
goto v___jp_376_;
}
else
{
size_t v___x_429_; size_t v___x_430_; uint8_t v___x_431_; 
v___x_429_ = lean_ptr_addr(v_body_415_);
v___x_430_ = lean_ptr_addr(v_fst_423_);
v___x_431_ = lean_usize_dec_eq(v___x_429_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
lean_inc(v_binderName_413_);
lean_dec_ref_known(v_e_370_, 3);
v___x_432_ = l_Lean_Expr_lam___override(v_binderName_413_, v_fst_418_, v_fst_423_, v_binderInfo_416_);
v_fst_377_ = v___x_432_;
v_snd_378_ = v_snd_424_;
goto v___jp_376_;
}
else
{
uint8_t v___x_433_; 
v___x_433_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_416_, v_binderInfo_416_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
lean_inc(v_binderName_413_);
lean_dec_ref_known(v_e_370_, 3);
v___x_434_ = l_Lean_Expr_lam___override(v_binderName_413_, v_fst_418_, v_fst_423_, v_binderInfo_416_);
v_fst_377_ = v___x_434_;
v_snd_378_ = v_snd_424_;
goto v___jp_376_;
}
else
{
lean_dec(v_fst_423_);
lean_dec(v_fst_418_);
v_fst_377_ = v_e_370_;
v_snd_378_ = v_snd_424_;
goto v___jp_376_;
}
}
}
}
case 7:
{
lean_object* v_binderName_435_; lean_object* v_binderType_436_; lean_object* v_body_437_; uint8_t v_binderInfo_438_; lean_object* v___x_439_; lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_fst_445_; lean_object* v_snd_446_; size_t v___x_447_; size_t v___x_448_; uint8_t v___x_449_; 
v_binderName_435_ = lean_ctor_get(v_e_370_, 0);
v_binderType_436_ = lean_ctor_get(v_e_370_, 1);
v_body_437_ = lean_ctor_get(v_e_370_, 2);
v_binderInfo_438_ = lean_ctor_get_uint8(v_e_370_, sizeof(void*)*3 + 8);
lean_inc(v_offset_371_);
lean_inc_ref(v_binderType_436_);
v___x_439_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_binderType_436_, v_offset_371_, v_a_372_);
v_fst_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v___x_439_, 1);
lean_inc(v_snd_441_);
lean_dec_ref(v___x_439_);
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_nat_add(v_offset_371_, v___x_442_);
lean_dec(v_offset_371_);
lean_inc_ref(v_body_437_);
v___x_444_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_body_437_, v___x_443_, v_snd_441_);
v_fst_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_fst_445_);
v_snd_446_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_snd_446_);
lean_dec_ref(v___x_444_);
v___x_447_ = lean_ptr_addr(v_binderType_436_);
v___x_448_ = lean_ptr_addr(v_fst_440_);
v___x_449_ = lean_usize_dec_eq(v___x_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; 
lean_inc(v_binderName_435_);
lean_dec_ref_known(v_e_370_, 3);
v___x_450_ = l_Lean_Expr_forallE___override(v_binderName_435_, v_fst_440_, v_fst_445_, v_binderInfo_438_);
v_fst_377_ = v___x_450_;
v_snd_378_ = v_snd_446_;
goto v___jp_376_;
}
else
{
size_t v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v___x_451_ = lean_ptr_addr(v_body_437_);
v___x_452_ = lean_ptr_addr(v_fst_445_);
v___x_453_ = lean_usize_dec_eq(v___x_451_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_inc(v_binderName_435_);
lean_dec_ref_known(v_e_370_, 3);
v___x_454_ = l_Lean_Expr_forallE___override(v_binderName_435_, v_fst_440_, v_fst_445_, v_binderInfo_438_);
v_fst_377_ = v___x_454_;
v_snd_378_ = v_snd_446_;
goto v___jp_376_;
}
else
{
uint8_t v___x_455_; 
v___x_455_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_438_, v_binderInfo_438_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; 
lean_inc(v_binderName_435_);
lean_dec_ref_known(v_e_370_, 3);
v___x_456_ = l_Lean_Expr_forallE___override(v_binderName_435_, v_fst_440_, v_fst_445_, v_binderInfo_438_);
v_fst_377_ = v___x_456_;
v_snd_378_ = v_snd_446_;
goto v___jp_376_;
}
else
{
lean_dec(v_fst_445_);
lean_dec(v_fst_440_);
v_fst_377_ = v_e_370_;
v_snd_378_ = v_snd_446_;
goto v___jp_376_;
}
}
}
}
case 8:
{
lean_object* v_declName_457_; lean_object* v_type_458_; lean_object* v_value_459_; lean_object* v_body_460_; uint8_t v_nondep_461_; lean_object* v___x_462_; lean_object* v_fst_463_; lean_object* v_snd_464_; lean_object* v___x_465_; lean_object* v_fst_466_; lean_object* v_snd_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v_fst_471_; lean_object* v_snd_472_; size_t v___x_473_; size_t v___x_474_; uint8_t v___x_475_; 
v_declName_457_ = lean_ctor_get(v_e_370_, 0);
v_type_458_ = lean_ctor_get(v_e_370_, 1);
v_value_459_ = lean_ctor_get(v_e_370_, 2);
v_body_460_ = lean_ctor_get(v_e_370_, 3);
v_nondep_461_ = lean_ctor_get_uint8(v_e_370_, sizeof(void*)*4 + 8);
lean_inc_n(v_offset_371_, 2);
lean_inc_ref(v_type_458_);
v___x_462_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_type_458_, v_offset_371_, v_a_372_);
v_fst_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_fst_463_);
v_snd_464_ = lean_ctor_get(v___x_462_, 1);
lean_inc(v_snd_464_);
lean_dec_ref(v___x_462_);
lean_inc_ref(v_value_459_);
v___x_465_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_value_459_, v_offset_371_, v_snd_464_);
v_fst_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_fst_466_);
v_snd_467_ = lean_ctor_get(v___x_465_, 1);
lean_inc(v_snd_467_);
lean_dec_ref(v___x_465_);
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = lean_nat_add(v_offset_371_, v___x_468_);
lean_dec(v_offset_371_);
lean_inc_ref(v_body_460_);
v___x_470_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_body_460_, v___x_469_, v_snd_467_);
v_fst_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_fst_471_);
v_snd_472_ = lean_ctor_get(v___x_470_, 1);
lean_inc(v_snd_472_);
lean_dec_ref(v___x_470_);
v___x_473_ = lean_ptr_addr(v_type_458_);
v___x_474_ = lean_ptr_addr(v_fst_463_);
v___x_475_ = lean_usize_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
lean_inc(v_declName_457_);
lean_dec_ref_known(v_e_370_, 4);
v___x_476_ = l_Lean_Expr_letE___override(v_declName_457_, v_fst_463_, v_fst_466_, v_fst_471_, v_nondep_461_);
v_fst_377_ = v___x_476_;
v_snd_378_ = v_snd_472_;
goto v___jp_376_;
}
else
{
size_t v___x_477_; size_t v___x_478_; uint8_t v___x_479_; 
v___x_477_ = lean_ptr_addr(v_value_459_);
v___x_478_ = lean_ptr_addr(v_fst_466_);
v___x_479_ = lean_usize_dec_eq(v___x_477_, v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
lean_inc(v_declName_457_);
lean_dec_ref_known(v_e_370_, 4);
v___x_480_ = l_Lean_Expr_letE___override(v_declName_457_, v_fst_463_, v_fst_466_, v_fst_471_, v_nondep_461_);
v_fst_377_ = v___x_480_;
v_snd_378_ = v_snd_472_;
goto v___jp_376_;
}
else
{
size_t v___x_481_; size_t v___x_482_; uint8_t v___x_483_; 
v___x_481_ = lean_ptr_addr(v_body_460_);
v___x_482_ = lean_ptr_addr(v_fst_471_);
v___x_483_ = lean_usize_dec_eq(v___x_481_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
lean_inc(v_declName_457_);
lean_dec_ref_known(v_e_370_, 4);
v___x_484_ = l_Lean_Expr_letE___override(v_declName_457_, v_fst_463_, v_fst_466_, v_fst_471_, v_nondep_461_);
v_fst_377_ = v___x_484_;
v_snd_378_ = v_snd_472_;
goto v___jp_376_;
}
else
{
lean_dec(v_fst_471_);
lean_dec(v_fst_466_);
lean_dec(v_fst_463_);
v_fst_377_ = v_e_370_;
v_snd_378_ = v_snd_472_;
goto v___jp_376_;
}
}
}
}
case 9:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec_ref_known(v_e_370_, 1);
lean_dec(v_offset_371_);
v___x_485_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7);
v___x_486_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_485_, v_a_372_);
v___y_382_ = v___x_486_;
goto v___jp_381_;
}
case 10:
{
lean_object* v_data_487_; lean_object* v_expr_488_; lean_object* v___x_489_; lean_object* v_fst_490_; lean_object* v_snd_491_; size_t v___x_492_; size_t v___x_493_; uint8_t v___x_494_; 
v_data_487_ = lean_ctor_get(v_e_370_, 0);
v_expr_488_ = lean_ctor_get(v_e_370_, 1);
lean_inc_ref(v_expr_488_);
v___x_489_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_expr_488_, v_offset_371_, v_a_372_);
v_fst_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_fst_490_);
v_snd_491_ = lean_ctor_get(v___x_489_, 1);
lean_inc(v_snd_491_);
lean_dec_ref(v___x_489_);
v___x_492_ = lean_ptr_addr(v_expr_488_);
v___x_493_ = lean_ptr_addr(v_fst_490_);
v___x_494_ = lean_usize_dec_eq(v___x_492_, v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; 
lean_inc(v_data_487_);
lean_dec_ref_known(v_e_370_, 2);
v___x_495_ = l_Lean_Expr_mdata___override(v_data_487_, v_fst_490_);
v_fst_377_ = v___x_495_;
v_snd_378_ = v_snd_491_;
goto v___jp_376_;
}
else
{
lean_dec(v_fst_490_);
v_fst_377_ = v_e_370_;
v_snd_378_ = v_snd_491_;
goto v___jp_376_;
}
}
default: 
{
lean_object* v_typeName_496_; lean_object* v_idx_497_; lean_object* v_struct_498_; lean_object* v___x_499_; lean_object* v_fst_500_; lean_object* v_snd_501_; size_t v___x_502_; size_t v___x_503_; uint8_t v___x_504_; 
v_typeName_496_ = lean_ctor_get(v_e_370_, 0);
v_idx_497_ = lean_ctor_get(v_e_370_, 1);
v_struct_498_ = lean_ctor_get(v_e_370_, 2);
lean_inc_ref(v_struct_498_);
v___x_499_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_367_, v_stop_368_, v_args_369_, v_struct_498_, v_offset_371_, v_a_372_);
v_fst_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_fst_500_);
v_snd_501_ = lean_ctor_get(v___x_499_, 1);
lean_inc(v_snd_501_);
lean_dec_ref(v___x_499_);
v___x_502_ = lean_ptr_addr(v_struct_498_);
v___x_503_ = lean_ptr_addr(v_fst_500_);
v___x_504_ = lean_usize_dec_eq(v___x_502_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_inc(v_idx_497_);
lean_inc(v_typeName_496_);
lean_dec_ref_known(v_e_370_, 3);
v___x_505_ = l_Lean_Expr_proj___override(v_typeName_496_, v_idx_497_, v_fst_500_);
v_fst_377_ = v___x_505_;
v_snd_378_ = v_snd_501_;
goto v___jp_376_;
}
else
{
lean_dec(v_fst_500_);
v_fst_377_ = v_e_370_;
v_snd_378_ = v_snd_501_;
goto v___jp_376_;
}
}
}
}
else
{
lean_object* v_val_506_; lean_object* v___x_507_; 
lean_dec_ref_known(v___x_375_, 2);
lean_dec(v_offset_371_);
lean_dec_ref(v_e_370_);
v_val_506_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_val_506_);
lean_dec_ref_known(v___x_385_, 1);
v___x_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_507_, 0, v_val_506_);
lean_ctor_set(v___x_507_, 1, v_a_372_);
return v___x_507_;
}
v___jp_376_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_inc_ref(v_fst_377_);
v___x_379_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_snd_378_, v___x_375_, v_fst_377_);
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v_fst_377_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
return v___x_380_;
}
v___jp_381_:
{
lean_object* v_fst_383_; lean_object* v_snd_384_; 
v_fst_383_ = lean_ctor_get(v___y_382_, 0);
lean_inc(v_fst_383_);
v_snd_384_ = lean_ctor_get(v___y_382_, 1);
lean_inc(v_snd_384_);
lean_dec_ref(v___y_382_);
v_fst_377_ = v_fst_383_;
v_snd_378_ = v_snd_384_;
goto v___jp_376_;
}
}
else
{
lean_object* v___x_508_; 
lean_dec(v_offset_371_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v_e_370_);
lean_ctor_set(v___x_508_, 1, v_a_372_);
return v___x_508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object* v_start_509_, lean_object* v_stop_510_, lean_object* v_args_511_, lean_object* v_offset_512_, size_t v_sz_513_, size_t v_i_514_, lean_object* v_bs_515_, lean_object* v___y_516_){
_start:
{
uint8_t v___x_517_; 
v___x_517_ = lean_usize_dec_lt(v_i_514_, v_sz_513_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
lean_dec(v_offset_512_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v_bs_515_);
lean_ctor_set(v___x_518_, 1, v___y_516_);
return v___x_518_;
}
else
{
lean_object* v_v_519_; lean_object* v___x_520_; lean_object* v_fst_521_; lean_object* v_snd_522_; lean_object* v___x_523_; lean_object* v_bs_x27_524_; size_t v___x_525_; size_t v___x_526_; lean_object* v___x_527_; 
v_v_519_ = lean_array_uget_borrowed(v_bs_515_, v_i_514_);
lean_inc(v_offset_512_);
lean_inc(v_v_519_);
v___x_520_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_509_, v_stop_510_, v_args_511_, v_v_519_, v_offset_512_, v___y_516_);
v_fst_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_fst_521_);
v_snd_522_ = lean_ctor_get(v___x_520_, 1);
lean_inc(v_snd_522_);
lean_dec_ref(v___x_520_);
v___x_523_ = lean_unsigned_to_nat(0u);
v_bs_x27_524_ = lean_array_uset(v_bs_515_, v_i_514_, v___x_523_);
v___x_525_ = ((size_t)1ULL);
v___x_526_ = lean_usize_add(v_i_514_, v___x_525_);
v___x_527_ = lean_array_uset(v_bs_x27_524_, v_i_514_, v_fst_521_);
v_i_514_ = v___x_526_;
v_bs_515_ = v___x_527_;
v___y_516_ = v_snd_522_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object* v_start_529_, lean_object* v_stop_530_, lean_object* v_args_531_, lean_object* v_offset_532_, lean_object* v_sz_533_, lean_object* v_i_534_, lean_object* v_bs_535_, lean_object* v___y_536_){
_start:
{
size_t v_sz_boxed_537_; size_t v_i_boxed_538_; lean_object* v_res_539_; 
v_sz_boxed_537_ = lean_unbox_usize(v_sz_533_);
lean_dec(v_sz_533_);
v_i_boxed_538_ = lean_unbox_usize(v_i_534_);
lean_dec(v_i_534_);
v_res_539_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_529_, v_stop_530_, v_args_531_, v_offset_532_, v_sz_boxed_537_, v_i_boxed_538_, v_bs_535_, v___y_536_);
lean_dec_ref(v_args_531_);
lean_dec(v_stop_530_);
lean_dec(v_start_529_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta___boxed(lean_object* v_start_540_, lean_object* v_stop_541_, lean_object* v_args_542_, lean_object* v_e_543_, lean_object* v_offset_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(v_start_540_, v_stop_541_, v_args_542_, v_e_543_, v_offset_544_, v_a_545_);
lean_dec_ref(v_args_542_);
lean_dec(v_stop_541_);
lean_dec(v_start_540_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___boxed(lean_object* v_start_547_, lean_object* v_stop_548_, lean_object* v_args_549_, lean_object* v_e_550_, lean_object* v_f_551_, lean_object* v_a_552_, lean_object* v_offset_553_, lean_object* v_a_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_547_, v_stop_548_, v_args_549_, v_e_550_, v_f_551_, v_a_552_, v_offset_553_, v_a_554_);
lean_dec_ref(v_args_549_);
lean_dec(v_stop_548_);
lean_dec(v_start_547_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object* v_start_556_, lean_object* v_stop_557_, lean_object* v_args_558_, lean_object* v_e_559_, lean_object* v_offset_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_556_, v_stop_557_, v_args_558_, v_e_559_, v_offset_560_, v_a_561_);
lean_dec_ref(v_args_558_);
lean_dec(v_stop_557_);
lean_dec(v_start_556_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(lean_object* v_00_u03b2_563_, lean_object* v_m_564_, lean_object* v_a_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_m_564_, v_a_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___boxed(lean_object* v_00_u03b2_567_, lean_object* v_m_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(v_00_u03b2_567_, v_m_568_, v_a_569_);
lean_dec_ref(v_a_569_);
lean_dec_ref(v_m_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1(lean_object* v_00_u03b2_571_, lean_object* v_m_572_, lean_object* v_a_573_, lean_object* v_b_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_m_572_, v_a_573_, v_b_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(lean_object* v_00_u03b2_576_, lean_object* v_a_577_, lean_object* v_x_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_577_, v_x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___boxed(lean_object* v_00_u03b2_580_, lean_object* v_a_581_, lean_object* v_x_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(v_00_u03b2_580_, v_a_581_, v_x_582_);
lean_dec(v_x_582_);
lean_dec_ref(v_a_581_);
return v_res_583_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(lean_object* v_00_u03b2_584_, lean_object* v_a_585_, lean_object* v_x_586_){
_start:
{
uint8_t v___x_587_; 
v___x_587_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_585_, v_x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___boxed(lean_object* v_00_u03b2_588_, lean_object* v_a_589_, lean_object* v_x_590_){
_start:
{
uint8_t v_res_591_; lean_object* v_r_592_; 
v_res_591_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(v_00_u03b2_588_, v_a_589_, v_x_590_);
lean_dec(v_x_590_);
lean_dec_ref(v_a_589_);
v_r_592_ = lean_box(v_res_591_);
return v_r_592_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3(lean_object* v_00_u03b2_593_, lean_object* v_data_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(v_data_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4(lean_object* v_00_u03b2_596_, lean_object* v_a_597_, lean_object* v_b_598_, lean_object* v_x_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_597_, v_b_598_, v_x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_601_, lean_object* v_i_602_, lean_object* v_source_603_, lean_object* v_target_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(v_i_602_, v_source_603_, v_target_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10(lean_object* v_00_u03b2_606_, lean_object* v_x_607_, lean_object* v_x_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(v_x_607_, v_x_608_);
return v___x_609_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object* v_as_610_, size_t v_i_611_, size_t v_stop_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = lean_usize_dec_eq(v_i_611_, v_stop_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_614_ = lean_array_uget_borrowed(v_as_610_, v_i_611_);
v___x_615_ = l_Lean_Expr_consumeMData(v___x_614_);
v___x_616_ = l_Lean_Expr_isLambda(v___x_615_);
lean_dec_ref(v___x_615_);
if (v___x_616_ == 0)
{
size_t v___x_617_; size_t v___x_618_; 
v___x_617_ = ((size_t)1ULL);
v___x_618_ = lean_usize_add(v_i_611_, v___x_617_);
v_i_611_ = v___x_618_;
goto _start;
}
else
{
return v___x_616_;
}
}
else
{
uint8_t v___x_620_; 
v___x_620_ = 0;
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0___boxed(lean_object* v_as_621_, lean_object* v_i_622_, lean_object* v_stop_623_){
_start:
{
size_t v_i_boxed_624_; size_t v_stop_boxed_625_; uint8_t v_res_626_; lean_object* v_r_627_; 
v_i_boxed_624_ = lean_unbox_usize(v_i_622_);
lean_dec(v_i_622_);
v_stop_boxed_625_ = lean_unbox_usize(v_stop_623_);
lean_dec(v_stop_623_);
v_res_626_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v_as_621_, v_i_boxed_624_, v_stop_boxed_625_);
lean_dec_ref(v_as_621_);
v_r_627_ = lean_box(v_res_626_);
return v_r_627_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__2(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_630_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__1));
v___x_631_ = lean_unsigned_to_nat(4u);
v___x_632_ = lean_unsigned_to_nat(39u);
v___x_633_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__0));
v___x_634_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_635_ = l_mkPanicMessageWithDecl(v___x_634_, v___x_633_, v___x_632_, v___x_631_, v___x_630_);
return v___x_635_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__3(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_box(0);
v___x_637_ = lean_unsigned_to_nat(16u);
v___x_638_ = lean_mk_array(v___x_637_, v___x_636_);
return v___x_638_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__4(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_639_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__3, &l_Lean_Expr_instantiateBetaRevRange___closed__3_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__3);
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___x_639_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object* v_e_642_, lean_object* v_start_643_, lean_object* v_stop_644_, lean_object* v_args_645_){
_start:
{
uint8_t v___x_646_; 
v___x_646_ = l_Lean_Expr_hasLooseBVars(v_e_642_);
if (v___x_646_ == 0)
{
return v_e_642_;
}
else
{
uint8_t v___x_647_; 
v___x_647_ = lean_nat_dec_lt(v_start_643_, v_stop_644_);
if (v___x_647_ == 0)
{
return v_e_642_;
}
else
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = lean_array_get_size(v_args_645_);
v___x_649_ = lean_nat_dec_le(v_stop_644_, v___x_648_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; lean_object* v___x_651_; 
lean_dec_ref(v_e_642_);
v___x_650_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__2, &l_Lean_Expr_instantiateBetaRevRange___closed__2_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__2);
v___x_651_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(v___x_650_);
return v___x_651_;
}
else
{
if (v___x_647_ == 0)
{
lean_object* v___x_652_; 
v___x_652_ = lean_expr_instantiate_rev_range(v_e_642_, v_start_643_, v_stop_644_, v_args_645_);
lean_dec_ref(v_e_642_);
return v___x_652_;
}
else
{
size_t v___x_653_; size_t v___x_654_; uint8_t v___x_655_; 
v___x_653_ = lean_usize_of_nat(v_start_643_);
v___x_654_ = lean_usize_of_nat(v_stop_644_);
v___x_655_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v_args_645_, v___x_653_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_expr_instantiate_rev_range(v_e_642_, v_start_643_, v_stop_644_, v_args_645_);
lean_dec_ref(v_e_642_);
return v___x_656_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v_fst_660_; 
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__4, &l_Lean_Expr_instantiateBetaRevRange___closed__4_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__4);
v___x_659_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_643_, v_stop_644_, v_args_645_, v_e_642_, v___x_657_, v___x_658_);
v_fst_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_fst_660_);
lean_dec_ref(v___x_659_);
return v_fst_660_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object* v_e_661_, lean_object* v_start_662_, lean_object* v_stop_663_, lean_object* v_args_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Expr_instantiateBetaRevRange(v_e_661_, v_start_662_, v_stop_663_, v_args_664_);
lean_dec_ref(v_args_664_);
lean_dec(v_stop_663_);
lean_dec(v_start_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object* v_msgData_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v___x_672_; lean_object* v_env_673_; uint8_t v___x_674_; lean_object* v_env_675_; lean_object* v___x_676_; lean_object* v_toCold_677_; lean_object* v_mctx_678_; lean_object* v_lctx_679_; lean_object* v_options_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_672_ = lean_st_ref_get(v___y_670_);
v_env_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc_ref(v_env_673_);
lean_dec(v___x_672_);
v___x_674_ = 0;
v_env_675_ = l_Lean_Environment_setRecordingDeps(v_env_673_, v___x_674_);
v___x_676_ = lean_st_ref_get(v___y_668_);
v_toCold_677_ = lean_ctor_get(v___y_669_, 0);
v_mctx_678_ = lean_ctor_get(v___x_676_, 0);
lean_inc_ref(v_mctx_678_);
lean_dec(v___x_676_);
v_lctx_679_ = lean_ctor_get(v___y_667_, 2);
v_options_680_ = lean_ctor_get(v_toCold_677_, 2);
lean_inc_ref(v_options_680_);
lean_inc_ref(v_lctx_679_);
v___x_681_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_681_, 0, v_env_675_);
lean_ctor_set(v___x_681_, 1, v_mctx_678_);
lean_ctor_set(v___x_681_, 2, v_lctx_679_);
lean_ctor_set(v___x_681_, 3, v_options_680_);
v___x_682_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
lean_ctor_set(v___x_682_, 1, v_msgData_666_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object* v_msgData_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msgData_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object* v_msg_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_ref_697_; lean_object* v___x_698_; lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_707_; 
v_ref_697_ = lean_ctor_get(v___y_694_, 2);
v___x_698_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msg_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_707_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_707_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_707_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_705_; 
lean_inc(v_ref_697_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_ref_697_);
lean_ctor_set(v___x_703_, 1, v_a_699_);
if (v_isShared_702_ == 0)
{
lean_ctor_set_tag(v___x_701_, 1);
lean_ctor_set(v___x_701_, 0, v___x_703_);
v___x_705_ = v___x_701_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object* v_msg_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
return v_res_714_;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = ((lean_object*)(l_Lean_Meta_throwFunctionExpected___redArg___closed__0));
v___x_717_ = l_Lean_stringToMessageData(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object* v_f_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_724_ = lean_obj_once(&l_Lean_Meta_throwFunctionExpected___redArg___closed__1, &l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1);
v___x_725_ = l_Lean_indentExpr(v_f_718_);
v___x_726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_726_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object* v_f_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object* v_00_u03b1_735_, lean_object* v_f_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object* v_00_u03b1_743_, lean_object* v_f_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_Meta_throwFunctionExpected(v_00_u03b1_743_, v_f_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object* v_00_u03b1_751_, lean_object* v_msg_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object* v_00_u03b1_759_, lean_object* v_msg_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(v_00_u03b1_759_, v_msg_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object* v_upperBound_767_, lean_object* v_args_768_, lean_object* v_f_769_, lean_object* v_a_770_, lean_object* v_b_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_a_778_; uint8_t v___x_782_; 
v___x_782_ = lean_nat_dec_lt(v_a_770_, v_upperBound_767_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; 
lean_dec(v_a_770_);
lean_dec_ref(v_f_769_);
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v_b_771_);
return v___x_783_;
}
else
{
lean_object* v_fst_784_; 
v_fst_784_ = lean_ctor_get(v_b_771_, 0);
lean_inc(v_fst_784_);
if (lean_obj_tag(v_fst_784_) == 7)
{
lean_object* v_snd_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_793_; 
v_snd_785_ = lean_ctor_get(v_b_771_, 1);
v_isSharedCheck_793_ = !lean_is_exclusive(v_b_771_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_b_771_, 0);
lean_dec(v_unused_794_);
v___x_787_ = v_b_771_;
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_snd_785_);
lean_dec(v_b_771_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v_body_789_; lean_object* v___x_791_; 
v_body_789_ = lean_ctor_get(v_fst_784_, 2);
lean_inc_ref(v_body_789_);
lean_dec_ref_known(v_fst_784_, 3);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v_body_789_);
v___x_791_ = v___x_787_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_body_789_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_snd_785_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v_a_778_ = v___x_791_;
goto v___jp_777_;
}
}
}
else
{
lean_object* v_snd_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_830_; 
v_snd_795_ = lean_ctor_get(v_b_771_, 1);
v_isSharedCheck_830_ = !lean_is_exclusive(v_b_771_);
if (v_isSharedCheck_830_ == 0)
{
lean_object* v_unused_831_; 
v_unused_831_ = lean_ctor_get(v_b_771_, 0);
lean_dec(v_unused_831_);
v___x_797_ = v_b_771_;
v_isShared_798_ = v_isSharedCheck_830_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_snd_795_);
lean_dec(v_b_771_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_830_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_784_);
v___x_800_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_784_, v_snd_795_, v_a_770_, v_args_768_);
lean_inc(v___y_775_);
lean_inc_ref(v___y_774_);
lean_inc(v___y_773_);
lean_inc_ref(v___y_772_);
v___x_801_ = lean_whnf(v___x_800_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
if (lean_obj_tag(v_a_802_) == 7)
{
lean_object* v_body_803_; lean_object* v___x_805_; 
lean_dec(v_snd_795_);
lean_dec(v_fst_784_);
v_body_803_ = lean_ctor_get(v_a_802_, 2);
lean_inc_ref(v_body_803_);
lean_dec_ref_known(v_a_802_, 3);
lean_inc(v_a_770_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v_a_770_);
lean_ctor_set(v___x_797_, 0, v_body_803_);
v___x_805_ = v___x_797_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_body_803_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_a_770_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v_a_778_ = v___x_805_;
goto v___jp_777_;
}
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec(v_a_802_);
v___x_807_ = lean_unsigned_to_nat(1u);
v___x_808_ = lean_nat_add(v_a_770_, v___x_807_);
lean_inc_ref(v_f_769_);
v___x_809_ = l_Lean_mkAppRange(v_f_769_, v___x_799_, v___x_808_, v_args_768_);
lean_dec(v___x_808_);
v___x_810_ = l_Lean_Meta_throwFunctionExpected___redArg(v___x_809_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v___x_812_; 
lean_dec_ref_known(v___x_810_, 1);
if (v_isShared_798_ == 0)
{
v___x_812_ = v___x_797_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_fst_784_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_snd_795_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
v_a_778_ = v___x_812_;
goto v___jp_777_;
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_del_object(v___x_797_);
lean_dec(v_snd_795_);
lean_dec(v_fst_784_);
lean_dec(v_a_770_);
lean_dec_ref(v_f_769_);
v_a_814_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_810_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_810_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_del_object(v___x_797_);
lean_dec(v_snd_795_);
lean_dec(v_fst_784_);
lean_dec(v_a_770_);
lean_dec_ref(v_f_769_);
v_a_822_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_801_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_801_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_unsigned_to_nat(1u);
v___x_780_ = lean_nat_add(v_a_770_, v___x_779_);
lean_dec(v_a_770_);
v_a_770_ = v___x_780_;
v_b_771_ = v_a_778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object* v_upperBound_832_, lean_object* v_args_833_, lean_object* v_f_834_, lean_object* v_a_835_, lean_object* v_b_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_832_, v_args_833_, v_f_834_, v_a_835_, v_b_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec_ref(v_args_833_);
lean_dec(v_upperBound_832_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object* v_f_843_, lean_object* v_args_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v___x_850_; 
lean_inc(v_a_848_);
lean_inc_ref(v_a_847_);
lean_inc(v_a_846_);
lean_inc_ref(v_a_845_);
lean_inc_ref(v_f_843_);
v___x_850_ = lean_infer_type(v_f_843_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_a_851_);
lean_dec_ref_known(v___x_850_, 1);
v___x_852_ = lean_array_get_size(v_args_844_);
v___x_853_ = lean_unsigned_to_nat(0u);
v___x_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_854_, 0, v_a_851_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
v___x_855_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v___x_852_, v_args_844_, v_f_843_, v___x_853_, v___x_854_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_866_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_866_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_866_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_866_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v_fst_860_; lean_object* v_snd_861_; lean_object* v___x_862_; lean_object* v___x_864_; 
v_fst_860_ = lean_ctor_get(v_a_856_, 0);
lean_inc(v_fst_860_);
v_snd_861_ = lean_ctor_get(v_a_856_, 1);
lean_inc(v_snd_861_);
lean_dec(v_a_856_);
v___x_862_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_860_, v_snd_861_, v___x_852_, v_args_844_);
lean_dec(v_snd_861_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_862_);
v___x_864_ = v___x_858_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
v_a_867_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_855_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_855_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
else
{
lean_dec_ref(v_f_843_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object* v_f_875_, lean_object* v_args_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v_f_875_, v_args_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
lean_dec_ref(v_args_876_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object* v_upperBound_883_, lean_object* v_args_884_, lean_object* v_f_885_, lean_object* v_inst_886_, lean_object* v_R_887_, lean_object* v_a_888_, lean_object* v_b_889_, lean_object* v_c_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_883_, v_args_884_, v_f_885_, v_a_888_, v_b_889_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object* v_upperBound_897_, lean_object* v_args_898_, lean_object* v_f_899_, lean_object* v_inst_900_, lean_object* v_R_901_, lean_object* v_a_902_, lean_object* v_b_903_, lean_object* v_c_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(v_upperBound_897_, v_args_898_, v_f_899_, v_inst_900_, v_R_901_, v_a_902_, v_b_903_, v_c_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec_ref(v_args_898_);
lean_dec(v_upperBound_897_);
return v_res_910_;
}
}
static lean_object* _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0));
v___x_913_ = l_Lean_stringToMessageData(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object* v_constName_914_, lean_object* v_us_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_921_ = lean_obj_once(&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1, &l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once, _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1);
v___x_922_ = l_Lean_mkConst(v_constName_914_, v_us_915_);
v___x_923_ = l_Lean_MessageData_ofExpr(v___x_922_);
v___x_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_921_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_924_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object* v_constName_926_, lean_object* v_us_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_926_, v_us_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_);
lean_dec(v_a_931_);
lean_dec_ref(v_a_930_);
lean_dec(v_a_929_);
lean_dec_ref(v_a_928_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object* v_00_u03b1_934_, lean_object* v_constName_935_, lean_object* v_us_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_935_, v_us_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object* v_00_u03b1_943_, lean_object* v_constName_944_, lean_object* v_us_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lean_Meta_throwIncorrectNumberOfLevels(v_00_u03b1_943_, v_constName_944_, v_us_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
lean_dec(v_a_947_);
lean_dec_ref(v_a_946_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_952_, lean_object* v_msg_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_toCold_959_; lean_object* v_currRecDepth_960_; lean_object* v_ref_961_; uint16_t v_optionFlags_962_; uint8_t v_suppressElabErrors_963_; uint8_t v_checkDeprecated_964_; uint8_t v_isRecordingDeps_965_; lean_object* v_ref_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_toCold_959_ = lean_ctor_get(v___y_956_, 0);
v_currRecDepth_960_ = lean_ctor_get(v___y_956_, 1);
v_ref_961_ = lean_ctor_get(v___y_956_, 2);
v_optionFlags_962_ = lean_ctor_get_uint16(v___y_956_, sizeof(void*)*3);
v_suppressElabErrors_963_ = lean_ctor_get_uint8(v___y_956_, sizeof(void*)*3 + 2);
v_checkDeprecated_964_ = lean_ctor_get_uint8(v___y_956_, sizeof(void*)*3 + 3);
v_isRecordingDeps_965_ = lean_ctor_get_uint8(v___y_956_, sizeof(void*)*3 + 4);
v_ref_966_ = l_Lean_replaceRef(v_ref_952_, v_ref_961_);
lean_inc(v_currRecDepth_960_);
lean_inc_ref(v_toCold_959_);
v___x_967_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_967_, 0, v_toCold_959_);
lean_ctor_set(v___x_967_, 1, v_currRecDepth_960_);
lean_ctor_set(v___x_967_, 2, v_ref_966_);
lean_ctor_set_uint16(v___x_967_, sizeof(void*)*3, v_optionFlags_962_);
lean_ctor_set_uint8(v___x_967_, sizeof(void*)*3 + 2, v_suppressElabErrors_963_);
lean_ctor_set_uint8(v___x_967_, sizeof(void*)*3 + 3, v_checkDeprecated_964_);
lean_ctor_set_uint8(v___x_967_, sizeof(void*)*3 + 4, v_isRecordingDeps_965_);
v___x_968_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_953_, v___y_954_, v___y_955_, v___x_967_, v___y_957_);
lean_dec_ref_known(v___x_967_, 3);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_969_, lean_object* v_msg_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_969_, v_msg_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v_ref_969_);
return v_res_976_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_977_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
return v___x_979_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_980_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
lean_ctor_set(v___x_982_, 2, v___x_981_);
lean_ctor_set(v___x_982_, 3, v___x_981_);
lean_ctor_set(v___x_982_, 4, v___x_980_);
lean_ctor_set(v___x_982_, 5, v___x_980_);
lean_ctor_set(v___x_982_, 6, v___x_980_);
lean_ctor_set(v___x_982_, 7, v___x_980_);
lean_ctor_set(v___x_982_, 8, v___x_980_);
lean_ctor_set(v___x_982_, 9, v___x_980_);
return v___x_982_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = lean_unsigned_to_nat(32u);
v___x_984_ = lean_mk_empty_array_with_capacity(v___x_983_);
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
return v___x_985_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_986_ = ((size_t)5ULL);
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = lean_unsigned_to_nat(32u);
v___x_989_ = lean_mk_empty_array_with_capacity(v___x_988_);
v___x_990_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_991_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_991_, 0, v___x_990_);
lean_ctor_set(v___x_991_, 1, v___x_989_);
lean_ctor_set(v___x_991_, 2, v___x_987_);
lean_ctor_set(v___x_991_, 3, v___x_987_);
lean_ctor_set_usize(v___x_991_, 4, v___x_986_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_992_ = lean_box(1);
v___x_993_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_994_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v___x_993_);
lean_ctor_set(v___x_995_, 2, v___x_992_);
return v___x_995_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_998_ = l_Lean_stringToMessageData(v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_1001_ = l_Lean_stringToMessageData(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_1004_ = l_Lean_stringToMessageData(v___x_1003_);
return v___x_1004_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_1007_ = l_Lean_stringToMessageData(v___x_1006_);
return v___x_1007_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14));
v___x_1010_ = l_Lean_stringToMessageData(v___x_1009_);
return v___x_1010_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16));
v___x_1013_ = l_Lean_stringToMessageData(v___x_1012_);
return v___x_1013_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18));
v___x_1016_ = l_Lean_stringToMessageData(v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_1017_, lean_object* v_declHint_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v_env_1023_; uint8_t v___x_1024_; 
v___x_1021_ = lean_box(0);
v___x_1022_ = lean_st_ref_get(v___y_1019_);
v_env_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc_ref(v_env_1023_);
lean_dec(v___x_1022_);
v___x_1024_ = l_Lean_Name_isAnonymous(v_declHint_1018_);
if (v___x_1024_ == 0)
{
uint8_t v_isExporting_1025_; 
v_isExporting_1025_ = lean_ctor_get_uint8(v_env_1023_, sizeof(void*)*13);
if (v_isExporting_1025_ == 0)
{
lean_object* v___x_1026_; 
lean_dec_ref(v_env_1023_);
lean_dec(v_declHint_1018_);
v___x_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1026_, 0, v_msg_1017_);
return v___x_1026_;
}
else
{
lean_object* v___x_1027_; uint8_t v___x_1028_; 
lean_inc_ref(v_env_1023_);
v___x_1027_ = l_Lean_Environment_setExporting(v_env_1023_, v___x_1024_);
lean_inc(v_declHint_1018_);
lean_inc_ref(v___x_1027_);
v___x_1028_ = l_Lean_Environment_contains(v___x_1027_, v_declHint_1018_, v_isExporting_1025_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; 
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_env_1023_);
lean_dec(v_declHint_1018_);
v___x_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1029_, 0, v_msg_1017_);
return v___x_1029_;
}
else
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_c_1035_; lean_object* v___x_1036_; 
v___x_1030_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_1031_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_1032_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1027_);
v___x_1033_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1027_);
lean_ctor_set(v___x_1033_, 1, v___x_1030_);
lean_ctor_set(v___x_1033_, 2, v___x_1031_);
lean_ctor_set(v___x_1033_, 3, v___x_1032_);
lean_inc(v_declHint_1018_);
v___x_1034_ = l_Lean_MessageData_ofConstName(v_declHint_1018_, v___x_1024_);
v_c_1035_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1035_, 0, v___x_1033_);
lean_ctor_set(v_c_1035_, 1, v___x_1034_);
v___x_1036_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1027_, v_declHint_1018_);
lean_dec_ref(v___x_1027_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
lean_dec_ref(v_env_1023_);
lean_dec(v_declHint_1018_);
v___x_1037_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_1038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v_c_1035_);
v___x_1039_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = l_Lean_MessageData_note(v___x_1040_);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v_msg_1017_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
return v___x_1043_;
}
else
{
lean_object* v_val_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1078_; 
v_val_1044_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1046_ = v___x_1036_;
v_isShared_1047_ = v_isSharedCheck_1078_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_val_1044_);
lean_dec(v___x_1036_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1078_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v_moduleNames_1049_; lean_object* v_mod_1050_; uint8_t v___x_1051_; 
v___x_1048_ = l_Lean_Environment_header(v_env_1023_);
lean_dec_ref(v_env_1023_);
v_moduleNames_1049_ = lean_ctor_get(v___x_1048_, 4);
lean_inc_ref(v_moduleNames_1049_);
lean_dec_ref(v___x_1048_);
v_mod_1050_ = lean_array_get(v___x_1021_, v_moduleNames_1049_, v_val_1044_);
lean_dec(v_val_1044_);
lean_dec_ref(v_moduleNames_1049_);
v___x_1051_ = l_Lean_isPrivateName(v_declHint_1018_);
lean_dec(v_declHint_1018_);
if (v___x_1051_ == 0)
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1052_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_1053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v_c_1035_);
v___x_1054_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_1055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = l_Lean_MessageData_ofName(v_mod_1050_);
v___x_1057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15);
v___x_1059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = l_Lean_MessageData_note(v___x_1059_);
v___x_1061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1061_, 0, v_msg_1017_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set_tag(v___x_1046_, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1061_);
v___x_1063_ = v___x_1046_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
else
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1065_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_1066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v_c_1035_);
v___x_1067_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17);
v___x_1068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = l_Lean_MessageData_ofName(v_mod_1050_);
v___x_1070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19);
v___x_1072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = l_Lean_MessageData_note(v___x_1072_);
v___x_1074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_msg_1017_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set_tag(v___x_1046_, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1074_);
v___x_1076_ = v___x_1046_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1079_; 
lean_dec_ref(v_env_1023_);
lean_dec(v_declHint_1018_);
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v_msg_1017_);
return v___x_1079_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_1080_, lean_object* v_declHint_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1080_, v_declHint_1081_, v___y_1082_);
lean_dec(v___y_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_1085_, lean_object* v_declHint_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v___x_1092_; lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1102_; 
v___x_1092_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1085_, v_declHint_1086_, v___y_1090_);
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1095_ = v___x_1092_;
v_isShared_1096_ = v_isSharedCheck_1102_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1092_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1102_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1097_ = l_Lean_unknownIdentifierMessageTag;
v___x_1098_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
lean_ctor_set(v___x_1098_, 1, v_a_1093_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1098_);
v___x_1100_ = v___x_1095_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_1103_, lean_object* v_declHint_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1103_, v_declHint_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1111_, lean_object* v_msg_1112_, lean_object* v_declHint_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v_a_1120_; lean_object* v___x_1121_; 
v___x_1119_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1112_, v_declHint_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_a_1120_);
lean_dec_ref(v___x_1119_);
v___x_1121_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1111_, v_a_1120_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1122_, lean_object* v_msg_1123_, lean_object* v_declHint_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1122_, v_msg_1123_, v_declHint_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v_ref_1122_);
return v_res_1130_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1133_ = l_Lean_stringToMessageData(v___x_1132_);
return v___x_1133_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1136_ = l_Lean_stringToMessageData(v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1137_, lean_object* v_constName_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v___x_1144_; uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1144_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1145_ = 0;
lean_inc(v_constName_1138_);
v___x_1146_ = l_Lean_MessageData_ofConstName(v_constName_1138_, v___x_1145_);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1144_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1137_, v___x_1149_, v_constName_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1151_, lean_object* v_constName_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1151_, v_constName_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v_ref_1151_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object* v_constName_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_ref_1165_; lean_object* v___x_1166_; 
v_ref_1165_ = lean_ctor_get(v___y_1162_, 2);
v___x_1166_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1165_, v_constName_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object* v_constName_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___x_1180_; lean_object* v_env_1181_; uint8_t v___x_1182_; lean_object* v___x_1183_; 
v___x_1180_ = lean_st_ref_get(v___y_1178_);
v_env_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc_ref(v_env_1181_);
lean_dec(v___x_1180_);
v___x_1182_ = 0;
lean_inc(v_constName_1174_);
v___x_1183_ = l_Lean_Environment_findConstVal_x3f(v_env_1181_, v_constName_1174_, v___x_1182_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v___x_1184_; 
v___x_1184_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
return v___x_1184_;
}
else
{
lean_object* v_val_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec(v_constName_1174_);
v_val_1185_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1183_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_val_1185_);
lean_dec(v___x_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set_tag(v___x_1187_, 0);
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_val_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object* v_constName_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_constName_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object* v_c_1200_, lean_object* v_us_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v___x_1207_; 
lean_inc(v_c_1200_);
v___x_1207_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_c_1200_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v_levelParams_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; uint8_t v___x_1212_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref_known(v___x_1207_, 1);
v_levelParams_1209_ = lean_ctor_get(v_a_1208_, 1);
v___x_1210_ = l_List_lengthTR___redArg(v_levelParams_1209_);
v___x_1211_ = l_List_lengthTR___redArg(v_us_1201_);
v___x_1212_ = lean_nat_dec_eq(v___x_1210_, v___x_1211_);
lean_dec(v___x_1211_);
lean_dec(v___x_1210_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; 
lean_dec(v_a_1208_);
v___x_1213_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_c_1200_, v_us_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
return v___x_1213_;
}
else
{
lean_object* v___x_1214_; 
lean_dec(v_c_1200_);
v___x_1214_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_1208_, v_us_1201_, v_a_1205_);
return v___x_1214_;
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec(v_us_1201_);
lean_dec(v_c_1200_);
v_a_1215_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1207_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1207_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object* v_c_1223_, lean_object* v_us_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_c_1223_, v_us_1224_, v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_);
lean_dec(v_a_1228_);
lean_dec_ref(v_a_1227_);
lean_dec(v_a_1226_);
lean_dec_ref(v_a_1225_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object* v_00_u03b1_1231_, lean_object* v_constName_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1239_, lean_object* v_constName_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(v_00_u03b1_1239_, v_constName_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1247_, lean_object* v_ref_1248_, lean_object* v_constName_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1248_, v_constName_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1256_, lean_object* v_ref_1257_, lean_object* v_constName_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(v_00_u03b1_1256_, v_ref_1257_, v_constName_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v_ref_1257_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1265_, lean_object* v_ref_1266_, lean_object* v_msg_1267_, lean_object* v_declHint_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1266_, v_msg_1267_, v_declHint_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1275_, lean_object* v_ref_1276_, lean_object* v_msg_1277_, lean_object* v_declHint_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1275_, v_ref_1276_, v_msg_1277_, v_declHint_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v_ref_1276_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1285_, lean_object* v_declHint_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1285_, v_declHint_1286_, v___y_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1293_, lean_object* v_declHint_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1293_, v_declHint_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1301_, lean_object* v_ref_1302_, lean_object* v_msg_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1302_, v_msg_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1310_, lean_object* v_ref_1311_, lean_object* v_msg_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1310_, v_ref_1311_, v_msg_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v_ref_1311_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_LevelSubst_apply(lean_object* v_00_u03c3_1319_, lean_object* v_u_1320_){
_start:
{
lean_object* v_paramNames_1321_; lean_object* v_lvls_1322_; uint8_t v___x_1323_; 
v_paramNames_1321_ = lean_ctor_get(v_00_u03c3_1319_, 0);
lean_inc(v_paramNames_1321_);
v_lvls_1322_ = lean_ctor_get(v_00_u03c3_1319_, 1);
lean_inc(v_lvls_1322_);
lean_dec_ref(v_00_u03c3_1319_);
v___x_1323_ = l_List_isEmpty___redArg(v_paramNames_1321_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; 
v___x_1324_ = l_Lean_Level_instantiateParams(v_u_1320_, v_paramNames_1321_, v_lvls_1322_);
return v___x_1324_;
}
else
{
lean_dec(v_lvls_1322_);
lean_dec(v_paramNames_1321_);
return v_u_1320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_LevelSubst_applyList(lean_object* v_00_u03c3_1325_, lean_object* v_us_1326_){
_start:
{
lean_object* v_paramNames_1327_; uint8_t v___x_1328_; 
v_paramNames_1327_ = lean_ctor_get(v_00_u03c3_1325_, 0);
v___x_1328_ = l_List_isEmpty___redArg(v_paramNames_1327_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_LevelSubst_apply), 2, 1);
lean_closure_set(v___x_1329_, 0, v_00_u03c3_1325_);
v___x_1330_ = lean_box(0);
v___x_1331_ = l_List_mapTR_loop___redArg(v___x_1329_, v_us_1326_, v___x_1330_);
return v___x_1331_;
}
else
{
lean_dec_ref(v_00_u03c3_1325_);
return v_us_1326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(lean_object* v_c_1332_, lean_object* v_us_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v___x_1339_; 
lean_inc(v_c_1332_);
v___x_1339_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_c_1332_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1355_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1355_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1355_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_levelParams_1344_; lean_object* v_type_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v_levelParams_1344_ = lean_ctor_get(v_a_1340_, 1);
lean_inc(v_levelParams_1344_);
v_type_1345_ = lean_ctor_get(v_a_1340_, 2);
lean_inc_ref(v_type_1345_);
lean_dec(v_a_1340_);
v___x_1346_ = l_List_lengthTR___redArg(v_levelParams_1344_);
v___x_1347_ = l_List_lengthTR___redArg(v_us_1333_);
v___x_1348_ = lean_nat_dec_eq(v___x_1346_, v___x_1347_);
lean_dec(v___x_1347_);
lean_dec(v___x_1346_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; 
lean_dec_ref(v_type_1345_);
lean_dec(v_levelParams_1344_);
lean_del_object(v___x_1342_);
v___x_1349_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_c_1332_, v_us_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_);
return v___x_1349_;
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
lean_dec(v_c_1332_);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v_levelParams_1344_);
lean_ctor_set(v___x_1350_, 1, v_us_1333_);
v___x_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1351_, 0, v_type_1345_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v___x_1351_);
v___x_1353_ = v___x_1342_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_us_1333_);
lean_dec(v_c_1332_);
v_a_1356_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1339_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1339_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy___boxed(lean_object* v_c_1364_, lean_object* v_us_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_c_1364_, v_us_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
lean_dec(v_a_1369_);
lean_dec_ref(v_a_1368_);
lean_dec(v_a_1367_);
lean_dec_ref(v_a_1366_);
return v_res_1371_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0));
v___x_1374_ = l_Lean_stringToMessageData(v___x_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2));
v___x_1377_ = l_Lean_stringToMessageData(v___x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object* v_structName_1378_, lean_object* v_idx_1379_, lean_object* v_e_1380_, lean_object* v_a_1381_, lean_object* v_00_u03b1_1382_, lean_object* v_x_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1389_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
v___x_1390_ = l_Lean_mkProj(v_structName_1378_, v_idx_1379_, v_e_1380_);
v___x_1391_ = l_Lean_indentExpr(v___x_1390_);
v___x_1392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1389_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
v___x_1393_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1392_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
v___x_1395_ = l_Lean_indentExpr(v_a_1381_);
v___x_1396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1394_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
v___x_1397_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1396_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object* v_structName_1398_, lean_object* v_idx_1399_, lean_object* v_e_1400_, lean_object* v_a_1401_, lean_object* v_00_u03b1_1402_, lean_object* v_x_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1398_, v_idx_1399_, v_e_1400_, v_a_1401_, v_00_u03b1_1402_, v_x_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object* v_constName_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; lean_object* v_env_1417_; uint8_t v___x_1418_; lean_object* v___x_1419_; 
v___x_1416_ = lean_st_ref_get(v___y_1414_);
v_env_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc_ref(v_env_1417_);
lean_dec(v___x_1416_);
v___x_1418_ = 0;
lean_inc(v_constName_1410_);
v___x_1419_ = l_Lean_Environment_find_x3f(v_env_1417_, v_constName_1410_, v___x_1418_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v___x_1420_; 
v___x_1420_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
return v___x_1420_;
}
else
{
lean_object* v_val_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec(v_constName_1410_);
v_val_1421_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1419_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_val_1421_);
lean_dec(v___x_1419_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
lean_ctor_set_tag(v___x_1423_, 0);
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_val_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object* v_constName_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_constName_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
lean_dec_ref(v___y_1430_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object* v_upperBound_1436_, lean_object* v_structName_1437_, lean_object* v_e_1438_, lean_object* v_idx_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_b_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_a_1449_; uint8_t v___x_1453_; 
v___x_1453_ = lean_nat_dec_lt(v_a_1441_, v_upperBound_1436_);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; 
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
lean_dec(v_idx_1439_);
lean_dec_ref(v_e_1438_);
lean_dec(v_structName_1437_);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_b_1442_);
return v___x_1454_;
}
else
{
lean_object* v___x_1455_; 
lean_inc(v___y_1446_);
lean_inc_ref(v___y_1445_);
lean_inc(v___y_1444_);
lean_inc_ref(v___y_1443_);
v___x_1455_ = lean_whnf(v_b_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
if (lean_obj_tag(v_a_1456_) == 7)
{
lean_object* v_body_1457_; uint8_t v___x_1458_; 
v_body_1457_ = lean_ctor_get(v_a_1456_, 2);
lean_inc_ref(v_body_1457_);
lean_dec_ref_known(v_a_1456_, 3);
v___x_1458_ = l_Lean_Expr_hasLooseBVars(v_body_1457_);
if (v___x_1458_ == 0)
{
v_a_1449_ = v_body_1457_;
goto v___jp_1448_;
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
lean_inc_ref(v_e_1438_);
lean_inc(v_a_1441_);
lean_inc(v_structName_1437_);
v___x_1459_ = l_Lean_mkProj(v_structName_1437_, v_a_1441_, v_e_1438_);
v___x_1460_ = lean_expr_instantiate1(v_body_1457_, v___x_1459_);
lean_dec_ref(v___x_1459_);
lean_dec_ref(v_body_1457_);
v_a_1449_ = v___x_1460_;
goto v___jp_1448_;
}
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1461_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1438_);
lean_inc(v_idx_1439_);
lean_inc(v_structName_1437_);
v___x_1462_ = l_Lean_mkProj(v_structName_1437_, v_idx_1439_, v_e_1438_);
v___x_1463_ = l_Lean_indentExpr(v___x_1462_);
v___x_1464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1461_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
v___x_1465_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1464_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
lean_inc_ref(v_a_1440_);
v___x_1467_ = l_Lean_indentExpr(v_a_1440_);
v___x_1468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1466_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
v___x_1469_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1468_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_dec_ref_known(v___x_1469_, 1);
v_a_1449_ = v_a_1456_;
goto v___jp_1448_;
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec(v_a_1456_);
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
lean_dec(v_idx_1439_);
lean_dec_ref(v_e_1438_);
lean_dec(v_structName_1437_);
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1469_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1469_);
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
}
else
{
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
lean_dec(v_idx_1439_);
lean_dec_ref(v_e_1438_);
lean_dec(v_structName_1437_);
return v___x_1455_;
}
}
v___jp_1448_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = lean_unsigned_to_nat(1u);
v___x_1451_ = lean_nat_add(v_a_1441_, v___x_1450_);
lean_dec(v_a_1441_);
v_a_1441_ = v___x_1451_;
v_b_1442_ = v_a_1449_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object* v_upperBound_1478_, lean_object* v_structName_1479_, lean_object* v_e_1480_, lean_object* v_idx_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_b_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1478_, v_structName_1479_, v_e_1480_, v_idx_1481_, v_a_1482_, v_a_1483_, v_b_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v_upperBound_1478_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object* v_upperBound_1491_, lean_object* v_structName_1492_, lean_object* v_e_1493_, lean_object* v_idx_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_b_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_a_1504_; uint8_t v___x_1508_; 
v___x_1508_ = lean_nat_dec_lt(v_a_1496_, v_upperBound_1491_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; 
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_idx_1494_);
lean_dec_ref(v_e_1493_);
lean_dec(v_structName_1492_);
v___x_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1509_, 0, v_b_1497_);
return v___x_1509_;
}
else
{
lean_object* v___x_1510_; 
lean_inc(v___y_1501_);
lean_inc_ref(v___y_1500_);
lean_inc(v___y_1499_);
lean_inc_ref(v___y_1498_);
v___x_1510_ = lean_whnf(v_b_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_a_1511_);
lean_dec_ref_known(v___x_1510_, 1);
if (lean_obj_tag(v_a_1511_) == 7)
{
lean_object* v_body_1512_; uint8_t v___x_1513_; 
v_body_1512_ = lean_ctor_get(v_a_1511_, 2);
lean_inc_ref(v_body_1512_);
lean_dec_ref_known(v_a_1511_, 3);
v___x_1513_ = l_Lean_Expr_hasLooseBVars(v_body_1512_);
if (v___x_1513_ == 0)
{
v_a_1504_ = v_body_1512_;
goto v___jp_1503_;
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_inc_ref(v_e_1493_);
lean_inc(v_a_1496_);
lean_inc(v_structName_1492_);
v___x_1514_ = l_Lean_mkProj(v_structName_1492_, v_a_1496_, v_e_1493_);
v___x_1515_ = lean_expr_instantiate1(v_body_1512_, v___x_1514_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_body_1512_);
v_a_1504_ = v___x_1515_;
goto v___jp_1503_;
}
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1516_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1493_);
lean_inc(v_idx_1494_);
lean_inc(v_structName_1492_);
v___x_1517_ = l_Lean_mkProj(v_structName_1492_, v_idx_1494_, v_e_1493_);
v___x_1518_ = l_Lean_indentExpr(v___x_1517_);
v___x_1519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1516_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
lean_inc_ref(v_a_1495_);
v___x_1522_ = l_Lean_indentExpr(v_a_1495_);
v___x_1523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1523_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_dec_ref_known(v___x_1524_, 1);
v_a_1504_ = v_a_1511_;
goto v___jp_1503_;
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec(v_a_1511_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_idx_1494_);
lean_dec_ref(v_e_1493_);
lean_dec(v_structName_1492_);
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
else
{
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_idx_1494_);
lean_dec_ref(v_e_1493_);
lean_dec(v_structName_1492_);
return v___x_1510_;
}
}
v___jp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1505_ = lean_unsigned_to_nat(1u);
v___x_1506_ = lean_nat_add(v_a_1496_, v___x_1505_);
lean_dec(v_a_1496_);
v___x_1507_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1491_, v_structName_1492_, v_e_1493_, v_idx_1494_, v_a_1495_, v___x_1506_, v_a_1504_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
return v___x_1507_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object* v_upperBound_1533_, lean_object* v_structName_1534_, lean_object* v_e_1535_, lean_object* v_idx_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_b_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1533_, v_structName_1534_, v_e_1535_, v_idx_1536_, v_a_1537_, v_a_1538_, v_b_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v_upperBound_1533_);
return v_res_1545_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0(void){
_start:
{
lean_object* v___x_1546_; lean_object* v_dummy_1547_; 
v___x_1546_ = lean_box(0);
v_dummy_1547_ = l_Lean_Expr_sort___override(v___x_1546_);
return v_dummy_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object* v_structName_1548_, lean_object* v_idx_1549_, lean_object* v_e_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v___x_1556_; 
lean_inc(v_a_1554_);
lean_inc_ref(v_a_1553_);
lean_inc(v_a_1552_);
lean_inc_ref(v_a_1551_);
lean_inc_ref(v_e_1550_);
v___x_1556_ = lean_infer_type(v_e_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1558_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
lean_inc(v_a_1554_);
lean_inc_ref(v_a_1553_);
lean_inc(v_a_1552_);
lean_inc_ref(v_a_1551_);
v___x_1558_ = lean_whnf(v_a_1557_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v_a_1559_; lean_object* v___x_1560_; 
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
lean_inc(v_a_1559_);
lean_dec_ref_known(v___x_1558_, 1);
v___x_1560_ = l_Lean_Expr_getAppFn(v_a_1559_);
if (lean_obj_tag(v___x_1560_) == 4)
{
lean_object* v_declName_1561_; lean_object* v_us_1562_; lean_object* v___x_1563_; lean_object* v_env_1567_; uint8_t v___x_1568_; lean_object* v___x_1569_; 
v_declName_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_declName_1561_);
v_us_1562_ = lean_ctor_get(v___x_1560_, 1);
lean_inc(v_us_1562_);
lean_dec_ref_known(v___x_1560_, 2);
v___x_1563_ = lean_st_ref_get(v_a_1554_);
v_env_1567_ = lean_ctor_get(v___x_1563_, 0);
lean_inc_ref(v_env_1567_);
lean_dec(v___x_1563_);
v___x_1568_ = 0;
v___x_1569_ = l_Lean_Environment_find_x3f(v_env_1567_, v_declName_1561_, v___x_1568_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec(v_us_1562_);
v___x_1570_ = lean_box(0);
v___x_1571_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1570_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1571_;
}
else
{
lean_object* v_val_1572_; 
v_val_1572_ = lean_ctor_get(v___x_1569_, 0);
lean_inc(v_val_1572_);
lean_dec_ref_known(v___x_1569_, 1);
if (lean_obj_tag(v_val_1572_) == 5)
{
lean_object* v_val_1573_; lean_object* v_ctors_1574_; 
v_val_1573_ = lean_ctor_get(v_val_1572_, 0);
lean_inc_ref(v_val_1573_);
lean_dec_ref_known(v_val_1572_, 1);
v_ctors_1574_ = lean_ctor_get(v_val_1573_, 4);
lean_inc(v_ctors_1574_);
if (lean_obj_tag(v_ctors_1574_) == 1)
{
lean_object* v_tail_1575_; 
v_tail_1575_ = lean_ctor_get(v_ctors_1574_, 1);
if (lean_obj_tag(v_tail_1575_) == 0)
{
lean_object* v_toConstantVal_1576_; lean_object* v_numParams_1577_; lean_object* v_numIndices_1578_; lean_object* v_head_1579_; lean_object* v___x_1580_; 
v_toConstantVal_1576_ = lean_ctor_get(v_val_1573_, 0);
lean_inc_ref(v_toConstantVal_1576_);
v_numParams_1577_ = lean_ctor_get(v_val_1573_, 1);
lean_inc(v_numParams_1577_);
v_numIndices_1578_ = lean_ctor_get(v_val_1573_, 2);
lean_inc(v_numIndices_1578_);
lean_dec_ref(v_val_1573_);
v_head_1579_ = lean_ctor_get(v_ctors_1574_, 0);
lean_inc(v_head_1579_);
lean_dec_ref_known(v_ctors_1574_, 2);
v___x_1580_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_head_1579_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
if (lean_obj_tag(v_a_1581_) == 6)
{
lean_object* v_val_1582_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v_name_1622_; uint8_t v___x_1623_; 
v_val_1582_ = lean_ctor_get(v_a_1581_, 0);
lean_inc_ref(v_val_1582_);
lean_dec_ref_known(v_a_1581_, 1);
v_name_1622_ = lean_ctor_get(v_toConstantVal_1576_, 0);
lean_inc(v_name_1622_);
lean_dec_ref(v_toConstantVal_1576_);
v___x_1623_ = lean_name_eq(v_name_1622_, v_structName_1548_);
lean_dec(v_name_1622_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
lean_dec_ref(v_val_1582_);
lean_dec(v_numIndices_1578_);
lean_dec(v_numParams_1577_);
lean_dec(v_us_1562_);
v___x_1624_ = lean_box(0);
v___x_1625_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1624_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
else
{
v___y_1584_ = v_a_1551_;
v___y_1585_ = v_a_1552_;
v___y_1586_ = v_a_1553_;
v___y_1587_ = v_a_1554_;
goto v___jp_1583_;
}
v___jp_1583_:
{
lean_object* v_dummy_1588_; lean_object* v_nargs_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v_dummy_1588_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
v_nargs_1589_ = l_Lean_Expr_getAppNumArgs(v_a_1559_);
lean_inc(v_nargs_1589_);
v___x_1590_ = lean_mk_array(v_nargs_1589_, v_dummy_1588_);
v___x_1591_ = lean_unsigned_to_nat(1u);
v___x_1592_ = lean_nat_sub(v_nargs_1589_, v___x_1591_);
lean_dec(v_nargs_1589_);
lean_inc(v_a_1559_);
v___x_1593_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1559_, v___x_1590_, v___x_1592_);
v___x_1594_ = lean_nat_add(v_numParams_1577_, v_numIndices_1578_);
lean_dec(v_numIndices_1578_);
v___x_1595_ = lean_array_get_size(v___x_1593_);
v___x_1596_ = lean_nat_dec_eq(v___x_1594_, v___x_1595_);
lean_dec(v___x_1594_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec_ref(v___x_1593_);
lean_dec_ref(v_val_1582_);
lean_dec(v_numParams_1577_);
lean_dec(v_us_1562_);
v___x_1597_ = lean_box(0);
v___x_1598_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1597_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
return v___x_1598_;
}
else
{
lean_object* v_toConstantVal_1599_; lean_object* v_name_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_toConstantVal_1599_ = lean_ctor_get(v_val_1582_, 0);
lean_inc_ref(v_toConstantVal_1599_);
lean_dec_ref(v_val_1582_);
v_name_1600_ = lean_ctor_get(v_toConstantVal_1599_, 0);
lean_inc(v_name_1600_);
lean_dec_ref(v_toConstantVal_1599_);
v___x_1601_ = l_Lean_mkConst(v_name_1600_, v_us_1562_);
v___x_1602_ = lean_unsigned_to_nat(0u);
v___x_1603_ = l_Array_toSubarray___redArg(v___x_1593_, v___x_1602_, v_numParams_1577_);
v___x_1604_ = l_Subarray_copy___redArg(v___x_1603_);
v___x_1605_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_1601_, v___x_1604_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
lean_dec_ref(v___x_1604_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; lean_object* v___x_1607_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
lean_inc(v_a_1559_);
lean_inc_ref(v_e_1550_);
lean_inc(v_structName_1548_);
lean_inc(v_idx_1549_);
v___x_1607_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_idx_1549_, v_structName_1548_, v_e_1550_, v_idx_1549_, v_a_1559_, v___x_1602_, v_a_1606_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1609_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
lean_inc(v___y_1587_);
lean_inc_ref(v___y_1586_);
lean_inc(v___y_1585_);
lean_inc_ref(v___y_1584_);
v___x_1609_ = lean_whnf(v_a_1608_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1621_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1612_ = v___x_1609_;
v_isShared_1613_ = v_isSharedCheck_1621_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1609_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1621_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
if (lean_obj_tag(v_a_1610_) == 7)
{
lean_object* v_binderType_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
lean_dec(v_a_1559_);
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
v_binderType_1614_ = lean_ctor_get(v_a_1610_, 1);
lean_inc_ref(v_binderType_1614_);
lean_dec_ref_known(v_a_1610_, 3);
v___x_1615_ = lean_expr_consume_type_annotations(v_binderType_1614_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 0, v___x_1615_);
v___x_1617_ = v___x_1612_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
else
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_del_object(v___x_1612_);
lean_dec(v_a_1610_);
v___x_1619_ = lean_box(0);
v___x_1620_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1619_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
return v___x_1620_;
}
}
}
else
{
lean_dec(v_a_1559_);
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
return v___x_1609_;
}
}
else
{
lean_dec(v_a_1559_);
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
return v___x_1607_;
}
}
else
{
lean_dec(v_a_1559_);
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
return v___x_1605_;
}
}
}
}
else
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
lean_dec(v_a_1581_);
lean_dec(v_numIndices_1578_);
lean_dec(v_numParams_1577_);
lean_dec_ref(v_toConstantVal_1576_);
lean_dec(v_us_1562_);
v___x_1634_ = lean_box(0);
v___x_1635_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1634_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1635_;
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v_numIndices_1578_);
lean_dec(v_numParams_1577_);
lean_dec_ref(v_toConstantVal_1576_);
lean_dec(v_us_1562_);
lean_dec(v_a_1559_);
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
v_a_1636_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1580_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1580_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_1574_, 2);
lean_dec_ref(v_val_1573_);
lean_dec(v_us_1562_);
goto v___jp_1564_;
}
}
else
{
lean_dec(v_ctors_1574_);
lean_dec_ref(v_val_1573_);
lean_dec(v_us_1562_);
goto v___jp_1564_;
}
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
lean_dec(v_val_1572_);
lean_dec(v_us_1562_);
v___x_1644_ = lean_box(0);
v___x_1645_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1644_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1645_;
}
}
v___jp_1564_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = lean_box(0);
v___x_1566_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1565_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1566_;
}
}
else
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
lean_dec_ref(v___x_1560_);
v___x_1646_ = lean_box(0);
v___x_1647_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1548_, v_idx_1549_, v_e_1550_, v_a_1559_, lean_box(0), v___x_1646_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1647_;
}
}
else
{
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
return v___x_1558_;
}
}
else
{
lean_dec_ref(v_e_1550_);
lean_dec(v_idx_1549_);
lean_dec(v_structName_1548_);
return v___x_1556_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object* v_structName_1648_, lean_object* v_idx_1649_, lean_object* v_e_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_structName_1648_, v_idx_1649_, v_e_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_);
lean_dec(v_a_1654_);
lean_dec_ref(v_a_1653_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object* v_upperBound_1657_, lean_object* v_structName_1658_, lean_object* v_e_1659_, lean_object* v_idx_1660_, lean_object* v_a_1661_, lean_object* v_inst_1662_, lean_object* v_R_1663_, lean_object* v_a_1664_, lean_object* v_b_1665_, lean_object* v_c_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1657_, v_structName_1658_, v_e_1659_, v_idx_1660_, v_a_1661_, v_a_1664_, v_b_1665_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object* v_upperBound_1673_, lean_object* v_structName_1674_, lean_object* v_e_1675_, lean_object* v_idx_1676_, lean_object* v_a_1677_, lean_object* v_inst_1678_, lean_object* v_R_1679_, lean_object* v_a_1680_, lean_object* v_b_1681_, lean_object* v_c_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(v_upperBound_1673_, v_structName_1674_, v_e_1675_, v_idx_1676_, v_a_1677_, v_inst_1678_, v_R_1679_, v_a_1680_, v_b_1681_, v_c_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_upperBound_1673_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object* v_upperBound_1689_, lean_object* v_structName_1690_, lean_object* v_e_1691_, lean_object* v_idx_1692_, lean_object* v_a_1693_, lean_object* v_inst_1694_, lean_object* v_R_1695_, lean_object* v_a_1696_, lean_object* v_b_1697_, lean_object* v_c_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1689_, v_structName_1690_, v_e_1691_, v_idx_1692_, v_a_1693_, v_a_1696_, v_b_1697_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object* v_upperBound_1705_, lean_object* v_structName_1706_, lean_object* v_e_1707_, lean_object* v_idx_1708_, lean_object* v_a_1709_, lean_object* v_inst_1710_, lean_object* v_R_1711_, lean_object* v_a_1712_, lean_object* v_b_1713_, lean_object* v_c_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(v_upperBound_1705_, v_structName_1706_, v_e_1707_, v_idx_1708_, v_a_1709_, v_inst_1710_, v_R_1711_, v_a_1712_, v_b_1713_, v_c_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v_upperBound_1705_);
return v_res_1720_;
}
}
static lean_object* _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = ((lean_object*)(l_Lean_Meta_throwTypeExpected___redArg___closed__0));
v___x_1723_ = l_Lean_stringToMessageData(v___x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object* v_type_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1730_ = lean_obj_once(&l_Lean_Meta_throwTypeExpected___redArg___closed__1, &l_Lean_Meta_throwTypeExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1);
v___x_1731_ = l_Lean_indentExpr(v_type_1724_);
v___x_1732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1732_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object* v_type_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object* v_00_u03b1_1741_, lean_object* v_type_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1742_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object* v_00_u03b1_1749_, lean_object* v_type_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lean_Meta_throwTypeExpected(v_00_u03b1_1749_, v_type_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
lean_dec(v_a_1754_);
lean_dec_ref(v_a_1753_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1757_, lean_object* v_x_1758_, lean_object* v_x_1759_, lean_object* v_x_1760_){
_start:
{
lean_object* v_ks_1761_; lean_object* v_vs_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1786_; 
v_ks_1761_ = lean_ctor_get(v_x_1757_, 0);
v_vs_1762_ = lean_ctor_get(v_x_1757_, 1);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_x_1757_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1764_ = v_x_1757_;
v_isShared_1765_ = v_isSharedCheck_1786_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_vs_1762_);
lean_inc(v_ks_1761_);
lean_dec(v_x_1757_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1786_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1766_ = lean_array_get_size(v_ks_1761_);
v___x_1767_ = lean_nat_dec_lt(v_x_1758_, v___x_1766_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1771_; 
lean_dec(v_x_1758_);
v___x_1768_ = lean_array_push(v_ks_1761_, v_x_1759_);
v___x_1769_ = lean_array_push(v_vs_1762_, v_x_1760_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 1, v___x_1769_);
lean_ctor_set(v___x_1764_, 0, v___x_1768_);
v___x_1771_ = v___x_1764_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1768_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
else
{
lean_object* v_k_x27_1773_; uint8_t v___x_1774_; 
v_k_x27_1773_ = lean_array_fget_borrowed(v_ks_1761_, v_x_1758_);
v___x_1774_ = l_Lean_instBEqMVarId_beq(v_x_1759_, v_k_x27_1773_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1776_; 
if (v_isShared_1765_ == 0)
{
v___x_1776_ = v___x_1764_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_ks_1761_);
lean_ctor_set(v_reuseFailAlloc_1780_, 1, v_vs_1762_);
v___x_1776_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = lean_unsigned_to_nat(1u);
v___x_1778_ = lean_nat_add(v_x_1758_, v___x_1777_);
lean_dec(v_x_1758_);
v_x_1757_ = v___x_1776_;
v_x_1758_ = v___x_1778_;
goto _start;
}
}
else
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1784_; 
v___x_1781_ = lean_array_fset(v_ks_1761_, v_x_1758_, v_x_1759_);
v___x_1782_ = lean_array_fset(v_vs_1762_, v_x_1758_, v_x_1760_);
lean_dec(v_x_1758_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 1, v___x_1782_);
lean_ctor_set(v___x_1764_, 0, v___x_1781_);
v___x_1784_ = v___x_1764_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1781_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1787_, lean_object* v_k_1788_, lean_object* v_v_1789_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = lean_unsigned_to_nat(0u);
v___x_1791_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1787_, v___x_1790_, v_k_1788_, v_v_1789_);
return v___x_1791_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1793_, size_t v_x_1794_, size_t v_x_1795_, lean_object* v_x_1796_, lean_object* v_x_1797_){
_start:
{
if (lean_obj_tag(v_x_1793_) == 0)
{
lean_object* v_es_1798_; size_t v___x_1799_; size_t v___x_1800_; lean_object* v_j_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; 
v_es_1798_ = lean_ctor_get(v_x_1793_, 0);
v___x_1799_ = ((size_t)31ULL);
v___x_1800_ = lean_usize_land(v_x_1794_, v___x_1799_);
v_j_1801_ = lean_usize_to_nat(v___x_1800_);
v___x_1802_ = lean_array_get_size(v_es_1798_);
v___x_1803_ = lean_nat_dec_lt(v_j_1801_, v___x_1802_);
if (v___x_1803_ == 0)
{
lean_dec(v_j_1801_);
lean_dec(v_x_1797_);
lean_dec(v_x_1796_);
return v_x_1793_;
}
else
{
lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1842_; 
lean_inc_ref(v_es_1798_);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_x_1793_);
if (v_isSharedCheck_1842_ == 0)
{
lean_object* v_unused_1843_; 
v_unused_1843_ = lean_ctor_get(v_x_1793_, 0);
lean_dec(v_unused_1843_);
v___x_1805_ = v_x_1793_;
v_isShared_1806_ = v_isSharedCheck_1842_;
goto v_resetjp_1804_;
}
else
{
lean_dec(v_x_1793_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1842_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v_v_1807_; lean_object* v___x_1808_; lean_object* v_xs_x27_1809_; lean_object* v___y_1811_; 
v_v_1807_ = lean_array_fget(v_es_1798_, v_j_1801_);
v___x_1808_ = lean_box(0);
v_xs_x27_1809_ = lean_array_fset(v_es_1798_, v_j_1801_, v___x_1808_);
switch(lean_obj_tag(v_v_1807_))
{
case 0:
{
lean_object* v_key_1816_; lean_object* v_val_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1827_; 
v_key_1816_ = lean_ctor_get(v_v_1807_, 0);
v_val_1817_ = lean_ctor_get(v_v_1807_, 1);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_v_1807_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1819_ = v_v_1807_;
v_isShared_1820_ = v_isSharedCheck_1827_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_val_1817_);
lean_inc(v_key_1816_);
lean_dec(v_v_1807_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1827_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
uint8_t v___x_1821_; 
v___x_1821_ = l_Lean_instBEqMVarId_beq(v_x_1796_, v_key_1816_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
lean_del_object(v___x_1819_);
v___x_1822_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1816_, v_val_1817_, v_x_1796_, v_x_1797_);
v___x_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
v___y_1811_ = v___x_1823_;
goto v___jp_1810_;
}
else
{
lean_object* v___x_1825_; 
lean_dec(v_val_1817_);
lean_dec(v_key_1816_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v_x_1797_);
lean_ctor_set(v___x_1819_, 0, v_x_1796_);
v___x_1825_ = v___x_1819_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_x_1796_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_x_1797_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
v___y_1811_ = v___x_1825_;
goto v___jp_1810_;
}
}
}
}
case 1:
{
lean_object* v_node_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1840_; 
v_node_1828_ = lean_ctor_get(v_v_1807_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v_v_1807_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1830_ = v_v_1807_;
v_isShared_1831_ = v_isSharedCheck_1840_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_node_1828_);
lean_dec(v_v_1807_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1840_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
size_t v___x_1832_; size_t v___x_1833_; size_t v___x_1834_; size_t v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1832_ = ((size_t)5ULL);
v___x_1833_ = lean_usize_shift_right(v_x_1794_, v___x_1832_);
v___x_1834_ = ((size_t)1ULL);
v___x_1835_ = lean_usize_add(v_x_1795_, v___x_1834_);
v___x_1836_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_node_1828_, v___x_1833_, v___x_1835_, v_x_1796_, v_x_1797_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1836_);
v___x_1838_ = v___x_1830_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
v___y_1811_ = v___x_1838_;
goto v___jp_1810_;
}
}
}
default: 
{
lean_object* v___x_1841_; 
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v_x_1796_);
lean_ctor_set(v___x_1841_, 1, v_x_1797_);
v___y_1811_ = v___x_1841_;
goto v___jp_1810_;
}
}
v___jp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = lean_array_fset(v_xs_x27_1809_, v_j_1801_, v___y_1811_);
lean_dec(v_j_1801_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 0, v___x_1812_);
v___x_1814_ = v___x_1805_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
}
else
{
lean_object* v_ks_1844_; lean_object* v_vs_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1863_; 
v_ks_1844_ = lean_ctor_get(v_x_1793_, 0);
v_vs_1845_ = lean_ctor_get(v_x_1793_, 1);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_x_1793_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1847_ = v_x_1793_;
v_isShared_1848_ = v_isSharedCheck_1863_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_vs_1845_);
lean_inc(v_ks_1844_);
lean_dec(v_x_1793_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1863_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_ks_1844_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v_vs_1845_);
v___x_1850_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v_newNode_1851_; size_t v___x_1852_; uint8_t v___x_1853_; 
v_newNode_1851_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1850_, v_x_1796_, v_x_1797_);
v___x_1852_ = ((size_t)7ULL);
v___x_1853_ = lean_usize_dec_le(v___x_1852_, v_x_1795_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1854_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1851_);
v___x_1855_ = lean_unsigned_to_nat(4u);
v___x_1856_ = lean_nat_dec_lt(v___x_1854_, v___x_1855_);
lean_dec(v___x_1854_);
if (v___x_1856_ == 0)
{
lean_object* v_ks_1857_; lean_object* v_vs_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v_ks_1857_ = lean_ctor_get(v_newNode_1851_, 0);
lean_inc_ref(v_ks_1857_);
v_vs_1858_ = lean_ctor_get(v_newNode_1851_, 1);
lean_inc_ref(v_vs_1858_);
lean_dec_ref(v_newNode_1851_);
v___x_1859_ = lean_unsigned_to_nat(0u);
v___x_1860_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_1861_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1795_, v_ks_1857_, v_vs_1858_, v___x_1859_, v___x_1860_);
lean_dec_ref(v_vs_1858_);
lean_dec_ref(v_ks_1857_);
return v___x_1861_;
}
else
{
return v_newNode_1851_;
}
}
else
{
return v_newNode_1851_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1864_, lean_object* v_keys_1865_, lean_object* v_vals_1866_, lean_object* v_i_1867_, lean_object* v_entries_1868_){
_start:
{
lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1869_ = lean_array_get_size(v_keys_1865_);
v___x_1870_ = lean_nat_dec_lt(v_i_1867_, v___x_1869_);
if (v___x_1870_ == 0)
{
lean_dec(v_i_1867_);
return v_entries_1868_;
}
else
{
lean_object* v_k_1871_; lean_object* v_v_1872_; uint64_t v___x_1873_; size_t v_h_1874_; size_t v___x_1875_; lean_object* v___x_1876_; size_t v___x_1877_; size_t v___x_1878_; size_t v___x_1879_; size_t v_h_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v_k_1871_ = lean_array_fget_borrowed(v_keys_1865_, v_i_1867_);
v_v_1872_ = lean_array_fget_borrowed(v_vals_1866_, v_i_1867_);
v___x_1873_ = l_Lean_instHashableMVarId_hash(v_k_1871_);
v_h_1874_ = lean_uint64_to_usize(v___x_1873_);
v___x_1875_ = ((size_t)5ULL);
v___x_1876_ = lean_unsigned_to_nat(1u);
v___x_1877_ = ((size_t)1ULL);
v___x_1878_ = lean_usize_sub(v_depth_1864_, v___x_1877_);
v___x_1879_ = lean_usize_mul(v___x_1875_, v___x_1878_);
v_h_1880_ = lean_usize_shift_right(v_h_1874_, v___x_1879_);
v___x_1881_ = lean_nat_add(v_i_1867_, v___x_1876_);
lean_dec(v_i_1867_);
lean_inc(v_v_1872_);
lean_inc(v_k_1871_);
v___x_1882_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_entries_1868_, v_h_1880_, v_depth_1864_, v_k_1871_, v_v_1872_);
v_i_1867_ = v___x_1881_;
v_entries_1868_ = v___x_1882_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1884_, lean_object* v_keys_1885_, lean_object* v_vals_1886_, lean_object* v_i_1887_, lean_object* v_entries_1888_){
_start:
{
size_t v_depth_boxed_1889_; lean_object* v_res_1890_; 
v_depth_boxed_1889_ = lean_unbox_usize(v_depth_1884_);
lean_dec(v_depth_1884_);
v_res_1890_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1889_, v_keys_1885_, v_vals_1886_, v_i_1887_, v_entries_1888_);
lean_dec_ref(v_vals_1886_);
lean_dec_ref(v_keys_1885_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1891_, lean_object* v_x_1892_, lean_object* v_x_1893_, lean_object* v_x_1894_, lean_object* v_x_1895_){
_start:
{
size_t v_x_1147__boxed_1896_; size_t v_x_1148__boxed_1897_; lean_object* v_res_1898_; 
v_x_1147__boxed_1896_ = lean_unbox_usize(v_x_1892_);
lean_dec(v_x_1892_);
v_x_1148__boxed_1897_ = lean_unbox_usize(v_x_1893_);
lean_dec(v_x_1893_);
v_res_1898_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1891_, v_x_1147__boxed_1896_, v_x_1148__boxed_1897_, v_x_1894_, v_x_1895_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object* v_x_1899_, lean_object* v_x_1900_, lean_object* v_x_1901_){
_start:
{
uint64_t v___x_1902_; size_t v___x_1903_; size_t v___x_1904_; lean_object* v___x_1905_; 
v___x_1902_ = l_Lean_instHashableMVarId_hash(v_x_1900_);
v___x_1903_ = lean_uint64_to_usize(v___x_1902_);
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1899_, v___x_1903_, v___x_1904_, v_x_1900_, v_x_1901_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object* v_mvarId_1906_, lean_object* v_val_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v___x_1910_; lean_object* v_mctx_1911_; lean_object* v_cache_1912_; lean_object* v_zetaDeltaFVarIds_1913_; lean_object* v_postponed_1914_; lean_object* v_diag_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1943_; 
v___x_1910_ = lean_st_ref_take(v___y_1908_);
v_mctx_1911_ = lean_ctor_get(v___x_1910_, 0);
v_cache_1912_ = lean_ctor_get(v___x_1910_, 1);
v_zetaDeltaFVarIds_1913_ = lean_ctor_get(v___x_1910_, 2);
v_postponed_1914_ = lean_ctor_get(v___x_1910_, 3);
v_diag_1915_ = lean_ctor_get(v___x_1910_, 4);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1917_ = v___x_1910_;
v_isShared_1918_ = v_isSharedCheck_1943_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_diag_1915_);
lean_inc(v_postponed_1914_);
lean_inc(v_zetaDeltaFVarIds_1913_);
lean_inc(v_cache_1912_);
lean_inc(v_mctx_1911_);
lean_dec(v___x_1910_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1943_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v_depth_1919_; lean_object* v_levelAssignDepth_1920_; lean_object* v_lmvarCounter_1921_; lean_object* v_mvarCounter_1922_; lean_object* v_lDecls_1923_; lean_object* v_decls_1924_; lean_object* v_userNames_1925_; lean_object* v_lAssignment_1926_; lean_object* v_eAssignment_1927_; lean_object* v_dAssignment_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1942_; 
v_depth_1919_ = lean_ctor_get(v_mctx_1911_, 0);
v_levelAssignDepth_1920_ = lean_ctor_get(v_mctx_1911_, 1);
v_lmvarCounter_1921_ = lean_ctor_get(v_mctx_1911_, 2);
v_mvarCounter_1922_ = lean_ctor_get(v_mctx_1911_, 3);
v_lDecls_1923_ = lean_ctor_get(v_mctx_1911_, 4);
v_decls_1924_ = lean_ctor_get(v_mctx_1911_, 5);
v_userNames_1925_ = lean_ctor_get(v_mctx_1911_, 6);
v_lAssignment_1926_ = lean_ctor_get(v_mctx_1911_, 7);
v_eAssignment_1927_ = lean_ctor_get(v_mctx_1911_, 8);
v_dAssignment_1928_ = lean_ctor_get(v_mctx_1911_, 9);
v_isSharedCheck_1942_ = !lean_is_exclusive(v_mctx_1911_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1930_ = v_mctx_1911_;
v_isShared_1931_ = v_isSharedCheck_1942_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_dAssignment_1928_);
lean_inc(v_eAssignment_1927_);
lean_inc(v_lAssignment_1926_);
lean_inc(v_userNames_1925_);
lean_inc(v_decls_1924_);
lean_inc(v_lDecls_1923_);
lean_inc(v_mvarCounter_1922_);
lean_inc(v_lmvarCounter_1921_);
lean_inc(v_levelAssignDepth_1920_);
lean_inc(v_depth_1919_);
lean_dec(v_mctx_1911_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1942_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1932_ = lean_box(0);
v___x_1933_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_eAssignment_1927_, v_mvarId_1906_, v_val_1907_);
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 8, v___x_1933_);
v___x_1935_ = v___x_1930_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_depth_1919_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v_levelAssignDepth_1920_);
lean_ctor_set(v_reuseFailAlloc_1941_, 2, v_lmvarCounter_1921_);
lean_ctor_set(v_reuseFailAlloc_1941_, 3, v_mvarCounter_1922_);
lean_ctor_set(v_reuseFailAlloc_1941_, 4, v_lDecls_1923_);
lean_ctor_set(v_reuseFailAlloc_1941_, 5, v_decls_1924_);
lean_ctor_set(v_reuseFailAlloc_1941_, 6, v_userNames_1925_);
lean_ctor_set(v_reuseFailAlloc_1941_, 7, v_lAssignment_1926_);
lean_ctor_set(v_reuseFailAlloc_1941_, 8, v___x_1933_);
lean_ctor_set(v_reuseFailAlloc_1941_, 9, v_dAssignment_1928_);
v___x_1935_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
lean_object* v___x_1937_; 
if (v_isShared_1918_ == 0)
{
lean_ctor_set(v___x_1917_, 0, v___x_1935_);
v___x_1937_ = v___x_1917_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1935_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_cache_1912_);
lean_ctor_set(v_reuseFailAlloc_1940_, 2, v_zetaDeltaFVarIds_1913_);
lean_ctor_set(v_reuseFailAlloc_1940_, 3, v_postponed_1914_);
lean_ctor_set(v_reuseFailAlloc_1940_, 4, v_diag_1915_);
v___x_1937_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = lean_st_ref_put(v___y_1908_, v___x_1937_);
v___x_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1932_);
return v___x_1939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object* v_mvarId_1944_, lean_object* v_val_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1944_, v_val_1945_, v___y_1946_);
lean_dec(v___y_1946_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object* v_type_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v___x_1955_; 
lean_inc(v_a_1953_);
lean_inc_ref(v_a_1952_);
lean_inc(v_a_1951_);
lean_inc_ref(v_a_1950_);
lean_inc_ref(v_type_1949_);
v___x_1955_ = lean_infer_type(v_type_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1957_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___x_1955_, 1);
v___x_1957_ = l_Lean_Meta_whnfD(v_a_1956_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1992_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1992_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1992_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
switch(lean_obj_tag(v_a_1958_))
{
case 3:
{
lean_object* v_u_1962_; lean_object* v___x_1964_; 
lean_dec_ref(v_type_1949_);
v_u_1962_ = lean_ctor_get(v_a_1958_, 0);
lean_inc(v_u_1962_);
lean_dec_ref_known(v_a_1958_, 1);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v_u_1962_);
v___x_1964_ = v___x_1960_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_u_1962_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
case 2:
{
lean_object* v_mvarId_1966_; lean_object* v___x_1967_; 
lean_del_object(v___x_1960_);
v_mvarId_1966_ = lean_ctor_get(v_a_1958_, 0);
lean_inc_n(v_mvarId_1966_, 2);
lean_dec_ref_known(v_a_1958_, 1);
v___x_1967_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1966_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; uint8_t v___x_1969_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v___x_1969_ = lean_unbox(v_a_1968_);
lean_dec(v_a_1968_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; 
lean_dec_ref(v_type_1949_);
v___x_1970_ = l_Lean_Meta_mkFreshLevelMVar(v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc_n(v_a_1971_, 2);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = l_Lean_mkSort(v_a_1971_);
v___x_1973_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1966_, v___x_1972_, v_a_1951_);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1980_ == 0)
{
lean_object* v_unused_1981_; 
v_unused_1981_ = lean_ctor_get(v___x_1973_, 0);
lean_dec(v_unused_1981_);
v___x_1975_ = v___x_1973_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_dec(v___x_1973_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v_a_1971_);
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1971_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
else
{
lean_dec(v_mvarId_1966_);
return v___x_1970_;
}
}
else
{
lean_object* v___x_1982_; 
lean_dec(v_mvarId_1966_);
v___x_1982_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
return v___x_1982_;
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
lean_dec(v_mvarId_1966_);
lean_dec_ref(v_type_1949_);
v_a_1983_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1985_ = v___x_1967_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___x_1967_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
default: 
{
lean_object* v___x_1991_; 
lean_del_object(v___x_1960_);
lean_dec(v_a_1958_);
v___x_1991_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
return v___x_1991_;
}
}
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
lean_dec_ref(v_type_1949_);
v_a_1993_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1957_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1957_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
else
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2008_; 
lean_dec_ref(v_type_1949_);
v_a_2001_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2003_ = v___x_1955_;
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_1955_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2006_; 
if (v_isShared_2004_ == 0)
{
v___x_2006_ = v___x_2003_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_2001_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object* v_type_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_Meta_getLevel(v_type_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_);
lean_dec(v_a_2013_);
lean_dec_ref(v_a_2012_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object* v_mvarId_2016_, lean_object* v_val_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_2016_, v_val_2017_, v___y_2019_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object* v_mvarId_2024_, lean_object* v_val_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(v_mvarId_2024_, v_val_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object* v_00_u03b2_2032_, lean_object* v_x_2033_, lean_object* v_x_2034_, lean_object* v_x_2035_){
_start:
{
lean_object* v___x_2036_; 
v___x_2036_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_x_2033_, v_x_2034_, v_x_2035_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2037_, lean_object* v_x_2038_, size_t v_x_2039_, size_t v_x_2040_, lean_object* v_x_2041_, lean_object* v_x_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_2038_, v_x_2039_, v_x_2040_, v_x_2041_, v_x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2044_, lean_object* v_x_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_, lean_object* v_x_2048_, lean_object* v_x_2049_){
_start:
{
size_t v_x_1496__boxed_2050_; size_t v_x_1497__boxed_2051_; lean_object* v_res_2052_; 
v_x_1496__boxed_2050_ = lean_unbox_usize(v_x_2046_);
lean_dec(v_x_2046_);
v_x_1497__boxed_2051_ = lean_unbox_usize(v_x_2047_);
lean_dec(v_x_2047_);
v_res_2052_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(v_00_u03b2_2044_, v_x_2045_, v_x_1496__boxed_2050_, v_x_1497__boxed_2051_, v_x_2048_, v_x_2049_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2053_, lean_object* v_n_2054_, lean_object* v_k_2055_, lean_object* v_v_2056_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v_n_2054_, v_k_2055_, v_v_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2058_, size_t v_depth_2059_, lean_object* v_keys_2060_, lean_object* v_vals_2061_, lean_object* v_heq_2062_, lean_object* v_i_2063_, lean_object* v_entries_2064_){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_2059_, v_keys_2060_, v_vals_2061_, v_i_2063_, v_entries_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2066_, lean_object* v_depth_2067_, lean_object* v_keys_2068_, lean_object* v_vals_2069_, lean_object* v_heq_2070_, lean_object* v_i_2071_, lean_object* v_entries_2072_){
_start:
{
size_t v_depth_boxed_2073_; lean_object* v_res_2074_; 
v_depth_boxed_2073_ = lean_unbox_usize(v_depth_2067_);
lean_dec(v_depth_2067_);
v_res_2074_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2066_, v_depth_boxed_2073_, v_keys_2068_, v_vals_2069_, v_heq_2070_, v_i_2071_, v_entries_2072_);
lean_dec_ref(v_vals_2069_);
lean_dec_ref(v_keys_2068_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2075_, lean_object* v_x_2076_, lean_object* v_x_2077_, lean_object* v_x_2078_, lean_object* v_x_2079_){
_start:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2076_, v_x_2077_, v_x_2078_, v_x_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object* v_k_2081_, lean_object* v_b_2082_, lean_object* v_c_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v___x_2089_; 
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
lean_inc(v___y_2085_);
lean_inc_ref(v___y_2084_);
v___x_2089_ = lean_apply_7(v_k_2081_, v_b_2082_, v_c_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, lean_box(0));
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object* v_k_2090_, lean_object* v_b_2091_, lean_object* v_c_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(v_k_2090_, v_b_2091_, v_c_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object* v_type_2099_, lean_object* v_k_2100_, uint8_t v_cleanupAnnotations_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
lean_object* v___f_2107_; uint8_t v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___f_2107_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2107_, 0, v_k_2100_);
v___x_2108_ = 0;
v___x_2109_ = lean_box(0);
v___x_2110_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2108_, v___x_2109_, v_type_2099_, v___f_2107_, v_cleanupAnnotations_2101_, v___x_2108_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_2110_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2110_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
v_a_2119_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2110_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2110_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object* v_type_2127_, lean_object* v_k_2128_, lean_object* v_cleanupAnnotations_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2135_; lean_object* v_res_2136_; 
v_cleanupAnnotations_boxed_2135_ = lean_unbox(v_cleanupAnnotations_2129_);
v_res_2136_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2127_, v_k_2128_, v_cleanupAnnotations_boxed_2135_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object* v_00_u03b1_2137_, lean_object* v_type_2138_, lean_object* v_k_2139_, uint8_t v_cleanupAnnotations_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2138_, v_k_2139_, v_cleanupAnnotations_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object* v_00_u03b1_2147_, lean_object* v_type_2148_, lean_object* v_k_2149_, lean_object* v_cleanupAnnotations_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2156_; lean_object* v_res_2157_; 
v_cleanupAnnotations_boxed_2156_ = lean_unbox(v_cleanupAnnotations_2150_);
v_res_2157_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(v_00_u03b1_2147_, v_type_2148_, v_k_2149_, v_cleanupAnnotations_boxed_2156_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object* v_as_2158_, size_t v_i_2159_, size_t v_stop_2160_, lean_object* v_b_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
uint8_t v___x_2167_; 
v___x_2167_ = lean_usize_dec_eq(v_i_2159_, v_stop_2160_);
if (v___x_2167_ == 0)
{
size_t v___x_2168_; size_t v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2168_ = ((size_t)1ULL);
v___x_2169_ = lean_usize_sub(v_i_2159_, v___x_2168_);
v___x_2170_ = lean_array_uget_borrowed(v_as_2158_, v___x_2169_);
lean_inc(v___y_2165_);
lean_inc_ref(v___y_2164_);
lean_inc(v___y_2163_);
lean_inc_ref(v___y_2162_);
lean_inc(v___x_2170_);
v___x_2171_ = lean_infer_type(v___x_2170_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2173_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref_known(v___x_2171_, 1);
v___x_2173_ = l_Lean_Meta_getLevel(v_a_2172_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2175_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v___x_2175_ = l_Lean_mkLevelIMax_x27(v_a_2174_, v_b_2161_);
v_i_2159_ = v___x_2169_;
v_b_2161_ = v___x_2175_;
goto _start;
}
else
{
lean_dec(v_b_2161_);
return v___x_2173_;
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec(v_b_2161_);
v_a_2177_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2171_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2171_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_b_2161_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object* v_as_2186_, lean_object* v_i_2187_, lean_object* v_stop_2188_, lean_object* v_b_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
size_t v_i_boxed_2195_; size_t v_stop_boxed_2196_; lean_object* v_res_2197_; 
v_i_boxed_2195_ = lean_unbox_usize(v_i_2187_);
lean_dec(v_i_2187_);
v_stop_boxed_2196_ = lean_unbox_usize(v_stop_2188_);
lean_dec(v_stop_2188_);
v_res_2197_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_as_2186_, v_i_boxed_2195_, v_stop_boxed_2196_, v_b_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec_ref(v_as_2186_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object* v_xs_2198_, lean_object* v_e_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_a_2206_; lean_object* v___x_2210_; 
v___x_2210_ = l_Lean_Meta_getLevel(v_e_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v___x_2212_ = lean_array_get_size(v_xs_2198_);
v___x_2213_ = lean_unsigned_to_nat(0u);
v___x_2214_ = lean_nat_dec_lt(v___x_2213_, v___x_2212_);
if (v___x_2214_ == 0)
{
v_a_2206_ = v_a_2211_;
goto v___jp_2205_;
}
else
{
size_t v___x_2215_; size_t v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = lean_usize_of_nat(v___x_2212_);
v___x_2216_ = ((size_t)0ULL);
v___x_2217_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_xs_2198_, v___x_2215_, v___x_2216_, v_a_2211_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v_a_2206_ = v_a_2218_;
goto v___jp_2205_;
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
v_a_2219_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2217_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2217_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
v_a_2227_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2210_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2210_);
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
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_2205_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2207_ = l_Lean_Level_normalize(v_a_2206_);
lean_dec(v_a_2206_);
v___x_2208_ = l_Lean_mkSort(v___x_2207_);
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2208_);
return v___x_2209_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object* v_xs_2235_, lean_object* v_e_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(v_xs_2235_, v_e_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec_ref(v_xs_2235_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object* v_e_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v___f_2250_; uint8_t v___x_2251_; lean_object* v___x_2252_; 
v___f_2250_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0));
v___x_2251_ = 0;
v___x_2252_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_e_2244_, v___f_2250_, v___x_2251_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object* v_e_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object* v_e_2260_, lean_object* v_k_2261_, uint8_t v_cleanupAnnotations_2262_, uint8_t v_preserveNondepLet_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v___f_2269_; uint8_t v___x_2270_; uint8_t v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___f_2269_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2269_, 0, v_k_2261_);
v___x_2270_ = 1;
v___x_2271_ = 0;
v___x_2272_ = lean_box(0);
v___x_2273_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2260_, v___x_2270_, v___x_2270_, v_preserveNondepLet_2263_, v___x_2271_, v___x_2272_, v___f_2269_, v_cleanupAnnotations_2262_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2273_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2273_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
v_a_2282_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2273_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2273_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object* v_e_2290_, lean_object* v_k_2291_, lean_object* v_cleanupAnnotations_2292_, lean_object* v_preserveNondepLet_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2299_; uint8_t v_preserveNondepLet_boxed_2300_; lean_object* v_res_2301_; 
v_cleanupAnnotations_boxed_2299_ = lean_unbox(v_cleanupAnnotations_2292_);
v_preserveNondepLet_boxed_2300_ = lean_unbox(v_preserveNondepLet_2293_);
v_res_2301_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2290_, v_k_2291_, v_cleanupAnnotations_boxed_2299_, v_preserveNondepLet_boxed_2300_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object* v_00_u03b1_2302_, lean_object* v_e_2303_, lean_object* v_k_2304_, uint8_t v_cleanupAnnotations_2305_, uint8_t v_preserveNondepLet_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v___x_2312_; 
v___x_2312_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2303_, v_k_2304_, v_cleanupAnnotations_2305_, v_preserveNondepLet_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object* v_00_u03b1_2313_, lean_object* v_e_2314_, lean_object* v_k_2315_, lean_object* v_cleanupAnnotations_2316_, lean_object* v_preserveNondepLet_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2323_; uint8_t v_preserveNondepLet_boxed_2324_; lean_object* v_res_2325_; 
v_cleanupAnnotations_boxed_2323_ = lean_unbox(v_cleanupAnnotations_2316_);
v_preserveNondepLet_boxed_2324_ = lean_unbox(v_preserveNondepLet_2317_);
v_res_2325_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(v_00_u03b1_2313_, v_e_2314_, v_k_2315_, v_cleanupAnnotations_boxed_2323_, v_preserveNondepLet_boxed_2324_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object* v_xs_2326_, lean_object* v_e_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v___x_2333_; 
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
v___x_2333_ = lean_infer_type(v_e_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; uint8_t v___x_2335_; uint8_t v___x_2336_; uint8_t v___x_2337_; lean_object* v___x_2338_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v___x_2335_ = 0;
v___x_2336_ = 1;
v___x_2337_ = 1;
v___x_2338_ = l_Lean_Meta_mkForallFVars(v_xs_2326_, v_a_2334_, v___x_2335_, v___x_2336_, v___x_2335_, v___x_2337_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
return v___x_2338_;
}
else
{
return v___x_2333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object* v_xs_2339_, lean_object* v_e_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(v_xs_2339_, v_e_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_);
lean_dec(v___y_2344_);
lean_dec_ref(v___y_2343_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec_ref(v_xs_2339_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object* v_e_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v___f_2354_; uint8_t v___x_2355_; uint8_t v___x_2356_; lean_object* v___x_2357_; 
v___f_2354_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0));
v___x_2355_ = 0;
v___x_2356_ = 1;
v___x_2357_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2348_, v___f_2354_, v___x_2355_, v___x_2356_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object* v_e_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
return v_res_2364_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1(void){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__0));
v___x_2367_ = l_Lean_stringToMessageData(v___x_2366_);
return v___x_2367_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3(void){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__2));
v___x_2370_ = l_Lean_stringToMessageData(v___x_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object* v_mvarId_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2377_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__1, &l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1);
v___x_2378_ = l_Lean_MessageData_ofName(v_mvarId_2371_);
v___x_2379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2377_);
lean_ctor_set(v___x_2379_, 1, v___x_2378_);
v___x_2380_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__3, &l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3);
v___x_2381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2379_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_2381_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object* v_mvarId_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_);
lean_dec(v_a_2387_);
lean_dec_ref(v_a_2386_);
lean_dec(v_a_2385_);
lean_dec_ref(v_a_2384_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object* v_00_u03b1_2390_, lean_object* v_mvarId_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object* v_00_u03b1_2398_, lean_object* v_mvarId_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_Lean_Meta_throwUnknownMVar(v_00_u03b1_2398_, v_mvarId_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_);
lean_dec(v_a_2403_);
lean_dec_ref(v_a_2402_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object* v_mvarId_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_){
_start:
{
lean_object* v___x_2412_; lean_object* v_mctx_2413_; lean_object* v___x_2414_; 
v___x_2412_ = lean_st_ref_get(v_a_2408_);
v_mctx_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc_ref(v_mctx_2413_);
lean_dec(v___x_2412_);
v___x_2414_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2413_, v_mvarId_2406_);
lean_dec_ref(v_mctx_2413_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_);
return v___x_2415_;
}
else
{
lean_object* v_val_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2424_; 
lean_dec(v_mvarId_2406_);
v_val_2416_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2418_ = v___x_2414_;
v_isShared_2419_ = v_isSharedCheck_2424_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_val_2416_);
lean_dec(v___x_2414_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2424_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v_type_2420_; lean_object* v___x_2422_; 
v_type_2420_ = lean_ctor_get(v_val_2416_, 2);
lean_inc_ref(v_type_2420_);
lean_dec(v_val_2416_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set_tag(v___x_2418_, 0);
lean_ctor_set(v___x_2418_, 0, v_type_2420_);
v___x_2422_ = v___x_2418_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_type_2420_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object* v_mvarId_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object* v_fvarId_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_){
_start:
{
lean_object* v_lctx_2437_; lean_object* v___x_2438_; 
v_lctx_2437_ = lean_ctor_get(v_a_2433_, 2);
lean_inc(v_fvarId_2432_);
lean_inc_ref(v_lctx_2437_);
v___x_2438_ = lean_local_ctx_find(v_lctx_2437_, v_fvarId_2432_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_FVarId_throwUnknown___redArg(v_fvarId_2432_, v_a_2434_, v_a_2435_);
return v___x_2439_;
}
else
{
lean_object* v_val_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2448_; 
lean_dec(v_fvarId_2432_);
v_val_2440_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2442_ = v___x_2438_;
v_isShared_2443_ = v_isSharedCheck_2448_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_val_2440_);
lean_dec(v___x_2438_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2448_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2444_ = l_Lean_LocalDecl_type(v_val_2440_);
lean_dec(v_val_2440_);
if (v_isShared_2443_ == 0)
{
lean_ctor_set_tag(v___x_2442_, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2444_);
v___x_2446_ = v___x_2442_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v___x_2444_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object* v_fvarId_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2449_, v_a_2450_, v_a_2451_, v_a_2452_);
lean_dec(v_a_2452_);
lean_dec_ref(v_a_2451_);
lean_dec_ref(v_a_2450_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object* v_fvarId_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v___x_2461_; 
v___x_2461_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2455_, v_a_2456_, v_a_2458_, v_a_2459_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object* v_fvarId_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(v_fvarId_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_);
lean_dec(v_a_2466_);
lean_dec_ref(v_a_2465_);
lean_dec(v_a_2464_);
lean_dec_ref(v_a_2463_);
return v_res_2468_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lam__0(lean_object* v_a_2469_, lean_object* v_b_2470_){
_start:
{
lean_object* v_expr_2471_; uint64_t v_configKey_2472_; lean_object* v_expr_2473_; uint64_t v_configKey_2474_; uint64_t v___x_2475_; uint64_t v___x_2476_; uint64_t v___x_2477_; uint64_t v___x_2478_; uint8_t v___x_2479_; 
v_expr_2471_ = lean_ctor_get(v_a_2469_, 0);
v_configKey_2472_ = lean_ctor_get_uint64(v_a_2469_, sizeof(void*)*1);
v_expr_2473_ = lean_ctor_get(v_b_2470_, 0);
v_configKey_2474_ = lean_ctor_get_uint64(v_b_2470_, sizeof(void*)*1);
v___x_2475_ = l_Lean_Expr_hash(v_expr_2471_);
v___x_2476_ = lean_uint64_mix_hash(v___x_2475_, v_configKey_2472_);
v___x_2477_ = l_Lean_Expr_hash(v_expr_2473_);
v___x_2478_ = lean_uint64_mix_hash(v___x_2477_, v_configKey_2474_);
v___x_2479_ = lean_uint64_dec_eq(v___x_2476_, v___x_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lam__0___boxed(lean_object* v_a_2480_, lean_object* v_b_2481_){
_start:
{
uint8_t v_res_2482_; lean_object* v_r_2483_; 
v_res_2482_ = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___lam__0(v_a_2480_, v_b_2481_);
lean_dec_ref(v_b_2481_);
lean_dec_ref(v_a_2480_);
v_r_2483_ = lean_box(v_res_2482_);
return v_r_2483_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0(void){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l_instMonadEIO___redArg();
return v___x_2484_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1(void){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0);
v___x_2486_ = l_StateRefT_x27_instMonad___redArg(v___x_2485_);
return v___x_2486_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4(void){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = l_instMonadExceptOfEIO___redArg();
return v___x_2489_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___f_2491_; 
v___x_2490_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4);
v___f_2491_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2491_, 0, v___x_2490_);
return v___f_2491_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6(void){
_start:
{
lean_object* v___x_2492_; lean_object* v___f_2493_; 
v___x_2492_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4);
v___f_2493_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2493_, 0, v___x_2492_);
return v___f_2493_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7(void){
_start:
{
lean_object* v___f_2494_; lean_object* v___f_2495_; lean_object* v___x_2496_; 
v___f_2494_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6);
v___f_2495_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___f_2495_);
lean_ctor_set(v___x_2496_, 1, v___f_2494_);
return v___x_2496_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8(void){
_start:
{
lean_object* v___x_2497_; lean_object* v___f_2498_; 
v___x_2497_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7);
v___f_2498_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2498_, 0, v___x_2497_);
return v___f_2498_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9(void){
_start:
{
lean_object* v___x_2499_; lean_object* v___f_2500_; 
v___x_2499_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7);
v___f_2500_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2500_, 0, v___x_2499_);
return v___f_2500_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10(void){
_start:
{
lean_object* v___f_2501_; lean_object* v___f_2502_; lean_object* v___x_2503_; 
v___f_2501_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9);
v___f_2502_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___f_2502_);
lean_ctor_set(v___x_2503_, 1, v___f_2501_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object* v_e_2506_, lean_object* v_inferType_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_){
_start:
{
uint8_t v_cacheInferType_2552_; 
v_cacheInferType_2552_ = lean_ctor_get_uint8(v_a_2508_, sizeof(void*)*7 + 3);
if (v_cacheInferType_2552_ == 0)
{
lean_dec_ref(v_e_2506_);
goto v___jp_2513_;
}
else
{
uint8_t v___x_2553_; 
v___x_2553_ = l_Lean_Expr_hasMVar(v_e_2506_);
if (v___x_2553_ == 0)
{
lean_object* v___f_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___f_2554_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11));
v___x_2555_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12));
v___x_2556_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2506_, v_a_2508_);
if (lean_obj_tag(v___x_2556_) == 0)
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2686_; 
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2559_ = v___x_2556_;
v_isShared_2560_ = v_isSharedCheck_2686_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2556_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2686_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2639_; lean_object* v_cache_2640_; lean_object* v_inferType_2641_; lean_object* v___x_2642_; 
v___x_2639_ = lean_st_ref_get(v_a_2509_);
v_cache_2640_ = lean_ctor_get(v___x_2639_, 1);
lean_inc_ref(v_cache_2640_);
lean_dec(v___x_2639_);
v_inferType_2641_ = lean_ctor_get(v_cache_2640_, 0);
lean_inc_ref(v_inferType_2641_);
lean_dec_ref(v_cache_2640_);
lean_inc(v_a_2557_);
v___x_2642_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v___f_2554_, v___x_2555_, v_inferType_2641_, v_a_2557_);
if (lean_obj_tag(v___x_2642_) == 1)
{
lean_object* v_val_2643_; lean_object* v_fst_2644_; lean_object* v_snd_2645_; lean_object* v_expr_2646_; uint64_t v_configKey_2647_; lean_object* v_expr_2648_; uint64_t v_configKey_2649_; uint8_t v___x_2650_; 
v_val_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_val_2643_);
lean_dec_ref_known(v___x_2642_, 1);
v_fst_2644_ = lean_ctor_get(v_val_2643_, 0);
lean_inc(v_fst_2644_);
v_snd_2645_ = lean_ctor_get(v_val_2643_, 1);
lean_inc(v_snd_2645_);
lean_dec(v_val_2643_);
v_expr_2646_ = lean_ctor_get(v_a_2557_, 0);
v_configKey_2647_ = lean_ctor_get_uint64(v_a_2557_, sizeof(void*)*1);
v_expr_2648_ = lean_ctor_get(v_fst_2644_, 0);
lean_inc_ref(v_expr_2648_);
v_configKey_2649_ = lean_ctor_get_uint64(v_fst_2644_, sizeof(void*)*1);
lean_dec(v_fst_2644_);
v___x_2650_ = lean_uint64_dec_eq(v_configKey_2647_, v_configKey_2649_);
if (v___x_2650_ == 0)
{
lean_dec_ref(v_expr_2648_);
lean_dec(v_snd_2645_);
lean_dec_ref(v_inferType_2641_);
lean_del_object(v___x_2559_);
goto v___jp_2603_;
}
else
{
size_t v___x_2651_; uint8_t v___x_2652_; 
v___x_2651_ = ((size_t)64ULL);
v___x_2652_ = lean_expr_equal_budgeted(v_expr_2646_, v_expr_2648_, v___x_2651_);
lean_dec_ref(v_expr_2648_);
switch(v___x_2652_)
{
case 0:
{
lean_dec(v_snd_2645_);
lean_dec_ref(v_inferType_2641_);
lean_del_object(v___x_2559_);
goto v___jp_2603_;
}
case 1:
{
lean_object* v___x_2654_; 
lean_dec_ref(v_inferType_2641_);
lean_dec(v_a_2557_);
lean_dec_ref(v_inferType_2507_);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v_snd_2645_);
v___x_2654_ = v___x_2559_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_snd_2645_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
default: 
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v_cache_2658_; lean_object* v_mctx_2659_; lean_object* v_zetaDeltaFVarIds_2660_; lean_object* v_postponed_2661_; lean_object* v_diag_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2685_; 
lean_dec(v_snd_2645_);
lean_del_object(v___x_2559_);
lean_inc(v_a_2557_);
v___x_2656_ = l_Lean_PersistentHashMap_erase___redArg(v___f_2554_, v___x_2555_, v_inferType_2641_, v_a_2557_);
v___x_2657_ = lean_st_ref_take(v_a_2509_);
v_cache_2658_ = lean_ctor_get(v___x_2657_, 1);
v_mctx_2659_ = lean_ctor_get(v___x_2657_, 0);
v_zetaDeltaFVarIds_2660_ = lean_ctor_get(v___x_2657_, 2);
v_postponed_2661_ = lean_ctor_get(v___x_2657_, 3);
v_diag_2662_ = lean_ctor_get(v___x_2657_, 4);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2664_ = v___x_2657_;
v_isShared_2665_ = v_isSharedCheck_2685_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_diag_2662_);
lean_inc(v_postponed_2661_);
lean_inc(v_zetaDeltaFVarIds_2660_);
lean_inc(v_cache_2658_);
lean_inc(v_mctx_2659_);
lean_dec(v___x_2657_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2685_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v_funInfo_2666_; lean_object* v_synthInstance_2667_; lean_object* v_whnf_2668_; lean_object* v_defEqTrans_2669_; lean_object* v_defEqPerm_2670_; lean_object* v_isUnitLike_2671_; lean_object* v_unfold_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2683_; 
v_funInfo_2666_ = lean_ctor_get(v_cache_2658_, 1);
v_synthInstance_2667_ = lean_ctor_get(v_cache_2658_, 2);
v_whnf_2668_ = lean_ctor_get(v_cache_2658_, 3);
v_defEqTrans_2669_ = lean_ctor_get(v_cache_2658_, 4);
v_defEqPerm_2670_ = lean_ctor_get(v_cache_2658_, 5);
v_isUnitLike_2671_ = lean_ctor_get(v_cache_2658_, 6);
v_unfold_2672_ = lean_ctor_get(v_cache_2658_, 7);
v_isSharedCheck_2683_ = !lean_is_exclusive(v_cache_2658_);
if (v_isSharedCheck_2683_ == 0)
{
lean_object* v_unused_2684_; 
v_unused_2684_ = lean_ctor_get(v_cache_2658_, 0);
lean_dec(v_unused_2684_);
v___x_2674_ = v_cache_2658_;
v_isShared_2675_ = v_isSharedCheck_2683_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_unfold_2672_);
lean_inc(v_isUnitLike_2671_);
lean_inc(v_defEqPerm_2670_);
lean_inc(v_defEqTrans_2669_);
lean_inc(v_whnf_2668_);
lean_inc(v_synthInstance_2667_);
lean_inc(v_funInfo_2666_);
lean_dec(v_cache_2658_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2683_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2656_);
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2656_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v_funInfo_2666_);
lean_ctor_set(v_reuseFailAlloc_2682_, 2, v_synthInstance_2667_);
lean_ctor_set(v_reuseFailAlloc_2682_, 3, v_whnf_2668_);
lean_ctor_set(v_reuseFailAlloc_2682_, 4, v_defEqTrans_2669_);
lean_ctor_set(v_reuseFailAlloc_2682_, 5, v_defEqPerm_2670_);
lean_ctor_set(v_reuseFailAlloc_2682_, 6, v_isUnitLike_2671_);
lean_ctor_set(v_reuseFailAlloc_2682_, 7, v_unfold_2672_);
v___x_2677_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2679_; 
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 1, v___x_2677_);
v___x_2679_ = v___x_2664_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_mctx_2659_);
lean_ctor_set(v_reuseFailAlloc_2681_, 1, v___x_2677_);
lean_ctor_set(v_reuseFailAlloc_2681_, 2, v_zetaDeltaFVarIds_2660_);
lean_ctor_set(v_reuseFailAlloc_2681_, 3, v_postponed_2661_);
lean_ctor_set(v_reuseFailAlloc_2681_, 4, v_diag_2662_);
v___x_2679_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
lean_object* v___x_2680_; 
v___x_2680_ = lean_st_ref_put(v_a_2509_, v___x_2679_);
goto v___jp_2603_;
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
lean_dec(v___x_2642_);
lean_dec_ref(v_inferType_2641_);
lean_del_object(v___x_2559_);
goto v___jp_2603_;
}
v___jp_2561_:
{
lean_object* v___x_2562_; 
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
lean_inc(v_a_2509_);
lean_inc_ref(v_a_2508_);
v___x_2562_ = lean_apply_5(v_inferType_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, lean_box(0));
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; uint8_t v___x_2564_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc(v_a_2563_);
v___x_2564_ = l_Lean_Expr_hasMVar(v_a_2563_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2601_; 
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2601_ == 0)
{
lean_object* v_unused_2602_; 
v_unused_2602_ = lean_ctor_get(v___x_2562_, 0);
lean_dec(v_unused_2602_);
v___x_2566_ = v___x_2562_;
v_isShared_2567_ = v_isSharedCheck_2601_;
goto v_resetjp_2565_;
}
else
{
lean_dec(v___x_2562_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2601_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v_cache_2569_; lean_object* v_mctx_2570_; lean_object* v_zetaDeltaFVarIds_2571_; lean_object* v_postponed_2572_; lean_object* v_diag_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2600_; 
v___x_2568_ = lean_st_ref_take(v_a_2509_);
v_cache_2569_ = lean_ctor_get(v___x_2568_, 1);
v_mctx_2570_ = lean_ctor_get(v___x_2568_, 0);
v_zetaDeltaFVarIds_2571_ = lean_ctor_get(v___x_2568_, 2);
v_postponed_2572_ = lean_ctor_get(v___x_2568_, 3);
v_diag_2573_ = lean_ctor_get(v___x_2568_, 4);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2575_ = v___x_2568_;
v_isShared_2576_ = v_isSharedCheck_2600_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_diag_2573_);
lean_inc(v_postponed_2572_);
lean_inc(v_zetaDeltaFVarIds_2571_);
lean_inc(v_cache_2569_);
lean_inc(v_mctx_2570_);
lean_dec(v___x_2568_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2600_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v_inferType_2577_; lean_object* v_funInfo_2578_; lean_object* v_synthInstance_2579_; lean_object* v_whnf_2580_; lean_object* v_defEqTrans_2581_; lean_object* v_defEqPerm_2582_; lean_object* v_isUnitLike_2583_; lean_object* v_unfold_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2599_; 
v_inferType_2577_ = lean_ctor_get(v_cache_2569_, 0);
v_funInfo_2578_ = lean_ctor_get(v_cache_2569_, 1);
v_synthInstance_2579_ = lean_ctor_get(v_cache_2569_, 2);
v_whnf_2580_ = lean_ctor_get(v_cache_2569_, 3);
v_defEqTrans_2581_ = lean_ctor_get(v_cache_2569_, 4);
v_defEqPerm_2582_ = lean_ctor_get(v_cache_2569_, 5);
v_isUnitLike_2583_ = lean_ctor_get(v_cache_2569_, 6);
v_unfold_2584_ = lean_ctor_get(v_cache_2569_, 7);
v_isSharedCheck_2599_ = !lean_is_exclusive(v_cache_2569_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2586_ = v_cache_2569_;
v_isShared_2587_ = v_isSharedCheck_2599_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_unfold_2584_);
lean_inc(v_isUnitLike_2583_);
lean_inc(v_defEqPerm_2582_);
lean_inc(v_defEqTrans_2581_);
lean_inc(v_whnf_2580_);
lean_inc(v_synthInstance_2579_);
lean_inc(v_funInfo_2578_);
lean_inc(v_inferType_2577_);
lean_dec(v_cache_2569_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2599_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2588_; lean_object* v___x_2590_; 
lean_inc(v_a_2563_);
v___x_2588_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2554_, v___x_2555_, v_inferType_2577_, v_a_2557_, v_a_2563_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v___x_2588_);
v___x_2590_ = v___x_2586_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2588_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_funInfo_2578_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v_synthInstance_2579_);
lean_ctor_set(v_reuseFailAlloc_2598_, 3, v_whnf_2580_);
lean_ctor_set(v_reuseFailAlloc_2598_, 4, v_defEqTrans_2581_);
lean_ctor_set(v_reuseFailAlloc_2598_, 5, v_defEqPerm_2582_);
lean_ctor_set(v_reuseFailAlloc_2598_, 6, v_isUnitLike_2583_);
lean_ctor_set(v_reuseFailAlloc_2598_, 7, v_unfold_2584_);
v___x_2590_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
lean_object* v___x_2592_; 
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 1, v___x_2590_);
v___x_2592_ = v___x_2575_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_mctx_2570_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v___x_2590_);
lean_ctor_set(v_reuseFailAlloc_2597_, 2, v_zetaDeltaFVarIds_2571_);
lean_ctor_set(v_reuseFailAlloc_2597_, 3, v_postponed_2572_);
lean_ctor_set(v_reuseFailAlloc_2597_, 4, v_diag_2573_);
v___x_2592_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2593_; lean_object* v___x_2595_; 
v___x_2593_ = lean_st_ref_put(v_a_2509_, v___x_2592_);
if (v_isShared_2567_ == 0)
{
v___x_2595_ = v___x_2566_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2563_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2563_);
lean_dec(v_a_2557_);
return v___x_2562_;
}
}
else
{
lean_dec(v_a_2557_);
return v___x_2562_;
}
}
v___jp_2603_:
{
lean_object* v___x_2604_; lean_object* v_toApplicative_2605_; lean_object* v_toFunctor_2606_; lean_object* v_toSeq_2607_; lean_object* v_toSeqLeft_2608_; lean_object* v_toSeqRight_2609_; lean_object* v___f_2610_; lean_object* v___f_2611_; lean_object* v___f_2612_; lean_object* v___f_2613_; lean_object* v___x_2614_; lean_object* v___f_2615_; lean_object* v___f_2616_; lean_object* v___f_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v_toCold_2625_; lean_object* v_cancelTk_x3f_2626_; 
v___x_2604_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1);
v_toApplicative_2605_ = lean_ctor_get(v___x_2604_, 0);
v_toFunctor_2606_ = lean_ctor_get(v_toApplicative_2605_, 0);
v_toSeq_2607_ = lean_ctor_get(v_toApplicative_2605_, 2);
v_toSeqLeft_2608_ = lean_ctor_get(v_toApplicative_2605_, 3);
v_toSeqRight_2609_ = lean_ctor_get(v_toApplicative_2605_, 4);
v___f_2610_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2));
v___f_2611_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3));
lean_inc_ref_n(v_toFunctor_2606_, 2);
v___f_2612_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2612_, 0, v_toFunctor_2606_);
v___f_2613_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2613_, 0, v_toFunctor_2606_);
v___x_2614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___f_2612_);
lean_ctor_set(v___x_2614_, 1, v___f_2613_);
lean_inc(v_toSeqRight_2609_);
v___f_2615_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2615_, 0, v_toSeqRight_2609_);
lean_inc(v_toSeqLeft_2608_);
v___f_2616_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2616_, 0, v_toSeqLeft_2608_);
lean_inc(v_toSeq_2607_);
v___f_2617_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2617_, 0, v_toSeq_2607_);
v___x_2618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2614_);
lean_ctor_set(v___x_2618_, 1, v___f_2610_);
lean_ctor_set(v___x_2618_, 2, v___f_2617_);
lean_ctor_set(v___x_2618_, 3, v___f_2616_);
lean_ctor_set(v___x_2618_, 4, v___f_2615_);
v___x_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v___f_2611_);
v___x_2620_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10);
v___x_2621_ = l_Lean_Core_instMonadRefCoreM;
v___x_2622_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2623_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2622_, v___x_2619_);
v___x_2624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2620_);
lean_ctor_set(v___x_2624_, 1, v___x_2621_);
lean_ctor_set(v___x_2624_, 2, v___x_2623_);
v_toCold_2625_ = lean_ctor_get(v_a_2510_, 0);
v_cancelTk_x3f_2626_ = lean_ctor_get(v_toCold_2625_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2626_) == 1)
{
lean_object* v_val_2627_; uint8_t v___x_2628_; 
v_val_2627_ = lean_ctor_get(v_cancelTk_x3f_2626_, 0);
v___x_2628_ = l_IO_CancelToken_isSet(v_val_2627_);
if (v___x_2628_ == 0)
{
lean_dec_ref_known(v___x_2624_, 3);
goto v___jp_2561_;
}
else
{
lean_object* v___x_4256__overap_2629_; lean_object* v___x_2630_; 
v___x_4256__overap_2629_ = l_Lean_throwInterruptException___redArg(v___x_2624_);
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
v___x_2630_ = lean_apply_3(v___x_4256__overap_2629_, v_a_2510_, v_a_2511_, lean_box(0));
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_dec_ref_known(v___x_2630_, 1);
goto v___jp_2561_;
}
else
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2638_; 
lean_dec(v_a_2557_);
lean_dec_ref(v_inferType_2507_);
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2633_ = v___x_2630_;
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2630_);
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
}
else
{
lean_dec_ref_known(v___x_2624_, 3);
goto v___jp_2561_;
}
}
}
}
else
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2694_; 
lean_dec_ref(v_inferType_2507_);
v_a_2687_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2689_ = v___x_2556_;
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2556_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2690_ == 0)
{
v___x_2692_ = v___x_2689_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2687_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
else
{
lean_dec_ref(v_e_2506_);
goto v___jp_2513_;
}
}
v___jp_2513_:
{
lean_object* v___x_2514_; lean_object* v_toApplicative_2515_; lean_object* v_toFunctor_2516_; lean_object* v_toSeq_2517_; lean_object* v_toSeqLeft_2518_; lean_object* v_toSeqRight_2519_; lean_object* v___f_2520_; lean_object* v___f_2521_; lean_object* v___f_2522_; lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v___f_2525_; lean_object* v___f_2526_; lean_object* v___f_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v_toCold_2535_; lean_object* v_cancelTk_x3f_2536_; 
v___x_2514_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1);
v_toApplicative_2515_ = lean_ctor_get(v___x_2514_, 0);
v_toFunctor_2516_ = lean_ctor_get(v_toApplicative_2515_, 0);
v_toSeq_2517_ = lean_ctor_get(v_toApplicative_2515_, 2);
v_toSeqLeft_2518_ = lean_ctor_get(v_toApplicative_2515_, 3);
v_toSeqRight_2519_ = lean_ctor_get(v_toApplicative_2515_, 4);
v___f_2520_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2));
v___f_2521_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3));
lean_inc_ref_n(v_toFunctor_2516_, 2);
v___f_2522_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2522_, 0, v_toFunctor_2516_);
v___f_2523_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2523_, 0, v_toFunctor_2516_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___f_2522_);
lean_ctor_set(v___x_2524_, 1, v___f_2523_);
lean_inc(v_toSeqRight_2519_);
v___f_2525_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2525_, 0, v_toSeqRight_2519_);
lean_inc(v_toSeqLeft_2518_);
v___f_2526_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2526_, 0, v_toSeqLeft_2518_);
lean_inc(v_toSeq_2517_);
v___f_2527_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2527_, 0, v_toSeq_2517_);
v___x_2528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2524_);
lean_ctor_set(v___x_2528_, 1, v___f_2520_);
lean_ctor_set(v___x_2528_, 2, v___f_2527_);
lean_ctor_set(v___x_2528_, 3, v___f_2526_);
lean_ctor_set(v___x_2528_, 4, v___f_2525_);
v___x_2529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
lean_ctor_set(v___x_2529_, 1, v___f_2521_);
v___x_2530_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10);
v___x_2531_ = l_Lean_Core_instMonadRefCoreM;
v___x_2532_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2533_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2532_, v___x_2529_);
v___x_2534_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2530_);
lean_ctor_set(v___x_2534_, 1, v___x_2531_);
lean_ctor_set(v___x_2534_, 2, v___x_2533_);
v_toCold_2535_ = lean_ctor_get(v_a_2510_, 0);
v_cancelTk_x3f_2536_ = lean_ctor_get(v_toCold_2535_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2536_) == 1)
{
lean_object* v_val_2537_; uint8_t v___x_2538_; 
v_val_2537_ = lean_ctor_get(v_cancelTk_x3f_2536_, 0);
v___x_2538_ = l_IO_CancelToken_isSet(v_val_2537_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; 
lean_dec_ref_known(v___x_2534_, 3);
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
lean_inc(v_a_2509_);
lean_inc_ref(v_a_2508_);
v___x_2539_ = lean_apply_5(v_inferType_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, lean_box(0));
return v___x_2539_;
}
else
{
lean_object* v___x_4231__overap_2540_; lean_object* v___x_2541_; 
v___x_4231__overap_2540_ = l_Lean_throwInterruptException___redArg(v___x_2534_);
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
v___x_2541_ = lean_apply_3(v___x_4231__overap_2540_, v_a_2510_, v_a_2511_, lean_box(0));
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v___x_2542_; 
lean_dec_ref_known(v___x_2541_, 1);
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
lean_inc(v_a_2509_);
lean_inc_ref(v_a_2508_);
v___x_2542_ = lean_apply_5(v_inferType_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, lean_box(0));
return v___x_2542_;
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec_ref(v_inferType_2507_);
v_a_2543_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2541_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2541_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
}
else
{
lean_object* v___x_2551_; 
lean_dec_ref_known(v___x_2534_, 3);
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
lean_inc(v_a_2509_);
lean_inc_ref(v_a_2508_);
v___x_2551_ = lean_apply_5(v_inferType_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, lean_box(0));
return v___x_2551_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object* v_e_2695_, lean_object* v_inferType_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(v_e_2695_, v_inferType_2696_, v_a_2697_, v_a_2698_, v_a_2699_, v_a_2700_);
lean_dec(v_a_2700_);
lean_dec_ref(v_a_2699_);
lean_dec(v_a_2698_);
lean_dec_ref(v_a_2697_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0(lean_object* v_x_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
lean_object* v___x_2755_; uint8_t v_beta_2756_; 
v___x_2755_ = l_Lean_Meta_Context_config(v___y_2704_);
v_beta_2756_ = lean_ctor_get_uint8(v___x_2755_, 13);
if (v_beta_2756_ == 0)
{
lean_dec_ref(v___x_2755_);
goto v___jp_2709_;
}
else
{
uint8_t v_iota_2757_; 
v_iota_2757_ = lean_ctor_get_uint8(v___x_2755_, 12);
if (v_iota_2757_ == 0)
{
lean_dec_ref(v___x_2755_);
goto v___jp_2709_;
}
else
{
uint8_t v_zeta_2758_; 
v_zeta_2758_ = lean_ctor_get_uint8(v___x_2755_, 15);
if (v_zeta_2758_ == 0)
{
lean_dec_ref(v___x_2755_);
goto v___jp_2709_;
}
else
{
uint8_t v_zetaHave_2759_; 
v_zetaHave_2759_ = lean_ctor_get_uint8(v___x_2755_, 18);
if (v_zetaHave_2759_ == 0)
{
lean_dec_ref(v___x_2755_);
goto v___jp_2709_;
}
else
{
uint8_t v_zetaDelta_2760_; 
v_zetaDelta_2760_ = lean_ctor_get_uint8(v___x_2755_, 16);
if (v_zetaDelta_2760_ == 0)
{
lean_dec_ref(v___x_2755_);
goto v___jp_2709_;
}
else
{
uint8_t v_etaStruct_2761_; uint8_t v_proj_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; uint8_t v___x_2766_; 
v_etaStruct_2761_ = lean_ctor_get_uint8(v___x_2755_, 10);
v_proj_2762_ = lean_ctor_get_uint8(v___x_2755_, 14);
lean_dec_ref(v___x_2755_);
v___x_2763_ = lean_box(v_proj_2762_);
v___x_2764_ = lean_obj_tag_nat(v___x_2763_);
lean_dec(v___x_2763_);
v___x_2765_ = lean_unsigned_to_nat(2u);
v___x_2766_ = lean_nat_dec_eq(v___x_2764_, v___x_2765_);
if (v___x_2766_ == 0)
{
goto v___jp_2709_;
}
else
{
uint8_t v___x_2767_; uint8_t v___x_2768_; 
v___x_2767_ = 0;
v___x_2768_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_2761_, v___x_2767_);
if (v___x_2768_ == 0)
{
goto v___jp_2709_;
}
else
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_apply_5(v_x_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, lean_box(0));
return v___x_2769_;
}
}
}
}
}
}
}
v___jp_2709_:
{
lean_object* v___x_2710_; uint8_t v_foApprox_2711_; uint8_t v_ctxApprox_2712_; uint8_t v_quasiPatternApprox_2713_; uint8_t v_constApprox_2714_; uint8_t v_isDefEqStuckEx_2715_; uint8_t v_unificationHints_2716_; uint8_t v_proofIrrelevance_2717_; uint8_t v_assignSyntheticOpaque_2718_; uint8_t v_offsetCnstrs_2719_; uint8_t v_transparency_2720_; uint8_t v_univApprox_2721_; uint8_t v_zetaUnused_2722_; uint8_t v_canUnfoldPredicateConfig_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2754_; 
v___x_2710_ = l_Lean_Meta_Context_config(v___y_2704_);
v_foApprox_2711_ = lean_ctor_get_uint8(v___x_2710_, 0);
v_ctxApprox_2712_ = lean_ctor_get_uint8(v___x_2710_, 1);
v_quasiPatternApprox_2713_ = lean_ctor_get_uint8(v___x_2710_, 2);
v_constApprox_2714_ = lean_ctor_get_uint8(v___x_2710_, 3);
v_isDefEqStuckEx_2715_ = lean_ctor_get_uint8(v___x_2710_, 4);
v_unificationHints_2716_ = lean_ctor_get_uint8(v___x_2710_, 5);
v_proofIrrelevance_2717_ = lean_ctor_get_uint8(v___x_2710_, 6);
v_assignSyntheticOpaque_2718_ = lean_ctor_get_uint8(v___x_2710_, 7);
v_offsetCnstrs_2719_ = lean_ctor_get_uint8(v___x_2710_, 8);
v_transparency_2720_ = lean_ctor_get_uint8(v___x_2710_, 9);
v_univApprox_2721_ = lean_ctor_get_uint8(v___x_2710_, 11);
v_zetaUnused_2722_ = lean_ctor_get_uint8(v___x_2710_, 17);
v_canUnfoldPredicateConfig_2723_ = lean_ctor_get_uint8(v___x_2710_, 19);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2725_ = v___x_2710_;
v_isShared_2726_ = v_isSharedCheck_2754_;
goto v_resetjp_2724_;
}
else
{
lean_dec(v___x_2710_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2754_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
uint8_t v___x_2727_; uint8_t v___x_2728_; uint8_t v___x_2729_; lean_object* v___x_2731_; 
v___x_2727_ = 1;
v___x_2728_ = 0;
v___x_2729_ = 2;
if (v_isShared_2726_ == 0)
{
v___x_2731_ = v___x_2725_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 0, v_foApprox_2711_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 1, v_ctxApprox_2712_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 2, v_quasiPatternApprox_2713_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 3, v_constApprox_2714_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 4, v_isDefEqStuckEx_2715_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 5, v_unificationHints_2716_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 6, v_proofIrrelevance_2717_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 7, v_assignSyntheticOpaque_2718_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 8, v_offsetCnstrs_2719_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 9, v_transparency_2720_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 11, v_univApprox_2721_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 17, v_zetaUnused_2722_);
lean_ctor_set_uint8(v_reuseFailAlloc_2753_, 19, v_canUnfoldPredicateConfig_2723_);
v___x_2731_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
uint8_t v_trackZetaDelta_2732_; lean_object* v_zetaDeltaSet_2733_; lean_object* v_lctx_2734_; lean_object* v_localInstances_2735_; lean_object* v_defEqCtx_x3f_2736_; lean_object* v_synthPendingDepth_2737_; lean_object* v_customCanUnfoldPredicate_x3f_2738_; uint8_t v_univApprox_2739_; uint8_t v_inTypeClassResolution_2740_; uint8_t v_cacheInferType_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2751_; 
lean_ctor_set_uint8(v___x_2731_, 10, v___x_2728_);
lean_ctor_set_uint8(v___x_2731_, 12, v___x_2727_);
lean_ctor_set_uint8(v___x_2731_, 13, v___x_2727_);
lean_ctor_set_uint8(v___x_2731_, 14, v___x_2729_);
lean_ctor_set_uint8(v___x_2731_, 15, v___x_2727_);
lean_ctor_set_uint8(v___x_2731_, 16, v___x_2727_);
lean_ctor_set_uint8(v___x_2731_, 18, v___x_2727_);
v_trackZetaDelta_2732_ = lean_ctor_get_uint8(v___y_2704_, sizeof(void*)*7);
v_zetaDeltaSet_2733_ = lean_ctor_get(v___y_2704_, 1);
v_lctx_2734_ = lean_ctor_get(v___y_2704_, 2);
v_localInstances_2735_ = lean_ctor_get(v___y_2704_, 3);
v_defEqCtx_x3f_2736_ = lean_ctor_get(v___y_2704_, 4);
v_synthPendingDepth_2737_ = lean_ctor_get(v___y_2704_, 5);
v_customCanUnfoldPredicate_x3f_2738_ = lean_ctor_get(v___y_2704_, 6);
v_univApprox_2739_ = lean_ctor_get_uint8(v___y_2704_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2740_ = lean_ctor_get_uint8(v___y_2704_, sizeof(void*)*7 + 2);
v_cacheInferType_2741_ = lean_ctor_get_uint8(v___y_2704_, sizeof(void*)*7 + 3);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___y_2704_);
if (v_isSharedCheck_2751_ == 0)
{
lean_object* v_unused_2752_; 
v_unused_2752_ = lean_ctor_get(v___y_2704_, 0);
lean_dec(v_unused_2752_);
v___x_2743_ = v___y_2704_;
v_isShared_2744_ = v_isSharedCheck_2751_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_2738_);
lean_inc(v_synthPendingDepth_2737_);
lean_inc(v_defEqCtx_x3f_2736_);
lean_inc(v_localInstances_2735_);
lean_inc(v_lctx_2734_);
lean_inc(v_zetaDeltaSet_2733_);
lean_dec(v___y_2704_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2751_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
uint64_t v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2748_; 
v___x_2745_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2731_);
v___x_2746_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2746_, 0, v___x_2731_);
lean_ctor_set_uint64(v___x_2746_, sizeof(void*)*1, v___x_2745_);
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 0, v___x_2746_);
v___x_2748_ = v___x_2743_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v___x_2746_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v_zetaDeltaSet_2733_);
lean_ctor_set(v_reuseFailAlloc_2750_, 2, v_lctx_2734_);
lean_ctor_set(v_reuseFailAlloc_2750_, 3, v_localInstances_2735_);
lean_ctor_set(v_reuseFailAlloc_2750_, 4, v_defEqCtx_x3f_2736_);
lean_ctor_set(v_reuseFailAlloc_2750_, 5, v_synthPendingDepth_2737_);
lean_ctor_set(v_reuseFailAlloc_2750_, 6, v_customCanUnfoldPredicate_x3f_2738_);
lean_ctor_set_uint8(v_reuseFailAlloc_2750_, sizeof(void*)*7, v_trackZetaDelta_2732_);
lean_ctor_set_uint8(v_reuseFailAlloc_2750_, sizeof(void*)*7 + 1, v_univApprox_2739_);
lean_ctor_set_uint8(v_reuseFailAlloc_2750_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2740_);
lean_ctor_set_uint8(v_reuseFailAlloc_2750_, sizeof(void*)*7 + 3, v_cacheInferType_2741_);
v___x_2748_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
lean_object* v___x_2749_; 
v___x_2749_ = lean_apply_5(v_x_2703_, v___x_2748_, v___y_2705_, v___y_2706_, v___y_2707_, lean_box(0));
return v___x_2749_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___boxed(lean_object* v_x_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object* v_x_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v___y_2784_; lean_object* v___x_2801_; uint8_t v_transparency_2802_; uint8_t v___x_2803_; uint8_t v___x_2804_; 
v___x_2801_ = l_Lean_Meta_Context_config(v_a_2778_);
v_transparency_2802_ = lean_ctor_get_uint8(v___x_2801_, 9);
lean_dec_ref(v___x_2801_);
v___x_2803_ = 1;
v___x_2804_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2802_, v___x_2803_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; 
lean_inc(v_a_2781_);
lean_inc_ref(v_a_2780_);
lean_inc(v_a_2779_);
lean_inc_ref(v_a_2778_);
v___x_2805_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_);
v___y_2784_ = v___x_2805_;
goto v___jp_2783_;
}
else
{
lean_object* v_keyedConfig_2806_; uint8_t v_trackZetaDelta_2807_; lean_object* v_zetaDeltaSet_2808_; lean_object* v_lctx_2809_; lean_object* v_localInstances_2810_; lean_object* v_defEqCtx_x3f_2811_; lean_object* v_synthPendingDepth_2812_; lean_object* v_customCanUnfoldPredicate_x3f_2813_; uint8_t v_univApprox_2814_; uint8_t v_inTypeClassResolution_2815_; uint8_t v_cacheInferType_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v_keyedConfig_2806_ = lean_ctor_get(v_a_2778_, 0);
v_trackZetaDelta_2807_ = lean_ctor_get_uint8(v_a_2778_, sizeof(void*)*7);
v_zetaDeltaSet_2808_ = lean_ctor_get(v_a_2778_, 1);
v_lctx_2809_ = lean_ctor_get(v_a_2778_, 2);
v_localInstances_2810_ = lean_ctor_get(v_a_2778_, 3);
v_defEqCtx_x3f_2811_ = lean_ctor_get(v_a_2778_, 4);
v_synthPendingDepth_2812_ = lean_ctor_get(v_a_2778_, 5);
v_customCanUnfoldPredicate_x3f_2813_ = lean_ctor_get(v_a_2778_, 6);
v_univApprox_2814_ = lean_ctor_get_uint8(v_a_2778_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2815_ = lean_ctor_get_uint8(v_a_2778_, sizeof(void*)*7 + 2);
v_cacheInferType_2816_ = lean_ctor_get_uint8(v_a_2778_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2806_);
v___x_2817_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2803_, v_keyedConfig_2806_);
lean_inc(v_customCanUnfoldPredicate_x3f_2813_);
lean_inc(v_synthPendingDepth_2812_);
lean_inc(v_defEqCtx_x3f_2811_);
lean_inc_ref(v_localInstances_2810_);
lean_inc_ref(v_lctx_2809_);
lean_inc(v_zetaDeltaSet_2808_);
v___x_2818_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2818_, 0, v___x_2817_);
lean_ctor_set(v___x_2818_, 1, v_zetaDeltaSet_2808_);
lean_ctor_set(v___x_2818_, 2, v_lctx_2809_);
lean_ctor_set(v___x_2818_, 3, v_localInstances_2810_);
lean_ctor_set(v___x_2818_, 4, v_defEqCtx_x3f_2811_);
lean_ctor_set(v___x_2818_, 5, v_synthPendingDepth_2812_);
lean_ctor_set(v___x_2818_, 6, v_customCanUnfoldPredicate_x3f_2813_);
lean_ctor_set_uint8(v___x_2818_, sizeof(void*)*7, v_trackZetaDelta_2807_);
lean_ctor_set_uint8(v___x_2818_, sizeof(void*)*7 + 1, v_univApprox_2814_);
lean_ctor_set_uint8(v___x_2818_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2815_);
lean_ctor_set_uint8(v___x_2818_, sizeof(void*)*7 + 3, v_cacheInferType_2816_);
lean_inc(v_a_2781_);
lean_inc_ref(v_a_2780_);
lean_inc(v_a_2779_);
v___x_2819_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2777_, v___x_2818_, v_a_2779_, v_a_2780_, v_a_2781_);
v___y_2784_ = v___x_2819_;
goto v___jp_2783_;
}
v___jp_2783_:
{
if (lean_obj_tag(v___y_2784_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
v_a_2785_ = lean_ctor_get(v___y_2784_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___y_2784_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___y_2784_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___y_2784_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
v_a_2793_ = lean_ctor_get(v___y_2784_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___y_2784_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___y_2784_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___y_2784_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object* v_x_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Meta_withInferTypeConfig___redArg(v_x_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object* v_00_u03b1_2827_, lean_object* v_x_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_){
_start:
{
lean_object* v___y_2835_; lean_object* v___x_2852_; uint8_t v_transparency_2853_; uint8_t v___x_2854_; uint8_t v___x_2855_; 
v___x_2852_ = l_Lean_Meta_Context_config(v_a_2829_);
v_transparency_2853_ = lean_ctor_get_uint8(v___x_2852_, 9);
lean_dec_ref(v___x_2852_);
v___x_2854_ = 1;
v___x_2855_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2853_, v___x_2854_);
if (v___x_2855_ == 0)
{
lean_object* v___x_2856_; 
lean_inc(v_a_2832_);
lean_inc_ref(v_a_2831_);
lean_inc(v_a_2830_);
lean_inc_ref(v_a_2829_);
v___x_2856_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2828_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_);
v___y_2835_ = v___x_2856_;
goto v___jp_2834_;
}
else
{
lean_object* v_keyedConfig_2857_; uint8_t v_trackZetaDelta_2858_; lean_object* v_zetaDeltaSet_2859_; lean_object* v_lctx_2860_; lean_object* v_localInstances_2861_; lean_object* v_defEqCtx_x3f_2862_; lean_object* v_synthPendingDepth_2863_; lean_object* v_customCanUnfoldPredicate_x3f_2864_; uint8_t v_univApprox_2865_; uint8_t v_inTypeClassResolution_2866_; uint8_t v_cacheInferType_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v_keyedConfig_2857_ = lean_ctor_get(v_a_2829_, 0);
v_trackZetaDelta_2858_ = lean_ctor_get_uint8(v_a_2829_, sizeof(void*)*7);
v_zetaDeltaSet_2859_ = lean_ctor_get(v_a_2829_, 1);
v_lctx_2860_ = lean_ctor_get(v_a_2829_, 2);
v_localInstances_2861_ = lean_ctor_get(v_a_2829_, 3);
v_defEqCtx_x3f_2862_ = lean_ctor_get(v_a_2829_, 4);
v_synthPendingDepth_2863_ = lean_ctor_get(v_a_2829_, 5);
v_customCanUnfoldPredicate_x3f_2864_ = lean_ctor_get(v_a_2829_, 6);
v_univApprox_2865_ = lean_ctor_get_uint8(v_a_2829_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2866_ = lean_ctor_get_uint8(v_a_2829_, sizeof(void*)*7 + 2);
v_cacheInferType_2867_ = lean_ctor_get_uint8(v_a_2829_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2857_);
v___x_2868_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2854_, v_keyedConfig_2857_);
lean_inc(v_customCanUnfoldPredicate_x3f_2864_);
lean_inc(v_synthPendingDepth_2863_);
lean_inc(v_defEqCtx_x3f_2862_);
lean_inc_ref(v_localInstances_2861_);
lean_inc_ref(v_lctx_2860_);
lean_inc(v_zetaDeltaSet_2859_);
v___x_2869_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
lean_ctor_set(v___x_2869_, 1, v_zetaDeltaSet_2859_);
lean_ctor_set(v___x_2869_, 2, v_lctx_2860_);
lean_ctor_set(v___x_2869_, 3, v_localInstances_2861_);
lean_ctor_set(v___x_2869_, 4, v_defEqCtx_x3f_2862_);
lean_ctor_set(v___x_2869_, 5, v_synthPendingDepth_2863_);
lean_ctor_set(v___x_2869_, 6, v_customCanUnfoldPredicate_x3f_2864_);
lean_ctor_set_uint8(v___x_2869_, sizeof(void*)*7, v_trackZetaDelta_2858_);
lean_ctor_set_uint8(v___x_2869_, sizeof(void*)*7 + 1, v_univApprox_2865_);
lean_ctor_set_uint8(v___x_2869_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2866_);
lean_ctor_set_uint8(v___x_2869_, sizeof(void*)*7 + 3, v_cacheInferType_2867_);
lean_inc(v_a_2832_);
lean_inc_ref(v_a_2831_);
lean_inc(v_a_2830_);
v___x_2870_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2828_, v___x_2869_, v_a_2830_, v_a_2831_, v_a_2832_);
v___y_2835_ = v___x_2870_;
goto v___jp_2834_;
}
v___jp_2834_:
{
if (lean_obj_tag(v___y_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
v_a_2836_ = lean_ctor_get(v___y_2835_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___y_2835_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___y_2835_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___y_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
v_a_2844_ = lean_ctor_get(v___y_2835_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___y_2835_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___y_2835_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___y_2835_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object* v_00_u03b1_2871_, lean_object* v_x_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_Meta_withInferTypeConfig(v_00_u03b1_2871_, v_x_2872_, v_a_2873_, v_a_2874_, v_a_2875_, v_a_2876_);
lean_dec(v_a_2876_);
lean_dec_ref(v_a_2875_);
lean_dec(v_a_2874_);
lean_dec_ref(v_a_2873_);
return v_res_2878_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2879_ = lean_box(0);
v___x_2880_ = l_Lean_interruptExceptionId;
v___x_2881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
lean_ctor_set(v___x_2881_, 1, v___x_2879_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(){
_start:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2883_ = lean_obj_once(&l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0, &l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0);
v___x_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object* v___y_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object* v_00_u03b1_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object* v_00_u03b1_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(v_00_u03b1_2892_, v___y_2893_, v___y_2894_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__5___redArg(lean_object* v_x_2897_, lean_object* v_x_2898_, lean_object* v_x_2899_, lean_object* v_x_2900_){
_start:
{
lean_object* v_ks_2901_; lean_object* v_vs_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2934_; 
v_ks_2901_ = lean_ctor_get(v_x_2897_, 0);
v_vs_2902_ = lean_ctor_get(v_x_2897_, 1);
v_isSharedCheck_2934_ = !lean_is_exclusive(v_x_2897_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2904_ = v_x_2897_;
v_isShared_2905_ = v_isSharedCheck_2934_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_vs_2902_);
lean_inc(v_ks_2901_);
lean_dec(v_x_2897_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2934_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2906_ = lean_array_get_size(v_ks_2901_);
v___x_2907_ = lean_nat_dec_lt(v_x_2898_, v___x_2906_);
if (v___x_2907_ == 0)
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2911_; 
lean_dec(v_x_2898_);
v___x_2908_ = lean_array_push(v_ks_2901_, v_x_2899_);
v___x_2909_ = lean_array_push(v_vs_2902_, v_x_2900_);
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_2909_);
lean_ctor_set(v___x_2904_, 0, v___x_2908_);
v___x_2911_ = v___x_2904_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2908_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v___x_2909_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
else
{
lean_object* v_expr_2913_; uint64_t v_configKey_2914_; lean_object* v_k_x27_2915_; lean_object* v_expr_2916_; uint64_t v_configKey_2917_; uint64_t v___x_2918_; uint64_t v___x_2919_; uint64_t v___x_2920_; uint64_t v___x_2921_; uint8_t v___x_2922_; 
v_expr_2913_ = lean_ctor_get(v_x_2899_, 0);
v_configKey_2914_ = lean_ctor_get_uint64(v_x_2899_, sizeof(void*)*1);
v_k_x27_2915_ = lean_array_fget_borrowed(v_ks_2901_, v_x_2898_);
v_expr_2916_ = lean_ctor_get(v_k_x27_2915_, 0);
v_configKey_2917_ = lean_ctor_get_uint64(v_k_x27_2915_, sizeof(void*)*1);
v___x_2918_ = l_Lean_Expr_hash(v_expr_2913_);
v___x_2919_ = lean_uint64_mix_hash(v___x_2918_, v_configKey_2914_);
v___x_2920_ = l_Lean_Expr_hash(v_expr_2916_);
v___x_2921_ = lean_uint64_mix_hash(v___x_2920_, v_configKey_2917_);
v___x_2922_ = lean_uint64_dec_eq(v___x_2919_, v___x_2921_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2924_; 
if (v_isShared_2905_ == 0)
{
v___x_2924_ = v___x_2904_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_ks_2901_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_vs_2902_);
v___x_2924_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2925_ = lean_unsigned_to_nat(1u);
v___x_2926_ = lean_nat_add(v_x_2898_, v___x_2925_);
lean_dec(v_x_2898_);
v_x_2897_ = v___x_2924_;
v_x_2898_ = v___x_2926_;
goto _start;
}
}
else
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2932_; 
v___x_2929_ = lean_array_fset(v_ks_2901_, v_x_2898_, v_x_2899_);
v___x_2930_ = lean_array_fset(v_vs_2902_, v_x_2898_, v_x_2900_);
lean_dec(v_x_2898_);
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_2930_);
lean_ctor_set(v___x_2904_, 0, v___x_2929_);
v___x_2932_ = v___x_2904_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v___x_2929_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v___x_2930_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object* v_n_2935_, lean_object* v_k_2936_, lean_object* v_v_2937_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_unsigned_to_nat(0u);
v___x_2939_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__5___redArg(v_n_2935_, v___x_2938_, v_k_2936_, v_v_2937_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object* v_x_2940_, size_t v_x_2941_, size_t v_x_2942_, lean_object* v_x_2943_, lean_object* v_x_2944_){
_start:
{
if (lean_obj_tag(v_x_2940_) == 0)
{
lean_object* v_es_2945_; size_t v___x_2946_; size_t v___x_2947_; lean_object* v_j_2948_; lean_object* v___x_2949_; uint8_t v___x_2950_; 
v_es_2945_ = lean_ctor_get(v_x_2940_, 0);
v___x_2946_ = ((size_t)31ULL);
v___x_2947_ = lean_usize_land(v_x_2941_, v___x_2946_);
v_j_2948_ = lean_usize_to_nat(v___x_2947_);
v___x_2949_ = lean_array_get_size(v_es_2945_);
v___x_2950_ = lean_nat_dec_lt(v_j_2948_, v___x_2949_);
if (v___x_2950_ == 0)
{
lean_dec(v_j_2948_);
lean_dec(v_x_2944_);
lean_dec_ref(v_x_2943_);
return v_x_2940_;
}
else
{
lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2997_; 
lean_inc_ref(v_es_2945_);
v_isSharedCheck_2997_ = !lean_is_exclusive(v_x_2940_);
if (v_isSharedCheck_2997_ == 0)
{
lean_object* v_unused_2998_; 
v_unused_2998_ = lean_ctor_get(v_x_2940_, 0);
lean_dec(v_unused_2998_);
v___x_2952_ = v_x_2940_;
v_isShared_2953_ = v_isSharedCheck_2997_;
goto v_resetjp_2951_;
}
else
{
lean_dec(v_x_2940_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2997_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v_v_2954_; lean_object* v___x_2955_; lean_object* v_xs_x27_2956_; lean_object* v___y_2958_; 
v_v_2954_ = lean_array_fget(v_es_2945_, v_j_2948_);
v___x_2955_ = lean_box(0);
v_xs_x27_2956_ = lean_array_fset(v_es_2945_, v_j_2948_, v___x_2955_);
switch(lean_obj_tag(v_v_2954_))
{
case 0:
{
lean_object* v_key_2963_; lean_object* v_val_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2982_; 
v_key_2963_ = lean_ctor_get(v_v_2954_, 0);
v_val_2964_ = lean_ctor_get(v_v_2954_, 1);
v_isSharedCheck_2982_ = !lean_is_exclusive(v_v_2954_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2966_ = v_v_2954_;
v_isShared_2967_ = v_isSharedCheck_2982_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_val_2964_);
lean_inc(v_key_2963_);
lean_dec(v_v_2954_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2982_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v_expr_2968_; uint64_t v_configKey_2969_; lean_object* v_expr_2970_; uint64_t v_configKey_2971_; uint64_t v___x_2972_; uint64_t v___x_2973_; uint64_t v___x_2974_; uint64_t v___x_2975_; uint8_t v___x_2976_; 
v_expr_2968_ = lean_ctor_get(v_x_2943_, 0);
v_configKey_2969_ = lean_ctor_get_uint64(v_x_2943_, sizeof(void*)*1);
v_expr_2970_ = lean_ctor_get(v_key_2963_, 0);
v_configKey_2971_ = lean_ctor_get_uint64(v_key_2963_, sizeof(void*)*1);
v___x_2972_ = l_Lean_Expr_hash(v_expr_2968_);
v___x_2973_ = lean_uint64_mix_hash(v___x_2972_, v_configKey_2969_);
v___x_2974_ = l_Lean_Expr_hash(v_expr_2970_);
v___x_2975_ = lean_uint64_mix_hash(v___x_2974_, v_configKey_2971_);
v___x_2976_ = lean_uint64_dec_eq(v___x_2973_, v___x_2975_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_del_object(v___x_2966_);
v___x_2977_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2963_, v_val_2964_, v_x_2943_, v_x_2944_);
v___x_2978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
v___y_2958_ = v___x_2978_;
goto v___jp_2957_;
}
else
{
lean_object* v___x_2980_; 
lean_dec(v_val_2964_);
lean_dec(v_key_2963_);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 1, v_x_2944_);
lean_ctor_set(v___x_2966_, 0, v_x_2943_);
v___x_2980_ = v___x_2966_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_x_2943_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v_x_2944_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
v___y_2958_ = v___x_2980_;
goto v___jp_2957_;
}
}
}
}
case 1:
{
lean_object* v_node_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2995_; 
v_node_2983_ = lean_ctor_get(v_v_2954_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v_v_2954_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2985_ = v_v_2954_;
v_isShared_2986_ = v_isSharedCheck_2995_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_node_2983_);
lean_dec(v_v_2954_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2995_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
size_t v___x_2987_; size_t v___x_2988_; size_t v___x_2989_; size_t v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2993_; 
v___x_2987_ = ((size_t)5ULL);
v___x_2988_ = lean_usize_shift_right(v_x_2941_, v___x_2987_);
v___x_2989_ = ((size_t)1ULL);
v___x_2990_ = lean_usize_add(v_x_2942_, v___x_2989_);
v___x_2991_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_node_2983_, v___x_2988_, v___x_2990_, v_x_2943_, v_x_2944_);
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 0, v___x_2991_);
v___x_2993_ = v___x_2985_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2991_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
v___y_2958_ = v___x_2993_;
goto v___jp_2957_;
}
}
}
default: 
{
lean_object* v___x_2996_; 
v___x_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2996_, 0, v_x_2943_);
lean_ctor_set(v___x_2996_, 1, v_x_2944_);
v___y_2958_ = v___x_2996_;
goto v___jp_2957_;
}
}
v___jp_2957_:
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2959_ = lean_array_fset(v_xs_x27_2956_, v_j_2948_, v___y_2958_);
lean_dec(v_j_2948_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2959_);
v___x_2961_ = v___x_2952_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
}
else
{
lean_object* v_ks_2999_; lean_object* v_vs_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3018_; 
v_ks_2999_ = lean_ctor_get(v_x_2940_, 0);
v_vs_3000_ = lean_ctor_get(v_x_2940_, 1);
v_isSharedCheck_3018_ = !lean_is_exclusive(v_x_2940_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3002_ = v_x_2940_;
v_isShared_3003_ = v_isSharedCheck_3018_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_vs_3000_);
lean_inc(v_ks_2999_);
lean_dec(v_x_2940_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3018_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_ks_2999_);
lean_ctor_set(v_reuseFailAlloc_3017_, 1, v_vs_3000_);
v___x_3005_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v_newNode_3006_; size_t v___x_3007_; uint8_t v___x_3008_; 
v_newNode_3006_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v___x_3005_, v_x_2943_, v_x_2944_);
v___x_3007_ = ((size_t)7ULL);
v___x_3008_ = lean_usize_dec_le(v___x_3007_, v_x_2942_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; 
v___x_3009_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3006_);
v___x_3010_ = lean_unsigned_to_nat(4u);
v___x_3011_ = lean_nat_dec_lt(v___x_3009_, v___x_3010_);
lean_dec(v___x_3009_);
if (v___x_3011_ == 0)
{
lean_object* v_ks_3012_; lean_object* v_vs_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v_ks_3012_ = lean_ctor_get(v_newNode_3006_, 0);
lean_inc_ref(v_ks_3012_);
v_vs_3013_ = lean_ctor_get(v_newNode_3006_, 1);
lean_inc_ref(v_vs_3013_);
lean_dec_ref(v_newNode_3006_);
v___x_3014_ = lean_unsigned_to_nat(0u);
v___x_3015_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3016_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_x_2942_, v_ks_3012_, v_vs_3013_, v___x_3014_, v___x_3015_);
lean_dec_ref(v_vs_3013_);
lean_dec_ref(v_ks_3012_);
return v___x_3016_;
}
else
{
return v_newNode_3006_;
}
}
else
{
return v_newNode_3006_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t v_depth_3019_, lean_object* v_keys_3020_, lean_object* v_vals_3021_, lean_object* v_i_3022_, lean_object* v_entries_3023_){
_start:
{
lean_object* v___x_3024_; uint8_t v___x_3025_; 
v___x_3024_ = lean_array_get_size(v_keys_3020_);
v___x_3025_ = lean_nat_dec_lt(v_i_3022_, v___x_3024_);
if (v___x_3025_ == 0)
{
lean_dec(v_i_3022_);
return v_entries_3023_;
}
else
{
lean_object* v_k_3026_; lean_object* v_expr_3027_; uint64_t v_configKey_3028_; lean_object* v_v_3029_; uint64_t v___x_3030_; uint64_t v___x_3031_; size_t v_h_3032_; size_t v___x_3033_; lean_object* v___x_3034_; size_t v___x_3035_; size_t v___x_3036_; size_t v___x_3037_; size_t v_h_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v_k_3026_ = lean_array_fget_borrowed(v_keys_3020_, v_i_3022_);
v_expr_3027_ = lean_ctor_get(v_k_3026_, 0);
v_configKey_3028_ = lean_ctor_get_uint64(v_k_3026_, sizeof(void*)*1);
v_v_3029_ = lean_array_fget_borrowed(v_vals_3021_, v_i_3022_);
v___x_3030_ = l_Lean_Expr_hash(v_expr_3027_);
v___x_3031_ = lean_uint64_mix_hash(v___x_3030_, v_configKey_3028_);
v_h_3032_ = lean_uint64_to_usize(v___x_3031_);
v___x_3033_ = ((size_t)5ULL);
v___x_3034_ = lean_unsigned_to_nat(1u);
v___x_3035_ = ((size_t)1ULL);
v___x_3036_ = lean_usize_sub(v_depth_3019_, v___x_3035_);
v___x_3037_ = lean_usize_mul(v___x_3033_, v___x_3036_);
v_h_3038_ = lean_usize_shift_right(v_h_3032_, v___x_3037_);
v___x_3039_ = lean_nat_add(v_i_3022_, v___x_3034_);
lean_dec(v_i_3022_);
lean_inc(v_v_3029_);
lean_inc(v_k_3026_);
v___x_3040_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_entries_3023_, v_h_3038_, v_depth_3019_, v_k_3026_, v_v_3029_);
v_i_3022_ = v___x_3039_;
v_entries_3023_ = v___x_3040_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_depth_3042_, lean_object* v_keys_3043_, lean_object* v_vals_3044_, lean_object* v_i_3045_, lean_object* v_entries_3046_){
_start:
{
size_t v_depth_boxed_3047_; lean_object* v_res_3048_; 
v_depth_boxed_3047_ = lean_unbox_usize(v_depth_3042_);
lean_dec(v_depth_3042_);
v_res_3048_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_boxed_3047_, v_keys_3043_, v_vals_3044_, v_i_3045_, v_entries_3046_);
lean_dec_ref(v_vals_3044_);
lean_dec_ref(v_keys_3043_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object* v_x_3049_, lean_object* v_x_3050_, lean_object* v_x_3051_, lean_object* v_x_3052_, lean_object* v_x_3053_){
_start:
{
size_t v_x_3776__boxed_3054_; size_t v_x_3777__boxed_3055_; lean_object* v_res_3056_; 
v_x_3776__boxed_3054_ = lean_unbox_usize(v_x_3050_);
lean_dec(v_x_3050_);
v_x_3777__boxed_3055_ = lean_unbox_usize(v_x_3051_);
lean_dec(v_x_3051_);
v_res_3056_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_3049_, v_x_3776__boxed_3054_, v_x_3777__boxed_3055_, v_x_3052_, v_x_3053_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object* v_x_3057_, lean_object* v_x_3058_, lean_object* v_x_3059_){
_start:
{
lean_object* v_expr_3060_; uint64_t v_configKey_3061_; uint64_t v___x_3062_; uint64_t v___x_3063_; size_t v___x_3064_; size_t v___x_3065_; lean_object* v___x_3066_; 
v_expr_3060_ = lean_ctor_get(v_x_3058_, 0);
v_configKey_3061_ = lean_ctor_get_uint64(v_x_3058_, sizeof(void*)*1);
v___x_3062_ = l_Lean_Expr_hash(v_expr_3060_);
v___x_3063_ = lean_uint64_mix_hash(v___x_3062_, v_configKey_3061_);
v___x_3064_ = lean_uint64_to_usize(v___x_3063_);
v___x_3065_ = ((size_t)1ULL);
v___x_3066_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_3057_, v___x_3064_, v___x_3065_, v_x_3058_, v_x_3059_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object* v_keys_3067_, lean_object* v_vals_3068_, lean_object* v_i_3069_, lean_object* v_k_3070_){
_start:
{
lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3071_ = lean_array_get_size(v_keys_3067_);
v___x_3072_ = lean_nat_dec_lt(v_i_3069_, v___x_3071_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; 
lean_dec(v_i_3069_);
v___x_3073_ = lean_box(0);
return v___x_3073_;
}
else
{
lean_object* v_expr_3074_; uint64_t v_configKey_3075_; lean_object* v_k_x27_3076_; lean_object* v_expr_3077_; uint64_t v_configKey_3078_; uint64_t v___x_3079_; uint64_t v___x_3080_; uint64_t v___x_3081_; uint64_t v___x_3082_; uint8_t v___x_3083_; 
v_expr_3074_ = lean_ctor_get(v_k_3070_, 0);
v_configKey_3075_ = lean_ctor_get_uint64(v_k_3070_, sizeof(void*)*1);
v_k_x27_3076_ = lean_array_fget_borrowed(v_keys_3067_, v_i_3069_);
v_expr_3077_ = lean_ctor_get(v_k_x27_3076_, 0);
v_configKey_3078_ = lean_ctor_get_uint64(v_k_x27_3076_, sizeof(void*)*1);
v___x_3079_ = l_Lean_Expr_hash(v_expr_3074_);
v___x_3080_ = lean_uint64_mix_hash(v___x_3079_, v_configKey_3075_);
v___x_3081_ = l_Lean_Expr_hash(v_expr_3077_);
v___x_3082_ = lean_uint64_mix_hash(v___x_3081_, v_configKey_3078_);
v___x_3083_ = lean_uint64_dec_eq(v___x_3080_, v___x_3082_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = lean_unsigned_to_nat(1u);
v___x_3085_ = lean_nat_add(v_i_3069_, v___x_3084_);
lean_dec(v_i_3069_);
v_i_3069_ = v___x_3085_;
goto _start;
}
else
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = lean_array_fget_borrowed(v_vals_3068_, v_i_3069_);
lean_dec(v_i_3069_);
lean_inc(v___x_3087_);
lean_inc(v_k_x27_3076_);
v___x_3088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3088_, 0, v_k_x27_3076_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
return v___x_3089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_keys_3090_, lean_object* v_vals_3091_, lean_object* v_i_3092_, lean_object* v_k_3093_){
_start:
{
lean_object* v_res_3094_; 
v_res_3094_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_3090_, v_vals_3091_, v_i_3092_, v_k_3093_);
lean_dec_ref(v_k_3093_);
lean_dec_ref(v_vals_3091_);
lean_dec_ref(v_keys_3090_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object* v_x_3095_, size_t v_x_3096_, lean_object* v_x_3097_){
_start:
{
if (lean_obj_tag(v_x_3095_) == 0)
{
lean_object* v_es_3098_; lean_object* v___x_3099_; size_t v___x_3100_; size_t v___x_3101_; lean_object* v_j_3102_; lean_object* v___x_3103_; 
v_es_3098_ = lean_ctor_get(v_x_3095_, 0);
v___x_3099_ = lean_box(2);
v___x_3100_ = ((size_t)31ULL);
v___x_3101_ = lean_usize_land(v_x_3096_, v___x_3100_);
v_j_3102_ = lean_usize_to_nat(v___x_3101_);
v___x_3103_ = lean_array_get_borrowed(v___x_3099_, v_es_3098_, v_j_3102_);
lean_dec(v_j_3102_);
switch(lean_obj_tag(v___x_3103_))
{
case 0:
{
lean_object* v_key_3104_; lean_object* v_val_3105_; lean_object* v_expr_3106_; uint64_t v_configKey_3107_; lean_object* v_expr_3108_; uint64_t v_configKey_3109_; uint64_t v___x_3110_; uint64_t v___x_3111_; uint64_t v___x_3112_; uint64_t v___x_3113_; uint8_t v___x_3114_; 
v_key_3104_ = lean_ctor_get(v___x_3103_, 0);
v_val_3105_ = lean_ctor_get(v___x_3103_, 1);
v_expr_3106_ = lean_ctor_get(v_x_3097_, 0);
v_configKey_3107_ = lean_ctor_get_uint64(v_x_3097_, sizeof(void*)*1);
v_expr_3108_ = lean_ctor_get(v_key_3104_, 0);
v_configKey_3109_ = lean_ctor_get_uint64(v_key_3104_, sizeof(void*)*1);
v___x_3110_ = l_Lean_Expr_hash(v_expr_3106_);
v___x_3111_ = lean_uint64_mix_hash(v___x_3110_, v_configKey_3107_);
v___x_3112_ = l_Lean_Expr_hash(v_expr_3108_);
v___x_3113_ = lean_uint64_mix_hash(v___x_3112_, v_configKey_3109_);
v___x_3114_ = lean_uint64_dec_eq(v___x_3111_, v___x_3113_);
if (v___x_3114_ == 0)
{
lean_object* v___x_3115_; 
v___x_3115_ = lean_box(0);
return v___x_3115_;
}
else
{
lean_object* v___x_3116_; lean_object* v___x_3117_; 
lean_inc(v_val_3105_);
lean_inc(v_key_3104_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v_key_3104_);
lean_ctor_set(v___x_3116_, 1, v_val_3105_);
v___x_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3116_);
return v___x_3117_;
}
}
case 1:
{
lean_object* v_node_3118_; size_t v___x_3119_; size_t v___x_3120_; 
v_node_3118_ = lean_ctor_get(v___x_3103_, 0);
v___x_3119_ = ((size_t)5ULL);
v___x_3120_ = lean_usize_shift_right(v_x_3096_, v___x_3119_);
v_x_3095_ = v_node_3118_;
v_x_3096_ = v___x_3120_;
goto _start;
}
default: 
{
lean_object* v___x_3122_; 
v___x_3122_ = lean_box(0);
return v___x_3122_;
}
}
}
else
{
lean_object* v_ks_3123_; lean_object* v_vs_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v_ks_3123_ = lean_ctor_get(v_x_3095_, 0);
v_vs_3124_ = lean_ctor_get(v_x_3095_, 1);
v___x_3125_ = lean_unsigned_to_nat(0u);
v___x_3126_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_ks_3123_, v_vs_3124_, v___x_3125_, v_x_3097_);
return v___x_3126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object* v_x_3127_, lean_object* v_x_3128_, lean_object* v_x_3129_){
_start:
{
size_t v_x_4002__boxed_3130_; lean_object* v_res_3131_; 
v_x_4002__boxed_3130_ = lean_unbox_usize(v_x_3128_);
lean_dec(v_x_3128_);
v_res_3131_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3127_, v_x_4002__boxed_3130_, v_x_3129_);
lean_dec_ref(v_x_3129_);
lean_dec_ref(v_x_3127_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object* v_x_3132_, lean_object* v_x_3133_){
_start:
{
lean_object* v_expr_3134_; uint64_t v_configKey_3135_; uint64_t v___x_3136_; uint64_t v___x_3137_; size_t v___x_3138_; lean_object* v___x_3139_; 
v_expr_3134_ = lean_ctor_get(v_x_3133_, 0);
v_configKey_3135_ = lean_ctor_get_uint64(v_x_3133_, sizeof(void*)*1);
v___x_3136_ = l_Lean_Expr_hash(v_expr_3134_);
v___x_3137_ = lean_uint64_mix_hash(v___x_3136_, v_configKey_3135_);
v___x_3138_ = lean_uint64_to_usize(v___x_3137_);
v___x_3139_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3132_, v___x_3138_, v_x_3133_);
return v___x_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object* v_x_3140_, lean_object* v_x_3141_){
_start:
{
lean_object* v_res_3142_; 
v_res_3142_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3140_, v_x_3141_);
lean_dec_ref(v_x_3141_);
lean_dec_ref(v_x_3140_);
return v_res_3142_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9_spec__11(lean_object* v_xs_3143_, lean_object* v_v_3144_, lean_object* v_i_3145_){
_start:
{
lean_object* v___x_3146_; uint8_t v___x_3147_; 
v___x_3146_ = lean_array_get_size(v_xs_3143_);
v___x_3147_ = lean_nat_dec_lt(v_i_3145_, v___x_3146_);
if (v___x_3147_ == 0)
{
lean_object* v___x_3148_; 
lean_dec(v_i_3145_);
v___x_3148_ = lean_box(0);
return v___x_3148_;
}
else
{
lean_object* v___x_3149_; lean_object* v_expr_3150_; uint64_t v_configKey_3151_; lean_object* v_expr_3152_; uint64_t v_configKey_3153_; uint64_t v___x_3154_; uint64_t v___x_3155_; uint64_t v___x_3156_; uint64_t v___x_3157_; uint8_t v___x_3158_; 
v___x_3149_ = lean_array_fget_borrowed(v_xs_3143_, v_i_3145_);
v_expr_3150_ = lean_ctor_get(v___x_3149_, 0);
v_configKey_3151_ = lean_ctor_get_uint64(v___x_3149_, sizeof(void*)*1);
v_expr_3152_ = lean_ctor_get(v_v_3144_, 0);
v_configKey_3153_ = lean_ctor_get_uint64(v_v_3144_, sizeof(void*)*1);
v___x_3154_ = l_Lean_Expr_hash(v_expr_3150_);
v___x_3155_ = lean_uint64_mix_hash(v___x_3154_, v_configKey_3151_);
v___x_3156_ = l_Lean_Expr_hash(v_expr_3152_);
v___x_3157_ = lean_uint64_mix_hash(v___x_3156_, v_configKey_3153_);
v___x_3158_ = lean_uint64_dec_eq(v___x_3155_, v___x_3157_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3159_ = lean_unsigned_to_nat(1u);
v___x_3160_ = lean_nat_add(v_i_3145_, v___x_3159_);
lean_dec(v_i_3145_);
v_i_3145_ = v___x_3160_;
goto _start;
}
else
{
lean_object* v___x_3162_; 
v___x_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3162_, 0, v_i_3145_);
return v___x_3162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9_spec__11___boxed(lean_object* v_xs_3163_, lean_object* v_v_3164_, lean_object* v_i_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9_spec__11(v_xs_3163_, v_v_3164_, v_i_3165_);
lean_dec_ref(v_v_3164_);
lean_dec_ref(v_xs_3163_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9(lean_object* v_xs_3167_, lean_object* v_v_3168_){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3169_ = lean_unsigned_to_nat(0u);
v___x_3170_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9_spec__11(v_xs_3167_, v_v_3168_, v___x_3169_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9___boxed(lean_object* v_xs_3171_, lean_object* v_v_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9(v_xs_3171_, v_v_3172_);
lean_dec_ref(v_v_3172_);
lean_dec_ref(v_xs_3171_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg(lean_object* v_x_3174_, size_t v_x_3175_, lean_object* v_x_3176_){
_start:
{
if (lean_obj_tag(v_x_3174_) == 0)
{
lean_object* v_es_3177_; lean_object* v___x_3178_; size_t v___x_3179_; size_t v___x_3180_; lean_object* v_j_3181_; lean_object* v_entry_3182_; 
v_es_3177_ = lean_ctor_get(v_x_3174_, 0);
v___x_3178_ = lean_box(2);
v___x_3179_ = ((size_t)31ULL);
v___x_3180_ = lean_usize_land(v_x_3175_, v___x_3179_);
v_j_3181_ = lean_usize_to_nat(v___x_3180_);
v_entry_3182_ = lean_array_get(v___x_3178_, v_es_3177_, v_j_3181_);
switch(lean_obj_tag(v_entry_3182_))
{
case 0:
{
lean_object* v_key_3183_; lean_object* v_expr_3184_; uint64_t v_configKey_3185_; lean_object* v_expr_3186_; uint64_t v_configKey_3187_; uint64_t v___x_3188_; uint64_t v___x_3189_; uint64_t v___x_3190_; uint64_t v___x_3191_; uint8_t v___x_3192_; 
v_key_3183_ = lean_ctor_get(v_entry_3182_, 0);
lean_inc(v_key_3183_);
lean_dec_ref_known(v_entry_3182_, 2);
v_expr_3184_ = lean_ctor_get(v_x_3176_, 0);
v_configKey_3185_ = lean_ctor_get_uint64(v_x_3176_, sizeof(void*)*1);
v_expr_3186_ = lean_ctor_get(v_key_3183_, 0);
lean_inc_ref(v_expr_3186_);
v_configKey_3187_ = lean_ctor_get_uint64(v_key_3183_, sizeof(void*)*1);
lean_dec(v_key_3183_);
v___x_3188_ = l_Lean_Expr_hash(v_expr_3184_);
v___x_3189_ = lean_uint64_mix_hash(v___x_3188_, v_configKey_3185_);
v___x_3190_ = l_Lean_Expr_hash(v_expr_3186_);
lean_dec_ref(v_expr_3186_);
v___x_3191_ = lean_uint64_mix_hash(v___x_3190_, v_configKey_3187_);
v___x_3192_ = lean_uint64_dec_eq(v___x_3189_, v___x_3191_);
if (v___x_3192_ == 0)
{
lean_dec(v_j_3181_);
return v_x_3174_;
}
else
{
lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3200_; 
lean_inc_ref(v_es_3177_);
v_isSharedCheck_3200_ = !lean_is_exclusive(v_x_3174_);
if (v_isSharedCheck_3200_ == 0)
{
lean_object* v_unused_3201_; 
v_unused_3201_ = lean_ctor_get(v_x_3174_, 0);
lean_dec(v_unused_3201_);
v___x_3194_ = v_x_3174_;
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
else
{
lean_dec(v_x_3174_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3196_ = lean_array_set(v_es_3177_, v_j_3181_, v___x_3178_);
lean_dec(v_j_3181_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 0, v___x_3196_);
v___x_3198_ = v___x_3194_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
}
case 1:
{
lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3236_; 
lean_inc_ref(v_es_3177_);
v_isSharedCheck_3236_ = !lean_is_exclusive(v_x_3174_);
if (v_isSharedCheck_3236_ == 0)
{
lean_object* v_unused_3237_; 
v_unused_3237_ = lean_ctor_get(v_x_3174_, 0);
lean_dec(v_unused_3237_);
v___x_3203_ = v_x_3174_;
v_isShared_3204_ = v_isSharedCheck_3236_;
goto v_resetjp_3202_;
}
else
{
lean_dec(v_x_3174_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3236_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v_node_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3235_; 
v_node_3205_ = lean_ctor_get(v_entry_3182_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v_entry_3182_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3207_ = v_entry_3182_;
v_isShared_3208_ = v_isSharedCheck_3235_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_node_3205_);
lean_dec(v_entry_3182_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3235_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
size_t v___x_3209_; lean_object* v_entries_3210_; size_t v___x_3211_; lean_object* v_newNode_3212_; lean_object* v___x_3213_; 
v___x_3209_ = ((size_t)5ULL);
v_entries_3210_ = lean_array_set(v_es_3177_, v_j_3181_, v___x_3178_);
v___x_3211_ = lean_usize_shift_right(v_x_3175_, v___x_3209_);
v_newNode_3212_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg(v_node_3205_, v___x_3211_, v_x_3176_);
lean_inc_ref(v_newNode_3212_);
v___x_3213_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_3212_);
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v___x_3215_; 
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 0, v_newNode_3212_);
v___x_3215_ = v___x_3207_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_newNode_3212_);
v___x_3215_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
lean_object* v___x_3216_; lean_object* v___x_3218_; 
v___x_3216_ = lean_array_set(v_entries_3210_, v_j_3181_, v___x_3215_);
lean_dec(v_j_3181_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v___x_3216_);
v___x_3218_ = v___x_3203_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v___x_3216_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
else
{
lean_object* v_val_3221_; lean_object* v_fst_3222_; lean_object* v_snd_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v_newNode_3212_);
lean_del_object(v___x_3207_);
v_val_3221_ = lean_ctor_get(v___x_3213_, 0);
lean_inc(v_val_3221_);
lean_dec_ref_known(v___x_3213_, 1);
v_fst_3222_ = lean_ctor_get(v_val_3221_, 0);
v_snd_3223_ = lean_ctor_get(v_val_3221_, 1);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_val_3221_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3225_ = v_val_3221_;
v_isShared_3226_ = v_isSharedCheck_3234_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_snd_3223_);
lean_inc(v_fst_3222_);
lean_dec(v_val_3221_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3234_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_fst_3222_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v_snd_3223_);
v___x_3228_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
lean_object* v___x_3229_; lean_object* v___x_3231_; 
v___x_3229_ = lean_array_set(v_entries_3210_, v_j_3181_, v___x_3228_);
lean_dec(v_j_3181_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v___x_3229_);
v___x_3231_ = v___x_3203_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v___x_3229_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_3181_);
return v_x_3174_;
}
}
}
else
{
lean_object* v_ks_3238_; lean_object* v_vs_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3253_; 
v_ks_3238_ = lean_ctor_get(v_x_3174_, 0);
v_vs_3239_ = lean_ctor_get(v_x_3174_, 1);
v_isSharedCheck_3253_ = !lean_is_exclusive(v_x_3174_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3241_ = v_x_3174_;
v_isShared_3242_ = v_isSharedCheck_3253_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_vs_3239_);
lean_inc(v_ks_3238_);
lean_dec(v_x_3174_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3253_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3243_; 
v___x_3243_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5_spec__9(v_ks_3238_, v_x_3176_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v___x_3245_; 
if (v_isShared_3242_ == 0)
{
v___x_3245_ = v___x_3241_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_ks_3238_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v_vs_3239_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
else
{
lean_object* v_val_3247_; lean_object* v_keys_x27_3248_; lean_object* v_vals_x27_3249_; lean_object* v___x_3251_; 
v_val_3247_ = lean_ctor_get(v___x_3243_, 0);
lean_inc_n(v_val_3247_, 2);
lean_dec_ref_known(v___x_3243_, 1);
v_keys_x27_3248_ = l_Array_eraseIdx___redArg(v_ks_3238_, v_val_3247_);
v_vals_x27_3249_ = l_Array_eraseIdx___redArg(v_vs_3239_, v_val_3247_);
if (v_isShared_3242_ == 0)
{
lean_ctor_set(v___x_3241_, 1, v_vals_x27_3249_);
lean_ctor_set(v___x_3241_, 0, v_keys_x27_3248_);
v___x_3251_ = v___x_3241_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_keys_x27_3248_);
lean_ctor_set(v_reuseFailAlloc_3252_, 1, v_vals_x27_3249_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg___boxed(lean_object* v_x_3254_, lean_object* v_x_3255_, lean_object* v_x_3256_){
_start:
{
size_t v_x_4123__boxed_3257_; lean_object* v_res_3258_; 
v_x_4123__boxed_3257_ = lean_unbox_usize(v_x_3255_);
lean_dec(v_x_3255_);
v_res_3258_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg(v_x_3254_, v_x_4123__boxed_3257_, v_x_3256_);
lean_dec_ref(v_x_3256_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(lean_object* v_x_3259_, lean_object* v_x_3260_){
_start:
{
lean_object* v_expr_3261_; uint64_t v_configKey_3262_; uint64_t v___x_3263_; uint64_t v___x_3264_; size_t v_h_3265_; lean_object* v___x_3266_; 
v_expr_3261_ = lean_ctor_get(v_x_3260_, 0);
v_configKey_3262_ = lean_ctor_get_uint64(v_x_3260_, sizeof(void*)*1);
v___x_3263_ = l_Lean_Expr_hash(v_expr_3261_);
v___x_3264_ = lean_uint64_mix_hash(v___x_3263_, v_configKey_3262_);
v_h_3265_ = lean_uint64_to_usize(v___x_3264_);
v___x_3266_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg(v_x_3259_, v_h_3265_, v_x_3260_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg___boxed(lean_object* v_x_3267_, lean_object* v_x_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_x_3267_, v_x_3268_);
lean_dec_ref(v_x_3268_);
return v_res_3269_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1(void){
_start:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3271_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0));
v___x_3272_ = l_Lean_stringToMessageData(v___x_3271_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object* v_e_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_){
_start:
{
switch(lean_obj_tag(v_e_3273_))
{
case 0:
{
lean_object* v_deBruijnIndex_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v_deBruijnIndex_3311_ = lean_ctor_get(v_e_3273_, 0);
lean_inc(v_deBruijnIndex_3311_);
lean_dec_ref_known(v_e_3273_, 1);
v___x_3312_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1);
v___x_3313_ = l_Lean_mkBVar(v_deBruijnIndex_3311_);
v___x_3314_ = l_Lean_MessageData_ofExpr(v___x_3313_);
v___x_3315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3312_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_3315_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3316_;
}
case 1:
{
lean_object* v_fvarId_3317_; lean_object* v___x_3318_; 
v_fvarId_3317_ = lean_ctor_get(v_e_3273_, 0);
lean_inc(v_fvarId_3317_);
lean_dec_ref_known(v_e_3273_, 1);
v___x_3318_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3317_, v_a_3274_, v_a_3276_, v_a_3277_);
return v___x_3318_;
}
case 2:
{
lean_object* v_mvarId_3319_; lean_object* v___x_3320_; 
v_mvarId_3319_ = lean_ctor_get(v_e_3273_, 0);
lean_inc(v_mvarId_3319_);
lean_dec_ref_known(v_e_3273_, 1);
v___x_3320_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3319_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3320_;
}
case 3:
{
lean_object* v_u_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v_u_3321_ = lean_ctor_get(v_e_3273_, 0);
lean_inc(v_u_3321_);
lean_dec_ref_known(v_e_3273_, 1);
v___x_3322_ = l_Lean_Level_succ___override(v_u_3321_);
v___x_3323_ = l_Lean_mkSort(v___x_3322_);
v___x_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
return v___x_3324_;
}
case 4:
{
lean_object* v_declName_3325_; lean_object* v_us_3326_; 
v_declName_3325_ = lean_ctor_get(v_e_3273_, 0);
lean_inc(v_declName_3325_);
v_us_3326_ = lean_ctor_get(v_e_3273_, 1);
lean_inc(v_us_3326_);
if (lean_obj_tag(v_us_3326_) == 0)
{
lean_object* v___x_3343_; 
lean_dec_ref_known(v_e_3273_, 2);
v___x_3343_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3325_, v_us_3326_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3343_;
}
else
{
uint8_t v_cacheInferType_3344_; 
v_cacheInferType_3344_ = lean_ctor_get_uint8(v_a_3274_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3344_ == 0)
{
lean_dec_ref_known(v_e_3273_, 2);
goto v___jp_3327_;
}
else
{
uint8_t v___x_3345_; 
v___x_3345_ = l_Lean_Expr_hasMVar(v_e_3273_);
if (v___x_3345_ == 0)
{
lean_object* v___x_3346_; 
v___x_3346_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3273_, v_a_3274_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3454_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3349_ = v___x_3346_;
v_isShared_3350_ = v_isSharedCheck_3454_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3346_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3454_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3407_; lean_object* v_cache_3408_; lean_object* v_inferType_3409_; lean_object* v___x_3410_; 
v___x_3407_ = lean_st_ref_get(v_a_3275_);
v_cache_3408_ = lean_ctor_get(v___x_3407_, 1);
lean_inc_ref(v_cache_3408_);
lean_dec(v___x_3407_);
v_inferType_3409_ = lean_ctor_get(v_cache_3408_, 0);
lean_inc_ref(v_inferType_3409_);
lean_dec_ref(v_cache_3408_);
v___x_3410_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3409_, v_a_3347_);
if (lean_obj_tag(v___x_3410_) == 1)
{
lean_object* v_val_3411_; lean_object* v_fst_3412_; lean_object* v_snd_3413_; lean_object* v_expr_3414_; uint64_t v_configKey_3415_; lean_object* v_expr_3416_; uint64_t v_configKey_3417_; uint8_t v___x_3418_; 
v_val_3411_ = lean_ctor_get(v___x_3410_, 0);
lean_inc(v_val_3411_);
lean_dec_ref_known(v___x_3410_, 1);
v_fst_3412_ = lean_ctor_get(v_val_3411_, 0);
lean_inc(v_fst_3412_);
v_snd_3413_ = lean_ctor_get(v_val_3411_, 1);
lean_inc(v_snd_3413_);
lean_dec(v_val_3411_);
v_expr_3414_ = lean_ctor_get(v_a_3347_, 0);
v_configKey_3415_ = lean_ctor_get_uint64(v_a_3347_, sizeof(void*)*1);
v_expr_3416_ = lean_ctor_get(v_fst_3412_, 0);
lean_inc_ref(v_expr_3416_);
v_configKey_3417_ = lean_ctor_get_uint64(v_fst_3412_, sizeof(void*)*1);
lean_dec(v_fst_3412_);
v___x_3418_ = lean_uint64_dec_eq(v_configKey_3415_, v_configKey_3417_);
if (v___x_3418_ == 0)
{
lean_dec_ref(v_expr_3416_);
lean_dec(v_snd_3413_);
lean_dec_ref(v_inferType_3409_);
lean_del_object(v___x_3349_);
goto v___jp_3393_;
}
else
{
size_t v___x_3419_; uint8_t v___x_3420_; 
v___x_3419_ = ((size_t)64ULL);
v___x_3420_ = lean_expr_equal_budgeted(v_expr_3414_, v_expr_3416_, v___x_3419_);
lean_dec_ref(v_expr_3416_);
switch(v___x_3420_)
{
case 0:
{
lean_dec(v_snd_3413_);
lean_dec_ref(v_inferType_3409_);
lean_del_object(v___x_3349_);
goto v___jp_3393_;
}
case 1:
{
lean_object* v___x_3422_; 
lean_dec_ref(v_inferType_3409_);
lean_dec(v_a_3347_);
lean_dec(v_us_3326_);
lean_dec(v_declName_3325_);
if (v_isShared_3350_ == 0)
{
lean_ctor_set(v___x_3349_, 0, v_snd_3413_);
v___x_3422_ = v___x_3349_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_snd_3413_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
default: 
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v_cache_3426_; lean_object* v_mctx_3427_; lean_object* v_zetaDeltaFVarIds_3428_; lean_object* v_postponed_3429_; lean_object* v_diag_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3453_; 
lean_dec(v_snd_3413_);
lean_del_object(v___x_3349_);
v___x_3424_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_inferType_3409_, v_a_3347_);
v___x_3425_ = lean_st_ref_take(v_a_3275_);
v_cache_3426_ = lean_ctor_get(v___x_3425_, 1);
v_mctx_3427_ = lean_ctor_get(v___x_3425_, 0);
v_zetaDeltaFVarIds_3428_ = lean_ctor_get(v___x_3425_, 2);
v_postponed_3429_ = lean_ctor_get(v___x_3425_, 3);
v_diag_3430_ = lean_ctor_get(v___x_3425_, 4);
v_isSharedCheck_3453_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3432_ = v___x_3425_;
v_isShared_3433_ = v_isSharedCheck_3453_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_diag_3430_);
lean_inc(v_postponed_3429_);
lean_inc(v_zetaDeltaFVarIds_3428_);
lean_inc(v_cache_3426_);
lean_inc(v_mctx_3427_);
lean_dec(v___x_3425_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3453_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v_funInfo_3434_; lean_object* v_synthInstance_3435_; lean_object* v_whnf_3436_; lean_object* v_defEqTrans_3437_; lean_object* v_defEqPerm_3438_; lean_object* v_isUnitLike_3439_; lean_object* v_unfold_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3451_; 
v_funInfo_3434_ = lean_ctor_get(v_cache_3426_, 1);
v_synthInstance_3435_ = lean_ctor_get(v_cache_3426_, 2);
v_whnf_3436_ = lean_ctor_get(v_cache_3426_, 3);
v_defEqTrans_3437_ = lean_ctor_get(v_cache_3426_, 4);
v_defEqPerm_3438_ = lean_ctor_get(v_cache_3426_, 5);
v_isUnitLike_3439_ = lean_ctor_get(v_cache_3426_, 6);
v_unfold_3440_ = lean_ctor_get(v_cache_3426_, 7);
v_isSharedCheck_3451_ = !lean_is_exclusive(v_cache_3426_);
if (v_isSharedCheck_3451_ == 0)
{
lean_object* v_unused_3452_; 
v_unused_3452_ = lean_ctor_get(v_cache_3426_, 0);
lean_dec(v_unused_3452_);
v___x_3442_ = v_cache_3426_;
v_isShared_3443_ = v_isSharedCheck_3451_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_unfold_3440_);
lean_inc(v_isUnitLike_3439_);
lean_inc(v_defEqPerm_3438_);
lean_inc(v_defEqTrans_3437_);
lean_inc(v_whnf_3436_);
lean_inc(v_synthInstance_3435_);
lean_inc(v_funInfo_3434_);
lean_dec(v_cache_3426_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3451_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
lean_ctor_set(v___x_3442_, 0, v___x_3424_);
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3424_);
lean_ctor_set(v_reuseFailAlloc_3450_, 1, v_funInfo_3434_);
lean_ctor_set(v_reuseFailAlloc_3450_, 2, v_synthInstance_3435_);
lean_ctor_set(v_reuseFailAlloc_3450_, 3, v_whnf_3436_);
lean_ctor_set(v_reuseFailAlloc_3450_, 4, v_defEqTrans_3437_);
lean_ctor_set(v_reuseFailAlloc_3450_, 5, v_defEqPerm_3438_);
lean_ctor_set(v_reuseFailAlloc_3450_, 6, v_isUnitLike_3439_);
lean_ctor_set(v_reuseFailAlloc_3450_, 7, v_unfold_3440_);
v___x_3445_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___x_3447_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 1, v___x_3445_);
v___x_3447_ = v___x_3432_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_mctx_3427_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v___x_3445_);
lean_ctor_set(v_reuseFailAlloc_3449_, 2, v_zetaDeltaFVarIds_3428_);
lean_ctor_set(v_reuseFailAlloc_3449_, 3, v_postponed_3429_);
lean_ctor_set(v_reuseFailAlloc_3449_, 4, v_diag_3430_);
v___x_3447_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_st_ref_put(v_a_3275_, v___x_3447_);
goto v___jp_3393_;
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
lean_dec(v___x_3410_);
lean_dec_ref(v_inferType_3409_);
lean_del_object(v___x_3349_);
goto v___jp_3393_;
}
v___jp_3351_:
{
lean_object* v___x_3352_; 
v___x_3352_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3325_, v_us_3326_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; uint8_t v___x_3354_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
v___x_3354_ = l_Lean_Expr_hasMVar(v_a_3353_);
if (v___x_3354_ == 0)
{
lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3391_; 
lean_inc(v_a_3353_);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3391_ == 0)
{
lean_object* v_unused_3392_; 
v_unused_3392_ = lean_ctor_get(v___x_3352_, 0);
lean_dec(v_unused_3392_);
v___x_3356_ = v___x_3352_;
v_isShared_3357_ = v_isSharedCheck_3391_;
goto v_resetjp_3355_;
}
else
{
lean_dec(v___x_3352_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3391_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3358_; lean_object* v_cache_3359_; lean_object* v_mctx_3360_; lean_object* v_zetaDeltaFVarIds_3361_; lean_object* v_postponed_3362_; lean_object* v_diag_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3390_; 
v___x_3358_ = lean_st_ref_take(v_a_3275_);
v_cache_3359_ = lean_ctor_get(v___x_3358_, 1);
v_mctx_3360_ = lean_ctor_get(v___x_3358_, 0);
v_zetaDeltaFVarIds_3361_ = lean_ctor_get(v___x_3358_, 2);
v_postponed_3362_ = lean_ctor_get(v___x_3358_, 3);
v_diag_3363_ = lean_ctor_get(v___x_3358_, 4);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3365_ = v___x_3358_;
v_isShared_3366_ = v_isSharedCheck_3390_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_diag_3363_);
lean_inc(v_postponed_3362_);
lean_inc(v_zetaDeltaFVarIds_3361_);
lean_inc(v_cache_3359_);
lean_inc(v_mctx_3360_);
lean_dec(v___x_3358_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3390_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v_inferType_3367_; lean_object* v_funInfo_3368_; lean_object* v_synthInstance_3369_; lean_object* v_whnf_3370_; lean_object* v_defEqTrans_3371_; lean_object* v_defEqPerm_3372_; lean_object* v_isUnitLike_3373_; lean_object* v_unfold_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3389_; 
v_inferType_3367_ = lean_ctor_get(v_cache_3359_, 0);
v_funInfo_3368_ = lean_ctor_get(v_cache_3359_, 1);
v_synthInstance_3369_ = lean_ctor_get(v_cache_3359_, 2);
v_whnf_3370_ = lean_ctor_get(v_cache_3359_, 3);
v_defEqTrans_3371_ = lean_ctor_get(v_cache_3359_, 4);
v_defEqPerm_3372_ = lean_ctor_get(v_cache_3359_, 5);
v_isUnitLike_3373_ = lean_ctor_get(v_cache_3359_, 6);
v_unfold_3374_ = lean_ctor_get(v_cache_3359_, 7);
v_isSharedCheck_3389_ = !lean_is_exclusive(v_cache_3359_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3376_ = v_cache_3359_;
v_isShared_3377_ = v_isSharedCheck_3389_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_unfold_3374_);
lean_inc(v_isUnitLike_3373_);
lean_inc(v_defEqPerm_3372_);
lean_inc(v_defEqTrans_3371_);
lean_inc(v_whnf_3370_);
lean_inc(v_synthInstance_3369_);
lean_inc(v_funInfo_3368_);
lean_inc(v_inferType_3367_);
lean_dec(v_cache_3359_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3389_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3378_; lean_object* v___x_3380_; 
lean_inc(v_a_3353_);
v___x_3378_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3367_, v_a_3347_, v_a_3353_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 0, v___x_3378_);
v___x_3380_ = v___x_3376_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v___x_3378_);
lean_ctor_set(v_reuseFailAlloc_3388_, 1, v_funInfo_3368_);
lean_ctor_set(v_reuseFailAlloc_3388_, 2, v_synthInstance_3369_);
lean_ctor_set(v_reuseFailAlloc_3388_, 3, v_whnf_3370_);
lean_ctor_set(v_reuseFailAlloc_3388_, 4, v_defEqTrans_3371_);
lean_ctor_set(v_reuseFailAlloc_3388_, 5, v_defEqPerm_3372_);
lean_ctor_set(v_reuseFailAlloc_3388_, 6, v_isUnitLike_3373_);
lean_ctor_set(v_reuseFailAlloc_3388_, 7, v_unfold_3374_);
v___x_3380_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
lean_object* v___x_3382_; 
if (v_isShared_3366_ == 0)
{
lean_ctor_set(v___x_3365_, 1, v___x_3380_);
v___x_3382_ = v___x_3365_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_mctx_3360_);
lean_ctor_set(v_reuseFailAlloc_3387_, 1, v___x_3380_);
lean_ctor_set(v_reuseFailAlloc_3387_, 2, v_zetaDeltaFVarIds_3361_);
lean_ctor_set(v_reuseFailAlloc_3387_, 3, v_postponed_3362_);
lean_ctor_set(v_reuseFailAlloc_3387_, 4, v_diag_3363_);
v___x_3382_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
lean_object* v___x_3383_; lean_object* v___x_3385_; 
v___x_3383_ = lean_st_ref_put(v_a_3275_, v___x_3382_);
if (v_isShared_3357_ == 0)
{
v___x_3385_ = v___x_3356_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3353_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3347_);
return v___x_3352_;
}
}
else
{
lean_dec(v_a_3347_);
return v___x_3352_;
}
}
v___jp_3393_:
{
lean_object* v_toCold_3394_; lean_object* v_cancelTk_x3f_3395_; 
v_toCold_3394_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3395_ = lean_ctor_get(v_toCold_3394_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3395_) == 1)
{
lean_object* v_val_3396_; uint8_t v___x_3397_; 
v_val_3396_ = lean_ctor_get(v_cancelTk_x3f_3395_, 0);
v___x_3397_ = l_IO_CancelToken_isSet(v_val_3396_);
if (v___x_3397_ == 0)
{
goto v___jp_3351_;
}
else
{
lean_object* v___x_3398_; lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3406_; 
lean_dec(v_a_3347_);
lean_dec(v_us_3326_);
lean_dec(v_declName_3325_);
v___x_3398_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3399_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3401_ = v___x_3398_;
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3398_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
else
{
goto v___jp_3351_;
}
}
}
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_dec(v_us_3326_);
lean_dec(v_declName_3325_);
v_a_3455_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3346_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3346_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
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
else
{
lean_dec_ref_known(v_e_3273_, 2);
goto v___jp_3327_;
}
}
}
v___jp_3327_:
{
lean_object* v_toCold_3328_; lean_object* v_cancelTk_x3f_3329_; 
v_toCold_3328_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3329_ = lean_ctor_get(v_toCold_3328_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3329_) == 1)
{
lean_object* v_val_3330_; uint8_t v___x_3331_; 
v_val_3330_ = lean_ctor_get(v_cancelTk_x3f_3329_, 0);
v___x_3331_ = l_IO_CancelToken_isSet(v_val_3330_);
if (v___x_3331_ == 0)
{
lean_object* v___x_3332_; 
v___x_3332_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3325_, v_us_3326_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3332_;
}
else
{
lean_object* v___x_3333_; lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3341_; 
lean_dec(v_us_3326_);
lean_dec(v_declName_3325_);
v___x_3333_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3334_ = lean_ctor_get(v___x_3333_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3336_ = v___x_3333_;
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3333_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
else
{
lean_object* v___x_3342_; 
v___x_3342_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3325_, v_us_3326_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3342_;
}
}
}
case 5:
{
lean_object* v_fn_3463_; uint8_t v_cacheInferType_3464_; lean_object* v_nargs_3465_; lean_object* v___x_3466_; lean_object* v_dummy_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v_fn_3463_ = lean_ctor_get(v_e_3273_, 0);
v_cacheInferType_3464_ = lean_ctor_get_uint8(v_a_3274_, sizeof(void*)*7 + 3);
v_nargs_3465_ = l_Lean_Expr_getAppNumArgs(v_e_3273_);
v___x_3466_ = l_Lean_Expr_getAppFn(v_fn_3463_);
v_dummy_3467_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
lean_inc(v_nargs_3465_);
v___x_3468_ = lean_mk_array(v_nargs_3465_, v_dummy_3467_);
v___x_3469_ = lean_unsigned_to_nat(1u);
v___x_3470_ = lean_nat_sub(v_nargs_3465_, v___x_3469_);
lean_dec(v_nargs_3465_);
lean_inc_ref(v_e_3273_);
v___x_3471_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3273_, v___x_3468_, v___x_3470_);
if (v_cacheInferType_3464_ == 0)
{
lean_dec_ref_known(v_e_3273_, 2);
goto v___jp_3472_;
}
else
{
uint8_t v___x_3488_; 
v___x_3488_ = l_Lean_Expr_hasMVar(v_e_3273_);
if (v___x_3488_ == 0)
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3273_, v_a_3274_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3597_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3492_ = v___x_3489_;
v_isShared_3493_ = v_isSharedCheck_3597_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3489_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3597_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3550_; lean_object* v_cache_3551_; lean_object* v_inferType_3552_; lean_object* v___x_3553_; 
v___x_3550_ = lean_st_ref_get(v_a_3275_);
v_cache_3551_ = lean_ctor_get(v___x_3550_, 1);
lean_inc_ref(v_cache_3551_);
lean_dec(v___x_3550_);
v_inferType_3552_ = lean_ctor_get(v_cache_3551_, 0);
lean_inc_ref(v_inferType_3552_);
lean_dec_ref(v_cache_3551_);
v___x_3553_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3552_, v_a_3490_);
if (lean_obj_tag(v___x_3553_) == 1)
{
lean_object* v_val_3554_; lean_object* v_fst_3555_; lean_object* v_snd_3556_; lean_object* v_expr_3557_; uint64_t v_configKey_3558_; lean_object* v_expr_3559_; uint64_t v_configKey_3560_; uint8_t v___x_3561_; 
v_val_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_val_3554_);
lean_dec_ref_known(v___x_3553_, 1);
v_fst_3555_ = lean_ctor_get(v_val_3554_, 0);
lean_inc(v_fst_3555_);
v_snd_3556_ = lean_ctor_get(v_val_3554_, 1);
lean_inc(v_snd_3556_);
lean_dec(v_val_3554_);
v_expr_3557_ = lean_ctor_get(v_a_3490_, 0);
v_configKey_3558_ = lean_ctor_get_uint64(v_a_3490_, sizeof(void*)*1);
v_expr_3559_ = lean_ctor_get(v_fst_3555_, 0);
lean_inc_ref(v_expr_3559_);
v_configKey_3560_ = lean_ctor_get_uint64(v_fst_3555_, sizeof(void*)*1);
lean_dec(v_fst_3555_);
v___x_3561_ = lean_uint64_dec_eq(v_configKey_3558_, v_configKey_3560_);
if (v___x_3561_ == 0)
{
lean_dec_ref(v_expr_3559_);
lean_dec(v_snd_3556_);
lean_dec_ref(v_inferType_3552_);
lean_del_object(v___x_3492_);
goto v___jp_3536_;
}
else
{
size_t v___x_3562_; uint8_t v___x_3563_; 
v___x_3562_ = ((size_t)64ULL);
v___x_3563_ = lean_expr_equal_budgeted(v_expr_3557_, v_expr_3559_, v___x_3562_);
lean_dec_ref(v_expr_3559_);
switch(v___x_3563_)
{
case 0:
{
lean_dec(v_snd_3556_);
lean_dec_ref(v_inferType_3552_);
lean_del_object(v___x_3492_);
goto v___jp_3536_;
}
case 1:
{
lean_object* v___x_3565_; 
lean_dec_ref(v_inferType_3552_);
lean_dec(v_a_3490_);
lean_dec_ref(v___x_3471_);
lean_dec_ref(v___x_3466_);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v_snd_3556_);
v___x_3565_ = v___x_3492_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_snd_3556_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
default: 
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v_cache_3569_; lean_object* v_mctx_3570_; lean_object* v_zetaDeltaFVarIds_3571_; lean_object* v_postponed_3572_; lean_object* v_diag_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v_snd_3556_);
lean_del_object(v___x_3492_);
v___x_3567_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_inferType_3552_, v_a_3490_);
v___x_3568_ = lean_st_ref_take(v_a_3275_);
v_cache_3569_ = lean_ctor_get(v___x_3568_, 1);
v_mctx_3570_ = lean_ctor_get(v___x_3568_, 0);
v_zetaDeltaFVarIds_3571_ = lean_ctor_get(v___x_3568_, 2);
v_postponed_3572_ = lean_ctor_get(v___x_3568_, 3);
v_diag_3573_ = lean_ctor_get(v___x_3568_, 4);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3575_ = v___x_3568_;
v_isShared_3576_ = v_isSharedCheck_3596_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_diag_3573_);
lean_inc(v_postponed_3572_);
lean_inc(v_zetaDeltaFVarIds_3571_);
lean_inc(v_cache_3569_);
lean_inc(v_mctx_3570_);
lean_dec(v___x_3568_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3596_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v_funInfo_3577_; lean_object* v_synthInstance_3578_; lean_object* v_whnf_3579_; lean_object* v_defEqTrans_3580_; lean_object* v_defEqPerm_3581_; lean_object* v_isUnitLike_3582_; lean_object* v_unfold_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3594_; 
v_funInfo_3577_ = lean_ctor_get(v_cache_3569_, 1);
v_synthInstance_3578_ = lean_ctor_get(v_cache_3569_, 2);
v_whnf_3579_ = lean_ctor_get(v_cache_3569_, 3);
v_defEqTrans_3580_ = lean_ctor_get(v_cache_3569_, 4);
v_defEqPerm_3581_ = lean_ctor_get(v_cache_3569_, 5);
v_isUnitLike_3582_ = lean_ctor_get(v_cache_3569_, 6);
v_unfold_3583_ = lean_ctor_get(v_cache_3569_, 7);
v_isSharedCheck_3594_ = !lean_is_exclusive(v_cache_3569_);
if (v_isSharedCheck_3594_ == 0)
{
lean_object* v_unused_3595_; 
v_unused_3595_ = lean_ctor_get(v_cache_3569_, 0);
lean_dec(v_unused_3595_);
v___x_3585_ = v_cache_3569_;
v_isShared_3586_ = v_isSharedCheck_3594_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_unfold_3583_);
lean_inc(v_isUnitLike_3582_);
lean_inc(v_defEqPerm_3581_);
lean_inc(v_defEqTrans_3580_);
lean_inc(v_whnf_3579_);
lean_inc(v_synthInstance_3578_);
lean_inc(v_funInfo_3577_);
lean_dec(v_cache_3569_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3594_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 0, v___x_3567_);
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v___x_3567_);
lean_ctor_set(v_reuseFailAlloc_3593_, 1, v_funInfo_3577_);
lean_ctor_set(v_reuseFailAlloc_3593_, 2, v_synthInstance_3578_);
lean_ctor_set(v_reuseFailAlloc_3593_, 3, v_whnf_3579_);
lean_ctor_set(v_reuseFailAlloc_3593_, 4, v_defEqTrans_3580_);
lean_ctor_set(v_reuseFailAlloc_3593_, 5, v_defEqPerm_3581_);
lean_ctor_set(v_reuseFailAlloc_3593_, 6, v_isUnitLike_3582_);
lean_ctor_set(v_reuseFailAlloc_3593_, 7, v_unfold_3583_);
v___x_3588_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
lean_object* v___x_3590_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 1, v___x_3588_);
v___x_3590_ = v___x_3575_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_mctx_3570_);
lean_ctor_set(v_reuseFailAlloc_3592_, 1, v___x_3588_);
lean_ctor_set(v_reuseFailAlloc_3592_, 2, v_zetaDeltaFVarIds_3571_);
lean_ctor_set(v_reuseFailAlloc_3592_, 3, v_postponed_3572_);
lean_ctor_set(v_reuseFailAlloc_3592_, 4, v_diag_3573_);
v___x_3590_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
lean_object* v___x_3591_; 
v___x_3591_ = lean_st_ref_put(v_a_3275_, v___x_3590_);
goto v___jp_3536_;
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
lean_dec(v___x_3553_);
lean_dec_ref(v_inferType_3552_);
lean_del_object(v___x_3492_);
goto v___jp_3536_;
}
v___jp_3494_:
{
lean_object* v___x_3495_; 
v___x_3495_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3466_, v___x_3471_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
lean_dec_ref(v___x_3471_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; uint8_t v___x_3497_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
v___x_3497_ = l_Lean_Expr_hasMVar(v_a_3496_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3534_; 
lean_inc(v_a_3496_);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3534_ == 0)
{
lean_object* v_unused_3535_; 
v_unused_3535_ = lean_ctor_get(v___x_3495_, 0);
lean_dec(v_unused_3535_);
v___x_3499_ = v___x_3495_;
v_isShared_3500_ = v_isSharedCheck_3534_;
goto v_resetjp_3498_;
}
else
{
lean_dec(v___x_3495_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3534_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3501_; lean_object* v_cache_3502_; lean_object* v_mctx_3503_; lean_object* v_zetaDeltaFVarIds_3504_; lean_object* v_postponed_3505_; lean_object* v_diag_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3533_; 
v___x_3501_ = lean_st_ref_take(v_a_3275_);
v_cache_3502_ = lean_ctor_get(v___x_3501_, 1);
v_mctx_3503_ = lean_ctor_get(v___x_3501_, 0);
v_zetaDeltaFVarIds_3504_ = lean_ctor_get(v___x_3501_, 2);
v_postponed_3505_ = lean_ctor_get(v___x_3501_, 3);
v_diag_3506_ = lean_ctor_get(v___x_3501_, 4);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3508_ = v___x_3501_;
v_isShared_3509_ = v_isSharedCheck_3533_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_diag_3506_);
lean_inc(v_postponed_3505_);
lean_inc(v_zetaDeltaFVarIds_3504_);
lean_inc(v_cache_3502_);
lean_inc(v_mctx_3503_);
lean_dec(v___x_3501_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3533_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v_inferType_3510_; lean_object* v_funInfo_3511_; lean_object* v_synthInstance_3512_; lean_object* v_whnf_3513_; lean_object* v_defEqTrans_3514_; lean_object* v_defEqPerm_3515_; lean_object* v_isUnitLike_3516_; lean_object* v_unfold_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3532_; 
v_inferType_3510_ = lean_ctor_get(v_cache_3502_, 0);
v_funInfo_3511_ = lean_ctor_get(v_cache_3502_, 1);
v_synthInstance_3512_ = lean_ctor_get(v_cache_3502_, 2);
v_whnf_3513_ = lean_ctor_get(v_cache_3502_, 3);
v_defEqTrans_3514_ = lean_ctor_get(v_cache_3502_, 4);
v_defEqPerm_3515_ = lean_ctor_get(v_cache_3502_, 5);
v_isUnitLike_3516_ = lean_ctor_get(v_cache_3502_, 6);
v_unfold_3517_ = lean_ctor_get(v_cache_3502_, 7);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_cache_3502_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3519_ = v_cache_3502_;
v_isShared_3520_ = v_isSharedCheck_3532_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_unfold_3517_);
lean_inc(v_isUnitLike_3516_);
lean_inc(v_defEqPerm_3515_);
lean_inc(v_defEqTrans_3514_);
lean_inc(v_whnf_3513_);
lean_inc(v_synthInstance_3512_);
lean_inc(v_funInfo_3511_);
lean_inc(v_inferType_3510_);
lean_dec(v_cache_3502_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3532_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3521_; lean_object* v___x_3523_; 
lean_inc(v_a_3496_);
v___x_3521_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3510_, v_a_3490_, v_a_3496_);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v___x_3521_);
v___x_3523_ = v___x_3519_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3521_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v_funInfo_3511_);
lean_ctor_set(v_reuseFailAlloc_3531_, 2, v_synthInstance_3512_);
lean_ctor_set(v_reuseFailAlloc_3531_, 3, v_whnf_3513_);
lean_ctor_set(v_reuseFailAlloc_3531_, 4, v_defEqTrans_3514_);
lean_ctor_set(v_reuseFailAlloc_3531_, 5, v_defEqPerm_3515_);
lean_ctor_set(v_reuseFailAlloc_3531_, 6, v_isUnitLike_3516_);
lean_ctor_set(v_reuseFailAlloc_3531_, 7, v_unfold_3517_);
v___x_3523_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
lean_object* v___x_3525_; 
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 1, v___x_3523_);
v___x_3525_ = v___x_3508_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_mctx_3503_);
lean_ctor_set(v_reuseFailAlloc_3530_, 1, v___x_3523_);
lean_ctor_set(v_reuseFailAlloc_3530_, 2, v_zetaDeltaFVarIds_3504_);
lean_ctor_set(v_reuseFailAlloc_3530_, 3, v_postponed_3505_);
lean_ctor_set(v_reuseFailAlloc_3530_, 4, v_diag_3506_);
v___x_3525_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
lean_object* v___x_3526_; lean_object* v___x_3528_; 
v___x_3526_ = lean_st_ref_put(v_a_3275_, v___x_3525_);
if (v_isShared_3500_ == 0)
{
v___x_3528_ = v___x_3499_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3496_);
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
}
}
else
{
lean_dec(v_a_3490_);
return v___x_3495_;
}
}
else
{
lean_dec(v_a_3490_);
return v___x_3495_;
}
}
v___jp_3536_:
{
lean_object* v_toCold_3537_; lean_object* v_cancelTk_x3f_3538_; 
v_toCold_3537_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3538_ = lean_ctor_get(v_toCold_3537_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3538_) == 1)
{
lean_object* v_val_3539_; uint8_t v___x_3540_; 
v_val_3539_ = lean_ctor_get(v_cancelTk_x3f_3538_, 0);
v___x_3540_ = l_IO_CancelToken_isSet(v_val_3539_);
if (v___x_3540_ == 0)
{
goto v___jp_3494_;
}
else
{
lean_object* v___x_3541_; lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3549_; 
lean_dec(v_a_3490_);
lean_dec_ref(v___x_3471_);
lean_dec_ref(v___x_3466_);
v___x_3541_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3544_ = v___x_3541_;
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3541_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_a_3542_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
return v___x_3547_;
}
}
}
}
else
{
goto v___jp_3494_;
}
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec_ref(v___x_3471_);
lean_dec_ref(v___x_3466_);
v_a_3598_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3489_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3489_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3273_, 2);
goto v___jp_3472_;
}
}
v___jp_3472_:
{
lean_object* v_toCold_3473_; lean_object* v_cancelTk_x3f_3474_; 
v_toCold_3473_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3474_ = lean_ctor_get(v_toCold_3473_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3474_) == 1)
{
lean_object* v_val_3475_; uint8_t v___x_3476_; 
v_val_3475_ = lean_ctor_get(v_cancelTk_x3f_3474_, 0);
v___x_3476_ = l_IO_CancelToken_isSet(v_val_3475_);
if (v___x_3476_ == 0)
{
lean_object* v___x_3477_; 
v___x_3477_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3466_, v___x_3471_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
lean_dec_ref(v___x_3471_);
return v___x_3477_;
}
else
{
lean_object* v___x_3478_; lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
lean_dec_ref(v___x_3471_);
lean_dec_ref(v___x_3466_);
v___x_3478_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3478_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3478_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
else
{
lean_object* v___x_3487_; 
v___x_3487_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3466_, v___x_3471_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
lean_dec_ref(v___x_3471_);
return v___x_3487_;
}
}
}
case 7:
{
uint8_t v_cacheInferType_3606_; 
v_cacheInferType_3606_ = lean_ctor_get_uint8(v_a_3274_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3606_ == 0)
{
goto v___jp_3279_;
}
else
{
uint8_t v___x_3607_; 
v___x_3607_ = l_Lean_Expr_hasMVar(v_e_3273_);
if (v___x_3607_ == 0)
{
lean_object* v___x_3608_; 
lean_inc_ref(v_e_3273_);
v___x_3608_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3273_, v_a_3274_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3716_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3611_ = v___x_3608_;
v_isShared_3612_ = v_isSharedCheck_3716_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_a_3609_);
lean_dec(v___x_3608_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3716_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3669_; lean_object* v_cache_3670_; lean_object* v_inferType_3671_; lean_object* v___x_3672_; 
v___x_3669_ = lean_st_ref_get(v_a_3275_);
v_cache_3670_ = lean_ctor_get(v___x_3669_, 1);
lean_inc_ref(v_cache_3670_);
lean_dec(v___x_3669_);
v_inferType_3671_ = lean_ctor_get(v_cache_3670_, 0);
lean_inc_ref(v_inferType_3671_);
lean_dec_ref(v_cache_3670_);
v___x_3672_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3671_, v_a_3609_);
if (lean_obj_tag(v___x_3672_) == 1)
{
lean_object* v_val_3673_; lean_object* v_fst_3674_; lean_object* v_snd_3675_; lean_object* v_expr_3676_; uint64_t v_configKey_3677_; lean_object* v_expr_3678_; uint64_t v_configKey_3679_; uint8_t v___x_3680_; 
v_val_3673_ = lean_ctor_get(v___x_3672_, 0);
lean_inc(v_val_3673_);
lean_dec_ref_known(v___x_3672_, 1);
v_fst_3674_ = lean_ctor_get(v_val_3673_, 0);
lean_inc(v_fst_3674_);
v_snd_3675_ = lean_ctor_get(v_val_3673_, 1);
lean_inc(v_snd_3675_);
lean_dec(v_val_3673_);
v_expr_3676_ = lean_ctor_get(v_a_3609_, 0);
v_configKey_3677_ = lean_ctor_get_uint64(v_a_3609_, sizeof(void*)*1);
v_expr_3678_ = lean_ctor_get(v_fst_3674_, 0);
lean_inc_ref(v_expr_3678_);
v_configKey_3679_ = lean_ctor_get_uint64(v_fst_3674_, sizeof(void*)*1);
lean_dec(v_fst_3674_);
v___x_3680_ = lean_uint64_dec_eq(v_configKey_3677_, v_configKey_3679_);
if (v___x_3680_ == 0)
{
lean_dec_ref(v_expr_3678_);
lean_dec(v_snd_3675_);
lean_dec_ref(v_inferType_3671_);
lean_del_object(v___x_3611_);
goto v___jp_3655_;
}
else
{
size_t v___x_3681_; uint8_t v___x_3682_; 
v___x_3681_ = ((size_t)64ULL);
v___x_3682_ = lean_expr_equal_budgeted(v_expr_3676_, v_expr_3678_, v___x_3681_);
lean_dec_ref(v_expr_3678_);
switch(v___x_3682_)
{
case 0:
{
lean_dec(v_snd_3675_);
lean_dec_ref(v_inferType_3671_);
lean_del_object(v___x_3611_);
goto v___jp_3655_;
}
case 1:
{
lean_object* v___x_3684_; 
lean_dec_ref(v_inferType_3671_);
lean_dec(v_a_3609_);
lean_dec_ref_known(v_e_3273_, 3);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 0, v_snd_3675_);
v___x_3684_ = v___x_3611_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_snd_3675_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
default: 
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v_cache_3688_; lean_object* v_mctx_3689_; lean_object* v_zetaDeltaFVarIds_3690_; lean_object* v_postponed_3691_; lean_object* v_diag_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3715_; 
lean_dec(v_snd_3675_);
lean_del_object(v___x_3611_);
v___x_3686_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_inferType_3671_, v_a_3609_);
v___x_3687_ = lean_st_ref_take(v_a_3275_);
v_cache_3688_ = lean_ctor_get(v___x_3687_, 1);
v_mctx_3689_ = lean_ctor_get(v___x_3687_, 0);
v_zetaDeltaFVarIds_3690_ = lean_ctor_get(v___x_3687_, 2);
v_postponed_3691_ = lean_ctor_get(v___x_3687_, 3);
v_diag_3692_ = lean_ctor_get(v___x_3687_, 4);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3694_ = v___x_3687_;
v_isShared_3695_ = v_isSharedCheck_3715_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_diag_3692_);
lean_inc(v_postponed_3691_);
lean_inc(v_zetaDeltaFVarIds_3690_);
lean_inc(v_cache_3688_);
lean_inc(v_mctx_3689_);
lean_dec(v___x_3687_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3715_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v_funInfo_3696_; lean_object* v_synthInstance_3697_; lean_object* v_whnf_3698_; lean_object* v_defEqTrans_3699_; lean_object* v_defEqPerm_3700_; lean_object* v_isUnitLike_3701_; lean_object* v_unfold_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3713_; 
v_funInfo_3696_ = lean_ctor_get(v_cache_3688_, 1);
v_synthInstance_3697_ = lean_ctor_get(v_cache_3688_, 2);
v_whnf_3698_ = lean_ctor_get(v_cache_3688_, 3);
v_defEqTrans_3699_ = lean_ctor_get(v_cache_3688_, 4);
v_defEqPerm_3700_ = lean_ctor_get(v_cache_3688_, 5);
v_isUnitLike_3701_ = lean_ctor_get(v_cache_3688_, 6);
v_unfold_3702_ = lean_ctor_get(v_cache_3688_, 7);
v_isSharedCheck_3713_ = !lean_is_exclusive(v_cache_3688_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; 
v_unused_3714_ = lean_ctor_get(v_cache_3688_, 0);
lean_dec(v_unused_3714_);
v___x_3704_ = v_cache_3688_;
v_isShared_3705_ = v_isSharedCheck_3713_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_unfold_3702_);
lean_inc(v_isUnitLike_3701_);
lean_inc(v_defEqPerm_3700_);
lean_inc(v_defEqTrans_3699_);
lean_inc(v_whnf_3698_);
lean_inc(v_synthInstance_3697_);
lean_inc(v_funInfo_3696_);
lean_dec(v_cache_3688_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3713_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
lean_ctor_set(v___x_3704_, 0, v___x_3686_);
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3686_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v_funInfo_3696_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v_synthInstance_3697_);
lean_ctor_set(v_reuseFailAlloc_3712_, 3, v_whnf_3698_);
lean_ctor_set(v_reuseFailAlloc_3712_, 4, v_defEqTrans_3699_);
lean_ctor_set(v_reuseFailAlloc_3712_, 5, v_defEqPerm_3700_);
lean_ctor_set(v_reuseFailAlloc_3712_, 6, v_isUnitLike_3701_);
lean_ctor_set(v_reuseFailAlloc_3712_, 7, v_unfold_3702_);
v___x_3707_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
lean_object* v___x_3709_; 
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 1, v___x_3707_);
v___x_3709_ = v___x_3694_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_mctx_3689_);
lean_ctor_set(v_reuseFailAlloc_3711_, 1, v___x_3707_);
lean_ctor_set(v_reuseFailAlloc_3711_, 2, v_zetaDeltaFVarIds_3690_);
lean_ctor_set(v_reuseFailAlloc_3711_, 3, v_postponed_3691_);
lean_ctor_set(v_reuseFailAlloc_3711_, 4, v_diag_3692_);
v___x_3709_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
lean_object* v___x_3710_; 
v___x_3710_ = lean_st_ref_put(v_a_3275_, v___x_3709_);
goto v___jp_3655_;
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
lean_dec(v___x_3672_);
lean_dec_ref(v_inferType_3671_);
lean_del_object(v___x_3611_);
goto v___jp_3655_;
}
v___jp_3613_:
{
lean_object* v___x_3614_; 
v___x_3614_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; uint8_t v___x_3616_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
v___x_3616_ = l_Lean_Expr_hasMVar(v_a_3615_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3653_; 
lean_inc(v_a_3615_);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3653_ == 0)
{
lean_object* v_unused_3654_; 
v_unused_3654_ = lean_ctor_get(v___x_3614_, 0);
lean_dec(v_unused_3654_);
v___x_3618_ = v___x_3614_;
v_isShared_3619_ = v_isSharedCheck_3653_;
goto v_resetjp_3617_;
}
else
{
lean_dec(v___x_3614_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3653_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; lean_object* v_cache_3621_; lean_object* v_mctx_3622_; lean_object* v_zetaDeltaFVarIds_3623_; lean_object* v_postponed_3624_; lean_object* v_diag_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3652_; 
v___x_3620_ = lean_st_ref_take(v_a_3275_);
v_cache_3621_ = lean_ctor_get(v___x_3620_, 1);
v_mctx_3622_ = lean_ctor_get(v___x_3620_, 0);
v_zetaDeltaFVarIds_3623_ = lean_ctor_get(v___x_3620_, 2);
v_postponed_3624_ = lean_ctor_get(v___x_3620_, 3);
v_diag_3625_ = lean_ctor_get(v___x_3620_, 4);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3627_ = v___x_3620_;
v_isShared_3628_ = v_isSharedCheck_3652_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_diag_3625_);
lean_inc(v_postponed_3624_);
lean_inc(v_zetaDeltaFVarIds_3623_);
lean_inc(v_cache_3621_);
lean_inc(v_mctx_3622_);
lean_dec(v___x_3620_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3652_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v_inferType_3629_; lean_object* v_funInfo_3630_; lean_object* v_synthInstance_3631_; lean_object* v_whnf_3632_; lean_object* v_defEqTrans_3633_; lean_object* v_defEqPerm_3634_; lean_object* v_isUnitLike_3635_; lean_object* v_unfold_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3651_; 
v_inferType_3629_ = lean_ctor_get(v_cache_3621_, 0);
v_funInfo_3630_ = lean_ctor_get(v_cache_3621_, 1);
v_synthInstance_3631_ = lean_ctor_get(v_cache_3621_, 2);
v_whnf_3632_ = lean_ctor_get(v_cache_3621_, 3);
v_defEqTrans_3633_ = lean_ctor_get(v_cache_3621_, 4);
v_defEqPerm_3634_ = lean_ctor_get(v_cache_3621_, 5);
v_isUnitLike_3635_ = lean_ctor_get(v_cache_3621_, 6);
v_unfold_3636_ = lean_ctor_get(v_cache_3621_, 7);
v_isSharedCheck_3651_ = !lean_is_exclusive(v_cache_3621_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3638_ = v_cache_3621_;
v_isShared_3639_ = v_isSharedCheck_3651_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_unfold_3636_);
lean_inc(v_isUnitLike_3635_);
lean_inc(v_defEqPerm_3634_);
lean_inc(v_defEqTrans_3633_);
lean_inc(v_whnf_3632_);
lean_inc(v_synthInstance_3631_);
lean_inc(v_funInfo_3630_);
lean_inc(v_inferType_3629_);
lean_dec(v_cache_3621_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3651_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3640_; lean_object* v___x_3642_; 
lean_inc(v_a_3615_);
v___x_3640_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3629_, v_a_3609_, v_a_3615_);
if (v_isShared_3639_ == 0)
{
lean_ctor_set(v___x_3638_, 0, v___x_3640_);
v___x_3642_ = v___x_3638_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v___x_3640_);
lean_ctor_set(v_reuseFailAlloc_3650_, 1, v_funInfo_3630_);
lean_ctor_set(v_reuseFailAlloc_3650_, 2, v_synthInstance_3631_);
lean_ctor_set(v_reuseFailAlloc_3650_, 3, v_whnf_3632_);
lean_ctor_set(v_reuseFailAlloc_3650_, 4, v_defEqTrans_3633_);
lean_ctor_set(v_reuseFailAlloc_3650_, 5, v_defEqPerm_3634_);
lean_ctor_set(v_reuseFailAlloc_3650_, 6, v_isUnitLike_3635_);
lean_ctor_set(v_reuseFailAlloc_3650_, 7, v_unfold_3636_);
v___x_3642_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
lean_object* v___x_3644_; 
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 1, v___x_3642_);
v___x_3644_ = v___x_3627_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_mctx_3622_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v___x_3642_);
lean_ctor_set(v_reuseFailAlloc_3649_, 2, v_zetaDeltaFVarIds_3623_);
lean_ctor_set(v_reuseFailAlloc_3649_, 3, v_postponed_3624_);
lean_ctor_set(v_reuseFailAlloc_3649_, 4, v_diag_3625_);
v___x_3644_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; lean_object* v___x_3647_; 
v___x_3645_ = lean_st_ref_put(v_a_3275_, v___x_3644_);
if (v_isShared_3619_ == 0)
{
v___x_3647_ = v___x_3618_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3615_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3609_);
return v___x_3614_;
}
}
else
{
lean_dec(v_a_3609_);
return v___x_3614_;
}
}
v___jp_3655_:
{
lean_object* v_toCold_3656_; lean_object* v_cancelTk_x3f_3657_; 
v_toCold_3656_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3657_ = lean_ctor_get(v_toCold_3656_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3657_) == 1)
{
lean_object* v_val_3658_; uint8_t v___x_3659_; 
v_val_3658_ = lean_ctor_get(v_cancelTk_x3f_3657_, 0);
v___x_3659_ = l_IO_CancelToken_isSet(v_val_3658_);
if (v___x_3659_ == 0)
{
goto v___jp_3613_;
}
else
{
lean_object* v___x_3660_; lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
lean_dec(v_a_3609_);
lean_dec_ref_known(v_e_3273_, 3);
v___x_3660_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___x_3660_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___x_3660_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
}
else
{
goto v___jp_3613_;
}
}
}
}
else
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3724_; 
lean_dec_ref_known(v_e_3273_, 3);
v_a_3717_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3719_ = v___x_3608_;
v_isShared_3720_ = v_isSharedCheck_3724_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3608_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3724_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3722_; 
if (v_isShared_3720_ == 0)
{
v___x_3722_ = v___x_3719_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v_a_3717_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
else
{
goto v___jp_3279_;
}
}
}
case 9:
{
lean_object* v_a_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v_a_3725_ = lean_ctor_get(v_e_3273_, 0);
lean_inc_ref(v_a_3725_);
lean_dec_ref_known(v_e_3273_, 1);
v___x_3726_ = l_Lean_Literal_type(v_a_3725_);
lean_dec_ref(v_a_3725_);
v___x_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3726_);
return v___x_3727_;
}
case 10:
{
lean_object* v_expr_3728_; 
v_expr_3728_ = lean_ctor_get(v_e_3273_, 1);
lean_inc_ref(v_expr_3728_);
lean_dec_ref_known(v_e_3273_, 2);
v_e_3273_ = v_expr_3728_;
goto _start;
}
case 11:
{
lean_object* v_typeName_3730_; lean_object* v_idx_3731_; lean_object* v_struct_3732_; uint8_t v_cacheInferType_3749_; 
v_typeName_3730_ = lean_ctor_get(v_e_3273_, 0);
lean_inc(v_typeName_3730_);
v_idx_3731_ = lean_ctor_get(v_e_3273_, 1);
lean_inc(v_idx_3731_);
v_struct_3732_ = lean_ctor_get(v_e_3273_, 2);
lean_inc_ref(v_struct_3732_);
v_cacheInferType_3749_ = lean_ctor_get_uint8(v_a_3274_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3749_ == 0)
{
lean_dec_ref_known(v_e_3273_, 3);
goto v___jp_3733_;
}
else
{
uint8_t v___x_3750_; 
v___x_3750_ = l_Lean_Expr_hasMVar(v_e_3273_);
if (v___x_3750_ == 0)
{
lean_object* v___x_3751_; 
v___x_3751_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3273_, v_a_3274_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3859_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3754_ = v___x_3751_;
v_isShared_3755_ = v_isSharedCheck_3859_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3751_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3859_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3812_; lean_object* v_cache_3813_; lean_object* v_inferType_3814_; lean_object* v___x_3815_; 
v___x_3812_ = lean_st_ref_get(v_a_3275_);
v_cache_3813_ = lean_ctor_get(v___x_3812_, 1);
lean_inc_ref(v_cache_3813_);
lean_dec(v___x_3812_);
v_inferType_3814_ = lean_ctor_get(v_cache_3813_, 0);
lean_inc_ref(v_inferType_3814_);
lean_dec_ref(v_cache_3813_);
v___x_3815_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3814_, v_a_3752_);
if (lean_obj_tag(v___x_3815_) == 1)
{
lean_object* v_val_3816_; lean_object* v_fst_3817_; lean_object* v_snd_3818_; lean_object* v_expr_3819_; uint64_t v_configKey_3820_; lean_object* v_expr_3821_; uint64_t v_configKey_3822_; uint8_t v___x_3823_; 
v_val_3816_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_val_3816_);
lean_dec_ref_known(v___x_3815_, 1);
v_fst_3817_ = lean_ctor_get(v_val_3816_, 0);
lean_inc(v_fst_3817_);
v_snd_3818_ = lean_ctor_get(v_val_3816_, 1);
lean_inc(v_snd_3818_);
lean_dec(v_val_3816_);
v_expr_3819_ = lean_ctor_get(v_a_3752_, 0);
v_configKey_3820_ = lean_ctor_get_uint64(v_a_3752_, sizeof(void*)*1);
v_expr_3821_ = lean_ctor_get(v_fst_3817_, 0);
lean_inc_ref(v_expr_3821_);
v_configKey_3822_ = lean_ctor_get_uint64(v_fst_3817_, sizeof(void*)*1);
lean_dec(v_fst_3817_);
v___x_3823_ = lean_uint64_dec_eq(v_configKey_3820_, v_configKey_3822_);
if (v___x_3823_ == 0)
{
lean_dec_ref(v_expr_3821_);
lean_dec(v_snd_3818_);
lean_dec_ref(v_inferType_3814_);
lean_del_object(v___x_3754_);
goto v___jp_3798_;
}
else
{
size_t v___x_3824_; uint8_t v___x_3825_; 
v___x_3824_ = ((size_t)64ULL);
v___x_3825_ = lean_expr_equal_budgeted(v_expr_3819_, v_expr_3821_, v___x_3824_);
lean_dec_ref(v_expr_3821_);
switch(v___x_3825_)
{
case 0:
{
lean_dec(v_snd_3818_);
lean_dec_ref(v_inferType_3814_);
lean_del_object(v___x_3754_);
goto v___jp_3798_;
}
case 1:
{
lean_object* v___x_3827_; 
lean_dec_ref(v_inferType_3814_);
lean_dec(v_a_3752_);
lean_dec_ref(v_struct_3732_);
lean_dec(v_idx_3731_);
lean_dec(v_typeName_3730_);
if (v_isShared_3755_ == 0)
{
lean_ctor_set(v___x_3754_, 0, v_snd_3818_);
v___x_3827_ = v___x_3754_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_snd_3818_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
default: 
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v_cache_3831_; lean_object* v_mctx_3832_; lean_object* v_zetaDeltaFVarIds_3833_; lean_object* v_postponed_3834_; lean_object* v_diag_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3858_; 
lean_dec(v_snd_3818_);
lean_del_object(v___x_3754_);
v___x_3829_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_inferType_3814_, v_a_3752_);
v___x_3830_ = lean_st_ref_take(v_a_3275_);
v_cache_3831_ = lean_ctor_get(v___x_3830_, 1);
v_mctx_3832_ = lean_ctor_get(v___x_3830_, 0);
v_zetaDeltaFVarIds_3833_ = lean_ctor_get(v___x_3830_, 2);
v_postponed_3834_ = lean_ctor_get(v___x_3830_, 3);
v_diag_3835_ = lean_ctor_get(v___x_3830_, 4);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3837_ = v___x_3830_;
v_isShared_3838_ = v_isSharedCheck_3858_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_diag_3835_);
lean_inc(v_postponed_3834_);
lean_inc(v_zetaDeltaFVarIds_3833_);
lean_inc(v_cache_3831_);
lean_inc(v_mctx_3832_);
lean_dec(v___x_3830_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3858_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v_funInfo_3839_; lean_object* v_synthInstance_3840_; lean_object* v_whnf_3841_; lean_object* v_defEqTrans_3842_; lean_object* v_defEqPerm_3843_; lean_object* v_isUnitLike_3844_; lean_object* v_unfold_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3856_; 
v_funInfo_3839_ = lean_ctor_get(v_cache_3831_, 1);
v_synthInstance_3840_ = lean_ctor_get(v_cache_3831_, 2);
v_whnf_3841_ = lean_ctor_get(v_cache_3831_, 3);
v_defEqTrans_3842_ = lean_ctor_get(v_cache_3831_, 4);
v_defEqPerm_3843_ = lean_ctor_get(v_cache_3831_, 5);
v_isUnitLike_3844_ = lean_ctor_get(v_cache_3831_, 6);
v_unfold_3845_ = lean_ctor_get(v_cache_3831_, 7);
v_isSharedCheck_3856_ = !lean_is_exclusive(v_cache_3831_);
if (v_isSharedCheck_3856_ == 0)
{
lean_object* v_unused_3857_; 
v_unused_3857_ = lean_ctor_get(v_cache_3831_, 0);
lean_dec(v_unused_3857_);
v___x_3847_ = v_cache_3831_;
v_isShared_3848_ = v_isSharedCheck_3856_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_unfold_3845_);
lean_inc(v_isUnitLike_3844_);
lean_inc(v_defEqPerm_3843_);
lean_inc(v_defEqTrans_3842_);
lean_inc(v_whnf_3841_);
lean_inc(v_synthInstance_3840_);
lean_inc(v_funInfo_3839_);
lean_dec(v_cache_3831_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3856_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 0, v___x_3829_);
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v___x_3829_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_funInfo_3839_);
lean_ctor_set(v_reuseFailAlloc_3855_, 2, v_synthInstance_3840_);
lean_ctor_set(v_reuseFailAlloc_3855_, 3, v_whnf_3841_);
lean_ctor_set(v_reuseFailAlloc_3855_, 4, v_defEqTrans_3842_);
lean_ctor_set(v_reuseFailAlloc_3855_, 5, v_defEqPerm_3843_);
lean_ctor_set(v_reuseFailAlloc_3855_, 6, v_isUnitLike_3844_);
lean_ctor_set(v_reuseFailAlloc_3855_, 7, v_unfold_3845_);
v___x_3850_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
lean_object* v___x_3852_; 
if (v_isShared_3838_ == 0)
{
lean_ctor_set(v___x_3837_, 1, v___x_3850_);
v___x_3852_ = v___x_3837_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_mctx_3832_);
lean_ctor_set(v_reuseFailAlloc_3854_, 1, v___x_3850_);
lean_ctor_set(v_reuseFailAlloc_3854_, 2, v_zetaDeltaFVarIds_3833_);
lean_ctor_set(v_reuseFailAlloc_3854_, 3, v_postponed_3834_);
lean_ctor_set(v_reuseFailAlloc_3854_, 4, v_diag_3835_);
v___x_3852_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
lean_object* v___x_3853_; 
v___x_3853_ = lean_st_ref_put(v_a_3275_, v___x_3852_);
goto v___jp_3798_;
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
lean_dec(v___x_3815_);
lean_dec_ref(v_inferType_3814_);
lean_del_object(v___x_3754_);
goto v___jp_3798_;
}
v___jp_3756_:
{
lean_object* v___x_3757_; 
v___x_3757_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3730_, v_idx_3731_, v_struct_3732_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; uint8_t v___x_3759_; 
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
v___x_3759_ = l_Lean_Expr_hasMVar(v_a_3758_);
if (v___x_3759_ == 0)
{
lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3796_; 
lean_inc(v_a_3758_);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3796_ == 0)
{
lean_object* v_unused_3797_; 
v_unused_3797_ = lean_ctor_get(v___x_3757_, 0);
lean_dec(v_unused_3797_);
v___x_3761_ = v___x_3757_;
v_isShared_3762_ = v_isSharedCheck_3796_;
goto v_resetjp_3760_;
}
else
{
lean_dec(v___x_3757_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3796_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v_cache_3764_; lean_object* v_mctx_3765_; lean_object* v_zetaDeltaFVarIds_3766_; lean_object* v_postponed_3767_; lean_object* v_diag_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3795_; 
v___x_3763_ = lean_st_ref_take(v_a_3275_);
v_cache_3764_ = lean_ctor_get(v___x_3763_, 1);
v_mctx_3765_ = lean_ctor_get(v___x_3763_, 0);
v_zetaDeltaFVarIds_3766_ = lean_ctor_get(v___x_3763_, 2);
v_postponed_3767_ = lean_ctor_get(v___x_3763_, 3);
v_diag_3768_ = lean_ctor_get(v___x_3763_, 4);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3770_ = v___x_3763_;
v_isShared_3771_ = v_isSharedCheck_3795_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_diag_3768_);
lean_inc(v_postponed_3767_);
lean_inc(v_zetaDeltaFVarIds_3766_);
lean_inc(v_cache_3764_);
lean_inc(v_mctx_3765_);
lean_dec(v___x_3763_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3795_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v_inferType_3772_; lean_object* v_funInfo_3773_; lean_object* v_synthInstance_3774_; lean_object* v_whnf_3775_; lean_object* v_defEqTrans_3776_; lean_object* v_defEqPerm_3777_; lean_object* v_isUnitLike_3778_; lean_object* v_unfold_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3794_; 
v_inferType_3772_ = lean_ctor_get(v_cache_3764_, 0);
v_funInfo_3773_ = lean_ctor_get(v_cache_3764_, 1);
v_synthInstance_3774_ = lean_ctor_get(v_cache_3764_, 2);
v_whnf_3775_ = lean_ctor_get(v_cache_3764_, 3);
v_defEqTrans_3776_ = lean_ctor_get(v_cache_3764_, 4);
v_defEqPerm_3777_ = lean_ctor_get(v_cache_3764_, 5);
v_isUnitLike_3778_ = lean_ctor_get(v_cache_3764_, 6);
v_unfold_3779_ = lean_ctor_get(v_cache_3764_, 7);
v_isSharedCheck_3794_ = !lean_is_exclusive(v_cache_3764_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3781_ = v_cache_3764_;
v_isShared_3782_ = v_isSharedCheck_3794_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_unfold_3779_);
lean_inc(v_isUnitLike_3778_);
lean_inc(v_defEqPerm_3777_);
lean_inc(v_defEqTrans_3776_);
lean_inc(v_whnf_3775_);
lean_inc(v_synthInstance_3774_);
lean_inc(v_funInfo_3773_);
lean_inc(v_inferType_3772_);
lean_dec(v_cache_3764_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3794_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
lean_inc(v_a_3758_);
v___x_3783_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3772_, v_a_3752_, v_a_3758_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3783_);
v___x_3785_ = v___x_3781_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v___x_3783_);
lean_ctor_set(v_reuseFailAlloc_3793_, 1, v_funInfo_3773_);
lean_ctor_set(v_reuseFailAlloc_3793_, 2, v_synthInstance_3774_);
lean_ctor_set(v_reuseFailAlloc_3793_, 3, v_whnf_3775_);
lean_ctor_set(v_reuseFailAlloc_3793_, 4, v_defEqTrans_3776_);
lean_ctor_set(v_reuseFailAlloc_3793_, 5, v_defEqPerm_3777_);
lean_ctor_set(v_reuseFailAlloc_3793_, 6, v_isUnitLike_3778_);
lean_ctor_set(v_reuseFailAlloc_3793_, 7, v_unfold_3779_);
v___x_3785_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
lean_object* v___x_3787_; 
if (v_isShared_3771_ == 0)
{
lean_ctor_set(v___x_3770_, 1, v___x_3785_);
v___x_3787_ = v___x_3770_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_mctx_3765_);
lean_ctor_set(v_reuseFailAlloc_3792_, 1, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3792_, 2, v_zetaDeltaFVarIds_3766_);
lean_ctor_set(v_reuseFailAlloc_3792_, 3, v_postponed_3767_);
lean_ctor_set(v_reuseFailAlloc_3792_, 4, v_diag_3768_);
v___x_3787_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3788_; lean_object* v___x_3790_; 
v___x_3788_ = lean_st_ref_put(v_a_3275_, v___x_3787_);
if (v_isShared_3762_ == 0)
{
v___x_3790_ = v___x_3761_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3758_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3752_);
return v___x_3757_;
}
}
else
{
lean_dec(v_a_3752_);
return v___x_3757_;
}
}
v___jp_3798_:
{
lean_object* v_toCold_3799_; lean_object* v_cancelTk_x3f_3800_; 
v_toCold_3799_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3800_ = lean_ctor_get(v_toCold_3799_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3800_) == 1)
{
lean_object* v_val_3801_; uint8_t v___x_3802_; 
v_val_3801_ = lean_ctor_get(v_cancelTk_x3f_3800_, 0);
v___x_3802_ = l_IO_CancelToken_isSet(v_val_3801_);
if (v___x_3802_ == 0)
{
goto v___jp_3756_;
}
else
{
lean_object* v___x_3803_; lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_dec(v_a_3752_);
lean_dec_ref(v_struct_3732_);
lean_dec(v_idx_3731_);
lean_dec(v_typeName_3730_);
v___x_3803_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3803_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3803_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
else
{
goto v___jp_3756_;
}
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
lean_dec_ref(v_struct_3732_);
lean_dec(v_idx_3731_);
lean_dec(v_typeName_3730_);
v_a_3860_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3751_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3751_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3273_, 3);
goto v___jp_3733_;
}
}
v___jp_3733_:
{
lean_object* v_toCold_3734_; lean_object* v_cancelTk_x3f_3735_; 
v_toCold_3734_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3735_ = lean_ctor_get(v_toCold_3734_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3735_) == 1)
{
lean_object* v_val_3736_; uint8_t v___x_3737_; 
v_val_3736_ = lean_ctor_get(v_cancelTk_x3f_3735_, 0);
v___x_3737_ = l_IO_CancelToken_isSet(v_val_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___x_3738_; 
v___x_3738_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3730_, v_idx_3731_, v_struct_3732_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3738_;
}
else
{
lean_object* v___x_3739_; lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3747_; 
lean_dec_ref(v_struct_3732_);
lean_dec(v_idx_3731_);
lean_dec(v_typeName_3730_);
v___x_3739_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3742_ = v___x_3739_;
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3739_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3745_; 
if (v_isShared_3743_ == 0)
{
v___x_3745_ = v___x_3742_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_a_3740_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
}
else
{
lean_object* v___x_3748_; 
v___x_3748_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3730_, v_idx_3731_, v_struct_3732_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3748_;
}
}
}
default: 
{
uint8_t v_cacheInferType_3868_; 
v_cacheInferType_3868_ = lean_ctor_get_uint8(v_a_3274_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3868_ == 0)
{
goto v___jp_3295_;
}
else
{
uint8_t v___x_3869_; 
v___x_3869_ = l_Lean_Expr_hasMVar(v_e_3273_);
if (v___x_3869_ == 0)
{
lean_object* v___x_3870_; 
lean_inc_ref(v_e_3273_);
v___x_3870_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3273_, v_a_3274_);
if (lean_obj_tag(v___x_3870_) == 0)
{
lean_object* v_a_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3978_; 
v_a_3871_ = lean_ctor_get(v___x_3870_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3870_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3873_ = v___x_3870_;
v_isShared_3874_ = v_isSharedCheck_3978_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_a_3871_);
lean_dec(v___x_3870_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3978_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3931_; lean_object* v_cache_3932_; lean_object* v_inferType_3933_; lean_object* v___x_3934_; 
v___x_3931_ = lean_st_ref_get(v_a_3275_);
v_cache_3932_ = lean_ctor_get(v___x_3931_, 1);
lean_inc_ref(v_cache_3932_);
lean_dec(v___x_3931_);
v_inferType_3933_ = lean_ctor_get(v_cache_3932_, 0);
lean_inc_ref(v_inferType_3933_);
lean_dec_ref(v_cache_3932_);
v___x_3934_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3933_, v_a_3871_);
if (lean_obj_tag(v___x_3934_) == 1)
{
lean_object* v_val_3935_; lean_object* v_fst_3936_; lean_object* v_snd_3937_; lean_object* v_expr_3938_; uint64_t v_configKey_3939_; lean_object* v_expr_3940_; uint64_t v_configKey_3941_; uint8_t v___x_3942_; 
v_val_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_val_3935_);
lean_dec_ref_known(v___x_3934_, 1);
v_fst_3936_ = lean_ctor_get(v_val_3935_, 0);
lean_inc(v_fst_3936_);
v_snd_3937_ = lean_ctor_get(v_val_3935_, 1);
lean_inc(v_snd_3937_);
lean_dec(v_val_3935_);
v_expr_3938_ = lean_ctor_get(v_a_3871_, 0);
v_configKey_3939_ = lean_ctor_get_uint64(v_a_3871_, sizeof(void*)*1);
v_expr_3940_ = lean_ctor_get(v_fst_3936_, 0);
lean_inc_ref(v_expr_3940_);
v_configKey_3941_ = lean_ctor_get_uint64(v_fst_3936_, sizeof(void*)*1);
lean_dec(v_fst_3936_);
v___x_3942_ = lean_uint64_dec_eq(v_configKey_3939_, v_configKey_3941_);
if (v___x_3942_ == 0)
{
lean_dec_ref(v_expr_3940_);
lean_dec(v_snd_3937_);
lean_dec_ref(v_inferType_3933_);
lean_del_object(v___x_3873_);
goto v___jp_3917_;
}
else
{
size_t v___x_3943_; uint8_t v___x_3944_; 
v___x_3943_ = ((size_t)64ULL);
v___x_3944_ = lean_expr_equal_budgeted(v_expr_3938_, v_expr_3940_, v___x_3943_);
lean_dec_ref(v_expr_3940_);
switch(v___x_3944_)
{
case 0:
{
lean_dec(v_snd_3937_);
lean_dec_ref(v_inferType_3933_);
lean_del_object(v___x_3873_);
goto v___jp_3917_;
}
case 1:
{
lean_object* v___x_3946_; 
lean_dec_ref(v_inferType_3933_);
lean_dec(v_a_3871_);
lean_dec_ref(v_e_3273_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set(v___x_3873_, 0, v_snd_3937_);
v___x_3946_ = v___x_3873_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_snd_3937_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
return v___x_3946_;
}
}
default: 
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v_cache_3950_; lean_object* v_mctx_3951_; lean_object* v_zetaDeltaFVarIds_3952_; lean_object* v_postponed_3953_; lean_object* v_diag_3954_; lean_object* v___x_3956_; uint8_t v_isShared_3957_; uint8_t v_isSharedCheck_3977_; 
lean_dec(v_snd_3937_);
lean_del_object(v___x_3873_);
v___x_3948_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_inferType_3933_, v_a_3871_);
v___x_3949_ = lean_st_ref_take(v_a_3275_);
v_cache_3950_ = lean_ctor_get(v___x_3949_, 1);
v_mctx_3951_ = lean_ctor_get(v___x_3949_, 0);
v_zetaDeltaFVarIds_3952_ = lean_ctor_get(v___x_3949_, 2);
v_postponed_3953_ = lean_ctor_get(v___x_3949_, 3);
v_diag_3954_ = lean_ctor_get(v___x_3949_, 4);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3956_ = v___x_3949_;
v_isShared_3957_ = v_isSharedCheck_3977_;
goto v_resetjp_3955_;
}
else
{
lean_inc(v_diag_3954_);
lean_inc(v_postponed_3953_);
lean_inc(v_zetaDeltaFVarIds_3952_);
lean_inc(v_cache_3950_);
lean_inc(v_mctx_3951_);
lean_dec(v___x_3949_);
v___x_3956_ = lean_box(0);
v_isShared_3957_ = v_isSharedCheck_3977_;
goto v_resetjp_3955_;
}
v_resetjp_3955_:
{
lean_object* v_funInfo_3958_; lean_object* v_synthInstance_3959_; lean_object* v_whnf_3960_; lean_object* v_defEqTrans_3961_; lean_object* v_defEqPerm_3962_; lean_object* v_isUnitLike_3963_; lean_object* v_unfold_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3975_; 
v_funInfo_3958_ = lean_ctor_get(v_cache_3950_, 1);
v_synthInstance_3959_ = lean_ctor_get(v_cache_3950_, 2);
v_whnf_3960_ = lean_ctor_get(v_cache_3950_, 3);
v_defEqTrans_3961_ = lean_ctor_get(v_cache_3950_, 4);
v_defEqPerm_3962_ = lean_ctor_get(v_cache_3950_, 5);
v_isUnitLike_3963_ = lean_ctor_get(v_cache_3950_, 6);
v_unfold_3964_ = lean_ctor_get(v_cache_3950_, 7);
v_isSharedCheck_3975_ = !lean_is_exclusive(v_cache_3950_);
if (v_isSharedCheck_3975_ == 0)
{
lean_object* v_unused_3976_; 
v_unused_3976_ = lean_ctor_get(v_cache_3950_, 0);
lean_dec(v_unused_3976_);
v___x_3966_ = v_cache_3950_;
v_isShared_3967_ = v_isSharedCheck_3975_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_unfold_3964_);
lean_inc(v_isUnitLike_3963_);
lean_inc(v_defEqPerm_3962_);
lean_inc(v_defEqTrans_3961_);
lean_inc(v_whnf_3960_);
lean_inc(v_synthInstance_3959_);
lean_inc(v_funInfo_3958_);
lean_dec(v_cache_3950_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3975_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3969_; 
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 0, v___x_3948_);
v___x_3969_ = v___x_3966_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3948_);
lean_ctor_set(v_reuseFailAlloc_3974_, 1, v_funInfo_3958_);
lean_ctor_set(v_reuseFailAlloc_3974_, 2, v_synthInstance_3959_);
lean_ctor_set(v_reuseFailAlloc_3974_, 3, v_whnf_3960_);
lean_ctor_set(v_reuseFailAlloc_3974_, 4, v_defEqTrans_3961_);
lean_ctor_set(v_reuseFailAlloc_3974_, 5, v_defEqPerm_3962_);
lean_ctor_set(v_reuseFailAlloc_3974_, 6, v_isUnitLike_3963_);
lean_ctor_set(v_reuseFailAlloc_3974_, 7, v_unfold_3964_);
v___x_3969_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3971_; 
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 1, v___x_3969_);
v___x_3971_ = v___x_3956_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_mctx_3951_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v___x_3969_);
lean_ctor_set(v_reuseFailAlloc_3973_, 2, v_zetaDeltaFVarIds_3952_);
lean_ctor_set(v_reuseFailAlloc_3973_, 3, v_postponed_3953_);
lean_ctor_set(v_reuseFailAlloc_3973_, 4, v_diag_3954_);
v___x_3971_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
lean_object* v___x_3972_; 
v___x_3972_ = lean_st_ref_put(v_a_3275_, v___x_3971_);
goto v___jp_3917_;
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
lean_dec(v___x_3934_);
lean_dec_ref(v_inferType_3933_);
lean_del_object(v___x_3873_);
goto v___jp_3917_;
}
v___jp_3875_:
{
lean_object* v___x_3876_; 
v___x_3876_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v_a_3877_; uint8_t v___x_3878_; 
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
v___x_3878_ = l_Lean_Expr_hasMVar(v_a_3877_);
if (v___x_3878_ == 0)
{
lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3915_; 
lean_inc(v_a_3877_);
v_isSharedCheck_3915_ = !lean_is_exclusive(v___x_3876_);
if (v_isSharedCheck_3915_ == 0)
{
lean_object* v_unused_3916_; 
v_unused_3916_ = lean_ctor_get(v___x_3876_, 0);
lean_dec(v_unused_3916_);
v___x_3880_ = v___x_3876_;
v_isShared_3881_ = v_isSharedCheck_3915_;
goto v_resetjp_3879_;
}
else
{
lean_dec(v___x_3876_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3915_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3882_; lean_object* v_cache_3883_; lean_object* v_mctx_3884_; lean_object* v_zetaDeltaFVarIds_3885_; lean_object* v_postponed_3886_; lean_object* v_diag_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3914_; 
v___x_3882_ = lean_st_ref_take(v_a_3275_);
v_cache_3883_ = lean_ctor_get(v___x_3882_, 1);
v_mctx_3884_ = lean_ctor_get(v___x_3882_, 0);
v_zetaDeltaFVarIds_3885_ = lean_ctor_get(v___x_3882_, 2);
v_postponed_3886_ = lean_ctor_get(v___x_3882_, 3);
v_diag_3887_ = lean_ctor_get(v___x_3882_, 4);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3889_ = v___x_3882_;
v_isShared_3890_ = v_isSharedCheck_3914_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_diag_3887_);
lean_inc(v_postponed_3886_);
lean_inc(v_zetaDeltaFVarIds_3885_);
lean_inc(v_cache_3883_);
lean_inc(v_mctx_3884_);
lean_dec(v___x_3882_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3914_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v_inferType_3891_; lean_object* v_funInfo_3892_; lean_object* v_synthInstance_3893_; lean_object* v_whnf_3894_; lean_object* v_defEqTrans_3895_; lean_object* v_defEqPerm_3896_; lean_object* v_isUnitLike_3897_; lean_object* v_unfold_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3913_; 
v_inferType_3891_ = lean_ctor_get(v_cache_3883_, 0);
v_funInfo_3892_ = lean_ctor_get(v_cache_3883_, 1);
v_synthInstance_3893_ = lean_ctor_get(v_cache_3883_, 2);
v_whnf_3894_ = lean_ctor_get(v_cache_3883_, 3);
v_defEqTrans_3895_ = lean_ctor_get(v_cache_3883_, 4);
v_defEqPerm_3896_ = lean_ctor_get(v_cache_3883_, 5);
v_isUnitLike_3897_ = lean_ctor_get(v_cache_3883_, 6);
v_unfold_3898_ = lean_ctor_get(v_cache_3883_, 7);
v_isSharedCheck_3913_ = !lean_is_exclusive(v_cache_3883_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3900_ = v_cache_3883_;
v_isShared_3901_ = v_isSharedCheck_3913_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_unfold_3898_);
lean_inc(v_isUnitLike_3897_);
lean_inc(v_defEqPerm_3896_);
lean_inc(v_defEqTrans_3895_);
lean_inc(v_whnf_3894_);
lean_inc(v_synthInstance_3893_);
lean_inc(v_funInfo_3892_);
lean_inc(v_inferType_3891_);
lean_dec(v_cache_3883_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3913_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3902_; lean_object* v___x_3904_; 
lean_inc(v_a_3877_);
v___x_3902_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3891_, v_a_3871_, v_a_3877_);
if (v_isShared_3901_ == 0)
{
lean_ctor_set(v___x_3900_, 0, v___x_3902_);
v___x_3904_ = v___x_3900_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v___x_3902_);
lean_ctor_set(v_reuseFailAlloc_3912_, 1, v_funInfo_3892_);
lean_ctor_set(v_reuseFailAlloc_3912_, 2, v_synthInstance_3893_);
lean_ctor_set(v_reuseFailAlloc_3912_, 3, v_whnf_3894_);
lean_ctor_set(v_reuseFailAlloc_3912_, 4, v_defEqTrans_3895_);
lean_ctor_set(v_reuseFailAlloc_3912_, 5, v_defEqPerm_3896_);
lean_ctor_set(v_reuseFailAlloc_3912_, 6, v_isUnitLike_3897_);
lean_ctor_set(v_reuseFailAlloc_3912_, 7, v_unfold_3898_);
v___x_3904_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
lean_object* v___x_3906_; 
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 1, v___x_3904_);
v___x_3906_ = v___x_3889_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_mctx_3884_);
lean_ctor_set(v_reuseFailAlloc_3911_, 1, v___x_3904_);
lean_ctor_set(v_reuseFailAlloc_3911_, 2, v_zetaDeltaFVarIds_3885_);
lean_ctor_set(v_reuseFailAlloc_3911_, 3, v_postponed_3886_);
lean_ctor_set(v_reuseFailAlloc_3911_, 4, v_diag_3887_);
v___x_3906_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
lean_object* v___x_3907_; lean_object* v___x_3909_; 
v___x_3907_ = lean_st_ref_put(v_a_3275_, v___x_3906_);
if (v_isShared_3881_ == 0)
{
v___x_3909_ = v___x_3880_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3877_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3871_);
return v___x_3876_;
}
}
else
{
lean_dec(v_a_3871_);
return v___x_3876_;
}
}
v___jp_3917_:
{
lean_object* v_toCold_3918_; lean_object* v_cancelTk_x3f_3919_; 
v_toCold_3918_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3919_ = lean_ctor_get(v_toCold_3918_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3919_) == 1)
{
lean_object* v_val_3920_; uint8_t v___x_3921_; 
v_val_3920_ = lean_ctor_get(v_cancelTk_x3f_3919_, 0);
v___x_3921_ = l_IO_CancelToken_isSet(v_val_3920_);
if (v___x_3921_ == 0)
{
goto v___jp_3875_;
}
else
{
lean_object* v___x_3922_; lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
lean_dec(v_a_3871_);
lean_dec_ref(v_e_3273_);
v___x_3922_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3922_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3922_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
}
else
{
goto v___jp_3875_;
}
}
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
lean_dec_ref(v_e_3273_);
v_a_3979_ = lean_ctor_get(v___x_3870_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3870_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3870_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3870_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3984_; 
if (v_isShared_3982_ == 0)
{
v___x_3984_ = v___x_3981_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_a_3979_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
else
{
goto v___jp_3295_;
}
}
}
}
v___jp_3279_:
{
lean_object* v_toCold_3280_; lean_object* v_cancelTk_x3f_3281_; 
v_toCold_3280_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3281_ = lean_ctor_get(v_toCold_3280_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3281_) == 1)
{
lean_object* v_val_3282_; uint8_t v___x_3283_; 
v_val_3282_ = lean_ctor_get(v_cancelTk_x3f_3281_, 0);
v___x_3283_ = l_IO_CancelToken_isSet(v_val_3282_);
if (v___x_3283_ == 0)
{
lean_object* v___x_3284_; 
v___x_3284_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3284_;
}
else
{
lean_object* v___x_3285_; lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3293_; 
lean_dec_ref(v_e_3273_);
v___x_3285_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3288_ = v___x_3285_;
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___x_3285_);
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
lean_object* v___x_3294_; 
v___x_3294_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3294_;
}
}
v___jp_3295_:
{
lean_object* v_toCold_3296_; lean_object* v_cancelTk_x3f_3297_; 
v_toCold_3296_ = lean_ctor_get(v_a_3276_, 0);
v_cancelTk_x3f_3297_ = lean_ctor_get(v_toCold_3296_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3297_) == 1)
{
lean_object* v_val_3298_; uint8_t v___x_3299_; 
v_val_3298_ = lean_ctor_get(v_cancelTk_x3f_3297_, 0);
v___x_3299_ = l_IO_CancelToken_isSet(v_val_3298_);
if (v___x_3299_ == 0)
{
lean_object* v___x_3300_; 
v___x_3300_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3300_;
}
else
{
lean_object* v___x_3301_; lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec_ref(v_e_3273_);
v___x_3301_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3301_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3301_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
else
{
lean_object* v___x_3310_; 
v___x_3310_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
return v___x_3310_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object* v_e_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_);
lean_dec(v_a_3991_);
lean_dec_ref(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_a_3988_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object* v_00_u03b2_3994_, lean_object* v_x_3995_, lean_object* v_x_3996_, lean_object* v_x_3997_){
_start:
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_x_3995_, v_x_3996_, v_x_3997_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object* v_00_u03b2_3999_, lean_object* v_x_4000_, lean_object* v_x_4001_){
_start:
{
lean_object* v___x_4002_; 
v___x_4002_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_4000_, v_x_4001_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object* v_00_u03b2_4003_, lean_object* v_x_4004_, lean_object* v_x_4005_){
_start:
{
lean_object* v_res_4006_; 
v_res_4006_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(v_00_u03b2_4003_, v_x_4004_, v_x_4005_);
lean_dec_ref(v_x_4005_);
lean_dec_ref(v_x_4004_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3(lean_object* v_00_u03b2_4007_, lean_object* v_x_4008_, lean_object* v_x_4009_){
_start:
{
lean_object* v___x_4010_; 
v___x_4010_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___redArg(v_x_4008_, v_x_4009_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3___boxed(lean_object* v_00_u03b2_4011_, lean_object* v_x_4012_, lean_object* v_x_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3(v_00_u03b2_4011_, v_x_4012_, v_x_4013_);
lean_dec_ref(v_x_4013_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object* v_00_u03b2_4015_, lean_object* v_x_4016_, size_t v_x_4017_, size_t v_x_4018_, lean_object* v_x_4019_, lean_object* v_x_4020_){
_start:
{
lean_object* v___x_4021_; 
v___x_4021_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_4016_, v_x_4017_, v_x_4018_, v_x_4019_, v_x_4020_);
return v___x_4021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object* v_00_u03b2_4022_, lean_object* v_x_4023_, lean_object* v_x_4024_, lean_object* v_x_4025_, lean_object* v_x_4026_, lean_object* v_x_4027_){
_start:
{
size_t v_x_5650__boxed_4028_; size_t v_x_5651__boxed_4029_; lean_object* v_res_4030_; 
v_x_5650__boxed_4028_ = lean_unbox_usize(v_x_4024_);
lean_dec(v_x_4024_);
v_x_5651__boxed_4029_ = lean_unbox_usize(v_x_4025_);
lean_dec(v_x_4025_);
v_res_4030_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(v_00_u03b2_4022_, v_x_4023_, v_x_5650__boxed_4028_, v_x_5651__boxed_4029_, v_x_4026_, v_x_4027_);
return v_res_4030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object* v_00_u03b2_4031_, lean_object* v_x_4032_, size_t v_x_4033_, lean_object* v_x_4034_){
_start:
{
lean_object* v___x_4035_; 
v___x_4035_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_4032_, v_x_4033_, v_x_4034_);
return v___x_4035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object* v_00_u03b2_4036_, lean_object* v_x_4037_, lean_object* v_x_4038_, lean_object* v_x_4039_){
_start:
{
size_t v_x_5667__boxed_4040_; lean_object* v_res_4041_; 
v_x_5667__boxed_4040_ = lean_unbox_usize(v_x_4038_);
lean_dec(v_x_4038_);
v_res_4041_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(v_00_u03b2_4036_, v_x_4037_, v_x_5667__boxed_4040_, v_x_4039_);
lean_dec_ref(v_x_4039_);
lean_dec_ref(v_x_4037_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5(lean_object* v_00_u03b2_4042_, lean_object* v_x_4043_, size_t v_x_4044_, lean_object* v_x_4045_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___redArg(v_x_4043_, v_x_4044_, v_x_4045_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4047_, lean_object* v_x_4048_, lean_object* v_x_4049_, lean_object* v_x_4050_){
_start:
{
size_t v_x_5678__boxed_4051_; lean_object* v_res_4052_; 
v_x_5678__boxed_4051_ = lean_unbox_usize(v_x_4049_);
lean_dec(v_x_4049_);
v_res_4052_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__3_spec__5(v_00_u03b2_4047_, v_x_4048_, v_x_5678__boxed_4051_, v_x_4050_);
lean_dec_ref(v_x_4050_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_4053_, lean_object* v_n_4054_, lean_object* v_k_4055_, lean_object* v_v_4056_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v_n_4054_, v_k_4055_, v_v_4056_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_4058_, size_t v_depth_4059_, lean_object* v_keys_4060_, lean_object* v_vals_4061_, lean_object* v_heq_4062_, lean_object* v_i_4063_, lean_object* v_entries_4064_){
_start:
{
lean_object* v___x_4065_; 
v___x_4065_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_4059_, v_keys_4060_, v_vals_4061_, v_i_4063_, v_entries_4064_);
return v___x_4065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_4066_, lean_object* v_depth_4067_, lean_object* v_keys_4068_, lean_object* v_vals_4069_, lean_object* v_heq_4070_, lean_object* v_i_4071_, lean_object* v_entries_4072_){
_start:
{
size_t v_depth_boxed_4073_; lean_object* v_res_4074_; 
v_depth_boxed_4073_ = lean_unbox_usize(v_depth_4067_);
lean_dec(v_depth_4067_);
v_res_4074_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(v_00_u03b2_4066_, v_depth_boxed_4073_, v_keys_4068_, v_vals_4069_, v_heq_4070_, v_i_4071_, v_entries_4072_);
lean_dec_ref(v_vals_4069_);
lean_dec_ref(v_keys_4068_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_4075_, lean_object* v_keys_4076_, lean_object* v_vals_4077_, lean_object* v_heq_4078_, lean_object* v_i_4079_, lean_object* v_k_4080_){
_start:
{
lean_object* v___x_4081_; 
v___x_4081_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_4076_, v_vals_4077_, v_i_4079_, v_k_4080_);
return v___x_4081_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_4082_, lean_object* v_keys_4083_, lean_object* v_vals_4084_, lean_object* v_heq_4085_, lean_object* v_i_4086_, lean_object* v_k_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(v_00_u03b2_4082_, v_keys_4083_, v_vals_4084_, v_heq_4085_, v_i_4086_, v_k_4087_);
lean_dec_ref(v_k_4087_);
lean_dec_ref(v_vals_4084_);
lean_dec_ref(v_keys_4083_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_4089_, lean_object* v_x_4090_, lean_object* v_x_4091_, lean_object* v_x_4092_, lean_object* v_x_4093_){
_start:
{
lean_object* v___x_4094_; 
v___x_4094_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__5___redArg(v_x_4090_, v_x_4091_, v_x_4092_, v_x_4093_);
return v___x_4094_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4100_ = l_Lean_maxRecDepthErrorMessage;
v___x_4101_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_4102_; lean_object* v___x_4103_; 
v___x_4102_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3);
v___x_4103_ = l_Lean_MessageData_ofFormat(v___x_4102_);
return v___x_4103_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4104_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4);
v___x_4105_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2));
v___x_4106_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
lean_ctor_set(v___x_4106_, 1, v___x_4104_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object* v_ref_4107_){
_start:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4109_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5);
v___x_4110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4110_, 0, v_ref_4107_);
lean_ctor_set(v___x_4110_, 1, v___x_4109_);
v___x_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
return v___x_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object* v_ref_4112_, lean_object* v___y_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_4112_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object* v_00_u03b1_4115_, lean_object* v_ref_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v___x_4122_; 
v___x_4122_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_4116_);
return v___x_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object* v_00_u03b1_4123_, lean_object* v_ref_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(v_00_u03b1_4123_, v_ref_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0(lean_object* v_e_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v___x_4183_; uint8_t v_beta_4184_; 
v___x_4183_ = l_Lean_Meta_Context_config(v___y_4132_);
v_beta_4184_ = lean_ctor_get_uint8(v___x_4183_, 13);
if (v_beta_4184_ == 0)
{
lean_dec_ref(v___x_4183_);
goto v___jp_4137_;
}
else
{
uint8_t v_iota_4185_; 
v_iota_4185_ = lean_ctor_get_uint8(v___x_4183_, 12);
if (v_iota_4185_ == 0)
{
lean_dec_ref(v___x_4183_);
goto v___jp_4137_;
}
else
{
uint8_t v_zeta_4186_; 
v_zeta_4186_ = lean_ctor_get_uint8(v___x_4183_, 15);
if (v_zeta_4186_ == 0)
{
lean_dec_ref(v___x_4183_);
goto v___jp_4137_;
}
else
{
uint8_t v_zetaHave_4187_; 
v_zetaHave_4187_ = lean_ctor_get_uint8(v___x_4183_, 18);
if (v_zetaHave_4187_ == 0)
{
lean_dec_ref(v___x_4183_);
goto v___jp_4137_;
}
else
{
uint8_t v_zetaDelta_4188_; 
v_zetaDelta_4188_ = lean_ctor_get_uint8(v___x_4183_, 16);
if (v_zetaDelta_4188_ == 0)
{
lean_dec_ref(v___x_4183_);
goto v___jp_4137_;
}
else
{
uint8_t v_etaStruct_4189_; uint8_t v_proj_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; uint8_t v___x_4194_; 
v_etaStruct_4189_ = lean_ctor_get_uint8(v___x_4183_, 10);
v_proj_4190_ = lean_ctor_get_uint8(v___x_4183_, 14);
lean_dec_ref(v___x_4183_);
v___x_4191_ = lean_box(v_proj_4190_);
v___x_4192_ = lean_obj_tag_nat(v___x_4191_);
lean_dec(v___x_4191_);
v___x_4193_ = lean_unsigned_to_nat(2u);
v___x_4194_ = lean_nat_dec_eq(v___x_4192_, v___x_4193_);
if (v___x_4194_ == 0)
{
goto v___jp_4137_;
}
else
{
uint8_t v___x_4195_; uint8_t v___x_4196_; 
v___x_4195_ = 0;
v___x_4196_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_4189_, v___x_4195_);
if (v___x_4196_ == 0)
{
goto v___jp_4137_;
}
else
{
lean_object* v___x_4197_; 
v___x_4197_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
lean_dec_ref(v___y_4132_);
return v___x_4197_;
}
}
}
}
}
}
}
v___jp_4137_:
{
lean_object* v___x_4138_; uint8_t v_foApprox_4139_; uint8_t v_ctxApprox_4140_; uint8_t v_quasiPatternApprox_4141_; uint8_t v_constApprox_4142_; uint8_t v_isDefEqStuckEx_4143_; uint8_t v_unificationHints_4144_; uint8_t v_proofIrrelevance_4145_; uint8_t v_assignSyntheticOpaque_4146_; uint8_t v_offsetCnstrs_4147_; uint8_t v_transparency_4148_; uint8_t v_univApprox_4149_; uint8_t v_zetaUnused_4150_; uint8_t v_canUnfoldPredicateConfig_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4182_; 
v___x_4138_ = l_Lean_Meta_Context_config(v___y_4132_);
v_foApprox_4139_ = lean_ctor_get_uint8(v___x_4138_, 0);
v_ctxApprox_4140_ = lean_ctor_get_uint8(v___x_4138_, 1);
v_quasiPatternApprox_4141_ = lean_ctor_get_uint8(v___x_4138_, 2);
v_constApprox_4142_ = lean_ctor_get_uint8(v___x_4138_, 3);
v_isDefEqStuckEx_4143_ = lean_ctor_get_uint8(v___x_4138_, 4);
v_unificationHints_4144_ = lean_ctor_get_uint8(v___x_4138_, 5);
v_proofIrrelevance_4145_ = lean_ctor_get_uint8(v___x_4138_, 6);
v_assignSyntheticOpaque_4146_ = lean_ctor_get_uint8(v___x_4138_, 7);
v_offsetCnstrs_4147_ = lean_ctor_get_uint8(v___x_4138_, 8);
v_transparency_4148_ = lean_ctor_get_uint8(v___x_4138_, 9);
v_univApprox_4149_ = lean_ctor_get_uint8(v___x_4138_, 11);
v_zetaUnused_4150_ = lean_ctor_get_uint8(v___x_4138_, 17);
v_canUnfoldPredicateConfig_4151_ = lean_ctor_get_uint8(v___x_4138_, 19);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4153_ = v___x_4138_;
v_isShared_4154_ = v_isSharedCheck_4182_;
goto v_resetjp_4152_;
}
else
{
lean_dec(v___x_4138_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4182_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
uint8_t v___x_4155_; uint8_t v___x_4156_; uint8_t v___x_4157_; lean_object* v___x_4159_; 
v___x_4155_ = 1;
v___x_4156_ = 0;
v___x_4157_ = 2;
if (v_isShared_4154_ == 0)
{
v___x_4159_ = v___x_4153_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 0, v_foApprox_4139_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 1, v_ctxApprox_4140_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 2, v_quasiPatternApprox_4141_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 3, v_constApprox_4142_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 4, v_isDefEqStuckEx_4143_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 5, v_unificationHints_4144_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 6, v_proofIrrelevance_4145_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 7, v_assignSyntheticOpaque_4146_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 8, v_offsetCnstrs_4147_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 9, v_transparency_4148_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 11, v_univApprox_4149_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 17, v_zetaUnused_4150_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, 19, v_canUnfoldPredicateConfig_4151_);
v___x_4159_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
uint8_t v_trackZetaDelta_4160_; lean_object* v_zetaDeltaSet_4161_; lean_object* v_lctx_4162_; lean_object* v_localInstances_4163_; lean_object* v_defEqCtx_x3f_4164_; lean_object* v_synthPendingDepth_4165_; lean_object* v_customCanUnfoldPredicate_x3f_4166_; uint8_t v_univApprox_4167_; uint8_t v_inTypeClassResolution_4168_; uint8_t v_cacheInferType_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4179_; 
lean_ctor_set_uint8(v___x_4159_, 10, v___x_4156_);
lean_ctor_set_uint8(v___x_4159_, 12, v___x_4155_);
lean_ctor_set_uint8(v___x_4159_, 13, v___x_4155_);
lean_ctor_set_uint8(v___x_4159_, 14, v___x_4157_);
lean_ctor_set_uint8(v___x_4159_, 15, v___x_4155_);
lean_ctor_set_uint8(v___x_4159_, 16, v___x_4155_);
lean_ctor_set_uint8(v___x_4159_, 18, v___x_4155_);
v_trackZetaDelta_4160_ = lean_ctor_get_uint8(v___y_4132_, sizeof(void*)*7);
v_zetaDeltaSet_4161_ = lean_ctor_get(v___y_4132_, 1);
v_lctx_4162_ = lean_ctor_get(v___y_4132_, 2);
v_localInstances_4163_ = lean_ctor_get(v___y_4132_, 3);
v_defEqCtx_x3f_4164_ = lean_ctor_get(v___y_4132_, 4);
v_synthPendingDepth_4165_ = lean_ctor_get(v___y_4132_, 5);
v_customCanUnfoldPredicate_x3f_4166_ = lean_ctor_get(v___y_4132_, 6);
v_univApprox_4167_ = lean_ctor_get_uint8(v___y_4132_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4168_ = lean_ctor_get_uint8(v___y_4132_, sizeof(void*)*7 + 2);
v_cacheInferType_4169_ = lean_ctor_get_uint8(v___y_4132_, sizeof(void*)*7 + 3);
v_isSharedCheck_4179_ = !lean_is_exclusive(v___y_4132_);
if (v_isSharedCheck_4179_ == 0)
{
lean_object* v_unused_4180_; 
v_unused_4180_ = lean_ctor_get(v___y_4132_, 0);
lean_dec(v_unused_4180_);
v___x_4171_ = v___y_4132_;
v_isShared_4172_ = v_isSharedCheck_4179_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_4166_);
lean_inc(v_synthPendingDepth_4165_);
lean_inc(v_defEqCtx_x3f_4164_);
lean_inc(v_localInstances_4163_);
lean_inc(v_lctx_4162_);
lean_inc(v_zetaDeltaSet_4161_);
lean_dec(v___y_4132_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4179_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
uint64_t v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4176_; 
v___x_4173_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4159_);
v___x_4174_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4174_, 0, v___x_4159_);
lean_ctor_set_uint64(v___x_4174_, sizeof(void*)*1, v___x_4173_);
if (v_isShared_4172_ == 0)
{
lean_ctor_set(v___x_4171_, 0, v___x_4174_);
v___x_4176_ = v___x_4171_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v___x_4174_);
lean_ctor_set(v_reuseFailAlloc_4178_, 1, v_zetaDeltaSet_4161_);
lean_ctor_set(v_reuseFailAlloc_4178_, 2, v_lctx_4162_);
lean_ctor_set(v_reuseFailAlloc_4178_, 3, v_localInstances_4163_);
lean_ctor_set(v_reuseFailAlloc_4178_, 4, v_defEqCtx_x3f_4164_);
lean_ctor_set(v_reuseFailAlloc_4178_, 5, v_synthPendingDepth_4165_);
lean_ctor_set(v_reuseFailAlloc_4178_, 6, v_customCanUnfoldPredicate_x3f_4166_);
lean_ctor_set_uint8(v_reuseFailAlloc_4178_, sizeof(void*)*7, v_trackZetaDelta_4160_);
lean_ctor_set_uint8(v_reuseFailAlloc_4178_, sizeof(void*)*7 + 1, v_univApprox_4167_);
lean_ctor_set_uint8(v_reuseFailAlloc_4178_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4168_);
lean_ctor_set_uint8(v_reuseFailAlloc_4178_, sizeof(void*)*7 + 3, v_cacheInferType_4169_);
v___x_4176_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
lean_object* v___x_4177_; 
v___x_4177_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_4131_, v___x_4176_, v___y_4133_, v___y_4134_, v___y_4135_);
lean_dec_ref(v___x_4176_);
return v___x_4177_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0___boxed(lean_object* v_e_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_){
_start:
{
lean_object* v_res_4204_; 
v_res_4204_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec(v___y_4200_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* lean_infer_type(lean_object* v_e_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v___y_4212_; lean_object* v_toCold_4229_; lean_object* v_currRecDepth_4230_; lean_object* v_ref_4231_; uint16_t v_optionFlags_4232_; uint8_t v_suppressElabErrors_4233_; uint8_t v_checkDeprecated_4234_; uint8_t v_isRecordingDeps_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4275_; 
v_toCold_4229_ = lean_ctor_get(v_a_4208_, 0);
v_currRecDepth_4230_ = lean_ctor_get(v_a_4208_, 1);
v_ref_4231_ = lean_ctor_get(v_a_4208_, 2);
v_optionFlags_4232_ = lean_ctor_get_uint16(v_a_4208_, sizeof(void*)*3);
v_suppressElabErrors_4233_ = lean_ctor_get_uint8(v_a_4208_, sizeof(void*)*3 + 2);
v_checkDeprecated_4234_ = lean_ctor_get_uint8(v_a_4208_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4235_ = lean_ctor_get_uint8(v_a_4208_, sizeof(void*)*3 + 4);
v_isSharedCheck_4275_ = !lean_is_exclusive(v_a_4208_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4237_ = v_a_4208_;
v_isShared_4238_ = v_isSharedCheck_4275_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_ref_4231_);
lean_inc(v_currRecDepth_4230_);
lean_inc(v_toCold_4229_);
lean_dec(v_a_4208_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4275_;
goto v_resetjp_4236_;
}
v___jp_4211_:
{
if (lean_obj_tag(v___y_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4220_; 
v_a_4213_ = lean_ctor_get(v___y_4212_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___y_4212_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4215_ = v___y_4212_;
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___y_4212_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4218_; 
if (v_isShared_4216_ == 0)
{
v___x_4218_ = v___x_4215_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_a_4213_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
return v___x_4218_;
}
}
}
else
{
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4228_; 
v_a_4221_ = lean_ctor_get(v___y_4212_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v___y_4212_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4223_ = v___y_4212_;
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___y_4212_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4226_; 
if (v_isShared_4224_ == 0)
{
v___x_4226_ = v___x_4223_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_a_4221_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
v_resetjp_4236_:
{
lean_object* v_maxRecDepth_4239_; lean_object* v___x_4271_; uint8_t v___x_4272_; 
v_maxRecDepth_4239_ = lean_ctor_get(v_toCold_4229_, 3);
v___x_4271_ = lean_unsigned_to_nat(0u);
v___x_4272_ = lean_nat_dec_eq(v_maxRecDepth_4239_, v___x_4271_);
if (v___x_4272_ == 0)
{
uint8_t v___x_4273_; 
v___x_4273_ = lean_nat_dec_eq(v_currRecDepth_4230_, v_maxRecDepth_4239_);
if (v___x_4273_ == 0)
{
goto v___jp_4240_;
}
else
{
lean_object* v___x_4274_; 
lean_del_object(v___x_4237_);
lean_dec(v_currRecDepth_4230_);
lean_dec_ref(v_toCold_4229_);
lean_dec(v_a_4209_);
lean_dec(v_a_4207_);
lean_dec_ref(v_a_4206_);
lean_dec_ref(v_e_4205_);
v___x_4274_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_4231_);
return v___x_4274_;
}
}
else
{
goto v___jp_4240_;
}
v___jp_4240_:
{
lean_object* v___x_4241_; uint8_t v_transparency_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4246_; 
v___x_4241_ = l_Lean_Meta_Context_config(v_a_4206_);
v_transparency_4242_ = lean_ctor_get_uint8(v___x_4241_, 9);
lean_dec_ref(v___x_4241_);
v___x_4243_ = lean_unsigned_to_nat(1u);
v___x_4244_ = lean_nat_add(v_currRecDepth_4230_, v___x_4243_);
lean_dec(v_currRecDepth_4230_);
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 1, v___x_4244_);
v___x_4246_ = v___x_4237_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_toCold_4229_);
lean_ctor_set(v_reuseFailAlloc_4270_, 1, v___x_4244_);
lean_ctor_set(v_reuseFailAlloc_4270_, 2, v_ref_4231_);
lean_ctor_set_uint16(v_reuseFailAlloc_4270_, sizeof(void*)*3, v_optionFlags_4232_);
lean_ctor_set_uint8(v_reuseFailAlloc_4270_, sizeof(void*)*3 + 2, v_suppressElabErrors_4233_);
lean_ctor_set_uint8(v_reuseFailAlloc_4270_, sizeof(void*)*3 + 3, v_checkDeprecated_4234_);
lean_ctor_set_uint8(v_reuseFailAlloc_4270_, sizeof(void*)*3 + 4, v_isRecordingDeps_4235_);
v___x_4246_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
uint8_t v___x_4247_; uint8_t v___x_4248_; 
v___x_4247_ = 1;
v___x_4248_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_4242_, v___x_4247_);
if (v___x_4248_ == 0)
{
lean_object* v___x_4249_; 
v___x_4249_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_4205_, v_a_4206_, v_a_4207_, v___x_4246_, v_a_4209_);
lean_dec(v_a_4209_);
lean_dec_ref(v___x_4246_);
lean_dec(v_a_4207_);
v___y_4212_ = v___x_4249_;
goto v___jp_4211_;
}
else
{
lean_object* v_keyedConfig_4250_; uint8_t v_trackZetaDelta_4251_; lean_object* v_zetaDeltaSet_4252_; lean_object* v_lctx_4253_; lean_object* v_localInstances_4254_; lean_object* v_defEqCtx_x3f_4255_; lean_object* v_synthPendingDepth_4256_; lean_object* v_customCanUnfoldPredicate_x3f_4257_; uint8_t v_univApprox_4258_; uint8_t v_inTypeClassResolution_4259_; uint8_t v_cacheInferType_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4269_; 
v_keyedConfig_4250_ = lean_ctor_get(v_a_4206_, 0);
v_trackZetaDelta_4251_ = lean_ctor_get_uint8(v_a_4206_, sizeof(void*)*7);
v_zetaDeltaSet_4252_ = lean_ctor_get(v_a_4206_, 1);
v_lctx_4253_ = lean_ctor_get(v_a_4206_, 2);
v_localInstances_4254_ = lean_ctor_get(v_a_4206_, 3);
v_defEqCtx_x3f_4255_ = lean_ctor_get(v_a_4206_, 4);
v_synthPendingDepth_4256_ = lean_ctor_get(v_a_4206_, 5);
v_customCanUnfoldPredicate_x3f_4257_ = lean_ctor_get(v_a_4206_, 6);
v_univApprox_4258_ = lean_ctor_get_uint8(v_a_4206_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4259_ = lean_ctor_get_uint8(v_a_4206_, sizeof(void*)*7 + 2);
v_cacheInferType_4260_ = lean_ctor_get_uint8(v_a_4206_, sizeof(void*)*7 + 3);
v_isSharedCheck_4269_ = !lean_is_exclusive(v_a_4206_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4262_ = v_a_4206_;
v_isShared_4263_ = v_isSharedCheck_4269_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_4257_);
lean_inc(v_synthPendingDepth_4256_);
lean_inc(v_defEqCtx_x3f_4255_);
lean_inc(v_localInstances_4254_);
lean_inc(v_lctx_4253_);
lean_inc(v_zetaDeltaSet_4252_);
lean_inc(v_keyedConfig_4250_);
lean_dec(v_a_4206_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4269_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4264_; lean_object* v___x_4266_; 
v___x_4264_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4247_, v_keyedConfig_4250_);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4264_);
v___x_4266_ = v___x_4262_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v___x_4264_);
lean_ctor_set(v_reuseFailAlloc_4268_, 1, v_zetaDeltaSet_4252_);
lean_ctor_set(v_reuseFailAlloc_4268_, 2, v_lctx_4253_);
lean_ctor_set(v_reuseFailAlloc_4268_, 3, v_localInstances_4254_);
lean_ctor_set(v_reuseFailAlloc_4268_, 4, v_defEqCtx_x3f_4255_);
lean_ctor_set(v_reuseFailAlloc_4268_, 5, v_synthPendingDepth_4256_);
lean_ctor_set(v_reuseFailAlloc_4268_, 6, v_customCanUnfoldPredicate_x3f_4257_);
lean_ctor_set_uint8(v_reuseFailAlloc_4268_, sizeof(void*)*7, v_trackZetaDelta_4251_);
lean_ctor_set_uint8(v_reuseFailAlloc_4268_, sizeof(void*)*7 + 1, v_univApprox_4258_);
lean_ctor_set_uint8(v_reuseFailAlloc_4268_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4259_);
lean_ctor_set_uint8(v_reuseFailAlloc_4268_, sizeof(void*)*7 + 3, v_cacheInferType_4260_);
v___x_4266_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
lean_object* v___x_4267_; 
v___x_4267_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_4205_, v___x_4266_, v_a_4207_, v___x_4246_, v_a_4209_);
lean_dec(v_a_4209_);
lean_dec_ref(v___x_4246_);
lean_dec(v_a_4207_);
v___y_4212_ = v___x_4267_;
goto v___jp_4211_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object* v_e_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_){
_start:
{
lean_object* v_res_4282_; 
v_res_4282_ = lean_infer_type(v_e_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_);
return v_res_4282_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object* v_x_4283_){
_start:
{
switch(lean_obj_tag(v_x_4283_))
{
case 0:
{
uint8_t v___x_4284_; 
v___x_4284_ = 1;
return v___x_4284_;
}
case 2:
{
lean_object* v_a_4285_; lean_object* v_a_4286_; uint8_t v___x_4287_; 
v_a_4285_ = lean_ctor_get(v_x_4283_, 0);
v_a_4286_ = lean_ctor_get(v_x_4283_, 1);
v___x_4287_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_4285_);
if (v___x_4287_ == 0)
{
return v___x_4287_;
}
else
{
v_x_4283_ = v_a_4286_;
goto _start;
}
}
case 3:
{
lean_object* v_a_4289_; 
v_a_4289_ = lean_ctor_get(v_x_4283_, 1);
v_x_4283_ = v_a_4289_;
goto _start;
}
default: 
{
uint8_t v___x_4291_; 
v___x_4291_ = 0;
return v___x_4291_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object* v_x_4292_){
_start:
{
uint8_t v_res_4293_; lean_object* v_r_4294_; 
v_res_4293_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_x_4292_);
lean_dec(v_x_4292_);
v_r_4294_ = lean_box(v_res_4293_);
return v_r_4294_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object* v_l_4295_, lean_object* v___y_4296_){
_start:
{
lean_object* v___x_4298_; lean_object* v_mctx_4299_; lean_object* v___x_4300_; lean_object* v_fst_4301_; lean_object* v_snd_4302_; lean_object* v___x_4303_; lean_object* v_cache_4304_; lean_object* v_zetaDeltaFVarIds_4305_; lean_object* v_postponed_4306_; lean_object* v_diag_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4316_; 
v___x_4298_ = lean_st_ref_get(v___y_4296_);
v_mctx_4299_ = lean_ctor_get(v___x_4298_, 0);
lean_inc_ref(v_mctx_4299_);
lean_dec(v___x_4298_);
v___x_4300_ = lean_instantiate_level_mvars(v_mctx_4299_, v_l_4295_);
v_fst_4301_ = lean_ctor_get(v___x_4300_, 0);
lean_inc(v_fst_4301_);
v_snd_4302_ = lean_ctor_get(v___x_4300_, 1);
lean_inc(v_snd_4302_);
lean_dec_ref(v___x_4300_);
v___x_4303_ = lean_st_ref_take(v___y_4296_);
v_cache_4304_ = lean_ctor_get(v___x_4303_, 1);
v_zetaDeltaFVarIds_4305_ = lean_ctor_get(v___x_4303_, 2);
v_postponed_4306_ = lean_ctor_get(v___x_4303_, 3);
v_diag_4307_ = lean_ctor_get(v___x_4303_, 4);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4303_);
if (v_isSharedCheck_4316_ == 0)
{
lean_object* v_unused_4317_; 
v_unused_4317_ = lean_ctor_get(v___x_4303_, 0);
lean_dec(v_unused_4317_);
v___x_4309_ = v___x_4303_;
v_isShared_4310_ = v_isSharedCheck_4316_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_diag_4307_);
lean_inc(v_postponed_4306_);
lean_inc(v_zetaDeltaFVarIds_4305_);
lean_inc(v_cache_4304_);
lean_dec(v___x_4303_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4316_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4312_; 
if (v_isShared_4310_ == 0)
{
lean_ctor_set(v___x_4309_, 0, v_fst_4301_);
v___x_4312_ = v___x_4309_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_fst_4301_);
lean_ctor_set(v_reuseFailAlloc_4315_, 1, v_cache_4304_);
lean_ctor_set(v_reuseFailAlloc_4315_, 2, v_zetaDeltaFVarIds_4305_);
lean_ctor_set(v_reuseFailAlloc_4315_, 3, v_postponed_4306_);
lean_ctor_set(v_reuseFailAlloc_4315_, 4, v_diag_4307_);
v___x_4312_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4313_ = lean_st_ref_put(v___y_4296_, v___x_4312_);
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v_snd_4302_);
return v___x_4314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object* v_l_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_4318_, v___y_4319_);
lean_dec(v___y_4319_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object* v_l_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_4322_, v___y_4324_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object* v_l_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_){
_start:
{
lean_object* v_res_4335_; 
v_res_4335_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(v_l_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
lean_dec(v___y_4333_);
lean_dec_ref(v___y_4332_);
lean_dec(v___y_4331_);
lean_dec_ref(v___y_4330_);
return v_res_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object* v_00_u03c3_4336_, lean_object* v_x_4337_, lean_object* v_x_4338_, lean_object* v_a_4339_, lean_object* v_a_4340_, lean_object* v_a_4341_, lean_object* v_a_4342_){
_start:
{
lean_object* v___y_4349_; 
switch(lean_obj_tag(v_x_4337_))
{
case 3:
{
lean_object* v_u_4370_; lean_object* v___x_4371_; uint8_t v___x_4372_; 
v_u_4370_ = lean_ctor_get(v_x_4337_, 0);
lean_inc(v_u_4370_);
lean_dec_ref_known(v_x_4337_, 1);
v___x_4371_ = lean_unsigned_to_nat(0u);
v___x_4372_ = lean_nat_dec_eq(v_x_4338_, v___x_4371_);
lean_dec(v_x_4338_);
if (v___x_4372_ == 0)
{
lean_dec(v_u_4370_);
lean_dec_ref(v_00_u03c3_4336_);
goto v___jp_4344_;
}
else
{
lean_object* v_paramNames_4373_; lean_object* v_lvls_4374_; uint8_t v___x_4375_; 
v_paramNames_4373_ = lean_ctor_get(v_00_u03c3_4336_, 0);
lean_inc(v_paramNames_4373_);
v_lvls_4374_ = lean_ctor_get(v_00_u03c3_4336_, 1);
lean_inc(v_lvls_4374_);
lean_dec_ref(v_00_u03c3_4336_);
v___x_4375_ = l_List_isEmpty___redArg(v_paramNames_4373_);
if (v___x_4375_ == 0)
{
lean_object* v___x_4376_; 
v___x_4376_ = l_Lean_Level_instantiateParams(v_u_4370_, v_paramNames_4373_, v_lvls_4374_);
v___y_4349_ = v___x_4376_;
goto v___jp_4348_;
}
else
{
lean_dec(v_lvls_4374_);
lean_dec(v_paramNames_4373_);
v___y_4349_ = v_u_4370_;
goto v___jp_4348_;
}
}
}
case 7:
{
lean_object* v_body_4377_; lean_object* v_zero_4378_; uint8_t v_isZero_4379_; 
v_body_4377_ = lean_ctor_get(v_x_4337_, 2);
lean_inc_ref(v_body_4377_);
lean_dec_ref_known(v_x_4337_, 3);
v_zero_4378_ = lean_unsigned_to_nat(0u);
v_isZero_4379_ = lean_nat_dec_eq(v_x_4338_, v_zero_4378_);
if (v_isZero_4379_ == 1)
{
uint8_t v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; 
lean_dec_ref(v_body_4377_);
lean_dec(v_x_4338_);
lean_dec_ref(v_00_u03c3_4336_);
v___x_4380_ = 0;
v___x_4381_ = lean_box(v___x_4380_);
v___x_4382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4381_);
return v___x_4382_;
}
else
{
lean_object* v_one_4383_; lean_object* v_n_4384_; 
v_one_4383_ = lean_unsigned_to_nat(1u);
v_n_4384_ = lean_nat_sub(v_x_4338_, v_one_4383_);
lean_dec(v_x_4338_);
v_x_4337_ = v_body_4377_;
v_x_4338_ = v_n_4384_;
goto _start;
}
}
case 8:
{
lean_object* v_body_4386_; 
v_body_4386_ = lean_ctor_get(v_x_4337_, 3);
lean_inc_ref(v_body_4386_);
lean_dec_ref_known(v_x_4337_, 4);
v_x_4337_ = v_body_4386_;
goto _start;
}
case 10:
{
lean_object* v_expr_4388_; 
v_expr_4388_ = lean_ctor_get(v_x_4337_, 1);
lean_inc_ref(v_expr_4388_);
lean_dec_ref_known(v_x_4337_, 2);
v_x_4337_ = v_expr_4388_;
goto _start;
}
default: 
{
lean_dec(v_x_4338_);
lean_dec_ref(v_x_4337_);
lean_dec_ref(v_00_u03c3_4336_);
goto v___jp_4344_;
}
}
v___jp_4344_:
{
uint8_t v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; 
v___x_4345_ = 2;
v___x_4346_ = lean_box(v___x_4345_);
v___x_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4347_, 0, v___x_4346_);
return v___x_4347_;
}
v___jp_4348_:
{
lean_object* v___x_4350_; 
v___x_4350_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v___y_4349_, v_a_4340_);
if (lean_obj_tag(v___x_4350_) == 0)
{
lean_object* v_a_4351_; lean_object* v___x_4353_; uint8_t v_isShared_4354_; uint8_t v_isSharedCheck_4361_; 
v_a_4351_ = lean_ctor_get(v___x_4350_, 0);
v_isSharedCheck_4361_ = !lean_is_exclusive(v___x_4350_);
if (v_isSharedCheck_4361_ == 0)
{
v___x_4353_ = v___x_4350_;
v_isShared_4354_ = v_isSharedCheck_4361_;
goto v_resetjp_4352_;
}
else
{
lean_inc(v_a_4351_);
lean_dec(v___x_4350_);
v___x_4353_ = lean_box(0);
v_isShared_4354_ = v_isSharedCheck_4361_;
goto v_resetjp_4352_;
}
v_resetjp_4352_:
{
uint8_t v___x_4355_; uint8_t v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4359_; 
v___x_4355_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_4351_);
lean_dec(v_a_4351_);
v___x_4356_ = l_Lean_Bool_toLBool(v___x_4355_);
v___x_4357_ = lean_box(v___x_4356_);
if (v_isShared_4354_ == 0)
{
lean_ctor_set(v___x_4353_, 0, v___x_4357_);
v___x_4359_ = v___x_4353_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v___x_4357_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
return v___x_4359_;
}
}
}
else
{
lean_object* v_a_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4369_; 
v_a_4362_ = lean_ctor_get(v___x_4350_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v___x_4350_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4364_ = v___x_4350_;
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_a_4362_);
lean_dec(v___x_4350_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4367_; 
if (v_isShared_4365_ == 0)
{
v___x_4367_ = v___x_4364_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_a_4362_);
v___x_4367_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
return v___x_4367_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object* v_00_u03c3_4390_, lean_object* v_x_4391_, lean_object* v_x_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_){
_start:
{
lean_object* v_res_4398_; 
v_res_4398_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_00_u03c3_4390_, v_x_4391_, v_x_4392_, v_a_4393_, v_a_4394_, v_a_4395_, v_a_4396_);
lean_dec(v_a_4396_);
lean_dec_ref(v_a_4395_);
lean_dec(v_a_4394_);
lean_dec_ref(v_a_4393_);
return v_res_4398_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp_spec__0(lean_object* v_00_u03c3_4399_, lean_object* v_a_4400_, lean_object* v_a_4401_){
_start:
{
if (lean_obj_tag(v_a_4400_) == 0)
{
lean_object* v___x_4402_; 
lean_dec_ref(v_00_u03c3_4399_);
v___x_4402_ = l_List_reverse___redArg(v_a_4401_);
return v___x_4402_;
}
else
{
lean_object* v_head_4403_; lean_object* v_tail_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4418_; 
v_head_4403_ = lean_ctor_get(v_a_4400_, 0);
v_tail_4404_ = lean_ctor_get(v_a_4400_, 1);
v_isSharedCheck_4418_ = !lean_is_exclusive(v_a_4400_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4406_ = v_a_4400_;
v_isShared_4407_ = v_isSharedCheck_4418_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_tail_4404_);
lean_inc(v_head_4403_);
lean_dec(v_a_4400_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4418_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___y_4409_; lean_object* v_paramNames_4414_; lean_object* v_lvls_4415_; uint8_t v___x_4416_; 
v_paramNames_4414_ = lean_ctor_get(v_00_u03c3_4399_, 0);
v_lvls_4415_ = lean_ctor_get(v_00_u03c3_4399_, 1);
v___x_4416_ = l_List_isEmpty___redArg(v_paramNames_4414_);
if (v___x_4416_ == 0)
{
lean_object* v___x_4417_; 
lean_inc(v_lvls_4415_);
lean_inc(v_paramNames_4414_);
v___x_4417_ = l_Lean_Level_instantiateParams(v_head_4403_, v_paramNames_4414_, v_lvls_4415_);
v___y_4409_ = v___x_4417_;
goto v___jp_4408_;
}
else
{
v___y_4409_ = v_head_4403_;
goto v___jp_4408_;
}
v___jp_4408_:
{
lean_object* v___x_4411_; 
if (v_isShared_4407_ == 0)
{
lean_ctor_set(v___x_4406_, 1, v_a_4401_);
lean_ctor_set(v___x_4406_, 0, v___y_4409_);
v___x_4411_ = v___x_4406_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v___y_4409_);
lean_ctor_set(v_reuseFailAlloc_4413_, 1, v_a_4401_);
v___x_4411_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
v_a_4400_ = v_tail_4404_;
v_a_4401_ = v___x_4411_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object* v_00_u03c3_4421_, lean_object* v_x_4422_, lean_object* v_x_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_, lean_object* v_a_4427_){
_start:
{
switch(lean_obj_tag(v_x_4422_))
{
case 4:
{
lean_object* v_declName_4429_; lean_object* v_us_4430_; lean_object* v___y_4432_; lean_object* v_paramNames_4446_; uint8_t v___x_4447_; 
v_declName_4429_ = lean_ctor_get(v_x_4422_, 0);
lean_inc(v_declName_4429_);
v_us_4430_ = lean_ctor_get(v_x_4422_, 1);
lean_inc(v_us_4430_);
lean_dec_ref_known(v_x_4422_, 2);
v_paramNames_4446_ = lean_ctor_get(v_00_u03c3_4421_, 0);
v___x_4447_ = l_List_isEmpty___redArg(v_paramNames_4446_);
if (v___x_4447_ == 0)
{
lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4448_ = lean_box(0);
v___x_4449_ = l_List_mapTR_loop___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp_spec__0(v_00_u03c3_4421_, v_us_4430_, v___x_4448_);
v___y_4432_ = v___x_4449_;
goto v___jp_4431_;
}
else
{
lean_dec_ref(v_00_u03c3_4421_);
v___y_4432_ = v_us_4430_;
goto v___jp_4431_;
}
v___jp_4431_:
{
lean_object* v___x_4433_; 
v___x_4433_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_declName_4429_, v___y_4432_, v_a_4424_, v_a_4425_, v_a_4426_, v_a_4427_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v_fst_4435_; lean_object* v_snd_4436_; lean_object* v___x_4437_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
lean_inc(v_a_4434_);
lean_dec_ref_known(v___x_4433_, 1);
v_fst_4435_ = lean_ctor_get(v_a_4434_, 0);
lean_inc(v_fst_4435_);
v_snd_4436_ = lean_ctor_get(v_a_4434_, 1);
lean_inc(v_snd_4436_);
lean_dec(v_a_4434_);
v___x_4437_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_snd_4436_, v_fst_4435_, v_x_4423_, v_a_4424_, v_a_4425_, v_a_4426_, v_a_4427_);
return v___x_4437_;
}
else
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
lean_dec(v_x_4423_);
v_a_4438_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4440_ = v___x_4433_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v___x_4433_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4438_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
}
}
case 1:
{
lean_object* v_fvarId_4450_; lean_object* v___x_4451_; 
lean_dec_ref(v_00_u03c3_4421_);
v_fvarId_4450_ = lean_ctor_get(v_x_4422_, 0);
lean_inc(v_fvarId_4450_);
lean_dec_ref_known(v_x_4422_, 1);
v___x_4451_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4450_, v_a_4424_, v_a_4426_, v_a_4427_);
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_object* v_a_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; 
v_a_4452_ = lean_ctor_get(v___x_4451_, 0);
lean_inc(v_a_4452_);
lean_dec_ref_known(v___x_4451_, 1);
v___x_4453_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4454_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v___x_4453_, v_a_4452_, v_x_4423_, v_a_4424_, v_a_4425_, v_a_4426_, v_a_4427_);
return v___x_4454_;
}
else
{
lean_object* v_a_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4462_; 
lean_dec(v_x_4423_);
v_a_4455_ = lean_ctor_get(v___x_4451_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4451_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4457_ = v___x_4451_;
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_a_4455_);
lean_dec(v___x_4451_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4460_; 
if (v_isShared_4458_ == 0)
{
v___x_4460_ = v___x_4457_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_a_4455_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4463_; lean_object* v___x_4464_; 
lean_dec_ref(v_00_u03c3_4421_);
v_mvarId_4463_ = lean_ctor_get(v_x_4422_, 0);
lean_inc(v_mvarId_4463_);
lean_dec_ref_known(v_x_4422_, 1);
v___x_4464_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4463_, v_a_4424_, v_a_4425_, v_a_4426_, v_a_4427_);
if (lean_obj_tag(v___x_4464_) == 0)
{
lean_object* v_a_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v_a_4465_ = lean_ctor_get(v___x_4464_, 0);
lean_inc(v_a_4465_);
lean_dec_ref_known(v___x_4464_, 1);
v___x_4466_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4467_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v___x_4466_, v_a_4465_, v_x_4423_, v_a_4424_, v_a_4425_, v_a_4426_, v_a_4427_);
return v___x_4467_;
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
lean_dec(v_x_4423_);
v_a_4468_ = lean_ctor_get(v___x_4464_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4470_ = v___x_4464_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4464_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4473_; 
if (v_isShared_4471_ == 0)
{
v___x_4473_ = v___x_4470_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v_a_4468_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
case 5:
{
lean_object* v_fn_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v_fn_4476_ = lean_ctor_get(v_x_4422_, 0);
lean_inc_ref(v_fn_4476_);
lean_dec_ref_known(v_x_4422_, 2);
v___x_4477_ = lean_unsigned_to_nat(1u);
v___x_4478_ = lean_nat_add(v_x_4423_, v___x_4477_);
lean_dec(v_x_4423_);
v_x_4422_ = v_fn_4476_;
v_x_4423_ = v___x_4478_;
goto _start;
}
case 10:
{
lean_object* v_expr_4480_; 
v_expr_4480_ = lean_ctor_get(v_x_4422_, 1);
lean_inc_ref(v_expr_4480_);
lean_dec_ref_known(v_x_4422_, 2);
v_x_4422_ = v_expr_4480_;
goto _start;
}
case 8:
{
lean_object* v_body_4482_; 
v_body_4482_ = lean_ctor_get(v_x_4422_, 3);
lean_inc_ref(v_body_4482_);
lean_dec_ref_known(v_x_4422_, 4);
v_x_4422_ = v_body_4482_;
goto _start;
}
case 6:
{
lean_object* v_body_4484_; lean_object* v_zero_4485_; uint8_t v_isZero_4486_; 
v_body_4484_ = lean_ctor_get(v_x_4422_, 2);
lean_inc_ref(v_body_4484_);
lean_dec_ref_known(v_x_4422_, 3);
v_zero_4485_ = lean_unsigned_to_nat(0u);
v_isZero_4486_ = lean_nat_dec_eq(v_x_4423_, v_zero_4485_);
if (v_isZero_4486_ == 1)
{
uint8_t v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; 
lean_dec_ref(v_body_4484_);
lean_dec(v_x_4423_);
lean_dec_ref(v_00_u03c3_4421_);
v___x_4487_ = 0;
v___x_4488_ = lean_box(v___x_4487_);
v___x_4489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
return v___x_4489_;
}
else
{
lean_object* v_one_4490_; lean_object* v_n_4491_; 
v_one_4490_ = lean_unsigned_to_nat(1u);
v_n_4491_ = lean_nat_sub(v_x_4423_, v_one_4490_);
lean_dec(v_x_4423_);
v_x_4422_ = v_body_4484_;
v_x_4423_ = v_n_4491_;
goto _start;
}
}
default: 
{
uint8_t v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
lean_dec(v_x_4423_);
lean_dec_ref(v_x_4422_);
lean_dec_ref(v_00_u03c3_4421_);
v___x_4493_ = 2;
v___x_4494_ = lean_box(v___x_4493_);
v___x_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4494_);
return v___x_4495_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object* v_00_u03c3_4496_, lean_object* v_x_4497_, lean_object* v_x_4498_, lean_object* v_a_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_00_u03c3_4496_, v_x_4497_, v_x_4498_, v_a_4499_, v_a_4500_, v_a_4501_, v_a_4502_);
lean_dec(v_a_4502_);
lean_dec_ref(v_a_4501_);
lean_dec(v_a_4500_);
lean_dec_ref(v_a_4499_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore(lean_object* v_00_u03c3_4505_, lean_object* v_x_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_){
_start:
{
switch(lean_obj_tag(v_x_4506_))
{
case 1:
{
lean_object* v_fvarId_4512_; lean_object* v___x_4513_; 
lean_dec_ref(v_00_u03c3_4505_);
v_fvarId_4512_ = lean_ctor_get(v_x_4506_, 0);
lean_inc(v_fvarId_4512_);
lean_dec_ref_known(v_x_4506_, 1);
v___x_4513_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4512_, v_a_4507_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4513_) == 0)
{
lean_object* v_a_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v_a_4514_ = lean_ctor_get(v___x_4513_, 0);
lean_inc(v_a_4514_);
lean_dec_ref_known(v___x_4513_, 1);
v___x_4515_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4516_ = lean_unsigned_to_nat(0u);
v___x_4517_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v___x_4515_, v_a_4514_, v___x_4516_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4517_;
}
else
{
lean_object* v_a_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4525_; 
v_a_4518_ = lean_ctor_get(v___x_4513_, 0);
v_isSharedCheck_4525_ = !lean_is_exclusive(v___x_4513_);
if (v_isSharedCheck_4525_ == 0)
{
v___x_4520_ = v___x_4513_;
v_isShared_4521_ = v_isSharedCheck_4525_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_a_4518_);
lean_dec(v___x_4513_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4525_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4523_; 
if (v_isShared_4521_ == 0)
{
v___x_4523_ = v___x_4520_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4524_; 
v_reuseFailAlloc_4524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4524_, 0, v_a_4518_);
v___x_4523_ = v_reuseFailAlloc_4524_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
return v___x_4523_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4526_; lean_object* v___x_4527_; 
lean_dec_ref(v_00_u03c3_4505_);
v_mvarId_4526_ = lean_ctor_get(v_x_4506_, 0);
lean_inc(v_mvarId_4526_);
lean_dec_ref_known(v_x_4506_, 1);
v___x_4527_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4526_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_a_4528_);
lean_dec_ref_known(v___x_4527_, 1);
v___x_4529_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4530_ = lean_unsigned_to_nat(0u);
v___x_4531_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v___x_4529_, v_a_4528_, v___x_4530_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4531_;
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4539_; 
v_a_4532_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4534_ = v___x_4527_;
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4527_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4535_ == 0)
{
v___x_4537_ = v___x_4534_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_a_4532_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
return v___x_4537_;
}
}
}
}
case 3:
{
uint8_t v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
lean_dec_ref_known(v_x_4506_, 1);
lean_dec_ref(v_00_u03c3_4505_);
v___x_4540_ = 0;
v___x_4541_ = lean_box(v___x_4540_);
v___x_4542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4541_);
return v___x_4542_;
}
case 4:
{
lean_object* v_declName_4543_; lean_object* v_us_4544_; lean_object* v___y_4546_; lean_object* v_paramNames_4561_; uint8_t v___x_4562_; 
v_declName_4543_ = lean_ctor_get(v_x_4506_, 0);
lean_inc(v_declName_4543_);
v_us_4544_ = lean_ctor_get(v_x_4506_, 1);
lean_inc(v_us_4544_);
lean_dec_ref_known(v_x_4506_, 2);
v_paramNames_4561_ = lean_ctor_get(v_00_u03c3_4505_, 0);
v___x_4562_ = l_List_isEmpty___redArg(v_paramNames_4561_);
if (v___x_4562_ == 0)
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = lean_box(0);
v___x_4564_ = l_List_mapTR_loop___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp_spec__0(v_00_u03c3_4505_, v_us_4544_, v___x_4563_);
v___y_4546_ = v___x_4564_;
goto v___jp_4545_;
}
else
{
lean_dec_ref(v_00_u03c3_4505_);
v___y_4546_ = v_us_4544_;
goto v___jp_4545_;
}
v___jp_4545_:
{
lean_object* v___x_4547_; 
v___x_4547_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_declName_4543_, v___y_4546_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; lean_object* v_fst_4549_; lean_object* v_snd_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
lean_inc(v_a_4548_);
lean_dec_ref_known(v___x_4547_, 1);
v_fst_4549_ = lean_ctor_get(v_a_4548_, 0);
lean_inc(v_fst_4549_);
v_snd_4550_ = lean_ctor_get(v_a_4548_, 1);
lean_inc(v_snd_4550_);
lean_dec(v_a_4548_);
v___x_4551_ = lean_unsigned_to_nat(0u);
v___x_4552_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_snd_4550_, v_fst_4549_, v___x_4551_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4552_;
}
else
{
lean_object* v_a_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4560_; 
v_a_4553_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4555_ = v___x_4547_;
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_a_4553_);
lean_dec(v___x_4547_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v___x_4558_; 
if (v_isShared_4556_ == 0)
{
v___x_4558_ = v___x_4555_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_a_4553_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
return v___x_4558_;
}
}
}
}
}
case 5:
{
lean_object* v_fn_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v_fn_4565_ = lean_ctor_get(v_x_4506_, 0);
lean_inc_ref(v_fn_4565_);
lean_dec_ref_known(v_x_4506_, 2);
v___x_4566_ = lean_unsigned_to_nat(1u);
v___x_4567_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_00_u03c3_4505_, v_fn_4565_, v___x_4566_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4567_;
}
case 6:
{
uint8_t v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
lean_dec_ref_known(v_x_4506_, 3);
lean_dec_ref(v_00_u03c3_4505_);
v___x_4568_ = 0;
v___x_4569_ = lean_box(v___x_4568_);
v___x_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
return v___x_4570_;
}
case 7:
{
lean_object* v_body_4571_; 
v_body_4571_ = lean_ctor_get(v_x_4506_, 2);
lean_inc_ref(v_body_4571_);
lean_dec_ref_known(v_x_4506_, 3);
v_x_4506_ = v_body_4571_;
goto _start;
}
case 8:
{
lean_object* v_body_4573_; 
v_body_4573_ = lean_ctor_get(v_x_4506_, 3);
lean_inc_ref(v_body_4573_);
lean_dec_ref_known(v_x_4506_, 4);
v_x_4506_ = v_body_4573_;
goto _start;
}
case 9:
{
uint8_t v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
lean_dec_ref_known(v_x_4506_, 1);
lean_dec_ref(v_00_u03c3_4505_);
v___x_4575_ = 0;
v___x_4576_ = lean_box(v___x_4575_);
v___x_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4576_);
return v___x_4577_;
}
case 10:
{
lean_object* v_expr_4578_; 
v_expr_4578_ = lean_ctor_get(v_x_4506_, 1);
lean_inc_ref(v_expr_4578_);
lean_dec_ref_known(v_x_4506_, 2);
v_x_4506_ = v_expr_4578_;
goto _start;
}
default: 
{
uint8_t v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; 
lean_dec_ref(v_x_4506_);
lean_dec_ref(v_00_u03c3_4505_);
v___x_4580_ = 2;
v___x_4581_ = lean_box(v___x_4580_);
v___x_4582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4582_, 0, v___x_4581_);
return v___x_4582_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore___boxed(lean_object* v_00_u03c3_4583_, lean_object* v_x_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore(v_00_u03c3_4583_, v_x_4584_, v_a_4585_, v_a_4586_, v_a_4587_, v_a_4588_);
lean_dec(v_a_4588_);
lean_dec_ref(v_a_4587_);
lean_dec(v_a_4586_);
lean_dec_ref(v_a_4585_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object* v_e_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; 
v___x_4597_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4598_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore(v___x_4597_, v_e_4591_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
return v___x_4598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object* v_e_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_){
_start:
{
lean_object* v_res_4605_; 
v_res_4605_ = l_Lean_Meta_isPropQuick(v_e_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_);
lean_dec(v_a_4603_);
lean_dec_ref(v_a_4602_);
lean_dec(v_a_4601_);
lean_dec_ref(v_a_4600_);
return v_res_4605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object* v_e_4606_, lean_object* v_a_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_){
_start:
{
lean_object* v___x_4612_; 
lean_inc_ref(v_e_4606_);
v___x_4612_ = l_Lean_Meta_isPropQuick(v_e_4606_, v_a_4607_, v_a_4608_, v_a_4609_, v_a_4610_);
if (lean_obj_tag(v___x_4612_) == 0)
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4669_; 
v_a_4613_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4615_ = v___x_4612_;
v_isShared_4616_ = v_isSharedCheck_4669_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4612_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4669_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
uint8_t v___x_4617_; 
v___x_4617_ = lean_unbox(v_a_4613_);
lean_dec(v_a_4613_);
switch(v___x_4617_)
{
case 0:
{
uint8_t v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4621_; 
lean_dec_ref(v_e_4606_);
v___x_4618_ = 0;
v___x_4619_ = lean_box(v___x_4618_);
if (v_isShared_4616_ == 0)
{
lean_ctor_set(v___x_4615_, 0, v___x_4619_);
v___x_4621_ = v___x_4615_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v___x_4619_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
return v___x_4621_;
}
}
case 1:
{
uint8_t v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4626_; 
lean_dec_ref(v_e_4606_);
v___x_4623_ = 1;
v___x_4624_ = lean_box(v___x_4623_);
if (v_isShared_4616_ == 0)
{
lean_ctor_set(v___x_4615_, 0, v___x_4624_);
v___x_4626_ = v___x_4615_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v___x_4624_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
return v___x_4626_;
}
}
default: 
{
lean_object* v___x_4628_; 
lean_del_object(v___x_4615_);
lean_inc(v_a_4610_);
lean_inc_ref(v_a_4609_);
lean_inc(v_a_4608_);
lean_inc_ref(v_a_4607_);
v___x_4628_ = lean_infer_type(v_e_4606_, v_a_4607_, v_a_4608_, v_a_4609_, v_a_4610_);
if (lean_obj_tag(v___x_4628_) == 0)
{
lean_object* v_a_4629_; lean_object* v___x_4630_; 
v_a_4629_ = lean_ctor_get(v___x_4628_, 0);
lean_inc(v_a_4629_);
lean_dec_ref_known(v___x_4628_, 1);
v___x_4630_ = l_Lean_Meta_whnfD(v_a_4629_, v_a_4607_, v_a_4608_, v_a_4609_, v_a_4610_);
if (lean_obj_tag(v___x_4630_) == 0)
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4652_; 
v_a_4631_ = lean_ctor_get(v___x_4630_, 0);
v_isSharedCheck_4652_ = !lean_is_exclusive(v___x_4630_);
if (v_isSharedCheck_4652_ == 0)
{
v___x_4633_ = v___x_4630_;
v_isShared_4634_ = v_isSharedCheck_4652_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4630_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4652_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
if (lean_obj_tag(v_a_4631_) == 3)
{
lean_object* v_u_4635_; lean_object* v___x_4636_; lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4646_; 
lean_del_object(v___x_4633_);
v_u_4635_ = lean_ctor_get(v_a_4631_, 0);
lean_inc(v_u_4635_);
lean_dec_ref_known(v_a_4631_, 1);
v___x_4636_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_4635_, v_a_4608_);
v_a_4637_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4646_ == 0)
{
v___x_4639_ = v___x_4636_;
v_isShared_4640_ = v_isSharedCheck_4646_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_dec(v___x_4636_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4646_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
uint8_t v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4644_; 
v___x_4641_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_4637_);
lean_dec(v_a_4637_);
v___x_4642_ = lean_box(v___x_4641_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set(v___x_4639_, 0, v___x_4642_);
v___x_4644_ = v___x_4639_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4645_; 
v_reuseFailAlloc_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4645_, 0, v___x_4642_);
v___x_4644_ = v_reuseFailAlloc_4645_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
return v___x_4644_;
}
}
}
else
{
uint8_t v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4650_; 
lean_dec(v_a_4631_);
v___x_4647_ = 0;
v___x_4648_ = lean_box(v___x_4647_);
if (v_isShared_4634_ == 0)
{
lean_ctor_set(v___x_4633_, 0, v___x_4648_);
v___x_4650_ = v___x_4633_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v___x_4648_);
v___x_4650_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
return v___x_4650_;
}
}
}
}
else
{
lean_object* v_a_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4660_; 
v_a_4653_ = lean_ctor_get(v___x_4630_, 0);
v_isSharedCheck_4660_ = !lean_is_exclusive(v___x_4630_);
if (v_isSharedCheck_4660_ == 0)
{
v___x_4655_ = v___x_4630_;
v_isShared_4656_ = v_isSharedCheck_4660_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_a_4653_);
lean_dec(v___x_4630_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4660_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
lean_object* v___x_4658_; 
if (v_isShared_4656_ == 0)
{
v___x_4658_ = v___x_4655_;
goto v_reusejp_4657_;
}
else
{
lean_object* v_reuseFailAlloc_4659_; 
v_reuseFailAlloc_4659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4659_, 0, v_a_4653_);
v___x_4658_ = v_reuseFailAlloc_4659_;
goto v_reusejp_4657_;
}
v_reusejp_4657_:
{
return v___x_4658_;
}
}
}
}
else
{
lean_object* v_a_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4668_; 
v_a_4661_ = lean_ctor_get(v___x_4628_, 0);
v_isSharedCheck_4668_ = !lean_is_exclusive(v___x_4628_);
if (v_isSharedCheck_4668_ == 0)
{
v___x_4663_ = v___x_4628_;
v_isShared_4664_ = v_isSharedCheck_4668_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_a_4661_);
lean_dec(v___x_4628_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4668_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4666_; 
if (v_isShared_4664_ == 0)
{
v___x_4666_ = v___x_4663_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4667_; 
v_reuseFailAlloc_4667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4667_, 0, v_a_4661_);
v___x_4666_ = v_reuseFailAlloc_4667_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
return v___x_4666_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4677_; 
lean_dec_ref(v_e_4606_);
v_a_4670_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4677_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4677_ == 0)
{
v___x_4672_ = v___x_4612_;
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_a_4670_);
lean_dec(v___x_4612_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4675_; 
if (v_isShared_4673_ == 0)
{
v___x_4675_ = v___x_4672_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v_a_4670_);
v___x_4675_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
return v___x_4675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object* v_e_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l_Lean_Meta_isProp(v_e_4678_, v_a_4679_, v_a_4680_, v_a_4681_, v_a_4682_);
lean_dec(v_a_4682_);
lean_dec_ref(v_a_4681_);
lean_dec(v_a_4680_);
lean_dec_ref(v_a_4679_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___impl(lean_object* v_x_4685_){
_start:
{
lean_object* v___x_4686_; 
v___x_4686_ = lean_obj_tag_nat(v_x_4685_);
return v___x_4686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___impl___boxed(lean_object* v_x_4687_){
_start:
{
lean_object* v_res_4688_; 
v_res_4688_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___impl(v_x_4687_);
lean_dec(v_x_4687_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object* v_t_4689_, lean_object* v_k_4690_){
_start:
{
if (lean_obj_tag(v_t_4689_) == 3)
{
lean_object* v_idx_4691_; lean_object* v_numArgs_4692_; lean_object* v___x_4693_; 
v_idx_4691_ = lean_ctor_get(v_t_4689_, 0);
lean_inc(v_idx_4691_);
v_numArgs_4692_ = lean_ctor_get(v_t_4689_, 1);
lean_inc(v_numArgs_4692_);
lean_dec_ref_known(v_t_4689_, 2);
v___x_4693_ = lean_apply_2(v_k_4690_, v_idx_4691_, v_numArgs_4692_);
return v___x_4693_;
}
else
{
lean_dec(v_t_4689_);
return v_k_4690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object* v_motive_4694_, lean_object* v_ctorIdx_4695_, lean_object* v_t_4696_, lean_object* v_h_4697_, lean_object* v_k_4698_){
_start:
{
lean_object* v___x_4699_; 
v___x_4699_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4696_, v_k_4698_);
return v___x_4699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object* v_motive_4700_, lean_object* v_ctorIdx_4701_, lean_object* v_t_4702_, lean_object* v_h_4703_, lean_object* v_k_4704_){
_start:
{
lean_object* v_res_4705_; 
v_res_4705_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(v_motive_4700_, v_ctorIdx_4701_, v_t_4702_, v_h_4703_, v_k_4704_);
lean_dec(v_ctorIdx_4701_);
return v_res_4705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object* v_t_4706_, lean_object* v_false_4707_){
_start:
{
lean_object* v___x_4708_; 
v___x_4708_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4706_, v_false_4707_);
return v___x_4708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object* v_motive_4709_, lean_object* v_t_4710_, lean_object* v_h_4711_, lean_object* v_false_4712_){
_start:
{
lean_object* v___x_4713_; 
v___x_4713_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4710_, v_false_4712_);
return v___x_4713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object* v_t_4714_, lean_object* v_true_4715_){
_start:
{
lean_object* v___x_4716_; 
v___x_4716_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4714_, v_true_4715_);
return v___x_4716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object* v_motive_4717_, lean_object* v_t_4718_, lean_object* v_h_4719_, lean_object* v_true_4720_){
_start:
{
lean_object* v___x_4721_; 
v___x_4721_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4718_, v_true_4720_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object* v_t_4722_, lean_object* v_undef_4723_){
_start:
{
lean_object* v___x_4724_; 
v___x_4724_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4722_, v_undef_4723_);
return v___x_4724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object* v_motive_4725_, lean_object* v_t_4726_, lean_object* v_h_4727_, lean_object* v_undef_4728_){
_start:
{
lean_object* v___x_4729_; 
v___x_4729_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4726_, v_undef_4728_);
return v___x_4729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object* v_t_4730_, lean_object* v_bvar_4731_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4730_, v_bvar_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object* v_motive_4733_, lean_object* v_t_4734_, lean_object* v_h_4735_, lean_object* v_bvar_4736_){
_start:
{
lean_object* v___x_4737_; 
v___x_4737_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4734_, v_bvar_4736_);
return v___x_4737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t v_x_4738_){
_start:
{
switch(v_x_4738_)
{
case 0:
{
lean_object* v___x_4739_; 
v___x_4739_ = lean_box(0);
return v___x_4739_;
}
case 1:
{
lean_object* v___x_4740_; 
v___x_4740_ = lean_box(1);
return v___x_4740_;
}
default: 
{
lean_object* v___x_4741_; 
v___x_4741_ = lean_box(2);
return v___x_4741_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object* v_x_4742_){
_start:
{
uint8_t v_x_25__boxed_4743_; lean_object* v_res_4744_; 
v_x_25__boxed_4743_ = lean_unbox(v_x_4742_);
v_res_4744_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v_x_25__boxed_4743_);
return v_res_4744_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object* v_x_4745_){
_start:
{
switch(lean_obj_tag(v_x_4745_))
{
case 0:
{
uint8_t v___x_4746_; 
v___x_4746_ = 0;
return v___x_4746_;
}
case 1:
{
uint8_t v___x_4747_; 
v___x_4747_ = 1;
return v___x_4747_;
}
default: 
{
uint8_t v___x_4748_; 
v___x_4748_ = 2;
return v___x_4748_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object* v_x_4749_){
_start:
{
uint8_t v_res_4750_; lean_object* v_r_4751_; 
v_res_4750_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_x_4749_);
lean_dec(v_x_4749_);
v_r_4751_ = lean_box(v_res_4750_);
return v_r_4751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object* v_00_u03c3_4753_, lean_object* v_e_4754_, lean_object* v_numArgs_4755_){
_start:
{
lean_object* v___y_4757_; 
switch(lean_obj_tag(v_e_4754_))
{
case 3:
{
lean_object* v_u_4763_; lean_object* v___x_4764_; uint8_t v___x_4765_; 
v_u_4763_ = lean_ctor_get(v_e_4754_, 0);
lean_inc(v_u_4763_);
lean_dec_ref_known(v_e_4754_, 1);
v___x_4764_ = lean_unsigned_to_nat(0u);
v___x_4765_ = lean_nat_dec_eq(v_numArgs_4755_, v___x_4764_);
lean_dec(v_numArgs_4755_);
if (v___x_4765_ == 0)
{
lean_object* v___x_4766_; 
lean_dec(v_u_4763_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4766_ = lean_box(2);
return v___x_4766_;
}
else
{
lean_object* v_paramNames_4767_; lean_object* v_lvls_4768_; uint8_t v___x_4769_; 
v_paramNames_4767_ = lean_ctor_get(v_00_u03c3_4753_, 0);
lean_inc(v_paramNames_4767_);
v_lvls_4768_ = lean_ctor_get(v_00_u03c3_4753_, 1);
lean_inc(v_lvls_4768_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4769_ = l_List_isEmpty___redArg(v_paramNames_4767_);
if (v___x_4769_ == 0)
{
lean_object* v___x_4770_; 
v___x_4770_ = l_Lean_Level_instantiateParams(v_u_4763_, v_paramNames_4767_, v_lvls_4768_);
v___y_4757_ = v___x_4770_;
goto v___jp_4756_;
}
else
{
lean_dec(v_lvls_4768_);
lean_dec(v_paramNames_4767_);
v___y_4757_ = v_u_4763_;
goto v___jp_4756_;
}
}
}
case 7:
{
lean_object* v_body_4771_; lean_object* v_zero_4772_; uint8_t v_isZero_4773_; 
v_body_4771_ = lean_ctor_get(v_e_4754_, 2);
lean_inc_ref(v_body_4771_);
lean_dec_ref_known(v_e_4754_, 3);
v_zero_4772_ = lean_unsigned_to_nat(0u);
v_isZero_4773_ = lean_nat_dec_eq(v_numArgs_4755_, v_zero_4772_);
if (v_isZero_4773_ == 0)
{
lean_object* v_one_4774_; lean_object* v_n_4775_; 
v_one_4774_ = lean_unsigned_to_nat(1u);
v_n_4775_ = lean_nat_sub(v_numArgs_4755_, v_one_4774_);
lean_dec(v_numArgs_4755_);
v_e_4754_ = v_body_4771_;
v_numArgs_4755_ = v_n_4775_;
goto _start;
}
else
{
lean_object* v___x_4777_; 
lean_dec_ref(v_body_4771_);
lean_dec(v_numArgs_4755_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4777_ = lean_box(2);
return v___x_4777_;
}
}
case 10:
{
lean_object* v_expr_4778_; 
v_expr_4778_ = lean_ctor_get(v_e_4754_, 1);
lean_inc_ref(v_expr_4778_);
lean_dec_ref_known(v_e_4754_, 2);
v_e_4754_ = v_expr_4778_;
goto _start;
}
case 5:
{
lean_object* v_fn_4780_; 
v_fn_4780_ = lean_ctor_get(v_e_4754_, 0);
if (lean_obj_tag(v_fn_4780_) == 4)
{
lean_object* v_declName_4781_; 
v_declName_4781_ = lean_ctor_get(v_fn_4780_, 0);
lean_inc(v_declName_4781_);
if (lean_obj_tag(v_declName_4781_) == 1)
{
lean_object* v_pre_4782_; 
v_pre_4782_ = lean_ctor_get(v_declName_4781_, 0);
if (lean_obj_tag(v_pre_4782_) == 0)
{
lean_object* v_arg_4783_; lean_object* v_str_4784_; lean_object* v___x_4785_; uint8_t v___x_4786_; 
v_arg_4783_ = lean_ctor_get(v_e_4754_, 1);
lean_inc_ref(v_arg_4783_);
lean_dec_ref_known(v_e_4754_, 2);
v_str_4784_ = lean_ctor_get(v_declName_4781_, 1);
lean_inc_ref(v_str_4784_);
lean_dec_ref_known(v_declName_4781_, 2);
v___x_4785_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0));
v___x_4786_ = lean_string_dec_eq(v_str_4784_, v___x_4785_);
lean_dec_ref(v_str_4784_);
if (v___x_4786_ == 0)
{
lean_object* v___x_4787_; 
lean_dec_ref(v_arg_4783_);
lean_dec(v_numArgs_4755_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4787_ = lean_box(2);
return v___x_4787_;
}
else
{
v_e_4754_ = v_arg_4783_;
goto _start;
}
}
else
{
lean_object* v___x_4789_; 
lean_dec_ref_known(v_declName_4781_, 2);
lean_dec_ref_known(v_e_4754_, 2);
lean_dec(v_numArgs_4755_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4789_ = lean_box(2);
return v___x_4789_;
}
}
else
{
lean_object* v___x_4790_; 
lean_dec(v_declName_4781_);
lean_dec_ref_known(v_e_4754_, 2);
lean_dec(v_numArgs_4755_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4790_ = lean_box(2);
return v___x_4790_;
}
}
else
{
lean_object* v___x_4791_; 
lean_dec_ref_known(v_e_4754_, 2);
lean_dec(v_numArgs_4755_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4791_ = lean_box(2);
return v___x_4791_;
}
}
default: 
{
lean_object* v___x_4792_; 
lean_dec(v_numArgs_4755_);
lean_dec_ref(v_e_4754_);
lean_dec_ref(v_00_u03c3_4753_);
v___x_4792_ = lean_box(2);
return v___x_4792_;
}
}
v___jp_4756_:
{
uint8_t v___x_4758_; 
v___x_4758_ = l_Lean_Level_isNeverZero(v___y_4757_);
if (v___x_4758_ == 0)
{
uint8_t v___x_4759_; 
v___x_4759_ = l_Lean_Level_isZero(v___y_4757_);
lean_dec(v___y_4757_);
if (v___x_4759_ == 0)
{
lean_object* v___x_4760_; 
v___x_4760_ = lean_box(2);
return v___x_4760_;
}
else
{
lean_object* v___x_4761_; 
v___x_4761_ = lean_box(1);
return v___x_4761_;
}
}
else
{
lean_object* v___x_4762_; 
lean_dec(v___y_4757_);
v___x_4762_ = lean_box(0);
return v___x_4762_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object* v_00_u03c3_4793_, lean_object* v_r_4794_, lean_object* v_binderType_4795_){
_start:
{
if (lean_obj_tag(v_r_4794_) == 3)
{
lean_object* v_idx_4796_; lean_object* v_numArgs_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4809_; 
v_idx_4796_ = lean_ctor_get(v_r_4794_, 0);
v_numArgs_4797_ = lean_ctor_get(v_r_4794_, 1);
v_isSharedCheck_4809_ = !lean_is_exclusive(v_r_4794_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4799_ = v_r_4794_;
v_isShared_4800_ = v_isSharedCheck_4809_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_numArgs_4797_);
lean_inc(v_idx_4796_);
lean_dec(v_r_4794_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4809_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v_zero_4801_; uint8_t v_isZero_4802_; 
v_zero_4801_ = lean_unsigned_to_nat(0u);
v_isZero_4802_ = lean_nat_dec_eq(v_idx_4796_, v_zero_4801_);
if (v_isZero_4802_ == 1)
{
lean_object* v___x_4803_; 
lean_del_object(v___x_4799_);
lean_dec(v_idx_4796_);
v___x_4803_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_00_u03c3_4793_, v_binderType_4795_, v_numArgs_4797_);
return v___x_4803_;
}
else
{
lean_object* v_one_4804_; lean_object* v_n_4805_; lean_object* v___x_4807_; 
lean_dec_ref(v_binderType_4795_);
lean_dec_ref(v_00_u03c3_4793_);
v_one_4804_ = lean_unsigned_to_nat(1u);
v_n_4805_ = lean_nat_sub(v_idx_4796_, v_one_4804_);
lean_dec(v_idx_4796_);
if (v_isShared_4800_ == 0)
{
lean_ctor_set(v___x_4799_, 0, v_n_4805_);
v___x_4807_ = v___x_4799_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_n_4805_);
lean_ctor_set(v_reuseFailAlloc_4808_, 1, v_numArgs_4797_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
}
else
{
lean_dec_ref(v_binderType_4795_);
lean_dec_ref(v_00_u03c3_4793_);
return v_r_4794_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object* v_00_u03c3_4810_, lean_object* v_x_4811_, lean_object* v_x_4812_, lean_object* v_a_4813_, lean_object* v_a_4814_, lean_object* v_a_4815_, lean_object* v_a_4816_){
_start:
{
lean_object* v_type_4819_; lean_object* v___y_4820_; lean_object* v___y_4821_; lean_object* v___y_4822_; lean_object* v___y_4823_; 
switch(lean_obj_tag(v_x_4811_))
{
case 7:
{
lean_object* v_binderType_4851_; lean_object* v_body_4852_; lean_object* v_zero_4853_; uint8_t v_isZero_4854_; 
v_binderType_4851_ = lean_ctor_get(v_x_4811_, 1);
v_body_4852_ = lean_ctor_get(v_x_4811_, 2);
v_zero_4853_ = lean_unsigned_to_nat(0u);
v_isZero_4854_ = lean_nat_dec_eq(v_x_4812_, v_zero_4853_);
if (v_isZero_4854_ == 1)
{
v_type_4819_ = v_x_4811_;
v___y_4820_ = v_a_4813_;
v___y_4821_ = v_a_4814_;
v___y_4822_ = v_a_4815_;
v___y_4823_ = v_a_4816_;
goto v___jp_4818_;
}
else
{
lean_object* v_one_4855_; lean_object* v_n_4856_; lean_object* v___x_4857_; 
lean_inc_ref(v_body_4852_);
lean_inc_ref(v_binderType_4851_);
lean_dec_ref_known(v_x_4811_, 3);
v_one_4855_ = lean_unsigned_to_nat(1u);
v_n_4856_ = lean_nat_sub(v_x_4812_, v_one_4855_);
lean_inc_ref(v_00_u03c3_4810_);
v___x_4857_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_00_u03c3_4810_, v_body_4852_, v_n_4856_, v_a_4813_, v_a_4814_, v_a_4815_, v_a_4816_);
lean_dec(v_n_4856_);
if (lean_obj_tag(v___x_4857_) == 0)
{
lean_object* v_a_4858_; lean_object* v___x_4860_; uint8_t v_isShared_4861_; uint8_t v_isSharedCheck_4866_; 
v_a_4858_ = lean_ctor_get(v___x_4857_, 0);
v_isSharedCheck_4866_ = !lean_is_exclusive(v___x_4857_);
if (v_isSharedCheck_4866_ == 0)
{
v___x_4860_ = v___x_4857_;
v_isShared_4861_ = v_isSharedCheck_4866_;
goto v_resetjp_4859_;
}
else
{
lean_inc(v_a_4858_);
lean_dec(v___x_4857_);
v___x_4860_ = lean_box(0);
v_isShared_4861_ = v_isSharedCheck_4866_;
goto v_resetjp_4859_;
}
v_resetjp_4859_:
{
lean_object* v___x_4862_; lean_object* v___x_4864_; 
v___x_4862_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_00_u03c3_4810_, v_a_4858_, v_binderType_4851_);
if (v_isShared_4861_ == 0)
{
lean_ctor_set(v___x_4860_, 0, v___x_4862_);
v___x_4864_ = v___x_4860_;
goto v_reusejp_4863_;
}
else
{
lean_object* v_reuseFailAlloc_4865_; 
v_reuseFailAlloc_4865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4865_, 0, v___x_4862_);
v___x_4864_ = v_reuseFailAlloc_4865_;
goto v_reusejp_4863_;
}
v_reusejp_4863_:
{
return v___x_4864_;
}
}
}
else
{
lean_dec_ref(v_binderType_4851_);
lean_dec_ref(v_00_u03c3_4810_);
return v___x_4857_;
}
}
}
case 8:
{
lean_object* v_type_4867_; lean_object* v_body_4868_; lean_object* v___x_4869_; 
v_type_4867_ = lean_ctor_get(v_x_4811_, 1);
lean_inc_ref(v_type_4867_);
v_body_4868_ = lean_ctor_get(v_x_4811_, 3);
lean_inc_ref(v_body_4868_);
lean_dec_ref_known(v_x_4811_, 4);
lean_inc_ref(v_00_u03c3_4810_);
v___x_4869_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_00_u03c3_4810_, v_body_4868_, v_x_4812_, v_a_4813_, v_a_4814_, v_a_4815_, v_a_4816_);
if (lean_obj_tag(v___x_4869_) == 0)
{
lean_object* v_a_4870_; lean_object* v___x_4872_; uint8_t v_isShared_4873_; uint8_t v_isSharedCheck_4878_; 
v_a_4870_ = lean_ctor_get(v___x_4869_, 0);
v_isSharedCheck_4878_ = !lean_is_exclusive(v___x_4869_);
if (v_isSharedCheck_4878_ == 0)
{
v___x_4872_ = v___x_4869_;
v_isShared_4873_ = v_isSharedCheck_4878_;
goto v_resetjp_4871_;
}
else
{
lean_inc(v_a_4870_);
lean_dec(v___x_4869_);
v___x_4872_ = lean_box(0);
v_isShared_4873_ = v_isSharedCheck_4878_;
goto v_resetjp_4871_;
}
v_resetjp_4871_:
{
lean_object* v___x_4874_; lean_object* v___x_4876_; 
v___x_4874_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_00_u03c3_4810_, v_a_4870_, v_type_4867_);
if (v_isShared_4873_ == 0)
{
lean_ctor_set(v___x_4872_, 0, v___x_4874_);
v___x_4876_ = v___x_4872_;
goto v_reusejp_4875_;
}
else
{
lean_object* v_reuseFailAlloc_4877_; 
v_reuseFailAlloc_4877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4877_, 0, v___x_4874_);
v___x_4876_ = v_reuseFailAlloc_4877_;
goto v_reusejp_4875_;
}
v_reusejp_4875_:
{
return v___x_4876_;
}
}
}
else
{
lean_dec_ref(v_type_4867_);
lean_dec_ref(v_00_u03c3_4810_);
return v___x_4869_;
}
}
case 10:
{
lean_object* v_expr_4879_; 
v_expr_4879_ = lean_ctor_get(v_x_4811_, 1);
lean_inc_ref(v_expr_4879_);
lean_dec_ref_known(v_x_4811_, 2);
v_x_4811_ = v_expr_4879_;
goto _start;
}
case 0:
{
lean_object* v_deBruijnIndex_4881_; lean_object* v___x_4882_; uint8_t v___x_4883_; 
lean_dec_ref(v_00_u03c3_4810_);
v_deBruijnIndex_4881_ = lean_ctor_get(v_x_4811_, 0);
lean_inc(v_deBruijnIndex_4881_);
lean_dec_ref_known(v_x_4811_, 1);
v___x_4882_ = lean_unsigned_to_nat(0u);
v___x_4883_ = lean_nat_dec_eq(v_x_4812_, v___x_4882_);
if (v___x_4883_ == 0)
{
lean_dec(v_deBruijnIndex_4881_);
goto v___jp_4848_;
}
else
{
lean_object* v___x_4884_; lean_object* v___x_4885_; 
v___x_4884_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4884_, 0, v_deBruijnIndex_4881_);
lean_ctor_set(v___x_4884_, 1, v___x_4882_);
v___x_4885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4884_);
return v___x_4885_;
}
}
default: 
{
lean_object* v___x_4886_; uint8_t v___x_4887_; 
v___x_4886_ = lean_unsigned_to_nat(0u);
v___x_4887_ = lean_nat_dec_eq(v_x_4812_, v___x_4886_);
if (v___x_4887_ == 0)
{
lean_dec_ref(v_x_4811_);
lean_dec_ref(v_00_u03c3_4810_);
goto v___jp_4848_;
}
else
{
v_type_4819_ = v_x_4811_;
v___y_4820_ = v_a_4813_;
v___y_4821_ = v_a_4814_;
v___y_4822_ = v_a_4815_;
v___y_4823_ = v_a_4816_;
goto v___jp_4818_;
}
}
}
v___jp_4818_:
{
lean_object* v___x_4824_; 
v___x_4824_ = l_Lean_Expr_getAppFn(v_type_4819_);
if (lean_obj_tag(v___x_4824_) == 0)
{
lean_object* v_deBruijnIndex_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
lean_dec_ref(v_00_u03c3_4810_);
v_deBruijnIndex_4825_ = lean_ctor_get(v___x_4824_, 0);
lean_inc(v_deBruijnIndex_4825_);
lean_dec_ref_known(v___x_4824_, 1);
v___x_4826_ = l_Lean_Expr_getAppNumArgs(v_type_4819_);
lean_dec_ref(v_type_4819_);
v___x_4827_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4827_, 0, v_deBruijnIndex_4825_);
lean_ctor_set(v___x_4827_, 1, v___x_4826_);
v___x_4828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4828_, 0, v___x_4827_);
return v___x_4828_;
}
else
{
lean_object* v___x_4829_; 
lean_dec_ref(v___x_4824_);
v___x_4829_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickCore(v_00_u03c3_4810_, v_type_4819_, v___y_4820_, v___y_4821_, v___y_4822_, v___y_4823_);
if (lean_obj_tag(v___x_4829_) == 0)
{
lean_object* v_a_4830_; lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4839_; 
v_a_4830_ = lean_ctor_get(v___x_4829_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4832_ = v___x_4829_;
v_isShared_4833_ = v_isSharedCheck_4839_;
goto v_resetjp_4831_;
}
else
{
lean_inc(v_a_4830_);
lean_dec(v___x_4829_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4839_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
uint8_t v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4837_; 
v___x_4834_ = lean_unbox(v_a_4830_);
lean_dec(v_a_4830_);
v___x_4835_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v___x_4834_);
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v___x_4835_);
v___x_4837_ = v___x_4832_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v___x_4835_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
else
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4847_; 
v_a_4840_ = lean_ctor_get(v___x_4829_, 0);
v_isSharedCheck_4847_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4847_ == 0)
{
v___x_4842_ = v___x_4829_;
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4829_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v___x_4845_; 
if (v_isShared_4843_ == 0)
{
v___x_4845_ = v___x_4842_;
goto v_reusejp_4844_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v_a_4840_);
v___x_4845_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4844_;
}
v_reusejp_4844_:
{
return v___x_4845_;
}
}
}
}
}
v___jp_4848_:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4849_ = lean_box(2);
v___x_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4850_, 0, v___x_4849_);
return v___x_4850_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object* v_00_u03c3_4888_, lean_object* v_x_4889_, lean_object* v_x_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_, lean_object* v_a_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_00_u03c3_4888_, v_x_4889_, v_x_4890_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
lean_dec(v_a_4894_);
lean_dec_ref(v_a_4893_);
lean_dec(v_a_4892_);
lean_dec_ref(v_a_4891_);
lean_dec(v_x_4890_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object* v_00_u03c3_4897_, lean_object* v_e_4898_, lean_object* v_n_4899_, lean_object* v_a_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_){
_start:
{
lean_object* v___x_4905_; 
v___x_4905_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_00_u03c3_4897_, v_e_4898_, v_n_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_);
if (lean_obj_tag(v___x_4905_) == 0)
{
lean_object* v_a_4906_; lean_object* v___x_4908_; uint8_t v_isShared_4909_; uint8_t v_isSharedCheck_4915_; 
v_a_4906_ = lean_ctor_get(v___x_4905_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4905_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4908_ = v___x_4905_;
v_isShared_4909_ = v_isSharedCheck_4915_;
goto v_resetjp_4907_;
}
else
{
lean_inc(v_a_4906_);
lean_dec(v___x_4905_);
v___x_4908_ = lean_box(0);
v_isShared_4909_ = v_isSharedCheck_4915_;
goto v_resetjp_4907_;
}
v_resetjp_4907_:
{
uint8_t v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4913_; 
v___x_4910_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_a_4906_);
lean_dec(v_a_4906_);
v___x_4911_ = lean_box(v___x_4910_);
if (v_isShared_4909_ == 0)
{
lean_ctor_set(v___x_4908_, 0, v___x_4911_);
v___x_4913_ = v___x_4908_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v___x_4911_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
return v___x_4913_;
}
}
}
else
{
lean_object* v_a_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4923_; 
v_a_4916_ = lean_ctor_get(v___x_4905_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4905_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4918_ = v___x_4905_;
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_a_4916_);
lean_dec(v___x_4905_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4921_; 
if (v_isShared_4919_ == 0)
{
v___x_4921_ = v___x_4918_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4916_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
return v___x_4921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object* v_00_u03c3_4924_, lean_object* v_e_4925_, lean_object* v_n_4926_, lean_object* v_a_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_){
_start:
{
lean_object* v_res_4932_; 
v_res_4932_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_00_u03c3_4924_, v_e_4925_, v_n_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_);
lean_dec(v_a_4930_);
lean_dec_ref(v_a_4929_);
lean_dec(v_a_4928_);
lean_dec_ref(v_a_4927_);
lean_dec(v_n_4926_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object* v_x_4933_, lean_object* v_a_4934_, lean_object* v_a_4935_, lean_object* v_a_4936_, lean_object* v_a_4937_){
_start:
{
switch(lean_obj_tag(v_x_4933_))
{
case 1:
{
lean_object* v_fvarId_4939_; lean_object* v___x_4940_; 
v_fvarId_4939_ = lean_ctor_get(v_x_4933_, 0);
lean_inc(v_fvarId_4939_);
lean_dec_ref_known(v_x_4933_, 1);
v___x_4940_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4939_, v_a_4934_, v_a_4936_, v_a_4937_);
if (lean_obj_tag(v___x_4940_) == 0)
{
lean_object* v_a_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; 
v_a_4941_ = lean_ctor_get(v___x_4940_, 0);
lean_inc(v_a_4941_);
lean_dec_ref_known(v___x_4940_, 1);
v___x_4942_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4943_ = lean_unsigned_to_nat(0u);
v___x_4944_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v___x_4942_, v_a_4941_, v___x_4943_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_);
return v___x_4944_;
}
else
{
lean_object* v_a_4945_; lean_object* v___x_4947_; uint8_t v_isShared_4948_; uint8_t v_isSharedCheck_4952_; 
v_a_4945_ = lean_ctor_get(v___x_4940_, 0);
v_isSharedCheck_4952_ = !lean_is_exclusive(v___x_4940_);
if (v_isSharedCheck_4952_ == 0)
{
v___x_4947_ = v___x_4940_;
v_isShared_4948_ = v_isSharedCheck_4952_;
goto v_resetjp_4946_;
}
else
{
lean_inc(v_a_4945_);
lean_dec(v___x_4940_);
v___x_4947_ = lean_box(0);
v_isShared_4948_ = v_isSharedCheck_4952_;
goto v_resetjp_4946_;
}
v_resetjp_4946_:
{
lean_object* v___x_4950_; 
if (v_isShared_4948_ == 0)
{
v___x_4950_ = v___x_4947_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v_a_4945_);
v___x_4950_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
return v___x_4950_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4953_; lean_object* v___x_4954_; 
v_mvarId_4953_ = lean_ctor_get(v_x_4933_, 0);
lean_inc(v_mvarId_4953_);
lean_dec_ref_known(v_x_4933_, 1);
v___x_4954_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4953_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_);
if (lean_obj_tag(v___x_4954_) == 0)
{
lean_object* v_a_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v_a_4955_ = lean_ctor_get(v___x_4954_, 0);
lean_inc(v_a_4955_);
lean_dec_ref_known(v___x_4954_, 1);
v___x_4956_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_4957_ = lean_unsigned_to_nat(0u);
v___x_4958_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v___x_4956_, v_a_4955_, v___x_4957_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_);
return v___x_4958_;
}
else
{
lean_object* v_a_4959_; lean_object* v___x_4961_; uint8_t v_isShared_4962_; uint8_t v_isSharedCheck_4966_; 
v_a_4959_ = lean_ctor_get(v___x_4954_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v___x_4954_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4961_ = v___x_4954_;
v_isShared_4962_ = v_isSharedCheck_4966_;
goto v_resetjp_4960_;
}
else
{
lean_inc(v_a_4959_);
lean_dec(v___x_4954_);
v___x_4961_ = lean_box(0);
v_isShared_4962_ = v_isSharedCheck_4966_;
goto v_resetjp_4960_;
}
v_resetjp_4960_:
{
lean_object* v___x_4964_; 
if (v_isShared_4962_ == 0)
{
v___x_4964_ = v___x_4961_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v_a_4959_);
v___x_4964_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4963_;
}
v_reusejp_4963_:
{
return v___x_4964_;
}
}
}
}
case 3:
{
uint8_t v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; 
lean_dec_ref_known(v_x_4933_, 1);
v___x_4967_ = 0;
v___x_4968_ = lean_box(v___x_4967_);
v___x_4969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4969_, 0, v___x_4968_);
return v___x_4969_;
}
case 4:
{
lean_object* v_declName_4970_; lean_object* v_us_4971_; lean_object* v___x_4972_; 
v_declName_4970_ = lean_ctor_get(v_x_4933_, 0);
lean_inc(v_declName_4970_);
v_us_4971_ = lean_ctor_get(v_x_4933_, 1);
lean_inc(v_us_4971_);
lean_dec_ref_known(v_x_4933_, 2);
v___x_4972_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_declName_4970_, v_us_4971_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; lean_object* v_fst_4974_; lean_object* v_snd_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc(v_a_4973_);
lean_dec_ref_known(v___x_4972_, 1);
v_fst_4974_ = lean_ctor_get(v_a_4973_, 0);
lean_inc(v_fst_4974_);
v_snd_4975_ = lean_ctor_get(v_a_4973_, 1);
lean_inc(v_snd_4975_);
lean_dec(v_a_4973_);
v___x_4976_ = lean_unsigned_to_nat(0u);
v___x_4977_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_snd_4975_, v_fst_4974_, v___x_4976_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_);
return v___x_4977_;
}
else
{
lean_object* v_a_4978_; lean_object* v___x_4980_; uint8_t v_isShared_4981_; uint8_t v_isSharedCheck_4985_; 
v_a_4978_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_4985_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_4985_ == 0)
{
v___x_4980_ = v___x_4972_;
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
else
{
lean_inc(v_a_4978_);
lean_dec(v___x_4972_);
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
case 5:
{
lean_object* v_fn_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; 
v_fn_4986_ = lean_ctor_get(v_x_4933_, 0);
lean_inc_ref(v_fn_4986_);
lean_dec_ref_known(v_x_4933_, 2);
v___x_4987_ = lean_unsigned_to_nat(1u);
v___x_4988_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_fn_4986_, v___x_4987_, v_a_4934_, v_a_4935_, v_a_4936_, v_a_4937_);
return v___x_4988_;
}
case 6:
{
lean_object* v_body_4989_; 
v_body_4989_ = lean_ctor_get(v_x_4933_, 2);
lean_inc_ref(v_body_4989_);
lean_dec_ref_known(v_x_4933_, 3);
v_x_4933_ = v_body_4989_;
goto _start;
}
case 7:
{
uint8_t v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
lean_dec_ref_known(v_x_4933_, 3);
v___x_4991_ = 0;
v___x_4992_ = lean_box(v___x_4991_);
v___x_4993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4993_, 0, v___x_4992_);
return v___x_4993_;
}
case 8:
{
lean_object* v_body_4994_; 
v_body_4994_ = lean_ctor_get(v_x_4933_, 3);
lean_inc_ref(v_body_4994_);
lean_dec_ref_known(v_x_4933_, 4);
v_x_4933_ = v_body_4994_;
goto _start;
}
case 9:
{
uint8_t v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
lean_dec_ref_known(v_x_4933_, 1);
v___x_4996_ = 0;
v___x_4997_ = lean_box(v___x_4996_);
v___x_4998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4997_);
return v___x_4998_;
}
case 10:
{
lean_object* v_expr_4999_; 
v_expr_4999_ = lean_ctor_get(v_x_4933_, 1);
lean_inc_ref(v_expr_4999_);
lean_dec_ref_known(v_x_4933_, 2);
v_x_4933_ = v_expr_4999_;
goto _start;
}
default: 
{
uint8_t v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; 
lean_dec_ref(v_x_4933_);
v___x_5001_ = 2;
v___x_5002_ = lean_box(v___x_5001_);
v___x_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5003_, 0, v___x_5002_);
return v___x_5003_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object* v_x_5004_, lean_object* v_x_5005_, lean_object* v_a_5006_, lean_object* v_a_5007_, lean_object* v_a_5008_, lean_object* v_a_5009_){
_start:
{
switch(lean_obj_tag(v_x_5004_))
{
case 4:
{
lean_object* v_declName_5011_; lean_object* v_us_5012_; lean_object* v___x_5013_; 
v_declName_5011_ = lean_ctor_get(v_x_5004_, 0);
lean_inc(v_declName_5011_);
v_us_5012_ = lean_ctor_get(v_x_5004_, 1);
lean_inc(v_us_5012_);
lean_dec_ref_known(v_x_5004_, 2);
v___x_5013_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_declName_5011_, v_us_5012_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_);
if (lean_obj_tag(v___x_5013_) == 0)
{
lean_object* v_a_5014_; lean_object* v_fst_5015_; lean_object* v_snd_5016_; lean_object* v___x_5017_; 
v_a_5014_ = lean_ctor_get(v___x_5013_, 0);
lean_inc(v_a_5014_);
lean_dec_ref_known(v___x_5013_, 1);
v_fst_5015_ = lean_ctor_get(v_a_5014_, 0);
lean_inc(v_fst_5015_);
v_snd_5016_ = lean_ctor_get(v_a_5014_, 1);
lean_inc(v_snd_5016_);
lean_dec(v_a_5014_);
v___x_5017_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_snd_5016_, v_fst_5015_, v_x_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_);
lean_dec(v_x_5005_);
return v___x_5017_;
}
else
{
lean_object* v_a_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5025_; 
lean_dec(v_x_5005_);
v_a_5018_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5025_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5025_ == 0)
{
v___x_5020_ = v___x_5013_;
v_isShared_5021_ = v_isSharedCheck_5025_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_a_5018_);
lean_dec(v___x_5013_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5025_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5023_; 
if (v_isShared_5021_ == 0)
{
v___x_5023_ = v___x_5020_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v_a_5018_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
return v___x_5023_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_5026_; lean_object* v___x_5027_; 
v_fvarId_5026_ = lean_ctor_get(v_x_5004_, 0);
lean_inc(v_fvarId_5026_);
lean_dec_ref_known(v_x_5004_, 1);
v___x_5027_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_5026_, v_a_5006_, v_a_5008_, v_a_5009_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
lean_inc(v_a_5028_);
lean_dec_ref_known(v___x_5027_, 1);
v___x_5029_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_5030_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v___x_5029_, v_a_5028_, v_x_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_);
lean_dec(v_x_5005_);
return v___x_5030_;
}
else
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5038_; 
lean_dec(v_x_5005_);
v_a_5031_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5038_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5038_ == 0)
{
v___x_5033_ = v___x_5027_;
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v___x_5027_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5037_; 
v_reuseFailAlloc_5037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5037_, 0, v_a_5031_);
v___x_5036_ = v_reuseFailAlloc_5037_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
return v___x_5036_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_5039_; lean_object* v___x_5040_; 
v_mvarId_5039_ = lean_ctor_get(v_x_5004_, 0);
lean_inc(v_mvarId_5039_);
lean_dec_ref_known(v_x_5004_, 1);
v___x_5040_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_5039_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_);
if (lean_obj_tag(v___x_5040_) == 0)
{
lean_object* v_a_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
v_a_5041_ = lean_ctor_get(v___x_5040_, 0);
lean_inc(v_a_5041_);
lean_dec_ref_known(v___x_5040_, 1);
v___x_5042_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___closed__0));
v___x_5043_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v___x_5042_, v_a_5041_, v_x_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_);
lean_dec(v_x_5005_);
return v___x_5043_;
}
else
{
lean_object* v_a_5044_; lean_object* v___x_5046_; uint8_t v_isShared_5047_; uint8_t v_isSharedCheck_5051_; 
lean_dec(v_x_5005_);
v_a_5044_ = lean_ctor_get(v___x_5040_, 0);
v_isSharedCheck_5051_ = !lean_is_exclusive(v___x_5040_);
if (v_isSharedCheck_5051_ == 0)
{
v___x_5046_ = v___x_5040_;
v_isShared_5047_ = v_isSharedCheck_5051_;
goto v_resetjp_5045_;
}
else
{
lean_inc(v_a_5044_);
lean_dec(v___x_5040_);
v___x_5046_ = lean_box(0);
v_isShared_5047_ = v_isSharedCheck_5051_;
goto v_resetjp_5045_;
}
v_resetjp_5045_:
{
lean_object* v___x_5049_; 
if (v_isShared_5047_ == 0)
{
v___x_5049_ = v___x_5046_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v_a_5044_);
v___x_5049_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
return v___x_5049_;
}
}
}
}
case 5:
{
lean_object* v_fn_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; 
v_fn_5052_ = lean_ctor_get(v_x_5004_, 0);
lean_inc_ref(v_fn_5052_);
lean_dec_ref_known(v_x_5004_, 2);
v___x_5053_ = lean_unsigned_to_nat(1u);
v___x_5054_ = lean_nat_add(v_x_5005_, v___x_5053_);
lean_dec(v_x_5005_);
v_x_5004_ = v_fn_5052_;
v_x_5005_ = v___x_5054_;
goto _start;
}
case 10:
{
lean_object* v_expr_5056_; 
v_expr_5056_ = lean_ctor_get(v_x_5004_, 1);
lean_inc_ref(v_expr_5056_);
lean_dec_ref_known(v_x_5004_, 2);
v_x_5004_ = v_expr_5056_;
goto _start;
}
case 8:
{
lean_object* v_body_5058_; 
v_body_5058_ = lean_ctor_get(v_x_5004_, 3);
lean_inc_ref(v_body_5058_);
lean_dec_ref_known(v_x_5004_, 4);
v_x_5004_ = v_body_5058_;
goto _start;
}
case 6:
{
lean_object* v_body_5060_; lean_object* v_zero_5061_; uint8_t v_isZero_5062_; 
v_body_5060_ = lean_ctor_get(v_x_5004_, 2);
lean_inc_ref(v_body_5060_);
lean_dec_ref_known(v_x_5004_, 3);
v_zero_5061_ = lean_unsigned_to_nat(0u);
v_isZero_5062_ = lean_nat_dec_eq(v_x_5005_, v_zero_5061_);
if (v_isZero_5062_ == 1)
{
lean_object* v___x_5063_; 
lean_dec(v_x_5005_);
v___x_5063_ = l_Lean_Meta_isProofQuick(v_body_5060_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_);
return v___x_5063_;
}
else
{
lean_object* v_one_5064_; lean_object* v_n_5065_; 
v_one_5064_ = lean_unsigned_to_nat(1u);
v_n_5065_ = lean_nat_sub(v_x_5005_, v_one_5064_);
lean_dec(v_x_5005_);
v_x_5004_ = v_body_5060_;
v_x_5005_ = v_n_5065_;
goto _start;
}
}
default: 
{
uint8_t v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
lean_dec(v_x_5005_);
lean_dec_ref(v_x_5004_);
v___x_5067_ = 2;
v___x_5068_ = lean_box(v___x_5067_);
v___x_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5069_, 0, v___x_5068_);
return v___x_5069_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object* v_x_5070_, lean_object* v_x_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_a_5076_){
_start:
{
lean_object* v_res_5077_; 
v_res_5077_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_x_5070_, v_x_5071_, v_a_5072_, v_a_5073_, v_a_5074_, v_a_5075_);
lean_dec(v_a_5075_);
lean_dec_ref(v_a_5074_);
lean_dec(v_a_5073_);
lean_dec_ref(v_a_5072_);
return v_res_5077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object* v_x_5078_, lean_object* v_a_5079_, lean_object* v_a_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_){
_start:
{
lean_object* v_res_5084_; 
v_res_5084_ = l_Lean_Meta_isProofQuick(v_x_5078_, v_a_5079_, v_a_5080_, v_a_5081_, v_a_5082_);
lean_dec(v_a_5082_);
lean_dec_ref(v_a_5081_);
lean_dec(v_a_5080_);
lean_dec_ref(v_a_5079_);
return v_res_5084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object* v_e_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_, lean_object* v_a_5089_){
_start:
{
lean_object* v___x_5091_; 
lean_inc_ref(v_e_5085_);
v___x_5091_ = l_Lean_Meta_isProofQuick(v_e_5085_, v_a_5086_, v_a_5087_, v_a_5088_, v_a_5089_);
if (lean_obj_tag(v___x_5091_) == 0)
{
lean_object* v_a_5092_; lean_object* v___x_5094_; uint8_t v_isShared_5095_; uint8_t v_isSharedCheck_5118_; 
v_a_5092_ = lean_ctor_get(v___x_5091_, 0);
v_isSharedCheck_5118_ = !lean_is_exclusive(v___x_5091_);
if (v_isSharedCheck_5118_ == 0)
{
v___x_5094_ = v___x_5091_;
v_isShared_5095_ = v_isSharedCheck_5118_;
goto v_resetjp_5093_;
}
else
{
lean_inc(v_a_5092_);
lean_dec(v___x_5091_);
v___x_5094_ = lean_box(0);
v_isShared_5095_ = v_isSharedCheck_5118_;
goto v_resetjp_5093_;
}
v_resetjp_5093_:
{
uint8_t v___x_5096_; 
v___x_5096_ = lean_unbox(v_a_5092_);
lean_dec(v_a_5092_);
switch(v___x_5096_)
{
case 0:
{
uint8_t v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5100_; 
lean_dec_ref(v_e_5085_);
v___x_5097_ = 0;
v___x_5098_ = lean_box(v___x_5097_);
if (v_isShared_5095_ == 0)
{
lean_ctor_set(v___x_5094_, 0, v___x_5098_);
v___x_5100_ = v___x_5094_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v___x_5098_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
return v___x_5100_;
}
}
case 1:
{
uint8_t v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5105_; 
lean_dec_ref(v_e_5085_);
v___x_5102_ = 1;
v___x_5103_ = lean_box(v___x_5102_);
if (v_isShared_5095_ == 0)
{
lean_ctor_set(v___x_5094_, 0, v___x_5103_);
v___x_5105_ = v___x_5094_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v___x_5103_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
default: 
{
lean_object* v___x_5107_; 
lean_del_object(v___x_5094_);
lean_inc(v_a_5089_);
lean_inc_ref(v_a_5088_);
lean_inc(v_a_5087_);
lean_inc_ref(v_a_5086_);
v___x_5107_ = lean_infer_type(v_e_5085_, v_a_5086_, v_a_5087_, v_a_5088_, v_a_5089_);
if (lean_obj_tag(v___x_5107_) == 0)
{
lean_object* v_a_5108_; lean_object* v___x_5109_; 
v_a_5108_ = lean_ctor_get(v___x_5107_, 0);
lean_inc(v_a_5108_);
lean_dec_ref_known(v___x_5107_, 1);
v___x_5109_ = l_Lean_Meta_isProp(v_a_5108_, v_a_5086_, v_a_5087_, v_a_5088_, v_a_5089_);
return v___x_5109_;
}
else
{
lean_object* v_a_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5117_; 
v_a_5110_ = lean_ctor_get(v___x_5107_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_5107_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5112_ = v___x_5107_;
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_a_5110_);
lean_dec(v___x_5107_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5115_; 
if (v_isShared_5113_ == 0)
{
v___x_5115_ = v___x_5112_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v_a_5110_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
return v___x_5115_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5126_; 
lean_dec_ref(v_e_5085_);
v_a_5119_ = lean_ctor_get(v___x_5091_, 0);
v_isSharedCheck_5126_ = !lean_is_exclusive(v___x_5091_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5121_ = v___x_5091_;
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_a_5119_);
lean_dec(v___x_5091_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v___x_5124_; 
if (v_isShared_5122_ == 0)
{
v___x_5124_ = v___x_5121_;
goto v_reusejp_5123_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v_a_5119_);
v___x_5124_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5123_;
}
v_reusejp_5123_:
{
return v___x_5124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object* v_e_5127_, lean_object* v_a_5128_, lean_object* v_a_5129_, lean_object* v_a_5130_, lean_object* v_a_5131_, lean_object* v_a_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lean_Meta_isProof(v_e_5127_, v_a_5128_, v_a_5129_, v_a_5130_, v_a_5131_);
lean_dec(v_a_5131_);
lean_dec_ref(v_a_5130_);
lean_dec(v_a_5129_);
lean_dec_ref(v_a_5128_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object* v_x_5134_, lean_object* v_x_5135_){
_start:
{
switch(lean_obj_tag(v_x_5134_))
{
case 3:
{
lean_object* v___x_5141_; uint8_t v___x_5142_; 
v___x_5141_ = lean_unsigned_to_nat(0u);
v___x_5142_ = lean_nat_dec_eq(v_x_5135_, v___x_5141_);
lean_dec(v_x_5135_);
if (v___x_5142_ == 0)
{
goto v___jp_5137_;
}
else
{
uint8_t v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5143_ = 1;
v___x_5144_ = lean_box(v___x_5143_);
v___x_5145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5144_);
return v___x_5145_;
}
}
case 7:
{
lean_object* v_body_5146_; lean_object* v_zero_5147_; uint8_t v_isZero_5148_; 
v_body_5146_ = lean_ctor_get(v_x_5134_, 2);
v_zero_5147_ = lean_unsigned_to_nat(0u);
v_isZero_5148_ = lean_nat_dec_eq(v_x_5135_, v_zero_5147_);
if (v_isZero_5148_ == 1)
{
uint8_t v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; 
lean_dec(v_x_5135_);
v___x_5149_ = 0;
v___x_5150_ = lean_box(v___x_5149_);
v___x_5151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5151_, 0, v___x_5150_);
return v___x_5151_;
}
else
{
lean_object* v_one_5152_; lean_object* v_n_5153_; 
v_one_5152_ = lean_unsigned_to_nat(1u);
v_n_5153_ = lean_nat_sub(v_x_5135_, v_one_5152_);
lean_dec(v_x_5135_);
v_x_5134_ = v_body_5146_;
v_x_5135_ = v_n_5153_;
goto _start;
}
}
case 8:
{
lean_object* v_body_5155_; 
v_body_5155_ = lean_ctor_get(v_x_5134_, 3);
v_x_5134_ = v_body_5155_;
goto _start;
}
case 10:
{
lean_object* v_expr_5157_; 
v_expr_5157_ = lean_ctor_get(v_x_5134_, 1);
v_x_5134_ = v_expr_5157_;
goto _start;
}
default: 
{
lean_dec(v_x_5135_);
goto v___jp_5137_;
}
}
v___jp_5137_:
{
uint8_t v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; 
v___x_5138_ = 2;
v___x_5139_ = lean_box(v___x_5138_);
v___x_5140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5139_);
return v___x_5140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object* v_x_5159_, lean_object* v_x_5160_, lean_object* v_a_5161_){
_start:
{
lean_object* v_res_5162_; 
v_res_5162_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_5159_, v_x_5160_);
lean_dec_ref(v_x_5159_);
return v_res_5162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object* v_x_5163_, lean_object* v_x_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_){
_start:
{
lean_object* v___x_5170_; 
v___x_5170_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_5163_, v_x_5164_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object* v_x_5171_, lean_object* v_x_5172_, lean_object* v_a_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(v_x_5171_, v_x_5172_, v_a_5173_, v_a_5174_, v_a_5175_, v_a_5176_);
lean_dec(v_a_5176_);
lean_dec_ref(v_a_5175_);
lean_dec(v_a_5174_);
lean_dec_ref(v_a_5173_);
lean_dec_ref(v_x_5171_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object* v_x_5179_, lean_object* v_x_5180_, lean_object* v_a_5181_, lean_object* v_a_5182_, lean_object* v_a_5183_, lean_object* v_a_5184_){
_start:
{
switch(lean_obj_tag(v_x_5179_))
{
case 4:
{
lean_object* v_declName_5186_; lean_object* v_us_5187_; lean_object* v___x_5188_; 
v_declName_5186_ = lean_ctor_get(v_x_5179_, 0);
lean_inc(v_declName_5186_);
v_us_5187_ = lean_ctor_get(v_x_5179_, 1);
lean_inc(v_us_5187_);
lean_dec_ref_known(v_x_5179_, 2);
v___x_5188_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_declName_5186_, v_us_5187_, v_a_5181_, v_a_5182_, v_a_5183_, v_a_5184_);
if (lean_obj_tag(v___x_5188_) == 0)
{
lean_object* v_a_5189_; lean_object* v_fst_5190_; lean_object* v___x_5191_; 
v_a_5189_ = lean_ctor_get(v___x_5188_, 0);
lean_inc(v_a_5189_);
lean_dec_ref_known(v___x_5188_, 1);
v_fst_5190_ = lean_ctor_get(v_a_5189_, 0);
lean_inc(v_fst_5190_);
lean_dec(v_a_5189_);
v___x_5191_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_fst_5190_, v_x_5180_);
lean_dec(v_fst_5190_);
return v___x_5191_;
}
else
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5199_; 
lean_dec(v_x_5180_);
v_a_5192_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5199_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5199_ == 0)
{
v___x_5194_ = v___x_5188_;
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5188_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5197_; 
if (v_isShared_5195_ == 0)
{
v___x_5197_ = v___x_5194_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5198_; 
v_reuseFailAlloc_5198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5198_, 0, v_a_5192_);
v___x_5197_ = v_reuseFailAlloc_5198_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
return v___x_5197_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_5200_; lean_object* v___x_5201_; 
v_fvarId_5200_ = lean_ctor_get(v_x_5179_, 0);
lean_inc(v_fvarId_5200_);
lean_dec_ref_known(v_x_5179_, 1);
v___x_5201_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_5200_, v_a_5181_, v_a_5183_, v_a_5184_);
if (lean_obj_tag(v___x_5201_) == 0)
{
lean_object* v_a_5202_; lean_object* v___x_5203_; 
v_a_5202_ = lean_ctor_get(v___x_5201_, 0);
lean_inc(v_a_5202_);
lean_dec_ref_known(v___x_5201_, 1);
v___x_5203_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_5202_, v_x_5180_);
lean_dec(v_a_5202_);
return v___x_5203_;
}
else
{
lean_object* v_a_5204_; lean_object* v___x_5206_; uint8_t v_isShared_5207_; uint8_t v_isSharedCheck_5211_; 
lean_dec(v_x_5180_);
v_a_5204_ = lean_ctor_get(v___x_5201_, 0);
v_isSharedCheck_5211_ = !lean_is_exclusive(v___x_5201_);
if (v_isSharedCheck_5211_ == 0)
{
v___x_5206_ = v___x_5201_;
v_isShared_5207_ = v_isSharedCheck_5211_;
goto v_resetjp_5205_;
}
else
{
lean_inc(v_a_5204_);
lean_dec(v___x_5201_);
v___x_5206_ = lean_box(0);
v_isShared_5207_ = v_isSharedCheck_5211_;
goto v_resetjp_5205_;
}
v_resetjp_5205_:
{
lean_object* v___x_5209_; 
if (v_isShared_5207_ == 0)
{
v___x_5209_ = v___x_5206_;
goto v_reusejp_5208_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v_a_5204_);
v___x_5209_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5208_;
}
v_reusejp_5208_:
{
return v___x_5209_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_5212_; lean_object* v___x_5213_; 
v_mvarId_5212_ = lean_ctor_get(v_x_5179_, 0);
lean_inc(v_mvarId_5212_);
lean_dec_ref_known(v_x_5179_, 1);
v___x_5213_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_5212_, v_a_5181_, v_a_5182_, v_a_5183_, v_a_5184_);
if (lean_obj_tag(v___x_5213_) == 0)
{
lean_object* v_a_5214_; lean_object* v___x_5215_; 
v_a_5214_ = lean_ctor_get(v___x_5213_, 0);
lean_inc(v_a_5214_);
lean_dec_ref_known(v___x_5213_, 1);
v___x_5215_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_5214_, v_x_5180_);
lean_dec(v_a_5214_);
return v___x_5215_;
}
else
{
lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5223_; 
lean_dec(v_x_5180_);
v_a_5216_ = lean_ctor_get(v___x_5213_, 0);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___x_5213_);
if (v_isSharedCheck_5223_ == 0)
{
v___x_5218_ = v___x_5213_;
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_dec(v___x_5213_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v___x_5221_; 
if (v_isShared_5219_ == 0)
{
v___x_5221_ = v___x_5218_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_a_5216_);
v___x_5221_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
return v___x_5221_;
}
}
}
}
case 5:
{
lean_object* v_fn_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; 
v_fn_5224_ = lean_ctor_get(v_x_5179_, 0);
lean_inc_ref(v_fn_5224_);
lean_dec_ref_known(v_x_5179_, 2);
v___x_5225_ = lean_unsigned_to_nat(1u);
v___x_5226_ = lean_nat_add(v_x_5180_, v___x_5225_);
lean_dec(v_x_5180_);
v_x_5179_ = v_fn_5224_;
v_x_5180_ = v___x_5226_;
goto _start;
}
case 10:
{
lean_object* v_expr_5228_; 
v_expr_5228_ = lean_ctor_get(v_x_5179_, 1);
lean_inc_ref(v_expr_5228_);
lean_dec_ref_known(v_x_5179_, 2);
v_x_5179_ = v_expr_5228_;
goto _start;
}
case 8:
{
lean_object* v_body_5230_; 
v_body_5230_ = lean_ctor_get(v_x_5179_, 3);
lean_inc_ref(v_body_5230_);
lean_dec_ref_known(v_x_5179_, 4);
v_x_5179_ = v_body_5230_;
goto _start;
}
case 6:
{
lean_object* v_body_5232_; lean_object* v_zero_5233_; uint8_t v_isZero_5234_; 
v_body_5232_ = lean_ctor_get(v_x_5179_, 2);
lean_inc_ref(v_body_5232_);
lean_dec_ref_known(v_x_5179_, 3);
v_zero_5233_ = lean_unsigned_to_nat(0u);
v_isZero_5234_ = lean_nat_dec_eq(v_x_5180_, v_zero_5233_);
if (v_isZero_5234_ == 1)
{
uint8_t v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; 
lean_dec_ref(v_body_5232_);
lean_dec(v_x_5180_);
v___x_5235_ = 0;
v___x_5236_ = lean_box(v___x_5235_);
v___x_5237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5237_, 0, v___x_5236_);
return v___x_5237_;
}
else
{
lean_object* v_one_5238_; lean_object* v_n_5239_; 
v_one_5238_ = lean_unsigned_to_nat(1u);
v_n_5239_ = lean_nat_sub(v_x_5180_, v_one_5238_);
lean_dec(v_x_5180_);
v_x_5179_ = v_body_5232_;
v_x_5180_ = v_n_5239_;
goto _start;
}
}
default: 
{
uint8_t v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; 
lean_dec(v_x_5180_);
lean_dec_ref(v_x_5179_);
v___x_5241_ = 2;
v___x_5242_ = lean_box(v___x_5241_);
v___x_5243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5243_, 0, v___x_5242_);
return v___x_5243_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object* v_x_5244_, lean_object* v_x_5245_, lean_object* v_a_5246_, lean_object* v_a_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_, lean_object* v_a_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_x_5244_, v_x_5245_, v_a_5246_, v_a_5247_, v_a_5248_, v_a_5249_);
lean_dec(v_a_5249_);
lean_dec_ref(v_a_5248_);
lean_dec(v_a_5247_);
lean_dec_ref(v_a_5246_);
return v_res_5251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object* v_x_5252_, lean_object* v_a_5253_, lean_object* v_a_5254_, lean_object* v_a_5255_, lean_object* v_a_5256_){
_start:
{
switch(lean_obj_tag(v_x_5252_))
{
case 1:
{
lean_object* v_fvarId_5258_; lean_object* v___x_5259_; 
v_fvarId_5258_ = lean_ctor_get(v_x_5252_, 0);
lean_inc(v_fvarId_5258_);
lean_dec_ref_known(v_x_5252_, 1);
v___x_5259_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_5258_, v_a_5253_, v_a_5255_, v_a_5256_);
if (lean_obj_tag(v___x_5259_) == 0)
{
lean_object* v_a_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; 
v_a_5260_ = lean_ctor_get(v___x_5259_, 0);
lean_inc(v_a_5260_);
lean_dec_ref_known(v___x_5259_, 1);
v___x_5261_ = lean_unsigned_to_nat(0u);
v___x_5262_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_5260_, v___x_5261_);
lean_dec(v_a_5260_);
return v___x_5262_;
}
else
{
lean_object* v_a_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5270_; 
v_a_5263_ = lean_ctor_get(v___x_5259_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v___x_5259_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5265_ = v___x_5259_;
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
else
{
lean_inc(v_a_5263_);
lean_dec(v___x_5259_);
v___x_5265_ = lean_box(0);
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
v_resetjp_5264_:
{
lean_object* v___x_5268_; 
if (v_isShared_5266_ == 0)
{
v___x_5268_ = v___x_5265_;
goto v_reusejp_5267_;
}
else
{
lean_object* v_reuseFailAlloc_5269_; 
v_reuseFailAlloc_5269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5269_, 0, v_a_5263_);
v___x_5268_ = v_reuseFailAlloc_5269_;
goto v_reusejp_5267_;
}
v_reusejp_5267_:
{
return v___x_5268_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_5271_; lean_object* v___x_5272_; 
v_mvarId_5271_ = lean_ctor_get(v_x_5252_, 0);
lean_inc(v_mvarId_5271_);
lean_dec_ref_known(v_x_5252_, 1);
v___x_5272_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_5271_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_);
if (lean_obj_tag(v___x_5272_) == 0)
{
lean_object* v_a_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; 
v_a_5273_ = lean_ctor_get(v___x_5272_, 0);
lean_inc(v_a_5273_);
lean_dec_ref_known(v___x_5272_, 1);
v___x_5274_ = lean_unsigned_to_nat(0u);
v___x_5275_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_5273_, v___x_5274_);
lean_dec(v_a_5273_);
return v___x_5275_;
}
else
{
lean_object* v_a_5276_; lean_object* v___x_5278_; uint8_t v_isShared_5279_; uint8_t v_isSharedCheck_5283_; 
v_a_5276_ = lean_ctor_get(v___x_5272_, 0);
v_isSharedCheck_5283_ = !lean_is_exclusive(v___x_5272_);
if (v_isSharedCheck_5283_ == 0)
{
v___x_5278_ = v___x_5272_;
v_isShared_5279_ = v_isSharedCheck_5283_;
goto v_resetjp_5277_;
}
else
{
lean_inc(v_a_5276_);
lean_dec(v___x_5272_);
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
case 3:
{
uint8_t v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; 
lean_dec_ref_known(v_x_5252_, 1);
v___x_5284_ = 1;
v___x_5285_ = lean_box(v___x_5284_);
v___x_5286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5286_, 0, v___x_5285_);
return v___x_5286_;
}
case 4:
{
lean_object* v_declName_5287_; lean_object* v_us_5288_; lean_object* v___x_5289_; 
v_declName_5287_ = lean_ctor_get(v_x_5252_, 0);
lean_inc(v_declName_5287_);
v_us_5288_ = lean_ctor_get(v_x_5252_, 1);
lean_inc(v_us_5288_);
lean_dec_ref_known(v_x_5252_, 2);
v___x_5289_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstTypeLazy(v_declName_5287_, v_us_5288_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_);
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_object* v_a_5290_; lean_object* v_fst_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; 
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
lean_inc(v_a_5290_);
lean_dec_ref_known(v___x_5289_, 1);
v_fst_5291_ = lean_ctor_get(v_a_5290_, 0);
lean_inc(v_fst_5291_);
lean_dec(v_a_5290_);
v___x_5292_ = lean_unsigned_to_nat(0u);
v___x_5293_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_fst_5291_, v___x_5292_);
lean_dec(v_fst_5291_);
return v___x_5293_;
}
else
{
lean_object* v_a_5294_; lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5301_; 
v_a_5294_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5301_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5301_ == 0)
{
v___x_5296_ = v___x_5289_;
v_isShared_5297_ = v_isSharedCheck_5301_;
goto v_resetjp_5295_;
}
else
{
lean_inc(v_a_5294_);
lean_dec(v___x_5289_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5301_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
lean_object* v___x_5299_; 
if (v_isShared_5297_ == 0)
{
v___x_5299_ = v___x_5296_;
goto v_reusejp_5298_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v_a_5294_);
v___x_5299_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5298_;
}
v_reusejp_5298_:
{
return v___x_5299_;
}
}
}
}
case 5:
{
lean_object* v_fn_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v_fn_5302_ = lean_ctor_get(v_x_5252_, 0);
lean_inc_ref(v_fn_5302_);
lean_dec_ref_known(v_x_5252_, 2);
v___x_5303_ = lean_unsigned_to_nat(1u);
v___x_5304_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_fn_5302_, v___x_5303_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_);
return v___x_5304_;
}
case 6:
{
uint8_t v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; 
lean_dec_ref_known(v_x_5252_, 3);
v___x_5305_ = 0;
v___x_5306_ = lean_box(v___x_5305_);
v___x_5307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5306_);
return v___x_5307_;
}
case 7:
{
uint8_t v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; 
lean_dec_ref_known(v_x_5252_, 3);
v___x_5308_ = 1;
v___x_5309_ = lean_box(v___x_5308_);
v___x_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5310_, 0, v___x_5309_);
return v___x_5310_;
}
case 8:
{
lean_object* v_body_5311_; 
v_body_5311_ = lean_ctor_get(v_x_5252_, 3);
lean_inc_ref(v_body_5311_);
lean_dec_ref_known(v_x_5252_, 4);
v_x_5252_ = v_body_5311_;
goto _start;
}
case 9:
{
uint8_t v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; 
lean_dec_ref_known(v_x_5252_, 1);
v___x_5313_ = 0;
v___x_5314_ = lean_box(v___x_5313_);
v___x_5315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5315_, 0, v___x_5314_);
return v___x_5315_;
}
case 10:
{
lean_object* v_expr_5316_; 
v_expr_5316_ = lean_ctor_get(v_x_5252_, 1);
lean_inc_ref(v_expr_5316_);
lean_dec_ref_known(v_x_5252_, 2);
v_x_5252_ = v_expr_5316_;
goto _start;
}
default: 
{
uint8_t v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; 
lean_dec_ref(v_x_5252_);
v___x_5318_ = 2;
v___x_5319_ = lean_box(v___x_5318_);
v___x_5320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5320_, 0, v___x_5319_);
return v___x_5320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object* v_x_5321_, lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_, lean_object* v_a_5325_, lean_object* v_a_5326_){
_start:
{
lean_object* v_res_5327_; 
v_res_5327_ = l_Lean_Meta_isTypeQuick(v_x_5321_, v_a_5322_, v_a_5323_, v_a_5324_, v_a_5325_);
lean_dec(v_a_5325_);
lean_dec_ref(v_a_5324_);
lean_dec(v_a_5323_);
lean_dec_ref(v_a_5322_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object* v_e_5328_, lean_object* v_a_5329_, lean_object* v_a_5330_, lean_object* v_a_5331_, lean_object* v_a_5332_){
_start:
{
lean_object* v___x_5334_; 
lean_inc_ref(v_e_5328_);
v___x_5334_ = l_Lean_Meta_isTypeQuick(v_e_5328_, v_a_5329_, v_a_5330_, v_a_5331_, v_a_5332_);
if (lean_obj_tag(v___x_5334_) == 0)
{
lean_object* v_a_5335_; lean_object* v___x_5337_; uint8_t v_isShared_5338_; uint8_t v_isSharedCheck_5384_; 
v_a_5335_ = lean_ctor_get(v___x_5334_, 0);
v_isSharedCheck_5384_ = !lean_is_exclusive(v___x_5334_);
if (v_isSharedCheck_5384_ == 0)
{
v___x_5337_ = v___x_5334_;
v_isShared_5338_ = v_isSharedCheck_5384_;
goto v_resetjp_5336_;
}
else
{
lean_inc(v_a_5335_);
lean_dec(v___x_5334_);
v___x_5337_ = lean_box(0);
v_isShared_5338_ = v_isSharedCheck_5384_;
goto v_resetjp_5336_;
}
v_resetjp_5336_:
{
uint8_t v___x_5339_; 
v___x_5339_ = lean_unbox(v_a_5335_);
lean_dec(v_a_5335_);
switch(v___x_5339_)
{
case 0:
{
uint8_t v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5343_; 
lean_dec_ref(v_e_5328_);
v___x_5340_ = 0;
v___x_5341_ = lean_box(v___x_5340_);
if (v_isShared_5338_ == 0)
{
lean_ctor_set(v___x_5337_, 0, v___x_5341_);
v___x_5343_ = v___x_5337_;
goto v_reusejp_5342_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v___x_5341_);
v___x_5343_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5342_;
}
v_reusejp_5342_:
{
return v___x_5343_;
}
}
case 1:
{
uint8_t v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5348_; 
lean_dec_ref(v_e_5328_);
v___x_5345_ = 1;
v___x_5346_ = lean_box(v___x_5345_);
if (v_isShared_5338_ == 0)
{
lean_ctor_set(v___x_5337_, 0, v___x_5346_);
v___x_5348_ = v___x_5337_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v___x_5346_);
v___x_5348_ = v_reuseFailAlloc_5349_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
return v___x_5348_;
}
}
default: 
{
lean_object* v___x_5350_; 
lean_del_object(v___x_5337_);
lean_inc(v_a_5332_);
lean_inc_ref(v_a_5331_);
lean_inc(v_a_5330_);
lean_inc_ref(v_a_5329_);
v___x_5350_ = lean_infer_type(v_e_5328_, v_a_5329_, v_a_5330_, v_a_5331_, v_a_5332_);
if (lean_obj_tag(v___x_5350_) == 0)
{
lean_object* v_a_5351_; lean_object* v___x_5352_; 
v_a_5351_ = lean_ctor_get(v___x_5350_, 0);
lean_inc(v_a_5351_);
lean_dec_ref_known(v___x_5350_, 1);
v___x_5352_ = l_Lean_Meta_whnfD(v_a_5351_, v_a_5329_, v_a_5330_, v_a_5331_, v_a_5332_);
if (lean_obj_tag(v___x_5352_) == 0)
{
lean_object* v_a_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5367_; 
v_a_5353_ = lean_ctor_get(v___x_5352_, 0);
v_isSharedCheck_5367_ = !lean_is_exclusive(v___x_5352_);
if (v_isSharedCheck_5367_ == 0)
{
v___x_5355_ = v___x_5352_;
v_isShared_5356_ = v_isSharedCheck_5367_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_a_5353_);
lean_dec(v___x_5352_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5367_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
if (lean_obj_tag(v_a_5353_) == 3)
{
uint8_t v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5360_; 
lean_dec_ref_known(v_a_5353_, 1);
v___x_5357_ = 1;
v___x_5358_ = lean_box(v___x_5357_);
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 0, v___x_5358_);
v___x_5360_ = v___x_5355_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v___x_5358_);
v___x_5360_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
return v___x_5360_;
}
}
else
{
uint8_t v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5365_; 
lean_dec(v_a_5353_);
v___x_5362_ = 0;
v___x_5363_ = lean_box(v___x_5362_);
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 0, v___x_5363_);
v___x_5365_ = v___x_5355_;
goto v_reusejp_5364_;
}
else
{
lean_object* v_reuseFailAlloc_5366_; 
v_reuseFailAlloc_5366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5366_, 0, v___x_5363_);
v___x_5365_ = v_reuseFailAlloc_5366_;
goto v_reusejp_5364_;
}
v_reusejp_5364_:
{
return v___x_5365_;
}
}
}
}
else
{
lean_object* v_a_5368_; lean_object* v___x_5370_; uint8_t v_isShared_5371_; uint8_t v_isSharedCheck_5375_; 
v_a_5368_ = lean_ctor_get(v___x_5352_, 0);
v_isSharedCheck_5375_ = !lean_is_exclusive(v___x_5352_);
if (v_isSharedCheck_5375_ == 0)
{
v___x_5370_ = v___x_5352_;
v_isShared_5371_ = v_isSharedCheck_5375_;
goto v_resetjp_5369_;
}
else
{
lean_inc(v_a_5368_);
lean_dec(v___x_5352_);
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
lean_object* v_a_5376_; lean_object* v___x_5378_; uint8_t v_isShared_5379_; uint8_t v_isSharedCheck_5383_; 
v_a_5376_ = lean_ctor_get(v___x_5350_, 0);
v_isSharedCheck_5383_ = !lean_is_exclusive(v___x_5350_);
if (v_isSharedCheck_5383_ == 0)
{
v___x_5378_ = v___x_5350_;
v_isShared_5379_ = v_isSharedCheck_5383_;
goto v_resetjp_5377_;
}
else
{
lean_inc(v_a_5376_);
lean_dec(v___x_5350_);
v___x_5378_ = lean_box(0);
v_isShared_5379_ = v_isSharedCheck_5383_;
goto v_resetjp_5377_;
}
v_resetjp_5377_:
{
lean_object* v___x_5381_; 
if (v_isShared_5379_ == 0)
{
v___x_5381_ = v___x_5378_;
goto v_reusejp_5380_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v_a_5376_);
v___x_5381_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5380_;
}
v_reusejp_5380_:
{
return v___x_5381_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5385_; lean_object* v___x_5387_; uint8_t v_isShared_5388_; uint8_t v_isSharedCheck_5392_; 
lean_dec_ref(v_e_5328_);
v_a_5385_ = lean_ctor_get(v___x_5334_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v___x_5334_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5387_ = v___x_5334_;
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
else
{
lean_inc(v_a_5385_);
lean_dec(v___x_5334_);
v___x_5387_ = lean_box(0);
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
v_resetjp_5386_:
{
lean_object* v___x_5390_; 
if (v_isShared_5388_ == 0)
{
v___x_5390_ = v___x_5387_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_a_5385_);
v___x_5390_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
return v___x_5390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object* v_e_5393_, lean_object* v_a_5394_, lean_object* v_a_5395_, lean_object* v_a_5396_, lean_object* v_a_5397_, lean_object* v_a_5398_){
_start:
{
lean_object* v_res_5399_; 
v_res_5399_ = l_Lean_Meta_isType(v_e_5393_, v_a_5394_, v_a_5395_, v_a_5396_, v_a_5397_);
lean_dec(v_a_5397_);
lean_dec_ref(v_a_5396_);
lean_dec(v_a_5395_);
lean_dec_ref(v_a_5394_);
return v_res_5399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object* v_x_5400_){
_start:
{
switch(lean_obj_tag(v_x_5400_))
{
case 7:
{
lean_object* v_body_5401_; 
v_body_5401_ = lean_ctor_get(v_x_5400_, 2);
v_x_5400_ = v_body_5401_;
goto _start;
}
case 3:
{
lean_object* v_u_5403_; lean_object* v___x_5404_; 
v_u_5403_ = lean_ctor_get(v_x_5400_, 0);
lean_inc(v_u_5403_);
v___x_5404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5404_, 0, v_u_5403_);
return v___x_5404_;
}
default: 
{
lean_object* v___x_5405_; 
v___x_5405_ = lean_box(0);
return v___x_5405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object* v_x_5406_){
_start:
{
lean_object* v_res_5407_; 
v_res_5407_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_x_5406_);
lean_dec_ref(v_x_5406_);
return v_res_5407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object* v_xs_5408_, lean_object* v_body_5409_, lean_object* v_x_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_){
_start:
{
lean_object* v_res_5416_; 
v_res_5416_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(v_xs_5408_, v_body_5409_, v_x_5410_, v___y_5411_, v___y_5412_, v___y_5413_, v___y_5414_);
lean_dec(v___y_5414_);
lean_dec_ref(v___y_5413_);
lean_dec(v___y_5412_);
lean_dec_ref(v___y_5411_);
return v_res_5416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object* v_type_5419_, lean_object* v_xs_5420_, lean_object* v_a_5421_, lean_object* v_a_5422_, lean_object* v_a_5423_, lean_object* v_a_5424_){
_start:
{
lean_object* v_l_5427_; 
switch(lean_obj_tag(v_type_5419_))
{
case 3:
{
lean_object* v_u_5430_; 
lean_dec_ref(v_xs_5420_);
v_u_5430_ = lean_ctor_get(v_type_5419_, 0);
lean_inc(v_u_5430_);
lean_dec_ref_known(v_type_5419_, 1);
v_l_5427_ = v_u_5430_;
goto v___jp_5426_;
}
case 7:
{
lean_object* v_binderName_5431_; lean_object* v_binderType_5432_; lean_object* v_body_5433_; uint8_t v_binderInfo_5434_; lean_object* v___f_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; 
v_binderName_5431_ = lean_ctor_get(v_type_5419_, 0);
lean_inc(v_binderName_5431_);
v_binderType_5432_ = lean_ctor_get(v_type_5419_, 1);
lean_inc_ref(v_binderType_5432_);
v_body_5433_ = lean_ctor_get(v_type_5419_, 2);
lean_inc_ref(v_body_5433_);
v_binderInfo_5434_ = lean_ctor_get_uint8(v_type_5419_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_5419_, 3);
lean_inc_ref(v_xs_5420_);
v___f_5435_ = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_5435_, 0, v_xs_5420_);
lean_closure_set(v___f_5435_, 1, v_body_5433_);
v___x_5436_ = lean_expr_instantiate_rev(v_binderType_5432_, v_xs_5420_);
lean_dec_ref(v_xs_5420_);
lean_dec_ref(v_binderType_5432_);
v___x_5437_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_5431_, v_binderInfo_5434_, v___x_5436_, v___f_5435_, v_a_5421_, v_a_5422_, v_a_5423_, v_a_5424_);
return v___x_5437_;
}
default: 
{
lean_object* v___x_5438_; lean_object* v___x_5439_; 
v___x_5438_ = lean_expr_instantiate_rev(v_type_5419_, v_xs_5420_);
lean_dec_ref(v_xs_5420_);
lean_dec_ref(v_type_5419_);
v___x_5439_ = l_Lean_Meta_whnfD(v___x_5438_, v_a_5421_, v_a_5422_, v_a_5423_, v_a_5424_);
if (lean_obj_tag(v___x_5439_) == 0)
{
lean_object* v_a_5440_; lean_object* v___x_5442_; uint8_t v_isShared_5443_; uint8_t v_isSharedCheck_5451_; 
v_a_5440_ = lean_ctor_get(v___x_5439_, 0);
v_isSharedCheck_5451_ = !lean_is_exclusive(v___x_5439_);
if (v_isSharedCheck_5451_ == 0)
{
v___x_5442_ = v___x_5439_;
v_isShared_5443_ = v_isSharedCheck_5451_;
goto v_resetjp_5441_;
}
else
{
lean_inc(v_a_5440_);
lean_dec(v___x_5439_);
v___x_5442_ = lean_box(0);
v_isShared_5443_ = v_isSharedCheck_5451_;
goto v_resetjp_5441_;
}
v_resetjp_5441_:
{
switch(lean_obj_tag(v_a_5440_))
{
case 3:
{
lean_object* v_u_5444_; 
lean_del_object(v___x_5442_);
v_u_5444_ = lean_ctor_get(v_a_5440_, 0);
lean_inc(v_u_5444_);
lean_dec_ref_known(v_a_5440_, 1);
v_l_5427_ = v_u_5444_;
goto v___jp_5426_;
}
case 7:
{
lean_object* v___x_5445_; 
lean_del_object(v___x_5442_);
v___x_5445_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v_type_5419_ = v_a_5440_;
v_xs_5420_ = v___x_5445_;
goto _start;
}
default: 
{
lean_object* v___x_5447_; lean_object* v___x_5449_; 
lean_dec(v_a_5440_);
v___x_5447_ = lean_box(0);
if (v_isShared_5443_ == 0)
{
lean_ctor_set(v___x_5442_, 0, v___x_5447_);
v___x_5449_ = v___x_5442_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v___x_5447_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
return v___x_5449_;
}
}
}
}
}
else
{
lean_object* v_a_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5459_; 
v_a_5452_ = lean_ctor_get(v___x_5439_, 0);
v_isSharedCheck_5459_ = !lean_is_exclusive(v___x_5439_);
if (v_isSharedCheck_5459_ == 0)
{
v___x_5454_ = v___x_5439_;
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_a_5452_);
lean_dec(v___x_5439_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v___x_5457_; 
if (v_isShared_5455_ == 0)
{
v___x_5457_ = v___x_5454_;
goto v_reusejp_5456_;
}
else
{
lean_object* v_reuseFailAlloc_5458_; 
v_reuseFailAlloc_5458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5458_, 0, v_a_5452_);
v___x_5457_ = v_reuseFailAlloc_5458_;
goto v_reusejp_5456_;
}
v_reusejp_5456_:
{
return v___x_5457_;
}
}
}
}
}
v___jp_5426_:
{
lean_object* v___x_5428_; lean_object* v___x_5429_; 
v___x_5428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5428_, 0, v_l_5427_);
v___x_5429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5429_, 0, v___x_5428_);
return v___x_5429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object* v_xs_5460_, lean_object* v_body_5461_, lean_object* v_x_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v___x_5468_; lean_object* v___x_5469_; 
v___x_5468_ = lean_array_push(v_xs_5460_, v_x_5462_);
v___x_5469_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_body_5461_, v___x_5468_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_);
return v___x_5469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object* v_type_5470_, lean_object* v_xs_5471_, lean_object* v_a_5472_, lean_object* v_a_5473_, lean_object* v_a_5474_, lean_object* v_a_5475_, lean_object* v_a_5476_){
_start:
{
lean_object* v_res_5477_; 
v_res_5477_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_5470_, v_xs_5471_, v_a_5472_, v_a_5473_, v_a_5474_, v_a_5475_);
lean_dec(v_a_5475_);
lean_dec_ref(v_a_5474_);
lean_dec(v_a_5473_);
lean_dec_ref(v_a_5472_);
return v_res_5477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object* v_a_5478_, lean_object* v_cache_5479_, lean_object* v_a_x3f_5480_){
_start:
{
lean_object* v___x_5482_; lean_object* v_mctx_5483_; lean_object* v_zetaDeltaFVarIds_5484_; lean_object* v_postponed_5485_; lean_object* v_diag_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5496_; 
v___x_5482_ = lean_st_ref_take(v_a_5478_);
v_mctx_5483_ = lean_ctor_get(v___x_5482_, 0);
v_zetaDeltaFVarIds_5484_ = lean_ctor_get(v___x_5482_, 2);
v_postponed_5485_ = lean_ctor_get(v___x_5482_, 3);
v_diag_5486_ = lean_ctor_get(v___x_5482_, 4);
v_isSharedCheck_5496_ = !lean_is_exclusive(v___x_5482_);
if (v_isSharedCheck_5496_ == 0)
{
lean_object* v_unused_5497_; 
v_unused_5497_ = lean_ctor_get(v___x_5482_, 1);
lean_dec(v_unused_5497_);
v___x_5488_ = v___x_5482_;
v_isShared_5489_ = v_isSharedCheck_5496_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_diag_5486_);
lean_inc(v_postponed_5485_);
lean_inc(v_zetaDeltaFVarIds_5484_);
lean_inc(v_mctx_5483_);
lean_dec(v___x_5482_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5496_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
lean_object* v___x_5490_; lean_object* v___x_5492_; 
v___x_5490_ = lean_box(0);
if (v_isShared_5489_ == 0)
{
lean_ctor_set(v___x_5488_, 1, v_cache_5479_);
v___x_5492_ = v___x_5488_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5495_; 
v_reuseFailAlloc_5495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5495_, 0, v_mctx_5483_);
lean_ctor_set(v_reuseFailAlloc_5495_, 1, v_cache_5479_);
lean_ctor_set(v_reuseFailAlloc_5495_, 2, v_zetaDeltaFVarIds_5484_);
lean_ctor_set(v_reuseFailAlloc_5495_, 3, v_postponed_5485_);
lean_ctor_set(v_reuseFailAlloc_5495_, 4, v_diag_5486_);
v___x_5492_ = v_reuseFailAlloc_5495_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
lean_object* v___x_5493_; lean_object* v___x_5494_; 
v___x_5493_ = lean_st_ref_put(v_a_5478_, v___x_5492_);
v___x_5494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5494_, 0, v___x_5490_);
return v___x_5494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object* v_a_5498_, lean_object* v_cache_5499_, lean_object* v_a_x3f_5500_, lean_object* v___y_5501_){
_start:
{
lean_object* v_res_5502_; 
v_res_5502_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_5498_, v_cache_5499_, v_a_x3f_5500_);
lean_dec(v_a_x3f_5500_);
lean_dec(v_a_5498_);
return v_res_5502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object* v_type_5503_, lean_object* v_a_5504_, lean_object* v_a_5505_, lean_object* v_a_5506_, lean_object* v_a_5507_){
_start:
{
lean_object* v___x_5509_; 
v___x_5509_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_type_5503_);
if (lean_obj_tag(v___x_5509_) == 0)
{
lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v_cache_5512_; lean_object* v___x_5513_; 
v___x_5510_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v___x_5511_ = lean_st_ref_get(v_a_5505_);
v_cache_5512_ = lean_ctor_get(v___x_5511_, 1);
lean_inc_ref(v_cache_5512_);
lean_dec(v___x_5511_);
v___x_5513_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_5503_, v___x_5510_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_);
if (lean_obj_tag(v___x_5513_) == 0)
{
lean_object* v_a_5514_; lean_object* v___x_5516_; uint8_t v_isShared_5517_; uint8_t v_isSharedCheck_5530_; 
v_a_5514_ = lean_ctor_get(v___x_5513_, 0);
v_isSharedCheck_5530_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5530_ == 0)
{
v___x_5516_ = v___x_5513_;
v_isShared_5517_ = v_isSharedCheck_5530_;
goto v_resetjp_5515_;
}
else
{
lean_inc(v_a_5514_);
lean_dec(v___x_5513_);
v___x_5516_ = lean_box(0);
v_isShared_5517_ = v_isSharedCheck_5530_;
goto v_resetjp_5515_;
}
v_resetjp_5515_:
{
lean_object* v___x_5519_; 
lean_inc(v_a_5514_);
if (v_isShared_5517_ == 0)
{
lean_ctor_set_tag(v___x_5516_, 1);
v___x_5519_ = v___x_5516_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5529_; 
v_reuseFailAlloc_5529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5529_, 0, v_a_5514_);
v___x_5519_ = v_reuseFailAlloc_5529_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
lean_object* v___x_5520_; lean_object* v___x_5522_; uint8_t v_isShared_5523_; uint8_t v_isSharedCheck_5527_; 
v___x_5520_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_5505_, v_cache_5512_, v___x_5519_);
lean_dec_ref(v___x_5519_);
v_isSharedCheck_5527_ = !lean_is_exclusive(v___x_5520_);
if (v_isSharedCheck_5527_ == 0)
{
lean_object* v_unused_5528_; 
v_unused_5528_ = lean_ctor_get(v___x_5520_, 0);
lean_dec(v_unused_5528_);
v___x_5522_ = v___x_5520_;
v_isShared_5523_ = v_isSharedCheck_5527_;
goto v_resetjp_5521_;
}
else
{
lean_dec(v___x_5520_);
v___x_5522_ = lean_box(0);
v_isShared_5523_ = v_isSharedCheck_5527_;
goto v_resetjp_5521_;
}
v_resetjp_5521_:
{
lean_object* v___x_5525_; 
if (v_isShared_5523_ == 0)
{
lean_ctor_set(v___x_5522_, 0, v_a_5514_);
v___x_5525_ = v___x_5522_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v_a_5514_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
return v___x_5525_;
}
}
}
}
}
else
{
lean_object* v_a_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5540_; 
v_a_5531_ = lean_ctor_get(v___x_5513_, 0);
lean_inc(v_a_5531_);
lean_dec_ref_known(v___x_5513_, 1);
v___x_5532_ = lean_box(0);
v___x_5533_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_5505_, v_cache_5512_, v___x_5532_);
v_isSharedCheck_5540_ = !lean_is_exclusive(v___x_5533_);
if (v_isSharedCheck_5540_ == 0)
{
lean_object* v_unused_5541_; 
v_unused_5541_ = lean_ctor_get(v___x_5533_, 0);
lean_dec(v_unused_5541_);
v___x_5535_ = v___x_5533_;
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
else
{
lean_dec(v___x_5533_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
lean_ctor_set_tag(v___x_5535_, 1);
lean_ctor_set(v___x_5535_, 0, v_a_5531_);
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_a_5531_);
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
else
{
lean_object* v___x_5542_; 
lean_dec_ref(v_type_5503_);
v___x_5542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5542_, 0, v___x_5509_);
return v___x_5542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object* v_type_5543_, lean_object* v_a_5544_, lean_object* v_a_5545_, lean_object* v_a_5546_, lean_object* v_a_5547_, lean_object* v_a_5548_){
_start:
{
lean_object* v_res_5549_; 
v_res_5549_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5543_, v_a_5544_, v_a_5545_, v_a_5546_, v_a_5547_);
lean_dec(v_a_5547_);
lean_dec_ref(v_a_5546_);
lean_dec(v_a_5545_);
lean_dec_ref(v_a_5544_);
return v_res_5549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object* v_type_5550_, lean_object* v_a_5551_, lean_object* v_a_5552_, lean_object* v_a_5553_, lean_object* v_a_5554_){
_start:
{
lean_object* v___x_5556_; 
v___x_5556_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5550_, v_a_5551_, v_a_5552_, v_a_5553_, v_a_5554_);
if (lean_obj_tag(v___x_5556_) == 0)
{
lean_object* v_a_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5571_; 
v_a_5557_ = lean_ctor_get(v___x_5556_, 0);
v_isSharedCheck_5571_ = !lean_is_exclusive(v___x_5556_);
if (v_isSharedCheck_5571_ == 0)
{
v___x_5559_ = v___x_5556_;
v_isShared_5560_ = v_isSharedCheck_5571_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_a_5557_);
lean_dec(v___x_5556_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5571_;
goto v_resetjp_5558_;
}
v_resetjp_5558_:
{
if (lean_obj_tag(v_a_5557_) == 0)
{
uint8_t v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5564_; 
v___x_5561_ = 0;
v___x_5562_ = lean_box(v___x_5561_);
if (v_isShared_5560_ == 0)
{
lean_ctor_set(v___x_5559_, 0, v___x_5562_);
v___x_5564_ = v___x_5559_;
goto v_reusejp_5563_;
}
else
{
lean_object* v_reuseFailAlloc_5565_; 
v_reuseFailAlloc_5565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5565_, 0, v___x_5562_);
v___x_5564_ = v_reuseFailAlloc_5565_;
goto v_reusejp_5563_;
}
v_reusejp_5563_:
{
return v___x_5564_;
}
}
else
{
uint8_t v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5569_; 
lean_dec_ref_known(v_a_5557_, 1);
v___x_5566_ = 1;
v___x_5567_ = lean_box(v___x_5566_);
if (v_isShared_5560_ == 0)
{
lean_ctor_set(v___x_5559_, 0, v___x_5567_);
v___x_5569_ = v___x_5559_;
goto v_reusejp_5568_;
}
else
{
lean_object* v_reuseFailAlloc_5570_; 
v_reuseFailAlloc_5570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5570_, 0, v___x_5567_);
v___x_5569_ = v_reuseFailAlloc_5570_;
goto v_reusejp_5568_;
}
v_reusejp_5568_:
{
return v___x_5569_;
}
}
}
}
else
{
lean_object* v_a_5572_; lean_object* v___x_5574_; uint8_t v_isShared_5575_; uint8_t v_isSharedCheck_5579_; 
v_a_5572_ = lean_ctor_get(v___x_5556_, 0);
v_isSharedCheck_5579_ = !lean_is_exclusive(v___x_5556_);
if (v_isSharedCheck_5579_ == 0)
{
v___x_5574_ = v___x_5556_;
v_isShared_5575_ = v_isSharedCheck_5579_;
goto v_resetjp_5573_;
}
else
{
lean_inc(v_a_5572_);
lean_dec(v___x_5556_);
v___x_5574_ = lean_box(0);
v_isShared_5575_ = v_isSharedCheck_5579_;
goto v_resetjp_5573_;
}
v_resetjp_5573_:
{
lean_object* v___x_5577_; 
if (v_isShared_5575_ == 0)
{
v___x_5577_ = v___x_5574_;
goto v_reusejp_5576_;
}
else
{
lean_object* v_reuseFailAlloc_5578_; 
v_reuseFailAlloc_5578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5578_, 0, v_a_5572_);
v___x_5577_ = v_reuseFailAlloc_5578_;
goto v_reusejp_5576_;
}
v_reusejp_5576_:
{
return v___x_5577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object* v_type_5580_, lean_object* v_a_5581_, lean_object* v_a_5582_, lean_object* v_a_5583_, lean_object* v_a_5584_, lean_object* v_a_5585_){
_start:
{
lean_object* v_res_5586_; 
v_res_5586_ = l_Lean_Meta_isTypeFormerType(v_type_5580_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_);
lean_dec(v_a_5584_);
lean_dec_ref(v_a_5583_);
lean_dec(v_a_5582_);
lean_dec_ref(v_a_5581_);
return v_res_5586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object* v_type_5587_, lean_object* v_a_5588_, lean_object* v_a_5589_, lean_object* v_a_5590_, lean_object* v_a_5591_){
_start:
{
lean_object* v___x_5593_; 
v___x_5593_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5587_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5593_) == 0)
{
lean_object* v_a_5594_; lean_object* v___x_5596_; uint8_t v_isShared_5597_; uint8_t v_isSharedCheck_5609_; 
v_a_5594_ = lean_ctor_get(v___x_5593_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v___x_5593_);
if (v_isSharedCheck_5609_ == 0)
{
v___x_5596_ = v___x_5593_;
v_isShared_5597_ = v_isSharedCheck_5609_;
goto v_resetjp_5595_;
}
else
{
lean_inc(v_a_5594_);
lean_dec(v___x_5593_);
v___x_5596_ = lean_box(0);
v_isShared_5597_ = v_isSharedCheck_5609_;
goto v_resetjp_5595_;
}
v_resetjp_5595_:
{
if (lean_obj_tag(v_a_5594_) == 1)
{
lean_object* v_val_5598_; uint8_t v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5602_; 
v_val_5598_ = lean_ctor_get(v_a_5594_, 0);
lean_inc(v_val_5598_);
lean_dec_ref_known(v_a_5594_, 1);
v___x_5599_ = l_Lean_Level_isAlwaysZero(v_val_5598_);
lean_dec(v_val_5598_);
v___x_5600_ = lean_box(v___x_5599_);
if (v_isShared_5597_ == 0)
{
lean_ctor_set(v___x_5596_, 0, v___x_5600_);
v___x_5602_ = v___x_5596_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v___x_5600_);
v___x_5602_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
return v___x_5602_;
}
}
else
{
uint8_t v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5607_; 
lean_dec(v_a_5594_);
v___x_5604_ = 0;
v___x_5605_ = lean_box(v___x_5604_);
if (v_isShared_5597_ == 0)
{
lean_ctor_set(v___x_5596_, 0, v___x_5605_);
v___x_5607_ = v___x_5596_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v___x_5605_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
return v___x_5607_;
}
}
}
}
else
{
lean_object* v_a_5610_; lean_object* v___x_5612_; uint8_t v_isShared_5613_; uint8_t v_isSharedCheck_5617_; 
v_a_5610_ = lean_ctor_get(v___x_5593_, 0);
v_isSharedCheck_5617_ = !lean_is_exclusive(v___x_5593_);
if (v_isSharedCheck_5617_ == 0)
{
v___x_5612_ = v___x_5593_;
v_isShared_5613_ = v_isSharedCheck_5617_;
goto v_resetjp_5611_;
}
else
{
lean_inc(v_a_5610_);
lean_dec(v___x_5593_);
v___x_5612_ = lean_box(0);
v_isShared_5613_ = v_isSharedCheck_5617_;
goto v_resetjp_5611_;
}
v_resetjp_5611_:
{
lean_object* v___x_5615_; 
if (v_isShared_5613_ == 0)
{
v___x_5615_ = v___x_5612_;
goto v_reusejp_5614_;
}
else
{
lean_object* v_reuseFailAlloc_5616_; 
v_reuseFailAlloc_5616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5616_, 0, v_a_5610_);
v___x_5615_ = v_reuseFailAlloc_5616_;
goto v_reusejp_5614_;
}
v_reusejp_5614_:
{
return v___x_5615_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object* v_type_5618_, lean_object* v_a_5619_, lean_object* v_a_5620_, lean_object* v_a_5621_, lean_object* v_a_5622_, lean_object* v_a_5623_){
_start:
{
lean_object* v_res_5624_; 
v_res_5624_ = l_Lean_Meta_isPropFormerType(v_type_5618_, v_a_5619_, v_a_5620_, v_a_5621_, v_a_5622_);
lean_dec(v_a_5622_);
lean_dec_ref(v_a_5621_);
lean_dec(v_a_5620_);
lean_dec_ref(v_a_5619_);
return v_res_5624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object* v_e_5625_, lean_object* v_a_5626_, lean_object* v_a_5627_, lean_object* v_a_5628_, lean_object* v_a_5629_){
_start:
{
lean_object* v___x_5631_; 
lean_inc(v_a_5629_);
lean_inc_ref(v_a_5628_);
lean_inc(v_a_5627_);
lean_inc_ref(v_a_5626_);
v___x_5631_ = lean_infer_type(v_e_5625_, v_a_5626_, v_a_5627_, v_a_5628_, v_a_5629_);
if (lean_obj_tag(v___x_5631_) == 0)
{
lean_object* v_a_5632_; lean_object* v___x_5633_; 
v_a_5632_ = lean_ctor_get(v___x_5631_, 0);
lean_inc(v_a_5632_);
lean_dec_ref_known(v___x_5631_, 1);
v___x_5633_ = l_Lean_Meta_isTypeFormerType(v_a_5632_, v_a_5626_, v_a_5627_, v_a_5628_, v_a_5629_);
return v___x_5633_;
}
else
{
lean_object* v_a_5634_; lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5641_; 
v_a_5634_ = lean_ctor_get(v___x_5631_, 0);
v_isSharedCheck_5641_ = !lean_is_exclusive(v___x_5631_);
if (v_isSharedCheck_5641_ == 0)
{
v___x_5636_ = v___x_5631_;
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
else
{
lean_inc(v_a_5634_);
lean_dec(v___x_5631_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5639_; 
if (v_isShared_5637_ == 0)
{
v___x_5639_ = v___x_5636_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_a_5634_);
v___x_5639_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
return v___x_5639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object* v_e_5642_, lean_object* v_a_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_, lean_object* v_a_5646_, lean_object* v_a_5647_){
_start:
{
lean_object* v_res_5648_; 
v_res_5648_ = l_Lean_Meta_isTypeFormer(v_e_5642_, v_a_5643_, v_a_5644_, v_a_5645_, v_a_5646_);
lean_dec(v_a_5646_);
lean_dec_ref(v_a_5645_);
lean_dec(v_a_5644_);
lean_dec_ref(v_a_5643_);
return v_res_5648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object* v_type_5649_, lean_object* v_maxFVars_x3f_5650_, lean_object* v_k_5651_, uint8_t v_cleanupAnnotations_5652_, uint8_t v_whnfType_5653_, lean_object* v___y_5654_, lean_object* v___y_5655_, lean_object* v___y_5656_, lean_object* v___y_5657_){
_start:
{
lean_object* v___f_5659_; lean_object* v___x_5660_; 
v___f_5659_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5659_, 0, v_k_5651_);
v___x_5660_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_5649_, v_maxFVars_x3f_5650_, v___f_5659_, v_cleanupAnnotations_5652_, v_whnfType_5653_, v___y_5654_, v___y_5655_, v___y_5656_, v___y_5657_);
if (lean_obj_tag(v___x_5660_) == 0)
{
lean_object* v_a_5661_; lean_object* v___x_5663_; uint8_t v_isShared_5664_; uint8_t v_isSharedCheck_5668_; 
v_a_5661_ = lean_ctor_get(v___x_5660_, 0);
v_isSharedCheck_5668_ = !lean_is_exclusive(v___x_5660_);
if (v_isSharedCheck_5668_ == 0)
{
v___x_5663_ = v___x_5660_;
v_isShared_5664_ = v_isSharedCheck_5668_;
goto v_resetjp_5662_;
}
else
{
lean_inc(v_a_5661_);
lean_dec(v___x_5660_);
v___x_5663_ = lean_box(0);
v_isShared_5664_ = v_isSharedCheck_5668_;
goto v_resetjp_5662_;
}
v_resetjp_5662_:
{
lean_object* v___x_5666_; 
if (v_isShared_5664_ == 0)
{
v___x_5666_ = v___x_5663_;
goto v_reusejp_5665_;
}
else
{
lean_object* v_reuseFailAlloc_5667_; 
v_reuseFailAlloc_5667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5667_, 0, v_a_5661_);
v___x_5666_ = v_reuseFailAlloc_5667_;
goto v_reusejp_5665_;
}
v_reusejp_5665_:
{
return v___x_5666_;
}
}
}
else
{
lean_object* v_a_5669_; lean_object* v___x_5671_; uint8_t v_isShared_5672_; uint8_t v_isSharedCheck_5676_; 
v_a_5669_ = lean_ctor_get(v___x_5660_, 0);
v_isSharedCheck_5676_ = !lean_is_exclusive(v___x_5660_);
if (v_isSharedCheck_5676_ == 0)
{
v___x_5671_ = v___x_5660_;
v_isShared_5672_ = v_isSharedCheck_5676_;
goto v_resetjp_5670_;
}
else
{
lean_inc(v_a_5669_);
lean_dec(v___x_5660_);
v___x_5671_ = lean_box(0);
v_isShared_5672_ = v_isSharedCheck_5676_;
goto v_resetjp_5670_;
}
v_resetjp_5670_:
{
lean_object* v___x_5674_; 
if (v_isShared_5672_ == 0)
{
v___x_5674_ = v___x_5671_;
goto v_reusejp_5673_;
}
else
{
lean_object* v_reuseFailAlloc_5675_; 
v_reuseFailAlloc_5675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5675_, 0, v_a_5669_);
v___x_5674_ = v_reuseFailAlloc_5675_;
goto v_reusejp_5673_;
}
v_reusejp_5673_:
{
return v___x_5674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object* v_type_5677_, lean_object* v_maxFVars_x3f_5678_, lean_object* v_k_5679_, lean_object* v_cleanupAnnotations_5680_, lean_object* v_whnfType_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5687_; uint8_t v_whnfType_boxed_5688_; lean_object* v_res_5689_; 
v_cleanupAnnotations_boxed_5687_ = lean_unbox(v_cleanupAnnotations_5680_);
v_whnfType_boxed_5688_ = lean_unbox(v_whnfType_5681_);
v_res_5689_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5677_, v_maxFVars_x3f_5678_, v_k_5679_, v_cleanupAnnotations_boxed_5687_, v_whnfType_boxed_5688_, v___y_5682_, v___y_5683_, v___y_5684_, v___y_5685_);
lean_dec(v___y_5685_);
lean_dec_ref(v___y_5684_);
lean_dec(v___y_5683_);
lean_dec_ref(v___y_5682_);
return v_res_5689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object* v_00_u03b1_5690_, lean_object* v_type_5691_, lean_object* v_maxFVars_x3f_5692_, lean_object* v_k_5693_, uint8_t v_cleanupAnnotations_5694_, uint8_t v_whnfType_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_){
_start:
{
lean_object* v___x_5701_; 
v___x_5701_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5691_, v_maxFVars_x3f_5692_, v_k_5693_, v_cleanupAnnotations_5694_, v_whnfType_5695_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
return v___x_5701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object* v_00_u03b1_5702_, lean_object* v_type_5703_, lean_object* v_maxFVars_x3f_5704_, lean_object* v_k_5705_, lean_object* v_cleanupAnnotations_5706_, lean_object* v_whnfType_5707_, lean_object* v___y_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_, lean_object* v___y_5712_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5713_; uint8_t v_whnfType_boxed_5714_; lean_object* v_res_5715_; 
v_cleanupAnnotations_boxed_5713_ = lean_unbox(v_cleanupAnnotations_5706_);
v_whnfType_boxed_5714_ = lean_unbox(v_whnfType_5707_);
v_res_5715_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(v_00_u03b1_5702_, v_type_5703_, v_maxFVars_x3f_5704_, v_k_5705_, v_cleanupAnnotations_boxed_5713_, v_whnfType_boxed_5714_, v___y_5708_, v___y_5709_, v___y_5710_, v___y_5711_);
lean_dec(v___y_5711_);
lean_dec_ref(v___y_5710_);
lean_dec(v___y_5709_);
lean_dec_ref(v___y_5708_);
return v_res_5715_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object* v_a_5716_, lean_object* v_as_5717_, size_t v_i_5718_, size_t v_stop_5719_){
_start:
{
uint8_t v___x_5720_; 
v___x_5720_ = lean_usize_dec_eq(v_i_5718_, v_stop_5719_);
if (v___x_5720_ == 0)
{
lean_object* v___x_5721_; uint8_t v___x_5722_; 
v___x_5721_ = lean_array_uget_borrowed(v_as_5717_, v_i_5718_);
v___x_5722_ = lean_expr_eqv(v_a_5716_, v___x_5721_);
if (v___x_5722_ == 0)
{
size_t v___x_5723_; size_t v___x_5724_; 
v___x_5723_ = ((size_t)1ULL);
v___x_5724_ = lean_usize_add(v_i_5718_, v___x_5723_);
v_i_5718_ = v___x_5724_;
goto _start;
}
else
{
return v___x_5722_;
}
}
else
{
uint8_t v___x_5726_; 
v___x_5726_ = 0;
return v___x_5726_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object* v_a_5727_, lean_object* v_as_5728_, lean_object* v_i_5729_, lean_object* v_stop_5730_){
_start:
{
size_t v_i_boxed_5731_; size_t v_stop_boxed_5732_; uint8_t v_res_5733_; lean_object* v_r_5734_; 
v_i_boxed_5731_ = lean_unbox_usize(v_i_5729_);
lean_dec(v_i_5729_);
v_stop_boxed_5732_ = lean_unbox_usize(v_stop_5730_);
lean_dec(v_stop_5730_);
v_res_5733_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5727_, v_as_5728_, v_i_boxed_5731_, v_stop_boxed_5732_);
lean_dec_ref(v_as_5728_);
lean_dec_ref(v_a_5727_);
v_r_5734_ = lean_box(v_res_5733_);
return v_r_5734_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object* v_as_5735_, lean_object* v_a_5736_){
_start:
{
lean_object* v___x_5737_; lean_object* v___x_5738_; uint8_t v___x_5739_; 
v___x_5737_ = lean_unsigned_to_nat(0u);
v___x_5738_ = lean_array_get_size(v_as_5735_);
v___x_5739_ = lean_nat_dec_lt(v___x_5737_, v___x_5738_);
if (v___x_5739_ == 0)
{
return v___x_5739_;
}
else
{
size_t v___x_5740_; size_t v___x_5741_; uint8_t v___x_5742_; 
v___x_5740_ = ((size_t)0ULL);
v___x_5741_ = lean_usize_of_nat(v___x_5738_);
v___x_5742_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5736_, v_as_5735_, v___x_5740_, v___x_5741_);
return v___x_5742_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object* v_as_5743_, lean_object* v_a_5744_){
_start:
{
uint8_t v_res_5745_; lean_object* v_r_5746_; 
v_res_5745_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_as_5743_, v_a_5744_);
lean_dec_ref(v_a_5744_);
lean_dec_ref(v_as_5743_);
v_r_5746_ = lean_box(v_res_5745_);
return v_r_5746_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object* v_xs_5747_, lean_object* v_e_5748_){
_start:
{
uint8_t v___x_5749_; lean_object* v_d_5751_; lean_object* v_b_5752_; 
v___x_5749_ = l_Lean_Expr_hasFVar(v_e_5748_);
if (v___x_5749_ == 0)
{
lean_dec_ref(v_e_5748_);
return v___x_5749_;
}
else
{
switch(lean_obj_tag(v_e_5748_))
{
case 7:
{
lean_object* v_binderType_5755_; lean_object* v_body_5756_; 
v_binderType_5755_ = lean_ctor_get(v_e_5748_, 1);
lean_inc_ref(v_binderType_5755_);
v_body_5756_ = lean_ctor_get(v_e_5748_, 2);
lean_inc_ref(v_body_5756_);
lean_dec_ref_known(v_e_5748_, 3);
v_d_5751_ = v_binderType_5755_;
v_b_5752_ = v_body_5756_;
goto v___jp_5750_;
}
case 6:
{
lean_object* v_binderType_5757_; lean_object* v_body_5758_; 
v_binderType_5757_ = lean_ctor_get(v_e_5748_, 1);
lean_inc_ref(v_binderType_5757_);
v_body_5758_ = lean_ctor_get(v_e_5748_, 2);
lean_inc_ref(v_body_5758_);
lean_dec_ref_known(v_e_5748_, 3);
v_d_5751_ = v_binderType_5757_;
v_b_5752_ = v_body_5758_;
goto v___jp_5750_;
}
case 10:
{
lean_object* v_expr_5759_; 
v_expr_5759_ = lean_ctor_get(v_e_5748_, 1);
lean_inc_ref(v_expr_5759_);
lean_dec_ref_known(v_e_5748_, 2);
v_e_5748_ = v_expr_5759_;
goto _start;
}
case 8:
{
lean_object* v_type_5761_; lean_object* v_value_5762_; lean_object* v_body_5763_; uint8_t v___x_5764_; 
v_type_5761_ = lean_ctor_get(v_e_5748_, 1);
lean_inc_ref(v_type_5761_);
v_value_5762_ = lean_ctor_get(v_e_5748_, 2);
lean_inc_ref(v_value_5762_);
v_body_5763_ = lean_ctor_get(v_e_5748_, 3);
lean_inc_ref(v_body_5763_);
lean_dec_ref_known(v_e_5748_, 4);
v___x_5764_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5747_, v_type_5761_);
if (v___x_5764_ == 0)
{
uint8_t v___x_5765_; 
v___x_5765_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5747_, v_value_5762_);
if (v___x_5765_ == 0)
{
v_e_5748_ = v_body_5763_;
goto _start;
}
else
{
lean_dec_ref(v_body_5763_);
return v___x_5749_;
}
}
else
{
lean_dec_ref(v_body_5763_);
lean_dec_ref(v_value_5762_);
return v___x_5749_;
}
}
case 5:
{
lean_object* v_fn_5767_; lean_object* v_arg_5768_; uint8_t v___x_5769_; 
v_fn_5767_ = lean_ctor_get(v_e_5748_, 0);
lean_inc_ref(v_fn_5767_);
v_arg_5768_ = lean_ctor_get(v_e_5748_, 1);
lean_inc_ref(v_arg_5768_);
lean_dec_ref_known(v_e_5748_, 2);
v___x_5769_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5747_, v_fn_5767_);
if (v___x_5769_ == 0)
{
v_e_5748_ = v_arg_5768_;
goto _start;
}
else
{
lean_dec_ref(v_arg_5768_);
return v___x_5749_;
}
}
case 11:
{
lean_object* v_struct_5771_; 
v_struct_5771_ = lean_ctor_get(v_e_5748_, 2);
lean_inc_ref(v_struct_5771_);
lean_dec_ref_known(v_e_5748_, 3);
v_e_5748_ = v_struct_5771_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_5773_; lean_object* v___x_5774_; uint8_t v___x_5775_; 
v_fvarId_5773_ = lean_ctor_get(v_e_5748_, 0);
lean_inc(v_fvarId_5773_);
lean_dec_ref_known(v_e_5748_, 1);
v___x_5774_ = l_Lean_Expr_fvar___override(v_fvarId_5773_);
v___x_5775_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_xs_5747_, v___x_5774_);
lean_dec_ref(v___x_5774_);
return v___x_5775_;
}
default: 
{
uint8_t v___x_5776_; 
lean_dec_ref(v_e_5748_);
v___x_5776_ = 0;
return v___x_5776_;
}
}
}
v___jp_5750_:
{
uint8_t v___x_5753_; 
v___x_5753_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5747_, v_d_5751_);
if (v___x_5753_ == 0)
{
v_e_5748_ = v_b_5752_;
goto _start;
}
else
{
lean_dec_ref(v_b_5752_);
return v___x_5749_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object* v_xs_5777_, lean_object* v_e_5778_){
_start:
{
uint8_t v_res_5779_; lean_object* v_r_5780_; 
v_res_5779_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5777_, v_e_5778_);
lean_dec_ref(v_xs_5777_);
v_r_5780_ = lean_box(v_res_5779_);
return v_r_5780_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1(void){
_start:
{
lean_object* v___x_5782_; lean_object* v___x_5783_; 
v___x_5782_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0));
v___x_5783_ = l_Lean_stringToMessageData(v___x_5782_);
return v___x_5783_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2));
v___x_5786_ = l_Lean_stringToMessageData(v___x_5785_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object* v_xs_5787_, lean_object* v_type_5788_, lean_object* v_as_5789_, size_t v_sz_5790_, size_t v_i_5791_, lean_object* v_b_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_){
_start:
{
lean_object* v_a_5799_; uint8_t v___x_5803_; 
v___x_5803_ = lean_usize_dec_lt(v_i_5791_, v_sz_5790_);
if (v___x_5803_ == 0)
{
lean_object* v___x_5804_; 
lean_dec_ref(v_type_5788_);
v___x_5804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5804_, 0, v_b_5792_);
return v___x_5804_;
}
else
{
lean_object* v___x_5805_; lean_object* v_a_5806_; uint8_t v___x_5807_; 
v___x_5805_ = lean_box(0);
v_a_5806_ = lean_array_uget_borrowed(v_as_5789_, v_i_5791_);
lean_inc(v_a_5806_);
v___x_5807_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5787_, v_a_5806_);
if (v___x_5807_ == 0)
{
v_a_5799_ = v___x_5805_;
goto v___jp_5798_;
}
else
{
lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; 
v___x_5808_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1);
lean_inc(v_a_5806_);
v___x_5809_ = l_Lean_MessageData_ofExpr(v_a_5806_);
v___x_5810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5810_, 0, v___x_5808_);
lean_ctor_set(v___x_5810_, 1, v___x_5809_);
v___x_5811_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3);
v___x_5812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5812_, 0, v___x_5810_);
lean_ctor_set(v___x_5812_, 1, v___x_5811_);
lean_inc_ref(v_type_5788_);
v___x_5813_ = l_Lean_MessageData_ofExpr(v_type_5788_);
v___x_5814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5814_, 0, v___x_5812_);
lean_ctor_set(v___x_5814_, 1, v___x_5813_);
v___x_5815_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5814_, v___y_5793_, v___y_5794_, v___y_5795_, v___y_5796_);
if (lean_obj_tag(v___x_5815_) == 0)
{
lean_dec_ref_known(v___x_5815_, 1);
v_a_5799_ = v___x_5805_;
goto v___jp_5798_;
}
else
{
lean_dec_ref(v_type_5788_);
return v___x_5815_;
}
}
}
v___jp_5798_:
{
size_t v___x_5800_; size_t v___x_5801_; 
v___x_5800_ = ((size_t)1ULL);
v___x_5801_ = lean_usize_add(v_i_5791_, v___x_5800_);
v_i_5791_ = v___x_5801_;
v_b_5792_ = v_a_5799_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object* v_xs_5816_, lean_object* v_type_5817_, lean_object* v_as_5818_, lean_object* v_sz_5819_, lean_object* v_i_5820_, lean_object* v_b_5821_, lean_object* v___y_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_){
_start:
{
size_t v_sz_boxed_5827_; size_t v_i_boxed_5828_; lean_object* v_res_5829_; 
v_sz_boxed_5827_ = lean_unbox_usize(v_sz_5819_);
lean_dec(v_sz_5819_);
v_i_boxed_5828_ = lean_unbox_usize(v_i_5820_);
lean_dec(v_i_5820_);
v_res_5829_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5816_, v_type_5817_, v_as_5818_, v_sz_boxed_5827_, v_i_boxed_5828_, v_b_5821_, v___y_5822_, v___y_5823_, v___y_5824_, v___y_5825_);
lean_dec(v___y_5825_);
lean_dec_ref(v___y_5824_);
lean_dec(v___y_5823_);
lean_dec_ref(v___y_5822_);
lean_dec_ref(v_as_5818_);
lean_dec_ref(v_xs_5816_);
return v_res_5829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t v_sz_5830_, size_t v_i_5831_, lean_object* v_bs_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_){
_start:
{
uint8_t v___x_5838_; 
v___x_5838_ = lean_usize_dec_lt(v_i_5831_, v_sz_5830_);
if (v___x_5838_ == 0)
{
lean_object* v___x_5839_; 
v___x_5839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5839_, 0, v_bs_5832_);
return v___x_5839_;
}
else
{
lean_object* v_v_5840_; lean_object* v___x_5841_; lean_object* v_bs_x27_5842_; lean_object* v___x_5843_; 
v_v_5840_ = lean_array_uget(v_bs_5832_, v_i_5831_);
v___x_5841_ = lean_unsigned_to_nat(0u);
v_bs_x27_5842_ = lean_array_uset(v_bs_5832_, v_i_5831_, v___x_5841_);
lean_inc(v___y_5836_);
lean_inc_ref(v___y_5835_);
lean_inc(v___y_5834_);
lean_inc_ref(v___y_5833_);
v___x_5843_ = lean_infer_type(v_v_5840_, v___y_5833_, v___y_5834_, v___y_5835_, v___y_5836_);
if (lean_obj_tag(v___x_5843_) == 0)
{
lean_object* v_a_5844_; size_t v___x_5845_; size_t v___x_5846_; lean_object* v___x_5847_; 
v_a_5844_ = lean_ctor_get(v___x_5843_, 0);
lean_inc(v_a_5844_);
lean_dec_ref_known(v___x_5843_, 1);
v___x_5845_ = ((size_t)1ULL);
v___x_5846_ = lean_usize_add(v_i_5831_, v___x_5845_);
v___x_5847_ = lean_array_uset(v_bs_x27_5842_, v_i_5831_, v_a_5844_);
v_i_5831_ = v___x_5846_;
v_bs_5832_ = v___x_5847_;
goto _start;
}
else
{
lean_object* v_a_5849_; lean_object* v___x_5851_; uint8_t v_isShared_5852_; uint8_t v_isSharedCheck_5856_; 
lean_dec_ref(v_bs_x27_5842_);
v_a_5849_ = lean_ctor_get(v___x_5843_, 0);
v_isSharedCheck_5856_ = !lean_is_exclusive(v___x_5843_);
if (v_isSharedCheck_5856_ == 0)
{
v___x_5851_ = v___x_5843_;
v_isShared_5852_ = v_isSharedCheck_5856_;
goto v_resetjp_5850_;
}
else
{
lean_inc(v_a_5849_);
lean_dec(v___x_5843_);
v___x_5851_ = lean_box(0);
v_isShared_5852_ = v_isSharedCheck_5856_;
goto v_resetjp_5850_;
}
v_resetjp_5850_:
{
lean_object* v___x_5854_; 
if (v_isShared_5852_ == 0)
{
v___x_5854_ = v___x_5851_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5855_; 
v_reuseFailAlloc_5855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5855_, 0, v_a_5849_);
v___x_5854_ = v_reuseFailAlloc_5855_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
return v___x_5854_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object* v_sz_5857_, lean_object* v_i_5858_, lean_object* v_bs_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_){
_start:
{
size_t v_sz_boxed_5865_; size_t v_i_boxed_5866_; lean_object* v_res_5867_; 
v_sz_boxed_5865_ = lean_unbox_usize(v_sz_5857_);
lean_dec(v_sz_5857_);
v_i_boxed_5866_ = lean_unbox_usize(v_i_5858_);
lean_dec(v_i_5858_);
v_res_5867_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_boxed_5865_, v_i_boxed_5866_, v_bs_5859_, v___y_5860_, v___y_5861_, v___y_5862_, v___y_5863_);
lean_dec(v___y_5863_);
lean_dec_ref(v___y_5862_);
lean_dec(v___y_5861_);
lean_dec_ref(v___y_5860_);
return v_res_5867_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5869_; lean_object* v___x_5870_; 
v___x_5869_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__0));
v___x_5870_ = l_Lean_stringToMessageData(v___x_5869_);
return v___x_5870_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5872_; lean_object* v___x_5873_; 
v___x_5872_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__2));
v___x_5873_ = l_Lean_stringToMessageData(v___x_5872_);
return v___x_5873_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5875_; lean_object* v___x_5876_; 
v___x_5875_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__4));
v___x_5876_ = l_Lean_stringToMessageData(v___x_5875_);
return v___x_5876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object* v_type_5877_, lean_object* v_n_5878_, lean_object* v_xs_5879_, lean_object* v_x_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_){
_start:
{
lean_object* v___x_5910_; uint8_t v___x_5911_; 
v___x_5910_ = lean_array_get_size(v_xs_5879_);
v___x_5911_ = lean_nat_dec_eq(v___x_5910_, v_n_5878_);
if (v___x_5911_ == 0)
{
lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v_a_5924_; lean_object* v___x_5926_; uint8_t v_isShared_5927_; uint8_t v_isSharedCheck_5931_; 
lean_dec_ref(v_xs_5879_);
v___x_5912_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__1, &l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1);
v___x_5913_ = l_Lean_MessageData_ofExpr(v_type_5877_);
v___x_5914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5914_, 0, v___x_5912_);
lean_ctor_set(v___x_5914_, 1, v___x_5913_);
v___x_5915_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__3, &l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3);
v___x_5916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5916_, 0, v___x_5914_);
lean_ctor_set(v___x_5916_, 1, v___x_5915_);
v___x_5917_ = l_Nat_reprFast(v_n_5878_);
v___x_5918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5918_, 0, v___x_5917_);
v___x_5919_ = l_Lean_MessageData_ofFormat(v___x_5918_);
v___x_5920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5920_, 0, v___x_5916_);
lean_ctor_set(v___x_5920_, 1, v___x_5919_);
v___x_5921_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__5, &l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5);
v___x_5922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5920_);
lean_ctor_set(v___x_5922_, 1, v___x_5921_);
v___x_5923_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5922_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
v_a_5924_ = lean_ctor_get(v___x_5923_, 0);
v_isSharedCheck_5931_ = !lean_is_exclusive(v___x_5923_);
if (v_isSharedCheck_5931_ == 0)
{
v___x_5926_ = v___x_5923_;
v_isShared_5927_ = v_isSharedCheck_5931_;
goto v_resetjp_5925_;
}
else
{
lean_inc(v_a_5924_);
lean_dec(v___x_5923_);
v___x_5926_ = lean_box(0);
v_isShared_5927_ = v_isSharedCheck_5931_;
goto v_resetjp_5925_;
}
v_resetjp_5925_:
{
lean_object* v___x_5929_; 
if (v_isShared_5927_ == 0)
{
v___x_5929_ = v___x_5926_;
goto v_reusejp_5928_;
}
else
{
lean_object* v_reuseFailAlloc_5930_; 
v_reuseFailAlloc_5930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5930_, 0, v_a_5924_);
v___x_5929_ = v_reuseFailAlloc_5930_;
goto v_reusejp_5928_;
}
v_reusejp_5928_:
{
return v___x_5929_;
}
}
}
else
{
lean_dec(v_n_5878_);
goto v___jp_5886_;
}
v___jp_5886_:
{
size_t v_sz_5887_; size_t v___x_5888_; lean_object* v___x_5889_; 
v_sz_5887_ = lean_array_size(v_xs_5879_);
v___x_5888_ = ((size_t)0ULL);
lean_inc_ref(v_xs_5879_);
v___x_5889_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_5887_, v___x_5888_, v_xs_5879_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5889_) == 0)
{
lean_object* v_a_5890_; lean_object* v___x_5891_; size_t v_sz_5892_; lean_object* v___x_5893_; 
v_a_5890_ = lean_ctor_get(v___x_5889_, 0);
lean_inc(v_a_5890_);
lean_dec_ref_known(v___x_5889_, 1);
v___x_5891_ = lean_box(0);
v_sz_5892_ = lean_array_size(v_a_5890_);
v___x_5893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5879_, v_type_5877_, v_a_5890_, v_sz_5892_, v___x_5888_, v___x_5891_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
lean_dec_ref(v_xs_5879_);
if (lean_obj_tag(v___x_5893_) == 0)
{
lean_object* v___x_5895_; uint8_t v_isShared_5896_; uint8_t v_isSharedCheck_5900_; 
v_isSharedCheck_5900_ = !lean_is_exclusive(v___x_5893_);
if (v_isSharedCheck_5900_ == 0)
{
lean_object* v_unused_5901_; 
v_unused_5901_ = lean_ctor_get(v___x_5893_, 0);
lean_dec(v_unused_5901_);
v___x_5895_ = v___x_5893_;
v_isShared_5896_ = v_isSharedCheck_5900_;
goto v_resetjp_5894_;
}
else
{
lean_dec(v___x_5893_);
v___x_5895_ = lean_box(0);
v_isShared_5896_ = v_isSharedCheck_5900_;
goto v_resetjp_5894_;
}
v_resetjp_5894_:
{
lean_object* v___x_5898_; 
if (v_isShared_5896_ == 0)
{
lean_ctor_set(v___x_5895_, 0, v_a_5890_);
v___x_5898_ = v___x_5895_;
goto v_reusejp_5897_;
}
else
{
lean_object* v_reuseFailAlloc_5899_; 
v_reuseFailAlloc_5899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5899_, 0, v_a_5890_);
v___x_5898_ = v_reuseFailAlloc_5899_;
goto v_reusejp_5897_;
}
v_reusejp_5897_:
{
return v___x_5898_;
}
}
}
else
{
lean_object* v_a_5902_; lean_object* v___x_5904_; uint8_t v_isShared_5905_; uint8_t v_isSharedCheck_5909_; 
lean_dec(v_a_5890_);
v_a_5902_ = lean_ctor_get(v___x_5893_, 0);
v_isSharedCheck_5909_ = !lean_is_exclusive(v___x_5893_);
if (v_isSharedCheck_5909_ == 0)
{
v___x_5904_ = v___x_5893_;
v_isShared_5905_ = v_isSharedCheck_5909_;
goto v_resetjp_5903_;
}
else
{
lean_inc(v_a_5902_);
lean_dec(v___x_5893_);
v___x_5904_ = lean_box(0);
v_isShared_5905_ = v_isSharedCheck_5909_;
goto v_resetjp_5903_;
}
v_resetjp_5903_:
{
lean_object* v___x_5907_; 
if (v_isShared_5905_ == 0)
{
v___x_5907_ = v___x_5904_;
goto v_reusejp_5906_;
}
else
{
lean_object* v_reuseFailAlloc_5908_; 
v_reuseFailAlloc_5908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5908_, 0, v_a_5902_);
v___x_5907_ = v_reuseFailAlloc_5908_;
goto v_reusejp_5906_;
}
v_reusejp_5906_:
{
return v___x_5907_;
}
}
}
}
else
{
lean_dec_ref(v_xs_5879_);
lean_dec_ref(v_type_5877_);
return v___x_5889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object* v_type_5932_, lean_object* v_n_5933_, lean_object* v_xs_5934_, lean_object* v_x_5935_, lean_object* v___y_5936_, lean_object* v___y_5937_, lean_object* v___y_5938_, lean_object* v___y_5939_, lean_object* v___y_5940_){
_start:
{
lean_object* v_res_5941_; 
v_res_5941_ = l_Lean_Meta_arrowDomainsN___lam__0(v_type_5932_, v_n_5933_, v_xs_5934_, v_x_5935_, v___y_5936_, v___y_5937_, v___y_5938_, v___y_5939_);
lean_dec(v___y_5939_);
lean_dec_ref(v___y_5938_);
lean_dec(v___y_5937_);
lean_dec_ref(v___y_5936_);
lean_dec_ref(v_x_5935_);
return v_res_5941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object* v_n_5942_, lean_object* v_type_5943_, lean_object* v_a_5944_, lean_object* v_a_5945_, lean_object* v_a_5946_, lean_object* v_a_5947_){
_start:
{
lean_object* v___f_5949_; lean_object* v___x_5950_; uint8_t v___x_5951_; lean_object* v___x_5952_; 
lean_inc(v_n_5942_);
lean_inc_ref(v_type_5943_);
v___f_5949_ = lean_alloc_closure((void*)(l_Lean_Meta_arrowDomainsN___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5949_, 0, v_type_5943_);
lean_closure_set(v___f_5949_, 1, v_n_5942_);
v___x_5950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5950_, 0, v_n_5942_);
v___x_5951_ = 0;
v___x_5952_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5943_, v___x_5950_, v___f_5949_, v___x_5951_, v___x_5951_, v_a_5944_, v_a_5945_, v_a_5946_, v_a_5947_);
return v___x_5952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object* v_n_5953_, lean_object* v_type_5954_, lean_object* v_a_5955_, lean_object* v_a_5956_, lean_object* v_a_5957_, lean_object* v_a_5958_, lean_object* v_a_5959_){
_start:
{
lean_object* v_res_5960_; 
v_res_5960_ = l_Lean_Meta_arrowDomainsN(v_n_5953_, v_type_5954_, v_a_5955_, v_a_5956_, v_a_5957_, v_a_5958_);
lean_dec(v_a_5958_);
lean_dec_ref(v_a_5957_);
lean_dec(v_a_5956_);
lean_dec_ref(v_a_5955_);
return v_res_5960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object* v_n_5961_, lean_object* v_e_5962_, lean_object* v_a_5963_, lean_object* v_a_5964_, lean_object* v_a_5965_, lean_object* v_a_5966_){
_start:
{
lean_object* v___x_5968_; 
lean_inc(v_a_5966_);
lean_inc_ref(v_a_5965_);
lean_inc(v_a_5964_);
lean_inc_ref(v_a_5963_);
v___x_5968_ = lean_infer_type(v_e_5962_, v_a_5963_, v_a_5964_, v_a_5965_, v_a_5966_);
if (lean_obj_tag(v___x_5968_) == 0)
{
lean_object* v_a_5969_; lean_object* v___x_5970_; 
v_a_5969_ = lean_ctor_get(v___x_5968_, 0);
lean_inc(v_a_5969_);
lean_dec_ref_known(v___x_5968_, 1);
v___x_5970_ = l_Lean_Meta_arrowDomainsN(v_n_5961_, v_a_5969_, v_a_5963_, v_a_5964_, v_a_5965_, v_a_5966_);
return v___x_5970_;
}
else
{
lean_object* v_a_5971_; lean_object* v___x_5973_; uint8_t v_isShared_5974_; uint8_t v_isSharedCheck_5978_; 
lean_dec(v_n_5961_);
v_a_5971_ = lean_ctor_get(v___x_5968_, 0);
v_isSharedCheck_5978_ = !lean_is_exclusive(v___x_5968_);
if (v_isSharedCheck_5978_ == 0)
{
v___x_5973_ = v___x_5968_;
v_isShared_5974_ = v_isSharedCheck_5978_;
goto v_resetjp_5972_;
}
else
{
lean_inc(v_a_5971_);
lean_dec(v___x_5968_);
v___x_5973_ = lean_box(0);
v_isShared_5974_ = v_isSharedCheck_5978_;
goto v_resetjp_5972_;
}
v_resetjp_5972_:
{
lean_object* v___x_5976_; 
if (v_isShared_5974_ == 0)
{
v___x_5976_ = v___x_5973_;
goto v_reusejp_5975_;
}
else
{
lean_object* v_reuseFailAlloc_5977_; 
v_reuseFailAlloc_5977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5977_, 0, v_a_5971_);
v___x_5976_ = v_reuseFailAlloc_5977_;
goto v_reusejp_5975_;
}
v_reusejp_5975_:
{
return v___x_5976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object* v_n_5979_, lean_object* v_e_5980_, lean_object* v_a_5981_, lean_object* v_a_5982_, lean_object* v_a_5983_, lean_object* v_a_5984_, lean_object* v_a_5985_){
_start:
{
lean_object* v_res_5986_; 
v_res_5986_ = l_Lean_Meta_inferArgumentTypesN(v_n_5979_, v_e_5980_, v_a_5981_, v_a_5982_, v_a_5983_, v_a_5984_);
lean_dec(v_a_5984_);
lean_dec_ref(v_a_5983_);
lean_dec(v_a_5982_);
lean_dec_ref(v_a_5981_);
return v_res_5986_;
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
