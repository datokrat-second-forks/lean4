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
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableBool___lam__0___boxed(lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value;
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
lean_object* v___x_18_; uint8_t v_onlyGivenNames_19_; 
v___x_18_ = lean_st_ref_get(v_a_16_);
v_onlyGivenNames_19_ = lean_ctor_get_uint8(v_a_15_, 8);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_30_, v_a_31_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_34_, v_a_36_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Meta_ExtractLets_hasNextName(v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v___x_60_; lean_object* v_givenNames_61_; 
v___x_60_ = lean_st_ref_get(v_a_58_);
v_givenNames_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_givenNames_61_);
if (lean_obj_tag(v_givenNames_61_) == 0)
{
uint8_t v_onlyGivenNames_62_; 
lean_dec(v___x_60_);
v_onlyGivenNames_62_ = lean_ctor_get_uint8(v_a_57_, 8);
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
v___x_76_ = lean_st_ref_swap(v_a_58_, v___x_75_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_86_, v_a_88_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_ExtractLets_nextName_x3f(v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec_ref(v_a_100_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object* v_binderName_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_a_114_; 
v___x_113_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_108_, v_a_109_);
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
v_preserveBinderNames_122_ = lean_ctor_get_uint8(v_a_108_, 9);
if (v_preserveBinderNames_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_Name_hasMacroScopes(v_val_115_);
lean_dec(v_val_115_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; 
lean_dec_ref(v___x_113_);
v___x_124_ = l_Lean_Core_mkFreshUserName(v_binderName_107_, v_a_110_, v_a_111_);
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
v___x_145_ = l_Lean_Core_mkFreshUserName(v___x_144_, v_a_110_, v_a_111_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object* v_binderName_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object* v_binderName_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_182_, v_a_183_, v_a_185_, v_a_188_, v_a_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object* v_binderName_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(v_binderName_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
lean_dec(v_a_195_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object* v_fvars_256_, lean_object* v_n_257_, lean_object* v_t_258_, lean_object* v_v_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v___y_266_; lean_object* v___x_271_; lean_object* v_a_272_; uint8_t v___x_273_; 
v___x_271_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_260_, v_a_261_);
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref(v___x_271_);
v___x_273_ = lean_unbox(v_a_272_);
lean_dec(v_a_272_);
if (v___x_273_ == 0)
{
lean_dec_ref(v_v_259_);
lean_dec_ref(v_t_258_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_t_258_);
if (v___x_274_ == 0)
{
lean_dec_ref(v_v_259_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_v_259_);
if (v___x_275_ == 0)
{
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
lean_object* v___x_276_; 
lean_inc(v_n_257_);
v___x_276_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_n_257_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
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
v___y_266_ = v_a_260_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object* v_fvars_296_, lean_object* v_n_297_, lean_object* v_t_298_, lean_object* v_v_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_296_, v_n_297_, v_t_298_, v_v_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_fvars_296_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object* v_fvars_306_, lean_object* v_n_307_, lean_object* v_t_308_, lean_object* v_v_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_306_, v_n_307_, v_t_308_, v_v_309_, v_a_310_, v_a_312_, v_a_315_, v_a_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object* v_fvars_319_, lean_object* v_n_320_, lean_object* v_t_321_, lean_object* v_v_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Meta_ExtractLets_isExtractableLet(v_fvars_319_, v_n_320_, v_t_321_, v_v_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object* v_decl_458_, uint8_t v_isLet_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_463_; lean_object* v_fst_465_; lean_object* v_snd_466_; lean_object* v_givenNames_469_; lean_object* v_decls_470_; lean_object* v_valueMap_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_489_; 
v___x_463_ = lean_st_ref_take(v_a_461_);
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
v___x_467_ = lean_st_ref_put(v_a_461_, v_snd_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_fst_465_);
return v___x_468_;
}
v_resetjp_472_:
{
uint8_t v_merge_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_merge_475_ = lean_ctor_get_uint8(v_a_460_, 6);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object* v_decl_490_, lean_object* v_isLet_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v___y_494_){
_start:
{
uint8_t v_isLet_boxed_495_; lean_object* v_res_496_; 
v_isLet_boxed_495_ = lean_unbox(v_isLet_491_);
v_res_496_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_490_, v_isLet_boxed_495_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object* v_decl_497_, uint8_t v_isLet_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_497_, v_isLet_498_, v_a_499_, v_a_501_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object* v_decl_508_, lean_object* v_isLet_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v___y_517_){
_start:
{
uint8_t v_isLet_boxed_518_; lean_object* v_res_519_; 
v_isLet_boxed_518_ = lean_unbox(v_isLet_509_);
v_res_519_ = l_Lean_Meta_ExtractLets_addDecl(v_decl_508_, v_isLet_boxed_518_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
lean_dec(v_a_512_);
lean_dec(v_a_511_);
lean_dec_ref(v_a_510_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object* v_fvar_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_fvarSet_651_; lean_object* v_fvarSet_652_; lean_object* v___x_653_; lean_object* v_decls_654_; lean_object* v___x_655_; lean_object* v___x_656_; size_t v_sz_657_; size_t v___x_658_; lean_object* v___x_659_; 
v_fvarSet_651_ = lean_box(1);
v_fvarSet_652_ = l_Lean_FVarIdSet_insert(v_fvarSet_651_, v_fvar_642_);
v___x_653_ = lean_st_ref_get(v_a_645_);
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
v___x_667_ = lean_st_ref_take(v_a_645_);
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
v___x_675_ = lean_st_ref_put(v_a_645_, v___x_674_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object* v_fvar_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Meta_ExtractLets_flushDecls(v_fvar_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
lean_dec(v_a_696_);
lean_dec_ref(v_a_695_);
lean_dec(v_a_694_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object* v_fvarId_881_, lean_object* v_a_882_){
_start:
{
lean_object* v___x_884_; lean_object* v_givenNames_885_; lean_object* v_decls_886_; lean_object* v_valueMap_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_900_; 
v___x_884_ = lean_st_ref_take(v_a_882_);
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
v___x_897_ = lean_st_ref_put(v_a_882_, v___x_896_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_891_);
return v___x_898_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object* v_fvarId_901_, lean_object* v_a_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_901_, v_a_902_);
lean_dec(v_a_902_);
lean_dec(v_fvarId_901_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object* v_fvarId_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_905_, v_a_908_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object* v_fvarId_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_Meta_ExtractLets_ensureIsLet(v_fvarId_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object* v_fvarId_1072_, lean_object* v_k_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v_lctx_1083_; uint8_t v___x_1084_; 
v___x_1082_ = lean_st_ref_get(v_a_1076_);
v_lctx_1083_ = lean_ctor_get(v_a_1077_, 2);
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
v___x_1093_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v___x_1092_, v_k_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_);
lean_dec_ref(v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; 
lean_dec(v___x_1087_);
lean_dec_ref(v_decls_1085_);
lean_inc(v_a_1080_);
lean_inc_ref(v_a_1079_);
lean_inc(v_a_1078_);
lean_inc_ref(v_a_1077_);
lean_inc(v_a_1076_);
lean_inc(v_a_1075_);
lean_inc_ref(v_a_1074_);
v___x_1094_ = lean_apply_8(v_k_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, lean_box(0));
return v___x_1094_;
}
}
else
{
lean_object* v___x_1095_; 
lean_dec(v___x_1082_);
lean_inc(v_a_1080_);
lean_inc_ref(v_a_1079_);
lean_inc(v_a_1078_);
lean_inc_ref(v_a_1077_);
lean_inc(v_a_1076_);
lean_inc(v_a_1075_);
lean_inc_ref(v_a_1074_);
v___x_1095_ = lean_apply_8(v_k_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, lean_box(0));
return v___x_1095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object* v_fvarId_1096_, lean_object* v_k_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1096_, v_k_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec(v_a_1099_);
lean_dec_ref(v_a_1098_);
lean_dec(v_fvarId_1096_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object* v_00_u03b1_1107_, lean_object* v_fvarId_1108_, lean_object* v_k_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1108_, v_k_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_fvarId_1120_, lean_object* v_k_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Meta_ExtractLets_withDeclInContext(v_00_u03b1_1119_, v_fvarId_1120_, v_k_1121_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
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
size_t v_x_9187__boxed_1553_; size_t v_x_9188__boxed_1554_; lean_object* v_res_1555_; 
v_x_9187__boxed_1553_ = lean_unbox_usize(v_x_1543_);
lean_dec(v_x_1543_);
v_x_9188__boxed_1554_ = lean_unbox_usize(v_x_1544_);
lean_dec(v_x_1544_);
v_res_1555_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_x_1542_, v_x_9187__boxed_1553_, v_x_9188__boxed_1554_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_lctx_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v_lctx_1640_ = lean_ctor_get(v_a_1635_, 2);
v___x_1641_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_1640_);
v___x_1642_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1640_, v___x_1641_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec_ref(v_a_1646_);
lean_dec(v_a_1645_);
lean_dec(v_a_1644_);
lean_dec_ref(v_a_1643_);
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
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t v___y_1802_, uint8_t v___y_1803_){
_start:
{
if (v___y_1803_ == 0)
{
if (v___y_1802_ == 0)
{
uint8_t v___x_1804_; 
v___x_1804_ = 1;
return v___x_1804_;
}
else
{
return v___y_1803_;
}
}
else
{
return v___y_1802_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
uint8_t v___y_41163__boxed_1807_; uint8_t v___y_41164__boxed_1808_; uint8_t v_res_1809_; lean_object* v_r_1810_; 
v___y_41163__boxed_1807_ = lean_unbox(v___y_1805_);
v___y_41164__boxed_1808_ = lean_unbox(v___y_1806_);
v_res_1809_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(v___y_41163__boxed_1807_, v___y_41164__boxed_1808_);
v_r_1810_ = lean_box(v_res_1809_);
return v_r_1810_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_instMonadEIO___redArg();
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object* v_msg_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v_toApplicative_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1902_; 
v___x_1828_ = lean_box(0);
v___x_1829_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0);
v___x_1830_ = l_StateRefT_x27_instMonad___redArg(v___x_1829_);
v_toApplicative_1831_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1902_ == 0)
{
lean_object* v_unused_1903_; 
v_unused_1903_ = lean_ctor_get(v___x_1830_, 1);
lean_dec(v_unused_1903_);
v___x_1833_ = v___x_1830_;
v_isShared_1834_ = v_isSharedCheck_1902_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_toApplicative_1831_);
lean_dec(v___x_1830_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1902_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v_toFunctor_1835_; lean_object* v_toSeq_1836_; lean_object* v_toSeqLeft_1837_; lean_object* v_toSeqRight_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1900_; 
v_toFunctor_1835_ = lean_ctor_get(v_toApplicative_1831_, 0);
v_toSeq_1836_ = lean_ctor_get(v_toApplicative_1831_, 2);
v_toSeqLeft_1837_ = lean_ctor_get(v_toApplicative_1831_, 3);
v_toSeqRight_1838_ = lean_ctor_get(v_toApplicative_1831_, 4);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_toApplicative_1831_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; 
v_unused_1901_ = lean_ctor_get(v_toApplicative_1831_, 1);
lean_dec(v_unused_1901_);
v___x_1840_ = v_toApplicative_1831_;
v_isShared_1841_ = v_isSharedCheck_1900_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_toSeqRight_1838_);
lean_inc(v_toSeqLeft_1837_);
lean_inc(v_toSeq_1836_);
lean_inc(v_toFunctor_1835_);
lean_dec(v_toApplicative_1831_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1900_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___f_1842_; lean_object* v___f_1843_; lean_object* v___f_1844_; lean_object* v___f_1845_; lean_object* v___x_1846_; lean_object* v___f_1847_; lean_object* v___f_1848_; lean_object* v___f_1849_; lean_object* v___x_1851_; 
v___f_1842_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1));
v___f_1843_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2));
lean_inc_ref(v_toFunctor_1835_);
v___f_1844_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1844_, 0, v_toFunctor_1835_);
v___f_1845_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1845_, 0, v_toFunctor_1835_);
v___x_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___f_1844_);
lean_ctor_set(v___x_1846_, 1, v___f_1845_);
v___f_1847_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1847_, 0, v_toSeqRight_1838_);
v___f_1848_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1848_, 0, v_toSeqLeft_1837_);
v___f_1849_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1849_, 0, v_toSeq_1836_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 4, v___f_1847_);
lean_ctor_set(v___x_1840_, 3, v___f_1848_);
lean_ctor_set(v___x_1840_, 2, v___f_1849_);
lean_ctor_set(v___x_1840_, 1, v___f_1842_);
lean_ctor_set(v___x_1840_, 0, v___x_1846_);
v___x_1851_ = v___x_1840_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1846_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v___f_1842_);
lean_ctor_set(v_reuseFailAlloc_1899_, 2, v___f_1849_);
lean_ctor_set(v_reuseFailAlloc_1899_, 3, v___f_1848_);
lean_ctor_set(v_reuseFailAlloc_1899_, 4, v___f_1847_);
v___x_1851_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1853_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___f_1843_);
lean_ctor_set(v___x_1833_, 0, v___x_1851_);
v___x_1853_ = v___x_1833_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1851_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___f_1843_);
v___x_1853_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1854_; lean_object* v_toApplicative_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1896_; 
v___x_1854_ = l_StateRefT_x27_instMonad___redArg(v___x_1853_);
v_toApplicative_1855_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1896_ == 0)
{
lean_object* v_unused_1897_; 
v_unused_1897_ = lean_ctor_get(v___x_1854_, 1);
lean_dec(v_unused_1897_);
v___x_1857_ = v___x_1854_;
v_isShared_1858_ = v_isSharedCheck_1896_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_toApplicative_1855_);
lean_dec(v___x_1854_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1896_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v_toFunctor_1859_; lean_object* v_toSeq_1860_; lean_object* v_toSeqLeft_1861_; lean_object* v_toSeqRight_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1894_; 
v_toFunctor_1859_ = lean_ctor_get(v_toApplicative_1855_, 0);
v_toSeq_1860_ = lean_ctor_get(v_toApplicative_1855_, 2);
v_toSeqLeft_1861_ = lean_ctor_get(v_toApplicative_1855_, 3);
v_toSeqRight_1862_ = lean_ctor_get(v_toApplicative_1855_, 4);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_toApplicative_1855_);
if (v_isSharedCheck_1894_ == 0)
{
lean_object* v_unused_1895_; 
v_unused_1895_ = lean_ctor_get(v_toApplicative_1855_, 1);
lean_dec(v_unused_1895_);
v___x_1864_ = v_toApplicative_1855_;
v_isShared_1865_ = v_isSharedCheck_1894_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_toSeqRight_1862_);
lean_inc(v_toSeqLeft_1861_);
lean_inc(v_toSeq_1860_);
lean_inc(v_toFunctor_1859_);
lean_dec(v_toApplicative_1855_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1894_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___f_1866_; lean_object* v___f_1867_; lean_object* v___x_1868_; lean_object* v___f_1869_; lean_object* v___f_1870_; lean_object* v___x_1871_; lean_object* v___f_1872_; lean_object* v___f_1873_; lean_object* v___f_1874_; lean_object* v___f_1875_; lean_object* v___f_1876_; lean_object* v___x_1877_; lean_object* v___f_1878_; lean_object* v___f_1879_; lean_object* v___f_1880_; lean_object* v___x_1882_; 
v___f_1866_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed), 2, 0);
v___f_1867_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1867_, 0, v___f_1866_);
v___x_1868_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3));
v___f_1869_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1869_, 0, v___f_1867_);
lean_closure_set(v___f_1869_, 1, v___x_1868_);
v___f_1870_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4));
v___x_1871_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5));
v___f_1872_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1872_, 0, v___f_1870_);
lean_closure_set(v___f_1872_, 1, v___x_1871_);
v___f_1873_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6));
v___f_1874_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7));
lean_inc_ref(v_toFunctor_1859_);
v___f_1875_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1875_, 0, v_toFunctor_1859_);
v___f_1876_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1876_, 0, v_toFunctor_1859_);
v___x_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___f_1875_);
lean_ctor_set(v___x_1877_, 1, v___f_1876_);
v___f_1878_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1878_, 0, v_toSeqRight_1862_);
v___f_1879_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1879_, 0, v_toSeqLeft_1861_);
v___f_1880_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1880_, 0, v_toSeq_1860_);
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 4, v___f_1878_);
lean_ctor_set(v___x_1864_, 3, v___f_1879_);
lean_ctor_set(v___x_1864_, 2, v___f_1880_);
lean_ctor_set(v___x_1864_, 1, v___f_1873_);
lean_ctor_set(v___x_1864_, 0, v___x_1877_);
v___x_1882_ = v___x_1864_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v___f_1873_);
lean_ctor_set(v_reuseFailAlloc_1893_, 2, v___f_1880_);
lean_ctor_set(v_reuseFailAlloc_1893_, 3, v___f_1879_);
lean_ctor_set(v_reuseFailAlloc_1893_, 4, v___f_1878_);
v___x_1882_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1884_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v___f_1874_);
lean_ctor_set(v___x_1857_, 0, v___x_1882_);
v___x_1884_ = v___x_1857_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1892_, 1, v___f_1874_);
v___x_1884_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___f_1889_; lean_object* v___x_38004__overap_1890_; lean_object* v___x_1891_; 
v___x_1885_ = l_StateRefT_x27_instMonad___redArg(v___x_1884_);
v___x_1886_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_1828_, v___f_1869_, v___f_1872_, v___x_1885_);
v___x_1887_ = l_Lean_instInhabitedExpr;
v___x_1888_ = l_instInhabitedOfMonad___redArg(v___x_1886_, v___x_1887_);
v___f_1889_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1889_, 0, v___x_1888_);
v___x_38004__overap_1890_ = lean_panic_fn_borrowed(v___f_1889_, v_msg_1819_);
lean_dec_ref(v___f_1889_);
lean_inc(v___y_1826_);
lean_inc_ref(v___y_1825_);
lean_inc(v___y_1824_);
lean_inc_ref(v___y_1823_);
lean_inc(v___y_1822_);
lean_inc(v___y_1821_);
lean_inc_ref(v___y_1820_);
v___x_1891_ = lean_apply_8(v___x_38004__overap_1890_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, lean_box(0));
return v___x_1891_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object* v_msg_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v_msg_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object* v_binderType_1914_, lean_object* v_binderName_1915_, uint8_t v_binderInfo_1916_, lean_object* v_body_1917_, lean_object* v_e_1918_, lean_object* v_t_1919_, lean_object* v_b_1920_){
_start:
{
size_t v___x_1921_; size_t v___x_1922_; uint8_t v___x_1923_; 
v___x_1921_ = lean_ptr_addr(v_binderType_1914_);
v___x_1922_ = lean_ptr_addr(v_t_1919_);
v___x_1923_ = lean_usize_dec_eq(v___x_1921_, v___x_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_Expr_lam___override(v_binderName_1915_, v_t_1919_, v_b_1920_, v_binderInfo_1916_);
return v___x_1924_;
}
else
{
size_t v___x_1925_; size_t v___x_1926_; uint8_t v___x_1927_; 
v___x_1925_ = lean_ptr_addr(v_body_1917_);
v___x_1926_ = lean_ptr_addr(v_b_1920_);
v___x_1927_ = lean_usize_dec_eq(v___x_1925_, v___x_1926_);
if (v___x_1927_ == 0)
{
lean_object* v___x_1928_; 
v___x_1928_ = l_Lean_Expr_lam___override(v_binderName_1915_, v_t_1919_, v_b_1920_, v_binderInfo_1916_);
return v___x_1928_;
}
else
{
uint8_t v___x_1929_; 
v___x_1929_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1916_, v_binderInfo_1916_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_Expr_lam___override(v_binderName_1915_, v_t_1919_, v_b_1920_, v_binderInfo_1916_);
return v___x_1930_;
}
else
{
lean_dec_ref(v_b_1920_);
lean_dec_ref(v_t_1919_);
lean_dec(v_binderName_1915_);
lean_inc_ref(v_e_1918_);
return v_e_1918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object* v_binderType_1931_, lean_object* v_binderName_1932_, lean_object* v_binderInfo_1933_, lean_object* v_body_1934_, lean_object* v_e_1935_, lean_object* v_t_1936_, lean_object* v_b_1937_){
_start:
{
uint8_t v_binderInfo_41351__boxed_1938_; lean_object* v_res_1939_; 
v_binderInfo_41351__boxed_1938_ = lean_unbox(v_binderInfo_1933_);
v_res_1939_ = l_Lean_Meta_ExtractLets_extractCore___lam__0(v_binderType_1931_, v_binderName_1932_, v_binderInfo_41351__boxed_1938_, v_body_1934_, v_e_1935_, v_t_1936_, v_b_1937_);
lean_dec_ref(v_e_1935_);
lean_dec_ref(v_body_1934_);
lean_dec_ref(v_binderType_1931_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object* v_binderType_1940_, lean_object* v_binderName_1941_, uint8_t v_binderInfo_1942_, lean_object* v_body_1943_, lean_object* v_e_1944_, lean_object* v_t_1945_, lean_object* v_b_1946_){
_start:
{
size_t v___x_1947_; size_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1947_ = lean_ptr_addr(v_binderType_1940_);
v___x_1948_ = lean_ptr_addr(v_t_1945_);
v___x_1949_ = lean_usize_dec_eq(v___x_1947_, v___x_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; 
v___x_1950_ = l_Lean_Expr_forallE___override(v_binderName_1941_, v_t_1945_, v_b_1946_, v_binderInfo_1942_);
return v___x_1950_;
}
else
{
size_t v___x_1951_; size_t v___x_1952_; uint8_t v___x_1953_; 
v___x_1951_ = lean_ptr_addr(v_body_1943_);
v___x_1952_ = lean_ptr_addr(v_b_1946_);
v___x_1953_ = lean_usize_dec_eq(v___x_1951_, v___x_1952_);
if (v___x_1953_ == 0)
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Lean_Expr_forallE___override(v_binderName_1941_, v_t_1945_, v_b_1946_, v_binderInfo_1942_);
return v___x_1954_;
}
else
{
uint8_t v___x_1955_; 
v___x_1955_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1942_, v_binderInfo_1942_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_Expr_forallE___override(v_binderName_1941_, v_t_1945_, v_b_1946_, v_binderInfo_1942_);
return v___x_1956_;
}
else
{
lean_dec_ref(v_b_1946_);
lean_dec_ref(v_t_1945_);
lean_dec(v_binderName_1941_);
lean_inc_ref(v_e_1944_);
return v_e_1944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object* v_binderType_1957_, lean_object* v_binderName_1958_, lean_object* v_binderInfo_1959_, lean_object* v_body_1960_, lean_object* v_e_1961_, lean_object* v_t_1962_, lean_object* v_b_1963_){
_start:
{
uint8_t v_binderInfo_41383__boxed_1964_; lean_object* v_res_1965_; 
v_binderInfo_41383__boxed_1964_ = lean_unbox(v_binderInfo_1959_);
v_res_1965_ = l_Lean_Meta_ExtractLets_extractCore___lam__1(v_binderType_1957_, v_binderName_1958_, v_binderInfo_41383__boxed_1964_, v_body_1960_, v_e_1961_, v_t_1962_, v_b_1963_);
lean_dec_ref(v_e_1961_);
lean_dec_ref(v_body_1960_);
lean_dec_ref(v_binderType_1957_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object* v_name_1966_, lean_object* v_type_1967_, lean_object* v_val_1968_, lean_object* v_k_1969_, uint8_t v_nondep_1970_, uint8_t v_kind_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___f_1980_; lean_object* v___x_1981_; 
lean_inc(v___y_1974_);
lean_inc(v___y_1973_);
lean_inc_ref(v___y_1972_);
v___f_1980_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1980_, 0, v_k_1969_);
lean_closure_set(v___f_1980_, 1, v___y_1972_);
lean_closure_set(v___f_1980_, 2, v___y_1973_);
lean_closure_set(v___f_1980_, 3, v___y_1974_);
v___x_1981_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1966_, v_type_1967_, v_val_1968_, v___f_1980_, v_nondep_1970_, v_kind_1971_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1981_) == 0)
{
return v___x_1981_;
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___x_1981_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1981_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object* v_name_1990_, lean_object* v_type_1991_, lean_object* v_val_1992_, lean_object* v_k_1993_, lean_object* v_nondep_1994_, lean_object* v_kind_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_){
_start:
{
uint8_t v_nondep_boxed_2004_; uint8_t v_kind_boxed_2005_; lean_object* v_res_2006_; 
v_nondep_boxed_2004_ = lean_unbox(v_nondep_1994_);
v_kind_boxed_2005_ = lean_unbox(v_kind_1995_);
v_res_2006_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_1990_, v_type_1991_, v_val_1992_, v_k_1993_, v_nondep_boxed_2004_, v_kind_boxed_2005_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object* v_msg_2007_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = l_Lean_instInhabitedExpr;
v___x_2009_ = lean_panic_fn_borrowed(v___x_2008_, v_msg_2007_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object* v_a_2010_, lean_object* v_x_2011_){
_start:
{
if (lean_obj_tag(v_x_2011_) == 0)
{
lean_object* v___x_2012_; 
v___x_2012_ = lean_box(0);
return v___x_2012_;
}
else
{
lean_object* v_key_2013_; lean_object* v_value_2014_; lean_object* v_tail_2015_; uint8_t v___x_2016_; 
v_key_2013_ = lean_ctor_get(v_x_2011_, 0);
v_value_2014_ = lean_ctor_get(v_x_2011_, 1);
v_tail_2015_ = lean_ctor_get(v_x_2011_, 2);
v___x_2016_ = l_Lean_ExprStructEq_beq(v_key_2013_, v_a_2010_);
if (v___x_2016_ == 0)
{
v_x_2011_ = v_tail_2015_;
goto _start;
}
else
{
lean_object* v___x_2018_; 
lean_inc(v_value_2014_);
v___x_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_value_2014_);
return v___x_2018_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object* v_a_2019_, lean_object* v_x_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2019_, v_x_2020_);
lean_dec(v_x_2020_);
lean_dec_ref(v_a_2019_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object* v_m_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v_buckets_2024_; lean_object* v___x_2025_; uint64_t v___x_2026_; uint64_t v___x_2027_; uint64_t v___x_2028_; uint64_t v_fold_2029_; uint64_t v___x_2030_; uint64_t v___x_2031_; uint64_t v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; size_t v___x_2036_; size_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_buckets_2024_ = lean_ctor_get(v_m_2022_, 1);
v___x_2025_ = lean_array_get_size(v_buckets_2024_);
v___x_2026_ = l_Lean_ExprStructEq_hash(v_a_2023_);
v___x_2027_ = 32ULL;
v___x_2028_ = lean_uint64_shift_right(v___x_2026_, v___x_2027_);
v_fold_2029_ = lean_uint64_xor(v___x_2026_, v___x_2028_);
v___x_2030_ = 16ULL;
v___x_2031_ = lean_uint64_shift_right(v_fold_2029_, v___x_2030_);
v___x_2032_ = lean_uint64_xor(v_fold_2029_, v___x_2031_);
v___x_2033_ = lean_uint64_to_usize(v___x_2032_);
v___x_2034_ = lean_usize_of_nat(v___x_2025_);
v___x_2035_ = ((size_t)1ULL);
v___x_2036_ = lean_usize_sub(v___x_2034_, v___x_2035_);
v___x_2037_ = lean_usize_land(v___x_2033_, v___x_2036_);
v___x_2038_ = lean_array_uget_borrowed(v_buckets_2024_, v___x_2037_);
v___x_2039_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2023_, v___x_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object* v_m_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_2040_, v_a_2041_);
lean_dec_ref(v_a_2041_);
lean_dec_ref(v_m_2040_);
return v_res_2042_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object* v_a_2043_, lean_object* v_x_2044_){
_start:
{
if (lean_obj_tag(v_x_2044_) == 0)
{
uint8_t v___x_2045_; 
v___x_2045_ = 0;
return v___x_2045_;
}
else
{
lean_object* v_key_2046_; lean_object* v_tail_2047_; lean_object* v_fst_2048_; lean_object* v_snd_2049_; lean_object* v_fst_2050_; lean_object* v_snd_2051_; uint8_t v___x_2055_; 
v_key_2046_ = lean_ctor_get(v_x_2044_, 0);
v_tail_2047_ = lean_ctor_get(v_x_2044_, 2);
v_fst_2048_ = lean_ctor_get(v_key_2046_, 0);
v_snd_2049_ = lean_ctor_get(v_key_2046_, 1);
v_fst_2050_ = lean_ctor_get(v_a_2043_, 0);
v_snd_2051_ = lean_ctor_get(v_a_2043_, 1);
v___x_2055_ = lean_unbox(v_fst_2050_);
if (v___x_2055_ == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = lean_unbox(v_fst_2048_);
if (v___x_2056_ == 0)
{
goto v___jp_2052_;
}
else
{
v_x_2044_ = v_tail_2047_;
goto _start;
}
}
else
{
uint8_t v___x_2058_; 
v___x_2058_ = lean_unbox(v_fst_2048_);
if (v___x_2058_ == 0)
{
v_x_2044_ = v_tail_2047_;
goto _start;
}
else
{
goto v___jp_2052_;
}
}
v___jp_2052_:
{
uint8_t v___x_2053_; 
v___x_2053_ = l_Lean_ExprStructEq_beq(v_snd_2049_, v_snd_2051_);
if (v___x_2053_ == 0)
{
v_x_2044_ = v_tail_2047_;
goto _start;
}
else
{
return v___x_2053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object* v_a_2060_, lean_object* v_x_2061_){
_start:
{
uint8_t v_res_2062_; lean_object* v_r_2063_; 
v_res_2062_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2060_, v_x_2061_);
lean_dec(v_x_2061_);
lean_dec_ref(v_a_2060_);
v_r_2063_ = lean_box(v_res_2062_);
return v_r_2063_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object* v_a_2064_, lean_object* v_b_2065_, lean_object* v_x_2066_){
_start:
{
if (lean_obj_tag(v_x_2066_) == 0)
{
lean_dec(v_b_2065_);
lean_dec_ref(v_a_2064_);
return v_x_2066_;
}
else
{
lean_object* v_key_2067_; lean_object* v_value_2068_; lean_object* v_tail_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2088_; 
v_key_2067_ = lean_ctor_get(v_x_2066_, 0);
v_value_2068_ = lean_ctor_get(v_x_2066_, 1);
v_tail_2069_ = lean_ctor_get(v_x_2066_, 2);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_x_2066_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2071_ = v_x_2066_;
v_isShared_2072_ = v_isSharedCheck_2088_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_tail_2069_);
lean_inc(v_value_2068_);
lean_inc(v_key_2067_);
lean_dec(v_x_2066_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2088_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v_fst_2078_; lean_object* v_snd_2079_; lean_object* v_fst_2080_; lean_object* v_snd_2081_; uint8_t v___x_2085_; 
v_fst_2078_ = lean_ctor_get(v_key_2067_, 0);
v_snd_2079_ = lean_ctor_get(v_key_2067_, 1);
v_fst_2080_ = lean_ctor_get(v_a_2064_, 0);
v_snd_2081_ = lean_ctor_get(v_a_2064_, 1);
v___x_2085_ = lean_unbox(v_fst_2080_);
if (v___x_2085_ == 0)
{
uint8_t v___x_2086_; 
v___x_2086_ = lean_unbox(v_fst_2078_);
if (v___x_2086_ == 0)
{
goto v___jp_2082_;
}
else
{
goto v___jp_2073_;
}
}
else
{
uint8_t v___x_2087_; 
v___x_2087_ = lean_unbox(v_fst_2078_);
if (v___x_2087_ == 0)
{
goto v___jp_2073_;
}
else
{
goto v___jp_2082_;
}
}
v___jp_2073_:
{
lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2074_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2064_, v_b_2065_, v_tail_2069_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 2, v___x_2074_);
v___x_2076_ = v___x_2071_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_key_2067_);
lean_ctor_set(v_reuseFailAlloc_2077_, 1, v_value_2068_);
lean_ctor_set(v_reuseFailAlloc_2077_, 2, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
v___jp_2082_:
{
uint8_t v___x_2083_; 
v___x_2083_ = l_Lean_ExprStructEq_beq(v_snd_2079_, v_snd_2081_);
if (v___x_2083_ == 0)
{
goto v___jp_2073_;
}
else
{
lean_object* v___x_2084_; 
lean_del_object(v___x_2071_);
lean_dec(v_value_2068_);
lean_dec(v_key_2067_);
v___x_2084_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2084_, 0, v_a_2064_);
lean_ctor_set(v___x_2084_, 1, v_b_2065_);
lean_ctor_set(v___x_2084_, 2, v_tail_2069_);
return v___x_2084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object* v_x_2089_, lean_object* v_x_2090_){
_start:
{
if (lean_obj_tag(v_x_2090_) == 0)
{
return v_x_2089_;
}
else
{
lean_object* v_key_2091_; lean_object* v_value_2092_; lean_object* v_tail_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2124_; 
v_key_2091_ = lean_ctor_get(v_x_2090_, 0);
v_value_2092_ = lean_ctor_get(v_x_2090_, 1);
v_tail_2093_ = lean_ctor_get(v_x_2090_, 2);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_x_2090_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2095_ = v_x_2090_;
v_isShared_2096_ = v_isSharedCheck_2124_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_tail_2093_);
lean_inc(v_value_2092_);
lean_inc(v_key_2091_);
lean_dec(v_x_2090_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2124_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v_fst_2097_; lean_object* v_snd_2098_; lean_object* v___x_2099_; uint64_t v___y_2101_; uint8_t v___x_2121_; 
v_fst_2097_ = lean_ctor_get(v_key_2091_, 0);
v_snd_2098_ = lean_ctor_get(v_key_2091_, 1);
v___x_2099_ = lean_array_get_size(v_x_2089_);
v___x_2121_ = lean_unbox(v_fst_2097_);
if (v___x_2121_ == 0)
{
uint64_t v___x_2122_; 
v___x_2122_ = 13ULL;
v___y_2101_ = v___x_2122_;
goto v___jp_2100_;
}
else
{
uint64_t v___x_2123_; 
v___x_2123_ = 11ULL;
v___y_2101_ = v___x_2123_;
goto v___jp_2100_;
}
v___jp_2100_:
{
uint64_t v___x_2102_; uint64_t v___x_2103_; uint64_t v___x_2104_; uint64_t v___x_2105_; uint64_t v_fold_2106_; uint64_t v___x_2107_; uint64_t v___x_2108_; uint64_t v___x_2109_; size_t v___x_2110_; size_t v___x_2111_; size_t v___x_2112_; size_t v___x_2113_; size_t v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2117_; 
v___x_2102_ = l_Lean_ExprStructEq_hash(v_snd_2098_);
v___x_2103_ = lean_uint64_mix_hash(v___y_2101_, v___x_2102_);
v___x_2104_ = 32ULL;
v___x_2105_ = lean_uint64_shift_right(v___x_2103_, v___x_2104_);
v_fold_2106_ = lean_uint64_xor(v___x_2103_, v___x_2105_);
v___x_2107_ = 16ULL;
v___x_2108_ = lean_uint64_shift_right(v_fold_2106_, v___x_2107_);
v___x_2109_ = lean_uint64_xor(v_fold_2106_, v___x_2108_);
v___x_2110_ = lean_uint64_to_usize(v___x_2109_);
v___x_2111_ = lean_usize_of_nat(v___x_2099_);
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_sub(v___x_2111_, v___x_2112_);
v___x_2114_ = lean_usize_land(v___x_2110_, v___x_2113_);
v___x_2115_ = lean_array_uget_borrowed(v_x_2089_, v___x_2114_);
lean_inc(v___x_2115_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 2, v___x_2115_);
v___x_2117_ = v___x_2095_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_key_2091_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v_value_2092_);
lean_ctor_set(v_reuseFailAlloc_2120_, 2, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
lean_object* v___x_2118_; 
v___x_2118_ = lean_array_uset(v_x_2089_, v___x_2114_, v___x_2117_);
v_x_2089_ = v___x_2118_;
v_x_2090_ = v_tail_2093_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object* v_i_2125_, lean_object* v_source_2126_, lean_object* v_target_2127_){
_start:
{
lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2128_ = lean_array_get_size(v_source_2126_);
v___x_2129_ = lean_nat_dec_lt(v_i_2125_, v___x_2128_);
if (v___x_2129_ == 0)
{
lean_dec_ref(v_source_2126_);
lean_dec(v_i_2125_);
return v_target_2127_;
}
else
{
lean_object* v_es_2130_; lean_object* v___x_2131_; lean_object* v_source_2132_; lean_object* v_target_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v_es_2130_ = lean_array_fget(v_source_2126_, v_i_2125_);
v___x_2131_ = lean_box(0);
v_source_2132_ = lean_array_fset(v_source_2126_, v_i_2125_, v___x_2131_);
v_target_2133_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_target_2127_, v_es_2130_);
v___x_2134_ = lean_unsigned_to_nat(1u);
v___x_2135_ = lean_nat_add(v_i_2125_, v___x_2134_);
lean_dec(v_i_2125_);
v_i_2125_ = v___x_2135_;
v_source_2126_ = v_source_2132_;
v_target_2127_ = v_target_2133_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object* v_data_2137_){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v_nbuckets_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2138_ = lean_array_get_size(v_data_2137_);
v___x_2139_ = lean_unsigned_to_nat(2u);
v_nbuckets_2140_ = lean_nat_mul(v___x_2138_, v___x_2139_);
v___x_2141_ = lean_unsigned_to_nat(0u);
v___x_2142_ = lean_box(0);
v___x_2143_ = lean_mk_array(v_nbuckets_2140_, v___x_2142_);
v___x_2144_ = lean_array_propagate_mark(v_data_2137_, v___x_2143_);
v___x_2145_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v___x_2141_, v_data_2137_, v___x_2144_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object* v_m_2146_, lean_object* v_a_2147_, lean_object* v_b_2148_){
_start:
{
lean_object* v_size_2149_; lean_object* v_buckets_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2201_; 
v_size_2149_ = lean_ctor_get(v_m_2146_, 0);
v_buckets_2150_ = lean_ctor_get(v_m_2146_, 1);
v_isSharedCheck_2201_ = !lean_is_exclusive(v_m_2146_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2152_ = v_m_2146_;
v_isShared_2153_ = v_isSharedCheck_2201_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_buckets_2150_);
lean_inc(v_size_2149_);
lean_dec(v_m_2146_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2201_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v_fst_2154_; lean_object* v_snd_2155_; lean_object* v___x_2156_; uint64_t v___y_2158_; uint8_t v___x_2198_; 
v_fst_2154_ = lean_ctor_get(v_a_2147_, 0);
v_snd_2155_ = lean_ctor_get(v_a_2147_, 1);
v___x_2156_ = lean_array_get_size(v_buckets_2150_);
v___x_2198_ = lean_unbox(v_fst_2154_);
if (v___x_2198_ == 0)
{
uint64_t v___x_2199_; 
v___x_2199_ = 13ULL;
v___y_2158_ = v___x_2199_;
goto v___jp_2157_;
}
else
{
uint64_t v___x_2200_; 
v___x_2200_ = 11ULL;
v___y_2158_ = v___x_2200_;
goto v___jp_2157_;
}
v___jp_2157_:
{
uint64_t v___x_2159_; uint64_t v___x_2160_; uint64_t v___x_2161_; uint64_t v___x_2162_; uint64_t v_fold_2163_; uint64_t v___x_2164_; uint64_t v___x_2165_; uint64_t v___x_2166_; size_t v___x_2167_; size_t v___x_2168_; size_t v___x_2169_; size_t v___x_2170_; size_t v___x_2171_; lean_object* v_bkt_2172_; uint8_t v___x_2173_; 
v___x_2159_ = l_Lean_ExprStructEq_hash(v_snd_2155_);
v___x_2160_ = lean_uint64_mix_hash(v___y_2158_, v___x_2159_);
v___x_2161_ = 32ULL;
v___x_2162_ = lean_uint64_shift_right(v___x_2160_, v___x_2161_);
v_fold_2163_ = lean_uint64_xor(v___x_2160_, v___x_2162_);
v___x_2164_ = 16ULL;
v___x_2165_ = lean_uint64_shift_right(v_fold_2163_, v___x_2164_);
v___x_2166_ = lean_uint64_xor(v_fold_2163_, v___x_2165_);
v___x_2167_ = lean_uint64_to_usize(v___x_2166_);
v___x_2168_ = lean_usize_of_nat(v___x_2156_);
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_sub(v___x_2168_, v___x_2169_);
v___x_2171_ = lean_usize_land(v___x_2167_, v___x_2170_);
v_bkt_2172_ = lean_array_uget_borrowed(v_buckets_2150_, v___x_2171_);
v___x_2173_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2147_, v_bkt_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; lean_object* v_size_x27_2175_; lean_object* v___x_2176_; lean_object* v_buckets_x27_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; uint8_t v___x_2183_; 
v___x_2174_ = lean_unsigned_to_nat(1u);
v_size_x27_2175_ = lean_nat_add(v_size_2149_, v___x_2174_);
lean_dec(v_size_2149_);
lean_inc(v_bkt_2172_);
v___x_2176_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2176_, 0, v_a_2147_);
lean_ctor_set(v___x_2176_, 1, v_b_2148_);
lean_ctor_set(v___x_2176_, 2, v_bkt_2172_);
v_buckets_x27_2177_ = lean_array_uset(v_buckets_2150_, v___x_2171_, v___x_2176_);
v___x_2178_ = lean_unsigned_to_nat(4u);
v___x_2179_ = lean_nat_mul(v_size_x27_2175_, v___x_2178_);
v___x_2180_ = lean_unsigned_to_nat(3u);
v___x_2181_ = lean_nat_div(v___x_2179_, v___x_2180_);
lean_dec(v___x_2179_);
v___x_2182_ = lean_array_get_size(v_buckets_x27_2177_);
v___x_2183_ = lean_nat_dec_le(v___x_2181_, v___x_2182_);
lean_dec(v___x_2181_);
if (v___x_2183_ == 0)
{
lean_object* v_val_2184_; lean_object* v___x_2186_; 
v_val_2184_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_buckets_x27_2177_);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 1, v_val_2184_);
lean_ctor_set(v___x_2152_, 0, v_size_x27_2175_);
v___x_2186_ = v___x_2152_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_size_x27_2175_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v_val_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
else
{
lean_object* v___x_2189_; 
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 1, v_buckets_x27_2177_);
lean_ctor_set(v___x_2152_, 0, v_size_x27_2175_);
v___x_2189_ = v___x_2152_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_size_x27_2175_);
lean_ctor_set(v_reuseFailAlloc_2190_, 1, v_buckets_x27_2177_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
else
{
lean_object* v___x_2191_; lean_object* v_buckets_x27_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2196_; 
lean_inc(v_bkt_2172_);
v___x_2191_ = lean_box(0);
v_buckets_x27_2192_ = lean_array_uset(v_buckets_2150_, v___x_2171_, v___x_2191_);
v___x_2193_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2147_, v_b_2148_, v_bkt_2172_);
v___x_2194_ = lean_array_uset(v_buckets_x27_2192_, v___x_2171_, v___x_2193_);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 1, v___x_2194_);
v___x_2196_ = v___x_2152_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_size_2149_);
lean_ctor_set(v_reuseFailAlloc_2197_, 1, v___x_2194_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object* v_a_2202_, lean_object* v_x_2203_){
_start:
{
if (lean_obj_tag(v_x_2203_) == 0)
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_box(0);
return v___x_2204_;
}
else
{
lean_object* v_key_2205_; lean_object* v_value_2206_; lean_object* v_tail_2207_; lean_object* v_fst_2208_; lean_object* v_snd_2209_; lean_object* v_fst_2210_; lean_object* v_snd_2211_; uint8_t v___x_2216_; 
v_key_2205_ = lean_ctor_get(v_x_2203_, 0);
v_value_2206_ = lean_ctor_get(v_x_2203_, 1);
v_tail_2207_ = lean_ctor_get(v_x_2203_, 2);
v_fst_2208_ = lean_ctor_get(v_key_2205_, 0);
v_snd_2209_ = lean_ctor_get(v_key_2205_, 1);
v_fst_2210_ = lean_ctor_get(v_a_2202_, 0);
v_snd_2211_ = lean_ctor_get(v_a_2202_, 1);
v___x_2216_ = lean_unbox(v_fst_2210_);
if (v___x_2216_ == 0)
{
uint8_t v___x_2217_; 
v___x_2217_ = lean_unbox(v_fst_2208_);
if (v___x_2217_ == 0)
{
goto v___jp_2212_;
}
else
{
v_x_2203_ = v_tail_2207_;
goto _start;
}
}
else
{
uint8_t v___x_2219_; 
v___x_2219_ = lean_unbox(v_fst_2208_);
if (v___x_2219_ == 0)
{
v_x_2203_ = v_tail_2207_;
goto _start;
}
else
{
goto v___jp_2212_;
}
}
v___jp_2212_:
{
uint8_t v___x_2213_; 
v___x_2213_ = l_Lean_ExprStructEq_beq(v_snd_2209_, v_snd_2211_);
if (v___x_2213_ == 0)
{
v_x_2203_ = v_tail_2207_;
goto _start;
}
else
{
lean_object* v___x_2215_; 
lean_inc(v_value_2206_);
v___x_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2215_, 0, v_value_2206_);
return v___x_2215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object* v_a_2221_, lean_object* v_x_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2221_, v_x_2222_);
lean_dec(v_x_2222_);
lean_dec_ref(v_a_2221_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object* v_m_2224_, lean_object* v_a_2225_){
_start:
{
lean_object* v_buckets_2226_; lean_object* v_fst_2227_; lean_object* v_snd_2228_; lean_object* v___x_2229_; uint64_t v___y_2231_; uint8_t v___x_2247_; 
v_buckets_2226_ = lean_ctor_get(v_m_2224_, 1);
v_fst_2227_ = lean_ctor_get(v_a_2225_, 0);
v_snd_2228_ = lean_ctor_get(v_a_2225_, 1);
v___x_2229_ = lean_array_get_size(v_buckets_2226_);
v___x_2247_ = lean_unbox(v_fst_2227_);
if (v___x_2247_ == 0)
{
uint64_t v___x_2248_; 
v___x_2248_ = 13ULL;
v___y_2231_ = v___x_2248_;
goto v___jp_2230_;
}
else
{
uint64_t v___x_2249_; 
v___x_2249_ = 11ULL;
v___y_2231_ = v___x_2249_;
goto v___jp_2230_;
}
v___jp_2230_:
{
uint64_t v___x_2232_; uint64_t v___x_2233_; uint64_t v___x_2234_; uint64_t v___x_2235_; uint64_t v_fold_2236_; uint64_t v___x_2237_; uint64_t v___x_2238_; uint64_t v___x_2239_; size_t v___x_2240_; size_t v___x_2241_; size_t v___x_2242_; size_t v___x_2243_; size_t v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2232_ = l_Lean_ExprStructEq_hash(v_snd_2228_);
v___x_2233_ = lean_uint64_mix_hash(v___y_2231_, v___x_2232_);
v___x_2234_ = 32ULL;
v___x_2235_ = lean_uint64_shift_right(v___x_2233_, v___x_2234_);
v_fold_2236_ = lean_uint64_xor(v___x_2233_, v___x_2235_);
v___x_2237_ = 16ULL;
v___x_2238_ = lean_uint64_shift_right(v_fold_2236_, v___x_2237_);
v___x_2239_ = lean_uint64_xor(v_fold_2236_, v___x_2238_);
v___x_2240_ = lean_uint64_to_usize(v___x_2239_);
v___x_2241_ = lean_usize_of_nat(v___x_2229_);
v___x_2242_ = ((size_t)1ULL);
v___x_2243_ = lean_usize_sub(v___x_2241_, v___x_2242_);
v___x_2244_ = lean_usize_land(v___x_2240_, v___x_2243_);
v___x_2245_ = lean_array_uget_borrowed(v_buckets_2226_, v___x_2244_);
v___x_2246_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2225_, v___x_2245_);
return v___x_2246_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object* v_m_2250_, lean_object* v_a_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_2250_, v_a_2251_);
lean_dec_ref(v_a_2251_);
lean_dec_ref(v_m_2250_);
return v_res_2252_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2253_; lean_object* v_dummy_2254_; 
v___x_2253_ = lean_box(0);
v_dummy_2254_ = l_Lean_Expr_sort___override(v___x_2253_);
return v_dummy_2254_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object* v_upperBound_2255_, lean_object* v_fst_2256_, lean_object* v_fvars_2257_, lean_object* v_a_2258_, lean_object* v_b_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_a_2269_; uint8_t v___x_2273_; 
v___x_2273_ = lean_nat_dec_lt(v_a_2258_, v_upperBound_2255_);
if (v___x_2273_ == 0)
{
lean_object* v___x_2274_; 
lean_dec(v_a_2258_);
lean_dec(v_fvars_2257_);
v___x_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2274_, 0, v_b_2259_);
return v___x_2274_;
}
else
{
lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v_binderInfo_2277_; uint8_t v___x_2278_; 
v___x_2275_ = l_Lean_Meta_instInhabitedExprParamInfo_default;
v___x_2276_ = lean_array_get_borrowed(v___x_2275_, v_fst_2256_, v_a_2258_);
v_binderInfo_2277_ = lean_ctor_get_uint8(v___x_2276_, sizeof(void*)*2);
v___x_2278_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2277_);
if (v___x_2278_ == 0)
{
v_a_2269_ = v_b_2259_;
goto v___jp_2268_;
}
else
{
lean_object* v___x_2279_; uint8_t v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2279_ = l_Lean_instInhabitedExpr;
v___x_2280_ = 0;
v___x_2281_ = lean_array_get_borrowed(v___x_2279_, v_b_2259_, v_a_2258_);
lean_inc(v___x_2281_);
lean_inc(v_fvars_2257_);
v___x_2282_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2257_, v___x_2281_, v___x_2280_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2284_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2284_ = lean_array_set(v_b_2259_, v_a_2258_, v_a_2283_);
v_a_2269_ = v___x_2284_;
goto v___jp_2268_;
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec_ref(v_b_2259_);
lean_dec(v_a_2258_);
lean_dec(v_fvars_2257_);
v_a_2285_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2282_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2282_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
}
v___jp_2268_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = lean_unsigned_to_nat(1u);
v___x_2271_ = lean_nat_add(v_a_2258_, v___x_2270_);
lean_dec(v_a_2258_);
v_a_2258_ = v___x_2271_;
v_b_2259_ = v_a_2269_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object* v_fvars_2293_, size_t v_sz_2294_, size_t v_i_2295_, lean_object* v_bs_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
uint8_t v___x_2305_; 
v___x_2305_ = lean_usize_dec_lt(v_i_2295_, v_sz_2294_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2306_; 
lean_dec(v_fvars_2293_);
v___x_2306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_bs_2296_);
return v___x_2306_;
}
else
{
uint8_t v___x_2307_; lean_object* v_v_2308_; lean_object* v___x_2309_; lean_object* v_bs_x27_2310_; lean_object* v___x_2311_; 
v___x_2307_ = 0;
v_v_2308_ = lean_array_uget(v_bs_2296_, v_i_2295_);
v___x_2309_ = lean_unsigned_to_nat(0u);
v_bs_x27_2310_ = lean_array_uset(v_bs_2296_, v_i_2295_, v___x_2309_);
lean_inc(v_fvars_2293_);
v___x_2311_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2293_, v_v_2308_, v___x_2307_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; size_t v___x_2313_; size_t v___x_2314_; lean_object* v___x_2315_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2311_, 1);
v___x_2313_ = ((size_t)1ULL);
v___x_2314_ = lean_usize_add(v_i_2295_, v___x_2313_);
v___x_2315_ = lean_array_uset(v_bs_x27_2310_, v_i_2295_, v_a_2312_);
v_i_2295_ = v___x_2314_;
v_bs_2296_ = v___x_2315_;
goto _start;
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2324_; 
lean_dec_ref(v_bs_x27_2310_);
lean_dec(v_fvars_2293_);
v_a_2317_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2319_ = v___x_2311_;
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2311_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2320_ == 0)
{
v___x_2322_ = v___x_2319_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2317_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object* v_fvars_2325_, lean_object* v_f_2326_, lean_object* v_args_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
uint8_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = 0;
lean_inc_ref(v_f_2326_);
lean_inc(v_fvars_2325_);
v___x_2337_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2325_, v_f_2326_, v___x_2336_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
if (lean_obj_tag(v___x_2337_) == 0)
{
uint8_t v_implicits_2338_; 
v_implicits_2338_ = lean_ctor_get_uint8(v_a_2328_, 2);
if (v_implicits_2338_ == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2340_; 
v_a_2339_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2337_, 1);
lean_inc(v_a_2334_);
lean_inc_ref(v_a_2333_);
lean_inc(v_a_2332_);
lean_inc_ref(v_a_2331_);
v___x_2340_ = lean_infer_type(v_f_2326_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2342_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2342_ = l_Lean_Meta_instantiateForallWithParamInfos(v_a_2341_, v_args_2327_, v___x_2336_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v_fst_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2343_);
lean_dec_ref_known(v___x_2342_, 1);
v_fst_2344_ = lean_ctor_get(v_a_2343_, 0);
lean_inc(v_fst_2344_);
lean_dec(v_a_2343_);
v___x_2345_ = lean_array_get_size(v_args_2327_);
v___x_2346_ = lean_unsigned_to_nat(0u);
v___x_2347_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v___x_2345_, v_fst_2344_, v_fvars_2325_, v___x_2346_, v_args_2327_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
lean_dec(v_fst_2344_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2356_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2350_ = v___x_2347_;
v_isShared_2351_ = v_isSharedCheck_2356_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2347_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2356_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; lean_object* v___x_2354_; 
v___x_2352_ = l_Lean_mkAppN(v_a_2339_, v_a_2348_);
lean_dec(v_a_2348_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2352_);
v___x_2354_ = v___x_2350_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2352_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec(v_a_2339_);
v_a_2357_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2347_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2347_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec(v_a_2339_);
lean_dec_ref(v_args_2327_);
lean_dec(v_fvars_2325_);
v_a_2365_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2342_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2342_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
else
{
lean_dec(v_a_2339_);
lean_dec_ref(v_args_2327_);
lean_dec(v_fvars_2325_);
return v___x_2340_;
}
}
else
{
lean_object* v_a_2373_; size_t v_sz_2374_; size_t v___x_2375_; lean_object* v___x_2376_; 
lean_dec_ref(v_f_2326_);
v_a_2373_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2337_, 1);
v_sz_2374_ = lean_array_size(v_args_2327_);
v___x_2375_ = ((size_t)0ULL);
v___x_2376_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_2325_, v_sz_2374_, v___x_2375_, v_args_2327_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2385_; 
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2379_ = v___x_2376_;
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2376_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2381_; lean_object* v___x_2383_; 
v___x_2381_ = l_Lean_mkAppN(v_a_2373_, v_a_2377_);
lean_dec(v_a_2377_);
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 0, v___x_2381_);
v___x_2383_ = v___x_2379_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_a_2373_);
v_a_2386_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2376_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2376_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_2327_);
lean_dec_ref(v_f_2326_);
lean_dec(v_fvars_2325_);
return v___x_2337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object* v_fvars_2394_, lean_object* v_f_2395_, lean_object* v_args_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(v_fvars_2394_, v_f_2395_, v_args_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_);
lean_dec(v_a_2403_);
lean_dec_ref(v_a_2402_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
lean_dec(v_a_2399_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object* v_fvars_2406_, lean_object* v_b_2407_, uint8_t v___x_2408_, lean_object* v_mk_2409_, lean_object* v_a_2410_, lean_object* v_x_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_inc_ref(v_x_2411_);
v___x_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2420_, 0, v_x_2411_);
lean_ctor_set(v___x_2420_, 1, v_fvars_2406_);
v___x_2421_ = lean_expr_instantiate1(v_b_2407_, v_x_2411_);
v___x_2422_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2420_, v___x_2421_, v___x_2408_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
if (lean_obj_tag(v___x_2422_) == 0)
{
uint8_t v_lift_2423_; 
v_lift_2423_ = lean_ctor_get_uint8(v___y_2412_, 10);
if (v_lift_2423_ == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2436_; 
v_a_2424_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2426_ = v___x_2422_;
v_isShared_2427_ = v_isSharedCheck_2436_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2422_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2436_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2428_ = lean_unsigned_to_nat(1u);
v___x_2429_ = lean_mk_empty_array_with_capacity(v___x_2428_);
v___x_2430_ = lean_array_push(v___x_2429_, v_x_2411_);
v___x_2431_ = lean_expr_abstract(v_a_2424_, v___x_2430_);
lean_dec_ref(v___x_2430_);
lean_dec(v_a_2424_);
v___x_2432_ = lean_apply_2(v_mk_2409_, v_a_2410_, v___x_2431_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2432_);
v___x_2434_ = v___x_2426_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v_a_2437_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2422_, 1);
v___x_2438_ = l_Lean_Expr_fvarId_x21(v_x_2411_);
v___x_2439_ = l_Lean_Meta_ExtractLets_flushDecls(v___x_2438_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2453_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2442_ = v___x_2439_;
v_isShared_2443_ = v_isSharedCheck_2453_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2439_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2453_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2451_; 
v___x_2444_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_a_2440_, v_a_2437_);
lean_dec(v_a_2440_);
v___x_2445_ = lean_unsigned_to_nat(1u);
v___x_2446_ = lean_mk_empty_array_with_capacity(v___x_2445_);
v___x_2447_ = lean_array_push(v___x_2446_, v_x_2411_);
v___x_2448_ = lean_expr_abstract(v___x_2444_, v___x_2447_);
lean_dec_ref(v___x_2447_);
lean_dec_ref(v___x_2444_);
v___x_2449_ = lean_apply_2(v_mk_2409_, v_a_2410_, v___x_2448_);
if (v_isShared_2443_ == 0)
{
lean_ctor_set(v___x_2442_, 0, v___x_2449_);
v___x_2451_ = v___x_2442_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v___x_2449_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec(v_a_2437_);
lean_dec_ref(v_x_2411_);
lean_dec_ref(v_a_2410_);
lean_dec_ref(v_mk_2409_);
v_a_2454_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2439_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___x_2439_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_2411_);
lean_dec_ref(v_a_2410_);
lean_dec_ref(v_mk_2409_);
return v___x_2422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object* v_fvars_2462_, lean_object* v_b_2463_, lean_object* v___x_2464_, lean_object* v_mk_2465_, lean_object* v_a_2466_, lean_object* v_x_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
uint8_t v___x_41972__boxed_2476_; lean_object* v_res_2477_; 
v___x_41972__boxed_2476_ = lean_unbox(v___x_2464_);
v_res_2477_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(v_fvars_2462_, v_b_2463_, v___x_41972__boxed_2476_, v_mk_2465_, v_a_2466_, v_x_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
lean_dec(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec_ref(v_b_2463_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object* v_fvars_2478_, lean_object* v_n_2479_, lean_object* v_t_2480_, lean_object* v_b_2481_, uint8_t v_i_2482_, lean_object* v_mk_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_){
_start:
{
uint8_t v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = 0;
lean_inc(v_fvars_2478_);
v___x_2493_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2478_, v_t_2480_, v___x_2492_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_);
if (lean_obj_tag(v___x_2493_) == 0)
{
uint8_t v_underBinder_2494_; 
v_underBinder_2494_ = lean_ctor_get_uint8(v_a_2484_, 4);
if (v_underBinder_2494_ == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2503_; 
lean_dec(v_n_2479_);
lean_dec(v_fvars_2478_);
v_a_2495_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2497_ = v___x_2493_;
v_isShared_2498_ = v_isSharedCheck_2503_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2493_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2503_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2501_; 
v___x_2499_ = lean_apply_2(v_mk_2483_, v_a_2495_, v_b_2481_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v___x_2499_);
v___x_2501_ = v___x_2497_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v___x_2499_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2505_; lean_object* v___f_2506_; uint8_t v___x_2507_; lean_object* v___x_2508_; 
v_a_2504_ = lean_ctor_get(v___x_2493_, 0);
lean_inc_n(v_a_2504_, 2);
lean_dec_ref_known(v___x_2493_, 1);
v___x_2505_ = lean_box(v___x_2492_);
v___f_2506_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2506_, 0, v_fvars_2478_);
lean_closure_set(v___f_2506_, 1, v_b_2481_);
lean_closure_set(v___f_2506_, 2, v___x_2505_);
lean_closure_set(v___f_2506_, 3, v_mk_2483_);
lean_closure_set(v___f_2506_, 4, v_a_2504_);
v___x_2507_ = 0;
v___x_2508_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_n_2479_, v_i_2482_, v_a_2504_, v___f_2506_, v___x_2507_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_);
return v___x_2508_;
}
}
else
{
lean_dec_ref(v_mk_2483_);
lean_dec_ref(v_b_2481_);
lean_dec(v_n_2479_);
lean_dec(v_fvars_2478_);
return v___x_2493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object* v_fvars_2509_, lean_object* v_n_2510_, lean_object* v_t_2511_, lean_object* v_b_2512_, lean_object* v_i_2513_, lean_object* v_mk_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v___y_2522_){
_start:
{
uint8_t v_i_boxed_2523_; lean_object* v_res_2524_; 
v_i_boxed_2523_ = lean_unbox(v_i_2513_);
v_res_2524_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(v_fvars_2509_, v_n_2510_, v_t_2511_, v_b_2512_, v_i_boxed_2523_, v_mk_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_);
lean_dec(v_a_2521_);
lean_dec_ref(v_a_2520_);
lean_dec(v_a_2519_);
lean_dec_ref(v_a_2518_);
lean_dec(v_a_2517_);
lean_dec(v_a_2516_);
lean_dec_ref(v_a_2515_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object* v_fvars_2525_, lean_object* v_e_2526_, lean_object* v_topLevel_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v___y_2535_){
_start:
{
uint8_t v_topLevel_boxed_2536_; lean_object* v_res_2537_; 
v_topLevel_boxed_2536_ = lean_unbox(v_topLevel_2527_);
v_res_2537_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2525_, v_e_2526_, v_topLevel_boxed_2536_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
lean_dec(v_a_2534_);
lean_dec_ref(v_a_2533_);
lean_dec(v_a_2532_);
lean_dec_ref(v_a_2531_);
lean_dec(v_a_2530_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
return v_res_2537_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2541_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2));
v___x_2542_ = lean_unsigned_to_nat(27u);
v___x_2543_ = lean_unsigned_to_nat(2119u);
v___x_2544_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1));
v___x_2545_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0));
v___x_2546_ = l_mkPanicMessageWithDecl(v___x_2545_, v___x_2544_, v___x_2543_, v___x_2542_, v___x_2541_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t v_fst_2547_, lean_object* v_fvars_2548_, lean_object* v_b_2549_, uint8_t v___x_2550_, lean_object* v_e_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, uint8_t v_isLet_2554_, uint8_t v_topLevel_2555_, lean_object* v_x_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
if (v_fst_2547_ == 0)
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_inc_ref(v_x_2556_);
v___x_2565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2565_, 0, v_x_2556_);
lean_ctor_set(v___x_2565_, 1, v_fvars_2548_);
v___x_2566_ = lean_expr_instantiate1(v_b_2549_, v_x_2556_);
v___x_2567_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2565_, v___x_2566_, v___x_2550_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2567_) == 0)
{
if (lean_obj_tag(v_e_2551_) == 8)
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2605_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2570_ = v___x_2567_;
v_isShared_2571_ = v_isSharedCheck_2605_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2567_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2605_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v_declName_2572_; lean_object* v_type_2573_; lean_object* v_value_2574_; lean_object* v_body_2575_; uint8_t v_nondep_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; size_t v___x_2581_; size_t v___x_2582_; uint8_t v___x_2583_; 
v_declName_2572_ = lean_ctor_get(v_e_2551_, 0);
v_type_2573_ = lean_ctor_get(v_e_2551_, 1);
v_value_2574_ = lean_ctor_get(v_e_2551_, 2);
v_body_2575_ = lean_ctor_get(v_e_2551_, 3);
v_nondep_2576_ = lean_ctor_get_uint8(v_e_2551_, sizeof(void*)*4 + 8);
v___x_2577_ = lean_unsigned_to_nat(1u);
v___x_2578_ = lean_mk_empty_array_with_capacity(v___x_2577_);
v___x_2579_ = lean_array_push(v___x_2578_, v_x_2556_);
v___x_2580_ = lean_expr_abstract(v_a_2568_, v___x_2579_);
lean_dec_ref(v___x_2579_);
lean_dec(v_a_2568_);
v___x_2581_ = lean_ptr_addr(v_type_2573_);
v___x_2582_ = lean_ptr_addr(v_a_2552_);
v___x_2583_ = lean_usize_dec_eq(v___x_2581_, v___x_2582_);
if (v___x_2583_ == 0)
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
lean_inc(v_declName_2572_);
lean_dec_ref_known(v_e_2551_, 4);
v___x_2584_ = l_Lean_Expr_letE___override(v_declName_2572_, v_a_2552_, v_a_2553_, v___x_2580_, v_nondep_2576_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2584_);
v___x_2586_ = v___x_2570_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
else
{
size_t v___x_2588_; size_t v___x_2589_; uint8_t v___x_2590_; 
v___x_2588_ = lean_ptr_addr(v_value_2574_);
v___x_2589_ = lean_ptr_addr(v_a_2553_);
v___x_2590_ = lean_usize_dec_eq(v___x_2588_, v___x_2589_);
if (v___x_2590_ == 0)
{
lean_object* v___x_2591_; lean_object* v___x_2593_; 
lean_inc(v_declName_2572_);
lean_dec_ref_known(v_e_2551_, 4);
v___x_2591_ = l_Lean_Expr_letE___override(v_declName_2572_, v_a_2552_, v_a_2553_, v___x_2580_, v_nondep_2576_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2591_);
v___x_2593_ = v___x_2570_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2591_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
else
{
size_t v___x_2595_; size_t v___x_2596_; uint8_t v___x_2597_; 
v___x_2595_ = lean_ptr_addr(v_body_2575_);
v___x_2596_ = lean_ptr_addr(v___x_2580_);
v___x_2597_ = lean_usize_dec_eq(v___x_2595_, v___x_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2600_; 
lean_inc(v_declName_2572_);
lean_dec_ref_known(v_e_2551_, 4);
v___x_2598_ = l_Lean_Expr_letE___override(v_declName_2572_, v_a_2552_, v_a_2553_, v___x_2580_, v_nondep_2576_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2598_);
v___x_2600_ = v___x_2570_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
else
{
lean_object* v___x_2603_; 
lean_dec_ref(v___x_2580_);
lean_dec_ref(v_a_2553_);
lean_dec_ref(v_a_2552_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v_e_2551_);
v___x_2603_ = v___x_2570_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_e_2551_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
}
else
{
lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2614_; 
lean_dec_ref(v_x_2556_);
lean_dec_ref(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec_ref(v_e_2551_);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2614_ == 0)
{
lean_object* v_unused_2615_; 
v_unused_2615_ = lean_ctor_get(v___x_2567_, 0);
lean_dec(v_unused_2615_);
v___x_2607_ = v___x_2567_;
v_isShared_2608_ = v_isSharedCheck_2614_;
goto v_resetjp_2606_;
}
else
{
lean_dec(v___x_2567_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2614_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2612_; 
v___x_2609_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2610_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2609_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2610_);
v___x_2612_ = v___x_2607_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
else
{
lean_dec_ref(v_x_2556_);
lean_dec_ref(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec_ref(v_e_2551_);
return v___x_2567_;
}
}
else
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
lean_dec_ref(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec_ref(v_e_2551_);
v___x_2616_ = l_Lean_Expr_fvarId_x21(v_x_2556_);
v___x_2617_ = l_Lean_FVarId_getDecl___redArg(v___x_2616_, v___y_2560_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2619_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc(v_a_2618_);
lean_dec_ref_known(v___x_2617_, 1);
v___x_2619_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_a_2618_, v_isLet_2554_, v___y_2557_, v___y_2559_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
lean_dec_ref_known(v___x_2619_, 1);
v___x_2620_ = lean_expr_instantiate1(v_b_2549_, v_x_2556_);
lean_dec_ref(v_x_2556_);
v___x_2621_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2548_, v___x_2620_, v_topLevel_2555_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2621_;
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
lean_dec_ref(v_x_2556_);
lean_dec(v_fvars_2548_);
v_a_2622_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2619_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2619_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
else
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2637_; 
lean_dec_ref(v_x_2556_);
lean_dec(v_fvars_2548_);
v_a_2630_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2632_ = v___x_2617_;
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v___x_2617_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2635_; 
if (v_isShared_2633_ == 0)
{
v___x_2635_ = v___x_2632_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2630_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object** _args){
lean_object* v_fst_2638_ = _args[0];
lean_object* v_fvars_2639_ = _args[1];
lean_object* v_b_2640_ = _args[2];
lean_object* v___x_2641_ = _args[3];
lean_object* v_e_2642_ = _args[4];
lean_object* v_a_2643_ = _args[5];
lean_object* v_a_2644_ = _args[6];
lean_object* v_isLet_2645_ = _args[7];
lean_object* v_topLevel_2646_ = _args[8];
lean_object* v_x_2647_ = _args[9];
lean_object* v___y_2648_ = _args[10];
lean_object* v___y_2649_ = _args[11];
lean_object* v___y_2650_ = _args[12];
lean_object* v___y_2651_ = _args[13];
lean_object* v___y_2652_ = _args[14];
lean_object* v___y_2653_ = _args[15];
lean_object* v___y_2654_ = _args[16];
lean_object* v___y_2655_ = _args[17];
_start:
{
uint8_t v_fst_42117__boxed_2656_; uint8_t v___x_42118__boxed_2657_; uint8_t v_isLet_boxed_2658_; uint8_t v_topLevel_boxed_2659_; lean_object* v_res_2660_; 
v_fst_42117__boxed_2656_ = lean_unbox(v_fst_2638_);
v___x_42118__boxed_2657_ = lean_unbox(v___x_2641_);
v_isLet_boxed_2658_ = lean_unbox(v_isLet_2645_);
v_topLevel_boxed_2659_ = lean_unbox(v_topLevel_2646_);
v_res_2660_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(v_fst_42117__boxed_2656_, v_fvars_2639_, v_b_2640_, v___x_42118__boxed_2657_, v_e_2642_, v_a_2643_, v_a_2644_, v_isLet_boxed_2658_, v_topLevel_boxed_2659_, v_x_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v_b_2640_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object* v_fvars_2661_, lean_object* v_e_2662_, uint8_t v_isLet_2663_, lean_object* v_n_2664_, lean_object* v_t_2665_, lean_object* v_v_2666_, lean_object* v_b_2667_, uint8_t v_topLevel_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_){
_start:
{
lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2684_; lean_object* v___y_2685_; uint8_t v___x_2691_; lean_object* v___x_2692_; 
v___x_2691_ = 0;
lean_inc(v_fvars_2661_);
v___x_2692_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2661_, v_t_2665_, v___x_2691_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v_a_2693_; lean_object* v___x_2694_; 
v_a_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2692_, 1);
lean_inc(v_fvars_2661_);
v___x_2694_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2661_, v_v_2666_, v___x_2691_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2806_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2697_ = v___x_2694_;
v_isShared_2698_ = v_isSharedCheck_2806_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2806_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; uint8_t v_descend_2746_; uint8_t v_underBinder_2747_; uint8_t v_usedOnly_2748_; uint8_t v_merge_2749_; uint8_t v_lift_2750_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; uint8_t v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; uint8_t v___y_2788_; 
v_descend_2746_ = lean_ctor_get_uint8(v_a_2669_, 3);
v_underBinder_2747_ = lean_ctor_get_uint8(v_a_2669_, 4);
v_usedOnly_2748_ = lean_ctor_get_uint8(v_a_2669_, 5);
v_merge_2749_ = lean_ctor_get_uint8(v_a_2669_, 6);
v_lift_2750_ = lean_ctor_get_uint8(v_a_2669_, 10);
if (v_usedOnly_2748_ == 0)
{
v___y_2788_ = v___x_2691_;
goto v___jp_2787_;
}
else
{
uint8_t v___x_2804_; 
v___x_2804_ = l_Lean_Expr_hasLooseBVars(v_b_2667_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; 
lean_del_object(v___x_2697_);
lean_dec(v_a_2695_);
lean_dec(v_a_2693_);
lean_dec(v_n_2664_);
lean_dec_ref(v_e_2662_);
v___x_2805_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2661_, v_b_2667_, v_topLevel_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_);
return v___x_2805_;
}
else
{
v___y_2788_ = v___x_2691_;
goto v___jp_2787_;
}
}
v___jp_2699_:
{
if (lean_obj_tag(v_e_2662_) == 8)
{
lean_object* v_declName_2700_; lean_object* v_type_2701_; lean_object* v_value_2702_; lean_object* v_body_2703_; uint8_t v_nondep_2704_; size_t v___x_2705_; size_t v___x_2706_; uint8_t v___x_2707_; 
v_declName_2700_ = lean_ctor_get(v_e_2662_, 0);
v_type_2701_ = lean_ctor_get(v_e_2662_, 1);
v_value_2702_ = lean_ctor_get(v_e_2662_, 2);
v_body_2703_ = lean_ctor_get(v_e_2662_, 3);
v_nondep_2704_ = lean_ctor_get_uint8(v_e_2662_, sizeof(void*)*4 + 8);
v___x_2705_ = lean_ptr_addr(v_type_2701_);
v___x_2706_ = lean_ptr_addr(v_a_2693_);
v___x_2707_ = lean_usize_dec_eq(v___x_2705_, v___x_2706_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; lean_object* v___x_2710_; 
lean_inc(v_declName_2700_);
lean_dec_ref_known(v_e_2662_, 4);
v___x_2708_ = l_Lean_Expr_letE___override(v_declName_2700_, v_a_2693_, v_a_2695_, v_b_2667_, v_nondep_2704_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2708_);
v___x_2710_ = v___x_2697_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v___x_2708_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
else
{
size_t v___x_2712_; size_t v___x_2713_; uint8_t v___x_2714_; 
v___x_2712_ = lean_ptr_addr(v_value_2702_);
v___x_2713_ = lean_ptr_addr(v_a_2695_);
v___x_2714_ = lean_usize_dec_eq(v___x_2712_, v___x_2713_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; lean_object* v___x_2717_; 
lean_inc(v_declName_2700_);
lean_dec_ref_known(v_e_2662_, 4);
v___x_2715_ = l_Lean_Expr_letE___override(v_declName_2700_, v_a_2693_, v_a_2695_, v_b_2667_, v_nondep_2704_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2715_);
v___x_2717_ = v___x_2697_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
else
{
size_t v___x_2719_; size_t v___x_2720_; uint8_t v___x_2721_; 
v___x_2719_ = lean_ptr_addr(v_body_2703_);
v___x_2720_ = lean_ptr_addr(v_b_2667_);
v___x_2721_ = lean_usize_dec_eq(v___x_2719_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; lean_object* v___x_2724_; 
lean_inc(v_declName_2700_);
lean_dec_ref_known(v_e_2662_, 4);
v___x_2722_ = l_Lean_Expr_letE___override(v_declName_2700_, v_a_2693_, v_a_2695_, v_b_2667_, v_nondep_2704_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2722_);
v___x_2724_ = v___x_2697_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2722_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
else
{
lean_object* v___x_2727_; 
lean_dec(v_a_2695_);
lean_dec(v_a_2693_);
lean_dec_ref(v_b_2667_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v_e_2662_);
v___x_2727_ = v___x_2697_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_e_2662_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
}
}
else
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2732_; 
lean_dec(v_a_2695_);
lean_dec(v_a_2693_);
lean_dec_ref(v_b_2667_);
lean_dec_ref(v_e_2662_);
v___x_2729_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2730_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2729_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2730_);
v___x_2732_ = v___x_2697_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
v___jp_2734_:
{
uint8_t v___x_2744_; lean_object* v___x_2745_; 
v___x_2744_ = 0;
v___x_2745_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v___y_2736_, v_a_2693_, v_a_2695_, v___y_2741_, v___x_2691_, v___x_2744_, v___y_2739_, v___y_2740_, v___y_2735_, v___y_2738_, v___y_2743_, v___y_2742_, v___y_2737_);
return v___x_2745_;
}
v___jp_2751_:
{
if (v_underBinder_2747_ == 0)
{
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2753_);
goto v___jp_2699_;
}
else
{
if (v_descend_2746_ == 0)
{
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2753_);
goto v___jp_2699_;
}
else
{
lean_del_object(v___x_2697_);
lean_dec_ref(v_b_2667_);
lean_dec_ref(v_e_2662_);
v___y_2735_ = v___y_2752_;
v___y_2736_ = v___y_2753_;
v___y_2737_ = v___y_2755_;
v___y_2738_ = v___y_2754_;
v___y_2739_ = v___y_2756_;
v___y_2740_ = v___y_2758_;
v___y_2741_ = v___y_2757_;
v___y_2742_ = v___y_2760_;
v___y_2743_ = v___y_2759_;
goto v___jp_2734_;
}
}
}
v___jp_2761_:
{
lean_object* v___x_2770_; 
lean_inc(v_a_2695_);
lean_inc(v_a_2693_);
v___x_2770_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_2661_, v_n_2664_, v_a_2693_, v_a_2695_, v___y_2763_, v___y_2765_, v___y_2768_, v___y_2769_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v_fst_2772_; lean_object* v_snd_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___f_2777_; uint8_t v___x_2778_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
lean_inc(v_a_2771_);
lean_dec_ref_known(v___x_2770_, 1);
v_fst_2772_ = lean_ctor_get(v_a_2771_, 0);
lean_inc_n(v_fst_2772_, 2);
v_snd_2773_ = lean_ctor_get(v_a_2771_, 1);
lean_inc(v_snd_2773_);
lean_dec(v_a_2771_);
v___x_2774_ = lean_box(v___x_2691_);
v___x_2775_ = lean_box(v_isLet_2663_);
v___x_2776_ = lean_box(v_topLevel_2668_);
lean_inc(v_a_2695_);
lean_inc(v_a_2693_);
lean_inc_ref(v_e_2662_);
lean_inc_ref(v_b_2667_);
v___f_2777_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed), 18, 9);
lean_closure_set(v___f_2777_, 0, v_fst_2772_);
lean_closure_set(v___f_2777_, 1, v_fvars_2661_);
lean_closure_set(v___f_2777_, 2, v_b_2667_);
lean_closure_set(v___f_2777_, 3, v___x_2774_);
lean_closure_set(v___f_2777_, 4, v_e_2662_);
lean_closure_set(v___f_2777_, 5, v_a_2693_);
lean_closure_set(v___f_2777_, 6, v_a_2695_);
lean_closure_set(v___f_2777_, 7, v___x_2775_);
lean_closure_set(v___f_2777_, 8, v___x_2776_);
v___x_2778_ = lean_unbox(v_fst_2772_);
lean_dec(v_fst_2772_);
if (v___x_2778_ == 0)
{
v___y_2752_ = v___y_2765_;
v___y_2753_ = v_snd_2773_;
v___y_2754_ = v___y_2766_;
v___y_2755_ = v___y_2769_;
v___y_2756_ = v___y_2763_;
v___y_2757_ = v___f_2777_;
v___y_2758_ = v___y_2764_;
v___y_2759_ = v___y_2767_;
v___y_2760_ = v___y_2768_;
goto v___jp_2751_;
}
else
{
if (v___y_2762_ == 0)
{
lean_del_object(v___x_2697_);
lean_dec_ref(v_b_2667_);
lean_dec_ref(v_e_2662_);
v___y_2735_ = v___y_2765_;
v___y_2736_ = v_snd_2773_;
v___y_2737_ = v___y_2769_;
v___y_2738_ = v___y_2766_;
v___y_2739_ = v___y_2763_;
v___y_2740_ = v___y_2764_;
v___y_2741_ = v___f_2777_;
v___y_2742_ = v___y_2768_;
v___y_2743_ = v___y_2767_;
goto v___jp_2734_;
}
else
{
v___y_2752_ = v___y_2765_;
v___y_2753_ = v_snd_2773_;
v___y_2754_ = v___y_2766_;
v___y_2755_ = v___y_2769_;
v___y_2756_ = v___y_2763_;
v___y_2757_ = v___f_2777_;
v___y_2758_ = v___y_2764_;
v___y_2759_ = v___y_2767_;
v___y_2760_ = v___y_2768_;
goto v___jp_2751_;
}
}
}
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_del_object(v___x_2697_);
lean_dec(v_a_2695_);
lean_dec(v_a_2693_);
lean_dec_ref(v_b_2667_);
lean_dec_ref(v_e_2662_);
lean_dec(v_fvars_2661_);
v_a_2779_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2770_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2770_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
v___jp_2787_:
{
if (v_merge_2749_ == 0)
{
v___y_2762_ = v___y_2788_;
v___y_2763_ = v_a_2669_;
v___y_2764_ = v_a_2670_;
v___y_2765_ = v_a_2671_;
v___y_2766_ = v_a_2672_;
v___y_2767_ = v_a_2673_;
v___y_2768_ = v_a_2674_;
v___y_2769_ = v_a_2675_;
goto v___jp_2761_;
}
else
{
lean_object* v___x_2789_; lean_object* v_valueMap_2790_; lean_object* v___x_2791_; 
v___x_2789_ = lean_st_ref_get(v_a_2671_);
v_valueMap_2790_ = lean_ctor_get(v___x_2789_, 2);
lean_inc_ref(v_valueMap_2790_);
lean_dec(v___x_2789_);
v___x_2791_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_valueMap_2790_, v_a_2695_);
lean_dec_ref(v_valueMap_2790_);
if (lean_obj_tag(v___x_2791_) == 1)
{
lean_del_object(v___x_2697_);
lean_dec(v_a_2695_);
lean_dec(v_a_2693_);
lean_dec(v_n_2664_);
lean_dec_ref(v_e_2662_);
if (v_isLet_2663_ == 0)
{
lean_object* v_val_2792_; 
v_val_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_val_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___y_2678_ = v_val_2792_;
v___y_2679_ = v_a_2669_;
v___y_2680_ = v_a_2670_;
v___y_2681_ = v_a_2671_;
v___y_2682_ = v_a_2672_;
v___y_2683_ = v_a_2673_;
v___y_2684_ = v_a_2674_;
v___y_2685_ = v_a_2675_;
goto v___jp_2677_;
}
else
{
if (v_lift_2750_ == 0)
{
lean_object* v_val_2793_; 
v_val_2793_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_val_2793_);
lean_dec_ref_known(v___x_2791_, 1);
v___y_2678_ = v_val_2793_;
v___y_2679_ = v_a_2669_;
v___y_2680_ = v_a_2670_;
v___y_2681_ = v_a_2671_;
v___y_2682_ = v_a_2672_;
v___y_2683_ = v_a_2673_;
v___y_2684_ = v_a_2674_;
v___y_2685_ = v_a_2675_;
goto v___jp_2677_;
}
else
{
lean_object* v_val_2794_; lean_object* v___x_2795_; 
v_val_2794_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_val_2794_);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2795_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_val_2794_, v_a_2671_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_dec_ref_known(v___x_2795_, 1);
v___y_2678_ = v_val_2794_;
v___y_2679_ = v_a_2669_;
v___y_2680_ = v_a_2670_;
v___y_2681_ = v_a_2671_;
v___y_2682_ = v_a_2672_;
v___y_2683_ = v_a_2673_;
v___y_2684_ = v_a_2674_;
v___y_2685_ = v_a_2675_;
goto v___jp_2677_;
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_dec(v_val_2794_);
lean_dec_ref(v_b_2667_);
lean_dec(v_fvars_2661_);
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2791_);
v___y_2762_ = v___y_2788_;
v___y_2763_ = v_a_2669_;
v___y_2764_ = v_a_2670_;
v___y_2765_ = v_a_2671_;
v___y_2766_ = v_a_2672_;
v___y_2767_ = v_a_2673_;
v___y_2768_ = v_a_2674_;
v___y_2769_ = v_a_2675_;
goto v___jp_2761_;
}
}
}
}
}
else
{
lean_dec(v_a_2693_);
lean_dec_ref(v_b_2667_);
lean_dec(v_n_2664_);
lean_dec_ref(v_e_2662_);
lean_dec(v_fvars_2661_);
return v___x_2694_;
}
}
else
{
lean_dec_ref(v_b_2667_);
lean_dec_ref(v_v_2666_);
lean_dec(v_n_2664_);
lean_dec_ref(v_e_2662_);
lean_dec(v_fvars_2661_);
return v___x_2692_;
}
v___jp_2677_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
lean_inc(v___y_2678_);
v___x_2686_ = l_Lean_Expr_fvar___override(v___y_2678_);
v___x_2687_ = lean_expr_instantiate1(v_b_2667_, v___x_2686_);
lean_dec_ref(v___x_2686_);
lean_dec_ref(v_b_2667_);
v___x_2688_ = lean_box(v_topLevel_2668_);
v___x_2689_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___boxed), 11, 3);
lean_closure_set(v___x_2689_, 0, v_fvars_2661_);
lean_closure_set(v___x_2689_, 1, v___x_2687_);
lean_closure_set(v___x_2689_, 2, v___x_2688_);
v___x_2690_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v___y_2678_, v___x_2689_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2678_);
return v___x_2690_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object* v_fvars_2807_, lean_object* v_struct_2808_, lean_object* v___y_2809_, lean_object* v_typeName_2810_, lean_object* v_idx_2811_, lean_object* v_e_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
uint8_t v___y_41893__boxed_2821_; lean_object* v_res_2822_; 
v___y_41893__boxed_2821_ = lean_unbox(v___y_2809_);
v_res_2822_ = l_Lean_Meta_ExtractLets_extractCore___lam__2(v_fvars_2807_, v_struct_2808_, v___y_41893__boxed_2821_, v_typeName_2810_, v_idx_2811_, v_e_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
return v_res_2822_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2826_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3));
v___x_2827_ = lean_unsigned_to_nat(75u);
v___x_2828_ = lean_unsigned_to_nat(229u);
v___x_2829_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2));
v___x_2830_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1));
v___x_2831_ = l_mkPanicMessageWithDecl(v___x_2830_, v___x_2829_, v___x_2828_, v___x_2827_, v___x_2826_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t v_descend_2832_, lean_object* v_e_2833_, lean_object* v_fvars_2834_, uint8_t v___x_2835_, uint8_t v_topLevel_2836_, uint8_t v___y_2837_, lean_object* v_____r_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
lean_object* v_k_2848_; 
switch(lean_obj_tag(v_e_2833_))
{
case 5:
{
lean_object* v___x_2851_; lean_object* v_dummy_2852_; lean_object* v_nargs_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2851_ = l_Lean_Expr_getAppFn(v_e_2833_);
v_dummy_2852_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0);
v_nargs_2853_ = l_Lean_Expr_getAppNumArgs(v_e_2833_);
lean_inc(v_nargs_2853_);
v___x_2854_ = lean_mk_array(v_nargs_2853_, v_dummy_2852_);
v___x_2855_ = lean_unsigned_to_nat(1u);
v___x_2856_ = lean_nat_sub(v_nargs_2853_, v___x_2855_);
lean_dec(v_nargs_2853_);
lean_inc_ref(v_e_2833_);
v___x_2857_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2833_, v___x_2854_, v___x_2856_);
v___x_2858_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed), 11, 3);
lean_closure_set(v___x_2858_, 0, v_fvars_2834_);
lean_closure_set(v___x_2858_, 1, v___x_2851_);
lean_closure_set(v___x_2858_, 2, v___x_2857_);
v_k_2848_ = v___x_2858_;
goto v___jp_2847_;
}
case 6:
{
lean_object* v_binderName_2859_; lean_object* v_binderType_2860_; lean_object* v_body_2861_; uint8_t v_binderInfo_2862_; lean_object* v___x_2863_; lean_object* v___f_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v_binderName_2859_ = lean_ctor_get(v_e_2833_, 0);
v_binderType_2860_ = lean_ctor_get(v_e_2833_, 1);
v_body_2861_ = lean_ctor_get(v_e_2833_, 2);
v_binderInfo_2862_ = lean_ctor_get_uint8(v_e_2833_, sizeof(void*)*3 + 8);
v___x_2863_ = lean_box(v_binderInfo_2862_);
lean_inc_ref(v_e_2833_);
lean_inc_ref_n(v_body_2861_, 2);
lean_inc_n(v_binderName_2859_, 2);
lean_inc_ref_n(v_binderType_2860_, 2);
v___f_2864_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2864_, 0, v_binderType_2860_);
lean_closure_set(v___f_2864_, 1, v_binderName_2859_);
lean_closure_set(v___f_2864_, 2, v___x_2863_);
lean_closure_set(v___f_2864_, 3, v_body_2861_);
lean_closure_set(v___f_2864_, 4, v_e_2833_);
v___x_2865_ = lean_box(v_binderInfo_2862_);
v___x_2866_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2866_, 0, v_fvars_2834_);
lean_closure_set(v___x_2866_, 1, v_binderName_2859_);
lean_closure_set(v___x_2866_, 2, v_binderType_2860_);
lean_closure_set(v___x_2866_, 3, v_body_2861_);
lean_closure_set(v___x_2866_, 4, v___x_2865_);
lean_closure_set(v___x_2866_, 5, v___f_2864_);
v_k_2848_ = v___x_2866_;
goto v___jp_2847_;
}
case 7:
{
lean_object* v_binderName_2867_; lean_object* v_binderType_2868_; lean_object* v_body_2869_; uint8_t v_binderInfo_2870_; lean_object* v___x_2871_; lean_object* v___f_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v_binderName_2867_ = lean_ctor_get(v_e_2833_, 0);
v_binderType_2868_ = lean_ctor_get(v_e_2833_, 1);
v_body_2869_ = lean_ctor_get(v_e_2833_, 2);
v_binderInfo_2870_ = lean_ctor_get_uint8(v_e_2833_, sizeof(void*)*3 + 8);
v___x_2871_ = lean_box(v_binderInfo_2870_);
lean_inc_ref(v_e_2833_);
lean_inc_ref_n(v_body_2869_, 2);
lean_inc_n(v_binderName_2867_, 2);
lean_inc_ref_n(v_binderType_2868_, 2);
v___f_2872_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2872_, 0, v_binderType_2868_);
lean_closure_set(v___f_2872_, 1, v_binderName_2867_);
lean_closure_set(v___f_2872_, 2, v___x_2871_);
lean_closure_set(v___f_2872_, 3, v_body_2869_);
lean_closure_set(v___f_2872_, 4, v_e_2833_);
v___x_2873_ = lean_box(v_binderInfo_2870_);
v___x_2874_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2874_, 0, v_fvars_2834_);
lean_closure_set(v___x_2874_, 1, v_binderName_2867_);
lean_closure_set(v___x_2874_, 2, v_binderType_2868_);
lean_closure_set(v___x_2874_, 3, v_body_2869_);
lean_closure_set(v___x_2874_, 4, v___x_2873_);
lean_closure_set(v___x_2874_, 5, v___f_2872_);
v_k_2848_ = v___x_2874_;
goto v___jp_2847_;
}
case 8:
{
uint8_t v_nondep_2875_; 
v_nondep_2875_ = lean_ctor_get_uint8(v_e_2833_, sizeof(void*)*4 + 8);
if (v_nondep_2875_ == 0)
{
lean_object* v_declName_2876_; lean_object* v_type_2877_; lean_object* v_value_2878_; lean_object* v_body_2879_; lean_object* v___x_2880_; 
v_declName_2876_ = lean_ctor_get(v_e_2833_, 0);
lean_inc(v_declName_2876_);
v_type_2877_ = lean_ctor_get(v_e_2833_, 1);
lean_inc_ref(v_type_2877_);
v_value_2878_ = lean_ctor_get(v_e_2833_, 2);
lean_inc_ref(v_value_2878_);
v_body_2879_ = lean_ctor_get(v_e_2833_, 3);
lean_inc_ref(v_body_2879_);
v___x_2880_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2834_, v_e_2833_, v___x_2835_, v_declName_2876_, v_type_2877_, v_value_2878_, v_body_2879_, v_topLevel_2836_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
return v___x_2880_;
}
else
{
lean_object* v_declName_2881_; lean_object* v_type_2882_; lean_object* v_value_2883_; lean_object* v_body_2884_; lean_object* v___x_2885_; 
v_declName_2881_ = lean_ctor_get(v_e_2833_, 0);
lean_inc(v_declName_2881_);
v_type_2882_ = lean_ctor_get(v_e_2833_, 1);
lean_inc_ref(v_type_2882_);
v_value_2883_ = lean_ctor_get(v_e_2833_, 2);
lean_inc_ref(v_value_2883_);
v_body_2884_ = lean_ctor_get(v_e_2833_, 3);
lean_inc_ref(v_body_2884_);
v___x_2885_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2834_, v_e_2833_, v___y_2837_, v_declName_2881_, v_type_2882_, v_value_2883_, v_body_2884_, v_topLevel_2836_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
return v___x_2885_;
}
}
case 10:
{
lean_object* v_data_2886_; lean_object* v_expr_2887_; lean_object* v___x_2888_; 
v_data_2886_ = lean_ctor_get(v_e_2833_, 0);
v_expr_2887_ = lean_ctor_get(v_e_2833_, 1);
lean_inc_ref(v_expr_2887_);
v___x_2888_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2834_, v_expr_2887_, v_topLevel_2836_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2903_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2891_ = v___x_2888_;
v_isShared_2892_ = v_isSharedCheck_2903_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2888_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2903_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
size_t v___x_2893_; size_t v___x_2894_; uint8_t v___x_2895_; 
v___x_2893_ = lean_ptr_addr(v_expr_2887_);
v___x_2894_ = lean_ptr_addr(v_a_2889_);
v___x_2895_ = lean_usize_dec_eq(v___x_2893_, v___x_2894_);
if (v___x_2895_ == 0)
{
lean_object* v___x_2896_; lean_object* v___x_2898_; 
lean_inc(v_data_2886_);
lean_dec_ref_known(v_e_2833_, 2);
v___x_2896_ = l_Lean_Expr_mdata___override(v_data_2886_, v_a_2889_);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 0, v___x_2896_);
v___x_2898_ = v___x_2891_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
else
{
lean_object* v___x_2901_; 
lean_dec(v_a_2889_);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 0, v_e_2833_);
v___x_2901_ = v___x_2891_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_e_2833_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2833_, 2);
return v___x_2888_;
}
}
case 11:
{
lean_object* v_typeName_2904_; lean_object* v_idx_2905_; lean_object* v_struct_2906_; lean_object* v___x_2907_; lean_object* v___f_2908_; 
v_typeName_2904_ = lean_ctor_get(v_e_2833_, 0);
v_idx_2905_ = lean_ctor_get(v_e_2833_, 1);
v_struct_2906_ = lean_ctor_get(v_e_2833_, 2);
v___x_2907_ = lean_box(v___y_2837_);
lean_inc_ref(v_e_2833_);
lean_inc(v_idx_2905_);
lean_inc(v_typeName_2904_);
lean_inc_ref(v_struct_2906_);
v___f_2908_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2908_, 0, v_fvars_2834_);
lean_closure_set(v___f_2908_, 1, v_struct_2906_);
lean_closure_set(v___f_2908_, 2, v___x_2907_);
lean_closure_set(v___f_2908_, 3, v_typeName_2904_);
lean_closure_set(v___f_2908_, 4, v_idx_2905_);
lean_closure_set(v___f_2908_, 5, v_e_2833_);
v_k_2848_ = v___f_2908_;
goto v___jp_2847_;
}
default: 
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
lean_dec(v_fvars_2834_);
lean_dec_ref(v_e_2833_);
v___x_2909_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4);
v___x_2910_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v___x_2909_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
return v___x_2910_;
}
}
v___jp_2847_:
{
if (v_descend_2832_ == 0)
{
lean_object* v___x_2849_; 
lean_dec_ref(v_k_2848_);
v___x_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2849_, 0, v_e_2833_);
return v___x_2849_;
}
else
{
lean_object* v___x_2850_; 
lean_dec_ref(v_e_2833_);
lean_inc(v___y_2845_);
lean_inc_ref(v___y_2844_);
lean_inc(v___y_2843_);
lean_inc_ref(v___y_2842_);
lean_inc(v___y_2841_);
lean_inc(v___y_2840_);
lean_inc_ref(v___y_2839_);
v___x_2850_ = lean_apply_8(v_k_2848_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, lean_box(0));
return v___x_2850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object* v_descend_2911_, lean_object* v_e_2912_, lean_object* v_fvars_2913_, lean_object* v___x_2914_, lean_object* v_topLevel_2915_, lean_object* v___y_2916_, lean_object* v_____r_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
uint8_t v_descend_boxed_2926_; uint8_t v___x_42046__boxed_2927_; uint8_t v_topLevel_boxed_2928_; uint8_t v___y_42047__boxed_2929_; lean_object* v_res_2930_; 
v_descend_boxed_2926_ = lean_unbox(v_descend_2911_);
v___x_42046__boxed_2927_ = lean_unbox(v___x_2914_);
v_topLevel_boxed_2928_ = lean_unbox(v_topLevel_2915_);
v___y_42047__boxed_2929_ = lean_unbox(v___y_2916_);
v_res_2930_ = l_Lean_Meta_ExtractLets_extractCore___lam__3(v_descend_boxed_2926_, v_e_2912_, v_fvars_2913_, v___x_42046__boxed_2927_, v_topLevel_boxed_2928_, v___y_42047__boxed_2929_, v_____r_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object* v_fvars_2931_, lean_object* v_e_2932_, uint8_t v_topLevel_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_){
_start:
{
lean_object* v___y_2943_; lean_object* v_a_2944_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2954_; lean_object* v___y_2955_; uint8_t v___x_2958_; 
v___x_2958_ = l_Lean_Expr_isAtomic(v_e_2932_);
if (v___x_2958_ == 0)
{
uint8_t v_proofs_2959_; uint8_t v_types_2960_; uint8_t v_descend_2961_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v___y_2965_; uint8_t v___y_2966_; uint8_t v___y_2983_; 
v_proofs_2959_ = lean_ctor_get_uint8(v_a_2934_, 0);
v_types_2960_ = lean_ctor_get_uint8(v_a_2934_, 1);
v_descend_2961_ = lean_ctor_get_uint8(v_a_2934_, 3);
if (v_descend_2961_ == 0)
{
goto v___jp_3007_;
}
else
{
if (v___x_2958_ == 0)
{
v___y_2983_ = v___x_2958_;
goto v___jp_2982_;
}
else
{
goto v___jp_3007_;
}
}
v___jp_2962_:
{
if (v___y_2966_ == 0)
{
lean_dec_ref(v___y_2965_);
if (v_proofs_2959_ == 0)
{
lean_object* v___x_2967_; 
lean_inc_ref(v_e_2932_);
v___x_2967_ = l_Lean_Meta_isProof(v_e_2932_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; uint8_t v___x_2969_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2968_);
lean_dec_ref_known(v___x_2967_, 1);
v___x_2969_ = lean_unbox(v_a_2968_);
lean_dec(v_a_2968_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
lean_dec_ref(v_e_2932_);
v___x_2970_ = lean_box(0);
lean_inc(v_a_2940_);
lean_inc_ref(v_a_2939_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2937_);
lean_inc(v_a_2936_);
lean_inc(v_a_2935_);
lean_inc_ref(v_a_2934_);
v___x_2971_ = lean_apply_9(v___y_2963_, v___x_2970_, v_a_2934_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_, lean_box(0));
v___y_2950_ = v___y_2964_;
v___y_2951_ = v___x_2971_;
goto v___jp_2949_;
}
else
{
lean_dec_ref(v___y_2963_);
v___y_2943_ = v___y_2964_;
v_a_2944_ = v_e_2932_;
goto v___jp_2942_;
}
}
else
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2979_; 
lean_dec_ref(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec_ref(v_e_2932_);
v_a_2972_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2974_ = v___x_2967_;
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2967_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
}
}
else
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
lean_dec_ref(v_e_2932_);
v___x_2980_ = lean_box(0);
lean_inc(v_a_2940_);
lean_inc_ref(v_a_2939_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2937_);
lean_inc(v_a_2936_);
lean_inc(v_a_2935_);
lean_inc_ref(v_a_2934_);
v___x_2981_ = lean_apply_9(v___y_2963_, v___x_2980_, v_a_2934_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_, lean_box(0));
v___y_2950_ = v___y_2964_;
v___y_2951_ = v___x_2981_;
goto v___jp_2949_;
}
}
else
{
lean_dec_ref(v___y_2963_);
lean_dec_ref(v_e_2932_);
v___y_2954_ = v___y_2964_;
v___y_2955_ = v___y_2965_;
goto v___jp_2953_;
}
}
v___jp_2982_:
{
if (v___y_2983_ == 0)
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2984_ = lean_box(v_topLevel_2933_);
lean_inc_ref(v_e_2932_);
v___x_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
lean_ctor_set(v___x_2985_, 1, v_e_2932_);
v___x_2986_ = lean_st_ref_get(v_a_2935_);
v___x_2987_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v___x_2986_, v___x_2985_);
lean_dec(v___x_2986_);
if (lean_obj_tag(v___x_2987_) == 0)
{
uint8_t v___x_2988_; 
v___x_2988_ = l_Lean_Meta_ExtractLets_containsLet(v_e_2932_);
if (v___x_2988_ == 0)
{
lean_dec(v_fvars_2931_);
v___y_2943_ = v___x_2985_;
v_a_2944_ = v_e_2932_;
goto v___jp_2942_;
}
else
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___f_2993_; lean_object* v___x_2994_; lean_object* v___f_2995_; 
v___x_2989_ = lean_box(v_descend_2961_);
v___x_2990_ = lean_box(v___x_2988_);
v___x_2991_ = lean_box(v_topLevel_2933_);
v___x_2992_ = lean_box(v___y_2983_);
lean_inc_ref_n(v_e_2932_, 2);
v___f_2993_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed), 15, 6);
lean_closure_set(v___f_2993_, 0, v___x_2989_);
lean_closure_set(v___f_2993_, 1, v_e_2932_);
lean_closure_set(v___f_2993_, 2, v_fvars_2931_);
lean_closure_set(v___f_2993_, 3, v___x_2990_);
lean_closure_set(v___f_2993_, 4, v___x_2991_);
lean_closure_set(v___f_2993_, 5, v___x_2992_);
v___x_2994_ = lean_box(v_types_2960_);
lean_inc_ref(v___f_2993_);
v___f_2995_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed), 12, 3);
lean_closure_set(v___f_2995_, 0, v___x_2994_);
lean_closure_set(v___f_2995_, 1, v_e_2932_);
lean_closure_set(v___f_2995_, 2, v___f_2993_);
if (v_topLevel_2933_ == 0)
{
v___y_2963_ = v___f_2995_;
v___y_2964_ = v___x_2985_;
v___y_2965_ = v___f_2993_;
v___y_2966_ = v___x_2958_;
goto v___jp_2962_;
}
else
{
uint8_t v___x_2996_; 
v___x_2996_ = l_Lean_Expr_isLet(v_e_2932_);
if (v___x_2996_ == 0)
{
uint8_t v___x_2997_; 
v___x_2997_ = l_Lean_Expr_isMData(v_e_2932_);
v___y_2963_ = v___f_2995_;
v___y_2964_ = v___x_2985_;
v___y_2965_ = v___f_2993_;
v___y_2966_ = v___x_2997_;
goto v___jp_2962_;
}
else
{
lean_dec_ref(v___f_2995_);
lean_dec_ref(v_e_2932_);
v___y_2954_ = v___x_2985_;
v___y_2955_ = v___f_2993_;
goto v___jp_2953_;
}
}
}
}
else
{
lean_object* v_val_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref_known(v___x_2985_, 2);
lean_dec_ref(v_e_2932_);
lean_dec(v_fvars_2931_);
v_val_2998_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2987_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_val_2998_);
lean_dec(v___x_2987_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
lean_ctor_set_tag(v___x_3000_, 0);
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_val_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
else
{
lean_object* v___x_3006_; 
lean_dec(v_fvars_2931_);
v___x_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3006_, 0, v_e_2932_);
return v___x_3006_;
}
}
v___jp_3007_:
{
if (v_topLevel_2933_ == 0)
{
lean_object* v___x_3008_; 
lean_dec(v_fvars_2931_);
v___x_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3008_, 0, v_e_2932_);
return v___x_3008_;
}
else
{
v___y_2983_ = v___x_2958_;
goto v___jp_2982_;
}
}
}
else
{
lean_object* v___x_3009_; 
lean_dec(v_fvars_2931_);
v___x_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3009_, 0, v_e_2932_);
return v___x_3009_;
}
v___jp_2942_:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2945_ = lean_st_ref_take(v_a_2935_);
lean_inc_ref(v_a_2944_);
v___x_2946_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v___x_2945_, v___y_2943_, v_a_2944_);
v___x_2947_ = lean_st_ref_put(v_a_2935_, v___x_2946_);
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v_a_2944_);
return v___x_2948_;
}
v___jp_2949_:
{
if (lean_obj_tag(v___y_2951_) == 0)
{
lean_object* v_a_2952_; 
v_a_2952_ = lean_ctor_get(v___y_2951_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___y_2951_, 1);
v___y_2943_ = v___y_2950_;
v_a_2944_ = v_a_2952_;
goto v___jp_2942_;
}
else
{
lean_dec_ref(v___y_2950_);
return v___y_2951_;
}
}
v___jp_2953_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = lean_box(0);
lean_inc(v_a_2940_);
lean_inc_ref(v_a_2939_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2937_);
lean_inc(v_a_2936_);
lean_inc(v_a_2935_);
lean_inc_ref(v_a_2934_);
v___x_2957_ = lean_apply_9(v___y_2955_, v___x_2956_, v_a_2934_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_, lean_box(0));
v___y_2950_ = v___y_2954_;
v___y_2951_ = v___x_2957_;
goto v___jp_2949_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object* v_fvars_3010_, lean_object* v_struct_3011_, uint8_t v___y_3012_, lean_object* v_typeName_3013_, lean_object* v_idx_3014_, lean_object* v_e_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v___x_3024_; 
lean_inc_ref(v_struct_3011_);
v___x_3024_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_3010_, v_struct_3011_, v___y_3012_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3039_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3027_ = v___x_3024_;
v_isShared_3028_ = v_isSharedCheck_3039_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3024_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3039_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
size_t v___x_3029_; size_t v___x_3030_; uint8_t v___x_3031_; 
v___x_3029_ = lean_ptr_addr(v_struct_3011_);
lean_dec_ref(v_struct_3011_);
v___x_3030_ = lean_ptr_addr(v_a_3025_);
v___x_3031_ = lean_usize_dec_eq(v___x_3029_, v___x_3030_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; lean_object* v___x_3034_; 
lean_dec_ref(v_e_3015_);
v___x_3032_ = l_Lean_Expr_proj___override(v_typeName_3013_, v_idx_3014_, v_a_3025_);
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 0, v___x_3032_);
v___x_3034_ = v___x_3027_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3032_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
else
{
lean_object* v___x_3037_; 
lean_dec(v_a_3025_);
lean_dec(v_idx_3014_);
lean_dec(v_typeName_3013_);
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 0, v_e_3015_);
v___x_3037_ = v___x_3027_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_e_3015_);
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
lean_dec_ref(v_e_3015_);
lean_dec(v_idx_3014_);
lean_dec(v_typeName_3013_);
lean_dec_ref(v_struct_3011_);
return v___x_3024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object* v_fvars_3040_, lean_object* v_sz_3041_, lean_object* v_i_3042_, lean_object* v_bs_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
size_t v_sz_boxed_3052_; size_t v_i_boxed_3053_; lean_object* v_res_3054_; 
v_sz_boxed_3052_ = lean_unbox_usize(v_sz_3041_);
lean_dec(v_sz_3041_);
v_i_boxed_3053_ = lean_unbox_usize(v_i_3042_);
lean_dec(v_i_3042_);
v_res_3054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_3040_, v_sz_boxed_3052_, v_i_boxed_3053_, v_bs_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3046_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object* v_upperBound_3055_, lean_object* v_fst_3056_, lean_object* v_fvars_3057_, lean_object* v_a_3058_, lean_object* v_b_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3055_, v_fst_3056_, v_fvars_3057_, v_a_3058_, v_b_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_);
lean_dec(v___y_3066_);
lean_dec_ref(v___y_3065_);
lean_dec(v___y_3064_);
lean_dec_ref(v___y_3063_);
lean_dec(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec_ref(v_fst_3056_);
lean_dec(v_upperBound_3055_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object* v_fvars_3069_, lean_object* v_e_3070_, lean_object* v_isLet_3071_, lean_object* v_n_3072_, lean_object* v_t_3073_, lean_object* v_v_3074_, lean_object* v_b_3075_, lean_object* v_topLevel_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v___y_3084_){
_start:
{
uint8_t v_isLet_boxed_3085_; uint8_t v_topLevel_boxed_3086_; lean_object* v_res_3087_; 
v_isLet_boxed_3085_ = lean_unbox(v_isLet_3071_);
v_topLevel_boxed_3086_ = lean_unbox(v_topLevel_3076_);
v_res_3087_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_3069_, v_e_3070_, v_isLet_boxed_3085_, v_n_3072_, v_t_3073_, v_v_3074_, v_b_3075_, v_topLevel_boxed_3086_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
lean_dec(v_a_3083_);
lean_dec_ref(v_a_3082_);
lean_dec(v_a_3081_);
lean_dec_ref(v_a_3080_);
lean_dec(v_a_3079_);
lean_dec(v_a_3078_);
lean_dec_ref(v_a_3077_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object* v_00_u03b1_3088_, lean_object* v_name_3089_, lean_object* v_type_3090_, lean_object* v_val_3091_, lean_object* v_k_3092_, uint8_t v_nondep_3093_, uint8_t v_kind_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v___x_3103_; 
v___x_3103_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_3089_, v_type_3090_, v_val_3091_, v_k_3092_, v_nondep_3093_, v_kind_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object* v_00_u03b1_3104_, lean_object* v_name_3105_, lean_object* v_type_3106_, lean_object* v_val_3107_, lean_object* v_k_3108_, lean_object* v_nondep_3109_, lean_object* v_kind_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
uint8_t v_nondep_boxed_3119_; uint8_t v_kind_boxed_3120_; lean_object* v_res_3121_; 
v_nondep_boxed_3119_ = lean_unbox(v_nondep_3109_);
v_kind_boxed_3120_ = lean_unbox(v_kind_3110_);
v_res_3121_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(v_00_u03b1_3104_, v_name_3105_, v_type_3106_, v_val_3107_, v_k_3108_, v_nondep_boxed_3119_, v_kind_boxed_3120_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec(v___y_3112_);
lean_dec_ref(v___y_3111_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object* v_00_u03b2_3122_, lean_object* v_m_3123_, lean_object* v_a_3124_, lean_object* v_b_3125_){
_start:
{
lean_object* v___x_3126_; 
v___x_3126_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v_m_3123_, v_a_3124_, v_b_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object* v_00_u03b2_3127_, lean_object* v_m_3128_, lean_object* v_a_3129_){
_start:
{
lean_object* v___x_3130_; 
v___x_3130_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_3128_, v_a_3129_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object* v_00_u03b2_3131_, lean_object* v_m_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(v_00_u03b2_3131_, v_m_3132_, v_a_3133_);
lean_dec_ref(v_a_3133_);
lean_dec_ref(v_m_3132_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object* v_upperBound_3135_, lean_object* v_fst_3136_, lean_object* v_fvars_3137_, lean_object* v_inst_3138_, lean_object* v_R_3139_, lean_object* v_a_3140_, lean_object* v_b_3141_, lean_object* v_c_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___x_3151_; 
v___x_3151_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3135_, v_fst_3136_, v_fvars_3137_, v_a_3140_, v_b_3141_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object* v_upperBound_3152_, lean_object* v_fst_3153_, lean_object* v_fvars_3154_, lean_object* v_inst_3155_, lean_object* v_R_3156_, lean_object* v_a_3157_, lean_object* v_b_3158_, lean_object* v_c_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(v_upperBound_3152_, v_fst_3153_, v_fvars_3154_, v_inst_3155_, v_R_3156_, v_a_3157_, v_b_3158_, v_c_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v_fst_3153_);
lean_dec(v_upperBound_3152_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object* v_00_u03b2_3169_, lean_object* v_m_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v___x_3172_; 
v___x_3172_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_3170_, v_a_3171_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object* v_00_u03b2_3173_, lean_object* v_m_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(v_00_u03b2_3173_, v_m_3174_, v_a_3175_);
lean_dec_ref(v_a_3175_);
lean_dec_ref(v_m_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object* v_00_u03b2_3177_, lean_object* v_a_3178_, lean_object* v_x_3179_){
_start:
{
uint8_t v___x_3180_; 
v___x_3180_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_3178_, v_x_3179_);
return v___x_3180_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3181_, lean_object* v_a_3182_, lean_object* v_x_3183_){
_start:
{
uint8_t v_res_3184_; lean_object* v_r_3185_; 
v_res_3184_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(v_00_u03b2_3181_, v_a_3182_, v_x_3183_);
lean_dec(v_x_3183_);
lean_dec_ref(v_a_3182_);
v_r_3185_ = lean_box(v_res_3184_);
return v_r_3185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object* v_00_u03b2_3186_, lean_object* v_data_3187_){
_start:
{
lean_object* v___x_3188_; 
v___x_3188_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_data_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object* v_00_u03b2_3189_, lean_object* v_a_3190_, lean_object* v_b_3191_, lean_object* v_x_3192_){
_start:
{
lean_object* v___x_3193_; 
v___x_3193_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_3190_, v_b_3191_, v_x_3192_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object* v_00_u03b2_3194_, lean_object* v_a_3195_, lean_object* v_x_3196_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_3195_, v_x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3198_, lean_object* v_a_3199_, lean_object* v_x_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(v_00_u03b2_3198_, v_a_3199_, v_x_3200_);
lean_dec(v_x_3200_);
lean_dec_ref(v_a_3199_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object* v_00_u03b2_3202_, lean_object* v_a_3203_, lean_object* v_x_3204_){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_3203_, v_x_3204_);
return v___x_3205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object* v_00_u03b2_3206_, lean_object* v_a_3207_, lean_object* v_x_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(v_00_u03b2_3206_, v_a_3207_, v_x_3208_);
lean_dec(v_x_3208_);
lean_dec_ref(v_a_3207_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_3210_, lean_object* v_i_3211_, lean_object* v_source_3212_, lean_object* v_target_3213_){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v_i_3211_, v_source_3212_, v_target_3213_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3215_, lean_object* v_x_3216_, lean_object* v_x_3217_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_x_3216_, v_x_3217_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object* v_e_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v___x_3228_; lean_object* v_a_3229_; lean_object* v___x_3230_; uint8_t v___x_3231_; lean_object* v___x_3232_; 
v___x_3228_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_3219_, v_a_3224_);
v_a_3229_ = lean_ctor_get(v___x_3228_, 0);
lean_inc(v_a_3229_);
lean_dec_ref(v___x_3228_);
v___x_3230_ = lean_box(0);
v___x_3231_ = 1;
v___x_3232_ = l_Lean_Meta_ExtractLets_extractCore(v___x_3230_, v_a_3229_, v___x_3231_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object* v_e_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_e_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_);
lean_dec(v_a_3240_);
lean_dec_ref(v_a_3239_);
lean_dec(v_a_3238_);
lean_dec_ref(v_a_3237_);
lean_dec(v_a_3236_);
lean_dec(v_a_3235_);
lean_dec_ref(v_a_3234_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t v_sz_3243_, size_t v_i_3244_, lean_object* v_bs_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
uint8_t v___x_3254_; 
v___x_3254_ = lean_usize_dec_lt(v_i_3244_, v_sz_3243_);
if (v___x_3254_ == 0)
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3255_, 0, v_bs_3245_);
return v___x_3255_;
}
else
{
lean_object* v_v_3256_; lean_object* v___x_3257_; lean_object* v_bs_x27_3258_; lean_object* v___x_3259_; 
v_v_3256_ = lean_array_uget(v_bs_3245_, v_i_3244_);
v___x_3257_ = lean_unsigned_to_nat(0u);
v_bs_x27_3258_ = lean_array_uset(v_bs_3245_, v_i_3244_, v___x_3257_);
v___x_3259_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_v_3256_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v_a_3260_; size_t v___x_3261_; size_t v___x_3262_; lean_object* v___x_3263_; 
v_a_3260_ = lean_ctor_get(v___x_3259_, 0);
lean_inc(v_a_3260_);
lean_dec_ref_known(v___x_3259_, 1);
v___x_3261_ = ((size_t)1ULL);
v___x_3262_ = lean_usize_add(v_i_3244_, v___x_3261_);
v___x_3263_ = lean_array_uset(v_bs_x27_3258_, v_i_3244_, v_a_3260_);
v_i_3244_ = v___x_3262_;
v_bs_3245_ = v___x_3263_;
goto _start;
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
lean_dec_ref(v_bs_x27_3258_);
v_a_3265_ = lean_ctor_get(v___x_3259_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3259_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3259_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object* v_sz_3273_, lean_object* v_i_3274_, lean_object* v_bs_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
size_t v_sz_boxed_3284_; size_t v_i_boxed_3285_; lean_object* v_res_3286_; 
v_sz_boxed_3284_ = lean_unbox_usize(v_sz_3273_);
lean_dec(v_sz_3273_);
v_i_boxed_3285_ = lean_unbox_usize(v_i_3274_);
lean_dec(v_i_3274_);
v_res_3286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_boxed_3284_, v_i_boxed_3285_, v_bs_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object* v_es_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_){
_start:
{
lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v___y_3302_; lean_object* v___y_3303_; uint8_t v_merge_3307_; 
v_merge_3307_ = lean_ctor_get_uint8(v_a_3288_, 6);
if (v_merge_3307_ == 0)
{
v___y_3297_ = v_a_3288_;
v___y_3298_ = v_a_3289_;
v___y_3299_ = v_a_3290_;
v___y_3300_ = v_a_3291_;
v___y_3301_ = v_a_3292_;
v___y_3302_ = v_a_3293_;
v___y_3303_ = v_a_3294_;
goto v___jp_3296_;
}
else
{
uint8_t v_useContext_3308_; 
v_useContext_3308_ = lean_ctor_get_uint8(v_a_3288_, 7);
if (v_useContext_3308_ == 0)
{
v___y_3297_ = v_a_3288_;
v___y_3298_ = v_a_3289_;
v___y_3299_ = v_a_3290_;
v___y_3300_ = v_a_3291_;
v___y_3301_ = v_a_3292_;
v___y_3302_ = v_a_3293_;
v___y_3303_ = v_a_3294_;
goto v___jp_3296_;
}
else
{
lean_object* v___x_3309_; 
v___x_3309_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_3288_, v_a_3289_, v_a_3290_, v_a_3291_, v_a_3292_, v_a_3293_, v_a_3294_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_dec_ref_known(v___x_3309_, 1);
v___y_3297_ = v_a_3288_;
v___y_3298_ = v_a_3289_;
v___y_3299_ = v_a_3290_;
v___y_3300_ = v_a_3291_;
v___y_3301_ = v_a_3292_;
v___y_3302_ = v_a_3293_;
v___y_3303_ = v_a_3294_;
goto v___jp_3296_;
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
lean_dec_ref(v_es_3287_);
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3309_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3309_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
}
v___jp_3296_:
{
size_t v_sz_3304_; size_t v___x_3305_; lean_object* v___x_3306_; 
v_sz_3304_ = lean_array_size(v_es_3287_);
v___x_3305_ = ((size_t)0ULL);
v___x_3306_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_3304_, v___x_3305_, v_es_3287_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_);
return v___x_3306_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object* v_es_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v___y_3326_){
_start:
{
lean_object* v_res_3327_; 
v_res_3327_ = l_Lean_Meta_ExtractLets_extract(v_es_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_);
lean_dec(v_a_3325_);
lean_dec_ref(v_a_3324_);
lean_dec(v_a_3323_);
lean_dec_ref(v_a_3322_);
lean_dec(v_a_3321_);
lean_dec(v_a_3320_);
lean_dec_ref(v_a_3319_);
return v_res_3327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object* v_decls_3328_, lean_object* v_x_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v___x_3335_; 
v___x_3335_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_3328_, v_x_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3343_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3338_ = v___x_3335_;
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v___x_3335_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3341_; 
if (v_isShared_3339_ == 0)
{
v___x_3341_ = v___x_3338_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3336_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
else
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
v_a_3344_ = lean_ctor_get(v___x_3335_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3346_ = v___x_3335_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v___x_3335_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3344_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object* v_decls_3352_, lean_object* v_x_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3352_, v_x_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object* v_00_u03b1_3360_, lean_object* v_decls_3361_, lean_object* v_x_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_){
_start:
{
lean_object* v___x_3368_; 
v___x_3368_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3361_, v_x_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object* v_00_u03b1_3369_, lean_object* v_decls_3370_, lean_object* v_x_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(v_00_u03b1_3369_, v_decls_3370_, v_x_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
lean_dec(v___y_3373_);
lean_dec_ref(v___y_3372_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t v_sz_3378_, size_t v_i_3379_, lean_object* v_bs_3380_){
_start:
{
uint8_t v___x_3381_; 
v___x_3381_ = lean_usize_dec_lt(v_i_3379_, v_sz_3378_);
if (v___x_3381_ == 0)
{
return v_bs_3380_;
}
else
{
lean_object* v_v_3382_; lean_object* v___x_3383_; lean_object* v_bs_x27_3384_; lean_object* v___x_3385_; size_t v___x_3386_; size_t v___x_3387_; lean_object* v___x_3388_; 
v_v_3382_ = lean_array_uget(v_bs_3380_, v_i_3379_);
v___x_3383_ = lean_unsigned_to_nat(0u);
v_bs_x27_3384_ = lean_array_uset(v_bs_3380_, v_i_3379_, v___x_3383_);
v___x_3385_ = l_Lean_LocalDecl_fvarId(v_v_3382_);
lean_dec(v_v_3382_);
v___x_3386_ = ((size_t)1ULL);
v___x_3387_ = lean_usize_add(v_i_3379_, v___x_3386_);
v___x_3388_ = lean_array_uset(v_bs_x27_3384_, v_i_3379_, v___x_3385_);
v_i_3379_ = v___x_3387_;
v_bs_3380_ = v___x_3388_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object* v_sz_3390_, lean_object* v_i_3391_, lean_object* v_bs_3392_){
_start:
{
size_t v_sz_boxed_3393_; size_t v_i_boxed_3394_; lean_object* v_res_3395_; 
v_sz_boxed_3393_ = lean_unbox_usize(v_sz_3390_);
lean_dec(v_sz_3390_);
v_i_boxed_3394_ = lean_unbox_usize(v_i_3391_);
lean_dec(v_i_3391_);
v_res_3395_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_boxed_3393_, v_i_boxed_3394_, v_bs_3392_);
return v_res_3395_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___x_3396_ = lean_box(0);
v___x_3397_ = lean_unsigned_to_nat(16u);
v___x_3398_ = lean_mk_array(v___x_3397_, v___x_3396_);
return v___x_3398_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3399_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0);
v___x_3400_ = lean_unsigned_to_nat(0u);
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3400_);
lean_ctor_set(v___x_3401_, 1, v___x_3399_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object* v_es_3402_, lean_object* v_givenNames_3403_, lean_object* v_k_3404_, lean_object* v_config_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_){
_start:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3411_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3412_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3413_, 0, v_givenNames_3403_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
lean_ctor_set(v___x_3413_, 2, v___x_3411_);
v___x_3414_ = lean_st_mk_ref(v___x_3413_);
v___x_3415_ = lean_st_mk_ref(v___x_3411_);
v___x_3416_ = l_Lean_Meta_ExtractLets_extract(v_es_3402_, v_config_3405_, v___x_3415_, v___x_3414_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v_givenNames_3420_; lean_object* v_decls_3421_; size_t v_sz_3422_; size_t v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; size_t v_sz_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v___x_3418_ = lean_st_ref_get(v___x_3415_);
lean_dec(v___x_3415_);
lean_dec(v___x_3418_);
v___x_3419_ = lean_st_ref_get(v___x_3414_);
lean_dec(v___x_3414_);
v_givenNames_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_givenNames_3420_);
v_decls_3421_ = lean_ctor_get(v___x_3419_, 1);
lean_inc_ref(v_decls_3421_);
lean_dec(v___x_3419_);
v_sz_3422_ = lean_array_size(v_decls_3421_);
v___x_3423_ = ((size_t)0ULL);
v___x_3424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_3422_, v___x_3423_, v_decls_3421_);
lean_inc_ref(v___x_3424_);
v___x_3425_ = lean_array_to_list(v___x_3424_);
v_sz_3426_ = lean_array_size(v___x_3424_);
v___x_3427_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_3426_, v___x_3423_, v___x_3424_);
v___x_3428_ = lean_apply_3(v_k_3404_, v___x_3427_, v_a_3417_, v_givenNames_3420_);
v___x_3429_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v___x_3425_, v___x_3428_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_);
return v___x_3429_;
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_dec(v___x_3415_);
lean_dec(v___x_3414_);
lean_dec_ref(v_k_3404_);
v_a_3430_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3416_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3416_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object* v_es_3438_, lean_object* v_givenNames_3439_, lean_object* v_k_3440_, lean_object* v_config_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3438_, v_givenNames_3439_, v_k_3440_, v_config_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_);
lean_dec(v_a_3445_);
lean_dec_ref(v_a_3444_);
lean_dec(v_a_3443_);
lean_dec_ref(v_a_3442_);
lean_dec_ref(v_config_3441_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object* v_00_u03b1_3448_, lean_object* v_es_3449_, lean_object* v_givenNames_3450_, lean_object* v_k_3451_, lean_object* v_config_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v___x_3458_; 
v___x_3458_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3449_, v_givenNames_3450_, v_k_3451_, v_config_3452_, v_a_3453_, v_a_3454_, v_a_3455_, v_a_3456_);
return v___x_3458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object* v_00_u03b1_3459_, lean_object* v_es_3460_, lean_object* v_givenNames_3461_, lean_object* v_k_3462_, lean_object* v_config_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v___y_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(v_00_u03b1_3459_, v_es_3460_, v_givenNames_3461_, v_k_3462_, v_config_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3466_);
lean_dec(v_a_3465_);
lean_dec_ref(v_a_3464_);
lean_dec_ref(v_config_3463_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object* v_k_3470_, lean_object* v_runInBase_3471_, lean_object* v_b_3472_, lean_object* v_c_3473_, lean_object* v_d_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_){
_start:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; 
v___x_3480_ = lean_apply_3(v_k_3470_, v_b_3472_, v_c_3473_, v_d_3474_);
lean_inc(v___y_3478_);
lean_inc_ref(v___y_3477_);
lean_inc(v___y_3476_);
lean_inc_ref(v___y_3475_);
v___x_3481_ = lean_apply_7(v_runInBase_3471_, lean_box(0), v___x_3480_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, lean_box(0));
return v___x_3481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object* v_k_3482_, lean_object* v_runInBase_3483_, lean_object* v_b_3484_, lean_object* v_c_3485_, lean_object* v_d_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_){
_start:
{
lean_object* v_res_3492_; 
v_res_3492_ = l_Lean_Meta_extractLets___redArg___lam__0(v_k_3482_, v_runInBase_3483_, v_b_3484_, v_c_3485_, v_d_3486_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
lean_dec(v___y_3488_);
lean_dec_ref(v___y_3487_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object* v_k_3493_, lean_object* v_es_3494_, lean_object* v_givenNames_3495_, lean_object* v_config_3496_, lean_object* v_runInBase_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_){
_start:
{
lean_object* v___f_3503_; lean_object* v___x_3504_; 
v___f_3503_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3503_, 0, v_k_3493_);
lean_closure_set(v___f_3503_, 1, v_runInBase_3497_);
v___x_3504_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3494_, v_givenNames_3495_, v___f_3503_, v_config_3496_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_);
return v___x_3504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object* v_k_3505_, lean_object* v_es_3506_, lean_object* v_givenNames_3507_, lean_object* v_config_3508_, lean_object* v_runInBase_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Lean_Meta_extractLets___redArg___lam__1(v_k_3505_, v_es_3506_, v_givenNames_3507_, v_config_3508_, v_runInBase_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec_ref(v_config_3508_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object* v_inst_3516_, lean_object* v_inst_3517_, lean_object* v_es_3518_, lean_object* v_givenNames_3519_, lean_object* v_k_3520_, lean_object* v_config_3521_){
_start:
{
lean_object* v_toBind_3522_; lean_object* v_liftWith_3523_; lean_object* v_restoreM_3524_; lean_object* v___f_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v_toBind_3522_ = lean_ctor_get(v_inst_3516_, 1);
lean_inc(v_toBind_3522_);
lean_dec_ref(v_inst_3516_);
v_liftWith_3523_ = lean_ctor_get(v_inst_3517_, 0);
lean_inc(v_liftWith_3523_);
v_restoreM_3524_ = lean_ctor_get(v_inst_3517_, 1);
lean_inc(v_restoreM_3524_);
lean_dec_ref(v_inst_3517_);
v___f_3525_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3525_, 0, v_k_3520_);
lean_closure_set(v___f_3525_, 1, v_es_3518_);
lean_closure_set(v___f_3525_, 2, v_givenNames_3519_);
lean_closure_set(v___f_3525_, 3, v_config_3521_);
v___x_3526_ = lean_apply_2(v_liftWith_3523_, lean_box(0), v___f_3525_);
v___x_3527_ = lean_apply_1(v_restoreM_3524_, lean_box(0));
v___x_3528_ = lean_apply_4(v_toBind_3522_, lean_box(0), lean_box(0), v___x_3526_, v___x_3527_);
return v___x_3528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object* v_m_3529_, lean_object* v_00_u03b1_3530_, lean_object* v_inst_3531_, lean_object* v_inst_3532_, lean_object* v_es_3533_, lean_object* v_givenNames_3534_, lean_object* v_k_3535_, lean_object* v_config_3536_){
_start:
{
lean_object* v___x_3537_; 
v___x_3537_ = l_Lean_Meta_extractLets___redArg(v_inst_3531_, v_inst_3532_, v_es_3533_, v_givenNames_3534_, v_k_3535_, v_config_3536_);
return v___x_3537_;
}
}
static lean_object* _init_l_Lean_Meta_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3538_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3539_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3540_ = lean_box(0);
v___x_3541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
lean_ctor_set(v___x_3541_, 1, v___x_3539_);
lean_ctor_set(v___x_3541_, 2, v___x_3538_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object* v_e_3542_, lean_object* v_config_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_){
_start:
{
uint8_t v_proofs_3549_; uint8_t v_types_3550_; uint8_t v_implicits_3551_; uint8_t v_descend_3552_; uint8_t v_underBinder_3553_; uint8_t v_usedOnly_3554_; uint8_t v_merge_3555_; uint8_t v_useContext_3556_; uint8_t v_preserveBinderNames_3557_; uint8_t v_lift_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3597_; 
v_proofs_3549_ = lean_ctor_get_uint8(v_config_3543_, 0);
v_types_3550_ = lean_ctor_get_uint8(v_config_3543_, 1);
v_implicits_3551_ = lean_ctor_get_uint8(v_config_3543_, 2);
v_descend_3552_ = lean_ctor_get_uint8(v_config_3543_, 3);
v_underBinder_3553_ = lean_ctor_get_uint8(v_config_3543_, 4);
v_usedOnly_3554_ = lean_ctor_get_uint8(v_config_3543_, 5);
v_merge_3555_ = lean_ctor_get_uint8(v_config_3543_, 6);
v_useContext_3556_ = lean_ctor_get_uint8(v_config_3543_, 7);
v_preserveBinderNames_3557_ = lean_ctor_get_uint8(v_config_3543_, 9);
v_lift_3558_ = lean_ctor_get_uint8(v_config_3543_, 10);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_config_3543_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3560_ = v_config_3543_;
v_isShared_3561_ = v_isSharedCheck_3597_;
goto v_resetjp_3559_;
}
else
{
lean_dec(v_config_3543_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3597_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; lean_object* v___x_3568_; 
v___x_3562_ = l_Lean_instInhabitedExpr;
v___x_3563_ = lean_unsigned_to_nat(1u);
v___x_3564_ = lean_mk_empty_array_with_capacity(v___x_3563_);
v___x_3565_ = lean_array_push(v___x_3564_, v_e_3542_);
v___x_3566_ = 1;
if (v_isShared_3561_ == 0)
{
v___x_3568_ = v___x_3560_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 0, v_proofs_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 1, v_types_3550_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 2, v_implicits_3551_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 3, v_descend_3552_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 4, v_underBinder_3553_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 5, v_usedOnly_3554_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 6, v_merge_3555_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 7, v_useContext_3556_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 9, v_preserveBinderNames_3557_);
lean_ctor_set_uint8(v_reuseFailAlloc_3596_, 10, v_lift_3558_);
v___x_3568_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
lean_ctor_set_uint8(v___x_3568_, 8, v___x_3566_);
v___x_3569_ = lean_unsigned_to_nat(0u);
v___x_3570_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3571_ = lean_obj_once(&l_Lean_Meta_liftLets___closed__0, &l_Lean_Meta_liftLets___closed__0_once, _init_l_Lean_Meta_liftLets___closed__0);
v___x_3572_ = lean_st_mk_ref(v___x_3571_);
v___x_3573_ = lean_st_mk_ref(v___x_3570_);
v___x_3574_ = l_Lean_Meta_ExtractLets_extract(v___x_3565_, v___x_3568_, v___x_3573_, v___x_3572_, v_a_3544_, v_a_3545_, v_a_3546_, v_a_3547_);
lean_dec_ref(v___x_3568_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3587_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3577_ = v___x_3574_;
v_isShared_3578_ = v_isSharedCheck_3587_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3574_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3587_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v_decls_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3579_ = lean_st_ref_get(v___x_3573_);
lean_dec(v___x_3573_);
lean_dec(v___x_3579_);
v___x_3580_ = lean_st_ref_get(v___x_3572_);
lean_dec(v___x_3572_);
v_decls_3581_ = lean_ctor_get(v___x_3580_, 1);
lean_inc_ref(v_decls_3581_);
lean_dec(v___x_3580_);
v___x_3582_ = lean_array_get(v___x_3562_, v_a_3575_, v___x_3569_);
lean_dec(v_a_3575_);
v___x_3583_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_3581_, v___x_3582_);
lean_dec_ref(v_decls_3581_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3583_);
v___x_3585_ = v___x_3577_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec(v___x_3573_);
lean_dec(v___x_3572_);
v_a_3588_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3574_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3574_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object* v_e_3598_, lean_object* v_config_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v___y_3604_){
_start:
{
lean_object* v_res_3605_; 
v_res_3605_ = l_Lean_Meta_liftLets(v_e_3598_, v_config_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_);
lean_dec(v_a_3603_);
lean_dec_ref(v_a_3602_);
lean_dec(v_a_3601_);
lean_dec_ref(v_a_3600_);
return v_res_3605_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1(void){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; 
v___x_3607_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0));
v___x_3608_ = l_Lean_stringToMessageData(v___x_3607_);
return v___x_3608_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2(void){
_start:
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3609_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1);
v___x_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3609_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object* v_tactic_3611_, lean_object* v_mvarId_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2);
v___x_3619_ = l_Lean_Meta_throwTacticEx___redArg(v_tactic_3611_, v_mvarId_3612_, v___x_3618_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object* v_tactic_3620_, lean_object* v_mvarId_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v___y_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3620_, v_mvarId_3621_, v_a_3622_, v_a_3623_, v_a_3624_, v_a_3625_);
lean_dec(v_a_3625_);
lean_dec_ref(v_a_3624_);
lean_dec(v_a_3623_);
lean_dec_ref(v_a_3622_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object* v_00_u03b1_3628_, lean_object* v_tactic_3629_, lean_object* v_mvarId_3630_, lean_object* v_a_3631_, lean_object* v_a_3632_, lean_object* v_a_3633_, lean_object* v_a_3634_){
_start:
{
lean_object* v___x_3636_; 
v___x_3636_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3629_, v_mvarId_3630_, v_a_3631_, v_a_3632_, v_a_3633_, v_a_3634_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object* v_00_u03b1_3637_, lean_object* v_tactic_3638_, lean_object* v_mvarId_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(v_00_u03b1_3637_, v_tactic_3638_, v_mvarId_3639_, v_a_3640_, v_a_3641_, v_a_3642_, v_a_3643_);
lean_dec(v_a_3643_);
lean_dec_ref(v_a_3642_);
lean_dec(v_a_3641_);
lean_dec_ref(v_a_3640_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object* v_k_3646_, lean_object* v_b_3647_, lean_object* v_c_3648_, lean_object* v_d_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_){
_start:
{
lean_object* v___x_3655_; 
lean_inc(v___y_3653_);
lean_inc_ref(v___y_3652_);
lean_inc(v___y_3651_);
lean_inc_ref(v___y_3650_);
v___x_3655_ = lean_apply_8(v_k_3646_, v_b_3647_, v_c_3648_, v_d_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_, lean_box(0));
return v___x_3655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object* v_k_3656_, lean_object* v_b_3657_, lean_object* v_c_3658_, lean_object* v_d_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
lean_object* v_res_3665_; 
v_res_3665_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(v_k_3656_, v_b_3657_, v_c_3658_, v_d_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
lean_dec(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
return v_res_3665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object* v_es_3666_, lean_object* v_givenNames_3667_, lean_object* v_k_3668_, lean_object* v_config_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_){
_start:
{
lean_object* v___f_3675_; lean_object* v___x_3676_; 
v___f_3675_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3675_, 0, v_k_3668_);
v___x_3676_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3666_, v_givenNames_3667_, v___f_3675_, v_config_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3684_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3679_ = v___x_3676_;
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3676_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3682_; 
if (v_isShared_3680_ == 0)
{
v___x_3682_ = v___x_3679_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3677_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
v_a_3685_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3676_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3676_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object* v_es_3693_, lean_object* v_givenNames_3694_, lean_object* v_k_3695_, lean_object* v_config_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3693_, v_givenNames_3694_, v_k_3695_, v_config_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_);
lean_dec(v___y_3700_);
lean_dec_ref(v___y_3699_);
lean_dec(v___y_3698_);
lean_dec_ref(v___y_3697_);
lean_dec_ref(v_config_3696_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object* v_00_u03b1_3703_, lean_object* v_es_3704_, lean_object* v_givenNames_3705_, lean_object* v_k_3706_, lean_object* v_config_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3704_, v_givenNames_3705_, v_k_3706_, v_config_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object* v_00_u03b1_3714_, lean_object* v_es_3715_, lean_object* v_givenNames_3716_, lean_object* v_k_3717_, lean_object* v_config_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_){
_start:
{
lean_object* v_res_3724_; 
v_res_3724_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(v_00_u03b1_3714_, v_es_3715_, v_givenNames_3716_, v_k_3717_, v_config_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_);
lean_dec(v___y_3722_);
lean_dec_ref(v___y_3721_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v_config_3718_);
return v_res_3724_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object* v_mvarId_3725_, lean_object* v_x_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
lean_object* v___x_3732_; 
v___x_3732_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3725_, v_x_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
if (lean_obj_tag(v___x_3732_) == 0)
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3740_; 
v_a_3733_ = lean_ctor_get(v___x_3732_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3732_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3735_ = v___x_3732_;
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v___x_3732_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
lean_object* v___x_3738_; 
if (v_isShared_3736_ == 0)
{
v___x_3738_ = v___x_3735_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_a_3733_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
else
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object* v_mvarId_3749_, lean_object* v_x_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3749_, v_x_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
lean_dec_ref(v___y_3751_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object* v_00_u03b1_3757_, lean_object* v_mvarId_3758_, lean_object* v_x_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3758_, v_x_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object* v_00_u03b1_3766_, lean_object* v_mvarId_3767_, lean_object* v_x_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v_res_3774_; 
v_res_3774_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(v_00_u03b1_3766_, v_mvarId_3767_, v_x_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
return v_res_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_3775_, lean_object* v_x_3776_, lean_object* v_x_3777_, lean_object* v_x_3778_){
_start:
{
lean_object* v_ks_3779_; lean_object* v_vs_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3804_; 
v_ks_3779_ = lean_ctor_get(v_x_3775_, 0);
v_vs_3780_ = lean_ctor_get(v_x_3775_, 1);
v_isSharedCheck_3804_ = !lean_is_exclusive(v_x_3775_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3782_ = v_x_3775_;
v_isShared_3783_ = v_isSharedCheck_3804_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_vs_3780_);
lean_inc(v_ks_3779_);
lean_dec(v_x_3775_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3804_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3784_; uint8_t v___x_3785_; 
v___x_3784_ = lean_array_get_size(v_ks_3779_);
v___x_3785_ = lean_nat_dec_lt(v_x_3776_, v___x_3784_);
if (v___x_3785_ == 0)
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3789_; 
lean_dec(v_x_3776_);
v___x_3786_ = lean_array_push(v_ks_3779_, v_x_3777_);
v___x_3787_ = lean_array_push(v_vs_3780_, v_x_3778_);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 1, v___x_3787_);
lean_ctor_set(v___x_3782_, 0, v___x_3786_);
v___x_3789_ = v___x_3782_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v___x_3786_);
lean_ctor_set(v_reuseFailAlloc_3790_, 1, v___x_3787_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
else
{
lean_object* v_k_x27_3791_; uint8_t v___x_3792_; 
v_k_x27_3791_ = lean_array_fget_borrowed(v_ks_3779_, v_x_3776_);
v___x_3792_ = l_Lean_instBEqMVarId_beq(v_x_3777_, v_k_x27_3791_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3794_; 
if (v_isShared_3783_ == 0)
{
v___x_3794_ = v___x_3782_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_ks_3779_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v_vs_3780_);
v___x_3794_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3795_ = lean_unsigned_to_nat(1u);
v___x_3796_ = lean_nat_add(v_x_3776_, v___x_3795_);
lean_dec(v_x_3776_);
v_x_3775_ = v___x_3794_;
v_x_3776_ = v___x_3796_;
goto _start;
}
}
else
{
lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3802_; 
v___x_3799_ = lean_array_fset(v_ks_3779_, v_x_3776_, v_x_3777_);
v___x_3800_ = lean_array_fset(v_vs_3780_, v_x_3776_, v_x_3778_);
lean_dec(v_x_3776_);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 1, v___x_3800_);
lean_ctor_set(v___x_3782_, 0, v___x_3799_);
v___x_3802_ = v___x_3782_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v___x_3799_);
lean_ctor_set(v_reuseFailAlloc_3803_, 1, v___x_3800_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_n_3805_, lean_object* v_k_3806_, lean_object* v_v_3807_){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3808_ = lean_unsigned_to_nat(0u);
v___x_3809_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_n_3805_, v___x_3808_, v_k_3806_, v_v_3807_);
return v___x_3809_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3810_; 
v___x_3810_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object* v_x_3811_, size_t v_x_3812_, size_t v_x_3813_, lean_object* v_x_3814_, lean_object* v_x_3815_){
_start:
{
if (lean_obj_tag(v_x_3811_) == 0)
{
lean_object* v_es_3816_; size_t v___x_3817_; size_t v___x_3818_; lean_object* v_j_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; 
v_es_3816_ = lean_ctor_get(v_x_3811_, 0);
v___x_3817_ = ((size_t)31ULL);
v___x_3818_ = lean_usize_land(v_x_3812_, v___x_3817_);
v_j_3819_ = lean_usize_to_nat(v___x_3818_);
v___x_3820_ = lean_array_get_size(v_es_3816_);
v___x_3821_ = lean_nat_dec_lt(v_j_3819_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_dec(v_j_3819_);
lean_dec(v_x_3815_);
lean_dec(v_x_3814_);
return v_x_3811_;
}
else
{
lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3860_; 
lean_inc_ref(v_es_3816_);
v_isSharedCheck_3860_ = !lean_is_exclusive(v_x_3811_);
if (v_isSharedCheck_3860_ == 0)
{
lean_object* v_unused_3861_; 
v_unused_3861_ = lean_ctor_get(v_x_3811_, 0);
lean_dec(v_unused_3861_);
v___x_3823_ = v_x_3811_;
v_isShared_3824_ = v_isSharedCheck_3860_;
goto v_resetjp_3822_;
}
else
{
lean_dec(v_x_3811_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3860_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v_v_3825_; lean_object* v___x_3826_; lean_object* v_xs_x27_3827_; lean_object* v___y_3829_; 
v_v_3825_ = lean_array_fget(v_es_3816_, v_j_3819_);
v___x_3826_ = lean_box(0);
v_xs_x27_3827_ = lean_array_fset(v_es_3816_, v_j_3819_, v___x_3826_);
switch(lean_obj_tag(v_v_3825_))
{
case 0:
{
lean_object* v_key_3834_; lean_object* v_val_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3845_; 
v_key_3834_ = lean_ctor_get(v_v_3825_, 0);
v_val_3835_ = lean_ctor_get(v_v_3825_, 1);
v_isSharedCheck_3845_ = !lean_is_exclusive(v_v_3825_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3837_ = v_v_3825_;
v_isShared_3838_ = v_isSharedCheck_3845_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_val_3835_);
lean_inc(v_key_3834_);
lean_dec(v_v_3825_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3845_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
uint8_t v___x_3839_; 
v___x_3839_ = l_Lean_instBEqMVarId_beq(v_x_3814_, v_key_3834_);
if (v___x_3839_ == 0)
{
lean_object* v___x_3840_; lean_object* v___x_3841_; 
lean_del_object(v___x_3837_);
v___x_3840_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3834_, v_val_3835_, v_x_3814_, v_x_3815_);
v___x_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3840_);
v___y_3829_ = v___x_3841_;
goto v___jp_3828_;
}
else
{
lean_object* v___x_3843_; 
lean_dec(v_val_3835_);
lean_dec(v_key_3834_);
if (v_isShared_3838_ == 0)
{
lean_ctor_set(v___x_3837_, 1, v_x_3815_);
lean_ctor_set(v___x_3837_, 0, v_x_3814_);
v___x_3843_ = v___x_3837_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_x_3814_);
lean_ctor_set(v_reuseFailAlloc_3844_, 1, v_x_3815_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
v___y_3829_ = v___x_3843_;
goto v___jp_3828_;
}
}
}
}
case 1:
{
lean_object* v_node_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3858_; 
v_node_3846_ = lean_ctor_get(v_v_3825_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v_v_3825_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3848_ = v_v_3825_;
v_isShared_3849_ = v_isSharedCheck_3858_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_node_3846_);
lean_dec(v_v_3825_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3858_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
size_t v___x_3850_; size_t v___x_3851_; size_t v___x_3852_; size_t v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3850_ = ((size_t)5ULL);
v___x_3851_ = lean_usize_shift_right(v_x_3812_, v___x_3850_);
v___x_3852_ = ((size_t)1ULL);
v___x_3853_ = lean_usize_add(v_x_3813_, v___x_3852_);
v___x_3854_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_node_3846_, v___x_3851_, v___x_3853_, v_x_3814_, v_x_3815_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 0, v___x_3854_);
v___x_3856_ = v___x_3848_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3854_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
v___y_3829_ = v___x_3856_;
goto v___jp_3828_;
}
}
}
default: 
{
lean_object* v___x_3859_; 
v___x_3859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3859_, 0, v_x_3814_);
lean_ctor_set(v___x_3859_, 1, v_x_3815_);
v___y_3829_ = v___x_3859_;
goto v___jp_3828_;
}
}
v___jp_3828_:
{
lean_object* v___x_3830_; lean_object* v___x_3832_; 
v___x_3830_ = lean_array_fset(v_xs_x27_3827_, v_j_3819_, v___y_3829_);
lean_dec(v_j_3819_);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3830_);
v___x_3832_ = v___x_3823_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
else
{
lean_object* v_ks_3862_; lean_object* v_vs_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3881_; 
v_ks_3862_ = lean_ctor_get(v_x_3811_, 0);
v_vs_3863_ = lean_ctor_get(v_x_3811_, 1);
v_isSharedCheck_3881_ = !lean_is_exclusive(v_x_3811_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3865_ = v_x_3811_;
v_isShared_3866_ = v_isSharedCheck_3881_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_vs_3863_);
lean_inc(v_ks_3862_);
lean_dec(v_x_3811_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3881_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_ks_3862_);
lean_ctor_set(v_reuseFailAlloc_3880_, 1, v_vs_3863_);
v___x_3868_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
lean_object* v_newNode_3869_; size_t v___x_3870_; uint8_t v___x_3871_; 
v_newNode_3869_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v___x_3868_, v_x_3814_, v_x_3815_);
v___x_3870_ = ((size_t)7ULL);
v___x_3871_ = lean_usize_dec_le(v___x_3870_, v_x_3813_);
if (v___x_3871_ == 0)
{
lean_object* v___x_3872_; lean_object* v___x_3873_; uint8_t v___x_3874_; 
v___x_3872_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3869_);
v___x_3873_ = lean_unsigned_to_nat(4u);
v___x_3874_ = lean_nat_dec_lt(v___x_3872_, v___x_3873_);
lean_dec(v___x_3872_);
if (v___x_3874_ == 0)
{
lean_object* v_ks_3875_; lean_object* v_vs_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v_ks_3875_ = lean_ctor_get(v_newNode_3869_, 0);
lean_inc_ref(v_ks_3875_);
v_vs_3876_ = lean_ctor_get(v_newNode_3869_, 1);
lean_inc_ref(v_vs_3876_);
lean_dec_ref(v_newNode_3869_);
v___x_3877_ = lean_unsigned_to_nat(0u);
v___x_3878_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0);
v___x_3879_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_x_3813_, v_ks_3875_, v_vs_3876_, v___x_3877_, v___x_3878_);
lean_dec_ref(v_vs_3876_);
lean_dec_ref(v_ks_3875_);
return v___x_3879_;
}
else
{
return v_newNode_3869_;
}
}
else
{
return v_newNode_3869_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t v_depth_3882_, lean_object* v_keys_3883_, lean_object* v_vals_3884_, lean_object* v_i_3885_, lean_object* v_entries_3886_){
_start:
{
lean_object* v___x_3887_; uint8_t v___x_3888_; 
v___x_3887_ = lean_array_get_size(v_keys_3883_);
v___x_3888_ = lean_nat_dec_lt(v_i_3885_, v___x_3887_);
if (v___x_3888_ == 0)
{
lean_dec(v_i_3885_);
return v_entries_3886_;
}
else
{
lean_object* v_k_3889_; lean_object* v_v_3890_; uint64_t v___x_3891_; size_t v_h_3892_; size_t v___x_3893_; lean_object* v___x_3894_; size_t v___x_3895_; size_t v___x_3896_; size_t v___x_3897_; size_t v_h_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v_k_3889_ = lean_array_fget_borrowed(v_keys_3883_, v_i_3885_);
v_v_3890_ = lean_array_fget_borrowed(v_vals_3884_, v_i_3885_);
v___x_3891_ = l_Lean_instHashableMVarId_hash(v_k_3889_);
v_h_3892_ = lean_uint64_to_usize(v___x_3891_);
v___x_3893_ = ((size_t)5ULL);
v___x_3894_ = lean_unsigned_to_nat(1u);
v___x_3895_ = ((size_t)1ULL);
v___x_3896_ = lean_usize_sub(v_depth_3882_, v___x_3895_);
v___x_3897_ = lean_usize_mul(v___x_3893_, v___x_3896_);
v_h_3898_ = lean_usize_shift_right(v_h_3892_, v___x_3897_);
v___x_3899_ = lean_nat_add(v_i_3885_, v___x_3894_);
lean_dec(v_i_3885_);
lean_inc(v_v_3890_);
lean_inc(v_k_3889_);
v___x_3900_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_entries_3886_, v_h_3898_, v_depth_3882_, v_k_3889_, v_v_3890_);
v_i_3885_ = v___x_3899_;
v_entries_3886_ = v___x_3900_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_depth_3902_, lean_object* v_keys_3903_, lean_object* v_vals_3904_, lean_object* v_i_3905_, lean_object* v_entries_3906_){
_start:
{
size_t v_depth_boxed_3907_; lean_object* v_res_3908_; 
v_depth_boxed_3907_ = lean_unbox_usize(v_depth_3902_);
lean_dec(v_depth_3902_);
v_res_3908_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_boxed_3907_, v_keys_3903_, v_vals_3904_, v_i_3905_, v_entries_3906_);
lean_dec_ref(v_vals_3904_);
lean_dec_ref(v_keys_3903_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_3909_, lean_object* v_x_3910_, lean_object* v_x_3911_, lean_object* v_x_3912_, lean_object* v_x_3913_){
_start:
{
size_t v_x_2299__boxed_3914_; size_t v_x_2300__boxed_3915_; lean_object* v_res_3916_; 
v_x_2299__boxed_3914_ = lean_unbox_usize(v_x_3910_);
lean_dec(v_x_3910_);
v_x_2300__boxed_3915_ = lean_unbox_usize(v_x_3911_);
lean_dec(v_x_3911_);
v_res_3916_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3909_, v_x_2299__boxed_3914_, v_x_2300__boxed_3915_, v_x_3912_, v_x_3913_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object* v_x_3917_, lean_object* v_x_3918_, lean_object* v_x_3919_){
_start:
{
uint64_t v___x_3920_; size_t v___x_3921_; size_t v___x_3922_; lean_object* v___x_3923_; 
v___x_3920_ = l_Lean_instHashableMVarId_hash(v_x_3918_);
v___x_3921_ = lean_uint64_to_usize(v___x_3920_);
v___x_3922_ = ((size_t)1ULL);
v___x_3923_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3917_, v___x_3921_, v___x_3922_, v_x_3918_, v_x_3919_);
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object* v_mvarId_3924_, lean_object* v_val_3925_, lean_object* v___y_3926_){
_start:
{
lean_object* v___x_3928_; lean_object* v_mctx_3929_; lean_object* v_cache_3930_; lean_object* v_zetaDeltaFVarIds_3931_; lean_object* v_postponed_3932_; lean_object* v_diag_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3962_; 
v___x_3928_ = lean_st_ref_take(v___y_3926_);
v_mctx_3929_ = lean_ctor_get(v___x_3928_, 0);
v_cache_3930_ = lean_ctor_get(v___x_3928_, 1);
v_zetaDeltaFVarIds_3931_ = lean_ctor_get(v___x_3928_, 2);
v_postponed_3932_ = lean_ctor_get(v___x_3928_, 3);
v_diag_3933_ = lean_ctor_get(v___x_3928_, 4);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3935_ = v___x_3928_;
v_isShared_3936_ = v_isSharedCheck_3962_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_diag_3933_);
lean_inc(v_postponed_3932_);
lean_inc(v_zetaDeltaFVarIds_3931_);
lean_inc(v_cache_3930_);
lean_inc(v_mctx_3929_);
lean_dec(v___x_3928_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3962_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v_depth_3937_; lean_object* v_levelAssignDepth_3938_; lean_object* v_lmvarCounter_3939_; lean_object* v_mvarCounter_3940_; lean_object* v_lDecls_3941_; lean_object* v_decls_3942_; lean_object* v_userNames_3943_; lean_object* v_lAssignment_3944_; lean_object* v_eAssignment_3945_; lean_object* v_dAssignment_3946_; lean_object* v_instanceTypedMVars_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3961_; 
v_depth_3937_ = lean_ctor_get(v_mctx_3929_, 0);
v_levelAssignDepth_3938_ = lean_ctor_get(v_mctx_3929_, 1);
v_lmvarCounter_3939_ = lean_ctor_get(v_mctx_3929_, 2);
v_mvarCounter_3940_ = lean_ctor_get(v_mctx_3929_, 3);
v_lDecls_3941_ = lean_ctor_get(v_mctx_3929_, 4);
v_decls_3942_ = lean_ctor_get(v_mctx_3929_, 5);
v_userNames_3943_ = lean_ctor_get(v_mctx_3929_, 6);
v_lAssignment_3944_ = lean_ctor_get(v_mctx_3929_, 7);
v_eAssignment_3945_ = lean_ctor_get(v_mctx_3929_, 8);
v_dAssignment_3946_ = lean_ctor_get(v_mctx_3929_, 9);
v_instanceTypedMVars_3947_ = lean_ctor_get(v_mctx_3929_, 10);
v_isSharedCheck_3961_ = !lean_is_exclusive(v_mctx_3929_);
if (v_isSharedCheck_3961_ == 0)
{
v___x_3949_ = v_mctx_3929_;
v_isShared_3950_ = v_isSharedCheck_3961_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_instanceTypedMVars_3947_);
lean_inc(v_dAssignment_3946_);
lean_inc(v_eAssignment_3945_);
lean_inc(v_lAssignment_3944_);
lean_inc(v_userNames_3943_);
lean_inc(v_decls_3942_);
lean_inc(v_lDecls_3941_);
lean_inc(v_mvarCounter_3940_);
lean_inc(v_lmvarCounter_3939_);
lean_inc(v_levelAssignDepth_3938_);
lean_inc(v_depth_3937_);
lean_dec(v_mctx_3929_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3961_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3954_; 
v___x_3951_ = lean_box(0);
v___x_3952_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_eAssignment_3945_, v_mvarId_3924_, v_val_3925_);
if (v_isShared_3950_ == 0)
{
lean_ctor_set(v___x_3949_, 8, v___x_3952_);
v___x_3954_ = v___x_3949_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v_depth_3937_);
lean_ctor_set(v_reuseFailAlloc_3960_, 1, v_levelAssignDepth_3938_);
lean_ctor_set(v_reuseFailAlloc_3960_, 2, v_lmvarCounter_3939_);
lean_ctor_set(v_reuseFailAlloc_3960_, 3, v_mvarCounter_3940_);
lean_ctor_set(v_reuseFailAlloc_3960_, 4, v_lDecls_3941_);
lean_ctor_set(v_reuseFailAlloc_3960_, 5, v_decls_3942_);
lean_ctor_set(v_reuseFailAlloc_3960_, 6, v_userNames_3943_);
lean_ctor_set(v_reuseFailAlloc_3960_, 7, v_lAssignment_3944_);
lean_ctor_set(v_reuseFailAlloc_3960_, 8, v___x_3952_);
lean_ctor_set(v_reuseFailAlloc_3960_, 9, v_dAssignment_3946_);
lean_ctor_set(v_reuseFailAlloc_3960_, 10, v_instanceTypedMVars_3947_);
v___x_3954_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
lean_object* v___x_3956_; 
if (v_isShared_3936_ == 0)
{
lean_ctor_set(v___x_3935_, 0, v___x_3954_);
v___x_3956_ = v___x_3935_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v___x_3954_);
lean_ctor_set(v_reuseFailAlloc_3959_, 1, v_cache_3930_);
lean_ctor_set(v_reuseFailAlloc_3959_, 2, v_zetaDeltaFVarIds_3931_);
lean_ctor_set(v_reuseFailAlloc_3959_, 3, v_postponed_3932_);
lean_ctor_set(v_reuseFailAlloc_3959_, 4, v_diag_3933_);
v___x_3956_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; 
v___x_3957_ = lean_st_ref_put(v___y_3926_, v___x_3956_);
v___x_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3951_);
return v___x_3958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object* v_mvarId_3963_, lean_object* v_val_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_){
_start:
{
lean_object* v_res_3967_; 
v_res_3967_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3963_, v_val_3964_, v___y_3965_);
lean_dec(v___y_3965_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t v_sz_3968_, size_t v_i_3969_, lean_object* v_bs_3970_){
_start:
{
uint8_t v___x_3971_; 
v___x_3971_ = lean_usize_dec_lt(v_i_3969_, v_sz_3968_);
if (v___x_3971_ == 0)
{
return v_bs_3970_;
}
else
{
lean_object* v_v_3972_; lean_object* v___x_3973_; lean_object* v_bs_x27_3974_; lean_object* v___x_3975_; size_t v___x_3976_; size_t v___x_3977_; lean_object* v___x_3978_; 
v_v_3972_ = lean_array_uget(v_bs_3970_, v_i_3969_);
v___x_3973_ = lean_unsigned_to_nat(0u);
v_bs_x27_3974_ = lean_array_uset(v_bs_3970_, v_i_3969_, v___x_3973_);
v___x_3975_ = l_Lean_Expr_fvar___override(v_v_3972_);
v___x_3976_ = ((size_t)1ULL);
v___x_3977_ = lean_usize_add(v_i_3969_, v___x_3976_);
v___x_3978_ = lean_array_uset(v_bs_x27_3974_, v_i_3969_, v___x_3975_);
v_i_3969_ = v___x_3977_;
v_bs_3970_ = v___x_3978_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object* v_sz_3980_, lean_object* v_i_3981_, lean_object* v_bs_3982_){
_start:
{
size_t v_sz_boxed_3983_; size_t v_i_boxed_3984_; lean_object* v_res_3985_; 
v_sz_boxed_3983_ = lean_unbox_usize(v_sz_3980_);
lean_dec(v_sz_3980_);
v_i_boxed_3984_ = lean_unbox_usize(v_i_3981_);
lean_dec(v_i_3981_);
v_res_3985_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_boxed_3983_, v_i_boxed_3984_, v_bs_3982_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object* v___x_3986_, lean_object* v_mvarId_3987_, lean_object* v_a_3988_, lean_object* v___x_3989_, lean_object* v_fvarIds_3990_, lean_object* v_es_3991_, lean_object* v_givenNames_x27_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_){
_start:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4049_; uint8_t v___x_4050_; 
v___x_3998_ = lean_unsigned_to_nat(0u);
v___x_3999_ = lean_array_get_borrowed(v___x_3986_, v_es_3991_, v___x_3998_);
v___x_4049_ = lean_array_get_size(v_fvarIds_3990_);
v___x_4050_ = lean_nat_dec_eq(v___x_4049_, v___x_3998_);
if (v___x_4050_ == 0)
{
lean_dec(v___x_3989_);
goto v___jp_4000_;
}
else
{
uint8_t v___x_4051_; 
v___x_4051_ = lean_expr_eqv(v_a_3988_, v___x_3999_);
if (v___x_4051_ == 0)
{
lean_dec(v___x_3989_);
goto v___jp_4000_;
}
else
{
lean_object* v___x_4052_; 
lean_inc(v_mvarId_3987_);
v___x_4052_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_3989_, v_mvarId_3987_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
if (lean_obj_tag(v___x_4052_) == 0)
{
lean_dec_ref_known(v___x_4052_, 1);
goto v___jp_4000_;
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_dec(v_givenNames_x27_3992_);
lean_dec_ref(v_fvarIds_3990_);
lean_dec(v_mvarId_3987_);
v_a_4053_ = lean_ctor_get(v___x_4052_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4052_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4052_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4052_);
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
}
v___jp_4000_:
{
lean_object* v___x_4001_; 
lean_inc(v_mvarId_3987_);
v___x_4001_ = l_Lean_MVarId_getTag(v_mvarId_3987_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
if (lean_obj_tag(v___x_4001_) == 0)
{
lean_object* v_a_4002_; lean_object* v___x_4003_; 
v_a_4002_ = lean_ctor_get(v___x_4001_, 0);
lean_inc(v_a_4002_);
lean_dec_ref_known(v___x_4001_, 1);
lean_inc(v___x_3999_);
v___x_4003_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3999_, v_a_4002_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; size_t v_sz_4005_; size_t v___x_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; uint8_t v___x_4009_; uint8_t v___x_4010_; lean_object* v___x_4011_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc_n(v_a_4004_, 2);
lean_dec_ref_known(v___x_4003_, 1);
v_sz_4005_ = lean_array_size(v_fvarIds_3990_);
v___x_4006_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_3990_);
v___x_4007_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4005_, v___x_4006_, v_fvarIds_3990_);
v___x_4008_ = 0;
v___x_4009_ = 1;
v___x_4010_ = 1;
v___x_4011_ = l_Lean_Meta_mkLetFVars(v___x_4007_, v_a_4004_, v___x_4008_, v___x_4009_, v___x_4010_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
lean_dec_ref(v___x_4007_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v_a_4012_; lean_object* v___x_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4023_; 
v_a_4012_ = lean_ctor_get(v___x_4011_, 0);
lean_inc(v_a_4012_);
lean_dec_ref_known(v___x_4011_, 1);
v___x_4013_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3987_, v_a_4012_, v___y_3994_);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4023_ == 0)
{
lean_object* v_unused_4024_; 
v_unused_4024_ = lean_ctor_get(v___x_4013_, 0);
lean_dec(v_unused_4024_);
v___x_4015_ = v___x_4013_;
v_isShared_4016_ = v_isSharedCheck_4023_;
goto v_resetjp_4014_;
}
else
{
lean_dec(v___x_4013_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4023_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4021_; 
v___x_4017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4017_, 0, v_fvarIds_3990_);
lean_ctor_set(v___x_4017_, 1, v_givenNames_x27_3992_);
v___x_4018_ = l_Lean_Expr_mvarId_x21(v_a_4004_);
lean_dec(v_a_4004_);
v___x_4019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4017_);
lean_ctor_set(v___x_4019_, 1, v___x_4018_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4019_);
v___x_4021_ = v___x_4015_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4019_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4032_; 
lean_dec(v_a_4004_);
lean_dec(v_givenNames_x27_3992_);
lean_dec_ref(v_fvarIds_3990_);
lean_dec(v_mvarId_3987_);
v_a_4025_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4027_ = v___x_4011_;
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_4011_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4025_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec(v_givenNames_x27_3992_);
lean_dec_ref(v_fvarIds_3990_);
lean_dec(v_mvarId_3987_);
v_a_4033_ = lean_ctor_get(v___x_4003_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_4003_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_4003_);
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
else
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
lean_dec(v_givenNames_x27_3992_);
lean_dec_ref(v_fvarIds_3990_);
lean_dec(v_mvarId_3987_);
v_a_4041_ = lean_ctor_get(v___x_4001_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4001_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4043_ = v___x_4001_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4001_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4041_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object* v___x_4061_, lean_object* v_mvarId_4062_, lean_object* v_a_4063_, lean_object* v___x_4064_, lean_object* v_fvarIds_4065_, lean_object* v_es_4066_, lean_object* v_givenNames_x27_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lean_MVarId_extractLets___lam__0(v___x_4061_, v_mvarId_4062_, v_a_4063_, v___x_4064_, v_fvarIds_4065_, v_es_4066_, v_givenNames_x27_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec_ref(v_es_4066_);
lean_dec_ref(v_a_4063_);
lean_dec_ref(v___x_4061_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object* v_mvarId_4074_, lean_object* v___x_4075_, lean_object* v___x_4076_, lean_object* v_givenNames_4077_, lean_object* v_config_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v___x_4084_; 
lean_inc(v___x_4075_);
lean_inc(v_mvarId_4074_);
v___x_4084_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4074_, v___x_4075_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
if (lean_obj_tag(v___x_4084_) == 0)
{
lean_object* v___x_4085_; 
lean_dec_ref_known(v___x_4084_, 1);
lean_inc(v_mvarId_4074_);
v___x_4085_ = l_Lean_MVarId_getType(v_mvarId_4074_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v_a_4086_; lean_object* v___f_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc_n(v_a_4086_, 2);
lean_dec_ref_known(v___x_4085_, 1);
v___f_4087_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4087_, 0, v___x_4076_);
lean_closure_set(v___f_4087_, 1, v_mvarId_4074_);
lean_closure_set(v___f_4087_, 2, v_a_4086_);
lean_closure_set(v___f_4087_, 3, v___x_4075_);
v___x_4088_ = lean_unsigned_to_nat(1u);
v___x_4089_ = lean_mk_empty_array_with_capacity(v___x_4088_);
v___x_4090_ = lean_array_push(v___x_4089_, v_a_4086_);
v___x_4091_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4090_, v_givenNames_4077_, v___f_4087_, v_config_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
return v___x_4091_;
}
else
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4099_; 
lean_dec(v_givenNames_4077_);
lean_dec_ref(v___x_4076_);
lean_dec(v___x_4075_);
lean_dec(v_mvarId_4074_);
v_a_4092_ = lean_ctor_get(v___x_4085_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4094_ = v___x_4085_;
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4085_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4095_ == 0)
{
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
}
}
else
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
lean_dec(v_givenNames_4077_);
lean_dec_ref(v___x_4076_);
lean_dec(v___x_4075_);
lean_dec(v_mvarId_4074_);
v_a_4100_ = lean_ctor_get(v___x_4084_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4084_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4084_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4084_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object* v_mvarId_4108_, lean_object* v___x_4109_, lean_object* v___x_4110_, lean_object* v_givenNames_4111_, lean_object* v_config_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_){
_start:
{
lean_object* v_res_4118_; 
v_res_4118_ = l_Lean_MVarId_extractLets___lam__1(v_mvarId_4108_, v___x_4109_, v___x_4110_, v_givenNames_4111_, v_config_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec_ref(v_config_4112_);
return v_res_4118_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object* v_mvarId_4122_, lean_object* v_givenNames_4123_, lean_object* v_config_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_){
_start:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___f_4132_; lean_object* v___x_4133_; 
v___x_4130_ = l_Lean_instInhabitedExpr;
v___x_4131_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
lean_inc(v_mvarId_4122_);
v___f_4132_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__1___boxed), 10, 5);
lean_closure_set(v___f_4132_, 0, v_mvarId_4122_);
lean_closure_set(v___f_4132_, 1, v___x_4131_);
lean_closure_set(v___f_4132_, 2, v___x_4130_);
lean_closure_set(v___f_4132_, 3, v_givenNames_4123_);
lean_closure_set(v___f_4132_, 4, v_config_4124_);
v___x_4133_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4122_, v___f_4132_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object* v_mvarId_4134_, lean_object* v_givenNames_4135_, lean_object* v_config_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v_res_4142_; 
v_res_4142_ = l_Lean_MVarId_extractLets(v_mvarId_4134_, v_givenNames_4135_, v_config_4136_, v_a_4137_, v_a_4138_, v_a_4139_, v_a_4140_);
lean_dec(v_a_4140_);
lean_dec_ref(v_a_4139_);
lean_dec(v_a_4138_);
lean_dec_ref(v_a_4137_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object* v_mvarId_4143_, lean_object* v_val_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4143_, v_val_4144_, v___y_4146_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object* v_mvarId_4151_, lean_object* v_val_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(v_mvarId_4151_, v_val_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec(v___y_4154_);
lean_dec_ref(v___y_4153_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object* v_00_u03b2_4159_, lean_object* v_x_4160_, lean_object* v_x_4161_, lean_object* v_x_4162_){
_start:
{
lean_object* v___x_4163_; 
v___x_4163_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_x_4160_, v_x_4161_, v_x_4162_);
return v___x_4163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_4164_, lean_object* v_x_4165_, size_t v_x_4166_, size_t v_x_4167_, lean_object* v_x_4168_, lean_object* v_x_4169_){
_start:
{
lean_object* v___x_4170_; 
v___x_4170_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4165_, v_x_4166_, v_x_4167_, v_x_4168_, v_x_4169_);
return v___x_4170_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4171_, lean_object* v_x_4172_, lean_object* v_x_4173_, lean_object* v_x_4174_, lean_object* v_x_4175_, lean_object* v_x_4176_){
_start:
{
size_t v_x_2789__boxed_4177_; size_t v_x_2790__boxed_4178_; lean_object* v_res_4179_; 
v_x_2789__boxed_4177_ = lean_unbox_usize(v_x_4173_);
lean_dec(v_x_4173_);
v_x_2790__boxed_4178_ = lean_unbox_usize(v_x_4174_);
lean_dec(v_x_4174_);
v_res_4179_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(v_00_u03b2_4171_, v_x_4172_, v_x_2789__boxed_4177_, v_x_2790__boxed_4178_, v_x_4175_, v_x_4176_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_4180_, lean_object* v_n_4181_, lean_object* v_k_4182_, lean_object* v_v_4183_){
_start:
{
lean_object* v___x_4184_; 
v___x_4184_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v_n_4181_, v_k_4182_, v_v_4183_);
return v___x_4184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_4185_, size_t v_depth_4186_, lean_object* v_keys_4187_, lean_object* v_vals_4188_, lean_object* v_heq_4189_, lean_object* v_i_4190_, lean_object* v_entries_4191_){
_start:
{
lean_object* v___x_4192_; 
v___x_4192_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_4186_, v_keys_4187_, v_vals_4188_, v_i_4190_, v_entries_4191_);
return v___x_4192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4193_, lean_object* v_depth_4194_, lean_object* v_keys_4195_, lean_object* v_vals_4196_, lean_object* v_heq_4197_, lean_object* v_i_4198_, lean_object* v_entries_4199_){
_start:
{
size_t v_depth_boxed_4200_; lean_object* v_res_4201_; 
v_depth_boxed_4200_ = lean_unbox_usize(v_depth_4194_);
lean_dec(v_depth_4194_);
v_res_4201_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(v_00_u03b2_4193_, v_depth_boxed_4200_, v_keys_4195_, v_vals_4196_, v_heq_4197_, v_i_4198_, v_entries_4199_);
lean_dec_ref(v_vals_4196_);
lean_dec_ref(v_keys_4195_);
return v_res_4201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_4202_, lean_object* v_x_4203_, lean_object* v_x_4204_, lean_object* v_x_4205_, lean_object* v_x_4206_){
_start:
{
lean_object* v___x_4207_; 
v___x_4207_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_x_4203_, v_x_4204_, v_x_4205_, v_x_4206_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t v_sz_4208_, size_t v_i_4209_, lean_object* v_bs_4210_){
_start:
{
uint8_t v___x_4211_; 
v___x_4211_ = lean_usize_dec_lt(v_i_4209_, v_sz_4208_);
if (v___x_4211_ == 0)
{
return v_bs_4210_;
}
else
{
lean_object* v_v_4212_; lean_object* v___x_4213_; lean_object* v_bs_x27_4214_; lean_object* v___x_4215_; size_t v___x_4216_; size_t v___x_4217_; lean_object* v___x_4218_; 
v_v_4212_ = lean_array_uget(v_bs_4210_, v_i_4209_);
v___x_4213_ = lean_unsigned_to_nat(0u);
v_bs_x27_4214_ = lean_array_uset(v_bs_4210_, v_i_4209_, v___x_4213_);
v___x_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4215_, 0, v_v_4212_);
v___x_4216_ = ((size_t)1ULL);
v___x_4217_ = lean_usize_add(v_i_4209_, v___x_4216_);
v___x_4218_ = lean_array_uset(v_bs_x27_4214_, v_i_4209_, v___x_4215_);
v_i_4209_ = v___x_4217_;
v_bs_4210_ = v___x_4218_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object* v_sz_4220_, lean_object* v_i_4221_, lean_object* v_bs_4222_){
_start:
{
size_t v_sz_boxed_4223_; size_t v_i_boxed_4224_; lean_object* v_res_4225_; 
v_sz_boxed_4223_ = lean_unbox_usize(v_sz_4220_);
lean_dec(v_sz_4220_);
v_i_boxed_4224_ = lean_unbox_usize(v_i_4221_);
lean_dec(v_i_4221_);
v_res_4225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_boxed_4223_, v_i_boxed_4224_, v_bs_4222_);
return v_res_4225_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object* v_mvarId_4226_, lean_object* v_fvars_4227_, lean_object* v_fvarIds_4228_, lean_object* v_givenNames_x27_4229_, lean_object* v_targetNew_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v___x_4236_; 
lean_inc(v_mvarId_4226_);
v___x_4236_ = l_Lean_MVarId_getTag(v_mvarId_4226_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v_a_4237_; lean_object* v___x_4238_; 
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
lean_inc(v_a_4237_);
lean_dec_ref_known(v___x_4236_, 1);
v___x_4238_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_targetNew_4230_, v_a_4237_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
if (lean_obj_tag(v___x_4238_) == 0)
{
lean_object* v_a_4239_; size_t v_sz_4240_; size_t v___x_4241_; lean_object* v___x_4242_; uint8_t v___x_4243_; uint8_t v___x_4244_; uint8_t v___x_4245_; lean_object* v___x_4246_; 
v_a_4239_ = lean_ctor_get(v___x_4238_, 0);
lean_inc_n(v_a_4239_, 2);
lean_dec_ref_known(v___x_4238_, 1);
v_sz_4240_ = lean_array_size(v_fvarIds_4228_);
v___x_4241_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_4228_);
v___x_4242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4240_, v___x_4241_, v_fvarIds_4228_);
v___x_4243_ = 0;
v___x_4244_ = 1;
v___x_4245_ = 1;
v___x_4246_ = l_Lean_Meta_mkLetFVars(v___x_4242_, v_a_4239_, v___x_4243_, v___x_4244_, v___x_4245_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
lean_dec_ref(v___x_4242_);
if (lean_obj_tag(v___x_4246_) == 0)
{
lean_object* v_a_4247_; lean_object* v___x_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4261_; 
v_a_4247_ = lean_ctor_get(v___x_4246_, 0);
lean_inc(v_a_4247_);
lean_dec_ref_known(v___x_4246_, 1);
v___x_4248_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4226_, v_a_4247_, v___y_4232_);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4261_ == 0)
{
lean_object* v_unused_4262_; 
v_unused_4262_ = lean_ctor_get(v___x_4248_, 0);
lean_dec(v_unused_4262_);
v___x_4250_ = v___x_4248_;
v_isShared_4251_ = v_isSharedCheck_4261_;
goto v_resetjp_4249_;
}
else
{
lean_dec(v___x_4248_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4261_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4252_; size_t v_sz_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4259_; 
v___x_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4252_, 0, v_fvarIds_4228_);
lean_ctor_set(v___x_4252_, 1, v_givenNames_x27_4229_);
v_sz_4253_ = lean_array_size(v_fvars_4227_);
v___x_4254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4253_, v___x_4241_, v_fvars_4227_);
v___x_4255_ = l_Lean_Expr_mvarId_x21(v_a_4239_);
lean_dec(v_a_4239_);
v___x_4256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4254_);
lean_ctor_set(v___x_4256_, 1, v___x_4255_);
v___x_4257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4252_);
lean_ctor_set(v___x_4257_, 1, v___x_4256_);
if (v_isShared_4251_ == 0)
{
lean_ctor_set(v___x_4250_, 0, v___x_4257_);
v___x_4259_ = v___x_4250_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4270_; 
lean_dec(v_a_4239_);
lean_dec(v_givenNames_x27_4229_);
lean_dec_ref(v_fvarIds_4228_);
lean_dec_ref(v_fvars_4227_);
lean_dec(v_mvarId_4226_);
v_a_4263_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4265_ = v___x_4246_;
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4246_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
lean_dec(v_givenNames_x27_4229_);
lean_dec_ref(v_fvarIds_4228_);
lean_dec_ref(v_fvars_4227_);
lean_dec(v_mvarId_4226_);
v_a_4271_ = lean_ctor_get(v___x_4238_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4238_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4238_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4238_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
}
else
{
lean_object* v_a_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4286_; 
lean_dec_ref(v_targetNew_4230_);
lean_dec(v_givenNames_x27_4229_);
lean_dec_ref(v_fvarIds_4228_);
lean_dec_ref(v_fvars_4227_);
lean_dec(v_mvarId_4226_);
v_a_4279_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4286_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4286_ == 0)
{
v___x_4281_ = v___x_4236_;
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_a_4279_);
lean_dec(v___x_4236_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4284_; 
if (v_isShared_4282_ == 0)
{
v___x_4284_ = v___x_4281_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4285_; 
v_reuseFailAlloc_4285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4285_, 0, v_a_4279_);
v___x_4284_ = v_reuseFailAlloc_4285_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
return v___x_4284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4287_, lean_object* v_fvars_4288_, lean_object* v_fvarIds_4289_, lean_object* v_givenNames_x27_4290_, lean_object* v_targetNew_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lean_MVarId_extractLetsLocalDecl___lam__0(v_mvarId_4287_, v_fvars_4288_, v_fvarIds_4289_, v_givenNames_x27_4290_, v_targetNew_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
lean_dec(v___y_4293_);
lean_dec_ref(v___y_4292_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object* v___x_4298_, lean_object* v_binderName_4299_, lean_object* v_body_4300_, uint8_t v_binderInfo_4301_, lean_object* v___f_4302_, lean_object* v_binderType_4303_, lean_object* v___x_4304_, lean_object* v_mvarId_4305_, lean_object* v_fvarIds_4306_, lean_object* v_es_4307_, lean_object* v_givenNames_x27_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4319_; uint8_t v___x_4320_; 
v___x_4314_ = lean_unsigned_to_nat(0u);
v___x_4315_ = lean_array_get_borrowed(v___x_4298_, v_es_4307_, v___x_4314_);
v___x_4319_ = lean_array_get_size(v_fvarIds_4306_);
v___x_4320_ = lean_nat_dec_eq(v___x_4319_, v___x_4314_);
if (v___x_4320_ == 0)
{
lean_dec(v_mvarId_4305_);
lean_dec(v___x_4304_);
goto v___jp_4316_;
}
else
{
uint8_t v___x_4321_; 
v___x_4321_ = lean_expr_eqv(v_binderType_4303_, v___x_4315_);
if (v___x_4321_ == 0)
{
lean_dec(v_mvarId_4305_);
lean_dec(v___x_4304_);
goto v___jp_4316_;
}
else
{
lean_object* v___x_4322_; 
v___x_4322_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4304_, v_mvarId_4305_, v___y_4309_, v___y_4310_, v___y_4311_, v___y_4312_);
if (lean_obj_tag(v___x_4322_) == 0)
{
lean_dec_ref_known(v___x_4322_, 1);
goto v___jp_4316_;
}
else
{
lean_object* v_a_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4330_; 
lean_dec(v_givenNames_x27_4308_);
lean_dec_ref(v_fvarIds_4306_);
lean_dec_ref(v___f_4302_);
lean_dec_ref(v_body_4300_);
lean_dec(v_binderName_4299_);
v_a_4323_ = lean_ctor_get(v___x_4322_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4325_ = v___x_4322_;
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_a_4323_);
lean_dec(v___x_4322_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4328_; 
if (v_isShared_4326_ == 0)
{
v___x_4328_ = v___x_4325_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4323_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
return v___x_4328_;
}
}
}
}
}
v___jp_4316_:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; 
lean_inc(v___x_4315_);
v___x_4317_ = l_Lean_Expr_forallE___override(v_binderName_4299_, v___x_4315_, v_body_4300_, v_binderInfo_4301_);
lean_inc(v___y_4312_);
lean_inc_ref(v___y_4311_);
lean_inc(v___y_4310_);
lean_inc_ref(v___y_4309_);
v___x_4318_ = lean_apply_8(v___f_4302_, v_fvarIds_4306_, v_givenNames_x27_4308_, v___x_4317_, v___y_4309_, v___y_4310_, v___y_4311_, v___y_4312_, lean_box(0));
return v___x_4318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object* v___x_4331_, lean_object* v_binderName_4332_, lean_object* v_body_4333_, lean_object* v_binderInfo_4334_, lean_object* v___f_4335_, lean_object* v_binderType_4336_, lean_object* v___x_4337_, lean_object* v_mvarId_4338_, lean_object* v_fvarIds_4339_, lean_object* v_es_4340_, lean_object* v_givenNames_x27_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_){
_start:
{
uint8_t v_binderInfo_1982__boxed_4347_; lean_object* v_res_4348_; 
v_binderInfo_1982__boxed_4347_ = lean_unbox(v_binderInfo_4334_);
v_res_4348_ = l_Lean_MVarId_extractLetsLocalDecl___lam__1(v___x_4331_, v_binderName_4332_, v_body_4333_, v_binderInfo_1982__boxed_4347_, v___f_4335_, v_binderType_4336_, v___x_4337_, v_mvarId_4338_, v_fvarIds_4339_, v_es_4340_, v_givenNames_x27_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_);
lean_dec(v___y_4345_);
lean_dec_ref(v___y_4344_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
lean_dec_ref(v_es_4340_);
lean_dec_ref(v_binderType_4336_);
lean_dec_ref(v___x_4331_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object* v___x_4349_, lean_object* v_declName_4350_, lean_object* v_body_4351_, uint8_t v_nondep_4352_, lean_object* v___f_4353_, lean_object* v_type_4354_, lean_object* v_value_4355_, lean_object* v___x_4356_, lean_object* v_mvarId_4357_, lean_object* v_fvarIds_4358_, lean_object* v_es_4359_, lean_object* v_givenNames_x27_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4373_; uint8_t v___x_4374_; 
v___x_4366_ = lean_unsigned_to_nat(0u);
v___x_4367_ = lean_array_get_borrowed(v___x_4349_, v_es_4359_, v___x_4366_);
v___x_4368_ = lean_unsigned_to_nat(1u);
v___x_4369_ = lean_array_get_borrowed(v___x_4349_, v_es_4359_, v___x_4368_);
v___x_4373_ = lean_array_get_size(v_fvarIds_4358_);
v___x_4374_ = lean_nat_dec_eq(v___x_4373_, v___x_4366_);
if (v___x_4374_ == 0)
{
lean_dec(v_mvarId_4357_);
lean_dec(v___x_4356_);
goto v___jp_4370_;
}
else
{
uint8_t v___x_4375_; 
v___x_4375_ = lean_expr_eqv(v_type_4354_, v___x_4367_);
if (v___x_4375_ == 0)
{
lean_dec(v_mvarId_4357_);
lean_dec(v___x_4356_);
goto v___jp_4370_;
}
else
{
uint8_t v___x_4376_; 
v___x_4376_ = lean_expr_eqv(v_value_4355_, v___x_4369_);
if (v___x_4376_ == 0)
{
lean_dec(v_mvarId_4357_);
lean_dec(v___x_4356_);
goto v___jp_4370_;
}
else
{
lean_object* v___x_4377_; 
v___x_4377_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4356_, v_mvarId_4357_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_);
if (lean_obj_tag(v___x_4377_) == 0)
{
lean_dec_ref_known(v___x_4377_, 1);
goto v___jp_4370_;
}
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4385_; 
lean_dec(v_givenNames_x27_4360_);
lean_dec_ref(v_fvarIds_4358_);
lean_dec_ref(v___f_4353_);
lean_dec_ref(v_body_4351_);
lean_dec(v_declName_4350_);
v_a_4378_ = lean_ctor_get(v___x_4377_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4377_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4380_ = v___x_4377_;
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v___x_4377_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
}
}
v___jp_4370_:
{
lean_object* v___x_4371_; lean_object* v___x_4372_; 
lean_inc(v___x_4369_);
lean_inc(v___x_4367_);
v___x_4371_ = l_Lean_Expr_letE___override(v_declName_4350_, v___x_4367_, v___x_4369_, v_body_4351_, v_nondep_4352_);
lean_inc(v___y_4364_);
lean_inc_ref(v___y_4363_);
lean_inc(v___y_4362_);
lean_inc_ref(v___y_4361_);
v___x_4372_ = lean_apply_8(v___f_4353_, v_fvarIds_4358_, v_givenNames_x27_4360_, v___x_4371_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, lean_box(0));
return v___x_4372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object** _args){
lean_object* v___x_4386_ = _args[0];
lean_object* v_declName_4387_ = _args[1];
lean_object* v_body_4388_ = _args[2];
lean_object* v_nondep_4389_ = _args[3];
lean_object* v___f_4390_ = _args[4];
lean_object* v_type_4391_ = _args[5];
lean_object* v_value_4392_ = _args[6];
lean_object* v___x_4393_ = _args[7];
lean_object* v_mvarId_4394_ = _args[8];
lean_object* v_fvarIds_4395_ = _args[9];
lean_object* v_es_4396_ = _args[10];
lean_object* v_givenNames_x27_4397_ = _args[11];
lean_object* v___y_4398_ = _args[12];
lean_object* v___y_4399_ = _args[13];
lean_object* v___y_4400_ = _args[14];
lean_object* v___y_4401_ = _args[15];
lean_object* v___y_4402_ = _args[16];
_start:
{
uint8_t v_nondep_2053__boxed_4403_; lean_object* v_res_4404_; 
v_nondep_2053__boxed_4403_ = lean_unbox(v_nondep_4389_);
v_res_4404_ = l_Lean_MVarId_extractLetsLocalDecl___lam__2(v___x_4386_, v_declName_4387_, v_body_4388_, v_nondep_2053__boxed_4403_, v___f_4390_, v_type_4391_, v_value_4392_, v___x_4393_, v_mvarId_4394_, v_fvarIds_4395_, v_es_4396_, v_givenNames_x27_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_);
lean_dec(v___y_4401_);
lean_dec_ref(v___y_4400_);
lean_dec(v___y_4399_);
lean_dec_ref(v___y_4398_);
lean_dec_ref(v_es_4396_);
lean_dec_ref(v_value_4392_);
lean_dec_ref(v_type_4391_);
lean_dec_ref(v___x_4386_);
return v_res_4404_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4408_ = ((lean_object*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1));
v___x_4409_ = l_Lean_MessageData_ofFormat(v___x_4408_);
return v___x_4409_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4410_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2);
v___x_4411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4410_);
return v___x_4411_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object* v_mvarId_4412_, lean_object* v___x_4413_, lean_object* v___f_4414_, lean_object* v___x_4415_, lean_object* v_givenNames_4416_, lean_object* v_config_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_){
_start:
{
lean_object* v___x_4423_; 
lean_inc(v_mvarId_4412_);
v___x_4423_ = l_Lean_MVarId_getType(v_mvarId_4412_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
if (lean_obj_tag(v___x_4423_) == 0)
{
lean_object* v_a_4424_; 
v_a_4424_ = lean_ctor_get(v___x_4423_, 0);
lean_inc(v_a_4424_);
lean_dec_ref_known(v___x_4423_, 1);
switch(lean_obj_tag(v_a_4424_))
{
case 7:
{
lean_object* v_binderName_4425_; lean_object* v_binderType_4426_; lean_object* v_body_4427_; uint8_t v_binderInfo_4428_; lean_object* v___x_4429_; lean_object* v___f_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v_binderName_4425_ = lean_ctor_get(v_a_4424_, 0);
lean_inc(v_binderName_4425_);
v_binderType_4426_ = lean_ctor_get(v_a_4424_, 1);
lean_inc_ref_n(v_binderType_4426_, 2);
v_body_4427_ = lean_ctor_get(v_a_4424_, 2);
lean_inc_ref(v_body_4427_);
v_binderInfo_4428_ = lean_ctor_get_uint8(v_a_4424_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4424_, 3);
v___x_4429_ = lean_box(v_binderInfo_4428_);
v___f_4430_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed), 16, 8);
lean_closure_set(v___f_4430_, 0, v___x_4413_);
lean_closure_set(v___f_4430_, 1, v_binderName_4425_);
lean_closure_set(v___f_4430_, 2, v_body_4427_);
lean_closure_set(v___f_4430_, 3, v___x_4429_);
lean_closure_set(v___f_4430_, 4, v___f_4414_);
lean_closure_set(v___f_4430_, 5, v_binderType_4426_);
lean_closure_set(v___f_4430_, 6, v___x_4415_);
lean_closure_set(v___f_4430_, 7, v_mvarId_4412_);
v___x_4431_ = lean_unsigned_to_nat(1u);
v___x_4432_ = lean_mk_empty_array_with_capacity(v___x_4431_);
v___x_4433_ = lean_array_push(v___x_4432_, v_binderType_4426_);
v___x_4434_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4433_, v_givenNames_4416_, v___f_4430_, v_config_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
return v___x_4434_;
}
case 8:
{
lean_object* v_declName_4435_; lean_object* v_type_4436_; lean_object* v_value_4437_; lean_object* v_body_4438_; uint8_t v_nondep_4439_; lean_object* v___x_4440_; lean_object* v___f_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_declName_4435_ = lean_ctor_get(v_a_4424_, 0);
lean_inc(v_declName_4435_);
v_type_4436_ = lean_ctor_get(v_a_4424_, 1);
lean_inc_ref_n(v_type_4436_, 2);
v_value_4437_ = lean_ctor_get(v_a_4424_, 2);
lean_inc_ref_n(v_value_4437_, 2);
v_body_4438_ = lean_ctor_get(v_a_4424_, 3);
lean_inc_ref(v_body_4438_);
v_nondep_4439_ = lean_ctor_get_uint8(v_a_4424_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4424_, 4);
v___x_4440_ = lean_box(v_nondep_4439_);
v___f_4441_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed), 17, 9);
lean_closure_set(v___f_4441_, 0, v___x_4413_);
lean_closure_set(v___f_4441_, 1, v_declName_4435_);
lean_closure_set(v___f_4441_, 2, v_body_4438_);
lean_closure_set(v___f_4441_, 3, v___x_4440_);
lean_closure_set(v___f_4441_, 4, v___f_4414_);
lean_closure_set(v___f_4441_, 5, v_type_4436_);
lean_closure_set(v___f_4441_, 6, v_value_4437_);
lean_closure_set(v___f_4441_, 7, v___x_4415_);
lean_closure_set(v___f_4441_, 8, v_mvarId_4412_);
v___x_4442_ = lean_unsigned_to_nat(2u);
v___x_4443_ = lean_mk_empty_array_with_capacity(v___x_4442_);
v___x_4444_ = lean_array_push(v___x_4443_, v_type_4436_);
v___x_4445_ = lean_array_push(v___x_4444_, v_value_4437_);
v___x_4446_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4445_, v_givenNames_4416_, v___f_4441_, v_config_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
return v___x_4446_;
}
default: 
{
lean_object* v___x_4447_; lean_object* v___x_4448_; 
lean_dec(v_a_4424_);
lean_dec(v_givenNames_4416_);
lean_dec_ref(v___f_4414_);
lean_dec_ref(v___x_4413_);
v___x_4447_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4448_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4415_, v_mvarId_4412_, v___x_4447_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
return v___x_4448_;
}
}
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec(v_givenNames_4416_);
lean_dec(v___x_4415_);
lean_dec_ref(v___f_4414_);
lean_dec_ref(v___x_4413_);
lean_dec(v_mvarId_4412_);
v_a_4449_ = lean_ctor_get(v___x_4423_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4423_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4423_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4423_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object* v_mvarId_4457_, lean_object* v___x_4458_, lean_object* v___f_4459_, lean_object* v___x_4460_, lean_object* v_givenNames_4461_, lean_object* v_config_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
lean_object* v_res_4468_; 
v_res_4468_ = l_Lean_MVarId_extractLetsLocalDecl___lam__3(v_mvarId_4457_, v___x_4458_, v___f_4459_, v___x_4460_, v_givenNames_4461_, v_config_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec_ref(v_config_4462_);
return v_res_4468_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object* v___x_4469_, lean_object* v___x_4470_, lean_object* v_givenNames_4471_, lean_object* v_config_4472_, lean_object* v_mvarId_4473_, lean_object* v_fvars_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_){
_start:
{
lean_object* v___f_4480_; lean_object* v___f_4481_; lean_object* v___x_4482_; 
lean_inc_n(v_mvarId_4473_, 2);
v___f_4480_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4480_, 0, v_mvarId_4473_);
lean_closure_set(v___f_4480_, 1, v_fvars_4474_);
v___f_4481_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed), 11, 6);
lean_closure_set(v___f_4481_, 0, v_mvarId_4473_);
lean_closure_set(v___f_4481_, 1, v___x_4469_);
lean_closure_set(v___f_4481_, 2, v___f_4480_);
lean_closure_set(v___f_4481_, 3, v___x_4470_);
lean_closure_set(v___f_4481_, 4, v_givenNames_4471_);
lean_closure_set(v___f_4481_, 5, v_config_4472_);
v___x_4482_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4473_, v___f_4481_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object* v___x_4483_, lean_object* v___x_4484_, lean_object* v_givenNames_4485_, lean_object* v_config_4486_, lean_object* v_mvarId_4487_, lean_object* v_fvars_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v_res_4494_; 
v_res_4494_ = l_Lean_MVarId_extractLetsLocalDecl___lam__4(v___x_4483_, v___x_4484_, v_givenNames_4485_, v_config_4486_, v_mvarId_4487_, v_fvars_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_);
lean_dec(v___y_4492_);
lean_dec_ref(v___y_4491_);
lean_dec(v___y_4490_);
lean_dec_ref(v___y_4489_);
return v_res_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object* v_mvarId_4495_, lean_object* v_fvarId_4496_, lean_object* v_givenNames_4497_, lean_object* v_config_4498_, lean_object* v_a_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_){
_start:
{
lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___f_4506_; lean_object* v___x_4507_; 
v___x_4504_ = l_Lean_instInhabitedExpr;
v___x_4505_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
v___f_4506_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed), 11, 4);
lean_closure_set(v___f_4506_, 0, v___x_4504_);
lean_closure_set(v___f_4506_, 1, v___x_4505_);
lean_closure_set(v___f_4506_, 2, v_givenNames_4497_);
lean_closure_set(v___f_4506_, 3, v_config_4498_);
lean_inc(v_mvarId_4495_);
v___x_4507_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4495_, v___x_4505_, v_a_4499_, v_a_4500_, v_a_4501_, v_a_4502_);
if (lean_obj_tag(v___x_4507_) == 0)
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; uint8_t v___x_4511_; lean_object* v___x_4512_; 
lean_dec_ref_known(v___x_4507_, 1);
v___x_4508_ = lean_unsigned_to_nat(1u);
v___x_4509_ = lean_mk_empty_array_with_capacity(v___x_4508_);
v___x_4510_ = lean_array_push(v___x_4509_, v_fvarId_4496_);
v___x_4511_ = 0;
v___x_4512_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4495_, v___x_4510_, v___f_4506_, v___x_4511_, v_a_4499_, v_a_4500_, v_a_4501_, v_a_4502_);
return v___x_4512_;
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
lean_dec_ref(v___f_4506_);
lean_dec(v_fvarId_4496_);
lean_dec(v_mvarId_4495_);
v_a_4513_ = lean_ctor_get(v___x_4507_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4507_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4507_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4507_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object* v_mvarId_4521_, lean_object* v_fvarId_4522_, lean_object* v_givenNames_4523_, lean_object* v_config_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v___y_4529_){
_start:
{
lean_object* v_res_4530_; 
v_res_4530_ = l_Lean_MVarId_extractLetsLocalDecl(v_mvarId_4521_, v_fvarId_4522_, v_givenNames_4523_, v_config_4524_, v_a_4525_, v_a_4526_, v_a_4527_, v_a_4528_);
lean_dec(v_a_4528_);
lean_dec_ref(v_a_4527_);
lean_dec(v_a_4526_);
lean_dec_ref(v_a_4525_);
return v_res_4530_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object* v_mvarId_4531_, lean_object* v___x_4532_, lean_object* v_config_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_){
_start:
{
lean_object* v___x_4539_; 
lean_inc(v___x_4532_);
lean_inc(v_mvarId_4531_);
v___x_4539_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4531_, v___x_4532_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_object* v___x_4540_; 
lean_dec_ref_known(v___x_4539_, 1);
lean_inc(v_mvarId_4531_);
v___x_4540_ = l_Lean_MVarId_getType(v_mvarId_4531_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
if (lean_obj_tag(v___x_4540_) == 0)
{
lean_object* v_a_4541_; lean_object* v___x_4542_; 
v_a_4541_ = lean_ctor_get(v___x_4540_, 0);
lean_inc_n(v_a_4541_, 2);
lean_dec_ref_known(v___x_4540_, 1);
v___x_4542_ = l_Lean_Meta_liftLets(v_a_4541_, v_config_4533_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; uint8_t v___x_4544_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4542_, 1);
v___x_4544_ = lean_expr_eqv(v_a_4541_, v_a_4543_);
lean_dec(v_a_4541_);
if (v___x_4544_ == 0)
{
lean_object* v___x_4545_; 
lean_dec(v___x_4532_);
v___x_4545_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4531_, v_a_4543_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
return v___x_4545_;
}
else
{
lean_object* v___x_4546_; 
lean_inc(v_mvarId_4531_);
v___x_4546_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4532_, v_mvarId_4531_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
if (lean_obj_tag(v___x_4546_) == 0)
{
lean_object* v___x_4547_; 
lean_dec_ref_known(v___x_4546_, 1);
v___x_4547_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4531_, v_a_4543_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
return v___x_4547_;
}
else
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
lean_dec(v_a_4543_);
lean_dec(v_mvarId_4531_);
v_a_4548_ = lean_ctor_get(v___x_4546_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4546_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4546_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
return v___x_4553_;
}
}
}
}
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
lean_dec(v_a_4541_);
lean_dec(v___x_4532_);
lean_dec(v_mvarId_4531_);
v_a_4556_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4558_ = v___x_4542_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4542_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
else
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4571_; 
lean_dec_ref(v_config_4533_);
lean_dec(v___x_4532_);
lean_dec(v_mvarId_4531_);
v_a_4564_ = lean_ctor_get(v___x_4540_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4540_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4566_ = v___x_4540_;
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v___x_4540_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
lean_dec_ref(v_config_4533_);
lean_dec(v___x_4532_);
lean_dec(v_mvarId_4531_);
v_a_4572_ = lean_ctor_get(v___x_4539_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4539_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4539_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4539_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object* v_mvarId_4580_, lean_object* v___x_4581_, lean_object* v_config_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_){
_start:
{
lean_object* v_res_4588_; 
v_res_4588_ = l_Lean_MVarId_liftLets___lam__0(v_mvarId_4580_, v___x_4581_, v_config_4582_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
lean_dec(v___y_4586_);
lean_dec_ref(v___y_4585_);
lean_dec(v___y_4584_);
lean_dec_ref(v___y_4583_);
return v_res_4588_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object* v_mvarId_4592_, lean_object* v_config_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_){
_start:
{
lean_object* v___x_4599_; lean_object* v___f_4600_; lean_object* v___x_4601_; 
v___x_4599_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
lean_inc(v_mvarId_4592_);
v___f_4600_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4600_, 0, v_mvarId_4592_);
lean_closure_set(v___f_4600_, 1, v___x_4599_);
lean_closure_set(v___f_4600_, 2, v_config_4593_);
v___x_4601_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4592_, v___f_4600_, v_a_4594_, v_a_4595_, v_a_4596_, v_a_4597_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object* v_mvarId_4602_, lean_object* v_config_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_, lean_object* v___y_4608_){
_start:
{
lean_object* v_res_4609_; 
v_res_4609_ = l_Lean_MVarId_liftLets(v_mvarId_4602_, v_config_4603_, v_a_4604_, v_a_4605_, v_a_4606_, v_a_4607_);
lean_dec(v_a_4607_);
lean_dec_ref(v_a_4606_);
lean_dec(v_a_4605_);
lean_dec_ref(v_a_4604_);
return v_res_4609_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object* v_mvarId_4610_, lean_object* v_fvars_4611_, lean_object* v_targetNew_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_){
_start:
{
lean_object* v___x_4618_; 
v___x_4618_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4610_, v_targetNew_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
if (lean_obj_tag(v___x_4618_) == 0)
{
lean_object* v_a_4619_; lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4632_; 
v_a_4619_ = lean_ctor_get(v___x_4618_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4621_ = v___x_4618_;
v_isShared_4622_ = v_isSharedCheck_4632_;
goto v_resetjp_4620_;
}
else
{
lean_inc(v_a_4619_);
lean_dec(v___x_4618_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4632_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
lean_object* v___x_4623_; size_t v_sz_4624_; size_t v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4630_; 
v___x_4623_ = lean_box(0);
v_sz_4624_ = lean_array_size(v_fvars_4611_);
v___x_4625_ = ((size_t)0ULL);
v___x_4626_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4624_, v___x_4625_, v_fvars_4611_);
v___x_4627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4627_, 0, v___x_4626_);
lean_ctor_set(v___x_4627_, 1, v_a_4619_);
v___x_4628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4623_);
lean_ctor_set(v___x_4628_, 1, v___x_4627_);
if (v_isShared_4622_ == 0)
{
lean_ctor_set(v___x_4621_, 0, v___x_4628_);
v___x_4630_ = v___x_4621_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v___x_4628_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
}
else
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
lean_dec_ref(v_fvars_4611_);
v_a_4633_ = lean_ctor_get(v___x_4618_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4635_ = v___x_4618_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4618_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4633_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
return v___x_4638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4641_, lean_object* v_fvars_4642_, lean_object* v_targetNew_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_){
_start:
{
lean_object* v_res_4649_; 
v_res_4649_ = l_Lean_MVarId_liftLetsLocalDecl___lam__0(v_mvarId_4641_, v_fvars_4642_, v_targetNew_4643_, v___y_4644_, v___y_4645_, v___y_4646_, v___y_4647_);
lean_dec(v___y_4647_);
lean_dec_ref(v___y_4646_);
lean_dec(v___y_4645_);
lean_dec_ref(v___y_4644_);
return v_res_4649_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object* v_mvarId_4650_, lean_object* v_config_4651_, lean_object* v___f_4652_, lean_object* v___x_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v___x_4659_; 
lean_inc(v_mvarId_4650_);
v___x_4659_ = l_Lean_MVarId_getType(v_mvarId_4650_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
lean_inc(v_a_4660_);
lean_dec_ref_known(v___x_4659_, 1);
switch(lean_obj_tag(v_a_4660_))
{
case 7:
{
lean_object* v_binderName_4661_; lean_object* v_binderType_4662_; lean_object* v_body_4663_; uint8_t v_binderInfo_4664_; lean_object* v___x_4665_; 
v_binderName_4661_ = lean_ctor_get(v_a_4660_, 0);
lean_inc(v_binderName_4661_);
v_binderType_4662_ = lean_ctor_get(v_a_4660_, 1);
lean_inc_ref_n(v_binderType_4662_, 2);
v_body_4663_ = lean_ctor_get(v_a_4660_, 2);
lean_inc_ref(v_body_4663_);
v_binderInfo_4664_ = lean_ctor_get_uint8(v_a_4660_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4660_, 3);
v___x_4665_ = l_Lean_Meta_liftLets(v_binderType_4662_, v_config_4651_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v_a_4666_; lean_object* v___y_4668_; lean_object* v___y_4669_; lean_object* v___y_4670_; lean_object* v___y_4671_; uint8_t v___x_4674_; 
v_a_4666_ = lean_ctor_get(v___x_4665_, 0);
lean_inc(v_a_4666_);
lean_dec_ref_known(v___x_4665_, 1);
v___x_4674_ = lean_expr_eqv(v_binderType_4662_, v_a_4666_);
lean_dec_ref(v_binderType_4662_);
if (v___x_4674_ == 0)
{
lean_dec(v___x_4653_);
lean_dec(v_mvarId_4650_);
v___y_4668_ = v___y_4654_;
v___y_4669_ = v___y_4655_;
v___y_4670_ = v___y_4656_;
v___y_4671_ = v___y_4657_;
goto v___jp_4667_;
}
else
{
lean_object* v___x_4675_; 
v___x_4675_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4653_, v_mvarId_4650_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
if (lean_obj_tag(v___x_4675_) == 0)
{
lean_dec_ref_known(v___x_4675_, 1);
v___y_4668_ = v___y_4654_;
v___y_4669_ = v___y_4655_;
v___y_4670_ = v___y_4656_;
v___y_4671_ = v___y_4657_;
goto v___jp_4667_;
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
lean_dec(v_a_4666_);
lean_dec_ref(v_body_4663_);
lean_dec(v_binderName_4661_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec_ref(v___f_4652_);
v_a_4676_ = lean_ctor_get(v___x_4675_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4675_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4675_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
}
v___jp_4667_:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = l_Lean_Expr_forallE___override(v_binderName_4661_, v_a_4666_, v_body_4663_, v_binderInfo_4664_);
v___x_4673_ = lean_apply_6(v___f_4652_, v___x_4672_, v___y_4668_, v___y_4669_, v___y_4670_, v___y_4671_, lean_box(0));
return v___x_4673_;
}
}
else
{
lean_object* v_a_4684_; lean_object* v___x_4686_; uint8_t v_isShared_4687_; uint8_t v_isSharedCheck_4691_; 
lean_dec_ref(v_body_4663_);
lean_dec_ref(v_binderType_4662_);
lean_dec(v_binderName_4661_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec(v___x_4653_);
lean_dec_ref(v___f_4652_);
lean_dec(v_mvarId_4650_);
v_a_4684_ = lean_ctor_get(v___x_4665_, 0);
v_isSharedCheck_4691_ = !lean_is_exclusive(v___x_4665_);
if (v_isSharedCheck_4691_ == 0)
{
v___x_4686_ = v___x_4665_;
v_isShared_4687_ = v_isSharedCheck_4691_;
goto v_resetjp_4685_;
}
else
{
lean_inc(v_a_4684_);
lean_dec(v___x_4665_);
v___x_4686_ = lean_box(0);
v_isShared_4687_ = v_isSharedCheck_4691_;
goto v_resetjp_4685_;
}
v_resetjp_4685_:
{
lean_object* v___x_4689_; 
if (v_isShared_4687_ == 0)
{
v___x_4689_ = v___x_4686_;
goto v_reusejp_4688_;
}
else
{
lean_object* v_reuseFailAlloc_4690_; 
v_reuseFailAlloc_4690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4690_, 0, v_a_4684_);
v___x_4689_ = v_reuseFailAlloc_4690_;
goto v_reusejp_4688_;
}
v_reusejp_4688_:
{
return v___x_4689_;
}
}
}
}
case 8:
{
lean_object* v_declName_4692_; lean_object* v_type_4693_; lean_object* v_value_4694_; lean_object* v_body_4695_; uint8_t v_nondep_4696_; lean_object* v___x_4697_; 
v_declName_4692_ = lean_ctor_get(v_a_4660_, 0);
lean_inc(v_declName_4692_);
v_type_4693_ = lean_ctor_get(v_a_4660_, 1);
lean_inc_ref_n(v_type_4693_, 2);
v_value_4694_ = lean_ctor_get(v_a_4660_, 2);
lean_inc_ref(v_value_4694_);
v_body_4695_ = lean_ctor_get(v_a_4660_, 3);
lean_inc_ref(v_body_4695_);
v_nondep_4696_ = lean_ctor_get_uint8(v_a_4660_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4660_, 4);
lean_inc_ref(v_config_4651_);
v___x_4697_ = l_Lean_Meta_liftLets(v_type_4693_, v_config_4651_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
if (lean_obj_tag(v___x_4697_) == 0)
{
lean_object* v_a_4698_; lean_object* v___x_4699_; 
v_a_4698_ = lean_ctor_get(v___x_4697_, 0);
lean_inc(v_a_4698_);
lean_dec_ref_known(v___x_4697_, 1);
lean_inc_ref(v_value_4694_);
v___x_4699_ = l_Lean_Meta_liftLets(v_value_4694_, v_config_4651_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
if (lean_obj_tag(v___x_4699_) == 0)
{
lean_object* v_a_4700_; lean_object* v___y_4702_; lean_object* v___y_4703_; lean_object* v___y_4704_; lean_object* v___y_4705_; uint8_t v___y_4709_; uint8_t v___x_4719_; 
v_a_4700_ = lean_ctor_get(v___x_4699_, 0);
lean_inc(v_a_4700_);
lean_dec_ref_known(v___x_4699_, 1);
v___x_4719_ = lean_expr_eqv(v_type_4693_, v_a_4698_);
lean_dec_ref(v_type_4693_);
if (v___x_4719_ == 0)
{
lean_dec_ref(v_value_4694_);
v___y_4709_ = v___x_4719_;
goto v___jp_4708_;
}
else
{
uint8_t v___x_4720_; 
v___x_4720_ = lean_expr_eqv(v_value_4694_, v_a_4700_);
lean_dec_ref(v_value_4694_);
v___y_4709_ = v___x_4720_;
goto v___jp_4708_;
}
v___jp_4701_:
{
lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4706_ = l_Lean_Expr_letE___override(v_declName_4692_, v_a_4698_, v_a_4700_, v_body_4695_, v_nondep_4696_);
v___x_4707_ = lean_apply_6(v___f_4652_, v___x_4706_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, lean_box(0));
return v___x_4707_;
}
v___jp_4708_:
{
if (v___y_4709_ == 0)
{
lean_dec(v___x_4653_);
lean_dec(v_mvarId_4650_);
v___y_4702_ = v___y_4654_;
v___y_4703_ = v___y_4655_;
v___y_4704_ = v___y_4656_;
v___y_4705_ = v___y_4657_;
goto v___jp_4701_;
}
else
{
lean_object* v___x_4710_; 
v___x_4710_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4653_, v_mvarId_4650_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_dec_ref_known(v___x_4710_, 1);
v___y_4702_ = v___y_4654_;
v___y_4703_ = v___y_4655_;
v___y_4704_ = v___y_4656_;
v___y_4705_ = v___y_4657_;
goto v___jp_4701_;
}
else
{
lean_object* v_a_4711_; lean_object* v___x_4713_; uint8_t v_isShared_4714_; uint8_t v_isSharedCheck_4718_; 
lean_dec(v_a_4700_);
lean_dec(v_a_4698_);
lean_dec_ref(v_body_4695_);
lean_dec(v_declName_4692_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec_ref(v___f_4652_);
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
v_isSharedCheck_4718_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4718_ == 0)
{
v___x_4713_ = v___x_4710_;
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
else
{
lean_inc(v_a_4711_);
lean_dec(v___x_4710_);
v___x_4713_ = lean_box(0);
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
v_resetjp_4712_:
{
lean_object* v___x_4716_; 
if (v_isShared_4714_ == 0)
{
v___x_4716_ = v___x_4713_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v_a_4711_);
v___x_4716_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
return v___x_4716_;
}
}
}
}
}
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
lean_dec(v_a_4698_);
lean_dec_ref(v_body_4695_);
lean_dec_ref(v_value_4694_);
lean_dec_ref(v_type_4693_);
lean_dec(v_declName_4692_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec(v___x_4653_);
lean_dec_ref(v___f_4652_);
lean_dec(v_mvarId_4650_);
v_a_4721_ = lean_ctor_get(v___x_4699_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4699_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4699_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4699_);
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
else
{
lean_object* v_a_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4736_; 
lean_dec_ref(v_body_4695_);
lean_dec_ref(v_value_4694_);
lean_dec_ref(v_type_4693_);
lean_dec(v_declName_4692_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec(v___x_4653_);
lean_dec_ref(v___f_4652_);
lean_dec_ref(v_config_4651_);
lean_dec(v_mvarId_4650_);
v_a_4729_ = lean_ctor_get(v___x_4697_, 0);
v_isSharedCheck_4736_ = !lean_is_exclusive(v___x_4697_);
if (v_isSharedCheck_4736_ == 0)
{
v___x_4731_ = v___x_4697_;
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_a_4729_);
lean_dec(v___x_4697_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4736_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4734_; 
if (v_isShared_4732_ == 0)
{
v___x_4734_ = v___x_4731_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4735_; 
v_reuseFailAlloc_4735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4735_, 0, v_a_4729_);
v___x_4734_ = v_reuseFailAlloc_4735_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
return v___x_4734_;
}
}
}
}
default: 
{
lean_object* v___x_4737_; lean_object* v___x_4738_; 
lean_dec(v_a_4660_);
lean_dec_ref(v___f_4652_);
lean_dec_ref(v_config_4651_);
v___x_4737_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4738_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4653_, v_mvarId_4650_, v___x_4737_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
return v___x_4738_;
}
}
}
else
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4746_; 
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec(v___x_4653_);
lean_dec_ref(v___f_4652_);
lean_dec_ref(v_config_4651_);
lean_dec(v_mvarId_4650_);
v_a_4739_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4746_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4746_ == 0)
{
v___x_4741_ = v___x_4659_;
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v___x_4659_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4744_; 
if (v_isShared_4742_ == 0)
{
v___x_4744_ = v___x_4741_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4745_; 
v_reuseFailAlloc_4745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4745_, 0, v_a_4739_);
v___x_4744_ = v_reuseFailAlloc_4745_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
return v___x_4744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object* v_mvarId_4747_, lean_object* v_config_4748_, lean_object* v___f_4749_, lean_object* v___x_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_){
_start:
{
lean_object* v_res_4756_; 
v_res_4756_ = l_Lean_MVarId_liftLetsLocalDecl___lam__1(v_mvarId_4747_, v_config_4748_, v___f_4749_, v___x_4750_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_);
return v_res_4756_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object* v_config_4757_, lean_object* v___x_4758_, lean_object* v_mvarId_4759_, lean_object* v_fvars_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_){
_start:
{
lean_object* v___f_4766_; lean_object* v___f_4767_; lean_object* v___x_4768_; 
lean_inc_n(v_mvarId_4759_, 2);
v___f_4766_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4766_, 0, v_mvarId_4759_);
lean_closure_set(v___f_4766_, 1, v_fvars_4760_);
v___f_4767_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4767_, 0, v_mvarId_4759_);
lean_closure_set(v___f_4767_, 1, v_config_4757_);
lean_closure_set(v___f_4767_, 2, v___f_4766_);
lean_closure_set(v___f_4767_, 3, v___x_4758_);
v___x_4768_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4759_, v___f_4767_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object* v_config_4769_, lean_object* v___x_4770_, lean_object* v_mvarId_4771_, lean_object* v_fvars_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l_Lean_MVarId_liftLetsLocalDecl___lam__2(v_config_4769_, v___x_4770_, v_mvarId_4771_, v_fvars_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
lean_dec(v___y_4776_);
lean_dec_ref(v___y_4775_);
lean_dec(v___y_4774_);
lean_dec_ref(v___y_4773_);
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object* v_mvarId_4779_, lean_object* v_fvarId_4780_, lean_object* v_config_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_){
_start:
{
lean_object* v___x_4787_; lean_object* v___f_4788_; lean_object* v___x_4789_; 
v___x_4787_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
v___f_4788_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4788_, 0, v_config_4781_);
lean_closure_set(v___f_4788_, 1, v___x_4787_);
lean_inc(v_mvarId_4779_);
v___x_4789_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4779_, v___x_4787_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_);
if (lean_obj_tag(v___x_4789_) == 0)
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; uint8_t v___x_4793_; lean_object* v___x_4794_; 
lean_dec_ref_known(v___x_4789_, 1);
v___x_4790_ = lean_unsigned_to_nat(1u);
v___x_4791_ = lean_mk_empty_array_with_capacity(v___x_4790_);
v___x_4792_ = lean_array_push(v___x_4791_, v_fvarId_4780_);
v___x_4793_ = 0;
v___x_4794_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4779_, v___x_4792_, v___f_4788_, v___x_4793_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_);
if (lean_obj_tag(v___x_4794_) == 0)
{
lean_object* v_a_4795_; lean_object* v___x_4797_; uint8_t v_isShared_4798_; uint8_t v_isSharedCheck_4803_; 
v_a_4795_ = lean_ctor_get(v___x_4794_, 0);
v_isSharedCheck_4803_ = !lean_is_exclusive(v___x_4794_);
if (v_isSharedCheck_4803_ == 0)
{
v___x_4797_ = v___x_4794_;
v_isShared_4798_ = v_isSharedCheck_4803_;
goto v_resetjp_4796_;
}
else
{
lean_inc(v_a_4795_);
lean_dec(v___x_4794_);
v___x_4797_ = lean_box(0);
v_isShared_4798_ = v_isSharedCheck_4803_;
goto v_resetjp_4796_;
}
v_resetjp_4796_:
{
lean_object* v_snd_4799_; lean_object* v___x_4801_; 
v_snd_4799_ = lean_ctor_get(v_a_4795_, 1);
lean_inc(v_snd_4799_);
lean_dec(v_a_4795_);
if (v_isShared_4798_ == 0)
{
lean_ctor_set(v___x_4797_, 0, v_snd_4799_);
v___x_4801_ = v___x_4797_;
goto v_reusejp_4800_;
}
else
{
lean_object* v_reuseFailAlloc_4802_; 
v_reuseFailAlloc_4802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4802_, 0, v_snd_4799_);
v___x_4801_ = v_reuseFailAlloc_4802_;
goto v_reusejp_4800_;
}
v_reusejp_4800_:
{
return v___x_4801_;
}
}
}
else
{
lean_object* v_a_4804_; lean_object* v___x_4806_; uint8_t v_isShared_4807_; uint8_t v_isSharedCheck_4811_; 
v_a_4804_ = lean_ctor_get(v___x_4794_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v___x_4794_);
if (v_isSharedCheck_4811_ == 0)
{
v___x_4806_ = v___x_4794_;
v_isShared_4807_ = v_isSharedCheck_4811_;
goto v_resetjp_4805_;
}
else
{
lean_inc(v_a_4804_);
lean_dec(v___x_4794_);
v___x_4806_ = lean_box(0);
v_isShared_4807_ = v_isSharedCheck_4811_;
goto v_resetjp_4805_;
}
v_resetjp_4805_:
{
lean_object* v___x_4809_; 
if (v_isShared_4807_ == 0)
{
v___x_4809_ = v___x_4806_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_a_4804_);
v___x_4809_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
return v___x_4809_;
}
}
}
}
else
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4819_; 
lean_dec_ref(v___f_4788_);
lean_dec(v_fvarId_4780_);
lean_dec(v_mvarId_4779_);
v_a_4812_ = lean_ctor_get(v___x_4789_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4789_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4814_ = v___x_4789_;
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v___x_4789_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4817_; 
if (v_isShared_4815_ == 0)
{
v___x_4817_ = v___x_4814_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_a_4812_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object* v_mvarId_4820_, lean_object* v_fvarId_4821_, lean_object* v_config_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_, lean_object* v___y_4827_){
_start:
{
lean_object* v_res_4828_; 
v_res_4828_ = l_Lean_MVarId_liftLetsLocalDecl(v_mvarId_4820_, v_fvarId_4821_, v_config_4822_, v_a_4823_, v_a_4824_, v_a_4825_, v_a_4826_);
lean_dec(v_a_4826_);
lean_dec_ref(v_a_4825_);
lean_dec(v_a_4824_);
lean_dec_ref(v_a_4823_);
return v_res_4828_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object* v_mvarId_4829_, lean_object* v___x_4830_, uint8_t v_failIfUnchanged_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_){
_start:
{
lean_object* v___x_4837_; 
lean_inc(v___x_4830_);
lean_inc(v_mvarId_4829_);
v___x_4837_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4829_, v___x_4830_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
if (lean_obj_tag(v___x_4837_) == 0)
{
lean_object* v___x_4838_; 
lean_dec_ref_known(v___x_4837_, 1);
lean_inc(v_mvarId_4829_);
v___x_4838_ = l_Lean_MVarId_getType(v_mvarId_4829_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
if (lean_obj_tag(v___x_4838_) == 0)
{
lean_object* v_a_4839_; lean_object* v___x_4840_; 
v_a_4839_ = lean_ctor_get(v___x_4838_, 0);
lean_inc_n(v_a_4839_, 2);
lean_dec_ref_known(v___x_4838_, 1);
v___x_4840_ = l_Lean_Meta_letToHave(v_a_4839_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
if (lean_obj_tag(v___x_4840_) == 0)
{
if (v_failIfUnchanged_4831_ == 0)
{
lean_object* v_a_4841_; lean_object* v___x_4842_; 
lean_dec(v_a_4839_);
lean_dec(v___x_4830_);
v_a_4841_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_a_4841_);
lean_dec_ref_known(v___x_4840_, 1);
v___x_4842_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4829_, v_a_4841_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
return v___x_4842_;
}
else
{
lean_object* v_a_4843_; uint8_t v___x_4844_; 
v_a_4843_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_a_4843_);
lean_dec_ref_known(v___x_4840_, 1);
v___x_4844_ = lean_expr_eqv(v_a_4839_, v_a_4843_);
lean_dec(v_a_4839_);
if (v___x_4844_ == 0)
{
lean_object* v___x_4845_; 
lean_dec(v___x_4830_);
v___x_4845_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4829_, v_a_4843_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
return v___x_4845_;
}
else
{
lean_object* v___x_4846_; 
lean_inc(v_mvarId_4829_);
v___x_4846_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4830_, v_mvarId_4829_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
if (lean_obj_tag(v___x_4846_) == 0)
{
lean_object* v___x_4847_; 
lean_dec_ref_known(v___x_4846_, 1);
v___x_4847_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4829_, v_a_4843_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
return v___x_4847_;
}
else
{
lean_object* v_a_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4855_; 
lean_dec(v_a_4843_);
lean_dec(v_mvarId_4829_);
v_a_4848_ = lean_ctor_get(v___x_4846_, 0);
v_isSharedCheck_4855_ = !lean_is_exclusive(v___x_4846_);
if (v_isSharedCheck_4855_ == 0)
{
v___x_4850_ = v___x_4846_;
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_a_4848_);
lean_dec(v___x_4846_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
lean_object* v___x_4853_; 
if (v_isShared_4851_ == 0)
{
v___x_4853_ = v___x_4850_;
goto v_reusejp_4852_;
}
else
{
lean_object* v_reuseFailAlloc_4854_; 
v_reuseFailAlloc_4854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4854_, 0, v_a_4848_);
v___x_4853_ = v_reuseFailAlloc_4854_;
goto v_reusejp_4852_;
}
v_reusejp_4852_:
{
return v___x_4853_;
}
}
}
}
}
}
else
{
lean_object* v_a_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4863_; 
lean_dec(v_a_4839_);
lean_dec(v___x_4830_);
lean_dec(v_mvarId_4829_);
v_a_4856_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4858_ = v___x_4840_;
v_isShared_4859_ = v_isSharedCheck_4863_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_a_4856_);
lean_dec(v___x_4840_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4863_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v___x_4861_; 
if (v_isShared_4859_ == 0)
{
v___x_4861_ = v___x_4858_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v_a_4856_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec(v___x_4830_);
lean_dec(v_mvarId_4829_);
v_a_4864_ = lean_ctor_get(v___x_4838_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4838_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4838_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4838_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
else
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4879_; 
lean_dec(v___x_4830_);
lean_dec(v_mvarId_4829_);
v_a_4872_ = lean_ctor_get(v___x_4837_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4874_ = v___x_4837_;
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___x_4837_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4877_; 
if (v_isShared_4875_ == 0)
{
v___x_4877_ = v___x_4874_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_a_4872_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object* v_mvarId_4880_, lean_object* v___x_4881_, lean_object* v_failIfUnchanged_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4888_; lean_object* v_res_4889_; 
v_failIfUnchanged_boxed_4888_ = lean_unbox(v_failIfUnchanged_4882_);
v_res_4889_ = l_Lean_MVarId_letToHave___lam__0(v_mvarId_4880_, v___x_4881_, v_failIfUnchanged_boxed_4888_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_);
lean_dec(v___y_4886_);
lean_dec_ref(v___y_4885_);
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4883_);
return v_res_4889_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object* v_mvarId_4893_, uint8_t v_failIfUnchanged_4894_, lean_object* v_a_4895_, lean_object* v_a_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_){
_start:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___f_4902_; lean_object* v___x_4903_; 
v___x_4900_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4901_ = lean_box(v_failIfUnchanged_4894_);
lean_inc(v_mvarId_4893_);
v___f_4902_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHave___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4902_, 0, v_mvarId_4893_);
lean_closure_set(v___f_4902_, 1, v___x_4900_);
lean_closure_set(v___f_4902_, 2, v___x_4901_);
v___x_4903_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4893_, v___f_4902_, v_a_4895_, v_a_4896_, v_a_4897_, v_a_4898_);
return v___x_4903_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object* v_mvarId_4904_, lean_object* v_failIfUnchanged_4905_, lean_object* v_a_4906_, lean_object* v_a_4907_, lean_object* v_a_4908_, lean_object* v_a_4909_, lean_object* v___y_4910_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4911_; lean_object* v_res_4912_; 
v_failIfUnchanged_boxed_4911_ = lean_unbox(v_failIfUnchanged_4905_);
v_res_4912_ = l_Lean_MVarId_letToHave(v_mvarId_4904_, v_failIfUnchanged_boxed_4911_, v_a_4906_, v_a_4907_, v_a_4908_, v_a_4909_);
lean_dec(v_a_4909_);
lean_dec_ref(v_a_4908_);
lean_dec(v_a_4907_);
lean_dec_ref(v_a_4906_);
return v_res_4912_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object* v_mvarId_4913_, lean_object* v___x_4914_, lean_object* v_fvarId_4915_, uint8_t v_failIfUnchanged_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_){
_start:
{
lean_object* v___x_4922_; 
lean_inc(v___x_4914_);
lean_inc(v_mvarId_4913_);
v___x_4922_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4913_, v___x_4914_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
if (lean_obj_tag(v___x_4922_) == 0)
{
lean_object* v___x_4923_; 
lean_dec_ref_known(v___x_4922_, 1);
lean_inc(v_fvarId_4915_);
v___x_4923_ = l_Lean_FVarId_getType___redArg(v_fvarId_4915_, v___y_4917_, v___y_4919_, v___y_4920_);
if (lean_obj_tag(v___x_4923_) == 0)
{
lean_object* v_a_4924_; lean_object* v___x_4925_; 
v_a_4924_ = lean_ctor_get(v___x_4923_, 0);
lean_inc_n(v_a_4924_, 2);
lean_dec_ref_known(v___x_4923_, 1);
v___x_4925_ = l_Lean_Meta_letToHave(v_a_4924_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
if (lean_obj_tag(v___x_4925_) == 0)
{
if (v_failIfUnchanged_4916_ == 0)
{
lean_object* v_a_4926_; lean_object* v___x_4927_; 
lean_dec(v_a_4924_);
lean_dec(v___x_4914_);
v_a_4926_ = lean_ctor_get(v___x_4925_, 0);
lean_inc(v_a_4926_);
lean_dec_ref_known(v___x_4925_, 1);
v___x_4927_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4913_, v_fvarId_4915_, v_a_4926_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
return v___x_4927_;
}
else
{
lean_object* v_a_4928_; uint8_t v___x_4929_; 
v_a_4928_ = lean_ctor_get(v___x_4925_, 0);
lean_inc(v_a_4928_);
lean_dec_ref_known(v___x_4925_, 1);
v___x_4929_ = lean_expr_eqv(v_a_4924_, v_a_4928_);
lean_dec(v_a_4924_);
if (v___x_4929_ == 0)
{
lean_object* v___x_4930_; 
lean_dec(v___x_4914_);
v___x_4930_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4913_, v_fvarId_4915_, v_a_4928_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
return v___x_4930_;
}
else
{
lean_object* v___x_4931_; 
lean_inc(v_mvarId_4913_);
v___x_4931_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4914_, v_mvarId_4913_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
if (lean_obj_tag(v___x_4931_) == 0)
{
lean_object* v___x_4932_; 
lean_dec_ref_known(v___x_4931_, 1);
v___x_4932_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4913_, v_fvarId_4915_, v_a_4928_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
return v___x_4932_;
}
else
{
lean_object* v_a_4933_; lean_object* v___x_4935_; uint8_t v_isShared_4936_; uint8_t v_isSharedCheck_4940_; 
lean_dec(v_a_4928_);
lean_dec(v_fvarId_4915_);
lean_dec(v_mvarId_4913_);
v_a_4933_ = lean_ctor_get(v___x_4931_, 0);
v_isSharedCheck_4940_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4940_ == 0)
{
v___x_4935_ = v___x_4931_;
v_isShared_4936_ = v_isSharedCheck_4940_;
goto v_resetjp_4934_;
}
else
{
lean_inc(v_a_4933_);
lean_dec(v___x_4931_);
v___x_4935_ = lean_box(0);
v_isShared_4936_ = v_isSharedCheck_4940_;
goto v_resetjp_4934_;
}
v_resetjp_4934_:
{
lean_object* v___x_4938_; 
if (v_isShared_4936_ == 0)
{
v___x_4938_ = v___x_4935_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4939_; 
v_reuseFailAlloc_4939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4939_, 0, v_a_4933_);
v___x_4938_ = v_reuseFailAlloc_4939_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
return v___x_4938_;
}
}
}
}
}
}
else
{
lean_object* v_a_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4948_; 
lean_dec(v_a_4924_);
lean_dec(v_fvarId_4915_);
lean_dec(v___x_4914_);
lean_dec(v_mvarId_4913_);
v_a_4941_ = lean_ctor_get(v___x_4925_, 0);
v_isSharedCheck_4948_ = !lean_is_exclusive(v___x_4925_);
if (v_isSharedCheck_4948_ == 0)
{
v___x_4943_ = v___x_4925_;
v_isShared_4944_ = v_isSharedCheck_4948_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_a_4941_);
lean_dec(v___x_4925_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4948_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v___x_4946_; 
if (v_isShared_4944_ == 0)
{
v___x_4946_ = v___x_4943_;
goto v_reusejp_4945_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v_a_4941_);
v___x_4946_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4945_;
}
v_reusejp_4945_:
{
return v___x_4946_;
}
}
}
}
else
{
lean_object* v_a_4949_; lean_object* v___x_4951_; uint8_t v_isShared_4952_; uint8_t v_isSharedCheck_4956_; 
lean_dec(v_fvarId_4915_);
lean_dec(v___x_4914_);
lean_dec(v_mvarId_4913_);
v_a_4949_ = lean_ctor_get(v___x_4923_, 0);
v_isSharedCheck_4956_ = !lean_is_exclusive(v___x_4923_);
if (v_isSharedCheck_4956_ == 0)
{
v___x_4951_ = v___x_4923_;
v_isShared_4952_ = v_isSharedCheck_4956_;
goto v_resetjp_4950_;
}
else
{
lean_inc(v_a_4949_);
lean_dec(v___x_4923_);
v___x_4951_ = lean_box(0);
v_isShared_4952_ = v_isSharedCheck_4956_;
goto v_resetjp_4950_;
}
v_resetjp_4950_:
{
lean_object* v___x_4954_; 
if (v_isShared_4952_ == 0)
{
v___x_4954_ = v___x_4951_;
goto v_reusejp_4953_;
}
else
{
lean_object* v_reuseFailAlloc_4955_; 
v_reuseFailAlloc_4955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4955_, 0, v_a_4949_);
v___x_4954_ = v_reuseFailAlloc_4955_;
goto v_reusejp_4953_;
}
v_reusejp_4953_:
{
return v___x_4954_;
}
}
}
}
else
{
lean_object* v_a_4957_; lean_object* v___x_4959_; uint8_t v_isShared_4960_; uint8_t v_isSharedCheck_4964_; 
lean_dec(v_fvarId_4915_);
lean_dec(v___x_4914_);
lean_dec(v_mvarId_4913_);
v_a_4957_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_4964_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4964_ == 0)
{
v___x_4959_ = v___x_4922_;
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
else
{
lean_inc(v_a_4957_);
lean_dec(v___x_4922_);
v___x_4959_ = lean_box(0);
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
v_resetjp_4958_:
{
lean_object* v___x_4962_; 
if (v_isShared_4960_ == 0)
{
v___x_4962_ = v___x_4959_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v_a_4957_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object* v_mvarId_4965_, lean_object* v___x_4966_, lean_object* v_fvarId_4967_, lean_object* v_failIfUnchanged_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4974_; lean_object* v_res_4975_; 
v_failIfUnchanged_boxed_4974_ = lean_unbox(v_failIfUnchanged_4968_);
v_res_4975_ = l_Lean_MVarId_letToHaveLocalDecl___lam__0(v_mvarId_4965_, v___x_4966_, v_fvarId_4967_, v_failIfUnchanged_boxed_4974_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_);
lean_dec(v___y_4972_);
lean_dec_ref(v___y_4971_);
lean_dec(v___y_4970_);
lean_dec_ref(v___y_4969_);
return v_res_4975_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object* v_mvarId_4976_, lean_object* v_fvarId_4977_, uint8_t v_failIfUnchanged_4978_, lean_object* v_a_4979_, lean_object* v_a_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_){
_start:
{
lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___f_4986_; lean_object* v___x_4987_; 
v___x_4984_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4985_ = lean_box(v_failIfUnchanged_4978_);
lean_inc(v_mvarId_4976_);
v___f_4986_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4986_, 0, v_mvarId_4976_);
lean_closure_set(v___f_4986_, 1, v___x_4984_);
lean_closure_set(v___f_4986_, 2, v_fvarId_4977_);
lean_closure_set(v___f_4986_, 3, v___x_4985_);
v___x_4987_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4976_, v___f_4986_, v_a_4979_, v_a_4980_, v_a_4981_, v_a_4982_);
return v___x_4987_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object* v_mvarId_4988_, lean_object* v_fvarId_4989_, lean_object* v_failIfUnchanged_4990_, lean_object* v_a_4991_, lean_object* v_a_4992_, lean_object* v_a_4993_, lean_object* v_a_4994_, lean_object* v___y_4995_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4996_; lean_object* v_res_4997_; 
v_failIfUnchanged_boxed_4996_ = lean_unbox(v_failIfUnchanged_4990_);
v_res_4997_ = l_Lean_MVarId_letToHaveLocalDecl(v_mvarId_4988_, v_fvarId_4989_, v_failIfUnchanged_boxed_4996_, v_a_4991_, v_a_4992_, v_a_4993_, v_a_4994_);
lean_dec(v_a_4994_);
lean_dec_ref(v_a_4993_);
lean_dec(v_a_4992_);
lean_dec_ref(v_a_4991_);
return v_res_4997_;
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
