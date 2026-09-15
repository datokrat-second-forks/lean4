// Lean compiler output
// Module: Lean.Meta.Closure
// Imports: public import Lean.Meta.Check public import Lean.Meta.Tactic.AuxLemma import Lean.Util.ForEachExpr
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
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
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg();
lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Level_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Level_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
static const lean_ctor_object l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default = (const lean_object*)&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement = (const lean_object*)&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitLevel___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_visitLevel___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitLevel___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_visitLevel___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Closure_visitExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitExpr___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_visitExpr___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitExpr___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_visitExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 178, 247, 241, 102, 42, 87, 174)}};
static const lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LocalDecl_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__1_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__2 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__2_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__3 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__3_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__4 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__4_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__5 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__5_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__6 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__6_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__7 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__1_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__2_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__8 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__8_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__3_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__4_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__5_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__6_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__9 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__9_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__7_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__10 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__7_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "assertion violation: !decl.isLet (allowNondep := true) -- should all be cdecls\n    "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls.visit"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.Closure"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "cycle detected in sorting abstracted variables"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Closure"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 96, 54, 247, 94, 45, 114, 27)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Sorting decl "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: sortedDecls.size = sortedArgs.size\n  "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: toSortDecls.size = toSortArgs.size\n  "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Sorted fvars: "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "MVars to abstract, topologically sorting the abstracted variables"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__1;
static const lean_array_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__2 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__3;
static const lean_string_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Closure.mkValueTypeClosure"};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__4 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_value;
static const lean_string_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 124, .m_capacity = 124, .m_length = 123, .m_data = "assertion violation: !value.hasFVar  -- In case https://github.com/leanprover/lean4/issues/10705 resurfaces in a new way\n  "};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__5 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(249, 97, 222, 101, 51, 127, 178, 83)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(220, 178, 96, 6, 241, 231, 113, 20)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 127, 178, 186, 28, 24, 102, 169)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(21, 173, 206, 0, 127, 57, 105, 236)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 19, 238, 0, 111, 115, 19, 38)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 126, 95, 11, 82, 59, 71, 144)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 8, 231, 231, 52, 89, 133, 183)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(12, 6, 147, 100, 167, 240, 247, 134)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(211, 133, 26, 59, 130, 208, 63, 13)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(210311863) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 50, 125, 89, 33, 200, 89, 48)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 43, 172, 82, 181, 165, 145, 47)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 121, 24, 171, 140, 146, 97, 79)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(122, 57, 62, 99, 250, 159, 110, 171)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object* v_f_7_, lean_object* v_u_8_, uint8_t v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; uint8_t v___x_62_; 
v___x_16_ = ((lean_object*)(l_Lean_Meta_Closure_visitLevel___closed__0));
v___x_17_ = ((lean_object*)(l_Lean_Meta_Closure_visitLevel___closed__1));
v___x_62_ = l_Lean_Level_hasMVar(v_u_8_);
if (v___x_62_ == 0)
{
uint8_t v___x_63_; 
v___x_63_ = l_Lean_Level_hasParam(v_u_8_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; 
lean_dec_ref(v_f_7_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_u_8_);
return v___x_64_;
}
else
{
goto v___jp_18_;
}
}
else
{
goto v___jp_18_;
}
v___jp_18_:
{
lean_object* v___x_19_; lean_object* v_visitedLevel_20_; lean_object* v___x_21_; 
v___x_19_ = lean_st_ref_get(v___y_10_);
v_visitedLevel_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc_ref(v_visitedLevel_20_);
lean_dec(v___x_19_);
lean_inc(v_u_8_);
v___x_21_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_16_, v___x_17_, v_visitedLevel_20_, v_u_8_);
lean_dec_ref(v_visitedLevel_20_);
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(v___y_9_);
lean_inc(v___y_14_);
lean_inc_ref(v___y_13_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc(v_u_8_);
v___x_23_ = lean_apply_8(v_f_7_, v_u_8_, v___x_22_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, lean_box(0));
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_53_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_53_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_53_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_53_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v_visitedLevel_29_; lean_object* v_visitedExpr_30_; lean_object* v_levelParams_31_; lean_object* v_nextLevelIdx_32_; lean_object* v_levelArgs_33_; lean_object* v_newLocalDecls_34_; lean_object* v_newLocalDeclsForMVars_35_; lean_object* v_newLetDecls_36_; lean_object* v_nextExprIdx_37_; lean_object* v_exprMVarArgs_38_; lean_object* v_exprFVarArgs_39_; lean_object* v_toProcess_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_52_; 
v___x_28_ = lean_st_ref_take(v___y_10_);
v_visitedLevel_29_ = lean_ctor_get(v___x_28_, 0);
v_visitedExpr_30_ = lean_ctor_get(v___x_28_, 1);
v_levelParams_31_ = lean_ctor_get(v___x_28_, 2);
v_nextLevelIdx_32_ = lean_ctor_get(v___x_28_, 3);
v_levelArgs_33_ = lean_ctor_get(v___x_28_, 4);
v_newLocalDecls_34_ = lean_ctor_get(v___x_28_, 5);
v_newLocalDeclsForMVars_35_ = lean_ctor_get(v___x_28_, 6);
v_newLetDecls_36_ = lean_ctor_get(v___x_28_, 7);
v_nextExprIdx_37_ = lean_ctor_get(v___x_28_, 8);
v_exprMVarArgs_38_ = lean_ctor_get(v___x_28_, 9);
v_exprFVarArgs_39_ = lean_ctor_get(v___x_28_, 10);
v_toProcess_40_ = lean_ctor_get(v___x_28_, 11);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_52_ == 0)
{
v___x_42_ = v___x_28_;
v_isShared_43_ = v_isSharedCheck_52_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_toProcess_40_);
lean_inc(v_exprFVarArgs_39_);
lean_inc(v_exprMVarArgs_38_);
lean_inc(v_nextExprIdx_37_);
lean_inc(v_newLetDecls_36_);
lean_inc(v_newLocalDeclsForMVars_35_);
lean_inc(v_newLocalDecls_34_);
lean_inc(v_levelArgs_33_);
lean_inc(v_nextLevelIdx_32_);
lean_inc(v_levelParams_31_);
lean_inc(v_visitedExpr_30_);
lean_inc(v_visitedLevel_29_);
lean_dec(v___x_28_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_52_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_46_; 
lean_inc(v_a_24_);
v___x_44_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_16_, v___x_17_, v_visitedLevel_29_, v_u_8_, v_a_24_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 0, v___x_44_);
v___x_46_ = v___x_42_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_44_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_visitedExpr_30_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v_levelParams_31_);
lean_ctor_set(v_reuseFailAlloc_51_, 3, v_nextLevelIdx_32_);
lean_ctor_set(v_reuseFailAlloc_51_, 4, v_levelArgs_33_);
lean_ctor_set(v_reuseFailAlloc_51_, 5, v_newLocalDecls_34_);
lean_ctor_set(v_reuseFailAlloc_51_, 6, v_newLocalDeclsForMVars_35_);
lean_ctor_set(v_reuseFailAlloc_51_, 7, v_newLetDecls_36_);
lean_ctor_set(v_reuseFailAlloc_51_, 8, v_nextExprIdx_37_);
lean_ctor_set(v_reuseFailAlloc_51_, 9, v_exprMVarArgs_38_);
lean_ctor_set(v_reuseFailAlloc_51_, 10, v_exprFVarArgs_39_);
lean_ctor_set(v_reuseFailAlloc_51_, 11, v_toProcess_40_);
v___x_46_ = v_reuseFailAlloc_51_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; lean_object* v___x_49_; 
v___x_47_ = lean_st_ref_put(v___y_10_, v___x_46_);
if (v_isShared_27_ == 0)
{
v___x_49_ = v___x_26_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_a_24_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
}
}
else
{
lean_dec(v_u_8_);
return v___x_23_;
}
}
else
{
lean_object* v_val_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec(v_u_8_);
lean_dec_ref(v_f_7_);
v_val_54_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_21_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_val_54_);
lean_dec(v___x_21_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set_tag(v___x_56_, 0);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_val_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object* v_f_65_, lean_object* v_u_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
uint8_t v___y_2703__boxed_74_; lean_object* v_res_75_; 
v___y_2703__boxed_74_ = lean_unbox(v___y_67_);
v_res_75_ = l_Lean_Meta_Closure_visitLevel(v_f_65_, v_u_66_, v___y_2703__boxed_74_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
lean_dec(v___y_68_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object* v_f_78_, lean_object* v_e_79_, uint8_t v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_133_; 
v___x_87_ = ((lean_object*)(l_Lean_Meta_Closure_visitExpr___closed__0));
v___x_88_ = ((lean_object*)(l_Lean_Meta_Closure_visitExpr___closed__1));
v___x_133_ = l_Lean_Expr_hasLevelParam(v_e_79_);
if (v___x_133_ == 0)
{
uint8_t v___x_134_; 
v___x_134_ = l_Lean_Expr_hasFVar(v_e_79_);
if (v___x_134_ == 0)
{
uint8_t v___x_135_; 
v___x_135_ = l_Lean_Expr_hasMVar(v_e_79_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
lean_dec_ref(v_f_78_);
v___x_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_136_, 0, v_e_79_);
return v___x_136_;
}
else
{
goto v___jp_89_;
}
}
else
{
goto v___jp_89_;
}
}
else
{
goto v___jp_89_;
}
v___jp_89_:
{
lean_object* v___x_90_; lean_object* v_visitedExpr_91_; lean_object* v___x_92_; 
v___x_90_ = lean_st_ref_get(v___y_81_);
v_visitedExpr_91_ = lean_ctor_get(v___x_90_, 1);
lean_inc_ref(v_visitedExpr_91_);
lean_dec(v___x_90_);
lean_inc_ref(v_e_79_);
v___x_92_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_87_, v___x_88_, v_visitedExpr_91_, v_e_79_);
lean_dec_ref(v_visitedExpr_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_box(v___y_80_);
lean_inc(v___y_85_);
lean_inc_ref(v___y_84_);
lean_inc(v___y_83_);
lean_inc_ref(v___y_82_);
lean_inc(v___y_81_);
lean_inc_ref(v_e_79_);
v___x_94_ = lean_apply_8(v_f_78_, v_e_79_, v___x_93_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, lean_box(0));
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_124_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_124_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_124_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_124_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v_visitedLevel_100_; lean_object* v_visitedExpr_101_; lean_object* v_levelParams_102_; lean_object* v_nextLevelIdx_103_; lean_object* v_levelArgs_104_; lean_object* v_newLocalDecls_105_; lean_object* v_newLocalDeclsForMVars_106_; lean_object* v_newLetDecls_107_; lean_object* v_nextExprIdx_108_; lean_object* v_exprMVarArgs_109_; lean_object* v_exprFVarArgs_110_; lean_object* v_toProcess_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_123_; 
v___x_99_ = lean_st_ref_take(v___y_81_);
v_visitedLevel_100_ = lean_ctor_get(v___x_99_, 0);
v_visitedExpr_101_ = lean_ctor_get(v___x_99_, 1);
v_levelParams_102_ = lean_ctor_get(v___x_99_, 2);
v_nextLevelIdx_103_ = lean_ctor_get(v___x_99_, 3);
v_levelArgs_104_ = lean_ctor_get(v___x_99_, 4);
v_newLocalDecls_105_ = lean_ctor_get(v___x_99_, 5);
v_newLocalDeclsForMVars_106_ = lean_ctor_get(v___x_99_, 6);
v_newLetDecls_107_ = lean_ctor_get(v___x_99_, 7);
v_nextExprIdx_108_ = lean_ctor_get(v___x_99_, 8);
v_exprMVarArgs_109_ = lean_ctor_get(v___x_99_, 9);
v_exprFVarArgs_110_ = lean_ctor_get(v___x_99_, 10);
v_toProcess_111_ = lean_ctor_get(v___x_99_, 11);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_123_ == 0)
{
v___x_113_ = v___x_99_;
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_toProcess_111_);
lean_inc(v_exprFVarArgs_110_);
lean_inc(v_exprMVarArgs_109_);
lean_inc(v_nextExprIdx_108_);
lean_inc(v_newLetDecls_107_);
lean_inc(v_newLocalDeclsForMVars_106_);
lean_inc(v_newLocalDecls_105_);
lean_inc(v_levelArgs_104_);
lean_inc(v_nextLevelIdx_103_);
lean_inc(v_levelParams_102_);
lean_inc(v_visitedExpr_101_);
lean_inc(v_visitedLevel_100_);
lean_dec(v___x_99_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_117_; 
lean_inc(v_a_95_);
v___x_115_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_87_, v___x_88_, v_visitedExpr_101_, v_e_79_, v_a_95_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_115_);
v___x_117_ = v___x_113_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_visitedLevel_100_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_122_, 2, v_levelParams_102_);
lean_ctor_set(v_reuseFailAlloc_122_, 3, v_nextLevelIdx_103_);
lean_ctor_set(v_reuseFailAlloc_122_, 4, v_levelArgs_104_);
lean_ctor_set(v_reuseFailAlloc_122_, 5, v_newLocalDecls_105_);
lean_ctor_set(v_reuseFailAlloc_122_, 6, v_newLocalDeclsForMVars_106_);
lean_ctor_set(v_reuseFailAlloc_122_, 7, v_newLetDecls_107_);
lean_ctor_set(v_reuseFailAlloc_122_, 8, v_nextExprIdx_108_);
lean_ctor_set(v_reuseFailAlloc_122_, 9, v_exprMVarArgs_109_);
lean_ctor_set(v_reuseFailAlloc_122_, 10, v_exprFVarArgs_110_);
lean_ctor_set(v_reuseFailAlloc_122_, 11, v_toProcess_111_);
v___x_117_ = v_reuseFailAlloc_122_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_120_; 
v___x_118_ = lean_st_ref_put(v___y_81_, v___x_117_);
if (v_isShared_98_ == 0)
{
v___x_120_ = v___x_97_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_95_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_79_);
return v___x_94_;
}
}
else
{
lean_object* v_val_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
lean_dec_ref(v_e_79_);
lean_dec_ref(v_f_78_);
v_val_125_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_92_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_val_125_);
lean_dec(v___x_92_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 0);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_val_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object* v_f_137_, lean_object* v_e_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
uint8_t v___y_2750__boxed_146_; lean_object* v_res_147_; 
v___y_2750__boxed_146_ = lean_unbox(v___y_139_);
v_res_147_ = l_Lean_Meta_Closure_visitExpr(v_f_137_, v_e_138_, v___y_2750__boxed_146_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object* v_u_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; lean_object* v_nextLevelIdx_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v_visitedLevel_159_; lean_object* v_visitedExpr_160_; lean_object* v_levelParams_161_; lean_object* v_nextLevelIdx_162_; lean_object* v_levelArgs_163_; lean_object* v_newLocalDecls_164_; lean_object* v_newLocalDeclsForMVars_165_; lean_object* v_newLetDecls_166_; lean_object* v_nextExprIdx_167_; lean_object* v_exprMVarArgs_168_; lean_object* v_exprFVarArgs_169_; lean_object* v_toProcess_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_184_; 
v___x_154_ = lean_st_ref_get(v___y_152_);
v_nextLevelIdx_155_ = lean_ctor_get(v___x_154_, 3);
lean_inc(v_nextLevelIdx_155_);
lean_dec(v___x_154_);
v___x_156_ = ((lean_object*)(l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1));
v___x_157_ = lean_name_append_index_after(v___x_156_, v_nextLevelIdx_155_);
v___x_158_ = lean_st_ref_take(v___y_152_);
v_visitedLevel_159_ = lean_ctor_get(v___x_158_, 0);
v_visitedExpr_160_ = lean_ctor_get(v___x_158_, 1);
v_levelParams_161_ = lean_ctor_get(v___x_158_, 2);
v_nextLevelIdx_162_ = lean_ctor_get(v___x_158_, 3);
v_levelArgs_163_ = lean_ctor_get(v___x_158_, 4);
v_newLocalDecls_164_ = lean_ctor_get(v___x_158_, 5);
v_newLocalDeclsForMVars_165_ = lean_ctor_get(v___x_158_, 6);
v_newLetDecls_166_ = lean_ctor_get(v___x_158_, 7);
v_nextExprIdx_167_ = lean_ctor_get(v___x_158_, 8);
v_exprMVarArgs_168_ = lean_ctor_get(v___x_158_, 9);
v_exprFVarArgs_169_ = lean_ctor_get(v___x_158_, 10);
v_toProcess_170_ = lean_ctor_get(v___x_158_, 11);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_184_ == 0)
{
v___x_172_ = v___x_158_;
v_isShared_173_ = v_isSharedCheck_184_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_toProcess_170_);
lean_inc(v_exprFVarArgs_169_);
lean_inc(v_exprMVarArgs_168_);
lean_inc(v_nextExprIdx_167_);
lean_inc(v_newLetDecls_166_);
lean_inc(v_newLocalDeclsForMVars_165_);
lean_inc(v_newLocalDecls_164_);
lean_inc(v_levelArgs_163_);
lean_inc(v_nextLevelIdx_162_);
lean_inc(v_levelParams_161_);
lean_inc(v_visitedExpr_160_);
lean_inc(v_visitedLevel_159_);
lean_dec(v___x_158_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_184_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
lean_inc(v___x_157_);
v___x_174_ = lean_array_push(v_levelParams_161_, v___x_157_);
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_add(v_nextLevelIdx_162_, v___x_175_);
lean_dec(v_nextLevelIdx_162_);
v___x_177_ = lean_array_push(v_levelArgs_163_, v_u_151_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 4, v___x_177_);
lean_ctor_set(v___x_172_, 3, v___x_176_);
lean_ctor_set(v___x_172_, 2, v___x_174_);
v___x_179_ = v___x_172_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_visitedLevel_159_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_visitedExpr_160_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_183_, 3, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_183_, 4, v___x_177_);
lean_ctor_set(v_reuseFailAlloc_183_, 5, v_newLocalDecls_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 6, v_newLocalDeclsForMVars_165_);
lean_ctor_set(v_reuseFailAlloc_183_, 7, v_newLetDecls_166_);
lean_ctor_set(v_reuseFailAlloc_183_, 8, v_nextExprIdx_167_);
lean_ctor_set(v_reuseFailAlloc_183_, 9, v_exprMVarArgs_168_);
lean_ctor_set(v_reuseFailAlloc_183_, 10, v_exprFVarArgs_169_);
lean_ctor_set(v_reuseFailAlloc_183_, 11, v_toProcess_170_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_st_ref_put(v___y_152_, v___x_179_);
v___x_181_ = l_Lean_mkLevelParam(v___x_157_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object* v_u_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_185_, v___y_186_);
lean_dec(v___y_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object* v_u_189_, uint8_t v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_189_, v___y_191_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object* v_u_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
uint8_t v___y_1599__boxed_206_; lean_object* v_res_207_; 
v___y_1599__boxed_206_ = lean_unbox(v___y_199_);
v_res_207_ = l_Lean_Meta_Closure_mkNewLevelParam(v_u_198_, v___y_1599__boxed_206_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object* v_msg_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lean_box(0);
v___x_210_ = lean_panic_fn_borrowed(v___x_209_, v_msg_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object* v_a_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_213_; 
v___x_213_ = lean_box(0);
return v___x_213_;
}
else
{
lean_object* v_key_214_; lean_object* v_value_215_; lean_object* v_tail_216_; uint8_t v___x_217_; 
v_key_214_ = lean_ctor_get(v_x_212_, 0);
v_value_215_ = lean_ctor_get(v_x_212_, 1);
v_tail_216_ = lean_ctor_get(v_x_212_, 2);
v___x_217_ = lean_level_eq(v_key_214_, v_a_211_);
if (v___x_217_ == 0)
{
v_x_212_ = v_tail_216_;
goto _start;
}
else
{
lean_object* v___x_219_; 
lean_inc(v_value_215_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v_value_215_);
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object* v_a_220_, lean_object* v_x_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_220_, v_x_221_);
lean_dec(v_x_221_);
lean_dec(v_a_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object* v_m_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_buckets_225_; lean_object* v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; uint64_t v___x_229_; uint64_t v_fold_230_; uint64_t v___x_231_; uint64_t v___x_232_; uint64_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_buckets_225_ = lean_ctor_get(v_m_223_, 1);
v___x_226_ = lean_array_get_size(v_buckets_225_);
v___x_227_ = l_Lean_Level_hash(v_a_224_);
v___x_228_ = 32ULL;
v___x_229_ = lean_uint64_shift_right(v___x_227_, v___x_228_);
v_fold_230_ = lean_uint64_xor(v___x_227_, v___x_229_);
v___x_231_ = 16ULL;
v___x_232_ = lean_uint64_shift_right(v_fold_230_, v___x_231_);
v___x_233_ = lean_uint64_xor(v_fold_230_, v___x_232_);
v___x_234_ = lean_uint64_to_usize(v___x_233_);
v___x_235_ = lean_usize_of_nat(v___x_226_);
v___x_236_ = ((size_t)1ULL);
v___x_237_ = lean_usize_sub(v___x_235_, v___x_236_);
v___x_238_ = lean_usize_land(v___x_234_, v___x_237_);
v___x_239_ = lean_array_uget_borrowed(v_buckets_225_, v___x_238_);
v___x_240_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_224_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object* v_m_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_241_, v_a_242_);
lean_dec(v_a_242_);
lean_dec_ref(v_m_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_245_) == 0)
{
return v_x_244_;
}
else
{
lean_object* v_key_246_; lean_object* v_value_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_271_; 
v_key_246_ = lean_ctor_get(v_x_245_, 0);
v_value_247_ = lean_ctor_get(v_x_245_, 1);
v_tail_248_ = lean_ctor_get(v_x_245_, 2);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_245_);
if (v_isSharedCheck_271_ == 0)
{
v___x_250_ = v_x_245_;
v_isShared_251_ = v_isSharedCheck_271_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_value_247_);
lean_inc(v_key_246_);
lean_dec(v_x_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_271_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; uint64_t v___x_255_; uint64_t v_fold_256_; uint64_t v___x_257_; uint64_t v___x_258_; uint64_t v___x_259_; size_t v___x_260_; size_t v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_252_ = lean_array_get_size(v_x_244_);
v___x_253_ = l_Lean_Level_hash(v_key_246_);
v___x_254_ = 32ULL;
v___x_255_ = lean_uint64_shift_right(v___x_253_, v___x_254_);
v_fold_256_ = lean_uint64_xor(v___x_253_, v___x_255_);
v___x_257_ = 16ULL;
v___x_258_ = lean_uint64_shift_right(v_fold_256_, v___x_257_);
v___x_259_ = lean_uint64_xor(v_fold_256_, v___x_258_);
v___x_260_ = lean_uint64_to_usize(v___x_259_);
v___x_261_ = lean_usize_of_nat(v___x_252_);
v___x_262_ = ((size_t)1ULL);
v___x_263_ = lean_usize_sub(v___x_261_, v___x_262_);
v___x_264_ = lean_usize_land(v___x_260_, v___x_263_);
v___x_265_ = lean_array_uget_borrowed(v_x_244_, v___x_264_);
lean_inc(v___x_265_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 2, v___x_265_);
v___x_267_ = v___x_250_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_key_246_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_value_247_);
lean_ctor_set(v_reuseFailAlloc_270_, 2, v___x_265_);
v___x_267_ = v_reuseFailAlloc_270_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_object* v___x_268_; 
v___x_268_ = lean_array_uset(v_x_244_, v___x_264_, v___x_267_);
v_x_244_ = v___x_268_;
v_x_245_ = v_tail_248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object* v_i_272_, lean_object* v_source_273_, lean_object* v_target_274_){
_start:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_array_get_size(v_source_273_);
v___x_276_ = lean_nat_dec_lt(v_i_272_, v___x_275_);
if (v___x_276_ == 0)
{
lean_dec_ref(v_source_273_);
lean_dec(v_i_272_);
return v_target_274_;
}
else
{
lean_object* v_es_277_; lean_object* v___x_278_; lean_object* v_source_279_; lean_object* v_target_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_es_277_ = lean_array_fget(v_source_273_, v_i_272_);
v___x_278_ = lean_box(0);
v_source_279_ = lean_array_fset(v_source_273_, v_i_272_, v___x_278_);
v_target_280_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_target_274_, v_es_277_);
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_add(v_i_272_, v___x_281_);
lean_dec(v_i_272_);
v_i_272_ = v___x_282_;
v_source_273_ = v_source_279_;
v_target_274_ = v_target_280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object* v_data_284_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_nbuckets_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_285_ = lean_array_get_size(v_data_284_);
v___x_286_ = lean_unsigned_to_nat(2u);
v_nbuckets_287_ = lean_nat_mul(v___x_285_, v___x_286_);
v___x_288_ = lean_unsigned_to_nat(0u);
v___x_289_ = lean_box(0);
v___x_290_ = lean_mk_array(v_nbuckets_287_, v___x_289_);
v___x_291_ = lean_array_propagate_mark(v_data_284_, v___x_290_);
v___x_292_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v___x_288_, v_data_284_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object* v_a_293_, lean_object* v_x_294_){
_start:
{
if (lean_obj_tag(v_x_294_) == 0)
{
uint8_t v___x_295_; 
v___x_295_ = 0;
return v___x_295_;
}
else
{
lean_object* v_key_296_; lean_object* v_tail_297_; uint8_t v___x_298_; 
v_key_296_ = lean_ctor_get(v_x_294_, 0);
v_tail_297_ = lean_ctor_get(v_x_294_, 2);
v___x_298_ = lean_level_eq(v_key_296_, v_a_293_);
if (v___x_298_ == 0)
{
v_x_294_ = v_tail_297_;
goto _start;
}
else
{
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object* v_a_300_, lean_object* v_x_301_){
_start:
{
uint8_t v_res_302_; lean_object* v_r_303_; 
v_res_302_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_300_, v_x_301_);
lean_dec(v_x_301_);
lean_dec(v_a_300_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object* v_a_304_, lean_object* v_b_305_, lean_object* v_x_306_){
_start:
{
if (lean_obj_tag(v_x_306_) == 0)
{
lean_dec(v_b_305_);
lean_dec(v_a_304_);
return v_x_306_;
}
else
{
lean_object* v_key_307_; lean_object* v_value_308_; lean_object* v_tail_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_321_; 
v_key_307_ = lean_ctor_get(v_x_306_, 0);
v_value_308_ = lean_ctor_get(v_x_306_, 1);
v_tail_309_ = lean_ctor_get(v_x_306_, 2);
v_isSharedCheck_321_ = !lean_is_exclusive(v_x_306_);
if (v_isSharedCheck_321_ == 0)
{
v___x_311_ = v_x_306_;
v_isShared_312_ = v_isSharedCheck_321_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_tail_309_);
lean_inc(v_value_308_);
lean_inc(v_key_307_);
lean_dec(v_x_306_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_321_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_level_eq(v_key_307_, v_a_304_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_314_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_304_, v_b_305_, v_tail_309_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 2, v___x_314_);
v___x_316_ = v___x_311_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_key_307_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_value_308_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
else
{
lean_object* v___x_319_; 
lean_dec(v_value_308_);
lean_dec(v_key_307_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 1, v_b_305_);
lean_ctor_set(v___x_311_, 0, v_a_304_);
v___x_319_ = v___x_311_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_304_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_b_305_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_tail_309_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object* v_m_322_, lean_object* v_a_323_, lean_object* v_b_324_){
_start:
{
lean_object* v_size_325_; lean_object* v_buckets_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_369_; 
v_size_325_ = lean_ctor_get(v_m_322_, 0);
v_buckets_326_ = lean_ctor_get(v_m_322_, 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_m_322_);
if (v_isSharedCheck_369_ == 0)
{
v___x_328_ = v_m_322_;
v_isShared_329_ = v_isSharedCheck_369_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_buckets_326_);
lean_inc(v_size_325_);
lean_dec(v_m_322_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_369_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v_fold_334_; uint64_t v___x_335_; uint64_t v___x_336_; uint64_t v___x_337_; size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; lean_object* v_bkt_343_; uint8_t v___x_344_; 
v___x_330_ = lean_array_get_size(v_buckets_326_);
v___x_331_ = l_Lean_Level_hash(v_a_323_);
v___x_332_ = 32ULL;
v___x_333_ = lean_uint64_shift_right(v___x_331_, v___x_332_);
v_fold_334_ = lean_uint64_xor(v___x_331_, v___x_333_);
v___x_335_ = 16ULL;
v___x_336_ = lean_uint64_shift_right(v_fold_334_, v___x_335_);
v___x_337_ = lean_uint64_xor(v_fold_334_, v___x_336_);
v___x_338_ = lean_uint64_to_usize(v___x_337_);
v___x_339_ = lean_usize_of_nat(v___x_330_);
v___x_340_ = ((size_t)1ULL);
v___x_341_ = lean_usize_sub(v___x_339_, v___x_340_);
v___x_342_ = lean_usize_land(v___x_338_, v___x_341_);
v_bkt_343_ = lean_array_uget_borrowed(v_buckets_326_, v___x_342_);
v___x_344_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_323_, v_bkt_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v_size_x27_346_; lean_object* v___x_347_; lean_object* v_buckets_x27_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_345_ = lean_unsigned_to_nat(1u);
v_size_x27_346_ = lean_nat_add(v_size_325_, v___x_345_);
lean_dec(v_size_325_);
lean_inc(v_bkt_343_);
v___x_347_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_347_, 0, v_a_323_);
lean_ctor_set(v___x_347_, 1, v_b_324_);
lean_ctor_set(v___x_347_, 2, v_bkt_343_);
v_buckets_x27_348_ = lean_array_uset(v_buckets_326_, v___x_342_, v___x_347_);
v___x_349_ = lean_unsigned_to_nat(4u);
v___x_350_ = lean_nat_mul(v_size_x27_346_, v___x_349_);
v___x_351_ = lean_unsigned_to_nat(3u);
v___x_352_ = lean_nat_div(v___x_350_, v___x_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_array_get_size(v_buckets_x27_348_);
v___x_354_ = lean_nat_dec_le(v___x_352_, v___x_353_);
lean_dec(v___x_352_);
if (v___x_354_ == 0)
{
lean_object* v_val_355_; lean_object* v___x_357_; 
v_val_355_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_buckets_x27_348_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v_val_355_);
lean_ctor_set(v___x_328_, 0, v_size_x27_346_);
v___x_357_ = v___x_328_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_size_x27_346_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_val_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
else
{
lean_object* v___x_360_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v_buckets_x27_348_);
lean_ctor_set(v___x_328_, 0, v_size_x27_346_);
v___x_360_ = v___x_328_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_size_x27_346_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_buckets_x27_348_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
else
{
lean_object* v___x_362_; lean_object* v_buckets_x27_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
lean_inc(v_bkt_343_);
v___x_362_ = lean_box(0);
v_buckets_x27_363_ = lean_array_uset(v_buckets_326_, v___x_342_, v___x_362_);
v___x_364_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_323_, v_b_324_, v_bkt_343_);
v___x_365_ = lean_array_uset(v_buckets_x27_363_, v___x_342_, v___x_364_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v___x_365_);
v___x_367_ = v___x_328_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_size_325_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object* v_x_370_, lean_object* v___y_371_){
_start:
{
switch(lean_obj_tag(v_x_370_))
{
case 0:
{
lean_object* v___x_373_; 
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v_x_370_);
return v___x_373_;
}
case 1:
{
lean_object* v_a_374_; lean_object* v_a_376_; uint8_t v___x_413_; 
v_a_374_ = lean_ctor_get(v_x_370_, 0);
v___x_413_ = l_Lean_Level_hasMVar(v_a_374_);
if (v___x_413_ == 0)
{
uint8_t v___x_414_; 
v___x_414_ = l_Lean_Level_hasParam(v_a_374_);
if (v___x_414_ == 0)
{
lean_inc(v_a_374_);
v_a_376_ = v_a_374_;
goto v___jp_375_;
}
else
{
goto v___jp_383_;
}
}
else
{
goto v___jp_383_;
}
v___jp_375_:
{
size_t v___x_377_; size_t v___x_378_; uint8_t v___x_379_; 
v___x_377_ = lean_ptr_addr(v_a_374_);
v___x_378_ = lean_ptr_addr(v_a_376_);
v___x_379_ = lean_usize_dec_eq(v___x_377_, v___x_378_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec_ref_known(v_x_370_, 1);
v___x_380_ = l_Lean_Level_succ___override(v_a_376_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
else
{
lean_object* v___x_382_; 
lean_dec(v_a_376_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v_x_370_);
return v___x_382_;
}
}
v___jp_383_:
{
lean_object* v___x_384_; lean_object* v_visitedLevel_385_; lean_object* v___x_386_; 
v___x_384_ = lean_st_ref_get(v___y_371_);
v_visitedLevel_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc_ref(v_visitedLevel_385_);
lean_dec(v___x_384_);
v___x_386_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_385_, v_a_374_);
lean_dec_ref(v_visitedLevel_385_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v___x_387_; 
lean_inc(v_a_374_);
v___x_387_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_374_, v___y_371_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_389_; lean_object* v_visitedLevel_390_; lean_object* v_visitedExpr_391_; lean_object* v_levelParams_392_; lean_object* v_nextLevelIdx_393_; lean_object* v_levelArgs_394_; lean_object* v_newLocalDecls_395_; lean_object* v_newLocalDeclsForMVars_396_; lean_object* v_newLetDecls_397_; lean_object* v_nextExprIdx_398_; lean_object* v_exprMVarArgs_399_; lean_object* v_exprFVarArgs_400_; lean_object* v_toProcess_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_410_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v___x_387_, 1);
v___x_389_ = lean_st_ref_take(v___y_371_);
v_visitedLevel_390_ = lean_ctor_get(v___x_389_, 0);
v_visitedExpr_391_ = lean_ctor_get(v___x_389_, 1);
v_levelParams_392_ = lean_ctor_get(v___x_389_, 2);
v_nextLevelIdx_393_ = lean_ctor_get(v___x_389_, 3);
v_levelArgs_394_ = lean_ctor_get(v___x_389_, 4);
v_newLocalDecls_395_ = lean_ctor_get(v___x_389_, 5);
v_newLocalDeclsForMVars_396_ = lean_ctor_get(v___x_389_, 6);
v_newLetDecls_397_ = lean_ctor_get(v___x_389_, 7);
v_nextExprIdx_398_ = lean_ctor_get(v___x_389_, 8);
v_exprMVarArgs_399_ = lean_ctor_get(v___x_389_, 9);
v_exprFVarArgs_400_ = lean_ctor_get(v___x_389_, 10);
v_toProcess_401_ = lean_ctor_get(v___x_389_, 11);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_410_ == 0)
{
v___x_403_ = v___x_389_;
v_isShared_404_ = v_isSharedCheck_410_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_toProcess_401_);
lean_inc(v_exprFVarArgs_400_);
lean_inc(v_exprMVarArgs_399_);
lean_inc(v_nextExprIdx_398_);
lean_inc(v_newLetDecls_397_);
lean_inc(v_newLocalDeclsForMVars_396_);
lean_inc(v_newLocalDecls_395_);
lean_inc(v_levelArgs_394_);
lean_inc(v_nextLevelIdx_393_);
lean_inc(v_levelParams_392_);
lean_inc(v_visitedExpr_391_);
lean_inc(v_visitedLevel_390_);
lean_dec(v___x_389_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_410_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_407_; 
lean_inc(v_a_388_);
lean_inc(v_a_374_);
v___x_405_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_390_, v_a_374_, v_a_388_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_405_);
v___x_407_ = v___x_403_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_visitedExpr_391_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_levelParams_392_);
lean_ctor_set(v_reuseFailAlloc_409_, 3, v_nextLevelIdx_393_);
lean_ctor_set(v_reuseFailAlloc_409_, 4, v_levelArgs_394_);
lean_ctor_set(v_reuseFailAlloc_409_, 5, v_newLocalDecls_395_);
lean_ctor_set(v_reuseFailAlloc_409_, 6, v_newLocalDeclsForMVars_396_);
lean_ctor_set(v_reuseFailAlloc_409_, 7, v_newLetDecls_397_);
lean_ctor_set(v_reuseFailAlloc_409_, 8, v_nextExprIdx_398_);
lean_ctor_set(v_reuseFailAlloc_409_, 9, v_exprMVarArgs_399_);
lean_ctor_set(v_reuseFailAlloc_409_, 10, v_exprFVarArgs_400_);
lean_ctor_set(v_reuseFailAlloc_409_, 11, v_toProcess_401_);
v___x_407_ = v_reuseFailAlloc_409_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_408_; 
v___x_408_ = lean_st_ref_put(v___y_371_, v___x_407_);
v_a_376_ = v_a_388_;
goto v___jp_375_;
}
}
}
else
{
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_411_; 
v_a_411_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_387_, 1);
v_a_376_ = v_a_411_;
goto v___jp_375_;
}
else
{
lean_dec_ref_known(v_x_370_, 1);
return v___x_387_;
}
}
}
else
{
lean_object* v_val_412_; 
v_val_412_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_val_412_);
lean_dec_ref_known(v___x_386_, 1);
v_a_376_ = v_val_412_;
goto v___jp_375_;
}
}
}
case 2:
{
lean_object* v_a_415_; lean_object* v_a_416_; lean_object* v___y_418_; lean_object* v_a_419_; lean_object* v___y_433_; lean_object* v_a_464_; uint8_t v___x_497_; 
v_a_415_ = lean_ctor_get(v_x_370_, 0);
v_a_416_ = lean_ctor_get(v_x_370_, 1);
v___x_497_ = l_Lean_Level_hasMVar(v_a_415_);
if (v___x_497_ == 0)
{
uint8_t v___x_498_; 
v___x_498_ = l_Lean_Level_hasParam(v_a_415_);
if (v___x_498_ == 0)
{
lean_inc(v_a_415_);
v_a_464_ = v_a_415_;
goto v___jp_463_;
}
else
{
goto v___jp_467_;
}
}
else
{
goto v___jp_467_;
}
v___jp_417_:
{
size_t v___x_420_; size_t v___x_421_; uint8_t v___x_422_; 
v___x_420_ = lean_ptr_addr(v_a_415_);
v___x_421_ = lean_ptr_addr(v___y_418_);
v___x_422_ = lean_usize_dec_eq(v___x_420_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_423_ = l_Lean_mkLevelMax_x27(v___y_418_, v_a_419_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
else
{
size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = lean_ptr_addr(v_a_416_);
v___x_426_ = lean_ptr_addr(v_a_419_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_428_ = l_Lean_mkLevelMax_x27(v___y_418_, v_a_419_);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
else
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = l_Lean_simpLevelMax_x27(v___y_418_, v_a_419_, v_x_370_);
lean_dec_ref_known(v_x_370_, 2);
lean_dec(v_a_419_);
lean_dec(v___y_418_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
}
v___jp_432_:
{
lean_object* v___x_434_; lean_object* v_visitedLevel_435_; lean_object* v___x_436_; 
v___x_434_ = lean_st_ref_get(v___y_371_);
v_visitedLevel_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc_ref(v_visitedLevel_435_);
lean_dec(v___x_434_);
v___x_436_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_435_, v_a_416_);
lean_dec_ref(v_visitedLevel_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v___x_437_; 
lean_inc(v_a_416_);
v___x_437_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_416_, v___y_371_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_439_; lean_object* v_visitedLevel_440_; lean_object* v_visitedExpr_441_; lean_object* v_levelParams_442_; lean_object* v_nextLevelIdx_443_; lean_object* v_levelArgs_444_; lean_object* v_newLocalDecls_445_; lean_object* v_newLocalDeclsForMVars_446_; lean_object* v_newLetDecls_447_; lean_object* v_nextExprIdx_448_; lean_object* v_exprMVarArgs_449_; lean_object* v_exprFVarArgs_450_; lean_object* v_toProcess_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_460_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_437_, 1);
v___x_439_ = lean_st_ref_take(v___y_371_);
v_visitedLevel_440_ = lean_ctor_get(v___x_439_, 0);
v_visitedExpr_441_ = lean_ctor_get(v___x_439_, 1);
v_levelParams_442_ = lean_ctor_get(v___x_439_, 2);
v_nextLevelIdx_443_ = lean_ctor_get(v___x_439_, 3);
v_levelArgs_444_ = lean_ctor_get(v___x_439_, 4);
v_newLocalDecls_445_ = lean_ctor_get(v___x_439_, 5);
v_newLocalDeclsForMVars_446_ = lean_ctor_get(v___x_439_, 6);
v_newLetDecls_447_ = lean_ctor_get(v___x_439_, 7);
v_nextExprIdx_448_ = lean_ctor_get(v___x_439_, 8);
v_exprMVarArgs_449_ = lean_ctor_get(v___x_439_, 9);
v_exprFVarArgs_450_ = lean_ctor_get(v___x_439_, 10);
v_toProcess_451_ = lean_ctor_get(v___x_439_, 11);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_460_ == 0)
{
v___x_453_ = v___x_439_;
v_isShared_454_ = v_isSharedCheck_460_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_toProcess_451_);
lean_inc(v_exprFVarArgs_450_);
lean_inc(v_exprMVarArgs_449_);
lean_inc(v_nextExprIdx_448_);
lean_inc(v_newLetDecls_447_);
lean_inc(v_newLocalDeclsForMVars_446_);
lean_inc(v_newLocalDecls_445_);
lean_inc(v_levelArgs_444_);
lean_inc(v_nextLevelIdx_443_);
lean_inc(v_levelParams_442_);
lean_inc(v_visitedExpr_441_);
lean_inc(v_visitedLevel_440_);
lean_dec(v___x_439_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_460_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; lean_object* v___x_457_; 
lean_inc(v_a_438_);
lean_inc(v_a_416_);
v___x_455_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_440_, v_a_416_, v_a_438_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v___x_455_);
v___x_457_ = v___x_453_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_visitedExpr_441_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_levelParams_442_);
lean_ctor_set(v_reuseFailAlloc_459_, 3, v_nextLevelIdx_443_);
lean_ctor_set(v_reuseFailAlloc_459_, 4, v_levelArgs_444_);
lean_ctor_set(v_reuseFailAlloc_459_, 5, v_newLocalDecls_445_);
lean_ctor_set(v_reuseFailAlloc_459_, 6, v_newLocalDeclsForMVars_446_);
lean_ctor_set(v_reuseFailAlloc_459_, 7, v_newLetDecls_447_);
lean_ctor_set(v_reuseFailAlloc_459_, 8, v_nextExprIdx_448_);
lean_ctor_set(v_reuseFailAlloc_459_, 9, v_exprMVarArgs_449_);
lean_ctor_set(v_reuseFailAlloc_459_, 10, v_exprFVarArgs_450_);
lean_ctor_set(v_reuseFailAlloc_459_, 11, v_toProcess_451_);
v___x_457_ = v_reuseFailAlloc_459_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; 
v___x_458_ = lean_st_ref_put(v___y_371_, v___x_457_);
v___y_418_ = v___y_433_;
v_a_419_ = v_a_438_;
goto v___jp_417_;
}
}
}
else
{
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_461_; 
v_a_461_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_437_, 1);
v___y_418_ = v___y_433_;
v_a_419_ = v_a_461_;
goto v___jp_417_;
}
else
{
lean_dec(v___y_433_);
lean_dec_ref_known(v_x_370_, 2);
return v___x_437_;
}
}
}
else
{
lean_object* v_val_462_; 
v_val_462_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v___x_436_, 1);
v___y_418_ = v___y_433_;
v_a_419_ = v_val_462_;
goto v___jp_417_;
}
}
v___jp_463_:
{
uint8_t v___x_465_; 
v___x_465_ = l_Lean_Level_hasMVar(v_a_416_);
if (v___x_465_ == 0)
{
uint8_t v___x_466_; 
v___x_466_ = l_Lean_Level_hasParam(v_a_416_);
if (v___x_466_ == 0)
{
lean_inc(v_a_416_);
v___y_418_ = v_a_464_;
v_a_419_ = v_a_416_;
goto v___jp_417_;
}
else
{
v___y_433_ = v_a_464_;
goto v___jp_432_;
}
}
else
{
v___y_433_ = v_a_464_;
goto v___jp_432_;
}
}
v___jp_467_:
{
lean_object* v___x_468_; lean_object* v_visitedLevel_469_; lean_object* v___x_470_; 
v___x_468_ = lean_st_ref_get(v___y_371_);
v_visitedLevel_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc_ref(v_visitedLevel_469_);
lean_dec(v___x_468_);
v___x_470_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_469_, v_a_415_);
lean_dec_ref(v_visitedLevel_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_471_; 
lean_inc(v_a_415_);
v___x_471_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_415_, v___y_371_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v_visitedLevel_474_; lean_object* v_visitedExpr_475_; lean_object* v_levelParams_476_; lean_object* v_nextLevelIdx_477_; lean_object* v_levelArgs_478_; lean_object* v_newLocalDecls_479_; lean_object* v_newLocalDeclsForMVars_480_; lean_object* v_newLetDecls_481_; lean_object* v_nextExprIdx_482_; lean_object* v_exprMVarArgs_483_; lean_object* v_exprFVarArgs_484_; lean_object* v_toProcess_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_494_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_st_ref_take(v___y_371_);
v_visitedLevel_474_ = lean_ctor_get(v___x_473_, 0);
v_visitedExpr_475_ = lean_ctor_get(v___x_473_, 1);
v_levelParams_476_ = lean_ctor_get(v___x_473_, 2);
v_nextLevelIdx_477_ = lean_ctor_get(v___x_473_, 3);
v_levelArgs_478_ = lean_ctor_get(v___x_473_, 4);
v_newLocalDecls_479_ = lean_ctor_get(v___x_473_, 5);
v_newLocalDeclsForMVars_480_ = lean_ctor_get(v___x_473_, 6);
v_newLetDecls_481_ = lean_ctor_get(v___x_473_, 7);
v_nextExprIdx_482_ = lean_ctor_get(v___x_473_, 8);
v_exprMVarArgs_483_ = lean_ctor_get(v___x_473_, 9);
v_exprFVarArgs_484_ = lean_ctor_get(v___x_473_, 10);
v_toProcess_485_ = lean_ctor_get(v___x_473_, 11);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_494_ == 0)
{
v___x_487_ = v___x_473_;
v_isShared_488_ = v_isSharedCheck_494_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_toProcess_485_);
lean_inc(v_exprFVarArgs_484_);
lean_inc(v_exprMVarArgs_483_);
lean_inc(v_nextExprIdx_482_);
lean_inc(v_newLetDecls_481_);
lean_inc(v_newLocalDeclsForMVars_480_);
lean_inc(v_newLocalDecls_479_);
lean_inc(v_levelArgs_478_);
lean_inc(v_nextLevelIdx_477_);
lean_inc(v_levelParams_476_);
lean_inc(v_visitedExpr_475_);
lean_inc(v_visitedLevel_474_);
lean_dec(v___x_473_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_494_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
lean_inc(v_a_472_);
lean_inc(v_a_415_);
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_474_, v_a_415_, v_a_472_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_visitedExpr_475_);
lean_ctor_set(v_reuseFailAlloc_493_, 2, v_levelParams_476_);
lean_ctor_set(v_reuseFailAlloc_493_, 3, v_nextLevelIdx_477_);
lean_ctor_set(v_reuseFailAlloc_493_, 4, v_levelArgs_478_);
lean_ctor_set(v_reuseFailAlloc_493_, 5, v_newLocalDecls_479_);
lean_ctor_set(v_reuseFailAlloc_493_, 6, v_newLocalDeclsForMVars_480_);
lean_ctor_set(v_reuseFailAlloc_493_, 7, v_newLetDecls_481_);
lean_ctor_set(v_reuseFailAlloc_493_, 8, v_nextExprIdx_482_);
lean_ctor_set(v_reuseFailAlloc_493_, 9, v_exprMVarArgs_483_);
lean_ctor_set(v_reuseFailAlloc_493_, 10, v_exprFVarArgs_484_);
lean_ctor_set(v_reuseFailAlloc_493_, 11, v_toProcess_485_);
v___x_491_ = v_reuseFailAlloc_493_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; 
v___x_492_ = lean_st_ref_put(v___y_371_, v___x_491_);
v_a_464_ = v_a_472_;
goto v___jp_463_;
}
}
}
else
{
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_495_; 
v_a_495_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_495_);
lean_dec_ref_known(v___x_471_, 1);
v_a_464_ = v_a_495_;
goto v___jp_463_;
}
else
{
lean_dec_ref_known(v_x_370_, 2);
return v___x_471_;
}
}
}
else
{
lean_object* v_val_496_; 
v_val_496_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_val_496_);
lean_dec_ref_known(v___x_470_, 1);
v_a_464_ = v_val_496_;
goto v___jp_463_;
}
}
}
case 3:
{
lean_object* v_a_499_; lean_object* v_a_500_; lean_object* v___y_502_; lean_object* v_a_503_; lean_object* v___y_517_; lean_object* v_a_548_; uint8_t v___x_581_; 
v_a_499_ = lean_ctor_get(v_x_370_, 0);
v_a_500_ = lean_ctor_get(v_x_370_, 1);
v___x_581_ = l_Lean_Level_hasMVar(v_a_499_);
if (v___x_581_ == 0)
{
uint8_t v___x_582_; 
v___x_582_ = l_Lean_Level_hasParam(v_a_499_);
if (v___x_582_ == 0)
{
lean_inc(v_a_499_);
v_a_548_ = v_a_499_;
goto v___jp_547_;
}
else
{
goto v___jp_551_;
}
}
else
{
goto v___jp_551_;
}
v___jp_501_:
{
size_t v___x_504_; size_t v___x_505_; uint8_t v___x_506_; 
v___x_504_ = lean_ptr_addr(v_a_499_);
v___x_505_ = lean_ptr_addr(v___y_502_);
v___x_506_ = lean_usize_dec_eq(v___x_504_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_507_ = l_Lean_mkLevelIMax_x27(v___y_502_, v_a_503_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
else
{
size_t v___x_509_; size_t v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_ptr_addr(v_a_500_);
v___x_510_ = lean_ptr_addr(v_a_503_);
v___x_511_ = lean_usize_dec_eq(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_512_ = l_Lean_mkLevelIMax_x27(v___y_502_, v_a_503_);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = l_Lean_simpLevelIMax_x27(v___y_502_, v_a_503_, v_x_370_);
lean_dec_ref_known(v_x_370_, 2);
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v_visitedLevel_519_; lean_object* v___x_520_; 
v___x_518_ = lean_st_ref_get(v___y_371_);
v_visitedLevel_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc_ref(v_visitedLevel_519_);
lean_dec(v___x_518_);
v___x_520_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_519_, v_a_500_);
lean_dec_ref(v_visitedLevel_519_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v___x_521_; 
lean_inc(v_a_500_);
v___x_521_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_500_, v___y_371_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_523_; lean_object* v_visitedLevel_524_; lean_object* v_visitedExpr_525_; lean_object* v_levelParams_526_; lean_object* v_nextLevelIdx_527_; lean_object* v_levelArgs_528_; lean_object* v_newLocalDecls_529_; lean_object* v_newLocalDeclsForMVars_530_; lean_object* v_newLetDecls_531_; lean_object* v_nextExprIdx_532_; lean_object* v_exprMVarArgs_533_; lean_object* v_exprFVarArgs_534_; lean_object* v_toProcess_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_544_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = lean_st_ref_take(v___y_371_);
v_visitedLevel_524_ = lean_ctor_get(v___x_523_, 0);
v_visitedExpr_525_ = lean_ctor_get(v___x_523_, 1);
v_levelParams_526_ = lean_ctor_get(v___x_523_, 2);
v_nextLevelIdx_527_ = lean_ctor_get(v___x_523_, 3);
v_levelArgs_528_ = lean_ctor_get(v___x_523_, 4);
v_newLocalDecls_529_ = lean_ctor_get(v___x_523_, 5);
v_newLocalDeclsForMVars_530_ = lean_ctor_get(v___x_523_, 6);
v_newLetDecls_531_ = lean_ctor_get(v___x_523_, 7);
v_nextExprIdx_532_ = lean_ctor_get(v___x_523_, 8);
v_exprMVarArgs_533_ = lean_ctor_get(v___x_523_, 9);
v_exprFVarArgs_534_ = lean_ctor_get(v___x_523_, 10);
v_toProcess_535_ = lean_ctor_get(v___x_523_, 11);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_544_ == 0)
{
v___x_537_ = v___x_523_;
v_isShared_538_ = v_isSharedCheck_544_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_toProcess_535_);
lean_inc(v_exprFVarArgs_534_);
lean_inc(v_exprMVarArgs_533_);
lean_inc(v_nextExprIdx_532_);
lean_inc(v_newLetDecls_531_);
lean_inc(v_newLocalDeclsForMVars_530_);
lean_inc(v_newLocalDecls_529_);
lean_inc(v_levelArgs_528_);
lean_inc(v_nextLevelIdx_527_);
lean_inc(v_levelParams_526_);
lean_inc(v_visitedExpr_525_);
lean_inc(v_visitedLevel_524_);
lean_dec(v___x_523_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_544_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
lean_inc(v_a_522_);
lean_inc(v_a_500_);
v___x_539_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_524_, v_a_500_, v_a_522_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v___x_539_);
v___x_541_ = v___x_537_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_visitedExpr_525_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v_levelParams_526_);
lean_ctor_set(v_reuseFailAlloc_543_, 3, v_nextLevelIdx_527_);
lean_ctor_set(v_reuseFailAlloc_543_, 4, v_levelArgs_528_);
lean_ctor_set(v_reuseFailAlloc_543_, 5, v_newLocalDecls_529_);
lean_ctor_set(v_reuseFailAlloc_543_, 6, v_newLocalDeclsForMVars_530_);
lean_ctor_set(v_reuseFailAlloc_543_, 7, v_newLetDecls_531_);
lean_ctor_set(v_reuseFailAlloc_543_, 8, v_nextExprIdx_532_);
lean_ctor_set(v_reuseFailAlloc_543_, 9, v_exprMVarArgs_533_);
lean_ctor_set(v_reuseFailAlloc_543_, 10, v_exprFVarArgs_534_);
lean_ctor_set(v_reuseFailAlloc_543_, 11, v_toProcess_535_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; 
v___x_542_ = lean_st_ref_put(v___y_371_, v___x_541_);
v___y_502_ = v___y_517_;
v_a_503_ = v_a_522_;
goto v___jp_501_;
}
}
}
else
{
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_521_, 1);
v___y_502_ = v___y_517_;
v_a_503_ = v_a_545_;
goto v___jp_501_;
}
else
{
lean_dec(v___y_517_);
lean_dec_ref_known(v_x_370_, 2);
return v___x_521_;
}
}
}
else
{
lean_object* v_val_546_; 
v_val_546_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_val_546_);
lean_dec_ref_known(v___x_520_, 1);
v___y_502_ = v___y_517_;
v_a_503_ = v_val_546_;
goto v___jp_501_;
}
}
v___jp_547_:
{
uint8_t v___x_549_; 
v___x_549_ = l_Lean_Level_hasMVar(v_a_500_);
if (v___x_549_ == 0)
{
uint8_t v___x_550_; 
v___x_550_ = l_Lean_Level_hasParam(v_a_500_);
if (v___x_550_ == 0)
{
lean_inc(v_a_500_);
v___y_502_ = v_a_548_;
v_a_503_ = v_a_500_;
goto v___jp_501_;
}
else
{
v___y_517_ = v_a_548_;
goto v___jp_516_;
}
}
else
{
v___y_517_ = v_a_548_;
goto v___jp_516_;
}
}
v___jp_551_:
{
lean_object* v___x_552_; lean_object* v_visitedLevel_553_; lean_object* v___x_554_; 
v___x_552_ = lean_st_ref_get(v___y_371_);
v_visitedLevel_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc_ref(v_visitedLevel_553_);
lean_dec(v___x_552_);
v___x_554_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_553_, v_a_499_);
lean_dec_ref(v_visitedLevel_553_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v___x_555_; 
lean_inc(v_a_499_);
v___x_555_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_499_, v___y_371_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; lean_object* v_visitedLevel_558_; lean_object* v_visitedExpr_559_; lean_object* v_levelParams_560_; lean_object* v_nextLevelIdx_561_; lean_object* v_levelArgs_562_; lean_object* v_newLocalDecls_563_; lean_object* v_newLocalDeclsForMVars_564_; lean_object* v_newLetDecls_565_; lean_object* v_nextExprIdx_566_; lean_object* v_exprMVarArgs_567_; lean_object* v_exprFVarArgs_568_; lean_object* v_toProcess_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_578_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_555_, 1);
v___x_557_ = lean_st_ref_take(v___y_371_);
v_visitedLevel_558_ = lean_ctor_get(v___x_557_, 0);
v_visitedExpr_559_ = lean_ctor_get(v___x_557_, 1);
v_levelParams_560_ = lean_ctor_get(v___x_557_, 2);
v_nextLevelIdx_561_ = lean_ctor_get(v___x_557_, 3);
v_levelArgs_562_ = lean_ctor_get(v___x_557_, 4);
v_newLocalDecls_563_ = lean_ctor_get(v___x_557_, 5);
v_newLocalDeclsForMVars_564_ = lean_ctor_get(v___x_557_, 6);
v_newLetDecls_565_ = lean_ctor_get(v___x_557_, 7);
v_nextExprIdx_566_ = lean_ctor_get(v___x_557_, 8);
v_exprMVarArgs_567_ = lean_ctor_get(v___x_557_, 9);
v_exprFVarArgs_568_ = lean_ctor_get(v___x_557_, 10);
v_toProcess_569_ = lean_ctor_get(v___x_557_, 11);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_578_ == 0)
{
v___x_571_ = v___x_557_;
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_toProcess_569_);
lean_inc(v_exprFVarArgs_568_);
lean_inc(v_exprMVarArgs_567_);
lean_inc(v_nextExprIdx_566_);
lean_inc(v_newLetDecls_565_);
lean_inc(v_newLocalDeclsForMVars_564_);
lean_inc(v_newLocalDecls_563_);
lean_inc(v_levelArgs_562_);
lean_inc(v_nextLevelIdx_561_);
lean_inc(v_levelParams_560_);
lean_inc(v_visitedExpr_559_);
lean_inc(v_visitedLevel_558_);
lean_dec(v___x_557_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_inc(v_a_556_);
lean_inc(v_a_499_);
v___x_573_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_558_, v_a_499_, v_a_556_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_573_);
v___x_575_ = v___x_571_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_visitedExpr_559_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_levelParams_560_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_nextLevelIdx_561_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_levelArgs_562_);
lean_ctor_set(v_reuseFailAlloc_577_, 5, v_newLocalDecls_563_);
lean_ctor_set(v_reuseFailAlloc_577_, 6, v_newLocalDeclsForMVars_564_);
lean_ctor_set(v_reuseFailAlloc_577_, 7, v_newLetDecls_565_);
lean_ctor_set(v_reuseFailAlloc_577_, 8, v_nextExprIdx_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 9, v_exprMVarArgs_567_);
lean_ctor_set(v_reuseFailAlloc_577_, 10, v_exprFVarArgs_568_);
lean_ctor_set(v_reuseFailAlloc_577_, 11, v_toProcess_569_);
v___x_575_ = v_reuseFailAlloc_577_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; 
v___x_576_ = lean_st_ref_put(v___y_371_, v___x_575_);
v_a_548_ = v_a_556_;
goto v___jp_547_;
}
}
}
else
{
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_579_; 
v_a_579_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_555_, 1);
v_a_548_ = v_a_579_;
goto v___jp_547_;
}
else
{
lean_dec_ref_known(v_x_370_, 2);
return v___x_555_;
}
}
}
else
{
lean_object* v_val_580_; 
v_val_580_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_val_580_);
lean_dec_ref_known(v___x_554_, 1);
v_a_548_ = v_val_580_;
goto v___jp_547_;
}
}
}
default: 
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_x_370_, v___y_371_);
return v___x_583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object* v_x_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_584_, v___y_585_);
lean_dec(v___y_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object* v_x_588_, uint8_t v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_588_, v___y_590_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object* v_x_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
uint8_t v___y_4992__boxed_605_; lean_object* v_res_606_; 
v___y_4992__boxed_605_ = lean_unbox(v___y_598_);
v_res_606_ = l_Lean_Meta_Closure_collectLevelAux(v_x_597_, v___y_4992__boxed_605_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object* v_00_u03b2_607_, lean_object* v_m_608_, lean_object* v_a_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_608_, v_a_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object* v_00_u03b2_611_, lean_object* v_m_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(v_00_u03b2_611_, v_m_612_, v_a_613_);
lean_dec(v_a_613_);
lean_dec_ref(v_m_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object* v_00_u03b2_615_, lean_object* v_m_616_, lean_object* v_a_617_, lean_object* v_b_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_m_616_, v_a_617_, v_b_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object* v_00_u03b2_620_, lean_object* v_a_621_, lean_object* v_x_622_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_621_, v_x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object* v_00_u03b2_624_, lean_object* v_a_625_, lean_object* v_x_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(v_00_u03b2_624_, v_a_625_, v_x_626_);
lean_dec(v_x_626_);
lean_dec(v_a_625_);
return v_res_627_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object* v_00_u03b2_628_, lean_object* v_a_629_, lean_object* v_x_630_){
_start:
{
uint8_t v___x_631_; 
v___x_631_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_629_, v_x_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object* v_00_u03b2_632_, lean_object* v_a_633_, lean_object* v_x_634_){
_start:
{
uint8_t v_res_635_; lean_object* v_r_636_; 
v_res_635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(v_00_u03b2_632_, v_a_633_, v_x_634_);
lean_dec(v_x_634_);
lean_dec(v_a_633_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object* v_00_u03b2_637_, lean_object* v_data_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_data_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object* v_00_u03b2_640_, lean_object* v_a_641_, lean_object* v_b_642_, lean_object* v_x_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_641_, v_b_642_, v_x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_645_, lean_object* v_i_646_, lean_object* v_source_647_, lean_object* v_target_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v_i_646_, v_source_647_, v_target_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_650_, lean_object* v_x_651_, lean_object* v_x_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_x_651_, v_x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object* v_u_654_, lean_object* v___y_655_){
_start:
{
uint8_t v___x_700_; 
v___x_700_ = l_Lean_Level_hasMVar(v_u_654_);
if (v___x_700_ == 0)
{
uint8_t v___x_701_; 
v___x_701_ = l_Lean_Level_hasParam(v_u_654_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v_u_654_);
return v___x_702_;
}
else
{
goto v___jp_657_;
}
}
else
{
goto v___jp_657_;
}
v___jp_657_:
{
lean_object* v___x_658_; lean_object* v_visitedLevel_659_; lean_object* v___x_660_; 
v___x_658_ = lean_st_ref_get(v___y_655_);
v_visitedLevel_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc_ref(v_visitedLevel_659_);
lean_dec(v___x_658_);
v___x_660_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_659_, v_u_654_);
lean_dec_ref(v_visitedLevel_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v___x_661_; 
lean_inc(v_u_654_);
v___x_661_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_u_654_, v___y_655_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_691_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_691_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_691_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_691_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_666_; lean_object* v_visitedLevel_667_; lean_object* v_visitedExpr_668_; lean_object* v_levelParams_669_; lean_object* v_nextLevelIdx_670_; lean_object* v_levelArgs_671_; lean_object* v_newLocalDecls_672_; lean_object* v_newLocalDeclsForMVars_673_; lean_object* v_newLetDecls_674_; lean_object* v_nextExprIdx_675_; lean_object* v_exprMVarArgs_676_; lean_object* v_exprFVarArgs_677_; lean_object* v_toProcess_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_690_; 
v___x_666_ = lean_st_ref_take(v___y_655_);
v_visitedLevel_667_ = lean_ctor_get(v___x_666_, 0);
v_visitedExpr_668_ = lean_ctor_get(v___x_666_, 1);
v_levelParams_669_ = lean_ctor_get(v___x_666_, 2);
v_nextLevelIdx_670_ = lean_ctor_get(v___x_666_, 3);
v_levelArgs_671_ = lean_ctor_get(v___x_666_, 4);
v_newLocalDecls_672_ = lean_ctor_get(v___x_666_, 5);
v_newLocalDeclsForMVars_673_ = lean_ctor_get(v___x_666_, 6);
v_newLetDecls_674_ = lean_ctor_get(v___x_666_, 7);
v_nextExprIdx_675_ = lean_ctor_get(v___x_666_, 8);
v_exprMVarArgs_676_ = lean_ctor_get(v___x_666_, 9);
v_exprFVarArgs_677_ = lean_ctor_get(v___x_666_, 10);
v_toProcess_678_ = lean_ctor_get(v___x_666_, 11);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_690_ == 0)
{
v___x_680_ = v___x_666_;
v_isShared_681_ = v_isSharedCheck_690_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_toProcess_678_);
lean_inc(v_exprFVarArgs_677_);
lean_inc(v_exprMVarArgs_676_);
lean_inc(v_nextExprIdx_675_);
lean_inc(v_newLetDecls_674_);
lean_inc(v_newLocalDeclsForMVars_673_);
lean_inc(v_newLocalDecls_672_);
lean_inc(v_levelArgs_671_);
lean_inc(v_nextLevelIdx_670_);
lean_inc(v_levelParams_669_);
lean_inc(v_visitedExpr_668_);
lean_inc(v_visitedLevel_667_);
lean_dec(v___x_666_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_690_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v___x_684_; 
lean_inc(v_a_662_);
v___x_682_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_667_, v_u_654_, v_a_662_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_682_);
v___x_684_ = v___x_680_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_682_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_visitedExpr_668_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v_levelParams_669_);
lean_ctor_set(v_reuseFailAlloc_689_, 3, v_nextLevelIdx_670_);
lean_ctor_set(v_reuseFailAlloc_689_, 4, v_levelArgs_671_);
lean_ctor_set(v_reuseFailAlloc_689_, 5, v_newLocalDecls_672_);
lean_ctor_set(v_reuseFailAlloc_689_, 6, v_newLocalDeclsForMVars_673_);
lean_ctor_set(v_reuseFailAlloc_689_, 7, v_newLetDecls_674_);
lean_ctor_set(v_reuseFailAlloc_689_, 8, v_nextExprIdx_675_);
lean_ctor_set(v_reuseFailAlloc_689_, 9, v_exprMVarArgs_676_);
lean_ctor_set(v_reuseFailAlloc_689_, 10, v_exprFVarArgs_677_);
lean_ctor_set(v_reuseFailAlloc_689_, 11, v_toProcess_678_);
v___x_684_ = v_reuseFailAlloc_689_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_685_ = lean_st_ref_put(v___y_655_, v___x_684_);
if (v_isShared_665_ == 0)
{
v___x_687_ = v___x_664_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_662_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
else
{
lean_dec(v_u_654_);
return v___x_661_;
}
}
else
{
lean_object* v_val_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec(v_u_654_);
v_val_692_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_660_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_val_692_);
lean_dec(v___x_660_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 0);
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_val_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object* v_u_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_703_, v___y_704_);
lean_dec(v___y_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object* v_u_707_, uint8_t v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_707_, v___y_709_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object* v_u_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
uint8_t v___y_146__boxed_724_; lean_object* v_res_725_; 
v___y_146__boxed_724_ = lean_unbox(v___y_717_);
v_res_725_ = l_Lean_Meta_Closure_collectLevel(v_u_716_, v___y_146__boxed_724_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v___y_718_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object* v_e_726_, lean_object* v___y_727_){
_start:
{
uint8_t v___x_729_; 
v___x_729_ = l_Lean_Expr_hasMVar(v_e_726_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v_e_726_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v_mctx_732_; lean_object* v___x_733_; lean_object* v_fst_734_; lean_object* v_snd_735_; lean_object* v___x_736_; lean_object* v_cache_737_; lean_object* v_zetaDeltaFVarIds_738_; lean_object* v_postponed_739_; lean_object* v_diag_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_749_; 
v___x_731_ = lean_st_ref_get(v___y_727_);
v_mctx_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_mctx_732_);
lean_dec(v___x_731_);
v___x_733_ = l_Lean_instantiateMVarsCore(v_mctx_732_, v_e_726_);
v_fst_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_fst_734_);
v_snd_735_ = lean_ctor_get(v___x_733_, 1);
lean_inc(v_snd_735_);
lean_dec_ref(v___x_733_);
v___x_736_ = lean_st_ref_take(v___y_727_);
v_cache_737_ = lean_ctor_get(v___x_736_, 1);
v_zetaDeltaFVarIds_738_ = lean_ctor_get(v___x_736_, 2);
v_postponed_739_ = lean_ctor_get(v___x_736_, 3);
v_diag_740_ = lean_ctor_get(v___x_736_, 4);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___x_736_, 0);
lean_dec(v_unused_750_);
v___x_742_ = v___x_736_;
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_diag_740_);
lean_inc(v_postponed_739_);
lean_inc(v_zetaDeltaFVarIds_738_);
lean_inc(v_cache_737_);
lean_dec(v___x_736_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v_snd_735_);
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_snd_735_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_cache_737_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_zetaDeltaFVarIds_738_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_postponed_739_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_diag_740_);
v___x_745_ = v_reuseFailAlloc_748_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_st_ref_put(v___y_727_, v___x_745_);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v_fst_734_);
return v___x_747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object* v_e_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_751_, v___y_752_);
lean_dec(v___y_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object* v_e_755_, uint8_t v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_755_, v___y_759_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object* v_e_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
uint8_t v___y_2762__boxed_772_; lean_object* v_res_773_; 
v___y_2762__boxed_772_ = lean_unbox(v___y_765_);
v_res_773_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(v_e_764_, v___y_2762__boxed_772_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object* v_e_774_, uint8_t v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_774_, v___y_778_);
if (v___y_775_ == 0)
{
lean_object* v_a_783_; uint8_t v___x_784_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc_n(v_a_783_, 2);
lean_dec_ref(v___x_782_);
v___x_784_ = 0;
v___x_785_ = l_Lean_Meta_check(v_a_783_, v___x_784_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v___x_785_, 0);
lean_dec(v_unused_793_);
v___x_787_ = v___x_785_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_dec(v___x_785_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v_a_783_);
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_783_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec(v_a_783_);
v_a_794_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_785_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_785_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
return v___x_782_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object* v_e_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
uint8_t v___y_2785__boxed_810_; lean_object* v_res_811_; 
v___y_2785__boxed_810_ = lean_unbox(v___y_803_);
v_res_811_ = l_Lean_Meta_Closure_preprocess(v_e_802_, v___y_2785__boxed_810_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object* v___y_815_){
_start:
{
lean_object* v___x_817_; lean_object* v_nextExprIdx_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_visitedLevel_822_; lean_object* v_visitedExpr_823_; lean_object* v_levelParams_824_; lean_object* v_nextLevelIdx_825_; lean_object* v_levelArgs_826_; lean_object* v_newLocalDecls_827_; lean_object* v_newLocalDeclsForMVars_828_; lean_object* v_newLetDecls_829_; lean_object* v_nextExprIdx_830_; lean_object* v_exprMVarArgs_831_; lean_object* v_exprFVarArgs_832_; lean_object* v_toProcess_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_844_; 
v___x_817_ = lean_st_ref_get(v___y_815_);
v_nextExprIdx_818_ = lean_ctor_get(v___x_817_, 8);
lean_inc(v_nextExprIdx_818_);
lean_dec(v___x_817_);
v___x_819_ = ((lean_object*)(l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1));
v___x_820_ = lean_name_append_index_after(v___x_819_, v_nextExprIdx_818_);
v___x_821_ = lean_st_ref_take(v___y_815_);
v_visitedLevel_822_ = lean_ctor_get(v___x_821_, 0);
v_visitedExpr_823_ = lean_ctor_get(v___x_821_, 1);
v_levelParams_824_ = lean_ctor_get(v___x_821_, 2);
v_nextLevelIdx_825_ = lean_ctor_get(v___x_821_, 3);
v_levelArgs_826_ = lean_ctor_get(v___x_821_, 4);
v_newLocalDecls_827_ = lean_ctor_get(v___x_821_, 5);
v_newLocalDeclsForMVars_828_ = lean_ctor_get(v___x_821_, 6);
v_newLetDecls_829_ = lean_ctor_get(v___x_821_, 7);
v_nextExprIdx_830_ = lean_ctor_get(v___x_821_, 8);
v_exprMVarArgs_831_ = lean_ctor_get(v___x_821_, 9);
v_exprFVarArgs_832_ = lean_ctor_get(v___x_821_, 10);
v_toProcess_833_ = lean_ctor_get(v___x_821_, 11);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_844_ == 0)
{
v___x_835_ = v___x_821_;
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_toProcess_833_);
lean_inc(v_exprFVarArgs_832_);
lean_inc(v_exprMVarArgs_831_);
lean_inc(v_nextExprIdx_830_);
lean_inc(v_newLetDecls_829_);
lean_inc(v_newLocalDeclsForMVars_828_);
lean_inc(v_newLocalDecls_827_);
lean_inc(v_levelArgs_826_);
lean_inc(v_nextLevelIdx_825_);
lean_inc(v_levelParams_824_);
lean_inc(v_visitedExpr_823_);
lean_inc(v_visitedLevel_822_);
lean_dec(v___x_821_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_837_ = lean_unsigned_to_nat(1u);
v___x_838_ = lean_nat_add(v_nextExprIdx_830_, v___x_837_);
lean_dec(v_nextExprIdx_830_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 8, v___x_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_visitedLevel_822_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v_visitedExpr_823_);
lean_ctor_set(v_reuseFailAlloc_843_, 2, v_levelParams_824_);
lean_ctor_set(v_reuseFailAlloc_843_, 3, v_nextLevelIdx_825_);
lean_ctor_set(v_reuseFailAlloc_843_, 4, v_levelArgs_826_);
lean_ctor_set(v_reuseFailAlloc_843_, 5, v_newLocalDecls_827_);
lean_ctor_set(v_reuseFailAlloc_843_, 6, v_newLocalDeclsForMVars_828_);
lean_ctor_set(v_reuseFailAlloc_843_, 7, v_newLetDecls_829_);
lean_ctor_set(v_reuseFailAlloc_843_, 8, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_843_, 9, v_exprMVarArgs_831_);
lean_ctor_set(v_reuseFailAlloc_843_, 10, v_exprFVarArgs_832_);
lean_ctor_set(v_reuseFailAlloc_843_, 11, v_toProcess_833_);
v___x_840_ = v_reuseFailAlloc_843_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_st_ref_put(v___y_815_, v___x_840_);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_820_);
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v___y_845_);
lean_dec(v___y_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(uint8_t v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v___y_849_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
uint8_t v___y_1530__boxed_863_; lean_object* v_res_864_; 
v___y_1530__boxed_863_ = lean_unbox(v___y_856_);
v_res_864_ = l_Lean_Meta_Closure_mkNextUserName(v___y_1530__boxed_863_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object* v_elem_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_868_; lean_object* v_visitedLevel_869_; lean_object* v_visitedExpr_870_; lean_object* v_levelParams_871_; lean_object* v_nextLevelIdx_872_; lean_object* v_levelArgs_873_; lean_object* v_newLocalDecls_874_; lean_object* v_newLocalDeclsForMVars_875_; lean_object* v_newLetDecls_876_; lean_object* v_nextExprIdx_877_; lean_object* v_exprMVarArgs_878_; lean_object* v_exprFVarArgs_879_; lean_object* v_toProcess_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_891_; 
v___x_868_ = lean_st_ref_take(v___y_866_);
v_visitedLevel_869_ = lean_ctor_get(v___x_868_, 0);
v_visitedExpr_870_ = lean_ctor_get(v___x_868_, 1);
v_levelParams_871_ = lean_ctor_get(v___x_868_, 2);
v_nextLevelIdx_872_ = lean_ctor_get(v___x_868_, 3);
v_levelArgs_873_ = lean_ctor_get(v___x_868_, 4);
v_newLocalDecls_874_ = lean_ctor_get(v___x_868_, 5);
v_newLocalDeclsForMVars_875_ = lean_ctor_get(v___x_868_, 6);
v_newLetDecls_876_ = lean_ctor_get(v___x_868_, 7);
v_nextExprIdx_877_ = lean_ctor_get(v___x_868_, 8);
v_exprMVarArgs_878_ = lean_ctor_get(v___x_868_, 9);
v_exprFVarArgs_879_ = lean_ctor_get(v___x_868_, 10);
v_toProcess_880_ = lean_ctor_get(v___x_868_, 11);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_891_ == 0)
{
v___x_882_ = v___x_868_;
v_isShared_883_ = v_isSharedCheck_891_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_toProcess_880_);
lean_inc(v_exprFVarArgs_879_);
lean_inc(v_exprMVarArgs_878_);
lean_inc(v_nextExprIdx_877_);
lean_inc(v_newLetDecls_876_);
lean_inc(v_newLocalDeclsForMVars_875_);
lean_inc(v_newLocalDecls_874_);
lean_inc(v_levelArgs_873_);
lean_inc(v_nextLevelIdx_872_);
lean_inc(v_levelParams_871_);
lean_inc(v_visitedExpr_870_);
lean_inc(v_visitedLevel_869_);
lean_dec(v___x_868_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_891_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_884_ = lean_box(0);
v___x_885_ = lean_array_push(v_toProcess_880_, v_elem_865_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 11, v___x_885_);
v___x_887_ = v___x_882_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_visitedLevel_869_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_visitedExpr_870_);
lean_ctor_set(v_reuseFailAlloc_890_, 2, v_levelParams_871_);
lean_ctor_set(v_reuseFailAlloc_890_, 3, v_nextLevelIdx_872_);
lean_ctor_set(v_reuseFailAlloc_890_, 4, v_levelArgs_873_);
lean_ctor_set(v_reuseFailAlloc_890_, 5, v_newLocalDecls_874_);
lean_ctor_set(v_reuseFailAlloc_890_, 6, v_newLocalDeclsForMVars_875_);
lean_ctor_set(v_reuseFailAlloc_890_, 7, v_newLetDecls_876_);
lean_ctor_set(v_reuseFailAlloc_890_, 8, v_nextExprIdx_877_);
lean_ctor_set(v_reuseFailAlloc_890_, 9, v_exprMVarArgs_878_);
lean_ctor_set(v_reuseFailAlloc_890_, 10, v_exprFVarArgs_879_);
lean_ctor_set(v_reuseFailAlloc_890_, 11, v___x_885_);
v___x_887_ = v_reuseFailAlloc_890_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = lean_st_ref_put(v___y_866_, v___x_887_);
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_884_);
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object* v_elem_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_892_, v___y_893_);
lean_dec(v___y_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object* v_elem_896_, uint8_t v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_896_, v___y_898_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object* v_elem_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
uint8_t v___y_432__boxed_913_; lean_object* v_res_914_; 
v___y_432__boxed_913_ = lean_unbox(v___y_906_);
v_res_914_ = l_Lean_Meta_Closure_pushToProcess(v_elem_905_, v___y_432__boxed_913_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object* v_mvarId_915_, lean_object* v___y_916_){
_start:
{
lean_object* v___x_918_; lean_object* v_mctx_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_918_ = lean_st_ref_get(v___y_916_);
v_mctx_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc_ref(v_mctx_919_);
lean_dec(v___x_918_);
v___x_920_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_919_, v_mvarId_915_);
lean_dec_ref(v_mctx_919_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object* v_mvarId_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec(v_mvarId_922_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object* v_mvarId_926_, uint8_t v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_926_, v___y_930_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object* v_mvarId_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
uint8_t v___y_20479__boxed_943_; lean_object* v_res_944_; 
v___y_20479__boxed_943_ = lean_unbox(v___y_936_);
v_res_944_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(v_mvarId_935_, v___y_20479__boxed_943_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec(v_mvarId_935_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object* v_k_945_, uint8_t v___y_946_, lean_object* v___y_947_, lean_object* v_b_948_, lean_object* v_c_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_box(v___y_946_);
lean_inc(v___y_953_);
lean_inc_ref(v___y_952_);
lean_inc(v___y_951_);
lean_inc_ref(v___y_950_);
lean_inc(v___y_947_);
v___x_956_ = lean_apply_9(v_k_945_, v_b_948_, v_c_949_, v___x_955_, v___y_947_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, lean_box(0));
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object* v_k_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v_b_960_, lean_object* v_c_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
uint8_t v___y_20502__boxed_967_; lean_object* v_res_968_; 
v___y_20502__boxed_967_ = lean_unbox(v___y_958_);
v_res_968_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(v_k_957_, v___y_20502__boxed_967_, v___y_959_, v_b_960_, v_c_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_959_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object* v_type_969_, lean_object* v_maxFVars_x3f_970_, lean_object* v_k_971_, uint8_t v_cleanupAnnotations_972_, uint8_t v_whnfType_973_, uint8_t v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v___x_981_; lean_object* v___f_982_; lean_object* v___x_983_; 
v___x_981_ = lean_box(v___y_974_);
lean_inc(v___y_975_);
v___f_982_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_982_, 0, v_k_971_);
lean_closure_set(v___f_982_, 1, v___x_981_);
lean_closure_set(v___f_982_, 2, v___y_975_);
v___x_983_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_969_, v_maxFVars_x3f_970_, v___f_982_, v_cleanupAnnotations_972_, v_whnfType_973_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
if (lean_obj_tag(v___x_983_) == 0)
{
return v___x_983_;
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_983_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object* v_type_992_, lean_object* v_maxFVars_x3f_993_, lean_object* v_k_994_, lean_object* v_cleanupAnnotations_995_, lean_object* v_whnfType_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1004_; uint8_t v_whnfType_boxed_1005_; uint8_t v___y_20527__boxed_1006_; lean_object* v_res_1007_; 
v_cleanupAnnotations_boxed_1004_ = lean_unbox(v_cleanupAnnotations_995_);
v_whnfType_boxed_1005_ = lean_unbox(v_whnfType_996_);
v___y_20527__boxed_1006_ = lean_unbox(v___y_997_);
v_res_1007_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_992_, v_maxFVars_x3f_993_, v_k_994_, v_cleanupAnnotations_boxed_1004_, v_whnfType_boxed_1005_, v___y_20527__boxed_1006_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object* v_00_u03b1_1008_, lean_object* v_type_1009_, lean_object* v_maxFVars_x3f_1010_, lean_object* v_k_1011_, uint8_t v_cleanupAnnotations_1012_, uint8_t v_whnfType_1013_, uint8_t v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1009_, v_maxFVars_x3f_1010_, v_k_1011_, v_cleanupAnnotations_1012_, v_whnfType_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object* v_00_u03b1_1022_, lean_object* v_type_1023_, lean_object* v_maxFVars_x3f_1024_, lean_object* v_k_1025_, lean_object* v_cleanupAnnotations_1026_, lean_object* v_whnfType_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1035_; uint8_t v_whnfType_boxed_1036_; uint8_t v___y_20571__boxed_1037_; lean_object* v_res_1038_; 
v_cleanupAnnotations_boxed_1035_ = lean_unbox(v_cleanupAnnotations_1026_);
v_whnfType_boxed_1036_ = lean_unbox(v_whnfType_1027_);
v___y_20571__boxed_1037_ = lean_unbox(v___y_1028_);
v_res_1038_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(v_00_u03b1_1022_, v_type_1023_, v_maxFVars_x3f_1024_, v_k_1025_, v_cleanupAnnotations_boxed_1035_, v_whnfType_boxed_1036_, v___y_20571__boxed_1037_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object* v_a_1039_, lean_object* v_x_1040_){
_start:
{
if (lean_obj_tag(v_x_1040_) == 0)
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_box(0);
return v___x_1041_;
}
else
{
lean_object* v_key_1042_; lean_object* v_value_1043_; lean_object* v_tail_1044_; uint8_t v___x_1045_; 
v_key_1042_ = lean_ctor_get(v_x_1040_, 0);
v_value_1043_ = lean_ctor_get(v_x_1040_, 1);
v_tail_1044_ = lean_ctor_get(v_x_1040_, 2);
v___x_1045_ = l_Lean_ExprStructEq_beq(v_key_1042_, v_a_1039_);
if (v___x_1045_ == 0)
{
v_x_1040_ = v_tail_1044_;
goto _start;
}
else
{
lean_object* v___x_1047_; 
lean_inc(v_value_1043_);
v___x_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1047_, 0, v_value_1043_);
return v___x_1047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_1048_, lean_object* v_x_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1048_, v_x_1049_);
lean_dec(v_x_1049_);
lean_dec_ref(v_a_1048_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object* v_m_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_buckets_1053_; lean_object* v___x_1054_; uint64_t v___x_1055_; uint64_t v___x_1056_; uint64_t v___x_1057_; uint64_t v_fold_1058_; uint64_t v___x_1059_; uint64_t v___x_1060_; uint64_t v___x_1061_; size_t v___x_1062_; size_t v___x_1063_; size_t v___x_1064_; size_t v___x_1065_; size_t v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_buckets_1053_ = lean_ctor_get(v_m_1051_, 1);
v___x_1054_ = lean_array_get_size(v_buckets_1053_);
v___x_1055_ = l_Lean_ExprStructEq_hash(v_a_1052_);
v___x_1056_ = 32ULL;
v___x_1057_ = lean_uint64_shift_right(v___x_1055_, v___x_1056_);
v_fold_1058_ = lean_uint64_xor(v___x_1055_, v___x_1057_);
v___x_1059_ = 16ULL;
v___x_1060_ = lean_uint64_shift_right(v_fold_1058_, v___x_1059_);
v___x_1061_ = lean_uint64_xor(v_fold_1058_, v___x_1060_);
v___x_1062_ = lean_uint64_to_usize(v___x_1061_);
v___x_1063_ = lean_usize_of_nat(v___x_1054_);
v___x_1064_ = ((size_t)1ULL);
v___x_1065_ = lean_usize_sub(v___x_1063_, v___x_1064_);
v___x_1066_ = lean_usize_land(v___x_1062_, v___x_1065_);
v___x_1067_ = lean_array_uget_borrowed(v_buckets_1053_, v___x_1066_);
v___x_1068_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1052_, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object* v_m_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1069_, v_a_1070_);
lean_dec_ref(v_a_1070_);
lean_dec_ref(v_m_1069_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object* v_x_1072_, lean_object* v_x_1073_, lean_object* v___y_1074_){
_start:
{
if (lean_obj_tag(v_x_1072_) == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = l_List_reverse___redArg(v_x_1073_);
v___x_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
return v___x_1077_;
}
else
{
lean_object* v_head_1078_; lean_object* v_tail_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1097_; 
v_head_1078_ = lean_ctor_get(v_x_1072_, 0);
v_tail_1079_ = lean_ctor_get(v_x_1072_, 1);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_x_1072_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1081_ = v_x_1072_;
v_isShared_1082_ = v_isSharedCheck_1097_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_tail_1079_);
lean_inc(v_head_1078_);
lean_dec(v_x_1072_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1097_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_Meta_Closure_collectLevel___redArg(v_head_1078_, v___y_1074_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_x_1073_);
lean_ctor_set(v___x_1081_, 0, v_a_1084_);
v___x_1086_ = v___x_1081_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1084_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_x_1073_);
v___x_1086_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
v_x_1072_ = v_tail_1079_;
v_x_1073_ = v___x_1086_;
goto _start;
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_del_object(v___x_1081_);
lean_dec(v_tail_1079_);
lean_dec(v_x_1073_);
v_a_1089_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1083_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1083_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object* v_x_1098_, lean_object* v_x_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1098_, v_x_1099_, v___y_1100_);
lean_dec(v___y_1100_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1105_; lean_object* v_ngen_1106_; lean_object* v_namePrefix_1107_; lean_object* v_idx_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1137_; 
v___x_1105_ = lean_st_ref_get(v___y_1103_);
v_ngen_1106_ = lean_ctor_get(v___x_1105_, 2);
lean_inc_ref(v_ngen_1106_);
lean_dec(v___x_1105_);
v_namePrefix_1107_ = lean_ctor_get(v_ngen_1106_, 0);
v_idx_1108_ = lean_ctor_get(v_ngen_1106_, 1);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_ngen_1106_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1110_ = v_ngen_1106_;
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_idx_1108_);
lean_inc(v_namePrefix_1107_);
lean_dec(v_ngen_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v_r_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
lean_inc(v_idx_1108_);
lean_inc(v_namePrefix_1107_);
v_r_1112_ = l_Lean_Name_num___override(v_namePrefix_1107_, v_idx_1108_);
v___x_1113_ = lean_unsigned_to_nat(1u);
v___x_1114_ = lean_nat_add(v_idx_1108_, v___x_1113_);
lean_dec(v_idx_1108_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 1, v___x_1114_);
v___x_1116_ = v___x_1110_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_namePrefix_1107_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; lean_object* v_env_1118_; lean_object* v_nextMacroScope_1119_; lean_object* v_auxDeclNGen_1120_; lean_object* v_traceState_1121_; lean_object* v_cache_1122_; lean_object* v_messages_1123_; lean_object* v_infoState_1124_; lean_object* v_snapshotTasks_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1134_; 
v___x_1117_ = lean_st_ref_take(v___y_1103_);
v_env_1118_ = lean_ctor_get(v___x_1117_, 0);
v_nextMacroScope_1119_ = lean_ctor_get(v___x_1117_, 1);
v_auxDeclNGen_1120_ = lean_ctor_get(v___x_1117_, 3);
v_traceState_1121_ = lean_ctor_get(v___x_1117_, 4);
v_cache_1122_ = lean_ctor_get(v___x_1117_, 5);
v_messages_1123_ = lean_ctor_get(v___x_1117_, 6);
v_infoState_1124_ = lean_ctor_get(v___x_1117_, 7);
v_snapshotTasks_1125_ = lean_ctor_get(v___x_1117_, 8);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1134_ == 0)
{
lean_object* v_unused_1135_; 
v_unused_1135_ = lean_ctor_get(v___x_1117_, 2);
lean_dec(v_unused_1135_);
v___x_1127_ = v___x_1117_;
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_snapshotTasks_1125_);
lean_inc(v_infoState_1124_);
lean_inc(v_messages_1123_);
lean_inc(v_cache_1122_);
lean_inc(v_traceState_1121_);
lean_inc(v_auxDeclNGen_1120_);
lean_inc(v_nextMacroScope_1119_);
lean_inc(v_env_1118_);
lean_dec(v___x_1117_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 2, v___x_1116_);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_env_1118_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_nextMacroScope_1119_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1133_, 3, v_auxDeclNGen_1120_);
lean_ctor_set(v_reuseFailAlloc_1133_, 4, v_traceState_1121_);
lean_ctor_set(v_reuseFailAlloc_1133_, 5, v_cache_1122_);
lean_ctor_set(v_reuseFailAlloc_1133_, 6, v_messages_1123_);
lean_ctor_set(v_reuseFailAlloc_1133_, 7, v_infoState_1124_);
lean_ctor_set(v_reuseFailAlloc_1133_, 8, v_snapshotTasks_1125_);
v___x_1130_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_st_ref_put(v___y_1103_, v___x_1130_);
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_r_1112_);
return v___x_1132_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1138_);
lean_dec(v___y_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(uint8_t v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v___x_1148_; lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v___x_1148_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1146_);
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1148_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1148_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v___y_20746__boxed_1164_; lean_object* v_res_1165_; 
v___y_20746__boxed_1164_ = lean_unbox(v___y_1157_);
v_res_1165_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_20746__boxed_1164_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object* v_e_1166_, lean_object* v_args_1167_, lean_object* v_x_1168_, uint8_t v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; uint8_t v___x_1177_; uint8_t v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1176_ = l_Lean_mkAppN(v_e_1166_, v_args_1167_);
v___x_1177_ = 0;
v___x_1178_ = 1;
v___x_1179_ = 1;
v___x_1180_ = l_Lean_Meta_mkLambdaFVars(v_args_1167_, v___x_1176_, v___x_1177_, v___x_1178_, v___x_1177_, v___x_1178_, v___x_1179_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object* v_e_1181_, lean_object* v_args_1182_, lean_object* v_x_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v___y_20787__boxed_1191_; lean_object* v_res_1192_; 
v___y_20787__boxed_1191_ = lean_unbox(v___y_1184_);
v_res_1192_ = l_Lean_Meta_Closure_collectExprAux___lam__1(v_e_1181_, v_args_1182_, v_x_1183_, v___y_20787__boxed_1191_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v_x_1183_);
lean_dec_ref(v_args_1182_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object* v_x_1193_, lean_object* v_x_1194_){
_start:
{
if (lean_obj_tag(v_x_1194_) == 0)
{
return v_x_1193_;
}
else
{
lean_object* v_key_1195_; lean_object* v_value_1196_; lean_object* v_tail_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1220_; 
v_key_1195_ = lean_ctor_get(v_x_1194_, 0);
v_value_1196_ = lean_ctor_get(v_x_1194_, 1);
v_tail_1197_ = lean_ctor_get(v_x_1194_, 2);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_x_1194_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1199_ = v_x_1194_;
v_isShared_1200_ = v_isSharedCheck_1220_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_tail_1197_);
lean_inc(v_value_1196_);
lean_inc(v_key_1195_);
lean_dec(v_x_1194_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1220_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; uint64_t v___x_1202_; uint64_t v___x_1203_; uint64_t v___x_1204_; uint64_t v_fold_1205_; uint64_t v___x_1206_; uint64_t v___x_1207_; uint64_t v___x_1208_; size_t v___x_1209_; size_t v___x_1210_; size_t v___x_1211_; size_t v___x_1212_; size_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1201_ = lean_array_get_size(v_x_1193_);
v___x_1202_ = l_Lean_ExprStructEq_hash(v_key_1195_);
v___x_1203_ = 32ULL;
v___x_1204_ = lean_uint64_shift_right(v___x_1202_, v___x_1203_);
v_fold_1205_ = lean_uint64_xor(v___x_1202_, v___x_1204_);
v___x_1206_ = 16ULL;
v___x_1207_ = lean_uint64_shift_right(v_fold_1205_, v___x_1206_);
v___x_1208_ = lean_uint64_xor(v_fold_1205_, v___x_1207_);
v___x_1209_ = lean_uint64_to_usize(v___x_1208_);
v___x_1210_ = lean_usize_of_nat(v___x_1201_);
v___x_1211_ = ((size_t)1ULL);
v___x_1212_ = lean_usize_sub(v___x_1210_, v___x_1211_);
v___x_1213_ = lean_usize_land(v___x_1209_, v___x_1212_);
v___x_1214_ = lean_array_uget_borrowed(v_x_1193_, v___x_1213_);
lean_inc(v___x_1214_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 2, v___x_1214_);
v___x_1216_ = v___x_1199_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_key_1195_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_value_1196_);
lean_ctor_set(v_reuseFailAlloc_1219_, 2, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_array_uset(v_x_1193_, v___x_1213_, v___x_1216_);
v_x_1193_ = v___x_1217_;
v_x_1194_ = v_tail_1197_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object* v_i_1221_, lean_object* v_source_1222_, lean_object* v_target_1223_){
_start:
{
lean_object* v___x_1224_; uint8_t v___x_1225_; 
v___x_1224_ = lean_array_get_size(v_source_1222_);
v___x_1225_ = lean_nat_dec_lt(v_i_1221_, v___x_1224_);
if (v___x_1225_ == 0)
{
lean_dec_ref(v_source_1222_);
lean_dec(v_i_1221_);
return v_target_1223_;
}
else
{
lean_object* v_es_1226_; lean_object* v___x_1227_; lean_object* v_source_1228_; lean_object* v_target_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v_es_1226_ = lean_array_fget(v_source_1222_, v_i_1221_);
v___x_1227_ = lean_box(0);
v_source_1228_ = lean_array_fset(v_source_1222_, v_i_1221_, v___x_1227_);
v_target_1229_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_target_1223_, v_es_1226_);
v___x_1230_ = lean_unsigned_to_nat(1u);
v___x_1231_ = lean_nat_add(v_i_1221_, v___x_1230_);
lean_dec(v_i_1221_);
v_i_1221_ = v___x_1231_;
v_source_1222_ = v_source_1228_;
v_target_1223_ = v_target_1229_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object* v_data_1233_){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v_nbuckets_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1234_ = lean_array_get_size(v_data_1233_);
v___x_1235_ = lean_unsigned_to_nat(2u);
v_nbuckets_1236_ = lean_nat_mul(v___x_1234_, v___x_1235_);
v___x_1237_ = lean_unsigned_to_nat(0u);
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_mk_array(v_nbuckets_1236_, v___x_1238_);
v___x_1240_ = lean_array_propagate_mark(v_data_1233_, v___x_1239_);
v___x_1241_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v___x_1237_, v_data_1233_, v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object* v_a_1242_, lean_object* v_b_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_dec(v_b_1243_);
lean_dec_ref(v_a_1242_);
return v_x_1244_;
}
else
{
lean_object* v_key_1245_; lean_object* v_value_1246_; lean_object* v_tail_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1259_; 
v_key_1245_ = lean_ctor_get(v_x_1244_, 0);
v_value_1246_ = lean_ctor_get(v_x_1244_, 1);
v_tail_1247_ = lean_ctor_get(v_x_1244_, 2);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1249_ = v_x_1244_;
v_isShared_1250_ = v_isSharedCheck_1259_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_tail_1247_);
lean_inc(v_value_1246_);
lean_inc(v_key_1245_);
lean_dec(v_x_1244_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1259_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
uint8_t v___x_1251_; 
v___x_1251_ = l_Lean_ExprStructEq_beq(v_key_1245_, v_a_1242_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1252_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1242_, v_b_1243_, v_tail_1247_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 2, v___x_1252_);
v___x_1254_ = v___x_1249_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_key_1245_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_value_1246_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
else
{
lean_object* v___x_1257_; 
lean_dec(v_value_1246_);
lean_dec(v_key_1245_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 1, v_b_1243_);
lean_ctor_set(v___x_1249_, 0, v_a_1242_);
v___x_1257_ = v___x_1249_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1242_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_b_1243_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v_tail_1247_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object* v_a_1260_, lean_object* v_x_1261_){
_start:
{
if (lean_obj_tag(v_x_1261_) == 0)
{
uint8_t v___x_1262_; 
v___x_1262_ = 0;
return v___x_1262_;
}
else
{
lean_object* v_key_1263_; lean_object* v_tail_1264_; uint8_t v___x_1265_; 
v_key_1263_ = lean_ctor_get(v_x_1261_, 0);
v_tail_1264_ = lean_ctor_get(v_x_1261_, 2);
v___x_1265_ = l_Lean_ExprStructEq_beq(v_key_1263_, v_a_1260_);
if (v___x_1265_ == 0)
{
v_x_1261_ = v_tail_1264_;
goto _start;
}
else
{
return v___x_1265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object* v_a_1267_, lean_object* v_x_1268_){
_start:
{
uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_res_1269_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1267_, v_x_1268_);
lean_dec(v_x_1268_);
lean_dec_ref(v_a_1267_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object* v_m_1271_, lean_object* v_a_1272_, lean_object* v_b_1273_){
_start:
{
lean_object* v_size_1274_; lean_object* v_buckets_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1318_; 
v_size_1274_ = lean_ctor_get(v_m_1271_, 0);
v_buckets_1275_ = lean_ctor_get(v_m_1271_, 1);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_m_1271_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1277_ = v_m_1271_;
v_isShared_1278_ = v_isSharedCheck_1318_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_buckets_1275_);
lean_inc(v_size_1274_);
lean_dec(v_m_1271_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1318_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; uint64_t v___x_1280_; uint64_t v___x_1281_; uint64_t v___x_1282_; uint64_t v_fold_1283_; uint64_t v___x_1284_; uint64_t v___x_1285_; uint64_t v___x_1286_; size_t v___x_1287_; size_t v___x_1288_; size_t v___x_1289_; size_t v___x_1290_; size_t v___x_1291_; lean_object* v_bkt_1292_; uint8_t v___x_1293_; 
v___x_1279_ = lean_array_get_size(v_buckets_1275_);
v___x_1280_ = l_Lean_ExprStructEq_hash(v_a_1272_);
v___x_1281_ = 32ULL;
v___x_1282_ = lean_uint64_shift_right(v___x_1280_, v___x_1281_);
v_fold_1283_ = lean_uint64_xor(v___x_1280_, v___x_1282_);
v___x_1284_ = 16ULL;
v___x_1285_ = lean_uint64_shift_right(v_fold_1283_, v___x_1284_);
v___x_1286_ = lean_uint64_xor(v_fold_1283_, v___x_1285_);
v___x_1287_ = lean_uint64_to_usize(v___x_1286_);
v___x_1288_ = lean_usize_of_nat(v___x_1279_);
v___x_1289_ = ((size_t)1ULL);
v___x_1290_ = lean_usize_sub(v___x_1288_, v___x_1289_);
v___x_1291_ = lean_usize_land(v___x_1287_, v___x_1290_);
v_bkt_1292_ = lean_array_uget_borrowed(v_buckets_1275_, v___x_1291_);
v___x_1293_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1272_, v_bkt_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v_size_x27_1295_; lean_object* v___x_1296_; lean_object* v_buckets_x27_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
v___x_1294_ = lean_unsigned_to_nat(1u);
v_size_x27_1295_ = lean_nat_add(v_size_1274_, v___x_1294_);
lean_dec(v_size_1274_);
lean_inc(v_bkt_1292_);
v___x_1296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1296_, 0, v_a_1272_);
lean_ctor_set(v___x_1296_, 1, v_b_1273_);
lean_ctor_set(v___x_1296_, 2, v_bkt_1292_);
v_buckets_x27_1297_ = lean_array_uset(v_buckets_1275_, v___x_1291_, v___x_1296_);
v___x_1298_ = lean_unsigned_to_nat(4u);
v___x_1299_ = lean_nat_mul(v_size_x27_1295_, v___x_1298_);
v___x_1300_ = lean_unsigned_to_nat(3u);
v___x_1301_ = lean_nat_div(v___x_1299_, v___x_1300_);
lean_dec(v___x_1299_);
v___x_1302_ = lean_array_get_size(v_buckets_x27_1297_);
v___x_1303_ = lean_nat_dec_le(v___x_1301_, v___x_1302_);
lean_dec(v___x_1301_);
if (v___x_1303_ == 0)
{
lean_object* v_val_1304_; lean_object* v___x_1306_; 
v_val_1304_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_buckets_x27_1297_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v_val_1304_);
lean_ctor_set(v___x_1277_, 0, v_size_x27_1295_);
v___x_1306_ = v___x_1277_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_size_x27_1295_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_val_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
else
{
lean_object* v___x_1309_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v_buckets_x27_1297_);
lean_ctor_set(v___x_1277_, 0, v_size_x27_1295_);
v___x_1309_ = v___x_1277_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_size_x27_1295_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v_buckets_x27_1297_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
else
{
lean_object* v___x_1311_; lean_object* v_buckets_x27_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
lean_inc(v_bkt_1292_);
v___x_1311_ = lean_box(0);
v_buckets_x27_1312_ = lean_array_uset(v_buckets_1275_, v___x_1291_, v___x_1311_);
v___x_1313_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1272_, v_b_1273_, v_bkt_1292_);
v___x_1314_ = lean_array_uset(v_buckets_x27_1312_, v___x_1291_, v___x_1313_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v___x_1314_);
v___x_1316_ = v___x_1277_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_size_1274_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object* v_e_1319_, uint8_t v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
switch(lean_obj_tag(v_e_1319_))
{
case 11:
{
lean_object* v_typeName_1327_; lean_object* v_idx_1328_; lean_object* v_struct_1329_; lean_object* v___x_1330_; 
v_typeName_1327_ = lean_ctor_get(v_e_1319_, 0);
v_idx_1328_ = lean_ctor_get(v_e_1319_, 1);
v_struct_1329_ = lean_ctor_get(v_e_1319_, 2);
lean_inc_ref(v_struct_1329_);
v___x_1330_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_struct_1329_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1345_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1333_ = v___x_1330_;
v_isShared_1334_ = v_isSharedCheck_1345_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1345_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
size_t v___x_1335_; size_t v___x_1336_; uint8_t v___x_1337_; 
v___x_1335_ = lean_ptr_addr(v_struct_1329_);
v___x_1336_ = lean_ptr_addr(v_a_1331_);
v___x_1337_ = lean_usize_dec_eq(v___x_1335_, v___x_1336_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1340_; 
lean_inc(v_idx_1328_);
lean_inc(v_typeName_1327_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1338_ = l_Lean_Expr_proj___override(v_typeName_1327_, v_idx_1328_, v_a_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1338_);
v___x_1340_ = v___x_1333_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
else
{
lean_object* v___x_1343_; 
lean_dec(v_a_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v_e_1319_);
v___x_1343_ = v___x_1333_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_e_1319_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1330_;
}
}
case 7:
{
lean_object* v_binderName_1346_; lean_object* v_binderType_1347_; lean_object* v_body_1348_; uint8_t v_binderInfo_1349_; lean_object* v___x_1350_; 
v_binderName_1346_ = lean_ctor_get(v_e_1319_, 0);
v_binderType_1347_ = lean_ctor_get(v_e_1319_, 1);
v_body_1348_ = lean_ctor_get(v_e_1319_, 2);
v_binderInfo_1349_ = lean_ctor_get_uint8(v_e_1319_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1347_);
v___x_1350_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1347_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
lean_inc_ref(v_body_1348_);
v___x_1352_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1348_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1379_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1379_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1379_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
size_t v___x_1357_; size_t v___x_1358_; uint8_t v___x_1359_; 
v___x_1357_ = lean_ptr_addr(v_binderType_1347_);
v___x_1358_ = lean_ptr_addr(v_a_1351_);
v___x_1359_ = lean_usize_dec_eq(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1362_; 
lean_inc(v_binderName_1346_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1360_ = l_Lean_Expr_forallE___override(v_binderName_1346_, v_a_1351_, v_a_1353_, v_binderInfo_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1360_);
v___x_1362_ = v___x_1355_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
else
{
size_t v___x_1364_; size_t v___x_1365_; uint8_t v___x_1366_; 
v___x_1364_ = lean_ptr_addr(v_body_1348_);
v___x_1365_ = lean_ptr_addr(v_a_1353_);
v___x_1366_ = lean_usize_dec_eq(v___x_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1369_; 
lean_inc(v_binderName_1346_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1367_ = l_Lean_Expr_forallE___override(v_binderName_1346_, v_a_1351_, v_a_1353_, v_binderInfo_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1367_);
v___x_1369_ = v___x_1355_;
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
else
{
uint8_t v___x_1371_; 
v___x_1371_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1349_, v_binderInfo_1349_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
lean_inc(v_binderName_1346_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1372_ = l_Lean_Expr_forallE___override(v_binderName_1346_, v_a_1351_, v_a_1353_, v_binderInfo_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1372_);
v___x_1374_ = v___x_1355_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
else
{
lean_object* v___x_1377_; 
lean_dec(v_a_1353_);
lean_dec(v_a_1351_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v_e_1319_);
v___x_1377_ = v___x_1355_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_e_1319_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1351_);
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1352_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1350_;
}
}
case 6:
{
lean_object* v_binderName_1380_; lean_object* v_binderType_1381_; lean_object* v_body_1382_; uint8_t v_binderInfo_1383_; lean_object* v___x_1384_; 
v_binderName_1380_ = lean_ctor_get(v_e_1319_, 0);
v_binderType_1381_ = lean_ctor_get(v_e_1319_, 1);
v_body_1382_ = lean_ctor_get(v_e_1319_, 2);
v_binderInfo_1383_ = lean_ctor_get_uint8(v_e_1319_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1381_);
v___x_1384_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1381_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
lean_inc_ref(v_body_1382_);
v___x_1386_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1382_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1413_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1413_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1413_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
size_t v___x_1391_; size_t v___x_1392_; uint8_t v___x_1393_; 
v___x_1391_ = lean_ptr_addr(v_binderType_1381_);
v___x_1392_ = lean_ptr_addr(v_a_1385_);
v___x_1393_ = lean_usize_dec_eq(v___x_1391_, v___x_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1396_; 
lean_inc(v_binderName_1380_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1394_ = l_Lean_Expr_lam___override(v_binderName_1380_, v_a_1385_, v_a_1387_, v_binderInfo_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1394_);
v___x_1396_ = v___x_1389_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
else
{
size_t v___x_1398_; size_t v___x_1399_; uint8_t v___x_1400_; 
v___x_1398_ = lean_ptr_addr(v_body_1382_);
v___x_1399_ = lean_ptr_addr(v_a_1387_);
v___x_1400_ = lean_usize_dec_eq(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1403_; 
lean_inc(v_binderName_1380_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1401_ = l_Lean_Expr_lam___override(v_binderName_1380_, v_a_1385_, v_a_1387_, v_binderInfo_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1401_);
v___x_1403_ = v___x_1389_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
else
{
uint8_t v___x_1405_; 
v___x_1405_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1383_, v_binderInfo_1383_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
lean_inc(v_binderName_1380_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1406_ = l_Lean_Expr_lam___override(v_binderName_1380_, v_a_1385_, v_a_1387_, v_binderInfo_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1406_);
v___x_1408_ = v___x_1389_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
else
{
lean_object* v___x_1411_; 
lean_dec(v_a_1387_);
lean_dec(v_a_1385_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v_e_1319_);
v___x_1411_ = v___x_1389_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_e_1319_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1385_);
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1386_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1384_;
}
}
case 8:
{
lean_object* v_declName_1414_; lean_object* v_type_1415_; lean_object* v_value_1416_; lean_object* v_body_1417_; uint8_t v_nondep_1418_; lean_object* v___x_1419_; 
v_declName_1414_ = lean_ctor_get(v_e_1319_, 0);
v_type_1415_ = lean_ctor_get(v_e_1319_, 1);
v_value_1416_ = lean_ctor_get(v_e_1319_, 2);
v_body_1417_ = lean_ctor_get(v_e_1319_, 3);
v_nondep_1418_ = lean_ctor_get_uint8(v_e_1319_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1415_);
v___x_1419_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_type_1415_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
lean_inc_ref(v_value_1416_);
v___x_1421_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_value_1416_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
lean_inc_ref(v_body_1417_);
v___x_1423_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1417_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1452_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1426_ = v___x_1423_;
v_isShared_1427_ = v_isSharedCheck_1452_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1423_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1452_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
size_t v___x_1428_; size_t v___x_1429_; uint8_t v___x_1430_; 
v___x_1428_ = lean_ptr_addr(v_type_1415_);
v___x_1429_ = lean_ptr_addr(v_a_1420_);
v___x_1430_ = lean_usize_dec_eq(v___x_1428_, v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
lean_inc(v_declName_1414_);
lean_dec_ref_known(v_e_1319_, 4);
v___x_1431_ = l_Lean_Expr_letE___override(v_declName_1414_, v_a_1420_, v_a_1422_, v_a_1424_, v_nondep_1418_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1431_);
v___x_1433_ = v___x_1426_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
else
{
size_t v___x_1435_; size_t v___x_1436_; uint8_t v___x_1437_; 
v___x_1435_ = lean_ptr_addr(v_value_1416_);
v___x_1436_ = lean_ptr_addr(v_a_1422_);
v___x_1437_ = lean_usize_dec_eq(v___x_1435_, v___x_1436_);
if (v___x_1437_ == 0)
{
lean_object* v___x_1438_; lean_object* v___x_1440_; 
lean_inc(v_declName_1414_);
lean_dec_ref_known(v_e_1319_, 4);
v___x_1438_ = l_Lean_Expr_letE___override(v_declName_1414_, v_a_1420_, v_a_1422_, v_a_1424_, v_nondep_1418_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1438_);
v___x_1440_ = v___x_1426_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
else
{
size_t v___x_1442_; size_t v___x_1443_; uint8_t v___x_1444_; 
v___x_1442_ = lean_ptr_addr(v_body_1417_);
v___x_1443_ = lean_ptr_addr(v_a_1424_);
v___x_1444_ = lean_usize_dec_eq(v___x_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1447_; 
lean_inc(v_declName_1414_);
lean_dec_ref_known(v_e_1319_, 4);
v___x_1445_ = l_Lean_Expr_letE___override(v_declName_1414_, v_a_1420_, v_a_1422_, v_a_1424_, v_nondep_1418_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1445_);
v___x_1447_ = v___x_1426_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
else
{
lean_object* v___x_1450_; 
lean_dec(v_a_1424_);
lean_dec(v_a_1422_);
lean_dec(v_a_1420_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_e_1319_);
v___x_1450_ = v___x_1426_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_e_1319_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1422_);
lean_dec(v_a_1420_);
lean_dec_ref_known(v_e_1319_, 4);
return v___x_1423_;
}
}
else
{
lean_dec(v_a_1420_);
lean_dec_ref_known(v_e_1319_, 4);
return v___x_1421_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 4);
return v___x_1419_;
}
}
case 5:
{
lean_object* v_fn_1453_; lean_object* v_arg_1454_; lean_object* v___x_1455_; 
v_fn_1453_ = lean_ctor_get(v_e_1319_, 0);
v_arg_1454_ = lean_ctor_get(v_e_1319_, 1);
lean_inc_ref(v_fn_1453_);
v___x_1455_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_fn_1453_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1457_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
lean_inc_ref(v_arg_1454_);
v___x_1457_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_arg_1454_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1479_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1460_ = v___x_1457_;
v_isShared_1461_ = v_isSharedCheck_1479_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1457_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1479_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
size_t v___x_1462_; size_t v___x_1463_; uint8_t v___x_1464_; 
v___x_1462_ = lean_ptr_addr(v_fn_1453_);
v___x_1463_ = lean_ptr_addr(v_a_1456_);
v___x_1464_ = lean_usize_dec_eq(v___x_1462_, v___x_1463_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; lean_object* v___x_1467_; 
lean_dec_ref_known(v_e_1319_, 2);
v___x_1465_ = l_Lean_Expr_app___override(v_a_1456_, v_a_1458_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1465_);
v___x_1467_ = v___x_1460_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
else
{
size_t v___x_1469_; size_t v___x_1470_; uint8_t v___x_1471_; 
v___x_1469_ = lean_ptr_addr(v_arg_1454_);
v___x_1470_ = lean_ptr_addr(v_a_1458_);
v___x_1471_ = lean_usize_dec_eq(v___x_1469_, v___x_1470_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; lean_object* v___x_1474_; 
lean_dec_ref_known(v_e_1319_, 2);
v___x_1472_ = l_Lean_Expr_app___override(v_a_1456_, v_a_1458_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1472_);
v___x_1474_ = v___x_1460_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1472_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
else
{
lean_object* v___x_1477_; 
lean_dec(v_a_1458_);
lean_dec(v_a_1456_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v_e_1319_);
v___x_1477_ = v___x_1460_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_e_1319_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
else
{
lean_dec(v_a_1456_);
lean_dec_ref_known(v_e_1319_, 2);
return v___x_1457_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 2);
return v___x_1455_;
}
}
case 10:
{
lean_object* v_data_1480_; lean_object* v_expr_1481_; lean_object* v___x_1482_; 
v_data_1480_ = lean_ctor_get(v_e_1319_, 0);
v_expr_1481_ = lean_ctor_get(v_e_1319_, 1);
lean_inc_ref(v_expr_1481_);
v___x_1482_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_expr_1481_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1497_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1497_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1497_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
size_t v___x_1487_; size_t v___x_1488_; uint8_t v___x_1489_; 
v___x_1487_ = lean_ptr_addr(v_expr_1481_);
v___x_1488_ = lean_ptr_addr(v_a_1483_);
v___x_1489_ = lean_usize_dec_eq(v___x_1487_, v___x_1488_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
lean_inc(v_data_1480_);
lean_dec_ref_known(v_e_1319_, 2);
v___x_1490_ = l_Lean_Expr_mdata___override(v_data_1480_, v_a_1483_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1490_);
v___x_1492_ = v___x_1485_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
else
{
lean_object* v___x_1495_; 
lean_dec(v_a_1483_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v_e_1319_);
v___x_1495_ = v___x_1485_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_e_1319_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1319_, 2);
return v___x_1482_;
}
}
case 3:
{
lean_object* v_u_1498_; lean_object* v___x_1499_; 
v_u_1498_ = lean_ctor_get(v_e_1319_, 0);
lean_inc(v_u_1498_);
v___x_1499_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_1498_, v___y_1321_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1514_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1502_ = v___x_1499_;
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
size_t v___x_1504_; size_t v___x_1505_; uint8_t v___x_1506_; 
v___x_1504_ = lean_ptr_addr(v_u_1498_);
v___x_1505_ = lean_ptr_addr(v_a_1500_);
v___x_1506_ = lean_usize_dec_eq(v___x_1504_, v___x_1505_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
lean_dec_ref_known(v_e_1319_, 1);
v___x_1507_ = l_Lean_Expr_sort___override(v_a_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v___x_1507_);
v___x_1509_ = v___x_1502_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
else
{
lean_object* v___x_1512_; 
lean_dec(v_a_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v_e_1319_);
v___x_1512_ = v___x_1502_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_e_1319_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref_known(v_e_1319_, 1);
v_a_1515_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1499_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1499_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
case 4:
{
lean_object* v_declName_1523_; lean_object* v_us_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_declName_1523_ = lean_ctor_get(v_e_1319_, 0);
v_us_1524_ = lean_ctor_get(v_e_1319_, 1);
v___x_1525_ = lean_box(0);
lean_inc(v_us_1524_);
v___x_1526_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_us_1524_, v___x_1525_, v___y_1321_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1539_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1539_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1539_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
uint8_t v___x_1531_; 
v___x_1531_ = l_ptrEqList___redArg(v_us_1524_, v_a_1527_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1534_; 
lean_inc(v_declName_1523_);
lean_dec_ref_known(v_e_1319_, 2);
v___x_1532_ = l_Lean_Expr_const___override(v_declName_1523_, v_a_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1532_);
v___x_1534_ = v___x_1529_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
else
{
lean_object* v___x_1537_; 
lean_dec(v_a_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v_e_1319_);
v___x_1537_ = v___x_1529_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_e_1319_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
lean_dec_ref_known(v_e_1319_, 2);
v_a_1540_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1526_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1526_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_1548_; lean_object* v___f_1549_; lean_object* v___x_1550_; 
v_mvarId_1548_ = lean_ctor_get(v_e_1319_, 0);
lean_inc_ref(v_e_1319_);
v___f_1549_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectExprAux___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1549_, 0, v_e_1319_);
lean_inc(v_mvarId_1548_);
v___x_1550_ = l_Lean_MVarId_getDecl(v_mvarId_1548_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v_type_1552_; lean_object* v___x_1553_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1550_, 1);
v_type_1552_ = lean_ctor_get(v_a_1551_, 2);
lean_inc_ref_n(v_type_1552_, 2);
lean_dec(v_a_1551_);
v___x_1553_ = l_Lean_Meta_Closure_preprocess(v_type_1552_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1555_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1554_);
lean_dec_ref_known(v___x_1553_, 1);
v___x_1555_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1554_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1557_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1557_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1559_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
v___x_1559_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v___y_1321_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1621_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1562_ = v___x_1559_;
v_isShared_1563_ = v_isSharedCheck_1621_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1559_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1621_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v_e_x27_1565_; lean_object* v___y_1566_; lean_object* v___x_1598_; 
v___x_1598_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_1548_, v___y_1323_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
if (lean_obj_tag(v_a_1599_) == 1)
{
lean_object* v_val_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1612_; 
lean_dec_ref_known(v_e_1319_, 1);
v_val_1600_ = lean_ctor_get(v_a_1599_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_a_1599_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1602_ = v_a_1599_;
v_isShared_1603_ = v_isSharedCheck_1612_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_val_1600_);
lean_dec(v_a_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1612_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v_fvars_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v_fvars_1604_ = lean_ctor_get(v_val_1600_, 0);
lean_inc_ref(v_fvars_1604_);
lean_dec(v_val_1600_);
v___x_1605_ = lean_array_get_size(v_fvars_1604_);
lean_dec_ref(v_fvars_1604_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v___x_1605_);
v___x_1607_ = v___x_1602_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
uint8_t v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = 0;
v___x_1609_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1552_, v___x_1607_, v___f_1549_, v___x_1608_, v___x_1608_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1609_, 1);
v_e_x27_1565_ = v_a_1610_;
v___y_1566_ = v___y_1321_;
goto v___jp_1564_;
}
else
{
lean_del_object(v___x_1562_);
lean_dec(v_a_1560_);
lean_dec(v_a_1558_);
lean_dec(v_a_1556_);
return v___x_1609_;
}
}
}
}
else
{
lean_dec(v_a_1599_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
v_e_x27_1565_ = v_e_1319_;
v___y_1566_ = v___y_1321_;
goto v___jp_1564_;
}
}
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_del_object(v___x_1562_);
lean_dec(v_a_1560_);
lean_dec(v_a_1558_);
lean_dec(v_a_1556_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1613_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1598_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1598_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
v___jp_1564_:
{
lean_object* v___x_1567_; lean_object* v_visitedLevel_1568_; lean_object* v_visitedExpr_1569_; lean_object* v_levelParams_1570_; lean_object* v_nextLevelIdx_1571_; lean_object* v_levelArgs_1572_; lean_object* v_newLocalDecls_1573_; lean_object* v_newLocalDeclsForMVars_1574_; lean_object* v_newLetDecls_1575_; lean_object* v_nextExprIdx_1576_; lean_object* v_exprMVarArgs_1577_; lean_object* v_exprFVarArgs_1578_; lean_object* v_toProcess_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1597_; 
v___x_1567_ = lean_st_ref_take(v___y_1566_);
v_visitedLevel_1568_ = lean_ctor_get(v___x_1567_, 0);
v_visitedExpr_1569_ = lean_ctor_get(v___x_1567_, 1);
v_levelParams_1570_ = lean_ctor_get(v___x_1567_, 2);
v_nextLevelIdx_1571_ = lean_ctor_get(v___x_1567_, 3);
v_levelArgs_1572_ = lean_ctor_get(v___x_1567_, 4);
v_newLocalDecls_1573_ = lean_ctor_get(v___x_1567_, 5);
v_newLocalDeclsForMVars_1574_ = lean_ctor_get(v___x_1567_, 6);
v_newLetDecls_1575_ = lean_ctor_get(v___x_1567_, 7);
v_nextExprIdx_1576_ = lean_ctor_get(v___x_1567_, 8);
v_exprMVarArgs_1577_ = lean_ctor_get(v___x_1567_, 9);
v_exprFVarArgs_1578_ = lean_ctor_get(v___x_1567_, 10);
v_toProcess_1579_ = lean_ctor_get(v___x_1567_, 11);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1581_ = v___x_1567_;
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_toProcess_1579_);
lean_inc(v_exprFVarArgs_1578_);
lean_inc(v_exprMVarArgs_1577_);
lean_inc(v_nextExprIdx_1576_);
lean_inc(v_newLetDecls_1575_);
lean_inc(v_newLocalDeclsForMVars_1574_);
lean_inc(v_newLocalDecls_1573_);
lean_inc(v_levelArgs_1572_);
lean_inc(v_nextLevelIdx_1571_);
lean_inc(v_levelParams_1570_);
lean_inc(v_visitedExpr_1569_);
lean_inc(v_visitedLevel_1568_);
lean_dec(v___x_1567_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; uint8_t v___x_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1583_ = lean_unsigned_to_nat(0u);
v___x_1584_ = 0;
v___x_1585_ = 0;
lean_inc(v_a_1558_);
v___x_1586_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1586_, 0, v___x_1583_);
lean_ctor_set(v___x_1586_, 1, v_a_1558_);
lean_ctor_set(v___x_1586_, 2, v_a_1560_);
lean_ctor_set(v___x_1586_, 3, v_a_1556_);
lean_ctor_set_uint8(v___x_1586_, sizeof(void*)*4, v___x_1584_);
lean_ctor_set_uint8(v___x_1586_, sizeof(void*)*4 + 1, v___x_1585_);
v___x_1587_ = lean_array_push(v_newLocalDeclsForMVars_1574_, v___x_1586_);
v___x_1588_ = lean_array_push(v_exprMVarArgs_1577_, v_e_x27_1565_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 9, v___x_1588_);
lean_ctor_set(v___x_1581_, 6, v___x_1587_);
v___x_1590_ = v___x_1581_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_visitedLevel_1568_);
lean_ctor_set(v_reuseFailAlloc_1596_, 1, v_visitedExpr_1569_);
lean_ctor_set(v_reuseFailAlloc_1596_, 2, v_levelParams_1570_);
lean_ctor_set(v_reuseFailAlloc_1596_, 3, v_nextLevelIdx_1571_);
lean_ctor_set(v_reuseFailAlloc_1596_, 4, v_levelArgs_1572_);
lean_ctor_set(v_reuseFailAlloc_1596_, 5, v_newLocalDecls_1573_);
lean_ctor_set(v_reuseFailAlloc_1596_, 6, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1596_, 7, v_newLetDecls_1575_);
lean_ctor_set(v_reuseFailAlloc_1596_, 8, v_nextExprIdx_1576_);
lean_ctor_set(v_reuseFailAlloc_1596_, 9, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1596_, 10, v_exprFVarArgs_1578_);
lean_ctor_set(v_reuseFailAlloc_1596_, 11, v_toProcess_1579_);
v___x_1590_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1591_ = lean_st_ref_put(v___y_1566_, v___x_1590_);
v___x_1592_ = l_Lean_mkFVar(v_a_1558_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1592_);
v___x_1594_ = v___x_1562_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v_a_1558_);
lean_dec(v_a_1556_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1622_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1559_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1559_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
lean_dec(v_a_1556_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1630_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1557_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1557_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
return v___x_1555_;
}
}
else
{
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
return v___x_1553_;
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1638_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1550_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1550_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_1646_; uint8_t v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; uint8_t v___x_1683_; lean_object* v___x_1684_; 
v_fvarId_1646_ = lean_ctor_get(v_e_1319_, 0);
lean_inc_n(v_fvarId_1646_, 2);
lean_dec_ref_known(v_e_1319_, 1);
v___x_1683_ = 0;
v___x_1684_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_1646_, v___x_1683_, v___y_1322_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1684_) == 0)
{
if (v___y_1320_ == 1)
{
lean_object* v_a_1685_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v___x_1684_, 1);
if (lean_obj_tag(v_a_1685_) == 1)
{
lean_object* v_val_1686_; lean_object* v___x_1687_; 
lean_dec(v_fvarId_1646_);
v_val_1686_ = lean_ctor_get(v_a_1685_, 0);
lean_inc(v_val_1686_);
lean_dec_ref_known(v_a_1685_, 1);
v___x_1687_ = l_Lean_Meta_Closure_preprocess(v_val_1686_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1689_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1689_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1688_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
return v___x_1689_;
}
else
{
return v___x_1687_;
}
}
else
{
lean_dec(v_a_1685_);
v___y_1648_ = v___y_1320_;
v___y_1649_ = v___y_1321_;
v___y_1650_ = v___y_1322_;
v___y_1651_ = v___y_1323_;
v___y_1652_ = v___y_1324_;
v___y_1653_ = v___y_1325_;
goto v___jp_1647_;
}
}
else
{
lean_dec_ref_known(v___x_1684_, 1);
v___y_1648_ = v___y_1320_;
v___y_1649_ = v___y_1321_;
v___y_1650_ = v___y_1322_;
v___y_1651_ = v___y_1323_;
v___y_1652_ = v___y_1324_;
v___y_1653_ = v___y_1325_;
goto v___jp_1647_;
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec(v_fvarId_1646_);
v_a_1690_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1684_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1684_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
v___jp_1647_:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc_n(v_a_1655_, 2);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v_fvarId_1646_);
lean_ctor_set(v___x_1656_, 1, v_a_1655_);
v___x_1657_ = l_Lean_Meta_Closure_pushToProcess___redArg(v___x_1656_, v___y_1649_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1665_; 
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; 
v_unused_1666_ = lean_ctor_get(v___x_1657_, 0);
lean_dec(v_unused_1666_);
v___x_1659_ = v___x_1657_;
v_isShared_1660_ = v_isSharedCheck_1665_;
goto v_resetjp_1658_;
}
else
{
lean_dec(v___x_1657_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1665_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
v___x_1661_ = l_Lean_mkFVar(v_a_1655_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v___x_1661_);
v___x_1663_ = v___x_1659_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
lean_dec(v_a_1655_);
v_a_1667_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1657_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1657_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_fvarId_1646_);
v_a_1675_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1654_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1654_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
default: 
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_e_1319_);
return v___x_1698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object* v_e_1699_, uint8_t v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
uint8_t v___x_1750_; 
v___x_1750_ = l_Lean_Expr_hasLevelParam(v_e_1699_);
if (v___x_1750_ == 0)
{
uint8_t v___x_1751_; 
v___x_1751_ = l_Lean_Expr_hasFVar(v_e_1699_);
if (v___x_1751_ == 0)
{
uint8_t v___x_1752_; 
v___x_1752_ = l_Lean_Expr_hasMVar(v_e_1699_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_e_1699_);
return v___x_1753_;
}
else
{
goto v___jp_1707_;
}
}
else
{
goto v___jp_1707_;
}
}
else
{
goto v___jp_1707_;
}
v___jp_1707_:
{
lean_object* v___x_1708_; lean_object* v_visitedExpr_1709_; lean_object* v___x_1710_; 
v___x_1708_ = lean_st_ref_get(v___y_1701_);
v_visitedExpr_1709_ = lean_ctor_get(v___x_1708_, 1);
lean_inc_ref(v_visitedExpr_1709_);
lean_dec(v___x_1708_);
v___x_1710_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1709_, v_e_1699_);
lean_dec_ref(v_visitedExpr_1709_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v___x_1711_; 
lean_inc_ref(v_e_1699_);
v___x_1711_ = l_Lean_Meta_Closure_collectExprAux(v_e_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1741_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1714_ = v___x_1711_;
v_isShared_1715_ = v_isSharedCheck_1741_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1711_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1741_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v_visitedLevel_1717_; lean_object* v_visitedExpr_1718_; lean_object* v_levelParams_1719_; lean_object* v_nextLevelIdx_1720_; lean_object* v_levelArgs_1721_; lean_object* v_newLocalDecls_1722_; lean_object* v_newLocalDeclsForMVars_1723_; lean_object* v_newLetDecls_1724_; lean_object* v_nextExprIdx_1725_; lean_object* v_exprMVarArgs_1726_; lean_object* v_exprFVarArgs_1727_; lean_object* v_toProcess_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1740_; 
v___x_1716_ = lean_st_ref_take(v___y_1701_);
v_visitedLevel_1717_ = lean_ctor_get(v___x_1716_, 0);
v_visitedExpr_1718_ = lean_ctor_get(v___x_1716_, 1);
v_levelParams_1719_ = lean_ctor_get(v___x_1716_, 2);
v_nextLevelIdx_1720_ = lean_ctor_get(v___x_1716_, 3);
v_levelArgs_1721_ = lean_ctor_get(v___x_1716_, 4);
v_newLocalDecls_1722_ = lean_ctor_get(v___x_1716_, 5);
v_newLocalDeclsForMVars_1723_ = lean_ctor_get(v___x_1716_, 6);
v_newLetDecls_1724_ = lean_ctor_get(v___x_1716_, 7);
v_nextExprIdx_1725_ = lean_ctor_get(v___x_1716_, 8);
v_exprMVarArgs_1726_ = lean_ctor_get(v___x_1716_, 9);
v_exprFVarArgs_1727_ = lean_ctor_get(v___x_1716_, 10);
v_toProcess_1728_ = lean_ctor_get(v___x_1716_, 11);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1730_ = v___x_1716_;
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_toProcess_1728_);
lean_inc(v_exprFVarArgs_1727_);
lean_inc(v_exprMVarArgs_1726_);
lean_inc(v_nextExprIdx_1725_);
lean_inc(v_newLetDecls_1724_);
lean_inc(v_newLocalDeclsForMVars_1723_);
lean_inc(v_newLocalDecls_1722_);
lean_inc(v_levelArgs_1721_);
lean_inc(v_nextLevelIdx_1720_);
lean_inc(v_levelParams_1719_);
lean_inc(v_visitedExpr_1718_);
lean_inc(v_visitedLevel_1717_);
lean_dec(v___x_1716_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1734_; 
lean_inc(v_a_1712_);
v___x_1732_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1718_, v_e_1699_, v_a_1712_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 1, v___x_1732_);
v___x_1734_ = v___x_1730_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_visitedLevel_1717_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v___x_1732_);
lean_ctor_set(v_reuseFailAlloc_1739_, 2, v_levelParams_1719_);
lean_ctor_set(v_reuseFailAlloc_1739_, 3, v_nextLevelIdx_1720_);
lean_ctor_set(v_reuseFailAlloc_1739_, 4, v_levelArgs_1721_);
lean_ctor_set(v_reuseFailAlloc_1739_, 5, v_newLocalDecls_1722_);
lean_ctor_set(v_reuseFailAlloc_1739_, 6, v_newLocalDeclsForMVars_1723_);
lean_ctor_set(v_reuseFailAlloc_1739_, 7, v_newLetDecls_1724_);
lean_ctor_set(v_reuseFailAlloc_1739_, 8, v_nextExprIdx_1725_);
lean_ctor_set(v_reuseFailAlloc_1739_, 9, v_exprMVarArgs_1726_);
lean_ctor_set(v_reuseFailAlloc_1739_, 10, v_exprFVarArgs_1727_);
lean_ctor_set(v_reuseFailAlloc_1739_, 11, v_toProcess_1728_);
v___x_1734_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = lean_st_ref_put(v___y_1701_, v___x_1734_);
if (v_isShared_1715_ == 0)
{
v___x_1737_ = v___x_1714_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1712_);
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
lean_dec_ref(v_e_1699_);
return v___x_1711_;
}
}
else
{
lean_object* v_val_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec_ref(v_e_1699_);
v_val_1742_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1710_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_val_1742_);
lean_dec(v___x_1710_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
lean_ctor_set_tag(v___x_1744_, 0);
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_val_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object* v_e_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
uint8_t v___y_21026__boxed_1762_; lean_object* v_res_1763_; 
v___y_21026__boxed_1762_ = lean_unbox(v___y_1755_);
v_res_1763_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_e_1754_, v___y_21026__boxed_1762_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object* v_e_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
uint8_t v___y_21050__boxed_1772_; lean_object* v_res_1773_; 
v___y_21050__boxed_1772_ = lean_unbox(v___y_1765_);
v_res_1773_ = l_Lean_Meta_Closure_collectExprAux(v_e_1764_, v___y_21050__boxed_1772_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
lean_dec(v___y_1766_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object* v_00_u03b2_1774_, lean_object* v_m_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1775_, v_a_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object* v_00_u03b2_1778_, lean_object* v_m_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(v_00_u03b2_1778_, v_m_1779_, v_a_1780_);
lean_dec_ref(v_a_1780_);
lean_dec_ref(v_m_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object* v_00_u03b2_1782_, lean_object* v_m_1783_, lean_object* v_a_1784_, lean_object* v_b_1785_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_m_1783_, v_a_1784_, v_b_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object* v_x_1787_, lean_object* v_x_1788_, uint8_t v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1787_, v_x_1788_, v___y_1790_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object* v_x_1797_, lean_object* v_x_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v___y_21876__boxed_1806_; lean_object* v_res_1807_; 
v___y_21876__boxed_1806_ = lean_unbox(v___y_1799_);
v_res_1807_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(v_x_1797_, v_x_1798_, v___y_21876__boxed_1806_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(uint8_t v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1813_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v___y_21903__boxed_1823_; lean_object* v_res_1824_; 
v___y_21903__boxed_1823_ = lean_unbox(v___y_1816_);
v_res_1824_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(v___y_21903__boxed_1823_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object* v_00_u03b2_1825_, lean_object* v_a_1826_, lean_object* v_x_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1826_, v_x_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1829_, lean_object* v_a_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(v_00_u03b2_1829_, v_a_1830_, v_x_1831_);
lean_dec(v_x_1831_);
lean_dec_ref(v_a_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object* v_00_u03b2_1833_, lean_object* v_a_1834_, lean_object* v_x_1835_){
_start:
{
uint8_t v___x_1836_; 
v___x_1836_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1834_, v_x_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1837_, lean_object* v_a_1838_, lean_object* v_x_1839_){
_start:
{
uint8_t v_res_1840_; lean_object* v_r_1841_; 
v_res_1840_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(v_00_u03b2_1837_, v_a_1838_, v_x_1839_);
lean_dec(v_x_1839_);
lean_dec_ref(v_a_1838_);
v_r_1841_ = lean_box(v_res_1840_);
return v_r_1841_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object* v_00_u03b2_1842_, lean_object* v_data_1843_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_data_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object* v_00_u03b2_1845_, lean_object* v_a_1846_, lean_object* v_b_1847_, lean_object* v_x_1848_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1846_, v_b_1847_, v_x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_1850_, lean_object* v_i_1851_, lean_object* v_source_1852_, lean_object* v_target_1853_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v_i_1851_, v_source_1852_, v_target_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_x_1856_, v_x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object* v_e_1859_, uint8_t v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lean_Meta_Closure_preprocess(v_e_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; uint8_t v___x_1912_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
v___x_1912_ = l_Lean_Expr_hasLevelParam(v_a_1868_);
if (v___x_1912_ == 0)
{
uint8_t v___x_1913_; 
v___x_1913_ = l_Lean_Expr_hasFVar(v_a_1868_);
if (v___x_1913_ == 0)
{
uint8_t v___x_1914_; 
v___x_1914_ = l_Lean_Expr_hasMVar(v_a_1868_);
if (v___x_1914_ == 0)
{
lean_dec(v_a_1868_);
return v___x_1867_;
}
else
{
lean_dec_ref_known(v___x_1867_, 1);
goto v___jp_1869_;
}
}
else
{
lean_dec_ref_known(v___x_1867_, 1);
goto v___jp_1869_;
}
}
else
{
lean_dec_ref_known(v___x_1867_, 1);
goto v___jp_1869_;
}
v___jp_1869_:
{
lean_object* v___x_1870_; lean_object* v_visitedExpr_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_st_ref_get(v___y_1861_);
v_visitedExpr_1871_ = lean_ctor_get(v___x_1870_, 1);
lean_inc_ref(v_visitedExpr_1871_);
lean_dec(v___x_1870_);
v___x_1872_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1871_, v_a_1868_);
lean_dec_ref(v_visitedExpr_1871_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v___x_1873_; 
lean_inc(v_a_1868_);
v___x_1873_ = l_Lean_Meta_Closure_collectExprAux(v_a_1868_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1903_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1903_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1903_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v_visitedLevel_1879_; lean_object* v_visitedExpr_1880_; lean_object* v_levelParams_1881_; lean_object* v_nextLevelIdx_1882_; lean_object* v_levelArgs_1883_; lean_object* v_newLocalDecls_1884_; lean_object* v_newLocalDeclsForMVars_1885_; lean_object* v_newLetDecls_1886_; lean_object* v_nextExprIdx_1887_; lean_object* v_exprMVarArgs_1888_; lean_object* v_exprFVarArgs_1889_; lean_object* v_toProcess_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1902_; 
v___x_1878_ = lean_st_ref_take(v___y_1861_);
v_visitedLevel_1879_ = lean_ctor_get(v___x_1878_, 0);
v_visitedExpr_1880_ = lean_ctor_get(v___x_1878_, 1);
v_levelParams_1881_ = lean_ctor_get(v___x_1878_, 2);
v_nextLevelIdx_1882_ = lean_ctor_get(v___x_1878_, 3);
v_levelArgs_1883_ = lean_ctor_get(v___x_1878_, 4);
v_newLocalDecls_1884_ = lean_ctor_get(v___x_1878_, 5);
v_newLocalDeclsForMVars_1885_ = lean_ctor_get(v___x_1878_, 6);
v_newLetDecls_1886_ = lean_ctor_get(v___x_1878_, 7);
v_nextExprIdx_1887_ = lean_ctor_get(v___x_1878_, 8);
v_exprMVarArgs_1888_ = lean_ctor_get(v___x_1878_, 9);
v_exprFVarArgs_1889_ = lean_ctor_get(v___x_1878_, 10);
v_toProcess_1890_ = lean_ctor_get(v___x_1878_, 11);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1892_ = v___x_1878_;
v_isShared_1893_ = v_isSharedCheck_1902_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_toProcess_1890_);
lean_inc(v_exprFVarArgs_1889_);
lean_inc(v_exprMVarArgs_1888_);
lean_inc(v_nextExprIdx_1887_);
lean_inc(v_newLetDecls_1886_);
lean_inc(v_newLocalDeclsForMVars_1885_);
lean_inc(v_newLocalDecls_1884_);
lean_inc(v_levelArgs_1883_);
lean_inc(v_nextLevelIdx_1882_);
lean_inc(v_levelParams_1881_);
lean_inc(v_visitedExpr_1880_);
lean_inc(v_visitedLevel_1879_);
lean_dec(v___x_1878_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1902_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1896_; 
lean_inc(v_a_1874_);
v___x_1894_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1880_, v_a_1868_, v_a_1874_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v___x_1894_);
v___x_1896_ = v___x_1892_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_visitedLevel_1879_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v_levelParams_1881_);
lean_ctor_set(v_reuseFailAlloc_1901_, 3, v_nextLevelIdx_1882_);
lean_ctor_set(v_reuseFailAlloc_1901_, 4, v_levelArgs_1883_);
lean_ctor_set(v_reuseFailAlloc_1901_, 5, v_newLocalDecls_1884_);
lean_ctor_set(v_reuseFailAlloc_1901_, 6, v_newLocalDeclsForMVars_1885_);
lean_ctor_set(v_reuseFailAlloc_1901_, 7, v_newLetDecls_1886_);
lean_ctor_set(v_reuseFailAlloc_1901_, 8, v_nextExprIdx_1887_);
lean_ctor_set(v_reuseFailAlloc_1901_, 9, v_exprMVarArgs_1888_);
lean_ctor_set(v_reuseFailAlloc_1901_, 10, v_exprFVarArgs_1889_);
lean_ctor_set(v_reuseFailAlloc_1901_, 11, v_toProcess_1890_);
v___x_1896_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
lean_object* v___x_1897_; lean_object* v___x_1899_; 
v___x_1897_ = lean_st_ref_put(v___y_1861_, v___x_1896_);
if (v_isShared_1877_ == 0)
{
v___x_1899_ = v___x_1876_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1874_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
}
else
{
lean_dec(v_a_1868_);
return v___x_1873_;
}
}
else
{
lean_object* v_val_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec(v_a_1868_);
v_val_1904_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1872_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_val_1904_);
lean_dec(v___x_1872_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
lean_ctor_set_tag(v___x_1906_, 0);
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_val_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
else
{
return v___x_1867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object* v_e_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
uint8_t v___y_607__boxed_1923_; lean_object* v_res_1924_; 
v___y_607__boxed_1923_ = lean_unbox(v___y_1916_);
v_res_1924_ = l_Lean_Meta_Closure_collectExpr(v_e_1915_, v___y_607__boxed_1923_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object* v_lctx_1925_, lean_object* v_i_1926_, lean_object* v_toProcess_1927_, lean_object* v_elem_1928_){
_start:
{
lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1929_ = lean_array_get_size(v_toProcess_1927_);
v___x_1930_ = lean_nat_dec_lt(v_i_1926_, v___x_1929_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; 
lean_dec(v_i_1926_);
lean_dec_ref(v_lctx_1925_);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v_elem_1928_);
lean_ctor_set(v___x_1931_, 1, v_toProcess_1927_);
return v___x_1931_;
}
else
{
lean_object* v_fvarId_1932_; lean_object* v_elem_x27_1933_; lean_object* v_fvarId_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; 
v_fvarId_1932_ = lean_ctor_get(v_elem_1928_, 0);
v_elem_x27_1933_ = lean_array_fget_borrowed(v_toProcess_1927_, v_i_1926_);
v_fvarId_1934_ = lean_ctor_get(v_elem_x27_1933_, 0);
lean_inc(v_fvarId_1932_);
lean_inc_ref_n(v_lctx_1925_, 2);
v___x_1935_ = l_Lean_LocalContext_get_x21(v_lctx_1925_, v_fvarId_1932_);
v___x_1936_ = l_Lean_LocalDecl_index(v___x_1935_);
lean_dec_ref(v___x_1935_);
lean_inc(v_fvarId_1934_);
v___x_1937_ = l_Lean_LocalContext_get_x21(v_lctx_1925_, v_fvarId_1934_);
v___x_1938_ = l_Lean_LocalDecl_index(v___x_1937_);
lean_dec_ref(v___x_1937_);
v___x_1939_ = lean_nat_dec_lt(v___x_1936_, v___x_1938_);
lean_dec(v___x_1938_);
lean_dec(v___x_1936_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_unsigned_to_nat(1u);
v___x_1941_ = lean_nat_add(v_i_1926_, v___x_1940_);
lean_dec(v_i_1926_);
v_i_1926_ = v___x_1941_;
goto _start;
}
else
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
lean_inc(v_elem_x27_1933_);
v___x_1943_ = lean_unsigned_to_nat(1u);
v___x_1944_ = lean_nat_add(v_i_1926_, v___x_1943_);
v___x_1945_ = lean_array_fset(v_toProcess_1927_, v_i_1926_, v_elem_1928_);
lean_dec(v_i_1926_);
v_i_1926_ = v___x_1944_;
v_toProcess_1927_ = v___x_1945_;
v_elem_1928_ = v_elem_x27_1933_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v_lctx_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v_toProcess_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; uint8_t v___x_1956_; 
v_lctx_1950_ = lean_ctor_get(v___y_1948_, 2);
v___x_1951_ = ((lean_object*)(l_Lean_Meta_Closure_instInhabitedToProcessElement_default));
v___x_1952_ = lean_st_ref_get(v___y_1947_);
v_toProcess_1953_ = lean_ctor_get(v___x_1952_, 11);
lean_inc_ref(v_toProcess_1953_);
lean_dec(v___x_1952_);
v___x_1954_ = lean_array_get_size(v_toProcess_1953_);
lean_dec_ref(v_toProcess_1953_);
v___x_1955_ = lean_unsigned_to_nat(0u);
v___x_1956_ = lean_nat_dec_eq(v___x_1954_, v___x_1955_);
if (v___x_1956_ == 0)
{
lean_object* v___x_1957_; lean_object* v_visitedLevel_1958_; lean_object* v_visitedExpr_1959_; lean_object* v_levelParams_1960_; lean_object* v_nextLevelIdx_1961_; lean_object* v_levelArgs_1962_; lean_object* v_newLocalDecls_1963_; lean_object* v_newLocalDeclsForMVars_1964_; lean_object* v_newLetDecls_1965_; lean_object* v_nextExprIdx_1966_; lean_object* v_exprMVarArgs_1967_; lean_object* v_exprFVarArgs_1968_; lean_object* v_toProcess_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1987_; 
v___x_1957_ = lean_st_ref_take(v___y_1947_);
v_visitedLevel_1958_ = lean_ctor_get(v___x_1957_, 0);
v_visitedExpr_1959_ = lean_ctor_get(v___x_1957_, 1);
v_levelParams_1960_ = lean_ctor_get(v___x_1957_, 2);
v_nextLevelIdx_1961_ = lean_ctor_get(v___x_1957_, 3);
v_levelArgs_1962_ = lean_ctor_get(v___x_1957_, 4);
v_newLocalDecls_1963_ = lean_ctor_get(v___x_1957_, 5);
v_newLocalDeclsForMVars_1964_ = lean_ctor_get(v___x_1957_, 6);
v_newLetDecls_1965_ = lean_ctor_get(v___x_1957_, 7);
v_nextExprIdx_1966_ = lean_ctor_get(v___x_1957_, 8);
v_exprMVarArgs_1967_ = lean_ctor_get(v___x_1957_, 9);
v_exprFVarArgs_1968_ = lean_ctor_get(v___x_1957_, 10);
v_toProcess_1969_ = lean_ctor_get(v___x_1957_, 11);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1971_ = v___x_1957_;
v_isShared_1972_ = v_isSharedCheck_1987_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_toProcess_1969_);
lean_inc(v_exprFVarArgs_1968_);
lean_inc(v_exprMVarArgs_1967_);
lean_inc(v_nextExprIdx_1966_);
lean_inc(v_newLetDecls_1965_);
lean_inc(v_newLocalDeclsForMVars_1964_);
lean_inc(v_newLocalDecls_1963_);
lean_inc(v_levelArgs_1962_);
lean_inc(v_nextLevelIdx_1961_);
lean_inc(v_levelParams_1960_);
lean_inc(v_visitedExpr_1959_);
lean_inc(v_visitedLevel_1958_);
lean_dec(v___x_1957_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1987_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v_fst_1979_; lean_object* v_snd_1980_; lean_object* v___x_1981_; lean_object* v___x_1983_; 
v___x_1973_ = lean_array_get_size(v_toProcess_1969_);
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = lean_nat_sub(v___x_1973_, v___x_1974_);
v___x_1976_ = lean_array_get(v___x_1951_, v_toProcess_1969_, v___x_1975_);
lean_dec(v___x_1975_);
v___x_1977_ = lean_array_pop(v_toProcess_1969_);
lean_inc_ref(v_lctx_1950_);
v___x_1978_ = l_Lean_Meta_Closure_pickNextToProcessAux(v_lctx_1950_, v___x_1955_, v___x_1977_, v___x_1976_);
v_fst_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_fst_1979_);
v_snd_1980_ = lean_ctor_get(v___x_1978_, 1);
lean_inc(v_snd_1980_);
lean_dec_ref(v___x_1978_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_fst_1979_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 11, v_snd_1980_);
v___x_1983_ = v___x_1971_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_visitedLevel_1958_);
lean_ctor_set(v_reuseFailAlloc_1986_, 1, v_visitedExpr_1959_);
lean_ctor_set(v_reuseFailAlloc_1986_, 2, v_levelParams_1960_);
lean_ctor_set(v_reuseFailAlloc_1986_, 3, v_nextLevelIdx_1961_);
lean_ctor_set(v_reuseFailAlloc_1986_, 4, v_levelArgs_1962_);
lean_ctor_set(v_reuseFailAlloc_1986_, 5, v_newLocalDecls_1963_);
lean_ctor_set(v_reuseFailAlloc_1986_, 6, v_newLocalDeclsForMVars_1964_);
lean_ctor_set(v_reuseFailAlloc_1986_, 7, v_newLetDecls_1965_);
lean_ctor_set(v_reuseFailAlloc_1986_, 8, v_nextExprIdx_1966_);
lean_ctor_set(v_reuseFailAlloc_1986_, 9, v_exprMVarArgs_1967_);
lean_ctor_set(v_reuseFailAlloc_1986_, 10, v_exprFVarArgs_1968_);
lean_ctor_set(v_reuseFailAlloc_1986_, 11, v_snd_1980_);
v___x_1983_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_st_ref_put(v___y_1947_, v___x_1983_);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1981_);
return v___x_1985_;
}
}
}
else
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = lean_box(0);
v___x_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v___y_1990_, v___y_1991_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(uint8_t v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v___y_1995_, v___y_1996_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
uint8_t v___y_2181__boxed_2009_; lean_object* v_res_2010_; 
v___y_2181__boxed_2009_ = lean_unbox(v___y_2002_);
v_res_2010_ = l_Lean_Meta_Closure_pickNextToProcess_x3f(v___y_2181__boxed_2009_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object* v_e_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v_visitedLevel_2015_; lean_object* v_visitedExpr_2016_; lean_object* v_levelParams_2017_; lean_object* v_nextLevelIdx_2018_; lean_object* v_levelArgs_2019_; lean_object* v_newLocalDecls_2020_; lean_object* v_newLocalDeclsForMVars_2021_; lean_object* v_newLetDecls_2022_; lean_object* v_nextExprIdx_2023_; lean_object* v_exprMVarArgs_2024_; lean_object* v_exprFVarArgs_2025_; lean_object* v_toProcess_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2037_; 
v___x_2014_ = lean_st_ref_take(v___y_2012_);
v_visitedLevel_2015_ = lean_ctor_get(v___x_2014_, 0);
v_visitedExpr_2016_ = lean_ctor_get(v___x_2014_, 1);
v_levelParams_2017_ = lean_ctor_get(v___x_2014_, 2);
v_nextLevelIdx_2018_ = lean_ctor_get(v___x_2014_, 3);
v_levelArgs_2019_ = lean_ctor_get(v___x_2014_, 4);
v_newLocalDecls_2020_ = lean_ctor_get(v___x_2014_, 5);
v_newLocalDeclsForMVars_2021_ = lean_ctor_get(v___x_2014_, 6);
v_newLetDecls_2022_ = lean_ctor_get(v___x_2014_, 7);
v_nextExprIdx_2023_ = lean_ctor_get(v___x_2014_, 8);
v_exprMVarArgs_2024_ = lean_ctor_get(v___x_2014_, 9);
v_exprFVarArgs_2025_ = lean_ctor_get(v___x_2014_, 10);
v_toProcess_2026_ = lean_ctor_get(v___x_2014_, 11);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2028_ = v___x_2014_;
v_isShared_2029_ = v_isSharedCheck_2037_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_toProcess_2026_);
lean_inc(v_exprFVarArgs_2025_);
lean_inc(v_exprMVarArgs_2024_);
lean_inc(v_nextExprIdx_2023_);
lean_inc(v_newLetDecls_2022_);
lean_inc(v_newLocalDeclsForMVars_2021_);
lean_inc(v_newLocalDecls_2020_);
lean_inc(v_levelArgs_2019_);
lean_inc(v_nextLevelIdx_2018_);
lean_inc(v_levelParams_2017_);
lean_inc(v_visitedExpr_2016_);
lean_inc(v_visitedLevel_2015_);
lean_dec(v___x_2014_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2037_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2033_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = lean_array_push(v_exprFVarArgs_2025_, v_e_2011_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 10, v___x_2031_);
v___x_2033_ = v___x_2028_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_visitedLevel_2015_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_visitedExpr_2016_);
lean_ctor_set(v_reuseFailAlloc_2036_, 2, v_levelParams_2017_);
lean_ctor_set(v_reuseFailAlloc_2036_, 3, v_nextLevelIdx_2018_);
lean_ctor_set(v_reuseFailAlloc_2036_, 4, v_levelArgs_2019_);
lean_ctor_set(v_reuseFailAlloc_2036_, 5, v_newLocalDecls_2020_);
lean_ctor_set(v_reuseFailAlloc_2036_, 6, v_newLocalDeclsForMVars_2021_);
lean_ctor_set(v_reuseFailAlloc_2036_, 7, v_newLetDecls_2022_);
lean_ctor_set(v_reuseFailAlloc_2036_, 8, v_nextExprIdx_2023_);
lean_ctor_set(v_reuseFailAlloc_2036_, 9, v_exprMVarArgs_2024_);
lean_ctor_set(v_reuseFailAlloc_2036_, 10, v___x_2031_);
lean_ctor_set(v_reuseFailAlloc_2036_, 11, v_toProcess_2026_);
v___x_2033_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2034_ = lean_st_ref_put(v___y_2012_, v___x_2033_);
v___x_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2030_);
return v___x_2035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object* v_e_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2038_, v___y_2039_);
lean_dec(v___y_2039_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object* v_e_2042_, uint8_t v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2042_, v___y_2044_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object* v_e_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
uint8_t v___y_432__boxed_2059_; lean_object* v_res_2060_; 
v___y_432__boxed_2059_ = lean_unbox(v___y_2052_);
v_res_2060_ = l_Lean_Meta_Closure_pushFVarArg(v_e_2051_, v___y_432__boxed_2059_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec(v___y_2053_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object* v_newFVarId_2061_, lean_object* v_userName_2062_, lean_object* v_type_2063_, uint8_t v_bi_2064_, uint8_t v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lean_Meta_Closure_collectExpr(v_type_2063_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2106_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2075_ = v___x_2072_;
v_isShared_2076_ = v_isSharedCheck_2106_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2072_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2106_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; lean_object* v_visitedLevel_2078_; lean_object* v_visitedExpr_2079_; lean_object* v_levelParams_2080_; lean_object* v_nextLevelIdx_2081_; lean_object* v_levelArgs_2082_; lean_object* v_newLocalDecls_2083_; lean_object* v_newLocalDeclsForMVars_2084_; lean_object* v_newLetDecls_2085_; lean_object* v_nextExprIdx_2086_; lean_object* v_exprMVarArgs_2087_; lean_object* v_exprFVarArgs_2088_; lean_object* v_toProcess_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2105_; 
v___x_2077_ = lean_st_ref_take(v___y_2066_);
v_visitedLevel_2078_ = lean_ctor_get(v___x_2077_, 0);
v_visitedExpr_2079_ = lean_ctor_get(v___x_2077_, 1);
v_levelParams_2080_ = lean_ctor_get(v___x_2077_, 2);
v_nextLevelIdx_2081_ = lean_ctor_get(v___x_2077_, 3);
v_levelArgs_2082_ = lean_ctor_get(v___x_2077_, 4);
v_newLocalDecls_2083_ = lean_ctor_get(v___x_2077_, 5);
v_newLocalDeclsForMVars_2084_ = lean_ctor_get(v___x_2077_, 6);
v_newLetDecls_2085_ = lean_ctor_get(v___x_2077_, 7);
v_nextExprIdx_2086_ = lean_ctor_get(v___x_2077_, 8);
v_exprMVarArgs_2087_ = lean_ctor_get(v___x_2077_, 9);
v_exprFVarArgs_2088_ = lean_ctor_get(v___x_2077_, 10);
v_toProcess_2089_ = lean_ctor_get(v___x_2077_, 11);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2091_ = v___x_2077_;
v_isShared_2092_ = v_isSharedCheck_2105_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_toProcess_2089_);
lean_inc(v_exprFVarArgs_2088_);
lean_inc(v_exprMVarArgs_2087_);
lean_inc(v_nextExprIdx_2086_);
lean_inc(v_newLetDecls_2085_);
lean_inc(v_newLocalDeclsForMVars_2084_);
lean_inc(v_newLocalDecls_2083_);
lean_inc(v_levelArgs_2082_);
lean_inc(v_nextLevelIdx_2081_);
lean_inc(v_levelParams_2080_);
lean_inc(v_visitedExpr_2079_);
lean_inc(v_visitedLevel_2078_);
lean_dec(v___x_2077_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2105_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2093_ = lean_box(0);
v___x_2094_ = lean_unsigned_to_nat(0u);
v___x_2095_ = 0;
v___x_2096_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2096_, 0, v___x_2094_);
lean_ctor_set(v___x_2096_, 1, v_newFVarId_2061_);
lean_ctor_set(v___x_2096_, 2, v_userName_2062_);
lean_ctor_set(v___x_2096_, 3, v_a_2073_);
lean_ctor_set_uint8(v___x_2096_, sizeof(void*)*4, v_bi_2064_);
lean_ctor_set_uint8(v___x_2096_, sizeof(void*)*4 + 1, v___x_2095_);
v___x_2097_ = lean_array_push(v_newLocalDecls_2083_, v___x_2096_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 5, v___x_2097_);
v___x_2099_ = v___x_2091_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_visitedLevel_2078_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_visitedExpr_2079_);
lean_ctor_set(v_reuseFailAlloc_2104_, 2, v_levelParams_2080_);
lean_ctor_set(v_reuseFailAlloc_2104_, 3, v_nextLevelIdx_2081_);
lean_ctor_set(v_reuseFailAlloc_2104_, 4, v_levelArgs_2082_);
lean_ctor_set(v_reuseFailAlloc_2104_, 5, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2104_, 6, v_newLocalDeclsForMVars_2084_);
lean_ctor_set(v_reuseFailAlloc_2104_, 7, v_newLetDecls_2085_);
lean_ctor_set(v_reuseFailAlloc_2104_, 8, v_nextExprIdx_2086_);
lean_ctor_set(v_reuseFailAlloc_2104_, 9, v_exprMVarArgs_2087_);
lean_ctor_set(v_reuseFailAlloc_2104_, 10, v_exprFVarArgs_2088_);
lean_ctor_set(v_reuseFailAlloc_2104_, 11, v_toProcess_2089_);
v___x_2099_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2100_ = lean_st_ref_put(v___y_2066_, v___x_2099_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v___x_2093_);
v___x_2102_ = v___x_2075_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2093_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
lean_dec(v_userName_2062_);
lean_dec(v_newFVarId_2061_);
v_a_2107_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2072_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2072_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object* v_newFVarId_2115_, lean_object* v_userName_2116_, lean_object* v_type_2117_, lean_object* v_bi_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
uint8_t v_bi_boxed_2126_; uint8_t v___y_879__boxed_2127_; lean_object* v_res_2128_; 
v_bi_boxed_2126_ = lean_unbox(v_bi_2118_);
v___y_879__boxed_2127_ = lean_unbox(v___y_2119_);
v_res_2128_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2115_, v_userName_2116_, v_type_2117_, v_bi_boxed_2126_, v___y_879__boxed_2127_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__0(lean_object* v_newFVarId_2129_, lean_object* v_a_2130_, size_t v_sz_2131_, size_t v_i_2132_, lean_object* v_bs_2133_){
_start:
{
uint8_t v___x_2134_; 
v___x_2134_ = lean_usize_dec_lt(v_i_2132_, v_sz_2131_);
if (v___x_2134_ == 0)
{
lean_dec(v_newFVarId_2129_);
return v_bs_2133_;
}
else
{
lean_object* v_v_2135_; lean_object* v___x_2136_; lean_object* v_bs_x27_2137_; lean_object* v___x_2138_; size_t v___x_2139_; size_t v___x_2140_; lean_object* v___x_2141_; 
v_v_2135_ = lean_array_uget(v_bs_2133_, v_i_2132_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v_bs_x27_2137_ = lean_array_uset(v_bs_2133_, v_i_2132_, v___x_2136_);
lean_inc(v_newFVarId_2129_);
v___x_2138_ = l_Lean_LocalDecl_replaceFVarId(v_newFVarId_2129_, v_a_2130_, v_v_2135_);
v___x_2139_ = ((size_t)1ULL);
v___x_2140_ = lean_usize_add(v_i_2132_, v___x_2139_);
v___x_2141_ = lean_array_uset(v_bs_x27_2137_, v_i_2132_, v___x_2138_);
v_i_2132_ = v___x_2140_;
v_bs_2133_ = v___x_2141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object* v_newFVarId_2143_, lean_object* v_a_2144_, lean_object* v_sz_2145_, lean_object* v_i_2146_, lean_object* v_bs_2147_){
_start:
{
size_t v_sz_boxed_2148_; size_t v_i_boxed_2149_; lean_object* v_res_2150_; 
v_sz_boxed_2148_ = lean_unbox_usize(v_sz_2145_);
lean_dec(v_sz_2145_);
v_i_boxed_2149_ = lean_unbox_usize(v_i_2146_);
lean_dec(v_i_2146_);
v_res_2150_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__0(v_newFVarId_2143_, v_a_2144_, v_sz_boxed_2148_, v_i_boxed_2149_, v_bs_2147_);
lean_dec_ref(v_a_2144_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(uint8_t v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; 
v___x_2158_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v___y_2152_, v___y_2153_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2286_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2286_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2286_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
if (lean_obj_tag(v_a_2159_) == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_box(0);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2163_);
v___x_2165_ = v___x_2161_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
else
{
lean_object* v_val_2167_; lean_object* v_fvarId_2168_; lean_object* v_newFVarId_2169_; lean_object* v___x_2170_; 
lean_del_object(v___x_2161_);
v_val_2167_ = lean_ctor_get(v_a_2159_, 0);
lean_inc(v_val_2167_);
lean_dec_ref_known(v_a_2159_, 1);
v_fvarId_2168_ = lean_ctor_get(v_val_2167_, 0);
lean_inc_n(v_fvarId_2168_, 2);
v_newFVarId_2169_ = lean_ctor_get(v_val_2167_, 1);
lean_inc(v_newFVarId_2169_);
lean_dec(v_val_2167_);
v___x_2170_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_2168_, v___y_2153_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v___x_2170_, 1);
if (lean_obj_tag(v_a_2171_) == 0)
{
lean_object* v_userName_2172_; lean_object* v_type_2173_; uint8_t v_bi_2174_; lean_object* v___x_2175_; 
v_userName_2172_ = lean_ctor_get(v_a_2171_, 2);
lean_inc(v_userName_2172_);
v_type_2173_ = lean_ctor_get(v_a_2171_, 3);
lean_inc_ref(v_type_2173_);
v_bi_2174_ = lean_ctor_get_uint8(v_a_2171_, sizeof(void*)*4);
lean_dec_ref_known(v_a_2171_, 4);
v___x_2175_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2169_, v_userName_2172_, v_type_2173_, v_bi_2174_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_dec_ref_known(v___x_2175_, 1);
v___x_2176_ = l_Lean_mkFVar(v_fvarId_2168_);
v___x_2177_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2176_, v___y_2152_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_dec_ref_known(v___x_2177_, 1);
goto _start;
}
else
{
return v___x_2177_;
}
}
else
{
lean_dec(v_fvarId_2168_);
return v___x_2175_;
}
}
else
{
lean_object* v_userName_2179_; lean_object* v_type_2180_; lean_object* v_value_2181_; uint8_t v_nondep_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2275_; 
v_userName_2179_ = lean_ctor_get(v_a_2171_, 2);
v_type_2180_ = lean_ctor_get(v_a_2171_, 3);
v_value_2181_ = lean_ctor_get(v_a_2171_, 4);
v_nondep_2182_ = lean_ctor_get_uint8(v_a_2171_, sizeof(void*)*5);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_a_2171_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; lean_object* v_unused_2277_; 
v_unused_2276_ = lean_ctor_get(v_a_2171_, 1);
lean_dec(v_unused_2276_);
v_unused_2277_ = lean_ctor_get(v_a_2171_, 0);
lean_dec(v_unused_2277_);
v___x_2184_ = v_a_2171_;
v_isShared_2185_ = v_isSharedCheck_2275_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_value_2181_);
lean_inc(v_type_2180_);
lean_inc(v_userName_2179_);
lean_dec(v_a_2171_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2275_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; 
v___x_2186_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v___y_2154_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v___x_2186_, 1);
if (v_nondep_2182_ == 0)
{
uint8_t v___x_2194_; 
v___x_2194_ = l_Lean_FVarIdSet_contains(v_a_2187_, v_fvarId_2168_);
lean_dec(v_a_2187_);
if (v___x_2194_ == 0)
{
lean_del_object(v___x_2184_);
lean_dec_ref(v_value_2181_);
goto v___jp_2188_;
}
else
{
lean_object* v___x_2195_; 
lean_dec(v_fvarId_2168_);
v___x_2195_ = l_Lean_Meta_Closure_collectExpr(v_type_2180_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; lean_object* v___x_2197_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2195_, 1);
v___x_2197_ = l_Lean_Meta_Closure_collectExpr(v_value_2181_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2199_; lean_object* v_visitedLevel_2200_; lean_object* v_visitedExpr_2201_; lean_object* v_levelParams_2202_; lean_object* v_nextLevelIdx_2203_; lean_object* v_levelArgs_2204_; lean_object* v_newLocalDecls_2205_; lean_object* v_newLocalDeclsForMVars_2206_; lean_object* v_newLetDecls_2207_; lean_object* v_nextExprIdx_2208_; lean_object* v_exprMVarArgs_2209_; lean_object* v_exprFVarArgs_2210_; lean_object* v_toProcess_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2250_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = lean_st_ref_take(v___y_2152_);
v_visitedLevel_2200_ = lean_ctor_get(v___x_2199_, 0);
v_visitedExpr_2201_ = lean_ctor_get(v___x_2199_, 1);
v_levelParams_2202_ = lean_ctor_get(v___x_2199_, 2);
v_nextLevelIdx_2203_ = lean_ctor_get(v___x_2199_, 3);
v_levelArgs_2204_ = lean_ctor_get(v___x_2199_, 4);
v_newLocalDecls_2205_ = lean_ctor_get(v___x_2199_, 5);
v_newLocalDeclsForMVars_2206_ = lean_ctor_get(v___x_2199_, 6);
v_newLetDecls_2207_ = lean_ctor_get(v___x_2199_, 7);
v_nextExprIdx_2208_ = lean_ctor_get(v___x_2199_, 8);
v_exprMVarArgs_2209_ = lean_ctor_get(v___x_2199_, 9);
v_exprFVarArgs_2210_ = lean_ctor_get(v___x_2199_, 10);
v_toProcess_2211_ = lean_ctor_get(v___x_2199_, 11);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2213_ = v___x_2199_;
v_isShared_2214_ = v_isSharedCheck_2250_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_toProcess_2211_);
lean_inc(v_exprFVarArgs_2210_);
lean_inc(v_exprMVarArgs_2209_);
lean_inc(v_nextExprIdx_2208_);
lean_inc(v_newLetDecls_2207_);
lean_inc(v_newLocalDeclsForMVars_2206_);
lean_inc(v_newLocalDecls_2205_);
lean_inc(v_levelArgs_2204_);
lean_inc(v_nextLevelIdx_2203_);
lean_inc(v_levelParams_2202_);
lean_inc(v_visitedExpr_2201_);
lean_inc(v_visitedLevel_2200_);
lean_dec(v___x_2199_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2250_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2215_; uint8_t v___x_2216_; lean_object* v___x_2218_; 
v___x_2215_ = lean_unsigned_to_nat(0u);
v___x_2216_ = 0;
lean_inc(v_a_2198_);
lean_inc(v_newFVarId_2169_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 4, v_a_2198_);
lean_ctor_set(v___x_2184_, 3, v_a_2196_);
lean_ctor_set(v___x_2184_, 1, v_newFVarId_2169_);
lean_ctor_set(v___x_2184_, 0, v___x_2215_);
v___x_2218_ = v___x_2184_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2249_, 1, v_newFVarId_2169_);
lean_ctor_set(v_reuseFailAlloc_2249_, 2, v_userName_2179_);
lean_ctor_set(v_reuseFailAlloc_2249_, 3, v_a_2196_);
lean_ctor_set(v_reuseFailAlloc_2249_, 4, v_a_2198_);
lean_ctor_set_uint8(v_reuseFailAlloc_2249_, sizeof(void*)*5, v_nondep_2182_);
v___x_2218_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
lean_ctor_set_uint8(v___x_2218_, sizeof(void*)*5 + 1, v___x_2216_);
v___x_2219_ = lean_array_push(v_newLetDecls_2207_, v___x_2218_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 7, v___x_2219_);
v___x_2221_ = v___x_2213_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_visitedLevel_2200_);
lean_ctor_set(v_reuseFailAlloc_2248_, 1, v_visitedExpr_2201_);
lean_ctor_set(v_reuseFailAlloc_2248_, 2, v_levelParams_2202_);
lean_ctor_set(v_reuseFailAlloc_2248_, 3, v_nextLevelIdx_2203_);
lean_ctor_set(v_reuseFailAlloc_2248_, 4, v_levelArgs_2204_);
lean_ctor_set(v_reuseFailAlloc_2248_, 5, v_newLocalDecls_2205_);
lean_ctor_set(v_reuseFailAlloc_2248_, 6, v_newLocalDeclsForMVars_2206_);
lean_ctor_set(v_reuseFailAlloc_2248_, 7, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2248_, 8, v_nextExprIdx_2208_);
lean_ctor_set(v_reuseFailAlloc_2248_, 9, v_exprMVarArgs_2209_);
lean_ctor_set(v_reuseFailAlloc_2248_, 10, v_exprFVarArgs_2210_);
lean_ctor_set(v_reuseFailAlloc_2248_, 11, v_toProcess_2211_);
v___x_2221_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v_visitedLevel_2224_; lean_object* v_visitedExpr_2225_; lean_object* v_levelParams_2226_; lean_object* v_nextLevelIdx_2227_; lean_object* v_levelArgs_2228_; lean_object* v_newLocalDecls_2229_; lean_object* v_newLocalDeclsForMVars_2230_; lean_object* v_newLetDecls_2231_; lean_object* v_nextExprIdx_2232_; lean_object* v_exprMVarArgs_2233_; lean_object* v_exprFVarArgs_2234_; lean_object* v_toProcess_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2247_; 
v___x_2222_ = lean_st_ref_put(v___y_2152_, v___x_2221_);
v___x_2223_ = lean_st_ref_take(v___y_2152_);
v_visitedLevel_2224_ = lean_ctor_get(v___x_2223_, 0);
v_visitedExpr_2225_ = lean_ctor_get(v___x_2223_, 1);
v_levelParams_2226_ = lean_ctor_get(v___x_2223_, 2);
v_nextLevelIdx_2227_ = lean_ctor_get(v___x_2223_, 3);
v_levelArgs_2228_ = lean_ctor_get(v___x_2223_, 4);
v_newLocalDecls_2229_ = lean_ctor_get(v___x_2223_, 5);
v_newLocalDeclsForMVars_2230_ = lean_ctor_get(v___x_2223_, 6);
v_newLetDecls_2231_ = lean_ctor_get(v___x_2223_, 7);
v_nextExprIdx_2232_ = lean_ctor_get(v___x_2223_, 8);
v_exprMVarArgs_2233_ = lean_ctor_get(v___x_2223_, 9);
v_exprFVarArgs_2234_ = lean_ctor_get(v___x_2223_, 10);
v_toProcess_2235_ = lean_ctor_get(v___x_2223_, 11);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2237_ = v___x_2223_;
v_isShared_2238_ = v_isSharedCheck_2247_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_toProcess_2235_);
lean_inc(v_exprFVarArgs_2234_);
lean_inc(v_exprMVarArgs_2233_);
lean_inc(v_nextExprIdx_2232_);
lean_inc(v_newLetDecls_2231_);
lean_inc(v_newLocalDeclsForMVars_2230_);
lean_inc(v_newLocalDecls_2229_);
lean_inc(v_levelArgs_2228_);
lean_inc(v_nextLevelIdx_2227_);
lean_inc(v_levelParams_2226_);
lean_inc(v_visitedExpr_2225_);
lean_inc(v_visitedLevel_2224_);
lean_dec(v___x_2223_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2247_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
size_t v_sz_2239_; size_t v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2243_; 
v_sz_2239_ = lean_array_size(v_newLocalDecls_2229_);
v___x_2240_ = ((size_t)0ULL);
v___x_2241_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__0(v_newFVarId_2169_, v_a_2198_, v_sz_2239_, v___x_2240_, v_newLocalDecls_2229_);
lean_dec(v_a_2198_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 5, v___x_2241_);
v___x_2243_ = v___x_2237_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_visitedLevel_2224_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_visitedExpr_2225_);
lean_ctor_set(v_reuseFailAlloc_2246_, 2, v_levelParams_2226_);
lean_ctor_set(v_reuseFailAlloc_2246_, 3, v_nextLevelIdx_2227_);
lean_ctor_set(v_reuseFailAlloc_2246_, 4, v_levelArgs_2228_);
lean_ctor_set(v_reuseFailAlloc_2246_, 5, v___x_2241_);
lean_ctor_set(v_reuseFailAlloc_2246_, 6, v_newLocalDeclsForMVars_2230_);
lean_ctor_set(v_reuseFailAlloc_2246_, 7, v_newLetDecls_2231_);
lean_ctor_set(v_reuseFailAlloc_2246_, 8, v_nextExprIdx_2232_);
lean_ctor_set(v_reuseFailAlloc_2246_, 9, v_exprMVarArgs_2233_);
lean_ctor_set(v_reuseFailAlloc_2246_, 10, v_exprFVarArgs_2234_);
lean_ctor_set(v_reuseFailAlloc_2246_, 11, v_toProcess_2235_);
v___x_2243_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
lean_object* v___x_2244_; 
v___x_2244_ = lean_st_ref_put(v___y_2152_, v___x_2243_);
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec(v_a_2196_);
lean_del_object(v___x_2184_);
lean_dec(v_userName_2179_);
lean_dec(v_newFVarId_2169_);
v_a_2251_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2197_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2197_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_del_object(v___x_2184_);
lean_dec_ref(v_value_2181_);
lean_dec(v_userName_2179_);
lean_dec(v_newFVarId_2169_);
v_a_2259_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2195_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2195_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
}
else
{
lean_dec(v_a_2187_);
lean_del_object(v___x_2184_);
lean_dec_ref(v_value_2181_);
goto v___jp_2188_;
}
v___jp_2188_:
{
uint8_t v___x_2189_; lean_object* v___x_2190_; 
v___x_2189_ = 0;
v___x_2190_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2169_, v_userName_2179_, v_type_2180_, v___x_2189_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
lean_dec_ref_known(v___x_2190_, 1);
v___x_2191_ = l_Lean_mkFVar(v_fvarId_2168_);
v___x_2192_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2191_, v___y_2152_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_dec_ref_known(v___x_2192_, 1);
goto _start;
}
else
{
return v___x_2192_;
}
}
else
{
lean_dec(v_fvarId_2168_);
return v___x_2190_;
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_del_object(v___x_2184_);
lean_dec_ref(v_value_2181_);
lean_dec_ref(v_type_2180_);
lean_dec(v_userName_2179_);
lean_dec(v_newFVarId_2169_);
lean_dec(v_fvarId_2168_);
v_a_2267_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2186_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2186_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec(v_newFVarId_2169_);
lean_dec(v_fvarId_2168_);
v_a_2278_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2170_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2170_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
}
}
else
{
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2294_; 
v_a_2287_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2289_ = v___x_2158_;
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2158_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2292_; 
if (v_isShared_2290_ == 0)
{
v___x_2292_ = v___x_2289_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_a_2287_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
uint8_t v___y_8256__boxed_2302_; lean_object* v_res_2303_; 
v___y_8256__boxed_2302_ = lean_unbox(v___y_2295_);
v_res_2303_ = l_Lean_Meta_Closure_process(v___y_8256__boxed_2302_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object* v_decls_2304_, lean_object* v_xs_2305_, uint8_t v_isLambda_2306_, lean_object* v_i_2307_, lean_object* v_x_2308_, lean_object* v_b_2309_){
_start:
{
lean_object* v_decl_2310_; 
v_decl_2310_ = lean_array_fget_borrowed(v_decls_2304_, v_i_2307_);
if (lean_obj_tag(v_decl_2310_) == 0)
{
lean_object* v_userName_2311_; lean_object* v_type_2312_; uint8_t v_bi_2313_; lean_object* v_ty_2314_; 
v_userName_2311_ = lean_ctor_get(v_decl_2310_, 2);
v_type_2312_ = lean_ctor_get(v_decl_2310_, 3);
v_bi_2313_ = lean_ctor_get_uint8(v_decl_2310_, sizeof(void*)*4);
v_ty_2314_ = lean_expr_abstract_range(v_type_2312_, v_i_2307_, v_xs_2305_);
if (v_isLambda_2306_ == 0)
{
lean_object* v___x_2315_; 
lean_inc(v_userName_2311_);
v___x_2315_ = l_Lean_mkForall(v_userName_2311_, v_bi_2313_, v_ty_2314_, v_b_2309_);
return v___x_2315_;
}
else
{
lean_object* v___x_2316_; 
lean_inc(v_userName_2311_);
v___x_2316_ = l_Lean_mkLambda(v_userName_2311_, v_bi_2313_, v_ty_2314_, v_b_2309_);
return v___x_2316_;
}
}
else
{
lean_object* v_userName_2317_; lean_object* v_type_2318_; lean_object* v_value_2319_; uint8_t v_nondep_2320_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v_userName_2317_ = lean_ctor_get(v_decl_2310_, 2);
v_type_2318_ = lean_ctor_get(v_decl_2310_, 3);
v_value_2319_ = lean_ctor_get(v_decl_2310_, 4);
v_nondep_2320_ = lean_ctor_get_uint8(v_decl_2310_, sizeof(void*)*5);
v___x_2321_ = lean_unsigned_to_nat(0u);
v___x_2322_ = lean_expr_has_loose_bvar(v_b_2309_, v___x_2321_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = lean_unsigned_to_nat(1u);
v___x_2324_ = lean_expr_lower_loose_bvars(v_b_2309_, v___x_2323_, v___x_2323_);
lean_dec_ref(v_b_2309_);
return v___x_2324_;
}
else
{
lean_object* v_ty_2325_; lean_object* v_val_2326_; lean_object* v___x_2327_; 
v_ty_2325_ = lean_expr_abstract_range(v_type_2318_, v_i_2307_, v_xs_2305_);
v_val_2326_ = lean_expr_abstract_range(v_value_2319_, v_i_2307_, v_xs_2305_);
lean_inc(v_userName_2317_);
v___x_2327_ = l_Lean_Expr_letE___override(v_userName_2317_, v_ty_2325_, v_val_2326_, v_b_2309_, v_nondep_2320_);
return v___x_2327_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object* v_decls_2328_, lean_object* v_xs_2329_, lean_object* v_isLambda_2330_, lean_object* v_i_2331_, lean_object* v_x_2332_, lean_object* v_b_2333_){
_start:
{
uint8_t v_isLambda_boxed_2334_; lean_object* v_res_2335_; 
v_isLambda_boxed_2334_ = lean_unbox(v_isLambda_2330_);
v_res_2335_ = l_Lean_Meta_Closure_mkBinding___lam__0(v_decls_2328_, v_xs_2329_, v_isLambda_boxed_2334_, v_i_2331_, v_x_2332_, v_b_2333_);
lean_dec(v_i_2331_);
lean_dec_ref(v_xs_2329_);
lean_dec_ref(v_decls_2328_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t v_isLambda_2356_, lean_object* v_decls_2357_, lean_object* v_b_2358_){
_start:
{
lean_object* v___f_2359_; lean_object* v___x_2360_; size_t v_sz_2361_; size_t v___x_2362_; lean_object* v_xs_2363_; lean_object* v___x_2364_; lean_object* v___f_2365_; lean_object* v_b_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___f_2359_ = ((lean_object*)(l_Lean_Meta_Closure_mkBinding___closed__0));
v___x_2360_ = ((lean_object*)(l_Lean_Meta_Closure_mkBinding___closed__10));
v_sz_2361_ = lean_array_size(v_decls_2357_);
v___x_2362_ = ((size_t)0ULL);
lean_inc_ref_n(v_decls_2357_, 2);
v_xs_2363_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2360_, v___f_2359_, v_sz_2361_, v___x_2362_, v_decls_2357_);
v___x_2364_ = lean_box(v_isLambda_2356_);
lean_inc(v_xs_2363_);
v___f_2365_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_mkBinding___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2365_, 0, v_decls_2357_);
lean_closure_set(v___f_2365_, 1, v_xs_2363_);
lean_closure_set(v___f_2365_, 2, v___x_2364_);
v_b_2366_ = lean_expr_abstract(v_b_2358_, v_xs_2363_);
lean_dec(v_xs_2363_);
v___x_2367_ = lean_array_get_size(v_decls_2357_);
lean_dec_ref(v_decls_2357_);
v___x_2368_ = l_Nat_foldRev___redArg(v___x_2367_, v___f_2365_, v_b_2366_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object* v_isLambda_2369_, lean_object* v_decls_2370_, lean_object* v_b_2371_){
_start:
{
uint8_t v_isLambda_boxed_2372_; lean_object* v_res_2373_; 
v_isLambda_boxed_2372_ = lean_unbox(v_isLambda_2369_);
v_res_2373_ = l_Lean_Meta_Closure_mkBinding(v_isLambda_boxed_2372_, v_decls_2370_, v_b_2371_);
lean_dec_ref(v_b_2371_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t v_sz_2374_, size_t v_i_2375_, lean_object* v_bs_2376_){
_start:
{
uint8_t v___x_2377_; 
v___x_2377_ = lean_usize_dec_lt(v_i_2375_, v_sz_2374_);
if (v___x_2377_ == 0)
{
return v_bs_2376_;
}
else
{
lean_object* v_v_2378_; lean_object* v___x_2379_; lean_object* v_bs_x27_2380_; lean_object* v___x_2381_; size_t v___x_2382_; size_t v___x_2383_; lean_object* v___x_2384_; 
v_v_2378_ = lean_array_uget(v_bs_2376_, v_i_2375_);
v___x_2379_ = lean_unsigned_to_nat(0u);
v_bs_x27_2380_ = lean_array_uset(v_bs_2376_, v_i_2375_, v___x_2379_);
v___x_2381_ = l_Lean_LocalDecl_toExpr(v_v_2378_);
v___x_2382_ = ((size_t)1ULL);
v___x_2383_ = lean_usize_add(v_i_2375_, v___x_2382_);
v___x_2384_ = lean_array_uset(v_bs_x27_2380_, v_i_2375_, v___x_2381_);
v_i_2375_ = v___x_2383_;
v_bs_2376_ = v___x_2384_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object* v_sz_2386_, lean_object* v_i_2387_, lean_object* v_bs_2388_){
_start:
{
size_t v_sz_boxed_2389_; size_t v_i_boxed_2390_; lean_object* v_res_2391_; 
v_sz_boxed_2389_ = lean_unbox_usize(v_sz_2386_);
lean_dec(v_sz_2386_);
v_i_boxed_2390_ = lean_unbox_usize(v_i_2387_);
lean_dec(v_i_2387_);
v_res_2391_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_boxed_2389_, v_i_boxed_2390_, v_bs_2388_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object* v_decls_2392_, lean_object* v_xs_2393_, lean_object* v_x_2394_, lean_object* v_x_2395_){
_start:
{
lean_object* v_zero_2396_; uint8_t v_isZero_2397_; 
v_zero_2396_ = lean_unsigned_to_nat(0u);
v_isZero_2397_ = lean_nat_dec_eq(v_x_2394_, v_zero_2396_);
if (v_isZero_2397_ == 1)
{
lean_dec(v_x_2394_);
return v_x_2395_;
}
else
{
lean_object* v_one_2398_; lean_object* v_n_2399_; lean_object* v_decl_2400_; 
v_one_2398_ = lean_unsigned_to_nat(1u);
v_n_2399_ = lean_nat_sub(v_x_2394_, v_one_2398_);
lean_dec(v_x_2394_);
v_decl_2400_ = lean_array_fget_borrowed(v_decls_2392_, v_n_2399_);
if (lean_obj_tag(v_decl_2400_) == 0)
{
lean_object* v_userName_2401_; lean_object* v_type_2402_; uint8_t v_bi_2403_; lean_object* v_ty_2404_; lean_object* v___x_2405_; 
v_userName_2401_ = lean_ctor_get(v_decl_2400_, 2);
v_type_2402_ = lean_ctor_get(v_decl_2400_, 3);
v_bi_2403_ = lean_ctor_get_uint8(v_decl_2400_, sizeof(void*)*4);
v_ty_2404_ = lean_expr_abstract_range(v_type_2402_, v_n_2399_, v_xs_2393_);
lean_inc(v_userName_2401_);
v___x_2405_ = l_Lean_mkLambda(v_userName_2401_, v_bi_2403_, v_ty_2404_, v_x_2395_);
v_x_2394_ = v_n_2399_;
v_x_2395_ = v___x_2405_;
goto _start;
}
else
{
lean_object* v_userName_2407_; lean_object* v_type_2408_; lean_object* v_value_2409_; uint8_t v_nondep_2410_; uint8_t v___x_2411_; 
v_userName_2407_ = lean_ctor_get(v_decl_2400_, 2);
v_type_2408_ = lean_ctor_get(v_decl_2400_, 3);
v_value_2409_ = lean_ctor_get(v_decl_2400_, 4);
v_nondep_2410_ = lean_ctor_get_uint8(v_decl_2400_, sizeof(void*)*5);
v___x_2411_ = lean_expr_has_loose_bvar(v_x_2395_, v_zero_2396_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_expr_lower_loose_bvars(v_x_2395_, v_one_2398_, v_one_2398_);
lean_dec_ref(v_x_2395_);
v_x_2394_ = v_n_2399_;
v_x_2395_ = v___x_2412_;
goto _start;
}
else
{
lean_object* v_ty_2414_; lean_object* v_val_2415_; lean_object* v___x_2416_; 
v_ty_2414_ = lean_expr_abstract_range(v_type_2408_, v_n_2399_, v_xs_2393_);
v_val_2415_ = lean_expr_abstract_range(v_value_2409_, v_n_2399_, v_xs_2393_);
lean_inc(v_userName_2407_);
v___x_2416_ = l_Lean_Expr_letE___override(v_userName_2407_, v_ty_2414_, v_val_2415_, v_x_2395_, v_nondep_2410_);
v_x_2394_ = v_n_2399_;
v_x_2395_ = v___x_2416_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object* v_decls_2418_, lean_object* v_xs_2419_, lean_object* v_x_2420_, lean_object* v_x_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2418_, v_xs_2419_, v_x_2420_, v_x_2421_);
lean_dec_ref(v_xs_2419_);
lean_dec_ref(v_decls_2418_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object* v_decls_2423_, lean_object* v_xs_2424_, lean_object* v_x_2425_, lean_object* v_x_2426_){
_start:
{
lean_object* v_zero_2427_; uint8_t v_isZero_2428_; 
v_zero_2427_ = lean_unsigned_to_nat(0u);
v_isZero_2428_ = lean_nat_dec_eq(v_x_2425_, v_zero_2427_);
if (v_isZero_2428_ == 1)
{
return v_x_2426_;
}
else
{
lean_object* v_one_2429_; lean_object* v_n_2430_; lean_object* v_decl_2431_; 
v_one_2429_ = lean_unsigned_to_nat(1u);
v_n_2430_ = lean_nat_sub(v_x_2425_, v_one_2429_);
v_decl_2431_ = lean_array_fget_borrowed(v_decls_2423_, v_n_2430_);
if (lean_obj_tag(v_decl_2431_) == 0)
{
lean_object* v_userName_2432_; lean_object* v_type_2433_; uint8_t v_bi_2434_; lean_object* v_ty_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v_userName_2432_ = lean_ctor_get(v_decl_2431_, 2);
v_type_2433_ = lean_ctor_get(v_decl_2431_, 3);
v_bi_2434_ = lean_ctor_get_uint8(v_decl_2431_, sizeof(void*)*4);
v_ty_2435_ = lean_expr_abstract_range(v_type_2433_, v_n_2430_, v_xs_2424_);
lean_inc(v_userName_2432_);
v___x_2436_ = l_Lean_mkLambda(v_userName_2432_, v_bi_2434_, v_ty_2435_, v_x_2426_);
v___x_2437_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2423_, v_xs_2424_, v_n_2430_, v___x_2436_);
return v___x_2437_;
}
else
{
lean_object* v_userName_2438_; lean_object* v_type_2439_; lean_object* v_value_2440_; uint8_t v_nondep_2441_; uint8_t v___x_2442_; 
v_userName_2438_ = lean_ctor_get(v_decl_2431_, 2);
v_type_2439_ = lean_ctor_get(v_decl_2431_, 3);
v_value_2440_ = lean_ctor_get(v_decl_2431_, 4);
v_nondep_2441_ = lean_ctor_get_uint8(v_decl_2431_, sizeof(void*)*5);
v___x_2442_ = lean_expr_has_loose_bvar(v_x_2426_, v_zero_2427_);
if (v___x_2442_ == 0)
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_expr_lower_loose_bvars(v_x_2426_, v_one_2429_, v_one_2429_);
lean_dec_ref(v_x_2426_);
v___x_2444_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2423_, v_xs_2424_, v_n_2430_, v___x_2443_);
return v___x_2444_;
}
else
{
lean_object* v_ty_2445_; lean_object* v_val_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v_ty_2445_ = lean_expr_abstract_range(v_type_2439_, v_n_2430_, v_xs_2424_);
v_val_2446_ = lean_expr_abstract_range(v_value_2440_, v_n_2430_, v_xs_2424_);
lean_inc(v_userName_2438_);
v___x_2447_ = l_Lean_Expr_letE___override(v_userName_2438_, v_ty_2445_, v_val_2446_, v_x_2426_, v_nondep_2441_);
v___x_2448_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2423_, v_xs_2424_, v_n_2430_, v___x_2447_);
return v___x_2448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object* v_decls_2449_, lean_object* v_xs_2450_, lean_object* v_x_2451_, lean_object* v_x_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2449_, v_xs_2450_, v_x_2451_, v_x_2452_);
lean_dec(v_x_2451_);
lean_dec_ref(v_xs_2450_);
lean_dec_ref(v_decls_2449_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object* v_decls_2454_, lean_object* v_b_2455_){
_start:
{
size_t v_sz_2456_; size_t v___x_2457_; lean_object* v_xs_2458_; lean_object* v_b_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v_sz_2456_ = lean_array_size(v_decls_2454_);
v___x_2457_ = ((size_t)0ULL);
lean_inc_ref(v_decls_2454_);
v_xs_2458_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2456_, v___x_2457_, v_decls_2454_);
v_b_2459_ = lean_expr_abstract(v_b_2455_, v_xs_2458_);
v___x_2460_ = lean_array_get_size(v_decls_2454_);
v___x_2461_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2454_, v_xs_2458_, v___x_2460_, v_b_2459_);
lean_dec_ref(v_xs_2458_);
lean_dec_ref(v_decls_2454_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object* v_decls_2462_, lean_object* v_b_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Lean_Meta_Closure_mkLambda(v_decls_2462_, v_b_2463_);
lean_dec_ref(v_b_2463_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object* v_decls_2465_, lean_object* v_xs_2466_, lean_object* v_x_2467_, lean_object* v_x_2468_){
_start:
{
lean_object* v_zero_2469_; uint8_t v_isZero_2470_; 
v_zero_2469_ = lean_unsigned_to_nat(0u);
v_isZero_2470_ = lean_nat_dec_eq(v_x_2467_, v_zero_2469_);
if (v_isZero_2470_ == 1)
{
lean_dec(v_x_2467_);
return v_x_2468_;
}
else
{
lean_object* v_one_2471_; lean_object* v_n_2472_; lean_object* v_decl_2473_; 
v_one_2471_ = lean_unsigned_to_nat(1u);
v_n_2472_ = lean_nat_sub(v_x_2467_, v_one_2471_);
lean_dec(v_x_2467_);
v_decl_2473_ = lean_array_fget_borrowed(v_decls_2465_, v_n_2472_);
if (lean_obj_tag(v_decl_2473_) == 0)
{
lean_object* v_userName_2474_; lean_object* v_type_2475_; uint8_t v_bi_2476_; lean_object* v_ty_2477_; lean_object* v___x_2478_; 
v_userName_2474_ = lean_ctor_get(v_decl_2473_, 2);
v_type_2475_ = lean_ctor_get(v_decl_2473_, 3);
v_bi_2476_ = lean_ctor_get_uint8(v_decl_2473_, sizeof(void*)*4);
v_ty_2477_ = lean_expr_abstract_range(v_type_2475_, v_n_2472_, v_xs_2466_);
lean_inc(v_userName_2474_);
v___x_2478_ = l_Lean_mkForall(v_userName_2474_, v_bi_2476_, v_ty_2477_, v_x_2468_);
v_x_2467_ = v_n_2472_;
v_x_2468_ = v___x_2478_;
goto _start;
}
else
{
lean_object* v_userName_2480_; lean_object* v_type_2481_; lean_object* v_value_2482_; uint8_t v_nondep_2483_; uint8_t v___x_2484_; 
v_userName_2480_ = lean_ctor_get(v_decl_2473_, 2);
v_type_2481_ = lean_ctor_get(v_decl_2473_, 3);
v_value_2482_ = lean_ctor_get(v_decl_2473_, 4);
v_nondep_2483_ = lean_ctor_get_uint8(v_decl_2473_, sizeof(void*)*5);
v___x_2484_ = lean_expr_has_loose_bvar(v_x_2468_, v_zero_2469_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_expr_lower_loose_bvars(v_x_2468_, v_one_2471_, v_one_2471_);
lean_dec_ref(v_x_2468_);
v_x_2467_ = v_n_2472_;
v_x_2468_ = v___x_2485_;
goto _start;
}
else
{
lean_object* v_ty_2487_; lean_object* v_val_2488_; lean_object* v___x_2489_; 
v_ty_2487_ = lean_expr_abstract_range(v_type_2481_, v_n_2472_, v_xs_2466_);
v_val_2488_ = lean_expr_abstract_range(v_value_2482_, v_n_2472_, v_xs_2466_);
lean_inc(v_userName_2480_);
v___x_2489_ = l_Lean_Expr_letE___override(v_userName_2480_, v_ty_2487_, v_val_2488_, v_x_2468_, v_nondep_2483_);
v_x_2467_ = v_n_2472_;
v_x_2468_ = v___x_2489_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object* v_decls_2491_, lean_object* v_xs_2492_, lean_object* v_x_2493_, lean_object* v_x_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2491_, v_xs_2492_, v_x_2493_, v_x_2494_);
lean_dec_ref(v_xs_2492_);
lean_dec_ref(v_decls_2491_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object* v_decls_2496_, lean_object* v_xs_2497_, lean_object* v_x_2498_, lean_object* v_x_2499_){
_start:
{
lean_object* v_zero_2500_; uint8_t v_isZero_2501_; 
v_zero_2500_ = lean_unsigned_to_nat(0u);
v_isZero_2501_ = lean_nat_dec_eq(v_x_2498_, v_zero_2500_);
if (v_isZero_2501_ == 1)
{
return v_x_2499_;
}
else
{
lean_object* v_one_2502_; lean_object* v_n_2503_; lean_object* v_decl_2504_; 
v_one_2502_ = lean_unsigned_to_nat(1u);
v_n_2503_ = lean_nat_sub(v_x_2498_, v_one_2502_);
v_decl_2504_ = lean_array_fget_borrowed(v_decls_2496_, v_n_2503_);
if (lean_obj_tag(v_decl_2504_) == 0)
{
lean_object* v_userName_2505_; lean_object* v_type_2506_; uint8_t v_bi_2507_; lean_object* v_ty_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_userName_2505_ = lean_ctor_get(v_decl_2504_, 2);
v_type_2506_ = lean_ctor_get(v_decl_2504_, 3);
v_bi_2507_ = lean_ctor_get_uint8(v_decl_2504_, sizeof(void*)*4);
v_ty_2508_ = lean_expr_abstract_range(v_type_2506_, v_n_2503_, v_xs_2497_);
lean_inc(v_userName_2505_);
v___x_2509_ = l_Lean_mkForall(v_userName_2505_, v_bi_2507_, v_ty_2508_, v_x_2499_);
v___x_2510_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2496_, v_xs_2497_, v_n_2503_, v___x_2509_);
return v___x_2510_;
}
else
{
lean_object* v_userName_2511_; lean_object* v_type_2512_; lean_object* v_value_2513_; uint8_t v_nondep_2514_; uint8_t v___x_2515_; 
v_userName_2511_ = lean_ctor_get(v_decl_2504_, 2);
v_type_2512_ = lean_ctor_get(v_decl_2504_, 3);
v_value_2513_ = lean_ctor_get(v_decl_2504_, 4);
v_nondep_2514_ = lean_ctor_get_uint8(v_decl_2504_, sizeof(void*)*5);
v___x_2515_ = lean_expr_has_loose_bvar(v_x_2499_, v_zero_2500_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_expr_lower_loose_bvars(v_x_2499_, v_one_2502_, v_one_2502_);
lean_dec_ref(v_x_2499_);
v___x_2517_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2496_, v_xs_2497_, v_n_2503_, v___x_2516_);
return v___x_2517_;
}
else
{
lean_object* v_ty_2518_; lean_object* v_val_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v_ty_2518_ = lean_expr_abstract_range(v_type_2512_, v_n_2503_, v_xs_2497_);
v_val_2519_ = lean_expr_abstract_range(v_value_2513_, v_n_2503_, v_xs_2497_);
lean_inc(v_userName_2511_);
v___x_2520_ = l_Lean_Expr_letE___override(v_userName_2511_, v_ty_2518_, v_val_2519_, v_x_2499_, v_nondep_2514_);
v___x_2521_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2496_, v_xs_2497_, v_n_2503_, v___x_2520_);
return v___x_2521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object* v_decls_2522_, lean_object* v_xs_2523_, lean_object* v_x_2524_, lean_object* v_x_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2522_, v_xs_2523_, v_x_2524_, v_x_2525_);
lean_dec(v_x_2524_);
lean_dec_ref(v_xs_2523_);
lean_dec_ref(v_decls_2522_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object* v_decls_2527_, lean_object* v_b_2528_){
_start:
{
size_t v_sz_2529_; size_t v___x_2530_; lean_object* v_xs_2531_; lean_object* v_b_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v_sz_2529_ = lean_array_size(v_decls_2527_);
v___x_2530_ = ((size_t)0ULL);
lean_inc_ref(v_decls_2527_);
v_xs_2531_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2529_, v___x_2530_, v_decls_2527_);
v_b_2532_ = lean_expr_abstract(v_b_2528_, v_xs_2531_);
v___x_2533_ = lean_array_get_size(v_decls_2527_);
v___x_2534_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2527_, v_xs_2531_, v___x_2533_, v_b_2532_);
lean_dec_ref(v_xs_2531_);
lean_dec_ref(v_decls_2527_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object* v_decls_2535_, lean_object* v_b_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lean_Meta_Closure_mkForall(v_decls_2535_, v_b_2536_);
lean_dec_ref(v_b_2536_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object* v___y_2538_, lean_object* v_cache_2539_, lean_object* v_a_x3f_2540_){
_start:
{
lean_object* v___x_2542_; lean_object* v_mctx_2543_; lean_object* v_zetaDeltaFVarIds_2544_; lean_object* v_postponed_2545_; lean_object* v_diag_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2556_; 
v___x_2542_ = lean_st_ref_take(v___y_2538_);
v_mctx_2543_ = lean_ctor_get(v___x_2542_, 0);
v_zetaDeltaFVarIds_2544_ = lean_ctor_get(v___x_2542_, 2);
v_postponed_2545_ = lean_ctor_get(v___x_2542_, 3);
v_diag_2546_ = lean_ctor_get(v___x_2542_, 4);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2556_ == 0)
{
lean_object* v_unused_2557_; 
v_unused_2557_ = lean_ctor_get(v___x_2542_, 1);
lean_dec(v_unused_2557_);
v___x_2548_ = v___x_2542_;
v_isShared_2549_ = v_isSharedCheck_2556_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_diag_2546_);
lean_inc(v_postponed_2545_);
lean_inc(v_zetaDeltaFVarIds_2544_);
lean_inc(v_mctx_2543_);
lean_dec(v___x_2542_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2556_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2550_; lean_object* v___x_2552_; 
v___x_2550_ = lean_box(0);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 1, v_cache_2539_);
v___x_2552_ = v___x_2548_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_mctx_2543_);
lean_ctor_set(v_reuseFailAlloc_2555_, 1, v_cache_2539_);
lean_ctor_set(v_reuseFailAlloc_2555_, 2, v_zetaDeltaFVarIds_2544_);
lean_ctor_set(v_reuseFailAlloc_2555_, 3, v_postponed_2545_);
lean_ctor_set(v_reuseFailAlloc_2555_, 4, v_diag_2546_);
v___x_2552_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = lean_st_ref_put(v___y_2538_, v___x_2552_);
v___x_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2550_);
return v___x_2554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object* v___y_2558_, lean_object* v_cache_2559_, lean_object* v_a_x3f_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v___y_2558_, v_cache_2559_, v_a_x3f_2560_);
lean_dec(v_a_x3f_2560_);
lean_dec(v___y_2558_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object* v___y_2563_, lean_object* v_zetaDeltaFVarIds_2564_, lean_object* v_a_x3f_2565_){
_start:
{
lean_object* v___x_2567_; lean_object* v_mctx_2568_; lean_object* v_cache_2569_; lean_object* v_postponed_2570_; lean_object* v_diag_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2581_; 
v___x_2567_ = lean_st_ref_take(v___y_2563_);
v_mctx_2568_ = lean_ctor_get(v___x_2567_, 0);
v_cache_2569_ = lean_ctor_get(v___x_2567_, 1);
v_postponed_2570_ = lean_ctor_get(v___x_2567_, 3);
v_diag_2571_ = lean_ctor_get(v___x_2567_, 4);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2581_ == 0)
{
lean_object* v_unused_2582_; 
v_unused_2582_ = lean_ctor_get(v___x_2567_, 2);
lean_dec(v_unused_2582_);
v___x_2573_ = v___x_2567_;
v_isShared_2574_ = v_isSharedCheck_2581_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_diag_2571_);
lean_inc(v_postponed_2570_);
lean_inc(v_cache_2569_);
lean_inc(v_mctx_2568_);
lean_dec(v___x_2567_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2581_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2575_; lean_object* v___x_2577_; 
v___x_2575_ = lean_box(0);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 2, v_zetaDeltaFVarIds_2564_);
v___x_2577_ = v___x_2573_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_mctx_2568_);
lean_ctor_set(v_reuseFailAlloc_2580_, 1, v_cache_2569_);
lean_ctor_set(v_reuseFailAlloc_2580_, 2, v_zetaDeltaFVarIds_2564_);
lean_ctor_set(v_reuseFailAlloc_2580_, 3, v_postponed_2570_);
lean_ctor_set(v_reuseFailAlloc_2580_, 4, v_diag_2571_);
v___x_2577_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = lean_st_ref_put(v___y_2563_, v___x_2577_);
v___x_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2575_);
return v___x_2579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object* v___y_2583_, lean_object* v_zetaDeltaFVarIds_2584_, lean_object* v_a_x3f_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v___y_2583_, v_zetaDeltaFVarIds_2584_, v_a_x3f_2585_);
lean_dec(v_a_x3f_2585_);
lean_dec(v___y_2583_);
return v_res_2587_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0(void){
_start:
{
lean_object* v___x_2588_; 
v___x_2588_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2588_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1(void){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2589_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2589_);
return v___x_2590_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2(void){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1);
v___x_2592_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
lean_ctor_set(v___x_2592_, 2, v___x_2591_);
lean_ctor_set(v___x_2592_, 3, v___x_2591_);
lean_ctor_set(v___x_2592_, 4, v___x_2591_);
lean_ctor_set(v___x_2592_, 5, v___x_2591_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object* v_type_2593_, lean_object* v_value_2594_, uint8_t v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v___x_2602_; lean_object* v_cache_2603_; lean_object* v_a_2605_; lean_object* v___x_2616_; lean_object* v_mctx_2617_; lean_object* v_zetaDeltaFVarIds_2618_; lean_object* v_postponed_2619_; lean_object* v_diag_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2687_; 
v___x_2602_ = lean_st_ref_get(v___y_2598_);
v_cache_2603_ = lean_ctor_get(v___x_2602_, 1);
lean_inc_ref(v_cache_2603_);
lean_dec(v___x_2602_);
v___x_2616_ = lean_st_ref_take(v___y_2598_);
v_mctx_2617_ = lean_ctor_get(v___x_2616_, 0);
v_zetaDeltaFVarIds_2618_ = lean_ctor_get(v___x_2616_, 2);
v_postponed_2619_ = lean_ctor_get(v___x_2616_, 3);
v_diag_2620_ = lean_ctor_get(v___x_2616_, 4);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2687_ == 0)
{
lean_object* v_unused_2688_; 
v_unused_2688_ = lean_ctor_get(v___x_2616_, 1);
lean_dec(v_unused_2688_);
v___x_2622_ = v___x_2616_;
v_isShared_2623_ = v_isSharedCheck_2687_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_diag_2620_);
lean_inc(v_postponed_2619_);
lean_inc(v_zetaDeltaFVarIds_2618_);
lean_inc(v_mctx_2617_);
lean_dec(v___x_2616_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2687_;
goto v_resetjp_2621_;
}
v___jp_2604_:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
v___x_2606_ = lean_box(0);
v___x_2607_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v___y_2598_, v_cache_2603_, v___x_2606_);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2614_ == 0)
{
lean_object* v_unused_2615_; 
v_unused_2615_ = lean_ctor_get(v___x_2607_, 0);
lean_dec(v_unused_2615_);
v___x_2609_ = v___x_2607_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_dec(v___x_2607_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set_tag(v___x_2609_, 1);
lean_ctor_set(v___x_2609_, 0, v_a_2605_);
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2605_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
v_resetjp_2621_:
{
lean_object* v___x_2624_; lean_object* v___x_2626_; 
v___x_2624_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2);
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 1, v___x_2624_);
v___x_2626_ = v___x_2622_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_mctx_2617_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v___x_2624_);
lean_ctor_set(v_reuseFailAlloc_2686_, 2, v_zetaDeltaFVarIds_2618_);
lean_ctor_set(v_reuseFailAlloc_2686_, 3, v_postponed_2619_);
lean_ctor_set(v_reuseFailAlloc_2686_, 4, v_diag_2620_);
v___x_2626_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2627_; lean_object* v_keyedConfig_2628_; lean_object* v_zetaDeltaSet_2629_; lean_object* v_lctx_2630_; lean_object* v_localInstances_2631_; lean_object* v_defEqCtx_x3f_2632_; lean_object* v_synthPendingDepth_2633_; lean_object* v_customCanUnfoldPredicate_x3f_2634_; uint8_t v_univApprox_2635_; uint8_t v_inTypeClassResolution_2636_; uint8_t v_cacheInferType_2637_; uint8_t v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v_mctx_2641_; lean_object* v_cache_2642_; lean_object* v_zetaDeltaFVarIds_2643_; lean_object* v_postponed_2644_; lean_object* v_diag_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2685_; 
v___x_2627_ = lean_st_ref_put(v___y_2598_, v___x_2626_);
v_keyedConfig_2628_ = lean_ctor_get(v___y_2597_, 0);
v_zetaDeltaSet_2629_ = lean_ctor_get(v___y_2597_, 1);
v_lctx_2630_ = lean_ctor_get(v___y_2597_, 2);
v_localInstances_2631_ = lean_ctor_get(v___y_2597_, 3);
v_defEqCtx_x3f_2632_ = lean_ctor_get(v___y_2597_, 4);
v_synthPendingDepth_2633_ = lean_ctor_get(v___y_2597_, 5);
v_customCanUnfoldPredicate_x3f_2634_ = lean_ctor_get(v___y_2597_, 6);
v_univApprox_2635_ = lean_ctor_get_uint8(v___y_2597_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2636_ = lean_ctor_get_uint8(v___y_2597_, sizeof(void*)*7 + 2);
v_cacheInferType_2637_ = lean_ctor_get_uint8(v___y_2597_, sizeof(void*)*7 + 3);
v___x_2638_ = 1;
lean_inc(v_customCanUnfoldPredicate_x3f_2634_);
lean_inc(v_synthPendingDepth_2633_);
lean_inc(v_defEqCtx_x3f_2632_);
lean_inc_ref(v_localInstances_2631_);
lean_inc_ref(v_lctx_2630_);
lean_inc(v_zetaDeltaSet_2629_);
lean_inc_ref(v_keyedConfig_2628_);
v___x_2639_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2639_, 0, v_keyedConfig_2628_);
lean_ctor_set(v___x_2639_, 1, v_zetaDeltaSet_2629_);
lean_ctor_set(v___x_2639_, 2, v_lctx_2630_);
lean_ctor_set(v___x_2639_, 3, v_localInstances_2631_);
lean_ctor_set(v___x_2639_, 4, v_defEqCtx_x3f_2632_);
lean_ctor_set(v___x_2639_, 5, v_synthPendingDepth_2633_);
lean_ctor_set(v___x_2639_, 6, v_customCanUnfoldPredicate_x3f_2634_);
lean_ctor_set_uint8(v___x_2639_, sizeof(void*)*7, v___x_2638_);
lean_ctor_set_uint8(v___x_2639_, sizeof(void*)*7 + 1, v_univApprox_2635_);
lean_ctor_set_uint8(v___x_2639_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2636_);
lean_ctor_set_uint8(v___x_2639_, sizeof(void*)*7 + 3, v_cacheInferType_2637_);
v___x_2640_ = lean_st_ref_take(v___y_2598_);
v_mctx_2641_ = lean_ctor_get(v___x_2640_, 0);
v_cache_2642_ = lean_ctor_get(v___x_2640_, 1);
v_zetaDeltaFVarIds_2643_ = lean_ctor_get(v___x_2640_, 2);
v_postponed_2644_ = lean_ctor_get(v___x_2640_, 3);
v_diag_2645_ = lean_ctor_get(v___x_2640_, 4);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2647_ = v___x_2640_;
v_isShared_2648_ = v_isSharedCheck_2685_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_diag_2645_);
lean_inc(v_postponed_2644_);
lean_inc(v_zetaDeltaFVarIds_2643_);
lean_inc(v_cache_2642_);
lean_inc(v_mctx_2641_);
lean_dec(v___x_2640_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2685_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v_a_2650_; lean_object* v___x_2653_; lean_object* v___x_2655_; 
v___x_2653_ = lean_box(1);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 2, v___x_2653_);
v___x_2655_ = v___x_2647_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_mctx_2641_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_cache_2642_);
lean_ctor_set(v_reuseFailAlloc_2684_, 2, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2684_, 3, v_postponed_2644_);
lean_ctor_set(v_reuseFailAlloc_2684_, 4, v_diag_2645_);
v___x_2655_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2654_;
}
v___jp_2649_:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = lean_box(0);
v___x_2652_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v___y_2598_, v_zetaDeltaFVarIds_2643_, v___x_2651_);
lean_dec_ref(v___x_2652_);
v_a_2605_ = v_a_2650_;
goto v___jp_2604_;
}
v_reusejp_2654_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = lean_st_ref_put(v___y_2598_, v___x_2655_);
v___x_2657_ = l_Lean_Meta_Closure_collectExpr(v_type_2593_, v___y_2595_, v___y_2596_, v___x_2639_, v___y_2598_, v___y_2599_, v___y_2600_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; lean_object* v___x_2659_; 
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v___x_2657_, 1);
v___x_2659_ = l_Lean_Meta_Closure_collectExpr(v_value_2594_, v___y_2595_, v___y_2596_, v___x_2639_, v___y_2598_, v___y_2599_, v___y_2600_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2661_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___x_2659_, 1);
v___x_2661_ = l_Lean_Meta_Closure_process(v___y_2595_, v___y_2596_, v___x_2639_, v___y_2598_, v___y_2599_, v___y_2600_);
lean_dec_ref_known(v___x_2639_, 7);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2679_; 
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2679_ == 0)
{
lean_object* v_unused_2680_; 
v_unused_2680_ = lean_ctor_get(v___x_2661_, 0);
lean_dec(v_unused_2680_);
v___x_2663_ = v___x_2661_;
v_isShared_2664_ = v_isSharedCheck_2679_;
goto v_resetjp_2662_;
}
else
{
lean_dec(v___x_2661_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2679_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; lean_object* v___x_2667_; 
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v_a_2658_);
lean_ctor_set(v___x_2665_, 1, v_a_2660_);
lean_inc_ref(v___x_2665_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set_tag(v___x_2663_, 1);
lean_ctor_set(v___x_2663_, 0, v___x_2665_);
v___x_2667_ = v___x_2663_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2665_);
v___x_2667_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
v___x_2668_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v___y_2598_, v_zetaDeltaFVarIds_2643_, v___x_2667_);
lean_dec_ref(v___x_2668_);
v___x_2669_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v___y_2598_, v_cache_2603_, v___x_2667_);
lean_dec_ref(v___x_2667_);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2676_ == 0)
{
lean_object* v_unused_2677_; 
v_unused_2677_ = lean_ctor_get(v___x_2669_, 0);
lean_dec(v_unused_2677_);
v___x_2671_ = v___x_2669_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_dec(v___x_2669_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2665_);
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2665_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
else
{
lean_object* v_a_2681_; 
lean_dec(v_a_2660_);
lean_dec(v_a_2658_);
v_a_2681_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___x_2661_, 1);
v_a_2650_ = v_a_2681_;
goto v___jp_2649_;
}
}
else
{
lean_object* v_a_2682_; 
lean_dec(v_a_2658_);
lean_dec_ref_known(v___x_2639_, 7);
v_a_2682_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2659_, 1);
v_a_2650_ = v_a_2682_;
goto v___jp_2649_;
}
}
else
{
lean_object* v_a_2683_; 
lean_dec_ref_known(v___x_2639_, 7);
lean_dec_ref(v_value_2594_);
v_a_2683_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2657_, 1);
v_a_2650_ = v_a_2683_;
goto v___jp_2649_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object* v_type_2689_, lean_object* v_value_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
uint8_t v___y_4524__boxed_2698_; lean_object* v_res_2699_; 
v___y_4524__boxed_2698_ = lean_unbox(v___y_2691_);
v_res_2699_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_2689_, v_value_2690_, v___y_4524__boxed_2698_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object* v_msg_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v___f_2713_; lean_object* v___f_2714_; lean_object* v___f_2715_; lean_object* v___f_2716_; lean_object* v___f_2717_; lean_object* v___f_2718_; lean_object* v___f_2719_; lean_object* v___f_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v_toApplicative_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2766_; 
v___f_2713_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__0));
v___f_2714_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__1));
v___f_2715_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__2));
v___f_2716_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__3));
v___f_2717_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__4));
v___f_2718_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2718_, 0, v___f_2717_);
lean_closure_set(v___f_2718_, 1, v___f_2716_);
v___f_2719_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2719_, 0, v___f_2716_);
v___f_2720_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__5));
v___x_2721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___f_2713_);
lean_ctor_set(v___x_2721_, 1, v___f_2714_);
v___x_2722_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2721_);
lean_ctor_set(v___x_2722_, 1, v___f_2715_);
lean_ctor_set(v___x_2722_, 2, v___f_2718_);
lean_ctor_set(v___x_2722_, 3, v___f_2719_);
lean_ctor_set(v___x_2722_, 4, v___f_2720_);
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
lean_ctor_set(v___x_2723_, 1, v___f_2716_);
v___x_2724_ = l_StateRefT_x27_instMonad___redArg(v___x_2723_);
v_toApplicative_2725_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2766_ == 0)
{
lean_object* v_unused_2767_; 
v_unused_2767_ = lean_ctor_get(v___x_2724_, 1);
lean_dec(v_unused_2767_);
v___x_2727_ = v___x_2724_;
v_isShared_2728_ = v_isSharedCheck_2766_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_toApplicative_2725_);
lean_dec(v___x_2724_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2766_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v_toFunctor_2729_; lean_object* v_toSeq_2730_; lean_object* v_toSeqLeft_2731_; lean_object* v_toSeqRight_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2764_; 
v_toFunctor_2729_ = lean_ctor_get(v_toApplicative_2725_, 0);
v_toSeq_2730_ = lean_ctor_get(v_toApplicative_2725_, 2);
v_toSeqLeft_2731_ = lean_ctor_get(v_toApplicative_2725_, 3);
v_toSeqRight_2732_ = lean_ctor_get(v_toApplicative_2725_, 4);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_toApplicative_2725_);
if (v_isSharedCheck_2764_ == 0)
{
lean_object* v_unused_2765_; 
v_unused_2765_ = lean_ctor_get(v_toApplicative_2725_, 1);
lean_dec(v_unused_2765_);
v___x_2734_ = v_toApplicative_2725_;
v_isShared_2735_ = v_isSharedCheck_2764_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_toSeqRight_2732_);
lean_inc(v_toSeqLeft_2731_);
lean_inc(v_toSeq_2730_);
lean_inc(v_toFunctor_2729_);
lean_dec(v_toApplicative_2725_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2764_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___f_2736_; lean_object* v___f_2737_; lean_object* v___f_2738_; lean_object* v___f_2739_; lean_object* v___x_2740_; lean_object* v___f_2741_; lean_object* v___f_2742_; lean_object* v___f_2743_; lean_object* v___x_2745_; 
v___f_2736_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__6));
v___f_2737_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___closed__7));
lean_inc_ref(v_toFunctor_2729_);
v___f_2738_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2738_, 0, v_toFunctor_2729_);
v___f_2739_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2739_, 0, v_toFunctor_2729_);
v___x_2740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___f_2738_);
lean_ctor_set(v___x_2740_, 1, v___f_2739_);
v___f_2741_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2741_, 0, v_toSeqRight_2732_);
v___f_2742_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2742_, 0, v_toSeqLeft_2731_);
v___f_2743_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2743_, 0, v_toSeq_2730_);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 4, v___f_2741_);
lean_ctor_set(v___x_2734_, 3, v___f_2742_);
lean_ctor_set(v___x_2734_, 2, v___f_2743_);
lean_ctor_set(v___x_2734_, 1, v___f_2736_);
lean_ctor_set(v___x_2734_, 0, v___x_2740_);
v___x_2745_ = v___x_2734_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v___x_2740_);
lean_ctor_set(v_reuseFailAlloc_2763_, 1, v___f_2736_);
lean_ctor_set(v_reuseFailAlloc_2763_, 2, v___f_2743_);
lean_ctor_set(v_reuseFailAlloc_2763_, 3, v___f_2742_);
lean_ctor_set(v_reuseFailAlloc_2763_, 4, v___f_2741_);
v___x_2745_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2747_; 
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 1, v___f_2737_);
lean_ctor_set(v___x_2727_, 0, v___x_2745_);
v___x_2747_ = v___x_2727_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2745_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v___f_2737_);
v___x_2747_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
lean_object* v___f_2748_; lean_object* v___f_2749_; lean_object* v___f_2750_; lean_object* v___f_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_11704__overap_2760_; lean_object* v___x_2761_; 
lean_inc_ref_n(v___x_2747_, 6);
v___f_2748_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2748_, 0, v___x_2747_);
v___f_2749_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2749_, 0, v___x_2747_);
v___f_2750_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2750_, 0, v___x_2747_);
v___f_2751_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2751_, 0, v___x_2747_);
v___x_2752_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2752_, 0, lean_box(0));
lean_closure_set(v___x_2752_, 1, lean_box(0));
lean_closure_set(v___x_2752_, 2, v___x_2747_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
lean_ctor_set(v___x_2753_, 1, v___f_2748_);
v___x_2754_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2754_, 0, lean_box(0));
lean_closure_set(v___x_2754_, 1, lean_box(0));
lean_closure_set(v___x_2754_, 2, v___x_2747_);
v___x_2755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2753_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
lean_ctor_set(v___x_2755_, 2, v___f_2749_);
lean_ctor_set(v___x_2755_, 3, v___f_2750_);
lean_ctor_set(v___x_2755_, 4, v___f_2751_);
v___x_2756_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2756_, 0, lean_box(0));
lean_closure_set(v___x_2756_, 1, lean_box(0));
lean_closure_set(v___x_2756_, 2, v___x_2747_);
v___x_2757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2755_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = lean_box(0);
v___x_2759_ = l_instInhabitedOfMonad___redArg(v___x_2757_, v___x_2758_);
v___x_11704__overap_2760_ = lean_panic_fn_borrowed(v___x_2759_, v_msg_2708_);
lean_dec(v___x_2759_);
lean_inc(v___y_2711_);
lean_inc_ref(v___y_2710_);
v___x_2761_ = lean_apply_4(v___x_11704__overap_2760_, v___y_2709_, v___y_2710_, v___y_2711_, lean_box(0));
return v___x_2761_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___boxed(lean_object* v_msg_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(v_msg_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
return v_res_2773_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2774_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
return v___x_2775_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__1(void){
_start:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2776_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0);
v___x_2777_ = lean_unsigned_to_nat(0u);
v___x_2778_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
lean_ctor_set(v___x_2778_, 2, v___x_2777_);
lean_ctor_set(v___x_2778_, 3, v___x_2777_);
lean_ctor_set(v___x_2778_, 4, v___x_2776_);
lean_ctor_set(v___x_2778_, 5, v___x_2776_);
lean_ctor_set(v___x_2778_, 6, v___x_2776_);
lean_ctor_set(v___x_2778_, 7, v___x_2776_);
lean_ctor_set(v___x_2778_, 8, v___x_2776_);
lean_ctor_set(v___x_2778_, 9, v___x_2776_);
lean_ctor_set(v___x_2778_, 10, v___x_2776_);
return v___x_2778_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2779_ = lean_unsigned_to_nat(32u);
v___x_2780_ = lean_mk_empty_array_with_capacity(v___x_2779_);
v___x_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2780_);
return v___x_2781_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__3(void){
_start:
{
size_t v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2782_ = ((size_t)5ULL);
v___x_2783_ = lean_unsigned_to_nat(0u);
v___x_2784_ = lean_unsigned_to_nat(32u);
v___x_2785_ = lean_mk_empty_array_with_capacity(v___x_2784_);
v___x_2786_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__2);
v___x_2787_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
lean_ctor_set(v___x_2787_, 1, v___x_2785_);
lean_ctor_set(v___x_2787_, 2, v___x_2783_);
lean_ctor_set(v___x_2787_, 3, v___x_2783_);
lean_ctor_set_usize(v___x_2787_, 4, v___x_2782_);
return v___x_2787_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__4(void){
_start:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2788_ = lean_box(1);
v___x_2789_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__3);
v___x_2790_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__0);
v___x_2791_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
lean_ctor_set(v___x_2791_, 1, v___x_2789_);
lean_ctor_set(v___x_2791_, 2, v___x_2788_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object* v_msgData_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v___x_2796_; lean_object* v_toCold_2797_; lean_object* v_env_2798_; lean_object* v_options_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2796_ = lean_st_ref_get(v___y_2794_);
v_toCold_2797_ = lean_ctor_get(v___y_2793_, 0);
v_env_2798_ = lean_ctor_get(v___x_2796_, 0);
lean_inc_ref(v_env_2798_);
lean_dec(v___x_2796_);
v_options_2799_ = lean_ctor_get(v_toCold_2797_, 2);
v___x_2800_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__1);
v___x_2801_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___closed__4);
lean_inc_ref(v_options_2799_);
v___x_2802_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2802_, 0, v_env_2798_);
lean_ctor_set(v___x_2802_, 1, v___x_2800_);
lean_ctor_set(v___x_2802_, 2, v___x_2801_);
lean_ctor_set(v___x_2802_, 3, v_options_2799_);
v___x_2803_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
lean_ctor_set(v___x_2803_, 1, v_msgData_2792_);
v___x_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object* v_msgData_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_msgData_2805_, v___y_2806_, v___y_2807_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg(lean_object* v_msg_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v_ref_2814_; lean_object* v___x_2815_; lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2824_; 
v_ref_2814_ = lean_ctor_get(v___y_2811_, 2);
v___x_2815_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_msg_2810_, v___y_2811_, v___y_2812_);
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2818_ = v___x_2815_;
v_isShared_2819_ = v_isSharedCheck_2824_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2815_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2824_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2820_; lean_object* v___x_2822_; 
lean_inc(v_ref_2814_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v_ref_2814_);
lean_ctor_set(v___x_2820_, 1, v_a_2816_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set_tag(v___x_2818_, 1);
lean_ctor_set(v___x_2818_, 0, v___x_2820_);
v___x_2822_ = v___x_2818_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg___boxed(lean_object* v_msg_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg(v_msg_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8___redArg(lean_object* v_a_2830_, lean_object* v_b_2831_, lean_object* v_x_2832_){
_start:
{
if (lean_obj_tag(v_x_2832_) == 0)
{
lean_dec(v_b_2831_);
lean_dec_ref(v_a_2830_);
return v_x_2832_;
}
else
{
lean_object* v_key_2833_; lean_object* v_value_2834_; lean_object* v_tail_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2847_; 
v_key_2833_ = lean_ctor_get(v_x_2832_, 0);
v_value_2834_ = lean_ctor_get(v_x_2832_, 1);
v_tail_2835_ = lean_ctor_get(v_x_2832_, 2);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_x_2832_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2837_ = v_x_2832_;
v_isShared_2838_ = v_isSharedCheck_2847_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_tail_2835_);
lean_inc(v_value_2834_);
lean_inc(v_key_2833_);
lean_dec(v_x_2832_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2847_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
uint8_t v___x_2839_; 
v___x_2839_ = lean_expr_eqv(v_key_2833_, v_a_2830_);
if (v___x_2839_ == 0)
{
lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2840_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8___redArg(v_a_2830_, v_b_2831_, v_tail_2835_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 2, v___x_2840_);
v___x_2842_ = v___x_2837_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_key_2833_);
lean_ctor_set(v_reuseFailAlloc_2843_, 1, v_value_2834_);
lean_ctor_set(v_reuseFailAlloc_2843_, 2, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
else
{
lean_object* v___x_2845_; 
lean_dec(v_value_2834_);
lean_dec(v_key_2833_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 1, v_b_2831_);
lean_ctor_set(v___x_2837_, 0, v_a_2830_);
v___x_2845_ = v___x_2837_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2830_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v_b_2831_);
lean_ctor_set(v_reuseFailAlloc_2846_, 2, v_tail_2835_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg(lean_object* v_a_2848_, lean_object* v_x_2849_){
_start:
{
if (lean_obj_tag(v_x_2849_) == 0)
{
uint8_t v___x_2850_; 
v___x_2850_ = 0;
return v___x_2850_;
}
else
{
lean_object* v_key_2851_; lean_object* v_tail_2852_; uint8_t v___x_2853_; 
v_key_2851_ = lean_ctor_get(v_x_2849_, 0);
v_tail_2852_ = lean_ctor_get(v_x_2849_, 2);
v___x_2853_ = lean_expr_eqv(v_key_2851_, v_a_2848_);
if (v___x_2853_ == 0)
{
v_x_2849_ = v_tail_2852_;
goto _start;
}
else
{
return v___x_2853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_a_2855_, lean_object* v_x_2856_){
_start:
{
uint8_t v_res_2857_; lean_object* v_r_2858_; 
v_res_2857_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg(v_a_2855_, v_x_2856_);
lean_dec(v_x_2856_);
lean_dec_ref(v_a_2855_);
v_r_2858_ = lean_box(v_res_2857_);
return v_r_2858_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11_spec__12___redArg(lean_object* v_x_2859_, lean_object* v_x_2860_){
_start:
{
if (lean_obj_tag(v_x_2860_) == 0)
{
return v_x_2859_;
}
else
{
lean_object* v_key_2861_; lean_object* v_value_2862_; lean_object* v_tail_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2886_; 
v_key_2861_ = lean_ctor_get(v_x_2860_, 0);
v_value_2862_ = lean_ctor_get(v_x_2860_, 1);
v_tail_2863_ = lean_ctor_get(v_x_2860_, 2);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_x_2860_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2865_ = v_x_2860_;
v_isShared_2866_ = v_isSharedCheck_2886_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_tail_2863_);
lean_inc(v_value_2862_);
lean_inc(v_key_2861_);
lean_dec(v_x_2860_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2886_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2867_; uint64_t v___x_2868_; uint64_t v___x_2869_; uint64_t v___x_2870_; uint64_t v_fold_2871_; uint64_t v___x_2872_; uint64_t v___x_2873_; uint64_t v___x_2874_; size_t v___x_2875_; size_t v___x_2876_; size_t v___x_2877_; size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2882_; 
v___x_2867_ = lean_array_get_size(v_x_2859_);
v___x_2868_ = l_Lean_Expr_hash(v_key_2861_);
v___x_2869_ = 32ULL;
v___x_2870_ = lean_uint64_shift_right(v___x_2868_, v___x_2869_);
v_fold_2871_ = lean_uint64_xor(v___x_2868_, v___x_2870_);
v___x_2872_ = 16ULL;
v___x_2873_ = lean_uint64_shift_right(v_fold_2871_, v___x_2872_);
v___x_2874_ = lean_uint64_xor(v_fold_2871_, v___x_2873_);
v___x_2875_ = lean_uint64_to_usize(v___x_2874_);
v___x_2876_ = lean_usize_of_nat(v___x_2867_);
v___x_2877_ = ((size_t)1ULL);
v___x_2878_ = lean_usize_sub(v___x_2876_, v___x_2877_);
v___x_2879_ = lean_usize_land(v___x_2875_, v___x_2878_);
v___x_2880_ = lean_array_uget_borrowed(v_x_2859_, v___x_2879_);
lean_inc(v___x_2880_);
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 2, v___x_2880_);
v___x_2882_ = v___x_2865_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_key_2861_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_value_2862_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v___x_2880_);
v___x_2882_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = lean_array_uset(v_x_2859_, v___x_2879_, v___x_2882_);
v_x_2859_ = v___x_2883_;
v_x_2860_ = v_tail_2863_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11___redArg(lean_object* v_i_2887_, lean_object* v_source_2888_, lean_object* v_target_2889_){
_start:
{
lean_object* v___x_2890_; uint8_t v___x_2891_; 
v___x_2890_ = lean_array_get_size(v_source_2888_);
v___x_2891_ = lean_nat_dec_lt(v_i_2887_, v___x_2890_);
if (v___x_2891_ == 0)
{
lean_dec_ref(v_source_2888_);
lean_dec(v_i_2887_);
return v_target_2889_;
}
else
{
lean_object* v_es_2892_; lean_object* v___x_2893_; lean_object* v_source_2894_; lean_object* v_target_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v_es_2892_ = lean_array_fget(v_source_2888_, v_i_2887_);
v___x_2893_ = lean_box(0);
v_source_2894_ = lean_array_fset(v_source_2888_, v_i_2887_, v___x_2893_);
v_target_2895_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11_spec__12___redArg(v_target_2889_, v_es_2892_);
v___x_2896_ = lean_unsigned_to_nat(1u);
v___x_2897_ = lean_nat_add(v_i_2887_, v___x_2896_);
lean_dec(v_i_2887_);
v_i_2887_ = v___x_2897_;
v_source_2888_ = v_source_2894_;
v_target_2889_ = v_target_2895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7___redArg(lean_object* v_data_2899_){
_start:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v_nbuckets_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2900_ = lean_array_get_size(v_data_2899_);
v___x_2901_ = lean_unsigned_to_nat(2u);
v_nbuckets_2902_ = lean_nat_mul(v___x_2900_, v___x_2901_);
v___x_2903_ = lean_unsigned_to_nat(0u);
v___x_2904_ = lean_box(0);
v___x_2905_ = lean_mk_array(v_nbuckets_2902_, v___x_2904_);
v___x_2906_ = lean_array_propagate_mark(v_data_2899_, v___x_2905_);
v___x_2907_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11___redArg(v___x_2903_, v_data_2899_, v___x_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3___redArg(lean_object* v_m_2908_, lean_object* v_a_2909_, lean_object* v_b_2910_){
_start:
{
lean_object* v_size_2911_; lean_object* v_buckets_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2955_; 
v_size_2911_ = lean_ctor_get(v_m_2908_, 0);
v_buckets_2912_ = lean_ctor_get(v_m_2908_, 1);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_m_2908_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2914_ = v_m_2908_;
v_isShared_2915_ = v_isSharedCheck_2955_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_buckets_2912_);
lean_inc(v_size_2911_);
lean_dec(v_m_2908_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2955_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2916_; uint64_t v___x_2917_; uint64_t v___x_2918_; uint64_t v___x_2919_; uint64_t v_fold_2920_; uint64_t v___x_2921_; uint64_t v___x_2922_; uint64_t v___x_2923_; size_t v___x_2924_; size_t v___x_2925_; size_t v___x_2926_; size_t v___x_2927_; size_t v___x_2928_; lean_object* v_bkt_2929_; uint8_t v___x_2930_; 
v___x_2916_ = lean_array_get_size(v_buckets_2912_);
v___x_2917_ = l_Lean_Expr_hash(v_a_2909_);
v___x_2918_ = 32ULL;
v___x_2919_ = lean_uint64_shift_right(v___x_2917_, v___x_2918_);
v_fold_2920_ = lean_uint64_xor(v___x_2917_, v___x_2919_);
v___x_2921_ = 16ULL;
v___x_2922_ = lean_uint64_shift_right(v_fold_2920_, v___x_2921_);
v___x_2923_ = lean_uint64_xor(v_fold_2920_, v___x_2922_);
v___x_2924_ = lean_uint64_to_usize(v___x_2923_);
v___x_2925_ = lean_usize_of_nat(v___x_2916_);
v___x_2926_ = ((size_t)1ULL);
v___x_2927_ = lean_usize_sub(v___x_2925_, v___x_2926_);
v___x_2928_ = lean_usize_land(v___x_2924_, v___x_2927_);
v_bkt_2929_ = lean_array_uget_borrowed(v_buckets_2912_, v___x_2928_);
v___x_2930_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg(v_a_2909_, v_bkt_2929_);
if (v___x_2930_ == 0)
{
lean_object* v___x_2931_; lean_object* v_size_x27_2932_; lean_object* v___x_2933_; lean_object* v_buckets_x27_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v___x_2931_ = lean_unsigned_to_nat(1u);
v_size_x27_2932_ = lean_nat_add(v_size_2911_, v___x_2931_);
lean_dec(v_size_2911_);
lean_inc(v_bkt_2929_);
v___x_2933_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2933_, 0, v_a_2909_);
lean_ctor_set(v___x_2933_, 1, v_b_2910_);
lean_ctor_set(v___x_2933_, 2, v_bkt_2929_);
v_buckets_x27_2934_ = lean_array_uset(v_buckets_2912_, v___x_2928_, v___x_2933_);
v___x_2935_ = lean_unsigned_to_nat(4u);
v___x_2936_ = lean_nat_mul(v_size_x27_2932_, v___x_2935_);
v___x_2937_ = lean_unsigned_to_nat(3u);
v___x_2938_ = lean_nat_div(v___x_2936_, v___x_2937_);
lean_dec(v___x_2936_);
v___x_2939_ = lean_array_get_size(v_buckets_x27_2934_);
v___x_2940_ = lean_nat_dec_le(v___x_2938_, v___x_2939_);
lean_dec(v___x_2938_);
if (v___x_2940_ == 0)
{
lean_object* v_val_2941_; lean_object* v___x_2943_; 
v_val_2941_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7___redArg(v_buckets_x27_2934_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 1, v_val_2941_);
lean_ctor_set(v___x_2914_, 0, v_size_x27_2932_);
v___x_2943_ = v___x_2914_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_size_x27_2932_);
lean_ctor_set(v_reuseFailAlloc_2944_, 1, v_val_2941_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
else
{
lean_object* v___x_2946_; 
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 1, v_buckets_x27_2934_);
lean_ctor_set(v___x_2914_, 0, v_size_x27_2932_);
v___x_2946_ = v___x_2914_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_size_x27_2932_);
lean_ctor_set(v_reuseFailAlloc_2947_, 1, v_buckets_x27_2934_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
else
{
lean_object* v___x_2948_; lean_object* v_buckets_x27_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2953_; 
lean_inc(v_bkt_2929_);
v___x_2948_ = lean_box(0);
v_buckets_x27_2949_ = lean_array_uset(v_buckets_2912_, v___x_2928_, v___x_2948_);
v___x_2950_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8___redArg(v_a_2909_, v_b_2910_, v_bkt_2929_);
v___x_2951_ = lean_array_uset(v_buckets_x27_2949_, v___x_2928_, v___x_2950_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 1, v___x_2951_);
v___x_2953_ = v___x_2914_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_size_2911_);
lean_ctor_set(v_reuseFailAlloc_2954_, 1, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg(lean_object* v_a_2956_, lean_object* v_x_2957_){
_start:
{
if (lean_obj_tag(v_x_2957_) == 0)
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_box(0);
return v___x_2958_;
}
else
{
lean_object* v_key_2959_; lean_object* v_value_2960_; lean_object* v_tail_2961_; uint8_t v___x_2962_; 
v_key_2959_ = lean_ctor_get(v_x_2957_, 0);
v_value_2960_ = lean_ctor_get(v_x_2957_, 1);
v_tail_2961_ = lean_ctor_get(v_x_2957_, 2);
v___x_2962_ = lean_expr_eqv(v_key_2959_, v_a_2956_);
if (v___x_2962_ == 0)
{
v_x_2957_ = v_tail_2961_;
goto _start;
}
else
{
lean_object* v___x_2964_; 
lean_inc(v_value_2960_);
v___x_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2964_, 0, v_value_2960_);
return v___x_2964_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_a_2965_, lean_object* v_x_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg(v_a_2965_, v_x_2966_);
lean_dec(v_x_2966_);
lean_dec_ref(v_a_2965_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object* v_m_2968_, lean_object* v_a_2969_){
_start:
{
lean_object* v_buckets_2970_; lean_object* v___x_2971_; uint64_t v___x_2972_; uint64_t v___x_2973_; uint64_t v___x_2974_; uint64_t v_fold_2975_; uint64_t v___x_2976_; uint64_t v___x_2977_; uint64_t v___x_2978_; size_t v___x_2979_; size_t v___x_2980_; size_t v___x_2981_; size_t v___x_2982_; size_t v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v_buckets_2970_ = lean_ctor_get(v_m_2968_, 1);
v___x_2971_ = lean_array_get_size(v_buckets_2970_);
v___x_2972_ = l_Lean_Expr_hash(v_a_2969_);
v___x_2973_ = 32ULL;
v___x_2974_ = lean_uint64_shift_right(v___x_2972_, v___x_2973_);
v_fold_2975_ = lean_uint64_xor(v___x_2972_, v___x_2974_);
v___x_2976_ = 16ULL;
v___x_2977_ = lean_uint64_shift_right(v_fold_2975_, v___x_2976_);
v___x_2978_ = lean_uint64_xor(v_fold_2975_, v___x_2977_);
v___x_2979_ = lean_uint64_to_usize(v___x_2978_);
v___x_2980_ = lean_usize_of_nat(v___x_2971_);
v___x_2981_ = ((size_t)1ULL);
v___x_2982_ = lean_usize_sub(v___x_2980_, v___x_2981_);
v___x_2983_ = lean_usize_land(v___x_2979_, v___x_2982_);
v___x_2984_ = lean_array_uget_borrowed(v_buckets_2970_, v___x_2983_);
v___x_2985_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg(v_a_2969_, v___x_2984_);
return v___x_2985_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object* v_m_2986_, lean_object* v_a_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_m_2986_, v_a_2987_);
lean_dec_ref(v_a_2987_);
lean_dec_ref(v_m_2986_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object* v_g_2989_, lean_object* v_e_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v_a_2997_; lean_object* v_fst_2998_; lean_object* v___y_3004_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3007_ = lean_st_ref_get(v___y_2991_);
v___x_3008_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v___x_3007_, v_e_2990_);
lean_dec(v___x_3007_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v___x_3009_; 
lean_inc_ref(v_g_2989_);
lean_inc(v___y_2994_);
lean_inc_ref(v___y_2993_);
lean_inc_ref(v_e_2990_);
v___x_3009_ = lean_apply_5(v_g_2989_, v_e_2990_, v___y_2992_, v___y_2993_, v___y_2994_, lean_box(0));
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v_a_3010_; lean_object* v_fst_3011_; lean_object* v_snd_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3057_; 
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v___x_3009_, 1);
v_fst_3011_ = lean_ctor_get(v_a_3010_, 0);
v_snd_3012_ = lean_ctor_get(v_a_3010_, 1);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_a_3010_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3014_ = v_a_3010_;
v_isShared_3015_ = v_isSharedCheck_3057_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_snd_3012_);
lean_inc(v_fst_3011_);
lean_dec(v_a_3010_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3057_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v_d_3017_; lean_object* v_b_3018_; lean_object* v___y_3019_; uint8_t v___x_3024_; 
v___x_3024_ = lean_unbox(v_fst_3011_);
lean_dec(v_fst_3011_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3027_; 
lean_dec_ref(v_g_2989_);
v___x_3025_ = lean_box(0);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v___x_3025_);
v___x_3027_ = v___x_3014_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3025_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v_snd_3012_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
v_a_2997_ = v___x_3027_;
v_fst_2998_ = v___x_3025_;
goto v___jp_2996_;
}
}
else
{
switch(lean_obj_tag(v_e_2990_))
{
case 7:
{
lean_object* v_binderType_3029_; lean_object* v_body_3030_; 
lean_del_object(v___x_3014_);
v_binderType_3029_ = lean_ctor_get(v_e_2990_, 1);
v_body_3030_ = lean_ctor_get(v_e_2990_, 2);
lean_inc_ref(v_body_3030_);
lean_inc_ref(v_binderType_3029_);
v_d_3017_ = v_binderType_3029_;
v_b_3018_ = v_body_3030_;
v___y_3019_ = v___y_2991_;
goto v___jp_3016_;
}
case 6:
{
lean_object* v_binderType_3031_; lean_object* v_body_3032_; 
lean_del_object(v___x_3014_);
v_binderType_3031_ = lean_ctor_get(v_e_2990_, 1);
v_body_3032_ = lean_ctor_get(v_e_2990_, 2);
lean_inc_ref(v_body_3032_);
lean_inc_ref(v_binderType_3031_);
v_d_3017_ = v_binderType_3031_;
v_b_3018_ = v_body_3032_;
v___y_3019_ = v___y_2991_;
goto v___jp_3016_;
}
case 8:
{
lean_object* v_type_3033_; lean_object* v_value_3034_; lean_object* v_body_3035_; lean_object* v___x_3036_; 
lean_del_object(v___x_3014_);
v_type_3033_ = lean_ctor_get(v_e_2990_, 1);
v_value_3034_ = lean_ctor_get(v_e_2990_, 2);
v_body_3035_ = lean_ctor_get(v_e_2990_, 3);
lean_inc_ref(v_type_3033_);
lean_inc_ref(v_g_2989_);
v___x_3036_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_type_3033_, v___y_2991_, v_snd_3012_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v_snd_3038_; lean_object* v___x_3039_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc(v_a_3037_);
lean_dec_ref_known(v___x_3036_, 1);
v_snd_3038_ = lean_ctor_get(v_a_3037_, 1);
lean_inc(v_snd_3038_);
lean_dec(v_a_3037_);
lean_inc_ref(v_value_3034_);
lean_inc_ref(v_g_2989_);
v___x_3039_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_value_3034_, v___y_2991_, v_snd_3038_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v_snd_3041_; lean_object* v___x_3042_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3039_, 1);
v_snd_3041_ = lean_ctor_get(v_a_3040_, 1);
lean_inc(v_snd_3041_);
lean_dec(v_a_3040_);
lean_inc_ref(v_body_3035_);
v___x_3042_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_body_3035_, v___y_2991_, v_snd_3041_, v___y_2993_, v___y_2994_);
v___y_3004_ = v___x_3042_;
goto v___jp_3003_;
}
else
{
lean_dec_ref(v_g_2989_);
v___y_3004_ = v___x_3039_;
goto v___jp_3003_;
}
}
else
{
lean_dec_ref(v_g_2989_);
v___y_3004_ = v___x_3036_;
goto v___jp_3003_;
}
}
case 5:
{
lean_object* v_fn_3043_; lean_object* v_arg_3044_; lean_object* v___x_3045_; 
lean_del_object(v___x_3014_);
v_fn_3043_ = lean_ctor_get(v_e_2990_, 0);
v_arg_3044_ = lean_ctor_get(v_e_2990_, 1);
lean_inc_ref(v_fn_3043_);
lean_inc_ref(v_g_2989_);
v___x_3045_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_fn_3043_, v___y_2991_, v_snd_3012_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_object* v_a_3046_; lean_object* v_snd_3047_; lean_object* v___x_3048_; 
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3045_, 1);
v_snd_3047_ = lean_ctor_get(v_a_3046_, 1);
lean_inc(v_snd_3047_);
lean_dec(v_a_3046_);
lean_inc_ref(v_arg_3044_);
v___x_3048_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_arg_3044_, v___y_2991_, v_snd_3047_, v___y_2993_, v___y_2994_);
v___y_3004_ = v___x_3048_;
goto v___jp_3003_;
}
else
{
lean_dec_ref(v_g_2989_);
v___y_3004_ = v___x_3045_;
goto v___jp_3003_;
}
}
case 10:
{
lean_object* v_expr_3049_; lean_object* v___x_3050_; 
lean_del_object(v___x_3014_);
v_expr_3049_ = lean_ctor_get(v_e_2990_, 1);
lean_inc_ref(v_expr_3049_);
v___x_3050_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_expr_3049_, v___y_2991_, v_snd_3012_, v___y_2993_, v___y_2994_);
v___y_3004_ = v___x_3050_;
goto v___jp_3003_;
}
case 11:
{
lean_object* v_struct_3051_; lean_object* v___x_3052_; 
lean_del_object(v___x_3014_);
v_struct_3051_ = lean_ctor_get(v_e_2990_, 2);
lean_inc_ref(v_struct_3051_);
v___x_3052_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_struct_3051_, v___y_2991_, v_snd_3012_, v___y_2993_, v___y_2994_);
v___y_3004_ = v___x_3052_;
goto v___jp_3003_;
}
default: 
{
lean_object* v___x_3053_; lean_object* v___x_3055_; 
lean_dec_ref(v_g_2989_);
v___x_3053_ = lean_box(0);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v___x_3053_);
v___x_3055_ = v___x_3014_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
lean_ctor_set(v_reuseFailAlloc_3056_, 1, v_snd_3012_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
v_a_2997_ = v___x_3055_;
v_fst_2998_ = v___x_3053_;
goto v___jp_2996_;
}
}
}
}
v___jp_3016_:
{
lean_object* v___x_3020_; 
lean_inc_ref(v_g_2989_);
v___x_3020_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_d_3017_, v___y_3019_, v_snd_3012_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v_snd_3022_; lean_object* v___x_3023_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v_snd_3022_ = lean_ctor_get(v_a_3021_, 1);
lean_inc(v_snd_3022_);
lean_dec(v_a_3021_);
v___x_3023_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_2989_, v_b_3018_, v___y_3019_, v_snd_3022_, v___y_2993_, v___y_2994_);
v___y_3004_ = v___x_3023_;
goto v___jp_3003_;
}
else
{
lean_dec_ref(v_b_3018_);
lean_dec_ref(v_g_2989_);
v___y_3004_ = v___x_3020_;
goto v___jp_3003_;
}
}
}
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec_ref(v_e_2990_);
lean_dec_ref(v_g_2989_);
v_a_3058_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3009_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3009_);
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
lean_object* v_val_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3074_; 
lean_dec_ref(v_e_2990_);
lean_dec_ref(v_g_2989_);
v_val_3066_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3068_ = v___x_3008_;
v_isShared_3069_ = v_isSharedCheck_3074_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_val_3066_);
lean_dec(v___x_3008_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3074_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3070_; lean_object* v___x_3072_; 
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v_val_3066_);
lean_ctor_set(v___x_3070_, 1, v___y_2992_);
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3070_);
v___x_3072_ = v___x_3068_;
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
v___jp_2996_:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_2999_ = lean_st_ref_take(v___y_2991_);
v___x_3000_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3___redArg(v___x_2999_, v_e_2990_, v_fst_2998_);
v___x_3001_ = lean_st_ref_put(v___y_2991_, v___x_3000_);
v___x_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3002_, 0, v_a_2997_);
return v___x_3002_;
}
v___jp_3003_:
{
if (lean_obj_tag(v___y_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v_fst_3006_; 
v_a_3005_ = lean_ctor_get(v___y_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref_known(v___y_3004_, 1);
v_fst_3006_ = lean_ctor_get(v_a_3005_, 0);
lean_inc(v_fst_3006_);
v_a_2997_ = v_a_3005_;
v_fst_2998_ = v_fst_3006_;
goto v___jp_2996_;
}
else
{
lean_dec_ref(v_e_2990_);
return v___y_3004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object* v_g_3075_, lean_object* v_e_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
lean_object* v_res_3082_; 
v_res_3082_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_g_3075_, v_e_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3077_);
return v_res_3082_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0(void){
_start:
{
lean_object* v___x_3083_; double v___x_3084_; 
v___x_3083_ = lean_unsigned_to_nat(0u);
v___x_3084_ = lean_float_of_nat(v___x_3083_);
return v___x_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object* v_cls_3088_, lean_object* v_msg_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
lean_object* v_ref_3094_; lean_object* v___x_3095_; lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3141_; 
v_ref_3094_ = lean_ctor_get(v___y_3091_, 2);
v___x_3095_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_msg_3089_, v___y_3091_, v___y_3092_);
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3098_ = v___x_3095_;
v_isShared_3099_ = v_isSharedCheck_3141_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3095_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3141_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3100_; lean_object* v_traceState_3101_; lean_object* v_env_3102_; lean_object* v_nextMacroScope_3103_; lean_object* v_ngen_3104_; lean_object* v_auxDeclNGen_3105_; lean_object* v_cache_3106_; lean_object* v_messages_3107_; lean_object* v_infoState_3108_; lean_object* v_snapshotTasks_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3140_; 
v___x_3100_ = lean_st_ref_take(v___y_3092_);
v_traceState_3101_ = lean_ctor_get(v___x_3100_, 4);
v_env_3102_ = lean_ctor_get(v___x_3100_, 0);
v_nextMacroScope_3103_ = lean_ctor_get(v___x_3100_, 1);
v_ngen_3104_ = lean_ctor_get(v___x_3100_, 2);
v_auxDeclNGen_3105_ = lean_ctor_get(v___x_3100_, 3);
v_cache_3106_ = lean_ctor_get(v___x_3100_, 5);
v_messages_3107_ = lean_ctor_get(v___x_3100_, 6);
v_infoState_3108_ = lean_ctor_get(v___x_3100_, 7);
v_snapshotTasks_3109_ = lean_ctor_get(v___x_3100_, 8);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3111_ = v___x_3100_;
v_isShared_3112_ = v_isSharedCheck_3140_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_snapshotTasks_3109_);
lean_inc(v_infoState_3108_);
lean_inc(v_messages_3107_);
lean_inc(v_cache_3106_);
lean_inc(v_traceState_3101_);
lean_inc(v_auxDeclNGen_3105_);
lean_inc(v_ngen_3104_);
lean_inc(v_nextMacroScope_3103_);
lean_inc(v_env_3102_);
lean_dec(v___x_3100_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3140_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
uint64_t v_tid_3113_; lean_object* v_traces_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3139_; 
v_tid_3113_ = lean_ctor_get_uint64(v_traceState_3101_, sizeof(void*)*1);
v_traces_3114_ = lean_ctor_get(v_traceState_3101_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v_traceState_3101_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3116_ = v_traceState_3101_;
v_isShared_3117_ = v_isSharedCheck_3139_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_traces_3114_);
lean_dec(v_traceState_3101_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3139_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; double v___x_3120_; uint8_t v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_box(0);
v___x_3120_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0);
v___x_3121_ = 0;
v___x_3122_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1));
v___x_3123_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3123_, 0, v_cls_3088_);
lean_ctor_set(v___x_3123_, 1, v___x_3119_);
lean_ctor_set(v___x_3123_, 2, v___x_3122_);
lean_ctor_set_float(v___x_3123_, sizeof(void*)*3, v___x_3120_);
lean_ctor_set_float(v___x_3123_, sizeof(void*)*3 + 8, v___x_3120_);
lean_ctor_set_uint8(v___x_3123_, sizeof(void*)*3 + 16, v___x_3121_);
v___x_3124_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2));
v___x_3125_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set(v___x_3125_, 1, v_a_3096_);
lean_ctor_set(v___x_3125_, 2, v___x_3124_);
lean_inc(v_ref_3094_);
v___x_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3126_, 0, v_ref_3094_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
v___x_3127_ = l_Lean_PersistentArray_push___redArg(v_traces_3114_, v___x_3126_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 0, v___x_3127_);
v___x_3129_ = v___x_3116_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v___x_3127_);
lean_ctor_set_uint64(v_reuseFailAlloc_3138_, sizeof(void*)*1, v_tid_3113_);
v___x_3129_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3131_; 
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 4, v___x_3129_);
v___x_3131_ = v___x_3111_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_env_3102_);
lean_ctor_set(v_reuseFailAlloc_3137_, 1, v_nextMacroScope_3103_);
lean_ctor_set(v_reuseFailAlloc_3137_, 2, v_ngen_3104_);
lean_ctor_set(v_reuseFailAlloc_3137_, 3, v_auxDeclNGen_3105_);
lean_ctor_set(v_reuseFailAlloc_3137_, 4, v___x_3129_);
lean_ctor_set(v_reuseFailAlloc_3137_, 5, v_cache_3106_);
lean_ctor_set(v_reuseFailAlloc_3137_, 6, v_messages_3107_);
lean_ctor_set(v_reuseFailAlloc_3137_, 7, v_infoState_3108_);
lean_ctor_set(v_reuseFailAlloc_3137_, 8, v_snapshotTasks_3109_);
v___x_3131_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3135_; 
v___x_3132_ = lean_st_ref_put(v___y_3092_, v___x_3131_);
v___x_3133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3118_);
lean_ctor_set(v___x_3133_, 1, v___y_3090_);
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 0, v___x_3133_);
v___x_3135_ = v___x_3098_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3133_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object* v_cls_3142_, lean_object* v_msg_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v_cls_3142_, v_msg_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object* v_a_3149_, lean_object* v_x_3150_){
_start:
{
if (lean_obj_tag(v_x_3150_) == 0)
{
lean_object* v___x_3151_; 
v___x_3151_ = lean_box(0);
return v___x_3151_;
}
else
{
lean_object* v_key_3152_; lean_object* v_value_3153_; lean_object* v_tail_3154_; uint8_t v___x_3155_; 
v_key_3152_ = lean_ctor_get(v_x_3150_, 0);
v_value_3153_ = lean_ctor_get(v_x_3150_, 1);
v_tail_3154_ = lean_ctor_get(v_x_3150_, 2);
v___x_3155_ = l_Lean_instBEqFVarId_beq(v_key_3152_, v_a_3149_);
if (v___x_3155_ == 0)
{
v_x_3150_ = v_tail_3154_;
goto _start;
}
else
{
lean_object* v___x_3157_; 
lean_inc(v_value_3153_);
v___x_3157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3157_, 0, v_value_3153_);
return v___x_3157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object* v_a_3158_, lean_object* v_x_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3158_, v_x_3159_);
lean_dec(v_x_3159_);
lean_dec(v_a_3158_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object* v_m_3161_, lean_object* v_a_3162_){
_start:
{
lean_object* v_buckets_3163_; lean_object* v___x_3164_; uint64_t v___x_3165_; uint64_t v___x_3166_; uint64_t v___x_3167_; uint64_t v_fold_3168_; uint64_t v___x_3169_; uint64_t v___x_3170_; uint64_t v___x_3171_; size_t v___x_3172_; size_t v___x_3173_; size_t v___x_3174_; size_t v___x_3175_; size_t v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v_buckets_3163_ = lean_ctor_get(v_m_3161_, 1);
v___x_3164_ = lean_array_get_size(v_buckets_3163_);
v___x_3165_ = l_Lean_instHashableFVarId_hash(v_a_3162_);
v___x_3166_ = 32ULL;
v___x_3167_ = lean_uint64_shift_right(v___x_3165_, v___x_3166_);
v_fold_3168_ = lean_uint64_xor(v___x_3165_, v___x_3167_);
v___x_3169_ = 16ULL;
v___x_3170_ = lean_uint64_shift_right(v_fold_3168_, v___x_3169_);
v___x_3171_ = lean_uint64_xor(v_fold_3168_, v___x_3170_);
v___x_3172_ = lean_uint64_to_usize(v___x_3171_);
v___x_3173_ = lean_usize_of_nat(v___x_3164_);
v___x_3174_ = ((size_t)1ULL);
v___x_3175_ = lean_usize_sub(v___x_3173_, v___x_3174_);
v___x_3176_ = lean_usize_land(v___x_3172_, v___x_3175_);
v___x_3177_ = lean_array_uget_borrowed(v_buckets_3163_, v___x_3176_);
v___x_3178_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3162_, v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object* v_m_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3179_, v_a_3180_);
lean_dec(v_a_3180_);
lean_dec_ref(v_m_3179_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object* v___x_3182_, lean_object* v_m_3183_, lean_object* v_e_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
uint8_t v___x_16503__boxed_3189_; lean_object* v_res_3190_; 
v___x_16503__boxed_3189_ = lean_unbox(v___x_3182_);
v_res_3190_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(v___x_16503__boxed_3189_, v_m_3183_, v_e_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v_e_3184_);
return v_res_3190_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0(void){
_start:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = lean_box(0);
v___x_3192_ = lean_unsigned_to_nat(16u);
v___x_3193_ = lean_mk_array(v___x_3192_, v___x_3191_);
return v___x_3193_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1(void){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3194_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0);
v___x_3195_ = lean_unsigned_to_nat(0u);
v___x_3196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
lean_ctor_set(v___x_3196_, 1, v___x_3194_);
return v___x_3196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5(void){
_start:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3200_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4));
v___x_3201_ = lean_unsigned_to_nat(4u);
v___x_3202_ = lean_unsigned_to_nat(384u);
v___x_3203_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3));
v___x_3204_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3205_ = l_mkPanicMessageWithDecl(v___x_3204_, v___x_3203_, v___x_3202_, v___x_3201_, v___x_3200_);
return v___x_3205_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3207_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6));
v___x_3208_ = l_Lean_stringToMessageData(v___x_3207_);
return v___x_3208_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13(void){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3217_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_3218_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12));
v___x_3219_ = l_Lean_Name_append(v___x_3218_, v___x_3217_);
return v___x_3219_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15(void){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14));
v___x_3222_ = l_Lean_stringToMessageData(v___x_3221_);
return v___x_3222_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17(void){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16));
v___x_3225_ = l_Lean_stringToMessageData(v___x_3224_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object* v_m_3226_, lean_object* v_fvarId_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
lean_object* v___x_3232_; 
v___x_3232_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3226_, v_fvarId_3227_);
if (lean_obj_tag(v___x_3232_) == 1)
{
lean_object* v_val_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3347_; 
v_val_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3347_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_val_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3347_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v_fst_3237_; lean_object* v_snd_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3346_; 
v_fst_3237_ = lean_ctor_get(v_val_3233_, 0);
v_snd_3238_ = lean_ctor_get(v_val_3233_, 1);
v_isSharedCheck_3346_ = !lean_is_exclusive(v_val_3233_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3240_ = v_val_3233_;
v_isShared_3241_ = v_isSharedCheck_3346_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_snd_3238_);
lean_inc(v_fst_3237_);
lean_dec(v_val_3233_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3346_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v_tempMark_3242_; lean_object* v_doneMark_3243_; lean_object* v___x_3244_; uint8_t v___x_3245_; 
v_tempMark_3242_ = lean_ctor_get(v___y_3228_, 0);
v_doneMark_3243_ = lean_ctor_get(v___y_3228_, 1);
v___x_3244_ = l_Lean_LocalDecl_fvarId(v_fst_3237_);
v___x_3245_ = l_Lean_FVarIdHashSet_contains(v_doneMark_3243_, v___x_3244_);
if (v___x_3245_ == 0)
{
lean_object* v_toCold_3246_; lean_object* v_options_3247_; lean_object* v_inheritedTraceOptions_3248_; uint8_t v_hasTrace_3249_; uint8_t v___x_3250_; lean_object* v___x_3251_; lean_object* v___f_3252_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3314_; lean_object* v_tempMark_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; 
lean_del_object(v___x_3240_);
lean_del_object(v___x_3235_);
v_toCold_3246_ = lean_ctor_get(v___y_3229_, 0);
v_options_3247_ = lean_ctor_get(v_toCold_3246_, 2);
v_inheritedTraceOptions_3248_ = lean_ctor_get(v_toCold_3246_, 11);
v_hasTrace_3249_ = lean_ctor_get_uint8(v_options_3247_, sizeof(void*)*1);
v___x_3250_ = 1;
v___x_3251_ = lean_box(v___x_3250_);
v___f_3252_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3252_, 0, v___x_3251_);
lean_closure_set(v___f_3252_, 1, v_m_3226_);
if (v_hasTrace_3249_ == 0)
{
lean_inc_ref(v_tempMark_3242_);
v___y_3314_ = v___y_3228_;
v_tempMark_3315_ = v_tempMark_3242_;
v___y_3316_ = v___y_3229_;
v___y_3317_ = v___y_3230_;
goto v___jp_3313_;
}
else
{
lean_object* v___x_3323_; lean_object* v___x_3324_; uint8_t v___x_3325_; 
v___x_3323_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_3324_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_3325_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3248_, v_options_3247_, v___x_3324_);
if (v___x_3325_ == 0)
{
lean_inc_ref(v_tempMark_3242_);
v___y_3314_ = v___y_3228_;
v_tempMark_3315_ = v_tempMark_3242_;
v___y_3316_ = v___y_3229_;
v___y_3317_ = v___y_3230_;
goto v___jp_3313_;
}
else
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3326_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15);
lean_inc(v___x_3244_);
v___x_3327_ = l_Lean_mkFVar(v___x_3244_);
v___x_3328_ = l_Lean_MessageData_ofExpr(v___x_3327_);
v___x_3329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3326_);
lean_ctor_set(v___x_3329_, 1, v___x_3328_);
v___x_3330_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17);
v___x_3331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3329_);
lean_ctor_set(v___x_3331_, 1, v___x_3330_);
v___x_3332_ = l_Lean_LocalDecl_type(v_fst_3237_);
v___x_3333_ = l_Lean_MessageData_ofExpr(v___x_3332_);
v___x_3334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3331_);
lean_ctor_set(v___x_3334_, 1, v___x_3333_);
v___x_3335_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v___x_3323_, v___x_3334_, v___y_3228_, v___y_3229_, v___y_3230_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v_snd_3337_; lean_object* v_tempMark_3338_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_a_3336_);
lean_dec_ref_known(v___x_3335_, 1);
v_snd_3337_ = lean_ctor_get(v_a_3336_, 1);
lean_inc(v_snd_3337_);
lean_dec(v_a_3336_);
v_tempMark_3338_ = lean_ctor_get(v_snd_3337_, 0);
lean_inc_ref(v_tempMark_3338_);
v___y_3314_ = v_snd_3337_;
v_tempMark_3315_ = v_tempMark_3338_;
v___y_3316_ = v___y_3229_;
v___y_3317_ = v___y_3230_;
goto v___jp_3313_;
}
else
{
lean_dec_ref(v___f_3252_);
lean_dec(v___x_3244_);
lean_dec(v_snd_3238_);
lean_dec(v_fst_3237_);
return v___x_3335_;
}
}
}
v___jp_3253_:
{
lean_object* v_tempMark_3257_; lean_object* v_doneMark_3258_; lean_object* v_newDecls_3259_; lean_object* v_newArgs_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3305_; 
v_tempMark_3257_ = lean_ctor_get(v___y_3254_, 0);
v_doneMark_3258_ = lean_ctor_get(v___y_3254_, 1);
v_newDecls_3259_ = lean_ctor_get(v___y_3254_, 2);
v_newArgs_3260_ = lean_ctor_get(v___y_3254_, 3);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___y_3254_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3262_ = v___y_3254_;
v_isShared_3263_ = v_isSharedCheck_3305_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_newArgs_3260_);
lean_inc(v_newDecls_3259_);
lean_inc(v_doneMark_3258_);
lean_inc(v_tempMark_3257_);
lean_dec(v___y_3254_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3305_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3264_; lean_object* v___x_3266_; 
lean_inc(v___x_3244_);
v___x_3264_ = l_Lean_FVarIdHashSet_insert(v_tempMark_3257_, v___x_3244_);
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 0, v___x_3264_);
v___x_3266_ = v___x_3262_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v___x_3264_);
lean_ctor_set(v_reuseFailAlloc_3304_, 1, v_doneMark_3258_);
lean_ctor_set(v_reuseFailAlloc_3304_, 2, v_newDecls_3259_);
lean_ctor_set(v_reuseFailAlloc_3304_, 3, v_newArgs_3260_);
v___x_3266_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3267_ = l_Lean_LocalDecl_type(v_fst_3237_);
v___x_3268_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1);
v___x_3269_ = lean_st_mk_ref(v___x_3268_);
v___x_3270_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v___f_3252_, v___x_3267_, v___x_3269_, v___x_3266_, v___y_3255_, v___y_3256_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3303_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3273_ = v___x_3270_;
v_isShared_3274_ = v_isSharedCheck_3303_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3270_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3303_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v_snd_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3301_; 
v_snd_3275_ = lean_ctor_get(v_a_3271_, 1);
v_isSharedCheck_3301_ = !lean_is_exclusive(v_a_3271_);
if (v_isSharedCheck_3301_ == 0)
{
lean_object* v_unused_3302_; 
v_unused_3302_ = lean_ctor_get(v_a_3271_, 0);
lean_dec(v_unused_3302_);
v___x_3277_ = v_a_3271_;
v_isShared_3278_ = v_isSharedCheck_3301_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_snd_3275_);
lean_dec(v_a_3271_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3301_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3279_; lean_object* v_tempMark_3280_; lean_object* v_doneMark_3281_; lean_object* v_newDecls_3282_; lean_object* v_newArgs_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3300_; 
v___x_3279_ = lean_st_ref_get(v___x_3269_);
lean_dec(v___x_3269_);
lean_dec(v___x_3279_);
v_tempMark_3280_ = lean_ctor_get(v_snd_3275_, 0);
v_doneMark_3281_ = lean_ctor_get(v_snd_3275_, 1);
v_newDecls_3282_ = lean_ctor_get(v_snd_3275_, 2);
v_newArgs_3283_ = lean_ctor_get(v_snd_3275_, 3);
v_isSharedCheck_3300_ = !lean_is_exclusive(v_snd_3275_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3285_ = v_snd_3275_;
v_isShared_3286_ = v_isSharedCheck_3300_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_newArgs_3283_);
lean_inc(v_newDecls_3282_);
lean_inc(v_doneMark_3281_);
lean_inc(v_tempMark_3280_);
lean_dec(v_snd_3275_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3300_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3292_; 
v___x_3287_ = lean_box(0);
v___x_3288_ = l_Lean_FVarIdHashSet_insert(v_doneMark_3281_, v___x_3244_);
v___x_3289_ = lean_array_push(v_newDecls_3282_, v_fst_3237_);
v___x_3290_ = lean_array_push(v_newArgs_3283_, v_snd_3238_);
if (v_isShared_3286_ == 0)
{
lean_ctor_set(v___x_3285_, 3, v___x_3290_);
lean_ctor_set(v___x_3285_, 2, v___x_3289_);
lean_ctor_set(v___x_3285_, 1, v___x_3288_);
v___x_3292_ = v___x_3285_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_tempMark_3280_);
lean_ctor_set(v_reuseFailAlloc_3299_, 1, v___x_3288_);
lean_ctor_set(v_reuseFailAlloc_3299_, 2, v___x_3289_);
lean_ctor_set(v_reuseFailAlloc_3299_, 3, v___x_3290_);
v___x_3292_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3294_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set(v___x_3277_, 1, v___x_3292_);
lean_ctor_set(v___x_3277_, 0, v___x_3287_);
v___x_3294_ = v___x_3277_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v___x_3287_);
lean_ctor_set(v_reuseFailAlloc_3298_, 1, v___x_3292_);
v___x_3294_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
lean_object* v___x_3296_; 
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 0, v___x_3294_);
v___x_3296_ = v___x_3273_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3294_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3269_);
lean_dec(v___x_3244_);
lean_dec(v_snd_3238_);
lean_dec(v_fst_3237_);
return v___x_3270_;
}
}
}
}
v___jp_3306_:
{
uint8_t v___x_3310_; 
v___x_3310_ = l_Lean_LocalDecl_isLet(v_fst_3237_, v___x_3250_);
if (v___x_3310_ == 0)
{
v___y_3254_ = v___y_3307_;
v___y_3255_ = v___y_3308_;
v___y_3256_ = v___y_3309_;
goto v___jp_3253_;
}
else
{
if (v___x_3245_ == 0)
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
lean_dec_ref(v___f_3252_);
lean_dec(v___x_3244_);
lean_dec(v_snd_3238_);
lean_dec(v_fst_3237_);
v___x_3311_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5);
v___x_3312_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(v___x_3311_, v___y_3307_, v___y_3308_, v___y_3309_);
return v___x_3312_;
}
else
{
v___y_3254_ = v___y_3307_;
v___y_3255_ = v___y_3308_;
v___y_3256_ = v___y_3309_;
goto v___jp_3253_;
}
}
}
v___jp_3313_:
{
uint8_t v___x_3318_; 
v___x_3318_ = l_Lean_FVarIdHashSet_contains(v_tempMark_3315_, v___x_3244_);
lean_dec_ref(v_tempMark_3315_);
if (v___x_3318_ == 0)
{
v___y_3307_ = v___y_3314_;
v___y_3308_ = v___y_3316_;
v___y_3309_ = v___y_3317_;
goto v___jp_3306_;
}
else
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
lean_dec_ref(v___y_3314_);
v___x_3319_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7);
v___x_3320_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg(v___x_3319_, v___y_3316_, v___y_3317_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v_snd_3322_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
v_snd_3322_ = lean_ctor_get(v_a_3321_, 1);
lean_inc(v_snd_3322_);
lean_dec(v_a_3321_);
v___y_3307_ = v_snd_3322_;
v___y_3308_ = v___y_3316_;
v___y_3309_ = v___y_3317_;
goto v___jp_3306_;
}
else
{
lean_dec_ref(v___f_3252_);
lean_dec(v___x_3244_);
lean_dec(v_snd_3238_);
lean_dec(v_fst_3237_);
return v___x_3320_;
}
}
}
}
else
{
lean_object* v___x_3339_; lean_object* v___x_3341_; 
lean_dec(v___x_3244_);
lean_dec(v_snd_3238_);
lean_dec(v_fst_3237_);
lean_dec_ref(v_m_3226_);
v___x_3339_ = lean_box(0);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 1, v___y_3228_);
lean_ctor_set(v___x_3240_, 0, v___x_3339_);
v___x_3341_ = v___x_3240_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v___x_3339_);
lean_ctor_set(v_reuseFailAlloc_3345_, 1, v___y_3228_);
v___x_3341_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3343_; 
if (v_isShared_3236_ == 0)
{
lean_ctor_set_tag(v___x_3235_, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3341_);
v___x_3343_ = v___x_3235_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3341_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
}
}
}
else
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
lean_dec(v___x_3232_);
lean_dec_ref(v_m_3226_);
v___x_3348_ = lean_box(0);
v___x_3349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
lean_ctor_set(v___x_3349_, 1, v___y_3228_);
v___x_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
return v___x_3350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t v___x_3351_, lean_object* v_m_3352_, lean_object* v_e_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
lean_object* v___y_3359_; uint8_t v___x_3363_; 
v___x_3363_ = l_Lean_Expr_hasFVar(v_e_3353_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
lean_dec_ref(v_m_3352_);
v___x_3364_ = lean_box(v___x_3363_);
v___x_3365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3364_);
lean_ctor_set(v___x_3365_, 1, v___y_3354_);
v___x_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3365_);
return v___x_3366_;
}
else
{
uint8_t v___x_3367_; 
v___x_3367_ = l_Lean_Expr_isFVar(v_e_3353_);
if (v___x_3367_ == 0)
{
lean_dec_ref(v_m_3352_);
v___y_3359_ = v___y_3354_;
goto v___jp_3358_;
}
else
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = l_Lean_Expr_fvarId_x21(v_e_3353_);
v___x_3369_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3352_, v___x_3368_, v___y_3354_, v___y_3355_, v___y_3356_);
lean_dec(v___x_3368_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v_a_3370_; lean_object* v_snd_3371_; 
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v___x_3369_, 1);
v_snd_3371_ = lean_ctor_get(v_a_3370_, 1);
lean_inc(v_snd_3371_);
lean_dec(v_a_3370_);
v___y_3359_ = v_snd_3371_;
goto v___jp_3358_;
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
v_a_3372_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3369_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3369_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
}
v___jp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3360_ = lean_box(v___x_3351_);
v___x_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
lean_ctor_set(v___x_3361_, 1, v___y_3359_);
v___x_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
return v___x_3362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object* v_m_3380_, lean_object* v_fvarId_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3380_, v_fvarId_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
lean_dec(v___y_3384_);
lean_dec_ref(v___y_3383_);
lean_dec(v_fvarId_3381_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object* v_00_u03b2_3387_, lean_object* v_m_3388_, lean_object* v_a_3389_){
_start:
{
lean_object* v___x_3390_; 
v___x_3390_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3388_, v_a_3389_);
return v___x_3390_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object* v_00_u03b2_3391_, lean_object* v_m_3392_, lean_object* v_a_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(v_00_u03b2_3391_, v_m_3392_, v_a_3393_);
lean_dec(v_a_3393_);
lean_dec_ref(v_m_3392_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object* v_00_u03b1_3395_, lean_object* v_msg_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v___x_3401_; 
v___x_3401_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___redArg(v_msg_3396_, v___y_3398_, v___y_3399_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object* v_00_u03b1_3402_, lean_object* v_msg_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_00_u03b1_3402_, v_msg_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec_ref(v___y_3404_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object* v_00_u03b2_3409_, lean_object* v_a_3410_, lean_object* v_x_3411_){
_start:
{
lean_object* v___x_3412_; 
v___x_3412_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3410_, v_x_3411_);
return v___x_3412_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3413_, lean_object* v_a_3414_, lean_object* v_x_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(v_00_u03b2_3413_, v_a_3414_, v_x_3415_);
lean_dec(v_x_3415_);
lean_dec(v_a_3414_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object* v_00_u03b2_3417_, lean_object* v_m_3418_, lean_object* v_a_3419_){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_m_3418_, v_a_3419_);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3421_, lean_object* v_m_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(v_00_u03b2_3421_, v_m_3422_, v_a_3423_);
lean_dec_ref(v_a_3423_);
lean_dec_ref(v_m_3422_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3(lean_object* v_00_u03b2_3425_, lean_object* v_m_3426_, lean_object* v_a_3427_, lean_object* v_b_3428_){
_start:
{
lean_object* v___x_3429_; 
v___x_3429_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3___redArg(v_m_3426_, v_a_3427_, v_b_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3430_, lean_object* v_a_3431_, lean_object* v_x_3432_){
_start:
{
lean_object* v___x_3433_; 
v___x_3433_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___redArg(v_a_3431_, v_x_3432_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_3434_, lean_object* v_a_3435_, lean_object* v_x_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2_spec__4(v_00_u03b2_3434_, v_a_3435_, v_x_3436_);
lean_dec(v_x_3436_);
lean_dec_ref(v_a_3435_);
return v_res_3437_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_3438_, lean_object* v_a_3439_, lean_object* v_x_3440_){
_start:
{
uint8_t v___x_3441_; 
v___x_3441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___redArg(v_a_3439_, v_x_3440_);
return v___x_3441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3442_, lean_object* v_a_3443_, lean_object* v_x_3444_){
_start:
{
uint8_t v_res_3445_; lean_object* v_r_3446_; 
v_res_3445_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__6(v_00_u03b2_3442_, v_a_3443_, v_x_3444_);
lean_dec(v_x_3444_);
lean_dec_ref(v_a_3443_);
v_r_3446_ = lean_box(v_res_3445_);
return v_r_3446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_3447_, lean_object* v_data_3448_){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7___redArg(v_data_3448_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_3450_, lean_object* v_a_3451_, lean_object* v_b_3452_, lean_object* v_x_3453_){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__8___redArg(v_a_3451_, v_b_3452_, v_x_3453_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11(lean_object* v_00_u03b2_3455_, lean_object* v_i_3456_, lean_object* v_source_3457_, lean_object* v_target_3458_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11___redArg(v_i_3456_, v_source_3457_, v_target_3458_);
return v___x_3459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11_spec__12(lean_object* v_00_u03b2_3460_, lean_object* v_x_3461_, lean_object* v_x_3462_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__3_spec__7_spec__11_spec__12___redArg(v_x_3461_, v_x_3462_);
return v___x_3463_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3464_; 
v___x_3464_ = l_Lean_Core_instInhabitedCoreM___redArg();
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object* v_msg_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v___x_3469_; lean_object* v___x_7920__overap_3470_; lean_object* v___x_3471_; 
v___x_3469_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0);
v___x_7920__overap_3470_ = lean_panic_fn_borrowed(v___x_3469_, v_msg_3465_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
v___x_3471_ = lean_apply_3(v___x_7920__overap_3470_, v___y_3466_, v___y_3467_, lean_box(0));
return v___x_3471_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___boxed(lean_object* v_msg_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v_msg_3472_, v___y_3473_, v___y_3474_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object* v_newDecls_3477_, lean_object* v_newArgs_3478_, lean_object* v_____r_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3484_, 0, v_newDecls_3477_);
lean_ctor_set(v___x_3484_, 1, v_newArgs_3478_);
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3484_);
lean_ctor_set(v___x_3485_, 1, v___y_3480_);
v___x_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object* v_newDecls_3487_, lean_object* v_newArgs_3488_, lean_object* v_____r_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_3487_, v_newArgs_3488_, v_____r_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object* v_cls_3495_, lean_object* v_msg_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v_ref_3500_; lean_object* v___x_3501_; lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3546_; 
v_ref_3500_ = lean_ctor_get(v___y_3497_, 2);
v___x_3501_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_msg_3496_, v___y_3497_, v___y_3498_);
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3504_ = v___x_3501_;
v_isShared_3505_ = v_isSharedCheck_3546_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3546_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; lean_object* v_traceState_3507_; lean_object* v_env_3508_; lean_object* v_nextMacroScope_3509_; lean_object* v_ngen_3510_; lean_object* v_auxDeclNGen_3511_; lean_object* v_cache_3512_; lean_object* v_messages_3513_; lean_object* v_infoState_3514_; lean_object* v_snapshotTasks_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3545_; 
v___x_3506_ = lean_st_ref_take(v___y_3498_);
v_traceState_3507_ = lean_ctor_get(v___x_3506_, 4);
v_env_3508_ = lean_ctor_get(v___x_3506_, 0);
v_nextMacroScope_3509_ = lean_ctor_get(v___x_3506_, 1);
v_ngen_3510_ = lean_ctor_get(v___x_3506_, 2);
v_auxDeclNGen_3511_ = lean_ctor_get(v___x_3506_, 3);
v_cache_3512_ = lean_ctor_get(v___x_3506_, 5);
v_messages_3513_ = lean_ctor_get(v___x_3506_, 6);
v_infoState_3514_ = lean_ctor_get(v___x_3506_, 7);
v_snapshotTasks_3515_ = lean_ctor_get(v___x_3506_, 8);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3517_ = v___x_3506_;
v_isShared_3518_ = v_isSharedCheck_3545_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_snapshotTasks_3515_);
lean_inc(v_infoState_3514_);
lean_inc(v_messages_3513_);
lean_inc(v_cache_3512_);
lean_inc(v_traceState_3507_);
lean_inc(v_auxDeclNGen_3511_);
lean_inc(v_ngen_3510_);
lean_inc(v_nextMacroScope_3509_);
lean_inc(v_env_3508_);
lean_dec(v___x_3506_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3545_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
uint64_t v_tid_3519_; lean_object* v_traces_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3544_; 
v_tid_3519_ = lean_ctor_get_uint64(v_traceState_3507_, sizeof(void*)*1);
v_traces_3520_ = lean_ctor_get(v_traceState_3507_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v_traceState_3507_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3522_ = v_traceState_3507_;
v_isShared_3523_ = v_isSharedCheck_3544_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_traces_3520_);
lean_dec(v_traceState_3507_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3544_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; double v___x_3526_; uint8_t v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3524_ = lean_box(0);
v___x_3525_ = lean_box(0);
v___x_3526_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0);
v___x_3527_ = 0;
v___x_3528_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1));
v___x_3529_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3529_, 0, v_cls_3495_);
lean_ctor_set(v___x_3529_, 1, v___x_3525_);
lean_ctor_set(v___x_3529_, 2, v___x_3528_);
lean_ctor_set_float(v___x_3529_, sizeof(void*)*3, v___x_3526_);
lean_ctor_set_float(v___x_3529_, sizeof(void*)*3 + 8, v___x_3526_);
lean_ctor_set_uint8(v___x_3529_, sizeof(void*)*3 + 16, v___x_3527_);
v___x_3530_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2));
v___x_3531_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3529_);
lean_ctor_set(v___x_3531_, 1, v_a_3502_);
lean_ctor_set(v___x_3531_, 2, v___x_3530_);
lean_inc(v_ref_3500_);
v___x_3532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3532_, 0, v_ref_3500_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
v___x_3533_ = l_Lean_PersistentArray_push___redArg(v_traces_3520_, v___x_3532_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v___x_3533_);
v___x_3535_ = v___x_3522_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3533_);
lean_ctor_set_uint64(v_reuseFailAlloc_3543_, sizeof(void*)*1, v_tid_3519_);
v___x_3535_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3537_; 
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 4, v___x_3535_);
v___x_3537_ = v___x_3517_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_env_3508_);
lean_ctor_set(v_reuseFailAlloc_3542_, 1, v_nextMacroScope_3509_);
lean_ctor_set(v_reuseFailAlloc_3542_, 2, v_ngen_3510_);
lean_ctor_set(v_reuseFailAlloc_3542_, 3, v_auxDeclNGen_3511_);
lean_ctor_set(v_reuseFailAlloc_3542_, 4, v___x_3535_);
lean_ctor_set(v_reuseFailAlloc_3542_, 5, v_cache_3512_);
lean_ctor_set(v_reuseFailAlloc_3542_, 6, v_messages_3513_);
lean_ctor_set(v_reuseFailAlloc_3542_, 7, v_infoState_3514_);
lean_ctor_set(v_reuseFailAlloc_3542_, 8, v_snapshotTasks_3515_);
v___x_3537_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3538_ = lean_st_ref_put(v___y_3498_, v___x_3537_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3524_);
v___x_3540_ = v___x_3504_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3524_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object* v_cls_3547_, lean_object* v_msg_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3547_, v_msg_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t v_sz_3553_, size_t v_i_3554_, lean_object* v_bs_3555_){
_start:
{
uint8_t v___x_3556_; 
v___x_3556_ = lean_usize_dec_lt(v_i_3554_, v_sz_3553_);
if (v___x_3556_ == 0)
{
return v_bs_3555_;
}
else
{
lean_object* v_v_3557_; lean_object* v___x_3558_; lean_object* v_bs_x27_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; size_t v___x_3562_; size_t v___x_3563_; lean_object* v___x_3564_; 
v_v_3557_ = lean_array_uget(v_bs_3555_, v_i_3554_);
v___x_3558_ = lean_unsigned_to_nat(0u);
v_bs_x27_3559_ = lean_array_uset(v_bs_3555_, v_i_3554_, v___x_3558_);
v___x_3560_ = l_Lean_LocalDecl_fvarId(v_v_3557_);
lean_dec(v_v_3557_);
v___x_3561_ = l_Lean_mkFVar(v___x_3560_);
v___x_3562_ = ((size_t)1ULL);
v___x_3563_ = lean_usize_add(v_i_3554_, v___x_3562_);
v___x_3564_ = lean_array_uset(v_bs_x27_3559_, v_i_3554_, v___x_3561_);
v_i_3554_ = v___x_3563_;
v_bs_3555_ = v___x_3564_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object* v_sz_3566_, lean_object* v_i_3567_, lean_object* v_bs_3568_){
_start:
{
size_t v_sz_boxed_3569_; size_t v_i_boxed_3570_; lean_object* v_res_3571_; 
v_sz_boxed_3569_ = lean_unbox_usize(v_sz_3566_);
lean_dec(v_sz_3566_);
v_i_boxed_3570_ = lean_unbox_usize(v_i_3567_);
lean_dec(v_i_3567_);
v_res_3571_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_boxed_3569_, v_i_boxed_3570_, v_bs_3568_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object* v___x_3572_, lean_object* v_as_3573_, size_t v_sz_3574_, size_t v_i_3575_, lean_object* v_b_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
uint8_t v___x_3581_; 
v___x_3581_ = lean_usize_dec_lt(v_i_3575_, v_sz_3574_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; lean_object* v___x_3583_; 
lean_dec_ref(v___x_3572_);
v___x_3582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3582_, 0, v_b_3576_);
lean_ctor_set(v___x_3582_, 1, v___y_3577_);
v___x_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
return v___x_3583_;
}
else
{
lean_object* v___x_3584_; lean_object* v_a_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3584_ = lean_box(0);
v_a_3585_ = lean_array_uget_borrowed(v_as_3573_, v_i_3575_);
v___x_3586_ = l_Lean_LocalDecl_fvarId(v_a_3585_);
lean_inc_ref(v___x_3572_);
v___x_3587_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v___x_3572_, v___x_3586_, v___y_3577_, v___y_3578_, v___y_3579_);
lean_dec(v___x_3586_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v_snd_3589_; size_t v___x_3590_; size_t v___x_3591_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v_snd_3589_ = lean_ctor_get(v_a_3588_, 1);
lean_inc(v_snd_3589_);
lean_dec(v_a_3588_);
v___x_3590_ = ((size_t)1ULL);
v___x_3591_ = lean_usize_add(v_i_3575_, v___x_3590_);
v_i_3575_ = v___x_3591_;
v_b_3576_ = v___x_3584_;
v___y_3577_ = v_snd_3589_;
goto _start;
}
else
{
lean_dec_ref(v___x_3572_);
return v___x_3587_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object* v___x_3593_, lean_object* v_as_3594_, lean_object* v_sz_3595_, lean_object* v_i_3596_, lean_object* v_b_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
size_t v_sz_boxed_3602_; size_t v_i_boxed_3603_; lean_object* v_res_3604_; 
v_sz_boxed_3602_ = lean_unbox_usize(v_sz_3595_);
lean_dec(v_sz_3595_);
v_i_boxed_3603_ = lean_unbox_usize(v_i_3596_);
lean_dec(v_i_3596_);
v_res_3604_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v___x_3593_, v_as_3594_, v_sz_boxed_3602_, v_i_boxed_3603_, v_b_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec_ref(v_as_3594_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object* v_a_3605_, lean_object* v_a_3606_){
_start:
{
if (lean_obj_tag(v_a_3605_) == 0)
{
lean_object* v___x_3607_; 
v___x_3607_ = l_List_reverse___redArg(v_a_3606_);
return v___x_3607_;
}
else
{
lean_object* v_head_3608_; lean_object* v_tail_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3618_; 
v_head_3608_ = lean_ctor_get(v_a_3605_, 0);
v_tail_3609_ = lean_ctor_get(v_a_3605_, 1);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_a_3605_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3611_ = v_a_3605_;
v_isShared_3612_ = v_isSharedCheck_3618_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_tail_3609_);
lean_inc(v_head_3608_);
lean_dec(v_a_3605_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3618_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3613_; lean_object* v___x_3615_; 
v___x_3613_ = l_Lean_MessageData_ofExpr(v_head_3608_);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 1, v_a_3606_);
lean_ctor_set(v___x_3611_, 0, v___x_3613_);
v___x_3615_ = v___x_3611_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3613_);
lean_ctor_set(v_reuseFailAlloc_3617_, 1, v_a_3606_);
v___x_3615_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
v_a_3605_ = v_tail_3609_;
v_a_3606_ = v___x_3615_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2___redArg(lean_object* v_a_3619_, lean_object* v_b_3620_, lean_object* v_x_3621_){
_start:
{
if (lean_obj_tag(v_x_3621_) == 0)
{
lean_dec(v_b_3620_);
lean_dec(v_a_3619_);
return v_x_3621_;
}
else
{
lean_object* v_key_3622_; lean_object* v_value_3623_; lean_object* v_tail_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3636_; 
v_key_3622_ = lean_ctor_get(v_x_3621_, 0);
v_value_3623_ = lean_ctor_get(v_x_3621_, 1);
v_tail_3624_ = lean_ctor_get(v_x_3621_, 2);
v_isSharedCheck_3636_ = !lean_is_exclusive(v_x_3621_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3626_ = v_x_3621_;
v_isShared_3627_ = v_isSharedCheck_3636_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_tail_3624_);
lean_inc(v_value_3623_);
lean_inc(v_key_3622_);
lean_dec(v_x_3621_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3636_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
uint8_t v___x_3628_; 
v___x_3628_ = l_Lean_instBEqFVarId_beq(v_key_3622_, v_a_3619_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; lean_object* v___x_3631_; 
v___x_3629_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2___redArg(v_a_3619_, v_b_3620_, v_tail_3624_);
if (v_isShared_3627_ == 0)
{
lean_ctor_set(v___x_3626_, 2, v___x_3629_);
v___x_3631_ = v___x_3626_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_key_3622_);
lean_ctor_set(v_reuseFailAlloc_3632_, 1, v_value_3623_);
lean_ctor_set(v_reuseFailAlloc_3632_, 2, v___x_3629_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
else
{
lean_object* v___x_3634_; 
lean_dec(v_value_3623_);
lean_dec(v_key_3622_);
if (v_isShared_3627_ == 0)
{
lean_ctor_set(v___x_3626_, 1, v_b_3620_);
lean_ctor_set(v___x_3626_, 0, v_a_3619_);
v___x_3634_ = v___x_3626_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3619_);
lean_ctor_set(v_reuseFailAlloc_3635_, 1, v_b_3620_);
lean_ctor_set(v_reuseFailAlloc_3635_, 2, v_tail_3624_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(lean_object* v_a_3637_, lean_object* v_x_3638_){
_start:
{
if (lean_obj_tag(v_x_3638_) == 0)
{
uint8_t v___x_3639_; 
v___x_3639_ = 0;
return v___x_3639_;
}
else
{
lean_object* v_key_3640_; lean_object* v_tail_3641_; uint8_t v___x_3642_; 
v_key_3640_ = lean_ctor_get(v_x_3638_, 0);
v_tail_3641_ = lean_ctor_get(v_x_3638_, 2);
v___x_3642_ = l_Lean_instBEqFVarId_beq(v_key_3640_, v_a_3637_);
if (v___x_3642_ == 0)
{
v_x_3638_ = v_tail_3641_;
goto _start;
}
else
{
return v___x_3642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg___boxed(lean_object* v_a_3644_, lean_object* v_x_3645_){
_start:
{
uint8_t v_res_3646_; lean_object* v_r_3647_; 
v_res_3646_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_3644_, v_x_3645_);
lean_dec(v_x_3645_);
lean_dec(v_a_3644_);
v_r_3647_ = lean_box(v_res_3646_);
return v_r_3647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3_spec__9___redArg(lean_object* v_x_3648_, lean_object* v_x_3649_){
_start:
{
if (lean_obj_tag(v_x_3649_) == 0)
{
return v_x_3648_;
}
else
{
lean_object* v_key_3650_; lean_object* v_value_3651_; lean_object* v_tail_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3675_; 
v_key_3650_ = lean_ctor_get(v_x_3649_, 0);
v_value_3651_ = lean_ctor_get(v_x_3649_, 1);
v_tail_3652_ = lean_ctor_get(v_x_3649_, 2);
v_isSharedCheck_3675_ = !lean_is_exclusive(v_x_3649_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3654_ = v_x_3649_;
v_isShared_3655_ = v_isSharedCheck_3675_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_tail_3652_);
lean_inc(v_value_3651_);
lean_inc(v_key_3650_);
lean_dec(v_x_3649_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3675_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3656_; uint64_t v___x_3657_; uint64_t v___x_3658_; uint64_t v___x_3659_; uint64_t v_fold_3660_; uint64_t v___x_3661_; uint64_t v___x_3662_; uint64_t v___x_3663_; size_t v___x_3664_; size_t v___x_3665_; size_t v___x_3666_; size_t v___x_3667_; size_t v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3671_; 
v___x_3656_ = lean_array_get_size(v_x_3648_);
v___x_3657_ = l_Lean_instHashableFVarId_hash(v_key_3650_);
v___x_3658_ = 32ULL;
v___x_3659_ = lean_uint64_shift_right(v___x_3657_, v___x_3658_);
v_fold_3660_ = lean_uint64_xor(v___x_3657_, v___x_3659_);
v___x_3661_ = 16ULL;
v___x_3662_ = lean_uint64_shift_right(v_fold_3660_, v___x_3661_);
v___x_3663_ = lean_uint64_xor(v_fold_3660_, v___x_3662_);
v___x_3664_ = lean_uint64_to_usize(v___x_3663_);
v___x_3665_ = lean_usize_of_nat(v___x_3656_);
v___x_3666_ = ((size_t)1ULL);
v___x_3667_ = lean_usize_sub(v___x_3665_, v___x_3666_);
v___x_3668_ = lean_usize_land(v___x_3664_, v___x_3667_);
v___x_3669_ = lean_array_uget_borrowed(v_x_3648_, v___x_3668_);
lean_inc(v___x_3669_);
if (v_isShared_3655_ == 0)
{
lean_ctor_set(v___x_3654_, 2, v___x_3669_);
v___x_3671_ = v___x_3654_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_key_3650_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_value_3651_);
lean_ctor_set(v_reuseFailAlloc_3674_, 2, v___x_3669_);
v___x_3671_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3672_; 
v___x_3672_ = lean_array_uset(v_x_3648_, v___x_3668_, v___x_3671_);
v_x_3648_ = v___x_3672_;
v_x_3649_ = v_tail_3652_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3___redArg(lean_object* v_i_3676_, lean_object* v_source_3677_, lean_object* v_target_3678_){
_start:
{
lean_object* v___x_3679_; uint8_t v___x_3680_; 
v___x_3679_ = lean_array_get_size(v_source_3677_);
v___x_3680_ = lean_nat_dec_lt(v_i_3676_, v___x_3679_);
if (v___x_3680_ == 0)
{
lean_dec_ref(v_source_3677_);
lean_dec(v_i_3676_);
return v_target_3678_;
}
else
{
lean_object* v_es_3681_; lean_object* v___x_3682_; lean_object* v_source_3683_; lean_object* v_target_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v_es_3681_ = lean_array_fget(v_source_3677_, v_i_3676_);
v___x_3682_ = lean_box(0);
v_source_3683_ = lean_array_fset(v_source_3677_, v_i_3676_, v___x_3682_);
v_target_3684_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3_spec__9___redArg(v_target_3678_, v_es_3681_);
v___x_3685_ = lean_unsigned_to_nat(1u);
v___x_3686_ = lean_nat_add(v_i_3676_, v___x_3685_);
lean_dec(v_i_3676_);
v_i_3676_ = v___x_3686_;
v_source_3677_ = v_source_3683_;
v_target_3678_ = v_target_3684_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1___redArg(lean_object* v_data_3688_){
_start:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v_nbuckets_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3689_ = lean_array_get_size(v_data_3688_);
v___x_3690_ = lean_unsigned_to_nat(2u);
v_nbuckets_3691_ = lean_nat_mul(v___x_3689_, v___x_3690_);
v___x_3692_ = lean_unsigned_to_nat(0u);
v___x_3693_ = lean_box(0);
v___x_3694_ = lean_mk_array(v_nbuckets_3691_, v___x_3693_);
v___x_3695_ = lean_array_propagate_mark(v_data_3688_, v___x_3694_);
v___x_3696_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3___redArg(v___x_3692_, v_data_3688_, v___x_3695_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(lean_object* v_m_3697_, lean_object* v_a_3698_, lean_object* v_b_3699_){
_start:
{
lean_object* v_size_3700_; lean_object* v_buckets_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3744_; 
v_size_3700_ = lean_ctor_get(v_m_3697_, 0);
v_buckets_3701_ = lean_ctor_get(v_m_3697_, 1);
v_isSharedCheck_3744_ = !lean_is_exclusive(v_m_3697_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3703_ = v_m_3697_;
v_isShared_3704_ = v_isSharedCheck_3744_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_buckets_3701_);
lean_inc(v_size_3700_);
lean_dec(v_m_3697_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3744_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; uint64_t v___x_3706_; uint64_t v___x_3707_; uint64_t v___x_3708_; uint64_t v_fold_3709_; uint64_t v___x_3710_; uint64_t v___x_3711_; uint64_t v___x_3712_; size_t v___x_3713_; size_t v___x_3714_; size_t v___x_3715_; size_t v___x_3716_; size_t v___x_3717_; lean_object* v_bkt_3718_; uint8_t v___x_3719_; 
v___x_3705_ = lean_array_get_size(v_buckets_3701_);
v___x_3706_ = l_Lean_instHashableFVarId_hash(v_a_3698_);
v___x_3707_ = 32ULL;
v___x_3708_ = lean_uint64_shift_right(v___x_3706_, v___x_3707_);
v_fold_3709_ = lean_uint64_xor(v___x_3706_, v___x_3708_);
v___x_3710_ = 16ULL;
v___x_3711_ = lean_uint64_shift_right(v_fold_3709_, v___x_3710_);
v___x_3712_ = lean_uint64_xor(v_fold_3709_, v___x_3711_);
v___x_3713_ = lean_uint64_to_usize(v___x_3712_);
v___x_3714_ = lean_usize_of_nat(v___x_3705_);
v___x_3715_ = ((size_t)1ULL);
v___x_3716_ = lean_usize_sub(v___x_3714_, v___x_3715_);
v___x_3717_ = lean_usize_land(v___x_3713_, v___x_3716_);
v_bkt_3718_ = lean_array_uget_borrowed(v_buckets_3701_, v___x_3717_);
v___x_3719_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_3698_, v_bkt_3718_);
if (v___x_3719_ == 0)
{
lean_object* v___x_3720_; lean_object* v_size_x27_3721_; lean_object* v___x_3722_; lean_object* v_buckets_x27_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3720_ = lean_unsigned_to_nat(1u);
v_size_x27_3721_ = lean_nat_add(v_size_3700_, v___x_3720_);
lean_dec(v_size_3700_);
lean_inc(v_bkt_3718_);
v___x_3722_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3722_, 0, v_a_3698_);
lean_ctor_set(v___x_3722_, 1, v_b_3699_);
lean_ctor_set(v___x_3722_, 2, v_bkt_3718_);
v_buckets_x27_3723_ = lean_array_uset(v_buckets_3701_, v___x_3717_, v___x_3722_);
v___x_3724_ = lean_unsigned_to_nat(4u);
v___x_3725_ = lean_nat_mul(v_size_x27_3721_, v___x_3724_);
v___x_3726_ = lean_unsigned_to_nat(3u);
v___x_3727_ = lean_nat_div(v___x_3725_, v___x_3726_);
lean_dec(v___x_3725_);
v___x_3728_ = lean_array_get_size(v_buckets_x27_3723_);
v___x_3729_ = lean_nat_dec_le(v___x_3727_, v___x_3728_);
lean_dec(v___x_3727_);
if (v___x_3729_ == 0)
{
lean_object* v_val_3730_; lean_object* v___x_3732_; 
v_val_3730_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1___redArg(v_buckets_x27_3723_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 1, v_val_3730_);
lean_ctor_set(v___x_3703_, 0, v_size_x27_3721_);
v___x_3732_ = v___x_3703_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_size_x27_3721_);
lean_ctor_set(v_reuseFailAlloc_3733_, 1, v_val_3730_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
else
{
lean_object* v___x_3735_; 
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 1, v_buckets_x27_3723_);
lean_ctor_set(v___x_3703_, 0, v_size_x27_3721_);
v___x_3735_ = v___x_3703_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_size_x27_3721_);
lean_ctor_set(v_reuseFailAlloc_3736_, 1, v_buckets_x27_3723_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
else
{
lean_object* v___x_3737_; lean_object* v_buckets_x27_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3742_; 
lean_inc(v_bkt_3718_);
v___x_3737_ = lean_box(0);
v_buckets_x27_3738_ = lean_array_uset(v_buckets_3701_, v___x_3717_, v___x_3737_);
v___x_3739_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2___redArg(v_a_3698_, v_b_3699_, v_bkt_3718_);
v___x_3740_ = lean_array_uset(v_buckets_x27_3738_, v___x_3717_, v___x_3739_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 1, v___x_3740_);
v___x_3742_ = v___x_3703_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_size_3700_);
lean_ctor_set(v_reuseFailAlloc_3743_, 1, v___x_3740_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object* v_as_3745_, size_t v_sz_3746_, size_t v_i_3747_, lean_object* v_b_3748_){
_start:
{
uint8_t v___x_3750_; 
v___x_3750_ = lean_usize_dec_lt(v_i_3747_, v_sz_3746_);
if (v___x_3750_ == 0)
{
lean_object* v___x_3751_; 
v___x_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3751_, 0, v_b_3748_);
return v___x_3751_;
}
else
{
lean_object* v_snd_3752_; lean_object* v_fst_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3788_; 
v_snd_3752_ = lean_ctor_get(v_b_3748_, 1);
v_fst_3753_ = lean_ctor_get(v_b_3748_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v_b_3748_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3755_ = v_b_3748_;
v_isShared_3756_ = v_isSharedCheck_3788_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_snd_3752_);
lean_inc(v_fst_3753_);
lean_dec(v_b_3748_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3788_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v_array_3757_; lean_object* v_start_3758_; lean_object* v_stop_3759_; uint8_t v___x_3760_; 
v_array_3757_ = lean_ctor_get(v_snd_3752_, 0);
v_start_3758_ = lean_ctor_get(v_snd_3752_, 1);
v_stop_3759_ = lean_ctor_get(v_snd_3752_, 2);
v___x_3760_ = lean_nat_dec_lt(v_start_3758_, v_stop_3759_);
if (v___x_3760_ == 0)
{
lean_object* v___x_3762_; 
if (v_isShared_3756_ == 0)
{
v___x_3762_ = v___x_3755_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_fst_3753_);
lean_ctor_set(v_reuseFailAlloc_3764_, 1, v_snd_3752_);
v___x_3762_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
lean_object* v___x_3763_; 
v___x_3763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
return v___x_3763_;
}
}
else
{
lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3784_; 
lean_inc(v_stop_3759_);
lean_inc(v_start_3758_);
lean_inc_ref(v_array_3757_);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_snd_3752_);
if (v_isSharedCheck_3784_ == 0)
{
lean_object* v_unused_3785_; lean_object* v_unused_3786_; lean_object* v_unused_3787_; 
v_unused_3785_ = lean_ctor_get(v_snd_3752_, 2);
lean_dec(v_unused_3785_);
v_unused_3786_ = lean_ctor_get(v_snd_3752_, 1);
lean_dec(v_unused_3786_);
v_unused_3787_ = lean_ctor_get(v_snd_3752_, 0);
lean_dec(v_unused_3787_);
v___x_3766_ = v_snd_3752_;
v_isShared_3767_ = v_isSharedCheck_3784_;
goto v_resetjp_3765_;
}
else
{
lean_dec(v_snd_3752_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3784_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v_a_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3773_; 
v_a_3768_ = lean_array_uget_borrowed(v_as_3745_, v_i_3747_);
v___x_3769_ = lean_array_fget(v_array_3757_, v_start_3758_);
v___x_3770_ = lean_unsigned_to_nat(1u);
v___x_3771_ = lean_nat_add(v_start_3758_, v___x_3770_);
lean_dec(v_start_3758_);
if (v_isShared_3767_ == 0)
{
lean_ctor_set(v___x_3766_, 1, v___x_3771_);
v___x_3773_ = v___x_3766_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_array_3757_);
lean_ctor_set(v_reuseFailAlloc_3783_, 1, v___x_3771_);
lean_ctor_set(v_reuseFailAlloc_3783_, 2, v_stop_3759_);
v___x_3773_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
lean_object* v___x_3774_; lean_object* v___x_3776_; 
v___x_3774_ = l_Lean_LocalDecl_fvarId(v_a_3768_);
lean_inc(v_a_3768_);
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 1, v___x_3769_);
lean_ctor_set(v___x_3755_, 0, v_a_3768_);
v___x_3776_ = v___x_3755_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3768_);
lean_ctor_set(v_reuseFailAlloc_3782_, 1, v___x_3769_);
v___x_3776_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; size_t v___x_3779_; size_t v___x_3780_; 
v___x_3777_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(v_fst_3753_, v___x_3774_, v___x_3776_);
v___x_3778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3777_);
lean_ctor_set(v___x_3778_, 1, v___x_3773_);
v___x_3779_ = ((size_t)1ULL);
v___x_3780_ = lean_usize_add(v_i_3747_, v___x_3779_);
v_i_3747_ = v___x_3780_;
v_b_3748_ = v___x_3778_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object* v_as_3789_, lean_object* v_sz_3790_, lean_object* v_i_3791_, lean_object* v_b_3792_, lean_object* v___y_3793_){
_start:
{
size_t v_sz_boxed_3794_; size_t v_i_boxed_3795_; lean_object* v_res_3796_; 
v_sz_boxed_3794_ = lean_unbox_usize(v_sz_3790_);
lean_dec(v_sz_3790_);
v_i_boxed_3795_ = lean_unbox_usize(v_i_3791_);
lean_dec(v_i_3791_);
v_res_3796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_3789_, v_sz_boxed_3794_, v_i_boxed_3795_, v_b_3792_);
lean_dec_ref(v_as_3789_);
return v_res_3796_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2(void){
_start:
{
lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3799_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1));
v___x_3800_ = lean_unsigned_to_nat(2u);
v___x_3801_ = lean_unsigned_to_nat(366u);
v___x_3802_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0));
v___x_3803_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3804_ = l_mkPanicMessageWithDecl(v___x_3803_, v___x_3802_, v___x_3801_, v___x_3800_, v___x_3799_);
return v___x_3804_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4(void){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3806_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3));
v___x_3807_ = lean_unsigned_to_nat(2u);
v___x_3808_ = lean_unsigned_to_nat(367u);
v___x_3809_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0));
v___x_3810_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3811_ = l_mkPanicMessageWithDecl(v___x_3810_, v___x_3809_, v___x_3808_, v___x_3807_, v___x_3806_);
return v___x_3811_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3812_ = lean_box(0);
v___x_3813_ = lean_unsigned_to_nat(16u);
v___x_3814_ = lean_mk_array(v___x_3813_, v___x_3812_);
return v___x_3814_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6(void){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3815_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5);
v___x_3816_ = lean_unsigned_to_nat(0u);
v___x_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3816_);
lean_ctor_set(v___x_3817_, 1, v___x_3815_);
return v___x_3817_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8(void){
_start:
{
lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3819_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7));
v___x_3820_ = l_Lean_stringToMessageData(v___x_3819_);
return v___x_3820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; 
v___x_3822_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9));
v___x_3823_ = l_Lean_stringToMessageData(v___x_3822_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object* v_sortedDecls_3824_, lean_object* v_sortedArgs_3825_, lean_object* v_toSortDecls_3826_, lean_object* v_toSortArgs_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v___y_3832_; lean_object* v___y_3851_; lean_object* v___y_3852_; lean_object* v___y_3853_; lean_object* v___y_3854_; lean_object* v_snd_3855_; lean_object* v___x_3857_; lean_object* v___x_3858_; uint8_t v___x_3859_; 
v___x_3857_ = lean_array_get_size(v_sortedDecls_3824_);
v___x_3858_ = lean_array_get_size(v_sortedArgs_3825_);
v___x_3859_ = lean_nat_dec_eq(v___x_3857_, v___x_3858_);
if (v___x_3859_ == 0)
{
lean_object* v___x_3860_; lean_object* v___x_3861_; 
lean_dec_ref(v_toSortArgs_3827_);
lean_dec_ref(v_sortedArgs_3825_);
lean_dec_ref(v_sortedDecls_3824_);
v___x_3860_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2);
v___x_3861_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v___x_3860_, v___y_3828_, v___y_3829_);
return v___x_3861_;
}
else
{
lean_object* v___x_3862_; lean_object* v___x_3863_; uint8_t v___x_3864_; 
v___x_3862_ = lean_array_get_size(v_toSortDecls_3826_);
v___x_3863_ = lean_array_get_size(v_toSortArgs_3827_);
v___x_3864_ = lean_nat_dec_eq(v___x_3862_, v___x_3863_);
if (v___x_3864_ == 0)
{
lean_object* v___x_3865_; lean_object* v___x_3866_; 
lean_dec_ref(v_toSortArgs_3827_);
lean_dec_ref(v_sortedArgs_3825_);
lean_dec_ref(v_sortedDecls_3824_);
v___x_3865_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4);
v___x_3866_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v___x_3865_, v___y_3828_, v___y_3829_);
return v___x_3866_;
}
else
{
lean_object* v___x_3867_; uint8_t v___x_3868_; 
v___x_3867_ = lean_unsigned_to_nat(0u);
v___x_3868_ = lean_nat_dec_eq(v___x_3862_, v___x_3867_);
if (v___x_3868_ == 0)
{
lean_object* v_toCold_3869_; lean_object* v_options_3870_; lean_object* v_inheritedTraceOptions_3871_; uint8_t v_hasTrace_3872_; lean_object* v_cls_3873_; lean_object* v___y_3875_; lean_object* v___y_3876_; 
v_toCold_3869_ = lean_ctor_get(v___y_3828_, 0);
v_options_3870_ = lean_ctor_get(v_toCold_3869_, 2);
v_inheritedTraceOptions_3871_ = lean_ctor_get(v_toCold_3869_, 11);
v_hasTrace_3872_ = lean_ctor_get_uint8(v_options_3870_, sizeof(void*)*1);
v_cls_3873_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
if (v_hasTrace_3872_ == 0)
{
v___y_3875_ = v___y_3828_;
v___y_3876_ = v___y_3829_;
goto v___jp_3874_;
}
else
{
lean_object* v___x_3977_; uint8_t v___x_3978_; 
v___x_3977_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_3978_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3871_, v_options_3870_, v___x_3977_);
if (v___x_3978_ == 0)
{
v___y_3875_ = v___y_3828_;
v___y_3876_ = v___y_3829_;
goto v___jp_3874_;
}
else
{
lean_object* v___x_3979_; lean_object* v___x_3980_; 
v___x_3979_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10);
v___x_3980_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3873_, v___x_3979_, v___y_3828_, v___y_3829_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_dec_ref_known(v___x_3980_, 1);
v___y_3875_ = v___y_3828_;
v___y_3876_ = v___y_3829_;
goto v___jp_3874_;
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_dec_ref(v_toSortArgs_3827_);
lean_dec_ref(v_sortedArgs_3825_);
lean_dec_ref(v_sortedDecls_3824_);
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3980_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3980_);
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
}
v___jp_3874_:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; size_t v_sz_3880_; size_t v___x_3881_; lean_object* v___x_3882_; 
v___x_3877_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6);
v___x_3878_ = l_Array_toSubarray___redArg(v_sortedArgs_3825_, v___x_3867_, v___x_3858_);
v___x_3879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3877_);
lean_ctor_set(v___x_3879_, 1, v___x_3878_);
v_sz_3880_ = lean_array_size(v_sortedDecls_3824_);
v___x_3881_ = ((size_t)0ULL);
v___x_3882_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_sortedDecls_3824_, v_sz_3880_, v___x_3881_, v___x_3879_);
if (lean_obj_tag(v___x_3882_) == 0)
{
lean_object* v_a_3883_; lean_object* v_fst_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3967_; 
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
lean_inc(v_a_3883_);
lean_dec_ref_known(v___x_3882_, 1);
v_fst_3884_ = lean_ctor_get(v_a_3883_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v_a_3883_);
if (v_isSharedCheck_3967_ == 0)
{
lean_object* v_unused_3968_; 
v_unused_3968_ = lean_ctor_get(v_a_3883_, 1);
lean_dec(v_unused_3968_);
v___x_3886_ = v_a_3883_;
v_isShared_3887_ = v_isSharedCheck_3967_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_fst_3884_);
lean_dec(v_a_3883_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3967_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3888_; lean_object* v___x_3890_; 
v___x_3888_ = l_Array_toSubarray___redArg(v_toSortArgs_3827_, v___x_3867_, v___x_3863_);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 1, v___x_3888_);
v___x_3890_ = v___x_3886_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_fst_3884_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v___x_3888_);
v___x_3890_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
size_t v_sz_3891_; lean_object* v___x_3892_; 
v_sz_3891_ = lean_array_size(v_toSortDecls_3826_);
v___x_3892_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_toSortDecls_3826_, v_sz_3891_, v___x_3881_, v___x_3890_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v_fst_3894_; lean_object* v_size_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref_known(v___x_3892_, 1);
v_fst_3894_ = lean_ctor_get(v_a_3893_, 0);
lean_inc_n(v_fst_3894_, 2);
lean_dec(v_a_3893_);
v_size_3895_ = lean_ctor_get(v_fst_3894_, 0);
v___x_3896_ = lean_mk_empty_array_with_capacity(v_size_3895_);
lean_inc_ref(v___x_3896_);
v___x_3897_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3877_);
lean_ctor_set(v___x_3897_, 1, v___x_3877_);
lean_ctor_set(v___x_3897_, 2, v___x_3896_);
lean_ctor_set(v___x_3897_, 3, v___x_3896_);
v___x_3898_ = lean_box(0);
v___x_3899_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_3894_, v_sortedDecls_3824_, v_sz_3880_, v___x_3881_, v___x_3898_, v___x_3897_, v___y_3875_, v___y_3876_);
lean_dec_ref(v_sortedDecls_3824_);
if (lean_obj_tag(v___x_3899_) == 0)
{
lean_object* v_a_3900_; lean_object* v_snd_3901_; lean_object* v___x_3902_; 
v_a_3900_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_a_3900_);
lean_dec_ref_known(v___x_3899_, 1);
v_snd_3901_ = lean_ctor_get(v_a_3900_, 1);
lean_inc(v_snd_3901_);
lean_dec(v_a_3900_);
v___x_3902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_3894_, v_toSortDecls_3826_, v_sz_3891_, v___x_3881_, v___x_3898_, v_snd_3901_, v___y_3875_, v___y_3876_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v_snd_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3940_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_a_3903_);
lean_dec_ref_known(v___x_3902_, 1);
v_snd_3904_ = lean_ctor_get(v_a_3903_, 1);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_a_3903_);
if (v_isSharedCheck_3940_ == 0)
{
lean_object* v_unused_3941_; 
v_unused_3941_ = lean_ctor_get(v_a_3903_, 0);
lean_dec(v_unused_3941_);
v___x_3906_ = v_a_3903_;
v_isShared_3907_ = v_isSharedCheck_3940_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_snd_3904_);
lean_dec(v_a_3903_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3940_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v_toCold_3908_; lean_object* v_options_3909_; lean_object* v_newDecls_3910_; lean_object* v_newArgs_3911_; lean_object* v_inheritedTraceOptions_3912_; uint8_t v_hasTrace_3913_; lean_object* v___f_3914_; 
v_toCold_3908_ = lean_ctor_get(v___y_3875_, 0);
v_options_3909_ = lean_ctor_get(v_toCold_3908_, 2);
v_newDecls_3910_ = lean_ctor_get(v_snd_3904_, 2);
v_newArgs_3911_ = lean_ctor_get(v_snd_3904_, 3);
v_inheritedTraceOptions_3912_ = lean_ctor_get(v_toCold_3908_, 11);
v_hasTrace_3913_ = lean_ctor_get_uint8(v_options_3909_, sizeof(void*)*1);
lean_inc_ref(v_newArgs_3911_);
lean_inc_ref(v_newDecls_3910_);
v___f_3914_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3914_, 0, v_newDecls_3910_);
lean_closure_set(v___f_3914_, 1, v_newArgs_3911_);
if (v_hasTrace_3913_ == 0)
{
lean_del_object(v___x_3906_);
v___y_3851_ = v___x_3898_;
v___y_3852_ = v___f_3914_;
v___y_3853_ = v___y_3876_;
v___y_3854_ = v___y_3875_;
v_snd_3855_ = v_snd_3904_;
goto v___jp_3850_;
}
else
{
lean_object* v___x_3915_; uint8_t v___x_3916_; 
v___x_3915_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_3916_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3912_, v_options_3909_, v___x_3915_);
if (v___x_3916_ == 0)
{
lean_del_object(v___x_3906_);
v___y_3851_ = v___x_3898_;
v___y_3852_ = v___f_3914_;
v___y_3853_ = v___y_3876_;
v___y_3854_ = v___y_3875_;
v_snd_3855_ = v_snd_3904_;
goto v___jp_3850_;
}
else
{
lean_object* v___x_3917_; size_t v_sz_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3925_; 
lean_inc_ref(v_newArgs_3911_);
lean_inc_ref_n(v_newDecls_3910_, 2);
lean_dec_ref(v___f_3914_);
v___x_3917_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8);
v_sz_3918_ = lean_array_size(v_newDecls_3910_);
v___x_3919_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_3918_, v___x_3881_, v_newDecls_3910_);
v___x_3920_ = lean_array_to_list(v___x_3919_);
v___x_3921_ = lean_box(0);
v___x_3922_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(v___x_3920_, v___x_3921_);
v___x_3923_ = l_Lean_MessageData_ofList(v___x_3922_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set_tag(v___x_3906_, 7);
lean_ctor_set(v___x_3906_, 1, v___x_3923_);
lean_ctor_set(v___x_3906_, 0, v___x_3917_);
v___x_3925_ = v___x_3906_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3917_);
lean_ctor_set(v_reuseFailAlloc_3939_, 1, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
lean_object* v___x_3926_; 
v___x_3926_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v_cls_3873_, v___x_3925_, v_snd_3904_, v___y_3875_, v___y_3876_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3927_; lean_object* v_fst_3928_; lean_object* v_snd_3929_; lean_object* v___x_3930_; 
v_a_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3927_);
lean_dec_ref_known(v___x_3926_, 1);
v_fst_3928_ = lean_ctor_get(v_a_3927_, 0);
lean_inc(v_fst_3928_);
v_snd_3929_ = lean_ctor_get(v_a_3927_, 1);
lean_inc(v_snd_3929_);
lean_dec(v_a_3927_);
v___x_3930_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_3910_, v_newArgs_3911_, v_fst_3928_, v_snd_3929_, v___y_3875_, v___y_3876_);
v___y_3832_ = v___x_3930_;
goto v___jp_3831_;
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_dec_ref(v_newArgs_3911_);
lean_dec_ref(v_newDecls_3910_);
v_a_3931_ = lean_ctor_get(v___x_3926_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3926_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___x_3926_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3926_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
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
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
v_a_3942_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3944_ = v___x_3902_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3902_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3942_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
else
{
lean_object* v_a_3950_; lean_object* v___x_3952_; uint8_t v_isShared_3953_; uint8_t v_isSharedCheck_3957_; 
lean_dec(v_fst_3894_);
v_a_3950_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3957_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3952_ = v___x_3899_;
v_isShared_3953_ = v_isSharedCheck_3957_;
goto v_resetjp_3951_;
}
else
{
lean_inc(v_a_3950_);
lean_dec(v___x_3899_);
v___x_3952_ = lean_box(0);
v_isShared_3953_ = v_isSharedCheck_3957_;
goto v_resetjp_3951_;
}
v_resetjp_3951_:
{
lean_object* v___x_3955_; 
if (v_isShared_3953_ == 0)
{
v___x_3955_ = v___x_3952_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v_a_3950_);
v___x_3955_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
return v___x_3955_;
}
}
}
}
else
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3965_; 
lean_dec_ref(v_sortedDecls_3824_);
v_a_3958_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3965_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3960_ = v___x_3892_;
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3892_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
return v___x_3963_;
}
}
}
}
}
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
lean_dec_ref(v_toSortArgs_3827_);
lean_dec_ref(v_sortedDecls_3824_);
v_a_3969_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3882_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3882_);
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
}
else
{
lean_object* v___x_3989_; lean_object* v___x_3990_; 
lean_dec_ref(v_toSortArgs_3827_);
v___x_3989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3989_, 0, v_sortedDecls_3824_);
lean_ctor_set(v___x_3989_, 1, v_sortedArgs_3825_);
v___x_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
}
v___jp_3831_:
{
if (lean_obj_tag(v___y_3832_) == 0)
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3841_; 
v_a_3833_ = lean_ctor_get(v___y_3832_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___y_3832_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3835_ = v___y_3832_;
v_isShared_3836_ = v_isSharedCheck_3841_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___y_3832_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3841_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v_fst_3837_; lean_object* v___x_3839_; 
v_fst_3837_ = lean_ctor_get(v_a_3833_, 0);
lean_inc(v_fst_3837_);
lean_dec(v_a_3833_);
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 0, v_fst_3837_);
v___x_3839_ = v___x_3835_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_fst_3837_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
else
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3849_; 
v_a_3842_ = lean_ctor_get(v___y_3832_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v___y_3832_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3844_ = v___y_3832_;
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___y_3832_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3847_; 
if (v_isShared_3845_ == 0)
{
v___x_3847_ = v___x_3844_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3842_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
}
v___jp_3850_:
{
lean_object* v___x_3856_; 
lean_inc(v___y_3853_);
lean_inc_ref(v___y_3854_);
v___x_3856_ = lean_apply_5(v___y_3852_, v___y_3851_, v_snd_3855_, v___y_3854_, v___y_3853_, lean_box(0));
v___y_3832_ = v___x_3856_;
goto v___jp_3831_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object* v_sortedDecls_3991_, lean_object* v_sortedArgs_3992_, lean_object* v_toSortDecls_3993_, lean_object* v_toSortArgs_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v_sortedDecls_3991_, v_sortedArgs_3992_, v_toSortDecls_3993_, v_toSortArgs_3994_, v___y_3995_, v___y_3996_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec_ref(v_toSortDecls_3993_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object* v_00_u03b2_3999_, lean_object* v_m_4000_, lean_object* v_a_4001_, lean_object* v_b_4002_){
_start:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(v_m_4000_, v_a_4001_, v_b_4002_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object* v_as_4004_, size_t v_sz_4005_, size_t v_i_4006_, lean_object* v_b_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_4004_, v_sz_4005_, v_i_4006_, v_b_4007_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object* v_as_4012_, lean_object* v_sz_4013_, lean_object* v_i_4014_, lean_object* v_b_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_){
_start:
{
size_t v_sz_boxed_4019_; size_t v_i_boxed_4020_; lean_object* v_res_4021_; 
v_sz_boxed_4019_ = lean_unbox_usize(v_sz_4013_);
lean_dec(v_sz_4013_);
v_i_boxed_4020_ = lean_unbox_usize(v_i_4014_);
lean_dec(v_i_4014_);
v_res_4021_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(v_as_4012_, v_sz_boxed_4019_, v_i_boxed_4020_, v_b_4015_, v___y_4016_, v___y_4017_);
lean_dec(v___y_4017_);
lean_dec_ref(v___y_4016_);
lean_dec_ref(v_as_4012_);
return v_res_4021_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(lean_object* v_00_u03b2_4022_, lean_object* v_a_4023_, lean_object* v_x_4024_){
_start:
{
uint8_t v___x_4025_; 
v___x_4025_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_4023_, v_x_4024_);
return v___x_4025_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4026_, lean_object* v_a_4027_, lean_object* v_x_4028_){
_start:
{
uint8_t v_res_4029_; lean_object* v_r_4030_; 
v_res_4029_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(v_00_u03b2_4026_, v_a_4027_, v_x_4028_);
lean_dec(v_x_4028_);
lean_dec(v_a_4027_);
v_r_4030_ = lean_box(v_res_4029_);
return v_r_4030_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1(lean_object* v_00_u03b2_4031_, lean_object* v_data_4032_){
_start:
{
lean_object* v___x_4033_; 
v___x_4033_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1___redArg(v_data_4032_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2(lean_object* v_00_u03b2_4034_, lean_object* v_a_4035_, lean_object* v_b_4036_, lean_object* v_x_4037_){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__2___redArg(v_a_4035_, v_b_4036_, v_x_4037_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_4039_, lean_object* v_i_4040_, lean_object* v_source_4041_, lean_object* v_target_4042_){
_start:
{
lean_object* v___x_4043_; 
v___x_4043_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3___redArg(v_i_4040_, v_source_4041_, v_target_4042_);
return v___x_4043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_4044_, lean_object* v_x_4045_, lean_object* v_x_4046_){
_start:
{
lean_object* v___x_4047_; 
v___x_4047_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__1_spec__3_spec__9___redArg(v_x_4045_, v_x_4046_);
return v___x_4047_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4048_; 
v___x_4048_ = l_Lean_Meta_instInhabitedMetaM___redArg();
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object* v_msg_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
lean_object* v___x_4055_; lean_object* v___x_1372__overap_4056_; lean_object* v___x_4057_; 
v___x_4055_ = lean_obj_once(&l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0, &l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0);
v___x_1372__overap_4056_ = lean_panic_fn_borrowed(v___x_4055_, v_msg_4049_);
lean_inc(v___y_4053_);
lean_inc_ref(v___y_4052_);
lean_inc(v___y_4051_);
lean_inc_ref(v___y_4050_);
v___x_4057_ = lean_apply_5(v___x_1372__overap_4056_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_, lean_box(0));
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object* v_msg_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v_msg_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
lean_dec(v___y_4060_);
lean_dec_ref(v___y_4059_);
return v_res_4064_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0(void){
_start:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v___x_4065_ = lean_box(0);
v___x_4066_ = lean_unsigned_to_nat(16u);
v___x_4067_ = lean_mk_array(v___x_4066_, v___x_4065_);
return v___x_4067_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1(void){
_start:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
v___x_4068_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0);
v___x_4069_ = lean_unsigned_to_nat(0u);
v___x_4070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4069_);
lean_ctor_set(v___x_4070_, 1, v___x_4068_);
return v___x_4070_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3(void){
_start:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4073_ = lean_unsigned_to_nat(1u);
v___x_4074_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__2));
v___x_4075_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1);
v___x_4076_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4075_);
lean_ctor_set(v___x_4076_, 1, v___x_4075_);
lean_ctor_set(v___x_4076_, 2, v___x_4074_);
lean_ctor_set(v___x_4076_, 3, v___x_4073_);
lean_ctor_set(v___x_4076_, 4, v___x_4074_);
lean_ctor_set(v___x_4076_, 5, v___x_4074_);
lean_ctor_set(v___x_4076_, 6, v___x_4074_);
lean_ctor_set(v___x_4076_, 7, v___x_4074_);
lean_ctor_set(v___x_4076_, 8, v___x_4073_);
lean_ctor_set(v___x_4076_, 9, v___x_4074_);
lean_ctor_set(v___x_4076_, 10, v___x_4074_);
lean_ctor_set(v___x_4076_, 11, v___x_4074_);
return v___x_4076_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6(void){
_start:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4079_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__5));
v___x_4080_ = lean_unsigned_to_nat(2u);
v___x_4081_ = lean_unsigned_to_nat(417u);
v___x_4082_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__4));
v___x_4083_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_4084_ = l_mkPanicMessageWithDecl(v___x_4083_, v___x_4082_, v___x_4081_, v___x_4080_, v___x_4079_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object* v_type_4085_, lean_object* v_value_4086_, uint8_t v_zetaDelta_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_){
_start:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; 
v___x_4093_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__3, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3);
v___x_4094_ = lean_st_mk_ref(v___x_4093_);
v___x_4095_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_4085_, v_value_4086_, v_zetaDelta_4087_, v___x_4094_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
if (lean_obj_tag(v___x_4095_) == 0)
{
lean_object* v_a_4096_; lean_object* v___x_4097_; lean_object* v_fst_4098_; lean_object* v_snd_4099_; lean_object* v_levelParams_4100_; lean_object* v_levelArgs_4101_; lean_object* v_newLocalDecls_4102_; lean_object* v_newLocalDeclsForMVars_4103_; lean_object* v_newLetDecls_4104_; lean_object* v_exprMVarArgs_4105_; lean_object* v_exprFVarArgs_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v_a_4096_ = lean_ctor_get(v___x_4095_, 0);
lean_inc(v_a_4096_);
lean_dec_ref_known(v___x_4095_, 1);
v___x_4097_ = lean_st_ref_get(v___x_4094_);
lean_dec(v___x_4094_);
v_fst_4098_ = lean_ctor_get(v_a_4096_, 0);
lean_inc(v_fst_4098_);
v_snd_4099_ = lean_ctor_get(v_a_4096_, 1);
lean_inc(v_snd_4099_);
lean_dec(v_a_4096_);
v_levelParams_4100_ = lean_ctor_get(v___x_4097_, 2);
lean_inc_ref(v_levelParams_4100_);
v_levelArgs_4101_ = lean_ctor_get(v___x_4097_, 4);
lean_inc_ref(v_levelArgs_4101_);
v_newLocalDecls_4102_ = lean_ctor_get(v___x_4097_, 5);
lean_inc_ref(v_newLocalDecls_4102_);
v_newLocalDeclsForMVars_4103_ = lean_ctor_get(v___x_4097_, 6);
lean_inc_ref(v_newLocalDeclsForMVars_4103_);
v_newLetDecls_4104_ = lean_ctor_get(v___x_4097_, 7);
lean_inc_ref(v_newLetDecls_4104_);
v_exprMVarArgs_4105_ = lean_ctor_get(v___x_4097_, 9);
lean_inc_ref(v_exprMVarArgs_4105_);
v_exprFVarArgs_4106_ = lean_ctor_get(v___x_4097_, 10);
lean_inc_ref(v_exprFVarArgs_4106_);
lean_dec(v___x_4097_);
v___x_4107_ = l_Array_reverse___redArg(v_newLocalDecls_4102_);
v___x_4108_ = l_Array_reverse___redArg(v_exprFVarArgs_4106_);
v___x_4109_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v___x_4107_, v___x_4108_, v_newLocalDeclsForMVars_4103_, v_exprMVarArgs_4105_, v___y_4090_, v___y_4091_);
lean_dec_ref(v_newLocalDeclsForMVars_4103_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4128_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4112_ = v___x_4109_;
v_isShared_4113_ = v_isSharedCheck_4128_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4109_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4128_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v_fst_4114_; lean_object* v_snd_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; uint8_t v___x_4121_; 
v_fst_4114_ = lean_ctor_get(v_a_4110_, 0);
lean_inc_n(v_fst_4114_, 2);
v_snd_4115_ = lean_ctor_get(v_a_4110_, 1);
lean_inc(v_snd_4115_);
lean_dec(v_a_4110_);
v___x_4116_ = l_Array_reverse___redArg(v_newLetDecls_4104_);
lean_inc_ref(v___x_4116_);
v___x_4117_ = l_Lean_Meta_Closure_mkForall(v___x_4116_, v_fst_4098_);
lean_dec(v_fst_4098_);
v___x_4118_ = l_Lean_Meta_Closure_mkForall(v_fst_4114_, v___x_4117_);
lean_dec_ref(v___x_4117_);
v___x_4119_ = l_Lean_Meta_Closure_mkLambda(v___x_4116_, v_snd_4099_);
lean_dec(v_snd_4099_);
v___x_4120_ = l_Lean_Meta_Closure_mkLambda(v_fst_4114_, v___x_4119_);
lean_dec_ref(v___x_4119_);
v___x_4121_ = l_Lean_Expr_hasFVar(v___x_4120_);
if (v___x_4121_ == 0)
{
lean_object* v___x_4122_; lean_object* v___x_4124_; 
v___x_4122_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4122_, 0, v_levelParams_4100_);
lean_ctor_set(v___x_4122_, 1, v___x_4118_);
lean_ctor_set(v___x_4122_, 2, v___x_4120_);
lean_ctor_set(v___x_4122_, 3, v_levelArgs_4101_);
lean_ctor_set(v___x_4122_, 4, v_snd_4115_);
if (v_isShared_4113_ == 0)
{
lean_ctor_set(v___x_4112_, 0, v___x_4122_);
v___x_4124_ = v___x_4112_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v___x_4122_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
else
{
lean_object* v___x_4126_; lean_object* v___x_4127_; 
lean_dec_ref(v___x_4120_);
lean_dec_ref(v___x_4118_);
lean_dec(v_snd_4115_);
lean_del_object(v___x_4112_);
lean_dec_ref(v_levelArgs_4101_);
lean_dec_ref(v_levelParams_4100_);
v___x_4126_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__6, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6);
v___x_4127_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v___x_4126_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
return v___x_4127_;
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
lean_dec_ref(v_newLetDecls_4104_);
lean_dec_ref(v_levelArgs_4101_);
lean_dec_ref(v_levelParams_4100_);
lean_dec(v_snd_4099_);
lean_dec(v_fst_4098_);
v_a_4129_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4109_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4109_);
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
else
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
lean_dec(v___x_4094_);
v_a_4137_ = lean_ctor_get(v___x_4095_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4095_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4095_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4095_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object* v_type_4145_, lean_object* v_value_4146_, lean_object* v_zetaDelta_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_){
_start:
{
uint8_t v_zetaDelta_boxed_4153_; lean_object* v_res_4154_; 
v_zetaDelta_boxed_4153_ = lean_unbox(v_zetaDelta_4147_);
v_res_4154_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4145_, v_value_4146_, v_zetaDelta_boxed_4153_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object* v_name_4155_, lean_object* v_levelParams_4156_, lean_object* v_type_4157_, lean_object* v_value_4158_, lean_object* v_hints_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v___x_4162_; uint8_t v___y_4164_; uint8_t v___y_4171_; lean_object* v_env_4174_; uint8_t v___x_4175_; 
v___x_4162_ = lean_st_ref_get(v___y_4160_);
v_env_4174_ = lean_ctor_get(v___x_4162_, 0);
lean_inc_ref_n(v_env_4174_, 2);
lean_dec(v___x_4162_);
v___x_4175_ = l_Lean_Environment_hasUnsafe(v_env_4174_, v_type_4157_);
if (v___x_4175_ == 0)
{
uint8_t v___x_4176_; 
v___x_4176_ = l_Lean_Environment_hasUnsafe(v_env_4174_, v_value_4158_);
v___y_4171_ = v___x_4176_;
goto v___jp_4170_;
}
else
{
lean_dec_ref(v_env_4174_);
v___y_4171_ = v___x_4175_;
goto v___jp_4170_;
}
v___jp_4163_:
{
lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
lean_inc(v_name_4155_);
v___x_4165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4165_, 0, v_name_4155_);
lean_ctor_set(v___x_4165_, 1, v_levelParams_4156_);
lean_ctor_set(v___x_4165_, 2, v_type_4157_);
v___x_4166_ = lean_box(0);
v___x_4167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4167_, 0, v_name_4155_);
lean_ctor_set(v___x_4167_, 1, v___x_4166_);
v___x_4168_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_4168_, 0, v___x_4165_);
lean_ctor_set(v___x_4168_, 1, v_value_4158_);
lean_ctor_set(v___x_4168_, 2, v_hints_4159_);
lean_ctor_set(v___x_4168_, 3, v___x_4167_);
lean_ctor_set_uint8(v___x_4168_, sizeof(void*)*4, v___y_4164_);
v___x_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4168_);
return v___x_4169_;
}
v___jp_4170_:
{
if (v___y_4171_ == 0)
{
uint8_t v___x_4172_; 
v___x_4172_ = 1;
v___y_4164_ = v___x_4172_;
goto v___jp_4163_;
}
else
{
uint8_t v___x_4173_; 
v___x_4173_ = 0;
v___y_4164_ = v___x_4173_;
goto v___jp_4163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object* v_name_4177_, lean_object* v_levelParams_4178_, lean_object* v_type_4179_, lean_object* v_value_4180_, lean_object* v_hints_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4177_, v_levelParams_4178_, v_type_4179_, v_value_4180_, v_hints_4181_, v___y_4182_);
lean_dec(v___y_4182_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object* v_name_4185_, lean_object* v_levelParams_4186_, lean_object* v_type_4187_, lean_object* v_value_4188_, lean_object* v_hints_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_){
_start:
{
lean_object* v___x_4195_; 
v___x_4195_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4185_, v_levelParams_4186_, v_type_4187_, v_value_4188_, v_hints_4189_, v___y_4193_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object* v_name_4196_, lean_object* v_levelParams_4197_, lean_object* v_type_4198_, lean_object* v_value_4199_, lean_object* v_hints_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(v_name_4196_, v_levelParams_4197_, v_type_4198_, v_value_4199_, v_hints_4200_, v___y_4201_, v___y_4202_, v___y_4203_, v___y_4204_);
lean_dec(v___y_4204_);
lean_dec_ref(v___y_4203_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object* v_name_4207_, lean_object* v_type_4208_, lean_object* v_value_4209_, uint8_t v_zetaDelta_4210_, uint8_t v_compile_4211_, uint8_t v_logCompileErrors_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v___x_4218_; 
v___x_4218_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4208_, v_value_4209_, v_zetaDelta_4210_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4270_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4221_ = v___x_4218_;
v_isShared_4222_ = v_isSharedCheck_4270_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4218_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4270_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4232_; lean_object* v_env_4233_; lean_object* v_levelParams_4234_; lean_object* v_type_4235_; lean_object* v_value_4236_; uint32_t v___x_4237_; uint32_t v___x_4238_; uint32_t v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4269_; 
v___x_4232_ = lean_st_ref_get(v___y_4216_);
v_env_4233_ = lean_ctor_get(v___x_4232_, 0);
lean_inc_ref(v_env_4233_);
lean_dec(v___x_4232_);
v_levelParams_4234_ = lean_ctor_get(v_a_4219_, 0);
v_type_4235_ = lean_ctor_get(v_a_4219_, 1);
v_value_4236_ = lean_ctor_get(v_a_4219_, 2);
lean_inc_ref_n(v_value_4236_, 2);
v___x_4237_ = l_Lean_getMaxHeight(v_env_4233_, v_value_4236_);
v___x_4238_ = 1;
v___x_4239_ = lean_uint32_add(v___x_4237_, v___x_4238_);
v___x_4240_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_4240_, 0, v___x_4239_);
lean_inc_ref(v_levelParams_4234_);
v___x_4241_ = lean_array_to_list(v_levelParams_4234_);
lean_inc_ref(v_type_4235_);
lean_inc(v_name_4207_);
v___x_4242_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4207_, v___x_4241_, v_type_4235_, v_value_4236_, v___x_4240_, v___y_4216_);
v_a_4243_ = lean_ctor_get(v___x_4242_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4245_ = v___x_4242_;
v_isShared_4246_ = v_isSharedCheck_4269_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_4242_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4269_;
goto v_resetjp_4244_;
}
v___jp_4223_:
{
lean_object* v_levelArgs_4224_; lean_object* v_exprArgs_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
v_levelArgs_4224_ = lean_ctor_get(v_a_4219_, 3);
lean_inc_ref(v_levelArgs_4224_);
v_exprArgs_4225_ = lean_ctor_get(v_a_4219_, 4);
lean_inc_ref(v_exprArgs_4225_);
lean_dec(v_a_4219_);
v___x_4226_ = lean_array_to_list(v_levelArgs_4224_);
v___x_4227_ = l_Lean_mkConst(v_name_4207_, v___x_4226_);
v___x_4228_ = l_Lean_mkAppN(v___x_4227_, v_exprArgs_4225_);
lean_dec_ref(v_exprArgs_4225_);
if (v_isShared_4222_ == 0)
{
lean_ctor_set(v___x_4221_, 0, v___x_4228_);
v___x_4230_ = v___x_4221_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v___x_4228_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
return v___x_4230_;
}
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4246_ == 0)
{
lean_ctor_set_tag(v___x_4245_, 1);
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
uint8_t v___x_4249_; lean_object* v___x_4250_; 
v___x_4249_ = 0;
lean_inc_ref(v___x_4248_);
v___x_4250_ = l_Lean_addDecl(v___x_4248_, v___x_4249_, v___y_4215_, v___y_4216_);
if (lean_obj_tag(v___x_4250_) == 0)
{
lean_dec_ref_known(v___x_4250_, 1);
if (v_compile_4211_ == 0)
{
lean_dec_ref(v___x_4248_);
goto v___jp_4223_;
}
else
{
lean_object* v___x_4251_; 
v___x_4251_ = l_Lean_compileDecl(v___x_4248_, v_logCompileErrors_4212_, v___y_4215_, v___y_4216_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_dec_ref_known(v___x_4251_, 1);
goto v___jp_4223_;
}
else
{
lean_object* v_a_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4259_; 
lean_del_object(v___x_4221_);
lean_dec(v_a_4219_);
lean_dec(v_name_4207_);
v_a_4252_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4254_ = v___x_4251_;
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_a_4252_);
lean_dec(v___x_4251_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v___x_4257_; 
if (v_isShared_4255_ == 0)
{
v___x_4257_ = v___x_4254_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_a_4252_);
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
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_dec_ref(v___x_4248_);
lean_del_object(v___x_4221_);
lean_dec(v_a_4219_);
lean_dec(v_name_4207_);
v_a_4260_ = lean_ctor_get(v___x_4250_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4250_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4250_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4250_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
if (v_isShared_4263_ == 0)
{
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_a_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
return v___x_4265_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
lean_dec(v_name_4207_);
v_a_4271_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4218_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4218_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object* v_name_4279_, lean_object* v_type_4280_, lean_object* v_value_4281_, lean_object* v_zetaDelta_4282_, lean_object* v_compile_4283_, lean_object* v_logCompileErrors_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_){
_start:
{
uint8_t v_zetaDelta_boxed_4290_; uint8_t v_compile_boxed_4291_; uint8_t v_logCompileErrors_boxed_4292_; lean_object* v_res_4293_; 
v_zetaDelta_boxed_4290_ = lean_unbox(v_zetaDelta_4282_);
v_compile_boxed_4291_ = lean_unbox(v_compile_4283_);
v_logCompileErrors_boxed_4292_ = lean_unbox(v_logCompileErrors_4284_);
v_res_4293_ = l_Lean_Meta_mkAuxDefinition(v_name_4279_, v_type_4280_, v_value_4281_, v_zetaDelta_boxed_4290_, v_compile_boxed_4291_, v_logCompileErrors_boxed_4292_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_);
lean_dec(v___y_4288_);
lean_dec_ref(v___y_4287_);
lean_dec(v___y_4286_);
lean_dec_ref(v___y_4285_);
return v_res_4293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object* v_name_4294_, lean_object* v_value_4295_, uint8_t v_zetaDelta_4296_, uint8_t v_compile_4297_, uint8_t v_logCompileErrors_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_){
_start:
{
lean_object* v___x_4304_; 
lean_inc(v___y_4302_);
lean_inc_ref(v___y_4301_);
lean_inc(v___y_4300_);
lean_inc_ref(v___y_4299_);
lean_inc_ref(v_value_4295_);
v___x_4304_ = lean_infer_type(v_value_4295_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc(v_a_4305_);
lean_dec_ref_known(v___x_4304_, 1);
v___x_4306_ = l_Lean_Expr_headBeta(v_a_4305_);
v___x_4307_ = l_Lean_Meta_mkAuxDefinition(v_name_4294_, v___x_4306_, v_value_4295_, v_zetaDelta_4296_, v_compile_4297_, v_logCompileErrors_4298_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_);
return v___x_4307_;
}
else
{
lean_dec_ref(v_value_4295_);
lean_dec(v_name_4294_);
return v___x_4304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object* v_name_4308_, lean_object* v_value_4309_, lean_object* v_zetaDelta_4310_, lean_object* v_compile_4311_, lean_object* v_logCompileErrors_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
uint8_t v_zetaDelta_boxed_4318_; uint8_t v_compile_boxed_4319_; uint8_t v_logCompileErrors_boxed_4320_; lean_object* v_res_4321_; 
v_zetaDelta_boxed_4318_ = lean_unbox(v_zetaDelta_4310_);
v_compile_boxed_4319_ = lean_unbox(v_compile_4311_);
v_logCompileErrors_boxed_4320_ = lean_unbox(v_logCompileErrors_4312_);
v_res_4321_ = l_Lean_Meta_mkAuxDefinitionFor(v_name_4308_, v_value_4309_, v_zetaDelta_boxed_4318_, v_compile_boxed_4319_, v_logCompileErrors_boxed_4320_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object* v_type_4322_, lean_object* v_value_4323_, uint8_t v_zetaDelta_4324_, lean_object* v_kind_x3f_4325_, uint8_t v_cache_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v___x_4332_; 
v___x_4332_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4322_, v_value_4323_, v_zetaDelta_4324_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v_levelParams_4334_; lean_object* v_type_4335_; lean_object* v_value_4336_; lean_object* v_levelArgs_4337_; lean_object* v_exprArgs_4338_; lean_object* v___x_4339_; uint8_t v___x_4340_; lean_object* v___x_4341_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
lean_inc(v_a_4333_);
lean_dec_ref_known(v___x_4332_, 1);
v_levelParams_4334_ = lean_ctor_get(v_a_4333_, 0);
lean_inc_ref(v_levelParams_4334_);
v_type_4335_ = lean_ctor_get(v_a_4333_, 1);
lean_inc_ref(v_type_4335_);
v_value_4336_ = lean_ctor_get(v_a_4333_, 2);
lean_inc_ref(v_value_4336_);
v_levelArgs_4337_ = lean_ctor_get(v_a_4333_, 3);
lean_inc_ref(v_levelArgs_4337_);
v_exprArgs_4338_ = lean_ctor_get(v_a_4333_, 4);
lean_inc_ref(v_exprArgs_4338_);
lean_dec(v_a_4333_);
v___x_4339_ = lean_array_to_list(v_levelParams_4334_);
v___x_4340_ = 0;
v___x_4341_ = l_Lean_Meta_mkAuxLemma(v___x_4339_, v_type_4335_, v_value_4336_, v_kind_x3f_4325_, v_cache_4326_, v___x_4340_, v___x_4340_, v___x_4340_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4341_) == 0)
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4352_; 
v_a_4342_ = lean_ctor_get(v___x_4341_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4341_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4344_ = v___x_4341_;
v_isShared_4345_ = v_isSharedCheck_4352_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4341_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4352_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4346_ = lean_array_to_list(v_levelArgs_4337_);
v___x_4347_ = l_Lean_mkConst(v_a_4342_, v___x_4346_);
v___x_4348_ = l_Lean_mkAppN(v___x_4347_, v_exprArgs_4338_);
lean_dec_ref(v_exprArgs_4338_);
if (v_isShared_4345_ == 0)
{
lean_ctor_set(v___x_4344_, 0, v___x_4348_);
v___x_4350_ = v___x_4344_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v___x_4348_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec_ref(v_exprArgs_4338_);
lean_dec_ref(v_levelArgs_4337_);
v_a_4353_ = lean_ctor_get(v___x_4341_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4341_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4341_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4341_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_dec(v_kind_x3f_4325_);
v_a_4361_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4332_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4332_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object* v_type_4369_, lean_object* v_value_4370_, lean_object* v_zetaDelta_4371_, lean_object* v_kind_x3f_4372_, lean_object* v_cache_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_){
_start:
{
uint8_t v_zetaDelta_boxed_4379_; uint8_t v_cache_boxed_4380_; lean_object* v_res_4381_; 
v_zetaDelta_boxed_4379_ = lean_unbox(v_zetaDelta_4371_);
v_cache_boxed_4380_ = lean_unbox(v_cache_4373_);
v_res_4381_ = l_Lean_Meta_mkAuxTheorem(v_type_4369_, v_value_4370_, v_zetaDelta_boxed_4379_, v_kind_x3f_4372_, v_cache_boxed_4380_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
lean_dec(v___y_4377_);
lean_dec_ref(v___y_4376_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
return v_res_4381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4437_; uint8_t v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; 
v___x_4437_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_4438_ = 0;
v___x_4439_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4440_ = l_Lean_registerTraceClass(v___x_4437_, v___x_4438_, v___x_4439_);
return v___x_4440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2____boxed(lean_object* v___y_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
return v_res_4442_;
}
}
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Closure(builtin);
}
#ifdef __cplusplus
}
#endif
