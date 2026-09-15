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
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__8 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__9 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__9_value;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object* v_msg_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v___f_1821_; lean_object* v___f_1822_; lean_object* v___f_1823_; lean_object* v___f_1824_; lean_object* v___f_1825_; lean_object* v___f_1826_; lean_object* v___f_1827_; lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v_toApplicative_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1897_; 
v___f_1821_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0));
v___f_1822_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1));
v___f_1823_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2));
v___f_1824_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3));
v___f_1825_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4));
v___f_1826_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1826_, 0, v___f_1825_);
lean_closure_set(v___f_1826_, 1, v___f_1824_);
v___f_1827_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1827_, 0, v___f_1824_);
v___f_1828_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5));
v___x_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___f_1821_);
lean_ctor_set(v___x_1829_, 1, v___f_1822_);
v___x_1830_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
lean_ctor_set(v___x_1830_, 1, v___f_1823_);
lean_ctor_set(v___x_1830_, 2, v___f_1826_);
lean_ctor_set(v___x_1830_, 3, v___f_1827_);
lean_ctor_set(v___x_1830_, 4, v___f_1828_);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
lean_ctor_set(v___x_1831_, 1, v___f_1824_);
v___x_1832_ = l_StateRefT_x27_instMonad___redArg(v___x_1831_);
v_toApplicative_1833_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1897_ == 0)
{
lean_object* v_unused_1898_; 
v_unused_1898_ = lean_ctor_get(v___x_1832_, 1);
lean_dec(v_unused_1898_);
v___x_1835_ = v___x_1832_;
v_isShared_1836_ = v_isSharedCheck_1897_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_toApplicative_1833_);
lean_dec(v___x_1832_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1897_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v_toFunctor_1837_; lean_object* v_toSeq_1838_; lean_object* v_toSeqLeft_1839_; lean_object* v_toSeqRight_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1895_; 
v_toFunctor_1837_ = lean_ctor_get(v_toApplicative_1833_, 0);
v_toSeq_1838_ = lean_ctor_get(v_toApplicative_1833_, 2);
v_toSeqLeft_1839_ = lean_ctor_get(v_toApplicative_1833_, 3);
v_toSeqRight_1840_ = lean_ctor_get(v_toApplicative_1833_, 4);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_toApplicative_1833_);
if (v_isSharedCheck_1895_ == 0)
{
lean_object* v_unused_1896_; 
v_unused_1896_ = lean_ctor_get(v_toApplicative_1833_, 1);
lean_dec(v_unused_1896_);
v___x_1842_ = v_toApplicative_1833_;
v_isShared_1843_ = v_isSharedCheck_1895_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_toSeqRight_1840_);
lean_inc(v_toSeqLeft_1839_);
lean_inc(v_toSeq_1838_);
lean_inc(v_toFunctor_1837_);
lean_dec(v_toApplicative_1833_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1895_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___f_1844_; lean_object* v___f_1845_; lean_object* v___f_1846_; lean_object* v___f_1847_; lean_object* v___x_1848_; lean_object* v___f_1849_; lean_object* v___f_1850_; lean_object* v___f_1851_; lean_object* v___x_1853_; 
v___f_1844_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6));
v___f_1845_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7));
lean_inc_ref(v_toFunctor_1837_);
v___f_1846_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1846_, 0, v_toFunctor_1837_);
v___f_1847_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1847_, 0, v_toFunctor_1837_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___f_1846_);
lean_ctor_set(v___x_1848_, 1, v___f_1847_);
v___f_1849_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1849_, 0, v_toSeqRight_1840_);
v___f_1850_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1850_, 0, v_toSeqLeft_1839_);
v___f_1851_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1851_, 0, v_toSeq_1838_);
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 4, v___f_1849_);
lean_ctor_set(v___x_1842_, 3, v___f_1850_);
lean_ctor_set(v___x_1842_, 2, v___f_1851_);
lean_ctor_set(v___x_1842_, 1, v___f_1844_);
lean_ctor_set(v___x_1842_, 0, v___x_1848_);
v___x_1853_ = v___x_1842_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1848_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v___f_1844_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v___f_1851_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v___f_1850_);
lean_ctor_set(v_reuseFailAlloc_1894_, 4, v___f_1849_);
v___x_1853_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1855_; 
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 1, v___f_1845_);
lean_ctor_set(v___x_1835_, 0, v___x_1853_);
v___x_1855_ = v___x_1835_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v___f_1845_);
v___x_1855_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1856_; lean_object* v_toApplicative_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1891_; 
v___x_1856_ = l_StateRefT_x27_instMonad___redArg(v___x_1855_);
v_toApplicative_1857_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1891_ == 0)
{
lean_object* v_unused_1892_; 
v_unused_1892_ = lean_ctor_get(v___x_1856_, 1);
lean_dec(v_unused_1892_);
v___x_1859_ = v___x_1856_;
v_isShared_1860_ = v_isSharedCheck_1891_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_toApplicative_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1891_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v_toFunctor_1861_; lean_object* v_toSeq_1862_; lean_object* v_toSeqLeft_1863_; lean_object* v_toSeqRight_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1889_; 
v_toFunctor_1861_ = lean_ctor_get(v_toApplicative_1857_, 0);
v_toSeq_1862_ = lean_ctor_get(v_toApplicative_1857_, 2);
v_toSeqLeft_1863_ = lean_ctor_get(v_toApplicative_1857_, 3);
v_toSeqRight_1864_ = lean_ctor_get(v_toApplicative_1857_, 4);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_toApplicative_1857_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; 
v_unused_1890_ = lean_ctor_get(v_toApplicative_1857_, 1);
lean_dec(v_unused_1890_);
v___x_1866_ = v_toApplicative_1857_;
v_isShared_1867_ = v_isSharedCheck_1889_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_toSeqRight_1864_);
lean_inc(v_toSeqLeft_1863_);
lean_inc(v_toSeq_1862_);
lean_inc(v_toFunctor_1861_);
lean_dec(v_toApplicative_1857_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1889_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___f_1868_; lean_object* v___f_1869_; lean_object* v___f_1870_; lean_object* v___f_1871_; lean_object* v___x_1872_; lean_object* v___f_1873_; lean_object* v___f_1874_; lean_object* v___f_1875_; lean_object* v___x_1877_; 
v___f_1868_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__8));
v___f_1869_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__9));
lean_inc_ref(v_toFunctor_1861_);
v___f_1870_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1870_, 0, v_toFunctor_1861_);
v___f_1871_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1871_, 0, v_toFunctor_1861_);
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___f_1870_);
lean_ctor_set(v___x_1872_, 1, v___f_1871_);
v___f_1873_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1873_, 0, v_toSeqRight_1864_);
v___f_1874_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1874_, 0, v_toSeqLeft_1863_);
v___f_1875_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1875_, 0, v_toSeq_1862_);
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 4, v___f_1873_);
lean_ctor_set(v___x_1866_, 3, v___f_1874_);
lean_ctor_set(v___x_1866_, 2, v___f_1875_);
lean_ctor_set(v___x_1866_, 1, v___f_1868_);
lean_ctor_set(v___x_1866_, 0, v___x_1872_);
v___x_1877_ = v___x_1866_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v___x_1872_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v___f_1868_);
lean_ctor_set(v_reuseFailAlloc_1888_, 2, v___f_1875_);
lean_ctor_set(v_reuseFailAlloc_1888_, 3, v___f_1874_);
lean_ctor_set(v_reuseFailAlloc_1888_, 4, v___f_1873_);
v___x_1877_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1879_; 
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 1, v___f_1869_);
lean_ctor_set(v___x_1859_, 0, v___x_1877_);
v___x_1879_ = v___x_1859_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___f_1869_);
v___x_1879_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_40547__overap_1885_; lean_object* v___x_1886_; 
v___x_1880_ = l_StateRefT_x27_instMonad___redArg(v___x_1879_);
v___x_1881_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_1880_);
v___x_1882_ = l_Lean_instInhabitedExpr;
v___x_1883_ = l_instInhabitedOfMonad___redArg(v___x_1881_, v___x_1882_);
v___x_1884_ = l_instInhabitedReaderT___redArg(v___x_1883_);
v___x_40547__overap_1885_ = lean_panic_fn_borrowed(v___x_1884_, v_msg_1812_);
lean_dec(v___x_1884_);
lean_inc(v___y_1819_);
lean_inc_ref(v___y_1818_);
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
lean_inc(v___y_1815_);
lean_inc(v___y_1814_);
lean_inc_ref(v___y_1813_);
v___x_1886_ = lean_apply_8(v___x_40547__overap_1885_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, lean_box(0));
return v___x_1886_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object* v_msg_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v_msg_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object* v_binderType_1909_, lean_object* v_binderName_1910_, uint8_t v_binderInfo_1911_, lean_object* v_body_1912_, lean_object* v_e_1913_, lean_object* v_t_1914_, lean_object* v_b_1915_){
_start:
{
size_t v___x_1916_; size_t v___x_1917_; uint8_t v___x_1918_; 
v___x_1916_ = lean_ptr_addr(v_binderType_1909_);
v___x_1917_ = lean_ptr_addr(v_t_1914_);
v___x_1918_ = lean_usize_dec_eq(v___x_1916_, v___x_1917_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Lean_Expr_lam___override(v_binderName_1910_, v_t_1914_, v_b_1915_, v_binderInfo_1911_);
return v___x_1919_;
}
else
{
size_t v___x_1920_; size_t v___x_1921_; uint8_t v___x_1922_; 
v___x_1920_ = lean_ptr_addr(v_body_1912_);
v___x_1921_ = lean_ptr_addr(v_b_1915_);
v___x_1922_ = lean_usize_dec_eq(v___x_1920_, v___x_1921_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; 
v___x_1923_ = l_Lean_Expr_lam___override(v_binderName_1910_, v_t_1914_, v_b_1915_, v_binderInfo_1911_);
return v___x_1923_;
}
else
{
uint8_t v___x_1924_; 
v___x_1924_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1911_, v_binderInfo_1911_);
if (v___x_1924_ == 0)
{
lean_object* v___x_1925_; 
v___x_1925_ = l_Lean_Expr_lam___override(v_binderName_1910_, v_t_1914_, v_b_1915_, v_binderInfo_1911_);
return v___x_1925_;
}
else
{
lean_dec_ref(v_b_1915_);
lean_dec_ref(v_t_1914_);
lean_dec(v_binderName_1910_);
lean_inc_ref(v_e_1913_);
return v_e_1913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object* v_binderType_1926_, lean_object* v_binderName_1927_, lean_object* v_binderInfo_1928_, lean_object* v_body_1929_, lean_object* v_e_1930_, lean_object* v_t_1931_, lean_object* v_b_1932_){
_start:
{
uint8_t v_binderInfo_44319__boxed_1933_; lean_object* v_res_1934_; 
v_binderInfo_44319__boxed_1933_ = lean_unbox(v_binderInfo_1928_);
v_res_1934_ = l_Lean_Meta_ExtractLets_extractCore___lam__0(v_binderType_1926_, v_binderName_1927_, v_binderInfo_44319__boxed_1933_, v_body_1929_, v_e_1930_, v_t_1931_, v_b_1932_);
lean_dec_ref(v_e_1930_);
lean_dec_ref(v_body_1929_);
lean_dec_ref(v_binderType_1926_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object* v_binderType_1935_, lean_object* v_binderName_1936_, uint8_t v_binderInfo_1937_, lean_object* v_body_1938_, lean_object* v_e_1939_, lean_object* v_t_1940_, lean_object* v_b_1941_){
_start:
{
size_t v___x_1942_; size_t v___x_1943_; uint8_t v___x_1944_; 
v___x_1942_ = lean_ptr_addr(v_binderType_1935_);
v___x_1943_ = lean_ptr_addr(v_t_1940_);
v___x_1944_ = lean_usize_dec_eq(v___x_1942_, v___x_1943_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; 
v___x_1945_ = l_Lean_Expr_forallE___override(v_binderName_1936_, v_t_1940_, v_b_1941_, v_binderInfo_1937_);
return v___x_1945_;
}
else
{
size_t v___x_1946_; size_t v___x_1947_; uint8_t v___x_1948_; 
v___x_1946_ = lean_ptr_addr(v_body_1938_);
v___x_1947_ = lean_ptr_addr(v_b_1941_);
v___x_1948_ = lean_usize_dec_eq(v___x_1946_, v___x_1947_);
if (v___x_1948_ == 0)
{
lean_object* v___x_1949_; 
v___x_1949_ = l_Lean_Expr_forallE___override(v_binderName_1936_, v_t_1940_, v_b_1941_, v_binderInfo_1937_);
return v___x_1949_;
}
else
{
uint8_t v___x_1950_; 
v___x_1950_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1937_, v_binderInfo_1937_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lean_Expr_forallE___override(v_binderName_1936_, v_t_1940_, v_b_1941_, v_binderInfo_1937_);
return v___x_1951_;
}
else
{
lean_dec_ref(v_b_1941_);
lean_dec_ref(v_t_1940_);
lean_dec(v_binderName_1936_);
lean_inc_ref(v_e_1939_);
return v_e_1939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object* v_binderType_1952_, lean_object* v_binderName_1953_, lean_object* v_binderInfo_1954_, lean_object* v_body_1955_, lean_object* v_e_1956_, lean_object* v_t_1957_, lean_object* v_b_1958_){
_start:
{
uint8_t v_binderInfo_44351__boxed_1959_; lean_object* v_res_1960_; 
v_binderInfo_44351__boxed_1959_ = lean_unbox(v_binderInfo_1954_);
v_res_1960_ = l_Lean_Meta_ExtractLets_extractCore___lam__1(v_binderType_1952_, v_binderName_1953_, v_binderInfo_44351__boxed_1959_, v_body_1955_, v_e_1956_, v_t_1957_, v_b_1958_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_body_1955_);
lean_dec_ref(v_binderType_1952_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object* v_name_1961_, lean_object* v_type_1962_, lean_object* v_val_1963_, lean_object* v_k_1964_, uint8_t v_nondep_1965_, uint8_t v_kind_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v___f_1975_; lean_object* v___x_1976_; 
lean_inc(v___y_1969_);
lean_inc(v___y_1968_);
lean_inc_ref(v___y_1967_);
v___f_1975_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1975_, 0, v_k_1964_);
lean_closure_set(v___f_1975_, 1, v___y_1967_);
lean_closure_set(v___f_1975_, 2, v___y_1968_);
lean_closure_set(v___f_1975_, 3, v___y_1969_);
v___x_1976_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1961_, v_type_1962_, v_val_1963_, v___f_1975_, v_nondep_1965_, v_kind_1966_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
if (lean_obj_tag(v___x_1976_) == 0)
{
return v___x_1976_;
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1984_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1979_ = v___x_1976_;
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1976_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object* v_name_1985_, lean_object* v_type_1986_, lean_object* v_val_1987_, lean_object* v_k_1988_, lean_object* v_nondep_1989_, lean_object* v_kind_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
uint8_t v_nondep_boxed_1999_; uint8_t v_kind_boxed_2000_; lean_object* v_res_2001_; 
v_nondep_boxed_1999_ = lean_unbox(v_nondep_1989_);
v_kind_boxed_2000_ = lean_unbox(v_kind_1990_);
v_res_2001_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_1985_, v_type_1986_, v_val_1987_, v_k_1988_, v_nondep_boxed_1999_, v_kind_boxed_2000_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
lean_dec(v___y_1993_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object* v_msg_2002_){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = l_Lean_instInhabitedExpr;
v___x_2004_ = lean_panic_fn_borrowed(v___x_2003_, v_msg_2002_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object* v_a_2005_, lean_object* v_x_2006_){
_start:
{
if (lean_obj_tag(v_x_2006_) == 0)
{
lean_object* v___x_2007_; 
v___x_2007_ = lean_box(0);
return v___x_2007_;
}
else
{
lean_object* v_key_2008_; lean_object* v_value_2009_; lean_object* v_tail_2010_; uint8_t v___x_2011_; 
v_key_2008_ = lean_ctor_get(v_x_2006_, 0);
v_value_2009_ = lean_ctor_get(v_x_2006_, 1);
v_tail_2010_ = lean_ctor_get(v_x_2006_, 2);
v___x_2011_ = l_Lean_ExprStructEq_beq(v_key_2008_, v_a_2005_);
if (v___x_2011_ == 0)
{
v_x_2006_ = v_tail_2010_;
goto _start;
}
else
{
lean_object* v___x_2013_; 
lean_inc(v_value_2009_);
v___x_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2013_, 0, v_value_2009_);
return v___x_2013_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object* v_a_2014_, lean_object* v_x_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2014_, v_x_2015_);
lean_dec(v_x_2015_);
lean_dec_ref(v_a_2014_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object* v_m_2017_, lean_object* v_a_2018_){
_start:
{
lean_object* v_buckets_2019_; lean_object* v___x_2020_; uint64_t v___x_2021_; uint64_t v___x_2022_; uint64_t v___x_2023_; uint64_t v_fold_2024_; uint64_t v___x_2025_; uint64_t v___x_2026_; uint64_t v___x_2027_; size_t v___x_2028_; size_t v___x_2029_; size_t v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v_buckets_2019_ = lean_ctor_get(v_m_2017_, 1);
v___x_2020_ = lean_array_get_size(v_buckets_2019_);
v___x_2021_ = l_Lean_ExprStructEq_hash(v_a_2018_);
v___x_2022_ = 32ULL;
v___x_2023_ = lean_uint64_shift_right(v___x_2021_, v___x_2022_);
v_fold_2024_ = lean_uint64_xor(v___x_2021_, v___x_2023_);
v___x_2025_ = 16ULL;
v___x_2026_ = lean_uint64_shift_right(v_fold_2024_, v___x_2025_);
v___x_2027_ = lean_uint64_xor(v_fold_2024_, v___x_2026_);
v___x_2028_ = lean_uint64_to_usize(v___x_2027_);
v___x_2029_ = lean_usize_of_nat(v___x_2020_);
v___x_2030_ = ((size_t)1ULL);
v___x_2031_ = lean_usize_sub(v___x_2029_, v___x_2030_);
v___x_2032_ = lean_usize_land(v___x_2028_, v___x_2031_);
v___x_2033_ = lean_array_uget_borrowed(v_buckets_2019_, v___x_2032_);
v___x_2034_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2018_, v___x_2033_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object* v_m_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_2035_, v_a_2036_);
lean_dec_ref(v_a_2036_);
lean_dec_ref(v_m_2035_);
return v_res_2037_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object* v_a_2038_, lean_object* v_x_2039_){
_start:
{
if (lean_obj_tag(v_x_2039_) == 0)
{
uint8_t v___x_2040_; 
v___x_2040_ = 0;
return v___x_2040_;
}
else
{
lean_object* v_key_2041_; lean_object* v_tail_2042_; lean_object* v_fst_2043_; lean_object* v_snd_2044_; lean_object* v_fst_2045_; lean_object* v_snd_2046_; uint8_t v___x_2050_; 
v_key_2041_ = lean_ctor_get(v_x_2039_, 0);
v_tail_2042_ = lean_ctor_get(v_x_2039_, 2);
v_fst_2043_ = lean_ctor_get(v_key_2041_, 0);
v_snd_2044_ = lean_ctor_get(v_key_2041_, 1);
v_fst_2045_ = lean_ctor_get(v_a_2038_, 0);
v_snd_2046_ = lean_ctor_get(v_a_2038_, 1);
v___x_2050_ = lean_unbox(v_fst_2045_);
if (v___x_2050_ == 0)
{
uint8_t v___x_2051_; 
v___x_2051_ = lean_unbox(v_fst_2043_);
if (v___x_2051_ == 0)
{
goto v___jp_2047_;
}
else
{
v_x_2039_ = v_tail_2042_;
goto _start;
}
}
else
{
uint8_t v___x_2053_; 
v___x_2053_ = lean_unbox(v_fst_2043_);
if (v___x_2053_ == 0)
{
v_x_2039_ = v_tail_2042_;
goto _start;
}
else
{
goto v___jp_2047_;
}
}
v___jp_2047_:
{
uint8_t v___x_2048_; 
v___x_2048_ = l_Lean_ExprStructEq_beq(v_snd_2044_, v_snd_2046_);
if (v___x_2048_ == 0)
{
v_x_2039_ = v_tail_2042_;
goto _start;
}
else
{
return v___x_2048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object* v_a_2055_, lean_object* v_x_2056_){
_start:
{
uint8_t v_res_2057_; lean_object* v_r_2058_; 
v_res_2057_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2055_, v_x_2056_);
lean_dec(v_x_2056_);
lean_dec_ref(v_a_2055_);
v_r_2058_ = lean_box(v_res_2057_);
return v_r_2058_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object* v_a_2059_, lean_object* v_b_2060_, lean_object* v_x_2061_){
_start:
{
if (lean_obj_tag(v_x_2061_) == 0)
{
lean_dec(v_b_2060_);
lean_dec_ref(v_a_2059_);
return v_x_2061_;
}
else
{
lean_object* v_key_2062_; lean_object* v_value_2063_; lean_object* v_tail_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2083_; 
v_key_2062_ = lean_ctor_get(v_x_2061_, 0);
v_value_2063_ = lean_ctor_get(v_x_2061_, 1);
v_tail_2064_ = lean_ctor_get(v_x_2061_, 2);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_x_2061_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2066_ = v_x_2061_;
v_isShared_2067_ = v_isSharedCheck_2083_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_tail_2064_);
lean_inc(v_value_2063_);
lean_inc(v_key_2062_);
lean_dec(v_x_2061_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2083_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v_fst_2073_; lean_object* v_snd_2074_; lean_object* v_fst_2075_; lean_object* v_snd_2076_; uint8_t v___x_2080_; 
v_fst_2073_ = lean_ctor_get(v_key_2062_, 0);
v_snd_2074_ = lean_ctor_get(v_key_2062_, 1);
v_fst_2075_ = lean_ctor_get(v_a_2059_, 0);
v_snd_2076_ = lean_ctor_get(v_a_2059_, 1);
v___x_2080_ = lean_unbox(v_fst_2075_);
if (v___x_2080_ == 0)
{
uint8_t v___x_2081_; 
v___x_2081_ = lean_unbox(v_fst_2073_);
if (v___x_2081_ == 0)
{
goto v___jp_2077_;
}
else
{
goto v___jp_2068_;
}
}
else
{
uint8_t v___x_2082_; 
v___x_2082_ = lean_unbox(v_fst_2073_);
if (v___x_2082_ == 0)
{
goto v___jp_2068_;
}
else
{
goto v___jp_2077_;
}
}
v___jp_2068_:
{
lean_object* v___x_2069_; lean_object* v___x_2071_; 
v___x_2069_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2059_, v_b_2060_, v_tail_2064_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 2, v___x_2069_);
v___x_2071_ = v___x_2066_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_key_2062_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_value_2063_);
lean_ctor_set(v_reuseFailAlloc_2072_, 2, v___x_2069_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
v___jp_2077_:
{
uint8_t v___x_2078_; 
v___x_2078_ = l_Lean_ExprStructEq_beq(v_snd_2074_, v_snd_2076_);
if (v___x_2078_ == 0)
{
goto v___jp_2068_;
}
else
{
lean_object* v___x_2079_; 
lean_del_object(v___x_2066_);
lean_dec(v_value_2063_);
lean_dec(v_key_2062_);
v___x_2079_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2079_, 0, v_a_2059_);
lean_ctor_set(v___x_2079_, 1, v_b_2060_);
lean_ctor_set(v___x_2079_, 2, v_tail_2064_);
return v___x_2079_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object* v_x_2084_, lean_object* v_x_2085_){
_start:
{
if (lean_obj_tag(v_x_2085_) == 0)
{
return v_x_2084_;
}
else
{
lean_object* v_key_2086_; lean_object* v_value_2087_; lean_object* v_tail_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2119_; 
v_key_2086_ = lean_ctor_get(v_x_2085_, 0);
v_value_2087_ = lean_ctor_get(v_x_2085_, 1);
v_tail_2088_ = lean_ctor_get(v_x_2085_, 2);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_x_2085_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2090_ = v_x_2085_;
v_isShared_2091_ = v_isSharedCheck_2119_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_tail_2088_);
lean_inc(v_value_2087_);
lean_inc(v_key_2086_);
lean_dec(v_x_2085_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2119_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v_fst_2092_; lean_object* v_snd_2093_; lean_object* v___x_2094_; uint64_t v___y_2096_; uint8_t v___x_2116_; 
v_fst_2092_ = lean_ctor_get(v_key_2086_, 0);
v_snd_2093_ = lean_ctor_get(v_key_2086_, 1);
v___x_2094_ = lean_array_get_size(v_x_2084_);
v___x_2116_ = lean_unbox(v_fst_2092_);
if (v___x_2116_ == 0)
{
uint64_t v___x_2117_; 
v___x_2117_ = 13ULL;
v___y_2096_ = v___x_2117_;
goto v___jp_2095_;
}
else
{
uint64_t v___x_2118_; 
v___x_2118_ = 11ULL;
v___y_2096_ = v___x_2118_;
goto v___jp_2095_;
}
v___jp_2095_:
{
uint64_t v___x_2097_; uint64_t v___x_2098_; uint64_t v___x_2099_; uint64_t v___x_2100_; uint64_t v_fold_2101_; uint64_t v___x_2102_; uint64_t v___x_2103_; uint64_t v___x_2104_; size_t v___x_2105_; size_t v___x_2106_; size_t v___x_2107_; size_t v___x_2108_; size_t v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2097_ = l_Lean_ExprStructEq_hash(v_snd_2093_);
v___x_2098_ = lean_uint64_mix_hash(v___y_2096_, v___x_2097_);
v___x_2099_ = 32ULL;
v___x_2100_ = lean_uint64_shift_right(v___x_2098_, v___x_2099_);
v_fold_2101_ = lean_uint64_xor(v___x_2098_, v___x_2100_);
v___x_2102_ = 16ULL;
v___x_2103_ = lean_uint64_shift_right(v_fold_2101_, v___x_2102_);
v___x_2104_ = lean_uint64_xor(v_fold_2101_, v___x_2103_);
v___x_2105_ = lean_uint64_to_usize(v___x_2104_);
v___x_2106_ = lean_usize_of_nat(v___x_2094_);
v___x_2107_ = ((size_t)1ULL);
v___x_2108_ = lean_usize_sub(v___x_2106_, v___x_2107_);
v___x_2109_ = lean_usize_land(v___x_2105_, v___x_2108_);
v___x_2110_ = lean_array_uget_borrowed(v_x_2084_, v___x_2109_);
lean_inc(v___x_2110_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 2, v___x_2110_);
v___x_2112_ = v___x_2090_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_key_2086_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v_value_2087_);
lean_ctor_set(v_reuseFailAlloc_2115_, 2, v___x_2110_);
v___x_2112_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_array_uset(v_x_2084_, v___x_2109_, v___x_2112_);
v_x_2084_ = v___x_2113_;
v_x_2085_ = v_tail_2088_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object* v_i_2120_, lean_object* v_source_2121_, lean_object* v_target_2122_){
_start:
{
lean_object* v___x_2123_; uint8_t v___x_2124_; 
v___x_2123_ = lean_array_get_size(v_source_2121_);
v___x_2124_ = lean_nat_dec_lt(v_i_2120_, v___x_2123_);
if (v___x_2124_ == 0)
{
lean_dec_ref(v_source_2121_);
lean_dec(v_i_2120_);
return v_target_2122_;
}
else
{
lean_object* v_es_2125_; lean_object* v___x_2126_; lean_object* v_source_2127_; lean_object* v_target_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_es_2125_ = lean_array_fget(v_source_2121_, v_i_2120_);
v___x_2126_ = lean_box(0);
v_source_2127_ = lean_array_fset(v_source_2121_, v_i_2120_, v___x_2126_);
v_target_2128_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_target_2122_, v_es_2125_);
v___x_2129_ = lean_unsigned_to_nat(1u);
v___x_2130_ = lean_nat_add(v_i_2120_, v___x_2129_);
lean_dec(v_i_2120_);
v_i_2120_ = v___x_2130_;
v_source_2121_ = v_source_2127_;
v_target_2122_ = v_target_2128_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object* v_data_2132_){
_start:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v_nbuckets_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2133_ = lean_array_get_size(v_data_2132_);
v___x_2134_ = lean_unsigned_to_nat(2u);
v_nbuckets_2135_ = lean_nat_mul(v___x_2133_, v___x_2134_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = lean_box(0);
v___x_2138_ = lean_mk_array(v_nbuckets_2135_, v___x_2137_);
v___x_2139_ = lean_array_propagate_mark(v_data_2132_, v___x_2138_);
v___x_2140_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v___x_2136_, v_data_2132_, v___x_2139_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object* v_m_2141_, lean_object* v_a_2142_, lean_object* v_b_2143_){
_start:
{
lean_object* v_size_2144_; lean_object* v_buckets_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2196_; 
v_size_2144_ = lean_ctor_get(v_m_2141_, 0);
v_buckets_2145_ = lean_ctor_get(v_m_2141_, 1);
v_isSharedCheck_2196_ = !lean_is_exclusive(v_m_2141_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2147_ = v_m_2141_;
v_isShared_2148_ = v_isSharedCheck_2196_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_buckets_2145_);
lean_inc(v_size_2144_);
lean_dec(v_m_2141_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2196_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v_fst_2149_; lean_object* v_snd_2150_; lean_object* v___x_2151_; uint64_t v___y_2153_; uint8_t v___x_2193_; 
v_fst_2149_ = lean_ctor_get(v_a_2142_, 0);
v_snd_2150_ = lean_ctor_get(v_a_2142_, 1);
v___x_2151_ = lean_array_get_size(v_buckets_2145_);
v___x_2193_ = lean_unbox(v_fst_2149_);
if (v___x_2193_ == 0)
{
uint64_t v___x_2194_; 
v___x_2194_ = 13ULL;
v___y_2153_ = v___x_2194_;
goto v___jp_2152_;
}
else
{
uint64_t v___x_2195_; 
v___x_2195_ = 11ULL;
v___y_2153_ = v___x_2195_;
goto v___jp_2152_;
}
v___jp_2152_:
{
uint64_t v___x_2154_; uint64_t v___x_2155_; uint64_t v___x_2156_; uint64_t v___x_2157_; uint64_t v_fold_2158_; uint64_t v___x_2159_; uint64_t v___x_2160_; uint64_t v___x_2161_; size_t v___x_2162_; size_t v___x_2163_; size_t v___x_2164_; size_t v___x_2165_; size_t v___x_2166_; lean_object* v_bkt_2167_; uint8_t v___x_2168_; 
v___x_2154_ = l_Lean_ExprStructEq_hash(v_snd_2150_);
v___x_2155_ = lean_uint64_mix_hash(v___y_2153_, v___x_2154_);
v___x_2156_ = 32ULL;
v___x_2157_ = lean_uint64_shift_right(v___x_2155_, v___x_2156_);
v_fold_2158_ = lean_uint64_xor(v___x_2155_, v___x_2157_);
v___x_2159_ = 16ULL;
v___x_2160_ = lean_uint64_shift_right(v_fold_2158_, v___x_2159_);
v___x_2161_ = lean_uint64_xor(v_fold_2158_, v___x_2160_);
v___x_2162_ = lean_uint64_to_usize(v___x_2161_);
v___x_2163_ = lean_usize_of_nat(v___x_2151_);
v___x_2164_ = ((size_t)1ULL);
v___x_2165_ = lean_usize_sub(v___x_2163_, v___x_2164_);
v___x_2166_ = lean_usize_land(v___x_2162_, v___x_2165_);
v_bkt_2167_ = lean_array_uget_borrowed(v_buckets_2145_, v___x_2166_);
v___x_2168_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2142_, v_bkt_2167_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2169_; lean_object* v_size_x27_2170_; lean_object* v___x_2171_; lean_object* v_buckets_x27_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; uint8_t v___x_2178_; 
v___x_2169_ = lean_unsigned_to_nat(1u);
v_size_x27_2170_ = lean_nat_add(v_size_2144_, v___x_2169_);
lean_dec(v_size_2144_);
lean_inc(v_bkt_2167_);
v___x_2171_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2171_, 0, v_a_2142_);
lean_ctor_set(v___x_2171_, 1, v_b_2143_);
lean_ctor_set(v___x_2171_, 2, v_bkt_2167_);
v_buckets_x27_2172_ = lean_array_uset(v_buckets_2145_, v___x_2166_, v___x_2171_);
v___x_2173_ = lean_unsigned_to_nat(4u);
v___x_2174_ = lean_nat_mul(v_size_x27_2170_, v___x_2173_);
v___x_2175_ = lean_unsigned_to_nat(3u);
v___x_2176_ = lean_nat_div(v___x_2174_, v___x_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_array_get_size(v_buckets_x27_2172_);
v___x_2178_ = lean_nat_dec_le(v___x_2176_, v___x_2177_);
lean_dec(v___x_2176_);
if (v___x_2178_ == 0)
{
lean_object* v_val_2179_; lean_object* v___x_2181_; 
v_val_2179_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_buckets_x27_2172_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 1, v_val_2179_);
lean_ctor_set(v___x_2147_, 0, v_size_x27_2170_);
v___x_2181_ = v___x_2147_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_size_x27_2170_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v_val_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
else
{
lean_object* v___x_2184_; 
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 1, v_buckets_x27_2172_);
lean_ctor_set(v___x_2147_, 0, v_size_x27_2170_);
v___x_2184_ = v___x_2147_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_size_x27_2170_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v_buckets_x27_2172_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
else
{
lean_object* v___x_2186_; lean_object* v_buckets_x27_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2191_; 
lean_inc(v_bkt_2167_);
v___x_2186_ = lean_box(0);
v_buckets_x27_2187_ = lean_array_uset(v_buckets_2145_, v___x_2166_, v___x_2186_);
v___x_2188_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2142_, v_b_2143_, v_bkt_2167_);
v___x_2189_ = lean_array_uset(v_buckets_x27_2187_, v___x_2166_, v___x_2188_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 1, v___x_2189_);
v___x_2191_ = v___x_2147_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_size_2144_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v___x_2189_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object* v_a_2197_, lean_object* v_x_2198_){
_start:
{
if (lean_obj_tag(v_x_2198_) == 0)
{
lean_object* v___x_2199_; 
v___x_2199_ = lean_box(0);
return v___x_2199_;
}
else
{
lean_object* v_key_2200_; lean_object* v_value_2201_; lean_object* v_tail_2202_; lean_object* v_fst_2203_; lean_object* v_snd_2204_; lean_object* v_fst_2205_; lean_object* v_snd_2206_; uint8_t v___x_2211_; 
v_key_2200_ = lean_ctor_get(v_x_2198_, 0);
v_value_2201_ = lean_ctor_get(v_x_2198_, 1);
v_tail_2202_ = lean_ctor_get(v_x_2198_, 2);
v_fst_2203_ = lean_ctor_get(v_key_2200_, 0);
v_snd_2204_ = lean_ctor_get(v_key_2200_, 1);
v_fst_2205_ = lean_ctor_get(v_a_2197_, 0);
v_snd_2206_ = lean_ctor_get(v_a_2197_, 1);
v___x_2211_ = lean_unbox(v_fst_2205_);
if (v___x_2211_ == 0)
{
uint8_t v___x_2212_; 
v___x_2212_ = lean_unbox(v_fst_2203_);
if (v___x_2212_ == 0)
{
goto v___jp_2207_;
}
else
{
v_x_2198_ = v_tail_2202_;
goto _start;
}
}
else
{
uint8_t v___x_2214_; 
v___x_2214_ = lean_unbox(v_fst_2203_);
if (v___x_2214_ == 0)
{
v_x_2198_ = v_tail_2202_;
goto _start;
}
else
{
goto v___jp_2207_;
}
}
v___jp_2207_:
{
uint8_t v___x_2208_; 
v___x_2208_ = l_Lean_ExprStructEq_beq(v_snd_2204_, v_snd_2206_);
if (v___x_2208_ == 0)
{
v_x_2198_ = v_tail_2202_;
goto _start;
}
else
{
lean_object* v___x_2210_; 
lean_inc(v_value_2201_);
v___x_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_value_2201_);
return v___x_2210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object* v_a_2216_, lean_object* v_x_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2216_, v_x_2217_);
lean_dec(v_x_2217_);
lean_dec_ref(v_a_2216_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object* v_m_2219_, lean_object* v_a_2220_){
_start:
{
lean_object* v_buckets_2221_; lean_object* v_fst_2222_; lean_object* v_snd_2223_; lean_object* v___x_2224_; uint64_t v___y_2226_; uint8_t v___x_2242_; 
v_buckets_2221_ = lean_ctor_get(v_m_2219_, 1);
v_fst_2222_ = lean_ctor_get(v_a_2220_, 0);
v_snd_2223_ = lean_ctor_get(v_a_2220_, 1);
v___x_2224_ = lean_array_get_size(v_buckets_2221_);
v___x_2242_ = lean_unbox(v_fst_2222_);
if (v___x_2242_ == 0)
{
uint64_t v___x_2243_; 
v___x_2243_ = 13ULL;
v___y_2226_ = v___x_2243_;
goto v___jp_2225_;
}
else
{
uint64_t v___x_2244_; 
v___x_2244_ = 11ULL;
v___y_2226_ = v___x_2244_;
goto v___jp_2225_;
}
v___jp_2225_:
{
uint64_t v___x_2227_; uint64_t v___x_2228_; uint64_t v___x_2229_; uint64_t v___x_2230_; uint64_t v_fold_2231_; uint64_t v___x_2232_; uint64_t v___x_2233_; uint64_t v___x_2234_; size_t v___x_2235_; size_t v___x_2236_; size_t v___x_2237_; size_t v___x_2238_; size_t v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2227_ = l_Lean_ExprStructEq_hash(v_snd_2223_);
v___x_2228_ = lean_uint64_mix_hash(v___y_2226_, v___x_2227_);
v___x_2229_ = 32ULL;
v___x_2230_ = lean_uint64_shift_right(v___x_2228_, v___x_2229_);
v_fold_2231_ = lean_uint64_xor(v___x_2228_, v___x_2230_);
v___x_2232_ = 16ULL;
v___x_2233_ = lean_uint64_shift_right(v_fold_2231_, v___x_2232_);
v___x_2234_ = lean_uint64_xor(v_fold_2231_, v___x_2233_);
v___x_2235_ = lean_uint64_to_usize(v___x_2234_);
v___x_2236_ = lean_usize_of_nat(v___x_2224_);
v___x_2237_ = ((size_t)1ULL);
v___x_2238_ = lean_usize_sub(v___x_2236_, v___x_2237_);
v___x_2239_ = lean_usize_land(v___x_2235_, v___x_2238_);
v___x_2240_ = lean_array_uget_borrowed(v_buckets_2221_, v___x_2239_);
v___x_2241_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2220_, v___x_2240_);
return v___x_2241_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object* v_m_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_2245_, v_a_2246_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_m_2245_);
return v_res_2247_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2248_; lean_object* v_dummy_2249_; 
v___x_2248_ = lean_box(0);
v_dummy_2249_ = l_Lean_Expr_sort___override(v___x_2248_);
return v_dummy_2249_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object* v_upperBound_2250_, lean_object* v_fst_2251_, lean_object* v_fvars_2252_, lean_object* v_a_2253_, lean_object* v_b_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_a_2264_; uint8_t v___x_2268_; 
v___x_2268_ = lean_nat_dec_lt(v_a_2253_, v_upperBound_2250_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; 
lean_dec(v_a_2253_);
lean_dec(v_fvars_2252_);
v___x_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2269_, 0, v_b_2254_);
return v___x_2269_;
}
else
{
lean_object* v___x_2270_; lean_object* v___x_2271_; uint8_t v_binderInfo_2272_; uint8_t v___x_2273_; 
v___x_2270_ = l_Lean_Meta_instInhabitedExprParamInfo_default;
v___x_2271_ = lean_array_get_borrowed(v___x_2270_, v_fst_2251_, v_a_2253_);
v_binderInfo_2272_ = lean_ctor_get_uint8(v___x_2271_, sizeof(void*)*2);
v___x_2273_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2272_);
if (v___x_2273_ == 0)
{
v_a_2264_ = v_b_2254_;
goto v___jp_2263_;
}
else
{
lean_object* v___x_2274_; uint8_t v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2274_ = l_Lean_instInhabitedExpr;
v___x_2275_ = 0;
v___x_2276_ = lean_array_get_borrowed(v___x_2274_, v_b_2254_, v_a_2253_);
lean_inc(v___x_2276_);
lean_inc(v_fvars_2252_);
v___x_2277_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2252_, v___x_2276_, v___x_2275_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2279_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = lean_array_set(v_b_2254_, v_a_2253_, v_a_2278_);
v_a_2264_ = v___x_2279_;
goto v___jp_2263_;
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_dec_ref(v_b_2254_);
lean_dec(v_a_2253_);
lean_dec(v_fvars_2252_);
v_a_2280_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2277_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2277_);
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
}
v___jp_2263_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = lean_unsigned_to_nat(1u);
v___x_2266_ = lean_nat_add(v_a_2253_, v___x_2265_);
lean_dec(v_a_2253_);
v_a_2253_ = v___x_2266_;
v_b_2254_ = v_a_2264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object* v_fvars_2288_, size_t v_sz_2289_, size_t v_i_2290_, lean_object* v_bs_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
uint8_t v___x_2300_; 
v___x_2300_ = lean_usize_dec_lt(v_i_2290_, v_sz_2289_);
if (v___x_2300_ == 0)
{
lean_object* v___x_2301_; 
lean_dec(v_fvars_2288_);
v___x_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2301_, 0, v_bs_2291_);
return v___x_2301_;
}
else
{
uint8_t v___x_2302_; lean_object* v_v_2303_; lean_object* v___x_2304_; lean_object* v_bs_x27_2305_; lean_object* v___x_2306_; 
v___x_2302_ = 0;
v_v_2303_ = lean_array_uget(v_bs_2291_, v_i_2290_);
v___x_2304_ = lean_unsigned_to_nat(0u);
v_bs_x27_2305_ = lean_array_uset(v_bs_2291_, v_i_2290_, v___x_2304_);
lean_inc(v_fvars_2288_);
v___x_2306_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2288_, v_v_2303_, v___x_2302_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; size_t v___x_2308_; size_t v___x_2309_; lean_object* v___x_2310_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v___x_2306_, 1);
v___x_2308_ = ((size_t)1ULL);
v___x_2309_ = lean_usize_add(v_i_2290_, v___x_2308_);
v___x_2310_ = lean_array_uset(v_bs_x27_2305_, v_i_2290_, v_a_2307_);
v_i_2290_ = v___x_2309_;
v_bs_2291_ = v___x_2310_;
goto _start;
}
else
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2319_; 
lean_dec_ref(v_bs_x27_2305_);
lean_dec(v_fvars_2288_);
v_a_2312_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2314_ = v___x_2306_;
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___x_2306_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_a_2312_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object* v_fvars_2320_, lean_object* v_f_2321_, lean_object* v_args_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
uint8_t v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = 0;
lean_inc_ref(v_f_2321_);
lean_inc(v_fvars_2320_);
v___x_2332_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2320_, v_f_2321_, v___x_2331_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2332_) == 0)
{
uint8_t v_implicits_2333_; 
v_implicits_2333_ = lean_ctor_get_uint8(v___y_2323_, 2);
if (v_implicits_2333_ == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2335_; 
v_a_2334_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2332_, 1);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___y_2327_);
lean_inc_ref(v___y_2326_);
v___x_2335_ = lean_infer_type(v_f_2321_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v___x_2337_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
v___x_2337_ = l_Lean_Meta_instantiateForallWithParamInfos(v_a_2336_, v_args_2322_, v___x_2331_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v_fst_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
lean_dec_ref_known(v___x_2337_, 1);
v_fst_2339_ = lean_ctor_get(v_a_2338_, 0);
lean_inc(v_fst_2339_);
lean_dec(v_a_2338_);
v___x_2340_ = lean_array_get_size(v_args_2322_);
v___x_2341_ = lean_unsigned_to_nat(0u);
v___x_2342_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v___x_2340_, v_fst_2339_, v_fvars_2320_, v___x_2341_, v_args_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v_fst_2339_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2351_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2345_ = v___x_2342_;
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2342_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2347_ = l_Lean_mkAppN(v_a_2334_, v_a_2343_);
lean_dec(v_a_2343_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v___x_2347_);
v___x_2349_ = v___x_2345_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec(v_a_2334_);
v_a_2352_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2342_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2342_);
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
lean_dec(v_a_2334_);
lean_dec_ref(v_args_2322_);
lean_dec(v_fvars_2320_);
v_a_2360_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2337_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2337_);
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
lean_dec(v_a_2334_);
lean_dec_ref(v_args_2322_);
lean_dec(v_fvars_2320_);
return v___x_2335_;
}
}
else
{
lean_object* v_a_2368_; size_t v_sz_2369_; size_t v___x_2370_; lean_object* v___x_2371_; 
lean_dec_ref(v_f_2321_);
v_a_2368_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2332_, 1);
v_sz_2369_ = lean_array_size(v_args_2322_);
v___x_2370_ = ((size_t)0ULL);
v___x_2371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_2320_, v_sz_2369_, v___x_2370_, v_args_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2380_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2374_ = v___x_2371_;
v_isShared_2375_ = v_isSharedCheck_2380_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2371_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2380_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2376_; lean_object* v___x_2378_; 
v___x_2376_ = l_Lean_mkAppN(v_a_2368_, v_a_2372_);
lean_dec(v_a_2372_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 0, v___x_2376_);
v___x_2378_ = v___x_2374_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
else
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
lean_dec(v_a_2368_);
v_a_2381_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2371_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2371_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_2322_);
lean_dec_ref(v_f_2321_);
lean_dec(v_fvars_2320_);
return v___x_2332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object* v_fvars_2389_, lean_object* v_f_2390_, lean_object* v_args_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(v_fvars_2389_, v_f_2390_, v_args_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object* v_fvars_2401_, lean_object* v_b_2402_, uint8_t v___x_2403_, lean_object* v_mk_2404_, lean_object* v_a_2405_, lean_object* v_x_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
lean_inc_ref(v_x_2406_);
v___x_2415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2415_, 0, v_x_2406_);
lean_ctor_set(v___x_2415_, 1, v_fvars_2401_);
v___x_2416_ = lean_expr_instantiate1(v_b_2402_, v_x_2406_);
v___x_2417_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2415_, v___x_2416_, v___x_2403_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2417_) == 0)
{
uint8_t v_lift_2418_; 
v_lift_2418_ = lean_ctor_get_uint8(v___y_2407_, 10);
if (v_lift_2418_ == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2431_; 
v_a_2419_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2421_ = v___x_2417_;
v_isShared_2422_ = v_isSharedCheck_2431_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2417_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2431_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2429_; 
v___x_2423_ = lean_unsigned_to_nat(1u);
v___x_2424_ = lean_mk_empty_array_with_capacity(v___x_2423_);
v___x_2425_ = lean_array_push(v___x_2424_, v_x_2406_);
v___x_2426_ = lean_expr_abstract(v_a_2419_, v___x_2425_);
lean_dec_ref(v___x_2425_);
lean_dec(v_a_2419_);
v___x_2427_ = lean_apply_2(v_mk_2404_, v_a_2405_, v___x_2426_);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 0, v___x_2427_);
v___x_2429_ = v___x_2421_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v___x_2427_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_a_2432_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2432_);
lean_dec_ref_known(v___x_2417_, 1);
v___x_2433_ = l_Lean_Expr_fvarId_x21(v_x_2406_);
v___x_2434_ = l_Lean_Meta_ExtractLets_flushDecls(v___x_2433_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2448_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2437_ = v___x_2434_;
v_isShared_2438_ = v_isSharedCheck_2448_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2434_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2448_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2439_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_a_2435_, v_a_2432_);
lean_dec(v_a_2435_);
v___x_2440_ = lean_unsigned_to_nat(1u);
v___x_2441_ = lean_mk_empty_array_with_capacity(v___x_2440_);
v___x_2442_ = lean_array_push(v___x_2441_, v_x_2406_);
v___x_2443_ = lean_expr_abstract(v___x_2439_, v___x_2442_);
lean_dec_ref(v___x_2442_);
lean_dec_ref(v___x_2439_);
v___x_2444_ = lean_apply_2(v_mk_2404_, v_a_2405_, v___x_2443_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2444_);
v___x_2446_ = v___x_2437_;
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
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec(v_a_2432_);
lean_dec_ref(v_x_2406_);
lean_dec_ref(v_a_2405_);
lean_dec_ref(v_mk_2404_);
v_a_2449_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2434_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2434_);
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
lean_dec_ref(v_x_2406_);
lean_dec_ref(v_a_2405_);
lean_dec_ref(v_mk_2404_);
return v___x_2417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object* v_fvars_2457_, lean_object* v_b_2458_, lean_object* v___x_2459_, lean_object* v_mk_2460_, lean_object* v_a_2461_, lean_object* v_x_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
uint8_t v___x_44947__boxed_2471_; lean_object* v_res_2472_; 
v___x_44947__boxed_2471_ = lean_unbox(v___x_2459_);
v_res_2472_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(v_fvars_2457_, v_b_2458_, v___x_44947__boxed_2471_, v_mk_2460_, v_a_2461_, v_x_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec_ref(v_b_2458_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object* v_fvars_2473_, lean_object* v_n_2474_, lean_object* v_t_2475_, lean_object* v_b_2476_, uint8_t v_i_2477_, lean_object* v_mk_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
uint8_t v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = 0;
lean_inc(v_fvars_2473_);
v___x_2488_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2473_, v_t_2475_, v___x_2487_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2488_) == 0)
{
uint8_t v_underBinder_2489_; 
v_underBinder_2489_ = lean_ctor_get_uint8(v___y_2479_, 4);
if (v_underBinder_2489_ == 0)
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2498_; 
lean_dec(v_n_2474_);
lean_dec(v_fvars_2473_);
v_a_2490_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2492_ = v___x_2488_;
v_isShared_2493_ = v_isSharedCheck_2498_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2488_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2498_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2494_; lean_object* v___x_2496_; 
v___x_2494_ = lean_apply_2(v_mk_2478_, v_a_2490_, v_b_2476_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 0, v___x_2494_);
v___x_2496_ = v___x_2492_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2500_; lean_object* v___f_2501_; uint8_t v___x_2502_; lean_object* v___x_2503_; 
v_a_2499_ = lean_ctor_get(v___x_2488_, 0);
lean_inc_n(v_a_2499_, 2);
lean_dec_ref_known(v___x_2488_, 1);
v___x_2500_ = lean_box(v___x_2487_);
v___f_2501_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2501_, 0, v_fvars_2473_);
lean_closure_set(v___f_2501_, 1, v_b_2476_);
lean_closure_set(v___f_2501_, 2, v___x_2500_);
lean_closure_set(v___f_2501_, 3, v_mk_2478_);
lean_closure_set(v___f_2501_, 4, v_a_2499_);
v___x_2502_ = 0;
v___x_2503_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_n_2474_, v_i_2477_, v_a_2499_, v___f_2501_, v___x_2502_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2503_;
}
}
else
{
lean_dec_ref(v_mk_2478_);
lean_dec_ref(v_b_2476_);
lean_dec(v_n_2474_);
lean_dec(v_fvars_2473_);
return v___x_2488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object* v_fvars_2504_, lean_object* v_n_2505_, lean_object* v_t_2506_, lean_object* v_b_2507_, lean_object* v_i_2508_, lean_object* v_mk_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
uint8_t v_i_boxed_2518_; lean_object* v_res_2519_; 
v_i_boxed_2518_ = lean_unbox(v_i_2508_);
v_res_2519_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(v_fvars_2504_, v_n_2505_, v_t_2506_, v_b_2507_, v_i_boxed_2518_, v_mk_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object* v_fvars_2520_, lean_object* v_e_2521_, lean_object* v_topLevel_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
uint8_t v_topLevel_boxed_2531_; lean_object* v_res_2532_; 
v_topLevel_boxed_2531_ = lean_unbox(v_topLevel_2522_);
v_res_2532_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2520_, v_e_2521_, v_topLevel_boxed_2531_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
return v_res_2532_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2536_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2));
v___x_2537_ = lean_unsigned_to_nat(27u);
v___x_2538_ = lean_unsigned_to_nat(2119u);
v___x_2539_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1));
v___x_2540_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0));
v___x_2541_ = l_mkPanicMessageWithDecl(v___x_2540_, v___x_2539_, v___x_2538_, v___x_2537_, v___x_2536_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t v_fst_2542_, lean_object* v_fvars_2543_, lean_object* v_b_2544_, uint8_t v___x_2545_, lean_object* v_e_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, uint8_t v_isLet_2549_, uint8_t v_topLevel_2550_, lean_object* v_x_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
if (v_fst_2542_ == 0)
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
lean_inc_ref(v_x_2551_);
v___x_2560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2560_, 0, v_x_2551_);
lean_ctor_set(v___x_2560_, 1, v_fvars_2543_);
v___x_2561_ = lean_expr_instantiate1(v_b_2544_, v_x_2551_);
v___x_2562_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2560_, v___x_2561_, v___x_2545_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2562_) == 0)
{
if (lean_obj_tag(v_e_2546_) == 8)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2600_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2565_ = v___x_2562_;
v_isShared_2566_ = v_isSharedCheck_2600_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2562_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2600_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v_declName_2567_; lean_object* v_type_2568_; lean_object* v_value_2569_; lean_object* v_body_2570_; uint8_t v_nondep_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; size_t v___x_2576_; size_t v___x_2577_; uint8_t v___x_2578_; 
v_declName_2567_ = lean_ctor_get(v_e_2546_, 0);
v_type_2568_ = lean_ctor_get(v_e_2546_, 1);
v_value_2569_ = lean_ctor_get(v_e_2546_, 2);
v_body_2570_ = lean_ctor_get(v_e_2546_, 3);
v_nondep_2571_ = lean_ctor_get_uint8(v_e_2546_, sizeof(void*)*4 + 8);
v___x_2572_ = lean_unsigned_to_nat(1u);
v___x_2573_ = lean_mk_empty_array_with_capacity(v___x_2572_);
v___x_2574_ = lean_array_push(v___x_2573_, v_x_2551_);
v___x_2575_ = lean_expr_abstract(v_a_2563_, v___x_2574_);
lean_dec_ref(v___x_2574_);
lean_dec(v_a_2563_);
v___x_2576_ = lean_ptr_addr(v_type_2568_);
v___x_2577_ = lean_ptr_addr(v_a_2547_);
v___x_2578_ = lean_usize_dec_eq(v___x_2576_, v___x_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; lean_object* v___x_2581_; 
lean_inc(v_declName_2567_);
lean_dec_ref_known(v_e_2546_, 4);
v___x_2579_ = l_Lean_Expr_letE___override(v_declName_2567_, v_a_2547_, v_a_2548_, v___x_2575_, v_nondep_2571_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v___x_2579_);
v___x_2581_ = v___x_2565_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
else
{
size_t v___x_2583_; size_t v___x_2584_; uint8_t v___x_2585_; 
v___x_2583_ = lean_ptr_addr(v_value_2569_);
v___x_2584_ = lean_ptr_addr(v_a_2548_);
v___x_2585_ = lean_usize_dec_eq(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; lean_object* v___x_2588_; 
lean_inc(v_declName_2567_);
lean_dec_ref_known(v_e_2546_, 4);
v___x_2586_ = l_Lean_Expr_letE___override(v_declName_2567_, v_a_2547_, v_a_2548_, v___x_2575_, v_nondep_2571_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v___x_2586_);
v___x_2588_ = v___x_2565_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
else
{
size_t v___x_2590_; size_t v___x_2591_; uint8_t v___x_2592_; 
v___x_2590_ = lean_ptr_addr(v_body_2570_);
v___x_2591_ = lean_ptr_addr(v___x_2575_);
v___x_2592_ = lean_usize_dec_eq(v___x_2590_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2595_; 
lean_inc(v_declName_2567_);
lean_dec_ref_known(v_e_2546_, 4);
v___x_2593_ = l_Lean_Expr_letE___override(v_declName_2567_, v_a_2547_, v_a_2548_, v___x_2575_, v_nondep_2571_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v___x_2593_);
v___x_2595_ = v___x_2565_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
else
{
lean_object* v___x_2598_; 
lean_dec_ref(v___x_2575_);
lean_dec_ref(v_a_2548_);
lean_dec_ref(v_a_2547_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v_e_2546_);
v___x_2598_ = v___x_2565_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_e_2546_);
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
}
}
else
{
lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2609_; 
lean_dec_ref(v_x_2551_);
lean_dec_ref(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec_ref(v_e_2546_);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2609_ == 0)
{
lean_object* v_unused_2610_; 
v_unused_2610_ = lean_ctor_get(v___x_2562_, 0);
lean_dec(v_unused_2610_);
v___x_2602_ = v___x_2562_;
v_isShared_2603_ = v_isSharedCheck_2609_;
goto v_resetjp_2601_;
}
else
{
lean_dec(v___x_2562_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2609_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2607_; 
v___x_2604_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2605_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2604_);
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2605_);
v___x_2607_ = v___x_2602_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2605_);
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
lean_dec_ref(v_x_2551_);
lean_dec_ref(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec_ref(v_e_2546_);
return v___x_2562_;
}
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_dec_ref(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec_ref(v_e_2546_);
v___x_2611_ = l_Lean_Expr_fvarId_x21(v_x_2551_);
v___x_2612_ = l_Lean_FVarId_getDecl___redArg(v___x_2611_, v___y_2555_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v___x_2614_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
v___x_2614_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_a_2613_, v_isLet_2549_, v___y_2552_, v___y_2554_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
lean_dec_ref_known(v___x_2614_, 1);
v___x_2615_ = lean_expr_instantiate1(v_b_2544_, v_x_2551_);
lean_dec_ref(v_x_2551_);
v___x_2616_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2543_, v___x_2615_, v_topLevel_2550_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2616_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec_ref(v_x_2551_);
lean_dec(v_fvars_2543_);
v_a_2617_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2614_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2614_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
lean_dec_ref(v_x_2551_);
lean_dec(v_fvars_2543_);
v_a_2625_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2612_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2612_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object** _args){
lean_object* v_fst_2633_ = _args[0];
lean_object* v_fvars_2634_ = _args[1];
lean_object* v_b_2635_ = _args[2];
lean_object* v___x_2636_ = _args[3];
lean_object* v_e_2637_ = _args[4];
lean_object* v_a_2638_ = _args[5];
lean_object* v_a_2639_ = _args[6];
lean_object* v_isLet_2640_ = _args[7];
lean_object* v_topLevel_2641_ = _args[8];
lean_object* v_x_2642_ = _args[9];
lean_object* v___y_2643_ = _args[10];
lean_object* v___y_2644_ = _args[11];
lean_object* v___y_2645_ = _args[12];
lean_object* v___y_2646_ = _args[13];
lean_object* v___y_2647_ = _args[14];
lean_object* v___y_2648_ = _args[15];
lean_object* v___y_2649_ = _args[16];
lean_object* v___y_2650_ = _args[17];
_start:
{
uint8_t v_fst_45099__boxed_2651_; uint8_t v___x_45100__boxed_2652_; uint8_t v_isLet_boxed_2653_; uint8_t v_topLevel_boxed_2654_; lean_object* v_res_2655_; 
v_fst_45099__boxed_2651_ = lean_unbox(v_fst_2633_);
v___x_45100__boxed_2652_ = lean_unbox(v___x_2636_);
v_isLet_boxed_2653_ = lean_unbox(v_isLet_2640_);
v_topLevel_boxed_2654_ = lean_unbox(v_topLevel_2641_);
v_res_2655_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(v_fst_45099__boxed_2651_, v_fvars_2634_, v_b_2635_, v___x_45100__boxed_2652_, v_e_2637_, v_a_2638_, v_a_2639_, v_isLet_boxed_2653_, v_topLevel_boxed_2654_, v_x_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec_ref(v_b_2635_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object* v_fvars_2656_, lean_object* v_e_2657_, uint8_t v_isLet_2658_, lean_object* v_n_2659_, lean_object* v_t_2660_, lean_object* v_v_2661_, lean_object* v_b_2662_, uint8_t v_topLevel_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_){
_start:
{
lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; uint8_t v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = 0;
lean_inc(v_fvars_2656_);
v___x_2687_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2656_, v_t_2660_, v___x_2686_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2689_; 
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2687_, 1);
lean_inc(v_fvars_2656_);
v___x_2689_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2656_, v_v_2661_, v___x_2686_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2801_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2692_ = v___x_2689_;
v_isShared_2693_ = v_isSharedCheck_2801_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2689_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2801_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; uint8_t v_descend_2741_; uint8_t v_underBinder_2742_; uint8_t v_usedOnly_2743_; uint8_t v_merge_2744_; uint8_t v_lift_2745_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; uint8_t v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; uint8_t v___y_2783_; 
v_descend_2741_ = lean_ctor_get_uint8(v___y_2664_, 3);
v_underBinder_2742_ = lean_ctor_get_uint8(v___y_2664_, 4);
v_usedOnly_2743_ = lean_ctor_get_uint8(v___y_2664_, 5);
v_merge_2744_ = lean_ctor_get_uint8(v___y_2664_, 6);
v_lift_2745_ = lean_ctor_get_uint8(v___y_2664_, 10);
if (v_usedOnly_2743_ == 0)
{
v___y_2783_ = v___x_2686_;
goto v___jp_2782_;
}
else
{
uint8_t v___x_2799_; 
v___x_2799_ = l_Lean_Expr_hasLooseBVars(v_b_2662_);
if (v___x_2799_ == 0)
{
lean_object* v___x_2800_; 
lean_del_object(v___x_2692_);
lean_dec(v_a_2690_);
lean_dec(v_a_2688_);
lean_dec(v_n_2659_);
lean_dec_ref(v_e_2657_);
v___x_2800_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2656_, v_b_2662_, v_topLevel_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
return v___x_2800_;
}
else
{
v___y_2783_ = v___x_2686_;
goto v___jp_2782_;
}
}
v___jp_2694_:
{
if (lean_obj_tag(v_e_2657_) == 8)
{
lean_object* v_declName_2695_; lean_object* v_type_2696_; lean_object* v_value_2697_; lean_object* v_body_2698_; uint8_t v_nondep_2699_; size_t v___x_2700_; size_t v___x_2701_; uint8_t v___x_2702_; 
v_declName_2695_ = lean_ctor_get(v_e_2657_, 0);
v_type_2696_ = lean_ctor_get(v_e_2657_, 1);
v_value_2697_ = lean_ctor_get(v_e_2657_, 2);
v_body_2698_ = lean_ctor_get(v_e_2657_, 3);
v_nondep_2699_ = lean_ctor_get_uint8(v_e_2657_, sizeof(void*)*4 + 8);
v___x_2700_ = lean_ptr_addr(v_type_2696_);
v___x_2701_ = lean_ptr_addr(v_a_2688_);
v___x_2702_ = lean_usize_dec_eq(v___x_2700_, v___x_2701_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; lean_object* v___x_2705_; 
lean_inc(v_declName_2695_);
lean_dec_ref_known(v_e_2657_, 4);
v___x_2703_ = l_Lean_Expr_letE___override(v_declName_2695_, v_a_2688_, v_a_2690_, v_b_2662_, v_nondep_2699_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v___x_2703_);
v___x_2705_ = v___x_2692_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
else
{
size_t v___x_2707_; size_t v___x_2708_; uint8_t v___x_2709_; 
v___x_2707_ = lean_ptr_addr(v_value_2697_);
v___x_2708_ = lean_ptr_addr(v_a_2690_);
v___x_2709_ = lean_usize_dec_eq(v___x_2707_, v___x_2708_);
if (v___x_2709_ == 0)
{
lean_object* v___x_2710_; lean_object* v___x_2712_; 
lean_inc(v_declName_2695_);
lean_dec_ref_known(v_e_2657_, 4);
v___x_2710_ = l_Lean_Expr_letE___override(v_declName_2695_, v_a_2688_, v_a_2690_, v_b_2662_, v_nondep_2699_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v___x_2710_);
v___x_2712_ = v___x_2692_;
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
else
{
size_t v___x_2714_; size_t v___x_2715_; uint8_t v___x_2716_; 
v___x_2714_ = lean_ptr_addr(v_body_2698_);
v___x_2715_ = lean_ptr_addr(v_b_2662_);
v___x_2716_ = lean_usize_dec_eq(v___x_2714_, v___x_2715_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; lean_object* v___x_2719_; 
lean_inc(v_declName_2695_);
lean_dec_ref_known(v_e_2657_, 4);
v___x_2717_ = l_Lean_Expr_letE___override(v_declName_2695_, v_a_2688_, v_a_2690_, v_b_2662_, v_nondep_2699_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v___x_2717_);
v___x_2719_ = v___x_2692_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
else
{
lean_object* v___x_2722_; 
lean_dec(v_a_2690_);
lean_dec(v_a_2688_);
lean_dec_ref(v_b_2662_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v_e_2657_);
v___x_2722_ = v___x_2692_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_e_2657_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
}
else
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2727_; 
lean_dec(v_a_2690_);
lean_dec(v_a_2688_);
lean_dec_ref(v_b_2662_);
lean_dec_ref(v_e_2657_);
v___x_2724_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2725_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2724_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v___x_2725_);
v___x_2727_ = v___x_2692_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v___x_2725_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
v___jp_2729_:
{
uint8_t v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = 0;
v___x_2740_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v___y_2733_, v_a_2688_, v_a_2690_, v___y_2737_, v___x_2686_, v___x_2739_, v___y_2732_, v___y_2738_, v___y_2736_, v___y_2734_, v___y_2731_, v___y_2730_, v___y_2735_);
return v___x_2740_;
}
v___jp_2746_:
{
if (v_underBinder_2742_ == 0)
{
lean_dec_ref(v___y_2754_);
lean_dec(v___y_2748_);
goto v___jp_2694_;
}
else
{
if (v_descend_2741_ == 0)
{
lean_dec_ref(v___y_2754_);
lean_dec(v___y_2748_);
goto v___jp_2694_;
}
else
{
lean_del_object(v___x_2692_);
lean_dec_ref(v_b_2662_);
lean_dec_ref(v_e_2657_);
v___y_2730_ = v___y_2747_;
v___y_2731_ = v___y_2750_;
v___y_2732_ = v___y_2749_;
v___y_2733_ = v___y_2748_;
v___y_2734_ = v___y_2751_;
v___y_2735_ = v___y_2752_;
v___y_2736_ = v___y_2753_;
v___y_2737_ = v___y_2754_;
v___y_2738_ = v___y_2755_;
goto v___jp_2729_;
}
}
}
v___jp_2756_:
{
lean_object* v___x_2765_; 
lean_inc(v_a_2690_);
lean_inc(v_a_2688_);
v___x_2765_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_2656_, v_n_2659_, v_a_2688_, v_a_2690_, v___y_2758_, v___y_2760_, v___y_2763_, v___y_2764_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v_fst_2767_; lean_object* v_snd_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___f_2772_; uint8_t v___x_2773_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v_fst_2767_ = lean_ctor_get(v_a_2766_, 0);
lean_inc_n(v_fst_2767_, 2);
v_snd_2768_ = lean_ctor_get(v_a_2766_, 1);
lean_inc(v_snd_2768_);
lean_dec(v_a_2766_);
v___x_2769_ = lean_box(v___x_2686_);
v___x_2770_ = lean_box(v_isLet_2658_);
v___x_2771_ = lean_box(v_topLevel_2663_);
lean_inc(v_a_2690_);
lean_inc(v_a_2688_);
lean_inc_ref(v_e_2657_);
lean_inc_ref(v_b_2662_);
v___f_2772_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed), 18, 9);
lean_closure_set(v___f_2772_, 0, v_fst_2767_);
lean_closure_set(v___f_2772_, 1, v_fvars_2656_);
lean_closure_set(v___f_2772_, 2, v_b_2662_);
lean_closure_set(v___f_2772_, 3, v___x_2769_);
lean_closure_set(v___f_2772_, 4, v_e_2657_);
lean_closure_set(v___f_2772_, 5, v_a_2688_);
lean_closure_set(v___f_2772_, 6, v_a_2690_);
lean_closure_set(v___f_2772_, 7, v___x_2770_);
lean_closure_set(v___f_2772_, 8, v___x_2771_);
v___x_2773_ = lean_unbox(v_fst_2767_);
lean_dec(v_fst_2767_);
if (v___x_2773_ == 0)
{
v___y_2747_ = v___y_2763_;
v___y_2748_ = v_snd_2768_;
v___y_2749_ = v___y_2758_;
v___y_2750_ = v___y_2762_;
v___y_2751_ = v___y_2761_;
v___y_2752_ = v___y_2764_;
v___y_2753_ = v___y_2760_;
v___y_2754_ = v___f_2772_;
v___y_2755_ = v___y_2759_;
goto v___jp_2746_;
}
else
{
if (v___y_2757_ == 0)
{
lean_del_object(v___x_2692_);
lean_dec_ref(v_b_2662_);
lean_dec_ref(v_e_2657_);
v___y_2730_ = v___y_2763_;
v___y_2731_ = v___y_2762_;
v___y_2732_ = v___y_2758_;
v___y_2733_ = v_snd_2768_;
v___y_2734_ = v___y_2761_;
v___y_2735_ = v___y_2764_;
v___y_2736_ = v___y_2760_;
v___y_2737_ = v___f_2772_;
v___y_2738_ = v___y_2759_;
goto v___jp_2729_;
}
else
{
v___y_2747_ = v___y_2763_;
v___y_2748_ = v_snd_2768_;
v___y_2749_ = v___y_2758_;
v___y_2750_ = v___y_2762_;
v___y_2751_ = v___y_2761_;
v___y_2752_ = v___y_2764_;
v___y_2753_ = v___y_2760_;
v___y_2754_ = v___f_2772_;
v___y_2755_ = v___y_2759_;
goto v___jp_2746_;
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_del_object(v___x_2692_);
lean_dec(v_a_2690_);
lean_dec(v_a_2688_);
lean_dec_ref(v_b_2662_);
lean_dec_ref(v_e_2657_);
lean_dec(v_fvars_2656_);
v_a_2774_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2765_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2765_);
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
v___jp_2782_:
{
if (v_merge_2744_ == 0)
{
v___y_2757_ = v___y_2783_;
v___y_2758_ = v___y_2664_;
v___y_2759_ = v___y_2665_;
v___y_2760_ = v___y_2666_;
v___y_2761_ = v___y_2667_;
v___y_2762_ = v___y_2668_;
v___y_2763_ = v___y_2669_;
v___y_2764_ = v___y_2670_;
goto v___jp_2756_;
}
else
{
lean_object* v___x_2784_; lean_object* v_valueMap_2785_; lean_object* v___x_2786_; 
v___x_2784_ = lean_st_ref_get(v___y_2666_);
v_valueMap_2785_ = lean_ctor_get(v___x_2784_, 2);
lean_inc_ref(v_valueMap_2785_);
lean_dec(v___x_2784_);
v___x_2786_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_valueMap_2785_, v_a_2690_);
lean_dec_ref(v_valueMap_2785_);
if (lean_obj_tag(v___x_2786_) == 1)
{
lean_del_object(v___x_2692_);
lean_dec(v_a_2690_);
lean_dec(v_a_2688_);
lean_dec(v_n_2659_);
lean_dec_ref(v_e_2657_);
if (v_isLet_2658_ == 0)
{
lean_object* v_val_2787_; 
v_val_2787_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_val_2787_);
lean_dec_ref_known(v___x_2786_, 1);
v___y_2673_ = v_val_2787_;
v___y_2674_ = v___y_2664_;
v___y_2675_ = v___y_2665_;
v___y_2676_ = v___y_2666_;
v___y_2677_ = v___y_2667_;
v___y_2678_ = v___y_2668_;
v___y_2679_ = v___y_2669_;
v___y_2680_ = v___y_2670_;
goto v___jp_2672_;
}
else
{
if (v_lift_2745_ == 0)
{
lean_object* v_val_2788_; 
v_val_2788_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_val_2788_);
lean_dec_ref_known(v___x_2786_, 1);
v___y_2673_ = v_val_2788_;
v___y_2674_ = v___y_2664_;
v___y_2675_ = v___y_2665_;
v___y_2676_ = v___y_2666_;
v___y_2677_ = v___y_2667_;
v___y_2678_ = v___y_2668_;
v___y_2679_ = v___y_2669_;
v___y_2680_ = v___y_2670_;
goto v___jp_2672_;
}
else
{
lean_object* v_val_2789_; lean_object* v___x_2790_; 
v_val_2789_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_val_2789_);
lean_dec_ref_known(v___x_2786_, 1);
v___x_2790_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_val_2789_, v___y_2666_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_dec_ref_known(v___x_2790_, 1);
v___y_2673_ = v_val_2789_;
v___y_2674_ = v___y_2664_;
v___y_2675_ = v___y_2665_;
v___y_2676_ = v___y_2666_;
v___y_2677_ = v___y_2667_;
v___y_2678_ = v___y_2668_;
v___y_2679_ = v___y_2669_;
v___y_2680_ = v___y_2670_;
goto v___jp_2672_;
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_dec(v_val_2789_);
lean_dec_ref(v_b_2662_);
lean_dec(v_fvars_2656_);
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2790_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2790_);
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
}
}
else
{
lean_dec(v___x_2786_);
v___y_2757_ = v___y_2783_;
v___y_2758_ = v___y_2664_;
v___y_2759_ = v___y_2665_;
v___y_2760_ = v___y_2666_;
v___y_2761_ = v___y_2667_;
v___y_2762_ = v___y_2668_;
v___y_2763_ = v___y_2669_;
v___y_2764_ = v___y_2670_;
goto v___jp_2756_;
}
}
}
}
}
else
{
lean_dec(v_a_2688_);
lean_dec_ref(v_b_2662_);
lean_dec(v_n_2659_);
lean_dec_ref(v_e_2657_);
lean_dec(v_fvars_2656_);
return v___x_2689_;
}
}
else
{
lean_dec_ref(v_b_2662_);
lean_dec_ref(v_v_2661_);
lean_dec(v_n_2659_);
lean_dec_ref(v_e_2657_);
lean_dec(v_fvars_2656_);
return v___x_2687_;
}
v___jp_2672_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
lean_inc(v___y_2673_);
v___x_2681_ = l_Lean_Expr_fvar___override(v___y_2673_);
v___x_2682_ = lean_expr_instantiate1(v_b_2662_, v___x_2681_);
lean_dec_ref(v___x_2681_);
lean_dec_ref(v_b_2662_);
v___x_2683_ = lean_box(v_topLevel_2663_);
v___x_2684_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___boxed), 11, 3);
lean_closure_set(v___x_2684_, 0, v_fvars_2656_);
lean_closure_set(v___x_2684_, 1, v___x_2682_);
lean_closure_set(v___x_2684_, 2, v___x_2683_);
v___x_2685_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v___y_2673_, v___x_2684_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_);
lean_dec(v___y_2673_);
return v___x_2685_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object* v_fvars_2802_, lean_object* v_struct_2803_, lean_object* v___y_2804_, lean_object* v_typeName_2805_, lean_object* v_idx_2806_, lean_object* v_e_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
uint8_t v___y_44861__boxed_2816_; lean_object* v_res_2817_; 
v___y_44861__boxed_2816_ = lean_unbox(v___y_2804_);
v_res_2817_ = l_Lean_Meta_ExtractLets_extractCore___lam__2(v_fvars_2802_, v_struct_2803_, v___y_44861__boxed_2816_, v_typeName_2805_, v_idx_2806_, v_e_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
return v_res_2817_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2821_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3));
v___x_2822_ = lean_unsigned_to_nat(75u);
v___x_2823_ = lean_unsigned_to_nat(229u);
v___x_2824_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2));
v___x_2825_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1));
v___x_2826_ = l_mkPanicMessageWithDecl(v___x_2825_, v___x_2824_, v___x_2823_, v___x_2822_, v___x_2821_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t v_descend_2827_, lean_object* v_e_2828_, lean_object* v_fvars_2829_, uint8_t v___x_2830_, uint8_t v_topLevel_2831_, uint8_t v___y_2832_, lean_object* v_____r_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v_k_2843_; 
switch(lean_obj_tag(v_e_2828_))
{
case 5:
{
lean_object* v___x_2846_; lean_object* v_dummy_2847_; lean_object* v_nargs_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2846_ = l_Lean_Expr_getAppFn(v_e_2828_);
v_dummy_2847_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0);
v_nargs_2848_ = l_Lean_Expr_getAppNumArgs(v_e_2828_);
lean_inc(v_nargs_2848_);
v___x_2849_ = lean_mk_array(v_nargs_2848_, v_dummy_2847_);
v___x_2850_ = lean_unsigned_to_nat(1u);
v___x_2851_ = lean_nat_sub(v_nargs_2848_, v___x_2850_);
lean_dec(v_nargs_2848_);
lean_inc_ref(v_e_2828_);
v___x_2852_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2828_, v___x_2849_, v___x_2851_);
v___x_2853_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed), 11, 3);
lean_closure_set(v___x_2853_, 0, v_fvars_2829_);
lean_closure_set(v___x_2853_, 1, v___x_2846_);
lean_closure_set(v___x_2853_, 2, v___x_2852_);
v_k_2843_ = v___x_2853_;
goto v___jp_2842_;
}
case 6:
{
lean_object* v_binderName_2854_; lean_object* v_binderType_2855_; lean_object* v_body_2856_; uint8_t v_binderInfo_2857_; lean_object* v___x_2858_; lean_object* v___f_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v_binderName_2854_ = lean_ctor_get(v_e_2828_, 0);
v_binderType_2855_ = lean_ctor_get(v_e_2828_, 1);
v_body_2856_ = lean_ctor_get(v_e_2828_, 2);
v_binderInfo_2857_ = lean_ctor_get_uint8(v_e_2828_, sizeof(void*)*3 + 8);
v___x_2858_ = lean_box(v_binderInfo_2857_);
lean_inc_ref(v_e_2828_);
lean_inc_ref_n(v_body_2856_, 2);
lean_inc_n(v_binderName_2854_, 2);
lean_inc_ref_n(v_binderType_2855_, 2);
v___f_2859_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2859_, 0, v_binderType_2855_);
lean_closure_set(v___f_2859_, 1, v_binderName_2854_);
lean_closure_set(v___f_2859_, 2, v___x_2858_);
lean_closure_set(v___f_2859_, 3, v_body_2856_);
lean_closure_set(v___f_2859_, 4, v_e_2828_);
v___x_2860_ = lean_box(v_binderInfo_2857_);
v___x_2861_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2861_, 0, v_fvars_2829_);
lean_closure_set(v___x_2861_, 1, v_binderName_2854_);
lean_closure_set(v___x_2861_, 2, v_binderType_2855_);
lean_closure_set(v___x_2861_, 3, v_body_2856_);
lean_closure_set(v___x_2861_, 4, v___x_2860_);
lean_closure_set(v___x_2861_, 5, v___f_2859_);
v_k_2843_ = v___x_2861_;
goto v___jp_2842_;
}
case 7:
{
lean_object* v_binderName_2862_; lean_object* v_binderType_2863_; lean_object* v_body_2864_; uint8_t v_binderInfo_2865_; lean_object* v___x_2866_; lean_object* v___f_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v_binderName_2862_ = lean_ctor_get(v_e_2828_, 0);
v_binderType_2863_ = lean_ctor_get(v_e_2828_, 1);
v_body_2864_ = lean_ctor_get(v_e_2828_, 2);
v_binderInfo_2865_ = lean_ctor_get_uint8(v_e_2828_, sizeof(void*)*3 + 8);
v___x_2866_ = lean_box(v_binderInfo_2865_);
lean_inc_ref(v_e_2828_);
lean_inc_ref_n(v_body_2864_, 2);
lean_inc_n(v_binderName_2862_, 2);
lean_inc_ref_n(v_binderType_2863_, 2);
v___f_2867_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2867_, 0, v_binderType_2863_);
lean_closure_set(v___f_2867_, 1, v_binderName_2862_);
lean_closure_set(v___f_2867_, 2, v___x_2866_);
lean_closure_set(v___f_2867_, 3, v_body_2864_);
lean_closure_set(v___f_2867_, 4, v_e_2828_);
v___x_2868_ = lean_box(v_binderInfo_2865_);
v___x_2869_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2869_, 0, v_fvars_2829_);
lean_closure_set(v___x_2869_, 1, v_binderName_2862_);
lean_closure_set(v___x_2869_, 2, v_binderType_2863_);
lean_closure_set(v___x_2869_, 3, v_body_2864_);
lean_closure_set(v___x_2869_, 4, v___x_2868_);
lean_closure_set(v___x_2869_, 5, v___f_2867_);
v_k_2843_ = v___x_2869_;
goto v___jp_2842_;
}
case 8:
{
uint8_t v_nondep_2870_; 
v_nondep_2870_ = lean_ctor_get_uint8(v_e_2828_, sizeof(void*)*4 + 8);
if (v_nondep_2870_ == 0)
{
lean_object* v_declName_2871_; lean_object* v_type_2872_; lean_object* v_value_2873_; lean_object* v_body_2874_; lean_object* v___x_2875_; 
v_declName_2871_ = lean_ctor_get(v_e_2828_, 0);
lean_inc(v_declName_2871_);
v_type_2872_ = lean_ctor_get(v_e_2828_, 1);
lean_inc_ref(v_type_2872_);
v_value_2873_ = lean_ctor_get(v_e_2828_, 2);
lean_inc_ref(v_value_2873_);
v_body_2874_ = lean_ctor_get(v_e_2828_, 3);
lean_inc_ref(v_body_2874_);
v___x_2875_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2829_, v_e_2828_, v___x_2830_, v_declName_2871_, v_type_2872_, v_value_2873_, v_body_2874_, v_topLevel_2831_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
return v___x_2875_;
}
else
{
lean_object* v_declName_2876_; lean_object* v_type_2877_; lean_object* v_value_2878_; lean_object* v_body_2879_; lean_object* v___x_2880_; 
v_declName_2876_ = lean_ctor_get(v_e_2828_, 0);
lean_inc(v_declName_2876_);
v_type_2877_ = lean_ctor_get(v_e_2828_, 1);
lean_inc_ref(v_type_2877_);
v_value_2878_ = lean_ctor_get(v_e_2828_, 2);
lean_inc_ref(v_value_2878_);
v_body_2879_ = lean_ctor_get(v_e_2828_, 3);
lean_inc_ref(v_body_2879_);
v___x_2880_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2829_, v_e_2828_, v___y_2832_, v_declName_2876_, v_type_2877_, v_value_2878_, v_body_2879_, v_topLevel_2831_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
return v___x_2880_;
}
}
case 10:
{
lean_object* v_data_2881_; lean_object* v_expr_2882_; lean_object* v___x_2883_; 
v_data_2881_ = lean_ctor_get(v_e_2828_, 0);
v_expr_2882_ = lean_ctor_get(v_e_2828_, 1);
lean_inc_ref(v_expr_2882_);
v___x_2883_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2829_, v_expr_2882_, v_topLevel_2831_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2898_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2886_ = v___x_2883_;
v_isShared_2887_ = v_isSharedCheck_2898_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2883_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2898_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
size_t v___x_2888_; size_t v___x_2889_; uint8_t v___x_2890_; 
v___x_2888_ = lean_ptr_addr(v_expr_2882_);
v___x_2889_ = lean_ptr_addr(v_a_2884_);
v___x_2890_ = lean_usize_dec_eq(v___x_2888_, v___x_2889_);
if (v___x_2890_ == 0)
{
lean_object* v___x_2891_; lean_object* v___x_2893_; 
lean_inc(v_data_2881_);
lean_dec_ref_known(v_e_2828_, 2);
v___x_2891_ = l_Lean_Expr_mdata___override(v_data_2881_, v_a_2884_);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 0, v___x_2891_);
v___x_2893_ = v___x_2886_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
else
{
lean_object* v___x_2896_; 
lean_dec(v_a_2884_);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 0, v_e_2828_);
v___x_2896_ = v___x_2886_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_e_2828_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2828_, 2);
return v___x_2883_;
}
}
case 11:
{
lean_object* v_typeName_2899_; lean_object* v_idx_2900_; lean_object* v_struct_2901_; lean_object* v___x_2902_; lean_object* v___f_2903_; 
v_typeName_2899_ = lean_ctor_get(v_e_2828_, 0);
v_idx_2900_ = lean_ctor_get(v_e_2828_, 1);
v_struct_2901_ = lean_ctor_get(v_e_2828_, 2);
v___x_2902_ = lean_box(v___y_2832_);
lean_inc_ref(v_e_2828_);
lean_inc(v_idx_2900_);
lean_inc(v_typeName_2899_);
lean_inc_ref(v_struct_2901_);
v___f_2903_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2903_, 0, v_fvars_2829_);
lean_closure_set(v___f_2903_, 1, v_struct_2901_);
lean_closure_set(v___f_2903_, 2, v___x_2902_);
lean_closure_set(v___f_2903_, 3, v_typeName_2899_);
lean_closure_set(v___f_2903_, 4, v_idx_2900_);
lean_closure_set(v___f_2903_, 5, v_e_2828_);
v_k_2843_ = v___f_2903_;
goto v___jp_2842_;
}
default: 
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
lean_dec(v_fvars_2829_);
lean_dec_ref(v_e_2828_);
v___x_2904_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4);
v___x_2905_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v___x_2904_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
return v___x_2905_;
}
}
v___jp_2842_:
{
if (v_descend_2827_ == 0)
{
lean_object* v___x_2844_; 
lean_dec_ref(v_k_2843_);
v___x_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2844_, 0, v_e_2828_);
return v___x_2844_;
}
else
{
lean_object* v___x_2845_; 
lean_dec_ref(v_e_2828_);
lean_inc(v___y_2840_);
lean_inc_ref(v___y_2839_);
lean_inc(v___y_2838_);
lean_inc_ref(v___y_2837_);
lean_inc(v___y_2836_);
lean_inc(v___y_2835_);
lean_inc_ref(v___y_2834_);
v___x_2845_ = lean_apply_8(v_k_2843_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, lean_box(0));
return v___x_2845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object* v_descend_2906_, lean_object* v_e_2907_, lean_object* v_fvars_2908_, lean_object* v___x_2909_, lean_object* v_topLevel_2910_, lean_object* v___y_2911_, lean_object* v_____r_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
uint8_t v_descend_boxed_2921_; uint8_t v___x_45028__boxed_2922_; uint8_t v_topLevel_boxed_2923_; uint8_t v___y_45029__boxed_2924_; lean_object* v_res_2925_; 
v_descend_boxed_2921_ = lean_unbox(v_descend_2906_);
v___x_45028__boxed_2922_ = lean_unbox(v___x_2909_);
v_topLevel_boxed_2923_ = lean_unbox(v_topLevel_2910_);
v___y_45029__boxed_2924_ = lean_unbox(v___y_2911_);
v_res_2925_ = l_Lean_Meta_ExtractLets_extractCore___lam__3(v_descend_boxed_2921_, v_e_2907_, v_fvars_2908_, v___x_45028__boxed_2922_, v_topLevel_boxed_2923_, v___y_45029__boxed_2924_, v_____r_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object* v_fvars_2926_, lean_object* v_e_2927_, uint8_t v_topLevel_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v___y_2938_; lean_object* v_a_2939_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2949_; lean_object* v___y_2950_; uint8_t v___x_2953_; 
v___x_2953_ = l_Lean_Expr_isAtomic(v_e_2927_);
if (v___x_2953_ == 0)
{
uint8_t v_proofs_2954_; uint8_t v_types_2955_; uint8_t v_descend_2956_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___y_2960_; uint8_t v___y_2961_; uint8_t v___y_2978_; 
v_proofs_2954_ = lean_ctor_get_uint8(v___y_2929_, 0);
v_types_2955_ = lean_ctor_get_uint8(v___y_2929_, 1);
v_descend_2956_ = lean_ctor_get_uint8(v___y_2929_, 3);
if (v_descend_2956_ == 0)
{
goto v___jp_3002_;
}
else
{
if (v___x_2953_ == 0)
{
v___y_2978_ = v___x_2953_;
goto v___jp_2977_;
}
else
{
goto v___jp_3002_;
}
}
v___jp_2957_:
{
if (v___y_2961_ == 0)
{
lean_dec_ref(v___y_2959_);
if (v_proofs_2954_ == 0)
{
lean_object* v___x_2962_; 
lean_inc_ref(v_e_2927_);
v___x_2962_ = l_Lean_Meta_isProof(v_e_2927_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; uint8_t v___x_2964_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = lean_unbox(v_a_2963_);
lean_dec(v_a_2963_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
lean_dec_ref(v_e_2927_);
v___x_2965_ = lean_box(0);
lean_inc(v___y_2935_);
lean_inc_ref(v___y_2934_);
lean_inc(v___y_2933_);
lean_inc_ref(v___y_2932_);
lean_inc(v___y_2931_);
lean_inc(v___y_2930_);
lean_inc_ref(v___y_2929_);
v___x_2966_ = lean_apply_9(v___y_2960_, v___x_2965_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, lean_box(0));
v___y_2945_ = v___y_2958_;
v___y_2946_ = v___x_2966_;
goto v___jp_2944_;
}
else
{
lean_dec_ref(v___y_2960_);
v___y_2938_ = v___y_2958_;
v_a_2939_ = v_e_2927_;
goto v___jp_2937_;
}
}
else
{
lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
lean_dec_ref(v___y_2960_);
lean_dec_ref(v___y_2958_);
lean_dec_ref(v_e_2927_);
v_a_2967_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2969_ = v___x_2962_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2962_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_a_2967_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
else
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
lean_dec_ref(v_e_2927_);
v___x_2975_ = lean_box(0);
lean_inc(v___y_2935_);
lean_inc_ref(v___y_2934_);
lean_inc(v___y_2933_);
lean_inc_ref(v___y_2932_);
lean_inc(v___y_2931_);
lean_inc(v___y_2930_);
lean_inc_ref(v___y_2929_);
v___x_2976_ = lean_apply_9(v___y_2960_, v___x_2975_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, lean_box(0));
v___y_2945_ = v___y_2958_;
v___y_2946_ = v___x_2976_;
goto v___jp_2944_;
}
}
else
{
lean_dec_ref(v___y_2960_);
lean_dec_ref(v_e_2927_);
v___y_2949_ = v___y_2958_;
v___y_2950_ = v___y_2959_;
goto v___jp_2948_;
}
}
v___jp_2977_:
{
if (v___y_2978_ == 0)
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2979_ = lean_box(v_topLevel_2928_);
lean_inc_ref(v_e_2927_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v_e_2927_);
v___x_2981_ = lean_st_ref_get(v___y_2930_);
v___x_2982_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v___x_2981_, v___x_2980_);
lean_dec(v___x_2981_);
if (lean_obj_tag(v___x_2982_) == 0)
{
uint8_t v___x_2983_; 
v___x_2983_ = l_Lean_Meta_ExtractLets_containsLet(v_e_2927_);
if (v___x_2983_ == 0)
{
lean_dec(v_fvars_2926_);
v___y_2938_ = v___x_2980_;
v_a_2939_ = v_e_2927_;
goto v___jp_2937_;
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___f_2988_; lean_object* v___x_2989_; lean_object* v___f_2990_; 
v___x_2984_ = lean_box(v_descend_2956_);
v___x_2985_ = lean_box(v___x_2983_);
v___x_2986_ = lean_box(v_topLevel_2928_);
v___x_2987_ = lean_box(v___y_2978_);
lean_inc_ref_n(v_e_2927_, 2);
v___f_2988_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed), 15, 6);
lean_closure_set(v___f_2988_, 0, v___x_2984_);
lean_closure_set(v___f_2988_, 1, v_e_2927_);
lean_closure_set(v___f_2988_, 2, v_fvars_2926_);
lean_closure_set(v___f_2988_, 3, v___x_2985_);
lean_closure_set(v___f_2988_, 4, v___x_2986_);
lean_closure_set(v___f_2988_, 5, v___x_2987_);
v___x_2989_ = lean_box(v_types_2955_);
lean_inc_ref(v___f_2988_);
v___f_2990_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed), 12, 3);
lean_closure_set(v___f_2990_, 0, v___x_2989_);
lean_closure_set(v___f_2990_, 1, v_e_2927_);
lean_closure_set(v___f_2990_, 2, v___f_2988_);
if (v_topLevel_2928_ == 0)
{
v___y_2958_ = v___x_2980_;
v___y_2959_ = v___f_2988_;
v___y_2960_ = v___f_2990_;
v___y_2961_ = v___x_2953_;
goto v___jp_2957_;
}
else
{
uint8_t v___x_2991_; 
v___x_2991_ = l_Lean_Expr_isLet(v_e_2927_);
if (v___x_2991_ == 0)
{
uint8_t v___x_2992_; 
v___x_2992_ = l_Lean_Expr_isMData(v_e_2927_);
v___y_2958_ = v___x_2980_;
v___y_2959_ = v___f_2988_;
v___y_2960_ = v___f_2990_;
v___y_2961_ = v___x_2992_;
goto v___jp_2957_;
}
else
{
lean_dec_ref(v___f_2990_);
lean_dec_ref(v_e_2927_);
v___y_2949_ = v___x_2980_;
v___y_2950_ = v___f_2988_;
goto v___jp_2948_;
}
}
}
}
else
{
lean_object* v_val_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec_ref_known(v___x_2980_, 2);
lean_dec_ref(v_e_2927_);
lean_dec(v_fvars_2926_);
v_val_2993_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2982_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_val_2993_);
lean_dec(v___x_2982_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
lean_ctor_set_tag(v___x_2995_, 0);
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_val_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
else
{
lean_object* v___x_3001_; 
lean_dec(v_fvars_2926_);
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v_e_2927_);
return v___x_3001_;
}
}
v___jp_3002_:
{
if (v_topLevel_2928_ == 0)
{
lean_object* v___x_3003_; 
lean_dec(v_fvars_2926_);
v___x_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3003_, 0, v_e_2927_);
return v___x_3003_;
}
else
{
v___y_2978_ = v___x_2953_;
goto v___jp_2977_;
}
}
}
else
{
lean_object* v___x_3004_; 
lean_dec(v_fvars_2926_);
v___x_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3004_, 0, v_e_2927_);
return v___x_3004_;
}
v___jp_2937_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2940_ = lean_st_ref_take(v___y_2930_);
lean_inc_ref(v_a_2939_);
v___x_2941_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v___x_2940_, v___y_2938_, v_a_2939_);
v___x_2942_ = lean_st_ref_put(v___y_2930_, v___x_2941_);
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v_a_2939_);
return v___x_2943_;
}
v___jp_2944_:
{
if (lean_obj_tag(v___y_2946_) == 0)
{
lean_object* v_a_2947_; 
v_a_2947_ = lean_ctor_get(v___y_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___y_2946_, 1);
v___y_2938_ = v___y_2945_;
v_a_2939_ = v_a_2947_;
goto v___jp_2937_;
}
else
{
lean_dec_ref(v___y_2945_);
return v___y_2946_;
}
}
v___jp_2948_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = lean_box(0);
lean_inc(v___y_2935_);
lean_inc_ref(v___y_2934_);
lean_inc(v___y_2933_);
lean_inc_ref(v___y_2932_);
lean_inc(v___y_2931_);
lean_inc(v___y_2930_);
lean_inc_ref(v___y_2929_);
v___x_2952_ = lean_apply_9(v___y_2950_, v___x_2951_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, lean_box(0));
v___y_2945_ = v___y_2949_;
v___y_2946_ = v___x_2952_;
goto v___jp_2944_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object* v_fvars_3005_, lean_object* v_struct_3006_, uint8_t v___y_3007_, lean_object* v_typeName_3008_, lean_object* v_idx_3009_, lean_object* v_e_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v___x_3019_; 
lean_inc_ref(v_struct_3006_);
v___x_3019_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_3005_, v_struct_3006_, v___y_3007_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3034_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3022_ = v___x_3019_;
v_isShared_3023_ = v_isSharedCheck_3034_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_3019_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3034_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
size_t v___x_3024_; size_t v___x_3025_; uint8_t v___x_3026_; 
v___x_3024_ = lean_ptr_addr(v_struct_3006_);
lean_dec_ref(v_struct_3006_);
v___x_3025_ = lean_ptr_addr(v_a_3020_);
v___x_3026_ = lean_usize_dec_eq(v___x_3024_, v___x_3025_);
if (v___x_3026_ == 0)
{
lean_object* v___x_3027_; lean_object* v___x_3029_; 
lean_dec_ref(v_e_3010_);
v___x_3027_ = l_Lean_Expr_proj___override(v_typeName_3008_, v_idx_3009_, v_a_3020_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 0, v___x_3027_);
v___x_3029_ = v___x_3022_;
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
else
{
lean_object* v___x_3032_; 
lean_dec(v_a_3020_);
lean_dec(v_idx_3009_);
lean_dec(v_typeName_3008_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 0, v_e_3010_);
v___x_3032_ = v___x_3022_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_e_3010_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
}
else
{
lean_dec_ref(v_e_3010_);
lean_dec(v_idx_3009_);
lean_dec(v_typeName_3008_);
lean_dec_ref(v_struct_3006_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object* v_fvars_3035_, lean_object* v_sz_3036_, lean_object* v_i_3037_, lean_object* v_bs_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
size_t v_sz_boxed_3047_; size_t v_i_boxed_3048_; lean_object* v_res_3049_; 
v_sz_boxed_3047_ = lean_unbox_usize(v_sz_3036_);
lean_dec(v_sz_3036_);
v_i_boxed_3048_ = lean_unbox_usize(v_i_3037_);
lean_dec(v_i_3037_);
v_res_3049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_3035_, v_sz_boxed_3047_, v_i_boxed_3048_, v_bs_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3039_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object* v_upperBound_3050_, lean_object* v_fst_3051_, lean_object* v_fvars_3052_, lean_object* v_a_3053_, lean_object* v_b_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3050_, v_fst_3051_, v_fvars_3052_, v_a_3053_, v_b_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec_ref(v_fst_3051_);
lean_dec(v_upperBound_3050_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object* v_fvars_3064_, lean_object* v_e_3065_, lean_object* v_isLet_3066_, lean_object* v_n_3067_, lean_object* v_t_3068_, lean_object* v_v_3069_, lean_object* v_b_3070_, lean_object* v_topLevel_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
uint8_t v_isLet_boxed_3080_; uint8_t v_topLevel_boxed_3081_; lean_object* v_res_3082_; 
v_isLet_boxed_3080_ = lean_unbox(v_isLet_3066_);
v_topLevel_boxed_3081_ = lean_unbox(v_topLevel_3071_);
v_res_3082_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_3064_, v_e_3065_, v_isLet_boxed_3080_, v_n_3067_, v_t_3068_, v_v_3069_, v_b_3070_, v_topLevel_boxed_3081_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec(v___y_3073_);
lean_dec_ref(v___y_3072_);
return v_res_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object* v_00_u03b1_3083_, lean_object* v_name_3084_, lean_object* v_type_3085_, lean_object* v_val_3086_, lean_object* v_k_3087_, uint8_t v_nondep_3088_, uint8_t v_kind_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v___x_3098_; 
v___x_3098_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_3084_, v_type_3085_, v_val_3086_, v_k_3087_, v_nondep_3088_, v_kind_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object* v_00_u03b1_3099_, lean_object* v_name_3100_, lean_object* v_type_3101_, lean_object* v_val_3102_, lean_object* v_k_3103_, lean_object* v_nondep_3104_, lean_object* v_kind_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_){
_start:
{
uint8_t v_nondep_boxed_3114_; uint8_t v_kind_boxed_3115_; lean_object* v_res_3116_; 
v_nondep_boxed_3114_ = lean_unbox(v_nondep_3104_);
v_kind_boxed_3115_ = lean_unbox(v_kind_3105_);
v_res_3116_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(v_00_u03b1_3099_, v_name_3100_, v_type_3101_, v_val_3102_, v_k_3103_, v_nondep_boxed_3114_, v_kind_boxed_3115_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
lean_dec(v___y_3112_);
lean_dec_ref(v___y_3111_);
lean_dec(v___y_3110_);
lean_dec_ref(v___y_3109_);
lean_dec(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object* v_00_u03b2_3117_, lean_object* v_m_3118_, lean_object* v_a_3119_, lean_object* v_b_3120_){
_start:
{
lean_object* v___x_3121_; 
v___x_3121_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v_m_3118_, v_a_3119_, v_b_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object* v_00_u03b2_3122_, lean_object* v_m_3123_, lean_object* v_a_3124_){
_start:
{
lean_object* v___x_3125_; 
v___x_3125_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_3123_, v_a_3124_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object* v_00_u03b2_3126_, lean_object* v_m_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(v_00_u03b2_3126_, v_m_3127_, v_a_3128_);
lean_dec_ref(v_a_3128_);
lean_dec_ref(v_m_3127_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object* v_upperBound_3130_, lean_object* v_fst_3131_, lean_object* v_fvars_3132_, lean_object* v_inst_3133_, lean_object* v_R_3134_, lean_object* v_a_3135_, lean_object* v_b_3136_, lean_object* v_c_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3130_, v_fst_3131_, v_fvars_3132_, v_a_3135_, v_b_3136_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object* v_upperBound_3147_, lean_object* v_fst_3148_, lean_object* v_fvars_3149_, lean_object* v_inst_3150_, lean_object* v_R_3151_, lean_object* v_a_3152_, lean_object* v_b_3153_, lean_object* v_c_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v_res_3163_; 
v_res_3163_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(v_upperBound_3147_, v_fst_3148_, v_fvars_3149_, v_inst_3150_, v_R_3151_, v_a_3152_, v_b_3153_, v_c_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v_fst_3148_);
lean_dec(v_upperBound_3147_);
return v_res_3163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object* v_00_u03b2_3164_, lean_object* v_m_3165_, lean_object* v_a_3166_){
_start:
{
lean_object* v___x_3167_; 
v___x_3167_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_3165_, v_a_3166_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object* v_00_u03b2_3168_, lean_object* v_m_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(v_00_u03b2_3168_, v_m_3169_, v_a_3170_);
lean_dec_ref(v_a_3170_);
lean_dec_ref(v_m_3169_);
return v_res_3171_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object* v_00_u03b2_3172_, lean_object* v_a_3173_, lean_object* v_x_3174_){
_start:
{
uint8_t v___x_3175_; 
v___x_3175_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_3173_, v_x_3174_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3176_, lean_object* v_a_3177_, lean_object* v_x_3178_){
_start:
{
uint8_t v_res_3179_; lean_object* v_r_3180_; 
v_res_3179_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(v_00_u03b2_3176_, v_a_3177_, v_x_3178_);
lean_dec(v_x_3178_);
lean_dec_ref(v_a_3177_);
v_r_3180_ = lean_box(v_res_3179_);
return v_r_3180_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object* v_00_u03b2_3181_, lean_object* v_data_3182_){
_start:
{
lean_object* v___x_3183_; 
v___x_3183_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_data_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object* v_00_u03b2_3184_, lean_object* v_a_3185_, lean_object* v_b_3186_, lean_object* v_x_3187_){
_start:
{
lean_object* v___x_3188_; 
v___x_3188_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_3185_, v_b_3186_, v_x_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object* v_00_u03b2_3189_, lean_object* v_a_3190_, lean_object* v_x_3191_){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_3190_, v_x_3191_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3193_, lean_object* v_a_3194_, lean_object* v_x_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(v_00_u03b2_3193_, v_a_3194_, v_x_3195_);
lean_dec(v_x_3195_);
lean_dec_ref(v_a_3194_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object* v_00_u03b2_3197_, lean_object* v_a_3198_, lean_object* v_x_3199_){
_start:
{
lean_object* v___x_3200_; 
v___x_3200_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_3198_, v_x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object* v_00_u03b2_3201_, lean_object* v_a_3202_, lean_object* v_x_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(v_00_u03b2_3201_, v_a_3202_, v_x_3203_);
lean_dec(v_x_3203_);
lean_dec_ref(v_a_3202_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_3205_, lean_object* v_i_3206_, lean_object* v_source_3207_, lean_object* v_target_3208_){
_start:
{
lean_object* v___x_3209_; 
v___x_3209_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v_i_3206_, v_source_3207_, v_target_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3210_, lean_object* v_x_3211_, lean_object* v_x_3212_){
_start:
{
lean_object* v___x_3213_; 
v___x_3213_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_x_3211_, v_x_3212_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object* v_e_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
lean_object* v___x_3223_; lean_object* v_a_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; lean_object* v___x_3227_; 
v___x_3223_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_3214_, v___y_3219_);
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref(v___x_3223_);
v___x_3225_ = lean_box(0);
v___x_3226_ = 1;
v___x_3227_ = l_Lean_Meta_ExtractLets_extractCore(v___x_3225_, v_a_3224_, v___x_3226_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object* v_e_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v_res_3237_; 
v_res_3237_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_e_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec(v___y_3233_);
lean_dec_ref(v___y_3232_);
lean_dec(v___y_3231_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t v_sz_3238_, size_t v_i_3239_, lean_object* v_bs_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_){
_start:
{
uint8_t v___x_3249_; 
v___x_3249_ = lean_usize_dec_lt(v_i_3239_, v_sz_3238_);
if (v___x_3249_ == 0)
{
lean_object* v___x_3250_; 
v___x_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3250_, 0, v_bs_3240_);
return v___x_3250_;
}
else
{
lean_object* v_v_3251_; lean_object* v___x_3252_; lean_object* v_bs_x27_3253_; lean_object* v___x_3254_; 
v_v_3251_ = lean_array_uget(v_bs_3240_, v_i_3239_);
v___x_3252_ = lean_unsigned_to_nat(0u);
v_bs_x27_3253_ = lean_array_uset(v_bs_3240_, v_i_3239_, v___x_3252_);
v___x_3254_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_v_3251_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; size_t v___x_3256_; size_t v___x_3257_; lean_object* v___x_3258_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
lean_inc(v_a_3255_);
lean_dec_ref_known(v___x_3254_, 1);
v___x_3256_ = ((size_t)1ULL);
v___x_3257_ = lean_usize_add(v_i_3239_, v___x_3256_);
v___x_3258_ = lean_array_uset(v_bs_x27_3253_, v_i_3239_, v_a_3255_);
v_i_3239_ = v___x_3257_;
v_bs_3240_ = v___x_3258_;
goto _start;
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
lean_dec_ref(v_bs_x27_3253_);
v_a_3260_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3262_ = v___x_3254_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v___x_3254_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object* v_sz_3268_, lean_object* v_i_3269_, lean_object* v_bs_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_){
_start:
{
size_t v_sz_boxed_3279_; size_t v_i_boxed_3280_; lean_object* v_res_3281_; 
v_sz_boxed_3279_ = lean_unbox_usize(v_sz_3268_);
lean_dec(v_sz_3268_);
v_i_boxed_3280_ = lean_unbox_usize(v_i_3269_);
lean_dec(v_i_3269_);
v_res_3281_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_boxed_3279_, v_i_boxed_3280_, v_bs_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object* v_es_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___y_3292_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; uint8_t v_merge_3302_; 
v_merge_3302_ = lean_ctor_get_uint8(v___y_3283_, 6);
if (v_merge_3302_ == 0)
{
v___y_3292_ = v___y_3283_;
v___y_3293_ = v___y_3284_;
v___y_3294_ = v___y_3285_;
v___y_3295_ = v___y_3286_;
v___y_3296_ = v___y_3287_;
v___y_3297_ = v___y_3288_;
v___y_3298_ = v___y_3289_;
goto v___jp_3291_;
}
else
{
uint8_t v_useContext_3303_; 
v_useContext_3303_ = lean_ctor_get_uint8(v___y_3283_, 7);
if (v_useContext_3303_ == 0)
{
v___y_3292_ = v___y_3283_;
v___y_3293_ = v___y_3284_;
v___y_3294_ = v___y_3285_;
v___y_3295_ = v___y_3286_;
v___y_3296_ = v___y_3287_;
v___y_3297_ = v___y_3288_;
v___y_3298_ = v___y_3289_;
goto v___jp_3291_;
}
else
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Lean_Meta_ExtractLets_initializeValueMap(v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_dec_ref_known(v___x_3304_, 1);
v___y_3292_ = v___y_3283_;
v___y_3293_ = v___y_3284_;
v___y_3294_ = v___y_3285_;
v___y_3295_ = v___y_3286_;
v___y_3296_ = v___y_3287_;
v___y_3297_ = v___y_3288_;
v___y_3298_ = v___y_3289_;
goto v___jp_3291_;
}
else
{
lean_object* v_a_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3312_; 
lean_dec_ref(v_es_3282_);
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3307_ = v___x_3304_;
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_a_3305_);
lean_dec(v___x_3304_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3310_; 
if (v_isShared_3308_ == 0)
{
v___x_3310_ = v___x_3307_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3305_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
}
}
v___jp_3291_:
{
size_t v_sz_3299_; size_t v___x_3300_; lean_object* v___x_3301_; 
v_sz_3299_ = lean_array_size(v_es_3282_);
v___x_3300_ = ((size_t)0ULL);
v___x_3301_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_3299_, v___x_3300_, v_es_3282_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
return v___x_3301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object* v_es_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l_Lean_Meta_ExtractLets_extract(v_es_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
lean_dec(v___y_3320_);
lean_dec_ref(v___y_3319_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object* v_decls_3323_, lean_object* v_x_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_){
_start:
{
lean_object* v___x_3330_; 
v___x_3330_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_3323_, v_x_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_);
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3330_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
v_a_3339_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___x_3330_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3330_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object* v_decls_3347_, lean_object* v_x_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v_res_3354_; 
v_res_3354_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3347_, v_x_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
lean_dec(v___y_3352_);
lean_dec_ref(v___y_3351_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object* v_00_u03b1_3355_, lean_object* v_decls_3356_, lean_object* v_x_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v___x_3363_; 
v___x_3363_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3356_, v_x_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
return v___x_3363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object* v_00_u03b1_3364_, lean_object* v_decls_3365_, lean_object* v_x_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(v_00_u03b1_3364_, v_decls_3365_, v_x_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3369_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3367_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t v_sz_3373_, size_t v_i_3374_, lean_object* v_bs_3375_){
_start:
{
uint8_t v___x_3376_; 
v___x_3376_ = lean_usize_dec_lt(v_i_3374_, v_sz_3373_);
if (v___x_3376_ == 0)
{
return v_bs_3375_;
}
else
{
lean_object* v_v_3377_; lean_object* v___x_3378_; lean_object* v_bs_x27_3379_; lean_object* v___x_3380_; size_t v___x_3381_; size_t v___x_3382_; lean_object* v___x_3383_; 
v_v_3377_ = lean_array_uget(v_bs_3375_, v_i_3374_);
v___x_3378_ = lean_unsigned_to_nat(0u);
v_bs_x27_3379_ = lean_array_uset(v_bs_3375_, v_i_3374_, v___x_3378_);
v___x_3380_ = l_Lean_LocalDecl_fvarId(v_v_3377_);
lean_dec(v_v_3377_);
v___x_3381_ = ((size_t)1ULL);
v___x_3382_ = lean_usize_add(v_i_3374_, v___x_3381_);
v___x_3383_ = lean_array_uset(v_bs_x27_3379_, v_i_3374_, v___x_3380_);
v_i_3374_ = v___x_3382_;
v_bs_3375_ = v___x_3383_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object* v_sz_3385_, lean_object* v_i_3386_, lean_object* v_bs_3387_){
_start:
{
size_t v_sz_boxed_3388_; size_t v_i_boxed_3389_; lean_object* v_res_3390_; 
v_sz_boxed_3388_ = lean_unbox_usize(v_sz_3385_);
lean_dec(v_sz_3385_);
v_i_boxed_3389_ = lean_unbox_usize(v_i_3386_);
lean_dec(v_i_3386_);
v_res_3390_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_boxed_3388_, v_i_boxed_3389_, v_bs_3387_);
return v_res_3390_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3391_ = lean_box(0);
v___x_3392_ = lean_unsigned_to_nat(16u);
v___x_3393_ = lean_mk_array(v___x_3392_, v___x_3391_);
return v___x_3393_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3394_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0);
v___x_3395_ = lean_unsigned_to_nat(0u);
v___x_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
lean_ctor_set(v___x_3396_, 1, v___x_3394_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object* v_es_3397_, lean_object* v_givenNames_3398_, lean_object* v_k_3399_, lean_object* v_config_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3406_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3407_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3408_, 0, v_givenNames_3398_);
lean_ctor_set(v___x_3408_, 1, v___x_3407_);
lean_ctor_set(v___x_3408_, 2, v___x_3406_);
v___x_3409_ = lean_st_mk_ref(v___x_3408_);
v___x_3410_ = lean_st_mk_ref(v___x_3406_);
v___x_3411_ = l_Lean_Meta_ExtractLets_extract(v_es_3397_, v_config_3400_, v___x_3410_, v___x_3409_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v_givenNames_3415_; lean_object* v_decls_3416_; size_t v_sz_3417_; size_t v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; size_t v_sz_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3413_ = lean_st_ref_get(v___x_3410_);
lean_dec(v___x_3410_);
lean_dec(v___x_3413_);
v___x_3414_ = lean_st_ref_get(v___x_3409_);
lean_dec(v___x_3409_);
v_givenNames_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_givenNames_3415_);
v_decls_3416_ = lean_ctor_get(v___x_3414_, 1);
lean_inc_ref(v_decls_3416_);
lean_dec(v___x_3414_);
v_sz_3417_ = lean_array_size(v_decls_3416_);
v___x_3418_ = ((size_t)0ULL);
v___x_3419_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_3417_, v___x_3418_, v_decls_3416_);
lean_inc_ref(v___x_3419_);
v___x_3420_ = lean_array_to_list(v___x_3419_);
v_sz_3421_ = lean_array_size(v___x_3419_);
v___x_3422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_3421_, v___x_3418_, v___x_3419_);
v___x_3423_ = lean_apply_3(v_k_3399_, v___x_3422_, v_a_3412_, v_givenNames_3415_);
v___x_3424_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v___x_3420_, v___x_3423_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_);
return v___x_3424_;
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_dec(v___x_3410_);
lean_dec(v___x_3409_);
lean_dec_ref(v_k_3399_);
v_a_3425_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3411_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3411_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object* v_es_3433_, lean_object* v_givenNames_3434_, lean_object* v_k_3435_, lean_object* v_config_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
lean_object* v_res_3442_; 
v_res_3442_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3433_, v_givenNames_3434_, v_k_3435_, v_config_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec_ref(v_config_3436_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object* v_00_u03b1_3443_, lean_object* v_es_3444_, lean_object* v_givenNames_3445_, lean_object* v_k_3446_, lean_object* v_config_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3444_, v_givenNames_3445_, v_k_3446_, v_config_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object* v_00_u03b1_3454_, lean_object* v_es_3455_, lean_object* v_givenNames_3456_, lean_object* v_k_3457_, lean_object* v_config_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(v_00_u03b1_3454_, v_es_3455_, v_givenNames_3456_, v_k_3457_, v_config_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec(v___y_3460_);
lean_dec_ref(v___y_3459_);
lean_dec_ref(v_config_3458_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object* v_k_3465_, lean_object* v_runInBase_3466_, lean_object* v_b_3467_, lean_object* v_c_3468_, lean_object* v_d_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3475_ = lean_apply_3(v_k_3465_, v_b_3467_, v_c_3468_, v_d_3469_);
lean_inc(v___y_3473_);
lean_inc_ref(v___y_3472_);
lean_inc(v___y_3471_);
lean_inc_ref(v___y_3470_);
v___x_3476_ = lean_apply_7(v_runInBase_3466_, lean_box(0), v___x_3475_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_, lean_box(0));
return v___x_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object* v_k_3477_, lean_object* v_runInBase_3478_, lean_object* v_b_3479_, lean_object* v_c_3480_, lean_object* v_d_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_){
_start:
{
lean_object* v_res_3487_; 
v_res_3487_ = l_Lean_Meta_extractLets___redArg___lam__0(v_k_3477_, v_runInBase_3478_, v_b_3479_, v_c_3480_, v_d_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_);
lean_dec(v___y_3485_);
lean_dec_ref(v___y_3484_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object* v_k_3488_, lean_object* v_es_3489_, lean_object* v_givenNames_3490_, lean_object* v_config_3491_, lean_object* v_runInBase_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v___f_3498_; lean_object* v___x_3499_; 
v___f_3498_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3498_, 0, v_k_3488_);
lean_closure_set(v___f_3498_, 1, v_runInBase_3492_);
v___x_3499_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3489_, v_givenNames_3490_, v___f_3498_, v_config_3491_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_);
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object* v_k_3500_, lean_object* v_es_3501_, lean_object* v_givenNames_3502_, lean_object* v_config_3503_, lean_object* v_runInBase_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_){
_start:
{
lean_object* v_res_3510_; 
v_res_3510_ = l_Lean_Meta_extractLets___redArg___lam__1(v_k_3500_, v_es_3501_, v_givenNames_3502_, v_config_3503_, v_runInBase_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec_ref(v_config_3503_);
return v_res_3510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object* v_inst_3511_, lean_object* v_inst_3512_, lean_object* v_es_3513_, lean_object* v_givenNames_3514_, lean_object* v_k_3515_, lean_object* v_config_3516_){
_start:
{
lean_object* v_toBind_3517_; lean_object* v_liftWith_3518_; lean_object* v_restoreM_3519_; lean_object* v___f_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v_toBind_3517_ = lean_ctor_get(v_inst_3511_, 1);
lean_inc(v_toBind_3517_);
lean_dec_ref(v_inst_3511_);
v_liftWith_3518_ = lean_ctor_get(v_inst_3512_, 0);
lean_inc(v_liftWith_3518_);
v_restoreM_3519_ = lean_ctor_get(v_inst_3512_, 1);
lean_inc(v_restoreM_3519_);
lean_dec_ref(v_inst_3512_);
v___f_3520_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3520_, 0, v_k_3515_);
lean_closure_set(v___f_3520_, 1, v_es_3513_);
lean_closure_set(v___f_3520_, 2, v_givenNames_3514_);
lean_closure_set(v___f_3520_, 3, v_config_3516_);
v___x_3521_ = lean_apply_2(v_liftWith_3518_, lean_box(0), v___f_3520_);
v___x_3522_ = lean_apply_1(v_restoreM_3519_, lean_box(0));
v___x_3523_ = lean_apply_4(v_toBind_3517_, lean_box(0), lean_box(0), v___x_3521_, v___x_3522_);
return v___x_3523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object* v_m_3524_, lean_object* v_00_u03b1_3525_, lean_object* v_inst_3526_, lean_object* v_inst_3527_, lean_object* v_es_3528_, lean_object* v_givenNames_3529_, lean_object* v_k_3530_, lean_object* v_config_3531_){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = l_Lean_Meta_extractLets___redArg(v_inst_3526_, v_inst_3527_, v_es_3528_, v_givenNames_3529_, v_k_3530_, v_config_3531_);
return v___x_3532_;
}
}
static lean_object* _init_l_Lean_Meta_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3533_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3534_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3535_ = lean_box(0);
v___x_3536_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
lean_ctor_set(v___x_3536_, 1, v___x_3534_);
lean_ctor_set(v___x_3536_, 2, v___x_3533_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object* v_e_3537_, lean_object* v_config_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_){
_start:
{
uint8_t v_proofs_3544_; uint8_t v_types_3545_; uint8_t v_implicits_3546_; uint8_t v_descend_3547_; uint8_t v_underBinder_3548_; uint8_t v_usedOnly_3549_; uint8_t v_merge_3550_; uint8_t v_useContext_3551_; uint8_t v_preserveBinderNames_3552_; uint8_t v_lift_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3592_; 
v_proofs_3544_ = lean_ctor_get_uint8(v_config_3538_, 0);
v_types_3545_ = lean_ctor_get_uint8(v_config_3538_, 1);
v_implicits_3546_ = lean_ctor_get_uint8(v_config_3538_, 2);
v_descend_3547_ = lean_ctor_get_uint8(v_config_3538_, 3);
v_underBinder_3548_ = lean_ctor_get_uint8(v_config_3538_, 4);
v_usedOnly_3549_ = lean_ctor_get_uint8(v_config_3538_, 5);
v_merge_3550_ = lean_ctor_get_uint8(v_config_3538_, 6);
v_useContext_3551_ = lean_ctor_get_uint8(v_config_3538_, 7);
v_preserveBinderNames_3552_ = lean_ctor_get_uint8(v_config_3538_, 9);
v_lift_3553_ = lean_ctor_get_uint8(v_config_3538_, 10);
v_isSharedCheck_3592_ = !lean_is_exclusive(v_config_3538_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3555_ = v_config_3538_;
v_isShared_3556_ = v_isSharedCheck_3592_;
goto v_resetjp_3554_;
}
else
{
lean_dec(v_config_3538_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3592_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; uint8_t v___x_3561_; lean_object* v___x_3563_; 
v___x_3557_ = l_Lean_instInhabitedExpr;
v___x_3558_ = lean_unsigned_to_nat(1u);
v___x_3559_ = lean_mk_empty_array_with_capacity(v___x_3558_);
v___x_3560_ = lean_array_push(v___x_3559_, v_e_3537_);
v___x_3561_ = 1;
if (v_isShared_3556_ == 0)
{
v___x_3563_ = v___x_3555_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 0, v_proofs_3544_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 1, v_types_3545_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 2, v_implicits_3546_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 3, v_descend_3547_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 4, v_underBinder_3548_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 5, v_usedOnly_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 6, v_merge_3550_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 7, v_useContext_3551_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 9, v_preserveBinderNames_3552_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, 10, v_lift_3553_);
v___x_3563_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
lean_ctor_set_uint8(v___x_3563_, 8, v___x_3561_);
v___x_3564_ = lean_unsigned_to_nat(0u);
v___x_3565_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3566_ = lean_obj_once(&l_Lean_Meta_liftLets___closed__0, &l_Lean_Meta_liftLets___closed__0_once, _init_l_Lean_Meta_liftLets___closed__0);
v___x_3567_ = lean_st_mk_ref(v___x_3566_);
v___x_3568_ = lean_st_mk_ref(v___x_3565_);
v___x_3569_ = l_Lean_Meta_ExtractLets_extract(v___x_3560_, v___x_3563_, v___x_3568_, v___x_3567_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
lean_dec_ref(v___x_3563_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3582_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3572_ = v___x_3569_;
v_isShared_3573_ = v_isSharedCheck_3582_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3569_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3582_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v_decls_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3580_; 
v___x_3574_ = lean_st_ref_get(v___x_3568_);
lean_dec(v___x_3568_);
lean_dec(v___x_3574_);
v___x_3575_ = lean_st_ref_get(v___x_3567_);
lean_dec(v___x_3567_);
v_decls_3576_ = lean_ctor_get(v___x_3575_, 1);
lean_inc_ref(v_decls_3576_);
lean_dec(v___x_3575_);
v___x_3577_ = lean_array_get(v___x_3557_, v_a_3570_, v___x_3564_);
lean_dec(v_a_3570_);
v___x_3578_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_3576_, v___x_3577_);
lean_dec_ref(v_decls_3576_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set(v___x_3572_, 0, v___x_3578_);
v___x_3580_ = v___x_3572_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3578_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec(v___x_3568_);
lean_dec(v___x_3567_);
v_a_3583_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3569_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3569_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object* v_e_3593_, lean_object* v_config_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l_Lean_Meta_liftLets(v_e_3593_, v_config_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec(v___y_3596_);
lean_dec_ref(v___y_3595_);
return v_res_3600_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1(void){
_start:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3602_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0));
v___x_3603_ = l_Lean_stringToMessageData(v___x_3602_);
return v___x_3603_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2(void){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3604_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1);
v___x_3605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3604_);
return v___x_3605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object* v_tactic_3606_, lean_object* v_mvarId_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3613_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2);
v___x_3614_ = l_Lean_Meta_throwTacticEx___redArg(v_tactic_3606_, v_mvarId_3607_, v___x_3613_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
return v___x_3614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object* v_tactic_3615_, lean_object* v_mvarId_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3615_, v_mvarId_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object* v_00_u03b1_3623_, lean_object* v_tactic_3624_, lean_object* v_mvarId_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v___x_3631_; 
v___x_3631_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3624_, v_mvarId_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object* v_00_u03b1_3632_, lean_object* v_tactic_3633_, lean_object* v_mvarId_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(v_00_u03b1_3632_, v_tactic_3633_, v_mvarId_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
lean_dec(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec(v___y_3636_);
lean_dec_ref(v___y_3635_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object* v_k_3641_, lean_object* v_b_3642_, lean_object* v_c_3643_, lean_object* v_d_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
lean_object* v___x_3650_; 
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc_ref(v___y_3645_);
v___x_3650_ = lean_apply_8(v_k_3641_, v_b_3642_, v_c_3643_, v_d_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, lean_box(0));
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object* v_k_3651_, lean_object* v_b_3652_, lean_object* v_c_3653_, lean_object* v_d_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(v_k_3651_, v_b_3652_, v_c_3653_, v_d_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object* v_es_3661_, lean_object* v_givenNames_3662_, lean_object* v_k_3663_, lean_object* v_config_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v___f_3670_; lean_object* v___x_3671_; 
v___f_3670_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3670_, 0, v_k_3663_);
v___x_3671_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3661_, v_givenNames_3662_, v___f_3670_, v_config_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object* v_es_3688_, lean_object* v_givenNames_3689_, lean_object* v_k_3690_, lean_object* v_config_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3688_, v_givenNames_3689_, v_k_3690_, v_config_3691_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_);
lean_dec(v___y_3695_);
lean_dec_ref(v___y_3694_);
lean_dec(v___y_3693_);
lean_dec_ref(v___y_3692_);
lean_dec_ref(v_config_3691_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object* v_00_u03b1_3698_, lean_object* v_es_3699_, lean_object* v_givenNames_3700_, lean_object* v_k_3701_, lean_object* v_config_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3699_, v_givenNames_3700_, v_k_3701_, v_config_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object* v_00_u03b1_3709_, lean_object* v_es_3710_, lean_object* v_givenNames_3711_, lean_object* v_k_3712_, lean_object* v_config_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(v_00_u03b1_3709_, v_es_3710_, v_givenNames_3711_, v_k_3712_, v_config_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec_ref(v_config_3713_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object* v_mvarId_3720_, lean_object* v_x_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
lean_object* v___x_3727_; 
v___x_3727_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3720_, v_x_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
v_a_3728_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3730_ = v___x_3727_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___x_3727_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
else
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
v_a_3736_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3738_ = v___x_3727_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v___x_3727_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_a_3736_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object* v_mvarId_3744_, lean_object* v_x_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3744_, v_x_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object* v_00_u03b1_3752_, lean_object* v_mvarId_3753_, lean_object* v_x_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_){
_start:
{
lean_object* v___x_3760_; 
v___x_3760_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3753_, v_x_3754_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object* v_00_u03b1_3761_, lean_object* v_mvarId_3762_, lean_object* v_x_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_){
_start:
{
lean_object* v_res_3769_; 
v_res_3769_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(v_00_u03b1_3761_, v_mvarId_3762_, v_x_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_);
lean_dec(v___y_3767_);
lean_dec_ref(v___y_3766_);
lean_dec(v___y_3765_);
lean_dec_ref(v___y_3764_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_3770_, lean_object* v_x_3771_, lean_object* v_x_3772_, lean_object* v_x_3773_){
_start:
{
lean_object* v_ks_3774_; lean_object* v_vs_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3799_; 
v_ks_3774_ = lean_ctor_get(v_x_3770_, 0);
v_vs_3775_ = lean_ctor_get(v_x_3770_, 1);
v_isSharedCheck_3799_ = !lean_is_exclusive(v_x_3770_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3777_ = v_x_3770_;
v_isShared_3778_ = v_isSharedCheck_3799_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_vs_3775_);
lean_inc(v_ks_3774_);
lean_dec(v_x_3770_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3799_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3779_; uint8_t v___x_3780_; 
v___x_3779_ = lean_array_get_size(v_ks_3774_);
v___x_3780_ = lean_nat_dec_lt(v_x_3771_, v___x_3779_);
if (v___x_3780_ == 0)
{
lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3784_; 
lean_dec(v_x_3771_);
v___x_3781_ = lean_array_push(v_ks_3774_, v_x_3772_);
v___x_3782_ = lean_array_push(v_vs_3775_, v_x_3773_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 1, v___x_3782_);
lean_ctor_set(v___x_3777_, 0, v___x_3781_);
v___x_3784_ = v___x_3777_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v___x_3781_);
lean_ctor_set(v_reuseFailAlloc_3785_, 1, v___x_3782_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
else
{
lean_object* v_k_x27_3786_; uint8_t v___x_3787_; 
v_k_x27_3786_ = lean_array_fget_borrowed(v_ks_3774_, v_x_3771_);
v___x_3787_ = l_Lean_instBEqMVarId_beq(v_x_3772_, v_k_x27_3786_);
if (v___x_3787_ == 0)
{
lean_object* v___x_3789_; 
if (v_isShared_3778_ == 0)
{
v___x_3789_ = v___x_3777_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_ks_3774_);
lean_ctor_set(v_reuseFailAlloc_3793_, 1, v_vs_3775_);
v___x_3789_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3790_ = lean_unsigned_to_nat(1u);
v___x_3791_ = lean_nat_add(v_x_3771_, v___x_3790_);
lean_dec(v_x_3771_);
v_x_3770_ = v___x_3789_;
v_x_3771_ = v___x_3791_;
goto _start;
}
}
else
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3797_; 
v___x_3794_ = lean_array_fset(v_ks_3774_, v_x_3771_, v_x_3772_);
v___x_3795_ = lean_array_fset(v_vs_3775_, v_x_3771_, v_x_3773_);
lean_dec(v_x_3771_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 1, v___x_3795_);
lean_ctor_set(v___x_3777_, 0, v___x_3794_);
v___x_3797_ = v___x_3777_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3794_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v___x_3795_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_n_3800_, lean_object* v_k_3801_, lean_object* v_v_3802_){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = lean_unsigned_to_nat(0u);
v___x_3804_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_n_3800_, v___x_3803_, v_k_3801_, v_v_3802_);
return v___x_3804_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3805_; 
v___x_3805_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object* v_x_3806_, size_t v_x_3807_, size_t v_x_3808_, lean_object* v_x_3809_, lean_object* v_x_3810_){
_start:
{
if (lean_obj_tag(v_x_3806_) == 0)
{
lean_object* v_es_3811_; size_t v___x_3812_; size_t v___x_3813_; lean_object* v_j_3814_; lean_object* v___x_3815_; uint8_t v___x_3816_; 
v_es_3811_ = lean_ctor_get(v_x_3806_, 0);
v___x_3812_ = ((size_t)31ULL);
v___x_3813_ = lean_usize_land(v_x_3807_, v___x_3812_);
v_j_3814_ = lean_usize_to_nat(v___x_3813_);
v___x_3815_ = lean_array_get_size(v_es_3811_);
v___x_3816_ = lean_nat_dec_lt(v_j_3814_, v___x_3815_);
if (v___x_3816_ == 0)
{
lean_dec(v_j_3814_);
lean_dec(v_x_3810_);
lean_dec(v_x_3809_);
return v_x_3806_;
}
else
{
lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3855_; 
lean_inc_ref(v_es_3811_);
v_isSharedCheck_3855_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3855_ == 0)
{
lean_object* v_unused_3856_; 
v_unused_3856_ = lean_ctor_get(v_x_3806_, 0);
lean_dec(v_unused_3856_);
v___x_3818_ = v_x_3806_;
v_isShared_3819_ = v_isSharedCheck_3855_;
goto v_resetjp_3817_;
}
else
{
lean_dec(v_x_3806_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3855_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v_v_3820_; lean_object* v___x_3821_; lean_object* v_xs_x27_3822_; lean_object* v___y_3824_; 
v_v_3820_ = lean_array_fget(v_es_3811_, v_j_3814_);
v___x_3821_ = lean_box(0);
v_xs_x27_3822_ = lean_array_fset(v_es_3811_, v_j_3814_, v___x_3821_);
switch(lean_obj_tag(v_v_3820_))
{
case 0:
{
lean_object* v_key_3829_; lean_object* v_val_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3840_; 
v_key_3829_ = lean_ctor_get(v_v_3820_, 0);
v_val_3830_ = lean_ctor_get(v_v_3820_, 1);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_v_3820_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3832_ = v_v_3820_;
v_isShared_3833_ = v_isSharedCheck_3840_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_val_3830_);
lean_inc(v_key_3829_);
lean_dec(v_v_3820_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3840_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
uint8_t v___x_3834_; 
v___x_3834_ = l_Lean_instBEqMVarId_beq(v_x_3809_, v_key_3829_);
if (v___x_3834_ == 0)
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
lean_del_object(v___x_3832_);
v___x_3835_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3829_, v_val_3830_, v_x_3809_, v_x_3810_);
v___x_3836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3835_);
v___y_3824_ = v___x_3836_;
goto v___jp_3823_;
}
else
{
lean_object* v___x_3838_; 
lean_dec(v_val_3830_);
lean_dec(v_key_3829_);
if (v_isShared_3833_ == 0)
{
lean_ctor_set(v___x_3832_, 1, v_x_3810_);
lean_ctor_set(v___x_3832_, 0, v_x_3809_);
v___x_3838_ = v___x_3832_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_x_3809_);
lean_ctor_set(v_reuseFailAlloc_3839_, 1, v_x_3810_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
v___y_3824_ = v___x_3838_;
goto v___jp_3823_;
}
}
}
}
case 1:
{
lean_object* v_node_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3853_; 
v_node_3841_ = lean_ctor_get(v_v_3820_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v_v_3820_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3843_ = v_v_3820_;
v_isShared_3844_ = v_isSharedCheck_3853_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_node_3841_);
lean_dec(v_v_3820_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3853_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
size_t v___x_3845_; size_t v___x_3846_; size_t v___x_3847_; size_t v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3845_ = ((size_t)5ULL);
v___x_3846_ = lean_usize_shift_right(v_x_3807_, v___x_3845_);
v___x_3847_ = ((size_t)1ULL);
v___x_3848_ = lean_usize_add(v_x_3808_, v___x_3847_);
v___x_3849_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_node_3841_, v___x_3846_, v___x_3848_, v_x_3809_, v_x_3810_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 0, v___x_3849_);
v___x_3851_ = v___x_3843_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v___x_3849_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
v___y_3824_ = v___x_3851_;
goto v___jp_3823_;
}
}
}
default: 
{
lean_object* v___x_3854_; 
v___x_3854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3854_, 0, v_x_3809_);
lean_ctor_set(v___x_3854_, 1, v_x_3810_);
v___y_3824_ = v___x_3854_;
goto v___jp_3823_;
}
}
v___jp_3823_:
{
lean_object* v___x_3825_; lean_object* v___x_3827_; 
v___x_3825_ = lean_array_fset(v_xs_x27_3822_, v_j_3814_, v___y_3824_);
lean_dec(v_j_3814_);
if (v_isShared_3819_ == 0)
{
lean_ctor_set(v___x_3818_, 0, v___x_3825_);
v___x_3827_ = v___x_3818_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3825_);
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
}
else
{
lean_object* v_ks_3857_; lean_object* v_vs_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3876_; 
v_ks_3857_ = lean_ctor_get(v_x_3806_, 0);
v_vs_3858_ = lean_ctor_get(v_x_3806_, 1);
v_isSharedCheck_3876_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3876_ == 0)
{
v___x_3860_ = v_x_3806_;
v_isShared_3861_ = v_isSharedCheck_3876_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_vs_3858_);
lean_inc(v_ks_3857_);
lean_dec(v_x_3806_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3876_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v_ks_3857_);
lean_ctor_set(v_reuseFailAlloc_3875_, 1, v_vs_3858_);
v___x_3863_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
lean_object* v_newNode_3864_; size_t v___x_3865_; uint8_t v___x_3866_; 
v_newNode_3864_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v___x_3863_, v_x_3809_, v_x_3810_);
v___x_3865_ = ((size_t)7ULL);
v___x_3866_ = lean_usize_dec_le(v___x_3865_, v_x_3808_);
if (v___x_3866_ == 0)
{
lean_object* v___x_3867_; lean_object* v___x_3868_; uint8_t v___x_3869_; 
v___x_3867_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3864_);
v___x_3868_ = lean_unsigned_to_nat(4u);
v___x_3869_ = lean_nat_dec_lt(v___x_3867_, v___x_3868_);
lean_dec(v___x_3867_);
if (v___x_3869_ == 0)
{
lean_object* v_ks_3870_; lean_object* v_vs_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; 
v_ks_3870_ = lean_ctor_get(v_newNode_3864_, 0);
lean_inc_ref(v_ks_3870_);
v_vs_3871_ = lean_ctor_get(v_newNode_3864_, 1);
lean_inc_ref(v_vs_3871_);
lean_dec_ref(v_newNode_3864_);
v___x_3872_ = lean_unsigned_to_nat(0u);
v___x_3873_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0);
v___x_3874_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_x_3808_, v_ks_3870_, v_vs_3871_, v___x_3872_, v___x_3873_);
lean_dec_ref(v_vs_3871_);
lean_dec_ref(v_ks_3870_);
return v___x_3874_;
}
else
{
return v_newNode_3864_;
}
}
else
{
return v_newNode_3864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t v_depth_3877_, lean_object* v_keys_3878_, lean_object* v_vals_3879_, lean_object* v_i_3880_, lean_object* v_entries_3881_){
_start:
{
lean_object* v___x_3882_; uint8_t v___x_3883_; 
v___x_3882_ = lean_array_get_size(v_keys_3878_);
v___x_3883_ = lean_nat_dec_lt(v_i_3880_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_dec(v_i_3880_);
return v_entries_3881_;
}
else
{
lean_object* v_k_3884_; lean_object* v_v_3885_; uint64_t v___x_3886_; size_t v_h_3887_; size_t v___x_3888_; lean_object* v___x_3889_; size_t v___x_3890_; size_t v___x_3891_; size_t v___x_3892_; size_t v_h_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v_k_3884_ = lean_array_fget_borrowed(v_keys_3878_, v_i_3880_);
v_v_3885_ = lean_array_fget_borrowed(v_vals_3879_, v_i_3880_);
v___x_3886_ = l_Lean_instHashableMVarId_hash(v_k_3884_);
v_h_3887_ = lean_uint64_to_usize(v___x_3886_);
v___x_3888_ = ((size_t)5ULL);
v___x_3889_ = lean_unsigned_to_nat(1u);
v___x_3890_ = ((size_t)1ULL);
v___x_3891_ = lean_usize_sub(v_depth_3877_, v___x_3890_);
v___x_3892_ = lean_usize_mul(v___x_3888_, v___x_3891_);
v_h_3893_ = lean_usize_shift_right(v_h_3887_, v___x_3892_);
v___x_3894_ = lean_nat_add(v_i_3880_, v___x_3889_);
lean_dec(v_i_3880_);
lean_inc(v_v_3885_);
lean_inc(v_k_3884_);
v___x_3895_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_entries_3881_, v_h_3893_, v_depth_3877_, v_k_3884_, v_v_3885_);
v_i_3880_ = v___x_3894_;
v_entries_3881_ = v___x_3895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_depth_3897_, lean_object* v_keys_3898_, lean_object* v_vals_3899_, lean_object* v_i_3900_, lean_object* v_entries_3901_){
_start:
{
size_t v_depth_boxed_3902_; lean_object* v_res_3903_; 
v_depth_boxed_3902_ = lean_unbox_usize(v_depth_3897_);
lean_dec(v_depth_3897_);
v_res_3903_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_boxed_3902_, v_keys_3898_, v_vals_3899_, v_i_3900_, v_entries_3901_);
lean_dec_ref(v_vals_3899_);
lean_dec_ref(v_keys_3898_);
return v_res_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_3904_, lean_object* v_x_3905_, lean_object* v_x_3906_, lean_object* v_x_3907_, lean_object* v_x_3908_){
_start:
{
size_t v_x_2453__boxed_3909_; size_t v_x_2454__boxed_3910_; lean_object* v_res_3911_; 
v_x_2453__boxed_3909_ = lean_unbox_usize(v_x_3905_);
lean_dec(v_x_3905_);
v_x_2454__boxed_3910_ = lean_unbox_usize(v_x_3906_);
lean_dec(v_x_3906_);
v_res_3911_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3904_, v_x_2453__boxed_3909_, v_x_2454__boxed_3910_, v_x_3907_, v_x_3908_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object* v_x_3912_, lean_object* v_x_3913_, lean_object* v_x_3914_){
_start:
{
uint64_t v___x_3915_; size_t v___x_3916_; size_t v___x_3917_; lean_object* v___x_3918_; 
v___x_3915_ = l_Lean_instHashableMVarId_hash(v_x_3913_);
v___x_3916_ = lean_uint64_to_usize(v___x_3915_);
v___x_3917_ = ((size_t)1ULL);
v___x_3918_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3912_, v___x_3916_, v___x_3917_, v_x_3913_, v_x_3914_);
return v___x_3918_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object* v_mvarId_3919_, lean_object* v_val_3920_, lean_object* v___y_3921_){
_start:
{
lean_object* v___x_3923_; lean_object* v_mctx_3924_; lean_object* v_cache_3925_; lean_object* v_zetaDeltaFVarIds_3926_; lean_object* v_postponed_3927_; lean_object* v_diag_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3957_; 
v___x_3923_ = lean_st_ref_take(v___y_3921_);
v_mctx_3924_ = lean_ctor_get(v___x_3923_, 0);
v_cache_3925_ = lean_ctor_get(v___x_3923_, 1);
v_zetaDeltaFVarIds_3926_ = lean_ctor_get(v___x_3923_, 2);
v_postponed_3927_ = lean_ctor_get(v___x_3923_, 3);
v_diag_3928_ = lean_ctor_get(v___x_3923_, 4);
v_isSharedCheck_3957_ = !lean_is_exclusive(v___x_3923_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3930_ = v___x_3923_;
v_isShared_3931_ = v_isSharedCheck_3957_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_diag_3928_);
lean_inc(v_postponed_3927_);
lean_inc(v_zetaDeltaFVarIds_3926_);
lean_inc(v_cache_3925_);
lean_inc(v_mctx_3924_);
lean_dec(v___x_3923_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3957_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v_depth_3932_; lean_object* v_levelAssignDepth_3933_; lean_object* v_lmvarCounter_3934_; lean_object* v_mvarCounter_3935_; lean_object* v_lDecls_3936_; lean_object* v_decls_3937_; lean_object* v_userNames_3938_; lean_object* v_lAssignment_3939_; lean_object* v_eAssignment_3940_; lean_object* v_dAssignment_3941_; lean_object* v_instanceTypedMVars_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3956_; 
v_depth_3932_ = lean_ctor_get(v_mctx_3924_, 0);
v_levelAssignDepth_3933_ = lean_ctor_get(v_mctx_3924_, 1);
v_lmvarCounter_3934_ = lean_ctor_get(v_mctx_3924_, 2);
v_mvarCounter_3935_ = lean_ctor_get(v_mctx_3924_, 3);
v_lDecls_3936_ = lean_ctor_get(v_mctx_3924_, 4);
v_decls_3937_ = lean_ctor_get(v_mctx_3924_, 5);
v_userNames_3938_ = lean_ctor_get(v_mctx_3924_, 6);
v_lAssignment_3939_ = lean_ctor_get(v_mctx_3924_, 7);
v_eAssignment_3940_ = lean_ctor_get(v_mctx_3924_, 8);
v_dAssignment_3941_ = lean_ctor_get(v_mctx_3924_, 9);
v_instanceTypedMVars_3942_ = lean_ctor_get(v_mctx_3924_, 10);
v_isSharedCheck_3956_ = !lean_is_exclusive(v_mctx_3924_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3944_ = v_mctx_3924_;
v_isShared_3945_ = v_isSharedCheck_3956_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_instanceTypedMVars_3942_);
lean_inc(v_dAssignment_3941_);
lean_inc(v_eAssignment_3940_);
lean_inc(v_lAssignment_3939_);
lean_inc(v_userNames_3938_);
lean_inc(v_decls_3937_);
lean_inc(v_lDecls_3936_);
lean_inc(v_mvarCounter_3935_);
lean_inc(v_lmvarCounter_3934_);
lean_inc(v_levelAssignDepth_3933_);
lean_inc(v_depth_3932_);
lean_dec(v_mctx_3924_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3956_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3949_; 
v___x_3946_ = lean_box(0);
v___x_3947_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_eAssignment_3940_, v_mvarId_3919_, v_val_3920_);
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 8, v___x_3947_);
v___x_3949_ = v___x_3944_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_depth_3932_);
lean_ctor_set(v_reuseFailAlloc_3955_, 1, v_levelAssignDepth_3933_);
lean_ctor_set(v_reuseFailAlloc_3955_, 2, v_lmvarCounter_3934_);
lean_ctor_set(v_reuseFailAlloc_3955_, 3, v_mvarCounter_3935_);
lean_ctor_set(v_reuseFailAlloc_3955_, 4, v_lDecls_3936_);
lean_ctor_set(v_reuseFailAlloc_3955_, 5, v_decls_3937_);
lean_ctor_set(v_reuseFailAlloc_3955_, 6, v_userNames_3938_);
lean_ctor_set(v_reuseFailAlloc_3955_, 7, v_lAssignment_3939_);
lean_ctor_set(v_reuseFailAlloc_3955_, 8, v___x_3947_);
lean_ctor_set(v_reuseFailAlloc_3955_, 9, v_dAssignment_3941_);
lean_ctor_set(v_reuseFailAlloc_3955_, 10, v_instanceTypedMVars_3942_);
v___x_3949_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
lean_object* v___x_3951_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_3949_);
v___x_3951_ = v___x_3930_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v___x_3949_);
lean_ctor_set(v_reuseFailAlloc_3954_, 1, v_cache_3925_);
lean_ctor_set(v_reuseFailAlloc_3954_, 2, v_zetaDeltaFVarIds_3926_);
lean_ctor_set(v_reuseFailAlloc_3954_, 3, v_postponed_3927_);
lean_ctor_set(v_reuseFailAlloc_3954_, 4, v_diag_3928_);
v___x_3951_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; 
v___x_3952_ = lean_st_ref_put(v___y_3921_, v___x_3951_);
v___x_3953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3946_);
return v___x_3953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object* v_mvarId_3958_, lean_object* v_val_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3958_, v_val_3959_, v___y_3960_);
lean_dec(v___y_3960_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t v_sz_3963_, size_t v_i_3964_, lean_object* v_bs_3965_){
_start:
{
uint8_t v___x_3966_; 
v___x_3966_ = lean_usize_dec_lt(v_i_3964_, v_sz_3963_);
if (v___x_3966_ == 0)
{
return v_bs_3965_;
}
else
{
lean_object* v_v_3967_; lean_object* v___x_3968_; lean_object* v_bs_x27_3969_; lean_object* v___x_3970_; size_t v___x_3971_; size_t v___x_3972_; lean_object* v___x_3973_; 
v_v_3967_ = lean_array_uget(v_bs_3965_, v_i_3964_);
v___x_3968_ = lean_unsigned_to_nat(0u);
v_bs_x27_3969_ = lean_array_uset(v_bs_3965_, v_i_3964_, v___x_3968_);
v___x_3970_ = l_Lean_Expr_fvar___override(v_v_3967_);
v___x_3971_ = ((size_t)1ULL);
v___x_3972_ = lean_usize_add(v_i_3964_, v___x_3971_);
v___x_3973_ = lean_array_uset(v_bs_x27_3969_, v_i_3964_, v___x_3970_);
v_i_3964_ = v___x_3972_;
v_bs_3965_ = v___x_3973_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object* v_sz_3975_, lean_object* v_i_3976_, lean_object* v_bs_3977_){
_start:
{
size_t v_sz_boxed_3978_; size_t v_i_boxed_3979_; lean_object* v_res_3980_; 
v_sz_boxed_3978_ = lean_unbox_usize(v_sz_3975_);
lean_dec(v_sz_3975_);
v_i_boxed_3979_ = lean_unbox_usize(v_i_3976_);
lean_dec(v_i_3976_);
v_res_3980_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_boxed_3978_, v_i_boxed_3979_, v_bs_3977_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object* v___x_3981_, lean_object* v_mvarId_3982_, lean_object* v_a_3983_, lean_object* v___x_3984_, lean_object* v_fvarIds_3985_, lean_object* v_es_3986_, lean_object* v_givenNames_x27_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_4044_; uint8_t v___x_4045_; 
v___x_3993_ = lean_unsigned_to_nat(0u);
v___x_3994_ = lean_array_get_borrowed(v___x_3981_, v_es_3986_, v___x_3993_);
v___x_4044_ = lean_array_get_size(v_fvarIds_3985_);
v___x_4045_ = lean_nat_dec_eq(v___x_4044_, v___x_3993_);
if (v___x_4045_ == 0)
{
lean_dec(v___x_3984_);
goto v___jp_3995_;
}
else
{
uint8_t v___x_4046_; 
v___x_4046_ = lean_expr_eqv(v_a_3983_, v___x_3994_);
if (v___x_4046_ == 0)
{
lean_dec(v___x_3984_);
goto v___jp_3995_;
}
else
{
lean_object* v___x_4047_; 
lean_inc(v_mvarId_3982_);
v___x_4047_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_3984_, v_mvarId_3982_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
if (lean_obj_tag(v___x_4047_) == 0)
{
lean_dec_ref_known(v___x_4047_, 1);
goto v___jp_3995_;
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
lean_dec(v_givenNames_x27_3987_);
lean_dec_ref(v_fvarIds_3985_);
lean_dec(v_mvarId_3982_);
v_a_4048_ = lean_ctor_get(v___x_4047_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4047_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4047_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v___x_4047_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4048_);
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
}
v___jp_3995_:
{
lean_object* v___x_3996_; 
lean_inc(v_mvarId_3982_);
v___x_3996_ = l_Lean_MVarId_getTag(v_mvarId_3982_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
if (lean_obj_tag(v___x_3996_) == 0)
{
lean_object* v_a_3997_; lean_object* v___x_3998_; 
v_a_3997_ = lean_ctor_get(v___x_3996_, 0);
lean_inc(v_a_3997_);
lean_dec_ref_known(v___x_3996_, 1);
lean_inc(v___x_3994_);
v___x_3998_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3994_, v_a_3997_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_a_3999_; size_t v_sz_4000_; size_t v___x_4001_; lean_object* v___x_4002_; uint8_t v___x_4003_; uint8_t v___x_4004_; uint8_t v___x_4005_; lean_object* v___x_4006_; 
v_a_3999_ = lean_ctor_get(v___x_3998_, 0);
lean_inc_n(v_a_3999_, 2);
lean_dec_ref_known(v___x_3998_, 1);
v_sz_4000_ = lean_array_size(v_fvarIds_3985_);
v___x_4001_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_3985_);
v___x_4002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4000_, v___x_4001_, v_fvarIds_3985_);
v___x_4003_ = 0;
v___x_4004_ = 1;
v___x_4005_ = 1;
v___x_4006_ = l_Lean_Meta_mkLetFVars(v___x_4002_, v_a_3999_, v___x_4003_, v___x_4004_, v___x_4005_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
lean_dec_ref(v___x_4002_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4018_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_a_4007_);
lean_dec_ref_known(v___x_4006_, 1);
v___x_4008_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3982_, v_a_4007_, v___y_3989_);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4018_ == 0)
{
lean_object* v_unused_4019_; 
v_unused_4019_ = lean_ctor_get(v___x_4008_, 0);
lean_dec(v_unused_4019_);
v___x_4010_ = v___x_4008_;
v_isShared_4011_ = v_isSharedCheck_4018_;
goto v_resetjp_4009_;
}
else
{
lean_dec(v___x_4008_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4018_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4016_; 
v___x_4012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4012_, 0, v_fvarIds_3985_);
lean_ctor_set(v___x_4012_, 1, v_givenNames_x27_3987_);
v___x_4013_ = l_Lean_Expr_mvarId_x21(v_a_3999_);
lean_dec(v_a_3999_);
v___x_4014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4012_);
lean_ctor_set(v___x_4014_, 1, v___x_4013_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 0, v___x_4014_);
v___x_4016_ = v___x_4010_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v___x_4014_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4027_; 
lean_dec(v_a_3999_);
lean_dec(v_givenNames_x27_3987_);
lean_dec_ref(v_fvarIds_3985_);
lean_dec(v_mvarId_3982_);
v_a_4020_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4022_ = v___x_4006_;
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_4006_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4025_; 
if (v_isShared_4023_ == 0)
{
v___x_4025_ = v___x_4022_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4020_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
return v___x_4025_;
}
}
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
lean_dec(v_givenNames_x27_3987_);
lean_dec_ref(v_fvarIds_3985_);
lean_dec(v_mvarId_3982_);
v_a_4028_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_3998_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_3998_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec(v_givenNames_x27_3987_);
lean_dec_ref(v_fvarIds_3985_);
lean_dec(v_mvarId_3982_);
v_a_4036_ = lean_ctor_get(v___x_3996_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_3996_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_3996_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_3996_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object* v___x_4056_, lean_object* v_mvarId_4057_, lean_object* v_a_4058_, lean_object* v___x_4059_, lean_object* v_fvarIds_4060_, lean_object* v_es_4061_, lean_object* v_givenNames_x27_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
lean_object* v_res_4068_; 
v_res_4068_ = l_Lean_MVarId_extractLets___lam__0(v___x_4056_, v_mvarId_4057_, v_a_4058_, v___x_4059_, v_fvarIds_4060_, v_es_4061_, v_givenNames_x27_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
lean_dec_ref(v_es_4061_);
lean_dec_ref(v_a_4058_);
lean_dec_ref(v___x_4056_);
return v_res_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object* v_mvarId_4069_, lean_object* v___x_4070_, lean_object* v___x_4071_, lean_object* v_givenNames_4072_, lean_object* v_config_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v___x_4079_; 
lean_inc(v___x_4070_);
lean_inc(v_mvarId_4069_);
v___x_4079_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4069_, v___x_4070_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
if (lean_obj_tag(v___x_4079_) == 0)
{
lean_object* v___x_4080_; 
lean_dec_ref_known(v___x_4079_, 1);
lean_inc(v_mvarId_4069_);
v___x_4080_ = l_Lean_MVarId_getType(v_mvarId_4069_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
if (lean_obj_tag(v___x_4080_) == 0)
{
lean_object* v_a_4081_; lean_object* v___f_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
lean_inc_n(v_a_4081_, 2);
lean_dec_ref_known(v___x_4080_, 1);
v___f_4082_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4082_, 0, v___x_4071_);
lean_closure_set(v___f_4082_, 1, v_mvarId_4069_);
lean_closure_set(v___f_4082_, 2, v_a_4081_);
lean_closure_set(v___f_4082_, 3, v___x_4070_);
v___x_4083_ = lean_unsigned_to_nat(1u);
v___x_4084_ = lean_mk_empty_array_with_capacity(v___x_4083_);
v___x_4085_ = lean_array_push(v___x_4084_, v_a_4081_);
v___x_4086_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4085_, v_givenNames_4072_, v___f_4082_, v_config_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
return v___x_4086_;
}
else
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
lean_dec(v_givenNames_4072_);
lean_dec_ref(v___x_4071_);
lean_dec(v___x_4070_);
lean_dec(v_mvarId_4069_);
v_a_4087_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_4080_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4080_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
lean_dec(v_givenNames_4072_);
lean_dec_ref(v___x_4071_);
lean_dec(v___x_4070_);
lean_dec(v_mvarId_4069_);
v_a_4095_ = lean_ctor_get(v___x_4079_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4079_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4079_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4079_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object* v_mvarId_4103_, lean_object* v___x_4104_, lean_object* v___x_4105_, lean_object* v_givenNames_4106_, lean_object* v_config_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_){
_start:
{
lean_object* v_res_4113_; 
v_res_4113_ = l_Lean_MVarId_extractLets___lam__1(v_mvarId_4103_, v___x_4104_, v___x_4105_, v_givenNames_4106_, v_config_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
lean_dec(v___y_4111_);
lean_dec_ref(v___y_4110_);
lean_dec(v___y_4109_);
lean_dec_ref(v___y_4108_);
lean_dec_ref(v_config_4107_);
return v_res_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object* v_mvarId_4117_, lean_object* v_givenNames_4118_, lean_object* v_config_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___f_4127_; lean_object* v___x_4128_; 
v___x_4125_ = l_Lean_instInhabitedExpr;
v___x_4126_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
lean_inc(v_mvarId_4117_);
v___f_4127_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__1___boxed), 10, 5);
lean_closure_set(v___f_4127_, 0, v_mvarId_4117_);
lean_closure_set(v___f_4127_, 1, v___x_4126_);
lean_closure_set(v___f_4127_, 2, v___x_4125_);
lean_closure_set(v___f_4127_, 3, v_givenNames_4118_);
lean_closure_set(v___f_4127_, 4, v_config_4119_);
v___x_4128_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4117_, v___f_4127_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object* v_mvarId_4129_, lean_object* v_givenNames_4130_, lean_object* v_config_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
lean_object* v_res_4137_; 
v_res_4137_ = l_Lean_MVarId_extractLets(v_mvarId_4129_, v_givenNames_4130_, v_config_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object* v_mvarId_4138_, lean_object* v_val_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_){
_start:
{
lean_object* v___x_4145_; 
v___x_4145_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4138_, v_val_4139_, v___y_4141_);
return v___x_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object* v_mvarId_4146_, lean_object* v_val_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(v_mvarId_4146_, v_val_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object* v_00_u03b2_4154_, lean_object* v_x_4155_, lean_object* v_x_4156_, lean_object* v_x_4157_){
_start:
{
lean_object* v___x_4158_; 
v___x_4158_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_x_4155_, v_x_4156_, v_x_4157_);
return v___x_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_4159_, lean_object* v_x_4160_, size_t v_x_4161_, size_t v_x_4162_, lean_object* v_x_4163_, lean_object* v_x_4164_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4160_, v_x_4161_, v_x_4162_, v_x_4163_, v_x_4164_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4166_, lean_object* v_x_4167_, lean_object* v_x_4168_, lean_object* v_x_4169_, lean_object* v_x_4170_, lean_object* v_x_4171_){
_start:
{
size_t v_x_2955__boxed_4172_; size_t v_x_2956__boxed_4173_; lean_object* v_res_4174_; 
v_x_2955__boxed_4172_ = lean_unbox_usize(v_x_4168_);
lean_dec(v_x_4168_);
v_x_2956__boxed_4173_ = lean_unbox_usize(v_x_4169_);
lean_dec(v_x_4169_);
v_res_4174_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(v_00_u03b2_4166_, v_x_4167_, v_x_2955__boxed_4172_, v_x_2956__boxed_4173_, v_x_4170_, v_x_4171_);
return v_res_4174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_4175_, lean_object* v_n_4176_, lean_object* v_k_4177_, lean_object* v_v_4178_){
_start:
{
lean_object* v___x_4179_; 
v___x_4179_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v_n_4176_, v_k_4177_, v_v_4178_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_4180_, size_t v_depth_4181_, lean_object* v_keys_4182_, lean_object* v_vals_4183_, lean_object* v_heq_4184_, lean_object* v_i_4185_, lean_object* v_entries_4186_){
_start:
{
lean_object* v___x_4187_; 
v___x_4187_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_4181_, v_keys_4182_, v_vals_4183_, v_i_4185_, v_entries_4186_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4188_, lean_object* v_depth_4189_, lean_object* v_keys_4190_, lean_object* v_vals_4191_, lean_object* v_heq_4192_, lean_object* v_i_4193_, lean_object* v_entries_4194_){
_start:
{
size_t v_depth_boxed_4195_; lean_object* v_res_4196_; 
v_depth_boxed_4195_ = lean_unbox_usize(v_depth_4189_);
lean_dec(v_depth_4189_);
v_res_4196_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(v_00_u03b2_4188_, v_depth_boxed_4195_, v_keys_4190_, v_vals_4191_, v_heq_4192_, v_i_4193_, v_entries_4194_);
lean_dec_ref(v_vals_4191_);
lean_dec_ref(v_keys_4190_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_4197_, lean_object* v_x_4198_, lean_object* v_x_4199_, lean_object* v_x_4200_, lean_object* v_x_4201_){
_start:
{
lean_object* v___x_4202_; 
v___x_4202_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_x_4198_, v_x_4199_, v_x_4200_, v_x_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t v_sz_4203_, size_t v_i_4204_, lean_object* v_bs_4205_){
_start:
{
uint8_t v___x_4206_; 
v___x_4206_ = lean_usize_dec_lt(v_i_4204_, v_sz_4203_);
if (v___x_4206_ == 0)
{
return v_bs_4205_;
}
else
{
lean_object* v_v_4207_; lean_object* v___x_4208_; lean_object* v_bs_x27_4209_; lean_object* v___x_4210_; size_t v___x_4211_; size_t v___x_4212_; lean_object* v___x_4213_; 
v_v_4207_ = lean_array_uget(v_bs_4205_, v_i_4204_);
v___x_4208_ = lean_unsigned_to_nat(0u);
v_bs_x27_4209_ = lean_array_uset(v_bs_4205_, v_i_4204_, v___x_4208_);
v___x_4210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4210_, 0, v_v_4207_);
v___x_4211_ = ((size_t)1ULL);
v___x_4212_ = lean_usize_add(v_i_4204_, v___x_4211_);
v___x_4213_ = lean_array_uset(v_bs_x27_4209_, v_i_4204_, v___x_4210_);
v_i_4204_ = v___x_4212_;
v_bs_4205_ = v___x_4213_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object* v_sz_4215_, lean_object* v_i_4216_, lean_object* v_bs_4217_){
_start:
{
size_t v_sz_boxed_4218_; size_t v_i_boxed_4219_; lean_object* v_res_4220_; 
v_sz_boxed_4218_ = lean_unbox_usize(v_sz_4215_);
lean_dec(v_sz_4215_);
v_i_boxed_4219_ = lean_unbox_usize(v_i_4216_);
lean_dec(v_i_4216_);
v_res_4220_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_boxed_4218_, v_i_boxed_4219_, v_bs_4217_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object* v_mvarId_4221_, lean_object* v_fvars_4222_, lean_object* v_fvarIds_4223_, lean_object* v_givenNames_x27_4224_, lean_object* v_targetNew_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
lean_object* v___x_4231_; 
lean_inc(v_mvarId_4221_);
v___x_4231_ = l_Lean_MVarId_getTag(v_mvarId_4221_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_);
if (lean_obj_tag(v___x_4231_) == 0)
{
lean_object* v_a_4232_; lean_object* v___x_4233_; 
v_a_4232_ = lean_ctor_get(v___x_4231_, 0);
lean_inc(v_a_4232_);
lean_dec_ref_known(v___x_4231_, 1);
v___x_4233_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_targetNew_4225_, v_a_4232_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v_a_4234_; size_t v_sz_4235_; size_t v___x_4236_; lean_object* v___x_4237_; uint8_t v___x_4238_; uint8_t v___x_4239_; uint8_t v___x_4240_; lean_object* v___x_4241_; 
v_a_4234_ = lean_ctor_get(v___x_4233_, 0);
lean_inc_n(v_a_4234_, 2);
lean_dec_ref_known(v___x_4233_, 1);
v_sz_4235_ = lean_array_size(v_fvarIds_4223_);
v___x_4236_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_4223_);
v___x_4237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4235_, v___x_4236_, v_fvarIds_4223_);
v___x_4238_ = 0;
v___x_4239_ = 1;
v___x_4240_ = 1;
v___x_4241_ = l_Lean_Meta_mkLetFVars(v___x_4237_, v_a_4234_, v___x_4238_, v___x_4239_, v___x_4240_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_);
lean_dec_ref(v___x_4237_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4256_; 
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4242_);
lean_dec_ref_known(v___x_4241_, 1);
v___x_4243_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4221_, v_a_4242_, v___y_4227_);
v_isSharedCheck_4256_ = !lean_is_exclusive(v___x_4243_);
if (v_isSharedCheck_4256_ == 0)
{
lean_object* v_unused_4257_; 
v_unused_4257_ = lean_ctor_get(v___x_4243_, 0);
lean_dec(v_unused_4257_);
v___x_4245_ = v___x_4243_;
v_isShared_4246_ = v_isSharedCheck_4256_;
goto v_resetjp_4244_;
}
else
{
lean_dec(v___x_4243_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4256_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4247_; size_t v_sz_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4254_; 
v___x_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4247_, 0, v_fvarIds_4223_);
lean_ctor_set(v___x_4247_, 1, v_givenNames_x27_4224_);
v_sz_4248_ = lean_array_size(v_fvars_4222_);
v___x_4249_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4248_, v___x_4236_, v_fvars_4222_);
v___x_4250_ = l_Lean_Expr_mvarId_x21(v_a_4234_);
lean_dec(v_a_4234_);
v___x_4251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4251_, 0, v___x_4249_);
lean_ctor_set(v___x_4251_, 1, v___x_4250_);
v___x_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4247_);
lean_ctor_set(v___x_4252_, 1, v___x_4251_);
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v___x_4252_);
v___x_4254_ = v___x_4245_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v___x_4252_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
return v___x_4254_;
}
}
}
else
{
lean_object* v_a_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4265_; 
lean_dec(v_a_4234_);
lean_dec(v_givenNames_x27_4224_);
lean_dec_ref(v_fvarIds_4223_);
lean_dec_ref(v_fvars_4222_);
lean_dec(v_mvarId_4221_);
v_a_4258_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4260_ = v___x_4241_;
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_a_4258_);
lean_dec(v___x_4241_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
lean_object* v___x_4263_; 
if (v_isShared_4261_ == 0)
{
v___x_4263_ = v___x_4260_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_a_4258_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec(v_givenNames_x27_4224_);
lean_dec_ref(v_fvarIds_4223_);
lean_dec_ref(v_fvars_4222_);
lean_dec(v_mvarId_4221_);
v_a_4266_ = lean_ctor_get(v___x_4233_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4233_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4233_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
else
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4281_; 
lean_dec_ref(v_targetNew_4225_);
lean_dec(v_givenNames_x27_4224_);
lean_dec_ref(v_fvarIds_4223_);
lean_dec_ref(v_fvars_4222_);
lean_dec(v_mvarId_4221_);
v_a_4274_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4276_ = v___x_4231_;
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4231_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4279_; 
if (v_isShared_4277_ == 0)
{
v___x_4279_ = v___x_4276_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v_a_4274_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4282_, lean_object* v_fvars_4283_, lean_object* v_fvarIds_4284_, lean_object* v_givenNames_x27_4285_, lean_object* v_targetNew_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_Lean_MVarId_extractLetsLocalDecl___lam__0(v_mvarId_4282_, v_fvars_4283_, v_fvarIds_4284_, v_givenNames_x27_4285_, v_targetNew_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec_ref(v___y_4287_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object* v___x_4293_, lean_object* v_binderName_4294_, lean_object* v_body_4295_, uint8_t v_binderInfo_4296_, lean_object* v___f_4297_, lean_object* v_binderType_4298_, lean_object* v___x_4299_, lean_object* v_mvarId_4300_, lean_object* v_fvarIds_4301_, lean_object* v_es_4302_, lean_object* v_givenNames_x27_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4314_; uint8_t v___x_4315_; 
v___x_4309_ = lean_unsigned_to_nat(0u);
v___x_4310_ = lean_array_get_borrowed(v___x_4293_, v_es_4302_, v___x_4309_);
v___x_4314_ = lean_array_get_size(v_fvarIds_4301_);
v___x_4315_ = lean_nat_dec_eq(v___x_4314_, v___x_4309_);
if (v___x_4315_ == 0)
{
lean_dec(v_mvarId_4300_);
lean_dec(v___x_4299_);
goto v___jp_4311_;
}
else
{
uint8_t v___x_4316_; 
v___x_4316_ = lean_expr_eqv(v_binderType_4298_, v___x_4310_);
if (v___x_4316_ == 0)
{
lean_dec(v_mvarId_4300_);
lean_dec(v___x_4299_);
goto v___jp_4311_;
}
else
{
lean_object* v___x_4317_; 
v___x_4317_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4299_, v_mvarId_4300_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_dec_ref_known(v___x_4317_, 1);
goto v___jp_4311_;
}
else
{
lean_object* v_a_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4325_; 
lean_dec(v_givenNames_x27_4303_);
lean_dec_ref(v_fvarIds_4301_);
lean_dec_ref(v___f_4297_);
lean_dec_ref(v_body_4295_);
lean_dec(v_binderName_4294_);
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4320_ = v___x_4317_;
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_a_4318_);
lean_dec(v___x_4317_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4323_; 
if (v_isShared_4321_ == 0)
{
v___x_4323_ = v___x_4320_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4318_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
}
}
v___jp_4311_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; 
lean_inc(v___x_4310_);
v___x_4312_ = l_Lean_Expr_forallE___override(v_binderName_4294_, v___x_4310_, v_body_4295_, v_binderInfo_4296_);
lean_inc(v___y_4307_);
lean_inc_ref(v___y_4306_);
lean_inc(v___y_4305_);
lean_inc_ref(v___y_4304_);
v___x_4313_ = lean_apply_8(v___f_4297_, v_fvarIds_4301_, v_givenNames_x27_4303_, v___x_4312_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_, lean_box(0));
return v___x_4313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object* v___x_4326_, lean_object* v_binderName_4327_, lean_object* v_body_4328_, lean_object* v_binderInfo_4329_, lean_object* v___f_4330_, lean_object* v_binderType_4331_, lean_object* v___x_4332_, lean_object* v_mvarId_4333_, lean_object* v_fvarIds_4334_, lean_object* v_es_4335_, lean_object* v_givenNames_x27_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
uint8_t v_binderInfo_2040__boxed_4342_; lean_object* v_res_4343_; 
v_binderInfo_2040__boxed_4342_ = lean_unbox(v_binderInfo_4329_);
v_res_4343_ = l_Lean_MVarId_extractLetsLocalDecl___lam__1(v___x_4326_, v_binderName_4327_, v_body_4328_, v_binderInfo_2040__boxed_4342_, v___f_4330_, v_binderType_4331_, v___x_4332_, v_mvarId_4333_, v_fvarIds_4334_, v_es_4335_, v_givenNames_x27_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
lean_dec(v___y_4338_);
lean_dec_ref(v___y_4337_);
lean_dec_ref(v_es_4335_);
lean_dec_ref(v_binderType_4331_);
lean_dec_ref(v___x_4326_);
return v_res_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object* v___x_4344_, lean_object* v_declName_4345_, lean_object* v_body_4346_, uint8_t v_nondep_4347_, lean_object* v___f_4348_, lean_object* v_type_4349_, lean_object* v_value_4350_, lean_object* v___x_4351_, lean_object* v_mvarId_4352_, lean_object* v_fvarIds_4353_, lean_object* v_es_4354_, lean_object* v_givenNames_x27_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_){
_start:
{
lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4368_; uint8_t v___x_4369_; 
v___x_4361_ = lean_unsigned_to_nat(0u);
v___x_4362_ = lean_array_get_borrowed(v___x_4344_, v_es_4354_, v___x_4361_);
v___x_4363_ = lean_unsigned_to_nat(1u);
v___x_4364_ = lean_array_get_borrowed(v___x_4344_, v_es_4354_, v___x_4363_);
v___x_4368_ = lean_array_get_size(v_fvarIds_4353_);
v___x_4369_ = lean_nat_dec_eq(v___x_4368_, v___x_4361_);
if (v___x_4369_ == 0)
{
lean_dec(v_mvarId_4352_);
lean_dec(v___x_4351_);
goto v___jp_4365_;
}
else
{
uint8_t v___x_4370_; 
v___x_4370_ = lean_expr_eqv(v_type_4349_, v___x_4362_);
if (v___x_4370_ == 0)
{
lean_dec(v_mvarId_4352_);
lean_dec(v___x_4351_);
goto v___jp_4365_;
}
else
{
uint8_t v___x_4371_; 
v___x_4371_ = lean_expr_eqv(v_value_4350_, v___x_4364_);
if (v___x_4371_ == 0)
{
lean_dec(v_mvarId_4352_);
lean_dec(v___x_4351_);
goto v___jp_4365_;
}
else
{
lean_object* v___x_4372_; 
v___x_4372_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4351_, v_mvarId_4352_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_dec_ref_known(v___x_4372_, 1);
goto v___jp_4365_;
}
else
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4380_; 
lean_dec(v_givenNames_x27_4355_);
lean_dec_ref(v_fvarIds_4353_);
lean_dec_ref(v___f_4348_);
lean_dec_ref(v_body_4346_);
lean_dec(v_declName_4345_);
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4375_ = v___x_4372_;
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4378_; 
if (v_isShared_4376_ == 0)
{
v___x_4378_ = v___x_4375_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_a_4373_);
v___x_4378_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
return v___x_4378_;
}
}
}
}
}
}
v___jp_4365_:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
lean_inc(v___x_4364_);
lean_inc(v___x_4362_);
v___x_4366_ = l_Lean_Expr_letE___override(v_declName_4345_, v___x_4362_, v___x_4364_, v_body_4346_, v_nondep_4347_);
lean_inc(v___y_4359_);
lean_inc_ref(v___y_4358_);
lean_inc(v___y_4357_);
lean_inc_ref(v___y_4356_);
v___x_4367_ = lean_apply_8(v___f_4348_, v_fvarIds_4353_, v_givenNames_x27_4355_, v___x_4366_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, lean_box(0));
return v___x_4367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object** _args){
lean_object* v___x_4381_ = _args[0];
lean_object* v_declName_4382_ = _args[1];
lean_object* v_body_4383_ = _args[2];
lean_object* v_nondep_4384_ = _args[3];
lean_object* v___f_4385_ = _args[4];
lean_object* v_type_4386_ = _args[5];
lean_object* v_value_4387_ = _args[6];
lean_object* v___x_4388_ = _args[7];
lean_object* v_mvarId_4389_ = _args[8];
lean_object* v_fvarIds_4390_ = _args[9];
lean_object* v_es_4391_ = _args[10];
lean_object* v_givenNames_x27_4392_ = _args[11];
lean_object* v___y_4393_ = _args[12];
lean_object* v___y_4394_ = _args[13];
lean_object* v___y_4395_ = _args[14];
lean_object* v___y_4396_ = _args[15];
lean_object* v___y_4397_ = _args[16];
_start:
{
uint8_t v_nondep_2111__boxed_4398_; lean_object* v_res_4399_; 
v_nondep_2111__boxed_4398_ = lean_unbox(v_nondep_4384_);
v_res_4399_ = l_Lean_MVarId_extractLetsLocalDecl___lam__2(v___x_4381_, v_declName_4382_, v_body_4383_, v_nondep_2111__boxed_4398_, v___f_4385_, v_type_4386_, v_value_4387_, v___x_4388_, v_mvarId_4389_, v_fvarIds_4390_, v_es_4391_, v_givenNames_x27_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_);
lean_dec(v___y_4396_);
lean_dec_ref(v___y_4395_);
lean_dec(v___y_4394_);
lean_dec_ref(v___y_4393_);
lean_dec_ref(v_es_4391_);
lean_dec_ref(v_value_4387_);
lean_dec_ref(v_type_4386_);
lean_dec_ref(v___x_4381_);
return v_res_4399_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4403_ = ((lean_object*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1));
v___x_4404_ = l_Lean_MessageData_ofFormat(v___x_4403_);
return v___x_4404_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; 
v___x_4405_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2);
v___x_4406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4406_, 0, v___x_4405_);
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object* v_mvarId_4407_, lean_object* v___x_4408_, lean_object* v___f_4409_, lean_object* v___x_4410_, lean_object* v_givenNames_4411_, lean_object* v_config_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v___x_4418_; 
lean_inc(v_mvarId_4407_);
v___x_4418_ = l_Lean_MVarId_getType(v_mvarId_4407_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
if (lean_obj_tag(v___x_4418_) == 0)
{
lean_object* v_a_4419_; 
v_a_4419_ = lean_ctor_get(v___x_4418_, 0);
lean_inc(v_a_4419_);
lean_dec_ref_known(v___x_4418_, 1);
switch(lean_obj_tag(v_a_4419_))
{
case 7:
{
lean_object* v_binderName_4420_; lean_object* v_binderType_4421_; lean_object* v_body_4422_; uint8_t v_binderInfo_4423_; lean_object* v___x_4424_; lean_object* v___f_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; 
v_binderName_4420_ = lean_ctor_get(v_a_4419_, 0);
lean_inc(v_binderName_4420_);
v_binderType_4421_ = lean_ctor_get(v_a_4419_, 1);
lean_inc_ref_n(v_binderType_4421_, 2);
v_body_4422_ = lean_ctor_get(v_a_4419_, 2);
lean_inc_ref(v_body_4422_);
v_binderInfo_4423_ = lean_ctor_get_uint8(v_a_4419_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4419_, 3);
v___x_4424_ = lean_box(v_binderInfo_4423_);
v___f_4425_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed), 16, 8);
lean_closure_set(v___f_4425_, 0, v___x_4408_);
lean_closure_set(v___f_4425_, 1, v_binderName_4420_);
lean_closure_set(v___f_4425_, 2, v_body_4422_);
lean_closure_set(v___f_4425_, 3, v___x_4424_);
lean_closure_set(v___f_4425_, 4, v___f_4409_);
lean_closure_set(v___f_4425_, 5, v_binderType_4421_);
lean_closure_set(v___f_4425_, 6, v___x_4410_);
lean_closure_set(v___f_4425_, 7, v_mvarId_4407_);
v___x_4426_ = lean_unsigned_to_nat(1u);
v___x_4427_ = lean_mk_empty_array_with_capacity(v___x_4426_);
v___x_4428_ = lean_array_push(v___x_4427_, v_binderType_4421_);
v___x_4429_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4428_, v_givenNames_4411_, v___f_4425_, v_config_4412_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
return v___x_4429_;
}
case 8:
{
lean_object* v_declName_4430_; lean_object* v_type_4431_; lean_object* v_value_4432_; lean_object* v_body_4433_; uint8_t v_nondep_4434_; lean_object* v___x_4435_; lean_object* v___f_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; 
v_declName_4430_ = lean_ctor_get(v_a_4419_, 0);
lean_inc(v_declName_4430_);
v_type_4431_ = lean_ctor_get(v_a_4419_, 1);
lean_inc_ref_n(v_type_4431_, 2);
v_value_4432_ = lean_ctor_get(v_a_4419_, 2);
lean_inc_ref_n(v_value_4432_, 2);
v_body_4433_ = lean_ctor_get(v_a_4419_, 3);
lean_inc_ref(v_body_4433_);
v_nondep_4434_ = lean_ctor_get_uint8(v_a_4419_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4419_, 4);
v___x_4435_ = lean_box(v_nondep_4434_);
v___f_4436_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed), 17, 9);
lean_closure_set(v___f_4436_, 0, v___x_4408_);
lean_closure_set(v___f_4436_, 1, v_declName_4430_);
lean_closure_set(v___f_4436_, 2, v_body_4433_);
lean_closure_set(v___f_4436_, 3, v___x_4435_);
lean_closure_set(v___f_4436_, 4, v___f_4409_);
lean_closure_set(v___f_4436_, 5, v_type_4431_);
lean_closure_set(v___f_4436_, 6, v_value_4432_);
lean_closure_set(v___f_4436_, 7, v___x_4410_);
lean_closure_set(v___f_4436_, 8, v_mvarId_4407_);
v___x_4437_ = lean_unsigned_to_nat(2u);
v___x_4438_ = lean_mk_empty_array_with_capacity(v___x_4437_);
v___x_4439_ = lean_array_push(v___x_4438_, v_type_4431_);
v___x_4440_ = lean_array_push(v___x_4439_, v_value_4432_);
v___x_4441_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4440_, v_givenNames_4411_, v___f_4436_, v_config_4412_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
return v___x_4441_;
}
default: 
{
lean_object* v___x_4442_; lean_object* v___x_4443_; 
lean_dec(v_a_4419_);
lean_dec(v_givenNames_4411_);
lean_dec_ref(v___f_4409_);
lean_dec_ref(v___x_4408_);
v___x_4442_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4443_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4410_, v_mvarId_4407_, v___x_4442_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
return v___x_4443_;
}
}
}
else
{
lean_object* v_a_4444_; lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4451_; 
lean_dec(v_givenNames_4411_);
lean_dec(v___x_4410_);
lean_dec_ref(v___f_4409_);
lean_dec_ref(v___x_4408_);
lean_dec(v_mvarId_4407_);
v_a_4444_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4451_ == 0)
{
v___x_4446_ = v___x_4418_;
v_isShared_4447_ = v_isSharedCheck_4451_;
goto v_resetjp_4445_;
}
else
{
lean_inc(v_a_4444_);
lean_dec(v___x_4418_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4451_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v___x_4449_; 
if (v_isShared_4447_ == 0)
{
v___x_4449_ = v___x_4446_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_a_4444_);
v___x_4449_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
return v___x_4449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object* v_mvarId_4452_, lean_object* v___x_4453_, lean_object* v___f_4454_, lean_object* v___x_4455_, lean_object* v_givenNames_4456_, lean_object* v_config_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
lean_object* v_res_4463_; 
v_res_4463_ = l_Lean_MVarId_extractLetsLocalDecl___lam__3(v_mvarId_4452_, v___x_4453_, v___f_4454_, v___x_4455_, v_givenNames_4456_, v_config_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec(v___y_4459_);
lean_dec_ref(v___y_4458_);
lean_dec_ref(v_config_4457_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object* v___x_4464_, lean_object* v___x_4465_, lean_object* v_givenNames_4466_, lean_object* v_config_4467_, lean_object* v_mvarId_4468_, lean_object* v_fvars_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_){
_start:
{
lean_object* v___f_4475_; lean_object* v___f_4476_; lean_object* v___x_4477_; 
lean_inc_n(v_mvarId_4468_, 2);
v___f_4475_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4475_, 0, v_mvarId_4468_);
lean_closure_set(v___f_4475_, 1, v_fvars_4469_);
v___f_4476_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed), 11, 6);
lean_closure_set(v___f_4476_, 0, v_mvarId_4468_);
lean_closure_set(v___f_4476_, 1, v___x_4464_);
lean_closure_set(v___f_4476_, 2, v___f_4475_);
lean_closure_set(v___f_4476_, 3, v___x_4465_);
lean_closure_set(v___f_4476_, 4, v_givenNames_4466_);
lean_closure_set(v___f_4476_, 5, v_config_4467_);
v___x_4477_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4468_, v___f_4476_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
return v___x_4477_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object* v___x_4478_, lean_object* v___x_4479_, lean_object* v_givenNames_4480_, lean_object* v_config_4481_, lean_object* v_mvarId_4482_, lean_object* v_fvars_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_){
_start:
{
lean_object* v_res_4489_; 
v_res_4489_ = l_Lean_MVarId_extractLetsLocalDecl___lam__4(v___x_4478_, v___x_4479_, v_givenNames_4480_, v_config_4481_, v_mvarId_4482_, v_fvars_4483_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_);
lean_dec(v___y_4487_);
lean_dec_ref(v___y_4486_);
lean_dec(v___y_4485_);
lean_dec_ref(v___y_4484_);
return v_res_4489_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object* v_mvarId_4490_, lean_object* v_fvarId_4491_, lean_object* v_givenNames_4492_, lean_object* v_config_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___f_4501_; lean_object* v___x_4502_; 
v___x_4499_ = l_Lean_instInhabitedExpr;
v___x_4500_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
v___f_4501_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed), 11, 4);
lean_closure_set(v___f_4501_, 0, v___x_4499_);
lean_closure_set(v___f_4501_, 1, v___x_4500_);
lean_closure_set(v___f_4501_, 2, v_givenNames_4492_);
lean_closure_set(v___f_4501_, 3, v_config_4493_);
lean_inc(v_mvarId_4490_);
v___x_4502_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4490_, v___x_4500_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4502_) == 0)
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; uint8_t v___x_4506_; lean_object* v___x_4507_; 
lean_dec_ref_known(v___x_4502_, 1);
v___x_4503_ = lean_unsigned_to_nat(1u);
v___x_4504_ = lean_mk_empty_array_with_capacity(v___x_4503_);
v___x_4505_ = lean_array_push(v___x_4504_, v_fvarId_4491_);
v___x_4506_ = 0;
v___x_4507_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4490_, v___x_4505_, v___f_4501_, v___x_4506_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
return v___x_4507_;
}
else
{
lean_object* v_a_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
lean_dec_ref(v___f_4501_);
lean_dec(v_fvarId_4491_);
lean_dec(v_mvarId_4490_);
v_a_4508_ = lean_ctor_get(v___x_4502_, 0);
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4502_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4510_ = v___x_4502_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_a_4508_);
lean_dec(v___x_4502_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_a_4508_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object* v_mvarId_4516_, lean_object* v_fvarId_4517_, lean_object* v_givenNames_4518_, lean_object* v_config_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l_Lean_MVarId_extractLetsLocalDecl(v_mvarId_4516_, v_fvarId_4517_, v_givenNames_4518_, v_config_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object* v_mvarId_4526_, lean_object* v___x_4527_, lean_object* v_config_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_){
_start:
{
lean_object* v___x_4534_; 
lean_inc(v___x_4527_);
lean_inc(v_mvarId_4526_);
v___x_4534_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4526_, v___x_4527_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
if (lean_obj_tag(v___x_4534_) == 0)
{
lean_object* v___x_4535_; 
lean_dec_ref_known(v___x_4534_, 1);
lean_inc(v_mvarId_4526_);
v___x_4535_ = l_Lean_MVarId_getType(v_mvarId_4526_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
if (lean_obj_tag(v___x_4535_) == 0)
{
lean_object* v_a_4536_; lean_object* v___x_4537_; 
v_a_4536_ = lean_ctor_get(v___x_4535_, 0);
lean_inc_n(v_a_4536_, 2);
lean_dec_ref_known(v___x_4535_, 1);
v___x_4537_ = l_Lean_Meta_liftLets(v_a_4536_, v_config_4528_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; uint8_t v___x_4539_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4538_);
lean_dec_ref_known(v___x_4537_, 1);
v___x_4539_ = lean_expr_eqv(v_a_4536_, v_a_4538_);
lean_dec(v_a_4536_);
if (v___x_4539_ == 0)
{
lean_object* v___x_4540_; 
lean_dec(v___x_4527_);
v___x_4540_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4526_, v_a_4538_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
return v___x_4540_;
}
else
{
lean_object* v___x_4541_; 
lean_inc(v_mvarId_4526_);
v___x_4541_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4527_, v_mvarId_4526_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
if (lean_obj_tag(v___x_4541_) == 0)
{
lean_object* v___x_4542_; 
lean_dec_ref_known(v___x_4541_, 1);
v___x_4542_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4526_, v_a_4538_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
return v___x_4542_;
}
else
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
lean_dec(v_a_4538_);
lean_dec(v_mvarId_4526_);
v_a_4543_ = lean_ctor_get(v___x_4541_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4541_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4541_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4541_);
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
else
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
lean_dec(v_a_4536_);
lean_dec(v___x_4527_);
lean_dec(v_mvarId_4526_);
v_a_4551_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v___x_4537_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___x_4537_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
}
}
else
{
lean_object* v_a_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4566_; 
lean_dec_ref(v_config_4528_);
lean_dec(v___x_4527_);
lean_dec(v_mvarId_4526_);
v_a_4559_ = lean_ctor_get(v___x_4535_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4535_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4561_ = v___x_4535_;
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_a_4559_);
lean_dec(v___x_4535_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4564_; 
if (v_isShared_4562_ == 0)
{
v___x_4564_ = v___x_4561_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_a_4559_);
v___x_4564_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
return v___x_4564_;
}
}
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
lean_dec_ref(v_config_4528_);
lean_dec(v___x_4527_);
lean_dec(v_mvarId_4526_);
v_a_4567_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4569_ = v___x_4534_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___x_4534_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object* v_mvarId_4575_, lean_object* v___x_4576_, lean_object* v_config_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_){
_start:
{
lean_object* v_res_4583_; 
v_res_4583_ = l_Lean_MVarId_liftLets___lam__0(v_mvarId_4575_, v___x_4576_, v_config_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_);
lean_dec(v___y_4581_);
lean_dec_ref(v___y_4580_);
lean_dec(v___y_4579_);
lean_dec_ref(v___y_4578_);
return v_res_4583_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object* v_mvarId_4587_, lean_object* v_config_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_){
_start:
{
lean_object* v___x_4594_; lean_object* v___f_4595_; lean_object* v___x_4596_; 
v___x_4594_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
lean_inc(v_mvarId_4587_);
v___f_4595_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4595_, 0, v_mvarId_4587_);
lean_closure_set(v___f_4595_, 1, v___x_4594_);
lean_closure_set(v___f_4595_, 2, v_config_4588_);
v___x_4596_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4587_, v___f_4595_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_);
return v___x_4596_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object* v_mvarId_4597_, lean_object* v_config_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l_Lean_MVarId_liftLets(v_mvarId_4597_, v_config_4598_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_);
lean_dec(v___y_4602_);
lean_dec_ref(v___y_4601_);
lean_dec(v___y_4600_);
lean_dec_ref(v___y_4599_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object* v_mvarId_4605_, lean_object* v_fvars_4606_, lean_object* v_targetNew_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_){
_start:
{
lean_object* v___x_4613_; 
v___x_4613_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4605_, v_targetNew_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
if (lean_obj_tag(v___x_4613_) == 0)
{
lean_object* v_a_4614_; lean_object* v___x_4616_; uint8_t v_isShared_4617_; uint8_t v_isSharedCheck_4627_; 
v_a_4614_ = lean_ctor_get(v___x_4613_, 0);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4613_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4616_ = v___x_4613_;
v_isShared_4617_ = v_isSharedCheck_4627_;
goto v_resetjp_4615_;
}
else
{
lean_inc(v_a_4614_);
lean_dec(v___x_4613_);
v___x_4616_ = lean_box(0);
v_isShared_4617_ = v_isSharedCheck_4627_;
goto v_resetjp_4615_;
}
v_resetjp_4615_:
{
lean_object* v___x_4618_; size_t v_sz_4619_; size_t v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4625_; 
v___x_4618_ = lean_box(0);
v_sz_4619_ = lean_array_size(v_fvars_4606_);
v___x_4620_ = ((size_t)0ULL);
v___x_4621_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4619_, v___x_4620_, v_fvars_4606_);
v___x_4622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4621_);
lean_ctor_set(v___x_4622_, 1, v_a_4614_);
v___x_4623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4623_, 0, v___x_4618_);
lean_ctor_set(v___x_4623_, 1, v___x_4622_);
if (v_isShared_4617_ == 0)
{
lean_ctor_set(v___x_4616_, 0, v___x_4623_);
v___x_4625_ = v___x_4616_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v___x_4623_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
else
{
lean_object* v_a_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4635_; 
lean_dec_ref(v_fvars_4606_);
v_a_4628_ = lean_ctor_get(v___x_4613_, 0);
v_isSharedCheck_4635_ = !lean_is_exclusive(v___x_4613_);
if (v_isSharedCheck_4635_ == 0)
{
v___x_4630_ = v___x_4613_;
v_isShared_4631_ = v_isSharedCheck_4635_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_a_4628_);
lean_dec(v___x_4613_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4635_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
lean_object* v___x_4633_; 
if (v_isShared_4631_ == 0)
{
v___x_4633_ = v___x_4630_;
goto v_reusejp_4632_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v_a_4628_);
v___x_4633_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4632_;
}
v_reusejp_4632_:
{
return v___x_4633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4636_, lean_object* v_fvars_4637_, lean_object* v_targetNew_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l_Lean_MVarId_liftLetsLocalDecl___lam__0(v_mvarId_4636_, v_fvars_4637_, v_targetNew_4638_, v___y_4639_, v___y_4640_, v___y_4641_, v___y_4642_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
lean_dec(v___y_4640_);
lean_dec_ref(v___y_4639_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object* v_mvarId_4645_, lean_object* v_config_4646_, lean_object* v___f_4647_, lean_object* v___x_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_){
_start:
{
lean_object* v___x_4654_; 
lean_inc(v_mvarId_4645_);
v___x_4654_ = l_Lean_MVarId_getType(v_mvarId_4645_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_object* v_a_4655_; 
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
lean_inc(v_a_4655_);
lean_dec_ref_known(v___x_4654_, 1);
switch(lean_obj_tag(v_a_4655_))
{
case 7:
{
lean_object* v_binderName_4656_; lean_object* v_binderType_4657_; lean_object* v_body_4658_; uint8_t v_binderInfo_4659_; lean_object* v___x_4660_; 
v_binderName_4656_ = lean_ctor_get(v_a_4655_, 0);
lean_inc(v_binderName_4656_);
v_binderType_4657_ = lean_ctor_get(v_a_4655_, 1);
lean_inc_ref_n(v_binderType_4657_, 2);
v_body_4658_ = lean_ctor_get(v_a_4655_, 2);
lean_inc_ref(v_body_4658_);
v_binderInfo_4659_ = lean_ctor_get_uint8(v_a_4655_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4655_, 3);
v___x_4660_ = l_Lean_Meta_liftLets(v_binderType_4657_, v_config_4646_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; lean_object* v___y_4663_; lean_object* v___y_4664_; lean_object* v___y_4665_; lean_object* v___y_4666_; uint8_t v___x_4669_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_a_4661_);
lean_dec_ref_known(v___x_4660_, 1);
v___x_4669_ = lean_expr_eqv(v_binderType_4657_, v_a_4661_);
lean_dec_ref(v_binderType_4657_);
if (v___x_4669_ == 0)
{
lean_dec(v___x_4648_);
lean_dec(v_mvarId_4645_);
v___y_4663_ = v___y_4649_;
v___y_4664_ = v___y_4650_;
v___y_4665_ = v___y_4651_;
v___y_4666_ = v___y_4652_;
goto v___jp_4662_;
}
else
{
lean_object* v___x_4670_; 
v___x_4670_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4648_, v_mvarId_4645_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_dec_ref_known(v___x_4670_, 1);
v___y_4663_ = v___y_4649_;
v___y_4664_ = v___y_4650_;
v___y_4665_ = v___y_4651_;
v___y_4666_ = v___y_4652_;
goto v___jp_4662_;
}
else
{
lean_object* v_a_4671_; lean_object* v___x_4673_; uint8_t v_isShared_4674_; uint8_t v_isSharedCheck_4678_; 
lean_dec(v_a_4661_);
lean_dec_ref(v_body_4658_);
lean_dec(v_binderName_4656_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec_ref(v___f_4647_);
v_a_4671_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4673_ = v___x_4670_;
v_isShared_4674_ = v_isSharedCheck_4678_;
goto v_resetjp_4672_;
}
else
{
lean_inc(v_a_4671_);
lean_dec(v___x_4670_);
v___x_4673_ = lean_box(0);
v_isShared_4674_ = v_isSharedCheck_4678_;
goto v_resetjp_4672_;
}
v_resetjp_4672_:
{
lean_object* v___x_4676_; 
if (v_isShared_4674_ == 0)
{
v___x_4676_ = v___x_4673_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_a_4671_);
v___x_4676_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
return v___x_4676_;
}
}
}
}
v___jp_4662_:
{
lean_object* v___x_4667_; lean_object* v___x_4668_; 
v___x_4667_ = l_Lean_Expr_forallE___override(v_binderName_4656_, v_a_4661_, v_body_4658_, v_binderInfo_4659_);
v___x_4668_ = lean_apply_6(v___f_4647_, v___x_4667_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, lean_box(0));
return v___x_4668_;
}
}
else
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
lean_dec_ref(v_body_4658_);
lean_dec_ref(v_binderType_4657_);
lean_dec(v_binderName_4656_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___x_4648_);
lean_dec_ref(v___f_4647_);
lean_dec(v_mvarId_4645_);
v_a_4679_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4681_ = v___x_4660_;
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4660_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4682_ == 0)
{
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
case 8:
{
lean_object* v_declName_4687_; lean_object* v_type_4688_; lean_object* v_value_4689_; lean_object* v_body_4690_; uint8_t v_nondep_4691_; lean_object* v___x_4692_; 
v_declName_4687_ = lean_ctor_get(v_a_4655_, 0);
lean_inc(v_declName_4687_);
v_type_4688_ = lean_ctor_get(v_a_4655_, 1);
lean_inc_ref_n(v_type_4688_, 2);
v_value_4689_ = lean_ctor_get(v_a_4655_, 2);
lean_inc_ref(v_value_4689_);
v_body_4690_ = lean_ctor_get(v_a_4655_, 3);
lean_inc_ref(v_body_4690_);
v_nondep_4691_ = lean_ctor_get_uint8(v_a_4655_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4655_, 4);
lean_inc_ref(v_config_4646_);
v___x_4692_ = l_Lean_Meta_liftLets(v_type_4688_, v_config_4646_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
if (lean_obj_tag(v___x_4692_) == 0)
{
lean_object* v_a_4693_; lean_object* v___x_4694_; 
v_a_4693_ = lean_ctor_get(v___x_4692_, 0);
lean_inc(v_a_4693_);
lean_dec_ref_known(v___x_4692_, 1);
lean_inc_ref(v_value_4689_);
v___x_4694_ = l_Lean_Meta_liftLets(v_value_4689_, v_config_4646_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v_a_4695_; lean_object* v___y_4697_; lean_object* v___y_4698_; lean_object* v___y_4699_; lean_object* v___y_4700_; uint8_t v___y_4704_; uint8_t v___x_4714_; 
v_a_4695_ = lean_ctor_get(v___x_4694_, 0);
lean_inc(v_a_4695_);
lean_dec_ref_known(v___x_4694_, 1);
v___x_4714_ = lean_expr_eqv(v_type_4688_, v_a_4693_);
lean_dec_ref(v_type_4688_);
if (v___x_4714_ == 0)
{
lean_dec_ref(v_value_4689_);
v___y_4704_ = v___x_4714_;
goto v___jp_4703_;
}
else
{
uint8_t v___x_4715_; 
v___x_4715_ = lean_expr_eqv(v_value_4689_, v_a_4695_);
lean_dec_ref(v_value_4689_);
v___y_4704_ = v___x_4715_;
goto v___jp_4703_;
}
v___jp_4696_:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4701_ = l_Lean_Expr_letE___override(v_declName_4687_, v_a_4693_, v_a_4695_, v_body_4690_, v_nondep_4691_);
v___x_4702_ = lean_apply_6(v___f_4647_, v___x_4701_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_, lean_box(0));
return v___x_4702_;
}
v___jp_4703_:
{
if (v___y_4704_ == 0)
{
lean_dec(v___x_4648_);
lean_dec(v_mvarId_4645_);
v___y_4697_ = v___y_4649_;
v___y_4698_ = v___y_4650_;
v___y_4699_ = v___y_4651_;
v___y_4700_ = v___y_4652_;
goto v___jp_4696_;
}
else
{
lean_object* v___x_4705_; 
v___x_4705_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4648_, v_mvarId_4645_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_dec_ref_known(v___x_4705_, 1);
v___y_4697_ = v___y_4649_;
v___y_4698_ = v___y_4650_;
v___y_4699_ = v___y_4651_;
v___y_4700_ = v___y_4652_;
goto v___jp_4696_;
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
lean_dec(v_a_4695_);
lean_dec(v_a_4693_);
lean_dec_ref(v_body_4690_);
lean_dec(v_declName_4687_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec_ref(v___f_4647_);
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v___x_4705_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4705_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
}
}
}
else
{
lean_object* v_a_4716_; lean_object* v___x_4718_; uint8_t v_isShared_4719_; uint8_t v_isSharedCheck_4723_; 
lean_dec(v_a_4693_);
lean_dec_ref(v_body_4690_);
lean_dec_ref(v_value_4689_);
lean_dec_ref(v_type_4688_);
lean_dec(v_declName_4687_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___x_4648_);
lean_dec_ref(v___f_4647_);
lean_dec(v_mvarId_4645_);
v_a_4716_ = lean_ctor_get(v___x_4694_, 0);
v_isSharedCheck_4723_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4723_ == 0)
{
v___x_4718_ = v___x_4694_;
v_isShared_4719_ = v_isSharedCheck_4723_;
goto v_resetjp_4717_;
}
else
{
lean_inc(v_a_4716_);
lean_dec(v___x_4694_);
v___x_4718_ = lean_box(0);
v_isShared_4719_ = v_isSharedCheck_4723_;
goto v_resetjp_4717_;
}
v_resetjp_4717_:
{
lean_object* v___x_4721_; 
if (v_isShared_4719_ == 0)
{
v___x_4721_ = v___x_4718_;
goto v_reusejp_4720_;
}
else
{
lean_object* v_reuseFailAlloc_4722_; 
v_reuseFailAlloc_4722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4722_, 0, v_a_4716_);
v___x_4721_ = v_reuseFailAlloc_4722_;
goto v_reusejp_4720_;
}
v_reusejp_4720_:
{
return v___x_4721_;
}
}
}
}
else
{
lean_object* v_a_4724_; lean_object* v___x_4726_; uint8_t v_isShared_4727_; uint8_t v_isSharedCheck_4731_; 
lean_dec_ref(v_body_4690_);
lean_dec_ref(v_value_4689_);
lean_dec_ref(v_type_4688_);
lean_dec(v_declName_4687_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___x_4648_);
lean_dec_ref(v___f_4647_);
lean_dec_ref(v_config_4646_);
lean_dec(v_mvarId_4645_);
v_a_4724_ = lean_ctor_get(v___x_4692_, 0);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___x_4692_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4726_ = v___x_4692_;
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
else
{
lean_inc(v_a_4724_);
lean_dec(v___x_4692_);
v___x_4726_ = lean_box(0);
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
v_resetjp_4725_:
{
lean_object* v___x_4729_; 
if (v_isShared_4727_ == 0)
{
v___x_4729_ = v___x_4726_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v_a_4724_);
v___x_4729_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
return v___x_4729_;
}
}
}
}
default: 
{
lean_object* v___x_4732_; lean_object* v___x_4733_; 
lean_dec(v_a_4655_);
lean_dec_ref(v___f_4647_);
lean_dec_ref(v_config_4646_);
v___x_4732_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4733_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4648_, v_mvarId_4645_, v___x_4732_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
return v___x_4733_;
}
}
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___x_4648_);
lean_dec_ref(v___f_4647_);
lean_dec_ref(v_config_4646_);
lean_dec(v_mvarId_4645_);
v_a_4734_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4654_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4654_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object* v_mvarId_4742_, lean_object* v_config_4743_, lean_object* v___f_4744_, lean_object* v___x_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
lean_object* v_res_4751_; 
v_res_4751_ = l_Lean_MVarId_liftLetsLocalDecl___lam__1(v_mvarId_4742_, v_config_4743_, v___f_4744_, v___x_4745_, v___y_4746_, v___y_4747_, v___y_4748_, v___y_4749_);
return v_res_4751_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object* v_config_4752_, lean_object* v___x_4753_, lean_object* v_mvarId_4754_, lean_object* v_fvars_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_){
_start:
{
lean_object* v___f_4761_; lean_object* v___f_4762_; lean_object* v___x_4763_; 
lean_inc_n(v_mvarId_4754_, 2);
v___f_4761_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4761_, 0, v_mvarId_4754_);
lean_closure_set(v___f_4761_, 1, v_fvars_4755_);
v___f_4762_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4762_, 0, v_mvarId_4754_);
lean_closure_set(v___f_4762_, 1, v_config_4752_);
lean_closure_set(v___f_4762_, 2, v___f_4761_);
lean_closure_set(v___f_4762_, 3, v___x_4753_);
v___x_4763_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4754_, v___f_4762_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object* v_config_4764_, lean_object* v___x_4765_, lean_object* v_mvarId_4766_, lean_object* v_fvars_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lean_MVarId_liftLetsLocalDecl___lam__2(v_config_4764_, v___x_4765_, v_mvarId_4766_, v_fvars_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object* v_mvarId_4774_, lean_object* v_fvarId_4775_, lean_object* v_config_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_){
_start:
{
lean_object* v___x_4782_; lean_object* v___f_4783_; lean_object* v___x_4784_; 
v___x_4782_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
v___f_4783_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4783_, 0, v_config_4776_);
lean_closure_set(v___f_4783_, 1, v___x_4782_);
lean_inc(v_mvarId_4774_);
v___x_4784_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4774_, v___x_4782_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; uint8_t v___x_4788_; lean_object* v___x_4789_; 
lean_dec_ref_known(v___x_4784_, 1);
v___x_4785_ = lean_unsigned_to_nat(1u);
v___x_4786_ = lean_mk_empty_array_with_capacity(v___x_4785_);
v___x_4787_ = lean_array_push(v___x_4786_, v_fvarId_4775_);
v___x_4788_ = 0;
v___x_4789_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4774_, v___x_4787_, v___f_4783_, v___x_4788_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_);
if (lean_obj_tag(v___x_4789_) == 0)
{
lean_object* v_a_4790_; lean_object* v___x_4792_; uint8_t v_isShared_4793_; uint8_t v_isSharedCheck_4798_; 
v_a_4790_ = lean_ctor_get(v___x_4789_, 0);
v_isSharedCheck_4798_ = !lean_is_exclusive(v___x_4789_);
if (v_isSharedCheck_4798_ == 0)
{
v___x_4792_ = v___x_4789_;
v_isShared_4793_ = v_isSharedCheck_4798_;
goto v_resetjp_4791_;
}
else
{
lean_inc(v_a_4790_);
lean_dec(v___x_4789_);
v___x_4792_ = lean_box(0);
v_isShared_4793_ = v_isSharedCheck_4798_;
goto v_resetjp_4791_;
}
v_resetjp_4791_:
{
lean_object* v_snd_4794_; lean_object* v___x_4796_; 
v_snd_4794_ = lean_ctor_get(v_a_4790_, 1);
lean_inc(v_snd_4794_);
lean_dec(v_a_4790_);
if (v_isShared_4793_ == 0)
{
lean_ctor_set(v___x_4792_, 0, v_snd_4794_);
v___x_4796_ = v___x_4792_;
goto v_reusejp_4795_;
}
else
{
lean_object* v_reuseFailAlloc_4797_; 
v_reuseFailAlloc_4797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4797_, 0, v_snd_4794_);
v___x_4796_ = v_reuseFailAlloc_4797_;
goto v_reusejp_4795_;
}
v_reusejp_4795_:
{
return v___x_4796_;
}
}
}
else
{
lean_object* v_a_4799_; lean_object* v___x_4801_; uint8_t v_isShared_4802_; uint8_t v_isSharedCheck_4806_; 
v_a_4799_ = lean_ctor_get(v___x_4789_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v___x_4789_);
if (v_isSharedCheck_4806_ == 0)
{
v___x_4801_ = v___x_4789_;
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
else
{
lean_inc(v_a_4799_);
lean_dec(v___x_4789_);
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
lean_dec_ref(v___f_4783_);
lean_dec(v_fvarId_4775_);
lean_dec(v_mvarId_4774_);
v_a_4807_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4809_ = v___x_4784_;
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4784_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object* v_mvarId_4815_, lean_object* v_fvarId_4816_, lean_object* v_config_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_){
_start:
{
lean_object* v_res_4823_; 
v_res_4823_ = l_Lean_MVarId_liftLetsLocalDecl(v_mvarId_4815_, v_fvarId_4816_, v_config_4817_, v___y_4818_, v___y_4819_, v___y_4820_, v___y_4821_);
lean_dec(v___y_4821_);
lean_dec_ref(v___y_4820_);
lean_dec(v___y_4819_);
lean_dec_ref(v___y_4818_);
return v_res_4823_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object* v_mvarId_4824_, lean_object* v___x_4825_, uint8_t v_failIfUnchanged_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_){
_start:
{
lean_object* v___x_4832_; 
lean_inc(v___x_4825_);
lean_inc(v_mvarId_4824_);
v___x_4832_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4824_, v___x_4825_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
if (lean_obj_tag(v___x_4832_) == 0)
{
lean_object* v___x_4833_; 
lean_dec_ref_known(v___x_4832_, 1);
lean_inc(v_mvarId_4824_);
v___x_4833_ = l_Lean_MVarId_getType(v_mvarId_4824_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
if (lean_obj_tag(v___x_4833_) == 0)
{
lean_object* v_a_4834_; lean_object* v___x_4835_; 
v_a_4834_ = lean_ctor_get(v___x_4833_, 0);
lean_inc_n(v_a_4834_, 2);
lean_dec_ref_known(v___x_4833_, 1);
v___x_4835_ = l_Lean_Meta_letToHave(v_a_4834_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
if (lean_obj_tag(v___x_4835_) == 0)
{
if (v_failIfUnchanged_4826_ == 0)
{
lean_object* v_a_4836_; lean_object* v___x_4837_; 
lean_dec(v_a_4834_);
lean_dec(v___x_4825_);
v_a_4836_ = lean_ctor_get(v___x_4835_, 0);
lean_inc(v_a_4836_);
lean_dec_ref_known(v___x_4835_, 1);
v___x_4837_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4824_, v_a_4836_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
return v___x_4837_;
}
else
{
lean_object* v_a_4838_; uint8_t v___x_4839_; 
v_a_4838_ = lean_ctor_get(v___x_4835_, 0);
lean_inc(v_a_4838_);
lean_dec_ref_known(v___x_4835_, 1);
v___x_4839_ = lean_expr_eqv(v_a_4834_, v_a_4838_);
lean_dec(v_a_4834_);
if (v___x_4839_ == 0)
{
lean_object* v___x_4840_; 
lean_dec(v___x_4825_);
v___x_4840_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4824_, v_a_4838_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
return v___x_4840_;
}
else
{
lean_object* v___x_4841_; 
lean_inc(v_mvarId_4824_);
v___x_4841_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4825_, v_mvarId_4824_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
if (lean_obj_tag(v___x_4841_) == 0)
{
lean_object* v___x_4842_; 
lean_dec_ref_known(v___x_4841_, 1);
v___x_4842_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4824_, v_a_4838_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
return v___x_4842_;
}
else
{
lean_object* v_a_4843_; lean_object* v___x_4845_; uint8_t v_isShared_4846_; uint8_t v_isSharedCheck_4850_; 
lean_dec(v_a_4838_);
lean_dec(v_mvarId_4824_);
v_a_4843_ = lean_ctor_get(v___x_4841_, 0);
v_isSharedCheck_4850_ = !lean_is_exclusive(v___x_4841_);
if (v_isSharedCheck_4850_ == 0)
{
v___x_4845_ = v___x_4841_;
v_isShared_4846_ = v_isSharedCheck_4850_;
goto v_resetjp_4844_;
}
else
{
lean_inc(v_a_4843_);
lean_dec(v___x_4841_);
v___x_4845_ = lean_box(0);
v_isShared_4846_ = v_isSharedCheck_4850_;
goto v_resetjp_4844_;
}
v_resetjp_4844_:
{
lean_object* v___x_4848_; 
if (v_isShared_4846_ == 0)
{
v___x_4848_ = v___x_4845_;
goto v_reusejp_4847_;
}
else
{
lean_object* v_reuseFailAlloc_4849_; 
v_reuseFailAlloc_4849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4849_, 0, v_a_4843_);
v___x_4848_ = v_reuseFailAlloc_4849_;
goto v_reusejp_4847_;
}
v_reusejp_4847_:
{
return v___x_4848_;
}
}
}
}
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec(v_a_4834_);
lean_dec(v___x_4825_);
lean_dec(v_mvarId_4824_);
v_a_4851_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4835_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4835_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
else
{
lean_object* v_a_4859_; lean_object* v___x_4861_; uint8_t v_isShared_4862_; uint8_t v_isSharedCheck_4866_; 
lean_dec(v___x_4825_);
lean_dec(v_mvarId_4824_);
v_a_4859_ = lean_ctor_get(v___x_4833_, 0);
v_isSharedCheck_4866_ = !lean_is_exclusive(v___x_4833_);
if (v_isSharedCheck_4866_ == 0)
{
v___x_4861_ = v___x_4833_;
v_isShared_4862_ = v_isSharedCheck_4866_;
goto v_resetjp_4860_;
}
else
{
lean_inc(v_a_4859_);
lean_dec(v___x_4833_);
v___x_4861_ = lean_box(0);
v_isShared_4862_ = v_isSharedCheck_4866_;
goto v_resetjp_4860_;
}
v_resetjp_4860_:
{
lean_object* v___x_4864_; 
if (v_isShared_4862_ == 0)
{
v___x_4864_ = v___x_4861_;
goto v_reusejp_4863_;
}
else
{
lean_object* v_reuseFailAlloc_4865_; 
v_reuseFailAlloc_4865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4865_, 0, v_a_4859_);
v___x_4864_ = v_reuseFailAlloc_4865_;
goto v_reusejp_4863_;
}
v_reusejp_4863_:
{
return v___x_4864_;
}
}
}
}
else
{
lean_object* v_a_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4874_; 
lean_dec(v___x_4825_);
lean_dec(v_mvarId_4824_);
v_a_4867_ = lean_ctor_get(v___x_4832_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v___x_4832_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4869_ = v___x_4832_;
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_a_4867_);
lean_dec(v___x_4832_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v___x_4872_; 
if (v_isShared_4870_ == 0)
{
v___x_4872_ = v___x_4869_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v_a_4867_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
return v___x_4872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object* v_mvarId_4875_, lean_object* v___x_4876_, lean_object* v_failIfUnchanged_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4883_; lean_object* v_res_4884_; 
v_failIfUnchanged_boxed_4883_ = lean_unbox(v_failIfUnchanged_4877_);
v_res_4884_ = l_Lean_MVarId_letToHave___lam__0(v_mvarId_4875_, v___x_4876_, v_failIfUnchanged_boxed_4883_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_);
lean_dec(v___y_4881_);
lean_dec_ref(v___y_4880_);
lean_dec(v___y_4879_);
lean_dec_ref(v___y_4878_);
return v_res_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object* v_mvarId_4888_, uint8_t v_failIfUnchanged_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_){
_start:
{
lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___f_4897_; lean_object* v___x_4898_; 
v___x_4895_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4896_ = lean_box(v_failIfUnchanged_4889_);
lean_inc(v_mvarId_4888_);
v___f_4897_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHave___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4897_, 0, v_mvarId_4888_);
lean_closure_set(v___f_4897_, 1, v___x_4895_);
lean_closure_set(v___f_4897_, 2, v___x_4896_);
v___x_4898_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4888_, v___f_4897_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_);
return v___x_4898_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object* v_mvarId_4899_, lean_object* v_failIfUnchanged_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4906_; lean_object* v_res_4907_; 
v_failIfUnchanged_boxed_4906_ = lean_unbox(v_failIfUnchanged_4900_);
v_res_4907_ = l_Lean_MVarId_letToHave(v_mvarId_4899_, v_failIfUnchanged_boxed_4906_, v___y_4901_, v___y_4902_, v___y_4903_, v___y_4904_);
lean_dec(v___y_4904_);
lean_dec_ref(v___y_4903_);
lean_dec(v___y_4902_);
lean_dec_ref(v___y_4901_);
return v_res_4907_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object* v_mvarId_4908_, lean_object* v___x_4909_, lean_object* v_fvarId_4910_, uint8_t v_failIfUnchanged_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_){
_start:
{
lean_object* v___x_4917_; 
lean_inc(v___x_4909_);
lean_inc(v_mvarId_4908_);
v___x_4917_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4908_, v___x_4909_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
if (lean_obj_tag(v___x_4917_) == 0)
{
lean_object* v___x_4918_; 
lean_dec_ref_known(v___x_4917_, 1);
lean_inc(v_fvarId_4910_);
v___x_4918_ = l_Lean_FVarId_getType___redArg(v_fvarId_4910_, v___y_4912_, v___y_4914_, v___y_4915_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; lean_object* v___x_4920_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
lean_inc_n(v_a_4919_, 2);
lean_dec_ref_known(v___x_4918_, 1);
v___x_4920_ = l_Lean_Meta_letToHave(v_a_4919_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
if (lean_obj_tag(v___x_4920_) == 0)
{
if (v_failIfUnchanged_4911_ == 0)
{
lean_object* v_a_4921_; lean_object* v___x_4922_; 
lean_dec(v_a_4919_);
lean_dec(v___x_4909_);
v_a_4921_ = lean_ctor_get(v___x_4920_, 0);
lean_inc(v_a_4921_);
lean_dec_ref_known(v___x_4920_, 1);
v___x_4922_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4908_, v_fvarId_4910_, v_a_4921_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
return v___x_4922_;
}
else
{
lean_object* v_a_4923_; uint8_t v___x_4924_; 
v_a_4923_ = lean_ctor_get(v___x_4920_, 0);
lean_inc(v_a_4923_);
lean_dec_ref_known(v___x_4920_, 1);
v___x_4924_ = lean_expr_eqv(v_a_4919_, v_a_4923_);
lean_dec(v_a_4919_);
if (v___x_4924_ == 0)
{
lean_object* v___x_4925_; 
lean_dec(v___x_4909_);
v___x_4925_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4908_, v_fvarId_4910_, v_a_4923_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
return v___x_4925_;
}
else
{
lean_object* v___x_4926_; 
lean_inc(v_mvarId_4908_);
v___x_4926_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4909_, v_mvarId_4908_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
if (lean_obj_tag(v___x_4926_) == 0)
{
lean_object* v___x_4927_; 
lean_dec_ref_known(v___x_4926_, 1);
v___x_4927_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4908_, v_fvarId_4910_, v_a_4923_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
return v___x_4927_;
}
else
{
lean_object* v_a_4928_; lean_object* v___x_4930_; uint8_t v_isShared_4931_; uint8_t v_isSharedCheck_4935_; 
lean_dec(v_a_4923_);
lean_dec(v_fvarId_4910_);
lean_dec(v_mvarId_4908_);
v_a_4928_ = lean_ctor_get(v___x_4926_, 0);
v_isSharedCheck_4935_ = !lean_is_exclusive(v___x_4926_);
if (v_isSharedCheck_4935_ == 0)
{
v___x_4930_ = v___x_4926_;
v_isShared_4931_ = v_isSharedCheck_4935_;
goto v_resetjp_4929_;
}
else
{
lean_inc(v_a_4928_);
lean_dec(v___x_4926_);
v___x_4930_ = lean_box(0);
v_isShared_4931_ = v_isSharedCheck_4935_;
goto v_resetjp_4929_;
}
v_resetjp_4929_:
{
lean_object* v___x_4933_; 
if (v_isShared_4931_ == 0)
{
v___x_4933_ = v___x_4930_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4934_; 
v_reuseFailAlloc_4934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4934_, 0, v_a_4928_);
v___x_4933_ = v_reuseFailAlloc_4934_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
return v___x_4933_;
}
}
}
}
}
}
else
{
lean_object* v_a_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4943_; 
lean_dec(v_a_4919_);
lean_dec(v_fvarId_4910_);
lean_dec(v___x_4909_);
lean_dec(v_mvarId_4908_);
v_a_4936_ = lean_ctor_get(v___x_4920_, 0);
v_isSharedCheck_4943_ = !lean_is_exclusive(v___x_4920_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4938_ = v___x_4920_;
v_isShared_4939_ = v_isSharedCheck_4943_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_a_4936_);
lean_dec(v___x_4920_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4943_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
lean_object* v___x_4941_; 
if (v_isShared_4939_ == 0)
{
v___x_4941_ = v___x_4938_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v_a_4936_);
v___x_4941_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
return v___x_4941_;
}
}
}
}
else
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4951_; 
lean_dec(v_fvarId_4910_);
lean_dec(v___x_4909_);
lean_dec(v_mvarId_4908_);
v_a_4944_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4946_ = v___x_4918_;
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4918_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4949_; 
if (v_isShared_4947_ == 0)
{
v___x_4949_ = v___x_4946_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4944_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
}
else
{
lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4959_; 
lean_dec(v_fvarId_4910_);
lean_dec(v___x_4909_);
lean_dec(v_mvarId_4908_);
v_a_4952_ = lean_ctor_get(v___x_4917_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v___x_4917_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4954_ = v___x_4917_;
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_dec(v___x_4917_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4957_; 
if (v_isShared_4955_ == 0)
{
v___x_4957_ = v___x_4954_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v_a_4952_);
v___x_4957_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
return v___x_4957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object* v_mvarId_4960_, lean_object* v___x_4961_, lean_object* v_fvarId_4962_, lean_object* v_failIfUnchanged_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4969_; lean_object* v_res_4970_; 
v_failIfUnchanged_boxed_4969_ = lean_unbox(v_failIfUnchanged_4963_);
v_res_4970_ = l_Lean_MVarId_letToHaveLocalDecl___lam__0(v_mvarId_4960_, v___x_4961_, v_fvarId_4962_, v_failIfUnchanged_boxed_4969_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_);
lean_dec(v___y_4967_);
lean_dec_ref(v___y_4966_);
lean_dec(v___y_4965_);
lean_dec_ref(v___y_4964_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object* v_mvarId_4971_, lean_object* v_fvarId_4972_, uint8_t v_failIfUnchanged_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_){
_start:
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___f_4981_; lean_object* v___x_4982_; 
v___x_4979_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4980_ = lean_box(v_failIfUnchanged_4973_);
lean_inc(v_mvarId_4971_);
v___f_4981_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4981_, 0, v_mvarId_4971_);
lean_closure_set(v___f_4981_, 1, v___x_4979_);
lean_closure_set(v___f_4981_, 2, v_fvarId_4972_);
lean_closure_set(v___f_4981_, 3, v___x_4980_);
v___x_4982_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4971_, v___f_4981_, v___y_4974_, v___y_4975_, v___y_4976_, v___y_4977_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object* v_mvarId_4983_, lean_object* v_fvarId_4984_, lean_object* v_failIfUnchanged_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4991_; lean_object* v_res_4992_; 
v_failIfUnchanged_boxed_4991_ = lean_unbox(v_failIfUnchanged_4985_);
v_res_4992_ = l_Lean_MVarId_letToHaveLocalDecl(v_mvarId_4983_, v_fvarId_4984_, v_failIfUnchanged_boxed_4991_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_);
lean_dec(v___y_4989_);
lean_dec_ref(v___y_4988_);
lean_dec(v___y_4987_);
lean_dec_ref(v___y_4986_);
return v_res_4992_;
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
