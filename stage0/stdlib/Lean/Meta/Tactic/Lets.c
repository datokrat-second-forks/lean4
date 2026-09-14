// Lean compiler output
// Module: Lean.Meta.Tactic.Lets
// Imports: public import Lean.Meta.Tactic.Replace public import Lean.Meta.LetToHave
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_isLet___boxed(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForallWithParamInfos(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedExprParamInfo_default;
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_left(size_t, size_t);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withReverted___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceLocalDeclDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_ExtractLets_flushDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value),((lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_flushDecls___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_flushDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_containsLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isLet___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_containsLet___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_containsLet___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "let expression expected"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateLetE!"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.ExtractLets.extractCore"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_value;
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Meta.Tactic.Lets"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_liftLets___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "made no progress"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_extractLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extract_lets"};
static const lean_object* l_Lean_MVarId_extractLets___closed__0 = (const lean_object*)&l_Lean_MVarId_extractLets___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_extractLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_extractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 33, 143, 120, 246, 234, 114, 64)}};
static const lean_object* l_Lean_MVarId_extractLets___closed__1 = (const lean_object*)&l_Lean_MVarId_extractLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected auxiliary target"};
static const lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0 = (const lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value)}};
static const lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1 = (const lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_liftLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lift_lets"};
static const lean_object* l_Lean_MVarId_liftLets___closed__0 = (const lean_object*)&l_Lean_MVarId_liftLets___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_liftLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_liftLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 227, 82, 255, 128, 171, 101)}};
static const lean_object* l_Lean_MVarId_liftLets___closed__1 = (const lean_object*)&l_Lean_MVarId_liftLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_letToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let_to_have"};
static const lean_object* l_Lean_MVarId_letToHave___closed__0 = (const lean_object*)&l_Lean_MVarId_letToHave___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_letToHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_letToHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 121, 21, 93, 142, 174, 18, 85)}};
static const lean_object* l_Lean_MVarId_letToHave___closed__1 = (const lean_object*)&l_Lean_MVarId_letToHave___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_unsigned_to_nat(16u);
v___x_5_ = lean_mk_array(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1);
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2);
v___x_10_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_ExtractLets_instInhabitedState_default;
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; uint8_t v_onlyGivenNames_19_; 
v___x_18_ = lean_st_ref_get(v___y_16_);
v_onlyGivenNames_19_ = lean_ctor_get_uint8(v___y_15_, 8);
if (v_onlyGivenNames_19_ == 0)
{
uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_dec(v___x_18_);
v___x_20_ = 1;
v___x_21_ = lean_box(v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
else
{
lean_object* v_givenNames_23_; uint8_t v___x_24_; 
v_givenNames_23_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_givenNames_23_);
lean_dec(v___x_18_);
v___x_24_ = l_List_isEmpty___redArg(v_givenNames_23_);
lean_dec(v_givenNames_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_box(v_onlyGivenNames_19_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
else
{
uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = 0;
v___x_28_ = lean_box(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec_ref(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v___y_34_, v___y_36_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Meta_ExtractLets_hasNextName(v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v___x_60_; lean_object* v_givenNames_61_; 
v___x_60_ = lean_st_ref_get(v___y_58_);
v_givenNames_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_givenNames_61_);
if (lean_obj_tag(v_givenNames_61_) == 0)
{
uint8_t v_onlyGivenNames_62_; 
lean_dec(v___x_60_);
v_onlyGivenNames_62_ = lean_ctor_get_uint8(v___y_57_, 8);
if (v_onlyGivenNames_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2));
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_box(0);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
else
{
lean_object* v_decls_67_; lean_object* v_valueMap_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_80_; 
v_decls_67_ = lean_ctor_get(v___x_60_, 1);
v_valueMap_68_ = lean_ctor_get(v___x_60_, 2);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_80_ == 0)
{
lean_object* v_unused_81_; 
v_unused_81_ = lean_ctor_get(v___x_60_, 0);
lean_dec(v_unused_81_);
v___x_70_ = v___x_60_;
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_valueMap_68_);
lean_inc(v_decls_67_);
lean_dec(v___x_60_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v_head_72_; lean_object* v_tail_73_; lean_object* v___x_75_; 
v_head_72_ = lean_ctor_get(v_givenNames_61_, 0);
lean_inc(v_head_72_);
v_tail_73_ = lean_ctor_get(v_givenNames_61_, 1);
lean_inc(v_tail_73_);
lean_dec_ref_known(v_givenNames_61_, 2);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v_tail_73_);
v___x_75_ = v___x_70_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_tail_73_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_decls_67_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v_valueMap_68_);
v___x_75_ = v_reuseFailAlloc_79_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_st_ref_swap(v___y_58_, v___x_75_);
lean_dec(v___x_76_);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v_head_72_);
v___x_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
return v___x_78_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v___y_86_, v___y_88_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_ExtractLets_nextName_x3f(v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object* v_binderName_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_a_114_; 
v___x_113_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v___y_108_, v___y_109_);
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
if (lean_obj_tag(v_a_114_) == 1)
{
lean_object* v_val_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_165_; 
v_val_115_ = lean_ctor_get(v_a_114_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v_a_114_);
if (v_isSharedCheck_165_ == 0)
{
v___x_117_ = v_a_114_;
v_isShared_118_ = v_isSharedCheck_165_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_val_115_);
lean_dec(v_a_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_165_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1));
v___x_120_ = lean_name_eq(v_val_115_, v___x_119_);
if (v___x_120_ == 0)
{
lean_del_object(v___x_117_);
lean_dec(v_val_115_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = l_Lean_Name_isAnonymous(v_binderName_107_);
if (v___x_121_ == 0)
{
uint8_t v_preserveBinderNames_122_; 
v_preserveBinderNames_122_ = lean_ctor_get_uint8(v___y_108_, 9);
if (v_preserveBinderNames_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_Name_hasMacroScopes(v_val_115_);
lean_dec(v_val_115_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; 
lean_dec_ref(v___x_113_);
v___x_124_ = l_Lean_Core_mkFreshUserName(v_binderName_107_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_135_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_135_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_a_125_);
v___x_130_ = v___x_117_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_130_);
v___x_132_ = v___x_127_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_del_object(v___x_117_);
v_a_136_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_124_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_124_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_del_object(v___x_117_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
}
else
{
lean_del_object(v___x_117_);
lean_dec(v_val_115_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_dec(v_val_115_);
lean_dec_ref(v___x_113_);
lean_dec(v_binderName_107_);
v___x_144_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1));
v___x_145_ = l_Lean_Core_mkFreshUserName(v___x_144_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_156_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_156_ == 0)
{
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_156_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_156_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_a_146_);
v___x_151_ = v___x_117_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_155_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_153_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_151_);
v___x_153_ = v___x_148_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
lean_del_object(v___x_117_);
v_a_157_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_145_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_145_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
lean_dec(v_a_114_);
lean_dec(v_binderName_107_);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v___x_113_, 0);
lean_dec(v_unused_174_);
v___x_167_ = v___x_113_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_dec(v___x_113_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lean_box(0);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object* v_binderName_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object* v_binderName_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_182_, v___y_183_, v___y_185_, v___y_188_, v___y_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object* v_binderName_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(v_binderName_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
return v_res_201_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object* v_a_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
uint8_t v___x_204_; 
v___x_204_ = 0;
return v___x_204_;
}
else
{
lean_object* v_head_205_; lean_object* v_tail_206_; uint8_t v___x_207_; 
v_head_205_ = lean_ctor_get(v_x_203_, 0);
v_tail_206_ = lean_ctor_get(v_x_203_, 1);
v___x_207_ = lean_expr_eqv(v_a_202_, v_head_205_);
if (v___x_207_ == 0)
{
v_x_203_ = v_tail_206_;
goto _start;
}
else
{
return v___x_207_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v_a_209_, v_x_210_);
lean_dec(v_x_210_);
lean_dec_ref(v_a_209_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object* v_fvars_213_, lean_object* v_e_214_){
_start:
{
uint8_t v___x_215_; lean_object* v_d_217_; lean_object* v_b_218_; 
v___x_215_ = l_Lean_Expr_hasFVar(v_e_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v_e_214_);
return v___x_215_;
}
else
{
switch(lean_obj_tag(v_e_214_))
{
case 7:
{
lean_object* v_binderType_221_; lean_object* v_body_222_; 
v_binderType_221_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_binderType_221_);
v_body_222_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_body_222_);
lean_dec_ref_known(v_e_214_, 3);
v_d_217_ = v_binderType_221_;
v_b_218_ = v_body_222_;
goto v___jp_216_;
}
case 6:
{
lean_object* v_binderType_223_; lean_object* v_body_224_; 
v_binderType_223_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_binderType_223_);
v_body_224_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_body_224_);
lean_dec_ref_known(v_e_214_, 3);
v_d_217_ = v_binderType_223_;
v_b_218_ = v_body_224_;
goto v___jp_216_;
}
case 10:
{
lean_object* v_expr_225_; 
v_expr_225_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_expr_225_);
lean_dec_ref_known(v_e_214_, 2);
v_e_214_ = v_expr_225_;
goto _start;
}
case 8:
{
lean_object* v_type_227_; lean_object* v_value_228_; lean_object* v_body_229_; uint8_t v___x_230_; 
v_type_227_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_type_227_);
v_value_228_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_value_228_);
v_body_229_ = lean_ctor_get(v_e_214_, 3);
lean_inc_ref(v_body_229_);
lean_dec_ref_known(v_e_214_, 4);
v___x_230_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_type_227_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
v___x_231_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_value_228_);
if (v___x_231_ == 0)
{
v_e_214_ = v_body_229_;
goto _start;
}
else
{
lean_dec_ref(v_body_229_);
return v___x_215_;
}
}
else
{
lean_dec_ref(v_body_229_);
lean_dec_ref(v_value_228_);
return v___x_215_;
}
}
case 5:
{
lean_object* v_fn_233_; lean_object* v_arg_234_; uint8_t v___x_235_; 
v_fn_233_ = lean_ctor_get(v_e_214_, 0);
lean_inc_ref(v_fn_233_);
v_arg_234_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_arg_234_);
lean_dec_ref_known(v_e_214_, 2);
v___x_235_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_fn_233_);
if (v___x_235_ == 0)
{
v_e_214_ = v_arg_234_;
goto _start;
}
else
{
lean_dec_ref(v_arg_234_);
return v___x_215_;
}
}
case 11:
{
lean_object* v_struct_237_; 
v_struct_237_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_struct_237_);
lean_dec_ref_known(v_e_214_, 3);
v_e_214_ = v_struct_237_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_fvarId_239_ = lean_ctor_get(v_e_214_, 0);
lean_inc(v_fvarId_239_);
lean_dec_ref_known(v_e_214_, 1);
v___x_240_ = l_Lean_Expr_fvar___override(v_fvarId_239_);
v___x_241_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v___x_240_, v_fvars_213_);
lean_dec_ref(v___x_240_);
return v___x_241_;
}
default: 
{
uint8_t v___x_242_; 
lean_dec_ref(v_e_214_);
v___x_242_ = 0;
return v___x_242_;
}
}
}
v___jp_216_:
{
uint8_t v___x_219_; 
v___x_219_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_d_217_);
if (v___x_219_ == 0)
{
v_e_214_ = v_b_218_;
goto _start;
}
else
{
lean_dec_ref(v_b_218_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object* v_fvars_243_, lean_object* v_e_244_){
_start:
{
uint8_t v_res_245_; lean_object* v_r_246_; 
v_res_245_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_243_, v_e_244_);
lean_dec(v_fvars_243_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object* v_fvars_247_, lean_object* v_e_248_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_247_, v_e_248_);
if (v___x_249_ == 0)
{
uint8_t v___x_250_; 
v___x_250_ = 1;
return v___x_250_;
}
else
{
uint8_t v___x_251_; 
v___x_251_ = 0;
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object* v_fvars_252_, lean_object* v_e_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_252_, v_e_253_);
lean_dec(v_fvars_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object* v_fvars_256_, lean_object* v_n_257_, lean_object* v_t_258_, lean_object* v_v_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___y_266_; lean_object* v___x_271_; lean_object* v_a_272_; uint8_t v___x_273_; 
v___x_271_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v___y_260_, v___y_261_);
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref(v___x_271_);
v___x_273_ = lean_unbox(v_a_272_);
lean_dec(v_a_272_);
if (v___x_273_ == 0)
{
lean_dec_ref(v_v_259_);
lean_dec_ref(v_t_258_);
v___y_266_ = v___y_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_t_258_);
if (v___x_274_ == 0)
{
lean_dec_ref(v_v_259_);
v___y_266_ = v___y_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_v_259_);
if (v___x_275_ == 0)
{
v___y_266_ = v___y_260_;
goto v___jp_265_;
}
else
{
lean_object* v___x_276_; 
lean_inc(v_n_257_);
v___x_276_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_n_257_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_287_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_287_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
if (lean_obj_tag(v_a_277_) == 1)
{
lean_object* v_val_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_285_; 
lean_dec(v_n_257_);
v_val_281_ = lean_ctor_get(v_a_277_, 0);
lean_inc(v_val_281_);
lean_dec_ref_known(v_a_277_, 1);
v___x_282_ = lean_box(v___x_274_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v_val_281_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_283_);
v___x_285_ = v___x_279_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
else
{
lean_del_object(v___x_279_);
lean_dec(v_a_277_);
v___y_266_ = v___y_260_;
goto v___jp_265_;
}
}
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec(v_n_257_);
v_a_288_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_276_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_276_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
}
}
v___jp_265_:
{
uint8_t v_lift_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_lift_267_ = lean_ctor_get_uint8(v___y_266_, 10);
v___x_268_ = lean_box(v_lift_267_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v_n_257_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object* v_fvars_296_, lean_object* v_n_297_, lean_object* v_t_298_, lean_object* v_v_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_296_, v_n_297_, v_t_298_, v_v_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v_fvars_296_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object* v_fvars_306_, lean_object* v_n_307_, lean_object* v_t_308_, lean_object* v_v_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_306_, v_n_307_, v_t_308_, v_v_309_, v___y_310_, v___y_312_, v___y_315_, v___y_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object* v_fvars_319_, lean_object* v_n_320_, lean_object* v_t_321_, lean_object* v_v_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Meta_ExtractLets_isExtractableLet(v_fvars_319_, v_n_320_, v_t_321_, v_v_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v_fvars_319_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object* v_a_332_, lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v___x_334_; 
v___x_334_ = 0;
return v___x_334_;
}
else
{
lean_object* v_key_335_; lean_object* v_tail_336_; uint8_t v___x_337_; 
v_key_335_ = lean_ctor_get(v_x_333_, 0);
v_tail_336_ = lean_ctor_get(v_x_333_, 2);
v___x_337_ = l_Lean_ExprStructEq_beq(v_key_335_, v_a_332_);
if (v___x_337_ == 0)
{
v_x_333_ = v_tail_336_;
goto _start;
}
else
{
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_339_, lean_object* v_x_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_339_, v_x_340_);
lean_dec(v_x_340_);
lean_dec_ref(v_a_339_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object* v_a_343_, lean_object* v_b_344_, lean_object* v_x_345_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_dec(v_b_344_);
lean_dec_ref(v_a_343_);
return v_x_345_;
}
else
{
lean_object* v_key_346_; lean_object* v_value_347_; lean_object* v_tail_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_360_; 
v_key_346_ = lean_ctor_get(v_x_345_, 0);
v_value_347_ = lean_ctor_get(v_x_345_, 1);
v_tail_348_ = lean_ctor_get(v_x_345_, 2);
v_isSharedCheck_360_ = !lean_is_exclusive(v_x_345_);
if (v_isSharedCheck_360_ == 0)
{
v___x_350_ = v_x_345_;
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_tail_348_);
lean_inc(v_value_347_);
lean_inc(v_key_346_);
lean_dec(v_x_345_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
uint8_t v___x_352_; 
v___x_352_ = l_Lean_ExprStructEq_beq(v_key_346_, v_a_343_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_343_, v_b_344_, v_tail_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 2, v___x_353_);
v___x_355_ = v___x_350_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_key_346_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_value_347_);
lean_ctor_set(v_reuseFailAlloc_356_, 2, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
else
{
lean_object* v___x_358_; 
lean_dec(v_value_347_);
lean_dec(v_key_346_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_b_344_);
lean_ctor_set(v___x_350_, 0, v_a_343_);
v___x_358_ = v___x_350_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_343_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_b_344_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_tail_348_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
if (lean_obj_tag(v_x_362_) == 0)
{
return v_x_361_;
}
else
{
lean_object* v_key_363_; lean_object* v_value_364_; lean_object* v_tail_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_388_; 
v_key_363_ = lean_ctor_get(v_x_362_, 0);
v_value_364_ = lean_ctor_get(v_x_362_, 1);
v_tail_365_ = lean_ctor_get(v_x_362_, 2);
v_isSharedCheck_388_ = !lean_is_exclusive(v_x_362_);
if (v_isSharedCheck_388_ == 0)
{
v___x_367_ = v_x_362_;
v_isShared_368_ = v_isSharedCheck_388_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_tail_365_);
lean_inc(v_value_364_);
lean_inc(v_key_363_);
lean_dec(v_x_362_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_388_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v_fold_373_; uint64_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_369_ = lean_array_get_size(v_x_361_);
v___x_370_ = l_Lean_ExprStructEq_hash(v_key_363_);
v___x_371_ = 32ULL;
v___x_372_ = lean_uint64_shift_right(v___x_370_, v___x_371_);
v_fold_373_ = lean_uint64_xor(v___x_370_, v___x_372_);
v___x_374_ = 16ULL;
v___x_375_ = lean_uint64_shift_right(v_fold_373_, v___x_374_);
v___x_376_ = lean_uint64_xor(v_fold_373_, v___x_375_);
v___x_377_ = lean_uint64_to_usize(v___x_376_);
v___x_378_ = lean_usize_of_nat(v___x_369_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_sub(v___x_378_, v___x_379_);
v___x_381_ = lean_usize_land(v___x_377_, v___x_380_);
v___x_382_ = lean_array_uget_borrowed(v_x_361_, v___x_381_);
lean_inc(v___x_382_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 2, v___x_382_);
v___x_384_ = v___x_367_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_key_363_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_value_364_);
lean_ctor_set(v_reuseFailAlloc_387_, 2, v___x_382_);
v___x_384_ = v_reuseFailAlloc_387_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; 
v___x_385_ = lean_array_uset(v_x_361_, v___x_381_, v___x_384_);
v_x_361_ = v___x_385_;
v_x_362_ = v_tail_365_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object* v_i_389_, lean_object* v_source_390_, lean_object* v_target_391_){
_start:
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_array_get_size(v_source_390_);
v___x_393_ = lean_nat_dec_lt(v_i_389_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec_ref(v_source_390_);
lean_dec(v_i_389_);
return v_target_391_;
}
else
{
lean_object* v_es_394_; lean_object* v___x_395_; lean_object* v_source_396_; lean_object* v_target_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_es_394_ = lean_array_fget(v_source_390_, v_i_389_);
v___x_395_ = lean_box(0);
v_source_396_ = lean_array_fset(v_source_390_, v_i_389_, v___x_395_);
v_target_397_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_target_391_, v_es_394_);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_nat_add(v_i_389_, v___x_398_);
lean_dec(v_i_389_);
v_i_389_ = v___x_399_;
v_source_390_ = v_source_396_;
v_target_391_ = v_target_397_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object* v_data_401_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_nbuckets_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_402_ = lean_array_get_size(v_data_401_);
v___x_403_ = lean_unsigned_to_nat(2u);
v_nbuckets_404_ = lean_nat_mul(v___x_402_, v___x_403_);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_box(0);
v___x_407_ = lean_mk_array(v_nbuckets_404_, v___x_406_);
v___x_408_ = lean_array_propagate_mark(v_data_401_, v___x_407_);
v___x_409_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v___x_405_, v_data_401_, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object* v_m_410_, lean_object* v_a_411_, lean_object* v_b_412_){
_start:
{
lean_object* v_size_413_; lean_object* v_buckets_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_457_; 
v_size_413_ = lean_ctor_get(v_m_410_, 0);
v_buckets_414_ = lean_ctor_get(v_m_410_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_m_410_);
if (v_isSharedCheck_457_ == 0)
{
v___x_416_ = v_m_410_;
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_buckets_414_);
lean_inc(v_size_413_);
lean_dec(v_m_410_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; uint64_t v___x_421_; uint64_t v_fold_422_; uint64_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; size_t v___x_429_; size_t v___x_430_; lean_object* v_bkt_431_; uint8_t v___x_432_; 
v___x_418_ = lean_array_get_size(v_buckets_414_);
v___x_419_ = l_Lean_ExprStructEq_hash(v_a_411_);
v___x_420_ = 32ULL;
v___x_421_ = lean_uint64_shift_right(v___x_419_, v___x_420_);
v_fold_422_ = lean_uint64_xor(v___x_419_, v___x_421_);
v___x_423_ = 16ULL;
v___x_424_ = lean_uint64_shift_right(v_fold_422_, v___x_423_);
v___x_425_ = lean_uint64_xor(v_fold_422_, v___x_424_);
v___x_426_ = lean_uint64_to_usize(v___x_425_);
v___x_427_ = lean_usize_of_nat(v___x_418_);
v___x_428_ = ((size_t)1ULL);
v___x_429_ = lean_usize_sub(v___x_427_, v___x_428_);
v___x_430_ = lean_usize_land(v___x_426_, v___x_429_);
v_bkt_431_ = lean_array_uget_borrowed(v_buckets_414_, v___x_430_);
v___x_432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_411_, v_bkt_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v_size_x27_434_; lean_object* v___x_435_; lean_object* v_buckets_x27_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_433_ = lean_unsigned_to_nat(1u);
v_size_x27_434_ = lean_nat_add(v_size_413_, v___x_433_);
lean_dec(v_size_413_);
lean_inc(v_bkt_431_);
v___x_435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_435_, 0, v_a_411_);
lean_ctor_set(v___x_435_, 1, v_b_412_);
lean_ctor_set(v___x_435_, 2, v_bkt_431_);
v_buckets_x27_436_ = lean_array_uset(v_buckets_414_, v___x_430_, v___x_435_);
v___x_437_ = lean_unsigned_to_nat(4u);
v___x_438_ = lean_nat_mul(v_size_x27_434_, v___x_437_);
v___x_439_ = lean_unsigned_to_nat(3u);
v___x_440_ = lean_nat_div(v___x_438_, v___x_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_array_get_size(v_buckets_x27_436_);
v___x_442_ = lean_nat_dec_le(v___x_440_, v___x_441_);
lean_dec(v___x_440_);
if (v___x_442_ == 0)
{
lean_object* v_val_443_; lean_object* v___x_445_; 
v_val_443_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_buckets_x27_436_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v_val_443_);
lean_ctor_set(v___x_416_, 0, v_size_x27_434_);
v___x_445_ = v___x_416_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_size_x27_434_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_val_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
else
{
lean_object* v___x_448_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v_buckets_x27_436_);
lean_ctor_set(v___x_416_, 0, v_size_x27_434_);
v___x_448_ = v___x_416_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_size_x27_434_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_buckets_x27_436_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v___x_450_; lean_object* v_buckets_x27_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
lean_inc(v_bkt_431_);
v___x_450_ = lean_box(0);
v_buckets_x27_451_ = lean_array_uset(v_buckets_414_, v___x_430_, v___x_450_);
v___x_452_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_411_, v_b_412_, v_bkt_431_);
v___x_453_ = lean_array_uset(v_buckets_x27_451_, v___x_430_, v___x_452_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v___x_453_);
v___x_455_ = v___x_416_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_size_413_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object* v_decl_458_, uint8_t v_isLet_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v___x_463_; lean_object* v_fst_465_; lean_object* v_snd_466_; lean_object* v_givenNames_469_; lean_object* v_decls_470_; lean_object* v_valueMap_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_489_; 
v___x_463_ = lean_st_ref_take(v___y_461_);
v_givenNames_469_ = lean_ctor_get(v___x_463_, 0);
v_decls_470_ = lean_ctor_get(v___x_463_, 1);
v_valueMap_471_ = lean_ctor_get(v___x_463_, 2);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_489_ == 0)
{
v___x_473_ = v___x_463_;
v_isShared_474_ = v_isSharedCheck_489_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_valueMap_471_);
lean_inc(v_decls_470_);
lean_inc(v_givenNames_469_);
lean_dec(v___x_463_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_489_;
goto v_resetjp_472_;
}
v___jp_464_:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_st_ref_put(v___y_461_, v_snd_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_fst_465_);
return v___x_468_;
}
v_resetjp_472_:
{
uint8_t v_merge_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_merge_475_ = lean_ctor_get_uint8(v___y_460_, 6);
v___x_476_ = lean_box(0);
lean_inc_ref(v_decl_458_);
v___x_477_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_477_, 0, v_decl_458_);
lean_ctor_set_uint8(v___x_477_, sizeof(void*)*1, v_isLet_459_);
v___x_478_ = lean_array_push(v_decls_470_, v___x_477_);
if (v_merge_475_ == 0)
{
lean_object* v___x_480_; 
lean_dec_ref(v_decl_458_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 1, v___x_478_);
v___x_480_ = v___x_473_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_givenNames_469_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_valueMap_471_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
v_fst_465_ = v___x_476_;
v_snd_466_ = v___x_480_;
goto v___jp_464_;
}
}
else
{
uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_482_ = 0;
v___x_483_ = l_Lean_LocalDecl_value(v_decl_458_, v___x_482_);
v___x_484_ = l_Lean_LocalDecl_fvarId(v_decl_458_);
lean_dec_ref(v_decl_458_);
v___x_485_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_471_, v___x_483_, v___x_484_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 2, v___x_485_);
lean_ctor_set(v___x_473_, 1, v___x_478_);
v___x_487_ = v___x_473_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_givenNames_469_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_488_, 2, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
v_fst_465_ = v___x_476_;
v_snd_466_ = v___x_487_;
goto v___jp_464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object* v_decl_490_, lean_object* v_isLet_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
uint8_t v_isLet_boxed_495_; lean_object* v_res_496_; 
v_isLet_boxed_495_ = lean_unbox(v_isLet_491_);
v_res_496_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_490_, v_isLet_boxed_495_, v___y_492_, v___y_493_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object* v_decl_497_, uint8_t v_isLet_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_497_, v_isLet_498_, v___y_499_, v___y_501_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object* v_decl_508_, lean_object* v_isLet_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
uint8_t v_isLet_boxed_518_; lean_object* v_res_519_; 
v_isLet_boxed_518_ = lean_unbox(v_isLet_509_);
v_res_519_ = l_Lean_Meta_ExtractLets_addDecl(v_decl_508_, v_isLet_boxed_518_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object* v_00_u03b2_520_, lean_object* v_m_521_, lean_object* v_a_522_, lean_object* v_b_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_m_521_, v_a_522_, v_b_523_);
return v___x_524_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object* v_00_u03b2_525_, lean_object* v_a_526_, lean_object* v_x_527_){
_start:
{
uint8_t v___x_528_; 
v___x_528_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_526_, v_x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_529_, lean_object* v_a_530_, lean_object* v_x_531_){
_start:
{
uint8_t v_res_532_; lean_object* v_r_533_; 
v_res_532_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(v_00_u03b2_529_, v_a_530_, v_x_531_);
lean_dec(v_x_531_);
lean_dec_ref(v_a_530_);
v_r_533_ = lean_box(v_res_532_);
return v_r_533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object* v_00_u03b2_534_, lean_object* v_data_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_data_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object* v_00_u03b2_537_, lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v_x_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_538_, v_b_539_, v_x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_542_, lean_object* v_i_543_, lean_object* v_source_544_, lean_object* v_target_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v_i_543_, v_source_544_, v_target_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_x_548_, v_x_549_);
return v___x_550_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object* v___x_551_, lean_object* v_e_552_){
_start:
{
uint8_t v___x_553_; lean_object* v_d_555_; lean_object* v_b_556_; 
v___x_553_ = l_Lean_Expr_hasFVar(v_e_552_);
if (v___x_553_ == 0)
{
return v___x_553_;
}
else
{
switch(lean_obj_tag(v_e_552_))
{
case 7:
{
lean_object* v_binderType_559_; lean_object* v_body_560_; 
v_binderType_559_ = lean_ctor_get(v_e_552_, 1);
v_body_560_ = lean_ctor_get(v_e_552_, 2);
v_d_555_ = v_binderType_559_;
v_b_556_ = v_body_560_;
goto v___jp_554_;
}
case 6:
{
lean_object* v_binderType_561_; lean_object* v_body_562_; 
v_binderType_561_ = lean_ctor_get(v_e_552_, 1);
v_body_562_ = lean_ctor_get(v_e_552_, 2);
v_d_555_ = v_binderType_561_;
v_b_556_ = v_body_562_;
goto v___jp_554_;
}
case 10:
{
lean_object* v_expr_563_; 
v_expr_563_ = lean_ctor_get(v_e_552_, 1);
v_e_552_ = v_expr_563_;
goto _start;
}
case 8:
{
lean_object* v_type_565_; lean_object* v_value_566_; lean_object* v_body_567_; uint8_t v___x_568_; 
v_type_565_ = lean_ctor_get(v_e_552_, 1);
v_value_566_ = lean_ctor_get(v_e_552_, 2);
v_body_567_ = lean_ctor_get(v_e_552_, 3);
v___x_568_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v___x_551_, v_type_565_);
if (v___x_568_ == 0)
{
uint8_t v___x_569_; 
v___x_569_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v___x_551_, v_value_566_);
if (v___x_569_ == 0)
{
v_e_552_ = v_body_567_;
goto _start;
}
else
{
return v___x_553_;
}
}
else
{
return v___x_553_;
}
}
case 5:
{
lean_object* v_fn_571_; lean_object* v_arg_572_; uint8_t v___x_573_; 
v_fn_571_ = lean_ctor_get(v_e_552_, 0);
v_arg_572_ = lean_ctor_get(v_e_552_, 1);
v___x_573_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v___x_551_, v_fn_571_);
if (v___x_573_ == 0)
{
v_e_552_ = v_arg_572_;
goto _start;
}
else
{
return v___x_553_;
}
}
case 11:
{
lean_object* v_struct_575_; 
v_struct_575_ = lean_ctor_get(v_e_552_, 2);
v_e_552_ = v_struct_575_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_577_; uint8_t v___x_578_; 
v_fvarId_577_ = lean_ctor_get(v_e_552_, 0);
v___x_578_ = l_Lean_FVarIdSet_contains(v___x_551_, v_fvarId_577_);
return v___x_578_;
}
default: 
{
uint8_t v___x_579_; 
v___x_579_ = 0;
return v___x_579_;
}
}
}
v___jp_554_:
{
uint8_t v___x_557_; 
v___x_557_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v___x_551_, v_d_555_);
if (v___x_557_ == 0)
{
v_e_552_ = v_b_556_;
goto _start;
}
else
{
return v___x_553_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object* v___x_580_, lean_object* v_e_581_){
_start:
{
uint8_t v_res_582_; lean_object* v_r_583_; 
v_res_582_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v___x_580_, v_e_581_);
lean_dec_ref(v_e_581_);
lean_dec(v___x_580_);
v_r_583_ = lean_box(v_res_582_);
return v_r_583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg(lean_object* v_as_584_, size_t v_sz_585_, size_t v_i_586_, lean_object* v_b_587_){
_start:
{
lean_object* v_a_590_; uint8_t v___x_594_; 
v___x_594_ = lean_usize_dec_lt(v_i_586_, v_sz_585_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v_b_587_);
return v___x_595_;
}
else
{
lean_object* v_snd_596_; lean_object* v_fst_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_631_; 
v_snd_596_ = lean_ctor_get(v_b_587_, 1);
v_fst_597_ = lean_ctor_get(v_b_587_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_b_587_);
if (v_isSharedCheck_631_ == 0)
{
v___x_599_ = v_b_587_;
v_isShared_600_ = v_isSharedCheck_631_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_snd_596_);
lean_inc(v_fst_597_);
lean_dec(v_b_587_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_631_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v_fst_601_; lean_object* v_snd_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_630_; 
v_fst_601_ = lean_ctor_get(v_snd_596_, 0);
v_snd_602_ = lean_ctor_get(v_snd_596_, 1);
v_isSharedCheck_630_ = !lean_is_exclusive(v_snd_596_);
if (v_isSharedCheck_630_ == 0)
{
v___x_604_ = v_snd_596_;
v_isShared_605_ = v_isSharedCheck_630_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_snd_602_);
lean_inc(v_fst_601_);
lean_dec(v_snd_596_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_630_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v_a_606_; lean_object* v_decl_607_; uint8_t v___y_609_; lean_object* v___x_626_; uint8_t v___x_627_; 
v_a_606_ = lean_array_uget_borrowed(v_as_584_, v_i_586_);
v_decl_607_ = lean_ctor_get(v_a_606_, 0);
v___x_626_ = l_Lean_LocalDecl_type(v_decl_607_);
v___x_627_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v_fst_597_, v___x_626_);
lean_dec_ref(v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_628_ = l_Lean_LocalDecl_value(v_decl_607_, v___x_627_);
v___x_629_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v_fst_597_, v___x_628_);
lean_dec_ref(v___x_628_);
v___y_609_ = v___x_629_;
goto v___jp_608_;
}
else
{
v___y_609_ = v___x_627_;
goto v___jp_608_;
}
v___jp_608_:
{
if (v___y_609_ == 0)
{
lean_object* v___x_610_; lean_object* v___x_612_; 
lean_inc(v_a_606_);
v___x_610_ = lean_array_push(v_fst_601_, v_a_606_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 0, v___x_610_);
v___x_612_ = v___x_604_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_snd_602_);
v___x_612_ = v_reuseFailAlloc_616_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_614_; 
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_612_);
v___x_614_ = v___x_599_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_fst_597_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
v_a_590_ = v___x_614_;
goto v___jp_589_;
}
}
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_621_; 
lean_inc(v_a_606_);
v___x_617_ = lean_array_push(v_snd_602_, v_a_606_);
v___x_618_ = l_Lean_LocalDecl_fvarId(v_decl_607_);
v___x_619_ = l_Lean_FVarIdSet_insert(v_fst_597_, v___x_618_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 1, v___x_617_);
v___x_621_ = v___x_604_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_fst_601_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v___x_617_);
v___x_621_ = v_reuseFailAlloc_625_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_621_);
lean_ctor_set(v___x_599_, 0, v___x_619_);
v___x_623_ = v___x_599_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v_a_590_ = v___x_623_;
goto v___jp_589_;
}
}
}
}
}
}
}
v___jp_589_:
{
size_t v___x_591_; size_t v___x_592_; 
v___x_591_ = ((size_t)1ULL);
v___x_592_ = lean_usize_add(v_i_586_, v___x_591_);
v_i_586_ = v___x_592_;
v_b_587_ = v_a_590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg___boxed(lean_object* v_as_632_, lean_object* v_sz_633_, lean_object* v_i_634_, lean_object* v_b_635_, lean_object* v___y_636_){
_start:
{
size_t v_sz_boxed_637_; size_t v_i_boxed_638_; lean_object* v_res_639_; 
v_sz_boxed_637_ = lean_unbox_usize(v_sz_633_);
lean_dec(v_sz_633_);
v_i_boxed_638_ = lean_unbox_usize(v_i_634_);
lean_dec(v_i_634_);
v_res_639_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg(v_as_632_, v_sz_boxed_637_, v_i_boxed_638_, v_b_635_);
lean_dec_ref(v_as_632_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object* v_fvar_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_fvarSet_651_; lean_object* v_fvarSet_652_; lean_object* v___x_653_; lean_object* v_decls_654_; lean_object* v___x_655_; lean_object* v___x_656_; size_t v_sz_657_; size_t v___x_658_; lean_object* v___x_659_; 
v_fvarSet_651_ = lean_box(1);
v_fvarSet_652_ = l_Lean_FVarIdSet_insert(v_fvarSet_651_, v_fvar_642_);
v___x_653_ = lean_st_ref_get(v___y_645_);
v_decls_654_ = lean_ctor_get(v___x_653_, 1);
lean_inc_ref(v_decls_654_);
lean_dec(v___x_653_);
v___x_655_ = ((lean_object*)(l_Lean_Meta_ExtractLets_flushDecls___closed__0));
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v_fvarSet_652_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v_sz_657_ = lean_array_size(v_decls_654_);
v___x_658_ = ((size_t)0ULL);
v___x_659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg(v_decls_654_, v_sz_657_, v___x_658_, v___x_656_);
lean_dec_ref(v_decls_654_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_682_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_682_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_682_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_682_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v_snd_664_; lean_object* v_fst_665_; lean_object* v_snd_666_; lean_object* v___x_667_; lean_object* v_givenNames_668_; lean_object* v_valueMap_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_680_; 
v_snd_664_ = lean_ctor_get(v_a_660_, 1);
lean_inc(v_snd_664_);
lean_dec(v_a_660_);
v_fst_665_ = lean_ctor_get(v_snd_664_, 0);
lean_inc(v_fst_665_);
v_snd_666_ = lean_ctor_get(v_snd_664_, 1);
lean_inc(v_snd_666_);
lean_dec(v_snd_664_);
v___x_667_ = lean_st_ref_take(v___y_645_);
v_givenNames_668_ = lean_ctor_get(v___x_667_, 0);
v_valueMap_669_ = lean_ctor_get(v___x_667_, 2);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; 
v_unused_681_ = lean_ctor_get(v___x_667_, 1);
lean_dec(v_unused_681_);
v___x_671_ = v___x_667_;
v_isShared_672_ = v_isSharedCheck_680_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_valueMap_669_);
lean_inc(v_givenNames_668_);
lean_dec(v___x_667_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_680_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v_fst_665_);
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_givenNames_668_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_fst_665_);
lean_ctor_set(v_reuseFailAlloc_679_, 2, v_valueMap_669_);
v___x_674_ = v_reuseFailAlloc_679_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_st_ref_put(v___y_645_, v___x_674_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v_snd_666_);
v___x_677_ = v___x_662_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_snd_666_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
v_a_683_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_659_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_659_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object* v_fvar_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Meta_ExtractLets_flushDecls(v_fvar_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object* v_as_701_, size_t v_sz_702_, size_t v_i_703_, lean_object* v_b_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___redArg(v_as_701_, v_sz_702_, v_i_703_, v_b_704_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object* v_as_714_, lean_object* v_sz_715_, lean_object* v_i_716_, lean_object* v_b_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
size_t v_sz_boxed_726_; size_t v_i_boxed_727_; lean_object* v_res_728_; 
v_sz_boxed_726_ = lean_unbox_usize(v_sz_715_);
lean_dec(v_sz_715_);
v_i_boxed_727_ = lean_unbox_usize(v_i_716_);
lean_dec(v_i_716_);
v_res_728_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_as_714_, v_sz_boxed_726_, v_i_boxed_727_, v_b_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec_ref(v_as_714_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object* v_x_729_){
_start:
{
lean_object* v_decl_730_; 
v_decl_730_ = lean_ctor_get(v_x_729_, 0);
lean_inc_ref(v_decl_730_);
return v_decl_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object* v_x_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(v_x_731_);
lean_dec_ref(v_x_731_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object* v_lctx_733_, lean_object* v_x1_734_, lean_object* v_x2_735_){
_start:
{
lean_object* v_decl_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v_decl_736_ = lean_ctor_get(v_x2_735_, 0);
v___x_737_ = l_Lean_LocalDecl_fvarId(v_decl_736_);
v___x_738_ = l_Lean_LocalContext_contains(v_lctx_733_, v___x_737_);
lean_dec(v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; 
v___x_739_ = lean_array_push(v_x1_734_, v_x2_735_);
return v___x_739_;
}
else
{
lean_dec_ref(v_x2_735_);
return v_x1_734_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object* v_lctx_740_, lean_object* v_x1_741_, lean_object* v_x2_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(v_lctx_740_, v_x1_741_, v_x2_742_);
lean_dec_ref(v_lctx_740_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object* v___f_763_, lean_object* v_inst_764_, lean_object* v_inst_765_, lean_object* v_k_766_, lean_object* v_decls_767_, lean_object* v_lctx_768_){
_start:
{
lean_object* v___y_770_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; 
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = lean_array_get_size(v_decls_767_);
v___x_779_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_780_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9));
v___x_781_ = lean_nat_dec_lt(v___x_777_, v___x_778_);
if (v___x_781_ == 0)
{
lean_dec_ref(v_lctx_768_);
lean_dec_ref(v_decls_767_);
v___y_770_ = v___x_779_;
goto v___jp_769_;
}
else
{
lean_object* v___f_782_; uint8_t v___x_783_; 
v___f_782_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_782_, 0, v_lctx_768_);
v___x_783_ = lean_nat_dec_le(v___x_778_, v___x_778_);
if (v___x_783_ == 0)
{
if (v___x_781_ == 0)
{
lean_dec_ref(v___f_782_);
lean_dec_ref(v_decls_767_);
v___y_770_ = v___x_779_;
goto v___jp_769_;
}
else
{
size_t v___x_784_; size_t v___x_785_; lean_object* v___x_786_; 
v___x_784_ = ((size_t)0ULL);
v___x_785_ = lean_usize_of_nat(v___x_778_);
v___x_786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_780_, v___f_782_, v_decls_767_, v___x_784_, v___x_785_, v___x_779_);
v___y_770_ = v___x_786_;
goto v___jp_769_;
}
}
else
{
size_t v___x_787_; size_t v___x_788_; lean_object* v___x_789_; 
v___x_787_ = ((size_t)0ULL);
v___x_788_ = lean_usize_of_nat(v___x_778_);
v___x_789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_780_, v___f_782_, v_decls_767_, v___x_787_, v___x_788_, v___x_779_);
v___y_770_ = v___x_789_;
goto v___jp_769_;
}
}
v___jp_769_:
{
lean_object* v___x_771_; size_t v_sz_772_; size_t v___x_773_; lean_object* v_decls_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_771_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9));
v_sz_772_ = lean_array_size(v___y_770_);
v___x_773_ = ((size_t)0ULL);
v_decls_774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_771_, v___f_763_, v_sz_772_, v___x_773_, v___y_770_);
v___x_775_ = lean_array_to_list(v_decls_774_);
v___x_776_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_764_, v_inst_765_, v___x_775_, v_k_766_);
return v___x_776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object* v_inst_791_, lean_object* v_inst_792_, lean_object* v_inst_793_, lean_object* v_decls_794_, lean_object* v_k_795_){
_start:
{
lean_object* v_toBind_796_; lean_object* v___f_797_; lean_object* v___f_798_; lean_object* v___x_799_; 
v_toBind_796_ = lean_ctor_get(v_inst_791_, 1);
lean_inc(v_toBind_796_);
v___f_797_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0));
v___f_798_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2), 6, 5);
lean_closure_set(v___f_798_, 0, v___f_797_);
lean_closure_set(v___f_798_, 1, v_inst_792_);
lean_closure_set(v___f_798_, 2, v_inst_791_);
lean_closure_set(v___f_798_, 3, v_k_795_);
lean_closure_set(v___f_798_, 4, v_decls_794_);
v___x_799_ = lean_apply_4(v_toBind_796_, lean_box(0), lean_box(0), v_inst_793_, v___f_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object* v_m_800_, lean_object* v_00_u03b1_801_, lean_object* v_inst_802_, lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_decls_805_, lean_object* v_k_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(v_inst_802_, v_inst_803_, v_inst_804_, v_decls_805_, v_k_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object* v_as_808_, size_t v_i_809_, size_t v_stop_810_, lean_object* v_b_811_){
_start:
{
uint8_t v___x_812_; 
v___x_812_ = lean_usize_dec_eq(v_i_809_, v_stop_810_);
if (v___x_812_ == 0)
{
size_t v___x_813_; size_t v___x_814_; lean_object* v___x_815_; lean_object* v_decl_816_; uint8_t v_isLet_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_813_ = ((size_t)1ULL);
v___x_814_ = lean_usize_sub(v_i_809_, v___x_813_);
v___x_815_ = lean_array_uget_borrowed(v_as_808_, v___x_814_);
v_decl_816_ = lean_ctor_get(v___x_815_, 0);
v_isLet_817_ = lean_ctor_get_uint8(v___x_815_, sizeof(void*)*1);
v___x_818_ = l_Lean_LocalDecl_userName(v_decl_816_);
v___x_819_ = l_Lean_LocalDecl_type(v_decl_816_);
v___x_820_ = l_Lean_LocalDecl_value(v_decl_816_, v___x_812_);
lean_inc_ref(v_decl_816_);
v___x_821_ = l_Lean_LocalDecl_toExpr(v_decl_816_);
v___x_822_ = lean_unsigned_to_nat(1u);
v___x_823_ = lean_mk_empty_array_with_capacity(v___x_822_);
v___x_824_ = lean_array_push(v___x_823_, v___x_821_);
v___x_825_ = lean_expr_abstract(v_b_811_, v___x_824_);
lean_dec_ref(v___x_824_);
lean_dec_ref(v_b_811_);
if (v_isLet_817_ == 0)
{
uint8_t v___x_826_; lean_object* v___x_827_; 
v___x_826_ = 1;
v___x_827_ = l_Lean_Expr_letE___override(v___x_818_, v___x_819_, v___x_820_, v___x_825_, v___x_826_);
v_i_809_ = v___x_814_;
v_b_811_ = v___x_827_;
goto _start;
}
else
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_Expr_letE___override(v___x_818_, v___x_819_, v___x_820_, v___x_825_, v___x_812_);
v_i_809_ = v___x_814_;
v_b_811_ = v___x_829_;
goto _start;
}
}
else
{
return v_b_811_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object* v_as_831_, lean_object* v_i_832_, lean_object* v_stop_833_, lean_object* v_b_834_){
_start:
{
size_t v_i_boxed_835_; size_t v_stop_boxed_836_; lean_object* v_res_837_; 
v_i_boxed_835_ = lean_unbox_usize(v_i_832_);
lean_dec(v_i_832_);
v_stop_boxed_836_ = lean_unbox_usize(v_stop_833_);
lean_dec(v_stop_833_);
v_res_837_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_as_831_, v_i_boxed_835_, v_stop_boxed_836_, v_b_834_);
lean_dec_ref(v_as_831_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object* v_decls_838_, lean_object* v_e_839_){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_840_ = lean_array_get_size(v_decls_838_);
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_nat_dec_lt(v___x_841_, v___x_840_);
if (v___x_842_ == 0)
{
return v_e_839_;
}
else
{
size_t v___x_843_; size_t v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_usize_of_nat(v___x_840_);
v___x_844_ = ((size_t)0ULL);
v___x_845_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_decls_838_, v___x_843_, v___x_844_, v_e_839_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object* v_decls_846_, lean_object* v_e_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_846_, v_e_847_);
lean_dec_ref(v_decls_846_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object* v_fvarId_849_, size_t v_sz_850_, size_t v_i_851_, lean_object* v_bs_852_){
_start:
{
uint8_t v___x_853_; 
v___x_853_ = lean_usize_dec_lt(v_i_851_, v_sz_850_);
if (v___x_853_ == 0)
{
return v_bs_852_;
}
else
{
lean_object* v_v_854_; lean_object* v_decl_855_; lean_object* v___x_856_; lean_object* v_bs_x27_857_; lean_object* v___y_859_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_v_854_ = lean_array_uget(v_bs_852_, v_i_851_);
v_decl_855_ = lean_ctor_get(v_v_854_, 0);
v___x_856_ = lean_unsigned_to_nat(0u);
v_bs_x27_857_ = lean_array_uset(v_bs_852_, v_i_851_, v___x_856_);
v___x_864_ = l_Lean_LocalDecl_fvarId(v_decl_855_);
v___x_865_ = l_Lean_instBEqFVarId_beq(v___x_864_, v_fvarId_849_);
lean_dec(v___x_864_);
if (v___x_865_ == 0)
{
v___y_859_ = v_v_854_;
goto v___jp_858_;
}
else
{
lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_inc_ref(v_decl_855_);
v_isSharedCheck_872_ = !lean_is_exclusive(v_v_854_);
if (v_isSharedCheck_872_ == 0)
{
lean_object* v_unused_873_; 
v_unused_873_ = lean_ctor_get(v_v_854_, 0);
lean_dec(v_unused_873_);
v___x_867_ = v_v_854_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_dec(v_v_854_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_decl_855_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
lean_ctor_set_uint8(v___x_870_, sizeof(void*)*1, v___x_865_);
v___y_859_ = v___x_870_;
goto v___jp_858_;
}
}
}
v___jp_858_:
{
size_t v___x_860_; size_t v___x_861_; lean_object* v___x_862_; 
v___x_860_ = ((size_t)1ULL);
v___x_861_ = lean_usize_add(v_i_851_, v___x_860_);
v___x_862_ = lean_array_uset(v_bs_x27_857_, v_i_851_, v___y_859_);
v_i_851_ = v___x_861_;
v_bs_852_ = v___x_862_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object* v_fvarId_874_, lean_object* v_sz_875_, lean_object* v_i_876_, lean_object* v_bs_877_){
_start:
{
size_t v_sz_boxed_878_; size_t v_i_boxed_879_; lean_object* v_res_880_; 
v_sz_boxed_878_ = lean_unbox_usize(v_sz_875_);
lean_dec(v_sz_875_);
v_i_boxed_879_ = lean_unbox_usize(v_i_876_);
lean_dec(v_i_876_);
v_res_880_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_874_, v_sz_boxed_878_, v_i_boxed_879_, v_bs_877_);
lean_dec(v_fvarId_874_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object* v_fvarId_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___x_884_; lean_object* v_givenNames_885_; lean_object* v_decls_886_; lean_object* v_valueMap_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_900_; 
v___x_884_ = lean_st_ref_take(v___y_882_);
v_givenNames_885_ = lean_ctor_get(v___x_884_, 0);
v_decls_886_ = lean_ctor_get(v___x_884_, 1);
v_valueMap_887_ = lean_ctor_get(v___x_884_, 2);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_900_ == 0)
{
v___x_889_ = v___x_884_;
v_isShared_890_ = v_isSharedCheck_900_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_valueMap_887_);
lean_inc(v_decls_886_);
lean_inc(v_givenNames_885_);
lean_dec(v___x_884_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_900_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; size_t v_sz_892_; size_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_891_ = lean_box(0);
v_sz_892_ = lean_array_size(v_decls_886_);
v___x_893_ = ((size_t)0ULL);
v___x_894_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_881_, v_sz_892_, v___x_893_, v_decls_886_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 1, v___x_894_);
v___x_896_ = v___x_889_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_givenNames_885_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_valueMap_887_);
v___x_896_ = v_reuseFailAlloc_899_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_st_ref_put(v___y_882_, v___x_896_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_891_);
return v___x_898_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object* v_fvarId_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec(v_fvarId_901_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object* v_fvarId_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_905_, v___y_908_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object* v_fvarId_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_Meta_ExtractLets_ensureIsLet(v_fvarId_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v_fvarId_915_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t v_sz_925_, size_t v_i_926_, lean_object* v_bs_927_){
_start:
{
uint8_t v___x_928_; 
v___x_928_ = lean_usize_dec_lt(v_i_926_, v_sz_925_);
if (v___x_928_ == 0)
{
return v_bs_927_;
}
else
{
lean_object* v_v_929_; lean_object* v_decl_930_; lean_object* v___x_931_; lean_object* v_bs_x27_932_; size_t v___x_933_; size_t v___x_934_; lean_object* v___x_935_; 
v_v_929_ = lean_array_uget_borrowed(v_bs_927_, v_i_926_);
v_decl_930_ = lean_ctor_get(v_v_929_, 0);
lean_inc_ref(v_decl_930_);
v___x_931_ = lean_unsigned_to_nat(0u);
v_bs_x27_932_ = lean_array_uset(v_bs_927_, v_i_926_, v___x_931_);
v___x_933_ = ((size_t)1ULL);
v___x_934_ = lean_usize_add(v_i_926_, v___x_933_);
v___x_935_ = lean_array_uset(v_bs_x27_932_, v_i_926_, v_decl_930_);
v_i_926_ = v___x_934_;
v_bs_927_ = v___x_935_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object* v_sz_937_, lean_object* v_i_938_, lean_object* v_bs_939_){
_start:
{
size_t v_sz_boxed_940_; size_t v_i_boxed_941_; lean_object* v_res_942_; 
v_sz_boxed_940_ = lean_unbox_usize(v_sz_937_);
lean_dec(v_sz_937_);
v_i_boxed_941_ = lean_unbox_usize(v_i_938_);
lean_dec(v_i_938_);
v_res_942_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_boxed_940_, v_i_boxed_941_, v_bs_939_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object* v_x_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; 
lean_inc(v___y_946_);
lean_inc(v___y_945_);
lean_inc_ref(v___y_944_);
v___x_952_ = lean_apply_8(v_x_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, lean_box(0));
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_x_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(v_x_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
lean_dec(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object* v_decls_963_, lean_object* v_x_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___f_973_; lean_object* v___x_974_; 
lean_inc(v___y_967_);
lean_inc(v___y_966_);
lean_inc_ref(v___y_965_);
v___f_973_ = lean_alloc_closure((void*)(l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_973_, 0, v_x_964_);
lean_closure_set(v___f_973_, 1, v___y_965_);
lean_closure_set(v___f_973_, 2, v___y_966_);
lean_closure_set(v___f_973_, 3, v___y_967_);
v___x_974_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_963_, v___f_973_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
if (lean_obj_tag(v___x_974_) == 0)
{
return v___x_974_;
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object* v_decls_983_, lean_object* v_x_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_983_, v_x_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object* v___x_994_, lean_object* v_as_995_, size_t v_i_996_, size_t v_stop_997_, lean_object* v_b_998_){
_start:
{
lean_object* v___y_1000_; uint8_t v___x_1004_; 
v___x_1004_ = lean_usize_dec_eq(v_i_996_, v_stop_997_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; lean_object* v_decl_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1005_ = lean_array_uget_borrowed(v_as_995_, v_i_996_);
v_decl_1006_ = lean_ctor_get(v___x_1005_, 0);
v___x_1007_ = l_Lean_LocalDecl_fvarId(v_decl_1006_);
v___x_1008_ = l_Lean_LocalContext_contains(v___x_994_, v___x_1007_);
lean_dec(v___x_1007_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; 
lean_inc(v___x_1005_);
v___x_1009_ = lean_array_push(v_b_998_, v___x_1005_);
v___y_1000_ = v___x_1009_;
goto v___jp_999_;
}
else
{
v___y_1000_ = v_b_998_;
goto v___jp_999_;
}
}
else
{
return v_b_998_;
}
v___jp_999_:
{
size_t v___x_1001_; size_t v___x_1002_; 
v___x_1001_ = ((size_t)1ULL);
v___x_1002_ = lean_usize_add(v_i_996_, v___x_1001_);
v_i_996_ = v___x_1002_;
v_b_998_ = v___y_1000_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object* v___x_1010_, lean_object* v_as_1011_, lean_object* v_i_1012_, lean_object* v_stop_1013_, lean_object* v_b_1014_){
_start:
{
size_t v_i_boxed_1015_; size_t v_stop_boxed_1016_; lean_object* v_res_1017_; 
v_i_boxed_1015_ = lean_unbox_usize(v_i_1012_);
lean_dec(v_i_1012_);
v_stop_boxed_1016_ = lean_unbox_usize(v_stop_1013_);
lean_dec(v_stop_1013_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v___x_1010_, v_as_1011_, v_i_boxed_1015_, v_stop_boxed_1016_, v_b_1014_);
lean_dec_ref(v_as_1011_);
lean_dec_ref(v___x_1010_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object* v_decls_1018_, lean_object* v_k_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___y_1029_; lean_object* v_lctx_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_lctx_1035_ = lean_ctor_get(v___y_1023_, 2);
v___x_1036_ = lean_unsigned_to_nat(0u);
v___x_1037_ = lean_array_get_size(v_decls_1018_);
v___x_1038_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_1039_ = lean_nat_dec_lt(v___x_1036_, v___x_1037_);
if (v___x_1039_ == 0)
{
v___y_1029_ = v___x_1038_;
goto v___jp_1028_;
}
else
{
size_t v___x_1040_; size_t v___x_1041_; lean_object* v___x_1042_; 
v___x_1040_ = ((size_t)0ULL);
v___x_1041_ = lean_usize_of_nat(v___x_1037_);
v___x_1042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v_lctx_1035_, v_decls_1018_, v___x_1040_, v___x_1041_, v___x_1038_);
v___y_1029_ = v___x_1042_;
goto v___jp_1028_;
}
v___jp_1028_:
{
size_t v_sz_1030_; size_t v___x_1031_; lean_object* v_decls_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_sz_1030_ = lean_array_size(v___y_1029_);
v___x_1031_ = ((size_t)0ULL);
v_decls_1032_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_1030_, v___x_1031_, v___y_1029_);
v___x_1033_ = lean_array_to_list(v_decls_1032_);
v___x_1034_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v___x_1033_, v_k_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
return v___x_1034_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object* v_decls_1043_, lean_object* v_k_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1043_, v_k_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v_decls_1043_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object* v_fvarId_1054_, lean_object* v_as_1055_, lean_object* v_j_1056_){
_start:
{
lean_object* v___x_1057_; uint8_t v___x_1058_; 
v___x_1057_ = lean_array_get_size(v_as_1055_);
v___x_1058_ = lean_nat_dec_lt(v_j_1056_, v___x_1057_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; 
lean_dec(v_j_1056_);
v___x_1059_ = lean_box(0);
return v___x_1059_;
}
else
{
lean_object* v___x_1060_; lean_object* v_decl_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1060_ = lean_array_fget_borrowed(v_as_1055_, v_j_1056_);
v_decl_1061_ = lean_ctor_get(v___x_1060_, 0);
v___x_1062_ = l_Lean_LocalDecl_fvarId(v_decl_1061_);
v___x_1063_ = l_Lean_instBEqFVarId_beq(v___x_1062_, v_fvarId_1054_);
lean_dec(v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = lean_unsigned_to_nat(1u);
v___x_1065_ = lean_nat_add(v_j_1056_, v___x_1064_);
lean_dec(v_j_1056_);
v_j_1056_ = v___x_1065_;
goto _start;
}
else
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1067_, 0, v_j_1056_);
return v___x_1067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object* v_fvarId_1068_, lean_object* v_as_1069_, lean_object* v_j_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1068_, v_as_1069_, v_j_1070_);
lean_dec_ref(v_as_1069_);
lean_dec(v_fvarId_1068_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object* v_fvarId_1072_, lean_object* v_k_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v_lctx_1083_; uint8_t v___x_1084_; 
v___x_1082_ = lean_st_ref_get(v___y_1076_);
v_lctx_1083_ = lean_ctor_get(v___y_1077_, 2);
v___x_1084_ = l_Lean_LocalContext_contains(v_lctx_1083_, v_fvarId_1072_);
if (v___x_1084_ == 0)
{
lean_object* v_decls_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v_decls_1085_ = lean_ctor_get(v___x_1082_, 1);
lean_inc_ref(v_decls_1085_);
lean_dec(v___x_1082_);
v___x_1086_ = lean_unsigned_to_nat(0u);
v___x_1087_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1072_, v_decls_1085_, v___x_1086_);
if (lean_obj_tag(v___x_1087_) == 1)
{
lean_object* v_val_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_val_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_val_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = lean_unsigned_to_nat(1u);
v___x_1090_ = lean_nat_add(v_val_1088_, v___x_1089_);
lean_dec(v_val_1088_);
v___x_1091_ = l_Array_toSubarray___redArg(v_decls_1085_, v___x_1086_, v___x_1090_);
v___x_1092_ = l_Subarray_copy___redArg(v___x_1091_);
v___x_1093_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v___x_1092_, v_k_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec_ref(v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; 
lean_dec(v___x_1087_);
lean_dec_ref(v_decls_1085_);
lean_inc(v___y_1080_);
lean_inc_ref(v___y_1079_);
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
lean_inc(v___y_1076_);
lean_inc(v___y_1075_);
lean_inc_ref(v___y_1074_);
v___x_1094_ = lean_apply_8(v_k_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, lean_box(0));
return v___x_1094_;
}
}
else
{
lean_object* v___x_1095_; 
lean_dec(v___x_1082_);
lean_inc(v___y_1080_);
lean_inc_ref(v___y_1079_);
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
lean_inc(v___y_1076_);
lean_inc(v___y_1075_);
lean_inc_ref(v___y_1074_);
v___x_1095_ = lean_apply_8(v_k_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, lean_box(0));
return v___x_1095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object* v_fvarId_1096_, lean_object* v_k_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1096_, v_k_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v_fvarId_1096_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object* v_00_u03b1_1107_, lean_object* v_fvarId_1108_, lean_object* v_k_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1108_, v_k_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_fvarId_1120_, lean_object* v_k_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Meta_ExtractLets_withDeclInContext(v_00_u03b1_1119_, v_fvarId_1120_, v_k_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v_fvarId_1120_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object* v_00_u03b1_1131_, lean_object* v_decls_1132_, lean_object* v_x_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_1132_, v_x_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1143_, lean_object* v_decls_1144_, lean_object* v_x_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(v_00_u03b1_1143_, v_decls_1144_, v_x_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object* v_00_u03b1_1155_, lean_object* v_decls_1156_, lean_object* v_k_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1156_, v_k_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object* v_00_u03b1_1167_, lean_object* v_decls_1168_, lean_object* v_k_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(v_00_u03b1_1167_, v_decls_1168_, v_k_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec_ref(v_decls_1168_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object* v_e_1179_, lean_object* v___y_1180_){
_start:
{
uint8_t v___x_1182_; 
v___x_1182_ = l_Lean_Expr_hasMVar(v_e_1179_);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_e_1179_);
return v___x_1183_;
}
else
{
lean_object* v___x_1184_; lean_object* v_mctx_1185_; lean_object* v___x_1186_; lean_object* v_fst_1187_; lean_object* v_snd_1188_; lean_object* v___x_1189_; lean_object* v_cache_1190_; lean_object* v_zetaDeltaFVarIds_1191_; lean_object* v_postponed_1192_; lean_object* v_diag_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1202_; 
v___x_1184_ = lean_st_ref_get(v___y_1180_);
v_mctx_1185_ = lean_ctor_get(v___x_1184_, 0);
lean_inc_ref(v_mctx_1185_);
lean_dec(v___x_1184_);
v___x_1186_ = l_Lean_instantiateMVarsCore(v_mctx_1185_, v_e_1179_);
v_fst_1187_ = lean_ctor_get(v___x_1186_, 0);
lean_inc(v_fst_1187_);
v_snd_1188_ = lean_ctor_get(v___x_1186_, 1);
lean_inc(v_snd_1188_);
lean_dec_ref(v___x_1186_);
v___x_1189_ = lean_st_ref_take(v___y_1180_);
v_cache_1190_ = lean_ctor_get(v___x_1189_, 1);
v_zetaDeltaFVarIds_1191_ = lean_ctor_get(v___x_1189_, 2);
v_postponed_1192_ = lean_ctor_get(v___x_1189_, 3);
v_diag_1193_ = lean_ctor_get(v___x_1189_, 4);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1202_ == 0)
{
lean_object* v_unused_1203_; 
v_unused_1203_ = lean_ctor_get(v___x_1189_, 0);
lean_dec(v_unused_1203_);
v___x_1195_ = v___x_1189_;
v_isShared_1196_ = v_isSharedCheck_1202_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_diag_1193_);
lean_inc(v_postponed_1192_);
lean_inc(v_zetaDeltaFVarIds_1191_);
lean_inc(v_cache_1190_);
lean_dec(v___x_1189_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1202_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 0, v_snd_1188_);
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_snd_1188_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_cache_1190_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v_zetaDeltaFVarIds_1191_);
lean_ctor_set(v_reuseFailAlloc_1201_, 3, v_postponed_1192_);
lean_ctor_set(v_reuseFailAlloc_1201_, 4, v_diag_1193_);
v___x_1198_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_st_ref_put(v___y_1180_, v___x_1198_);
v___x_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1200_, 0, v_fst_1187_);
return v___x_1200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object* v_e_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1204_, v___y_1205_);
lean_dec(v___y_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object* v_e_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1208_, v___y_1213_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object* v_e_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(v_e_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object* v_as_1228_, size_t v_i_1229_, size_t v_stop_1230_, lean_object* v_b_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_a_1241_; uint8_t v___x_1247_; 
v___x_1247_ = lean_usize_dec_eq(v_i_1229_, v_stop_1230_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_array_uget_borrowed(v_as_1228_, v_i_1229_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_box(0);
v_a_1241_ = v___x_1249_;
goto v___jp_1240_;
}
else
{
lean_object* v_val_1250_; uint8_t v___y_1252_; uint8_t v___x_1279_; 
v_val_1250_ = lean_ctor_get(v___x_1248_, 0);
v___x_1279_ = l_Lean_LocalDecl_isLet(v_val_1250_, v___x_1247_);
if (v___x_1279_ == 0)
{
v___y_1252_ = v___x_1279_;
goto v___jp_1251_;
}
else
{
uint8_t v___x_1280_; 
v___x_1280_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1250_);
if (v___x_1280_ == 0)
{
v___y_1252_ = v___x_1279_;
goto v___jp_1251_;
}
else
{
goto v___jp_1245_;
}
}
v___jp_1251_:
{
if (v___y_1252_ == 0)
{
goto v___jp_1245_;
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = l_Lean_LocalDecl_value(v_val_1250_, v___x_1247_);
v___x_1254_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1253_, v___y_1236_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1256_; lean_object* v_givenNames_1257_; lean_object* v_decls_1258_; lean_object* v_valueMap_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1270_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1254_, 1);
v___x_1256_ = lean_st_ref_take(v___y_1234_);
v_givenNames_1257_ = lean_ctor_get(v___x_1256_, 0);
v_decls_1258_ = lean_ctor_get(v___x_1256_, 1);
v_valueMap_1259_ = lean_ctor_get(v___x_1256_, 2);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1261_ = v___x_1256_;
v_isShared_1262_ = v_isSharedCheck_1270_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_valueMap_1259_);
lean_inc(v_decls_1258_);
lean_inc(v_givenNames_1257_);
lean_dec(v___x_1256_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1270_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1263_ = lean_box(0);
v___x_1264_ = l_Lean_LocalDecl_fvarId(v_val_1250_);
v___x_1265_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1259_, v_a_1255_, v___x_1264_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 2, v___x_1265_);
v___x_1267_ = v___x_1261_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_givenNames_1257_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_decls_1258_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_st_ref_put(v___y_1234_, v___x_1267_);
v_a_1241_ = v___x_1263_;
goto v___jp_1240_;
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
v_a_1271_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1254_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1254_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v_b_1231_);
return v___x_1281_;
}
v___jp_1240_:
{
size_t v___x_1242_; size_t v___x_1243_; 
v___x_1242_ = ((size_t)1ULL);
v___x_1243_ = lean_usize_add(v_i_1229_, v___x_1242_);
v_i_1229_ = v___x_1243_;
v_b_1231_ = v_a_1241_;
goto _start;
}
v___jp_1245_:
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_box(0);
v_a_1241_ = v___x_1246_;
goto v___jp_1240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_as_1282_, lean_object* v_i_1283_, lean_object* v_stop_1284_, lean_object* v_b_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
size_t v_i_boxed_1294_; size_t v_stop_boxed_1295_; lean_object* v_res_1296_; 
v_i_boxed_1294_ = lean_unbox_usize(v_i_1283_);
lean_dec(v_i_1283_);
v_stop_boxed_1295_ = lean_unbox_usize(v_stop_1284_);
lean_dec(v_stop_1284_);
v_res_1296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1282_, v_i_boxed_1294_, v_stop_boxed_1295_, v_b_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec_ref(v_as_1282_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object* v_as_1297_, size_t v_i_1298_, size_t v_stop_1299_, lean_object* v_b_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_a_1310_; uint8_t v___x_1316_; 
v___x_1316_ = lean_usize_dec_eq(v_i_1298_, v_stop_1299_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_array_uget_borrowed(v_as_1297_, v_i_1298_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_box(0);
v_a_1310_ = v___x_1318_;
goto v___jp_1309_;
}
else
{
lean_object* v_val_1319_; uint8_t v___y_1321_; uint8_t v___x_1348_; 
v_val_1319_ = lean_ctor_get(v___x_1317_, 0);
v___x_1348_ = l_Lean_LocalDecl_isLet(v_val_1319_, v___x_1316_);
if (v___x_1348_ == 0)
{
v___y_1321_ = v___x_1348_;
goto v___jp_1320_;
}
else
{
uint8_t v___x_1349_; 
v___x_1349_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1319_);
if (v___x_1349_ == 0)
{
v___y_1321_ = v___x_1348_;
goto v___jp_1320_;
}
else
{
goto v___jp_1314_;
}
}
v___jp_1320_:
{
if (v___y_1321_ == 0)
{
goto v___jp_1314_;
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = l_Lean_LocalDecl_value(v_val_1319_, v___x_1316_);
v___x_1323_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1322_, v___y_1305_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1325_; lean_object* v_givenNames_1326_; lean_object* v_decls_1327_; lean_object* v_valueMap_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1339_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1325_ = lean_st_ref_take(v___y_1303_);
v_givenNames_1326_ = lean_ctor_get(v___x_1325_, 0);
v_decls_1327_ = lean_ctor_get(v___x_1325_, 1);
v_valueMap_1328_ = lean_ctor_get(v___x_1325_, 2);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1330_ = v___x_1325_;
v_isShared_1331_ = v_isSharedCheck_1339_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_valueMap_1328_);
lean_inc(v_decls_1327_);
lean_inc(v_givenNames_1326_);
lean_dec(v___x_1325_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1339_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1332_ = lean_box(0);
v___x_1333_ = l_Lean_LocalDecl_fvarId(v_val_1319_);
v___x_1334_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1328_, v_a_1324_, v___x_1333_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 2, v___x_1334_);
v___x_1336_ = v___x_1330_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_givenNames_1326_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_decls_1327_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_st_ref_put(v___y_1303_, v___x_1336_);
v_a_1310_ = v___x_1332_;
goto v___jp_1309_;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
v_a_1340_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1323_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1323_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v_b_1300_);
return v___x_1350_;
}
v___jp_1309_:
{
size_t v___x_1311_; size_t v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_add(v_i_1298_, v___x_1311_);
v___x_1313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1297_, v___x_1312_, v_stop_1299_, v_a_1310_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
return v___x_1313_;
}
v___jp_1314_:
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_box(0);
v_a_1310_ = v___x_1315_;
goto v___jp_1309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object* v_as_1351_, lean_object* v_i_1352_, lean_object* v_stop_1353_, lean_object* v_b_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
size_t v_i_boxed_1363_; size_t v_stop_boxed_1364_; lean_object* v_res_1365_; 
v_i_boxed_1363_ = lean_unbox_usize(v_i_1352_);
lean_dec(v_i_1352_);
v_stop_boxed_1364_ = lean_unbox_usize(v_stop_1353_);
lean_dec(v_stop_1353_);
v_res_1365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_as_1351_, v_i_boxed_1363_, v_stop_boxed_1364_, v_b_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec_ref(v_as_1351_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
if (lean_obj_tag(v_x_1366_) == 0)
{
lean_object* v_cs_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1389_; 
v_cs_1375_ = lean_ctor_get(v_x_1366_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_x_1366_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1377_ = v_x_1366_;
v_isShared_1378_ = v_isSharedCheck_1389_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_cs_1375_);
lean_dec(v_x_1366_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1389_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; 
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = lean_array_get_size(v_cs_1375_);
v___x_1381_ = lean_box(0);
v___x_1382_ = lean_nat_dec_lt(v___x_1379_, v___x_1380_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1384_; 
lean_dec_ref(v_cs_1375_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 0, v___x_1381_);
v___x_1384_ = v___x_1377_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1381_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
else
{
size_t v___x_1386_; size_t v___x_1387_; lean_object* v___x_1388_; 
lean_del_object(v___x_1377_);
v___x_1386_ = ((size_t)0ULL);
v___x_1387_ = lean_usize_of_nat(v___x_1380_);
v___x_1388_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1375_, v___x_1386_, v___x_1387_, v___x_1381_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec_ref(v_cs_1375_);
return v___x_1388_;
}
}
}
else
{
lean_object* v_vs_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1404_; 
v_vs_1390_ = lean_ctor_get(v_x_1366_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_x_1366_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1392_ = v_x_1366_;
v_isShared_1393_ = v_isSharedCheck_1404_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_vs_1390_);
lean_dec(v_x_1366_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1404_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1394_ = lean_unsigned_to_nat(0u);
v___x_1395_ = lean_array_get_size(v_vs_1390_);
v___x_1396_ = lean_box(0);
v___x_1397_ = lean_nat_dec_lt(v___x_1394_, v___x_1395_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1399_; 
lean_dec_ref(v_vs_1390_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set_tag(v___x_1392_, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1396_);
v___x_1399_ = v___x_1392_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v___x_1396_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
else
{
size_t v___x_1401_; size_t v___x_1402_; lean_object* v___x_1403_; 
lean_del_object(v___x_1392_);
v___x_1401_ = ((size_t)0ULL);
v___x_1402_ = lean_usize_of_nat(v___x_1395_);
v___x_1403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1390_, v___x_1401_, v___x_1402_, v___x_1396_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec_ref(v_vs_1390_);
return v___x_1403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object* v_as_1405_, size_t v_i_1406_, size_t v_stop_1407_, lean_object* v_b_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v___x_1417_; 
v___x_1417_ = lean_usize_dec_eq(v_i_1406_, v_stop_1407_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_array_uget_borrowed(v_as_1405_, v_i_1406_);
lean_inc(v___x_1418_);
v___x_1419_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v___x_1418_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; size_t v___x_1421_; size_t v___x_1422_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = ((size_t)1ULL);
v___x_1422_ = lean_usize_add(v_i_1406_, v___x_1421_);
v_i_1406_ = v___x_1422_;
v_b_1408_ = v_a_1420_;
goto _start;
}
else
{
return v___x_1419_;
}
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v_b_1408_);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_as_1425_, lean_object* v_i_1426_, lean_object* v_stop_1427_, lean_object* v_b_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
size_t v_i_boxed_1437_; size_t v_stop_boxed_1438_; lean_object* v_res_1439_; 
v_i_boxed_1437_ = lean_unbox_usize(v_i_1426_);
lean_dec(v_i_1426_);
v_stop_boxed_1438_ = lean_unbox_usize(v_stop_1427_);
lean_dec(v_stop_1427_);
v_res_1439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_as_1425_, v_i_boxed_1437_, v_stop_boxed_1438_, v_b_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec_ref(v_as_1425_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_x_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_x_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object* v_t_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_root_1459_; lean_object* v_tail_1460_; lean_object* v___x_1461_; 
v_root_1459_ = lean_ctor_get(v_t_1450_, 0);
lean_inc_ref(v_root_1459_);
v_tail_1460_ = lean_ctor_get(v_t_1450_, 1);
lean_inc_ref(v_tail_1460_);
lean_dec_ref(v_t_1450_);
v___x_1461_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_root_1459_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1475_; 
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1475_ == 0)
{
lean_object* v_unused_1476_; 
v_unused_1476_ = lean_ctor_get(v___x_1461_, 0);
lean_dec(v_unused_1476_);
v___x_1463_ = v___x_1461_;
v_isShared_1464_ = v_isSharedCheck_1475_;
goto v_resetjp_1462_;
}
else
{
lean_dec(v___x_1461_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1475_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; uint8_t v___x_1468_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_array_get_size(v_tail_1460_);
v___x_1467_ = lean_box(0);
v___x_1468_ = lean_nat_dec_lt(v___x_1465_, v___x_1466_);
if (v___x_1468_ == 0)
{
lean_object* v___x_1470_; 
lean_dec_ref(v_tail_1460_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1467_);
v___x_1470_ = v___x_1463_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1467_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
else
{
size_t v___x_1472_; size_t v___x_1473_; lean_object* v___x_1474_; 
lean_del_object(v___x_1463_);
v___x_1472_ = ((size_t)0ULL);
v___x_1473_ = lean_usize_of_nat(v___x_1466_);
v___x_1474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1460_, v___x_1472_, v___x_1473_, v___x_1467_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec_ref(v_tail_1460_);
return v___x_1474_;
}
}
}
else
{
lean_dec_ref(v_tail_1460_);
return v___x_1461_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object* v_t_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
return v_res_1486_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object* v_x_1488_, size_t v_x_1489_, size_t v_x_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
if (lean_obj_tag(v_x_1488_) == 0)
{
lean_object* v_cs_1499_; lean_object* v___x_1500_; size_t v___x_1501_; lean_object* v_j_1502_; lean_object* v___x_1503_; size_t v___x_1504_; size_t v___x_1505_; size_t v___x_1506_; size_t v___x_1507_; size_t v___x_1508_; size_t v___x_1509_; lean_object* v___x_1510_; 
v_cs_1499_ = lean_ctor_get(v_x_1488_, 0);
lean_inc_ref(v_cs_1499_);
lean_dec_ref_known(v_x_1488_, 1);
v___x_1500_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0);
v___x_1501_ = lean_usize_shift_right(v_x_1489_, v_x_1490_);
v_j_1502_ = lean_usize_to_nat(v___x_1501_);
v___x_1503_ = lean_array_get_borrowed(v___x_1500_, v_cs_1499_, v_j_1502_);
v___x_1504_ = ((size_t)1ULL);
v___x_1505_ = lean_usize_shift_left(v___x_1504_, v_x_1490_);
v___x_1506_ = lean_usize_sub(v___x_1505_, v___x_1504_);
v___x_1507_ = lean_usize_land(v_x_1489_, v___x_1506_);
v___x_1508_ = ((size_t)5ULL);
v___x_1509_ = lean_usize_sub(v_x_1490_, v___x_1508_);
lean_inc(v___x_1503_);
v___x_1510_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v___x_1503_, v___x_1507_, v___x_1509_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1525_; 
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; 
v_unused_1526_ = lean_ctor_get(v___x_1510_, 0);
lean_dec(v_unused_1526_);
v___x_1512_ = v___x_1510_;
v_isShared_1513_ = v_isSharedCheck_1525_;
goto v_resetjp_1511_;
}
else
{
lean_dec(v___x_1510_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1525_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1514_ = lean_unsigned_to_nat(1u);
v___x_1515_ = lean_nat_add(v_j_1502_, v___x_1514_);
lean_dec(v_j_1502_);
v___x_1516_ = lean_array_get_size(v_cs_1499_);
v___x_1517_ = lean_box(0);
v___x_1518_ = lean_nat_dec_lt(v___x_1515_, v___x_1516_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1520_; 
lean_dec(v___x_1515_);
lean_dec_ref(v_cs_1499_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1517_);
v___x_1520_ = v___x_1512_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1517_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
else
{
size_t v___x_1522_; size_t v___x_1523_; lean_object* v___x_1524_; 
lean_del_object(v___x_1512_);
v___x_1522_ = lean_usize_of_nat(v___x_1515_);
lean_dec(v___x_1515_);
v___x_1523_ = lean_usize_of_nat(v___x_1516_);
v___x_1524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1499_, v___x_1522_, v___x_1523_, v___x_1517_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec_ref(v_cs_1499_);
return v___x_1524_;
}
}
}
else
{
lean_dec(v_j_1502_);
lean_dec_ref(v_cs_1499_);
return v___x_1510_;
}
}
else
{
lean_object* v_vs_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1541_; 
v_vs_1527_ = lean_ctor_get(v_x_1488_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v_x_1488_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1529_ = v_x_1488_;
v_isShared_1530_ = v_isSharedCheck_1541_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_vs_1527_);
lean_dec(v_x_1488_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1541_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; uint8_t v___x_1534_; 
v___x_1531_ = lean_usize_to_nat(v_x_1489_);
v___x_1532_ = lean_array_get_size(v_vs_1527_);
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_nat_dec_lt(v___x_1531_, v___x_1532_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1536_; 
lean_dec(v___x_1531_);
lean_dec_ref(v_vs_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set_tag(v___x_1529_, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1533_);
v___x_1536_ = v___x_1529_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1533_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
else
{
size_t v___x_1538_; size_t v___x_1539_; lean_object* v___x_1540_; 
lean_del_object(v___x_1529_);
v___x_1538_ = lean_usize_of_nat(v___x_1531_);
lean_dec(v___x_1531_);
v___x_1539_ = lean_usize_of_nat(v___x_1532_);
v___x_1540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1527_, v___x_1538_, v___x_1539_, v___x_1533_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec_ref(v_vs_1527_);
return v___x_1540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object* v_x_1542_, lean_object* v_x_1543_, lean_object* v_x_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
size_t v_x_11865__boxed_1553_; size_t v_x_11866__boxed_1554_; lean_object* v_res_1555_; 
v_x_11865__boxed_1553_ = lean_unbox_usize(v_x_1543_);
lean_dec(v_x_1543_);
v_x_11866__boxed_1554_ = lean_unbox_usize(v_x_1544_);
lean_dec(v_x_1544_);
v_res_1555_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_x_1542_, v_x_11865__boxed_1553_, v_x_11866__boxed_1554_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object* v_t_1556_, lean_object* v_start_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1566_ = lean_unsigned_to_nat(0u);
v___x_1567_ = lean_nat_dec_eq(v_start_1557_, v___x_1566_);
if (v___x_1567_ == 0)
{
lean_object* v_root_1568_; lean_object* v_tail_1569_; size_t v_shift_1570_; lean_object* v_tailOff_1571_; uint8_t v___x_1572_; 
v_root_1568_ = lean_ctor_get(v_t_1556_, 0);
lean_inc_ref(v_root_1568_);
v_tail_1569_ = lean_ctor_get(v_t_1556_, 1);
lean_inc_ref(v_tail_1569_);
v_shift_1570_ = lean_ctor_get_usize(v_t_1556_, 4);
v_tailOff_1571_ = lean_ctor_get(v_t_1556_, 3);
lean_inc(v_tailOff_1571_);
lean_dec_ref(v_t_1556_);
v___x_1572_ = lean_nat_dec_le(v_tailOff_1571_, v_start_1557_);
if (v___x_1572_ == 0)
{
size_t v___x_1573_; lean_object* v___x_1574_; 
lean_dec(v_tailOff_1571_);
v___x_1573_ = lean_usize_of_nat(v_start_1557_);
v___x_1574_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_root_1568_, v___x_1573_, v_shift_1570_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1587_; 
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1587_ == 0)
{
lean_object* v_unused_1588_; 
v_unused_1588_ = lean_ctor_get(v___x_1574_, 0);
lean_dec(v_unused_1588_);
v___x_1576_ = v___x_1574_;
v_isShared_1577_ = v_isSharedCheck_1587_;
goto v_resetjp_1575_;
}
else
{
lean_dec(v___x_1574_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1587_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1578_ = lean_array_get_size(v_tail_1569_);
v___x_1579_ = lean_box(0);
v___x_1580_ = lean_nat_dec_lt(v___x_1566_, v___x_1578_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1582_; 
lean_dec_ref(v_tail_1569_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 0, v___x_1579_);
v___x_1582_ = v___x_1576_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v___x_1579_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
else
{
size_t v___x_1584_; size_t v___x_1585_; lean_object* v___x_1586_; 
lean_del_object(v___x_1576_);
v___x_1584_ = ((size_t)0ULL);
v___x_1585_ = lean_usize_of_nat(v___x_1578_);
v___x_1586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1569_, v___x_1584_, v___x_1585_, v___x_1579_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
lean_dec_ref(v_tail_1569_);
return v___x_1586_;
}
}
}
else
{
lean_dec_ref(v_tail_1569_);
return v___x_1574_;
}
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; uint8_t v___x_1592_; 
lean_dec_ref(v_root_1568_);
v___x_1589_ = lean_nat_sub(v_start_1557_, v_tailOff_1571_);
lean_dec(v_tailOff_1571_);
v___x_1590_ = lean_array_get_size(v_tail_1569_);
v___x_1591_ = lean_box(0);
v___x_1592_ = lean_nat_dec_lt(v___x_1589_, v___x_1590_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; 
lean_dec(v___x_1589_);
lean_dec_ref(v_tail_1569_);
v___x_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
return v___x_1593_;
}
else
{
size_t v___x_1594_; size_t v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = lean_usize_of_nat(v___x_1589_);
lean_dec(v___x_1589_);
v___x_1595_ = lean_usize_of_nat(v___x_1590_);
v___x_1596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1569_, v___x_1594_, v___x_1595_, v___x_1591_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
lean_dec_ref(v_tail_1569_);
return v___x_1596_;
}
}
}
else
{
lean_object* v___x_1597_; 
v___x_1597_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1556_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
return v___x_1597_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object* v_t_1598_, lean_object* v_start_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_t_1598_, v_start_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v_start_1599_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object* v_lctx_1609_, lean_object* v_start_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
lean_object* v_decls_1619_; lean_object* v___x_1620_; 
v_decls_1619_ = lean_ctor_get(v_lctx_1609_, 1);
lean_inc_ref(v_decls_1619_);
lean_dec_ref(v_lctx_1609_);
v___x_1620_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_decls_1619_, v_start_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object* v_lctx_1621_, lean_object* v_start_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1621_, v_start_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v_start_1622_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v_lctx_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v_lctx_1640_ = lean_ctor_get(v___y_1635_, 2);
v___x_1641_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_1640_);
v___x_1642_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1640_, v___x_1641_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_Meta_ExtractLets_initializeValueMap(v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
return v_res_1651_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object* v_e_1653_){
_start:
{
lean_object* v___f_1654_; lean_object* v___x_1655_; 
v___f_1654_ = ((lean_object*)(l_Lean_Meta_ExtractLets_containsLet___closed__0));
v___x_1655_ = lean_find_expr(v___f_1654_, v_e_1653_);
if (lean_obj_tag(v___x_1655_) == 0)
{
uint8_t v___x_1656_; 
v___x_1656_ = 0;
return v___x_1656_;
}
else
{
uint8_t v___x_1657_; 
lean_dec_ref_known(v___x_1655_, 1);
v___x_1657_ = 1;
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object* v_e_1658_){
_start:
{
uint8_t v_res_1659_; lean_object* v_r_1660_; 
v_res_1659_ = l_Lean_Meta_ExtractLets_containsLet(v_e_1658_);
lean_dec_ref(v_e_1658_);
v_r_1660_ = lean_box(v_res_1659_);
return v_r_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object* v_k_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v_b_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v___x_1671_; 
lean_inc(v___y_1669_);
lean_inc_ref(v___y_1668_);
lean_inc(v___y_1667_);
lean_inc_ref(v___y_1666_);
lean_inc(v___y_1664_);
lean_inc(v___y_1663_);
lean_inc_ref(v___y_1662_);
v___x_1671_ = lean_apply_9(v_k_1661_, v_b_1665_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, lean_box(0));
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object* v_k_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v_b_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(v_k_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v_b_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1675_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object* v_name_1683_, uint8_t v_bi_1684_, lean_object* v_type_1685_, lean_object* v_k_1686_, uint8_t v_kind_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___f_1696_; lean_object* v___x_1697_; 
lean_inc(v___y_1690_);
lean_inc(v___y_1689_);
lean_inc_ref(v___y_1688_);
v___f_1696_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1696_, 0, v_k_1686_);
lean_closure_set(v___f_1696_, 1, v___y_1688_);
lean_closure_set(v___f_1696_, 2, v___y_1689_);
lean_closure_set(v___f_1696_, 3, v___y_1690_);
v___x_1697_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1683_, v_bi_1684_, v_type_1685_, v___f_1696_, v_kind_1687_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
if (lean_obj_tag(v___x_1697_) == 0)
{
return v___x_1697_;
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object* v_name_1706_, lean_object* v_bi_1707_, lean_object* v_type_1708_, lean_object* v_k_1709_, lean_object* v_kind_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
uint8_t v_bi_boxed_1719_; uint8_t v_kind_boxed_1720_; lean_object* v_res_1721_; 
v_bi_boxed_1719_ = lean_unbox(v_bi_1707_);
v_kind_boxed_1720_ = lean_unbox(v_kind_1710_);
v_res_1721_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1706_, v_bi_boxed_1719_, v_type_1708_, v_k_1709_, v_kind_boxed_1720_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object* v_00_u03b1_1722_, lean_object* v_name_1723_, uint8_t v_bi_1724_, lean_object* v_type_1725_, lean_object* v_k_1726_, uint8_t v_kind_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1723_, v_bi_1724_, v_type_1725_, v_k_1726_, v_kind_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object* v_00_u03b1_1737_, lean_object* v_name_1738_, lean_object* v_bi_1739_, lean_object* v_type_1740_, lean_object* v_k_1741_, lean_object* v_kind_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
uint8_t v_bi_boxed_1751_; uint8_t v_kind_boxed_1752_; lean_object* v_res_1753_; 
v_bi_boxed_1751_ = lean_unbox(v_bi_1739_);
v_kind_boxed_1752_ = lean_unbox(v_kind_1742_);
v_res_1753_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(v_00_u03b1_1737_, v_name_1738_, v_bi_boxed_1751_, v_type_1740_, v_k_1741_, v_kind_boxed_1752_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_);
lean_dec(v___y_1749_);
lean_dec_ref(v___y_1748_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t v_types_1754_, lean_object* v_e_1755_, lean_object* v___f_1756_, lean_object* v_____r_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
if (v_types_1754_ == 0)
{
lean_object* v___x_1766_; 
lean_inc_ref(v_e_1755_);
v___x_1766_ = l_Lean_Meta_isType(v_e_1755_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1777_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1769_ = v___x_1766_;
v_isShared_1770_ = v_isSharedCheck_1777_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1766_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1777_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
uint8_t v___x_1771_; 
v___x_1771_ = lean_unbox(v_a_1767_);
lean_dec(v_a_1767_);
if (v___x_1771_ == 0)
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
lean_del_object(v___x_1769_);
lean_dec_ref(v_e_1755_);
v___x_1772_ = lean_box(0);
lean_inc(v___y_1764_);
lean_inc_ref(v___y_1763_);
lean_inc(v___y_1762_);
lean_inc_ref(v___y_1761_);
lean_inc(v___y_1760_);
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
v___x_1773_ = lean_apply_9(v___f_1756_, v___x_1772_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, lean_box(0));
return v___x_1773_;
}
else
{
lean_object* v___x_1775_; 
lean_dec_ref(v___f_1756_);
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 0, v_e_1755_);
v___x_1775_ = v___x_1769_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_e_1755_);
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
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec_ref(v___f_1756_);
lean_dec_ref(v_e_1755_);
v_a_1778_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1766_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1766_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec_ref(v_e_1755_);
v___x_1786_ = lean_box(0);
lean_inc(v___y_1764_);
lean_inc_ref(v___y_1763_);
lean_inc(v___y_1762_);
lean_inc_ref(v___y_1761_);
lean_inc(v___y_1760_);
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
v___x_1787_ = lean_apply_9(v___f_1756_, v___x_1786_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, lean_box(0));
return v___x_1787_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object* v_types_1788_, lean_object* v_e_1789_, lean_object* v___f_1790_, lean_object* v_____r_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
uint8_t v_types_boxed_1800_; lean_object* v_res_1801_; 
v_types_boxed_1800_ = lean_unbox(v_types_1788_);
v_res_1801_ = l_Lean_Meta_ExtractLets_extractCore___lam__4(v_types_boxed_1800_, v_e_1789_, v___f_1790_, v_____r_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
return v_res_1801_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_instMonadEIO___redArg();
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object* v_msg_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v_toApplicative_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1882_; 
v___x_1816_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0);
v___x_1817_ = l_StateRefT_x27_instMonad___redArg(v___x_1816_);
v_toApplicative_1818_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v___x_1817_, 1);
lean_dec(v_unused_1883_);
v___x_1820_ = v___x_1817_;
v_isShared_1821_ = v_isSharedCheck_1882_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_toApplicative_1818_);
lean_dec(v___x_1817_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1882_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v_toFunctor_1822_; lean_object* v_toSeq_1823_; lean_object* v_toSeqLeft_1824_; lean_object* v_toSeqRight_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1880_; 
v_toFunctor_1822_ = lean_ctor_get(v_toApplicative_1818_, 0);
v_toSeq_1823_ = lean_ctor_get(v_toApplicative_1818_, 2);
v_toSeqLeft_1824_ = lean_ctor_get(v_toApplicative_1818_, 3);
v_toSeqRight_1825_ = lean_ctor_get(v_toApplicative_1818_, 4);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_toApplicative_1818_);
if (v_isSharedCheck_1880_ == 0)
{
lean_object* v_unused_1881_; 
v_unused_1881_ = lean_ctor_get(v_toApplicative_1818_, 1);
lean_dec(v_unused_1881_);
v___x_1827_ = v_toApplicative_1818_;
v_isShared_1828_ = v_isSharedCheck_1880_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_toSeqRight_1825_);
lean_inc(v_toSeqLeft_1824_);
lean_inc(v_toSeq_1823_);
lean_inc(v_toFunctor_1822_);
lean_dec(v_toApplicative_1818_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1880_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___f_1829_; lean_object* v___f_1830_; lean_object* v___f_1831_; lean_object* v___f_1832_; lean_object* v___x_1833_; lean_object* v___f_1834_; lean_object* v___f_1835_; lean_object* v___f_1836_; lean_object* v___x_1838_; 
v___f_1829_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1));
v___f_1830_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2));
lean_inc_ref(v_toFunctor_1822_);
v___f_1831_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1831_, 0, v_toFunctor_1822_);
v___f_1832_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1832_, 0, v_toFunctor_1822_);
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___f_1831_);
lean_ctor_set(v___x_1833_, 1, v___f_1832_);
v___f_1834_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1834_, 0, v_toSeqRight_1825_);
v___f_1835_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1835_, 0, v_toSeqLeft_1824_);
v___f_1836_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1836_, 0, v_toSeq_1823_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 4, v___f_1834_);
lean_ctor_set(v___x_1827_, 3, v___f_1835_);
lean_ctor_set(v___x_1827_, 2, v___f_1836_);
lean_ctor_set(v___x_1827_, 1, v___f_1829_);
lean_ctor_set(v___x_1827_, 0, v___x_1833_);
v___x_1838_ = v___x_1827_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v___f_1829_);
lean_ctor_set(v_reuseFailAlloc_1879_, 2, v___f_1836_);
lean_ctor_set(v_reuseFailAlloc_1879_, 3, v___f_1835_);
lean_ctor_set(v_reuseFailAlloc_1879_, 4, v___f_1834_);
v___x_1838_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1840_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___f_1830_);
lean_ctor_set(v___x_1820_, 0, v___x_1838_);
v___x_1840_ = v___x_1820_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1838_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v___f_1830_);
v___x_1840_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
lean_object* v___x_1841_; lean_object* v_toApplicative_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1876_; 
v___x_1841_ = l_StateRefT_x27_instMonad___redArg(v___x_1840_);
v_toApplicative_1842_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1876_ == 0)
{
lean_object* v_unused_1877_; 
v_unused_1877_ = lean_ctor_get(v___x_1841_, 1);
lean_dec(v_unused_1877_);
v___x_1844_ = v___x_1841_;
v_isShared_1845_ = v_isSharedCheck_1876_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_toApplicative_1842_);
lean_dec(v___x_1841_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1876_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v_toFunctor_1846_; lean_object* v_toSeq_1847_; lean_object* v_toSeqLeft_1848_; lean_object* v_toSeqRight_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1874_; 
v_toFunctor_1846_ = lean_ctor_get(v_toApplicative_1842_, 0);
v_toSeq_1847_ = lean_ctor_get(v_toApplicative_1842_, 2);
v_toSeqLeft_1848_ = lean_ctor_get(v_toApplicative_1842_, 3);
v_toSeqRight_1849_ = lean_ctor_get(v_toApplicative_1842_, 4);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_toApplicative_1842_);
if (v_isSharedCheck_1874_ == 0)
{
lean_object* v_unused_1875_; 
v_unused_1875_ = lean_ctor_get(v_toApplicative_1842_, 1);
lean_dec(v_unused_1875_);
v___x_1851_ = v_toApplicative_1842_;
v_isShared_1852_ = v_isSharedCheck_1874_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_toSeqRight_1849_);
lean_inc(v_toSeqLeft_1848_);
lean_inc(v_toSeq_1847_);
lean_inc(v_toFunctor_1846_);
lean_dec(v_toApplicative_1842_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1874_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___f_1853_; lean_object* v___f_1854_; lean_object* v___f_1855_; lean_object* v___f_1856_; lean_object* v___x_1857_; lean_object* v___f_1858_; lean_object* v___f_1859_; lean_object* v___f_1860_; lean_object* v___x_1862_; 
v___f_1853_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3));
v___f_1854_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4));
lean_inc_ref(v_toFunctor_1846_);
v___f_1855_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1855_, 0, v_toFunctor_1846_);
v___f_1856_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1856_, 0, v_toFunctor_1846_);
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___f_1855_);
lean_ctor_set(v___x_1857_, 1, v___f_1856_);
v___f_1858_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1858_, 0, v_toSeqRight_1849_);
v___f_1859_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1859_, 0, v_toSeqLeft_1848_);
v___f_1860_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1860_, 0, v_toSeq_1847_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 4, v___f_1858_);
lean_ctor_set(v___x_1851_, 3, v___f_1859_);
lean_ctor_set(v___x_1851_, 2, v___f_1860_);
lean_ctor_set(v___x_1851_, 1, v___f_1853_);
lean_ctor_set(v___x_1851_, 0, v___x_1857_);
v___x_1862_ = v___x_1851_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1857_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___f_1853_);
lean_ctor_set(v_reuseFailAlloc_1873_, 2, v___f_1860_);
lean_ctor_set(v_reuseFailAlloc_1873_, 3, v___f_1859_);
lean_ctor_set(v_reuseFailAlloc_1873_, 4, v___f_1858_);
v___x_1862_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1864_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 1, v___f_1854_);
lean_ctor_set(v___x_1844_, 0, v___x_1862_);
v___x_1864_ = v___x_1844_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v___f_1854_);
v___x_1864_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_40547__overap_1870_; lean_object* v___x_1871_; 
v___x_1865_ = l_StateRefT_x27_instMonad___redArg(v___x_1864_);
v___x_1866_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_1865_);
v___x_1867_ = l_Lean_instInhabitedExpr;
v___x_1868_ = l_instInhabitedOfMonad___redArg(v___x_1866_, v___x_1867_);
v___x_1869_ = l_instInhabitedReaderT___redArg(v___x_1868_);
v___x_40547__overap_1870_ = lean_panic_fn_borrowed(v___x_1869_, v_msg_1807_);
lean_dec(v___x_1869_);
lean_inc(v___y_1814_);
lean_inc_ref(v___y_1813_);
lean_inc(v___y_1812_);
lean_inc_ref(v___y_1811_);
lean_inc(v___y_1810_);
lean_inc(v___y_1809_);
lean_inc_ref(v___y_1808_);
v___x_1871_ = lean_apply_8(v___x_40547__overap_1870_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, lean_box(0));
return v___x_1871_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object* v_msg_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v_msg_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object* v_binderType_1894_, lean_object* v_binderName_1895_, uint8_t v_binderInfo_1896_, lean_object* v_body_1897_, lean_object* v_e_1898_, lean_object* v_t_1899_, lean_object* v_b_1900_){
_start:
{
size_t v___x_1901_; size_t v___x_1902_; uint8_t v___x_1903_; 
v___x_1901_ = lean_ptr_addr(v_binderType_1894_);
v___x_1902_ = lean_ptr_addr(v_t_1899_);
v___x_1903_ = lean_usize_dec_eq(v___x_1901_, v___x_1902_);
if (v___x_1903_ == 0)
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lean_Expr_lam___override(v_binderName_1895_, v_t_1899_, v_b_1900_, v_binderInfo_1896_);
return v___x_1904_;
}
else
{
size_t v___x_1905_; size_t v___x_1906_; uint8_t v___x_1907_; 
v___x_1905_ = lean_ptr_addr(v_body_1897_);
v___x_1906_ = lean_ptr_addr(v_b_1900_);
v___x_1907_ = lean_usize_dec_eq(v___x_1905_, v___x_1906_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Expr_lam___override(v_binderName_1895_, v_t_1899_, v_b_1900_, v_binderInfo_1896_);
return v___x_1908_;
}
else
{
uint8_t v___x_1909_; 
v___x_1909_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1896_, v_binderInfo_1896_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Lean_Expr_lam___override(v_binderName_1895_, v_t_1899_, v_b_1900_, v_binderInfo_1896_);
return v___x_1910_;
}
else
{
lean_dec_ref(v_b_1900_);
lean_dec_ref(v_t_1899_);
lean_dec(v_binderName_1895_);
lean_inc_ref(v_e_1898_);
return v_e_1898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object* v_binderType_1911_, lean_object* v_binderName_1912_, lean_object* v_binderInfo_1913_, lean_object* v_body_1914_, lean_object* v_e_1915_, lean_object* v_t_1916_, lean_object* v_b_1917_){
_start:
{
uint8_t v_binderInfo_44274__boxed_1918_; lean_object* v_res_1919_; 
v_binderInfo_44274__boxed_1918_ = lean_unbox(v_binderInfo_1913_);
v_res_1919_ = l_Lean_Meta_ExtractLets_extractCore___lam__0(v_binderType_1911_, v_binderName_1912_, v_binderInfo_44274__boxed_1918_, v_body_1914_, v_e_1915_, v_t_1916_, v_b_1917_);
lean_dec_ref(v_e_1915_);
lean_dec_ref(v_body_1914_);
lean_dec_ref(v_binderType_1911_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object* v_binderType_1920_, lean_object* v_binderName_1921_, uint8_t v_binderInfo_1922_, lean_object* v_body_1923_, lean_object* v_e_1924_, lean_object* v_t_1925_, lean_object* v_b_1926_){
_start:
{
size_t v___x_1927_; size_t v___x_1928_; uint8_t v___x_1929_; 
v___x_1927_ = lean_ptr_addr(v_binderType_1920_);
v___x_1928_ = lean_ptr_addr(v_t_1925_);
v___x_1929_ = lean_usize_dec_eq(v___x_1927_, v___x_1928_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_Expr_forallE___override(v_binderName_1921_, v_t_1925_, v_b_1926_, v_binderInfo_1922_);
return v___x_1930_;
}
else
{
size_t v___x_1931_; size_t v___x_1932_; uint8_t v___x_1933_; 
v___x_1931_ = lean_ptr_addr(v_body_1923_);
v___x_1932_ = lean_ptr_addr(v_b_1926_);
v___x_1933_ = lean_usize_dec_eq(v___x_1931_, v___x_1932_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_Expr_forallE___override(v_binderName_1921_, v_t_1925_, v_b_1926_, v_binderInfo_1922_);
return v___x_1934_;
}
else
{
uint8_t v___x_1935_; 
v___x_1935_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1922_, v_binderInfo_1922_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; 
v___x_1936_ = l_Lean_Expr_forallE___override(v_binderName_1921_, v_t_1925_, v_b_1926_, v_binderInfo_1922_);
return v___x_1936_;
}
else
{
lean_dec_ref(v_b_1926_);
lean_dec_ref(v_t_1925_);
lean_dec(v_binderName_1921_);
lean_inc_ref(v_e_1924_);
return v_e_1924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object* v_binderType_1937_, lean_object* v_binderName_1938_, lean_object* v_binderInfo_1939_, lean_object* v_body_1940_, lean_object* v_e_1941_, lean_object* v_t_1942_, lean_object* v_b_1943_){
_start:
{
uint8_t v_binderInfo_44306__boxed_1944_; lean_object* v_res_1945_; 
v_binderInfo_44306__boxed_1944_ = lean_unbox(v_binderInfo_1939_);
v_res_1945_ = l_Lean_Meta_ExtractLets_extractCore___lam__1(v_binderType_1937_, v_binderName_1938_, v_binderInfo_44306__boxed_1944_, v_body_1940_, v_e_1941_, v_t_1942_, v_b_1943_);
lean_dec_ref(v_e_1941_);
lean_dec_ref(v_body_1940_);
lean_dec_ref(v_binderType_1937_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object* v_name_1946_, lean_object* v_type_1947_, lean_object* v_val_1948_, lean_object* v_k_1949_, uint8_t v_nondep_1950_, uint8_t v_kind_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
lean_object* v___f_1960_; lean_object* v___x_1961_; 
lean_inc(v___y_1954_);
lean_inc(v___y_1953_);
lean_inc_ref(v___y_1952_);
v___f_1960_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1960_, 0, v_k_1949_);
lean_closure_set(v___f_1960_, 1, v___y_1952_);
lean_closure_set(v___f_1960_, 2, v___y_1953_);
lean_closure_set(v___f_1960_, 3, v___y_1954_);
v___x_1961_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1946_, v_type_1947_, v_val_1948_, v___f_1960_, v_nondep_1950_, v_kind_1951_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
if (lean_obj_tag(v___x_1961_) == 0)
{
return v___x_1961_;
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object* v_name_1970_, lean_object* v_type_1971_, lean_object* v_val_1972_, lean_object* v_k_1973_, lean_object* v_nondep_1974_, lean_object* v_kind_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
uint8_t v_nondep_boxed_1984_; uint8_t v_kind_boxed_1985_; lean_object* v_res_1986_; 
v_nondep_boxed_1984_ = lean_unbox(v_nondep_1974_);
v_kind_boxed_1985_ = lean_unbox(v_kind_1975_);
v_res_1986_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_1970_, v_type_1971_, v_val_1972_, v_k_1973_, v_nondep_boxed_1984_, v_kind_boxed_1985_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object* v_msg_1987_){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = l_Lean_instInhabitedExpr;
v___x_1989_ = lean_panic_fn_borrowed(v___x_1988_, v_msg_1987_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object* v_a_1990_, lean_object* v_x_1991_){
_start:
{
if (lean_obj_tag(v_x_1991_) == 0)
{
lean_object* v___x_1992_; 
v___x_1992_ = lean_box(0);
return v___x_1992_;
}
else
{
lean_object* v_key_1993_; lean_object* v_value_1994_; lean_object* v_tail_1995_; uint8_t v___x_1996_; 
v_key_1993_ = lean_ctor_get(v_x_1991_, 0);
v_value_1994_ = lean_ctor_get(v_x_1991_, 1);
v_tail_1995_ = lean_ctor_get(v_x_1991_, 2);
v___x_1996_ = l_Lean_ExprStructEq_beq(v_key_1993_, v_a_1990_);
if (v___x_1996_ == 0)
{
v_x_1991_ = v_tail_1995_;
goto _start;
}
else
{
lean_object* v___x_1998_; 
lean_inc(v_value_1994_);
v___x_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1998_, 0, v_value_1994_);
return v___x_1998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object* v_a_1999_, lean_object* v_x_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_1999_, v_x_2000_);
lean_dec(v_x_2000_);
lean_dec_ref(v_a_1999_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object* v_m_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v_buckets_2004_; lean_object* v___x_2005_; uint64_t v___x_2006_; uint64_t v___x_2007_; uint64_t v___x_2008_; uint64_t v_fold_2009_; uint64_t v___x_2010_; uint64_t v___x_2011_; uint64_t v___x_2012_; size_t v___x_2013_; size_t v___x_2014_; size_t v___x_2015_; size_t v___x_2016_; size_t v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v_buckets_2004_ = lean_ctor_get(v_m_2002_, 1);
v___x_2005_ = lean_array_get_size(v_buckets_2004_);
v___x_2006_ = l_Lean_ExprStructEq_hash(v_a_2003_);
v___x_2007_ = 32ULL;
v___x_2008_ = lean_uint64_shift_right(v___x_2006_, v___x_2007_);
v_fold_2009_ = lean_uint64_xor(v___x_2006_, v___x_2008_);
v___x_2010_ = 16ULL;
v___x_2011_ = lean_uint64_shift_right(v_fold_2009_, v___x_2010_);
v___x_2012_ = lean_uint64_xor(v_fold_2009_, v___x_2011_);
v___x_2013_ = lean_uint64_to_usize(v___x_2012_);
v___x_2014_ = lean_usize_of_nat(v___x_2005_);
v___x_2015_ = ((size_t)1ULL);
v___x_2016_ = lean_usize_sub(v___x_2014_, v___x_2015_);
v___x_2017_ = lean_usize_land(v___x_2013_, v___x_2016_);
v___x_2018_ = lean_array_uget_borrowed(v_buckets_2004_, v___x_2017_);
v___x_2019_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2003_, v___x_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object* v_m_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_2020_, v_a_2021_);
lean_dec_ref(v_a_2021_);
lean_dec_ref(v_m_2020_);
return v_res_2022_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object* v_a_2023_, lean_object* v_x_2024_){
_start:
{
if (lean_obj_tag(v_x_2024_) == 0)
{
uint8_t v___x_2025_; 
v___x_2025_ = 0;
return v___x_2025_;
}
else
{
lean_object* v_key_2026_; lean_object* v_tail_2027_; lean_object* v_fst_2028_; lean_object* v_snd_2029_; lean_object* v_fst_2030_; lean_object* v_snd_2031_; uint8_t v___x_2035_; 
v_key_2026_ = lean_ctor_get(v_x_2024_, 0);
v_tail_2027_ = lean_ctor_get(v_x_2024_, 2);
v_fst_2028_ = lean_ctor_get(v_key_2026_, 0);
v_snd_2029_ = lean_ctor_get(v_key_2026_, 1);
v_fst_2030_ = lean_ctor_get(v_a_2023_, 0);
v_snd_2031_ = lean_ctor_get(v_a_2023_, 1);
v___x_2035_ = lean_unbox(v_fst_2030_);
if (v___x_2035_ == 0)
{
uint8_t v___x_2036_; 
v___x_2036_ = lean_unbox(v_fst_2028_);
if (v___x_2036_ == 0)
{
goto v___jp_2032_;
}
else
{
v_x_2024_ = v_tail_2027_;
goto _start;
}
}
else
{
uint8_t v___x_2038_; 
v___x_2038_ = lean_unbox(v_fst_2028_);
if (v___x_2038_ == 0)
{
v_x_2024_ = v_tail_2027_;
goto _start;
}
else
{
goto v___jp_2032_;
}
}
v___jp_2032_:
{
uint8_t v___x_2033_; 
v___x_2033_ = l_Lean_ExprStructEq_beq(v_snd_2029_, v_snd_2031_);
if (v___x_2033_ == 0)
{
v_x_2024_ = v_tail_2027_;
goto _start;
}
else
{
return v___x_2033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object* v_a_2040_, lean_object* v_x_2041_){
_start:
{
uint8_t v_res_2042_; lean_object* v_r_2043_; 
v_res_2042_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2040_, v_x_2041_);
lean_dec(v_x_2041_);
lean_dec_ref(v_a_2040_);
v_r_2043_ = lean_box(v_res_2042_);
return v_r_2043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object* v_a_2044_, lean_object* v_b_2045_, lean_object* v_x_2046_){
_start:
{
if (lean_obj_tag(v_x_2046_) == 0)
{
lean_dec(v_b_2045_);
lean_dec_ref(v_a_2044_);
return v_x_2046_;
}
else
{
lean_object* v_key_2047_; lean_object* v_value_2048_; lean_object* v_tail_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2068_; 
v_key_2047_ = lean_ctor_get(v_x_2046_, 0);
v_value_2048_ = lean_ctor_get(v_x_2046_, 1);
v_tail_2049_ = lean_ctor_get(v_x_2046_, 2);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_x_2046_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2051_ = v_x_2046_;
v_isShared_2052_ = v_isSharedCheck_2068_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_tail_2049_);
lean_inc(v_value_2048_);
lean_inc(v_key_2047_);
lean_dec(v_x_2046_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2068_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v_fst_2058_; lean_object* v_snd_2059_; lean_object* v_fst_2060_; lean_object* v_snd_2061_; uint8_t v___x_2065_; 
v_fst_2058_ = lean_ctor_get(v_key_2047_, 0);
v_snd_2059_ = lean_ctor_get(v_key_2047_, 1);
v_fst_2060_ = lean_ctor_get(v_a_2044_, 0);
v_snd_2061_ = lean_ctor_get(v_a_2044_, 1);
v___x_2065_ = lean_unbox(v_fst_2060_);
if (v___x_2065_ == 0)
{
uint8_t v___x_2066_; 
v___x_2066_ = lean_unbox(v_fst_2058_);
if (v___x_2066_ == 0)
{
goto v___jp_2062_;
}
else
{
goto v___jp_2053_;
}
}
else
{
uint8_t v___x_2067_; 
v___x_2067_ = lean_unbox(v_fst_2058_);
if (v___x_2067_ == 0)
{
goto v___jp_2053_;
}
else
{
goto v___jp_2062_;
}
}
v___jp_2053_:
{
lean_object* v___x_2054_; lean_object* v___x_2056_; 
v___x_2054_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2044_, v_b_2045_, v_tail_2049_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 2, v___x_2054_);
v___x_2056_ = v___x_2051_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_key_2047_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v_value_2048_);
lean_ctor_set(v_reuseFailAlloc_2057_, 2, v___x_2054_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
v___jp_2062_:
{
uint8_t v___x_2063_; 
v___x_2063_ = l_Lean_ExprStructEq_beq(v_snd_2059_, v_snd_2061_);
if (v___x_2063_ == 0)
{
goto v___jp_2053_;
}
else
{
lean_object* v___x_2064_; 
lean_del_object(v___x_2051_);
lean_dec(v_value_2048_);
lean_dec(v_key_2047_);
v___x_2064_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2064_, 0, v_a_2044_);
lean_ctor_set(v___x_2064_, 1, v_b_2045_);
lean_ctor_set(v___x_2064_, 2, v_tail_2049_);
return v___x_2064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object* v_x_2069_, lean_object* v_x_2070_){
_start:
{
if (lean_obj_tag(v_x_2070_) == 0)
{
return v_x_2069_;
}
else
{
lean_object* v_key_2071_; lean_object* v_value_2072_; lean_object* v_tail_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2104_; 
v_key_2071_ = lean_ctor_get(v_x_2070_, 0);
v_value_2072_ = lean_ctor_get(v_x_2070_, 1);
v_tail_2073_ = lean_ctor_get(v_x_2070_, 2);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_x_2070_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2075_ = v_x_2070_;
v_isShared_2076_ = v_isSharedCheck_2104_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_tail_2073_);
lean_inc(v_value_2072_);
lean_inc(v_key_2071_);
lean_dec(v_x_2070_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2104_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v_fst_2077_; lean_object* v_snd_2078_; lean_object* v___x_2079_; uint64_t v___y_2081_; uint8_t v___x_2101_; 
v_fst_2077_ = lean_ctor_get(v_key_2071_, 0);
v_snd_2078_ = lean_ctor_get(v_key_2071_, 1);
v___x_2079_ = lean_array_get_size(v_x_2069_);
v___x_2101_ = lean_unbox(v_fst_2077_);
if (v___x_2101_ == 0)
{
uint64_t v___x_2102_; 
v___x_2102_ = 13ULL;
v___y_2081_ = v___x_2102_;
goto v___jp_2080_;
}
else
{
uint64_t v___x_2103_; 
v___x_2103_ = 11ULL;
v___y_2081_ = v___x_2103_;
goto v___jp_2080_;
}
v___jp_2080_:
{
uint64_t v___x_2082_; uint64_t v___x_2083_; uint64_t v___x_2084_; uint64_t v___x_2085_; uint64_t v_fold_2086_; uint64_t v___x_2087_; uint64_t v___x_2088_; uint64_t v___x_2089_; size_t v___x_2090_; size_t v___x_2091_; size_t v___x_2092_; size_t v___x_2093_; size_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2082_ = l_Lean_ExprStructEq_hash(v_snd_2078_);
v___x_2083_ = lean_uint64_mix_hash(v___y_2081_, v___x_2082_);
v___x_2084_ = 32ULL;
v___x_2085_ = lean_uint64_shift_right(v___x_2083_, v___x_2084_);
v_fold_2086_ = lean_uint64_xor(v___x_2083_, v___x_2085_);
v___x_2087_ = 16ULL;
v___x_2088_ = lean_uint64_shift_right(v_fold_2086_, v___x_2087_);
v___x_2089_ = lean_uint64_xor(v_fold_2086_, v___x_2088_);
v___x_2090_ = lean_uint64_to_usize(v___x_2089_);
v___x_2091_ = lean_usize_of_nat(v___x_2079_);
v___x_2092_ = ((size_t)1ULL);
v___x_2093_ = lean_usize_sub(v___x_2091_, v___x_2092_);
v___x_2094_ = lean_usize_land(v___x_2090_, v___x_2093_);
v___x_2095_ = lean_array_uget_borrowed(v_x_2069_, v___x_2094_);
lean_inc(v___x_2095_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 2, v___x_2095_);
v___x_2097_ = v___x_2075_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_key_2071_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_value_2072_);
lean_ctor_set(v_reuseFailAlloc_2100_, 2, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_array_uset(v_x_2069_, v___x_2094_, v___x_2097_);
v_x_2069_ = v___x_2098_;
v_x_2070_ = v_tail_2073_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object* v_i_2105_, lean_object* v_source_2106_, lean_object* v_target_2107_){
_start:
{
lean_object* v___x_2108_; uint8_t v___x_2109_; 
v___x_2108_ = lean_array_get_size(v_source_2106_);
v___x_2109_ = lean_nat_dec_lt(v_i_2105_, v___x_2108_);
if (v___x_2109_ == 0)
{
lean_dec_ref(v_source_2106_);
lean_dec(v_i_2105_);
return v_target_2107_;
}
else
{
lean_object* v_es_2110_; lean_object* v___x_2111_; lean_object* v_source_2112_; lean_object* v_target_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_es_2110_ = lean_array_fget(v_source_2106_, v_i_2105_);
v___x_2111_ = lean_box(0);
v_source_2112_ = lean_array_fset(v_source_2106_, v_i_2105_, v___x_2111_);
v_target_2113_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_target_2107_, v_es_2110_);
v___x_2114_ = lean_unsigned_to_nat(1u);
v___x_2115_ = lean_nat_add(v_i_2105_, v___x_2114_);
lean_dec(v_i_2105_);
v_i_2105_ = v___x_2115_;
v_source_2106_ = v_source_2112_;
v_target_2107_ = v_target_2113_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object* v_data_2117_){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v_nbuckets_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2118_ = lean_array_get_size(v_data_2117_);
v___x_2119_ = lean_unsigned_to_nat(2u);
v_nbuckets_2120_ = lean_nat_mul(v___x_2118_, v___x_2119_);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = lean_box(0);
v___x_2123_ = lean_mk_array(v_nbuckets_2120_, v___x_2122_);
v___x_2124_ = lean_array_propagate_mark(v_data_2117_, v___x_2123_);
v___x_2125_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v___x_2121_, v_data_2117_, v___x_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object* v_m_2126_, lean_object* v_a_2127_, lean_object* v_b_2128_){
_start:
{
lean_object* v_size_2129_; lean_object* v_buckets_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2181_; 
v_size_2129_ = lean_ctor_get(v_m_2126_, 0);
v_buckets_2130_ = lean_ctor_get(v_m_2126_, 1);
v_isSharedCheck_2181_ = !lean_is_exclusive(v_m_2126_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2132_ = v_m_2126_;
v_isShared_2133_ = v_isSharedCheck_2181_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_buckets_2130_);
lean_inc(v_size_2129_);
lean_dec(v_m_2126_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2181_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v_fst_2134_; lean_object* v_snd_2135_; lean_object* v___x_2136_; uint64_t v___y_2138_; uint8_t v___x_2178_; 
v_fst_2134_ = lean_ctor_get(v_a_2127_, 0);
v_snd_2135_ = lean_ctor_get(v_a_2127_, 1);
v___x_2136_ = lean_array_get_size(v_buckets_2130_);
v___x_2178_ = lean_unbox(v_fst_2134_);
if (v___x_2178_ == 0)
{
uint64_t v___x_2179_; 
v___x_2179_ = 13ULL;
v___y_2138_ = v___x_2179_;
goto v___jp_2137_;
}
else
{
uint64_t v___x_2180_; 
v___x_2180_ = 11ULL;
v___y_2138_ = v___x_2180_;
goto v___jp_2137_;
}
v___jp_2137_:
{
uint64_t v___x_2139_; uint64_t v___x_2140_; uint64_t v___x_2141_; uint64_t v___x_2142_; uint64_t v_fold_2143_; uint64_t v___x_2144_; uint64_t v___x_2145_; uint64_t v___x_2146_; size_t v___x_2147_; size_t v___x_2148_; size_t v___x_2149_; size_t v___x_2150_; size_t v___x_2151_; lean_object* v_bkt_2152_; uint8_t v___x_2153_; 
v___x_2139_ = l_Lean_ExprStructEq_hash(v_snd_2135_);
v___x_2140_ = lean_uint64_mix_hash(v___y_2138_, v___x_2139_);
v___x_2141_ = 32ULL;
v___x_2142_ = lean_uint64_shift_right(v___x_2140_, v___x_2141_);
v_fold_2143_ = lean_uint64_xor(v___x_2140_, v___x_2142_);
v___x_2144_ = 16ULL;
v___x_2145_ = lean_uint64_shift_right(v_fold_2143_, v___x_2144_);
v___x_2146_ = lean_uint64_xor(v_fold_2143_, v___x_2145_);
v___x_2147_ = lean_uint64_to_usize(v___x_2146_);
v___x_2148_ = lean_usize_of_nat(v___x_2136_);
v___x_2149_ = ((size_t)1ULL);
v___x_2150_ = lean_usize_sub(v___x_2148_, v___x_2149_);
v___x_2151_ = lean_usize_land(v___x_2147_, v___x_2150_);
v_bkt_2152_ = lean_array_uget_borrowed(v_buckets_2130_, v___x_2151_);
v___x_2153_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2127_, v_bkt_2152_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; lean_object* v_size_x27_2155_; lean_object* v___x_2156_; lean_object* v_buckets_x27_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; uint8_t v___x_2163_; 
v___x_2154_ = lean_unsigned_to_nat(1u);
v_size_x27_2155_ = lean_nat_add(v_size_2129_, v___x_2154_);
lean_dec(v_size_2129_);
lean_inc(v_bkt_2152_);
v___x_2156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2156_, 0, v_a_2127_);
lean_ctor_set(v___x_2156_, 1, v_b_2128_);
lean_ctor_set(v___x_2156_, 2, v_bkt_2152_);
v_buckets_x27_2157_ = lean_array_uset(v_buckets_2130_, v___x_2151_, v___x_2156_);
v___x_2158_ = lean_unsigned_to_nat(4u);
v___x_2159_ = lean_nat_mul(v_size_x27_2155_, v___x_2158_);
v___x_2160_ = lean_unsigned_to_nat(3u);
v___x_2161_ = lean_nat_div(v___x_2159_, v___x_2160_);
lean_dec(v___x_2159_);
v___x_2162_ = lean_array_get_size(v_buckets_x27_2157_);
v___x_2163_ = lean_nat_dec_le(v___x_2161_, v___x_2162_);
lean_dec(v___x_2161_);
if (v___x_2163_ == 0)
{
lean_object* v_val_2164_; lean_object* v___x_2166_; 
v_val_2164_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_buckets_x27_2157_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 1, v_val_2164_);
lean_ctor_set(v___x_2132_, 0, v_size_x27_2155_);
v___x_2166_ = v___x_2132_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v_size_x27_2155_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_val_2164_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
else
{
lean_object* v___x_2169_; 
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 1, v_buckets_x27_2157_);
lean_ctor_set(v___x_2132_, 0, v_size_x27_2155_);
v___x_2169_ = v___x_2132_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_size_x27_2155_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v_buckets_x27_2157_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
else
{
lean_object* v___x_2171_; lean_object* v_buckets_x27_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
lean_inc(v_bkt_2152_);
v___x_2171_ = lean_box(0);
v_buckets_x27_2172_ = lean_array_uset(v_buckets_2130_, v___x_2151_, v___x_2171_);
v___x_2173_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2127_, v_b_2128_, v_bkt_2152_);
v___x_2174_ = lean_array_uset(v_buckets_x27_2172_, v___x_2151_, v___x_2173_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 1, v___x_2174_);
v___x_2176_ = v___x_2132_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_size_2129_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v___x_2174_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object* v_a_2182_, lean_object* v_x_2183_){
_start:
{
if (lean_obj_tag(v_x_2183_) == 0)
{
lean_object* v___x_2184_; 
v___x_2184_ = lean_box(0);
return v___x_2184_;
}
else
{
lean_object* v_key_2185_; lean_object* v_value_2186_; lean_object* v_tail_2187_; lean_object* v_fst_2188_; lean_object* v_snd_2189_; lean_object* v_fst_2190_; lean_object* v_snd_2191_; uint8_t v___x_2196_; 
v_key_2185_ = lean_ctor_get(v_x_2183_, 0);
v_value_2186_ = lean_ctor_get(v_x_2183_, 1);
v_tail_2187_ = lean_ctor_get(v_x_2183_, 2);
v_fst_2188_ = lean_ctor_get(v_key_2185_, 0);
v_snd_2189_ = lean_ctor_get(v_key_2185_, 1);
v_fst_2190_ = lean_ctor_get(v_a_2182_, 0);
v_snd_2191_ = lean_ctor_get(v_a_2182_, 1);
v___x_2196_ = lean_unbox(v_fst_2190_);
if (v___x_2196_ == 0)
{
uint8_t v___x_2197_; 
v___x_2197_ = lean_unbox(v_fst_2188_);
if (v___x_2197_ == 0)
{
goto v___jp_2192_;
}
else
{
v_x_2183_ = v_tail_2187_;
goto _start;
}
}
else
{
uint8_t v___x_2199_; 
v___x_2199_ = lean_unbox(v_fst_2188_);
if (v___x_2199_ == 0)
{
v_x_2183_ = v_tail_2187_;
goto _start;
}
else
{
goto v___jp_2192_;
}
}
v___jp_2192_:
{
uint8_t v___x_2193_; 
v___x_2193_ = l_Lean_ExprStructEq_beq(v_snd_2189_, v_snd_2191_);
if (v___x_2193_ == 0)
{
v_x_2183_ = v_tail_2187_;
goto _start;
}
else
{
lean_object* v___x_2195_; 
lean_inc(v_value_2186_);
v___x_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2195_, 0, v_value_2186_);
return v___x_2195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object* v_a_2201_, lean_object* v_x_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2201_, v_x_2202_);
lean_dec(v_x_2202_);
lean_dec_ref(v_a_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object* v_m_2204_, lean_object* v_a_2205_){
_start:
{
lean_object* v_buckets_2206_; lean_object* v_fst_2207_; lean_object* v_snd_2208_; lean_object* v___x_2209_; uint64_t v___y_2211_; uint8_t v___x_2227_; 
v_buckets_2206_ = lean_ctor_get(v_m_2204_, 1);
v_fst_2207_ = lean_ctor_get(v_a_2205_, 0);
v_snd_2208_ = lean_ctor_get(v_a_2205_, 1);
v___x_2209_ = lean_array_get_size(v_buckets_2206_);
v___x_2227_ = lean_unbox(v_fst_2207_);
if (v___x_2227_ == 0)
{
uint64_t v___x_2228_; 
v___x_2228_ = 13ULL;
v___y_2211_ = v___x_2228_;
goto v___jp_2210_;
}
else
{
uint64_t v___x_2229_; 
v___x_2229_ = 11ULL;
v___y_2211_ = v___x_2229_;
goto v___jp_2210_;
}
v___jp_2210_:
{
uint64_t v___x_2212_; uint64_t v___x_2213_; uint64_t v___x_2214_; uint64_t v___x_2215_; uint64_t v_fold_2216_; uint64_t v___x_2217_; uint64_t v___x_2218_; uint64_t v___x_2219_; size_t v___x_2220_; size_t v___x_2221_; size_t v___x_2222_; size_t v___x_2223_; size_t v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2212_ = l_Lean_ExprStructEq_hash(v_snd_2208_);
v___x_2213_ = lean_uint64_mix_hash(v___y_2211_, v___x_2212_);
v___x_2214_ = 32ULL;
v___x_2215_ = lean_uint64_shift_right(v___x_2213_, v___x_2214_);
v_fold_2216_ = lean_uint64_xor(v___x_2213_, v___x_2215_);
v___x_2217_ = 16ULL;
v___x_2218_ = lean_uint64_shift_right(v_fold_2216_, v___x_2217_);
v___x_2219_ = lean_uint64_xor(v_fold_2216_, v___x_2218_);
v___x_2220_ = lean_uint64_to_usize(v___x_2219_);
v___x_2221_ = lean_usize_of_nat(v___x_2209_);
v___x_2222_ = ((size_t)1ULL);
v___x_2223_ = lean_usize_sub(v___x_2221_, v___x_2222_);
v___x_2224_ = lean_usize_land(v___x_2220_, v___x_2223_);
v___x_2225_ = lean_array_uget_borrowed(v_buckets_2206_, v___x_2224_);
v___x_2226_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2205_, v___x_2225_);
return v___x_2226_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object* v_m_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_2230_, v_a_2231_);
lean_dec_ref(v_a_2231_);
lean_dec_ref(v_m_2230_);
return v_res_2232_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2233_; lean_object* v_dummy_2234_; 
v___x_2233_ = lean_box(0);
v_dummy_2234_ = l_Lean_Expr_sort___override(v___x_2233_);
return v_dummy_2234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object* v_upperBound_2235_, lean_object* v_fst_2236_, lean_object* v_fvars_2237_, lean_object* v_a_2238_, lean_object* v_b_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_a_2249_; uint8_t v___x_2253_; 
v___x_2253_ = lean_nat_dec_lt(v_a_2238_, v_upperBound_2235_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; 
lean_dec(v_a_2238_);
lean_dec(v_fvars_2237_);
v___x_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2254_, 0, v_b_2239_);
return v___x_2254_;
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2256_; uint8_t v_binderInfo_2257_; uint8_t v___x_2258_; 
v___x_2255_ = l_Lean_Meta_instInhabitedExprParamInfo_default;
v___x_2256_ = lean_array_get_borrowed(v___x_2255_, v_fst_2236_, v_a_2238_);
v_binderInfo_2257_ = lean_ctor_get_uint8(v___x_2256_, sizeof(void*)*2);
v___x_2258_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2257_);
if (v___x_2258_ == 0)
{
v_a_2249_ = v_b_2239_;
goto v___jp_2248_;
}
else
{
lean_object* v___x_2259_; uint8_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2259_ = l_Lean_instInhabitedExpr;
v___x_2260_ = 0;
v___x_2261_ = lean_array_get_borrowed(v___x_2259_, v_b_2239_, v_a_2238_);
lean_inc(v___x_2261_);
lean_inc(v_fvars_2237_);
v___x_2262_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2237_, v___x_2261_, v___x_2260_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
if (lean_obj_tag(v___x_2262_) == 0)
{
lean_object* v_a_2263_; lean_object* v___x_2264_; 
v_a_2263_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_a_2263_);
lean_dec_ref_known(v___x_2262_, 1);
v___x_2264_ = lean_array_set(v_b_2239_, v_a_2238_, v_a_2263_);
v_a_2249_ = v___x_2264_;
goto v___jp_2248_;
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
lean_dec_ref(v_b_2239_);
lean_dec(v_a_2238_);
lean_dec(v_fvars_2237_);
v_a_2265_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2262_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2262_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
}
v___jp_2248_:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lean_unsigned_to_nat(1u);
v___x_2251_ = lean_nat_add(v_a_2238_, v___x_2250_);
lean_dec(v_a_2238_);
v_a_2238_ = v___x_2251_;
v_b_2239_ = v_a_2249_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object* v_fvars_2273_, size_t v_sz_2274_, size_t v_i_2275_, lean_object* v_bs_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
uint8_t v___x_2285_; 
v___x_2285_ = lean_usize_dec_lt(v_i_2275_, v_sz_2274_);
if (v___x_2285_ == 0)
{
lean_object* v___x_2286_; 
lean_dec(v_fvars_2273_);
v___x_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_bs_2276_);
return v___x_2286_;
}
else
{
uint8_t v___x_2287_; lean_object* v_v_2288_; lean_object* v___x_2289_; lean_object* v_bs_x27_2290_; lean_object* v___x_2291_; 
v___x_2287_ = 0;
v_v_2288_ = lean_array_uget(v_bs_2276_, v_i_2275_);
v___x_2289_ = lean_unsigned_to_nat(0u);
v_bs_x27_2290_ = lean_array_uset(v_bs_2276_, v_i_2275_, v___x_2289_);
lean_inc(v_fvars_2273_);
v___x_2291_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2273_, v_v_2288_, v___x_2287_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_object* v_a_2292_; size_t v___x_2293_; size_t v___x_2294_; lean_object* v___x_2295_; 
v_a_2292_ = lean_ctor_get(v___x_2291_, 0);
lean_inc(v_a_2292_);
lean_dec_ref_known(v___x_2291_, 1);
v___x_2293_ = ((size_t)1ULL);
v___x_2294_ = lean_usize_add(v_i_2275_, v___x_2293_);
v___x_2295_ = lean_array_uset(v_bs_x27_2290_, v_i_2275_, v_a_2292_);
v_i_2275_ = v___x_2294_;
v_bs_2276_ = v___x_2295_;
goto _start;
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec_ref(v_bs_x27_2290_);
lean_dec(v_fvars_2273_);
v_a_2297_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2291_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2291_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object* v_fvars_2305_, lean_object* v_f_2306_, lean_object* v_args_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
uint8_t v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = 0;
lean_inc_ref(v_f_2306_);
lean_inc(v_fvars_2305_);
v___x_2317_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2305_, v_f_2306_, v___x_2316_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2317_) == 0)
{
uint8_t v_implicits_2318_; 
v_implicits_2318_ = lean_ctor_get_uint8(v___y_2308_, 2);
if (v_implicits_2318_ == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2320_; 
v_a_2319_ = lean_ctor_get(v___x_2317_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2317_, 1);
lean_inc(v___y_2314_);
lean_inc_ref(v___y_2313_);
lean_inc(v___y_2312_);
lean_inc_ref(v___y_2311_);
v___x_2320_ = lean_infer_type(v_f_2306_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; lean_object* v___x_2322_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v___x_2322_ = l_Lean_Meta_instantiateForallWithParamInfos(v_a_2321_, v_args_2307_, v___x_2316_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v_fst_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref_known(v___x_2322_, 1);
v_fst_2324_ = lean_ctor_get(v_a_2323_, 0);
lean_inc(v_fst_2324_);
lean_dec(v_a_2323_);
v___x_2325_ = lean_array_get_size(v_args_2307_);
v___x_2326_ = lean_unsigned_to_nat(0u);
v___x_2327_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v___x_2325_, v_fst_2324_, v_fvars_2305_, v___x_2326_, v_args_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
lean_dec(v_fst_2324_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2336_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2330_ = v___x_2327_;
v_isShared_2331_ = v_isSharedCheck_2336_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2336_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2334_; 
v___x_2332_ = l_Lean_mkAppN(v_a_2319_, v_a_2328_);
lean_dec(v_a_2328_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2332_);
v___x_2334_ = v___x_2330_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2332_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v_a_2319_);
v_a_2337_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2327_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2327_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
lean_dec(v_a_2319_);
lean_dec_ref(v_args_2307_);
lean_dec(v_fvars_2305_);
v_a_2345_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2322_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2322_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_a_2345_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
}
else
{
lean_dec(v_a_2319_);
lean_dec_ref(v_args_2307_);
lean_dec(v_fvars_2305_);
return v___x_2320_;
}
}
else
{
lean_object* v_a_2353_; size_t v_sz_2354_; size_t v___x_2355_; lean_object* v___x_2356_; 
lean_dec_ref(v_f_2306_);
v_a_2353_ = lean_ctor_get(v___x_2317_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2317_, 1);
v_sz_2354_ = lean_array_size(v_args_2307_);
v___x_2355_ = ((size_t)0ULL);
v___x_2356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_2305_, v_sz_2354_, v___x_2355_, v_args_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2365_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2359_ = v___x_2356_;
v_isShared_2360_ = v_isSharedCheck_2365_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2356_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2365_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2361_; lean_object* v___x_2363_; 
v___x_2361_ = l_Lean_mkAppN(v_a_2353_, v_a_2357_);
lean_dec(v_a_2357_);
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 0, v___x_2361_);
v___x_2363_ = v___x_2359_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2361_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2373_; 
lean_dec(v_a_2353_);
v_a_2366_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2368_ = v___x_2356_;
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2356_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2366_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_2307_);
lean_dec_ref(v_f_2306_);
lean_dec(v_fvars_2305_);
return v___x_2317_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object* v_fvars_2374_, lean_object* v_f_2375_, lean_object* v_args_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(v_fvars_2374_, v_f_2375_, v_args_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object* v_fvars_2386_, lean_object* v_b_2387_, uint8_t v___x_2388_, lean_object* v_mk_2389_, lean_object* v_a_2390_, lean_object* v_x_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_inc_ref(v_x_2391_);
v___x_2400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2400_, 0, v_x_2391_);
lean_ctor_set(v___x_2400_, 1, v_fvars_2386_);
v___x_2401_ = lean_expr_instantiate1(v_b_2387_, v_x_2391_);
v___x_2402_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2400_, v___x_2401_, v___x_2388_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2402_) == 0)
{
uint8_t v_lift_2403_; 
v_lift_2403_ = lean_ctor_get_uint8(v___y_2392_, 10);
if (v_lift_2403_ == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2416_; 
v_a_2404_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2406_ = v___x_2402_;
v_isShared_2407_ = v_isSharedCheck_2416_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2402_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2416_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2408_ = lean_unsigned_to_nat(1u);
v___x_2409_ = lean_mk_empty_array_with_capacity(v___x_2408_);
v___x_2410_ = lean_array_push(v___x_2409_, v_x_2391_);
v___x_2411_ = lean_expr_abstract(v_a_2404_, v___x_2410_);
lean_dec_ref(v___x_2410_);
lean_dec(v_a_2404_);
v___x_2412_ = lean_apply_2(v_mk_2389_, v_a_2390_, v___x_2411_);
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
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v_a_2417_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2417_);
lean_dec_ref_known(v___x_2402_, 1);
v___x_2418_ = l_Lean_Expr_fvarId_x21(v_x_2391_);
v___x_2419_ = l_Lean_Meta_ExtractLets_flushDecls(v___x_2418_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2433_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2422_ = v___x_2419_;
v_isShared_2423_ = v_isSharedCheck_2433_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2419_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2433_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2431_; 
v___x_2424_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_a_2420_, v_a_2417_);
lean_dec(v_a_2420_);
v___x_2425_ = lean_unsigned_to_nat(1u);
v___x_2426_ = lean_mk_empty_array_with_capacity(v___x_2425_);
v___x_2427_ = lean_array_push(v___x_2426_, v_x_2391_);
v___x_2428_ = lean_expr_abstract(v___x_2424_, v___x_2427_);
lean_dec_ref(v___x_2427_);
lean_dec_ref(v___x_2424_);
v___x_2429_ = lean_apply_2(v_mk_2389_, v_a_2390_, v___x_2428_);
if (v_isShared_2423_ == 0)
{
lean_ctor_set(v___x_2422_, 0, v___x_2429_);
v___x_2431_ = v___x_2422_;
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
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
lean_dec(v_a_2417_);
lean_dec_ref(v_x_2391_);
lean_dec_ref(v_a_2390_);
lean_dec_ref(v_mk_2389_);
v_a_2434_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2419_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2419_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_2391_);
lean_dec_ref(v_a_2390_);
lean_dec_ref(v_mk_2389_);
return v___x_2402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object* v_fvars_2442_, lean_object* v_b_2443_, lean_object* v___x_2444_, lean_object* v_mk_2445_, lean_object* v_a_2446_, lean_object* v_x_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
uint8_t v___x_44902__boxed_2456_; lean_object* v_res_2457_; 
v___x_44902__boxed_2456_ = lean_unbox(v___x_2444_);
v_res_2457_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(v_fvars_2442_, v_b_2443_, v___x_44902__boxed_2456_, v_mk_2445_, v_a_2446_, v_x_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_dec_ref(v_b_2443_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object* v_fvars_2458_, lean_object* v_n_2459_, lean_object* v_t_2460_, lean_object* v_b_2461_, uint8_t v_i_2462_, lean_object* v_mk_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
uint8_t v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = 0;
lean_inc(v_fvars_2458_);
v___x_2473_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2458_, v_t_2460_, v___x_2472_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
if (lean_obj_tag(v___x_2473_) == 0)
{
uint8_t v_underBinder_2474_; 
v_underBinder_2474_ = lean_ctor_get_uint8(v___y_2464_, 4);
if (v_underBinder_2474_ == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2483_; 
lean_dec(v_n_2459_);
lean_dec(v_fvars_2458_);
v_a_2475_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2477_ = v___x_2473_;
v_isShared_2478_ = v_isSharedCheck_2483_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2473_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2483_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2479_; lean_object* v___x_2481_; 
v___x_2479_ = lean_apply_2(v_mk_2463_, v_a_2475_, v_b_2461_);
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 0, v___x_2479_);
v___x_2481_ = v___x_2477_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v___x_2479_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2485_; lean_object* v___f_2486_; uint8_t v___x_2487_; lean_object* v___x_2488_; 
v_a_2484_ = lean_ctor_get(v___x_2473_, 0);
lean_inc_n(v_a_2484_, 2);
lean_dec_ref_known(v___x_2473_, 1);
v___x_2485_ = lean_box(v___x_2472_);
v___f_2486_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2486_, 0, v_fvars_2458_);
lean_closure_set(v___f_2486_, 1, v_b_2461_);
lean_closure_set(v___f_2486_, 2, v___x_2485_);
lean_closure_set(v___f_2486_, 3, v_mk_2463_);
lean_closure_set(v___f_2486_, 4, v_a_2484_);
v___x_2487_ = 0;
v___x_2488_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_n_2459_, v_i_2462_, v_a_2484_, v___f_2486_, v___x_2487_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
return v___x_2488_;
}
}
else
{
lean_dec_ref(v_mk_2463_);
lean_dec_ref(v_b_2461_);
lean_dec(v_n_2459_);
lean_dec(v_fvars_2458_);
return v___x_2473_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object* v_fvars_2489_, lean_object* v_n_2490_, lean_object* v_t_2491_, lean_object* v_b_2492_, lean_object* v_i_2493_, lean_object* v_mk_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
uint8_t v_i_boxed_2503_; lean_object* v_res_2504_; 
v_i_boxed_2503_ = lean_unbox(v_i_2493_);
v_res_2504_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(v_fvars_2489_, v_n_2490_, v_t_2491_, v_b_2492_, v_i_boxed_2503_, v_mk_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object* v_fvars_2505_, lean_object* v_e_2506_, lean_object* v_topLevel_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
uint8_t v_topLevel_boxed_2516_; lean_object* v_res_2517_; 
v_topLevel_boxed_2516_ = lean_unbox(v_topLevel_2507_);
v_res_2517_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2505_, v_e_2506_, v_topLevel_boxed_2516_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
return v_res_2517_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2521_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2));
v___x_2522_ = lean_unsigned_to_nat(27u);
v___x_2523_ = lean_unsigned_to_nat(2119u);
v___x_2524_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1));
v___x_2525_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0));
v___x_2526_ = l_mkPanicMessageWithDecl(v___x_2525_, v___x_2524_, v___x_2523_, v___x_2522_, v___x_2521_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t v_fst_2527_, lean_object* v_fvars_2528_, lean_object* v_b_2529_, uint8_t v___x_2530_, lean_object* v_e_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, uint8_t v_isLet_2534_, uint8_t v_topLevel_2535_, lean_object* v_x_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
if (v_fst_2527_ == 0)
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
lean_inc_ref(v_x_2536_);
v___x_2545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2545_, 0, v_x_2536_);
lean_ctor_set(v___x_2545_, 1, v_fvars_2528_);
v___x_2546_ = lean_expr_instantiate1(v_b_2529_, v_x_2536_);
v___x_2547_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2545_, v___x_2546_, v___x_2530_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2547_) == 0)
{
if (lean_obj_tag(v_e_2531_) == 8)
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2585_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2550_ = v___x_2547_;
v_isShared_2551_ = v_isSharedCheck_2585_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2547_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2585_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v_declName_2552_; lean_object* v_type_2553_; lean_object* v_value_2554_; lean_object* v_body_2555_; uint8_t v_nondep_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; size_t v___x_2561_; size_t v___x_2562_; uint8_t v___x_2563_; 
v_declName_2552_ = lean_ctor_get(v_e_2531_, 0);
v_type_2553_ = lean_ctor_get(v_e_2531_, 1);
v_value_2554_ = lean_ctor_get(v_e_2531_, 2);
v_body_2555_ = lean_ctor_get(v_e_2531_, 3);
v_nondep_2556_ = lean_ctor_get_uint8(v_e_2531_, sizeof(void*)*4 + 8);
v___x_2557_ = lean_unsigned_to_nat(1u);
v___x_2558_ = lean_mk_empty_array_with_capacity(v___x_2557_);
v___x_2559_ = lean_array_push(v___x_2558_, v_x_2536_);
v___x_2560_ = lean_expr_abstract(v_a_2548_, v___x_2559_);
lean_dec_ref(v___x_2559_);
lean_dec(v_a_2548_);
v___x_2561_ = lean_ptr_addr(v_type_2553_);
v___x_2562_ = lean_ptr_addr(v_a_2532_);
v___x_2563_ = lean_usize_dec_eq(v___x_2561_, v___x_2562_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; lean_object* v___x_2566_; 
lean_inc(v_declName_2552_);
lean_dec_ref_known(v_e_2531_, 4);
v___x_2564_ = l_Lean_Expr_letE___override(v_declName_2552_, v_a_2532_, v_a_2533_, v___x_2560_, v_nondep_2556_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 0, v___x_2564_);
v___x_2566_ = v___x_2550_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2564_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
else
{
size_t v___x_2568_; size_t v___x_2569_; uint8_t v___x_2570_; 
v___x_2568_ = lean_ptr_addr(v_value_2554_);
v___x_2569_ = lean_ptr_addr(v_a_2533_);
v___x_2570_ = lean_usize_dec_eq(v___x_2568_, v___x_2569_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; lean_object* v___x_2573_; 
lean_inc(v_declName_2552_);
lean_dec_ref_known(v_e_2531_, 4);
v___x_2571_ = l_Lean_Expr_letE___override(v_declName_2552_, v_a_2532_, v_a_2533_, v___x_2560_, v_nondep_2556_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 0, v___x_2571_);
v___x_2573_ = v___x_2550_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
else
{
size_t v___x_2575_; size_t v___x_2576_; uint8_t v___x_2577_; 
v___x_2575_ = lean_ptr_addr(v_body_2555_);
v___x_2576_ = lean_ptr_addr(v___x_2560_);
v___x_2577_ = lean_usize_dec_eq(v___x_2575_, v___x_2576_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2580_; 
lean_inc(v_declName_2552_);
lean_dec_ref_known(v_e_2531_, 4);
v___x_2578_ = l_Lean_Expr_letE___override(v_declName_2552_, v_a_2532_, v_a_2533_, v___x_2560_, v_nondep_2556_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 0, v___x_2578_);
v___x_2580_ = v___x_2550_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v___x_2578_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
else
{
lean_object* v___x_2583_; 
lean_dec_ref(v___x_2560_);
lean_dec_ref(v_a_2533_);
lean_dec_ref(v_a_2532_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 0, v_e_2531_);
v___x_2583_ = v___x_2550_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_e_2531_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
}
else
{
lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2594_; 
lean_dec_ref(v_x_2536_);
lean_dec_ref(v_a_2533_);
lean_dec_ref(v_a_2532_);
lean_dec_ref(v_e_2531_);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2594_ == 0)
{
lean_object* v_unused_2595_; 
v_unused_2595_ = lean_ctor_get(v___x_2547_, 0);
lean_dec(v_unused_2595_);
v___x_2587_ = v___x_2547_;
v_isShared_2588_ = v_isSharedCheck_2594_;
goto v_resetjp_2586_;
}
else
{
lean_dec(v___x_2547_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2594_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2592_; 
v___x_2589_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2590_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2589_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v___x_2590_);
v___x_2592_ = v___x_2587_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v___x_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
else
{
lean_dec_ref(v_x_2536_);
lean_dec_ref(v_a_2533_);
lean_dec_ref(v_a_2532_);
lean_dec_ref(v_e_2531_);
return v___x_2547_;
}
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
lean_dec_ref(v_a_2533_);
lean_dec_ref(v_a_2532_);
lean_dec_ref(v_e_2531_);
v___x_2596_ = l_Lean_Expr_fvarId_x21(v_x_2536_);
v___x_2597_ = l_Lean_FVarId_getDecl___redArg(v___x_2596_, v___y_2540_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_a_2598_, v_isLet_2534_, v___y_2537_, v___y_2539_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec_ref_known(v___x_2599_, 1);
v___x_2600_ = lean_expr_instantiate1(v_b_2529_, v_x_2536_);
lean_dec_ref(v_x_2536_);
v___x_2601_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2528_, v___x_2600_, v_topLevel_2535_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
return v___x_2601_;
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
lean_dec_ref(v_x_2536_);
lean_dec(v_fvars_2528_);
v_a_2602_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2604_ = v___x_2599_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2599_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2602_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
}
else
{
lean_object* v_a_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2617_; 
lean_dec_ref(v_x_2536_);
lean_dec(v_fvars_2528_);
v_a_2610_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2612_ = v___x_2597_;
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_a_2610_);
lean_dec(v___x_2597_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2613_ == 0)
{
v___x_2615_ = v___x_2612_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object** _args){
lean_object* v_fst_2618_ = _args[0];
lean_object* v_fvars_2619_ = _args[1];
lean_object* v_b_2620_ = _args[2];
lean_object* v___x_2621_ = _args[3];
lean_object* v_e_2622_ = _args[4];
lean_object* v_a_2623_ = _args[5];
lean_object* v_a_2624_ = _args[6];
lean_object* v_isLet_2625_ = _args[7];
lean_object* v_topLevel_2626_ = _args[8];
lean_object* v_x_2627_ = _args[9];
lean_object* v___y_2628_ = _args[10];
lean_object* v___y_2629_ = _args[11];
lean_object* v___y_2630_ = _args[12];
lean_object* v___y_2631_ = _args[13];
lean_object* v___y_2632_ = _args[14];
lean_object* v___y_2633_ = _args[15];
lean_object* v___y_2634_ = _args[16];
lean_object* v___y_2635_ = _args[17];
_start:
{
uint8_t v_fst_45054__boxed_2636_; uint8_t v___x_45055__boxed_2637_; uint8_t v_isLet_boxed_2638_; uint8_t v_topLevel_boxed_2639_; lean_object* v_res_2640_; 
v_fst_45054__boxed_2636_ = lean_unbox(v_fst_2618_);
v___x_45055__boxed_2637_ = lean_unbox(v___x_2621_);
v_isLet_boxed_2638_ = lean_unbox(v_isLet_2625_);
v_topLevel_boxed_2639_ = lean_unbox(v_topLevel_2626_);
v_res_2640_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(v_fst_45054__boxed_2636_, v_fvars_2619_, v_b_2620_, v___x_45055__boxed_2637_, v_e_2622_, v_a_2623_, v_a_2624_, v_isLet_boxed_2638_, v_topLevel_boxed_2639_, v_x_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec_ref(v_b_2620_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object* v_fvars_2641_, lean_object* v_e_2642_, uint8_t v_isLet_2643_, lean_object* v_n_2644_, lean_object* v_t_2645_, lean_object* v_v_2646_, lean_object* v_b_2647_, uint8_t v_topLevel_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; uint8_t v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = 0;
lean_inc(v_fvars_2641_);
v___x_2672_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2641_, v_t_2645_, v___x_2671_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2674_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___x_2672_, 1);
lean_inc(v_fvars_2641_);
v___x_2674_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2641_, v_v_2646_, v___x_2671_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2786_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2677_ = v___x_2674_;
v_isShared_2678_ = v_isSharedCheck_2786_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2674_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2786_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2721_; lean_object* v___y_2722_; lean_object* v___y_2723_; uint8_t v_descend_2726_; uint8_t v_underBinder_2727_; uint8_t v_usedOnly_2728_; uint8_t v_merge_2729_; uint8_t v_lift_2730_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; uint8_t v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; uint8_t v___y_2768_; 
v_descend_2726_ = lean_ctor_get_uint8(v___y_2649_, 3);
v_underBinder_2727_ = lean_ctor_get_uint8(v___y_2649_, 4);
v_usedOnly_2728_ = lean_ctor_get_uint8(v___y_2649_, 5);
v_merge_2729_ = lean_ctor_get_uint8(v___y_2649_, 6);
v_lift_2730_ = lean_ctor_get_uint8(v___y_2649_, 10);
if (v_usedOnly_2728_ == 0)
{
v___y_2768_ = v___x_2671_;
goto v___jp_2767_;
}
else
{
uint8_t v___x_2784_; 
v___x_2784_ = l_Lean_Expr_hasLooseBVars(v_b_2647_);
if (v___x_2784_ == 0)
{
lean_object* v___x_2785_; 
lean_del_object(v___x_2677_);
lean_dec(v_a_2675_);
lean_dec(v_a_2673_);
lean_dec(v_n_2644_);
lean_dec_ref(v_e_2642_);
v___x_2785_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2641_, v_b_2647_, v_topLevel_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
return v___x_2785_;
}
else
{
v___y_2768_ = v___x_2671_;
goto v___jp_2767_;
}
}
v___jp_2679_:
{
if (lean_obj_tag(v_e_2642_) == 8)
{
lean_object* v_declName_2680_; lean_object* v_type_2681_; lean_object* v_value_2682_; lean_object* v_body_2683_; uint8_t v_nondep_2684_; size_t v___x_2685_; size_t v___x_2686_; uint8_t v___x_2687_; 
v_declName_2680_ = lean_ctor_get(v_e_2642_, 0);
v_type_2681_ = lean_ctor_get(v_e_2642_, 1);
v_value_2682_ = lean_ctor_get(v_e_2642_, 2);
v_body_2683_ = lean_ctor_get(v_e_2642_, 3);
v_nondep_2684_ = lean_ctor_get_uint8(v_e_2642_, sizeof(void*)*4 + 8);
v___x_2685_ = lean_ptr_addr(v_type_2681_);
v___x_2686_ = lean_ptr_addr(v_a_2673_);
v___x_2687_ = lean_usize_dec_eq(v___x_2685_, v___x_2686_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_inc(v_declName_2680_);
lean_dec_ref_known(v_e_2642_, 4);
v___x_2688_ = l_Lean_Expr_letE___override(v_declName_2680_, v_a_2673_, v_a_2675_, v_b_2647_, v_nondep_2684_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2688_);
v___x_2690_ = v___x_2677_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
else
{
size_t v___x_2692_; size_t v___x_2693_; uint8_t v___x_2694_; 
v___x_2692_ = lean_ptr_addr(v_value_2682_);
v___x_2693_ = lean_ptr_addr(v_a_2675_);
v___x_2694_ = lean_usize_dec_eq(v___x_2692_, v___x_2693_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; lean_object* v___x_2697_; 
lean_inc(v_declName_2680_);
lean_dec_ref_known(v_e_2642_, 4);
v___x_2695_ = l_Lean_Expr_letE___override(v_declName_2680_, v_a_2673_, v_a_2675_, v_b_2647_, v_nondep_2684_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2695_);
v___x_2697_ = v___x_2677_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2695_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
else
{
size_t v___x_2699_; size_t v___x_2700_; uint8_t v___x_2701_; 
v___x_2699_ = lean_ptr_addr(v_body_2683_);
v___x_2700_ = lean_ptr_addr(v_b_2647_);
v___x_2701_ = lean_usize_dec_eq(v___x_2699_, v___x_2700_);
if (v___x_2701_ == 0)
{
lean_object* v___x_2702_; lean_object* v___x_2704_; 
lean_inc(v_declName_2680_);
lean_dec_ref_known(v_e_2642_, 4);
v___x_2702_ = l_Lean_Expr_letE___override(v_declName_2680_, v_a_2673_, v_a_2675_, v_b_2647_, v_nondep_2684_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2702_);
v___x_2704_ = v___x_2677_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2702_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
else
{
lean_object* v___x_2707_; 
lean_dec(v_a_2675_);
lean_dec(v_a_2673_);
lean_dec_ref(v_b_2647_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v_e_2642_);
v___x_2707_ = v___x_2677_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_e_2642_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
else
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
lean_dec(v_a_2675_);
lean_dec(v_a_2673_);
lean_dec_ref(v_b_2647_);
lean_dec_ref(v_e_2642_);
v___x_2709_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2710_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2709_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2710_);
v___x_2712_ = v___x_2677_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
v___jp_2714_:
{
uint8_t v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = 0;
v___x_2725_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v___y_2718_, v_a_2673_, v_a_2675_, v___y_2722_, v___x_2671_, v___x_2724_, v___y_2717_, v___y_2723_, v___y_2721_, v___y_2719_, v___y_2716_, v___y_2715_, v___y_2720_);
return v___x_2725_;
}
v___jp_2731_:
{
if (v_underBinder_2727_ == 0)
{
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2733_);
goto v___jp_2679_;
}
else
{
if (v_descend_2726_ == 0)
{
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2733_);
goto v___jp_2679_;
}
else
{
lean_del_object(v___x_2677_);
lean_dec_ref(v_b_2647_);
lean_dec_ref(v_e_2642_);
v___y_2715_ = v___y_2732_;
v___y_2716_ = v___y_2735_;
v___y_2717_ = v___y_2734_;
v___y_2718_ = v___y_2733_;
v___y_2719_ = v___y_2736_;
v___y_2720_ = v___y_2737_;
v___y_2721_ = v___y_2738_;
v___y_2722_ = v___y_2739_;
v___y_2723_ = v___y_2740_;
goto v___jp_2714_;
}
}
}
v___jp_2741_:
{
lean_object* v___x_2750_; 
lean_inc(v_a_2675_);
lean_inc(v_a_2673_);
v___x_2750_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_2641_, v_n_2644_, v_a_2673_, v_a_2675_, v___y_2743_, v___y_2745_, v___y_2748_, v___y_2749_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v_fst_2752_; lean_object* v_snd_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___f_2757_; uint8_t v___x_2758_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2750_, 1);
v_fst_2752_ = lean_ctor_get(v_a_2751_, 0);
lean_inc_n(v_fst_2752_, 2);
v_snd_2753_ = lean_ctor_get(v_a_2751_, 1);
lean_inc(v_snd_2753_);
lean_dec(v_a_2751_);
v___x_2754_ = lean_box(v___x_2671_);
v___x_2755_ = lean_box(v_isLet_2643_);
v___x_2756_ = lean_box(v_topLevel_2648_);
lean_inc(v_a_2675_);
lean_inc(v_a_2673_);
lean_inc_ref(v_e_2642_);
lean_inc_ref(v_b_2647_);
v___f_2757_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed), 18, 9);
lean_closure_set(v___f_2757_, 0, v_fst_2752_);
lean_closure_set(v___f_2757_, 1, v_fvars_2641_);
lean_closure_set(v___f_2757_, 2, v_b_2647_);
lean_closure_set(v___f_2757_, 3, v___x_2754_);
lean_closure_set(v___f_2757_, 4, v_e_2642_);
lean_closure_set(v___f_2757_, 5, v_a_2673_);
lean_closure_set(v___f_2757_, 6, v_a_2675_);
lean_closure_set(v___f_2757_, 7, v___x_2755_);
lean_closure_set(v___f_2757_, 8, v___x_2756_);
v___x_2758_ = lean_unbox(v_fst_2752_);
lean_dec(v_fst_2752_);
if (v___x_2758_ == 0)
{
v___y_2732_ = v___y_2748_;
v___y_2733_ = v_snd_2753_;
v___y_2734_ = v___y_2743_;
v___y_2735_ = v___y_2747_;
v___y_2736_ = v___y_2746_;
v___y_2737_ = v___y_2749_;
v___y_2738_ = v___y_2745_;
v___y_2739_ = v___f_2757_;
v___y_2740_ = v___y_2744_;
goto v___jp_2731_;
}
else
{
if (v___y_2742_ == 0)
{
lean_del_object(v___x_2677_);
lean_dec_ref(v_b_2647_);
lean_dec_ref(v_e_2642_);
v___y_2715_ = v___y_2748_;
v___y_2716_ = v___y_2747_;
v___y_2717_ = v___y_2743_;
v___y_2718_ = v_snd_2753_;
v___y_2719_ = v___y_2746_;
v___y_2720_ = v___y_2749_;
v___y_2721_ = v___y_2745_;
v___y_2722_ = v___f_2757_;
v___y_2723_ = v___y_2744_;
goto v___jp_2714_;
}
else
{
v___y_2732_ = v___y_2748_;
v___y_2733_ = v_snd_2753_;
v___y_2734_ = v___y_2743_;
v___y_2735_ = v___y_2747_;
v___y_2736_ = v___y_2746_;
v___y_2737_ = v___y_2749_;
v___y_2738_ = v___y_2745_;
v___y_2739_ = v___f_2757_;
v___y_2740_ = v___y_2744_;
goto v___jp_2731_;
}
}
}
else
{
lean_object* v_a_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2766_; 
lean_del_object(v___x_2677_);
lean_dec(v_a_2675_);
lean_dec(v_a_2673_);
lean_dec_ref(v_b_2647_);
lean_dec_ref(v_e_2642_);
lean_dec(v_fvars_2641_);
v_a_2759_ = lean_ctor_get(v___x_2750_, 0);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2761_ = v___x_2750_;
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_a_2759_);
lean_dec(v___x_2750_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2764_; 
if (v_isShared_2762_ == 0)
{
v___x_2764_ = v___x_2761_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_a_2759_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
}
v___jp_2767_:
{
if (v_merge_2729_ == 0)
{
v___y_2742_ = v___y_2768_;
v___y_2743_ = v___y_2649_;
v___y_2744_ = v___y_2650_;
v___y_2745_ = v___y_2651_;
v___y_2746_ = v___y_2652_;
v___y_2747_ = v___y_2653_;
v___y_2748_ = v___y_2654_;
v___y_2749_ = v___y_2655_;
goto v___jp_2741_;
}
else
{
lean_object* v___x_2769_; lean_object* v_valueMap_2770_; lean_object* v___x_2771_; 
v___x_2769_ = lean_st_ref_get(v___y_2651_);
v_valueMap_2770_ = lean_ctor_get(v___x_2769_, 2);
lean_inc_ref(v_valueMap_2770_);
lean_dec(v___x_2769_);
v___x_2771_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_valueMap_2770_, v_a_2675_);
lean_dec_ref(v_valueMap_2770_);
if (lean_obj_tag(v___x_2771_) == 1)
{
lean_del_object(v___x_2677_);
lean_dec(v_a_2675_);
lean_dec(v_a_2673_);
lean_dec(v_n_2644_);
lean_dec_ref(v_e_2642_);
if (v_isLet_2643_ == 0)
{
lean_object* v_val_2772_; 
v_val_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_val_2772_);
lean_dec_ref_known(v___x_2771_, 1);
v___y_2658_ = v_val_2772_;
v___y_2659_ = v___y_2649_;
v___y_2660_ = v___y_2650_;
v___y_2661_ = v___y_2651_;
v___y_2662_ = v___y_2652_;
v___y_2663_ = v___y_2653_;
v___y_2664_ = v___y_2654_;
v___y_2665_ = v___y_2655_;
goto v___jp_2657_;
}
else
{
if (v_lift_2730_ == 0)
{
lean_object* v_val_2773_; 
v_val_2773_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_val_2773_);
lean_dec_ref_known(v___x_2771_, 1);
v___y_2658_ = v_val_2773_;
v___y_2659_ = v___y_2649_;
v___y_2660_ = v___y_2650_;
v___y_2661_ = v___y_2651_;
v___y_2662_ = v___y_2652_;
v___y_2663_ = v___y_2653_;
v___y_2664_ = v___y_2654_;
v___y_2665_ = v___y_2655_;
goto v___jp_2657_;
}
else
{
lean_object* v_val_2774_; lean_object* v___x_2775_; 
v_val_2774_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_val_2774_);
lean_dec_ref_known(v___x_2771_, 1);
v___x_2775_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_val_2774_, v___y_2651_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_dec_ref_known(v___x_2775_, 1);
v___y_2658_ = v_val_2774_;
v___y_2659_ = v___y_2649_;
v___y_2660_ = v___y_2650_;
v___y_2661_ = v___y_2651_;
v___y_2662_ = v___y_2652_;
v___y_2663_ = v___y_2653_;
v___y_2664_ = v___y_2654_;
v___y_2665_ = v___y_2655_;
goto v___jp_2657_;
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec(v_val_2774_);
lean_dec_ref(v_b_2647_);
lean_dec(v_fvars_2641_);
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2771_);
v___y_2742_ = v___y_2768_;
v___y_2743_ = v___y_2649_;
v___y_2744_ = v___y_2650_;
v___y_2745_ = v___y_2651_;
v___y_2746_ = v___y_2652_;
v___y_2747_ = v___y_2653_;
v___y_2748_ = v___y_2654_;
v___y_2749_ = v___y_2655_;
goto v___jp_2741_;
}
}
}
}
}
else
{
lean_dec(v_a_2673_);
lean_dec_ref(v_b_2647_);
lean_dec(v_n_2644_);
lean_dec_ref(v_e_2642_);
lean_dec(v_fvars_2641_);
return v___x_2674_;
}
}
else
{
lean_dec_ref(v_b_2647_);
lean_dec_ref(v_v_2646_);
lean_dec(v_n_2644_);
lean_dec_ref(v_e_2642_);
lean_dec(v_fvars_2641_);
return v___x_2672_;
}
v___jp_2657_:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
lean_inc(v___y_2658_);
v___x_2666_ = l_Lean_Expr_fvar___override(v___y_2658_);
v___x_2667_ = lean_expr_instantiate1(v_b_2647_, v___x_2666_);
lean_dec_ref(v___x_2666_);
lean_dec_ref(v_b_2647_);
v___x_2668_ = lean_box(v_topLevel_2648_);
v___x_2669_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___boxed), 11, 3);
lean_closure_set(v___x_2669_, 0, v_fvars_2641_);
lean_closure_set(v___x_2669_, 1, v___x_2667_);
lean_closure_set(v___x_2669_, 2, v___x_2668_);
v___x_2670_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v___y_2658_, v___x_2669_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
lean_dec(v___y_2658_);
return v___x_2670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object* v_fvars_2787_, lean_object* v_struct_2788_, lean_object* v___y_2789_, lean_object* v_typeName_2790_, lean_object* v_idx_2791_, lean_object* v_e_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_){
_start:
{
uint8_t v___y_44816__boxed_2801_; lean_object* v_res_2802_; 
v___y_44816__boxed_2801_ = lean_unbox(v___y_2789_);
v_res_2802_ = l_Lean_Meta_ExtractLets_extractCore___lam__2(v_fvars_2787_, v_struct_2788_, v___y_44816__boxed_2801_, v_typeName_2790_, v_idx_2791_, v_e_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
return v_res_2802_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2806_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3));
v___x_2807_ = lean_unsigned_to_nat(75u);
v___x_2808_ = lean_unsigned_to_nat(229u);
v___x_2809_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2));
v___x_2810_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1));
v___x_2811_ = l_mkPanicMessageWithDecl(v___x_2810_, v___x_2809_, v___x_2808_, v___x_2807_, v___x_2806_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t v_descend_2812_, lean_object* v_e_2813_, lean_object* v_fvars_2814_, uint8_t v___x_2815_, uint8_t v_topLevel_2816_, uint8_t v___y_2817_, lean_object* v_____r_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_k_2828_; 
switch(lean_obj_tag(v_e_2813_))
{
case 5:
{
lean_object* v___x_2831_; lean_object* v_dummy_2832_; lean_object* v_nargs_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2831_ = l_Lean_Expr_getAppFn(v_e_2813_);
v_dummy_2832_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0);
v_nargs_2833_ = l_Lean_Expr_getAppNumArgs(v_e_2813_);
lean_inc(v_nargs_2833_);
v___x_2834_ = lean_mk_array(v_nargs_2833_, v_dummy_2832_);
v___x_2835_ = lean_unsigned_to_nat(1u);
v___x_2836_ = lean_nat_sub(v_nargs_2833_, v___x_2835_);
lean_dec(v_nargs_2833_);
lean_inc_ref(v_e_2813_);
v___x_2837_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2813_, v___x_2834_, v___x_2836_);
v___x_2838_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed), 11, 3);
lean_closure_set(v___x_2838_, 0, v_fvars_2814_);
lean_closure_set(v___x_2838_, 1, v___x_2831_);
lean_closure_set(v___x_2838_, 2, v___x_2837_);
v_k_2828_ = v___x_2838_;
goto v___jp_2827_;
}
case 6:
{
lean_object* v_binderName_2839_; lean_object* v_binderType_2840_; lean_object* v_body_2841_; uint8_t v_binderInfo_2842_; lean_object* v___x_2843_; lean_object* v___f_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v_binderName_2839_ = lean_ctor_get(v_e_2813_, 0);
v_binderType_2840_ = lean_ctor_get(v_e_2813_, 1);
v_body_2841_ = lean_ctor_get(v_e_2813_, 2);
v_binderInfo_2842_ = lean_ctor_get_uint8(v_e_2813_, sizeof(void*)*3 + 8);
v___x_2843_ = lean_box(v_binderInfo_2842_);
lean_inc_ref(v_e_2813_);
lean_inc_ref_n(v_body_2841_, 2);
lean_inc_n(v_binderName_2839_, 2);
lean_inc_ref_n(v_binderType_2840_, 2);
v___f_2844_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2844_, 0, v_binderType_2840_);
lean_closure_set(v___f_2844_, 1, v_binderName_2839_);
lean_closure_set(v___f_2844_, 2, v___x_2843_);
lean_closure_set(v___f_2844_, 3, v_body_2841_);
lean_closure_set(v___f_2844_, 4, v_e_2813_);
v___x_2845_ = lean_box(v_binderInfo_2842_);
v___x_2846_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2846_, 0, v_fvars_2814_);
lean_closure_set(v___x_2846_, 1, v_binderName_2839_);
lean_closure_set(v___x_2846_, 2, v_binderType_2840_);
lean_closure_set(v___x_2846_, 3, v_body_2841_);
lean_closure_set(v___x_2846_, 4, v___x_2845_);
lean_closure_set(v___x_2846_, 5, v___f_2844_);
v_k_2828_ = v___x_2846_;
goto v___jp_2827_;
}
case 7:
{
lean_object* v_binderName_2847_; lean_object* v_binderType_2848_; lean_object* v_body_2849_; uint8_t v_binderInfo_2850_; lean_object* v___x_2851_; lean_object* v___f_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v_binderName_2847_ = lean_ctor_get(v_e_2813_, 0);
v_binderType_2848_ = lean_ctor_get(v_e_2813_, 1);
v_body_2849_ = lean_ctor_get(v_e_2813_, 2);
v_binderInfo_2850_ = lean_ctor_get_uint8(v_e_2813_, sizeof(void*)*3 + 8);
v___x_2851_ = lean_box(v_binderInfo_2850_);
lean_inc_ref(v_e_2813_);
lean_inc_ref_n(v_body_2849_, 2);
lean_inc_n(v_binderName_2847_, 2);
lean_inc_ref_n(v_binderType_2848_, 2);
v___f_2852_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2852_, 0, v_binderType_2848_);
lean_closure_set(v___f_2852_, 1, v_binderName_2847_);
lean_closure_set(v___f_2852_, 2, v___x_2851_);
lean_closure_set(v___f_2852_, 3, v_body_2849_);
lean_closure_set(v___f_2852_, 4, v_e_2813_);
v___x_2853_ = lean_box(v_binderInfo_2850_);
v___x_2854_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2854_, 0, v_fvars_2814_);
lean_closure_set(v___x_2854_, 1, v_binderName_2847_);
lean_closure_set(v___x_2854_, 2, v_binderType_2848_);
lean_closure_set(v___x_2854_, 3, v_body_2849_);
lean_closure_set(v___x_2854_, 4, v___x_2853_);
lean_closure_set(v___x_2854_, 5, v___f_2852_);
v_k_2828_ = v___x_2854_;
goto v___jp_2827_;
}
case 8:
{
uint8_t v_nondep_2855_; 
v_nondep_2855_ = lean_ctor_get_uint8(v_e_2813_, sizeof(void*)*4 + 8);
if (v_nondep_2855_ == 0)
{
lean_object* v_declName_2856_; lean_object* v_type_2857_; lean_object* v_value_2858_; lean_object* v_body_2859_; lean_object* v___x_2860_; 
v_declName_2856_ = lean_ctor_get(v_e_2813_, 0);
lean_inc(v_declName_2856_);
v_type_2857_ = lean_ctor_get(v_e_2813_, 1);
lean_inc_ref(v_type_2857_);
v_value_2858_ = lean_ctor_get(v_e_2813_, 2);
lean_inc_ref(v_value_2858_);
v_body_2859_ = lean_ctor_get(v_e_2813_, 3);
lean_inc_ref(v_body_2859_);
v___x_2860_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2814_, v_e_2813_, v___x_2815_, v_declName_2856_, v_type_2857_, v_value_2858_, v_body_2859_, v_topLevel_2816_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_);
return v___x_2860_;
}
else
{
lean_object* v_declName_2861_; lean_object* v_type_2862_; lean_object* v_value_2863_; lean_object* v_body_2864_; lean_object* v___x_2865_; 
v_declName_2861_ = lean_ctor_get(v_e_2813_, 0);
lean_inc(v_declName_2861_);
v_type_2862_ = lean_ctor_get(v_e_2813_, 1);
lean_inc_ref(v_type_2862_);
v_value_2863_ = lean_ctor_get(v_e_2813_, 2);
lean_inc_ref(v_value_2863_);
v_body_2864_ = lean_ctor_get(v_e_2813_, 3);
lean_inc_ref(v_body_2864_);
v___x_2865_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2814_, v_e_2813_, v___y_2817_, v_declName_2861_, v_type_2862_, v_value_2863_, v_body_2864_, v_topLevel_2816_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_);
return v___x_2865_;
}
}
case 10:
{
lean_object* v_data_2866_; lean_object* v_expr_2867_; lean_object* v___x_2868_; 
v_data_2866_ = lean_ctor_get(v_e_2813_, 0);
v_expr_2867_ = lean_ctor_get(v_e_2813_, 1);
lean_inc_ref(v_expr_2867_);
v___x_2868_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2814_, v_expr_2867_, v_topLevel_2816_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2883_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2871_ = v___x_2868_;
v_isShared_2872_ = v_isSharedCheck_2883_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2868_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2883_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
size_t v___x_2873_; size_t v___x_2874_; uint8_t v___x_2875_; 
v___x_2873_ = lean_ptr_addr(v_expr_2867_);
v___x_2874_ = lean_ptr_addr(v_a_2869_);
v___x_2875_ = lean_usize_dec_eq(v___x_2873_, v___x_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2878_; 
lean_inc(v_data_2866_);
lean_dec_ref_known(v_e_2813_, 2);
v___x_2876_ = l_Lean_Expr_mdata___override(v_data_2866_, v_a_2869_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 0, v___x_2876_);
v___x_2878_ = v___x_2871_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v___x_2876_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
else
{
lean_object* v___x_2881_; 
lean_dec(v_a_2869_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 0, v_e_2813_);
v___x_2881_ = v___x_2871_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_e_2813_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2813_, 2);
return v___x_2868_;
}
}
case 11:
{
lean_object* v_typeName_2884_; lean_object* v_idx_2885_; lean_object* v_struct_2886_; lean_object* v___x_2887_; lean_object* v___f_2888_; 
v_typeName_2884_ = lean_ctor_get(v_e_2813_, 0);
v_idx_2885_ = lean_ctor_get(v_e_2813_, 1);
v_struct_2886_ = lean_ctor_get(v_e_2813_, 2);
v___x_2887_ = lean_box(v___y_2817_);
lean_inc_ref(v_e_2813_);
lean_inc(v_idx_2885_);
lean_inc(v_typeName_2884_);
lean_inc_ref(v_struct_2886_);
v___f_2888_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2888_, 0, v_fvars_2814_);
lean_closure_set(v___f_2888_, 1, v_struct_2886_);
lean_closure_set(v___f_2888_, 2, v___x_2887_);
lean_closure_set(v___f_2888_, 3, v_typeName_2884_);
lean_closure_set(v___f_2888_, 4, v_idx_2885_);
lean_closure_set(v___f_2888_, 5, v_e_2813_);
v_k_2828_ = v___f_2888_;
goto v___jp_2827_;
}
default: 
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec(v_fvars_2814_);
lean_dec_ref(v_e_2813_);
v___x_2889_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4);
v___x_2890_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v___x_2889_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_);
return v___x_2890_;
}
}
v___jp_2827_:
{
if (v_descend_2812_ == 0)
{
lean_object* v___x_2829_; 
lean_dec_ref(v_k_2828_);
v___x_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2829_, 0, v_e_2813_);
return v___x_2829_;
}
else
{
lean_object* v___x_2830_; 
lean_dec_ref(v_e_2813_);
lean_inc(v___y_2825_);
lean_inc_ref(v___y_2824_);
lean_inc(v___y_2823_);
lean_inc_ref(v___y_2822_);
lean_inc(v___y_2821_);
lean_inc(v___y_2820_);
lean_inc_ref(v___y_2819_);
v___x_2830_ = lean_apply_8(v_k_2828_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_, lean_box(0));
return v___x_2830_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object* v_descend_2891_, lean_object* v_e_2892_, lean_object* v_fvars_2893_, lean_object* v___x_2894_, lean_object* v_topLevel_2895_, lean_object* v___y_2896_, lean_object* v_____r_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
uint8_t v_descend_boxed_2906_; uint8_t v___x_44983__boxed_2907_; uint8_t v_topLevel_boxed_2908_; uint8_t v___y_44984__boxed_2909_; lean_object* v_res_2910_; 
v_descend_boxed_2906_ = lean_unbox(v_descend_2891_);
v___x_44983__boxed_2907_ = lean_unbox(v___x_2894_);
v_topLevel_boxed_2908_ = lean_unbox(v_topLevel_2895_);
v___y_44984__boxed_2909_ = lean_unbox(v___y_2896_);
v_res_2910_ = l_Lean_Meta_ExtractLets_extractCore___lam__3(v_descend_boxed_2906_, v_e_2892_, v_fvars_2893_, v___x_44983__boxed_2907_, v_topLevel_boxed_2908_, v___y_44984__boxed_2909_, v_____r_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object* v_fvars_2911_, lean_object* v_e_2912_, uint8_t v_topLevel_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v___y_2923_; lean_object* v_a_2924_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2934_; lean_object* v___y_2935_; uint8_t v___x_2938_; 
v___x_2938_ = l_Lean_Expr_isAtomic(v_e_2912_);
if (v___x_2938_ == 0)
{
uint8_t v_proofs_2939_; uint8_t v_types_2940_; uint8_t v_descend_2941_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; uint8_t v___y_2946_; uint8_t v___y_2963_; 
v_proofs_2939_ = lean_ctor_get_uint8(v___y_2914_, 0);
v_types_2940_ = lean_ctor_get_uint8(v___y_2914_, 1);
v_descend_2941_ = lean_ctor_get_uint8(v___y_2914_, 3);
if (v_descend_2941_ == 0)
{
goto v___jp_2987_;
}
else
{
if (v___x_2938_ == 0)
{
v___y_2963_ = v___x_2938_;
goto v___jp_2962_;
}
else
{
goto v___jp_2987_;
}
}
v___jp_2942_:
{
if (v___y_2946_ == 0)
{
lean_dec_ref(v___y_2944_);
if (v_proofs_2939_ == 0)
{
lean_object* v___x_2947_; 
lean_inc_ref(v_e_2912_);
v___x_2947_ = l_Lean_Meta_isProof(v_e_2912_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; uint8_t v___x_2949_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_a_2948_);
lean_dec_ref_known(v___x_2947_, 1);
v___x_2949_ = lean_unbox(v_a_2948_);
lean_dec(v_a_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_dec_ref(v_e_2912_);
v___x_2950_ = lean_box(0);
lean_inc(v___y_2920_);
lean_inc_ref(v___y_2919_);
lean_inc(v___y_2918_);
lean_inc_ref(v___y_2917_);
lean_inc(v___y_2916_);
lean_inc(v___y_2915_);
lean_inc_ref(v___y_2914_);
v___x_2951_ = lean_apply_9(v___y_2945_, v___x_2950_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, lean_box(0));
v___y_2930_ = v___y_2943_;
v___y_2931_ = v___x_2951_;
goto v___jp_2929_;
}
else
{
lean_dec_ref(v___y_2945_);
v___y_2923_ = v___y_2943_;
v_a_2924_ = v_e_2912_;
goto v___jp_2922_;
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
lean_dec_ref(v___y_2945_);
lean_dec_ref(v___y_2943_);
lean_dec_ref(v_e_2912_);
v_a_2952_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2947_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2947_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
else
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
lean_dec_ref(v_e_2912_);
v___x_2960_ = lean_box(0);
lean_inc(v___y_2920_);
lean_inc_ref(v___y_2919_);
lean_inc(v___y_2918_);
lean_inc_ref(v___y_2917_);
lean_inc(v___y_2916_);
lean_inc(v___y_2915_);
lean_inc_ref(v___y_2914_);
v___x_2961_ = lean_apply_9(v___y_2945_, v___x_2960_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, lean_box(0));
v___y_2930_ = v___y_2943_;
v___y_2931_ = v___x_2961_;
goto v___jp_2929_;
}
}
else
{
lean_dec_ref(v___y_2945_);
lean_dec_ref(v_e_2912_);
v___y_2934_ = v___y_2943_;
v___y_2935_ = v___y_2944_;
goto v___jp_2933_;
}
}
v___jp_2962_:
{
if (v___y_2963_ == 0)
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2964_ = lean_box(v_topLevel_2913_);
lean_inc_ref(v_e_2912_);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
lean_ctor_set(v___x_2965_, 1, v_e_2912_);
v___x_2966_ = lean_st_ref_get(v___y_2915_);
v___x_2967_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v___x_2966_, v___x_2965_);
lean_dec(v___x_2966_);
if (lean_obj_tag(v___x_2967_) == 0)
{
uint8_t v___x_2968_; 
v___x_2968_ = l_Lean_Meta_ExtractLets_containsLet(v_e_2912_);
if (v___x_2968_ == 0)
{
lean_dec(v_fvars_2911_);
v___y_2923_ = v___x_2965_;
v_a_2924_ = v_e_2912_;
goto v___jp_2922_;
}
else
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___f_2973_; lean_object* v___x_2974_; lean_object* v___f_2975_; 
v___x_2969_ = lean_box(v_descend_2941_);
v___x_2970_ = lean_box(v___x_2968_);
v___x_2971_ = lean_box(v_topLevel_2913_);
v___x_2972_ = lean_box(v___y_2963_);
lean_inc_ref_n(v_e_2912_, 2);
v___f_2973_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed), 15, 6);
lean_closure_set(v___f_2973_, 0, v___x_2969_);
lean_closure_set(v___f_2973_, 1, v_e_2912_);
lean_closure_set(v___f_2973_, 2, v_fvars_2911_);
lean_closure_set(v___f_2973_, 3, v___x_2970_);
lean_closure_set(v___f_2973_, 4, v___x_2971_);
lean_closure_set(v___f_2973_, 5, v___x_2972_);
v___x_2974_ = lean_box(v_types_2940_);
lean_inc_ref(v___f_2973_);
v___f_2975_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed), 12, 3);
lean_closure_set(v___f_2975_, 0, v___x_2974_);
lean_closure_set(v___f_2975_, 1, v_e_2912_);
lean_closure_set(v___f_2975_, 2, v___f_2973_);
if (v_topLevel_2913_ == 0)
{
v___y_2943_ = v___x_2965_;
v___y_2944_ = v___f_2973_;
v___y_2945_ = v___f_2975_;
v___y_2946_ = v___x_2938_;
goto v___jp_2942_;
}
else
{
uint8_t v___x_2976_; 
v___x_2976_ = l_Lean_Expr_isLet(v_e_2912_);
if (v___x_2976_ == 0)
{
uint8_t v___x_2977_; 
v___x_2977_ = l_Lean_Expr_isMData(v_e_2912_);
v___y_2943_ = v___x_2965_;
v___y_2944_ = v___f_2973_;
v___y_2945_ = v___f_2975_;
v___y_2946_ = v___x_2977_;
goto v___jp_2942_;
}
else
{
lean_dec_ref(v___f_2975_);
lean_dec_ref(v_e_2912_);
v___y_2934_ = v___x_2965_;
v___y_2935_ = v___f_2973_;
goto v___jp_2933_;
}
}
}
}
else
{
lean_object* v_val_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
lean_dec_ref_known(v___x_2965_, 2);
lean_dec_ref(v_e_2912_);
lean_dec(v_fvars_2911_);
v_val_2978_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2967_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_val_2978_);
lean_dec(v___x_2967_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
lean_ctor_set_tag(v___x_2980_, 0);
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_val_2978_);
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
else
{
lean_object* v___x_2986_; 
lean_dec(v_fvars_2911_);
v___x_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2986_, 0, v_e_2912_);
return v___x_2986_;
}
}
v___jp_2987_:
{
if (v_topLevel_2913_ == 0)
{
lean_object* v___x_2988_; 
lean_dec(v_fvars_2911_);
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v_e_2912_);
return v___x_2988_;
}
else
{
v___y_2963_ = v___x_2938_;
goto v___jp_2962_;
}
}
}
else
{
lean_object* v___x_2989_; 
lean_dec(v_fvars_2911_);
v___x_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2989_, 0, v_e_2912_);
return v___x_2989_;
}
v___jp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2925_ = lean_st_ref_take(v___y_2915_);
lean_inc_ref(v_a_2924_);
v___x_2926_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v___x_2925_, v___y_2923_, v_a_2924_);
v___x_2927_ = lean_st_ref_put(v___y_2915_, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2928_, 0, v_a_2924_);
return v___x_2928_;
}
v___jp_2929_:
{
if (lean_obj_tag(v___y_2931_) == 0)
{
lean_object* v_a_2932_; 
v_a_2932_ = lean_ctor_get(v___y_2931_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___y_2931_, 1);
v___y_2923_ = v___y_2930_;
v_a_2924_ = v_a_2932_;
goto v___jp_2922_;
}
else
{
lean_dec_ref(v___y_2930_);
return v___y_2931_;
}
}
v___jp_2933_:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2936_ = lean_box(0);
lean_inc(v___y_2920_);
lean_inc_ref(v___y_2919_);
lean_inc(v___y_2918_);
lean_inc_ref(v___y_2917_);
lean_inc(v___y_2916_);
lean_inc(v___y_2915_);
lean_inc_ref(v___y_2914_);
v___x_2937_ = lean_apply_9(v___y_2935_, v___x_2936_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, lean_box(0));
v___y_2930_ = v___y_2934_;
v___y_2931_ = v___x_2937_;
goto v___jp_2929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object* v_fvars_2990_, lean_object* v_struct_2991_, uint8_t v___y_2992_, lean_object* v_typeName_2993_, lean_object* v_idx_2994_, lean_object* v_e_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v___x_3004_; 
lean_inc_ref(v_struct_2991_);
v___x_3004_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2990_, v_struct_2991_, v___y_2992_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3019_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3007_ = v___x_3004_;
v_isShared_3008_ = v_isSharedCheck_3019_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_3004_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3019_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
size_t v___x_3009_; size_t v___x_3010_; uint8_t v___x_3011_; 
v___x_3009_ = lean_ptr_addr(v_struct_2991_);
lean_dec_ref(v_struct_2991_);
v___x_3010_ = lean_ptr_addr(v_a_3005_);
v___x_3011_ = lean_usize_dec_eq(v___x_3009_, v___x_3010_);
if (v___x_3011_ == 0)
{
lean_object* v___x_3012_; lean_object* v___x_3014_; 
lean_dec_ref(v_e_2995_);
v___x_3012_ = l_Lean_Expr_proj___override(v_typeName_2993_, v_idx_2994_, v_a_3005_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 0, v___x_3012_);
v___x_3014_ = v___x_3007_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
else
{
lean_object* v___x_3017_; 
lean_dec(v_a_3005_);
lean_dec(v_idx_2994_);
lean_dec(v_typeName_2993_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 0, v_e_2995_);
v___x_3017_ = v___x_3007_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_e_2995_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
else
{
lean_dec_ref(v_e_2995_);
lean_dec(v_idx_2994_);
lean_dec(v_typeName_2993_);
lean_dec_ref(v_struct_2991_);
return v___x_3004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object* v_fvars_3020_, lean_object* v_sz_3021_, lean_object* v_i_3022_, lean_object* v_bs_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
size_t v_sz_boxed_3032_; size_t v_i_boxed_3033_; lean_object* v_res_3034_; 
v_sz_boxed_3032_ = lean_unbox_usize(v_sz_3021_);
lean_dec(v_sz_3021_);
v_i_boxed_3033_ = lean_unbox_usize(v_i_3022_);
lean_dec(v_i_3022_);
v_res_3034_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_3020_, v_sz_boxed_3032_, v_i_boxed_3033_, v_bs_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec(v___y_3025_);
lean_dec_ref(v___y_3024_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object* v_upperBound_3035_, lean_object* v_fst_3036_, lean_object* v_fvars_3037_, lean_object* v_a_3038_, lean_object* v_b_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3035_, v_fst_3036_, v_fvars_3037_, v_a_3038_, v_b_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec_ref(v_fst_3036_);
lean_dec(v_upperBound_3035_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object* v_fvars_3049_, lean_object* v_e_3050_, lean_object* v_isLet_3051_, lean_object* v_n_3052_, lean_object* v_t_3053_, lean_object* v_v_3054_, lean_object* v_b_3055_, lean_object* v_topLevel_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_){
_start:
{
uint8_t v_isLet_boxed_3065_; uint8_t v_topLevel_boxed_3066_; lean_object* v_res_3067_; 
v_isLet_boxed_3065_ = lean_unbox(v_isLet_3051_);
v_topLevel_boxed_3066_ = lean_unbox(v_topLevel_3056_);
v_res_3067_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_3049_, v_e_3050_, v_isLet_boxed_3065_, v_n_3052_, v_t_3053_, v_v_3054_, v_b_3055_, v_topLevel_boxed_3066_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object* v_00_u03b1_3068_, lean_object* v_name_3069_, lean_object* v_type_3070_, lean_object* v_val_3071_, lean_object* v_k_3072_, uint8_t v_nondep_3073_, uint8_t v_kind_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
lean_object* v___x_3083_; 
v___x_3083_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_3069_, v_type_3070_, v_val_3071_, v_k_3072_, v_nondep_3073_, v_kind_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object* v_00_u03b1_3084_, lean_object* v_name_3085_, lean_object* v_type_3086_, lean_object* v_val_3087_, lean_object* v_k_3088_, lean_object* v_nondep_3089_, lean_object* v_kind_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
uint8_t v_nondep_boxed_3099_; uint8_t v_kind_boxed_3100_; lean_object* v_res_3101_; 
v_nondep_boxed_3099_ = lean_unbox(v_nondep_3089_);
v_kind_boxed_3100_ = lean_unbox(v_kind_3090_);
v_res_3101_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(v_00_u03b1_3084_, v_name_3085_, v_type_3086_, v_val_3087_, v_k_3088_, v_nondep_boxed_3099_, v_kind_boxed_3100_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_);
lean_dec(v___y_3097_);
lean_dec_ref(v___y_3096_);
lean_dec(v___y_3095_);
lean_dec_ref(v___y_3094_);
lean_dec(v___y_3093_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object* v_00_u03b2_3102_, lean_object* v_m_3103_, lean_object* v_a_3104_, lean_object* v_b_3105_){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v_m_3103_, v_a_3104_, v_b_3105_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object* v_00_u03b2_3107_, lean_object* v_m_3108_, lean_object* v_a_3109_){
_start:
{
lean_object* v___x_3110_; 
v___x_3110_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_3108_, v_a_3109_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object* v_00_u03b2_3111_, lean_object* v_m_3112_, lean_object* v_a_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(v_00_u03b2_3111_, v_m_3112_, v_a_3113_);
lean_dec_ref(v_a_3113_);
lean_dec_ref(v_m_3112_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object* v_upperBound_3115_, lean_object* v_fst_3116_, lean_object* v_fvars_3117_, lean_object* v_inst_3118_, lean_object* v_R_3119_, lean_object* v_a_3120_, lean_object* v_b_3121_, lean_object* v_c_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v___x_3131_; 
v___x_3131_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3115_, v_fst_3116_, v_fvars_3117_, v_a_3120_, v_b_3121_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object* v_upperBound_3132_, lean_object* v_fst_3133_, lean_object* v_fvars_3134_, lean_object* v_inst_3135_, lean_object* v_R_3136_, lean_object* v_a_3137_, lean_object* v_b_3138_, lean_object* v_c_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(v_upperBound_3132_, v_fst_3133_, v_fvars_3134_, v_inst_3135_, v_R_3136_, v_a_3137_, v_b_3138_, v_c_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
lean_dec(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec_ref(v_fst_3133_);
lean_dec(v_upperBound_3132_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object* v_00_u03b2_3149_, lean_object* v_m_3150_, lean_object* v_a_3151_){
_start:
{
lean_object* v___x_3152_; 
v___x_3152_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_3150_, v_a_3151_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object* v_00_u03b2_3153_, lean_object* v_m_3154_, lean_object* v_a_3155_){
_start:
{
lean_object* v_res_3156_; 
v_res_3156_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(v_00_u03b2_3153_, v_m_3154_, v_a_3155_);
lean_dec_ref(v_a_3155_);
lean_dec_ref(v_m_3154_);
return v_res_3156_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object* v_00_u03b2_3157_, lean_object* v_a_3158_, lean_object* v_x_3159_){
_start:
{
uint8_t v___x_3160_; 
v___x_3160_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_3158_, v_x_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3161_, lean_object* v_a_3162_, lean_object* v_x_3163_){
_start:
{
uint8_t v_res_3164_; lean_object* v_r_3165_; 
v_res_3164_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(v_00_u03b2_3161_, v_a_3162_, v_x_3163_);
lean_dec(v_x_3163_);
lean_dec_ref(v_a_3162_);
v_r_3165_ = lean_box(v_res_3164_);
return v_r_3165_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object* v_00_u03b2_3166_, lean_object* v_data_3167_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_data_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object* v_00_u03b2_3169_, lean_object* v_a_3170_, lean_object* v_b_3171_, lean_object* v_x_3172_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_3170_, v_b_3171_, v_x_3172_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object* v_00_u03b2_3174_, lean_object* v_a_3175_, lean_object* v_x_3176_){
_start:
{
lean_object* v___x_3177_; 
v___x_3177_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_3175_, v_x_3176_);
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3178_, lean_object* v_a_3179_, lean_object* v_x_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(v_00_u03b2_3178_, v_a_3179_, v_x_3180_);
lean_dec(v_x_3180_);
lean_dec_ref(v_a_3179_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object* v_00_u03b2_3182_, lean_object* v_a_3183_, lean_object* v_x_3184_){
_start:
{
lean_object* v___x_3185_; 
v___x_3185_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_3183_, v_x_3184_);
return v___x_3185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object* v_00_u03b2_3186_, lean_object* v_a_3187_, lean_object* v_x_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(v_00_u03b2_3186_, v_a_3187_, v_x_3188_);
lean_dec(v_x_3188_);
lean_dec_ref(v_a_3187_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_3190_, lean_object* v_i_3191_, lean_object* v_source_3192_, lean_object* v_target_3193_){
_start:
{
lean_object* v___x_3194_; 
v___x_3194_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v_i_3191_, v_source_3192_, v_target_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3195_, lean_object* v_x_3196_, lean_object* v_x_3197_){
_start:
{
lean_object* v___x_3198_; 
v___x_3198_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_x_3196_, v_x_3197_);
return v___x_3198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object* v_e_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v___x_3208_; lean_object* v_a_3209_; lean_object* v___x_3210_; uint8_t v___x_3211_; lean_object* v___x_3212_; 
v___x_3208_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_3199_, v___y_3204_);
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_a_3209_);
lean_dec_ref(v___x_3208_);
v___x_3210_ = lean_box(0);
v___x_3211_ = 1;
v___x_3212_ = l_Lean_Meta_ExtractLets_extractCore(v___x_3210_, v_a_3209_, v___x_3211_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object* v_e_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_e_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
return v_res_3222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t v_sz_3223_, size_t v_i_3224_, lean_object* v_bs_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
uint8_t v___x_3234_; 
v___x_3234_ = lean_usize_dec_lt(v_i_3224_, v_sz_3223_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; 
v___x_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3235_, 0, v_bs_3225_);
return v___x_3235_;
}
else
{
lean_object* v_v_3236_; lean_object* v___x_3237_; lean_object* v_bs_x27_3238_; lean_object* v___x_3239_; 
v_v_3236_ = lean_array_uget(v_bs_3225_, v_i_3224_);
v___x_3237_ = lean_unsigned_to_nat(0u);
v_bs_x27_3238_ = lean_array_uset(v_bs_3225_, v_i_3224_, v___x_3237_);
v___x_3239_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_v_3236_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; size_t v___x_3241_; size_t v___x_3242_; lean_object* v___x_3243_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v___x_3241_ = ((size_t)1ULL);
v___x_3242_ = lean_usize_add(v_i_3224_, v___x_3241_);
v___x_3243_ = lean_array_uset(v_bs_x27_3238_, v_i_3224_, v_a_3240_);
v_i_3224_ = v___x_3242_;
v_bs_3225_ = v___x_3243_;
goto _start;
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec_ref(v_bs_x27_3238_);
v_a_3245_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3239_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3239_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object* v_sz_3253_, lean_object* v_i_3254_, lean_object* v_bs_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_){
_start:
{
size_t v_sz_boxed_3264_; size_t v_i_boxed_3265_; lean_object* v_res_3266_; 
v_sz_boxed_3264_ = lean_unbox_usize(v_sz_3253_);
lean_dec(v_sz_3253_);
v_i_boxed_3265_ = lean_unbox_usize(v_i_3254_);
lean_dec(v_i_3254_);
v_res_3266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_boxed_3264_, v_i_boxed_3265_, v_bs_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
lean_dec(v___y_3258_);
lean_dec(v___y_3257_);
lean_dec_ref(v___y_3256_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object* v_es_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_){
_start:
{
lean_object* v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v___y_3280_; lean_object* v___y_3281_; lean_object* v___y_3282_; lean_object* v___y_3283_; uint8_t v_merge_3287_; 
v_merge_3287_ = lean_ctor_get_uint8(v___y_3268_, 6);
if (v_merge_3287_ == 0)
{
v___y_3277_ = v___y_3268_;
v___y_3278_ = v___y_3269_;
v___y_3279_ = v___y_3270_;
v___y_3280_ = v___y_3271_;
v___y_3281_ = v___y_3272_;
v___y_3282_ = v___y_3273_;
v___y_3283_ = v___y_3274_;
goto v___jp_3276_;
}
else
{
uint8_t v_useContext_3288_; 
v_useContext_3288_ = lean_ctor_get_uint8(v___y_3268_, 7);
if (v_useContext_3288_ == 0)
{
v___y_3277_ = v___y_3268_;
v___y_3278_ = v___y_3269_;
v___y_3279_ = v___y_3270_;
v___y_3280_ = v___y_3271_;
v___y_3281_ = v___y_3272_;
v___y_3282_ = v___y_3273_;
v___y_3283_ = v___y_3274_;
goto v___jp_3276_;
}
else
{
lean_object* v___x_3289_; 
v___x_3289_ = l_Lean_Meta_ExtractLets_initializeValueMap(v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_dec_ref_known(v___x_3289_, 1);
v___y_3277_ = v___y_3268_;
v___y_3278_ = v___y_3269_;
v___y_3279_ = v___y_3270_;
v___y_3280_ = v___y_3271_;
v___y_3281_ = v___y_3272_;
v___y_3282_ = v___y_3273_;
v___y_3283_ = v___y_3274_;
goto v___jp_3276_;
}
else
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
lean_dec_ref(v_es_3267_);
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3292_ = v___x_3289_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3289_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
}
v___jp_3276_:
{
size_t v_sz_3284_; size_t v___x_3285_; lean_object* v___x_3286_; 
v_sz_3284_ = lean_array_size(v_es_3267_);
v___x_3285_ = ((size_t)0ULL);
v___x_3286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_3284_, v___x_3285_, v_es_3267_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
return v___x_3286_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object* v_es_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lean_Meta_ExtractLets_extract(v_es_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
lean_dec(v___y_3303_);
lean_dec_ref(v___y_3302_);
lean_dec(v___y_3301_);
lean_dec(v___y_3300_);
lean_dec_ref(v___y_3299_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object* v_decls_3308_, lean_object* v_x_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
lean_object* v___x_3315_; 
v___x_3315_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_3308_, v_x_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3323_; 
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3318_ = v___x_3315_;
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3315_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
v_a_3324_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3315_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3315_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object* v_decls_3332_, lean_object* v_x_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3332_, v_x_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object* v_00_u03b1_3340_, lean_object* v_decls_3341_, lean_object* v_x_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v___x_3348_; 
v___x_3348_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3341_, v_x_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
return v___x_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object* v_00_u03b1_3349_, lean_object* v_decls_3350_, lean_object* v_x_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
lean_object* v_res_3357_; 
v_res_3357_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(v_00_u03b1_3349_, v_decls_3350_, v_x_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t v_sz_3358_, size_t v_i_3359_, lean_object* v_bs_3360_){
_start:
{
uint8_t v___x_3361_; 
v___x_3361_ = lean_usize_dec_lt(v_i_3359_, v_sz_3358_);
if (v___x_3361_ == 0)
{
return v_bs_3360_;
}
else
{
lean_object* v_v_3362_; lean_object* v___x_3363_; lean_object* v_bs_x27_3364_; lean_object* v___x_3365_; size_t v___x_3366_; size_t v___x_3367_; lean_object* v___x_3368_; 
v_v_3362_ = lean_array_uget(v_bs_3360_, v_i_3359_);
v___x_3363_ = lean_unsigned_to_nat(0u);
v_bs_x27_3364_ = lean_array_uset(v_bs_3360_, v_i_3359_, v___x_3363_);
v___x_3365_ = l_Lean_LocalDecl_fvarId(v_v_3362_);
lean_dec(v_v_3362_);
v___x_3366_ = ((size_t)1ULL);
v___x_3367_ = lean_usize_add(v_i_3359_, v___x_3366_);
v___x_3368_ = lean_array_uset(v_bs_x27_3364_, v_i_3359_, v___x_3365_);
v_i_3359_ = v___x_3367_;
v_bs_3360_ = v___x_3368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object* v_sz_3370_, lean_object* v_i_3371_, lean_object* v_bs_3372_){
_start:
{
size_t v_sz_boxed_3373_; size_t v_i_boxed_3374_; lean_object* v_res_3375_; 
v_sz_boxed_3373_ = lean_unbox_usize(v_sz_3370_);
lean_dec(v_sz_3370_);
v_i_boxed_3374_ = lean_unbox_usize(v_i_3371_);
lean_dec(v_i_3371_);
v_res_3375_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_boxed_3373_, v_i_boxed_3374_, v_bs_3372_);
return v_res_3375_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3376_ = lean_box(0);
v___x_3377_ = lean_unsigned_to_nat(16u);
v___x_3378_ = lean_mk_array(v___x_3377_, v___x_3376_);
return v___x_3378_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3379_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0);
v___x_3380_ = lean_unsigned_to_nat(0u);
v___x_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
lean_ctor_set(v___x_3381_, 1, v___x_3379_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object* v_es_3382_, lean_object* v_givenNames_3383_, lean_object* v_k_3384_, lean_object* v_config_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3391_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3392_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3393_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3393_, 0, v_givenNames_3383_);
lean_ctor_set(v___x_3393_, 1, v___x_3392_);
lean_ctor_set(v___x_3393_, 2, v___x_3391_);
v___x_3394_ = lean_st_mk_ref(v___x_3393_);
v___x_3395_ = lean_st_mk_ref(v___x_3391_);
v___x_3396_ = l_Lean_Meta_ExtractLets_extract(v_es_3382_, v_config_3385_, v___x_3395_, v___x_3394_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v_givenNames_3400_; lean_object* v_decls_3401_; size_t v_sz_3402_; size_t v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; size_t v_sz_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_a_3397_);
lean_dec_ref_known(v___x_3396_, 1);
v___x_3398_ = lean_st_ref_get(v___x_3395_);
lean_dec(v___x_3395_);
lean_dec(v___x_3398_);
v___x_3399_ = lean_st_ref_get(v___x_3394_);
lean_dec(v___x_3394_);
v_givenNames_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_givenNames_3400_);
v_decls_3401_ = lean_ctor_get(v___x_3399_, 1);
lean_inc_ref(v_decls_3401_);
lean_dec(v___x_3399_);
v_sz_3402_ = lean_array_size(v_decls_3401_);
v___x_3403_ = ((size_t)0ULL);
v___x_3404_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_3402_, v___x_3403_, v_decls_3401_);
lean_inc_ref(v___x_3404_);
v___x_3405_ = lean_array_to_list(v___x_3404_);
v_sz_3406_ = lean_array_size(v___x_3404_);
v___x_3407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_3406_, v___x_3403_, v___x_3404_);
v___x_3408_ = lean_apply_3(v_k_3384_, v___x_3407_, v_a_3397_, v_givenNames_3400_);
v___x_3409_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v___x_3405_, v___x_3408_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_);
return v___x_3409_;
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec(v___x_3395_);
lean_dec(v___x_3394_);
lean_dec_ref(v_k_3384_);
v_a_3410_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3396_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3396_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object* v_es_3418_, lean_object* v_givenNames_3419_, lean_object* v_k_3420_, lean_object* v_config_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3418_, v_givenNames_3419_, v_k_3420_, v_config_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec_ref(v_config_3421_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object* v_00_u03b1_3428_, lean_object* v_es_3429_, lean_object* v_givenNames_3430_, lean_object* v_k_3431_, lean_object* v_config_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v___x_3438_; 
v___x_3438_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3429_, v_givenNames_3430_, v_k_3431_, v_config_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object* v_00_u03b1_3439_, lean_object* v_es_3440_, lean_object* v_givenNames_3441_, lean_object* v_k_3442_, lean_object* v_config_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(v_00_u03b1_3439_, v_es_3440_, v_givenNames_3441_, v_k_3442_, v_config_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec_ref(v_config_3443_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object* v_k_3450_, lean_object* v_runInBase_3451_, lean_object* v_b_3452_, lean_object* v_c_3453_, lean_object* v_d_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3460_ = lean_apply_3(v_k_3450_, v_b_3452_, v_c_3453_, v_d_3454_);
lean_inc(v___y_3458_);
lean_inc_ref(v___y_3457_);
lean_inc(v___y_3456_);
lean_inc_ref(v___y_3455_);
v___x_3461_ = lean_apply_7(v_runInBase_3451_, lean_box(0), v___x_3460_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, lean_box(0));
return v___x_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object* v_k_3462_, lean_object* v_runInBase_3463_, lean_object* v_b_3464_, lean_object* v_c_3465_, lean_object* v_d_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lean_Meta_extractLets___redArg___lam__0(v_k_3462_, v_runInBase_3463_, v_b_3464_, v_c_3465_, v_d_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v___y_3468_);
lean_dec_ref(v___y_3467_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object* v_k_3473_, lean_object* v_es_3474_, lean_object* v_givenNames_3475_, lean_object* v_config_3476_, lean_object* v_runInBase_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v___f_3483_; lean_object* v___x_3484_; 
v___f_3483_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3483_, 0, v_k_3473_);
lean_closure_set(v___f_3483_, 1, v_runInBase_3477_);
v___x_3484_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3474_, v_givenNames_3475_, v___f_3483_, v_config_3476_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
return v___x_3484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object* v_k_3485_, lean_object* v_es_3486_, lean_object* v_givenNames_3487_, lean_object* v_config_3488_, lean_object* v_runInBase_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l_Lean_Meta_extractLets___redArg___lam__1(v_k_3485_, v_es_3486_, v_givenNames_3487_, v_config_3488_, v_runInBase_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec_ref(v_config_3488_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object* v_inst_3496_, lean_object* v_inst_3497_, lean_object* v_es_3498_, lean_object* v_givenNames_3499_, lean_object* v_k_3500_, lean_object* v_config_3501_){
_start:
{
lean_object* v_toBind_3502_; lean_object* v_liftWith_3503_; lean_object* v_restoreM_3504_; lean_object* v___f_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; 
v_toBind_3502_ = lean_ctor_get(v_inst_3496_, 1);
lean_inc(v_toBind_3502_);
lean_dec_ref(v_inst_3496_);
v_liftWith_3503_ = lean_ctor_get(v_inst_3497_, 0);
lean_inc(v_liftWith_3503_);
v_restoreM_3504_ = lean_ctor_get(v_inst_3497_, 1);
lean_inc(v_restoreM_3504_);
lean_dec_ref(v_inst_3497_);
v___f_3505_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3505_, 0, v_k_3500_);
lean_closure_set(v___f_3505_, 1, v_es_3498_);
lean_closure_set(v___f_3505_, 2, v_givenNames_3499_);
lean_closure_set(v___f_3505_, 3, v_config_3501_);
v___x_3506_ = lean_apply_2(v_liftWith_3503_, lean_box(0), v___f_3505_);
v___x_3507_ = lean_apply_1(v_restoreM_3504_, lean_box(0));
v___x_3508_ = lean_apply_4(v_toBind_3502_, lean_box(0), lean_box(0), v___x_3506_, v___x_3507_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object* v_m_3509_, lean_object* v_00_u03b1_3510_, lean_object* v_inst_3511_, lean_object* v_inst_3512_, lean_object* v_es_3513_, lean_object* v_givenNames_3514_, lean_object* v_k_3515_, lean_object* v_config_3516_){
_start:
{
lean_object* v___x_3517_; 
v___x_3517_ = l_Lean_Meta_extractLets___redArg(v_inst_3511_, v_inst_3512_, v_es_3513_, v_givenNames_3514_, v_k_3515_, v_config_3516_);
return v___x_3517_;
}
}
static lean_object* _init_l_Lean_Meta_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3518_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3519_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3520_ = lean_box(0);
v___x_3521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
lean_ctor_set(v___x_3521_, 1, v___x_3519_);
lean_ctor_set(v___x_3521_, 2, v___x_3518_);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object* v_e_3522_, lean_object* v_config_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
uint8_t v_proofs_3529_; uint8_t v_types_3530_; uint8_t v_implicits_3531_; uint8_t v_descend_3532_; uint8_t v_underBinder_3533_; uint8_t v_usedOnly_3534_; uint8_t v_merge_3535_; uint8_t v_useContext_3536_; uint8_t v_preserveBinderNames_3537_; uint8_t v_lift_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3577_; 
v_proofs_3529_ = lean_ctor_get_uint8(v_config_3523_, 0);
v_types_3530_ = lean_ctor_get_uint8(v_config_3523_, 1);
v_implicits_3531_ = lean_ctor_get_uint8(v_config_3523_, 2);
v_descend_3532_ = lean_ctor_get_uint8(v_config_3523_, 3);
v_underBinder_3533_ = lean_ctor_get_uint8(v_config_3523_, 4);
v_usedOnly_3534_ = lean_ctor_get_uint8(v_config_3523_, 5);
v_merge_3535_ = lean_ctor_get_uint8(v_config_3523_, 6);
v_useContext_3536_ = lean_ctor_get_uint8(v_config_3523_, 7);
v_preserveBinderNames_3537_ = lean_ctor_get_uint8(v_config_3523_, 9);
v_lift_3538_ = lean_ctor_get_uint8(v_config_3523_, 10);
v_isSharedCheck_3577_ = !lean_is_exclusive(v_config_3523_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3540_ = v_config_3523_;
v_isShared_3541_ = v_isSharedCheck_3577_;
goto v_resetjp_3539_;
}
else
{
lean_dec(v_config_3523_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3577_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; uint8_t v___x_3546_; lean_object* v___x_3548_; 
v___x_3542_ = l_Lean_instInhabitedExpr;
v___x_3543_ = lean_unsigned_to_nat(1u);
v___x_3544_ = lean_mk_empty_array_with_capacity(v___x_3543_);
v___x_3545_ = lean_array_push(v___x_3544_, v_e_3522_);
v___x_3546_ = 1;
if (v_isShared_3541_ == 0)
{
v___x_3548_ = v___x_3540_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 0, v_proofs_3529_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 1, v_types_3530_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 2, v_implicits_3531_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 3, v_descend_3532_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 4, v_underBinder_3533_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 5, v_usedOnly_3534_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 6, v_merge_3535_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 7, v_useContext_3536_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 9, v_preserveBinderNames_3537_);
lean_ctor_set_uint8(v_reuseFailAlloc_3576_, 10, v_lift_3538_);
v___x_3548_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
lean_ctor_set_uint8(v___x_3548_, 8, v___x_3546_);
v___x_3549_ = lean_unsigned_to_nat(0u);
v___x_3550_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3551_ = lean_obj_once(&l_Lean_Meta_liftLets___closed__0, &l_Lean_Meta_liftLets___closed__0_once, _init_l_Lean_Meta_liftLets___closed__0);
v___x_3552_ = lean_st_mk_ref(v___x_3551_);
v___x_3553_ = lean_st_mk_ref(v___x_3550_);
v___x_3554_ = l_Lean_Meta_ExtractLets_extract(v___x_3545_, v___x_3548_, v___x_3553_, v___x_3552_, v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_);
lean_dec_ref(v___x_3548_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3567_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3557_ = v___x_3554_;
v_isShared_3558_ = v_isSharedCheck_3567_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_dec(v___x_3554_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3567_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v_decls_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3565_; 
v___x_3559_ = lean_st_ref_get(v___x_3553_);
lean_dec(v___x_3553_);
lean_dec(v___x_3559_);
v___x_3560_ = lean_st_ref_get(v___x_3552_);
lean_dec(v___x_3552_);
v_decls_3561_ = lean_ctor_get(v___x_3560_, 1);
lean_inc_ref(v_decls_3561_);
lean_dec(v___x_3560_);
v___x_3562_ = lean_array_get(v___x_3542_, v_a_3555_, v___x_3549_);
lean_dec(v_a_3555_);
v___x_3563_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_3561_, v___x_3562_);
lean_dec_ref(v_decls_3561_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3563_);
v___x_3565_ = v___x_3557_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec(v___x_3553_);
lean_dec(v___x_3552_);
v_a_3568_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3554_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3554_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object* v_e_3578_, lean_object* v_config_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_){
_start:
{
lean_object* v_res_3585_; 
v_res_3585_ = l_Lean_Meta_liftLets(v_e_3578_, v_config_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
lean_dec(v___y_3583_);
lean_dec_ref(v___y_3582_);
lean_dec(v___y_3581_);
lean_dec_ref(v___y_3580_);
return v_res_3585_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1(void){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3587_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0));
v___x_3588_ = l_Lean_stringToMessageData(v___x_3587_);
return v___x_3588_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2(void){
_start:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3589_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1);
v___x_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object* v_tactic_3591_, lean_object* v_mvarId_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; 
v___x_3598_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2);
v___x_3599_ = l_Lean_Meta_throwTacticEx___redArg(v_tactic_3591_, v_mvarId_3592_, v___x_3598_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object* v_tactic_3600_, lean_object* v_mvarId_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v_res_3607_; 
v_res_3607_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3600_, v_mvarId_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
lean_dec(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec(v___y_3603_);
lean_dec_ref(v___y_3602_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object* v_00_u03b1_3608_, lean_object* v_tactic_3609_, lean_object* v_mvarId_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
lean_object* v___x_3616_; 
v___x_3616_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3609_, v_mvarId_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object* v_00_u03b1_3617_, lean_object* v_tactic_3618_, lean_object* v_mvarId_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(v_00_u03b1_3617_, v_tactic_3618_, v_mvarId_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
lean_dec(v___y_3623_);
lean_dec_ref(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object* v_k_3626_, lean_object* v_b_3627_, lean_object* v_c_3628_, lean_object* v_d_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; 
lean_inc(v___y_3633_);
lean_inc_ref(v___y_3632_);
lean_inc(v___y_3631_);
lean_inc_ref(v___y_3630_);
v___x_3635_ = lean_apply_8(v_k_3626_, v_b_3627_, v_c_3628_, v_d_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, lean_box(0));
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object* v_k_3636_, lean_object* v_b_3637_, lean_object* v_c_3638_, lean_object* v_d_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(v_k_3636_, v_b_3637_, v_c_3638_, v_d_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object* v_es_3646_, lean_object* v_givenNames_3647_, lean_object* v_k_3648_, lean_object* v_config_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_){
_start:
{
lean_object* v___f_3655_; lean_object* v___x_3656_; 
v___f_3655_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3655_, 0, v_k_3648_);
v___x_3656_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3646_, v_givenNames_3647_, v___f_3655_, v_config_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3664_; 
v_a_3657_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3659_ = v___x_3656_;
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3656_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3662_; 
if (v_isShared_3660_ == 0)
{
v___x_3662_ = v___x_3659_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_a_3657_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
v_a_3665_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3656_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3656_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object* v_es_3673_, lean_object* v_givenNames_3674_, lean_object* v_k_3675_, lean_object* v_config_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_){
_start:
{
lean_object* v_res_3682_; 
v_res_3682_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3673_, v_givenNames_3674_, v_k_3675_, v_config_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3678_);
lean_dec_ref(v___y_3677_);
lean_dec_ref(v_config_3676_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object* v_00_u03b1_3683_, lean_object* v_es_3684_, lean_object* v_givenNames_3685_, lean_object* v_k_3686_, lean_object* v_config_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; 
v___x_3693_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3684_, v_givenNames_3685_, v_k_3686_, v_config_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object* v_00_u03b1_3694_, lean_object* v_es_3695_, lean_object* v_givenNames_3696_, lean_object* v_k_3697_, lean_object* v_config_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(v_00_u03b1_3694_, v_es_3695_, v_givenNames_3696_, v_k_3697_, v_config_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
lean_dec(v___y_3702_);
lean_dec_ref(v___y_3701_);
lean_dec(v___y_3700_);
lean_dec_ref(v___y_3699_);
lean_dec_ref(v_config_3698_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object* v_mvarId_3705_, lean_object* v_x_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_){
_start:
{
lean_object* v___x_3712_; 
v___x_3712_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3705_, v_x_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3712_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3712_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
v_a_3721_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3712_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3712_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object* v_mvarId_3729_, lean_object* v_x_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3729_, v_x_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object* v_00_u03b1_3737_, lean_object* v_mvarId_3738_, lean_object* v_x_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3738_, v_x_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object* v_00_u03b1_3746_, lean_object* v_mvarId_3747_, lean_object* v_x_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v_res_3754_; 
v_res_3754_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(v_00_u03b1_3746_, v_mvarId_3747_, v_x_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_);
lean_dec(v___y_3752_);
lean_dec_ref(v___y_3751_);
lean_dec(v___y_3750_);
lean_dec_ref(v___y_3749_);
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_3755_, lean_object* v_x_3756_, lean_object* v_x_3757_, lean_object* v_x_3758_){
_start:
{
lean_object* v_ks_3759_; lean_object* v_vs_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3784_; 
v_ks_3759_ = lean_ctor_get(v_x_3755_, 0);
v_vs_3760_ = lean_ctor_get(v_x_3755_, 1);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_x_3755_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3762_ = v_x_3755_;
v_isShared_3763_ = v_isSharedCheck_3784_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_vs_3760_);
lean_inc(v_ks_3759_);
lean_dec(v_x_3755_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3784_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3764_; uint8_t v___x_3765_; 
v___x_3764_ = lean_array_get_size(v_ks_3759_);
v___x_3765_ = lean_nat_dec_lt(v_x_3756_, v___x_3764_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3769_; 
lean_dec(v_x_3756_);
v___x_3766_ = lean_array_push(v_ks_3759_, v_x_3757_);
v___x_3767_ = lean_array_push(v_vs_3760_, v_x_3758_);
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 1, v___x_3767_);
lean_ctor_set(v___x_3762_, 0, v___x_3766_);
v___x_3769_ = v___x_3762_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3766_);
lean_ctor_set(v_reuseFailAlloc_3770_, 1, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
else
{
lean_object* v_k_x27_3771_; uint8_t v___x_3772_; 
v_k_x27_3771_ = lean_array_fget_borrowed(v_ks_3759_, v_x_3756_);
v___x_3772_ = l_Lean_instBEqMVarId_beq(v_x_3757_, v_k_x27_3771_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3774_; 
if (v_isShared_3763_ == 0)
{
v___x_3774_ = v___x_3762_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_ks_3759_);
lean_ctor_set(v_reuseFailAlloc_3778_, 1, v_vs_3760_);
v___x_3774_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3775_ = lean_unsigned_to_nat(1u);
v___x_3776_ = lean_nat_add(v_x_3756_, v___x_3775_);
lean_dec(v_x_3756_);
v_x_3755_ = v___x_3774_;
v_x_3756_ = v___x_3776_;
goto _start;
}
}
else
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3782_; 
v___x_3779_ = lean_array_fset(v_ks_3759_, v_x_3756_, v_x_3757_);
v___x_3780_ = lean_array_fset(v_vs_3760_, v_x_3756_, v_x_3758_);
lean_dec(v_x_3756_);
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 1, v___x_3780_);
lean_ctor_set(v___x_3762_, 0, v___x_3779_);
v___x_3782_ = v___x_3762_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v___x_3779_);
lean_ctor_set(v_reuseFailAlloc_3783_, 1, v___x_3780_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_n_3785_, lean_object* v_k_3786_, lean_object* v_v_3787_){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3788_ = lean_unsigned_to_nat(0u);
v___x_3789_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_n_3785_, v___x_3788_, v_k_3786_, v_v_3787_);
return v___x_3789_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3790_; 
v___x_3790_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3790_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object* v_x_3791_, size_t v_x_3792_, size_t v_x_3793_, lean_object* v_x_3794_, lean_object* v_x_3795_){
_start:
{
if (lean_obj_tag(v_x_3791_) == 0)
{
lean_object* v_es_3796_; size_t v___x_3797_; size_t v___x_3798_; lean_object* v_j_3799_; lean_object* v___x_3800_; uint8_t v___x_3801_; 
v_es_3796_ = lean_ctor_get(v_x_3791_, 0);
v___x_3797_ = ((size_t)31ULL);
v___x_3798_ = lean_usize_land(v_x_3792_, v___x_3797_);
v_j_3799_ = lean_usize_to_nat(v___x_3798_);
v___x_3800_ = lean_array_get_size(v_es_3796_);
v___x_3801_ = lean_nat_dec_lt(v_j_3799_, v___x_3800_);
if (v___x_3801_ == 0)
{
lean_dec(v_j_3799_);
lean_dec(v_x_3795_);
lean_dec(v_x_3794_);
return v_x_3791_;
}
else
{
lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3840_; 
lean_inc_ref(v_es_3796_);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_x_3791_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; 
v_unused_3841_ = lean_ctor_get(v_x_3791_, 0);
lean_dec(v_unused_3841_);
v___x_3803_ = v_x_3791_;
v_isShared_3804_ = v_isSharedCheck_3840_;
goto v_resetjp_3802_;
}
else
{
lean_dec(v_x_3791_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3840_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v_v_3805_; lean_object* v___x_3806_; lean_object* v_xs_x27_3807_; lean_object* v___y_3809_; 
v_v_3805_ = lean_array_fget(v_es_3796_, v_j_3799_);
v___x_3806_ = lean_box(0);
v_xs_x27_3807_ = lean_array_fset(v_es_3796_, v_j_3799_, v___x_3806_);
switch(lean_obj_tag(v_v_3805_))
{
case 0:
{
lean_object* v_key_3814_; lean_object* v_val_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3825_; 
v_key_3814_ = lean_ctor_get(v_v_3805_, 0);
v_val_3815_ = lean_ctor_get(v_v_3805_, 1);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_v_3805_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3817_ = v_v_3805_;
v_isShared_3818_ = v_isSharedCheck_3825_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_val_3815_);
lean_inc(v_key_3814_);
lean_dec(v_v_3805_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3825_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
uint8_t v___x_3819_; 
v___x_3819_ = l_Lean_instBEqMVarId_beq(v_x_3794_, v_key_3814_);
if (v___x_3819_ == 0)
{
lean_object* v___x_3820_; lean_object* v___x_3821_; 
lean_del_object(v___x_3817_);
v___x_3820_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3814_, v_val_3815_, v_x_3794_, v_x_3795_);
v___x_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3820_);
v___y_3809_ = v___x_3821_;
goto v___jp_3808_;
}
else
{
lean_object* v___x_3823_; 
lean_dec(v_val_3815_);
lean_dec(v_key_3814_);
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 1, v_x_3795_);
lean_ctor_set(v___x_3817_, 0, v_x_3794_);
v___x_3823_ = v___x_3817_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_x_3794_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v_x_3795_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
v___y_3809_ = v___x_3823_;
goto v___jp_3808_;
}
}
}
}
case 1:
{
lean_object* v_node_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3838_; 
v_node_3826_ = lean_ctor_get(v_v_3805_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v_v_3805_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3828_ = v_v_3805_;
v_isShared_3829_ = v_isSharedCheck_3838_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_node_3826_);
lean_dec(v_v_3805_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3838_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
size_t v___x_3830_; size_t v___x_3831_; size_t v___x_3832_; size_t v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3836_; 
v___x_3830_ = ((size_t)5ULL);
v___x_3831_ = lean_usize_shift_right(v_x_3792_, v___x_3830_);
v___x_3832_ = ((size_t)1ULL);
v___x_3833_ = lean_usize_add(v_x_3793_, v___x_3832_);
v___x_3834_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_node_3826_, v___x_3831_, v___x_3833_, v_x_3794_, v_x_3795_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 0, v___x_3834_);
v___x_3836_ = v___x_3828_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v___x_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
v___y_3809_ = v___x_3836_;
goto v___jp_3808_;
}
}
}
default: 
{
lean_object* v___x_3839_; 
v___x_3839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3839_, 0, v_x_3794_);
lean_ctor_set(v___x_3839_, 1, v_x_3795_);
v___y_3809_ = v___x_3839_;
goto v___jp_3808_;
}
}
v___jp_3808_:
{
lean_object* v___x_3810_; lean_object* v___x_3812_; 
v___x_3810_ = lean_array_fset(v_xs_x27_3807_, v_j_3799_, v___y_3809_);
lean_dec(v_j_3799_);
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 0, v___x_3810_);
v___x_3812_ = v___x_3803_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3810_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
else
{
lean_object* v_ks_3842_; lean_object* v_vs_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3861_; 
v_ks_3842_ = lean_ctor_get(v_x_3791_, 0);
v_vs_3843_ = lean_ctor_get(v_x_3791_, 1);
v_isSharedCheck_3861_ = !lean_is_exclusive(v_x_3791_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3845_ = v_x_3791_;
v_isShared_3846_ = v_isSharedCheck_3861_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_vs_3843_);
lean_inc(v_ks_3842_);
lean_dec(v_x_3791_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3861_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_ks_3842_);
lean_ctor_set(v_reuseFailAlloc_3860_, 1, v_vs_3843_);
v___x_3848_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
lean_object* v_newNode_3849_; size_t v___x_3850_; uint8_t v___x_3851_; 
v_newNode_3849_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v___x_3848_, v_x_3794_, v_x_3795_);
v___x_3850_ = ((size_t)7ULL);
v___x_3851_ = lean_usize_dec_le(v___x_3850_, v_x_3793_);
if (v___x_3851_ == 0)
{
lean_object* v___x_3852_; lean_object* v___x_3853_; uint8_t v___x_3854_; 
v___x_3852_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3849_);
v___x_3853_ = lean_unsigned_to_nat(4u);
v___x_3854_ = lean_nat_dec_lt(v___x_3852_, v___x_3853_);
lean_dec(v___x_3852_);
if (v___x_3854_ == 0)
{
lean_object* v_ks_3855_; lean_object* v_vs_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v_ks_3855_ = lean_ctor_get(v_newNode_3849_, 0);
lean_inc_ref(v_ks_3855_);
v_vs_3856_ = lean_ctor_get(v_newNode_3849_, 1);
lean_inc_ref(v_vs_3856_);
lean_dec_ref(v_newNode_3849_);
v___x_3857_ = lean_unsigned_to_nat(0u);
v___x_3858_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0);
v___x_3859_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_x_3793_, v_ks_3855_, v_vs_3856_, v___x_3857_, v___x_3858_);
lean_dec_ref(v_vs_3856_);
lean_dec_ref(v_ks_3855_);
return v___x_3859_;
}
else
{
return v_newNode_3849_;
}
}
else
{
return v_newNode_3849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t v_depth_3862_, lean_object* v_keys_3863_, lean_object* v_vals_3864_, lean_object* v_i_3865_, lean_object* v_entries_3866_){
_start:
{
lean_object* v___x_3867_; uint8_t v___x_3868_; 
v___x_3867_ = lean_array_get_size(v_keys_3863_);
v___x_3868_ = lean_nat_dec_lt(v_i_3865_, v___x_3867_);
if (v___x_3868_ == 0)
{
lean_dec(v_i_3865_);
return v_entries_3866_;
}
else
{
lean_object* v_k_3869_; lean_object* v_v_3870_; uint64_t v___x_3871_; size_t v_h_3872_; size_t v___x_3873_; lean_object* v___x_3874_; size_t v___x_3875_; size_t v___x_3876_; size_t v___x_3877_; size_t v_h_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v_k_3869_ = lean_array_fget_borrowed(v_keys_3863_, v_i_3865_);
v_v_3870_ = lean_array_fget_borrowed(v_vals_3864_, v_i_3865_);
v___x_3871_ = l_Lean_instHashableMVarId_hash(v_k_3869_);
v_h_3872_ = lean_uint64_to_usize(v___x_3871_);
v___x_3873_ = ((size_t)5ULL);
v___x_3874_ = lean_unsigned_to_nat(1u);
v___x_3875_ = ((size_t)1ULL);
v___x_3876_ = lean_usize_sub(v_depth_3862_, v___x_3875_);
v___x_3877_ = lean_usize_mul(v___x_3873_, v___x_3876_);
v_h_3878_ = lean_usize_shift_right(v_h_3872_, v___x_3877_);
v___x_3879_ = lean_nat_add(v_i_3865_, v___x_3874_);
lean_dec(v_i_3865_);
lean_inc(v_v_3870_);
lean_inc(v_k_3869_);
v___x_3880_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_entries_3866_, v_h_3878_, v_depth_3862_, v_k_3869_, v_v_3870_);
v_i_3865_ = v___x_3879_;
v_entries_3866_ = v___x_3880_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_depth_3882_, lean_object* v_keys_3883_, lean_object* v_vals_3884_, lean_object* v_i_3885_, lean_object* v_entries_3886_){
_start:
{
size_t v_depth_boxed_3887_; lean_object* v_res_3888_; 
v_depth_boxed_3887_ = lean_unbox_usize(v_depth_3882_);
lean_dec(v_depth_3882_);
v_res_3888_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_boxed_3887_, v_keys_3883_, v_vals_3884_, v_i_3885_, v_entries_3886_);
lean_dec_ref(v_vals_3884_);
lean_dec_ref(v_keys_3883_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_3889_, lean_object* v_x_3890_, lean_object* v_x_3891_, lean_object* v_x_3892_, lean_object* v_x_3893_){
_start:
{
size_t v_x_2453__boxed_3894_; size_t v_x_2454__boxed_3895_; lean_object* v_res_3896_; 
v_x_2453__boxed_3894_ = lean_unbox_usize(v_x_3890_);
lean_dec(v_x_3890_);
v_x_2454__boxed_3895_ = lean_unbox_usize(v_x_3891_);
lean_dec(v_x_3891_);
v_res_3896_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3889_, v_x_2453__boxed_3894_, v_x_2454__boxed_3895_, v_x_3892_, v_x_3893_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object* v_x_3897_, lean_object* v_x_3898_, lean_object* v_x_3899_){
_start:
{
uint64_t v___x_3900_; size_t v___x_3901_; size_t v___x_3902_; lean_object* v___x_3903_; 
v___x_3900_ = l_Lean_instHashableMVarId_hash(v_x_3898_);
v___x_3901_ = lean_uint64_to_usize(v___x_3900_);
v___x_3902_ = ((size_t)1ULL);
v___x_3903_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3897_, v___x_3901_, v___x_3902_, v_x_3898_, v_x_3899_);
return v___x_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object* v_mvarId_3904_, lean_object* v_val_3905_, lean_object* v___y_3906_){
_start:
{
lean_object* v___x_3908_; lean_object* v_mctx_3909_; lean_object* v_cache_3910_; lean_object* v_zetaDeltaFVarIds_3911_; lean_object* v_postponed_3912_; lean_object* v_diag_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3942_; 
v___x_3908_ = lean_st_ref_take(v___y_3906_);
v_mctx_3909_ = lean_ctor_get(v___x_3908_, 0);
v_cache_3910_ = lean_ctor_get(v___x_3908_, 1);
v_zetaDeltaFVarIds_3911_ = lean_ctor_get(v___x_3908_, 2);
v_postponed_3912_ = lean_ctor_get(v___x_3908_, 3);
v_diag_3913_ = lean_ctor_get(v___x_3908_, 4);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3915_ = v___x_3908_;
v_isShared_3916_ = v_isSharedCheck_3942_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_diag_3913_);
lean_inc(v_postponed_3912_);
lean_inc(v_zetaDeltaFVarIds_3911_);
lean_inc(v_cache_3910_);
lean_inc(v_mctx_3909_);
lean_dec(v___x_3908_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3942_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v_depth_3917_; lean_object* v_levelAssignDepth_3918_; lean_object* v_lmvarCounter_3919_; lean_object* v_mvarCounter_3920_; lean_object* v_lDecls_3921_; lean_object* v_decls_3922_; lean_object* v_userNames_3923_; lean_object* v_lAssignment_3924_; lean_object* v_eAssignment_3925_; lean_object* v_dAssignment_3926_; lean_object* v_instanceTypedMVars_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3941_; 
v_depth_3917_ = lean_ctor_get(v_mctx_3909_, 0);
v_levelAssignDepth_3918_ = lean_ctor_get(v_mctx_3909_, 1);
v_lmvarCounter_3919_ = lean_ctor_get(v_mctx_3909_, 2);
v_mvarCounter_3920_ = lean_ctor_get(v_mctx_3909_, 3);
v_lDecls_3921_ = lean_ctor_get(v_mctx_3909_, 4);
v_decls_3922_ = lean_ctor_get(v_mctx_3909_, 5);
v_userNames_3923_ = lean_ctor_get(v_mctx_3909_, 6);
v_lAssignment_3924_ = lean_ctor_get(v_mctx_3909_, 7);
v_eAssignment_3925_ = lean_ctor_get(v_mctx_3909_, 8);
v_dAssignment_3926_ = lean_ctor_get(v_mctx_3909_, 9);
v_instanceTypedMVars_3927_ = lean_ctor_get(v_mctx_3909_, 10);
v_isSharedCheck_3941_ = !lean_is_exclusive(v_mctx_3909_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3929_ = v_mctx_3909_;
v_isShared_3930_ = v_isSharedCheck_3941_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_instanceTypedMVars_3927_);
lean_inc(v_dAssignment_3926_);
lean_inc(v_eAssignment_3925_);
lean_inc(v_lAssignment_3924_);
lean_inc(v_userNames_3923_);
lean_inc(v_decls_3922_);
lean_inc(v_lDecls_3921_);
lean_inc(v_mvarCounter_3920_);
lean_inc(v_lmvarCounter_3919_);
lean_inc(v_levelAssignDepth_3918_);
lean_inc(v_depth_3917_);
lean_dec(v_mctx_3909_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3941_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3934_; 
v___x_3931_ = lean_box(0);
v___x_3932_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_eAssignment_3925_, v_mvarId_3904_, v_val_3905_);
if (v_isShared_3930_ == 0)
{
lean_ctor_set(v___x_3929_, 8, v___x_3932_);
v___x_3934_ = v___x_3929_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_depth_3917_);
lean_ctor_set(v_reuseFailAlloc_3940_, 1, v_levelAssignDepth_3918_);
lean_ctor_set(v_reuseFailAlloc_3940_, 2, v_lmvarCounter_3919_);
lean_ctor_set(v_reuseFailAlloc_3940_, 3, v_mvarCounter_3920_);
lean_ctor_set(v_reuseFailAlloc_3940_, 4, v_lDecls_3921_);
lean_ctor_set(v_reuseFailAlloc_3940_, 5, v_decls_3922_);
lean_ctor_set(v_reuseFailAlloc_3940_, 6, v_userNames_3923_);
lean_ctor_set(v_reuseFailAlloc_3940_, 7, v_lAssignment_3924_);
lean_ctor_set(v_reuseFailAlloc_3940_, 8, v___x_3932_);
lean_ctor_set(v_reuseFailAlloc_3940_, 9, v_dAssignment_3926_);
lean_ctor_set(v_reuseFailAlloc_3940_, 10, v_instanceTypedMVars_3927_);
v___x_3934_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
lean_object* v___x_3936_; 
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v___x_3934_);
v___x_3936_ = v___x_3915_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3934_);
lean_ctor_set(v_reuseFailAlloc_3939_, 1, v_cache_3910_);
lean_ctor_set(v_reuseFailAlloc_3939_, 2, v_zetaDeltaFVarIds_3911_);
lean_ctor_set(v_reuseFailAlloc_3939_, 3, v_postponed_3912_);
lean_ctor_set(v_reuseFailAlloc_3939_, 4, v_diag_3913_);
v___x_3936_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3937_ = lean_st_ref_put(v___y_3906_, v___x_3936_);
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3931_);
return v___x_3938_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object* v_mvarId_3943_, lean_object* v_val_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3943_, v_val_3944_, v___y_3945_);
lean_dec(v___y_3945_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t v_sz_3948_, size_t v_i_3949_, lean_object* v_bs_3950_){
_start:
{
uint8_t v___x_3951_; 
v___x_3951_ = lean_usize_dec_lt(v_i_3949_, v_sz_3948_);
if (v___x_3951_ == 0)
{
return v_bs_3950_;
}
else
{
lean_object* v_v_3952_; lean_object* v___x_3953_; lean_object* v_bs_x27_3954_; lean_object* v___x_3955_; size_t v___x_3956_; size_t v___x_3957_; lean_object* v___x_3958_; 
v_v_3952_ = lean_array_uget(v_bs_3950_, v_i_3949_);
v___x_3953_ = lean_unsigned_to_nat(0u);
v_bs_x27_3954_ = lean_array_uset(v_bs_3950_, v_i_3949_, v___x_3953_);
v___x_3955_ = l_Lean_Expr_fvar___override(v_v_3952_);
v___x_3956_ = ((size_t)1ULL);
v___x_3957_ = lean_usize_add(v_i_3949_, v___x_3956_);
v___x_3958_ = lean_array_uset(v_bs_x27_3954_, v_i_3949_, v___x_3955_);
v_i_3949_ = v___x_3957_;
v_bs_3950_ = v___x_3958_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object* v_sz_3960_, lean_object* v_i_3961_, lean_object* v_bs_3962_){
_start:
{
size_t v_sz_boxed_3963_; size_t v_i_boxed_3964_; lean_object* v_res_3965_; 
v_sz_boxed_3963_ = lean_unbox_usize(v_sz_3960_);
lean_dec(v_sz_3960_);
v_i_boxed_3964_ = lean_unbox_usize(v_i_3961_);
lean_dec(v_i_3961_);
v_res_3965_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_boxed_3963_, v_i_boxed_3964_, v_bs_3962_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object* v___x_3966_, lean_object* v_mvarId_3967_, lean_object* v_a_3968_, lean_object* v___x_3969_, lean_object* v_fvarIds_3970_, lean_object* v_es_3971_, lean_object* v_givenNames_x27_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_){
_start:
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_4029_; uint8_t v___x_4030_; 
v___x_3978_ = lean_unsigned_to_nat(0u);
v___x_3979_ = lean_array_get_borrowed(v___x_3966_, v_es_3971_, v___x_3978_);
v___x_4029_ = lean_array_get_size(v_fvarIds_3970_);
v___x_4030_ = lean_nat_dec_eq(v___x_4029_, v___x_3978_);
if (v___x_4030_ == 0)
{
lean_dec(v___x_3969_);
goto v___jp_3980_;
}
else
{
uint8_t v___x_4031_; 
v___x_4031_ = lean_expr_eqv(v_a_3968_, v___x_3979_);
if (v___x_4031_ == 0)
{
lean_dec(v___x_3969_);
goto v___jp_3980_;
}
else
{
lean_object* v___x_4032_; 
lean_inc(v_mvarId_3967_);
v___x_4032_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_3969_, v_mvarId_3967_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
if (lean_obj_tag(v___x_4032_) == 0)
{
lean_dec_ref_known(v___x_4032_, 1);
goto v___jp_3980_;
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec(v_givenNames_x27_3972_);
lean_dec_ref(v_fvarIds_3970_);
lean_dec(v_mvarId_3967_);
v_a_4033_ = lean_ctor_get(v___x_4032_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4032_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_4032_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_4032_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
}
v___jp_3980_:
{
lean_object* v___x_3981_; 
lean_inc(v_mvarId_3967_);
v___x_3981_ = l_Lean_MVarId_getTag(v_mvarId_3967_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v_a_3982_; lean_object* v___x_3983_; 
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
lean_inc(v_a_3982_);
lean_dec_ref_known(v___x_3981_, 1);
lean_inc(v___x_3979_);
v___x_3983_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3979_, v_a_3982_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
if (lean_obj_tag(v___x_3983_) == 0)
{
lean_object* v_a_3984_; size_t v_sz_3985_; size_t v___x_3986_; lean_object* v___x_3987_; uint8_t v___x_3988_; uint8_t v___x_3989_; uint8_t v___x_3990_; lean_object* v___x_3991_; 
v_a_3984_ = lean_ctor_get(v___x_3983_, 0);
lean_inc_n(v_a_3984_, 2);
lean_dec_ref_known(v___x_3983_, 1);
v_sz_3985_ = lean_array_size(v_fvarIds_3970_);
v___x_3986_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_3970_);
v___x_3987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_3985_, v___x_3986_, v_fvarIds_3970_);
v___x_3988_ = 0;
v___x_3989_ = 1;
v___x_3990_ = 1;
v___x_3991_ = l_Lean_Meta_mkLetFVars(v___x_3987_, v_a_3984_, v___x_3988_, v___x_3989_, v___x_3990_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
lean_dec_ref(v___x_3987_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4003_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3991_, 1);
v___x_3993_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3967_, v_a_3992_, v___y_3974_);
v_isSharedCheck_4003_ = !lean_is_exclusive(v___x_3993_);
if (v_isSharedCheck_4003_ == 0)
{
lean_object* v_unused_4004_; 
v_unused_4004_ = lean_ctor_get(v___x_3993_, 0);
lean_dec(v_unused_4004_);
v___x_3995_ = v___x_3993_;
v_isShared_3996_ = v_isSharedCheck_4003_;
goto v_resetjp_3994_;
}
else
{
lean_dec(v___x_3993_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4003_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4001_; 
v___x_3997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3997_, 0, v_fvarIds_3970_);
lean_ctor_set(v___x_3997_, 1, v_givenNames_x27_3972_);
v___x_3998_ = l_Lean_Expr_mvarId_x21(v_a_3984_);
lean_dec(v_a_3984_);
v___x_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3997_);
lean_ctor_set(v___x_3999_, 1, v___x_3998_);
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 0, v___x_3999_);
v___x_4001_ = v___x_3995_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v___x_3999_);
v___x_4001_ = v_reuseFailAlloc_4002_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
return v___x_4001_;
}
}
}
else
{
lean_object* v_a_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4012_; 
lean_dec(v_a_3984_);
lean_dec(v_givenNames_x27_3972_);
lean_dec_ref(v_fvarIds_3970_);
lean_dec(v_mvarId_3967_);
v_a_4005_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4012_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_4007_ = v___x_3991_;
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_a_4005_);
lean_dec(v___x_3991_);
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
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
lean_dec(v_givenNames_x27_3972_);
lean_dec_ref(v_fvarIds_3970_);
lean_dec(v_mvarId_3967_);
v_a_4013_ = lean_ctor_get(v___x_3983_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___x_3983_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___x_3983_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_3983_);
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
else
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4028_; 
lean_dec(v_givenNames_x27_3972_);
lean_dec_ref(v_fvarIds_3970_);
lean_dec(v_mvarId_3967_);
v_a_4021_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4023_ = v___x_3981_;
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_3981_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v___x_4026_; 
if (v_isShared_4024_ == 0)
{
v___x_4026_ = v___x_4023_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4021_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object* v___x_4041_, lean_object* v_mvarId_4042_, lean_object* v_a_4043_, lean_object* v___x_4044_, lean_object* v_fvarIds_4045_, lean_object* v_es_4046_, lean_object* v_givenNames_x27_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lean_MVarId_extractLets___lam__0(v___x_4041_, v_mvarId_4042_, v_a_4043_, v___x_4044_, v_fvarIds_4045_, v_es_4046_, v_givenNames_x27_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec_ref(v_es_4046_);
lean_dec_ref(v_a_4043_);
lean_dec_ref(v___x_4041_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object* v_mvarId_4054_, lean_object* v___x_4055_, lean_object* v___x_4056_, lean_object* v_givenNames_4057_, lean_object* v_config_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v___x_4064_; 
lean_inc(v___x_4055_);
lean_inc(v_mvarId_4054_);
v___x_4064_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4054_, v___x_4055_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v___x_4065_; 
lean_dec_ref_known(v___x_4064_, 1);
lean_inc(v_mvarId_4054_);
v___x_4065_ = l_Lean_MVarId_getType(v_mvarId_4054_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4065_) == 0)
{
lean_object* v_a_4066_; lean_object* v___f_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v_a_4066_ = lean_ctor_get(v___x_4065_, 0);
lean_inc_n(v_a_4066_, 2);
lean_dec_ref_known(v___x_4065_, 1);
v___f_4067_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4067_, 0, v___x_4056_);
lean_closure_set(v___f_4067_, 1, v_mvarId_4054_);
lean_closure_set(v___f_4067_, 2, v_a_4066_);
lean_closure_set(v___f_4067_, 3, v___x_4055_);
v___x_4068_ = lean_unsigned_to_nat(1u);
v___x_4069_ = lean_mk_empty_array_with_capacity(v___x_4068_);
v___x_4070_ = lean_array_push(v___x_4069_, v_a_4066_);
v___x_4071_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4070_, v_givenNames_4057_, v___f_4067_, v_config_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
return v___x_4071_;
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
lean_dec(v_givenNames_4057_);
lean_dec_ref(v___x_4056_);
lean_dec(v___x_4055_);
lean_dec(v_mvarId_4054_);
v_a_4072_ = lean_ctor_get(v___x_4065_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4065_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4065_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4065_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
}
}
else
{
lean_object* v_a_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4087_; 
lean_dec(v_givenNames_4057_);
lean_dec_ref(v___x_4056_);
lean_dec(v___x_4055_);
lean_dec(v_mvarId_4054_);
v_a_4080_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4087_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4082_ = v___x_4064_;
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_a_4080_);
lean_dec(v___x_4064_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4085_; 
if (v_isShared_4083_ == 0)
{
v___x_4085_ = v___x_4082_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_a_4080_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object* v_mvarId_4088_, lean_object* v___x_4089_, lean_object* v___x_4090_, lean_object* v_givenNames_4091_, lean_object* v_config_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_){
_start:
{
lean_object* v_res_4098_; 
v_res_4098_ = l_Lean_MVarId_extractLets___lam__1(v_mvarId_4088_, v___x_4089_, v___x_4090_, v_givenNames_4091_, v_config_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
lean_dec_ref(v_config_4092_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object* v_mvarId_4102_, lean_object* v_givenNames_4103_, lean_object* v_config_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___f_4112_; lean_object* v___x_4113_; 
v___x_4110_ = l_Lean_instInhabitedExpr;
v___x_4111_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
lean_inc(v_mvarId_4102_);
v___f_4112_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__1___boxed), 10, 5);
lean_closure_set(v___f_4112_, 0, v_mvarId_4102_);
lean_closure_set(v___f_4112_, 1, v___x_4111_);
lean_closure_set(v___f_4112_, 2, v___x_4110_);
lean_closure_set(v___f_4112_, 3, v_givenNames_4103_);
lean_closure_set(v___f_4112_, 4, v_config_4104_);
v___x_4113_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4102_, v___f_4112_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object* v_mvarId_4114_, lean_object* v_givenNames_4115_, lean_object* v_config_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_){
_start:
{
lean_object* v_res_4122_; 
v_res_4122_ = l_Lean_MVarId_extractLets(v_mvarId_4114_, v_givenNames_4115_, v_config_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
return v_res_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object* v_mvarId_4123_, lean_object* v_val_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_){
_start:
{
lean_object* v___x_4130_; 
v___x_4130_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4123_, v_val_4124_, v___y_4126_);
return v___x_4130_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object* v_mvarId_4131_, lean_object* v_val_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(v_mvarId_4131_, v_val_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
lean_dec(v___y_4134_);
lean_dec_ref(v___y_4133_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object* v_00_u03b2_4139_, lean_object* v_x_4140_, lean_object* v_x_4141_, lean_object* v_x_4142_){
_start:
{
lean_object* v___x_4143_; 
v___x_4143_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_x_4140_, v_x_4141_, v_x_4142_);
return v___x_4143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_4144_, lean_object* v_x_4145_, size_t v_x_4146_, size_t v_x_4147_, lean_object* v_x_4148_, lean_object* v_x_4149_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4145_, v_x_4146_, v_x_4147_, v_x_4148_, v_x_4149_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4151_, lean_object* v_x_4152_, lean_object* v_x_4153_, lean_object* v_x_4154_, lean_object* v_x_4155_, lean_object* v_x_4156_){
_start:
{
size_t v_x_2955__boxed_4157_; size_t v_x_2956__boxed_4158_; lean_object* v_res_4159_; 
v_x_2955__boxed_4157_ = lean_unbox_usize(v_x_4153_);
lean_dec(v_x_4153_);
v_x_2956__boxed_4158_ = lean_unbox_usize(v_x_4154_);
lean_dec(v_x_4154_);
v_res_4159_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(v_00_u03b2_4151_, v_x_4152_, v_x_2955__boxed_4157_, v_x_2956__boxed_4158_, v_x_4155_, v_x_4156_);
return v_res_4159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_4160_, lean_object* v_n_4161_, lean_object* v_k_4162_, lean_object* v_v_4163_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v_n_4161_, v_k_4162_, v_v_4163_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_4165_, size_t v_depth_4166_, lean_object* v_keys_4167_, lean_object* v_vals_4168_, lean_object* v_heq_4169_, lean_object* v_i_4170_, lean_object* v_entries_4171_){
_start:
{
lean_object* v___x_4172_; 
v___x_4172_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_4166_, v_keys_4167_, v_vals_4168_, v_i_4170_, v_entries_4171_);
return v___x_4172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4173_, lean_object* v_depth_4174_, lean_object* v_keys_4175_, lean_object* v_vals_4176_, lean_object* v_heq_4177_, lean_object* v_i_4178_, lean_object* v_entries_4179_){
_start:
{
size_t v_depth_boxed_4180_; lean_object* v_res_4181_; 
v_depth_boxed_4180_ = lean_unbox_usize(v_depth_4174_);
lean_dec(v_depth_4174_);
v_res_4181_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(v_00_u03b2_4173_, v_depth_boxed_4180_, v_keys_4175_, v_vals_4176_, v_heq_4177_, v_i_4178_, v_entries_4179_);
lean_dec_ref(v_vals_4176_);
lean_dec_ref(v_keys_4175_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_4182_, lean_object* v_x_4183_, lean_object* v_x_4184_, lean_object* v_x_4185_, lean_object* v_x_4186_){
_start:
{
lean_object* v___x_4187_; 
v___x_4187_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_x_4183_, v_x_4184_, v_x_4185_, v_x_4186_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t v_sz_4188_, size_t v_i_4189_, lean_object* v_bs_4190_){
_start:
{
uint8_t v___x_4191_; 
v___x_4191_ = lean_usize_dec_lt(v_i_4189_, v_sz_4188_);
if (v___x_4191_ == 0)
{
return v_bs_4190_;
}
else
{
lean_object* v_v_4192_; lean_object* v___x_4193_; lean_object* v_bs_x27_4194_; lean_object* v___x_4195_; size_t v___x_4196_; size_t v___x_4197_; lean_object* v___x_4198_; 
v_v_4192_ = lean_array_uget(v_bs_4190_, v_i_4189_);
v___x_4193_ = lean_unsigned_to_nat(0u);
v_bs_x27_4194_ = lean_array_uset(v_bs_4190_, v_i_4189_, v___x_4193_);
v___x_4195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4195_, 0, v_v_4192_);
v___x_4196_ = ((size_t)1ULL);
v___x_4197_ = lean_usize_add(v_i_4189_, v___x_4196_);
v___x_4198_ = lean_array_uset(v_bs_x27_4194_, v_i_4189_, v___x_4195_);
v_i_4189_ = v___x_4197_;
v_bs_4190_ = v___x_4198_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object* v_sz_4200_, lean_object* v_i_4201_, lean_object* v_bs_4202_){
_start:
{
size_t v_sz_boxed_4203_; size_t v_i_boxed_4204_; lean_object* v_res_4205_; 
v_sz_boxed_4203_ = lean_unbox_usize(v_sz_4200_);
lean_dec(v_sz_4200_);
v_i_boxed_4204_ = lean_unbox_usize(v_i_4201_);
lean_dec(v_i_4201_);
v_res_4205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_boxed_4203_, v_i_boxed_4204_, v_bs_4202_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object* v_mvarId_4206_, lean_object* v_fvars_4207_, lean_object* v_fvarIds_4208_, lean_object* v_givenNames_x27_4209_, lean_object* v_targetNew_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v___x_4216_; 
lean_inc(v_mvarId_4206_);
v___x_4216_ = l_Lean_MVarId_getTag(v_mvarId_4206_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; lean_object* v___x_4218_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
lean_inc(v_a_4217_);
lean_dec_ref_known(v___x_4216_, 1);
v___x_4218_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_targetNew_4210_, v_a_4217_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; size_t v_sz_4220_; size_t v___x_4221_; lean_object* v___x_4222_; uint8_t v___x_4223_; uint8_t v___x_4224_; uint8_t v___x_4225_; lean_object* v___x_4226_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
lean_inc_n(v_a_4219_, 2);
lean_dec_ref_known(v___x_4218_, 1);
v_sz_4220_ = lean_array_size(v_fvarIds_4208_);
v___x_4221_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_4208_);
v___x_4222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4220_, v___x_4221_, v_fvarIds_4208_);
v___x_4223_ = 0;
v___x_4224_ = 1;
v___x_4225_ = 1;
v___x_4226_ = l_Lean_Meta_mkLetFVars(v___x_4222_, v_a_4219_, v___x_4223_, v___x_4224_, v___x_4225_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
lean_dec_ref(v___x_4222_);
if (lean_obj_tag(v___x_4226_) == 0)
{
lean_object* v_a_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4241_; 
v_a_4227_ = lean_ctor_get(v___x_4226_, 0);
lean_inc(v_a_4227_);
lean_dec_ref_known(v___x_4226_, 1);
v___x_4228_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4206_, v_a_4227_, v___y_4212_);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4241_ == 0)
{
lean_object* v_unused_4242_; 
v_unused_4242_ = lean_ctor_get(v___x_4228_, 0);
lean_dec(v_unused_4242_);
v___x_4230_ = v___x_4228_;
v_isShared_4231_ = v_isSharedCheck_4241_;
goto v_resetjp_4229_;
}
else
{
lean_dec(v___x_4228_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4241_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
lean_object* v___x_4232_; size_t v_sz_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4239_; 
v___x_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4232_, 0, v_fvarIds_4208_);
lean_ctor_set(v___x_4232_, 1, v_givenNames_x27_4209_);
v_sz_4233_ = lean_array_size(v_fvars_4207_);
v___x_4234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4233_, v___x_4221_, v_fvars_4207_);
v___x_4235_ = l_Lean_Expr_mvarId_x21(v_a_4219_);
lean_dec(v_a_4219_);
v___x_4236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4234_);
lean_ctor_set(v___x_4236_, 1, v___x_4235_);
v___x_4237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4232_);
lean_ctor_set(v___x_4237_, 1, v___x_4236_);
if (v_isShared_4231_ == 0)
{
lean_ctor_set(v___x_4230_, 0, v___x_4237_);
v___x_4239_ = v___x_4230_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v___x_4237_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
else
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4250_; 
lean_dec(v_a_4219_);
lean_dec(v_givenNames_x27_4209_);
lean_dec_ref(v_fvarIds_4208_);
lean_dec_ref(v_fvars_4207_);
lean_dec(v_mvarId_4206_);
v_a_4243_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4245_ = v___x_4226_;
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_4226_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4246_ == 0)
{
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
return v___x_4248_;
}
}
}
}
else
{
lean_object* v_a_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4258_; 
lean_dec(v_givenNames_x27_4209_);
lean_dec_ref(v_fvarIds_4208_);
lean_dec_ref(v_fvars_4207_);
lean_dec(v_mvarId_4206_);
v_a_4251_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4258_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4258_ == 0)
{
v___x_4253_ = v___x_4218_;
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_a_4251_);
lean_dec(v___x_4218_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_a_4251_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
}
}
else
{
lean_object* v_a_4259_; lean_object* v___x_4261_; uint8_t v_isShared_4262_; uint8_t v_isSharedCheck_4266_; 
lean_dec_ref(v_targetNew_4210_);
lean_dec(v_givenNames_x27_4209_);
lean_dec_ref(v_fvarIds_4208_);
lean_dec_ref(v_fvars_4207_);
lean_dec(v_mvarId_4206_);
v_a_4259_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4266_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4261_ = v___x_4216_;
v_isShared_4262_ = v_isSharedCheck_4266_;
goto v_resetjp_4260_;
}
else
{
lean_inc(v_a_4259_);
lean_dec(v___x_4216_);
v___x_4261_ = lean_box(0);
v_isShared_4262_ = v_isSharedCheck_4266_;
goto v_resetjp_4260_;
}
v_resetjp_4260_:
{
lean_object* v___x_4264_; 
if (v_isShared_4262_ == 0)
{
v___x_4264_ = v___x_4261_;
goto v_reusejp_4263_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v_a_4259_);
v___x_4264_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4263_;
}
v_reusejp_4263_:
{
return v___x_4264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4267_, lean_object* v_fvars_4268_, lean_object* v_fvarIds_4269_, lean_object* v_givenNames_x27_4270_, lean_object* v_targetNew_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_Lean_MVarId_extractLetsLocalDecl___lam__0(v_mvarId_4267_, v_fvars_4268_, v_fvarIds_4269_, v_givenNames_x27_4270_, v_targetNew_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object* v___x_4278_, lean_object* v_binderName_4279_, lean_object* v_body_4280_, uint8_t v_binderInfo_4281_, lean_object* v___f_4282_, lean_object* v_binderType_4283_, lean_object* v___x_4284_, lean_object* v_mvarId_4285_, lean_object* v_fvarIds_4286_, lean_object* v_es_4287_, lean_object* v_givenNames_x27_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_){
_start:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4294_ = lean_unsigned_to_nat(0u);
v___x_4295_ = lean_array_get_borrowed(v___x_4278_, v_es_4287_, v___x_4294_);
v___x_4299_ = lean_array_get_size(v_fvarIds_4286_);
v___x_4300_ = lean_nat_dec_eq(v___x_4299_, v___x_4294_);
if (v___x_4300_ == 0)
{
lean_dec(v_mvarId_4285_);
lean_dec(v___x_4284_);
goto v___jp_4296_;
}
else
{
uint8_t v___x_4301_; 
v___x_4301_ = lean_expr_eqv(v_binderType_4283_, v___x_4295_);
if (v___x_4301_ == 0)
{
lean_dec(v_mvarId_4285_);
lean_dec(v___x_4284_);
goto v___jp_4296_;
}
else
{
lean_object* v___x_4302_; 
v___x_4302_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4284_, v_mvarId_4285_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4302_) == 0)
{
lean_dec_ref_known(v___x_4302_, 1);
goto v___jp_4296_;
}
else
{
lean_object* v_a_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4310_; 
lean_dec(v_givenNames_x27_4288_);
lean_dec_ref(v_fvarIds_4286_);
lean_dec_ref(v___f_4282_);
lean_dec_ref(v_body_4280_);
lean_dec(v_binderName_4279_);
v_a_4303_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4305_ = v___x_4302_;
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_a_4303_);
lean_dec(v___x_4302_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
lean_object* v___x_4308_; 
if (v_isShared_4306_ == 0)
{
v___x_4308_ = v___x_4305_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v_a_4303_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
}
}
v___jp_4296_:
{
lean_object* v___x_4297_; lean_object* v___x_4298_; 
lean_inc(v___x_4295_);
v___x_4297_ = l_Lean_Expr_forallE___override(v_binderName_4279_, v___x_4295_, v_body_4280_, v_binderInfo_4281_);
lean_inc(v___y_4292_);
lean_inc_ref(v___y_4291_);
lean_inc(v___y_4290_);
lean_inc_ref(v___y_4289_);
v___x_4298_ = lean_apply_8(v___f_4282_, v_fvarIds_4286_, v_givenNames_x27_4288_, v___x_4297_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, lean_box(0));
return v___x_4298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object* v___x_4311_, lean_object* v_binderName_4312_, lean_object* v_body_4313_, lean_object* v_binderInfo_4314_, lean_object* v___f_4315_, lean_object* v_binderType_4316_, lean_object* v___x_4317_, lean_object* v_mvarId_4318_, lean_object* v_fvarIds_4319_, lean_object* v_es_4320_, lean_object* v_givenNames_x27_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
uint8_t v_binderInfo_2040__boxed_4327_; lean_object* v_res_4328_; 
v_binderInfo_2040__boxed_4327_ = lean_unbox(v_binderInfo_4314_);
v_res_4328_ = l_Lean_MVarId_extractLetsLocalDecl___lam__1(v___x_4311_, v_binderName_4312_, v_body_4313_, v_binderInfo_2040__boxed_4327_, v___f_4315_, v_binderType_4316_, v___x_4317_, v_mvarId_4318_, v_fvarIds_4319_, v_es_4320_, v_givenNames_x27_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_);
lean_dec(v___y_4325_);
lean_dec_ref(v___y_4324_);
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4322_);
lean_dec_ref(v_es_4320_);
lean_dec_ref(v_binderType_4316_);
lean_dec_ref(v___x_4311_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object* v___x_4329_, lean_object* v_declName_4330_, lean_object* v_body_4331_, uint8_t v_nondep_4332_, lean_object* v___f_4333_, lean_object* v_type_4334_, lean_object* v_value_4335_, lean_object* v___x_4336_, lean_object* v_mvarId_4337_, lean_object* v_fvarIds_4338_, lean_object* v_es_4339_, lean_object* v_givenNames_x27_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_){
_start:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4353_; uint8_t v___x_4354_; 
v___x_4346_ = lean_unsigned_to_nat(0u);
v___x_4347_ = lean_array_get_borrowed(v___x_4329_, v_es_4339_, v___x_4346_);
v___x_4348_ = lean_unsigned_to_nat(1u);
v___x_4349_ = lean_array_get_borrowed(v___x_4329_, v_es_4339_, v___x_4348_);
v___x_4353_ = lean_array_get_size(v_fvarIds_4338_);
v___x_4354_ = lean_nat_dec_eq(v___x_4353_, v___x_4346_);
if (v___x_4354_ == 0)
{
lean_dec(v_mvarId_4337_);
lean_dec(v___x_4336_);
goto v___jp_4350_;
}
else
{
uint8_t v___x_4355_; 
v___x_4355_ = lean_expr_eqv(v_type_4334_, v___x_4347_);
if (v___x_4355_ == 0)
{
lean_dec(v_mvarId_4337_);
lean_dec(v___x_4336_);
goto v___jp_4350_;
}
else
{
uint8_t v___x_4356_; 
v___x_4356_ = lean_expr_eqv(v_value_4335_, v___x_4349_);
if (v___x_4356_ == 0)
{
lean_dec(v_mvarId_4337_);
lean_dec(v___x_4336_);
goto v___jp_4350_;
}
else
{
lean_object* v___x_4357_; 
v___x_4357_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4336_, v_mvarId_4337_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_dec_ref_known(v___x_4357_, 1);
goto v___jp_4350_;
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4365_; 
lean_dec(v_givenNames_x27_4340_);
lean_dec_ref(v_fvarIds_4338_);
lean_dec_ref(v___f_4333_);
lean_dec_ref(v_body_4331_);
lean_dec(v_declName_4330_);
v_a_4358_ = lean_ctor_get(v___x_4357_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4360_ = v___x_4357_;
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v___x_4357_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
}
}
v___jp_4350_:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; 
lean_inc(v___x_4349_);
lean_inc(v___x_4347_);
v___x_4351_ = l_Lean_Expr_letE___override(v_declName_4330_, v___x_4347_, v___x_4349_, v_body_4331_, v_nondep_4332_);
lean_inc(v___y_4344_);
lean_inc_ref(v___y_4343_);
lean_inc(v___y_4342_);
lean_inc_ref(v___y_4341_);
v___x_4352_ = lean_apply_8(v___f_4333_, v_fvarIds_4338_, v_givenNames_x27_4340_, v___x_4351_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_, lean_box(0));
return v___x_4352_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object** _args){
lean_object* v___x_4366_ = _args[0];
lean_object* v_declName_4367_ = _args[1];
lean_object* v_body_4368_ = _args[2];
lean_object* v_nondep_4369_ = _args[3];
lean_object* v___f_4370_ = _args[4];
lean_object* v_type_4371_ = _args[5];
lean_object* v_value_4372_ = _args[6];
lean_object* v___x_4373_ = _args[7];
lean_object* v_mvarId_4374_ = _args[8];
lean_object* v_fvarIds_4375_ = _args[9];
lean_object* v_es_4376_ = _args[10];
lean_object* v_givenNames_x27_4377_ = _args[11];
lean_object* v___y_4378_ = _args[12];
lean_object* v___y_4379_ = _args[13];
lean_object* v___y_4380_ = _args[14];
lean_object* v___y_4381_ = _args[15];
lean_object* v___y_4382_ = _args[16];
_start:
{
uint8_t v_nondep_2111__boxed_4383_; lean_object* v_res_4384_; 
v_nondep_2111__boxed_4383_ = lean_unbox(v_nondep_4369_);
v_res_4384_ = l_Lean_MVarId_extractLetsLocalDecl___lam__2(v___x_4366_, v_declName_4367_, v_body_4368_, v_nondep_2111__boxed_4383_, v___f_4370_, v_type_4371_, v_value_4372_, v___x_4373_, v_mvarId_4374_, v_fvarIds_4375_, v_es_4376_, v_givenNames_x27_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_);
lean_dec(v___y_4381_);
lean_dec_ref(v___y_4380_);
lean_dec(v___y_4379_);
lean_dec_ref(v___y_4378_);
lean_dec_ref(v_es_4376_);
lean_dec_ref(v_value_4372_);
lean_dec_ref(v_type_4371_);
lean_dec_ref(v___x_4366_);
return v_res_4384_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4388_ = ((lean_object*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1));
v___x_4389_ = l_Lean_MessageData_ofFormat(v___x_4388_);
return v___x_4389_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4390_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2);
v___x_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4391_, 0, v___x_4390_);
return v___x_4391_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object* v_mvarId_4392_, lean_object* v___x_4393_, lean_object* v___f_4394_, lean_object* v___x_4395_, lean_object* v_givenNames_4396_, lean_object* v_config_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_){
_start:
{
lean_object* v___x_4403_; 
lean_inc(v_mvarId_4392_);
v___x_4403_ = l_Lean_MVarId_getType(v_mvarId_4392_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_object* v_a_4404_; 
v_a_4404_ = lean_ctor_get(v___x_4403_, 0);
lean_inc(v_a_4404_);
lean_dec_ref_known(v___x_4403_, 1);
switch(lean_obj_tag(v_a_4404_))
{
case 7:
{
lean_object* v_binderName_4405_; lean_object* v_binderType_4406_; lean_object* v_body_4407_; uint8_t v_binderInfo_4408_; lean_object* v___x_4409_; lean_object* v___f_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v_binderName_4405_ = lean_ctor_get(v_a_4404_, 0);
lean_inc(v_binderName_4405_);
v_binderType_4406_ = lean_ctor_get(v_a_4404_, 1);
lean_inc_ref_n(v_binderType_4406_, 2);
v_body_4407_ = lean_ctor_get(v_a_4404_, 2);
lean_inc_ref(v_body_4407_);
v_binderInfo_4408_ = lean_ctor_get_uint8(v_a_4404_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4404_, 3);
v___x_4409_ = lean_box(v_binderInfo_4408_);
v___f_4410_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed), 16, 8);
lean_closure_set(v___f_4410_, 0, v___x_4393_);
lean_closure_set(v___f_4410_, 1, v_binderName_4405_);
lean_closure_set(v___f_4410_, 2, v_body_4407_);
lean_closure_set(v___f_4410_, 3, v___x_4409_);
lean_closure_set(v___f_4410_, 4, v___f_4394_);
lean_closure_set(v___f_4410_, 5, v_binderType_4406_);
lean_closure_set(v___f_4410_, 6, v___x_4395_);
lean_closure_set(v___f_4410_, 7, v_mvarId_4392_);
v___x_4411_ = lean_unsigned_to_nat(1u);
v___x_4412_ = lean_mk_empty_array_with_capacity(v___x_4411_);
v___x_4413_ = lean_array_push(v___x_4412_, v_binderType_4406_);
v___x_4414_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4413_, v_givenNames_4396_, v___f_4410_, v_config_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_);
return v___x_4414_;
}
case 8:
{
lean_object* v_declName_4415_; lean_object* v_type_4416_; lean_object* v_value_4417_; lean_object* v_body_4418_; uint8_t v_nondep_4419_; lean_object* v___x_4420_; lean_object* v___f_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; 
v_declName_4415_ = lean_ctor_get(v_a_4404_, 0);
lean_inc(v_declName_4415_);
v_type_4416_ = lean_ctor_get(v_a_4404_, 1);
lean_inc_ref_n(v_type_4416_, 2);
v_value_4417_ = lean_ctor_get(v_a_4404_, 2);
lean_inc_ref_n(v_value_4417_, 2);
v_body_4418_ = lean_ctor_get(v_a_4404_, 3);
lean_inc_ref(v_body_4418_);
v_nondep_4419_ = lean_ctor_get_uint8(v_a_4404_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4404_, 4);
v___x_4420_ = lean_box(v_nondep_4419_);
v___f_4421_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed), 17, 9);
lean_closure_set(v___f_4421_, 0, v___x_4393_);
lean_closure_set(v___f_4421_, 1, v_declName_4415_);
lean_closure_set(v___f_4421_, 2, v_body_4418_);
lean_closure_set(v___f_4421_, 3, v___x_4420_);
lean_closure_set(v___f_4421_, 4, v___f_4394_);
lean_closure_set(v___f_4421_, 5, v_type_4416_);
lean_closure_set(v___f_4421_, 6, v_value_4417_);
lean_closure_set(v___f_4421_, 7, v___x_4395_);
lean_closure_set(v___f_4421_, 8, v_mvarId_4392_);
v___x_4422_ = lean_unsigned_to_nat(2u);
v___x_4423_ = lean_mk_empty_array_with_capacity(v___x_4422_);
v___x_4424_ = lean_array_push(v___x_4423_, v_type_4416_);
v___x_4425_ = lean_array_push(v___x_4424_, v_value_4417_);
v___x_4426_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4425_, v_givenNames_4396_, v___f_4421_, v_config_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_);
return v___x_4426_;
}
default: 
{
lean_object* v___x_4427_; lean_object* v___x_4428_; 
lean_dec(v_a_4404_);
lean_dec(v_givenNames_4396_);
lean_dec_ref(v___f_4394_);
lean_dec_ref(v___x_4393_);
v___x_4427_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4428_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4395_, v_mvarId_4392_, v___x_4427_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_);
return v___x_4428_;
}
}
}
else
{
lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4436_; 
lean_dec(v_givenNames_4396_);
lean_dec(v___x_4395_);
lean_dec_ref(v___f_4394_);
lean_dec_ref(v___x_4393_);
lean_dec(v_mvarId_4392_);
v_a_4429_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4436_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4431_ = v___x_4403_;
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v___x_4403_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4434_; 
if (v_isShared_4432_ == 0)
{
v___x_4434_ = v___x_4431_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v_a_4429_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object* v_mvarId_4437_, lean_object* v___x_4438_, lean_object* v___f_4439_, lean_object* v___x_4440_, lean_object* v_givenNames_4441_, lean_object* v_config_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_){
_start:
{
lean_object* v_res_4448_; 
v_res_4448_ = l_Lean_MVarId_extractLetsLocalDecl___lam__3(v_mvarId_4437_, v___x_4438_, v___f_4439_, v___x_4440_, v_givenNames_4441_, v_config_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_);
lean_dec(v___y_4446_);
lean_dec_ref(v___y_4445_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec_ref(v_config_4442_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object* v___x_4449_, lean_object* v___x_4450_, lean_object* v_givenNames_4451_, lean_object* v_config_4452_, lean_object* v_mvarId_4453_, lean_object* v_fvars_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v___f_4460_; lean_object* v___f_4461_; lean_object* v___x_4462_; 
lean_inc_n(v_mvarId_4453_, 2);
v___f_4460_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4460_, 0, v_mvarId_4453_);
lean_closure_set(v___f_4460_, 1, v_fvars_4454_);
v___f_4461_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed), 11, 6);
lean_closure_set(v___f_4461_, 0, v_mvarId_4453_);
lean_closure_set(v___f_4461_, 1, v___x_4449_);
lean_closure_set(v___f_4461_, 2, v___f_4460_);
lean_closure_set(v___f_4461_, 3, v___x_4450_);
lean_closure_set(v___f_4461_, 4, v_givenNames_4451_);
lean_closure_set(v___f_4461_, 5, v_config_4452_);
v___x_4462_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4453_, v___f_4461_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
return v___x_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object* v___x_4463_, lean_object* v___x_4464_, lean_object* v_givenNames_4465_, lean_object* v_config_4466_, lean_object* v_mvarId_4467_, lean_object* v_fvars_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_){
_start:
{
lean_object* v_res_4474_; 
v_res_4474_ = l_Lean_MVarId_extractLetsLocalDecl___lam__4(v___x_4463_, v___x_4464_, v_givenNames_4465_, v_config_4466_, v_mvarId_4467_, v_fvars_4468_, v___y_4469_, v___y_4470_, v___y_4471_, v___y_4472_);
lean_dec(v___y_4472_);
lean_dec_ref(v___y_4471_);
lean_dec(v___y_4470_);
lean_dec_ref(v___y_4469_);
return v_res_4474_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object* v_mvarId_4475_, lean_object* v_fvarId_4476_, lean_object* v_givenNames_4477_, lean_object* v_config_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_){
_start:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___f_4486_; lean_object* v___x_4487_; 
v___x_4484_ = l_Lean_instInhabitedExpr;
v___x_4485_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
v___f_4486_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed), 11, 4);
lean_closure_set(v___f_4486_, 0, v___x_4484_);
lean_closure_set(v___f_4486_, 1, v___x_4485_);
lean_closure_set(v___f_4486_, 2, v_givenNames_4477_);
lean_closure_set(v___f_4486_, 3, v_config_4478_);
lean_inc(v_mvarId_4475_);
v___x_4487_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4475_, v___x_4485_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_);
if (lean_obj_tag(v___x_4487_) == 0)
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; uint8_t v___x_4491_; lean_object* v___x_4492_; 
lean_dec_ref_known(v___x_4487_, 1);
v___x_4488_ = lean_unsigned_to_nat(1u);
v___x_4489_ = lean_mk_empty_array_with_capacity(v___x_4488_);
v___x_4490_ = lean_array_push(v___x_4489_, v_fvarId_4476_);
v___x_4491_ = 0;
v___x_4492_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4475_, v___x_4490_, v___f_4486_, v___x_4491_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_);
return v___x_4492_;
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
lean_dec_ref(v___f_4486_);
lean_dec(v_fvarId_4476_);
lean_dec(v_mvarId_4475_);
v_a_4493_ = lean_ctor_get(v___x_4487_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4487_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4487_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object* v_mvarId_4501_, lean_object* v_fvarId_4502_, lean_object* v_givenNames_4503_, lean_object* v_config_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
lean_object* v_res_4510_; 
v_res_4510_ = l_Lean_MVarId_extractLetsLocalDecl(v_mvarId_4501_, v_fvarId_4502_, v_givenNames_4503_, v_config_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4505_);
return v_res_4510_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object* v_mvarId_4511_, lean_object* v___x_4512_, lean_object* v_config_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_){
_start:
{
lean_object* v___x_4519_; 
lean_inc(v___x_4512_);
lean_inc(v_mvarId_4511_);
v___x_4519_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4511_, v___x_4512_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
if (lean_obj_tag(v___x_4519_) == 0)
{
lean_object* v___x_4520_; 
lean_dec_ref_known(v___x_4519_, 1);
lean_inc(v_mvarId_4511_);
v___x_4520_ = l_Lean_MVarId_getType(v_mvarId_4511_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
if (lean_obj_tag(v___x_4520_) == 0)
{
lean_object* v_a_4521_; lean_object* v___x_4522_; 
v_a_4521_ = lean_ctor_get(v___x_4520_, 0);
lean_inc_n(v_a_4521_, 2);
lean_dec_ref_known(v___x_4520_, 1);
v___x_4522_ = l_Lean_Meta_liftLets(v_a_4521_, v_config_4513_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; uint8_t v___x_4524_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v___x_4522_, 1);
v___x_4524_ = lean_expr_eqv(v_a_4521_, v_a_4523_);
lean_dec(v_a_4521_);
if (v___x_4524_ == 0)
{
lean_object* v___x_4525_; 
lean_dec(v___x_4512_);
v___x_4525_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4511_, v_a_4523_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
return v___x_4525_;
}
else
{
lean_object* v___x_4526_; 
lean_inc(v_mvarId_4511_);
v___x_4526_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4512_, v_mvarId_4511_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
if (lean_obj_tag(v___x_4526_) == 0)
{
lean_object* v___x_4527_; 
lean_dec_ref_known(v___x_4526_, 1);
v___x_4527_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4511_, v_a_4523_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
return v___x_4527_;
}
else
{
lean_object* v_a_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4535_; 
lean_dec(v_a_4523_);
lean_dec(v_mvarId_4511_);
v_a_4528_ = lean_ctor_get(v___x_4526_, 0);
v_isSharedCheck_4535_ = !lean_is_exclusive(v___x_4526_);
if (v_isSharedCheck_4535_ == 0)
{
v___x_4530_ = v___x_4526_;
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_a_4528_);
lean_dec(v___x_4526_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
lean_object* v___x_4533_; 
if (v_isShared_4531_ == 0)
{
v___x_4533_ = v___x_4530_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v_a_4528_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
}
}
}
else
{
lean_object* v_a_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4543_; 
lean_dec(v_a_4521_);
lean_dec(v___x_4512_);
lean_dec(v_mvarId_4511_);
v_a_4536_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4543_ == 0)
{
v___x_4538_ = v___x_4522_;
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_a_4536_);
lean_dec(v___x_4522_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
lean_object* v___x_4541_; 
if (v_isShared_4539_ == 0)
{
v___x_4541_ = v___x_4538_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4536_);
v___x_4541_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
return v___x_4541_;
}
}
}
}
else
{
lean_object* v_a_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4551_; 
lean_dec_ref(v_config_4513_);
lean_dec(v___x_4512_);
lean_dec(v_mvarId_4511_);
v_a_4544_ = lean_ctor_get(v___x_4520_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4546_ = v___x_4520_;
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_a_4544_);
lean_dec(v___x_4520_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4549_; 
if (v_isShared_4547_ == 0)
{
v___x_4549_ = v___x_4546_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4544_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
}
else
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
lean_dec_ref(v_config_4513_);
lean_dec(v___x_4512_);
lean_dec(v_mvarId_4511_);
v_a_4552_ = lean_ctor_get(v___x_4519_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4519_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4554_ = v___x_4519_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4519_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object* v_mvarId_4560_, lean_object* v___x_4561_, lean_object* v_config_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_){
_start:
{
lean_object* v_res_4568_; 
v_res_4568_ = l_Lean_MVarId_liftLets___lam__0(v_mvarId_4560_, v___x_4561_, v_config_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_);
lean_dec(v___y_4566_);
lean_dec_ref(v___y_4565_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
return v_res_4568_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object* v_mvarId_4572_, lean_object* v_config_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v___x_4579_; lean_object* v___f_4580_; lean_object* v___x_4581_; 
v___x_4579_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
lean_inc(v_mvarId_4572_);
v___f_4580_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4580_, 0, v_mvarId_4572_);
lean_closure_set(v___f_4580_, 1, v___x_4579_);
lean_closure_set(v___f_4580_, 2, v_config_4573_);
v___x_4581_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4572_, v___f_4580_, v___y_4574_, v___y_4575_, v___y_4576_, v___y_4577_);
return v___x_4581_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object* v_mvarId_4582_, lean_object* v_config_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lean_MVarId_liftLets(v_mvarId_4582_, v_config_4583_, v___y_4584_, v___y_4585_, v___y_4586_, v___y_4587_);
lean_dec(v___y_4587_);
lean_dec_ref(v___y_4586_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object* v_mvarId_4590_, lean_object* v_fvars_4591_, lean_object* v_targetNew_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v___x_4598_; 
v___x_4598_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4590_, v_targetNew_4592_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_);
if (lean_obj_tag(v___x_4598_) == 0)
{
lean_object* v_a_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4612_; 
v_a_4599_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4601_ = v___x_4598_;
v_isShared_4602_ = v_isSharedCheck_4612_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_a_4599_);
lean_dec(v___x_4598_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4612_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4603_; size_t v_sz_4604_; size_t v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4603_ = lean_box(0);
v_sz_4604_ = lean_array_size(v_fvars_4591_);
v___x_4605_ = ((size_t)0ULL);
v___x_4606_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4604_, v___x_4605_, v_fvars_4591_);
v___x_4607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4607_, 0, v___x_4606_);
lean_ctor_set(v___x_4607_, 1, v_a_4599_);
v___x_4608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4603_);
lean_ctor_set(v___x_4608_, 1, v___x_4607_);
if (v_isShared_4602_ == 0)
{
lean_ctor_set(v___x_4601_, 0, v___x_4608_);
v___x_4610_ = v___x_4601_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v___x_4608_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
else
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4620_; 
lean_dec_ref(v_fvars_4591_);
v_a_4613_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4615_ = v___x_4598_;
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4598_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v___x_4618_; 
if (v_isShared_4616_ == 0)
{
v___x_4618_ = v___x_4615_;
goto v_reusejp_4617_;
}
else
{
lean_object* v_reuseFailAlloc_4619_; 
v_reuseFailAlloc_4619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4619_, 0, v_a_4613_);
v___x_4618_ = v_reuseFailAlloc_4619_;
goto v_reusejp_4617_;
}
v_reusejp_4617_:
{
return v___x_4618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4621_, lean_object* v_fvars_4622_, lean_object* v_targetNew_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_){
_start:
{
lean_object* v_res_4629_; 
v_res_4629_ = l_Lean_MVarId_liftLetsLocalDecl___lam__0(v_mvarId_4621_, v_fvars_4622_, v_targetNew_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
return v_res_4629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object* v_mvarId_4630_, lean_object* v_config_4631_, lean_object* v___f_4632_, lean_object* v___x_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_){
_start:
{
lean_object* v___x_4639_; 
lean_inc(v_mvarId_4630_);
v___x_4639_ = l_Lean_MVarId_getType(v_mvarId_4630_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_object* v_a_4640_; 
v_a_4640_ = lean_ctor_get(v___x_4639_, 0);
lean_inc(v_a_4640_);
lean_dec_ref_known(v___x_4639_, 1);
switch(lean_obj_tag(v_a_4640_))
{
case 7:
{
lean_object* v_binderName_4641_; lean_object* v_binderType_4642_; lean_object* v_body_4643_; uint8_t v_binderInfo_4644_; lean_object* v___x_4645_; 
v_binderName_4641_ = lean_ctor_get(v_a_4640_, 0);
lean_inc(v_binderName_4641_);
v_binderType_4642_ = lean_ctor_get(v_a_4640_, 1);
lean_inc_ref_n(v_binderType_4642_, 2);
v_body_4643_ = lean_ctor_get(v_a_4640_, 2);
lean_inc_ref(v_body_4643_);
v_binderInfo_4644_ = lean_ctor_get_uint8(v_a_4640_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4640_, 3);
v___x_4645_ = l_Lean_Meta_liftLets(v_binderType_4642_, v_config_4631_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4645_) == 0)
{
lean_object* v_a_4646_; lean_object* v___y_4648_; lean_object* v___y_4649_; lean_object* v___y_4650_; lean_object* v___y_4651_; uint8_t v___x_4654_; 
v_a_4646_ = lean_ctor_get(v___x_4645_, 0);
lean_inc(v_a_4646_);
lean_dec_ref_known(v___x_4645_, 1);
v___x_4654_ = lean_expr_eqv(v_binderType_4642_, v_a_4646_);
lean_dec_ref(v_binderType_4642_);
if (v___x_4654_ == 0)
{
lean_dec(v___x_4633_);
lean_dec(v_mvarId_4630_);
v___y_4648_ = v___y_4634_;
v___y_4649_ = v___y_4635_;
v___y_4650_ = v___y_4636_;
v___y_4651_ = v___y_4637_;
goto v___jp_4647_;
}
else
{
lean_object* v___x_4655_; 
v___x_4655_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4633_, v_mvarId_4630_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_dec_ref_known(v___x_4655_, 1);
v___y_4648_ = v___y_4634_;
v___y_4649_ = v___y_4635_;
v___y_4650_ = v___y_4636_;
v___y_4651_ = v___y_4637_;
goto v___jp_4647_;
}
else
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
lean_dec(v_a_4646_);
lean_dec_ref(v_body_4643_);
lean_dec(v_binderName_4641_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec_ref(v___f_4632_);
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4655_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4655_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
return v___x_4661_;
}
}
}
}
v___jp_4647_:
{
lean_object* v___x_4652_; lean_object* v___x_4653_; 
v___x_4652_ = l_Lean_Expr_forallE___override(v_binderName_4641_, v_a_4646_, v_body_4643_, v_binderInfo_4644_);
v___x_4653_ = lean_apply_6(v___f_4632_, v___x_4652_, v___y_4648_, v___y_4649_, v___y_4650_, v___y_4651_, lean_box(0));
return v___x_4653_;
}
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
lean_dec_ref(v_body_4643_);
lean_dec_ref(v_binderType_4642_);
lean_dec(v_binderName_4641_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec(v___x_4633_);
lean_dec_ref(v___f_4632_);
lean_dec(v_mvarId_4630_);
v_a_4664_ = lean_ctor_get(v___x_4645_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4645_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4666_ = v___x_4645_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4645_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4664_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
}
case 8:
{
lean_object* v_declName_4672_; lean_object* v_type_4673_; lean_object* v_value_4674_; lean_object* v_body_4675_; uint8_t v_nondep_4676_; lean_object* v___x_4677_; 
v_declName_4672_ = lean_ctor_get(v_a_4640_, 0);
lean_inc(v_declName_4672_);
v_type_4673_ = lean_ctor_get(v_a_4640_, 1);
lean_inc_ref_n(v_type_4673_, 2);
v_value_4674_ = lean_ctor_get(v_a_4640_, 2);
lean_inc_ref(v_value_4674_);
v_body_4675_ = lean_ctor_get(v_a_4640_, 3);
lean_inc_ref(v_body_4675_);
v_nondep_4676_ = lean_ctor_get_uint8(v_a_4640_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4640_, 4);
lean_inc_ref(v_config_4631_);
v___x_4677_ = l_Lean_Meta_liftLets(v_type_4673_, v_config_4631_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4677_) == 0)
{
lean_object* v_a_4678_; lean_object* v___x_4679_; 
v_a_4678_ = lean_ctor_get(v___x_4677_, 0);
lean_inc(v_a_4678_);
lean_dec_ref_known(v___x_4677_, 1);
lean_inc_ref(v_value_4674_);
v___x_4679_ = l_Lean_Meta_liftLets(v_value_4674_, v_config_4631_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4679_) == 0)
{
lean_object* v_a_4680_; lean_object* v___y_4682_; lean_object* v___y_4683_; lean_object* v___y_4684_; lean_object* v___y_4685_; uint8_t v___y_4689_; uint8_t v___x_4699_; 
v_a_4680_ = lean_ctor_get(v___x_4679_, 0);
lean_inc(v_a_4680_);
lean_dec_ref_known(v___x_4679_, 1);
v___x_4699_ = lean_expr_eqv(v_type_4673_, v_a_4678_);
lean_dec_ref(v_type_4673_);
if (v___x_4699_ == 0)
{
lean_dec_ref(v_value_4674_);
v___y_4689_ = v___x_4699_;
goto v___jp_4688_;
}
else
{
uint8_t v___x_4700_; 
v___x_4700_ = lean_expr_eqv(v_value_4674_, v_a_4680_);
lean_dec_ref(v_value_4674_);
v___y_4689_ = v___x_4700_;
goto v___jp_4688_;
}
v___jp_4681_:
{
lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4686_ = l_Lean_Expr_letE___override(v_declName_4672_, v_a_4678_, v_a_4680_, v_body_4675_, v_nondep_4676_);
v___x_4687_ = lean_apply_6(v___f_4632_, v___x_4686_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, lean_box(0));
return v___x_4687_;
}
v___jp_4688_:
{
if (v___y_4689_ == 0)
{
lean_dec(v___x_4633_);
lean_dec(v_mvarId_4630_);
v___y_4682_ = v___y_4634_;
v___y_4683_ = v___y_4635_;
v___y_4684_ = v___y_4636_;
v___y_4685_ = v___y_4637_;
goto v___jp_4681_;
}
else
{
lean_object* v___x_4690_; 
v___x_4690_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4633_, v_mvarId_4630_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4690_) == 0)
{
lean_dec_ref_known(v___x_4690_, 1);
v___y_4682_ = v___y_4634_;
v___y_4683_ = v___y_4635_;
v___y_4684_ = v___y_4636_;
v___y_4685_ = v___y_4637_;
goto v___jp_4681_;
}
else
{
lean_object* v_a_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4698_; 
lean_dec(v_a_4680_);
lean_dec(v_a_4678_);
lean_dec_ref(v_body_4675_);
lean_dec(v_declName_4672_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec_ref(v___f_4632_);
v_a_4691_ = lean_ctor_get(v___x_4690_, 0);
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4690_);
if (v_isSharedCheck_4698_ == 0)
{
v___x_4693_ = v___x_4690_;
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_a_4691_);
lean_dec(v___x_4690_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v_a_4691_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
return v___x_4696_;
}
}
}
}
}
}
else
{
lean_object* v_a_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4708_; 
lean_dec(v_a_4678_);
lean_dec_ref(v_body_4675_);
lean_dec_ref(v_value_4674_);
lean_dec_ref(v_type_4673_);
lean_dec(v_declName_4672_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec(v___x_4633_);
lean_dec_ref(v___f_4632_);
lean_dec(v_mvarId_4630_);
v_a_4701_ = lean_ctor_get(v___x_4679_, 0);
v_isSharedCheck_4708_ = !lean_is_exclusive(v___x_4679_);
if (v_isSharedCheck_4708_ == 0)
{
v___x_4703_ = v___x_4679_;
v_isShared_4704_ = v_isSharedCheck_4708_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_a_4701_);
lean_dec(v___x_4679_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4708_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v___x_4706_; 
if (v_isShared_4704_ == 0)
{
v___x_4706_ = v___x_4703_;
goto v_reusejp_4705_;
}
else
{
lean_object* v_reuseFailAlloc_4707_; 
v_reuseFailAlloc_4707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4707_, 0, v_a_4701_);
v___x_4706_ = v_reuseFailAlloc_4707_;
goto v_reusejp_4705_;
}
v_reusejp_4705_:
{
return v___x_4706_;
}
}
}
}
else
{
lean_object* v_a_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4716_; 
lean_dec_ref(v_body_4675_);
lean_dec_ref(v_value_4674_);
lean_dec_ref(v_type_4673_);
lean_dec(v_declName_4672_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec(v___x_4633_);
lean_dec_ref(v___f_4632_);
lean_dec_ref(v_config_4631_);
lean_dec(v_mvarId_4630_);
v_a_4709_ = lean_ctor_get(v___x_4677_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v___x_4677_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4711_ = v___x_4677_;
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_a_4709_);
lean_dec(v___x_4677_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4714_; 
if (v_isShared_4712_ == 0)
{
v___x_4714_ = v___x_4711_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v_a_4709_);
v___x_4714_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
return v___x_4714_;
}
}
}
}
default: 
{
lean_object* v___x_4717_; lean_object* v___x_4718_; 
lean_dec(v_a_4640_);
lean_dec_ref(v___f_4632_);
lean_dec_ref(v_config_4631_);
v___x_4717_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4718_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4633_, v_mvarId_4630_, v___x_4717_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
return v___x_4718_;
}
}
}
else
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec(v___x_4633_);
lean_dec_ref(v___f_4632_);
lean_dec_ref(v_config_4631_);
lean_dec(v_mvarId_4630_);
v_a_4719_ = lean_ctor_get(v___x_4639_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4639_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4639_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
return v___x_4724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object* v_mvarId_4727_, lean_object* v_config_4728_, lean_object* v___f_4729_, lean_object* v___x_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_){
_start:
{
lean_object* v_res_4736_; 
v_res_4736_ = l_Lean_MVarId_liftLetsLocalDecl___lam__1(v_mvarId_4727_, v_config_4728_, v___f_4729_, v___x_4730_, v___y_4731_, v___y_4732_, v___y_4733_, v___y_4734_);
return v_res_4736_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object* v_config_4737_, lean_object* v___x_4738_, lean_object* v_mvarId_4739_, lean_object* v_fvars_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v___f_4746_; lean_object* v___f_4747_; lean_object* v___x_4748_; 
lean_inc_n(v_mvarId_4739_, 2);
v___f_4746_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4746_, 0, v_mvarId_4739_);
lean_closure_set(v___f_4746_, 1, v_fvars_4740_);
v___f_4747_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4747_, 0, v_mvarId_4739_);
lean_closure_set(v___f_4747_, 1, v_config_4737_);
lean_closure_set(v___f_4747_, 2, v___f_4746_);
lean_closure_set(v___f_4747_, 3, v___x_4738_);
v___x_4748_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4739_, v___f_4747_, v___y_4741_, v___y_4742_, v___y_4743_, v___y_4744_);
return v___x_4748_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object* v_config_4749_, lean_object* v___x_4750_, lean_object* v_mvarId_4751_, lean_object* v_fvars_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
lean_object* v_res_4758_; 
v_res_4758_ = l_Lean_MVarId_liftLetsLocalDecl___lam__2(v_config_4749_, v___x_4750_, v_mvarId_4751_, v_fvars_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_);
lean_dec(v___y_4756_);
lean_dec_ref(v___y_4755_);
lean_dec(v___y_4754_);
lean_dec_ref(v___y_4753_);
return v_res_4758_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object* v_mvarId_4759_, lean_object* v_fvarId_4760_, lean_object* v_config_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_){
_start:
{
lean_object* v___x_4767_; lean_object* v___f_4768_; lean_object* v___x_4769_; 
v___x_4767_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
v___f_4768_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4768_, 0, v_config_4761_);
lean_closure_set(v___f_4768_, 1, v___x_4767_);
lean_inc(v_mvarId_4759_);
v___x_4769_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4759_, v___x_4767_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4769_) == 0)
{
lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; uint8_t v___x_4773_; lean_object* v___x_4774_; 
lean_dec_ref_known(v___x_4769_, 1);
v___x_4770_ = lean_unsigned_to_nat(1u);
v___x_4771_ = lean_mk_empty_array_with_capacity(v___x_4770_);
v___x_4772_ = lean_array_push(v___x_4771_, v_fvarId_4760_);
v___x_4773_ = 0;
v___x_4774_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4759_, v___x_4772_, v___f_4768_, v___x_4773_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4774_) == 0)
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4783_; 
v_a_4775_ = lean_ctor_get(v___x_4774_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4774_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4777_ = v___x_4774_;
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v___x_4774_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v_snd_4779_; lean_object* v___x_4781_; 
v_snd_4779_ = lean_ctor_get(v_a_4775_, 1);
lean_inc(v_snd_4779_);
lean_dec(v_a_4775_);
if (v_isShared_4778_ == 0)
{
lean_ctor_set(v___x_4777_, 0, v_snd_4779_);
v___x_4781_ = v___x_4777_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_snd_4779_);
v___x_4781_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
return v___x_4781_;
}
}
}
else
{
lean_object* v_a_4784_; lean_object* v___x_4786_; uint8_t v_isShared_4787_; uint8_t v_isSharedCheck_4791_; 
v_a_4784_ = lean_ctor_get(v___x_4774_, 0);
v_isSharedCheck_4791_ = !lean_is_exclusive(v___x_4774_);
if (v_isSharedCheck_4791_ == 0)
{
v___x_4786_ = v___x_4774_;
v_isShared_4787_ = v_isSharedCheck_4791_;
goto v_resetjp_4785_;
}
else
{
lean_inc(v_a_4784_);
lean_dec(v___x_4774_);
v___x_4786_ = lean_box(0);
v_isShared_4787_ = v_isSharedCheck_4791_;
goto v_resetjp_4785_;
}
v_resetjp_4785_:
{
lean_object* v___x_4789_; 
if (v_isShared_4787_ == 0)
{
v___x_4789_ = v___x_4786_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4790_; 
v_reuseFailAlloc_4790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4790_, 0, v_a_4784_);
v___x_4789_ = v_reuseFailAlloc_4790_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
return v___x_4789_;
}
}
}
}
else
{
lean_object* v_a_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4799_; 
lean_dec_ref(v___f_4768_);
lean_dec(v_fvarId_4760_);
lean_dec(v_mvarId_4759_);
v_a_4792_ = lean_ctor_get(v___x_4769_, 0);
v_isSharedCheck_4799_ = !lean_is_exclusive(v___x_4769_);
if (v_isSharedCheck_4799_ == 0)
{
v___x_4794_ = v___x_4769_;
v_isShared_4795_ = v_isSharedCheck_4799_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_a_4792_);
lean_dec(v___x_4769_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4799_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
lean_object* v___x_4797_; 
if (v_isShared_4795_ == 0)
{
v___x_4797_ = v___x_4794_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4798_; 
v_reuseFailAlloc_4798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4798_, 0, v_a_4792_);
v___x_4797_ = v_reuseFailAlloc_4798_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
return v___x_4797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object* v_mvarId_4800_, lean_object* v_fvarId_4801_, lean_object* v_config_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_){
_start:
{
lean_object* v_res_4808_; 
v_res_4808_ = l_Lean_MVarId_liftLetsLocalDecl(v_mvarId_4800_, v_fvarId_4801_, v_config_4802_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_);
lean_dec(v___y_4806_);
lean_dec_ref(v___y_4805_);
lean_dec(v___y_4804_);
lean_dec_ref(v___y_4803_);
return v_res_4808_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object* v_mvarId_4809_, lean_object* v___x_4810_, uint8_t v_failIfUnchanged_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_){
_start:
{
lean_object* v___x_4817_; 
lean_inc(v___x_4810_);
lean_inc(v_mvarId_4809_);
v___x_4817_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4809_, v___x_4810_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
if (lean_obj_tag(v___x_4817_) == 0)
{
lean_object* v___x_4818_; 
lean_dec_ref_known(v___x_4817_, 1);
lean_inc(v_mvarId_4809_);
v___x_4818_ = l_Lean_MVarId_getType(v_mvarId_4809_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
if (lean_obj_tag(v___x_4818_) == 0)
{
lean_object* v_a_4819_; lean_object* v___x_4820_; 
v_a_4819_ = lean_ctor_get(v___x_4818_, 0);
lean_inc_n(v_a_4819_, 2);
lean_dec_ref_known(v___x_4818_, 1);
v___x_4820_ = l_Lean_Meta_letToHave(v_a_4819_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
if (lean_obj_tag(v___x_4820_) == 0)
{
if (v_failIfUnchanged_4811_ == 0)
{
lean_object* v_a_4821_; lean_object* v___x_4822_; 
lean_dec(v_a_4819_);
lean_dec(v___x_4810_);
v_a_4821_ = lean_ctor_get(v___x_4820_, 0);
lean_inc(v_a_4821_);
lean_dec_ref_known(v___x_4820_, 1);
v___x_4822_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4809_, v_a_4821_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
return v___x_4822_;
}
else
{
lean_object* v_a_4823_; uint8_t v___x_4824_; 
v_a_4823_ = lean_ctor_get(v___x_4820_, 0);
lean_inc(v_a_4823_);
lean_dec_ref_known(v___x_4820_, 1);
v___x_4824_ = lean_expr_eqv(v_a_4819_, v_a_4823_);
lean_dec(v_a_4819_);
if (v___x_4824_ == 0)
{
lean_object* v___x_4825_; 
lean_dec(v___x_4810_);
v___x_4825_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4809_, v_a_4823_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
return v___x_4825_;
}
else
{
lean_object* v___x_4826_; 
lean_inc(v_mvarId_4809_);
v___x_4826_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4810_, v_mvarId_4809_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
if (lean_obj_tag(v___x_4826_) == 0)
{
lean_object* v___x_4827_; 
lean_dec_ref_known(v___x_4826_, 1);
v___x_4827_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4809_, v_a_4823_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_);
return v___x_4827_;
}
else
{
lean_object* v_a_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4835_; 
lean_dec(v_a_4823_);
lean_dec(v_mvarId_4809_);
v_a_4828_ = lean_ctor_get(v___x_4826_, 0);
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4830_ = v___x_4826_;
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_a_4828_);
lean_dec(v___x_4826_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v___x_4833_; 
if (v_isShared_4831_ == 0)
{
v___x_4833_ = v___x_4830_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v_a_4828_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
}
}
}
else
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
lean_dec(v_a_4819_);
lean_dec(v___x_4810_);
lean_dec(v_mvarId_4809_);
v_a_4836_ = lean_ctor_get(v___x_4820_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4820_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4820_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4820_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4839_ == 0)
{
v___x_4841_ = v___x_4838_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
lean_dec(v___x_4810_);
lean_dec(v_mvarId_4809_);
v_a_4844_ = lean_ctor_get(v___x_4818_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4818_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4818_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4818_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
else
{
lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4859_; 
lean_dec(v___x_4810_);
lean_dec(v_mvarId_4809_);
v_a_4852_ = lean_ctor_get(v___x_4817_, 0);
v_isSharedCheck_4859_ = !lean_is_exclusive(v___x_4817_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4854_ = v___x_4817_;
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4817_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4857_; 
if (v_isShared_4855_ == 0)
{
v___x_4857_ = v___x_4854_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v_a_4852_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
return v___x_4857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object* v_mvarId_4860_, lean_object* v___x_4861_, lean_object* v_failIfUnchanged_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4868_; lean_object* v_res_4869_; 
v_failIfUnchanged_boxed_4868_ = lean_unbox(v_failIfUnchanged_4862_);
v_res_4869_ = l_Lean_MVarId_letToHave___lam__0(v_mvarId_4860_, v___x_4861_, v_failIfUnchanged_boxed_4868_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
lean_dec(v___y_4866_);
lean_dec_ref(v___y_4865_);
lean_dec(v___y_4864_);
lean_dec_ref(v___y_4863_);
return v_res_4869_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object* v_mvarId_4873_, uint8_t v_failIfUnchanged_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_){
_start:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___f_4882_; lean_object* v___x_4883_; 
v___x_4880_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4881_ = lean_box(v_failIfUnchanged_4874_);
lean_inc(v_mvarId_4873_);
v___f_4882_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHave___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4882_, 0, v_mvarId_4873_);
lean_closure_set(v___f_4882_, 1, v___x_4880_);
lean_closure_set(v___f_4882_, 2, v___x_4881_);
v___x_4883_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4873_, v___f_4882_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_);
return v___x_4883_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object* v_mvarId_4884_, lean_object* v_failIfUnchanged_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4891_; lean_object* v_res_4892_; 
v_failIfUnchanged_boxed_4891_ = lean_unbox(v_failIfUnchanged_4885_);
v_res_4892_ = l_Lean_MVarId_letToHave(v_mvarId_4884_, v_failIfUnchanged_boxed_4891_, v___y_4886_, v___y_4887_, v___y_4888_, v___y_4889_);
lean_dec(v___y_4889_);
lean_dec_ref(v___y_4888_);
lean_dec(v___y_4887_);
lean_dec_ref(v___y_4886_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object* v_mvarId_4893_, lean_object* v___x_4894_, lean_object* v_fvarId_4895_, uint8_t v_failIfUnchanged_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_){
_start:
{
lean_object* v___x_4902_; 
lean_inc(v___x_4894_);
lean_inc(v_mvarId_4893_);
v___x_4902_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4893_, v___x_4894_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
if (lean_obj_tag(v___x_4902_) == 0)
{
lean_object* v___x_4903_; 
lean_dec_ref_known(v___x_4902_, 1);
lean_inc(v_fvarId_4895_);
v___x_4903_ = l_Lean_FVarId_getType___redArg(v_fvarId_4895_, v___y_4897_, v___y_4899_, v___y_4900_);
if (lean_obj_tag(v___x_4903_) == 0)
{
lean_object* v_a_4904_; lean_object* v___x_4905_; 
v_a_4904_ = lean_ctor_get(v___x_4903_, 0);
lean_inc_n(v_a_4904_, 2);
lean_dec_ref_known(v___x_4903_, 1);
v___x_4905_ = l_Lean_Meta_letToHave(v_a_4904_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
if (lean_obj_tag(v___x_4905_) == 0)
{
if (v_failIfUnchanged_4896_ == 0)
{
lean_object* v_a_4906_; lean_object* v___x_4907_; 
lean_dec(v_a_4904_);
lean_dec(v___x_4894_);
v_a_4906_ = lean_ctor_get(v___x_4905_, 0);
lean_inc(v_a_4906_);
lean_dec_ref_known(v___x_4905_, 1);
v___x_4907_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4893_, v_fvarId_4895_, v_a_4906_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
return v___x_4907_;
}
else
{
lean_object* v_a_4908_; uint8_t v___x_4909_; 
v_a_4908_ = lean_ctor_get(v___x_4905_, 0);
lean_inc(v_a_4908_);
lean_dec_ref_known(v___x_4905_, 1);
v___x_4909_ = lean_expr_eqv(v_a_4904_, v_a_4908_);
lean_dec(v_a_4904_);
if (v___x_4909_ == 0)
{
lean_object* v___x_4910_; 
lean_dec(v___x_4894_);
v___x_4910_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4893_, v_fvarId_4895_, v_a_4908_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
return v___x_4910_;
}
else
{
lean_object* v___x_4911_; 
lean_inc(v_mvarId_4893_);
v___x_4911_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4894_, v_mvarId_4893_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
if (lean_obj_tag(v___x_4911_) == 0)
{
lean_object* v___x_4912_; 
lean_dec_ref_known(v___x_4911_, 1);
v___x_4912_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4893_, v_fvarId_4895_, v_a_4908_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
return v___x_4912_;
}
else
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
lean_dec(v_a_4908_);
lean_dec(v_fvarId_4895_);
lean_dec(v_mvarId_4893_);
v_a_4913_ = lean_ctor_get(v___x_4911_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4911_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4915_ = v___x_4911_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4911_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4913_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
}
}
}
else
{
lean_object* v_a_4921_; lean_object* v___x_4923_; uint8_t v_isShared_4924_; uint8_t v_isSharedCheck_4928_; 
lean_dec(v_a_4904_);
lean_dec(v_fvarId_4895_);
lean_dec(v___x_4894_);
lean_dec(v_mvarId_4893_);
v_a_4921_ = lean_ctor_get(v___x_4905_, 0);
v_isSharedCheck_4928_ = !lean_is_exclusive(v___x_4905_);
if (v_isSharedCheck_4928_ == 0)
{
v___x_4923_ = v___x_4905_;
v_isShared_4924_ = v_isSharedCheck_4928_;
goto v_resetjp_4922_;
}
else
{
lean_inc(v_a_4921_);
lean_dec(v___x_4905_);
v___x_4923_ = lean_box(0);
v_isShared_4924_ = v_isSharedCheck_4928_;
goto v_resetjp_4922_;
}
v_resetjp_4922_:
{
lean_object* v___x_4926_; 
if (v_isShared_4924_ == 0)
{
v___x_4926_ = v___x_4923_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4927_; 
v_reuseFailAlloc_4927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4927_, 0, v_a_4921_);
v___x_4926_ = v_reuseFailAlloc_4927_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
return v___x_4926_;
}
}
}
}
else
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4936_; 
lean_dec(v_fvarId_4895_);
lean_dec(v___x_4894_);
lean_dec(v_mvarId_4893_);
v_a_4929_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4931_ = v___x_4903_;
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4903_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
}
}
else
{
lean_object* v_a_4937_; lean_object* v___x_4939_; uint8_t v_isShared_4940_; uint8_t v_isSharedCheck_4944_; 
lean_dec(v_fvarId_4895_);
lean_dec(v___x_4894_);
lean_dec(v_mvarId_4893_);
v_a_4937_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4939_ = v___x_4902_;
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
else
{
lean_inc(v_a_4937_);
lean_dec(v___x_4902_);
v___x_4939_ = lean_box(0);
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
v_resetjp_4938_:
{
lean_object* v___x_4942_; 
if (v_isShared_4940_ == 0)
{
v___x_4942_ = v___x_4939_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4937_);
v___x_4942_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
return v___x_4942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object* v_mvarId_4945_, lean_object* v___x_4946_, lean_object* v_fvarId_4947_, lean_object* v_failIfUnchanged_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4954_; lean_object* v_res_4955_; 
v_failIfUnchanged_boxed_4954_ = lean_unbox(v_failIfUnchanged_4948_);
v_res_4955_ = l_Lean_MVarId_letToHaveLocalDecl___lam__0(v_mvarId_4945_, v___x_4946_, v_fvarId_4947_, v_failIfUnchanged_boxed_4954_, v___y_4949_, v___y_4950_, v___y_4951_, v___y_4952_);
lean_dec(v___y_4952_);
lean_dec_ref(v___y_4951_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
return v_res_4955_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object* v_mvarId_4956_, lean_object* v_fvarId_4957_, uint8_t v_failIfUnchanged_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_){
_start:
{
lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___f_4966_; lean_object* v___x_4967_; 
v___x_4964_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4965_ = lean_box(v_failIfUnchanged_4958_);
lean_inc(v_mvarId_4956_);
v___f_4966_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4966_, 0, v_mvarId_4956_);
lean_closure_set(v___f_4966_, 1, v___x_4964_);
lean_closure_set(v___f_4966_, 2, v_fvarId_4957_);
lean_closure_set(v___f_4966_, 3, v___x_4965_);
v___x_4967_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4956_, v___f_4966_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_);
return v___x_4967_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object* v_mvarId_4968_, lean_object* v_fvarId_4969_, lean_object* v_failIfUnchanged_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4976_; lean_object* v_res_4977_; 
v_failIfUnchanged_boxed_4976_ = lean_unbox(v_failIfUnchanged_4970_);
v_res_4977_ = l_Lean_MVarId_letToHaveLocalDecl(v_mvarId_4968_, v_fvarId_4969_, v_failIfUnchanged_boxed_4976_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec(v___y_4972_);
lean_dec_ref(v___y_4971_);
return v_res_4977_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_ExtractLets_instInhabitedState_default = _init_l_Lean_Meta_ExtractLets_instInhabitedState_default();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState_default);
l_Lean_Meta_ExtractLets_instInhabitedState = _init_l_Lean_Meta_ExtractLets_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Lets(builtin);
}
#ifdef __cplusplus
}
#endif
