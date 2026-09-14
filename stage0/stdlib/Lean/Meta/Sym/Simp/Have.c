// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Have
// Imports: public import Lean.Meta.Sym.Simp.Lambda import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.ReplaceS import Lean.Meta.Sym.AbstractS import Lean.Meta.Sym.InferType import Lean.Meta.AppBuilder import Lean.Meta.HaveTelescope import Lean.Util.CollectFVars import Init.Omega import Init.While
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdMap_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_FVarIdSet_insert_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_EStateM_instInhabited___redArg(lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_FVarIdMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_letNondep_x21(lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2;
static const lean_array_object l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1;
static const lean_array_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Sym_Simp_toBetaApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Simp_toBetaApp___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_toBetaApp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_consumeForallN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.Sym.Simp.Have"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.elimAuxApps"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "assertion violation: numArgs == expectedNumArgs\n            "};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Sym.ReplaceS"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Sym.Internal.liftBuilderM"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.toHave.go"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.toHave"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "congrFun'"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(219, 239, 156, 219, 118, 185, 235, 192)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(56, 82, 209, 127, 228, 246, 91, 162)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.simpBetaApp.go"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_simpLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpLambda___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_simpLet___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpLet___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3));
v___x_10_ = lean_box(0);
v___x_11_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2, &l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2);
v___x_12_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_11_);
lean_ctor_set(v___x_12_, 3, v___x_11_);
lean_ctor_set(v___x_12_, 4, v___x_9_);
lean_ctor_set(v___x_12_, 5, v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4, &l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default;
return v___x_14_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0(lean_object* v___x_15_, lean_object* v_fvarIdToPos_16_, lean_object* v_fvarId_u2081_17_, lean_object* v_fvarId_u2082_18_){
_start:
{
lean_object* v_pos_u2081_19_; lean_object* v_pos_u2082_20_; uint8_t v___x_21_; 
lean_inc(v_fvarIdToPos_16_);
v_pos_u2081_19_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_15_, v_fvarIdToPos_16_, v_fvarId_u2081_17_);
v_pos_u2082_20_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_15_, v_fvarIdToPos_16_, v_fvarId_u2082_18_);
v___x_21_ = lean_nat_dec_lt(v_pos_u2081_19_, v_pos_u2082_20_);
lean_dec(v_pos_u2082_20_);
lean_dec(v_pos_u2081_19_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0___boxed(lean_object* v___x_22_, lean_object* v_fvarIdToPos_23_, lean_object* v_fvarId_u2081_24_, lean_object* v_fvarId_u2082_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0(v___x_22_, v_fvarIdToPos_23_, v_fvarId_u2081_24_, v_fvarId_u2082_25_);
lean_dec(v___x_22_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg(lean_object* v_fvarIdToPos_28_, lean_object* v_hi_29_, lean_object* v_pivot_30_, lean_object* v_as_31_, lean_object* v_i_32_, lean_object* v_k_33_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = lean_nat_dec_lt(v_k_33_, v_hi_29_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; lean_object* v___x_36_; 
lean_dec(v_k_33_);
lean_dec(v_pivot_30_);
lean_dec(v_fvarIdToPos_28_);
v___x_35_ = lean_array_fswap(v_as_31_, v_i_32_, v_hi_29_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_i_32_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
return v___x_36_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v_pos_u2081_39_; lean_object* v_pos_u2082_40_; uint8_t v___x_41_; 
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_array_fget_borrowed(v_as_31_, v_k_33_);
lean_inc(v___x_38_);
lean_inc_n(v_fvarIdToPos_28_, 2);
v_pos_u2081_39_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_37_, v_fvarIdToPos_28_, v___x_38_);
lean_inc(v_pivot_30_);
v_pos_u2082_40_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_37_, v_fvarIdToPos_28_, v_pivot_30_);
v___x_41_ = lean_nat_dec_lt(v_pos_u2081_39_, v_pos_u2082_40_);
lean_dec(v_pos_u2082_40_);
lean_dec(v_pos_u2081_39_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(1u);
v___x_43_ = lean_nat_add(v_k_33_, v___x_42_);
lean_dec(v_k_33_);
v_k_33_ = v___x_43_;
goto _start;
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_array_fswap(v_as_31_, v_i_32_, v_k_33_);
v___x_46_ = lean_unsigned_to_nat(1u);
v___x_47_ = lean_nat_add(v_i_32_, v___x_46_);
lean_dec(v_i_32_);
v___x_48_ = lean_nat_add(v_k_33_, v___x_46_);
lean_dec(v_k_33_);
v_as_31_ = v___x_45_;
v_i_32_ = v___x_47_;
v_k_33_ = v___x_48_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg___boxed(lean_object* v_fvarIdToPos_50_, lean_object* v_hi_51_, lean_object* v_pivot_52_, lean_object* v_as_53_, lean_object* v_i_54_, lean_object* v_k_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg(v_fvarIdToPos_50_, v_hi_51_, v_pivot_52_, v_as_53_, v_i_54_, v_k_55_);
lean_dec(v_hi_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(lean_object* v_fvarIdToPos_57_, lean_object* v_n_58_, lean_object* v_as_59_, lean_object* v_lo_60_, lean_object* v_hi_61_){
_start:
{
lean_object* v___y_63_; uint8_t v___x_73_; 
v___x_73_ = lean_nat_dec_lt(v_lo_60_, v_hi_61_);
if (v___x_73_ == 0)
{
lean_dec(v_lo_60_);
lean_dec(v_fvarIdToPos_57_);
return v_as_59_;
}
else
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v_mid_77_; lean_object* v___y_79_; lean_object* v___y_85_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_nat_add(v_lo_60_, v_hi_61_);
v___x_76_ = lean_unsigned_to_nat(1u);
v_mid_77_ = lean_nat_shiftr(v___x_75_, v___x_76_);
lean_dec(v___x_75_);
v___x_90_ = lean_array_fget_borrowed(v_as_59_, v_mid_77_);
v___x_91_ = lean_array_fget_borrowed(v_as_59_, v_lo_60_);
lean_inc(v___x_91_);
lean_inc(v___x_90_);
lean_inc(v_fvarIdToPos_57_);
v___x_92_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0(v___x_74_, v_fvarIdToPos_57_, v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
v___y_85_ = v_as_59_;
goto v___jp_84_;
}
else
{
lean_object* v___x_93_; 
v___x_93_ = lean_array_fswap(v_as_59_, v_lo_60_, v_mid_77_);
v___y_85_ = v___x_93_;
goto v___jp_84_;
}
v___jp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_array_fget_borrowed(v___y_79_, v_mid_77_);
v___x_81_ = lean_array_fget_borrowed(v___y_79_, v_hi_61_);
lean_inc(v___x_81_);
lean_inc(v___x_80_);
lean_inc(v_fvarIdToPos_57_);
v___x_82_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0(v___x_74_, v_fvarIdToPos_57_, v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
lean_dec(v_mid_77_);
v___y_63_ = v___y_79_;
goto v___jp_62_;
}
else
{
lean_object* v___x_83_; 
v___x_83_ = lean_array_fswap(v___y_79_, v_mid_77_, v_hi_61_);
lean_dec(v_mid_77_);
v___y_63_ = v___x_83_;
goto v___jp_62_;
}
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_86_ = lean_array_fget_borrowed(v___y_85_, v_hi_61_);
v___x_87_ = lean_array_fget_borrowed(v___y_85_, v_lo_60_);
lean_inc(v___x_87_);
lean_inc(v___x_86_);
lean_inc(v_fvarIdToPos_57_);
v___x_88_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___lam__0(v___x_74_, v_fvarIdToPos_57_, v___x_86_, v___x_87_);
if (v___x_88_ == 0)
{
v___y_79_ = v___y_85_;
goto v___jp_78_;
}
else
{
lean_object* v___x_89_; 
v___x_89_ = lean_array_fswap(v___y_85_, v_lo_60_, v_hi_61_);
v___y_79_ = v___x_89_;
goto v___jp_78_;
}
}
}
v___jp_62_:
{
lean_object* v_pivot_64_; lean_object* v___x_65_; lean_object* v_fst_66_; lean_object* v_snd_67_; uint8_t v___x_68_; 
v_pivot_64_ = lean_array_fget(v___y_63_, v_hi_61_);
lean_inc_n(v_lo_60_, 2);
lean_inc(v_fvarIdToPos_57_);
v___x_65_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg(v_fvarIdToPos_57_, v_hi_61_, v_pivot_64_, v___y_63_, v_lo_60_, v_lo_60_);
v_fst_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_fst_66_);
v_snd_67_ = lean_ctor_get(v___x_65_, 1);
lean_inc(v_snd_67_);
lean_dec_ref(v___x_65_);
v___x_68_ = lean_nat_dec_le(v_hi_61_, v_fst_66_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
lean_inc(v_fvarIdToPos_57_);
v___x_69_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_fvarIdToPos_57_, v_n_58_, v_snd_67_, v_lo_60_, v_fst_66_);
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = lean_nat_add(v_fst_66_, v___x_70_);
lean_dec(v_fst_66_);
v_as_59_ = v___x_69_;
v_lo_60_ = v___x_71_;
goto _start;
}
else
{
lean_dec(v_fst_66_);
lean_dec(v_lo_60_);
lean_dec(v_fvarIdToPos_57_);
return v_snd_67_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___boxed(lean_object* v_fvarIdToPos_94_, lean_object* v_n_95_, lean_object* v_as_96_, lean_object* v_lo_97_, lean_object* v_hi_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_fvarIdToPos_94_, v_n_95_, v_as_96_, v_lo_97_, v_hi_98_);
lean_dec(v_hi_98_);
lean_dec(v_n_95_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(lean_object* v_fvarIdToPos_100_, lean_object* v_as_101_, size_t v_i_102_, size_t v_stop_103_, lean_object* v_b_104_){
_start:
{
lean_object* v___y_106_; uint8_t v___x_110_; 
v___x_110_ = lean_usize_dec_eq(v_i_102_, v_stop_103_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_array_uget_borrowed(v_as_101_, v_i_102_);
v___x_112_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_FVarIdSet_insert_spec__0___redArg(v___x_111_, v_fvarIdToPos_100_);
if (v___x_112_ == 0)
{
v___y_106_ = v_b_104_;
goto v___jp_105_;
}
else
{
lean_object* v___x_113_; 
lean_inc(v___x_111_);
v___x_113_ = lean_array_push(v_b_104_, v___x_111_);
v___y_106_ = v___x_113_;
goto v___jp_105_;
}
}
else
{
return v_b_104_;
}
v___jp_105_:
{
size_t v___x_107_; size_t v___x_108_; 
v___x_107_ = ((size_t)1ULL);
v___x_108_ = lean_usize_add(v_i_102_, v___x_107_);
v_i_102_ = v___x_108_;
v_b_104_ = v___y_106_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___boxed(lean_object* v_fvarIdToPos_114_, lean_object* v_as_115_, lean_object* v_i_116_, lean_object* v_stop_117_, lean_object* v_b_118_){
_start:
{
size_t v_i_boxed_119_; size_t v_stop_boxed_120_; lean_object* v_res_121_; 
v_i_boxed_119_ = lean_unbox_usize(v_i_116_);
lean_dec(v_i_116_);
v_stop_boxed_120_ = lean_unbox_usize(v_stop_117_);
lean_dec(v_stop_117_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_114_, v_as_115_, v_i_boxed_119_, v_stop_boxed_120_, v_b_118_);
lean_dec_ref(v_as_115_);
lean_dec(v_fvarIdToPos_114_);
return v_res_121_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_122_ = lean_box(0);
v___x_123_ = lean_unsigned_to_nat(16u);
v___x_124_ = lean_mk_array(v___x_123_, v___x_122_);
return v___x_124_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0);
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_130_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2));
v___x_131_ = lean_box(1);
v___x_132_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1);
v___x_133_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_131_);
lean_ctor_set(v___x_133_, 2, v___x_130_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(lean_object* v_e_134_, lean_object* v_fvarIdToPos_135_){
_start:
{
lean_object* v___y_137_; lean_object* v___y_138_; lean_object* v___y_139_; lean_object* v___y_140_; lean_object* v___x_144_; lean_object* v___y_146_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_s_154_; lean_object* v_fvarIds_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_152_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2));
v___x_153_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3);
v_s_154_ = l_Lean_collectFVars(v___x_153_, v_e_134_);
v_fvarIds_155_ = lean_ctor_get(v_s_154_, 2);
lean_inc_ref(v_fvarIds_155_);
lean_dec_ref(v_s_154_);
v___x_156_ = lean_array_get_size(v_fvarIds_155_);
v___x_157_ = lean_nat_dec_lt(v___x_144_, v___x_156_);
if (v___x_157_ == 0)
{
lean_dec_ref(v_fvarIds_155_);
v___y_146_ = v___x_152_;
goto v___jp_145_;
}
else
{
uint8_t v___x_158_; 
v___x_158_ = lean_nat_dec_le(v___x_156_, v___x_156_);
if (v___x_158_ == 0)
{
if (v___x_157_ == 0)
{
lean_dec_ref(v_fvarIds_155_);
v___y_146_ = v___x_152_;
goto v___jp_145_;
}
else
{
size_t v___x_159_; size_t v___x_160_; lean_object* v___x_161_; 
v___x_159_ = ((size_t)0ULL);
v___x_160_ = lean_usize_of_nat(v___x_156_);
v___x_161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_135_, v_fvarIds_155_, v___x_159_, v___x_160_, v___x_152_);
lean_dec_ref(v_fvarIds_155_);
v___y_146_ = v___x_161_;
goto v___jp_145_;
}
}
else
{
size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; 
v___x_162_ = ((size_t)0ULL);
v___x_163_ = lean_usize_of_nat(v___x_156_);
v___x_164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_135_, v_fvarIds_155_, v___x_162_, v___x_163_, v___x_152_);
lean_dec_ref(v_fvarIds_155_);
v___y_146_ = v___x_164_;
goto v___jp_145_;
}
}
v___jp_136_:
{
uint8_t v___x_141_; 
v___x_141_ = lean_nat_dec_le(v___y_140_, v___y_139_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
lean_dec(v___y_139_);
lean_inc(v___y_140_);
v___x_142_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_fvarIdToPos_135_, v___y_137_, v___y_138_, v___y_140_, v___y_140_);
lean_dec(v___y_140_);
lean_dec(v___y_137_);
return v___x_142_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_fvarIdToPos_135_, v___y_137_, v___y_138_, v___y_140_, v___y_139_);
lean_dec(v___y_139_);
lean_dec(v___y_137_);
return v___x_143_;
}
}
v___jp_145_:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_array_get_size(v___y_146_);
v___x_148_ = lean_nat_dec_eq(v___x_147_, v___x_144_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_sub(v___x_147_, v___x_149_);
v___x_151_ = lean_nat_dec_le(v___x_144_, v___x_150_);
if (v___x_151_ == 0)
{
lean_inc(v___x_150_);
v___y_137_ = v___x_147_;
v___y_138_ = v___y_146_;
v___y_139_ = v___x_150_;
v___y_140_ = v___x_150_;
goto v___jp_136_;
}
else
{
v___y_137_ = v___x_147_;
v___y_138_ = v___y_146_;
v___y_139_ = v___x_150_;
v___y_140_ = v___x_144_;
goto v___jp_136_;
}
}
else
{
lean_dec(v_fvarIdToPos_135_);
return v___y_146_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0(lean_object* v_fvarIdToPos_165_, lean_object* v_n_166_, lean_object* v_as_167_, lean_object* v_lo_168_, lean_object* v_hi_169_, lean_object* v_w_170_, lean_object* v_hlo_171_, lean_object* v_hhi_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_fvarIdToPos_165_, v_n_166_, v_as_167_, v_lo_168_, v_hi_169_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___boxed(lean_object* v_fvarIdToPos_174_, lean_object* v_n_175_, lean_object* v_as_176_, lean_object* v_lo_177_, lean_object* v_hi_178_, lean_object* v_w_179_, lean_object* v_hlo_180_, lean_object* v_hhi_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0(v_fvarIdToPos_174_, v_n_175_, v_as_176_, v_lo_177_, v_hi_178_, v_w_179_, v_hlo_180_, v_hhi_181_);
lean_dec(v_hi_178_);
lean_dec(v_n_175_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0(lean_object* v_fvarIdToPos_183_, lean_object* v_n_184_, lean_object* v_lo_185_, lean_object* v_hi_186_, lean_object* v_hhi_187_, lean_object* v_pivot_188_, lean_object* v_as_189_, lean_object* v_i_190_, lean_object* v_k_191_, lean_object* v_ilo_192_, lean_object* v_ik_193_, lean_object* v_w_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___redArg(v_fvarIdToPos_183_, v_hi_186_, v_pivot_188_, v_as_189_, v_i_190_, v_k_191_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0___boxed(lean_object* v_fvarIdToPos_196_, lean_object* v_n_197_, lean_object* v_lo_198_, lean_object* v_hi_199_, lean_object* v_hhi_200_, lean_object* v_pivot_201_, lean_object* v_as_202_, lean_object* v_i_203_, lean_object* v_k_204_, lean_object* v_ilo_205_, lean_object* v_ik_206_, lean_object* v_w_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0_spec__0(v_fvarIdToPos_196_, v_n_197_, v_lo_198_, v_hi_199_, v_hhi_200_, v_pivot_201_, v_as_202_, v_i_203_, v_k_204_, v_ilo_205_, v_ik_206_, v_w_207_);
lean_dec(v_hi_199_);
lean_dec(v_lo_198_);
lean_dec(v_n_197_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(lean_object* v_x_209_, uint8_t v_bi_210_, lean_object* v_t_211_, lean_object* v_b_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___y_221_; lean_object* v___x_224_; uint8_t v_debug_225_; 
v___x_224_ = lean_st_ref_get(v___y_214_);
v_debug_225_ = lean_ctor_get_uint8(v___x_224_, sizeof(void*)*11);
lean_dec(v___x_224_);
if (v_debug_225_ == 0)
{
v___y_221_ = v___y_214_;
goto v___jp_220_;
}
else
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_211_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v___x_227_; 
lean_dec_ref_known(v___x_226_, 1);
v___x_227_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_dec_ref_known(v___x_227_, 1);
v___y_221_ = v___y_214_;
goto v___jp_220_;
}
else
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
lean_dec_ref(v_b_212_);
lean_dec_ref(v_t_211_);
lean_dec(v_x_209_);
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
lean_dec_ref(v_b_212_);
lean_dec_ref(v_t_211_);
lean_dec(v_x_209_);
v_a_236_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_226_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_226_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
v___jp_220_:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = l_Lean_Expr_forallE___override(v_x_209_, v_t_211_, v_b_212_, v_bi_210_);
v___x_223_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_222_, v___y_221_);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0___boxed(lean_object* v_x_244_, lean_object* v_bi_245_, lean_object* v_t_246_, lean_object* v_b_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
uint8_t v_bi_boxed_255_; lean_object* v_res_256_; 
v_bi_boxed_255_ = lean_unbox(v_bi_245_);
v_res_256_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(v_x_244_, v_bi_boxed_255_, v_t_246_, v_b_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(lean_object* v_00_u03b1s_260_, lean_object* v_i_261_, lean_object* v_00_u03b2_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_zero_270_; uint8_t v_isZero_271_; 
v_zero_270_ = lean_unsigned_to_nat(0u);
v_isZero_271_ = lean_nat_dec_eq(v_i_261_, v_zero_270_);
if (v_isZero_271_ == 1)
{
lean_object* v___x_272_; 
lean_dec(v_i_261_);
v___x_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_272_, 0, v_00_u03b2_262_);
return v___x_272_;
}
else
{
lean_object* v_one_273_; lean_object* v_n_274_; lean_object* v___x_275_; uint8_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_one_273_ = lean_unsigned_to_nat(1u);
v_n_274_ = lean_nat_sub(v_i_261_, v_one_273_);
lean_dec(v_i_261_);
v___x_275_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1));
v___x_276_ = 0;
v___x_277_ = lean_array_fget_borrowed(v_00_u03b1s_260_, v_n_274_);
lean_inc(v___x_277_);
v___x_278_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(v___x_275_, v___x_276_, v___x_277_, v_00_u03b2_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_278_, 1);
v_i_261_ = v_n_274_;
v_00_u03b2_262_ = v_a_279_;
goto _start;
}
else
{
lean_dec(v_n_274_);
return v___x_278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___boxed(lean_object* v_00_u03b1s_281_, lean_object* v_i_282_, lean_object* v_00_u03b2_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(v_00_u03b1s_281_, v_i_282_, v_00_u03b2_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_00_u03b1s_281_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go(lean_object* v_00_u03b1s_292_, lean_object* v_i_293_, lean_object* v_00_u03b2_294_, lean_object* v_h_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(v_00_u03b1s_292_, v_i_293_, v_00_u03b2_294_, v_a_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___boxed(lean_object* v_00_u03b1s_304_, lean_object* v_i_305_, lean_object* v_00_u03b2_306_, lean_object* v_h_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go(v_00_u03b1s_304_, v_i_305_, v_00_u03b2_306_, v_h_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_, v_a_313_);
lean_dec(v_a_313_);
lean_dec_ref(v_a_312_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
lean_dec_ref(v_00_u03b1s_304_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(lean_object* v_00_u03b1s_316_, lean_object* v_00_u03b2_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_array_get_size(v_00_u03b1s_316_);
v___x_326_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(v_00_u03b1s_316_, v___x_325_, v_00_u03b2_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows___boxed(lean_object* v_00_u03b1s_327_, lean_object* v_00_u03b2_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(v_00_u03b1s_327_, v_00_u03b2_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec_ref(v_00_u03b1s_327_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(lean_object* v_fvarIdToPos_337_, lean_object* v_subst_338_, size_t v_sz_339_, size_t v_i_340_, lean_object* v_bs_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = lean_usize_dec_lt(v_i_340_, v_sz_339_);
if (v___x_342_ == 0)
{
lean_dec(v_fvarIdToPos_337_);
return v_bs_341_;
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_v_345_; lean_object* v_bs_x27_346_; lean_object* v___x_347_; lean_object* v___x_348_; size_t v___x_349_; size_t v___x_350_; lean_object* v___x_351_; 
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = l_Lean_instInhabitedExpr;
v_v_345_ = lean_array_uget(v_bs_341_, v_i_340_);
v_bs_x27_346_ = lean_array_uset(v_bs_341_, v_i_340_, v___x_343_);
lean_inc(v_fvarIdToPos_337_);
v___x_347_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_343_, v_fvarIdToPos_337_, v_v_345_);
v___x_348_ = lean_array_get_borrowed(v___x_344_, v_subst_338_, v___x_347_);
lean_dec(v___x_347_);
v___x_349_ = ((size_t)1ULL);
v___x_350_ = lean_usize_add(v_i_340_, v___x_349_);
lean_inc(v___x_348_);
v___x_351_ = lean_array_uset(v_bs_x27_346_, v_i_340_, v___x_348_);
v_i_340_ = v___x_350_;
v_bs_341_ = v___x_351_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2___boxed(lean_object* v_fvarIdToPos_353_, lean_object* v_subst_354_, lean_object* v_sz_355_, lean_object* v_i_356_, lean_object* v_bs_357_){
_start:
{
size_t v_sz_boxed_358_; size_t v_i_boxed_359_; lean_object* v_res_360_; 
v_sz_boxed_358_ = lean_unbox_usize(v_sz_355_);
lean_dec(v_sz_355_);
v_i_boxed_359_ = lean_unbox_usize(v_i_356_);
lean_dec(v_i_356_);
v_res_360_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(v_fvarIdToPos_353_, v_subst_354_, v_sz_boxed_358_, v_i_boxed_359_, v_bs_357_);
lean_dec_ref(v_subst_354_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0(lean_object* v_k_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v_b_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___x_370_; 
lean_inc(v___y_368_);
lean_inc_ref(v___y_367_);
lean_inc(v___y_366_);
lean_inc_ref(v___y_365_);
lean_inc(v___y_363_);
lean_inc_ref(v___y_362_);
v___x_370_ = lean_apply_8(v_k_361_, v_b_364_, v___y_362_, v___y_363_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, lean_box(0));
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0___boxed(lean_object* v_k_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v_b_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0(v_k_371_, v___y_372_, v___y_373_, v_b_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg(lean_object* v_name_381_, uint8_t v_bi_382_, lean_object* v_type_383_, lean_object* v_k_384_, uint8_t v_kind_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v___f_393_; lean_object* v___x_394_; 
lean_inc(v___y_387_);
lean_inc_ref(v___y_386_);
v___f_393_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_393_, 0, v_k_384_);
lean_closure_set(v___f_393_, 1, v___y_386_);
lean_closure_set(v___f_393_, 2, v___y_387_);
v___x_394_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_381_, v_bi_382_, v_type_383_, v___f_393_, v_kind_385_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_394_) == 0)
{
return v___x_394_;
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___boxed(lean_object* v_name_403_, lean_object* v_bi_404_, lean_object* v_type_405_, lean_object* v_k_406_, lean_object* v_kind_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
uint8_t v_bi_boxed_415_; uint8_t v_kind_boxed_416_; lean_object* v_res_417_; 
v_bi_boxed_415_ = lean_unbox(v_bi_404_);
v_kind_boxed_416_ = lean_unbox(v_kind_407_);
v_res_417_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg(v_name_403_, v_bi_boxed_415_, v_type_405_, v_k_406_, v_kind_boxed_416_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg(lean_object* v_name_418_, lean_object* v_type_419_, lean_object* v_k_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
uint8_t v___x_428_; uint8_t v___x_429_; lean_object* v___x_430_; 
v___x_428_ = 0;
v___x_429_ = 0;
v___x_430_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg(v_name_418_, v___x_428_, v_type_419_, v_k_420_, v___x_429_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg___boxed(lean_object* v_name_431_, lean_object* v_type_432_, lean_object* v_k_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg(v_name_431_, v_type_432_, v_k_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(lean_object* v_fvarIdToPos_442_, size_t v_sz_443_, size_t v_i_444_, lean_object* v_bs_445_){
_start:
{
uint8_t v___x_446_; 
v___x_446_ = lean_usize_dec_lt(v_i_444_, v_sz_443_);
if (v___x_446_ == 0)
{
return v_bs_445_;
}
else
{
lean_object* v_v_447_; lean_object* v___x_448_; lean_object* v_bs_x27_449_; lean_object* v___x_450_; size_t v___x_451_; size_t v___x_452_; lean_object* v___x_453_; 
v_v_447_ = lean_array_uget(v_bs_445_, v_i_444_);
v___x_448_ = lean_unsigned_to_nat(0u);
v_bs_x27_449_ = lean_array_uset(v_bs_445_, v_i_444_, v___x_448_);
v___x_450_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_FVarIdMap_getD_spec__0___redArg(v_fvarIdToPos_442_, v_v_447_, v___x_448_);
lean_dec(v_v_447_);
v___x_451_ = ((size_t)1ULL);
v___x_452_ = lean_usize_add(v_i_444_, v___x_451_);
v___x_453_ = lean_array_uset(v_bs_x27_449_, v_i_444_, v___x_450_);
v_i_444_ = v___x_452_;
v_bs_445_ = v___x_453_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___boxed(lean_object* v_fvarIdToPos_455_, lean_object* v_sz_456_, lean_object* v_i_457_, lean_object* v_bs_458_){
_start:
{
size_t v_sz_boxed_459_; size_t v_i_boxed_460_; lean_object* v_res_461_; 
v_sz_boxed_459_ = lean_unbox_usize(v_sz_456_);
lean_dec(v_sz_456_);
v_i_boxed_460_ = lean_unbox_usize(v_i_457_);
lean_dec(v_i_457_);
v_res_461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(v_fvarIdToPos_455_, v_sz_boxed_459_, v_i_boxed_460_, v_bs_458_);
lean_dec(v_fvarIdToPos_455_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(size_t v_sz_462_, size_t v_i_463_, lean_object* v_bs_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = lean_usize_dec_lt(v_i_463_, v_sz_462_);
if (v___x_465_ == 0)
{
return v_bs_464_;
}
else
{
lean_object* v_v_466_; lean_object* v___x_467_; lean_object* v_bs_x27_468_; lean_object* v___x_469_; size_t v___x_470_; size_t v___x_471_; lean_object* v___x_472_; 
v_v_466_ = lean_array_uget(v_bs_464_, v_i_463_);
v___x_467_ = lean_unsigned_to_nat(0u);
v_bs_x27_468_ = lean_array_uset(v_bs_464_, v_i_463_, v___x_467_);
v___x_469_ = l_Lean_mkFVar(v_v_466_);
v___x_470_ = ((size_t)1ULL);
v___x_471_ = lean_usize_add(v_i_463_, v___x_470_);
v___x_472_ = lean_array_uset(v_bs_x27_468_, v_i_463_, v___x_469_);
v_i_463_ = v___x_471_;
v_bs_464_ = v___x_472_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1___boxed(lean_object* v_sz_474_, lean_object* v_i_475_, lean_object* v_bs_476_){
_start:
{
size_t v_sz_boxed_477_; size_t v_i_boxed_478_; lean_object* v_res_479_; 
v_sz_boxed_477_ = lean_unbox_usize(v_sz_474_);
lean_dec(v_sz_474_);
v_i_boxed_478_ = lean_unbox_usize(v_i_475_);
lean_dec(v_i_475_);
v_res_479_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(v_sz_boxed_477_, v_i_boxed_478_, v_bs_476_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0___boxed(lean_object** _args){
lean_object* v_fvarIdToPos_489_ = _args[0];
lean_object* v_subst_490_ = _args[1];
lean_object* v_sz_491_ = _args[2];
lean_object* v___x_492_ = _args[3];
lean_object* v_fvarIds_493_ = _args[4];
lean_object* v_x_494_ = _args[5];
lean_object* v_xs_495_ = _args[6];
lean_object* v_xs_x27_496_ = _args[7];
lean_object* v_args_497_ = _args[8];
lean_object* v_a_498_ = _args[9];
lean_object* v_types_499_ = _args[10];
lean_object* v_a_500_ = _args[11];
lean_object* v_varDeps_501_ = _args[12];
lean_object* v_varPos_502_ = _args[13];
lean_object* v_haveExpr_503_ = _args[14];
lean_object* v_body_504_ = _args[15];
lean_object* v_x_x27_505_ = _args[16];
lean_object* v___y_506_ = _args[17];
lean_object* v___y_507_ = _args[18];
lean_object* v___y_508_ = _args[19];
lean_object* v___y_509_ = _args[20];
lean_object* v___y_510_ = _args[21];
lean_object* v___y_511_ = _args[22];
lean_object* v___y_512_ = _args[23];
_start:
{
size_t v_sz_boxed_513_; size_t v___x_6166__boxed_514_; lean_object* v_res_515_; 
v_sz_boxed_513_ = lean_unbox_usize(v_sz_491_);
lean_dec(v_sz_491_);
v___x_6166__boxed_514_ = lean_unbox_usize(v___x_492_);
lean_dec(v___x_492_);
v_res_515_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0(v_fvarIdToPos_489_, v_subst_490_, v_sz_boxed_513_, v___x_6166__boxed_514_, v_fvarIds_493_, v_x_494_, v_xs_495_, v_xs_x27_496_, v_args_497_, v_a_498_, v_types_499_, v_a_500_, v_varDeps_501_, v_varPos_502_, v_haveExpr_503_, v_body_504_, v_x_x27_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1(lean_object* v_v_516_, lean_object* v_fvarIdToPos_517_, uint8_t v_nondep_518_, lean_object* v_t_519_, lean_object* v_subst_520_, lean_object* v_xs_521_, lean_object* v_xs_x27_522_, lean_object* v_args_523_, lean_object* v_types_524_, lean_object* v_varDeps_525_, lean_object* v_haveExpr_526_, lean_object* v_body_527_, lean_object* v_declName_528_, lean_object* v_x_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v_fvarIds_537_; size_t v_sz_538_; size_t v___x_539_; lean_object* v_varPos_540_; lean_object* v_ys_541_; uint8_t v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; 
lean_inc(v_fvarIdToPos_517_);
lean_inc_ref(v_v_516_);
v_fvarIds_537_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(v_v_516_, v_fvarIdToPos_517_);
v_sz_538_ = lean_array_size(v_fvarIds_537_);
v___x_539_ = ((size_t)0ULL);
lean_inc_ref_n(v_fvarIds_537_, 2);
v_varPos_540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(v_fvarIdToPos_517_, v_sz_538_, v___x_539_, v_fvarIds_537_);
v_ys_541_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(v_sz_538_, v___x_539_, v_fvarIds_537_);
v___x_542_ = 0;
v___x_543_ = 1;
v___x_544_ = l_Lean_Meta_mkLambdaFVars(v_ys_541_, v_v_516_, v___x_542_, v_nondep_518_, v___x_542_, v_nondep_518_, v___x_543_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = l_Lean_Meta_mkForallFVars(v_ys_541_, v_t_519_, v___x_542_, v_nondep_518_, v_nondep_518_, v___x_543_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec_ref(v_ys_541_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_548_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_546_, 1);
v___x_548_ = l_Lean_Meta_Sym_shareCommonInc(v_a_547_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___f_552_; lean_object* v___x_553_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc_n(v_a_549_, 2);
lean_dec_ref_known(v___x_548_, 1);
v___x_550_ = lean_box_usize(v_sz_538_);
v___x_551_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1));
v___f_552_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0___boxed), 24, 16);
lean_closure_set(v___f_552_, 0, v_fvarIdToPos_517_);
lean_closure_set(v___f_552_, 1, v_subst_520_);
lean_closure_set(v___f_552_, 2, v___x_550_);
lean_closure_set(v___f_552_, 3, v___x_551_);
lean_closure_set(v___f_552_, 4, v_fvarIds_537_);
lean_closure_set(v___f_552_, 5, v_x_529_);
lean_closure_set(v___f_552_, 6, v_xs_521_);
lean_closure_set(v___f_552_, 7, v_xs_x27_522_);
lean_closure_set(v___f_552_, 8, v_args_523_);
lean_closure_set(v___f_552_, 9, v_a_545_);
lean_closure_set(v___f_552_, 10, v_types_524_);
lean_closure_set(v___f_552_, 11, v_a_549_);
lean_closure_set(v___f_552_, 12, v_varDeps_525_);
lean_closure_set(v___f_552_, 13, v_varPos_540_);
lean_closure_set(v___f_552_, 14, v_haveExpr_526_);
lean_closure_set(v___f_552_, 15, v_body_527_);
v___x_553_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg(v_declName_528_, v_a_549_, v___f_552_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
return v___x_553_;
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec(v_a_545_);
lean_dec_ref(v_varPos_540_);
lean_dec_ref(v_fvarIds_537_);
lean_dec_ref(v_x_529_);
lean_dec(v_declName_528_);
lean_dec_ref(v_body_527_);
lean_dec_ref(v_haveExpr_526_);
lean_dec_ref(v_varDeps_525_);
lean_dec_ref(v_types_524_);
lean_dec_ref(v_args_523_);
lean_dec_ref(v_xs_x27_522_);
lean_dec_ref(v_xs_521_);
lean_dec_ref(v_subst_520_);
lean_dec(v_fvarIdToPos_517_);
v_a_554_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_548_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_548_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_a_545_);
lean_dec_ref(v_varPos_540_);
lean_dec_ref(v_fvarIds_537_);
lean_dec_ref(v_x_529_);
lean_dec(v_declName_528_);
lean_dec_ref(v_body_527_);
lean_dec_ref(v_haveExpr_526_);
lean_dec_ref(v_varDeps_525_);
lean_dec_ref(v_types_524_);
lean_dec_ref(v_args_523_);
lean_dec_ref(v_xs_x27_522_);
lean_dec_ref(v_xs_521_);
lean_dec_ref(v_subst_520_);
lean_dec(v_fvarIdToPos_517_);
v_a_562_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_546_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_546_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v_ys_541_);
lean_dec_ref(v_varPos_540_);
lean_dec_ref(v_fvarIds_537_);
lean_dec_ref(v_x_529_);
lean_dec(v_declName_528_);
lean_dec_ref(v_body_527_);
lean_dec_ref(v_haveExpr_526_);
lean_dec_ref(v_varDeps_525_);
lean_dec_ref(v_types_524_);
lean_dec_ref(v_args_523_);
lean_dec_ref(v_xs_x27_522_);
lean_dec_ref(v_xs_521_);
lean_dec_ref(v_subst_520_);
lean_dec_ref(v_t_519_);
lean_dec(v_fvarIdToPos_517_);
v_a_570_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_544_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_544_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed(lean_object** _args){
lean_object* v_v_578_ = _args[0];
lean_object* v_fvarIdToPos_579_ = _args[1];
lean_object* v_nondep_580_ = _args[2];
lean_object* v_t_581_ = _args[3];
lean_object* v_subst_582_ = _args[4];
lean_object* v_xs_583_ = _args[5];
lean_object* v_xs_x27_584_ = _args[6];
lean_object* v_args_585_ = _args[7];
lean_object* v_types_586_ = _args[8];
lean_object* v_varDeps_587_ = _args[9];
lean_object* v_haveExpr_588_ = _args[10];
lean_object* v_body_589_ = _args[11];
lean_object* v_declName_590_ = _args[12];
lean_object* v_x_591_ = _args[13];
lean_object* v___y_592_ = _args[14];
lean_object* v___y_593_ = _args[15];
lean_object* v___y_594_ = _args[16];
lean_object* v___y_595_ = _args[17];
lean_object* v___y_596_ = _args[18];
lean_object* v___y_597_ = _args[19];
lean_object* v___y_598_ = _args[20];
_start:
{
uint8_t v_nondep_6193__boxed_599_; lean_object* v_res_600_; 
v_nondep_6193__boxed_599_ = lean_unbox(v_nondep_580_);
v_res_600_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1(v_v_578_, v_fvarIdToPos_579_, v_nondep_6193__boxed_599_, v_t_581_, v_subst_582_, v_xs_583_, v_xs_x27_584_, v_args_585_, v_types_586_, v_varDeps_587_, v_haveExpr_588_, v_body_589_, v_declName_590_, v_x_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(lean_object* v_haveExpr_601_, lean_object* v_e_602_, lean_object* v_xs_603_, lean_object* v_xs_x27_604_, lean_object* v_args_605_, lean_object* v_subst_606_, lean_object* v_types_607_, lean_object* v_varDeps_608_, lean_object* v_fvarIdToPos_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
lean_object* v___y_618_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; 
if (lean_obj_tag(v_e_602_) == 8)
{
uint8_t v_nondep_704_; 
v_nondep_704_ = lean_ctor_get_uint8(v_e_602_, sizeof(void*)*4 + 8);
if (v_nondep_704_ == 1)
{
lean_object* v_declName_705_; lean_object* v_type_706_; lean_object* v_value_707_; lean_object* v_body_708_; lean_object* v_t_709_; lean_object* v_v_710_; lean_object* v___x_711_; lean_object* v___f_712_; lean_object* v___x_713_; 
v_declName_705_ = lean_ctor_get(v_e_602_, 0);
lean_inc_n(v_declName_705_, 2);
v_type_706_ = lean_ctor_get(v_e_602_, 1);
lean_inc_ref(v_type_706_);
v_value_707_ = lean_ctor_get(v_e_602_, 2);
lean_inc_ref(v_value_707_);
v_body_708_ = lean_ctor_get(v_e_602_, 3);
lean_inc_ref(v_body_708_);
lean_dec_ref_known(v_e_602_, 4);
v_t_709_ = lean_expr_instantiate_rev(v_type_706_, v_xs_603_);
lean_dec_ref(v_type_706_);
v_v_710_ = lean_expr_instantiate_rev(v_value_707_, v_xs_603_);
lean_dec_ref(v_value_707_);
v___x_711_ = lean_box(v_nondep_704_);
lean_inc_ref(v_t_709_);
v___f_712_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed), 21, 13);
lean_closure_set(v___f_712_, 0, v_v_710_);
lean_closure_set(v___f_712_, 1, v_fvarIdToPos_609_);
lean_closure_set(v___f_712_, 2, v___x_711_);
lean_closure_set(v___f_712_, 3, v_t_709_);
lean_closure_set(v___f_712_, 4, v_subst_606_);
lean_closure_set(v___f_712_, 5, v_xs_603_);
lean_closure_set(v___f_712_, 6, v_xs_x27_604_);
lean_closure_set(v___f_712_, 7, v_args_605_);
lean_closure_set(v___f_712_, 8, v_types_607_);
lean_closure_set(v___f_712_, 9, v_varDeps_608_);
lean_closure_set(v___f_712_, 10, v_haveExpr_601_);
lean_closure_set(v___f_712_, 11, v_body_708_);
lean_closure_set(v___f_712_, 12, v_declName_705_);
v___x_713_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg(v_declName_705_, v_t_709_, v___f_712_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_);
return v___x_713_;
}
else
{
lean_dec(v_fvarIdToPos_609_);
lean_dec_ref(v_xs_603_);
v___y_618_ = v_a_610_;
v___y_619_ = v_a_611_;
v___y_620_ = v_a_612_;
v___y_621_ = v_a_613_;
v___y_622_ = v_a_614_;
v___y_623_ = v_a_615_;
goto v___jp_617_;
}
}
else
{
lean_dec(v_fvarIdToPos_609_);
lean_dec_ref(v_xs_603_);
v___y_618_ = v_a_610_;
v___y_619_ = v_a_611_;
v___y_620_ = v_a_612_;
v___y_621_ = v_a_613_;
v___y_622_ = v_a_614_;
v___y_623_ = v_a_615_;
goto v___jp_617_;
}
v___jp_617_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_unsigned_to_nat(0u);
v___x_625_ = lean_array_get_size(v_subst_606_);
v___x_626_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_e_602_, v___x_624_, v___x_625_, v_subst_606_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_628_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc_n(v_a_627_, 2);
lean_dec_ref_known(v___x_626_, 1);
v___x_628_ = l_Lean_Meta_Sym_inferType(v_a_627_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc_n(v_a_629_, 2);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_629_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
lean_inc(v_a_629_);
v___x_632_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(v_types_607_, v_a_629_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
lean_dec_ref(v_types_607_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_634_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___x_632_, 1);
v___x_634_ = l_Lean_Meta_Sym_mkLambdaFVarsS(v_xs_x27_604_, v_a_627_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_634_, 1);
v___x_636_ = l_Lean_mkAppN(v_a_635_, v_args_605_);
lean_dec_ref(v_args_605_);
v___x_637_ = l_Lean_Meta_Sym_shareCommonInc(v___x_636_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_655_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_655_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_655_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_655_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_642_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1));
v___x_643_ = lean_box(0);
lean_inc(v_a_631_);
v___x_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_644_, 0, v_a_631_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
lean_inc_ref(v___x_644_);
v___x_645_ = l_Lean_mkConst(v___x_642_, v___x_644_);
lean_inc(v_a_638_);
lean_inc_ref(v_haveExpr_601_);
lean_inc_n(v_a_629_, 2);
v___x_646_ = l_Lean_mkApp3(v___x_645_, v_a_629_, v_haveExpr_601_, v_a_638_);
v___x_647_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_648_ = l_Lean_mkConst(v___x_647_, v___x_644_);
v___x_649_ = l_Lean_mkAppB(v___x_648_, v_a_629_, v_haveExpr_601_);
v___x_650_ = l_Lean_Meta_mkExpectedPropHint(v___x_649_, v___x_646_);
v___x_651_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_651_, 0, v_a_629_);
lean_ctor_set(v___x_651_, 1, v_a_631_);
lean_ctor_set(v___x_651_, 2, v_a_638_);
lean_ctor_set(v___x_651_, 3, v___x_650_);
lean_ctor_set(v___x_651_, 4, v_varDeps_608_);
lean_ctor_set(v___x_651_, 5, v_a_633_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_651_);
v___x_653_ = v___x_640_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_a_633_);
lean_dec(v_a_631_);
lean_dec(v_a_629_);
lean_dec_ref(v_varDeps_608_);
lean_dec_ref(v_haveExpr_601_);
v_a_656_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_637_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_637_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec(v_a_633_);
lean_dec(v_a_631_);
lean_dec(v_a_629_);
lean_dec_ref(v_varDeps_608_);
lean_dec_ref(v_args_605_);
lean_dec_ref(v_haveExpr_601_);
v_a_664_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_634_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_634_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec(v_a_631_);
lean_dec(v_a_629_);
lean_dec(v_a_627_);
lean_dec_ref(v_varDeps_608_);
lean_dec_ref(v_args_605_);
lean_dec_ref(v_xs_x27_604_);
lean_dec_ref(v_haveExpr_601_);
v_a_672_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_632_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_632_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_672_);
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
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_a_629_);
lean_dec(v_a_627_);
lean_dec_ref(v_varDeps_608_);
lean_dec_ref(v_types_607_);
lean_dec_ref(v_args_605_);
lean_dec_ref(v_xs_x27_604_);
lean_dec_ref(v_haveExpr_601_);
v_a_680_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_630_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_630_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec(v_a_627_);
lean_dec_ref(v_varDeps_608_);
lean_dec_ref(v_types_607_);
lean_dec_ref(v_args_605_);
lean_dec_ref(v_xs_x27_604_);
lean_dec_ref(v_haveExpr_601_);
v_a_688_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_628_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_628_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v_varDeps_608_);
lean_dec_ref(v_types_607_);
lean_dec_ref(v_args_605_);
lean_dec_ref(v_xs_x27_604_);
lean_dec_ref(v_haveExpr_601_);
v_a_696_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_626_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_626_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0(lean_object* v_fvarIdToPos_714_, lean_object* v_subst_715_, size_t v_sz_716_, size_t v___x_717_, lean_object* v_fvarIds_718_, lean_object* v_x_719_, lean_object* v_xs_720_, lean_object* v_xs_x27_721_, lean_object* v_args_722_, lean_object* v_a_723_, lean_object* v_types_724_, lean_object* v_a_725_, lean_object* v_varDeps_726_, lean_object* v_varPos_727_, lean_object* v_haveExpr_728_, lean_object* v_body_729_, lean_object* v_x_x27_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_inc(v_fvarIdToPos_714_);
v___x_738_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(v_fvarIdToPos_714_, v_subst_715_, v_sz_716_, v___x_717_, v_fvarIds_718_);
lean_inc_ref(v_x_x27_730_);
v___x_739_ = l_Lean_mkAppN(v_x_x27_730_, v___x_738_);
lean_dec_ref(v___x_738_);
v___x_740_ = l_Lean_Meta_Sym_shareCommonInc(v___x_739_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = l_Lean_Expr_fvarId_x21(v_x_719_);
v___x_743_ = lean_array_get_size(v_xs_720_);
v___x_744_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v___x_742_, v___x_743_, v_fvarIdToPos_714_);
v___x_745_ = lean_array_push(v_xs_720_, v_x_719_);
v___x_746_ = lean_array_push(v_xs_x27_721_, v_x_x27_730_);
v___x_747_ = lean_array_push(v_args_722_, v_a_723_);
v___x_748_ = lean_array_push(v_subst_715_, v_a_741_);
v___x_749_ = lean_array_push(v_types_724_, v_a_725_);
v___x_750_ = lean_array_push(v_varDeps_726_, v_varPos_727_);
v___x_751_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(v_haveExpr_728_, v_body_729_, v___x_745_, v___x_746_, v___x_747_, v___x_748_, v___x_749_, v___x_750_, v___x_744_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
return v___x_751_;
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec_ref(v_x_x27_730_);
lean_dec_ref(v_body_729_);
lean_dec_ref(v_haveExpr_728_);
lean_dec_ref(v_varPos_727_);
lean_dec_ref(v_varDeps_726_);
lean_dec_ref(v_a_725_);
lean_dec_ref(v_types_724_);
lean_dec_ref(v_a_723_);
lean_dec_ref(v_args_722_);
lean_dec_ref(v_xs_x27_721_);
lean_dec_ref(v_xs_720_);
lean_dec_ref(v_x_719_);
lean_dec_ref(v_subst_715_);
lean_dec(v_fvarIdToPos_714_);
v_a_752_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_740_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_740_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___boxed(lean_object* v_haveExpr_760_, lean_object* v_e_761_, lean_object* v_xs_762_, lean_object* v_xs_x27_763_, lean_object* v_args_764_, lean_object* v_subst_765_, lean_object* v_types_766_, lean_object* v_varDeps_767_, lean_object* v_fvarIdToPos_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(v_haveExpr_760_, v_e_761_, v_xs_762_, v_xs_x27_763_, v_args_764_, v_subst_765_, v_types_766_, v_varDeps_767_, v_fvarIdToPos_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
lean_dec(v_a_772_);
lean_dec_ref(v_a_771_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3(lean_object* v_00_u03b1_777_, lean_object* v_name_778_, uint8_t v_bi_779_, lean_object* v_type_780_, lean_object* v_k_781_, uint8_t v_kind_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg(v_name_778_, v_bi_779_, v_type_780_, v_k_781_, v_kind_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___boxed(lean_object* v_00_u03b1_791_, lean_object* v_name_792_, lean_object* v_bi_793_, lean_object* v_type_794_, lean_object* v_k_795_, lean_object* v_kind_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
uint8_t v_bi_boxed_804_; uint8_t v_kind_boxed_805_; lean_object* v_res_806_; 
v_bi_boxed_804_ = lean_unbox(v_bi_793_);
v_kind_boxed_805_ = lean_unbox(v_kind_796_);
v_res_806_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3(v_00_u03b1_791_, v_name_792_, v_bi_boxed_804_, v_type_794_, v_k_795_, v_kind_boxed_805_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(lean_object* v_00_u03b1_807_, lean_object* v_name_808_, lean_object* v_type_809_, lean_object* v_k_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___redArg(v_name_808_, v_type_809_, v_k_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___boxed(lean_object* v_00_u03b1_819_, lean_object* v_name_820_, lean_object* v_type_821_, lean_object* v_k_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(v_00_u03b1_819_, v_name_820_, v_type_821_, v_k_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp(lean_object* v_haveExpr_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_toBetaApp___closed__0));
v___x_842_ = lean_box(1);
lean_inc_ref(v_haveExpr_833_);
v___x_843_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(v_haveExpr_833_, v_haveExpr_833_, v___x_841_, v___x_841_, v___x_841_, v___x_841_, v___x_841_, v___x_841_, v___x_842_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp___boxed(lean_object* v_haveExpr_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_Meta_Sym_Simp_toBetaApp(v_haveExpr_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec(v_a_846_);
lean_dec_ref(v_a_845_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_consumeForallN(lean_object* v_type_853_, lean_object* v_n_854_){
_start:
{
lean_object* v_zero_855_; uint8_t v_isZero_856_; 
v_zero_855_ = lean_unsigned_to_nat(0u);
v_isZero_856_ = lean_nat_dec_eq(v_n_854_, v_zero_855_);
if (v_isZero_856_ == 1)
{
lean_dec(v_n_854_);
return v_type_853_;
}
else
{
lean_object* v_one_857_; lean_object* v_n_858_; lean_object* v___x_859_; 
v_one_857_ = lean_unsigned_to_nat(1u);
v_n_858_ = lean_nat_sub(v_n_854_, v_one_857_);
lean_dec(v_n_854_);
v___x_859_ = l_Lean_Expr_bindingBody_x21(v_type_853_);
lean_dec_ref(v_type_853_);
v_type_853_ = v___x_859_;
v_n_854_ = v_n_858_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(lean_object* v_idx_861_, lean_object* v___y_862_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = l_Lean_Expr_bvar___override(v_idx_861_);
v___x_864_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_863_, v___y_862_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0(lean_object* v_idx_865_, uint8_t v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(v_idx_865_, v___y_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___boxed(lean_object* v_idx_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
uint8_t v___y_24949__boxed_874_; lean_object* v_res_875_; 
v___y_24949__boxed_874_ = lean_unbox(v___y_871_);
v_res_875_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0(v_idx_870_, v___y_24949__boxed_874_, v___y_872_, v___y_873_);
lean_dec_ref(v___y_872_);
return v_res_875_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0(void){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Std_HashMap_instInhabited___redArg();
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(lean_object* v_msg_877_, uint8_t v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___f_883_; lean_object* v___f_884_; lean_object* v___x_1487__overap_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_881_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0);
v___x_882_ = l_EStateM_instInhabited___redArg(v___x_881_);
v___f_883_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_883_, 0, v___x_882_);
v___f_884_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_884_, 0, v___f_883_);
v___x_1487__overap_885_ = lean_panic_fn_borrowed(v___f_884_, v_msg_877_);
lean_dec_ref(v___f_884_);
v___x_886_ = lean_box(v___y_878_);
lean_inc_ref(v___y_879_);
v___x_887_ = lean_apply_3(v___x_1487__overap_885_, v___x_886_, v___y_879_, v___y_880_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___boxed(lean_object* v_msg_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
uint8_t v___y_24962__boxed_892_; lean_object* v_res_893_; 
v___y_24962__boxed_892_ = lean_unbox(v___y_889_);
v_res_893_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(v_msg_888_, v___y_24962__boxed_892_, v___y_890_, v___y_891_);
lean_dec_ref(v___y_890_);
return v_res_893_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0(void){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(lean_object* v_msg_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v___x_903_; lean_object* v___x_1953__overap_904_; lean_object* v___x_905_; 
v___x_903_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0);
v___x_1953__overap_904_ = lean_panic_fn_borrowed(v___x_903_, v_msg_895_);
lean_inc(v___y_901_);
lean_inc_ref(v___y_900_);
lean_inc(v___y_899_);
lean_inc_ref(v___y_898_);
lean_inc(v___y_897_);
lean_inc_ref(v___y_896_);
v___x_905_ = lean_apply_7(v___x_1953__overap_904_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, lean_box(0));
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___boxed(lean_object* v_msg_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v_msg_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(lean_object* v_x_915_, lean_object* v_t_916_, lean_object* v_v_917_, lean_object* v_b_918_, uint8_t v_nondep_919_, lean_object* v___y_920_, uint8_t v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v___y_925_; lean_object* v___y_926_; 
if (v___y_921_ == 0)
{
v___y_925_ = v___y_920_;
v___y_926_ = v___y_923_;
goto v___jp_924_;
}
else
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_916_, v___y_921_, v___y_922_, v___y_923_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 1);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 2);
v___x_950_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_917_, v___y_921_, v___y_922_, v_a_949_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_952_; 
v_a_951_ = lean_ctor_get(v___x_950_, 1);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 2);
v___x_952_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_918_, v___y_921_, v___y_922_, v_a_951_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; 
v_a_953_ = lean_ctor_get(v___x_952_, 1);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 2);
v___y_925_ = v___y_920_;
v___y_926_ = v_a_953_;
goto v___jp_924_;
}
else
{
lean_object* v_a_954_; lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec_ref(v___y_920_);
lean_dec_ref(v_b_918_);
lean_dec_ref(v_v_917_);
lean_dec_ref(v_t_916_);
lean_dec(v_x_915_);
v_a_954_ = lean_ctor_get(v___x_952_, 0);
v_a_955_ = lean_ctor_get(v___x_952_, 1);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_952_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_inc(v_a_954_);
lean_dec(v___x_952_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_954_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
else
{
lean_object* v_a_963_; lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
lean_dec_ref(v___y_920_);
lean_dec_ref(v_b_918_);
lean_dec_ref(v_v_917_);
lean_dec_ref(v_t_916_);
lean_dec(v_x_915_);
v_a_963_ = lean_ctor_get(v___x_950_, 0);
v_a_964_ = lean_ctor_get(v___x_950_, 1);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_950_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_inc(v_a_963_);
lean_dec(v___x_950_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_963_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
else
{
lean_object* v_a_972_; lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec_ref(v___y_920_);
lean_dec_ref(v_b_918_);
lean_dec_ref(v_v_917_);
lean_dec_ref(v_t_916_);
lean_dec(v_x_915_);
v_a_972_ = lean_ctor_get(v___x_948_, 0);
v_a_973_ = lean_ctor_get(v___x_948_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_948_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_inc(v_a_972_);
lean_dec(v___x_948_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_972_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
v___jp_924_:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = l_Lean_Expr_letE___override(v_x_915_, v_t_916_, v_v_917_, v_b_918_, v_nondep_919_);
v___x_928_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_927_, v___y_926_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_938_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
v_a_930_ = lean_ctor_get(v___x_928_, 1);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_938_ == 0)
{
v___x_932_ = v___x_928_;
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_inc(v_a_929_);
lean_dec(v___x_928_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_934_, 0, v_a_929_);
lean_ctor_set(v___x_934_, 1, v___y_925_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 0, v___x_934_);
v___x_936_ = v___x_932_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_a_930_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec_ref(v___y_925_);
v_a_939_ = lean_ctor_get(v___x_928_, 0);
v_a_940_ = lean_ctor_get(v___x_928_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_928_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_inc(v_a_939_);
lean_dec(v___x_928_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_939_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6___boxed(lean_object* v_x_981_, lean_object* v_t_982_, lean_object* v_v_983_, lean_object* v_b_984_, lean_object* v_nondep_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
uint8_t v_nondep_boxed_990_; uint8_t v___y_25013__boxed_991_; lean_object* v_res_992_; 
v_nondep_boxed_990_ = lean_unbox(v_nondep_985_);
v___y_25013__boxed_991_ = lean_unbox(v___y_987_);
v_res_992_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_x_981_, v_t_982_, v_v_983_, v_b_984_, v_nondep_boxed_990_, v___y_986_, v___y_25013__boxed_991_, v___y_988_, v___y_989_);
lean_dec_ref(v___y_988_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(lean_object* v_x_993_, uint8_t v_bi_994_, lean_object* v_t_995_, lean_object* v_b_996_, lean_object* v___y_997_, uint8_t v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v___y_1002_; lean_object* v___y_1003_; 
if (v___y_998_ == 0)
{
v___y_1002_ = v___y_997_;
v___y_1003_ = v___y_1000_;
goto v___jp_1001_;
}
else
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_995_, v___y_998_, v___y_999_, v___y_1000_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1027_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 1);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 2);
v___x_1027_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_996_, v___y_998_, v___y_999_, v_a_1026_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 1);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 2);
v___y_1002_ = v___y_997_;
v___y_1003_ = v_a_1028_;
goto v___jp_1001_;
}
else
{
lean_object* v_a_1029_; lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec_ref(v___y_997_);
lean_dec_ref(v_b_996_);
lean_dec_ref(v_t_995_);
lean_dec(v_x_993_);
v_a_1029_ = lean_ctor_get(v___x_1027_, 0);
v_a_1030_ = lean_ctor_get(v___x_1027_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1027_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_inc(v_a_1029_);
lean_dec(v___x_1027_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1029_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec_ref(v___y_997_);
lean_dec_ref(v_b_996_);
lean_dec_ref(v_t_995_);
lean_dec(v_x_993_);
v_a_1038_ = lean_ctor_get(v___x_1025_, 0);
v_a_1039_ = lean_ctor_get(v___x_1025_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1025_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_inc(v_a_1038_);
lean_dec(v___x_1025_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1038_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
v___jp_1001_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = l_Lean_Expr_lam___override(v_x_993_, v_t_995_, v_b_996_, v_bi_994_);
v___x_1005_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1004_, v___y_1003_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1015_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_a_1007_ = lean_ctor_get(v___x_1005_, 1);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1009_ = v___x_1005_;
v_isShared_1010_ = v_isSharedCheck_1015_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1015_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v_a_1006_);
lean_ctor_set(v___x_1011_, 1, v___y_1002_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1013_ = v___x_1009_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_a_1007_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref(v___y_1002_);
v_a_1016_ = lean_ctor_get(v___x_1005_, 0);
v_a_1017_ = lean_ctor_get(v___x_1005_, 1);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1005_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_inc(v_a_1016_);
lean_dec(v___x_1005_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1016_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4___boxed(lean_object* v_x_1047_, lean_object* v_bi_1048_, lean_object* v_t_1049_, lean_object* v_b_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
uint8_t v_bi_boxed_1055_; uint8_t v___y_25142__boxed_1056_; lean_object* v_res_1057_; 
v_bi_boxed_1055_ = lean_unbox(v_bi_1048_);
v___y_25142__boxed_1056_ = lean_unbox(v___y_1052_);
v_res_1057_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(v_x_1047_, v_bi_boxed_1055_, v_t_1049_, v_b_1050_, v___y_1051_, v___y_25142__boxed_1056_, v___y_1053_, v___y_1054_);
lean_dec_ref(v___y_1053_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(lean_object* v_x_1058_, uint8_t v_bi_1059_, lean_object* v_t_1060_, lean_object* v_b_1061_, lean_object* v___y_1062_, uint8_t v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___y_1067_; lean_object* v___y_1068_; 
if (v___y_1063_ == 0)
{
v___y_1067_ = v___y_1062_;
v___y_1068_ = v___y_1065_;
goto v___jp_1066_;
}
else
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1060_, v___y_1063_, v___y_1064_, v___y_1065_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 1);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 2);
v___x_1092_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1061_, v___y_1063_, v___y_1064_, v_a_1091_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 1);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 2);
v___y_1067_ = v___y_1062_;
v___y_1068_ = v_a_1093_;
goto v___jp_1066_;
}
else
{
lean_object* v_a_1094_; lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec_ref(v___y_1062_);
lean_dec_ref(v_b_1061_);
lean_dec_ref(v_t_1060_);
lean_dec(v_x_1058_);
v_a_1094_ = lean_ctor_get(v___x_1092_, 0);
v_a_1095_ = lean_ctor_get(v___x_1092_, 1);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1092_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_inc(v_a_1094_);
lean_dec(v___x_1092_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1094_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_a_1095_);
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
else
{
lean_object* v_a_1103_; lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec_ref(v___y_1062_);
lean_dec_ref(v_b_1061_);
lean_dec_ref(v_t_1060_);
lean_dec(v_x_1058_);
v_a_1103_ = lean_ctor_get(v___x_1090_, 0);
v_a_1104_ = lean_ctor_get(v___x_1090_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1090_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_inc(v_a_1103_);
lean_dec(v___x_1090_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1103_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
v___jp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = l_Lean_Expr_forallE___override(v_x_1058_, v_t_1060_, v_b_1061_, v_bi_1059_);
v___x_1070_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1069_, v___y_1068_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1080_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
v_a_1072_ = lean_ctor_get(v___x_1070_, 1);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1074_ = v___x_1070_;
v_isShared_1075_ = v_isSharedCheck_1080_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_inc(v_a_1071_);
lean_dec(v___x_1070_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1080_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v_a_1071_);
lean_ctor_set(v___x_1076_, 1, v___y_1067_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1076_);
v___x_1078_ = v___x_1074_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_a_1072_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
else
{
lean_object* v_a_1081_; lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref(v___y_1067_);
v_a_1081_ = lean_ctor_get(v___x_1070_, 0);
v_a_1082_ = lean_ctor_get(v___x_1070_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1070_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_inc(v_a_1081_);
lean_dec(v___x_1070_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1081_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5___boxed(lean_object* v_x_1112_, lean_object* v_bi_1113_, lean_object* v_t_1114_, lean_object* v_b_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v_bi_boxed_1120_; uint8_t v___y_25248__boxed_1121_; lean_object* v_res_1122_; 
v_bi_boxed_1120_ = lean_unbox(v_bi_1113_);
v___y_25248__boxed_1121_ = lean_unbox(v___y_1117_);
v_res_1122_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(v_x_1112_, v_bi_boxed_1120_, v_t_1114_, v_b_1115_, v___y_1116_, v___y_25248__boxed_1121_, v___y_1118_, v___y_1119_);
lean_dec_ref(v___y_1118_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(lean_object* v_f_1123_, lean_object* v_a_1124_, lean_object* v___y_1125_, uint8_t v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v___y_1130_; lean_object* v___y_1131_; 
if (v___y_1126_ == 0)
{
v___y_1130_ = v___y_1125_;
v___y_1131_ = v___y_1128_;
goto v___jp_1129_;
}
else
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_1123_, v___y_1126_, v___y_1127_, v___y_1128_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 1);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 2);
v___x_1155_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_1124_, v___y_1126_, v___y_1127_, v_a_1154_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 1);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 2);
v___y_1130_ = v___y_1125_;
v___y_1131_ = v_a_1156_;
goto v___jp_1129_;
}
else
{
lean_object* v_a_1157_; lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec_ref(v___y_1125_);
lean_dec_ref(v_a_1124_);
lean_dec_ref(v_f_1123_);
v_a_1157_ = lean_ctor_get(v___x_1155_, 0);
v_a_1158_ = lean_ctor_get(v___x_1155_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1155_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_inc(v_a_1157_);
lean_dec(v___x_1155_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1157_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec_ref(v___y_1125_);
lean_dec_ref(v_a_1124_);
lean_dec_ref(v_f_1123_);
v_a_1166_ = lean_ctor_get(v___x_1153_, 0);
v_a_1167_ = lean_ctor_get(v___x_1153_, 1);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1153_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_inc(v_a_1166_);
lean_dec(v___x_1153_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1166_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
v___jp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = l_Lean_Expr_app___override(v_f_1123_, v_a_1124_);
v___x_1133_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1132_, v___y_1131_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1143_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
v_a_1135_ = lean_ctor_get(v___x_1133_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1137_ = v___x_1133_;
v_isShared_1138_ = v_isSharedCheck_1143_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_inc(v_a_1134_);
lean_dec(v___x_1133_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1143_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1139_; lean_object* v___x_1141_; 
v___x_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1139_, 0, v_a_1134_);
lean_ctor_set(v___x_1139_, 1, v___y_1130_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1139_);
v___x_1141_ = v___x_1137_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1139_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_a_1135_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
else
{
lean_object* v_a_1144_; lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v___y_1130_);
v_a_1144_ = lean_ctor_get(v___x_1133_, 0);
v_a_1145_ = lean_ctor_get(v___x_1133_, 1);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1133_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_inc(v_a_1144_);
lean_dec(v___x_1133_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1144_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3___boxed(lean_object* v_f_1175_, lean_object* v_a_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
uint8_t v___y_25354__boxed_1181_; lean_object* v_res_1182_; 
v___y_25354__boxed_1181_ = lean_unbox(v___y_1178_);
v_res_1182_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(v_f_1175_, v_a_1176_, v___y_1177_, v___y_25354__boxed_1181_, v___y_1179_, v___y_1180_);
lean_dec_ref(v___y_1179_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(lean_object* v_d_1183_, lean_object* v_e_1184_, lean_object* v___y_1185_, uint8_t v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v___y_1190_; lean_object* v___y_1191_; 
if (v___y_1186_ == 0)
{
v___y_1190_ = v___y_1185_;
v___y_1191_ = v___y_1188_;
goto v___jp_1189_;
}
else
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_1184_, v___y_1186_, v___y_1187_, v___y_1188_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 1);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1213_, 2);
v___y_1190_ = v___y_1185_;
v___y_1191_ = v_a_1214_;
goto v___jp_1189_;
}
else
{
lean_object* v_a_1215_; lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
lean_dec_ref(v___y_1185_);
lean_dec_ref(v_e_1184_);
lean_dec(v_d_1183_);
v_a_1215_ = lean_ctor_get(v___x_1213_, 0);
v_a_1216_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1213_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_inc(v_a_1215_);
lean_dec(v___x_1213_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1215_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
v___jp_1189_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = l_Lean_Expr_mdata___override(v_d_1183_, v_e_1184_);
v___x_1193_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1192_, v___y_1191_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1203_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
v_a_1195_ = lean_ctor_get(v___x_1193_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1197_ = v___x_1193_;
v_isShared_1198_ = v_isSharedCheck_1203_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_inc(v_a_1194_);
lean_dec(v___x_1193_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1203_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1199_; lean_object* v___x_1201_; 
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v_a_1194_);
lean_ctor_set(v___x_1199_, 1, v___y_1190_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v___x_1199_);
v___x_1201_ = v___x_1197_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1199_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_a_1195_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
else
{
lean_object* v_a_1204_; lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v___y_1190_);
v_a_1204_ = lean_ctor_get(v___x_1193_, 0);
v_a_1205_ = lean_ctor_get(v___x_1193_, 1);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1193_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_inc(v_a_1204_);
lean_dec(v___x_1193_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1204_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7___boxed(lean_object* v_d_1224_, lean_object* v_e_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
uint8_t v___y_25460__boxed_1230_; lean_object* v_res_1231_; 
v___y_25460__boxed_1230_ = lean_unbox(v___y_1227_);
v_res_1231_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(v_d_1224_, v_e_1225_, v___y_1226_, v___y_25460__boxed_1230_, v___y_1228_, v___y_1229_);
lean_dec_ref(v___y_1228_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(lean_object* v_msg_1239_, lean_object* v___y_1240_, uint8_t v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v___f_1244_; lean_object* v___f_1245_; lean_object* v___f_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___f_1256_; lean_object* v___f_1257_; lean_object* v___f_1258_; lean_object* v___f_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_24472__overap_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___f_1244_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0));
v___f_1245_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1));
v___f_1246_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2));
v___x_1247_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3));
v___x_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
lean_ctor_set(v___x_1248_, 1, v___f_1244_);
v___x_1249_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4));
v___x_1250_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5));
v___x_1251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1248_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
lean_ctor_set(v___x_1251_, 2, v___f_1245_);
lean_ctor_set(v___x_1251_, 3, v___f_1246_);
lean_ctor_set(v___x_1251_, 4, v___x_1250_);
v___x_1252_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6));
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = l_ReaderT_instMonad___redArg(v___x_1253_);
v___x_1255_ = l_ReaderT_instMonad___redArg(v___x_1254_);
lean_inc_ref_n(v___x_1255_, 6);
v___f_1256_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1256_, 0, v___x_1255_);
v___f_1257_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1257_, 0, v___x_1255_);
v___f_1258_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1258_, 0, v___x_1255_);
v___f_1259_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1259_, 0, v___x_1255_);
v___x_1260_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1260_, 0, lean_box(0));
lean_closure_set(v___x_1260_, 1, lean_box(0));
lean_closure_set(v___x_1260_, 2, v___x_1255_);
v___x_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
lean_ctor_set(v___x_1261_, 1, v___f_1256_);
v___x_1262_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1262_, 0, lean_box(0));
lean_closure_set(v___x_1262_, 1, lean_box(0));
lean_closure_set(v___x_1262_, 2, v___x_1255_);
v___x_1263_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
lean_ctor_set(v___x_1263_, 2, v___f_1257_);
lean_ctor_set(v___x_1263_, 3, v___f_1258_);
lean_ctor_set(v___x_1263_, 4, v___f_1259_);
v___x_1264_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1264_, 0, lean_box(0));
lean_closure_set(v___x_1264_, 1, lean_box(0));
lean_closure_set(v___x_1264_, 2, v___x_1255_);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = l_Lean_instInhabitedExpr;
v___x_1267_ = l_instInhabitedOfMonad___redArg(v___x_1265_, v___x_1266_);
v___x_24472__overap_1268_ = lean_panic_fn_borrowed(v___x_1267_, v_msg_1239_);
lean_dec(v___x_1267_);
v___x_1269_ = lean_box(v___y_1241_);
lean_inc_ref(v___y_1242_);
v___x_1270_ = lean_apply_4(v___x_24472__overap_1268_, v___y_1240_, v___x_1269_, v___y_1242_, v___y_1243_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___boxed(lean_object* v_msg_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
uint8_t v___y_25557__boxed_1276_; lean_object* v_res_1277_; 
v___y_25557__boxed_1276_ = lean_unbox(v___y_1273_);
v_res_1277_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(v_msg_1271_, v___y_1272_, v___y_25557__boxed_1276_, v___y_1274_, v___y_1275_);
lean_dec_ref(v___y_1274_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(lean_object* v_structName_1278_, lean_object* v_idx_1279_, lean_object* v_struct_1280_, lean_object* v___y_1281_, uint8_t v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___y_1286_; lean_object* v___y_1287_; 
if (v___y_1282_ == 0)
{
v___y_1286_ = v___y_1281_;
v___y_1287_ = v___y_1284_;
goto v___jp_1285_;
}
else
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_1280_, v___y_1282_, v___y_1283_, v___y_1284_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 2);
v___y_1286_ = v___y_1281_;
v___y_1287_ = v_a_1310_;
goto v___jp_1285_;
}
else
{
lean_object* v_a_1311_; lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec_ref(v___y_1281_);
lean_dec_ref(v_struct_1280_);
lean_dec(v_idx_1279_);
lean_dec(v_structName_1278_);
v_a_1311_ = lean_ctor_get(v___x_1309_, 0);
v_a_1312_ = lean_ctor_get(v___x_1309_, 1);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1309_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_inc(v_a_1311_);
lean_dec(v___x_1309_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1311_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
v___jp_1285_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = l_Lean_Expr_proj___override(v_structName_1278_, v_idx_1279_, v_struct_1280_);
v___x_1289_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1288_, v___y_1287_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1299_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_a_1291_ = lean_ctor_get(v___x_1289_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1293_ = v___x_1289_;
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v_a_1290_);
lean_ctor_set(v___x_1295_, 1, v___y_1286_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1295_);
v___x_1297_ = v___x_1293_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_a_1291_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
else
{
lean_object* v_a_1300_; lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v___y_1286_);
v_a_1300_ = lean_ctor_get(v___x_1289_, 0);
v_a_1301_ = lean_ctor_get(v___x_1289_, 1);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1289_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_inc(v_a_1300_);
lean_dec(v___x_1289_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1300_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8___boxed(lean_object* v_structName_1320_, lean_object* v_idx_1321_, lean_object* v_struct_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
uint8_t v___y_25628__boxed_1327_; lean_object* v_res_1328_; 
v___y_25628__boxed_1327_ = lean_unbox(v___y_1324_);
v_res_1328_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(v_structName_1320_, v_idx_1321_, v_struct_1322_, v___y_1323_, v___y_25628__boxed_1327_, v___y_1325_, v___y_1326_);
lean_dec_ref(v___y_1325_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(lean_object* v_a_1329_, lean_object* v_x_1330_){
_start:
{
if (lean_obj_tag(v_x_1330_) == 0)
{
lean_object* v___x_1331_; 
v___x_1331_ = lean_box(0);
return v___x_1331_;
}
else
{
lean_object* v_key_1332_; lean_object* v_value_1333_; lean_object* v_tail_1334_; lean_object* v_fst_1335_; lean_object* v_snd_1336_; lean_object* v_fst_1337_; lean_object* v_snd_1338_; size_t v___x_1339_; size_t v___x_1340_; uint8_t v___x_1341_; 
v_key_1332_ = lean_ctor_get(v_x_1330_, 0);
v_value_1333_ = lean_ctor_get(v_x_1330_, 1);
v_tail_1334_ = lean_ctor_get(v_x_1330_, 2);
v_fst_1335_ = lean_ctor_get(v_key_1332_, 0);
v_snd_1336_ = lean_ctor_get(v_key_1332_, 1);
v_fst_1337_ = lean_ctor_get(v_a_1329_, 0);
v_snd_1338_ = lean_ctor_get(v_a_1329_, 1);
v___x_1339_ = lean_ptr_addr(v_fst_1335_);
v___x_1340_ = lean_ptr_addr(v_fst_1337_);
v___x_1341_ = lean_usize_dec_eq(v___x_1339_, v___x_1340_);
if (v___x_1341_ == 0)
{
v_x_1330_ = v_tail_1334_;
goto _start;
}
else
{
uint8_t v___x_1343_; 
v___x_1343_ = lean_nat_dec_eq(v_snd_1336_, v_snd_1338_);
if (v___x_1343_ == 0)
{
v_x_1330_ = v_tail_1334_;
goto _start;
}
else
{
lean_object* v___x_1345_; 
lean_inc(v_value_1333_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_value_1333_);
return v___x_1345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg___boxed(lean_object* v_a_1346_, lean_object* v_x_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(v_a_1346_, v_x_1347_);
lean_dec(v_x_1347_);
lean_dec_ref(v_a_1346_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(lean_object* v_m_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v_buckets_1351_; lean_object* v_fst_1352_; lean_object* v_snd_1353_; lean_object* v___x_1354_; size_t v___x_1355_; size_t v___x_1356_; size_t v___x_1357_; uint64_t v___x_1358_; uint64_t v___x_1359_; uint64_t v___x_1360_; uint64_t v___x_1361_; uint64_t v___x_1362_; uint64_t v_fold_1363_; uint64_t v___x_1364_; uint64_t v___x_1365_; uint64_t v___x_1366_; size_t v___x_1367_; size_t v___x_1368_; size_t v___x_1369_; size_t v___x_1370_; size_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v_buckets_1351_ = lean_ctor_get(v_m_1349_, 1);
v_fst_1352_ = lean_ctor_get(v_a_1350_, 0);
v_snd_1353_ = lean_ctor_get(v_a_1350_, 1);
v___x_1354_ = lean_array_get_size(v_buckets_1351_);
v___x_1355_ = lean_ptr_addr(v_fst_1352_);
v___x_1356_ = ((size_t)3ULL);
v___x_1357_ = lean_usize_shift_right(v___x_1355_, v___x_1356_);
v___x_1358_ = lean_usize_to_uint64(v___x_1357_);
v___x_1359_ = lean_uint64_of_nat(v_snd_1353_);
v___x_1360_ = lean_uint64_mix_hash(v___x_1358_, v___x_1359_);
v___x_1361_ = 32ULL;
v___x_1362_ = lean_uint64_shift_right(v___x_1360_, v___x_1361_);
v_fold_1363_ = lean_uint64_xor(v___x_1360_, v___x_1362_);
v___x_1364_ = 16ULL;
v___x_1365_ = lean_uint64_shift_right(v_fold_1363_, v___x_1364_);
v___x_1366_ = lean_uint64_xor(v_fold_1363_, v___x_1365_);
v___x_1367_ = lean_uint64_to_usize(v___x_1366_);
v___x_1368_ = lean_usize_of_nat(v___x_1354_);
v___x_1369_ = ((size_t)1ULL);
v___x_1370_ = lean_usize_sub(v___x_1368_, v___x_1369_);
v___x_1371_ = lean_usize_land(v___x_1367_, v___x_1370_);
v___x_1372_ = lean_array_uget_borrowed(v_buckets_1351_, v___x_1371_);
v___x_1373_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(v_a_1350_, v___x_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_m_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(v_m_1374_, v_a_1375_);
lean_dec_ref(v_a_1375_);
lean_dec_ref(v_m_1374_);
return v_res_1376_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l_Array_instInhabited___redArg();
return v___x_1377_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1381_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3));
v___x_1382_ = lean_unsigned_to_nat(12u);
v___x_1383_ = lean_unsigned_to_nat(234u);
v___x_1384_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2));
v___x_1385_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_1386_ = l_mkPanicMessageWithDecl(v___x_1385_, v___x_1384_, v___x_1383_, v___x_1382_, v___x_1381_);
return v___x_1386_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1390_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_1391_ = lean_unsigned_to_nat(67u);
v___x_1392_ = lean_unsigned_to_nat(35u);
v___x_1393_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1));
v___x_1394_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0));
v___x_1395_ = l_mkPanicMessageWithDecl(v___x_1394_, v___x_1393_, v___x_1392_, v___x_1391_, v___x_1390_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(lean_object* v_n_1396_, lean_object* v_varDeps_1397_, lean_object* v_xs_1398_, lean_object* v_e_1399_, lean_object* v_offset_1400_, lean_object* v___y_1401_, uint8_t v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
switch(lean_obj_tag(v_e_1399_))
{
case 5:
{
lean_object* v_fn_1405_; lean_object* v_arg_1406_; lean_object* v___x_1407_; 
v_fn_1405_ = lean_ctor_get(v_e_1399_, 0);
v_arg_1406_ = lean_ctor_get(v_e_1399_, 1);
lean_inc(v_offset_1400_);
lean_inc_ref(v_fn_1405_);
v___x_1407_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_fn_1405_, v_offset_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v_a_1409_; lean_object* v_fst_1410_; lean_object* v_snd_1411_; lean_object* v___x_1412_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
v_a_1409_ = lean_ctor_get(v___x_1407_, 1);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1407_, 2);
v_fst_1410_ = lean_ctor_get(v_a_1408_, 0);
lean_inc(v_fst_1410_);
v_snd_1411_ = lean_ctor_get(v_a_1408_, 1);
lean_inc(v_snd_1411_);
lean_dec(v_a_1408_);
lean_inc_ref(v_arg_1406_);
v___x_1412_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_arg_1406_, v_offset_1400_, v_snd_1411_, v___y_1402_, v___y_1403_, v_a_1409_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1438_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
v_a_1414_ = lean_ctor_get(v___x_1412_, 1);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1416_ = v___x_1412_;
v_isShared_1417_ = v_isSharedCheck_1438_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_inc(v_a_1413_);
lean_dec(v___x_1412_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1438_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v_fst_1418_; lean_object* v_snd_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1437_; 
v_fst_1418_ = lean_ctor_get(v_a_1413_, 0);
v_snd_1419_ = lean_ctor_get(v_a_1413_, 1);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_a_1413_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1421_ = v_a_1413_;
v_isShared_1422_ = v_isSharedCheck_1437_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_snd_1419_);
lean_inc(v_fst_1418_);
lean_dec(v_a_1413_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1437_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
size_t v___x_1423_; size_t v___x_1424_; uint8_t v___x_1425_; 
v___x_1423_ = lean_ptr_addr(v_fn_1405_);
v___x_1424_ = lean_ptr_addr(v_fst_1410_);
v___x_1425_ = lean_usize_dec_eq(v___x_1423_, v___x_1424_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; 
lean_del_object(v___x_1421_);
lean_del_object(v___x_1416_);
lean_dec_ref_known(v_e_1399_, 2);
v___x_1426_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(v_fst_1410_, v_fst_1418_, v_snd_1419_, v___y_1402_, v___y_1403_, v_a_1414_);
return v___x_1426_;
}
else
{
size_t v___x_1427_; size_t v___x_1428_; uint8_t v___x_1429_; 
v___x_1427_ = lean_ptr_addr(v_arg_1406_);
v___x_1428_ = lean_ptr_addr(v_fst_1418_);
v___x_1429_ = lean_usize_dec_eq(v___x_1427_, v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; 
lean_del_object(v___x_1421_);
lean_del_object(v___x_1416_);
lean_dec_ref_known(v_e_1399_, 2);
v___x_1430_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(v_fst_1410_, v_fst_1418_, v_snd_1419_, v___y_1402_, v___y_1403_, v_a_1414_);
return v___x_1430_;
}
else
{
lean_object* v___x_1432_; 
lean_dec(v_fst_1418_);
lean_dec(v_fst_1410_);
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 0, v_e_1399_);
v___x_1432_ = v___x_1421_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_e_1399_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_snd_1419_);
v___x_1432_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
lean_object* v___x_1434_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1432_);
v___x_1434_ = v___x_1416_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_a_1414_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1410_);
lean_dec_ref_known(v_e_1399_, 2);
return v___x_1412_;
}
}
else
{
lean_dec_ref_known(v_e_1399_, 2);
lean_dec(v_offset_1400_);
return v___x_1407_;
}
}
case 6:
{
lean_object* v_binderName_1439_; lean_object* v_binderType_1440_; lean_object* v_body_1441_; uint8_t v_binderInfo_1442_; lean_object* v___x_1443_; 
v_binderName_1439_ = lean_ctor_get(v_e_1399_, 0);
v_binderType_1440_ = lean_ctor_get(v_e_1399_, 1);
v_body_1441_ = lean_ctor_get(v_e_1399_, 2);
v_binderInfo_1442_ = lean_ctor_get_uint8(v_e_1399_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1400_);
lean_inc_ref(v_binderType_1440_);
v___x_1443_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_binderType_1440_, v_offset_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v_a_1445_; lean_object* v_fst_1446_; lean_object* v_snd_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
v_a_1445_ = lean_ctor_get(v___x_1443_, 1);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1443_, 2);
v_fst_1446_ = lean_ctor_get(v_a_1444_, 0);
lean_inc(v_fst_1446_);
v_snd_1447_ = lean_ctor_get(v_a_1444_, 1);
lean_inc(v_snd_1447_);
lean_dec(v_a_1444_);
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_nat_add(v_offset_1400_, v___x_1448_);
lean_dec(v_offset_1400_);
lean_inc_ref(v_body_1441_);
v___x_1450_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_body_1441_, v___x_1449_, v_snd_1447_, v___y_1402_, v___y_1403_, v_a_1445_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1476_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_a_1452_ = lean_ctor_get(v___x_1450_, 1);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1454_ = v___x_1450_;
v_isShared_1455_ = v_isSharedCheck_1476_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1476_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v_fst_1456_; lean_object* v_snd_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1475_; 
v_fst_1456_ = lean_ctor_get(v_a_1451_, 0);
v_snd_1457_ = lean_ctor_get(v_a_1451_, 1);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_a_1451_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1459_ = v_a_1451_;
v_isShared_1460_ = v_isSharedCheck_1475_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_snd_1457_);
lean_inc(v_fst_1456_);
lean_dec(v_a_1451_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1475_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
size_t v___x_1461_; size_t v___x_1462_; uint8_t v___x_1463_; 
v___x_1461_ = lean_ptr_addr(v_binderType_1440_);
v___x_1462_ = lean_ptr_addr(v_fst_1446_);
v___x_1463_ = lean_usize_dec_eq(v___x_1461_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
lean_inc(v_binderName_1439_);
lean_del_object(v___x_1459_);
lean_del_object(v___x_1454_);
lean_dec_ref_known(v_e_1399_, 3);
v___x_1464_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(v_binderName_1439_, v_binderInfo_1442_, v_fst_1446_, v_fst_1456_, v_snd_1457_, v___y_1402_, v___y_1403_, v_a_1452_);
return v___x_1464_;
}
else
{
size_t v___x_1465_; size_t v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = lean_ptr_addr(v_body_1441_);
v___x_1466_ = lean_ptr_addr(v_fst_1456_);
v___x_1467_ = lean_usize_dec_eq(v___x_1465_, v___x_1466_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; 
lean_inc(v_binderName_1439_);
lean_del_object(v___x_1459_);
lean_del_object(v___x_1454_);
lean_dec_ref_known(v_e_1399_, 3);
v___x_1468_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(v_binderName_1439_, v_binderInfo_1442_, v_fst_1446_, v_fst_1456_, v_snd_1457_, v___y_1402_, v___y_1403_, v_a_1452_);
return v___x_1468_;
}
else
{
lean_object* v___x_1470_; 
lean_dec(v_fst_1456_);
lean_dec(v_fst_1446_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v_e_1399_);
v___x_1470_ = v___x_1459_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_e_1399_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v_snd_1457_);
v___x_1470_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
lean_object* v___x_1472_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 0, v___x_1470_);
v___x_1472_ = v___x_1454_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1470_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_a_1452_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1446_);
lean_dec_ref_known(v_e_1399_, 3);
return v___x_1450_;
}
}
else
{
lean_dec_ref_known(v_e_1399_, 3);
lean_dec(v_offset_1400_);
return v___x_1443_;
}
}
case 7:
{
lean_object* v_binderName_1477_; lean_object* v_binderType_1478_; lean_object* v_body_1479_; uint8_t v_binderInfo_1480_; lean_object* v___x_1481_; 
v_binderName_1477_ = lean_ctor_get(v_e_1399_, 0);
v_binderType_1478_ = lean_ctor_get(v_e_1399_, 1);
v_body_1479_ = lean_ctor_get(v_e_1399_, 2);
v_binderInfo_1480_ = lean_ctor_get_uint8(v_e_1399_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1400_);
lean_inc_ref(v_binderType_1478_);
v___x_1481_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_binderType_1478_, v_offset_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v_a_1483_; lean_object* v_fst_1484_; lean_object* v_snd_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
v_a_1483_ = lean_ctor_get(v___x_1481_, 1);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1481_, 2);
v_fst_1484_ = lean_ctor_get(v_a_1482_, 0);
lean_inc(v_fst_1484_);
v_snd_1485_ = lean_ctor_get(v_a_1482_, 1);
lean_inc(v_snd_1485_);
lean_dec(v_a_1482_);
v___x_1486_ = lean_unsigned_to_nat(1u);
v___x_1487_ = lean_nat_add(v_offset_1400_, v___x_1486_);
lean_dec(v_offset_1400_);
lean_inc_ref(v_body_1479_);
v___x_1488_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_body_1479_, v___x_1487_, v_snd_1485_, v___y_1402_, v___y_1403_, v_a_1483_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1514_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_a_1490_ = lean_ctor_get(v___x_1488_, 1);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1492_ = v___x_1488_;
v_isShared_1493_ = v_isSharedCheck_1514_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1514_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v_fst_1494_; lean_object* v_snd_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1513_; 
v_fst_1494_ = lean_ctor_get(v_a_1489_, 0);
v_snd_1495_ = lean_ctor_get(v_a_1489_, 1);
v_isSharedCheck_1513_ = !lean_is_exclusive(v_a_1489_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1497_ = v_a_1489_;
v_isShared_1498_ = v_isSharedCheck_1513_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_snd_1495_);
lean_inc(v_fst_1494_);
lean_dec(v_a_1489_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1513_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
size_t v___x_1499_; size_t v___x_1500_; uint8_t v___x_1501_; 
v___x_1499_ = lean_ptr_addr(v_binderType_1478_);
v___x_1500_ = lean_ptr_addr(v_fst_1484_);
v___x_1501_ = lean_usize_dec_eq(v___x_1499_, v___x_1500_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; 
lean_inc(v_binderName_1477_);
lean_del_object(v___x_1497_);
lean_del_object(v___x_1492_);
lean_dec_ref_known(v_e_1399_, 3);
v___x_1502_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(v_binderName_1477_, v_binderInfo_1480_, v_fst_1484_, v_fst_1494_, v_snd_1495_, v___y_1402_, v___y_1403_, v_a_1490_);
return v___x_1502_;
}
else
{
size_t v___x_1503_; size_t v___x_1504_; uint8_t v___x_1505_; 
v___x_1503_ = lean_ptr_addr(v_body_1479_);
v___x_1504_ = lean_ptr_addr(v_fst_1494_);
v___x_1505_ = lean_usize_dec_eq(v___x_1503_, v___x_1504_);
if (v___x_1505_ == 0)
{
lean_object* v___x_1506_; 
lean_inc(v_binderName_1477_);
lean_del_object(v___x_1497_);
lean_del_object(v___x_1492_);
lean_dec_ref_known(v_e_1399_, 3);
v___x_1506_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(v_binderName_1477_, v_binderInfo_1480_, v_fst_1484_, v_fst_1494_, v_snd_1495_, v___y_1402_, v___y_1403_, v_a_1490_);
return v___x_1506_;
}
else
{
lean_object* v___x_1508_; 
lean_dec(v_fst_1494_);
lean_dec(v_fst_1484_);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v_e_1399_);
v___x_1508_ = v___x_1497_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_e_1399_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_snd_1495_);
v___x_1508_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_object* v___x_1510_; 
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 0, v___x_1508_);
v___x_1510_ = v___x_1492_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1508_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_a_1490_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1484_);
lean_dec_ref_known(v_e_1399_, 3);
return v___x_1488_;
}
}
else
{
lean_dec_ref_known(v_e_1399_, 3);
lean_dec(v_offset_1400_);
return v___x_1481_;
}
}
case 8:
{
lean_object* v_declName_1515_; lean_object* v_type_1516_; lean_object* v_value_1517_; lean_object* v_body_1518_; uint8_t v_nondep_1519_; lean_object* v___x_1520_; 
v_declName_1515_ = lean_ctor_get(v_e_1399_, 0);
v_type_1516_ = lean_ctor_get(v_e_1399_, 1);
v_value_1517_ = lean_ctor_get(v_e_1399_, 2);
v_body_1518_ = lean_ctor_get(v_e_1399_, 3);
v_nondep_1519_ = lean_ctor_get_uint8(v_e_1399_, sizeof(void*)*4 + 8);
lean_inc(v_offset_1400_);
lean_inc_ref(v_type_1516_);
v___x_1520_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_type_1516_, v_offset_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v_a_1522_; lean_object* v_fst_1523_; lean_object* v_snd_1524_; lean_object* v___x_1525_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
v_a_1522_ = lean_ctor_get(v___x_1520_, 1);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1520_, 2);
v_fst_1523_ = lean_ctor_get(v_a_1521_, 0);
lean_inc(v_fst_1523_);
v_snd_1524_ = lean_ctor_get(v_a_1521_, 1);
lean_inc(v_snd_1524_);
lean_dec(v_a_1521_);
lean_inc(v_offset_1400_);
lean_inc_ref(v_value_1517_);
v___x_1525_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_value_1517_, v_offset_1400_, v_snd_1524_, v___y_1402_, v___y_1403_, v_a_1522_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v_a_1527_; lean_object* v_fst_1528_; lean_object* v_snd_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
v_a_1527_ = lean_ctor_get(v___x_1525_, 1);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1525_, 2);
v_fst_1528_ = lean_ctor_get(v_a_1526_, 0);
lean_inc(v_fst_1528_);
v_snd_1529_ = lean_ctor_get(v_a_1526_, 1);
lean_inc(v_snd_1529_);
lean_dec(v_a_1526_);
v___x_1530_ = lean_unsigned_to_nat(1u);
v___x_1531_ = lean_nat_add(v_offset_1400_, v___x_1530_);
lean_dec(v_offset_1400_);
lean_inc_ref(v_body_1518_);
v___x_1532_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_body_1518_, v___x_1531_, v_snd_1529_, v___y_1402_, v___y_1403_, v_a_1527_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1562_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_a_1534_ = lean_ctor_get(v___x_1532_, 1);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1536_ = v___x_1532_;
v_isShared_1537_ = v_isSharedCheck_1562_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1562_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v_fst_1538_; lean_object* v_snd_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1561_; 
v_fst_1538_ = lean_ctor_get(v_a_1533_, 0);
v_snd_1539_ = lean_ctor_get(v_a_1533_, 1);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_a_1533_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1541_ = v_a_1533_;
v_isShared_1542_ = v_isSharedCheck_1561_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_snd_1539_);
lean_inc(v_fst_1538_);
lean_dec(v_a_1533_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1561_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
size_t v___x_1543_; size_t v___x_1544_; uint8_t v___x_1545_; 
v___x_1543_ = lean_ptr_addr(v_type_1516_);
v___x_1544_ = lean_ptr_addr(v_fst_1523_);
v___x_1545_ = lean_usize_dec_eq(v___x_1543_, v___x_1544_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; 
lean_inc(v_declName_1515_);
lean_del_object(v___x_1541_);
lean_del_object(v___x_1536_);
lean_dec_ref_known(v_e_1399_, 4);
v___x_1546_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_declName_1515_, v_fst_1523_, v_fst_1528_, v_fst_1538_, v_nondep_1519_, v_snd_1539_, v___y_1402_, v___y_1403_, v_a_1534_);
return v___x_1546_;
}
else
{
size_t v___x_1547_; size_t v___x_1548_; uint8_t v___x_1549_; 
v___x_1547_ = lean_ptr_addr(v_value_1517_);
v___x_1548_ = lean_ptr_addr(v_fst_1528_);
v___x_1549_ = lean_usize_dec_eq(v___x_1547_, v___x_1548_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; 
lean_inc(v_declName_1515_);
lean_del_object(v___x_1541_);
lean_del_object(v___x_1536_);
lean_dec_ref_known(v_e_1399_, 4);
v___x_1550_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_declName_1515_, v_fst_1523_, v_fst_1528_, v_fst_1538_, v_nondep_1519_, v_snd_1539_, v___y_1402_, v___y_1403_, v_a_1534_);
return v___x_1550_;
}
else
{
size_t v___x_1551_; size_t v___x_1552_; uint8_t v___x_1553_; 
v___x_1551_ = lean_ptr_addr(v_body_1518_);
v___x_1552_ = lean_ptr_addr(v_fst_1538_);
v___x_1553_ = lean_usize_dec_eq(v___x_1551_, v___x_1552_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
lean_inc(v_declName_1515_);
lean_del_object(v___x_1541_);
lean_del_object(v___x_1536_);
lean_dec_ref_known(v_e_1399_, 4);
v___x_1554_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_declName_1515_, v_fst_1523_, v_fst_1528_, v_fst_1538_, v_nondep_1519_, v_snd_1539_, v___y_1402_, v___y_1403_, v_a_1534_);
return v___x_1554_;
}
else
{
lean_object* v___x_1556_; 
lean_dec(v_fst_1538_);
lean_dec(v_fst_1528_);
lean_dec(v_fst_1523_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v_e_1399_);
v___x_1556_ = v___x_1541_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_e_1399_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_snd_1539_);
v___x_1556_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1558_; 
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 0, v___x_1556_);
v___x_1558_ = v___x_1536_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1556_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_a_1534_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
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
lean_dec(v_fst_1528_);
lean_dec(v_fst_1523_);
lean_dec_ref_known(v_e_1399_, 4);
return v___x_1532_;
}
}
else
{
lean_dec(v_fst_1523_);
lean_dec_ref_known(v_e_1399_, 4);
lean_dec(v_offset_1400_);
return v___x_1525_;
}
}
else
{
lean_dec_ref_known(v_e_1399_, 4);
lean_dec(v_offset_1400_);
return v___x_1520_;
}
}
case 10:
{
lean_object* v_data_1563_; lean_object* v_expr_1564_; lean_object* v___x_1565_; 
v_data_1563_ = lean_ctor_get(v_e_1399_, 0);
v_expr_1564_ = lean_ctor_get(v_e_1399_, 1);
lean_inc_ref(v_expr_1564_);
v___x_1565_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_expr_1564_, v_offset_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1587_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
v_a_1567_ = lean_ctor_get(v___x_1565_, 1);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1569_ = v___x_1565_;
v_isShared_1570_ = v_isSharedCheck_1587_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_inc(v_a_1566_);
lean_dec(v___x_1565_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1587_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v_fst_1571_; lean_object* v_snd_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1586_; 
v_fst_1571_ = lean_ctor_get(v_a_1566_, 0);
v_snd_1572_ = lean_ctor_get(v_a_1566_, 1);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_a_1566_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1574_ = v_a_1566_;
v_isShared_1575_ = v_isSharedCheck_1586_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_snd_1572_);
lean_inc(v_fst_1571_);
lean_dec(v_a_1566_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1586_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
size_t v___x_1576_; size_t v___x_1577_; uint8_t v___x_1578_; 
v___x_1576_ = lean_ptr_addr(v_expr_1564_);
v___x_1577_ = lean_ptr_addr(v_fst_1571_);
v___x_1578_ = lean_usize_dec_eq(v___x_1576_, v___x_1577_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; 
lean_inc(v_data_1563_);
lean_del_object(v___x_1574_);
lean_del_object(v___x_1569_);
lean_dec_ref_known(v_e_1399_, 2);
v___x_1579_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(v_data_1563_, v_fst_1571_, v_snd_1572_, v___y_1402_, v___y_1403_, v_a_1567_);
return v___x_1579_;
}
else
{
lean_object* v___x_1581_; 
lean_dec(v_fst_1571_);
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 0, v_e_1399_);
v___x_1581_ = v___x_1574_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_e_1399_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v_snd_1572_);
v___x_1581_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1583_; 
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 0, v___x_1581_);
v___x_1583_ = v___x_1569_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_a_1567_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1399_, 2);
return v___x_1565_;
}
}
case 11:
{
lean_object* v_typeName_1588_; lean_object* v_idx_1589_; lean_object* v_struct_1590_; lean_object* v___x_1591_; 
v_typeName_1588_ = lean_ctor_get(v_e_1399_, 0);
v_idx_1589_ = lean_ctor_get(v_e_1399_, 1);
v_struct_1590_ = lean_ctor_get(v_e_1399_, 2);
lean_inc_ref(v_struct_1590_);
v___x_1591_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1396_, v_varDeps_1397_, v_xs_1398_, v_struct_1590_, v_offset_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1613_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
v_a_1593_ = lean_ctor_get(v___x_1591_, 1);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1595_ = v___x_1591_;
v_isShared_1596_ = v_isSharedCheck_1613_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_inc(v_a_1592_);
lean_dec(v___x_1591_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1613_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v_fst_1597_; lean_object* v_snd_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1612_; 
v_fst_1597_ = lean_ctor_get(v_a_1592_, 0);
v_snd_1598_ = lean_ctor_get(v_a_1592_, 1);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_a_1592_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1600_ = v_a_1592_;
v_isShared_1601_ = v_isSharedCheck_1612_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_snd_1598_);
lean_inc(v_fst_1597_);
lean_dec(v_a_1592_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1612_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
size_t v___x_1602_; size_t v___x_1603_; uint8_t v___x_1604_; 
v___x_1602_ = lean_ptr_addr(v_struct_1590_);
v___x_1603_ = lean_ptr_addr(v_fst_1597_);
v___x_1604_ = lean_usize_dec_eq(v___x_1602_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; 
lean_inc(v_idx_1589_);
lean_inc(v_typeName_1588_);
lean_del_object(v___x_1600_);
lean_del_object(v___x_1595_);
lean_dec_ref_known(v_e_1399_, 3);
v___x_1605_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(v_typeName_1588_, v_idx_1589_, v_fst_1597_, v_snd_1598_, v___y_1402_, v___y_1403_, v_a_1593_);
return v___x_1605_;
}
else
{
lean_object* v___x_1607_; 
lean_dec(v_fst_1597_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 0, v_e_1399_);
v___x_1607_ = v___x_1600_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_e_1399_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_snd_1598_);
v___x_1607_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1609_; 
if (v_isShared_1596_ == 0)
{
lean_ctor_set(v___x_1595_, 0, v___x_1607_);
v___x_1609_ = v___x_1595_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_a_1593_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1399_, 3);
return v___x_1591_;
}
}
default: 
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
lean_dec(v_offset_1400_);
lean_dec_ref(v_e_1399_);
v___x_1614_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3);
v___x_1615_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(v___x_1614_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
return v___x_1615_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(lean_object* v_n_1616_, lean_object* v_varDeps_1617_, lean_object* v_xs_1618_, lean_object* v_e_1619_, lean_object* v_offset_1620_, lean_object* v___y_1621_, uint8_t v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_key_1625_; lean_object* v_a_1627_; lean_object* v___x_1640_; 
lean_inc(v_offset_1620_);
lean_inc_ref(v_e_1619_);
v_key_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1625_, 0, v_e_1619_);
lean_ctor_set(v_key_1625_, 1, v_offset_1620_);
v___x_1640_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(v___y_1621_, v_key_1625_);
if (lean_obj_tag(v___x_1640_) == 1)
{
lean_object* v_val_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
lean_dec_ref_known(v_key_1625_, 2);
lean_dec(v_offset_1620_);
lean_dec_ref(v_e_1619_);
v_val_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_val_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1642_, 0, v_val_1641_);
lean_ctor_set(v___x_1642_, 1, v___y_1621_);
v___x_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
lean_ctor_set(v___x_1643_, 1, v___y_1624_);
return v___x_1643_;
}
else
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
lean_dec(v___x_1640_);
v___x_1644_ = l_Lean_Expr_looseBVarRange(v_e_1619_);
v___x_1645_ = lean_nat_dec_le(v___x_1644_, v_offset_1620_);
lean_dec(v___x_1644_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lean_Expr_getAppFn(v_e_1619_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_deBruijnIndex_1647_; uint8_t v___x_1648_; 
v_deBruijnIndex_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_deBruijnIndex_1647_);
lean_dec_ref_known(v___x_1646_, 1);
v___x_1648_ = lean_nat_dec_le(v_offset_1620_, v_deBruijnIndex_1647_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; 
lean_dec(v_deBruijnIndex_1647_);
lean_dec(v_offset_1620_);
v___x_1649_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
return v___x_1649_;
}
else
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = lean_nat_add(v_offset_1620_, v_n_1616_);
v___x_1651_ = lean_nat_dec_lt(v_deBruijnIndex_1647_, v___x_1650_);
lean_dec(v___x_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
lean_dec(v_offset_1620_);
lean_dec_ref(v_e_1619_);
v___x_1652_ = lean_nat_sub(v_deBruijnIndex_1647_, v_n_1616_);
lean_dec(v_deBruijnIndex_1647_);
v___x_1653_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(v___x_1652_, v___y_1624_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v_a_1655_; lean_object* v___x_1656_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
v_a_1655_ = lean_ctor_get(v___x_1653_, 1);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1653_, 2);
v___x_1656_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_a_1654_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1655_);
return v___x_1656_;
}
else
{
lean_object* v_a_1657_; lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_dec_ref_known(v_key_1625_, 2);
lean_dec_ref(v___y_1621_);
v_a_1657_ = lean_ctor_get(v___x_1653_, 0);
v_a_1658_ = lean_ctor_get(v___x_1653_, 1);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1653_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_inc(v_a_1657_);
lean_dec(v___x_1653_);
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
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1657_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_a_1658_);
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
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v_i_1670_; lean_object* v___x_1671_; lean_object* v_expectedNumArgs_1672_; lean_object* v_numArgs_1673_; uint8_t v___x_1674_; 
v___x_1666_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0);
v___x_1667_ = lean_nat_sub(v_deBruijnIndex_1647_, v_offset_1620_);
lean_dec(v_deBruijnIndex_1647_);
v___x_1668_ = lean_nat_sub(v_n_1616_, v___x_1667_);
lean_dec(v___x_1667_);
v___x_1669_ = lean_unsigned_to_nat(1u);
v_i_1670_ = lean_nat_sub(v___x_1668_, v___x_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_array_get_borrowed(v___x_1666_, v_varDeps_1617_, v_i_1670_);
v_expectedNumArgs_1672_ = lean_array_get_size(v___x_1671_);
v_numArgs_1673_ = l_Lean_Expr_getAppNumArgs(v_e_1619_);
v___x_1674_ = lean_nat_dec_lt(v_expectedNumArgs_1672_, v_numArgs_1673_);
if (v___x_1674_ == 0)
{
uint8_t v___x_1675_; 
v___x_1675_ = lean_nat_dec_eq(v_numArgs_1673_, v_expectedNumArgs_1672_);
lean_dec(v_numArgs_1673_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
lean_dec(v_i_1670_);
v___x_1676_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4);
v___x_1677_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(v___x_1676_, v___y_1622_, v___y_1623_, v___y_1624_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_a_1678_);
if (lean_obj_tag(v_a_1678_) == 1)
{
lean_object* v_a_1679_; lean_object* v_val_1680_; lean_object* v___x_1681_; 
lean_dec(v_offset_1620_);
lean_dec_ref(v_e_1619_);
v_a_1679_ = lean_ctor_get(v___x_1677_, 1);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1677_, 2);
v_val_1680_ = lean_ctor_get(v_a_1678_, 0);
lean_inc(v_val_1680_);
lean_dec_ref_known(v_a_1678_, 1);
v___x_1681_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_val_1680_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1679_);
return v___x_1681_;
}
else
{
lean_object* v_a_1682_; 
lean_dec(v_a_1678_);
v_a_1682_ = lean_ctor_get(v___x_1677_, 1);
lean_inc(v_a_1682_);
lean_dec_ref_known(v___x_1677_, 2);
v_a_1627_ = v_a_1682_;
goto v___jp_1626_;
}
}
else
{
lean_object* v_a_1683_; lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec_ref_known(v_key_1625_, 2);
lean_dec_ref(v___y_1621_);
lean_dec(v_offset_1620_);
lean_dec_ref(v_e_1619_);
v_a_1683_ = lean_ctor_get(v___x_1677_, 0);
v_a_1684_ = lean_ctor_get(v___x_1677_, 1);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1677_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_inc(v_a_1683_);
lean_dec(v___x_1677_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1683_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
lean_dec(v_offset_1620_);
lean_dec_ref(v_e_1619_);
v___x_1692_ = lean_array_fget_borrowed(v_xs_1618_, v_i_1670_);
lean_dec(v_i_1670_);
lean_inc(v___x_1692_);
v___x_1693_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v___x_1692_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
return v___x_1693_;
}
}
else
{
lean_dec(v_numArgs_1673_);
lean_dec(v_i_1670_);
v_a_1627_ = v___y_1624_;
goto v___jp_1626_;
}
}
}
}
else
{
lean_dec_ref(v___x_1646_);
v_a_1627_ = v___y_1624_;
goto v___jp_1626_;
}
}
else
{
lean_object* v___x_1694_; 
lean_dec(v_offset_1620_);
v___x_1694_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
return v___x_1694_;
}
}
v___jp_1626_:
{
switch(lean_obj_tag(v_e_1619_))
{
case 9:
{
lean_object* v___x_1628_; 
lean_dec(v_offset_1620_);
v___x_1628_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
return v___x_1628_;
}
case 2:
{
lean_object* v___x_1629_; 
lean_dec(v_offset_1620_);
v___x_1629_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
return v___x_1629_;
}
case 0:
{
lean_object* v___x_1630_; 
lean_dec(v_offset_1620_);
v___x_1630_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
return v___x_1630_;
}
case 1:
{
lean_object* v___x_1631_; 
lean_dec(v_offset_1620_);
v___x_1631_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
return v___x_1631_;
}
case 4:
{
lean_object* v___x_1632_; 
lean_dec(v_offset_1620_);
v___x_1632_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
return v___x_1632_;
}
case 3:
{
lean_object* v___x_1633_; 
lean_dec(v_offset_1620_);
v___x_1633_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_e_1619_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
return v___x_1633_;
}
default: 
{
lean_object* v___x_1634_; 
v___x_1634_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(v_n_1616_, v_varDeps_1617_, v_xs_1618_, v_e_1619_, v_offset_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v_a_1627_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v_a_1636_; lean_object* v_fst_1637_; lean_object* v_snd_1638_; lean_object* v___x_1639_; 
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_a_1635_);
v_a_1636_ = lean_ctor_get(v___x_1634_, 1);
lean_inc(v_a_1636_);
lean_dec_ref_known(v___x_1634_, 2);
v_fst_1637_ = lean_ctor_get(v_a_1635_, 0);
lean_inc(v_fst_1637_);
v_snd_1638_ = lean_ctor_get(v_a_1635_, 1);
lean_inc(v_snd_1638_);
lean_dec(v_a_1635_);
v___x_1639_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1625_, v_fst_1637_, v_snd_1638_, v___y_1622_, v___y_1623_, v_a_1636_);
return v___x_1639_;
}
else
{
lean_dec_ref_known(v_key_1625_, 2);
return v___x_1634_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___boxed(lean_object* v_n_1695_, lean_object* v_varDeps_1696_, lean_object* v_xs_1697_, lean_object* v_e_1698_, lean_object* v_offset_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
uint8_t v___y_25817__boxed_1704_; lean_object* v_res_1705_; 
v___y_25817__boxed_1704_ = lean_unbox(v___y_1701_);
v_res_1705_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1695_, v_varDeps_1696_, v_xs_1697_, v_e_1698_, v_offset_1699_, v___y_1700_, v___y_25817__boxed_1704_, v___y_1702_, v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec_ref(v_xs_1697_);
lean_dec_ref(v_varDeps_1696_);
lean_dec(v_n_1695_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___boxed(lean_object* v_n_1706_, lean_object* v_varDeps_1707_, lean_object* v_xs_1708_, lean_object* v_e_1709_, lean_object* v_offset_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
uint8_t v___y_25893__boxed_1715_; lean_object* v_res_1716_; 
v___y_25893__boxed_1715_ = lean_unbox(v___y_1712_);
v_res_1716_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(v_n_1706_, v_varDeps_1707_, v_xs_1708_, v_e_1709_, v_offset_1710_, v___y_1711_, v___y_25893__boxed_1715_, v___y_1713_, v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec_ref(v_xs_1708_);
lean_dec_ref(v_varDeps_1707_);
lean_dec(v_n_1706_);
return v_res_1716_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1717_ = lean_box(0);
v___x_1718_ = lean_unsigned_to_nat(16u);
v___x_1719_ = lean_mk_array(v___x_1718_, v___x_1717_);
return v___x_1719_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1720_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0);
v___x_1721_ = lean_unsigned_to_nat(0u);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
lean_ctor_set(v___x_1722_, 1, v___x_1720_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0(lean_object* v_e_1723_, lean_object* v_n_1724_, lean_object* v_varDeps_1725_, lean_object* v_xs_1726_, uint8_t v_debug_1727_, lean_object* v___x_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v___x_1731_; lean_object* v_a_1733_; lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1731_ = lean_unsigned_to_nat(0u);
v___x_1761_ = l_Lean_Expr_looseBVarRange(v_e_1723_);
v___x_1762_ = lean_nat_dec_le(v___x_1761_, v___x_1731_);
lean_dec(v___x_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Expr_getAppFn(v_e_1723_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_deBruijnIndex_1764_; uint8_t v___x_1765_; 
v_deBruijnIndex_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_deBruijnIndex_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = lean_nat_dec_le(v___x_1731_, v_deBruijnIndex_1764_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; 
lean_dec(v_deBruijnIndex_1764_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v_e_1723_);
lean_ctor_set(v___x_1766_, 1, v___y_1730_);
return v___x_1766_;
}
else
{
uint8_t v___x_1767_; 
v___x_1767_ = lean_nat_dec_lt(v_deBruijnIndex_1764_, v_n_1724_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec_ref(v_e_1723_);
v___x_1768_ = lean_nat_sub(v_deBruijnIndex_1764_, v_n_1724_);
lean_dec(v_deBruijnIndex_1764_);
v___x_1769_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(v___x_1768_, v___y_1730_);
return v___x_1769_;
}
else
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v_i_1772_; lean_object* v___x_1773_; lean_object* v_expectedNumArgs_1774_; lean_object* v_numArgs_1775_; uint8_t v___x_1776_; 
v___x_1770_ = lean_nat_sub(v_n_1724_, v_deBruijnIndex_1764_);
lean_dec(v_deBruijnIndex_1764_);
v___x_1771_ = lean_unsigned_to_nat(1u);
v_i_1772_ = lean_nat_sub(v___x_1770_, v___x_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_array_get_borrowed(v___x_1728_, v_varDeps_1725_, v_i_1772_);
v_expectedNumArgs_1774_ = lean_array_get_size(v___x_1773_);
v_numArgs_1775_ = l_Lean_Expr_getAppNumArgs(v_e_1723_);
v___x_1776_ = lean_nat_dec_lt(v_expectedNumArgs_1774_, v_numArgs_1775_);
if (v___x_1776_ == 0)
{
uint8_t v___x_1777_; 
v___x_1777_ = lean_nat_dec_eq(v_numArgs_1775_, v_expectedNumArgs_1774_);
lean_dec(v_numArgs_1775_);
if (v___x_1777_ == 0)
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
lean_dec(v_i_1772_);
v___x_1778_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4);
v___x_1779_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(v___x_1778_, v_debug_1727_, v___y_1729_, v___y_1730_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
if (lean_obj_tag(v_a_1780_) == 1)
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1789_; 
lean_dec_ref(v_e_1723_);
v_a_1781_ = lean_ctor_get(v___x_1779_, 1);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1789_ == 0)
{
lean_object* v_unused_1790_; 
v_unused_1790_ = lean_ctor_get(v___x_1779_, 0);
lean_dec(v_unused_1790_);
v___x_1783_ = v___x_1779_;
v_isShared_1784_ = v_isSharedCheck_1789_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1779_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1789_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v_val_1785_; lean_object* v___x_1787_; 
v_val_1785_ = lean_ctor_get(v_a_1780_, 0);
lean_inc(v_val_1785_);
lean_dec_ref_known(v_a_1780_, 1);
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 0, v_val_1785_);
v___x_1787_ = v___x_1783_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_val_1785_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v_a_1781_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
else
{
lean_object* v_a_1791_; 
lean_dec(v_a_1780_);
v_a_1791_ = lean_ctor_get(v___x_1779_, 1);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1779_, 2);
v_a_1733_ = v_a_1791_;
goto v___jp_1732_;
}
}
else
{
lean_object* v_a_1792_; lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec_ref(v_e_1723_);
v_a_1792_ = lean_ctor_get(v___x_1779_, 0);
v_a_1793_ = lean_ctor_get(v___x_1779_, 1);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1779_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_inc(v_a_1792_);
lean_dec(v___x_1779_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1792_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
else
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec_ref(v_e_1723_);
v___x_1801_ = lean_array_fget_borrowed(v_xs_1726_, v_i_1772_);
lean_dec(v_i_1772_);
lean_inc(v___x_1801_);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
lean_ctor_set(v___x_1802_, 1, v___y_1730_);
return v___x_1802_;
}
}
else
{
lean_dec(v_numArgs_1775_);
lean_dec(v_i_1772_);
v_a_1733_ = v___y_1730_;
goto v___jp_1732_;
}
}
}
}
else
{
lean_dec_ref(v___x_1763_);
v_a_1733_ = v___y_1730_;
goto v___jp_1732_;
}
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1803_, 0, v_e_1723_);
lean_ctor_set(v___x_1803_, 1, v___y_1730_);
return v___x_1803_;
}
v___jp_1732_:
{
switch(lean_obj_tag(v_e_1723_))
{
case 9:
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1734_, 0, v_e_1723_);
lean_ctor_set(v___x_1734_, 1, v_a_1733_);
return v___x_1734_;
}
case 2:
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1735_, 0, v_e_1723_);
lean_ctor_set(v___x_1735_, 1, v_a_1733_);
return v___x_1735_;
}
case 0:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v_e_1723_);
lean_ctor_set(v___x_1736_, 1, v_a_1733_);
return v___x_1736_;
}
case 1:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1737_, 0, v_e_1723_);
lean_ctor_set(v___x_1737_, 1, v_a_1733_);
return v___x_1737_;
}
case 4:
{
lean_object* v___x_1738_; 
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v_e_1723_);
lean_ctor_set(v___x_1738_, 1, v_a_1733_);
return v___x_1738_;
}
case 3:
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1739_, 0, v_e_1723_);
lean_ctor_set(v___x_1739_, 1, v_a_1733_);
return v___x_1739_;
}
default: 
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1);
v___x_1741_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(v_n_1724_, v_varDeps_1725_, v_xs_1726_, v_e_1723_, v___x_1731_, v___x_1740_, v_debug_1727_, v___y_1729_, v_a_1733_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1751_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
v_a_1743_ = lean_ctor_get(v___x_1741_, 1);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1745_ = v___x_1741_;
v_isShared_1746_ = v_isSharedCheck_1751_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_inc(v_a_1742_);
lean_dec(v___x_1741_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1751_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v_fst_1747_; lean_object* v___x_1749_; 
v_fst_1747_ = lean_ctor_get(v_a_1742_, 0);
lean_inc(v_fst_1747_);
lean_dec(v_a_1742_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v_fst_1747_);
v___x_1749_ = v___x_1745_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_fst_1747_);
lean_ctor_set(v_reuseFailAlloc_1750_, 1, v_a_1743_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
else
{
lean_object* v_a_1752_; lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
v_a_1752_ = lean_ctor_get(v___x_1741_, 0);
v_a_1753_ = lean_ctor_get(v___x_1741_, 1);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1741_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_inc(v_a_1752_);
lean_dec(v___x_1741_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1752_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_a_1753_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___boxed(lean_object* v_e_1804_, lean_object* v_n_1805_, lean_object* v_varDeps_1806_, lean_object* v_xs_1807_, lean_object* v_debug_1808_, lean_object* v___x_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
uint8_t v_debug_boxed_1812_; lean_object* v_res_1813_; 
v_debug_boxed_1812_ = lean_unbox(v_debug_1808_);
v_res_1813_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0(v_e_1804_, v_n_1805_, v_varDeps_1806_, v_xs_1807_, v_debug_boxed_1812_, v___x_1809_, v___y_1810_, v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_xs_1807_);
lean_dec_ref(v_varDeps_1806_);
lean_dec(v_n_1805_);
return v_res_1813_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2(void){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1816_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_1817_ = lean_unsigned_to_nat(16u);
v___x_1818_ = lean_unsigned_to_nat(62u);
v___x_1819_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1));
v___x_1820_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0));
v___x_1821_ = l_mkPanicMessageWithDecl(v___x_1820_, v___x_1819_, v___x_1818_, v___x_1817_, v___x_1816_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(lean_object* v_e_1822_, lean_object* v_xs_1823_, lean_object* v_varDeps_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_){
_start:
{
lean_object* v___x_1832_; lean_object* v_n_1833_; lean_object* v___x_1834_; uint8_t v_debug_1835_; lean_object* v___x_1836_; lean_object* v___f_1837_; lean_object* v___x_1838_; lean_object* v_env_1839_; uint8_t v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1832_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0);
v_n_1833_ = lean_array_get_size(v_xs_1823_);
v___x_1834_ = lean_st_ref_get(v_a_1826_);
v_debug_1835_ = lean_ctor_get_uint8(v___x_1834_, sizeof(void*)*11);
lean_dec(v___x_1834_);
v___x_1836_ = lean_box(v_debug_1835_);
v___f_1837_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___boxed), 8, 6);
lean_closure_set(v___f_1837_, 0, v_e_1822_);
lean_closure_set(v___f_1837_, 1, v_n_1833_);
lean_closure_set(v___f_1837_, 2, v_varDeps_1824_);
lean_closure_set(v___f_1837_, 3, v_xs_1823_);
lean_closure_set(v___f_1837_, 4, v___x_1836_);
lean_closure_set(v___f_1837_, 5, v___x_1832_);
v___x_1838_ = lean_st_ref_get(v_a_1830_);
v_env_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc_ref(v_env_1839_);
lean_dec(v___x_1838_);
v___x_1840_ = 0;
v___x_1841_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1841_, 0, v_env_1839_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*1, v___x_1840_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*1 + 1, v___x_1840_);
v___x_1842_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_1837_, v___x_1841_, v_a_1826_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1853_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1853_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1853_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
if (lean_obj_tag(v_a_1843_) == 0)
{
lean_object* v___x_1847_; lean_object* v___x_1848_; 
lean_dec_ref_known(v_a_1843_, 1);
lean_del_object(v___x_1845_);
v___x_1847_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2);
v___x_1848_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v___x_1847_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_);
return v___x_1848_;
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; 
v_a_1849_ = lean_ctor_get(v_a_1843_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v_a_1843_, 1);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v_a_1849_);
v___x_1851_ = v___x_1845_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1849_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
v_a_1854_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1842_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1842_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___boxed(lean_object* v_e_1862_, lean_object* v_xs_1863_, lean_object* v_varDeps_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(v_e_1862_, v_xs_1863_, v_varDeps_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_);
lean_dec(v_a_1870_);
lean_dec_ref(v_a_1869_);
lean_dec(v_a_1868_);
lean_dec_ref(v_a_1867_);
lean_dec(v_a_1866_);
lean_dec_ref(v_a_1865_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_1873_, lean_object* v_m_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(v_m_1874_, v_a_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1877_, lean_object* v_m_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4(v_00_u03b2_1877_, v_m_1878_, v_a_1879_);
lean_dec_ref(v_a_1879_);
lean_dec_ref(v_m_1878_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12(lean_object* v_00_u03b2_1881_, lean_object* v_a_1882_, lean_object* v_x_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(v_a_1882_, v_x_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___boxed(lean_object* v_00_u03b2_1885_, lean_object* v_a_1886_, lean_object* v_x_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12(v_00_u03b2_1885_, v_a_1886_, v_x_1887_);
lean_dec(v_x_1887_);
lean_dec_ref(v_a_1886_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(lean_object* v_name_1889_, lean_object* v_type_1890_, lean_object* v_val_1891_, lean_object* v_k_1892_, uint8_t v_nondep_1893_, uint8_t v_kind_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v___f_1902_; lean_object* v___x_1903_; 
lean_inc(v___y_1896_);
lean_inc_ref(v___y_1895_);
v___f_1902_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3_spec__3___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1902_, 0, v_k_1892_);
lean_closure_set(v___f_1902_, 1, v___y_1895_);
lean_closure_set(v___f_1902_, 2, v___y_1896_);
v___x_1903_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1889_, v_type_1890_, v_val_1891_, v___f_1902_, v_nondep_1893_, v_kind_1894_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
if (lean_obj_tag(v___x_1903_) == 0)
{
return v___x_1903_;
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1903_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1903_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg___boxed(lean_object* v_name_1912_, lean_object* v_type_1913_, lean_object* v_val_1914_, lean_object* v_k_1915_, lean_object* v_nondep_1916_, lean_object* v_kind_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
uint8_t v_nondep_boxed_1925_; uint8_t v_kind_boxed_1926_; lean_object* v_res_1927_; 
v_nondep_boxed_1925_ = lean_unbox(v_nondep_1916_);
v_kind_boxed_1926_ = lean_unbox(v_kind_1917_);
v_res_1927_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(v_name_1912_, v_type_1913_, v_val_1914_, v_k_1915_, v_nondep_boxed_1925_, v_kind_boxed_1926_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1(lean_object* v_00_u03b1_1928_, lean_object* v_name_1929_, lean_object* v_type_1930_, lean_object* v_val_1931_, lean_object* v_k_1932_, uint8_t v_nondep_1933_, uint8_t v_kind_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(v_name_1929_, v_type_1930_, v_val_1931_, v_k_1932_, v_nondep_1933_, v_kind_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___boxed(lean_object* v_00_u03b1_1943_, lean_object* v_name_1944_, lean_object* v_type_1945_, lean_object* v_val_1946_, lean_object* v_k_1947_, lean_object* v_nondep_1948_, lean_object* v_kind_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
uint8_t v_nondep_boxed_1957_; uint8_t v_kind_boxed_1958_; lean_object* v_res_1959_; 
v_nondep_boxed_1957_ = lean_unbox(v_nondep_1948_);
v_kind_boxed_1958_ = lean_unbox(v_kind_1949_);
v_res_1959_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1(v_00_u03b1_1943_, v_name_1944_, v_type_1945_, v_val_1946_, v_k_1947_, v_nondep_boxed_1957_, v_kind_boxed_1958_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(lean_object* v_xs_1960_, size_t v_sz_1961_, size_t v_i_1962_, lean_object* v_bs_1963_){
_start:
{
uint8_t v___x_1964_; 
v___x_1964_ = lean_usize_dec_lt(v_i_1962_, v_sz_1961_);
if (v___x_1964_ == 0)
{
return v_bs_1963_;
}
else
{
lean_object* v___x_1965_; lean_object* v_v_1966_; lean_object* v___x_1967_; lean_object* v_bs_x27_1968_; lean_object* v___x_1969_; size_t v___x_1970_; size_t v___x_1971_; lean_object* v___x_1972_; 
v___x_1965_ = l_Lean_instInhabitedExpr;
v_v_1966_ = lean_array_uget(v_bs_1963_, v_i_1962_);
v___x_1967_ = lean_unsigned_to_nat(0u);
v_bs_x27_1968_ = lean_array_uset(v_bs_1963_, v_i_1962_, v___x_1967_);
v___x_1969_ = lean_array_get_borrowed(v___x_1965_, v_xs_1960_, v_v_1966_);
lean_dec(v_v_1966_);
v___x_1970_ = ((size_t)1ULL);
v___x_1971_ = lean_usize_add(v_i_1962_, v___x_1970_);
lean_inc(v___x_1969_);
v___x_1972_ = lean_array_uset(v_bs_x27_1968_, v_i_1962_, v___x_1969_);
v_i_1962_ = v___x_1971_;
v_bs_1963_ = v___x_1972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0___boxed(lean_object* v_xs_1974_, lean_object* v_sz_1975_, lean_object* v_i_1976_, lean_object* v_bs_1977_){
_start:
{
size_t v_sz_boxed_1978_; size_t v_i_boxed_1979_; lean_object* v_res_1980_; 
v_sz_boxed_1978_ = lean_unbox_usize(v_sz_1975_);
lean_dec(v_sz_1975_);
v_i_boxed_1979_ = lean_unbox_usize(v_i_1976_);
lean_dec(v_i_1976_);
v_res_1980_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(v_xs_1974_, v_sz_boxed_1978_, v_i_boxed_1979_, v_bs_1977_);
lean_dec_ref(v_xs_1974_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0___boxed(lean_object* v_xs_1981_, lean_object* v_i_1982_, lean_object* v_varDeps_1983_, lean_object* v_args_1984_, lean_object* v_body_1985_, lean_object* v_x_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0(v_xs_1981_, v_i_1982_, v_varDeps_1983_, v_args_1984_, v_body_1985_, v_x_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v_i_1982_);
return v_res_1994_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1996_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_1997_ = lean_unsigned_to_nat(30u);
v___x_1998_ = lean_unsigned_to_nat(254u);
v___x_1999_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0));
v___x_2000_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_2001_ = l_mkPanicMessageWithDecl(v___x_2000_, v___x_1999_, v___x_1998_, v___x_1997_, v___x_1996_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(lean_object* v_varDeps_2002_, lean_object* v_args_2003_, lean_object* v_f_2004_, lean_object* v_xs_2005_, lean_object* v_i_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2014_ = lean_array_get_size(v_args_2003_);
v___x_2015_ = lean_nat_dec_lt(v_i_2006_, v___x_2014_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
lean_dec(v_i_2006_);
lean_dec_ref(v_args_2003_);
lean_inc_ref(v_xs_2005_);
v___x_2016_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(v_f_2004_, v_xs_2005_, v_varDeps_2002_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; uint8_t v___x_2018_; lean_object* v___x_2019_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2017_);
lean_dec_ref_known(v___x_2016_, 1);
v___x_2018_ = 1;
v___x_2019_ = l_Lean_Meta_mkLetFVars(v_xs_2005_, v_a_2017_, v___x_2015_, v___x_2015_, v___x_2018_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
lean_dec_ref(v_xs_2005_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2021_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2020_);
lean_dec_ref_known(v___x_2019_, 1);
v___x_2021_ = l_Lean_Meta_Sym_shareCommonInc(v_a_2020_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
return v___x_2021_;
}
else
{
return v___x_2019_;
}
}
else
{
lean_dec_ref(v_xs_2005_);
return v___x_2016_;
}
}
else
{
if (lean_obj_tag(v_f_2004_) == 6)
{
lean_object* v_binderName_2022_; lean_object* v_binderType_2023_; lean_object* v_body_2024_; lean_object* v___f_2025_; lean_object* v_varPos_2026_; size_t v_sz_2027_; size_t v___x_2028_; lean_object* v_ys_2029_; lean_object* v___x_2030_; lean_object* v_type_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v_binderName_2022_ = lean_ctor_get(v_f_2004_, 0);
lean_inc(v_binderName_2022_);
v_binderType_2023_ = lean_ctor_get(v_f_2004_, 1);
lean_inc_ref(v_binderType_2023_);
v_body_2024_ = lean_ctor_get(v_f_2004_, 2);
lean_inc_ref(v_body_2024_);
lean_dec_ref_known(v_f_2004_, 3);
lean_inc_ref(v_args_2003_);
lean_inc_ref(v_varDeps_2002_);
lean_inc(v_i_2006_);
lean_inc_ref(v_xs_2005_);
v___f_2025_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0___boxed), 13, 5);
lean_closure_set(v___f_2025_, 0, v_xs_2005_);
lean_closure_set(v___f_2025_, 1, v_i_2006_);
lean_closure_set(v___f_2025_, 2, v_varDeps_2002_);
lean_closure_set(v___f_2025_, 3, v_args_2003_);
lean_closure_set(v___f_2025_, 4, v_body_2024_);
v_varPos_2026_ = lean_array_fget(v_varDeps_2002_, v_i_2006_);
lean_dec_ref(v_varDeps_2002_);
v_sz_2027_ = lean_array_size(v_varPos_2026_);
v___x_2028_ = ((size_t)0ULL);
lean_inc(v_varPos_2026_);
v_ys_2029_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(v_xs_2005_, v_sz_2027_, v___x_2028_, v_varPos_2026_);
lean_dec_ref(v_xs_2005_);
v___x_2030_ = lean_array_get_size(v_varPos_2026_);
lean_dec(v_varPos_2026_);
v_type_2031_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_consumeForallN(v_binderType_2023_, v___x_2030_);
v___x_2032_ = lean_array_fget(v_args_2003_, v_i_2006_);
lean_dec(v_i_2006_);
lean_dec_ref(v_args_2003_);
v___x_2033_ = 0;
v___x_2034_ = l_Lean_Expr_betaRev(v___x_2032_, v_ys_2029_, v___x_2033_, v___x_2033_);
lean_dec_ref(v_ys_2029_);
v___x_2035_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2034_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref_known(v___x_2035_, 1);
v___x_2037_ = 0;
v___x_2038_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(v_binderName_2022_, v_type_2031_, v_a_2036_, v___f_2025_, v___x_2015_, v___x_2037_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
return v___x_2038_;
}
else
{
lean_dec_ref(v_type_2031_);
lean_dec_ref(v___f_2025_);
lean_dec(v_binderName_2022_);
return v___x_2035_;
}
}
else
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
lean_dec(v_i_2006_);
lean_dec_ref(v_xs_2005_);
lean_dec_ref(v_f_2004_);
lean_dec_ref(v_args_2003_);
lean_dec_ref(v_varDeps_2002_);
v___x_2039_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1);
v___x_2040_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v___x_2039_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
return v___x_2040_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0(lean_object* v_xs_2041_, lean_object* v_i_2042_, lean_object* v_varDeps_2043_, lean_object* v_args_2044_, lean_object* v_body_2045_, lean_object* v_x_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lean_Meta_Sym_shareCommonInc(v_x_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2054_, 1);
v___x_2056_ = lean_array_push(v_xs_2041_, v_a_2055_);
v___x_2057_ = lean_unsigned_to_nat(1u);
v___x_2058_ = lean_nat_add(v_i_2042_, v___x_2057_);
v___x_2059_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2043_, v_args_2044_, v_body_2045_, v___x_2056_, v___x_2058_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
return v___x_2059_;
}
else
{
lean_dec_ref(v_body_2045_);
lean_dec_ref(v_args_2044_);
lean_dec_ref(v_varDeps_2043_);
lean_dec_ref(v_xs_2041_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___boxed(lean_object* v_varDeps_2060_, lean_object* v_args_2061_, lean_object* v_f_2062_, lean_object* v_xs_2063_, lean_object* v_i_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2060_, v_args_2061_, v_f_2062_, v_xs_2063_, v_i_2064_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_, v_a_2070_);
lean_dec(v_a_2070_);
lean_dec_ref(v_a_2069_);
lean_dec(v_a_2068_);
lean_dec_ref(v_a_2067_);
lean_dec(v_a_2066_);
lean_dec_ref(v_a_2065_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go(lean_object* v_varDeps_2073_, lean_object* v_args_2074_, lean_object* v___h_2075_, lean_object* v_f_2076_, lean_object* v_xs_2077_, lean_object* v_i_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2073_, v_args_2074_, v_f_2076_, v_xs_2077_, v_i_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___boxed(lean_object* v_varDeps_2087_, lean_object* v_args_2088_, lean_object* v___h_2089_, lean_object* v_f_2090_, lean_object* v_xs_2091_, lean_object* v_i_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v___y_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go(v_varDeps_2087_, v_args_2088_, v___h_2089_, v_f_2090_, v_xs_2091_, v_i_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec(v_a_2094_);
lean_dec_ref(v_a_2093_);
return v_res_2100_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2102_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_2103_ = lean_unsigned_to_nat(40u);
v___x_2104_ = lean_unsigned_to_nat(251u);
v___x_2105_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0));
v___x_2106_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_2107_ = l_mkPanicMessageWithDecl(v___x_2106_, v___x_2105_, v___x_2104_, v___x_2103_, v___x_2102_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(lean_object* v_varDeps_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_, lean_object* v_x_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
if (lean_obj_tag(v_x_2109_) == 5)
{
lean_object* v_fn_2119_; lean_object* v_arg_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v_fn_2119_ = lean_ctor_get(v_x_2109_, 0);
lean_inc_ref(v_fn_2119_);
v_arg_2120_ = lean_ctor_get(v_x_2109_, 1);
lean_inc_ref(v_arg_2120_);
lean_dec_ref_known(v_x_2109_, 2);
v___x_2121_ = lean_array_set(v_x_2110_, v_x_2111_, v_arg_2120_);
v___x_2122_ = lean_unsigned_to_nat(1u);
v___x_2123_ = lean_nat_sub(v_x_2111_, v___x_2122_);
lean_dec(v_x_2111_);
v_x_2109_ = v_fn_2119_;
v_x_2110_ = v___x_2121_;
v_x_2111_ = v___x_2123_;
goto _start;
}
else
{
lean_object* v___x_2125_; lean_object* v___x_2126_; uint8_t v___x_2127_; 
lean_dec(v_x_2111_);
v___x_2125_ = lean_array_get_size(v_x_2110_);
v___x_2126_ = lean_array_get_size(v_varDeps_2108_);
v___x_2127_ = lean_nat_dec_eq(v___x_2125_, v___x_2126_);
if (v___x_2127_ == 0)
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
lean_dec_ref(v_x_2110_);
lean_dec_ref(v_x_2109_);
lean_dec_ref(v_varDeps_2108_);
v___x_2128_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1);
v___x_2129_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v___x_2128_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
return v___x_2129_;
}
else
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2130_ = lean_unsigned_to_nat(0u);
v___x_2131_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_toBetaApp___closed__0));
v___x_2132_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2108_, v_x_2110_, v_x_2109_, v___x_2131_, v___x_2130_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
return v___x_2132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___boxed(lean_object* v_varDeps_2133_, lean_object* v_x_2134_, lean_object* v_x_2135_, lean_object* v_x_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(v_varDeps_2133_, v_x_2134_, v_x_2135_, v_x_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
return v_res_2144_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0(void){
_start:
{
lean_object* v___x_2145_; lean_object* v_dummy_2146_; 
v___x_2145_ = lean_box(0);
v_dummy_2146_ = l_Lean_Expr_sort___override(v___x_2145_);
return v_dummy_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(lean_object* v_e_2147_, lean_object* v_varDeps_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_dummy_2156_; lean_object* v_nargs_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v_dummy_2156_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0);
v_nargs_2157_ = l_Lean_Expr_getAppNumArgs(v_e_2147_);
lean_inc(v_nargs_2157_);
v___x_2158_ = lean_mk_array(v_nargs_2157_, v_dummy_2156_);
v___x_2159_ = lean_unsigned_to_nat(1u);
v___x_2160_ = lean_nat_sub(v_nargs_2157_, v___x_2159_);
lean_dec(v_nargs_2157_);
v___x_2161_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(v_varDeps_2148_, v_e_2147_, v___x_2158_, v___x_2160_, v_a_2149_, v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_, v_a_2154_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___boxed(lean_object* v_e_2162_, lean_object* v_varDeps_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(v_e_2162_, v_varDeps_2163_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_);
lean_dec(v_a_2169_);
lean_dec_ref(v_a_2168_);
lean_dec(v_a_2167_);
lean_dec_ref(v_a_2166_);
lean_dec(v_a_2165_);
lean_dec_ref(v_a_2164_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(lean_object* v_argUnivs_2172_, lean_object* v_a_2173_){
_start:
{
lean_object* v_snd_2175_; lean_object* v_fst_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2209_; 
v_snd_2175_ = lean_ctor_get(v_a_2173_, 1);
v_fst_2176_ = lean_ctor_get(v_a_2173_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v_a_2173_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2178_ = v_a_2173_;
v_isShared_2179_ = v_isSharedCheck_2209_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_snd_2175_);
lean_inc(v_fst_2176_);
lean_dec(v_a_2173_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2209_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v_fst_2180_; lean_object* v_snd_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2208_; 
v_fst_2180_ = lean_ctor_get(v_snd_2175_, 0);
v_snd_2181_ = lean_ctor_get(v_snd_2175_, 1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_snd_2175_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2183_ = v_snd_2175_;
v_isShared_2184_ = v_isSharedCheck_2208_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_snd_2181_);
lean_inc(v_fst_2180_);
lean_dec(v_snd_2175_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2208_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2185_; uint8_t v___x_2186_; 
v___x_2185_ = lean_unsigned_to_nat(0u);
v___x_2186_ = lean_nat_dec_lt(v___x_2185_, v_fst_2180_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2188_; 
if (v_isShared_2184_ == 0)
{
v___x_2188_ = v___x_2183_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_fst_2180_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_snd_2181_);
v___x_2188_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2190_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 1, v___x_2188_);
v___x_2190_ = v___x_2178_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_fst_2176_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v___x_2188_);
v___x_2190_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2190_);
return v___x_2191_;
}
}
}
else
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2194_ = lean_box(0);
v___x_2195_ = lean_unsigned_to_nat(1u);
v___x_2196_ = lean_nat_sub(v_fst_2180_, v___x_2195_);
lean_dec(v_fst_2180_);
v___x_2197_ = lean_array_get_borrowed(v___x_2194_, v_argUnivs_2172_, v___x_2196_);
lean_inc(v___x_2197_);
v___x_2198_ = l_Lean_mkLevelIMax_x27(v___x_2197_, v_fst_2176_);
v___x_2199_ = l_Lean_Level_normalize(v___x_2198_);
lean_dec(v___x_2198_);
lean_inc(v___x_2199_);
v___x_2200_ = lean_array_push(v_snd_2181_, v___x_2199_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 1, v___x_2200_);
lean_ctor_set(v___x_2183_, 0, v___x_2196_);
v___x_2202_ = v___x_2183_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2196_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
lean_object* v___x_2204_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 1, v___x_2202_);
lean_ctor_set(v___x_2178_, 0, v___x_2199_);
v___x_2204_ = v___x_2178_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2206_, 1, v___x_2202_);
v___x_2204_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
v_a_2173_ = v___x_2204_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg___boxed(lean_object* v_argUnivs_2210_, lean_object* v_a_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(v_argUnivs_2210_, v_a_2211_);
lean_dec_ref(v_argUnivs_2210_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(lean_object* v_type_2216_, lean_object* v_argUnivs_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_){
_start:
{
if (lean_obj_tag(v_type_2216_) == 7)
{
lean_object* v_binderType_2225_; lean_object* v_body_2226_; lean_object* v___x_2227_; 
v_binderType_2225_ = lean_ctor_get(v_type_2216_, 1);
lean_inc_ref(v_binderType_2225_);
v_body_2226_ = lean_ctor_get(v_type_2216_, 2);
lean_inc_ref(v_body_2226_);
lean_dec_ref_known(v_type_2216_, 3);
v___x_2227_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_2225_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2229_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v___x_2229_ = lean_array_push(v_argUnivs_2217_, v_a_2228_);
v_type_2216_ = v_body_2226_;
v_argUnivs_2217_ = v___x_2229_;
goto _start;
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec_ref(v_body_2226_);
lean_dec_ref(v_argUnivs_2217_);
v_a_2231_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2227_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2227_);
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
else
{
lean_object* v___x_2239_; 
v___x_2239_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_2216_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
lean_dec_ref_known(v___x_2239_, 1);
v___x_2241_ = lean_array_get_size(v_argUnivs_2217_);
v___x_2242_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0));
v___x_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2241_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v_a_2240_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(v_argUnivs_2217_, v___x_2244_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2264_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2248_ = v___x_2245_;
v_isShared_2249_ = v_isSharedCheck_2264_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2245_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2264_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v_snd_2250_; lean_object* v_snd_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2262_; 
v_snd_2250_ = lean_ctor_get(v_a_2246_, 1);
lean_inc(v_snd_2250_);
lean_dec(v_a_2246_);
v_snd_2251_ = lean_ctor_get(v_snd_2250_, 1);
v_isSharedCheck_2262_ = !lean_is_exclusive(v_snd_2250_);
if (v_isSharedCheck_2262_ == 0)
{
lean_object* v_unused_2263_; 
v_unused_2263_ = lean_ctor_get(v_snd_2250_, 0);
lean_dec(v_unused_2263_);
v___x_2253_ = v_snd_2250_;
v_isShared_2254_ = v_isSharedCheck_2262_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_snd_2251_);
lean_dec(v_snd_2250_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2262_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2255_; lean_object* v___x_2257_; 
v___x_2255_ = l_Array_reverse___redArg(v_snd_2251_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 1, v___x_2255_);
lean_ctor_set(v___x_2253_, 0, v_argUnivs_2217_);
v___x_2257_ = v___x_2253_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_argUnivs_2217_);
lean_ctor_set(v_reuseFailAlloc_2261_, 1, v___x_2255_);
v___x_2257_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
lean_object* v___x_2259_; 
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 0, v___x_2257_);
v___x_2259_ = v___x_2248_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2257_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
}
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
lean_dec_ref(v_argUnivs_2217_);
v_a_2265_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2245_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2245_);
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
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_dec_ref(v_argUnivs_2217_);
v_a_2273_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2239_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2239_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___boxed(lean_object* v_type_2281_, lean_object* v_argUnivs_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(v_type_2281_, v_argUnivs_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_);
lean_dec(v_a_2288_);
lean_dec_ref(v_a_2287_);
lean_dec(v_a_2286_);
lean_dec_ref(v_a_2285_);
lean_dec(v_a_2284_);
lean_dec_ref(v_a_2283_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0(lean_object* v_argUnivs_2291_, lean_object* v_inst_2292_, lean_object* v_a_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(v_argUnivs_2291_, v_a_2293_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___boxed(lean_object* v_argUnivs_2302_, lean_object* v_inst_2303_, lean_object* v_a_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0(v_argUnivs_2302_, v_inst_2303_, v_a_2304_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec_ref(v_argUnivs_2302_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(lean_object* v_fType_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0));
v___x_2322_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(v_fType_2313_, v___x_2321_, v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs___boxed(lean_object* v_fType_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(v_fType_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_);
lean_dec(v_a_2329_);
lean_dec_ref(v_a_2328_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2326_);
lean_dec(v_a_2325_);
lean_dec_ref(v_a_2324_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(lean_object* v_fnUnivs_2332_, lean_object* v_argUnivs_2333_, lean_object* v_declName_2334_, lean_object* v_fType_2335_, lean_object* v_i_2336_){
_start:
{
lean_object* v___x_2338_; lean_object* v_00_u03b1_2339_; lean_object* v_00_u03b2_2340_; lean_object* v_u_2341_; lean_object* v_v_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2338_ = lean_box(0);
v_00_u03b1_2339_ = l_Lean_Expr_bindingDomain_x21(v_fType_2335_);
v_00_u03b2_2340_ = l_Lean_Expr_bindingBody_x21(v_fType_2335_);
v_u_2341_ = lean_array_get_borrowed(v___x_2338_, v_argUnivs_2333_, v_i_2336_);
v_v_2342_ = lean_array_get_borrowed(v___x_2338_, v_fnUnivs_2332_, v_i_2336_);
v___x_2343_ = lean_box(0);
lean_inc(v_v_2342_);
v___x_2344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2344_, 0, v_v_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
lean_inc(v_u_2341_);
v___x_2345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2345_, 0, v_u_2341_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = l_Lean_mkConst(v_declName_2334_, v___x_2345_);
v___x_2347_ = l_Lean_mkAppB(v___x_2346_, v_00_u03b1_2339_, v_00_u03b2_2340_);
v___x_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg___boxed(lean_object* v_fnUnivs_2349_, lean_object* v_argUnivs_2350_, lean_object* v_declName_2351_, lean_object* v_fType_2352_, lean_object* v_i_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2349_, v_argUnivs_2350_, v_declName_2351_, v_fType_2352_, v_i_2353_);
lean_dec(v_i_2353_);
lean_dec_ref(v_fType_2352_);
lean_dec_ref(v_argUnivs_2350_);
lean_dec_ref(v_fnUnivs_2349_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix(lean_object* v_fnUnivs_2356_, lean_object* v_argUnivs_2357_, lean_object* v_declName_2358_, lean_object* v_fType_2359_, lean_object* v_i_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2356_, v_argUnivs_2357_, v_declName_2358_, v_fType_2359_, v_i_2360_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___boxed(lean_object* v_fnUnivs_2369_, lean_object* v_argUnivs_2370_, lean_object* v_declName_2371_, lean_object* v_fType_2372_, lean_object* v_i_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix(v_fnUnivs_2369_, v_argUnivs_2370_, v_declName_2371_, v_fType_2372_, v_i_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v_a_2379_);
lean_dec_ref(v_a_2378_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
lean_dec(v_a_2375_);
lean_dec_ref(v_a_2374_);
lean_dec(v_i_2373_);
lean_dec_ref(v_fType_2372_);
lean_dec_ref(v_argUnivs_2370_);
lean_dec_ref(v_fnUnivs_2369_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(lean_object* v_f_2382_, lean_object* v_a_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v___y_2392_; lean_object* v___x_2395_; uint8_t v_debug_2396_; 
v___x_2395_ = lean_st_ref_get(v___y_2385_);
v_debug_2396_ = lean_ctor_get_uint8(v___x_2395_, sizeof(void*)*11);
lean_dec(v___x_2395_);
if (v_debug_2396_ == 0)
{
v___y_2392_ = v___y_2385_;
goto v___jp_2391_;
}
else
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_2382_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v___x_2398_; 
lean_dec_ref_known(v___x_2397_, 1);
v___x_2398_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_dec_ref_known(v___x_2398_, 1);
v___y_2392_ = v___y_2385_;
goto v___jp_2391_;
}
else
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
lean_dec_ref(v_a_2383_);
lean_dec_ref(v_f_2382_);
v_a_2399_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v___x_2398_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2398_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_dec_ref(v_a_2383_);
lean_dec_ref(v_f_2382_);
v_a_2407_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2397_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2397_);
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
v___jp_2391_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = l_Lean_Expr_app___override(v_f_2382_, v_a_2383_);
v___x_2394_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2393_, v___y_2392_);
return v___x_2394_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg___boxed(lean_object* v_f_2415_, lean_object* v_a_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_f_2415_, v_a_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0(lean_object* v_f_2425_, lean_object* v_a_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_f_2425_, v_a_2426_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___boxed(lean_object* v_f_2438_, lean_object* v_a_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0(v_f_2438_, v_a_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
return v_res_2450_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(lean_object* v_msg_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_15364__overap_2464_; lean_object* v___x_2465_; 
v___x_2463_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0);
v___x_15364__overap_2464_ = lean_panic_fn_borrowed(v___x_2463_, v_msg_2452_);
lean_inc(v___y_2461_);
lean_inc_ref(v___y_2460_);
lean_inc(v___y_2459_);
lean_inc_ref(v___y_2458_);
lean_inc(v___y_2457_);
lean_inc_ref(v___y_2456_);
lean_inc(v___y_2455_);
lean_inc_ref(v___y_2454_);
lean_inc(v___y_2453_);
v___x_2465_ = lean_apply_10(v___x_15364__overap_2464_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, lean_box(0));
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___boxed(lean_object* v_msg_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(v_msg_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v___y_2467_);
return v_res_2477_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2488_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_2489_ = lean_unsigned_to_nat(11u);
v___x_2490_ = lean_unsigned_to_nat(346u);
v___x_2491_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6));
v___x_2492_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_2493_ = l_mkPanicMessageWithDecl(v___x_2492_, v___x_2491_, v___x_2490_, v___x_2489_, v___x_2488_);
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(lean_object* v_fType_2494_, lean_object* v_fnUnivs_2495_, lean_object* v_argUnivs_2496_, lean_object* v_simpBody_2497_, lean_object* v_e_2498_, lean_object* v_i_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_){
_start:
{
switch(lean_obj_tag(v_e_2498_))
{
case 5:
{
lean_object* v_fn_2510_; lean_object* v_arg_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v_fn_2510_ = lean_ctor_get(v_e_2498_, 0);
lean_inc_ref_n(v_fn_2510_, 2);
v_arg_2511_ = lean_ctor_get(v_e_2498_, 1);
lean_inc_ref(v_arg_2511_);
lean_dec_ref_known(v_e_2498_, 2);
v___x_2512_ = lean_unsigned_to_nat(1u);
v___x_2513_ = lean_nat_sub(v_i_2499_, v___x_2512_);
v___x_2514_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(v_fType_2494_, v_fnUnivs_2495_, v_argUnivs_2496_, v_simpBody_2497_, v_fn_2510_, v___x_2513_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
lean_dec(v___x_2513_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2635_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2517_ = v___x_2514_;
v_isShared_2518_ = v_isSharedCheck_2635_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2514_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2635_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v_fst_2519_; lean_object* v_snd_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2634_; 
v_fst_2519_ = lean_ctor_get(v_a_2515_, 0);
v_snd_2520_ = lean_ctor_get(v_a_2515_, 1);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2522_ = v_a_2515_;
v_isShared_2523_ = v_isSharedCheck_2634_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_snd_2520_);
lean_inc(v_fst_2519_);
lean_dec(v_a_2515_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2634_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v_r_2525_; lean_object* v___x_2533_; 
lean_inc(v_a_2508_);
lean_inc_ref(v_a_2507_);
lean_inc(v_a_2506_);
lean_inc_ref(v_a_2505_);
lean_inc(v_a_2504_);
lean_inc_ref(v_a_2503_);
lean_inc(v_a_2502_);
lean_inc_ref(v_a_2501_);
lean_inc(v_a_2500_);
lean_inc_ref(v_arg_2511_);
v___x_2533_ = lean_sym_simp(v_arg_2511_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; uint8_t v___y_2536_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
if (lean_obj_tag(v_fst_2519_) == 0)
{
if (lean_obj_tag(v_a_2534_) == 0)
{
uint8_t v_contextDependent_2538_; 
lean_dec_ref(v_arg_2511_);
lean_dec_ref(v_fn_2510_);
v_contextDependent_2538_ = lean_ctor_get_uint8(v_fst_2519_, 1);
lean_dec_ref_known(v_fst_2519_, 0);
if (v_contextDependent_2538_ == 0)
{
uint8_t v_contextDependent_2539_; 
v_contextDependent_2539_ = lean_ctor_get_uint8(v_a_2534_, 1);
lean_dec_ref_known(v_a_2534_, 0);
v___y_2536_ = v_contextDependent_2539_;
goto v___jp_2535_;
}
else
{
lean_dec_ref_known(v_a_2534_, 0);
v___y_2536_ = v_contextDependent_2538_;
goto v___jp_2535_;
}
}
else
{
uint8_t v_contextDependent_2540_; lean_object* v_e_x27_2541_; lean_object* v_proof_2542_; uint8_t v_contextDependent_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2567_; 
v_contextDependent_2540_ = lean_ctor_get_uint8(v_fst_2519_, 1);
lean_dec_ref_known(v_fst_2519_, 0);
v_e_x27_2541_ = lean_ctor_get(v_a_2534_, 0);
v_proof_2542_ = lean_ctor_get(v_a_2534_, 1);
v_contextDependent_2543_ = lean_ctor_get_uint8(v_a_2534_, sizeof(void*)*2 + 1);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_a_2534_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2545_ = v_a_2534_;
v_isShared_2546_ = v_isSharedCheck_2567_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_proof_2542_);
lean_inc(v_e_x27_2541_);
lean_dec(v_a_2534_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2567_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2547_; 
lean_inc_ref(v_e_x27_2541_);
lean_inc_ref(v_fn_2510_);
v___x_2547_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_fn_2510_, v_e_x27_2541_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v_a_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; uint8_t v___y_2555_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
v___x_2549_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1));
v___x_2550_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2495_, v_argUnivs_2496_, v___x_2549_, v_snd_2520_, v_i_2499_);
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
lean_inc(v_a_2551_);
lean_dec_ref(v___x_2550_);
v___x_2552_ = l_Lean_mkApp4(v_a_2551_, v_arg_2511_, v_e_x27_2541_, v_fn_2510_, v_proof_2542_);
v___x_2553_ = 0;
if (v_contextDependent_2540_ == 0)
{
v___y_2555_ = v_contextDependent_2543_;
goto v___jp_2554_;
}
else
{
v___y_2555_ = v_contextDependent_2540_;
goto v___jp_2554_;
}
v___jp_2554_:
{
lean_object* v___x_2557_; 
if (v_isShared_2546_ == 0)
{
lean_ctor_set(v___x_2545_, 1, v___x_2552_);
lean_ctor_set(v___x_2545_, 0, v_a_2548_);
v___x_2557_ = v___x_2545_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2548_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v___x_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
lean_ctor_set_uint8(v___x_2557_, sizeof(void*)*2, v___x_2553_);
lean_ctor_set_uint8(v___x_2557_, sizeof(void*)*2 + 1, v___y_2555_);
v_r_2525_ = v___x_2557_;
goto v___jp_2524_;
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
lean_del_object(v___x_2545_);
lean_dec_ref(v_proof_2542_);
lean_dec_ref(v_e_x27_2541_);
lean_del_object(v___x_2522_);
lean_dec(v_snd_2520_);
lean_del_object(v___x_2517_);
lean_dec_ref(v_arg_2511_);
lean_dec_ref(v_fn_2510_);
v_a_2559_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2547_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2547_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_a_2534_) == 0)
{
lean_object* v_e_x27_2568_; lean_object* v_proof_2569_; uint8_t v_contextDependent_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2595_; 
v_e_x27_2568_ = lean_ctor_get(v_fst_2519_, 0);
v_proof_2569_ = lean_ctor_get(v_fst_2519_, 1);
v_contextDependent_2570_ = lean_ctor_get_uint8(v_fst_2519_, sizeof(void*)*2 + 1);
v_isSharedCheck_2595_ = !lean_is_exclusive(v_fst_2519_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2572_ = v_fst_2519_;
v_isShared_2573_ = v_isSharedCheck_2595_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_proof_2569_);
lean_inc(v_e_x27_2568_);
lean_dec(v_fst_2519_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2595_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
uint8_t v_contextDependent_2574_; lean_object* v___x_2575_; 
v_contextDependent_2574_ = lean_ctor_get_uint8(v_a_2534_, 1);
lean_dec_ref_known(v_a_2534_, 0);
lean_inc_ref(v_arg_2511_);
lean_inc_ref(v_e_x27_2568_);
v___x_2575_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_e_x27_2568_, v_arg_2511_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v_a_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; uint8_t v___y_2583_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref_known(v___x_2575_, 1);
v___x_2577_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3));
v___x_2578_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2495_, v_argUnivs_2496_, v___x_2577_, v_snd_2520_, v_i_2499_);
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref(v___x_2578_);
v___x_2580_ = l_Lean_mkApp4(v_a_2579_, v_fn_2510_, v_e_x27_2568_, v_proof_2569_, v_arg_2511_);
v___x_2581_ = 0;
if (v_contextDependent_2570_ == 0)
{
v___y_2583_ = v_contextDependent_2574_;
goto v___jp_2582_;
}
else
{
v___y_2583_ = v_contextDependent_2570_;
goto v___jp_2582_;
}
v___jp_2582_:
{
lean_object* v___x_2585_; 
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 1, v___x_2580_);
lean_ctor_set(v___x_2572_, 0, v_a_2576_);
v___x_2585_ = v___x_2572_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2576_);
lean_ctor_set(v_reuseFailAlloc_2586_, 1, v___x_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
lean_ctor_set_uint8(v___x_2585_, sizeof(void*)*2, v___x_2581_);
lean_ctor_set_uint8(v___x_2585_, sizeof(void*)*2 + 1, v___y_2583_);
v_r_2525_ = v___x_2585_;
goto v___jp_2524_;
}
}
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2594_; 
lean_del_object(v___x_2572_);
lean_dec_ref(v_proof_2569_);
lean_dec_ref(v_e_x27_2568_);
lean_del_object(v___x_2522_);
lean_dec(v_snd_2520_);
lean_del_object(v___x_2517_);
lean_dec_ref(v_arg_2511_);
lean_dec_ref(v_fn_2510_);
v_a_2587_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2589_ = v___x_2575_;
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2575_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2587_);
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
}
else
{
lean_object* v_e_x27_2596_; lean_object* v_proof_2597_; uint8_t v_contextDependent_2598_; lean_object* v_e_x27_2599_; lean_object* v_proof_2600_; uint8_t v_contextDependent_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2625_; 
v_e_x27_2596_ = lean_ctor_get(v_fst_2519_, 0);
lean_inc_ref(v_e_x27_2596_);
v_proof_2597_ = lean_ctor_get(v_fst_2519_, 1);
lean_inc_ref(v_proof_2597_);
v_contextDependent_2598_ = lean_ctor_get_uint8(v_fst_2519_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_2519_, 2);
v_e_x27_2599_ = lean_ctor_get(v_a_2534_, 0);
v_proof_2600_ = lean_ctor_get(v_a_2534_, 1);
v_contextDependent_2601_ = lean_ctor_get_uint8(v_a_2534_, sizeof(void*)*2 + 1);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_a_2534_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2603_ = v_a_2534_;
v_isShared_2604_ = v_isSharedCheck_2625_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_proof_2600_);
lean_inc(v_e_x27_2599_);
lean_dec(v_a_2534_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2625_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2605_; 
lean_inc_ref(v_e_x27_2599_);
lean_inc_ref(v_e_x27_2596_);
v___x_2605_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_e_x27_2596_, v_e_x27_2599_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v_a_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; uint8_t v___y_2613_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v___x_2605_, 1);
v___x_2607_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5));
v___x_2608_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2495_, v_argUnivs_2496_, v___x_2607_, v_snd_2520_, v_i_2499_);
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref(v___x_2608_);
v___x_2610_ = l_Lean_mkApp6(v_a_2609_, v_fn_2510_, v_e_x27_2596_, v_arg_2511_, v_e_x27_2599_, v_proof_2597_, v_proof_2600_);
v___x_2611_ = 0;
if (v_contextDependent_2598_ == 0)
{
v___y_2613_ = v_contextDependent_2601_;
goto v___jp_2612_;
}
else
{
v___y_2613_ = v_contextDependent_2598_;
goto v___jp_2612_;
}
v___jp_2612_:
{
lean_object* v___x_2615_; 
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 1, v___x_2610_);
lean_ctor_set(v___x_2603_, 0, v_a_2606_);
v___x_2615_ = v___x_2603_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2606_);
lean_ctor_set(v_reuseFailAlloc_2616_, 1, v___x_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
lean_ctor_set_uint8(v___x_2615_, sizeof(void*)*2, v___x_2611_);
lean_ctor_set_uint8(v___x_2615_, sizeof(void*)*2 + 1, v___y_2613_);
v_r_2525_ = v___x_2615_;
goto v___jp_2524_;
}
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_del_object(v___x_2603_);
lean_dec_ref(v_proof_2600_);
lean_dec_ref(v_e_x27_2599_);
lean_dec_ref(v_proof_2597_);
lean_dec_ref(v_e_x27_2596_);
lean_del_object(v___x_2522_);
lean_dec(v_snd_2520_);
lean_del_object(v___x_2517_);
lean_dec_ref(v_arg_2511_);
lean_dec_ref(v_fn_2510_);
v_a_2617_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2605_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2605_);
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
}
}
v___jp_2535_:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_2536_);
v_r_2525_ = v___x_2537_;
goto v___jp_2524_;
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_del_object(v___x_2522_);
lean_dec(v_snd_2520_);
lean_dec(v_fst_2519_);
lean_del_object(v___x_2517_);
lean_dec_ref(v_arg_2511_);
lean_dec_ref(v_fn_2510_);
v_a_2626_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2533_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2533_);
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
v___jp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2528_; 
v___x_2526_ = l_Lean_Expr_bindingBody_x21(v_snd_2520_);
lean_dec(v_snd_2520_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 1, v___x_2526_);
lean_ctor_set(v___x_2522_, 0, v_r_2525_);
v___x_2528_ = v___x_2522_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_r_2525_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v___x_2526_);
v___x_2528_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2530_; 
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v___x_2528_);
v___x_2530_ = v___x_2517_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_2511_);
lean_dec_ref(v_fn_2510_);
return v___x_2514_;
}
}
case 6:
{
lean_object* v___x_2636_; 
lean_inc(v_a_2508_);
lean_inc_ref(v_a_2507_);
lean_inc(v_a_2506_);
lean_inc_ref(v_a_2505_);
lean_inc(v_a_2504_);
lean_inc_ref(v_a_2503_);
lean_inc(v_a_2502_);
lean_inc_ref(v_a_2501_);
lean_inc(v_a_2500_);
v___x_2636_ = lean_apply_11(v_simpBody_2497_, v_e_2498_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_, lean_box(0));
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2645_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2645_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2645_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2641_; lean_object* v___x_2643_; 
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v_a_2637_);
lean_ctor_set(v___x_2641_, 1, v_fType_2494_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2641_);
v___x_2643_ = v___x_2639_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___x_2641_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2653_; 
lean_dec_ref(v_fType_2494_);
v_a_2646_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2648_ = v___x_2636_;
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2636_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2651_; 
if (v_isShared_2649_ == 0)
{
v___x_2651_ = v___x_2648_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2646_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
default: 
{
lean_object* v___x_2654_; lean_object* v___x_2655_; 
lean_dec_ref(v_e_2498_);
lean_dec_ref(v_simpBody_2497_);
lean_dec_ref(v_fType_2494_);
v___x_2654_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7);
v___x_2655_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(v___x_2654_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
return v___x_2655_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___boxed(lean_object* v_fType_2656_, lean_object* v_fnUnivs_2657_, lean_object* v_argUnivs_2658_, lean_object* v_simpBody_2659_, lean_object* v_e_2660_, lean_object* v_i_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(v_fType_2656_, v_fnUnivs_2657_, v_argUnivs_2658_, v_simpBody_2659_, v_e_2660_, v_i_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_);
lean_dec(v_a_2670_);
lean_dec_ref(v_a_2669_);
lean_dec(v_a_2668_);
lean_dec_ref(v_a_2667_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
lean_dec_ref(v_a_2663_);
lean_dec(v_a_2662_);
lean_dec(v_i_2661_);
lean_dec_ref(v_argUnivs_2658_);
lean_dec_ref(v_fnUnivs_2657_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(lean_object* v_e_2673_, lean_object* v_fType_2674_, lean_object* v_fnUnivs_2675_, lean_object* v_argUnivs_2676_, lean_object* v_simpBody_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_){
_start:
{
lean_object* v_numArgs_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v_numArgs_2688_ = lean_array_get_size(v_argUnivs_2676_);
v___x_2689_ = lean_unsigned_to_nat(1u);
v___x_2690_ = lean_nat_sub(v_numArgs_2688_, v___x_2689_);
v___x_2691_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(v_fType_2674_, v_fnUnivs_2675_, v_argUnivs_2676_, v_simpBody_2677_, v_e_2673_, v___x_2690_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_);
lean_dec(v___x_2690_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2700_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2694_ = v___x_2691_;
v_isShared_2695_ = v_isSharedCheck_2700_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2691_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2700_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v_fst_2696_; lean_object* v___x_2698_; 
v_fst_2696_ = lean_ctor_get(v_a_2692_, 0);
lean_inc(v_fst_2696_);
lean_dec(v_a_2692_);
if (v_isShared_2695_ == 0)
{
lean_ctor_set(v___x_2694_, 0, v_fst_2696_);
v___x_2698_ = v___x_2694_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_fst_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
else
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
v_a_2701_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2691_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2691_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp___boxed(lean_object* v_e_2709_, lean_object* v_fType_2710_, lean_object* v_fnUnivs_2711_, lean_object* v_argUnivs_2712_, lean_object* v_simpBody_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(v_e_2709_, v_fType_2710_, v_fnUnivs_2711_, v_argUnivs_2712_, v_simpBody_2713_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_);
lean_dec(v_a_2722_);
lean_dec_ref(v_a_2721_);
lean_dec(v_a_2720_);
lean_dec_ref(v_a_2719_);
lean_dec(v_a_2718_);
lean_dec_ref(v_a_2717_);
lean_dec(v_a_2716_);
lean_dec_ref(v_a_2715_);
lean_dec(v_a_2714_);
lean_dec_ref(v_argUnivs_2712_);
lean_dec_ref(v_fnUnivs_2711_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(lean_object* v_e_2729_, lean_object* v_simpBody_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_){
_start:
{
lean_object* v___x_2741_; 
lean_inc_ref(v_e_2729_);
v___x_2741_ = l_Lean_Meta_Sym_Simp_toBetaApp(v_e_2729_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v_a_2742_; lean_object* v_00_u03b1_2743_; lean_object* v_u_2744_; lean_object* v_e_2745_; lean_object* v_h_2746_; lean_object* v_varDeps_2747_; lean_object* v_fType_2748_; lean_object* v___x_2749_; 
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
lean_inc(v_a_2742_);
lean_dec_ref_known(v___x_2741_, 1);
v_00_u03b1_2743_ = lean_ctor_get(v_a_2742_, 0);
lean_inc_ref(v_00_u03b1_2743_);
v_u_2744_ = lean_ctor_get(v_a_2742_, 1);
lean_inc(v_u_2744_);
v_e_2745_ = lean_ctor_get(v_a_2742_, 2);
lean_inc_ref(v_e_2745_);
v_h_2746_ = lean_ctor_get(v_a_2742_, 3);
lean_inc_ref(v_h_2746_);
v_varDeps_2747_ = lean_ctor_get(v_a_2742_, 4);
lean_inc_ref(v_varDeps_2747_);
v_fType_2748_ = lean_ctor_get(v_a_2742_, 5);
lean_inc_ref_n(v_fType_2748_, 2);
lean_dec(v_a_2742_);
v___x_2749_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(v_fType_2748_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v_argUnivs_2751_; lean_object* v_fnUnivs_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2820_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v___x_2749_, 1);
v_argUnivs_2751_ = lean_ctor_get(v_a_2750_, 0);
v_fnUnivs_2752_ = lean_ctor_get(v_a_2750_, 1);
v_isSharedCheck_2820_ = !lean_is_exclusive(v_a_2750_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2754_ = v_a_2750_;
v_isShared_2755_ = v_isSharedCheck_2820_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_fnUnivs_2752_);
lean_inc(v_argUnivs_2751_);
lean_dec(v_a_2750_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2820_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; 
lean_inc_ref(v_e_2745_);
v___x_2756_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(v_e_2745_, v_fType_2748_, v_fnUnivs_2752_, v_argUnivs_2751_, v_simpBody_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
lean_dec_ref(v_argUnivs_2751_);
lean_dec_ref(v_fnUnivs_2752_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2811_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2759_ = v___x_2756_;
v_isShared_2760_ = v_isSharedCheck_2811_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2756_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2811_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
if (lean_obj_tag(v_a_2757_) == 0)
{
uint8_t v_contextDependent_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2765_; 
lean_del_object(v___x_2754_);
lean_dec_ref(v_varDeps_2747_);
lean_dec_ref(v_h_2746_);
lean_dec_ref(v_e_2745_);
lean_dec_ref(v_e_2729_);
v_contextDependent_2761_ = lean_ctor_get_uint8(v_a_2757_, 1);
lean_dec_ref_known(v_a_2757_, 0);
v___x_2762_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_2761_);
v___x_2763_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2762_);
lean_ctor_set(v___x_2763_, 1, v_00_u03b1_2743_);
lean_ctor_set(v___x_2763_, 2, v_u_2744_);
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v___x_2763_);
v___x_2765_ = v___x_2759_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
else
{
lean_object* v_e_x27_2767_; lean_object* v_proof_2768_; uint8_t v_contextDependent_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2810_; 
lean_del_object(v___x_2759_);
v_e_x27_2767_ = lean_ctor_get(v_a_2757_, 0);
v_proof_2768_ = lean_ctor_get(v_a_2757_, 1);
v_contextDependent_2769_ = lean_ctor_get_uint8(v_a_2757_, sizeof(void*)*2 + 1);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_a_2757_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2771_ = v_a_2757_;
v_isShared_2772_ = v_isSharedCheck_2810_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_proof_2768_);
lean_inc(v_e_x27_2767_);
lean_dec(v_a_2757_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2810_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2776_; 
v___x_2773_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1));
v___x_2774_ = lean_box(0);
lean_inc(v_u_2744_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set_tag(v___x_2754_, 1);
lean_ctor_set(v___x_2754_, 1, v___x_2774_);
lean_ctor_set(v___x_2754_, 0, v_u_2744_);
v___x_2776_ = v___x_2754_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_u_2744_);
lean_ctor_set(v_reuseFailAlloc_2809_, 1, v___x_2774_);
v___x_2776_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_inc_ref(v___x_2776_);
v___x_2777_ = l_Lean_mkConst(v___x_2773_, v___x_2776_);
lean_inc_ref_n(v_e_x27_2767_, 2);
lean_inc_ref(v_e_2729_);
lean_inc_ref(v_00_u03b1_2743_);
lean_inc_ref(v___x_2777_);
v___x_2778_ = l_Lean_mkApp6(v___x_2777_, v_00_u03b1_2743_, v_e_2729_, v_e_2745_, v_e_x27_2767_, v_h_2746_, v_proof_2768_);
v___x_2779_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(v_e_x27_2767_, v_varDeps_2747_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2800_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2800_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2800_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; lean_object* v___x_2794_; 
v___x_2784_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1));
lean_inc_ref(v___x_2776_);
v___x_2785_ = l_Lean_mkConst(v___x_2784_, v___x_2776_);
lean_inc_n(v_a_2780_, 2);
lean_inc_ref_n(v_e_x27_2767_, 2);
lean_inc_ref_n(v_00_u03b1_2743_, 3);
v___x_2786_ = l_Lean_mkApp3(v___x_2785_, v_00_u03b1_2743_, v_e_x27_2767_, v_a_2780_);
v___x_2787_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_2788_ = l_Lean_mkConst(v___x_2787_, v___x_2776_);
v___x_2789_ = l_Lean_mkAppB(v___x_2788_, v_00_u03b1_2743_, v_e_x27_2767_);
v___x_2790_ = l_Lean_Meta_mkExpectedPropHint(v___x_2789_, v___x_2786_);
v___x_2791_ = l_Lean_mkApp6(v___x_2777_, v_00_u03b1_2743_, v_e_2729_, v_e_x27_2767_, v_a_2780_, v___x_2778_, v___x_2790_);
v___x_2792_ = 0;
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 1, v___x_2791_);
lean_ctor_set(v___x_2771_, 0, v_a_2780_);
v___x_2794_ = v___x_2771_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2780_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v___x_2791_);
lean_ctor_set_uint8(v_reuseFailAlloc_2799_, sizeof(void*)*2 + 1, v_contextDependent_2769_);
v___x_2794_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; lean_object* v___x_2797_; 
lean_ctor_set_uint8(v___x_2794_, sizeof(void*)*2, v___x_2792_);
v___x_2795_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
lean_ctor_set(v___x_2795_, 1, v_00_u03b1_2743_);
lean_ctor_set(v___x_2795_, 2, v_u_2744_);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2795_);
v___x_2797_ = v___x_2782_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v___x_2795_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
lean_dec_ref(v___x_2778_);
lean_dec_ref(v___x_2777_);
lean_dec_ref(v___x_2776_);
lean_del_object(v___x_2771_);
lean_dec_ref(v_e_x27_2767_);
lean_dec(v_u_2744_);
lean_dec_ref(v_00_u03b1_2743_);
lean_dec_ref(v_e_2729_);
v_a_2801_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2779_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2779_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
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
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_del_object(v___x_2754_);
lean_dec_ref(v_varDeps_2747_);
lean_dec_ref(v_h_2746_);
lean_dec_ref(v_e_2745_);
lean_dec(v_u_2744_);
lean_dec_ref(v_00_u03b1_2743_);
lean_dec_ref(v_e_2729_);
v_a_2812_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2756_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2756_);
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
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec_ref(v_fType_2748_);
lean_dec_ref(v_varDeps_2747_);
lean_dec_ref(v_h_2746_);
lean_dec_ref(v_e_2745_);
lean_dec(v_u_2744_);
lean_dec_ref(v_00_u03b1_2743_);
lean_dec_ref(v_simpBody_2730_);
lean_dec_ref(v_e_2729_);
v_a_2821_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2749_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2749_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
else
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
lean_dec_ref(v_simpBody_2730_);
lean_dec_ref(v_e_2729_);
v_a_2829_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2831_ = v___x_2741_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2741_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___boxed(lean_object* v_e_2837_, lean_object* v_simpBody_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(v_e_2837_, v_simpBody_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v_a_2846_, v_a_2847_);
lean_dec(v_a_2847_);
lean_dec_ref(v_a_2846_);
lean_dec(v_a_2845_);
lean_dec_ref(v_a_2844_);
lean_dec(v_a_2843_);
lean_dec_ref(v_a_2842_);
lean_dec(v_a_2841_);
lean_dec_ref(v_a_2840_);
lean_dec(v_a_2839_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave(lean_object* v_e_2850_, lean_object* v_simpBody_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_){
_start:
{
lean_object* v___x_2862_; 
v___x_2862_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(v_e_2850_, v_simpBody_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2871_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2865_ = v___x_2862_;
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v___x_2862_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v_result_2867_; lean_object* v___x_2869_; 
v_result_2867_ = lean_ctor_get(v_a_2863_, 0);
lean_inc_ref(v_result_2867_);
lean_dec(v_a_2863_);
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 0, v_result_2867_);
v___x_2869_ = v___x_2865_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_result_2867_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
v_a_2872_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2862_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2862_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave___boxed(lean_object* v_e_2880_, lean_object* v_simpBody_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Lean_Meta_Sym_Simp_simpHave(v_e_2880_, v_simpBody_2881_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_, v_a_2890_);
lean_dec(v_a_2890_);
lean_dec_ref(v_a_2889_);
lean_dec(v_a_2888_);
lean_dec_ref(v_a_2887_);
lean_dec(v_a_2886_);
lean_dec_ref(v_a_2885_);
lean_dec(v_a_2884_);
lean_dec_ref(v_a_2883_);
lean_dec(v_a_2882_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(lean_object* v_e_u2081_2893_, lean_object* v_simpBody_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_){
_start:
{
lean_object* v___x_2905_; 
lean_inc_ref(v_e_u2081_2893_);
v___x_2905_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(v_e_u2081_2893_, v_simpBody_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_, v_a_2899_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v_result_2907_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2905_, 1);
v_result_2907_ = lean_ctor_get(v_a_2906_, 0);
lean_inc_ref(v_result_2907_);
if (lean_obj_tag(v_result_2907_) == 0)
{
lean_object* v_00_u03b1_2908_; lean_object* v_u_2909_; uint8_t v_contextDependent_2910_; lean_object* v___x_2911_; 
v_00_u03b1_2908_ = lean_ctor_get(v_a_2906_, 1);
lean_inc_ref(v_00_u03b1_2908_);
v_u_2909_ = lean_ctor_get(v_a_2906_, 2);
lean_inc(v_u_2909_);
lean_dec(v_a_2906_);
v_contextDependent_2910_ = lean_ctor_get_uint8(v_result_2907_, 1);
lean_dec_ref_known(v_result_2907_, 0);
lean_inc_ref(v_e_u2081_2893_);
v___x_2911_ = l_Lean_Meta_zetaUnused(v_e_u2081_2893_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2932_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2914_ = v___x_2911_;
v_isShared_2915_ = v_isSharedCheck_2932_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2911_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2932_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
size_t v___x_2916_; size_t v___x_2917_; uint8_t v___x_2918_; 
v___x_2916_ = lean_ptr_addr(v_e_u2081_2893_);
lean_dec_ref(v_e_u2081_2893_);
v___x_2917_ = lean_ptr_addr(v_a_2912_);
v___x_2918_ = lean_usize_dec_eq(v___x_2916_, v___x_2917_);
if (v___x_2918_ == 0)
{
lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2926_; 
v___x_2919_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_2920_ = lean_box(0);
v___x_2921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2921_, 0, v_u_2909_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
v___x_2922_ = l_Lean_mkConst(v___x_2919_, v___x_2921_);
lean_inc(v_a_2912_);
v___x_2923_ = l_Lean_mkAppB(v___x_2922_, v_00_u03b1_2908_, v_a_2912_);
v___x_2924_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2924_, 0, v_a_2912_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*2, v___x_2918_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*2 + 1, v_contextDependent_2910_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v___x_2924_);
v___x_2926_ = v___x_2914_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v___x_2924_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
else
{
lean_object* v___x_2928_; lean_object* v___x_2930_; 
lean_dec(v_a_2912_);
lean_dec(v_u_2909_);
lean_dec_ref(v_00_u03b1_2908_);
v___x_2928_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_2910_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v___x_2928_);
v___x_2930_ = v___x_2914_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
else
{
lean_object* v_a_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2940_; 
lean_dec(v_u_2909_);
lean_dec_ref(v_00_u03b1_2908_);
lean_dec_ref(v_e_u2081_2893_);
v_a_2933_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2935_ = v___x_2911_;
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_a_2933_);
lean_dec(v___x_2911_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2938_; 
if (v_isShared_2936_ == 0)
{
v___x_2938_ = v___x_2935_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2933_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
}
else
{
lean_object* v_00_u03b1_2941_; lean_object* v_u_2942_; lean_object* v_e_x27_2943_; lean_object* v_proof_2944_; uint8_t v_contextDependent_2945_; lean_object* v___x_2946_; 
v_00_u03b1_2941_ = lean_ctor_get(v_a_2906_, 1);
lean_inc_ref(v_00_u03b1_2941_);
v_u_2942_ = lean_ctor_get(v_a_2906_, 2);
lean_inc(v_u_2942_);
lean_dec(v_a_2906_);
v_e_x27_2943_ = lean_ctor_get(v_result_2907_, 0);
v_proof_2944_ = lean_ctor_get(v_result_2907_, 1);
v_contextDependent_2945_ = lean_ctor_get_uint8(v_result_2907_, sizeof(void*)*2 + 1);
lean_inc_ref(v_e_x27_2943_);
v___x_2946_ = l_Lean_Meta_zetaUnused(v_e_x27_2943_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2977_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2949_ = v___x_2946_;
v_isShared_2950_ = v_isSharedCheck_2977_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v___x_2946_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2977_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
size_t v___x_2951_; size_t v___x_2952_; uint8_t v___x_2953_; 
v___x_2951_ = lean_ptr_addr(v_e_x27_2943_);
v___x_2952_ = lean_ptr_addr(v_a_2947_);
v___x_2953_ = lean_usize_dec_eq(v___x_2951_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2971_; 
lean_inc_ref(v_proof_2944_);
lean_inc_ref(v_e_x27_2943_);
v_isSharedCheck_2971_ = !lean_is_exclusive(v_result_2907_);
if (v_isSharedCheck_2971_ == 0)
{
lean_object* v_unused_2972_; lean_object* v_unused_2973_; 
v_unused_2972_ = lean_ctor_get(v_result_2907_, 1);
lean_dec(v_unused_2972_);
v_unused_2973_ = lean_ctor_get(v_result_2907_, 0);
lean_dec(v_unused_2973_);
v___x_2955_ = v_result_2907_;
v_isShared_2956_ = v_isSharedCheck_2971_;
goto v_resetjp_2954_;
}
else
{
lean_dec(v_result_2907_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2971_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2966_; 
v___x_2957_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1));
v___x_2958_ = lean_box(0);
v___x_2959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2959_, 0, v_u_2942_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
lean_inc_ref(v___x_2959_);
v___x_2960_ = l_Lean_mkConst(v___x_2957_, v___x_2959_);
v___x_2961_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_2962_ = l_Lean_mkConst(v___x_2961_, v___x_2959_);
lean_inc_n(v_a_2947_, 2);
lean_inc_ref(v_00_u03b1_2941_);
v___x_2963_ = l_Lean_mkAppB(v___x_2962_, v_00_u03b1_2941_, v_a_2947_);
v___x_2964_ = l_Lean_mkApp6(v___x_2960_, v_00_u03b1_2941_, v_e_u2081_2893_, v_e_x27_2943_, v_a_2947_, v_proof_2944_, v___x_2963_);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_2964_);
lean_ctor_set(v___x_2955_, 0, v_a_2947_);
v___x_2966_ = v___x_2955_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2947_);
lean_ctor_set(v_reuseFailAlloc_2970_, 1, v___x_2964_);
lean_ctor_set_uint8(v_reuseFailAlloc_2970_, sizeof(void*)*2 + 1, v_contextDependent_2945_);
v___x_2966_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
lean_object* v___x_2968_; 
lean_ctor_set_uint8(v___x_2966_, sizeof(void*)*2, v___x_2953_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v___x_2966_);
v___x_2968_ = v___x_2949_;
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
lean_object* v___x_2975_; 
lean_dec(v_a_2947_);
lean_dec(v_u_2942_);
lean_dec_ref(v_00_u03b1_2941_);
lean_dec_ref(v_e_u2081_2893_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v_result_2907_);
v___x_2975_ = v___x_2949_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_result_2907_);
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
lean_dec(v_u_2942_);
lean_dec_ref(v_00_u03b1_2941_);
lean_dec_ref_known(v_result_2907_, 2);
lean_dec_ref(v_e_u2081_2893_);
v_a_2978_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2946_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2946_);
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
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec_ref(v_e_u2081_2893_);
v_a_2986_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2905_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2905_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused___boxed(lean_object* v_e_u2081_2994_, lean_object* v_simpBody_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(v_e_u2081_2994_, v_simpBody_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_, v_a_3003_, v_a_3004_);
lean_dec(v_a_3004_);
lean_dec_ref(v_a_3003_);
lean_dec(v_a_3002_);
lean_dec_ref(v_a_3001_);
lean_dec(v_a_3000_);
lean_dec_ref(v_a_2999_);
lean_dec(v_a_2998_);
lean_dec_ref(v_a_2997_);
lean_dec(v_a_2996_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27(lean_object* v_simpBody_3007_, lean_object* v_e_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_){
_start:
{
uint8_t v___x_3019_; 
v___x_3019_ = l_Lean_Expr_letNondep_x21(v_e_3008_);
if (v___x_3019_ == 0)
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
lean_dec_ref(v_e_3008_);
lean_dec_ref(v_simpBody_3007_);
v___x_3020_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3020_, 0, v___x_3019_);
lean_ctor_set_uint8(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
return v___x_3021_;
}
else
{
lean_object* v___x_3022_; 
v___x_3022_ = l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(v_e_3008_, v_simpBody_3007_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_);
return v___x_3022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27___boxed(lean_object* v_simpBody_3023_, lean_object* v_e_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_Meta_Sym_Simp_simpLet_x27(v_simpBody_3023_, v_e_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
lean_dec(v_a_3033_);
lean_dec_ref(v_a_3032_);
lean_dec(v_a_3031_);
lean_dec_ref(v_a_3030_);
lean_dec(v_a_3029_);
lean_dec_ref(v_a_3028_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
lean_dec(v_a_3025_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet(lean_object* v_e_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpLet___closed__0));
v___x_3049_ = l_Lean_Meta_Sym_Simp_simpLet_x27(v___x_3048_, v_e_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_, v_a_3046_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet___boxed(lean_object* v_e_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_Lean_Meta_Sym_Simp_simpLet(v_e_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_);
lean_dec(v_a_3059_);
lean_dec_ref(v_a_3058_);
lean_dec(v_a_3057_);
lean_dec_ref(v_a_3056_);
lean_dec(v_a_3055_);
lean_dec_ref(v_a_3054_);
lean_dec(v_a_3053_);
lean_dec_ref(v_a_3052_);
lean_dec(v_a_3051_);
return v_res_3061_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Lambda(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HaveTelescope(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_Lambda(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default);
l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult = _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_Lambda(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_HaveTelescope(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_Lambda(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Have(builtin);
}
#ifdef __cplusplus
}
#endif
